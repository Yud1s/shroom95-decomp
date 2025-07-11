#include "regen.hpp"
// ShopDlg.ipp
#include "ShopDlg.hpp"

// CShopDlg::ITEM::~ITEM
_SUB_EXCEPTION_HANDLER(2E53F0)
__SUB_CLASS_THIS0(002E53F0, __thiscall, 133405,  CShopDlg::ITEM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E53F0
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
	mov eax,dword ptr [esi+0x48]
	mov dword ptr [esp+0x14],2
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0x48]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0x48]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0x48],0

 Block5:
	mov eax,dword ptr [esi+0x14]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov ecx,dword ptr [esi+0x10]
	test ecx,ecx
	je Block9

 Block8:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x10],0

 Block9:
	mov esi,dword ptr [esi+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block11

 Block10:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block11:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CShopDlg::GetDiscountPriceByGuildSkill
_SUB_EXCEPTION_HANDLER(2E47B0)
__SUB_CLASS_THIS(002E47B0, __thiscall, 133387,  CShopDlg, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E47B0
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
	mov dword ptr [esp+0x14],0
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test eax,eax
	je Block14

 Block1:
	lea esi,[eax+8]
	test esi,esi
	je Block15

 Block2:
	add esi,0xFFFFFFF8
	mov dword ptr [esp+0x1C],esi
	test esi,esi
	je Block4

 Block3:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x3C],0
	call CUserLocal::GetPassiveSkillData
	cmp dword ptr [eax+4],0
	mov byte ptr [esp+0x38],1
	mov ebx,1
	je Block6

 Block5:
	lea edx,[esp+0x20]
	push edx
	mov ecx,esi
	call CUserLocal::GetPassiveSkillData
	mov eax,dword ptr [eax+4]
	cmp dword ptr [eax+0x70],0
	mov ebx,3
	mov byte ptr [esp+0x13],0
	jg Block7

 Block6:
	mov byte ptr [esp+0x13],1

 Block7:
	test bl,2
	je Block9

 Block8:
	and ebx,0xFFFFFFFD
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x14],ebx
	call ZRef<PassiveSkillData>::~ZRef<PassiveSkillData>

 Block9:
	mov dword ptr [esp+0x38],0
	test bl,1
	je Block11

 Block10:
	lea ecx,[esp+0x28]
	call ZRef<PassiveSkillData>::~ZRef<PassiveSkillData>

 Block11:
	cmp byte ptr [esp+0x13],0
	je Block16

 Block12:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test esi,esi
	je Block14

 Block13:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CUserLocal>::_ReleaseRaw

 Block14:
	xor eax,eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x2C
	ret 4

 Block15:
	xor esi,esi
	mov dword ptr [esp+0x1C],esi
	jmp Block4

 Block16:
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call CUserLocal::GetPassiveSkillData
	mov eax,dword ptr [eax+4]
	mov ecx,0x64
	sub ecx,dword ptr [eax+0x70]
	mov dword ptr [esp+0x14],ecx
	fild dword ptr [esp+0x14]
	lea ecx,[esp+0x28]
	fimul dword ptr [esp+0x40]
	fdiv qword ptr [__real_4059000000000000]
	fstp qword ptr [esp+0x20]
	call ZRef<PassiveSkillData>::~ZRef<PassiveSkillData>
	fld qword ptr [esp+0x20]
	fld qword ptr [__real_4024000000000000]
	fmul st,st(1)
	call __ftol2_sse
	cdq
	mov ecx,0xA
	idiv ecx
	cmp edx,5
	jl Block18

 Block17:
	fadd qword ptr [__real_3ff0000000000000]

 Block18:
	call __ftol2_sse
	mov ecx,dword ptr [esp+0x40]
	cmp ecx,eax
	mov edi,ecx
	jl Block20

 Block19:
	mov edi,eax

 Block20:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test esi,esi
	je Block22

 Block21:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CUserLocal>::_ReleaseRaw

 Block22:
	mov eax,edi
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x2C
	ret 4
}
}
// CShopDlg::ITEM::operator=
__SUB_CLASS_THIS(002E54B0, __thiscall, 133408,  CShopDlg::ITEM, CShopDlg::ITEM&, CShopDlg::ITEM&) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	mov ecx,esi
	call TSecType<long>::SetData
	mov eax,dword ptr [edi+0xC]
	lea ebp,[edi+0x10]
	lea ebx,[esi+0x10]
	mov dword ptr [esi+0xC],eax
	cmp ebx,ebp
	je Block5

 Block1:
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	je Block3

 Block2:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebx],0

 Block3:
	mov eax,dword ptr [ebp]
	mov dword ptr [ebx],eax
	test eax,eax
	je Block5

 Block4:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov eax,dword ptr [edi+0x14]
	mov ebx,dword ptr [esi+0x14]
	cmp ebx,eax
	je Block10

 Block6:
	mov dword ptr [esi+0x14],eax
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	test ebx,ebx
	je Block10

 Block9:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block10:
	mov edx,dword ptr [edi+0x18]
	mov dword ptr [esi+0x18],edx
	mov eax,dword ptr [edi+0x1C]
	mov dword ptr [esi+0x1C],eax
	mov ecx,dword ptr [edi+0x20]
	mov dword ptr [esi+0x20],ecx
	mov edx,dword ptr [edi+0x24]
	mov dword ptr [esi+0x24],edx
	mov eax,dword ptr [edi+0x28]
	mov dword ptr [esi+0x28],eax
	mov ecx,dword ptr [edi+0x2C]
	mov dword ptr [esi+0x2C],ecx
	fld qword ptr [edi+0x30]
	fstp qword ptr [esi+0x30]
	mov edx,dword ptr [edi+0x38]
	mov dword ptr [esi+0x38],edx
	mov eax,dword ptr [edi+0x3C]
	mov dword ptr [esi+0x3C],eax
	mov ecx,dword ptr [edi+0x40]
	mov dword ptr [esi+0x40],ecx
	add edi,0x44
	push edi
	lea ecx,[esi+0x44]
	call ZRef<GW_ItemSlotBase>::op_assign_copy
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// CShopDlg::SetSellItems
_SUB_EXCEPTION_HANDLER(2E9790)
__SUB_CLASS_THIS(002E9790, __thiscall, 133379,  CShopDlg, void, long, ZArray<CShopDlg::ITEM>&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E9790
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x34],ecx
	cmp dword ptr [ebp+8],0
	jne Block8

 Block1:
	mov eax,dword ptr [ecx+0xB8]
	mov eax,dword ptr [eax+0x44]
	inc eax
	lea ecx,[eax-1]
	cmp ecx,4
	ja Block7

 Block2:
	cmp eax,3
	jne Block4

 Block3:
	mov eax,4
	mov dword ptr [ebp+8],eax
	jmp Block8

 Block4:
	cmp eax,4
	jne Block6

 Block5:
	mov eax,3

 Block6:
	mov dword ptr [ebp+8],eax
	jmp Block8

 Block7:
	mov dword ptr [ebp+8],0xFFFFFFFF

 Block8:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[ebp-0x48]
	push edx
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [ebp-0x44]
	mov dword ptr [ebp-0x28],esi
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
	mov dword ptr [ebp-0x44],0

 Block13:
	mov ecx,dword ptr [ebp+0xC]
	call ZArray<CShopDlg::ITEM>::RemoveAll
	mov ebx,dword ptr [ebp+8]
	mov edi,1
	push ebx
	mov ecx,esi
	mov dword ptr [ebp-0x18],edi
	call CharacterData::GetItemSlotCount
	cmp eax,edi
	jl Block56

 Block14:
	push edi
	push ebx
	lea eax,[ebp-0x30]
	push eax
	mov ecx,esi
	call CharacterData::GetItem
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [ebp-0x2C]
	mov dword ptr [ebp-0x24],ebx
	test eax,eax
	je Block19

 Block15:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block18

 Block16:
	mov ecx,dword ptr [ebp-0x2C]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp-0x2C]
	test ecx,ecx
	je Block18

 Block17:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block18:
	mov dword ptr [ebp-0x2C],0

 Block19:
	test ebx,ebx
	je Block55

 Block20:
	lea edi,[ebx+0xC]
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsQuestItem
	test eax,eax
	jne Block55

 Block21:
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsNotSaleItem
	test eax,eax
	jne Block55

 Block22:
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	jne Block55

 Block23:
	mov ecx,dword ptr [ebx+0x18]
	or ecx,dword ptr [ebx+0x1C]
	jne Block55

 Block24:
	mov ecx,dword ptr [ebp+0xC]
	push 0xFFFFFFFF
	call ZArray<CShopDlg::ITEM>::InsertBefore
	mov ecx,edi
	mov esi,eax
	call TSecType<long>::GetData
	push eax
	mov ecx,esi
	call TSecType<long>::SetData
	mov edx,dword ptr [ebp-0x18]
	mov ecx,esi
	mov dword ptr [esi+0xC],edx
	call TSecType<long>::GetData
	lea ecx,[ebp-0x50]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edi,[esi+0x18]
	push edi
	push eax
	call CItemInfo::GetItemPrice
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0x20]
	mov ecx,ebx
	call eax
	fldz
	fstp qword ptr [esi+0x30]
	mov dword ptr [ebp-0x14],eax
	fild dword ptr [ebp-0x14]
	mov dword ptr [esi+0x3C],eax
	sub esp,8
	fmul qword ptr [ebp-0x50]
	fstp qword ptr [esp]
	call _ceil
	fiadd dword ptr [edi]
	add esp,8
	call __ftol2_sse
	mov ecx,esi
	mov dword ptr [edi],eax
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xCF
	je Block26

 Block25:
	cmp eax,0xE9
	jne Block33

 Block26:
	xor eax,eax
	mov dword ptr [ebp-0x1C],eax
	mov dword ptr [ebp-0x14],eax
	jmp Block28

 Block28:
	mov ecx,dword ptr [ebp-0x34]
	mov eax,dword ptr [ecx+0xE4]
	test eax,eax
	je Block33

 Block29:
	mov edx,dword ptr [ebp-0x1C]
	cmp edx,dword ptr [eax-4]
	jae Block33

 Block30:
	mov edi,eax
	add edi,dword ptr [ebp-0x14]
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,esi
	mov ebx,eax
	call TSecType<long>::GetData
	cmp ebx,eax
	mov ebx,dword ptr [ebp-0x24]
	je Block32

 Block31:
	inc dword ptr [ebp-0x1C]
	add dword ptr [ebp-0x14],0x50
	jmp Block28

 Block32:
	mov eax,dword ptr [edi+0x38]
	sub eax,dword ptr [esi+0x3C]
	mov dword ptr [ebp-0x14],eax
	fild dword ptr [ebp-0x14]
	fmul qword ptr [edi+0x30]
	fstp qword ptr [esi+0x30]

 Block33:
	lea ecx,[ebx+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edi,dword ptr [esi+0x48]
	mov dword ptr [esi+0x48],ebx
	test edi,edi
	je Block36

 Block34:
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block36

 Block35:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block36:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	lea ecx,[ebp-0x3C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov dword ptr [ebp-4],0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,esi
	mov edi,esp
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[ebp-0x38]
	push edx
	call CItemInfo::GetItemName
	mov eax,dword ptr [eax]
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],1
	call MultiByteToWideChar
	push edi
	lea ecx,[ebp-0x20]
	call _xbstr_t::_ctor_1
	mov ebx,dword ptr [ebp-0x20]
	lea edi,[esi+0x10]
	lea eax,[ebp-0x20]
	cmp edi,eax
	je Block41

 Block37:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block39

 Block38:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],0

 Block39:
	mov dword ptr [edi],ebx
	test ebx,ebx
	je Block43

 Block40:
	lea ecx,[ebx+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block41:
	test ebx,ebx
	je Block43

 Block42:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp-0x20],0

 Block43:
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block45:
	mov eax,dword ptr [ebp-0x3C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push 0
	push 1
	push eax
	lea edx,[ebp-0x40]
	push edx
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x14]
	cmp edi,eax
	je Block52

 Block48:
	mov dword ptr [esi+0x14],eax
	test eax,eax
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block50:
	test edi,edi
	je Block52

 Block51:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block52:
	mov eax,dword ptr [ebp-0x40]
	test eax,eax
	je Block54

 Block53:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block54:
	mov esi,dword ptr [ebp-0x28]

 Block55:
	mov edi,dword ptr [ebp-0x18]
	mov ebx,dword ptr [ebp+8]
	inc edi
	push ebx
	mov ecx,esi
	mov dword ptr [ebp-0x18],edi
	call CharacterData::GetItemSlotCount
	cmp edi,eax
	jle Block14

 Block56:
	lea esp,[ebp-0x60]
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
// CShopDlg::GetDiscountPrice
__SUB_CLASS_THIS(002E5120, __thiscall, 133386,  CShopDlg, long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	push eax
	push ebx
	mov edi,ecx
	call CShopDlg::GetDiscountPriceByItem
	push ebx
	mov ecx,edi
	mov esi,eax
	call CShopDlg::GetDiscountPriceByGuildSkill
	cmp esi,ebx
	jge Block2

 Block1:
	test esi,esi
	jge Block3

 Block2:
	xor esi,esi

 Block3:
	cmp eax,ebx
	jge Block5

 Block4:
	test eax,eax
	jge Block6

 Block5:
	xor eax,eax

 Block6:
	xor ecx,ecx
	test esi,esi
	je Block10

 Block7:
	test eax,eax
	je Block9

 Block8:
	cmp esi,eax
	jge Block12

 Block9:
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	ret 8

 Block10:
	test eax,eax
	jne Block12

 Block11:
	mov eax,ecx

 Block12:
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CShopDlg::SendSellRequest
_SUB_EXCEPTION_HANDLER(2E7260)
__SUB_CLASS_THIS0(002E7260, __thiscall, 133362,  CShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E7260
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
	mov dword ptr [esp+0x20],ecx
	mov esi,dword ptr [ecx+0x104]
	xor edi,edi
	cmp esi,edi
	mov dword ptr [esp+0x2C],edi
	jl Block29

 Block1:
	mov eax,dword ptr [ecx+0xE8]
	cmp eax,edi
	jne Block3

 Block2:
	xor eax,eax
	jmp Block4

 Block3:
	mov eax,dword ptr [eax-4]

 Block4:
	cmp esi,eax
	jae Block29

 Block5:
	cmp dword ptr [ecx+0x10C],edi
	jne Block29

 Block6:
	lea esi,[esi+esi*4]
	shl esi,4
	add esi,dword ptr [ecx+0xE8]
	mov ebp,dword ptr [esi+0x48]
	mov dword ptr [esp+0x34],ebp
	cmp ebp,edi
	je Block8

 Block7:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	mov ecx,esi
	mov dword ptr [esp+0x58],edi
	call TSecType<long>::GetData
	mov edx,dword ptr [esi+0xC]
	mov esi,dword ptr [esi+0x3C]
	mov ecx,eax
	mov dword ptr [esp+0x18],edx
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	mov dword ptr [esp+0x1C],ecx
	mov ebx,1
	test ebp,ebp
	je Block12

 Block9:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+4]
	mov ecx,ebp
	call edx
	test eax,eax
	je Block11

 Block10:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0xD78
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block28

 Block11:
	mov ecx,dword ptr [esp+0x1C]

 Block12:
	push ecx
	call is_treat_singly_0
	add esp,4
	test eax,eax
	je Block15

 Block13:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x363
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	je Block19

 Block14:
	jmp Block28

 Block15:
	lea edx,[esp+0x24]
	push 0x364
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x20]
	push esi
	push esi
	push eax
	mov byte ptr [esp+0x64],1
	call CShopDlg::AskItemCount
	mov ebx,eax
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x58],0
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	test ebx,ebx
	jle Block28

 Block18:
	cmp ebx,esi
	jg Block28

 Block19:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x24]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x24]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	test ebp,ebp
	je Block22

 Block20:
	mov ecx,dword ptr [esp+0x18]
	push ecx
	push edi
	lea edx,[esp+0x40]
	push edx
	mov ecx,esi
	call CharacterData::GetItem
	mov ecx,1
	cmp dword ptr [eax+4],ebp
	jne Block23

 Block21:
	mov byte ptr [esp+0x17],0
	jmp Block24

 Block22:
	mov cl,byte ptr [esp+0x2C]

 Block23:
	mov byte ptr [esp+0x17],1

 Block24:
	test cl,1
	je Block26

 Block25:
	lea ecx,[esp+0x38]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>

 Block26:
	cmp byte ptr [esp+0x17],0
	jne Block28

 Block27:
	push 0x42
	lea ecx,[esp+0x44]
	call COutPacket::_ctor_1
	push 1
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0x5C],2
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x18]
	push eax
	lea ecx,[esp+0x44]
	call COutPacket::Encode2
	mov ecx,dword ptr [esp+0x1C]
	push ecx
	lea ecx,[esp+0x44]
	call COutPacket::Encode4
	push ebx
	lea ecx,[esp+0x44]
	call COutPacket::Encode2
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x40]
	push edx
	call CClientSocket::SendPacket
	mov eax,dword ptr [esp+0x20]
	lea ecx,[esp+0x44]
	mov dword ptr [eax+0x10C],1
	mov byte ptr [esp+0x58],0
	call ZArray<unsigned char>::RemoveAll

 Block28:
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>

 Block29:
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
// CShopDlg::OnMouseMove
_SUB_EXCEPTION_HANDLER(2E4C40)
__SUB_CLASS_THIS(002E4C40, __thiscall, 133369,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E4C40
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
	mov esi,ecx
	mov edx,dword ptr [esp+0x48]
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [esp+0x48]
	lea ecx,[esp+0x1C]
	push ecx
	push edx
	lea edi,[esi-4]
	push eax
	mov ecx,edi
	call CShopDlg::GetItemIndexFromPoint
	test eax,eax
	jne Block2

 Block1:
	lea ecx,[esi+0x128]
	call CUIToolTip::ClearToolTip
	xor eax,eax
	jmp Block18

 Block2:
	mov edx,dword ptr [esp+0x18]
	test edx,edx
	je Block6

 Block3:
	mov eax,dword ptr [edi+0xB0]
	cmp dword ptr [eax+0x44],0
	lea eax,[edi+0xDC]
	jne Block5

 Block4:
	lea eax,[edi+0xD8]

 Block5:
	mov dword ptr [esp+0x14],eax
	jmp Block7

 Block6:
	lea ecx,[esi+0xE4]
	mov dword ptr [esp+0x14],ecx

 Block7:
	mov edi,dword ptr [esp+0x20]
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax]
	lea edi,[edi+edi*4]
	shl edi,4
	mov eax,dword ptr [ecx+edi+0x28]
	add ecx,edi
	mov dword ptr [esp+0x18],0
	test eax,eax
	je Block10

 Block8:
	test edx,edx
	je Block10

 Block9:
	mov dword ptr [esp+0x18],eax

 Block10:
	call TSecType<long>::GetData
	mov ebx,eax
	mov eax,0x431BDE83
	imul ebx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	sub eax,1
	jne Block16

 Block11:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x2C]
	push edx
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	lea ecx,[esp+0x2C]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	movzx ecx,byte ptr [ebp+0x11]
	push 0
	lea eax,[esp+0x20]
	push eax
	push ecx
	push ebx
	call get_bodypart_from_item
	mov edx,dword ptr [esp+0x2C]
	add esp,0x10
	neg edx
	push edx
	push 1
	lea eax,[esp+0x2C]
	push eax
	mov ecx,ebp
	call CharacterData::GetItem
	mov ebp,dword ptr [esp+0x28]
	mov dword ptr [esp+0x3C],0
	test ebp,ebp
	je Block15

 Block12:
	cmp dword ptr [esp+0x1C],5
	jne Block14

 Block13:
	lea ecx,[ebp+0xC]
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	xor eax,eax
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x69
	sete al
	xor ecx,ecx
	mov dword ptr [esp+0x20],eax
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x69
	mov eax,dword ptr [esp+0x20]
	sete cl
	cmp eax,ecx
	jne Block15

 Block14:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esi]
	push 0
	push ecx
	add eax,edi
	mov eax,dword ptr [eax+0x48]
	push 0
	push eax
	mov eax,dword ptr [edx+0x30]
	push ebp
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x5C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	add eax,dword ptr [esp+0x5C]
	lea ecx,[esi+0x128]
	push eax
	call CUIToolTip::SetToolTip_Equip2
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	jmp Block17

 Block15:
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>

 Block16:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax]
	mov edi,dword ptr [ecx+edi+0x48]
	mov eax,dword ptr [esi]
	push 0
	push edx
	mov edx,dword ptr [eax+0x30]
	push 0
	push 0
	push 0
	push edi
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x60]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	add eax,dword ptr [esp+0x60]
	lea ecx,[esi+0x128]
	push eax
	call CUIToolTip::ShowItemToolTip

 Block17:
	mov eax,1

 Block18:
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
// CShopDlg::HitTest
__SUB_CLASS_THIS(002E38E0, __thiscall, 133366,  CShopDlg, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [esp+0x10]
	push edi
	mov edi,dword ptr [esp+0x10]
	push esi
	push edi
	push eax
	call CWnd::HitTest
	test eax,eax
	je Block4

 Block1:
	test esi,esi
	je Block3

 Block2:
	cmp dword ptr [esi],0
	jne Block4

 Block3:
	xor eax,eax
	cmp edi,0x40
	setge al
	inc eax

 Block4:
	pop edi
	pop esi
	ret 0xC
}
}
// CShopDlg::ClearToolTip
__SUB_CLASS_THIS0(002EA800, __thiscall, 133374,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0x128
	jmp  CUIToolTip::ClearToolTip
}
}
// CShopDlg::SetScrollBar
__SUB_CLASS_THIS0(002E3B60, __thiscall, 133362,  CShopDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xB0]
	cmp dword ptr [eax+0x44],0
	lea ecx,[esi+0xDC]
	jne Block2

 Block1:
	lea ecx,[esi+0xD8]

 Block2:
	mov eax,dword ptr [esi+0xD8]
	test eax,eax
	je Block7

 Block3:
	cmp dword ptr [eax-4],5
	jbe Block7

 Block4:
	mov eax,dword ptr [ecx]
	test eax,eax
	jne Block6

 Block5:
	mov eax,0xFFFFFFFC
	jmp Block8

 Block6:
	mov eax,dword ptr [eax-4]
	add eax,0xFFFFFFFC
	jmp Block8

 Block7:
	xor eax,eax

 Block8:
	mov ecx,dword ptr [esi+0xC4]
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [esi+0xE8]
	test eax,eax
	je Block13

 Block9:
	cmp dword ptr [eax-4],5
	jbe Block13

 Block10:
	test eax,eax
	jne Block12

 Block11:
	mov ecx,dword ptr [esi+0xCC]
	mov eax,0xFFFFFFFC
	push eax
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret

 Block12:
	mov eax,dword ptr [eax-4]
	mov ecx,dword ptr [esi+0xCC]
	add eax,0xFFFFFFFC
	push eax
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret

 Block13:
	mov ecx,dword ptr [esi+0xCC]
	xor eax,eax
	push eax
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret
}
}
// CShopDlg::SetShopDlg
_SUB_EXCEPTION_HANDLER(2EAB00)
__SUB_CLASS_THIS(002EAB00, __thiscall, 133363,  CShopDlg, void, CInPacket&) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x44]
	sub esp,0x44
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2EAB00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB8
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x40],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp+0x30],esi
	mov ebx,dword ptr [ebp+0x4C]
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esi+0xD0],eax
	call CInPacket::Decode2
	movzx eax,ax
	mov dword ptr [ebp+0x3C],eax
	mov dword ptr [ebp+0x2C],0
	test eax,eax
	jle Block65

 Block1:
	lea eax,[ebp-0x54]
	sub eax,0x4000
	mov dword ptr [ebp-0x60],eax
	nop

 Block2:
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x54],eax
	call _rand
	mov esi,dword ptr [ebp-0x60]
	add eax,esi
	mov dword ptr [ebp-0x5C],eax
	call _rand
	mov cl,byte ptr [ebp-0x5C]
	add eax,esi
	mov dword ptr [ebp-0x58],eax
	mov eax,dword ptr [ebp-0x54]
	mov byte ptr [eax+5],cl
	mov al,byte ptr [ebp-0x58]
	mov edx,dword ptr [ebp-0x54]
	mov byte ptr [edx+6],al
	xor eax,eax
	push eax
	lea ecx,[ebp-0x5C]
	xor edi,edi
	call TSecType<long>::SetData
	mov dword ptr [ebp-0x4C],edi
	mov dword ptr [ebp-0x48],edi
	mov dword ptr [ebp-0x14],edi
	mov ecx,ebx
	mov dword ptr [ebp-4],edi
	call CInPacket::Decode4
	push eax
	lea ecx,[ebp-0x5C]
	call TSecType<long>::SetData
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp-0x44],eax
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [ebp-0x40],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp-0x3C],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp-0x38],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp-0x34],eax
	call CInPacket::Decode4
	fldz
	lea ecx,[ebp-0x5C]
	fstp qword ptr [ebp-0x2C]
	mov dword ptr [ebp-0x30],eax
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xCF
	je Block4

 Block3:
	cmp eax,0xE9
	jne Block5

 Block4:
	push 8
	lea edx,[ebp-0x2C]
	push edx
	mov ecx,ebx
	call CInPacket::DecodeBuffer
	jmp Block6

 Block5:
	mov ecx,ebx
	call CInPacket::Decode2
	cwde
	mov dword ptr [ebp-0x1C],eax

 Block6:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp-0x24],ecx
	lea ecx,[ebp-0x5C]
	mov dword ptr [ebp-0x20],edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[ebp+0x18]
	push edx
	call CItemInfo::GetItemSlot
	mov esi,eax
	mov eax,dword ptr [esi+4]
	mov byte ptr [ebp-4],1
	cmp eax,edi
	je Block8

 Block7:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	mov eax,dword ptr [ebp-0x14]
	cmp eax,edi
	je Block13

 Block9:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x14]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp-0x14]
	cmp ecx,edi
	je Block12

 Block11:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block12:
	mov dword ptr [ebp-0x14],edi

 Block13:
	mov esi,dword ptr [esi+4]
	mov eax,dword ptr [ebp+0x1C]
	xor ecx,ecx
	cmp esi,edi
	sete cl
	mov dword ptr [ebp-0x14],esi
	mov byte ptr [ebp-4],0
	mov esi,ecx
	cmp eax,edi
	je Block18

 Block14:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block17

 Block15:
	mov edx,dword ptr [ebp+0x1C]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x1C]
	cmp ecx,edi
	je Block17

 Block16:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block17:
	mov dword ptr [ebp+0x1C],edi

 Block18:
	cmp esi,edi
	jne Block69

 Block19:
	lea ecx,[ebp-0x5C]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[ebp+0x20]
	push eax
	call CItemInfo::GetItemName
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 0xFFFFFFFF
	push eax
	push edi
	push edi
	mov byte ptr [ebp-4],2
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	lea ecx,[ebp-0x5C]
	mov esi,esp
	call TSecType<long>::GetData
	push eax
	lea ecx,[ebp-0x64]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	mov eax,dword ptr [eax]
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push edi
	push edi
	mov byte ptr [ebp-4],3
	call MultiByteToWideChar
	push esi
	lea ecx,[ebp+0x38]
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x4C]
	cmp ecx,edi
	je Block21

 Block20:
	call _xbstr_t::Data_t::Release

 Block21:
	mov edi,dword ptr [ebp+0x38]
	mov dword ptr [ebp-0x4C],edi
	test edi,edi
	je Block29

 Block22:
	lea esi,[edi+8]
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block28

 Block23:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block25:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block27

 Block26:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block27:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block28:
	mov dword ptr [ebp+0x38],0

 Block29:
	mov eax,dword ptr [ebp-0x64]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	lea ecx,[ebp-0x5C]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push 0
	push 1
	push eax
	lea edx,[ebp+0x34]
	push edx
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebp-0x48]
	cmp ecx,eax
	je Block38

 Block34:
	mov esi,ecx
	mov dword ptr [ebp-0x48],eax
	test eax,eax
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block36:
	test esi,esi
	je Block38

 Block37:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block38:
	mov eax,dword ptr [ebp+0x34]
	test eax,eax
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block40:
	lea ecx,[ebp-0x5C]
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xCF
	je Block42

 Block41:
	cmp eax,0xE9
	jne Block43

 Block42:
	mov ecx,dword ptr [ebp+0x30]
	push 0xFFFFFFFF
	add ecx,0xE4
	call ZArray<CShopDlg::ITEM>::InsertBefore
	lea ecx,[ebp-0x5C]
	push ecx
	mov ecx,eax
	call CShopDlg::ITEM::operator=

 Block43:
	cmp dword ptr [ebp-0x44],0
	jne Block45

 Block44:
	cmp dword ptr [ebp-0x38],0
	je Block63

 Block45:
	mov ecx,dword ptr [ebp+0x30]
	add ecx,0xD8
	push 0xFFFFFFFF
	call ZArray<CShopDlg::ITEM>::InsertBefore
	lea edx,[ebp-0x5C]
	push edx
	mov ecx,eax
	call CShopDlg::ITEM::operator=
	lea ecx,[ebp-0x5C]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	mov edi,eax
	test edi,edi
	je Block63

 Block46:
	cmp dword ptr [ebp-0x38],0
	jne Block63

 Block47:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp+8]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [ebp+0xC]
	test eax,eax
	je Block52

 Block48:
	lea ebx,[eax-0x10]
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block51

 Block49:
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block51

 Block50:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block51:
	mov ebx,dword ptr [ebp+0x4C]
	mov dword ptr [ebp+0xC],0

 Block52:
	mov ecx,dword ptr [esi+0x35]
	push ecx
	lea edx,[esi+0x33]
	push edx
	call _ZtlSecureFuseHelper<unsigned char>::call
	mov ecx,dword ptr [esi+0x3D]
	movzx eax,al
	push ecx
	lea edx,[esi+0x39]
	push edx
	mov dword ptr [ebp+0x28],eax
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	cwde
	cdq
	mov ecx,0x3E8
	idiv ecx
	mov eax,0x51EB851F
	add esp,0x10
	imul edx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	je Block54

 Block53:
	lea ecx,[eax-1]
	mov eax,1
	shl eax,cl
	mov dword ptr [ebp+0x24],eax
	jmp Block55

 Block54:
	mov dword ptr [ebp+0x24],0

 Block55:
	mov edx,dword ptr [edi+0x68]
	lea eax,[edi+0x60]
	push edx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [ebp+0x28]
	sub ecx,eax
	add esp,8
	cmp ecx,5
	jg Block63

 Block56:
	mov edx,dword ptr [edi+0x68]
	push edx
	lea eax,[edi+0x60]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	sub eax,dword ptr [ebp+0x28]
	add esp,8
	cmp eax,5
	jg Block63

 Block57:
	mov ecx,dword ptr [edi+0x5C]
	lea eax,[edi+0x54]
	push ecx
	push eax
	mov dword ptr [ebp+0x28],eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block59

 Block58:
	mov edx,dword ptr [edi+0x5C]
	mov eax,dword ptr [ebp+0x28]
	push edx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [ebp+0x24]
	add esp,8
	test ecx,eax
	je Block63

 Block59:
	lea ecx,[ebp-0x5C]
	call TSecType<long>::GetData
	movzx edx,byte ptr [esi+0x11]
	push edx
	push eax
	call is_matched_itemid_gender
	add esp,8
	test eax,eax
	je Block63

 Block60:
	mov esi,dword ptr [ebp+0x30]
	push 0xFFFFFFFF
	lea ecx,[esi+0xDC]
	call ZArray<CShopDlg::ITEM>::InsertBefore
	lea ecx,[ebp-0x5C]
	push ecx
	mov ecx,eax
	call CShopDlg::ITEM::operator=
	mov eax,dword ptr [esi+0xD8]
	test eax,eax
	je Block62

 Block61:
	mov eax,dword ptr [eax-4]

 Block62:
	push 0xFFFFFFFF
	lea ecx,[esi+0xE0]
	lea edi,[eax-1]
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],edi

 Block63:
	lea ecx,[ebp-0x5C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call CShopDlg::ITEM::~ITEM
	mov eax,dword ptr [ebp+0x2C]
	inc eax
	cmp eax,dword ptr [ebp+0x3C]
	mov dword ptr [ebp+0x2C],eax
	jl Block2

 Block64:
	mov esi,dword ptr [ebp+0x30]

 Block65:
	mov eax,dword ptr [esi+0xDC]
	test eax,eax
	je Block137

 Block66:
	cmp dword ptr [eax-4],0
	je Block137

 Block67:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x10]
	push ecx
	call esi
	lea edx,[ebp+0x10]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block70

 Block68:
	push eax
	call _com_issue_error

 Block69:
	push 0x21000003
	lea ecx,[ebp+0x3C]
	call CMSException::_ctor_0
	mov edx,dword ptr [ebp+0x3C]
	push offset CDisconnectException::THROW_INFO
	lea eax,[ebp+0x34]
	push eax
	mov dword ptr [ebp+0x34],edx
	call _CxxThrowException

 Block70:
	lea eax,[ebp]
	push eax
	mov dword ptr [ebp-4],4
	call esi
	lea ecx,[ebp]
	push offset _D_VTMISSING
	push ecx
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
	lea edx,[ebp+0x10]
	push edx
	lea eax,[ebp]
	push eax
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGSH__4
	mov byte ptr [ebp-4],5
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],6
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	lea ecx,[ebp-0x94]
	push ecx
	mov byte ptr [ebp-4],5
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp+0x38],0
	test eax,eax
	je Block78

 Block75:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x3C]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x3C]
	mov dword ptr [ebp+0x38],ecx
	test eax,eax
	jge Block78

 Block76:
	cmp eax,0x80004002
	je Block78

 Block77:
	push eax
	call _com_issue_error

 Block78:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x94],bx
	jne Block81

 Block79:
	mov eax,dword ptr [ebp-0x8C]
	xor edx,edx
	mov word ptr [ebp-0x94],dx
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea eax,[ebp-0x94]
	push eax
	call edi

 Block82:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp],bx
	jne Block85

 Block83:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea edx,[ebp]
	push edx
	call edi

 Block86:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x10],bx
	jne Block89

 Block87:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea ecx,[ebp+0x10]
	push ecx
	call edi

 Block90:
	lea edx,[ebp-0x84]
	push edx
	call esi
	lea eax,[ebp-0x84]
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
	lea ecx,[ebp-0x74]
	push ecx
	mov byte ptr [ebp-4],0xC
	call esi
	lea edx,[ebp-0x74]
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
	push 0
	push 0
	lea eax,[ebp-0x84]
	push eax
	lea ecx,[ebp-0x74]
	push ecx
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	mov bl,0xD
	push offset _S_UIUIWINDOW2IMGSH__3
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xE
	jne Block96

 Block95:
	push 0x80004003
	call _com_issue_error

 Block96:
	lea edx,[ebp-0xC4]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x2C],ebx
	test eax,eax
	je Block100

 Block97:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x3C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x3C]
	mov dword ptr [ebp+0x2C],ebx
	test eax,eax
	jge Block100

 Block98:
	cmp eax,0x80004002
	je Block100

 Block99:
	push eax
	call _com_issue_error

 Block100:
	mov esi,8
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0xC4],si
	jne Block103

 Block101:
	mov eax,dword ptr [ebp-0xBC]
	xor ecx,ecx
	mov word ptr [ebp-0xC4],cx
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea edx,[ebp-0xC4]
	push edx
	call edi

 Block104:
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp-0x74],si
	jne Block107

 Block105:
	xor eax,eax
	mov word ptr [ebp-0x74],ax
	mov eax,dword ptr [ebp-0x6C]
	test eax,eax
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea ecx,[ebp-0x74]
	push ecx
	call edi

 Block108:
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x84],si
	jne Block111

 Block109:
	mov eax,dword ptr [ebp-0x7C]
	xor edx,edx
	mov word ptr [ebp-0x84],dx
	test eax,eax
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea eax,[ebp-0x84]
	push eax
	call edi

 Block112:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,0x20
	mov esi,esp
	call __alloca_probe_8
	mov dword ptr [ebp+0x34],esp
	push 1
	push 0
	push 0
	push 0xA
	push esi
	push 1
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x14
	test ebx,ebx
	jne Block114

 Block113:
	push 0x80004003
	call _com_issue_error

 Block114:
	lea ecx,[ebp-0xA4]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x20],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block120

 Block115:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x3C]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov ebx,eax
	xor eax,eax
	test ebx,ebx
	setl al
	dec eax
	and eax,dword ptr [ebp+0x3C]
	mov edi,eax
	mov eax,dword ptr [esi]
	test eax,eax
	je Block117

 Block116:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block117:
	mov dword ptr [esi],edi
	test ebx,ebx
	jge Block120

 Block118:
	cmp ebx,0x80004002
	je Block120

 Block119:
	push ebx
	call _com_issue_error

 Block120:
	mov eax,dword ptr [ebp+0x34]
	push 0
	push 0
	push 0xA
	push eax
	mov bl,0x16
	push 1
	mov byte ptr [ebp-4],bl
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x17
	test ecx,ecx
	jne Block122

 Block121:
	push 0x80004003
	call _com_issue_error

 Block122:
	lea edx,[ebp-0xB4]
	push edx
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x18
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x3C],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block128

 Block123:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x3C]
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
	and ecx,dword ptr [ebp+0x3C]
	mov edi,ecx
	test eax,eax
	je Block125

 Block124:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block125:
	mov dword ptr [esi],edi
	test ebx,ebx
	jge Block128

 Block126:
	cmp ebx,0x80004002
	je Block128

 Block127:
	push ebx
	call _com_issue_error

 Block128:
	mov esi,dword ptr [ebp+0x30]
	mov ecx,dword ptr [esi+0xB0]
	mov byte ptr [ebp-4],0x19
	call CCtrlTab::AddItem_Canvas
	mov edi,8
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp-0xB4],di
	jne Block131

 Block129:
	mov eax,dword ptr [ebp-0xAC]
	xor ecx,ecx
	mov word ptr [ebp-0xB4],cx
	test eax,eax
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea edx,[ebp-0xB4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block132:
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0xA4],di
	jne Block135

 Block133:
	xor eax,eax
	mov word ptr [ebp-0xA4],ax
	mov eax,dword ptr [ebp-0x9C]
	test eax,eax
	je Block136

 Block134:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block136

 Block135:
	lea ecx,[ebp-0xA4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block136:
	mov eax,dword ptr [esi+0xB0]
	mov dword ptr [eax+0x34],1
	mov dword ptr [eax+0x38],0x32
	mov ecx,dword ptr [esi+0xB0]
	push 1
	call CCtrlTab::SetTab
	mov eax,dword ptr [ebp+0x2C]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0xB
	call eax
	mov eax,dword ptr [ebp+0x38]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx

 Block137:
	lea eax,[esi+0xE8]
	push eax
	push 0
	mov ecx,esi
	call CShopDlg::SetSellItems
	mov ecx,esi
	call CShopDlg::SetScrollBar
	mov ecx,esi
	call CShopDlg::SetAvatar
	mov ecx,esi
	call CShopDlg::SetNPC
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	lea esp,[ebp-0xD4]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x40]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x44
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CShopDlg::GetCurBuyItem
__SUB_CLASS_THIS0(002E3A00, __thiscall, 133385,  CShopDlg, ZArray<CShopDlg::ITEM>&) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xB0]
	cmp dword ptr [eax+0x44],0
	lea eax,[ecx+0xDC]
	jne Block2

 Block1:
	lea eax,[ecx+0xD8]

 Block2:
	ret
}
}
// CShopDlg::ResetInfo
__SUB_CLASS_THIS0(002EB620, __thiscall, 133362,  CShopDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea eax,[esi+0xE8]
	push eax
	push 0
	call CShopDlg::SetSellItems
	mov ecx,esi
	call CShopDlg::SetScrollBar
	mov ecx,esi
	call CShopDlg::SetAvatar
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret
}
}
// CShopDlg::OnMouseButton
__SUB_CLASS_THIS(002EB6F0, __thiscall, 133368,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push edi
	mov esi,ecx
	cmp eax,0x201
	jne Block5

 Block1:
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0x18]
	push ecx
	push edx
	lea edi,[esi-4]
	push eax
	mov ecx,edi
	call CShopDlg::GetItemIndexFromPoint
	test eax,eax
	je Block12

 Block2:
	cmp dword ptr [esp+0x14],0
	je Block4

 Block3:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esi+0xFC],ecx
	push 0
	mov ecx,edi
	mov dword ptr [esi+0x100],0xFFFFFFFF
	call CWnd::InvalidateRect
	pop edi
	pop esi
	ret 0x10

 Block4:
	mov edx,dword ptr [esp+0x18]
	push 0
	mov ecx,edi
	mov dword ptr [esi+0xFC],0xFFFFFFFF
	mov dword ptr [esi+0x100],edx
	call CWnd::InvalidateRect
	pop edi
	pop esi
	ret 0x10

 Block5:
	cmp eax,0x203
	jne Block12

 Block6:
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0x18]
	push ecx
	push edx
	lea edi,[esi-4]
	push eax
	mov ecx,edi
	call CShopDlg::GetItemIndexFromPoint
	test eax,eax
	je Block12

 Block7:
	cmp dword ptr [esp+0x14],0
	je Block10

 Block8:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,dword ptr [esi+0xFC]
	jne Block12

 Block9:
	mov ecx,edi
	call CShopDlg::SendBuyRequest
	pop edi
	pop esi
	ret 0x10

 Block10:
	mov edx,dword ptr [esp+0x18]
	cmp edx,dword ptr [esi+0x100]
	jne Block12

 Block11:
	mov ecx,edi
	call CShopDlg::SendSellRequest

 Block12:
	pop edi
	pop esi
	ret 0x10
}
}
// CShopDlg::SetNPC
_SUB_EXCEPTION_HANDLER(2E3EC0)
__SUB_CLASS_THIS0(002E3EC0, __thiscall, 133362,  CShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E3EC0
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
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebp,ebp
	add esp,8
	cmp eax,ebp
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	mov edx,3
	mov dword ptr [esp+0x94],ebp
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x94],1
	cmp ecx,ebp
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x1C]
	push edx
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	lea eax,[esp+0x30]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x128]
	cmp esi,eax
	je Block9

 Block5:
	mov dword ptr [edi+0x128],eax
	cmp eax,ebp
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block7:
	cmp esi,ebp
	je Block9

 Block8:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block9:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block11:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x94],0
	cmp word ptr [esp+0x18],si
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block15:
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp word ptr [esp+0x28],si
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x28]
	push ecx
	call ebx

 Block19:
	lea edx,[esp+0x14]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,2
	mov ecx,0xD
	mov dword ptr [esp+0x94],ebx
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block21:
	mov esi,dword ptr [edi+0x128]
	mov byte ptr [esp+0x94],3
	cmp esi,ebp
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
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
	jge Block25

 Block24:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x94],bl
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp eax,ebp
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x18]
	push eax
	call esi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea edx,[esp+0x28]
	mov ebx,4
	push edx
	mov dword ptr [esp+0x98],ebx
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	mov ecx,dword ptr [edi+0x128]
	mov byte ptr [esp+0x94],5
	cmp ecx,ebp
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push 0x4C
	push 0x40
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x94],bl
	cmp word ptr [esp+0x28],si
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp word ptr [esp+0x18],si
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov esi,dword ptr [edi+0x128]
	cmp esi,ebp
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,ebp
	jge Block49

 Block48:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block49:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,6
	mov edx,0xD
	mov dword ptr [esp+0x94],ebx
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block51:
	mov esi,dword ptr [edi+0x128]
	mov byte ptr [esp+0x94],7
	cmp esi,ebp
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
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
	cmp eax,ebp
	jge Block55

 Block54:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block55:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x94],bl
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp eax,ebp
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov esi,dword ptr [edi+0x128]
	cmp esi,ebp
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push esi
	call ecx
	cmp eax,ebp
	jge Block65

 Block64:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block65:
	mov esi,dword ptr [edi+0x128]
	cmp esi,ebp
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xD8]
	push 1
	push esi
	call eax
	cmp eax,ebp
	jge Block69

 Block68:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block69:
	mov ecx,dword ptr [edi+0xD0]
	push ecx
	call CNpcTemplate::GetNpcTemplate
	mov edx,dword ptr [eax+0x44]
	add esp,4
	mov dword ptr [edi+0xD4],edx
	int 3// TODO: 	mov dword ptr [esp+0x78],offset ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::`vftable'
	mov dword ptr [esp+0x80],ebp
	mov dword ptr [esp+0x84],ebp
	mov dword ptr [esp+0x88],ebp
	mov ecx,dword ptr [eax+0x34]
	mov esi,8
	mov dword ptr [esp+0x94],esi
	cmp ecx,ebp
	jne Block71

 Block70:
	mov ecx,1

 Block71:
	push 0xFFFFFFFE
	lea edx,[esp+0x7C]
	push edx
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push eax
	call CActionMan::LoadNpcAction
	mov eax,3
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],0xFFFFFFFE
	mov ecx,dword ptr [edi+0x128]
	mov byte ptr [esp+0x94],9
	cmp ecx,ebp
	jne Block73

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block75:
	mov byte ptr [esp+0x94],8
	cmp word ptr [esp+0x28],si
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov eax,dword ptr [esp+0x84]
	mov ebx,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esp+0x14],eax
	cmp eax,ebp
	je Block111

 Block80:
	lea edx,[esp+0x14]
	push edx
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	lea eax,[esp+0x58]
	push eax
	call ebx
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block1

 Block81:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x98],0xA
	call ebx
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block1

 Block82:
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x98],0xB
	call ebx
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block1

 Block83:
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0x98],0xC
	call ebx
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block1

 Block84:
	mov eax,dword ptr [esi+0x10]
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],eax
	mov ecx,dword ptr [edi+0x128]
	mov esi,dword ptr [esi+0xC]
	mov byte ptr [esp+0x94],0xE
	cmp ecx,ebp
	je Block3

 Block85:
	lea eax,[esp+0x58]
	push eax
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x40]
	push eax
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x38]
	push eax
	push esi
	lea edx,[esp+0x80]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x68],8
	jne Block88

 Block86:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	cmp eax,ebp
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block89:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x94],0xD
	jne Block96

 Block90:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
	je Block92

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block92:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block93:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x94],0xC
	jne Block97

 Block94:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block98

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block96:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x28]
	push eax
	call esi
	jmp Block93

 Block97:
	lea edx,[esp+0x18]
	push edx
	call esi

 Block98:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x94],0xB
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[esp+0x38]
	push ecx
	call esi

 Block102:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x94],0xA
	jne Block105

 Block103:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,ebp
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea eax,[esp+0x48]
	push eax
	call esi

 Block106:
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x94],8
	jne Block109

 Block107:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,ebp
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea edx,[esp+0x58]
	push edx
	call esi

 Block110:
	cmp dword ptr [esp+0x14],ebp
	jne Block80

 Block111:
	lea eax,[esp+0x48]
	push eax
	call ebx
	lea ecx,[esp+0x48]
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
	lea edx,[esp+0x58]
	mov bl,0xF
	push edx
	mov byte ptr [esp+0x98],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x58]
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
	mov ecx,dword ptr [edi+0x128]
	mov byte ptr [esp+0x94],0x10
	cmp ecx,ebp
	jne Block117

 Block116:
	push 0x80004003
	call _com_issue_error

 Block117:
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x5C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x94],bl
	cmp word ptr [esp+0x58],si
	jne Block120

 Block118:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,ebp
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block121:
	mov byte ptr [esp+0x94],8
	cmp word ptr [esp+0x48],si
	jne Block124

 Block122:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebp
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block125:
	lea ecx,[esp+0x78]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x78],offset ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::RemoveAll
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
// CShopDlg::CShopDlg
_SUB_EXCEPTION_HANDLER(2EA6E0)
__SUB_CLASS_THIS0(002EA6E0, __thiscall, 133360,  CShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2EA6E0
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
	call CUniqueModeless::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CShopDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CShopDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CShopDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD8],edi
	mov dword ptr [esi+0xDC],edi
	mov dword ptr [esi+0xE0],edi
	mov dword ptr [esi+0xE4],edi
	mov dword ptr [esi+0xE8],edi
	mov dword ptr [esi+0xEC],edi
	mov dword ptr [esi+0xF0],edi
	mov dword ptr [esi+0xF4],edi
	mov dword ptr [esi+0xF8],edi
	mov dword ptr [esi+0xFC],edi
	mov dword ptr [esi+0x124],edi
	mov dword ptr [esi+0x128],edi
	lea ecx,[esi+0x12C]
	mov byte ptr [esp+0x18],0x14
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xB74],edi
	mov dword ptr [esi+0xB78],edi
	mov dword ptr [esi+0xB7C],edi
	mov dword ptr [esi+0xB80],edi
	mov dword ptr [esi+0xB84],edi
	push 1
	push edi
	push 1
	push offset _S_UIUIWINDOW2IMGSH__10
	mov ecx,esi
	mov byte ptr [esp+0x28],0x16
	call CDialog::CreateDlg_2
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
// CShopDlg::OnButtonClicked
__SUB_CLASS_THIS(002EB650, __thiscall, 133373,  CShopDlg, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	cmp eax,0x3E9
	ja Block5

 Block1:
	je Block4

 Block2:
	cmp eax,0x3E8
	jne Block8

 Block3:
	call CShopDlg::SendBuyRequest
	pop esi
	ret 4

 Block4:
	call CShopDlg::SendSellRequest
	pop esi
	ret 4

 Block5:
	cmp eax,0x7D0
	jb Block8

 Block6:
	cmp eax,0x7D4
	ja Block8

 Block7:
	mov ecx,dword ptr [esi+0xCC]
	mov ecx,dword ptr [ecx+0x38]
	lea edx,[ecx+eax-0x7D0]
	push 0
	mov ecx,esi
	mov dword ptr [esi+0x100],0xFFFFFFFF
	mov dword ptr [esi+0x104],edx
	call CWnd::InvalidateRect
	mov ecx,esi
	call CShopDlg::SendRechargeRequest
	pop esi
	ret 4

 Block8:
	cmp eax,1
	jne Block10

 Block9:
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	call edx
	pop esi
	ret 4

 Block10:
	cmp eax,2
	jne Block12

 Block11:
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	call edx
	pop esi
	ret 4

 Block12:
	cmp eax,8
	jne Block14

 Block13:
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	call edx

 Block14:
	pop esi
	ret 4
}
}
// CShopDlg::GetDiscountPriceByItem
__SUB_CLASS_THIS(002E3AC0, __thiscall, 133386,  CShopDlg, long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	mov esi,dword ptr [eax+0x3DC8]
	test esi,esi
	je Block7

 Block1:
	mov ecx,dword ptr [esp+0xC]
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xC8
	je Block4

 Block2:
	cmp eax,0xC9
	je Block4

 Block3:
	cmp eax,0xCA
	jne Block7

 Block4:
	mov ecx,0x64
	sub ecx,esi
	mov dword ptr [esp+0xC],ecx
	fild dword ptr [esp+0xC]
	fimul dword ptr [esp+8]
	fdiv qword ptr [__real_4059000000000000]
	fld qword ptr [__real_4024000000000000]
	fmul st,st(1)
	call __ftol2_sse
	cdq
	mov ecx,0xA
	idiv ecx
	cmp edx,5
	jl Block6

 Block5:
	fadd qword ptr [__real_3ff0000000000000]

 Block6:
	call __ftol2_sse
	pop esi
	ret 8

 Block7:
	xor eax,eax
	pop esi
	ret 8
}
}
// CShopDlg::OnTabChanged
__SUB_CLASS_THIS(002E3920, __thiscall, 133364,  CShopDlg, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x38]
	call edx
	ret 4
}
}
// CShopDlg::~CShopDlg
_SUB_EXCEPTION_HANDLER(2EA860)
__SUB_CLASS_THIS0(002EA860, __thiscall, 133362,  CShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2EA860
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
	int 3// TODO: 	mov dword ptr [esi],offset CShopDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CShopDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CShopDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB74]
	mov dword ptr [esp+0x20],0x15
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0x12C]
	mov byte ptr [esp+0x20],0x14
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0x128]
	xor ebx,ebx
	mov byte ptr [esp+0x20],0x13
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x124]
	mov byte ptr [esp+0x20],0x12
	cmp eax,ebx
	je Block7

 Block3:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block6

 Block5:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block6:
	mov dword ptr [esi+0x124],ebx

 Block7:
	mov eax,dword ptr [esi+0xFC]
	mov byte ptr [esp+0x20],0x11
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov eax,dword ptr [esi+0xF8]
	mov byte ptr [esp+0x20],0x10
	cmp eax,ebx
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov eax,dword ptr [esi+0xF4]
	mov byte ptr [esp+0x20],0xF
	cmp eax,ebx
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov eax,dword ptr [esi+0xF0]
	mov byte ptr [esp+0x20],0xE
	cmp eax,ebx
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	lea ecx,[esi+0xEC]
	mov byte ptr [esp+0x20],0xD
	call ZArray<CShopDlg::ITEM>::RemoveAll
	lea ecx,[esi+0xE8]
	mov byte ptr [esp+0x20],0xC
	call ZArray<CShopDlg::ITEM>::RemoveAll
	lea ecx,[esi+0xE4]
	mov byte ptr [esp+0x20],0xB
	call ZArray<CShopDlg::ITEM>::RemoveAll
	lea ecx,[esi+0xE0]
	mov byte ptr [esp+0x20],0xA
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0xDC]
	mov byte ptr [esp+0x20],9
	call ZArray<CShopDlg::ITEM>::RemoveAll
	lea ecx,[esi+0xD8]
	mov byte ptr [esp+0x20],8
	call ZArray<CShopDlg::ITEM>::RemoveAll
	lea edi,[esi+0xC8]
	mov byte ptr [esp+0x20],7
	cmp dword ptr [edi+4],ebx
	je Block17

 Block16:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block17:
	lea edi,[esi+0xC0]
	mov byte ptr [esp+0x20],6
	cmp dword ptr [edi+4],ebx
	je Block19

 Block18:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block19:
	lea ecx,[esi+0xBC]
	mov byte ptr [esp+0x20],5
	call ZArray<ZRef<CCtrlButton>>::RemoveAll
	lea edi,[esi+0xB4]
	mov byte ptr [esp+0x20],4
	cmp dword ptr [edi+4],ebx
	je Block21

 Block20:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlTab>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block21:
	lea edi,[esi+0xAC]
	mov byte ptr [esp+0x20],3
	cmp dword ptr [edi+4],ebx
	je Block23

 Block22:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlTab>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block23:
	lea edi,[esi+0xA4]
	mov byte ptr [esp+0x20],2
	cmp dword ptr [edi+4],ebx
	je Block25

 Block24:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block25:
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x20],1
	cmp dword ptr [edi+4],ebx
	je Block27

 Block26:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block27:
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x20],bl
	cmp dword ptr [edi+4],ebx
	je Block29

 Block28:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block29:
	int 3// TODO: 	mov dword ptr [esi],offset CUniqueModeless::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUniqueModeless::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUniqueModeless::`vftable'{for `ZRefCounted'}
	mov ecx,esi
	mov dword ptr [esp+0x20],0xFFFFFFFF
	mov dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],ebx
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret
}
}
// CShopDlg::Draw
_SUB_EXCEPTION_HANDLER(2E9610)
__SUB_CLASS_THIS(002E9610, __thiscall, 133367,  CShopDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E9610
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
	mov eax,dword ptr [esp+0x30]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
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
	mov dword ptr [esp+0x1C],0

 Block5:
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov esi,dword ptr [esp+0x30]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],0
	mov dword ptr [esp+0x18],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block7

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block7:
	mov ecx,edi
	call CShopDlg::DrawBuyItem
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block9

 Block8:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block9:
	mov ecx,edi
	call CShopDlg::DrawSellItem
	mov eax,dword ptr [ebp+0xBD]
	push eax
	add ebp,0xB5
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block11

 Block10:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block11:
	mov ecx,edi
	call CShopDlg::DrawMoney
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test esi,esi
	je Block13

 Block12:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block13:
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
// CShopDlg::SetAvatar
_SUB_EXCEPTION_HANDLER(2E5580)
__SUB_CLASS_THIS0(002E5580, __thiscall, 133362,  CShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E5580
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x220
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x22C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea ecx,[esi+0x120]
	call ZRef<CAvatar>::_Alloc
	push 0
	push 0x64
	push 0x4C
	push 0x125
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x250],0
	call CWnd::GetLayer
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [edi],0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x254],1
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov ecx,edi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	test eax,eax
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esp+0x47]
	mov byte ptr [esp+0x254],3
	call AvatarLook::_ctor_0
	mov ecx,dword ptr [esi+0x124]
	mov byte ptr [esp+0x250],4
	push 5
	push eax
	mov byte ptr [esp+0x258],7
	call CAvatar::Init_1
	mov eax,dword ptr [esp+0x14]
	int 3// TODO: 	mov dword ptr [esp+0x27],offset ZRefCounted::`vftable'
	mov byte ptr [esp+0x234],5
	test eax,eax
	je Block10

 Block6:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block9

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block9:
	mov dword ptr [esp+0x14],0

 Block10:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x234],0xFFFFFFFF
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov ecx,dword ptr [esp+0x22C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x22C
	ret
}
}
// CShopDlg::DrawSellItem
_SUB_EXCEPTION_HANDLER(2E56F0)
__SUB_CLASS_THIS(002E56F0, __thiscall, 133380,  CShopDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E56F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1F0
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x204]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],ecx
	mov eax,dword ptr [ecx+0xCC]
	mov eax,dword ptr [eax+0x38]
	xor edx,edx
	mov dword ptr [esp+0x20C],edx
	mov dword ptr [esp+0x70],eax
	mov dword ptr [esp+0x30],edx
	jmp Block2

 Block2:
	mov ecx,dword ptr [esp+0x70]
	mov edi,dword ptr [esp+0x14]
	mov ebp,edx
	imul ebp,0x2A
	lea eax,[edx+ecx]
	mov ecx,dword ptr [edi+0xE8]
	add ebp,0x73
	mov dword ptr [esp+0x1C],ebp
	test ecx,ecx
	je Block4

 Block3:
	cmp eax,dword ptr [ecx-4]
	jb Block6

 Block4:
	mov eax,dword ptr [edi+0xBC]
	mov ecx,dword ptr [eax+edx*8+4]
	test ecx,ecx
	je Block246

 Block5:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	jmp Block246

 Block6:
	lea ebx,[eax+eax*4]
	shl ebx,4
	add ebx,ecx
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x2C],0
	mov byte ptr [esp+0x20C],1
	cmp dword ptr [edi+0x104],eax
	jne Block15

 Block7:
	mov ecx,3
	mov edx,0xFF
	mov word ptr [esp+0x4C],cx
	mov dword ptr [esp+0x54],edx
	mov ecx,dword ptr [esp+0x214]
	mov esi,dword ptr [edi+0xF8]
	mov byte ptr [esp+0x20C],2
	test ecx,ecx
	je Block250

 Block8:
	mov ebp,dword ptr [esp+0x4C]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x60]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x2C]
	push esi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x6C]
	push ebp
	push 0x116
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebx+0x80]
	push ecx
	mov edi,ecx
	call eax
	test eax,eax
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block10:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x20C],1
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov edi,dword ptr [esp+0x14]
	mov ebx,dword ptr [esp+0x20]

 Block15:
	mov eax,dword ptr [ebx+0x48]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block17

 Block16:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::CalcEquipItemQuality
	mov ecx,dword ptr [ebx+0x48]
	mov esi,eax
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x18]
	call edx
	cmp eax,1
	jne Block22

 Block18:
	mov eax,dword ptr [ebx+0x48]
	test eax,eax
	je Block22

 Block19:
	mov edx,dword ptr [esp+0x214]
	lea ecx,[ebp+0x20]
	push ecx
	push 0x111
	push ebp
	push 0xF1
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x22C]
	mov dword ptr [esp+0x40],esp
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block21:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawGradeFrame

 Block22:
	mov ecx,dword ptr [ebx+0x48]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+4]
	push 2
	push 0
	push esi
	push 0
	push 0
	push 0
	call edx
	push eax
	add ebp,0x22
	push ebp
	push 0xF3
	mov ecx,ebx
	call TSecType<long>::GetData
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x240]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x240]
	mov dword ptr [esp+0x54],esp
	test eax,eax
	je Block24

 Block23:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block24:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xCF
	je Block26

 Block25:
	cmp eax,0xE9
	jne Block45

 Block26:
	fldz
	fcomp qword ptr [ebx+0x30]
	fnstsw ax
	test ah,5
	jp Block45

 Block27:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x30]
	mov eax,dword ptr [ecx+0xBC]
	mov ecx,dword ptr [eax+edx*8+4]
	lea ebp,[edx*8]
	xor edi,edi
	cmp ecx,edi
	je Block31

 Block28:
	mov eax,dword ptr [ecx+0x14]
	add edx,0x7D0
	cmp eax,edx
	je Block47

 Block29:
	cmp ecx,edi
	je Block31

 Block30:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax

 Block31:
	mov dword ptr [esp+0x80],edi
	mov dword ptr [esp+0x74],1
	mov dword ptr [esp+0x78],edi
	mov dword ptr [esp+0x7C],edi
	push 0x40
	push offset _S_UIUIWINDOW2IMGSH
	push edi
	push 0x20
	lea ecx,[esp+0x90]
	mov byte ptr [esp+0x21C],3
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x20
	lea ecx,[esp+0x84]
	call ZXString16::ReleaseBuffer
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x28],eax
	mov byte ptr [esp+0x20C],4
	cmp eax,edi
	je Block33

 Block32:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block34

 Block33:
	xor eax,eax

 Block34:
	mov ecx,dword ptr [esp+0x14]
	mov esi,dword ptr [ecx+0xBC]
	add esi,ebp
	mov byte ptr [esp+0x20C],3
	cmp eax,edi
	je Block44

 Block35:
	add eax,8
	cmp eax,edi
	je Block44

 Block36:
	lea edi,[eax-8]
	test edi,edi
	je Block38

 Block37:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block38:
	mov eax,dword ptr [esi+4]
	mov dword ptr [esi+4],edi
	test eax,eax
	je Block42

 Block39:
	lea esi,[eax+8]
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block42

 Block40:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block42

 Block41:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block42:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+0xBC]
	mov ecx,dword ptr [ecx+ebp+4]
	mov edx,dword ptr [ecx]
	lea esi,[esp+0x74]
	push esi
	mov esi,dword ptr [esp+0x20]
	push 0
	inc esi
	push esi
	mov esi,dword ptr [esp+0x3C]
	push 0x192
	add esi,0x7D0
	push esi
	push eax
	mov eax,dword ptr [edx+0x28]
	call eax
	mov eax,dword ptr [esp+0x80]
	mov byte ptr [esp+0x20C],1
	test eax,eax
	je Block47

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block47

 Block44:
	xor edi,edi
	jmp Block38

 Block45:
	mov ecx,dword ptr [edi+0xBC]
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [ecx+edx*8+4]
	test ecx,ecx
	je Block47

 Block46:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx

 Block47:
	mov eax,dword ptr [ebx+0x18]
	push 1
	push eax
	lea ecx,[esp+0x34]
	push ecx
	call format_integer
	add esp,0xC
	lea edx,[esp+0x60]
	push 0x1AC1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x20C],5
	test eax,eax
	je Block49

 Block48:
	mov ecx,dword ptr [eax-4]
	jmp Block50

 Block49:
	xor ecx,ecx

 Block50:
	push ecx
	push eax
	lea ecx,[esp+0x34]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x20C],1
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block52:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0xA4]
	push eax
	call esi
	lea ecx,[esp+0xA4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block251

 Block53:
	lea edx,[esp+0x84]
	push edx
	mov byte ptr [esp+0x210],6
	call esi
	lea eax,[esp+0x84]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block251

 Block54:
	mov eax,dword ptr [esp+0x214]
	lea ecx,[esp+0xA4]
	push ecx
	lea edx,[esp+0x88]
	push edx
	mov edx,dword ptr [esp+0x34]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x220],7
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [eax+0xF0]
	mov byte ptr [esp+0x21C],8
	test ecx,ecx
	je Block250

 Block55:
	mov eax,dword ptr [esp+0x2C]
	add eax,0x16
	push eax
	push 0x11C
	mov byte ptr [esp+0x224],7
	call IWzFont::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x20C],6
	cmp word ptr [esp+0x84],si
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x8C]
	xor ecx,ecx
	mov word ptr [esp+0x84],cx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[esp+0x84]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov byte ptr [esp+0x20C],1
	cmp word ptr [esp+0xA4],si
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [esp+0xA4],ax
	mov eax,dword ptr [esp+0xAC]
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[esp+0xA4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xCF
	je Block66

 Block64:
	cmp eax,0xE9
	jne Block172

 Block65:
	mov ebx,dword ptr [esp+0x20]

 Block66:
	fldz
	fcomp qword ptr [ebx+0x30]
	fnstsw ax
	test ah,5
	jp Block172

 Block67:
	lea edx,[esp+0x64]
	push 0x1818
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	xor ebx,ebx
	mov dword ptr [esp+0x44],ebx
	mov edi,dword ptr [esp+0x20]
	fld qword ptr [edi+0x30]
	mov esi,dword ptr [eax]
	sub esp,8
	fstp qword ptr [esp]
	mov byte ptr [esp+0x214],0xA
	call _ceil
	call __ftol2_sse
	push eax
	lea eax,[esp+0x50]
	push esi
	push eax
	call ZXString<char>::Format
	add esp,0x14
	push eax
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x40],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x20C],0xC
	cmp eax,ebx
	je Block69

 Block68:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block69:
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x20C],0xD
	cmp eax,ebx
	je Block71

 Block70:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block71:
	mov ecx,edi
	call TSecType<long>::GetData
	fld qword ptr [edi+0x30]
	push eax
	sub esp,8
	fstp qword ptr [esp]
	call _ceil
	add esp,8
	call __ftol2_sse
	mov ecx,dword ptr [esp+0x18]
	push eax
	call CShopDlg::GetDiscountPrice
	mov esi,eax
	cmp esi,ebx
	je Block147

 Block72:
	mov dword ptr [esp+0x48],ebx
	fld qword ptr [edi+0x30]
	sub esp,8
	fstp qword ptr [esp]
	mov byte ptr [esp+0x214],0xE
	call _ceil
	call __ftol2_sse
	push eax
	lea ecx,[esp+0x54]
	push offset _S_D__1
	push ecx
	call ZXString<char>::Format
	add esp,0x14
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x20C],0x10
	cmp eax,ebx
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block74:
	mov dword ptr [esp+0x40],ebx
	push esi
	lea edx,[esp+0x44]
	push offset _S_D__1
	push edx
	mov byte ptr [esp+0x218],0x11
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x20C],0x13
	cmp eax,ebx
	je Block76

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block76:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0xC4]
	push eax
	call esi
	lea ecx,[esp+0xC4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block251

 Block77:
	lea edx,[esp+0x1A4]
	push edx
	mov byte ptr [esp+0x210],0x14
	call esi
	lea eax,[esp+0x1A4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block251

 Block78:
	mov ebx,dword ptr [esp+0x3C]
	lea ecx,[esp+0xC4]
	push ecx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push ebx
	mov byte ptr [esp+0x218],0x15
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [esp+0x1C]
	mov ecx,dword ptr [edi+0xF0]
	mov byte ptr [esp+0x214],0x16
	test ecx,ecx
	je Block250

 Block79:
	mov byte ptr [esp+0x214],0x15
	call IWzFont::CalcTextWidth
	mov ebp,dword ptr [esp+0x28]
	lea edx,[esp+0x1A4]
	push edx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push ebp
	mov esi,eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0xF0]
	mov byte ptr [esp+0x214],0x17
	test ecx,ecx
	je Block250

 Block80:
	mov byte ptr [esp+0x214],0x15
	call IWzFont::CalcTextWidth
	mov edi,0x1B6
	sub edi,eax
	sub edi,esi
	cmp word ptr [esp+0x1A4],8
	mov byte ptr [esp+0x20C],0x14
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [esp+0x1A4],ax
	mov eax,dword ptr [esp+0x1AC]
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea ecx,[esp+0x1A4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	cmp word ptr [esp+0xC4],8
	mov byte ptr [esp+0x20C],0x13
	jne Block87

 Block85:
	mov eax,dword ptr [esp+0xCC]
	xor edx,edx
	mov word ptr [esp+0xC4],dx
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea eax,[esp+0xC4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block88:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xE4]
	push ecx
	call esi
	lea edx,[esp+0xE4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block251

 Block89:
	lea eax,[esp+0x164]
	push eax
	mov byte ptr [esp+0x210],0x18
	call esi
	lea ecx,[esp+0x164]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block251

 Block90:
	mov esi,dword ptr [esp+0x1C]
	lea edx,[esp+0xE4]
	push edx
	mov edx,dword ptr [esp+0x28]
	push 0xA0000000
	lea eax,[esi+8]
	push eax
	lea ecx,[esp+0x170]
	push ecx
	push ecx
	mov dword ptr [esp+0x4C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x224],0x19
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [eax+0xF0]
	mov byte ptr [esp+0x220],0x1A
	test ecx,ecx
	je Block250

 Block91:
	mov byte ptr [esp+0x220],0x19
	call IWzFont::CalcTextWidth
	mov ecx,dword ptr [esp+0x220]
	test ecx,ecx
	je Block250

 Block92:
	lea edx,[eax+edi+0x1A]
	push edx
	add esi,0x18
	push esi
	lea eax,[edi+0x19]
	push eax
	call IWzCanvas::DrawLine
	cmp word ptr [esp+0x164],8
	mov byte ptr [esp+0x20C],0x18
	jne Block95

 Block93:
	mov eax,dword ptr [esp+0x16C]
	xor ecx,ecx
	mov word ptr [esp+0x164],cx
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea edx,[esp+0x164]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	cmp word ptr [esp+0xE4],8
	mov byte ptr [esp+0x20C],0x13
	jne Block99

 Block97:
	xor eax,eax
	mov word ptr [esp+0xE4],ax
	mov eax,dword ptr [esp+0xEC]
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea ecx,[esp+0xE4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block100:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x104]
	push edx
	call esi
	lea eax,[esp+0x104]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block251

 Block101:
	lea ecx,[esp+0x1E4]
	push ecx
	mov byte ptr [esp+0x210],0x1B
	call esi
	lea edx,[esp+0x1E4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block251

 Block102:
	mov edx,dword ptr [esp+0x214]
	lea eax,[esp+0x104]
	push eax
	lea ecx,[esp+0x1E8]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push ebx
	mov byte ptr [esp+0x220],0x1C
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [eax+0xF0]
	mov byte ptr [esp+0x21C],0x1D
	test ecx,ecx
	je Block250

 Block103:
	mov esi,dword ptr [esp+0x2C]
	add esi,4
	push esi
	push edi
	mov byte ptr [esp+0x224],0x1C
	call IWzFont::DrawTextA
	cmp word ptr [esp+0x1E4],8
	mov byte ptr [esp+0x20C],0x1B
	jne Block106

 Block104:
	mov eax,dword ptr [esp+0x1EC]
	xor ecx,ecx
	mov word ptr [esp+0x1E4],cx
	test eax,eax
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea edx,[esp+0x1E4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block107:
	cmp word ptr [esp+0x104],8
	mov byte ptr [esp+0x20C],0x13
	jne Block110

 Block108:
	xor eax,eax
	mov word ptr [esp+0x104],ax
	mov eax,dword ptr [esp+0x10C]
	test eax,eax
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea ecx,[esp+0x104]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block111:
	lea edx,[esp+0x1C4]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block251

 Block112:
	lea ecx,[esp+0x124]
	push ecx
	mov byte ptr [esp+0x210],0x1E
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x124]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block251

 Block113:
	lea eax,[esp+0x184]
	push eax
	mov byte ptr [esp+0x210],0x1F
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x184]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block251

 Block114:
	mov ecx,dword ptr [esp+0x214]
	lea edx,[esp+0x1C4]
	push edx
	lea eax,[esp+0x128]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x220],0x20
	call _xbstr_t::_ctor_0
	push esi
	lea edx,[esp+0x198]
	push edx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push ebx
	mov byte ptr [esp+0x22C],0x21
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [eax+0xF0]
	mov byte ptr [esp+0x228],0x22
	test ecx,ecx
	je Block250

 Block115:
	mov byte ptr [esp+0x228],0x21
	call IWzFont::CalcTextWidth
	lea ecx,[esp+0x80]
	push 0x22
	push ecx
	mov esi,eax
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x220],0x23
	test ecx,ecx
	je Block250

 Block116:
	lea edx,[esi+edi+2]
	push edx
	mov byte ptr [esp+0x224],0x24
	call IWzFont::DrawTextA
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x20C],0x20
	test eax,eax
	je Block118

 Block117:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block118:
	mov esi,8
	mov byte ptr [esp+0x20C],0x1F
	cmp word ptr [esp+0x184],si
	jne Block125

 Block119:
	xor eax,eax
	mov word ptr [esp+0x184],ax
	mov eax,dword ptr [esp+0x18C]
	test eax,eax
	je Block121

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block121:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block122:
	mov byte ptr [esp+0x20C],0x1E
	cmp word ptr [esp+0x124],si
	jne Block126

 Block123:
	mov eax,dword ptr [esp+0x12C]
	xor edx,edx
	mov word ptr [esp+0x124],dx
	test eax,eax
	je Block127

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block125:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x184]
	push ecx
	call edi
	jmp Block122

 Block126:
	lea eax,[esp+0x124]
	push eax
	call edi

 Block127:
	mov byte ptr [esp+0x20C],0x13
	cmp word ptr [esp+0x1C4],si
	jne Block130

 Block128:
	mov eax,dword ptr [esp+0x1CC]
	xor ecx,ecx
	mov word ptr [esp+0x1C4],cx
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea edx,[esp+0x1C4]
	push edx
	call edi

 Block131:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x94]
	push eax
	call esi
	lea ecx,[esp+0x94]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block251

 Block132:
	lea edx,[esp+0x144]
	push edx
	mov byte ptr [esp+0x210],0x25
	call esi
	lea eax,[esp+0x144]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block251

 Block133:
	lea ecx,[esp+0x94]
	push ecx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push ebx
	mov byte ptr [esp+0x218],0x26
	call _xbstr_t::_ctor_0
	mov esi,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi+0xF0]
	mov byte ptr [esp+0x214],0x27
	test ecx,ecx
	je Block250

 Block134:
	mov byte ptr [esp+0x214],0x26
	call IWzFont::CalcTextWidth
	lea edx,[esp+0x144]
	push edx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push ebp
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0xF0]
	mov byte ptr [esp+0x214],0x28
	test ecx,ecx
	je Block250

 Block135:
	mov byte ptr [esp+0x214],0x26
	call IWzFont::CalcTextWidth
	mov esi,8
	mov byte ptr [esp+0x20C],0x25
	cmp word ptr [esp+0x144],si
	jne Block138

 Block136:
	xor eax,eax
	mov word ptr [esp+0x144],ax
	mov eax,dword ptr [esp+0x14C]
	test eax,eax
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block138:
	lea ecx,[esp+0x144]
	push ecx
	call edi

 Block139:
	mov byte ptr [esp+0x20C],0x13
	cmp word ptr [esp+0x94],si
	jne Block142

 Block140:
	mov eax,dword ptr [esp+0x9C]
	xor edx,edx
	mov word ptr [esp+0x94],dx
	test eax,eax
	je Block143

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block142:
	lea eax,[esp+0x94]
	push eax
	call edi

 Block143:
	mov byte ptr [esp+0x20C],0x10
	test ebp,ebp
	je Block145

 Block144:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block145:
	cmp dword ptr [esp+0x24],0
	mov byte ptr [esp+0x20C],0xD
	je Block170

 Block146:
	mov ecx,dword ptr [esp+0x24]
	add ecx,0xFFFFFFF4
	push ecx
	call ZXString<char>::_Release
	add esp,4
	jmp Block170

 Block147:
	lea edx,[esp+0xB4]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0xB4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block251

 Block148:
	mov ebx,dword ptr [esp+0x3C]
	lea ecx,[esp+0xB4]
	push ecx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push ebx
	mov byte ptr [esp+0x218],0x29
	call _xbstr_t::_ctor_0
	mov ebp,dword ptr [esp+0x1C]
	mov ecx,dword ptr [ebp+0xF0]
	mov byte ptr [esp+0x214],0x2A
	test ecx,ecx
	je Block250

 Block149:
	mov byte ptr [esp+0x214],0x29
	call IWzFont::CalcTextWidth
	mov esi,0x1B8
	sub esi,eax
	cmp word ptr [esp+0xB4],8
	mov byte ptr [esp+0x20C],0xD
	jne Block152

 Block150:
	mov eax,dword ptr [esp+0xBC]
	xor edx,edx
	mov word ptr [esp+0xB4],dx
	test eax,eax
	je Block153

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block153

 Block152:
	lea eax,[esp+0xB4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block153:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xF4]
	push ecx
	call edi
	lea edx,[esp+0xF4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block251

 Block154:
	lea eax,[esp+0xD4]
	push eax
	mov byte ptr [esp+0x210],0x2B
	call edi
	lea ecx,[esp+0xD4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block251

 Block155:
	mov ecx,dword ptr [esp+0x214]
	lea edx,[esp+0xF4]
	push edx
	lea eax,[esp+0xD8]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push ebx
	mov byte ptr [esp+0x220],0x2C
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0xF0]
	mov byte ptr [esp+0x21C],0x2D
	test ecx,ecx
	je Block250

 Block156:
	mov edx,dword ptr [esp+0x2C]
	add edx,0x14
	push edx
	push esi
	mov byte ptr [esp+0x224],0x2C
	call IWzFont::DrawTextA
	cmp word ptr [esp+0xD4],8
	mov byte ptr [esp+0x20C],0x2B
	jne Block159

 Block157:
	xor eax,eax
	mov word ptr [esp+0xD4],ax
	mov eax,dword ptr [esp+0xDC]
	test eax,eax
	je Block160

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block160

 Block159:
	lea ecx,[esp+0xD4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block160:
	mov esi,8
	mov byte ptr [esp+0x20C],0xD
	cmp word ptr [esp+0xF4],si
	jne Block163

 Block161:
	mov eax,dword ptr [esp+0xFC]
	xor edx,edx
	mov word ptr [esp+0xF4],dx
	test eax,eax
	je Block164

 Block162:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block164

 Block163:
	lea eax,[esp+0xF4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block164:
	lea ecx,[esp+0x114]
	push ecx
	call edi
	lea edx,[esp+0x114]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block251

 Block165:
	lea eax,[esp+0x114]
	push eax
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push ebx
	mov byte ptr [esp+0x218],0x2E
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0xF0]
	mov byte ptr [esp+0x214],0x2F
	test ecx,ecx
	je Block250

 Block166:
	mov byte ptr [esp+0x214],0x2E
	call IWzFont::CalcTextWidth
	mov byte ptr [esp+0x20C],0xD
	cmp word ptr [esp+0x114],si
	jne Block169

 Block167:
	mov eax,dword ptr [esp+0x11C]
	xor ecx,ecx
	mov word ptr [esp+0x114],cx
	test eax,eax
	je Block170

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block169:
	lea edx,[esp+0x114]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block170:
	mov byte ptr [esp+0x20C],1
	test ebx,ebx
	je Block172

 Block171:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block172:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax+0x18]
	mov ebp,dword ptr [esp+0x14]
	push ecx
	mov ecx,ebp
	call CShopDlg::GetOverchargePrice
	xor ebx,ebx
	cmp eax,ebx
	je Block211

 Block173:
	mov dword ptr [esp+0x24],ebx
	push 1
	push eax
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x218],0x30
	call format_integer
	add esp,0xC
	lea eax,[esp+0x5C]
	push 0x1AC1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x20C],0x31
	cmp eax,ebx
	je Block175

 Block174:
	mov ecx,dword ptr [eax-4]
	jmp Block176

 Block175:
	xor ecx,ecx

 Block176:
	push ecx
	push eax
	lea ecx,[esp+0x2C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x20C],0x30
	cmp eax,ebx
	je Block178

 Block177:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block178:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x154]
	push ecx
	call edi
	lea edx,[esp+0x154]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block251

 Block179:
	lea eax,[esp+0x134]
	push eax
	mov byte ptr [esp+0x210],0x32
	call edi
	lea ecx,[esp+0x134]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block251

 Block180:
	mov esi,dword ptr [esp+0x1C]
	lea edx,[esp+0x154]
	push edx
	mov edx,dword ptr [esp+0x30]
	push 0xA0000000
	add esi,0x1A
	push esi
	lea eax,[esp+0x140]
	push eax
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x224],0x33
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0xF0]
	mov byte ptr [esp+0x220],0x34
	cmp ecx,ebx
	je Block250

 Block181:
	mov byte ptr [esp+0x220],0x33
	call IWzFont::CalcTextWidth
	mov ecx,dword ptr [esp+0x220]
	cmp ecx,ebx
	je Block250

 Block182:
	add eax,0x11C
	push eax
	push esi
	push 0x11C
	call IWzCanvas::DrawLine
	cmp word ptr [esp+0x134],8
	mov byte ptr [esp+0x20C],0x32
	jne Block185

 Block183:
	xor eax,eax
	mov word ptr [esp+0x134],ax
	mov eax,dword ptr [esp+0x13C]
	cmp eax,ebx
	je Block186

 Block184:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block186

 Block185:
	lea ecx,[esp+0x134]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block186:
	cmp word ptr [esp+0x154],8
	mov byte ptr [esp+0x20C],0x30
	jne Block189

 Block187:
	mov eax,dword ptr [esp+0x15C]
	xor edx,edx
	mov word ptr [esp+0x154],dx
	cmp eax,ebx
	je Block190

 Block188:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block190

 Block189:
	lea eax,[esp+0x154]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block190:
	lea ecx,[esp+0x1B4]
	push ecx
	call edi
	lea edx,[esp+0x1B4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block251

 Block191:
	lea eax,[esp+0x194]
	push eax
	mov byte ptr [esp+0x210],0x35
	call edi
	lea ecx,[esp+0x194]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block251

 Block192:
	lea edx,[esp+0x174]
	push edx
	mov byte ptr [esp+0x210],0x36
	call edi
	lea eax,[esp+0x174]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block251

 Block193:
	mov eax,dword ptr [esp+0x214]
	lea ecx,[esp+0x1B4]
	push ecx
	lea edx,[esp+0x198]
	push edx
	mov edx,dword ptr [esp+0x2C]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x220],0x37
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x3C]
	add eax,0x16
	push eax
	lea eax,[esp+0x188]
	push eax
	push ecx
	mov dword ptr [esp+0x54],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x22C],0x38
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0xF0]
	mov byte ptr [esp+0x228],0x39
	cmp ecx,ebx
	je Block250

 Block194:
	mov byte ptr [esp+0x228],0x38
	call IWzFont::CalcTextWidth
	mov esi,eax
	lea eax,[esp+0x7C]
	push 0x1C
	push eax
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x220],0x3A
	cmp ecx,ebx
	je Block250

 Block195:
	add esi,0x121
	push esi
	mov byte ptr [esp+0x224],0x3B
	call IWzFont::DrawTextA
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0x20C],0x37
	cmp eax,ebx
	je Block197

 Block196:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block197:
	mov esi,8
	mov byte ptr [esp+0x20C],0x36
	cmp word ptr [esp+0x174],si
	jne Block200

 Block198:
	xor eax,eax
	mov word ptr [esp+0x174],ax
	mov eax,dword ptr [esp+0x17C]
	cmp eax,ebx
	je Block201

 Block199:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block201

 Block200:
	lea ecx,[esp+0x174]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block201:
	mov byte ptr [esp+0x20C],0x35
	cmp word ptr [esp+0x194],si
	jne Block204

 Block202:
	mov eax,dword ptr [esp+0x19C]
	xor edx,edx
	mov word ptr [esp+0x194],dx
	cmp eax,ebx
	je Block205

 Block203:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block205

 Block204:
	lea eax,[esp+0x194]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block205:
	mov byte ptr [esp+0x20C],0x30
	cmp word ptr [esp+0x1B4],si
	jne Block208

 Block206:
	mov eax,dword ptr [esp+0x1BC]
	xor ecx,ecx
	mov word ptr [esp+0x1B4],cx
	cmp eax,ebx
	je Block209

 Block207:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block209

 Block208:
	lea edx,[esp+0x1B4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block209:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x20C],1
	cmp eax,ebx
	je Block212

 Block210:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block212

 Block211:
	mov edi,dword ptr [ZImports::_VariantInit]

 Block212:
	mov eax,dword ptr [esp+0x20]
	mov esi,dword ptr [eax+0x10]
	cmp esi,ebx
	je Block216

 Block213:
	cmp dword ptr [esi+4],ebx
	jne Block215

 Block214:
	mov ecx,dword ptr [esi]
	push ecx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block215:
	mov edx,dword ptr [esi+4]
	jmp Block217

 Block216:
	xor edx,edx

 Block217:
	mov dword ptr [esp+0x34],ebx
	cmp edx,ebx
	je Block221

 Block218:
	mov eax,edx
	lea esi,[eax+1]

 Block219:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block219

 Block220:
	sub eax,esi
	mov esi,eax
	push esi
	push edx
	push ebx
	push esi
	lea ecx,[esp+0x44]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x38]
	call ZXString<char>::ReleaseBuffer

 Block221:
	mov eax,dword ptr [ebp+0xF0]
	push 0x98
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x214],0x3C
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block223

 Block222:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block223:
	lea ecx,[esp+0x3C]
	push ecx
	call format_string_1
	add esp,0xC
	lea edx,[esp+0x1F4]
	push edx
	call edi
	lea eax,[esp+0x1F4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block251

 Block224:
	lea ecx,[esp+0x1D4]
	push ecx
	mov byte ptr [esp+0x210],0x3D
	call edi
	lea edx,[esp+0x1D4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block251

 Block225:
	mov edx,dword ptr [esp+0x214]
	lea eax,[esp+0x1F4]
	push eax
	mov eax,dword ptr [esp+0x38]
	lea ecx,[esp+0x1D8]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x220],0x3E
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0xF0]
	mov byte ptr [esp+0x21C],0x3F
	cmp ecx,ebx
	je Block250

 Block226:
	mov edx,dword ptr [esp+0x2C]
	add edx,2
	push edx
	push 0x11C
	mov byte ptr [esp+0x224],0x3E
	call IWzFont::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x20C],0x3D
	cmp word ptr [esp+0x1D4],si
	jne Block229

 Block227:
	xor eax,eax
	mov word ptr [esp+0x1D4],ax
	mov eax,dword ptr [esp+0x1DC]
	cmp eax,ebx
	je Block230

 Block228:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block230

 Block229:
	lea ecx,[esp+0x1D4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block230:
	mov byte ptr [esp+0x20C],0x3C
	cmp word ptr [esp+0x1F4],si
	jne Block233

 Block231:
	mov eax,dword ptr [esp+0x1FC]
	xor edx,edx
	mov word ptr [esp+0x1F4],dx
	cmp eax,ebx
	je Block234

 Block232:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block234

 Block233:
	lea eax,[esp+0x1F4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block234:
	mov ecx,dword ptr [esp+0x20]
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	je Block237

 Block235:
	cmp eax,3
	je Block237

 Block236:
	cmp eax,4
	jne Block242

 Block237:
	mov ecx,dword ptr [esp+0x20]
	mov ecx,dword ptr [ecx+0x48]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	push ebx
	push ecx
	mov esi,eax
	mov eax,dword ptr [ebp+0xF4]
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block239

 Block238:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block239:
	mov eax,dword ptr [esp+0x24]
	add eax,0x14
	push esi
	push eax
	push 0xF1
	push ecx
	mov ecx,dword ptr [esp+0x22C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x22C]
	mov dword ptr [esp+0x30],esp
	cmp eax,ebx
	je Block241

 Block240:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block241:
	call draw_number_by_image
	add esp,0x18

 Block242:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x20C],1
	cmp eax,ebx
	je Block244

 Block243:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block244:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x20C],0
	cmp eax,ebx
	je Block246

 Block245:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block246:
	mov edx,dword ptr [esp+0x30]
	inc edx
	cmp edx,5
	mov dword ptr [esp+0x30],edx
	jl Block2

 Block247:
	mov eax,dword ptr [esp+0x214]
	mov dword ptr [esp+0x20C],0xFFFFFFFF
	test eax,eax
	je Block249

 Block248:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block249:
	mov ecx,dword ptr [esp+0x204]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1FC
	ret 4

 Block250:
	push 0x80004003
	call _com_issue_error

 Block251:
	push eax
	call _com_issue_error
}
}
// CShopDlg::DrawMoney
_SUB_EXCEPTION_HANDLER(2E6FE0)
__SUB_CLASS_THIS(002E6FE0, __thiscall, 133381,  CShopDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E6FE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x3C],0
	mov dword ptr [esp+0xC],0
	mov eax,dword ptr [esp+0x48]
	push 1
	push eax
	lea ecx,[esp+0x14]
	push ecx
	mov byte ptr [esp+0x48],1
	call format_integer
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[esp+0x14]
	push edx
	call edi
	lea eax,[esp+0x14]
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
	mov edx,dword ptr [esp+0xC]
	lea ecx,[esp+0x14]
	push ecx
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x48],2
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x50]
	push 0x30
	push eax
	mov byte ptr [esp+0x4C],3
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x44],4
	test ecx,ecx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov byte ptr [esp+0x44],5
	call IWzFont::CalcTextWidth
	mov esi,0x1C2
	sub esi,eax
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],2
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x3C],1
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	lea edx,[esp+0x24]
	push edx
	call edi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	lea ecx,[esp+0x14]
	push ecx
	mov byte ptr [esp+0x40],6
	call edi
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x50]
	push 0x30
	push edx
	mov byte ptr [esp+0x4C],7
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x18]
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x50],8
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0x4C],9
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	push 0x43
	push esi
	mov byte ptr [esp+0x54],8
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],7
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov esi,8
	mov byte ptr [esp+0x3C],6
	cmp word ptr [esp+0x14],si
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov byte ptr [esp+0x3C],1
	cmp word ptr [esp+0x24],si
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x3C],0
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x34
	ret 8
}
}
// CShopDlg::GetOverchargePrice
_SUB_EXCEPTION_HANDLER(2E4960)
__SUB_CLASS_THIS(002E4960, __thiscall, 133387,  CShopDlg, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E4960
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
	mov dword ptr [esp+0x14],0
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test eax,eax
	je Block14

 Block1:
	lea esi,[eax+8]
	test esi,esi
	je Block15

 Block2:
	add esi,0xFFFFFFF8
	mov dword ptr [esp+0x1C],esi
	test esi,esi
	je Block4

 Block3:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x3C],0
	call CUserLocal::GetPassiveSkillData
	cmp dword ptr [eax+4],0
	mov byte ptr [esp+0x38],1
	mov ebx,1
	je Block6

 Block5:
	lea edx,[esp+0x20]
	push edx
	mov ecx,esi
	call CUserLocal::GetPassiveSkillData
	mov eax,dword ptr [eax+4]
	cmp dword ptr [eax+0x6C],0
	mov ebx,3
	mov byte ptr [esp+0x13],0
	jg Block7

 Block6:
	mov byte ptr [esp+0x13],1

 Block7:
	test bl,2
	je Block9

 Block8:
	and ebx,0xFFFFFFFD
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x14],ebx
	call ZRef<PassiveSkillData>::~ZRef<PassiveSkillData>

 Block9:
	mov dword ptr [esp+0x38],0
	test bl,1
	je Block11

 Block10:
	lea ecx,[esp+0x28]
	call ZRef<PassiveSkillData>::~ZRef<PassiveSkillData>

 Block11:
	cmp byte ptr [esp+0x13],0
	je Block16

 Block12:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test esi,esi
	je Block14

 Block13:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CUserLocal>::_ReleaseRaw

 Block14:
	xor eax,eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x2C
	ret 4

 Block15:
	xor esi,esi
	mov dword ptr [esp+0x1C],esi
	jmp Block4

 Block16:
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call CUserLocal::GetPassiveSkillData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x6C]
	add ecx,0x64
	mov dword ptr [esp+0x14],ecx
	fild dword ptr [esp+0x14]
	lea ecx,[esp+0x28]
	fimul dword ptr [esp+0x40]
	fdiv qword ptr [__real_4059000000000000]
	fstp qword ptr [esp+0x20]
	call ZRef<PassiveSkillData>::~ZRef<PassiveSkillData>
	fld qword ptr [esp+0x20]
	fld qword ptr [__real_4024000000000000]
	fmul st,st(1)
	call __ftol2_sse
	cdq
	mov ecx,0xA
	idiv ecx
	cmp edx,5
	jl Block18

 Block17:
	fadd qword ptr [__real_3ff0000000000000]

 Block18:
	call __ftol2_sse
	mov ecx,dword ptr [esp+0x40]
	cmp eax,ecx
	mov edi,ecx
	jl Block20

 Block19:
	mov edi,eax

 Block20:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test esi,esi
	je Block22

 Block21:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CUserLocal>::_ReleaseRaw

 Block22:
	mov eax,edi
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x2C
	ret 4
}
}
// CShopDlg::DrawBuyItem
_SUB_EXCEPTION_HANDLER(2E8600)
__SUB_CLASS_THIS(002E8600, __thiscall, 133380,  CShopDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E8600
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x148
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x15C]
	mov dword ptr fs:[0],eax
	mov edx,ecx
	mov dword ptr [esp+0x14],edx
	mov eax,dword ptr [edx+0xB0]
	mov ecx,dword ptr [eax+0x44]
	xor esi,esi
	mov dword ptr [esp+0x164],esi
	lea eax,[edx+0xDC]
	cmp ecx,esi
	jne Block2

 Block1:
	lea eax,[edx+0xD8]

 Block2:
	mov edi,dword ptr [edx+ecx*4+0x118]
	mov ecx,dword ptr [edx+0xC4]
	push edi
	mov dword ptr [esp+0x40],eax
	mov dword ptr [esp+0x80],edi
	call CCtrlScrollBar::SetCurPos
	mov dword ptr [esp+0x38],esi
	jmp Block5

 Block4:
	mov esi,dword ptr [esp+0x38]
	mov edi,dword ptr [esp+0x7C]

 Block5:
	mov ecx,dword ptr [esp+0x3C]
	mov eax,esi
	imul eax,0x2A
	add eax,0x73
	mov dword ptr [esp+0x24],eax
	add esi,edi
	call ZArray<CShopDlg::ITEM>::GetCount
	cmp esi,eax
	jae Block128

 Block6:
	mov ecx,dword ptr [esp+0x3C]
	lea ebx,[esi+esi*4]
	shl ebx,4
	add ebx,dword ptr [ecx]
	cmp dword ptr [ebx+0x18],0
	mov dword ptr [esp+0x20],ebx
	je Block8

 Block7:
	cmp dword ptr [ebx+0x24],0
	jne Block128

 Block8:
	mov eax,dword ptr [esp+0x14]
	cmp dword ptr [eax+0x100],esi
	jne Block17

 Block9:
	mov edx,3
	mov word ptr [esp+0x60],dx
	mov edx,0xFF
	mov dword ptr [esp+0x68],edx
	mov ecx,dword ptr [esp+0x16C]
	mov esi,dword ptr [eax+0xF8]
	mov byte ptr [esp+0x164],1
	test ecx,ecx
	je Block168

 Block10:
	mov ebp,dword ptr [esp+0x60]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x74]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x7C]
	push esi
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x38]
	push eax
	push 0x2F
	mov edi,ecx
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	call ecx
	test eax,eax
	jge Block12

 Block11:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block12:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x164],0
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov ebx,dword ptr [esp+0x20]

 Block17:
	mov ecx,3
	mov word ptr [esp+0x40],cx
	mov dword ptr [esp+0x48],0xFF
	mov ebp,dword ptr [ebx+0x14]
	mov esi,ebp
	mov byte ptr [esp+0x164],2
	test esi,esi
	je Block168

 Block18:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x18]
	push eax
	push esi
	mov dword ptr [esp+0x20],0
	call ecx
	test eax,eax
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	mov esi,dword ptr [ebx+0x14]
	mov edi,dword ptr [esp+0x18]
	test esi,esi
	je Block168

 Block21:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x6C]
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov dword ptr [esp+0x24],0
	call ecx
	test eax,eax
	jge Block23

 Block22:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block23:
	mov ecx,dword ptr [esp+0x16C]
	test ecx,ecx
	je Block168

 Block24:
	mov ebx,dword ptr [esp+0x40]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x54]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x58]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x5C]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [esp+0x34]
	sub eax,edi
	push ebp
	add eax,0x22
	push eax
	mov eax,0xC
	sub eax,dword ptr [esp+0x34]
	mov esi,ecx
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block26

 Block25:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block26:
	mov edi,8
	mov byte ptr [esp+0x164],0
	cmp word ptr [esp+0x40],di
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov ecx,dword ptr [esp+0x20]
	mov esi,dword ptr [ecx+0x10]
	test esi,esi
	je Block34

 Block31:
	cmp dword ptr [esi+4],0
	jne Block33

 Block32:
	mov edx,dword ptr [esi]
	push edx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block33:
	mov edx,dword ptr [esi+4]
	jmp Block35

 Block34:
	xor edx,edx

 Block35:
	mov dword ptr [esp+0x28],0
	test edx,edx
	je Block39

 Block36:
	mov eax,edx
	lea esi,[eax+1]

 Block37:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block37

 Block38:
	sub eax,esi
	mov esi,eax
	push esi
	push edx
	push 0
	push esi
	lea ecx,[esp+0x38]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x2C]
	call ZXString<char>::ReleaseBuffer

 Block39:
	mov eax,dword ptr [esp+0x14]
	mov eax,dword ptr [eax+0xF0]
	push 0x98
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x16C],3
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block41:
	lea eax,[esp+0x30]
	push eax
	call format_string_1
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[esp+0xFC]
	push ecx
	call esi
	lea edx,[esp+0xFC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block169

 Block42:
	lea eax,[esp+0x12C]
	mov bl,4
	push eax
	mov byte ptr [esp+0x168],bl
	call esi
	lea ecx,[esp+0x12C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block169

 Block43:
	mov ecx,dword ptr [esp+0x16C]
	lea edx,[esp+0xFC]
	push edx
	mov edx,dword ptr [esp+0x2C]
	lea eax,[esp+0x130]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x178],5
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [eax+0xF0]
	mov byte ptr [esp+0x174],6
	test ecx,ecx
	je Block168

 Block44:
	mov ebp,dword ptr [esp+0x34]
	lea edx,[ebp+2]
	push edx
	push 0x35
	mov byte ptr [esp+0x17C],5
	call IWzFont::DrawTextA
	mov byte ptr [esp+0x164],bl
	cmp word ptr [esp+0x12C],di
	jne Block47

 Block45:
	xor eax,eax
	mov word ptr [esp+0x12C],ax
	mov eax,dword ptr [esp+0x134]
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea ecx,[esp+0x12C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov byte ptr [esp+0x164],3
	cmp word ptr [esp+0xFC],di
	jne Block51

 Block49:
	mov eax,dword ptr [esp+0x104]
	xor edx,edx
	mov word ptr [esp+0xFC],dx
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea eax,[esp+0xFC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov edi,dword ptr [esp+0x20]
	mov eax,dword ptr [edi+0x18]
	test eax,eax
	je Block132

 Block53:
	mov dword ptr [esp+0x1C],0
	push 1
	push eax
	lea ecx,[esp+0x24]
	mov bl,7
	push ecx
	mov byte ptr [esp+0x170],bl
	call format_integer
	add esp,0xC
	lea edx,[esp+0x74]
	push 0x1AC1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x164],8
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax-4]
	jmp Block56

 Block55:
	xor ecx,ecx

 Block56:
	push ecx
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x164],bl
	test eax,eax
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block58:
	mov eax,3
	mov edx,0xFF
	mov word ptr [esp+0x50],ax
	mov dword ptr [esp+0x58],edx
	mov ecx,dword ptr [esp+0x14]
	mov esi,dword ptr [ecx+0xFC]
	mov ecx,dword ptr [esp+0x16C]
	mov byte ptr [esp+0x164],9
	test ecx,ecx
	je Block168

 Block59:
	mov ebp,dword ptr [esp+0x50]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x64]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x6C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x34]
	push esi
	add eax,0x15
	push eax
	push 0x32
	mov edi,ecx
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	call ecx
	test eax,eax
	jge Block61

 Block60:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block61:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x164],7
	jne Block64

 Block62:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x8C]
	push ecx
	call edi
	lea edx,[esp+0x8C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block169

 Block66:
	lea eax,[esp+0xBC]
	push eax
	mov byte ptr [esp+0x168],0xA
	call edi
	lea ecx,[esp+0xBC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block169

 Block67:
	mov ecx,dword ptr [esp+0x16C]
	lea edx,[esp+0x8C]
	push edx
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0xC0]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0xB
	push edx
	mov byte ptr [esp+0x178],bl
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [eax+0xF0]
	mov byte ptr [esp+0x174],0xC
	test ecx,ecx
	je Block168

 Block68:
	mov ebp,dword ptr [esp+0x34]
	add ebp,0x16
	push ebp
	push 0x44
	mov byte ptr [esp+0x17C],bl
	call IWzFont::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x164],0xA
	cmp word ptr [esp+0xBC],si
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0xC4]
	xor ecx,ecx
	mov word ptr [esp+0xBC],cx
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea edx,[esp+0xBC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov byte ptr [esp+0x164],7
	cmp word ptr [esp+0x8C],si
	jne Block75

 Block73:
	xor eax,eax
	mov word ptr [esp+0x8C],ax
	mov eax,dword ptr [esp+0x94]
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea ecx,[esp+0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov ebx,dword ptr [esp+0x20]
	mov edx,dword ptr [ebx+0x1C]
	mov esi,dword ptr [ebx+0x18]
	mov ecx,dword ptr [esp+0x14]
	push edx
	push esi
	call CShopDlg::GetDiscountPriceByRate
	test eax,eax
	je Block78

 Block77:
	mov esi,eax

 Block78:
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,dword ptr [esp+0x14]
	push eax
	push esi
	call CShopDlg::GetDiscountPrice
	test eax,eax
	je Block117

 Block79:
	mov dword ptr [esp+0x18],0
	push 1
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x170],0xD
	call format_integer
	add esp,0xC
	lea ecx,[esp+0x78]
	push 0x1AC1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x164],0xE
	test eax,eax
	je Block81

 Block80:
	mov ecx,dword ptr [eax-4]
	jmp Block82

 Block81:
	xor ecx,ecx

 Block82:
	push ecx
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x164],0xD
	test eax,eax
	je Block84

 Block83:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block84:
	lea edx,[esp+0x11C]
	push edx
	call edi
	lea eax,[esp+0x11C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block169

 Block85:
	lea ecx,[esp+0xDC]
	push ecx
	mov byte ptr [esp+0x168],0xF
	call edi
	lea edx,[esp+0xDC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block169

 Block86:
	mov esi,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x11C]
	push eax
	push 0xA0000000
	add esi,0x1A
	push esi
	lea ecx,[esp+0xE8]
	push ecx
	push ecx
	mov dword ptr [esp+0x84],esp
	mov ecx,esp
	mov bl,0x10
	push edx
	mov byte ptr [esp+0x17C],bl
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [eax+0xF0]
	mov byte ptr [esp+0x178],0x11
	test ecx,ecx
	je Block168

 Block87:
	mov byte ptr [esp+0x178],bl
	call IWzFont::CalcTextWidth
	mov ecx,dword ptr [esp+0x178]
	test ecx,ecx
	je Block168

 Block88:
	add eax,0x44
	push eax
	push esi
	push 0x44
	call IWzCanvas::DrawLine
	mov esi,8
	mov byte ptr [esp+0x164],0xF
	cmp word ptr [esp+0xDC],si
	jne Block91

 Block89:
	mov eax,dword ptr [esp+0xE4]
	xor ecx,ecx
	mov word ptr [esp+0xDC],cx
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea edx,[esp+0xDC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block92:
	mov byte ptr [esp+0x164],0xD
	cmp word ptr [esp+0x11C],si
	jne Block95

 Block93:
	xor eax,eax
	mov word ptr [esp+0x11C],ax
	mov eax,dword ptr [esp+0x124]
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea ecx,[esp+0x11C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	lea edx,[esp+0xCC]
	push edx
	call edi
	lea eax,[esp+0xCC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block169

 Block97:
	lea ecx,[esp+0xAC]
	push ecx
	mov byte ptr [esp+0x168],0x12
	call edi
	lea edx,[esp+0xAC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block169

 Block98:
	lea eax,[esp+0x9C]
	push eax
	mov byte ptr [esp+0x168],0x13
	call edi
	lea ecx,[esp+0x9C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block169

 Block99:
	mov ecx,dword ptr [esp+0x16C]
	lea edx,[esp+0xCC]
	push edx
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0xB0]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x80],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x178],0x14
	call _xbstr_t::_ctor_0
	mov edx,dword ptr [esp+0x2C]
	push ebp
	lea eax,[esp+0xB0]
	push eax
	push ecx
	mov dword ptr [esp+0x50],esp
	mov ecx,esp
	mov bl,0x15
	push edx
	mov byte ptr [esp+0x184],bl
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [eax+0xF0]
	mov byte ptr [esp+0x180],0x16
	test ecx,ecx
	je Block168

 Block100:
	mov byte ptr [esp+0x180],bl
	call IWzFont::CalcTextWidth
	lea ecx,[esp+0x94]
	push 0x22
	push ecx
	mov esi,eax
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x178],0x17
	test ecx,ecx
	je Block168

 Block101:
	add esi,0x49
	push esi
	mov byte ptr [esp+0x17C],0x18
	call IWzFont::DrawTextA
	mov eax,dword ptr [esp+0x80]
	mov byte ptr [esp+0x164],0x14
	test eax,eax
	je Block103

 Block102:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block103:
	mov esi,8
	mov byte ptr [esp+0x164],0x13
	cmp word ptr [esp+0x9C],si
	jne Block106

 Block104:
	mov eax,dword ptr [esp+0xA4]
	xor ecx,ecx
	mov word ptr [esp+0x9C],cx
	test eax,eax
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea edx,[esp+0x9C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block107:
	mov byte ptr [esp+0x164],0x12
	cmp word ptr [esp+0xAC],si
	jne Block110

 Block108:
	xor eax,eax
	mov word ptr [esp+0xAC],ax
	mov eax,dword ptr [esp+0xB4]
	test eax,eax
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea ecx,[esp+0xAC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block111:
	mov byte ptr [esp+0x164],0xD
	cmp word ptr [esp+0xCC],si
	jne Block114

 Block112:
	mov eax,dword ptr [esp+0xD4]
	xor edx,edx
	mov word ptr [esp+0xCC],dx
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea eax,[esp+0xCC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block115:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x164],7
	test eax,eax
	je Block117

 Block116:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block117:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x164],3
	test eax,eax
	je Block119

 Block118:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block119:
	mov ebp,dword ptr [esp+0x24]
	mov edi,dword ptr [esp+0x20]

 Block120:
	cmp dword ptr [edi+0x40],1
	jle Block126

 Block121:
	mov eax,dword ptr [esp+0x14]
	mov eax,dword ptr [eax+0xF4]
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block123

 Block122:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block123:
	mov eax,dword ptr [edi+0x40]
	push eax
	add ebp,0x14
	push ebp
	push 0xA
	push ecx
	mov ecx,dword ptr [esp+0x184]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x184]
	mov dword ptr [esp+0x4C],esp
	test eax,eax
	je Block125

 Block124:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block125:
	call draw_number_by_image
	add esp,0x18

 Block126:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x164],0
	test eax,eax
	je Block128

 Block127:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block128:
	mov eax,dword ptr [esp+0x38]
	inc eax
	cmp eax,5
	mov dword ptr [esp+0x38],eax
	jl Block4

 Block129:
	mov eax,dword ptr [esp+0x16C]
	mov dword ptr [esp+0x164],0xFFFFFFFF
	test eax,eax
	je Block131

 Block130:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block131:
	mov ecx,dword ptr [esp+0x15C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x154
	ret 4

 Block132:
	cmp dword ptr [edi+0x20],0
	je Block120

 Block133:
	mov eax,dword ptr [edi+0x24]
	test eax,eax
	je Block120

 Block134:
	mov dword ptr [esp+0x2C],0
	push 1
	push eax
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0x170],0x19
	call format_integer
	add esp,0xC
	lea edx,[esp+0x10C]
	push edx
	call esi
	lea eax,[esp+0x10C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block169

 Block135:
	lea ecx,[esp+0xEC]
	push ecx
	mov byte ptr [esp+0x168],0x1A
	call esi
	lea edx,[esp+0xEC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block169

 Block136:
	mov edx,dword ptr [esp+0x16C]
	lea eax,[esp+0x10C]
	push eax
	mov eax,dword ptr [esp+0x30]
	lea ecx,[esp+0xF0]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	mov bl,0x1B
	push eax
	mov byte ptr [esp+0x178],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x24]
	mov ecx,dword ptr [ecx+0xF0]
	mov byte ptr [esp+0x174],0x1C
	test ecx,ecx
	je Block168

 Block137:
	lea edx,[ebp+0x16]
	push edx
	push 0x44
	mov byte ptr [esp+0x17C],bl
	call IWzFont::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x164],0x1A
	cmp word ptr [esp+0xEC],si
	jne Block140

 Block138:
	xor eax,eax
	mov word ptr [esp+0xEC],ax
	mov eax,dword ptr [esp+0xF4]
	test eax,eax
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea ecx,[esp+0xEC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block141:
	mov byte ptr [esp+0x164],0x19
	cmp word ptr [esp+0x10C],si
	jne Block144

 Block142:
	mov eax,dword ptr [esp+0x114]
	xor edx,edx
	mov word ptr [esp+0x10C],dx
	test eax,eax
	je Block145

 Block143:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block144:
	lea eax,[esp+0x10C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block145:
	mov ecx,dword ptr [edi+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esp+0x34]
	push edx
	call CItemInfo::GetItemInfo
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	sete cl
	mov bl,0x1D
	mov byte ptr [esp+0x164],bl
	test cl,cl
	je Block150

 Block146:
	mov byte ptr [esp+0x164],0x19
	test eax,eax
	je Block148

 Block147:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block148:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x164],3
	test eax,eax
	je Block126

 Block149:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block126

 Block150:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x662
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x34]
	mov byte ptr [esp+0x168],0x1E
	test ecx,ecx
	je Block168

 Block151:
	lea edx,[esp+0x140]
	push edx
	mov byte ptr [esp+0x16C],bl
	call IWzProperty::Getitem
	push eax
	lea eax,[esp+0x8C]
	push eax
	mov byte ptr [esp+0x16C],0x1F
	call get_unknown
	add esp,8
	push eax
	lea ecx,[esp+0x88]
	mov byte ptr [esp+0x168],0x20
	call _x_com_ptr<IWzCanvas>::CreateFromUnknownComPtr
	mov eax,dword ptr [esp+0x88]
	mov byte ptr [esp+0x164],0x22
	test eax,eax
	je Block153

 Block152:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block153:
	mov byte ptr [esp+0x164],0x23
	cmp word ptr [esp+0x13C],si
	jne Block156

 Block154:
	xor eax,eax
	mov word ptr [esp+0x13C],ax
	mov eax,dword ptr [esp+0x144]
	test eax,eax
	je Block157

 Block155:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block157

 Block156:
	lea ecx,[esp+0x13C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block157:
	mov esi,dword ptr [esp+0x84]
	test esi,esi
	sete al
	test al,al
	je Block161

 Block158:
	mov byte ptr [esp+0x164],bl
	test esi,esi
	je Block160

 Block159:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block160:
	mov eax,dword ptr [esp+0x30]
	jmp Block146

 Block161:
	mov eax,3
	mov word ptr [esp+0x14C],ax
	mov dword ptr [esp+0x154],0xFF
	mov ecx,dword ptr [esp+0x16C]
	mov byte ptr [esp+0x164],0x24
	test ecx,ecx
	je Block168

 Block162:
	lea edx,[esp+0x14C]
	push edx
	push esi
	lea eax,[ebp+0x15]
	push eax
	push 0x32
	call IWzCanvas::Copy
	lea ecx,[esp+0x14C]
	call Ztl_variant_t::~Ztl_variant_t
	mov byte ptr [esp+0x164],bl
	test esi,esi
	je Block164

 Block163:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block164:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x164],0x19
	test eax,eax
	je Block166

 Block165:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block166:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x164],3
	test eax,eax
	je Block120

 Block167:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block120

 Block168:
	push 0x80004003
	call _com_issue_error

 Block169:
	push eax
	call _com_issue_error
}
}
// CShopDlg::OnKey
__SUB_CLASS_THIS(002E3950, __thiscall, 133371,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [ecx+0xD0],0
	mov edx,dword ptr [esp+8]
	mov eax,dword ptr [esp+4]
	je Block4

 Block1:
	test edx,edx
	js Block4

 Block2:
	cmp eax,0x1B
	je Block5

 Block3:
	cmp eax,0xD
	je Block5

 Block4:
	mov dword ptr [esp+8],edx
	mov dword ptr [esp+4],eax
	jmp  CDialog::OnKey

 Block5:
	ret 8
}
}
// CShopDlg::OnChildNotify
__SUB_CLASS_THIS(002E3A30, __thiscall, 133372,  CShopDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,0x3EC
	je Block6

 Block1:
	cmp eax,0x3ED
	je Block6

 Block2:
	cmp eax,0x3EA
	je Block4

 Block3:
	cmp eax,0x3EB
	jne Block11

 Block4:
	cmp edx,0x1F4
	jne Block11

 Block5:
	mov eax,dword ptr [esp+0xC]
	push eax
	call CShopDlg::OnTabChanged
	ret 0xC

 Block6:
	cmp edx,0x12C
	jb Block11

 Block7:
	cmp edx,0x130
	ja Block11

 Block8:
	cmp eax,0x3EC
	jne Block10

 Block9:
	mov edx,dword ptr [ecx+0xC4]
	mov eax,dword ptr [ecx+0xB0]
	mov eax,dword ptr [eax+0x44]
	mov edx,dword ptr [edx+0x38]
	mov dword ptr [ecx+eax*4+0x118],edx

 Block10:
	push 0
	call CWnd::InvalidateRect
	ret 0xC

 Block11:
	cmp edx,0x64
	jne Block13

 Block12:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax

 Block13:
	ret 0xC
}
}
// CShopDlg::GetRTTI
__SUB_CLASS_THIS0(002EA810, __thiscall, 133390,  CShopDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CShopDlg::ms_RTTI_CShopDlg
	ret
}
}
// CShopDlg::SendBuyRequest
_SUB_EXCEPTION_HANDLER(2E9BB0)
__SUB_CLASS_THIS0(002E9BB0, __thiscall, 133362,  CShopDlg, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E9BB0
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
	mov ebx,ecx
	mov dword ptr [esp+0x28],ebx
	xor ebp,ebp
	mov dword ptr [esp+0x18],ebp
	mov esi,dword ptr [ebx+0x100]
	cmp esi,ebp
	jl Block132

 Block1:
	mov eax,dword ptr [ebx+0xB0]
	lea ecx,[ebx+0xDC]
	cmp dword ptr [eax+0x44],ebp
	jne Block3

 Block2:
	lea ecx,[ebx+0xD8]

 Block3:
	mov ecx,dword ptr [ecx]
	cmp ecx,ebp
	jne Block5

 Block4:
	xor ecx,ecx
	jmp Block6

 Block5:
	mov ecx,dword ptr [ecx-4]

 Block6:
	cmp esi,ecx
	jae Block132

 Block7:
	cmp dword ptr [ebx+0x10C],ebp
	jne Block132

 Block8:
	mov ecx,dword ptr [eax+0x44]
	mov dword ptr [esp+0x48],ecx
	lea eax,[ebx+0xDC]
	cmp ecx,ebp
	jne Block10

 Block9:
	lea eax,[ebx+0xD8]

 Block10:
	lea esi,[esi+esi*4]
	shl esi,4
	add esi,dword ptr [eax]
	cmp dword ptr [esi+0x18],ebp
	je Block12

 Block11:
	cmp dword ptr [esi+0x24],ebp
	jne Block132

 Block12:
	mov dword ptr [esp+0x20],1
	mov dword ptr [esp+0x1C],ebp
	mov edi,dword ptr [esi+0x2C]
	mov dword ptr [esp+0x68],ebp
	cmp edi,ebp
	je Block22

 Block13:
	jge Block18

 Block14:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add ecx,0x20D0
	call BasicStat::_ZtlSecureGet_nLevel
	mov edx,edi
	neg edx
	cmp eax,edx
	jle Block18

 Block15:
	push ebp
	push ebp
	push ebp
	push ebp
	lea eax,[esp+0x34]
	push 0x154F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x38],ebp
	mov ecx,dword ptr [esi+0x2C]
	mov eax,dword ptr [eax]
	neg ecx
	push ecx
	push eax
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x84],2
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x5C],esp
	push eax
	call ZXString<char>::_ctor_copy
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x3C]
	add esp,0x14
	mov byte ptr [esp+0x68],1
	cmp eax,ebp
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x68],0
	cmp eax,ebp
	jmp Block129

 Block18:
	cmp edi,ebp
	jle Block22

 Block19:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add ecx,0x20D0
	call BasicStat::_ZtlSecureGet_nLevel
	cmp eax,dword ptr [esi+0x2C]
	jge Block22

 Block20:
	push ebp
	push ebp
	push ebp
	push ebp
	lea eax,[esp+0x34]
	push 0x154E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x38],ebp
	mov ecx,dword ptr [esi+0x2C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x84],4
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x5C],esp
	push eax
	call ZXString<char>::_ctor_copy
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x3C]
	add esp,0x14
	mov byte ptr [esp+0x68],3
	cmp eax,ebp
	je Block17

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	mov eax,dword ptr [esp+0x28]
	add esp,4
	mov byte ptr [esp+0x68],0
	cmp eax,ebp
	jmp Block129

 Block22:
	mov edi,dword ptr [esi+0x18]
	cmp edi,ebp
	je Block71

 Block23:
	mov eax,dword ptr [esi+0x1C]
	push eax
	push edi
	mov ecx,ebx
	call CShopDlg::GetDiscountPriceByRate
	cmp eax,ebp
	je Block25

 Block24:
	mov edi,eax

 Block25:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	push edi
	mov ecx,ebx
	call CShopDlg::GetDiscountPrice
	mov ecx,esi
	mov dword ptr [esp+0x40],eax
	call TSecType<long>::GetData
	push eax
	call is_treat_singly_0
	add esp,4
	test eax,eax
	jne Block46

 Block26:
	cmp dword ptr [esi+0x40],1
	jg Block46

 Block27:
	lea ebp,[eax+0xB]
	push 0x362
	cmp dword ptr [esi+0x28],eax
	jne Block29

 Block28:
	lea ecx,[esp+0x34]
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x68],9
	lea ebx,[ebp+5]
	jmp Block30

 Block29:
	lea edx,[esp+0x30]
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edi,eax
	lea eax,[esp+0x20]
	push 0x1550
	push eax
	mov dword ptr [esp+0x70],0xA
	mov dword ptr [esp+0x20],0x20
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push edi
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,eax
	mov dword ptr [esp+0x70],ebp
	mov dword ptr [esp+0x20],0x60
	call ZXString<char>::op_add_1
	mov dword ptr [esp+0x68],0xC
	mov ebx,0xE0

 Block30:
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x68],ebp
	test bl,bl
	jns Block33

 Block31:
	mov eax,dword ptr [esp+0x24]
	and ebx,0xFFFFFF7F
	mov dword ptr [esp+0x18],ebx
	test eax,eax
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	mov dword ptr [esp+0x68],0xA
	test bl,0x40
	je Block36

 Block34:
	mov eax,dword ptr [esp+0x20]
	and ebx,0xFFFFFFBF
	mov dword ptr [esp+0x18],ebx
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	mov dword ptr [esp+0x68],9
	test bl,0x20
	je Block39

 Block37:
	mov eax,dword ptr [esp+0x2C]
	and ebx,0xFFFFFFDF
	mov dword ptr [esp+0x18],ebx
	test eax,eax
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	mov dword ptr [esp+0x68],0
	test bl,0x10
	je Block42

 Block40:
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	mov edx,dword ptr [esi+0x38]
	mov edi,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x28]
	push edx
	push 1
	push edi
	call CShopDlg::AskItemCount
	mov dword ptr [esp+0x20],eax
	test eax,eax
	jle Block44

 Block43:
	cmp eax,dword ptr [esi+0x38]
	jle Block62

 Block44:
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test edi,edi
	je Block132

 Block45:
	add edi,0xFFFFFFF4
	push edi
	jmp Block131

 Block46:
	cmp dword ptr [esi+0x28],0
	mov ebp,7
	push 0x361
	jne Block48

 Block47:
	lea eax,[esp+0x3C]
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x68],5
	lea ebx,[ebp-6]
	jmp Block49

 Block48:
	lea ecx,[esp+0x28]
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edi,eax
	lea edx,[esp+0x2C]
	push 0x1550
	mov ebx,6
	push edx
	mov dword ptr [esp+0x70],ebx
	mov dword ptr [esp+0x20],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push edi
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,eax
	mov dword ptr [esp+0x70],ebp
	mov dword ptr [esp+0x20],ebx
	call ZXString<char>::op_add_1
	mov dword ptr [esp+0x68],8
	mov ebx,0xE

 Block49:
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x68],ebp
	test bl,8
	je Block52

 Block50:
	mov eax,dword ptr [esp+0x30]
	and ebx,0xFFFFFFF7
	mov dword ptr [esp+0x18],ebx
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block52:
	mov dword ptr [esp+0x68],6
	test bl,4
	je Block55

 Block53:
	mov eax,dword ptr [esp+0x2C]
	and ebx,0xFFFFFFFB
	mov dword ptr [esp+0x18],ebx
	test eax,eax
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block55:
	mov dword ptr [esp+0x68],5
	test bl,2
	je Block58

 Block56:
	mov eax,dword ptr [esp+0x24]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x18],ebx
	test eax,eax
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block58:
	mov dword ptr [esp+0x68],0
	test bl,1
	je Block61

 Block59:
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block61

 Block60:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block61:
	push 0
	push 0
	push 0
	push 0
	push ecx
	lea edx,[esp+0x30]
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push edx
	call ZXString<char>::_ctor_copy
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block128

 Block62:
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	jne Block64

 Block63:
	mov eax,dword ptr [esi+0x18]

 Block64:
	imul dword ptr [esp+0x20]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ebp,eax
	lea eax,[esp+0x40]
	push eax
	mov edi,edx
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [eax+4]
	mov byte ptr [esp+0x68],0xD
	call GW_CharacterStat::_ZtlSecureGet_nMoney
	lea ecx,[esp+0x40]
	mov ebx,eax
	mov byte ptr [esp+0x68],0
	call ZRef<CharacterData>::~ZRef<CharacterData>
	test edi,edi
	jl Block70

 Block65:
	jg Block67

 Block66:
	test ebp,ebp
	jbe Block70

 Block67:
	mov eax,ebx
	cdq
	cmp edx,edi
	jg Block121

 Block68:
	jl Block70

 Block69:
	cmp eax,ebp
	jae Block121

 Block70:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1A8B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block128

 Block71:
	cmp dword ptr [esi+0x24],ebp
	je Block121

 Block72:
	xor ebp,ebp
	lea ebx,[ebp+1]

 Block73:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x38]
	push edx
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov eax,dword ptr [eax+0x511]
	test eax,eax
	je Block75

 Block74:
	mov eax,dword ptr [eax-4]

 Block75:
	dec eax
	cmp ebx,eax
	lea ecx,[esp+0x38]
	setle byte ptr [esp+0x17]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	cmp byte ptr [esp+0x17],0
	je Block80

 Block76:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x30]
	push eax
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	push ebx
	push 4
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,eax
	call CharacterData::GetItem
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x68],0xE
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov edi,dword ptr [esp+0x44]
	test edi,edi
	je Block79

 Block77:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	cmp eax,dword ptr [esi+0x20]
	jne Block79

 Block78:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x20]
	mov ecx,edi
	call eax
	add ebp,eax

 Block79:
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x68],0
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	inc ebx
	jmp Block73

 Block80:
	cmp dword ptr [esi+0x40],1
	mov dword ptr [esp+0x24],ebp
	jne Block100

 Block81:
	cmp dword ptr [esi+0x28],0
	mov ebp,0x10
	lea ebx,[ebp+1]
	push 0x362
	jne Block83

 Block82:
	lea ecx,[esp+0x30]
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x68],0xF
	mov edi,0x100
	jmp Block84

 Block83:
	lea edx,[esp+0x34]
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edi,eax
	lea eax,[esp+0x38]
	push 0x1550
	push eax
	mov dword ptr [esp+0x70],ebp
	mov dword ptr [esp+0x20],0x200
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push edi
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,eax
	mov dword ptr [esp+0x70],ebx
	mov dword ptr [esp+0x20],0x600
	call ZXString<char>::op_add_1
	mov dword ptr [esp+0x68],0x12
	mov edi,0xE00

 Block84:
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x1C],edi
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x68],ebx
	test edi,0x800
	je Block87

 Block85:
	mov eax,dword ptr [esp+0x40]
	and edi,0xFFFFF7FF
	mov dword ptr [esp+0x18],edi
	test eax,eax
	je Block87

 Block86:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block87:
	mov dword ptr [esp+0x68],ebp
	test edi,0x400
	je Block90

 Block88:
	mov eax,dword ptr [esp+0x38]
	and edi,0xFFFFFBFF
	mov dword ptr [esp+0x18],edi
	test eax,eax
	je Block90

 Block89:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block90:
	mov dword ptr [esp+0x68],0xF
	test edi,0x200
	je Block93

 Block91:
	mov eax,dword ptr [esp+0x30]
	and edi,0xFFFFFDFF
	mov dword ptr [esp+0x18],edi
	test eax,eax
	je Block93

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block93:
	mov dword ptr [esp+0x68],0
	test edi,0x100
	je Block96

 Block94:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block96

 Block95:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block96:
	mov edx,dword ptr [esi+0x38]
	mov edi,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x28]
	push edx
	push 1
	push edi
	call CShopDlg::AskItemCount
	mov ebp,eax
	mov dword ptr [esp+0x20],ebp
	test ebp,ebp
	jle Block98

 Block97:
	cmp ebp,dword ptr [esi+0x38]
	jle Block101

 Block98:
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test edi,edi
	je Block132

 Block99:
	add edi,0xFFFFFFF4
	push edi
	jmp Block131

 Block100:
	mov ebp,dword ptr [esp+0x20]

 Block101:
	mov eax,dword ptr [esi+0x20]
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	mov edi,eax
	lea edx,[esp+0x40]
	push 0x1551
	mov bl,0x13
	push edx
	mov byte ptr [esp+0x70],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x18],0
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push eax
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x78],0x15
	call ZXString<char>::Format
	add esp,0x10
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x68],0x14
	test eax,eax
	je Block103

 Block102:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block103:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x68],bl
	test eax,eax
	je Block105

 Block104:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block105:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x68],0
	test eax,eax
	je Block107

 Block106:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block107:
	cmp dword ptr [esi+0x28],0
	je Block112

 Block108:
	lea ecx,[esp+0x38]
	push 0x1550
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[esp+0x44]
	push ecx
	mov bl,0x16
	mov ecx,eax
	mov byte ptr [esp+0x70],bl
	call ZXString<char>::op_add_1
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x6C],0x17
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x68],bl
	test eax,eax
	je Block110

 Block109:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block110:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x68],0
	test eax,eax
	je Block112

 Block111:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block112:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea edx,[esp+0x30]
	mov dword ptr [esp+0x54],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block128

 Block113:
	mov edi,dword ptr [esi+0x24]
	imul edi,ebp
	test edi,edi
	jle Block115

 Block114:
	cmp dword ptr [esp+0x24],edi
	jge Block121

 Block115:
	mov eax,dword ptr [esi+0x20]
	push 0
	push 0
	push 0
	push 0
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	mov esi,eax
	lea edx,[esp+0x50]
	push 0x153E
	mov bl,0x18
	push edx
	mov byte ptr [esp+0x80],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x38],0
	sub edi,dword ptr [esp+0x34]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push edi
	push ecx
	push eax
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0x88],0x1A
	call ZXString<char>::Format
	add esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x5C],esp
	push eax
	call ZXString<char>::_ctor_copy
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x3C]
	add esp,0x14
	mov byte ptr [esp+0x68],0x19
	test eax,eax
	je Block117

 Block116:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block117:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x68],bl
	test eax,eax
	je Block119

 Block118:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block119:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x68],0
	test eax,eax
	je Block128

 Block120:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block128

 Block121:
	push 0x42
	lea ecx,[esp+0x50]
	call COutPacket::_ctor_1
	push 0
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0x6C],0x1B
	call COutPacket::Encode1
	cmp dword ptr [esp+0x48],0
	mov ebx,dword ptr [esp+0x28]
	mov eax,dword ptr [ebx+0x100]
	je Block123

 Block122:
	mov ecx,dword ptr [ebx+0xE0]
	mov eax,dword ptr [ecx+eax*4]

 Block123:
	push eax
	lea ecx,[esp+0x50]
	call COutPacket::Encode2
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	lea ecx,[esp+0x50]
	call COutPacket::Encode4
	mov edx,dword ptr [esp+0x20]
	push edx
	lea ecx,[esp+0x50]
	call COutPacket::Encode2
	mov eax,dword ptr [esi+0x1C]
	mov edi,dword ptr [esi+0x18]
	push eax
	push edi
	mov ecx,ebx
	call CShopDlg::GetDiscountPriceByRate
	test eax,eax
	je Block125

 Block124:
	mov edi,eax

 Block125:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	push edi
	mov ecx,ebx
	call CShopDlg::GetDiscountPrice
	test eax,eax
	jg Block127

 Block126:
	mov eax,dword ptr [esi+0x18]

 Block127:
	push eax
	lea ecx,[esp+0x50]
	call COutPacket::Encode4
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	mov ecx,esi
	mov dword ptr [ebx+0x10C],1
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[ebx+0xEC]
	push edx
	push eax
	mov ecx,ebx
	mov dword ptr [ebx+0x108],eax
	call CShopDlg::SetSellItems
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0x68],0
	call ZArray<unsigned char>::RemoveAll

 Block128:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test eax,eax

 Block129:
	je Block132

 Block130:
	add eax,0xFFFFFFF4
	push eax

 Block131:
	call ZXString<char>::_Release
	add esp,4

 Block132:
	mov ecx,dword ptr [esp+0x60]
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
// CShopDlg::AskItemCount
_SUB_EXCEPTION_HANDLER(2E5220)
__SUB_CLASS_THIS(002E5220, __thiscall, 133383,  CShopDlg, long, const char*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E5220
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
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x24],0
	test eax,eax
	je Block11

 Block1:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block11

 Block2:
	lea edi,[eax+8]
	test edi,edi
	je Block11

 Block3:
	add edi,0xFFFFFFF8
	mov dword ptr [esp+0x18],edi
	test edi,edi
	je Block5

 Block4:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov edx,dword ptr [esp+0x2C]
	push 0
	push 1
	push ecx
	mov ebx,esp
	mov dword ptr [esp+0x30],1
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ebx],0
	test edx,edx
	je Block9

 Block6:
	mov eax,edx
	lea esi,[eax+1]
	mov edi,edi

 Block7:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block7

 Block8:
	sub eax,esi
	mov esi,eax
	push esi
	push edx
	push 0
	push esi
	mov ecx,ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,ebx
	call ZXString<char>::ReleaseBuffer

 Block9:
	push 0
	push 2
	mov ecx,edi
	call CUtilDlgEx::SetUtilDlgEx_1
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x30]
	push 0
	push 0xA
	push 0
	push ecx
	push 1
	push edx
	mov ecx,edi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_NO
	mov ecx,edi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,edi
	call CDialog::DoModal
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,1
	jne Block12

 Block10:
	mov edi,dword ptr [edi+0xF4]
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov eax,edi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x18
	ret 0xC

 Block11:
	xor edi,edi
	mov dword ptr [esp+0x18],edi
	jmp Block5

 Block12:
	test edi,edi
	je Block14

 Block13:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block14:
	xor eax,eax
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x18
	ret 0xC
}
}
// CShopDlg::IsKindOf
__SUB_CLASS_THIS(002EA830, __thiscall, 133391,  CShopDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CShopDlg::ms_RTTI_CShopDlg
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
// CShopDlg::Update
__SUB_CLASS_THIS0(002E3A20, __thiscall, 133362,  CShopDlg, void) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x124]
	jmp  CAvatar::Update
}
}
// CShopDlg::ITEM::ITEM
__SUB_CLASS_THIS0(002E5390, __thiscall, 133403,  CShopDlg::ITEM, void) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esi+8],eax
	lea edi,[esi-0x3FF8]
	call _rand
	add eax,edi
	mov dword ptr [esi],eax
	call _rand
	mov cl,byte ptr [esi]
	add eax,edi
	mov dword ptr [esi+4],eax
	mov eax,dword ptr [esi+8]
	mov byte ptr [eax+5],cl
	mov al,byte ptr [esi+4]
	mov edx,dword ptr [esi+8]
	mov byte ptr [edx+6],al
	xor eax,eax
	push eax
	mov ecx,esi
	xor edi,edi
	call TSecType<long>::SetData
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esi+0x14],edi
	mov dword ptr [esi+0x48],edi
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CShopDlg::OnMouseEnter
__SUB_CLASS_THIS(002E3930, __thiscall, 133370,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0x128]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CShopDlg::SendRechargeRequest
_SUB_EXCEPTION_HANDLER(2E4E90)
__SUB_CLASS_THIS0(002E4E90, __thiscall, 133362,  CShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E4E90
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
	mov dword ptr [esp+0x20],ecx
	xor ebp,ebp
	mov dword ptr [esp+0x18],ebp
	mov esi,dword ptr [ecx+0x104]
	cmp esi,ebp
	jl Block18

 Block1:
	mov eax,dword ptr [ecx+0xE8]
	cmp eax,ebp
	jne Block3

 Block2:
	xor eax,eax
	jmp Block4

 Block3:
	mov eax,dword ptr [eax-4]

 Block4:
	cmp esi,eax
	jae Block18

 Block5:
	cmp dword ptr [ecx+0x10C],ebp
	jne Block18

 Block6:
	fldz
	lea esi,[esi+esi*4]
	shl esi,4
	add esi,dword ptr [ecx+0xE8]
	fcomp qword ptr [esi+0x30]
	fnstsw ax
	test ah,0x44
	jnp Block18

 Block7:
	lea eax,[esi+0x44]
	push eax
	lea ecx,[esp+0x30]
	call ZRef<GW_ItemSlotBase>::_ctor_copy
	mov ecx,esi
	mov dword ptr [esp+0x4C],ebp
	call TSecType<long>::GetData
	mov ebx,dword ptr [esi+0xC]
	mov ecx,eax
	mov eax,0x431BDE83
	imul ecx
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	sar edx,0x12
	mov ecx,esp
	mov edi,edx
	mov dword ptr [esp+0x38],esp
	push 0x36B
	shr edi,0x1F
	push ecx
	add edi,edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block17

 Block8:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x24]
	push edx
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	lea ecx,[esp+0x24]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov esi,dword ptr [esp+0x30]
	test esi,esi
	je Block11

 Block9:
	push ebx
	push edi
	lea eax,[esp+0x20]
	push eax
	mov ecx,ebp
	call CharacterData::GetItem
	mov ecx,1
	cmp dword ptr [eax+4],esi
	jne Block12

 Block10:
	mov byte ptr [esp+0x17],0
	jmp Block13

 Block11:
	mov cl,byte ptr [esp+0x18]

 Block12:
	mov byte ptr [esp+0x17],1

 Block13:
	test cl,1
	je Block15

 Block14:
	lea ecx,[esp+0x18]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>

 Block15:
	cmp byte ptr [esp+0x17],0
	jne Block17

 Block16:
	push 0x42
	lea ecx,[esp+0x38]
	call COutPacket::_ctor_1
	push 2
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x50],1
	call COutPacket::Encode1
	push ebx
	lea ecx,[esp+0x38]
	call COutPacket::Encode2
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	mov edx,dword ptr [esp+0x20]
	lea ecx,[esp+0x38]
	mov dword ptr [edx+0x10C],1
	mov byte ptr [esp+0x4C],0
	call ZArray<unsigned char>::RemoveAll

 Block17:
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>

 Block18:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret
}
}
// CShopDlg::SetRet
_SUB_EXCEPTION_HANDLER(2E4B80)
__SUB_CLASS_THIS(002E4B80, __thiscall, 133364,  CShopDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E4B80
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
	push 0x42
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 3
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	cmp dword ptr [esi+0x84],0
	jne Block3

 Block1:
	cmp dword ptr [esi+0x14],0
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [esi+0x80],ecx
	mov dword ptr [esi+0x84],1
	je Block3

 Block2:
	mov ecx,esi
	call CWnd::Destroy

 Block3:
	mov ecx,esi
	call CWnd::Destroy
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [edx]
	lea ecx,[esi+8]
	push 1
	call eax
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
// CShopDlg::GetItemIndexFromPoint
__SUB_CLASS_THIS(002E3C00, __thiscall, 133382,  CShopDlg, int32_t, long, long, int32_t*, long*) {
__asm {

 Block0:
	sub esp,0x1C
	push ebx
	push ebp
	mov ebp,ecx
	mov eax,dword ptr [ebp+0xC4]
	mov ecx,dword ptr [eax+0x38]
	push esi
	push edi
	mov dword ptr [esp+0x10],ecx
	mov edi,0x73
	jmp Block2

 Block2:
	mov ecx,ebp
	call CShopDlg::GetCurBuyItem
	mov ecx,eax
	call ZArray<CShopDlg::ITEM>::GetCount
	cmp dword ptr [esp+0x10],eax
	jae Block11

 Block3:
	mov esi,dword ptr [ebp+0xF8]
	test esi,esi
	je Block23

 Block4:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],0
	call ecx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov esi,dword ptr [ebp+0xF8]
	mov ebx,dword ptr [esp+0x14]
	test esi,esi
	je Block23

 Block7:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x18]
	push eax
	push esi
	mov dword ptr [esp+0x20],0
	call ecx
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block9:
	mov eax,dword ptr [esp+0x18]
	lea edx,[edi+ebx]
	push edx
	add eax,0xA
	push eax
	push edi
	push 0xA
	lea ecx,[esp+0x2C]
	push ecx
	call SetRect
	mov eax,dword ptr [esp+0x34]
	push eax
	mov eax,dword ptr [esp+0x34]
	push eax
	lea edx,[esp+0x24]
	push edx
	call PtInRect
	test eax,eax
	jne Block24

 Block10:
	inc dword ptr [esp+0x10]
	add edi,0x2A
	cmp edi,0x145
	jl Block2

 Block11:
	mov eax,dword ptr [ebp+0xCC]
	mov ecx,dword ptr [eax+0x38]
	mov dword ptr [esp+0x10],ecx
	mov edi,0x73
	mov edi,edi

 Block12:
	mov eax,dword ptr [ebp+0xE8]
	test eax,eax
	je Block22

 Block13:
	mov edx,dword ptr [esp+0x10]
	cmp edx,dword ptr [eax-4]
	jae Block22

 Block14:
	mov esi,dword ptr [ebp+0xF8]
	test esi,esi
	je Block23

 Block15:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],0
	call edx
	test eax,eax
	jge Block17

 Block16:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block17:
	mov esi,dword ptr [ebp+0xF8]
	mov ebx,dword ptr [esp+0x18]
	test esi,esi
	je Block23

 Block18:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	mov ecx,dword ptr [esp+0x14]
	lea eax,[edi+ebx]
	push eax
	add ecx,0xF1
	push ecx
	push edi
	push 0xF1
	lea edx,[esp+0x2C]
	push edx
	call SetRect
	mov eax,dword ptr [esp+0x34]
	push eax
	mov eax,dword ptr [esp+0x34]
	push eax
	lea eax,[esp+0x24]
	push eax
	call PtInRect
	test eax,eax
	jne Block25

 Block21:
	inc dword ptr [esp+0x10]
	add edi,0x2A
	cmp edi,0x145
	jl Block12

 Block22:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x1C
	ret 0x10

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x10]
	pop edi
	pop esi
	mov dword ptr [eax],1
	pop ebp
	mov dword ptr [ecx],edx
	mov eax,1
	pop ebx
	add esp,0x1C
	ret 0x10

 Block25:
	mov ecx,dword ptr [esp+0x38]
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0x3C]
	pop edi
	pop esi
	mov dword ptr [ecx],0
	pop ebp
	mov dword ptr [edx],eax
	mov eax,1
	pop ebx
	add esp,0x1C
	ret 0x10
}
}
// CShopDlg::OnCreate
_SUB_EXCEPTION_HANDLER(2E7540)
__SUB_CLASS_THIS(002E7540, __thiscall, 133365,  CShopDlg, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E7540
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x70
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
	mov dword ptr [ebp+0x2C],edi
	push 0
	push 0
	lea ecx,[edi+0xB74]
	push edi
	call CLayoutMan::Init
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x18]
	push eax
	call esi
	lea ecx,[ebp+0x18]
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
	lea edx,[ebp+0x58]
	push edx
	mov dword ptr [ebp-4],0
	call esi
	lea eax,[ebp+0x58]
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
	push 0
	push 0
	lea ecx,[ebp+0x18]
	push ecx
	lea edx,[ebp+0x58]
	push edx
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGSH__9
	mov byte ptr [ebp-4],1
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[ebp+0x48]
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xF8]
	push eax
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
	cmp word ptr [ebp+0x48],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],1
	jne Block12

 Block10:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[ebp+0x48]
	push edx
	call ebx

 Block13:
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],0
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[ebp+0x58]
	push ecx
	call ebx

 Block17:
	cmp word ptr [ebp+0x18],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block20

 Block18:
	mov eax,dword ptr [ebp+0x20]
	xor edx,edx
	mov word ptr [ebp+0x18],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp+0x18]
	push eax
	call ebx

 Block21:
	lea ecx,[ebp+0x58]
	push ecx
	call esi
	lea edx,[ebp+0x58]
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
	lea eax,[ebp+0x18]
	mov ebx,4
	push eax
	mov dword ptr [ebp-4],ebx
	call esi
	lea ecx,[ebp+0x18]
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
	xor esi,esi
	push esi
	push esi
	lea edx,[ebp+0x58]
	push edx
	lea eax,[ebp+0x18]
	push eax
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGSH__8
	mov byte ptr [ebp-4],5
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],6
	cmp dword ptr [_D_G_RM],esi
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],5
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xFC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block30

 Block28:
	cmp eax,0x80004002
	je Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],5
	jne Block33

 Block31:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	cmp eax,esi
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	cmp word ptr [ebp+0x18],8
	mov byte ptr [ebp-4],bl
	jne Block37

 Block35:
	mov eax,dword ptr [ebp+0x20]
	xor ecx,ecx
	mov word ptr [ebp+0x18],cx
	cmp eax,esi
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[ebp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	cmp word ptr [ebp+0x58],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	cmp eax,esi
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov dword ptr [ebp-0x70],esi
	mov dword ptr [ebp-0x7C],1
	mov dword ptr [ebp-0x78],esi
	mov dword ptr [ebp-0x74],esi
	push esi
	push esi
	push esi
	push 2
	push offset _S_UIUIWINDOW2IMGSH__7
	lea edx,[ebp+0x60]
	lea ebx,[edi+0xB74]
	push edx
	mov ecx,ebx
	mov dword ptr [ebp-4],8
	call CLayoutMan::AddButton
	cmp dword ptr [ebp+0x64],esi
	je Block44

 Block43:
	push esi
	lea ecx,[ebp+0x60]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block44:
	push esi
	push esi
	push esi
	push 0x3E8
	push offset _S_UIUIWINDOW2IMGSH__6
	lea eax,[ebp+0x60]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	cmp dword ptr [ebp+0x64],esi
	je Block46

 Block45:
	push esi
	lea ecx,[ebp+0x60]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block46:
	push esi
	push esi
	push esi
	push 0x3E9
	push offset _S_UIUIWINDOW2IMGSH__5
	lea ecx,[ebp+0x60]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	cmp dword ptr [ebp+0x64],esi
	je Block48

 Block47:
	push esi
	lea ecx,[ebp+0x60]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block48:
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp+4],esi
	mov dword ptr [ebp+8],esi
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],9
	cmp eax,esi
	je Block50

 Block49:
	mov ecx,eax
	call CCtrlTab::_ctor_default
	jmp Block51

 Block50:
	xor eax,eax

 Block51:
	mov byte ptr [ebp-4],8
	cmp eax,esi
	je Block59

 Block52:
	lea esi,[eax+8]
	test esi,esi
	je Block59

 Block53:
	add esi,0xFFFFFFF8
	test esi,esi
	je Block55

 Block54:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block55:
	mov eax,dword ptr [edi+0xB0]
	mov dword ptr [edi+0xB0],esi
	mov dword ptr [ebp+0x64],eax
	test eax,eax
	je Block57

 Block56:
	push 0
	lea ecx,[ebp+0x60]
	call ZRef<CCtrlTab>::_ReleaseRaw

 Block57:
	mov ecx,dword ptr [edi+0xB0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[ebp+4]
	push edx
	push 0x13
	push 0xDE
	push 0x5B
	push 0xA
	push 8
	push 0x3EA
	push edi
	call eax
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x1C]
	push ecx
	call esi
	lea edx,[ebp-0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block60

 Block58:
	push eax
	call _com_issue_error

 Block59:
	xor esi,esi
	jmp Block55

 Block60:
	lea eax,[ebp+0x18]
	push eax
	mov byte ptr [ebp-4],0xA
	call esi
	lea ecx,[ebp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	xor esi,esi
	push esi
	push esi
	lea edx,[ebp-0x1C]
	push edx
	lea eax,[ebp+0x18]
	push eax
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	mov bl,0xB
	push offset _S_UIUIWINDOW2IMGSH__4
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0xC
	cmp dword ptr [_D_G_RM],esi
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	lea ecx,[ebp-0x4C]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x28]
	mov dword ptr [ebp+0x28],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
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
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x4C],bx
	jne Block70

 Block68:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	cmp eax,esi
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp+0x18],bx
	jne Block74

 Block72:
	mov eax,dword ptr [ebp+0x20]
	xor ecx,ecx
	mov word ptr [ebp+0x18],cx
	cmp eax,esi
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea edx,[ebp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x1C],bx
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,esi
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x2C]
	push edx
	call ebx
	lea eax,[ebp-0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],0x12
	call ebx
	lea edx,[ebp-0x3C]
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
	push esi
	push esi
	lea eax,[ebp-0x2C]
	push eax
	lea ecx,[ebp-0x3C]
	push ecx
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGSH__3
	mov byte ptr [ebp-4],0x13
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x14
	cmp dword ptr [_D_G_RM],esi
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	lea edx,[ebp-0x6C]
	mov byte ptr [ebp-4],0x13
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x34]
	mov dword ptr [ebp+0x34],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block88

 Block86:
	cmp eax,0x80004002
	je Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	mov ebx,8
	mov byte ptr [ebp-4],0x17
	cmp word ptr [ebp-0x6C],bx
	jne Block91

 Block89:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	cmp eax,esi
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block92:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp-0x3C],bx
	jne Block95

 Block93:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	cmp eax,esi
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp-0x2C],bx
	jne Block99

 Block97:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	cmp eax,esi
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block100:
	mov eax,0x20
	call __chkstk
	mov eax,0x20
	mov esi,esp
	call __chkstk
	mov ebx,esp
	push 1
	push 0
	push 0
	push 0xA
	push esi
	push 0
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x1A
	test ecx,ecx
	jne Block102

 Block101:
	push 0x80004003
	call _com_issue_error

 Block102:
	lea eax,[ebp+0x38]
	push eax
	mov byte ptr [ebp-4],0x19
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1B
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block105

 Block103:
	cmp eax,0x80004002
	je Block105

 Block104:
	push eax
	call _com_issue_error

 Block105:
	push 0
	push 0
	push 0xA
	push ebx
	push 0
	mov byte ptr [ebp-4],0x1C
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x30],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x1D
	test ecx,ecx
	jne Block107

 Block106:
	push 0x80004003
	call _com_issue_error

 Block107:
	lea edx,[ebp+0x48]
	push edx
	mov byte ptr [ebp-4],0x1C
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1E
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x30],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block110

 Block108:
	cmp eax,0x80004002
	je Block110

 Block109:
	push eax
	call _com_issue_error

 Block110:
	mov ecx,dword ptr [edi+0xB0]
	mov byte ptr [ebp-4],0x1F
	call CCtrlTab::AddItem_Canvas
	mov esi,8
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp+0x48],si
	jne Block113

 Block111:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block114:
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp+0x38],si
	jne Block117

 Block115:
	mov eax,dword ptr [ebp+0x40]
	xor edx,edx
	mov word ptr [ebp+0x38],dx
	test eax,eax
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea eax,[ebp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block118:
	mov eax,dword ptr [edi+0xB0]
	mov dword ptr [eax+0x34],1
	mov dword ptr [eax+0x38],0x32
	xor eax,eax
	mov dword ptr [edi+0x114],0
	mov dword ptr [edi+0x118],eax
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [edi+0x11C],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block120

 Block119:
	mov ecx,eax
	call CCtrlTab::_ctor_default
	jmp Block121

 Block120:
	xor eax,eax

 Block121:
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block129

 Block122:
	add eax,8
	je Block129

 Block123:
	lea esi,[eax-8]
	test esi,esi
	je Block125

 Block124:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block125:
	mov eax,dword ptr [edi+0xB8]
	mov dword ptr [edi+0xB8],esi
	mov dword ptr [ebp+0x64],eax
	test eax,eax
	je Block127

 Block126:
	push 0
	lea ecx,[ebp+0x60]
	call ZRef<CCtrlTab>::_ReleaseRaw

 Block127:
	mov ecx,dword ptr [edi+0xB8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+4]
	push eax
	push 0x13
	push 0xD6
	push 0x5B
	push 0xF1
	push 8
	push 0x3EB
	push edi
	call edx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x38]
	push eax
	call esi
	lea ecx,[ebp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block130

 Block128:
	push eax
	call _com_issue_error

 Block129:
	xor esi,esi
	jmp Block125

 Block130:
	lea edx,[ebp+0x58]
	push edx
	mov byte ptr [ebp-4],0x21
	call esi
	lea eax,[ebp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block132

 Block131:
	push eax
	call _com_issue_error

 Block132:
	push 0
	push 0
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x58]
	push edx
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	mov bl,0x22
	push offset _S_UIUIWINDOW2IMGSH__2
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x23
	jne Block134

 Block133:
	push 0x80004003
	call _com_issue_error

 Block134:
	lea eax,[ebp+0x48]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x24
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x28]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block137

 Block135:
	cmp eax,0x80004002
	je Block137

 Block136:
	push eax
	call _com_issue_error

 Block137:
	mov byte ptr [ebp-4],bl
	mov ebx,8
	cmp word ptr [ebp+0x48],bx
	jne Block144

 Block138:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block140

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block140:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block141:
	mov byte ptr [ebp-4],0x21
	cmp word ptr [ebp+0x58],bx
	jne Block145

 Block142:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block146

 Block143:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block146

 Block144:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp+0x48]
	push edx
	call edi
	jmp Block141

 Block145:
	lea ecx,[ebp+0x58]
	push ecx
	call edi

 Block146:
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp+0x38],bx
	jne Block149

 Block147:
	mov eax,dword ptr [ebp+0x40]
	xor edx,edx
	mov word ptr [ebp+0x38],dx
	test eax,eax
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea eax,[ebp+0x38]
	push eax
	call edi

 Block150:
	lea ecx,[ebp+0x58]
	push ecx
	call esi
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block152

 Block151:
	push eax
	call _com_issue_error

 Block152:
	lea eax,[ebp+0x38]
	push eax
	mov byte ptr [ebp-4],0x25
	call esi
	lea ecx,[ebp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block154

 Block153:
	push eax
	call _com_issue_error

 Block154:
	push 0
	push 0
	lea edx,[ebp+0x58]
	push edx
	lea eax,[ebp+0x38]
	push eax
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	mov bl,0x26
	push offset _S_UIUIWINDOW2IMGSH__1
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x27
	jne Block156

 Block155:
	push 0x80004003
	call _com_issue_error

 Block156:
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x28
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x34]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block159

 Block157:
	cmp eax,0x80004002
	je Block159

 Block158:
	push eax
	call _com_issue_error

 Block159:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x48],si
	jne Block162

 Block160:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	test eax,eax
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea eax,[ebp+0x48]
	push eax
	call edi

 Block163:
	mov byte ptr [ebp-4],0x25
	cmp word ptr [ebp+0x38],si
	jne Block166

 Block164:
	mov eax,dword ptr [ebp+0x40]
	xor ecx,ecx
	mov word ptr [ebp+0x38],cx
	test eax,eax
	je Block167

 Block165:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block167

 Block166:
	lea edx,[ebp+0x38]
	push edx
	call edi

 Block167:
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp+0x58],si
	jne Block170

 Block168:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block171

 Block169:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block171

 Block170:
	lea ecx,[ebp+0x58]
	push ecx
	call edi

 Block171:
	xor ebx,ebx
	mov dword ptr [ebp+0xC],ebx
	lea esp,[esp]

 Block172:
	mov edi,dword ptr [ebp+0x34]
	mov eax,0x20
	call __chkstk
	mov eax,0x20
	mov esi,esp
	call __chkstk
	mov dword ptr [ebp+0x30],esp
	push 1
	push 0
	push 0
	push 0xA
	push esi
	push ebx
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x10],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x29
	test edi,edi
	je Block5

 Block173:
	lea edx,[ebp+0x38]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x19
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x2A
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block178

 Block174:
	mov ecx,dword ptr [eax]
	lea edx,[ebp]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp]
	mov dword ptr [ebp+0x10],ecx
	test eax,eax
	je Block176

 Block175:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block176:
	mov ecx,dword ptr [ebp+0x10]
	mov dword ptr [esi],ecx
	test edi,edi
	jge Block178

 Block177:
	cmp edi,0x80004002
	jne Block195

 Block178:
	mov edx,dword ptr [ebp+0x30]
	push 0
	push 0
	push 0xA
	push edx
	push ebx
	mov byte ptr [ebp-4],0x2B
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x30],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x2C
	test ecx,ecx
	je Block5

 Block179:
	lea eax,[ebp+0x48]
	push eax
	mov byte ptr [ebp-4],0x2B
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x2D
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x30],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block184

 Block180:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x68]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x68]
	test eax,eax
	je Block182

 Block181:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block182:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block184

 Block183:
	cmp edi,0x80004002
	jne Block195

 Block184:
	mov edi,dword ptr [ebp+0x2C]
	mov ecx,dword ptr [edi+0xB8]
	mov byte ptr [ebp-4],0x2E
	call CCtrlTab::AddItem_Canvas
	mov esi,8
	mov byte ptr [ebp-4],0x2A
	cmp word ptr [ebp+0x48],si
	jne Block187

 Block185:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block188

 Block186:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block188

 Block187:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block188:
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp+0x38],si
	jne Block191

 Block189:
	mov eax,dword ptr [ebp+0x40]
	xor edx,edx
	mov word ptr [ebp+0x38],dx
	test eax,eax
	je Block192

 Block190:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block192

 Block191:
	lea eax,[ebp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block192:
	mov ebx,dword ptr [ebp+0xC]
	inc ebx
	cmp ebx,5
	mov dword ptr [ebp+0xC],ebx
	jl Block172

 Block193:
	mov eax,dword ptr [edi+0xB8]
	xor esi,esi
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [eax+0x34],1
	mov dword ptr [eax+0x38],esi
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x64],eax
	mov byte ptr [ebp-4],0x2F
	cmp eax,esi
	je Block196

 Block194:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block197

 Block195:
	push edi
	call _com_issue_error

 Block196:
	xor eax,eax

 Block197:
	mov byte ptr [ebp-4],0x19
	cmp eax,esi
	je Block201

 Block198:
	add eax,8
	cmp eax,esi
	je Block201

 Block199:
	lea esi,[eax-8]
	test esi,esi
	je Block201

 Block200:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block201:
	mov eax,dword ptr [edi+0xC4]
	mov dword ptr [edi+0xC4],esi
	test eax,eax
	je Block205

 Block202:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block205

 Block203:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block205

 Block204:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block205:
	mov ecx,dword ptr [edi+0xC4]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0xCB
	push 0x73
	push 0xD6
	push 8
	push 1
	push 0x3EC
	push edi
	call eax
	mov eax,dword ptr [edi+0xC4]
	mov ebx,0xCC
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [eax+0x34],ebx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x64],eax
	mov byte ptr [ebp-4],0x30
	test eax,eax
	je Block207

 Block206:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block208

 Block207:
	xor eax,eax

 Block208:
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block225

 Block209:
	add eax,8
	je Block225

 Block210:
	lea esi,[eax-8]
	test esi,esi
	je Block212

 Block211:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block212:
	mov eax,dword ptr [edi+0xCC]
	mov dword ptr [edi+0xCC],esi
	test eax,eax
	je Block216

 Block213:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block216

 Block214:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block216

 Block215:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block216:
	mov ecx,dword ptr [edi+0xCC]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0xCB
	push 0x73
	push 0x1BD
	push 8
	push 1
	push 0x3ED
	push edi
	call eax
	mov eax,dword ptr [edi+0xCC]
	lea ecx,[ebp+0x2C]
	push 0x30
	push ecx
	mov dword ptr [eax+0x34],ebx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xF0]
	add esp,8
	cmp esi,eax
	je Block221

 Block217:
	mov dword ptr [edi+0xF0],eax
	test eax,eax
	je Block219

 Block218:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block219:
	test esi,esi
	je Block221

 Block220:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block221:
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block223

 Block222:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block223:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x48]
	push eax
	call esi
	lea ecx,[ebp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block226

 Block224:
	push eax
	call _com_issue_error

 Block225:
	xor esi,esi
	jmp Block212

 Block226:
	lea edx,[ebp+0x38]
	push edx
	mov byte ptr [ebp-4],0x31
	call esi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block228

 Block227:
	push eax
	call _com_issue_error

 Block228:
	push 0
	push 0
	lea ecx,[ebp+0x48]
	push ecx
	lea edx,[ebp+0x38]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x50E
	push eax
	mov byte ptr [ebp-4],0x32
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x33
	jne Block230

 Block229:
	push 0x80004003
	call _com_issue_error

 Block230:
	lea ecx,[ebp-0x5C]
	push ecx
	mov byte ptr [ebp-4],0x32
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x34
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block236

 Block231:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x2C]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ebx,ebx
	mov esi,eax
	mov eax,dword ptr [edi+0xF4]
	test esi,esi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x2C]
	test eax,eax
	je Block233

 Block232:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block233:
	mov dword ptr [edi+0xF4],ebx
	test esi,esi
	jge Block238

 Block234:
	cmp esi,0x80004002
	je Block238

 Block235:
	push esi
	call _com_issue_error

 Block236:
	mov eax,dword ptr [edi+0xF4]
	test eax,eax
	je Block238

 Block237:
	mov dword ptr [edi+0xF4],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block238:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0x32
	jne Block241

 Block239:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	je Block242

 Block240:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block242

 Block241:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block242:
	cmp word ptr [ebp+0x38],8
	mov byte ptr [ebp-4],0x31
	jne Block245

 Block243:
	mov eax,dword ptr [ebp+0x40]
	xor edx,edx
	mov word ptr [ebp+0x38],dx
	test eax,eax
	je Block246

 Block244:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block246

 Block245:
	lea eax,[ebp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block246:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0x19
	jne Block249

 Block247:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block250

 Block248:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block250

 Block249:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block250:
	or eax,0xFFFFFFFF
	mov dword ptr [edi+0x104],eax
	mov dword ptr [edi+0x100],eax
	lea eax,[ebp+0x17]
	push eax
	push 5
	lea ecx,[edi+0xBC]
	mov dword ptr [edi+0x10C],0
	call ZArray<ZRef<CCtrlButton>>::_Alloc
	mov eax,dword ptr [ebp+0x34]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x11
	call edx
	mov eax,dword ptr [ebp+0x28]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],8
	call edx
	lea esp,[ebp-0x8C]
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
// CShopDlg::CmpSellItem
__SUB_CLASS_THIS0(002E5050, __thiscall, 133384,  CShopDlg, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0xEC]
	mov dword ptr [esp+0x14],edi
	test eax,eax
	jne Block2

 Block1:
	xor ecx,ecx
	jmp Block3

 Block2:
	mov ecx,dword ptr [eax-4]

 Block3:
	mov eax,dword ptr [edi+0xE8]
	test eax,eax
	je Block5

 Block4:
	mov eax,dword ptr [eax-4]

 Block5:
	mov esi,eax
	push eax
	sub esi,ecx
	xor ebx,ebx
	push ecx
	mov dword ptr [esp+0x24],esi
	mov dword ptr [esp+0x18],ebx
	call _zmin_long
	add esp,8
	mov dword ptr [esp+0x18],eax
	test eax,eax
	jle Block14

 Block6:
	jmp Block9

 Block8:
	mov edi,dword ptr [esp+0x14]

 Block9:
	mov esi,dword ptr [edi+0xEC]
	mov edi,dword ptr [edi+0xE8]
	add esi,ebx
	mov ecx,esi
	add edi,ebx
	call TSecType<long>::GetData
	mov ecx,edi
	mov ebp,eax
	call TSecType<long>::GetData
	cmp ebp,eax
	jne Block16

 Block10:
	mov eax,dword ptr [esi+0xC]
	cmp eax,dword ptr [edi+0xC]
	jne Block16

 Block11:
	mov ecx,dword ptr [esi+0x3C]
	cmp ecx,dword ptr [edi+0x3C]
	jne Block16

 Block12:
	mov eax,dword ptr [esp+0x10]
	inc eax
	add ebx,0x50
	cmp eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x10],eax
	jl Block8

 Block13:
	mov esi,dword ptr [esp+0x1C]
	mov ebx,eax

 Block14:
	test esi,esi
	jne Block17

 Block15:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x10
	ret

 Block16:
	mov eax,dword ptr [esp+0x10]
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret

 Block17:
	mov eax,ebx
	jg Block19

 Block18:
	lea eax,[ebx-1]

 Block19:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret
}
}
// CShopDlg::GetDiscountPriceByRate
__SUB_CLASS_THIS(002E3980, __thiscall, 133386,  CShopDlg, long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	jle Block4

 Block1:
	mov ecx,0x64
	sub ecx,eax
	mov dword ptr [esp+8],ecx
	fild dword ptr [esp+8]
	fimul dword ptr [esp+4]
	fdiv qword ptr [__real_4059000000000000]
	fld qword ptr [__real_4024000000000000]
	fmul st,st(1)
	call __ftol2_sse
	cdq
	mov ecx,0xA
	idiv ecx
	cmp edx,5
	jl Block3

 Block2:
	fadd qword ptr [__real_3ff0000000000000]

 Block3:
	call __ftol2_sse
	ret 8

 Block4:
	xor eax,eax
	ret 8
}
}
// CShopDlg::OnPacket
_SUB_EXCEPTION_HANDLER(2EB7D0)
__SUB(002EB7D0, __cdecl, 133388,  void, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2EB7D0
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
	mov eax,dword ptr [esp+0x44]
	sub eax,0x16C
	je Block40

 Block1:
	sub eax,1
	jne Block46

 Block2:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test eax,eax
	je Block46

 Block3:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CShopDlg::ms_RTTI_CShopDlg
	call edx
	test eax,eax
	je Block46

 Block4:
	mov esi,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test esi,esi
	je Block46

 Block5:
	cmp dword ptr [esi+0x10C],0
	jne Block7

 Block6:
	push 0x21000003
	lea ecx,[esp+0x1C]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0x18]
	push offset CDisconnectException::THROW_INFO
	lea ecx,[esp+0x20]
	push ecx
	mov dword ptr [esp+0x24],eax
	call _CxxThrowException

 Block7:
	mov edi,dword ptr [esp+0x48]
	mov ecx,edi
	mov dword ptr [esi+0x10C],0
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,0x13
	ja Block37

 Block8:
	cmp EAX, 0
je Block9
cmp EAX, 1
je Block18
cmp EAX, 2
je Block19
cmp EAX, 3
je Block20
cmp EAX, 4
je Block46
cmp EAX, 5
je Block18
cmp EAX, 6
je Block37
cmp EAX, 7
je Block37
cmp EAX, 8
je Block46
cmp EAX, 9
je Block18
cmp EAX, 10
je Block19
cmp EAX, 11
je Block37
cmp EAX, 12
je Block37
cmp EAX, 13
je Block27
cmp EAX, 14
je Block28
cmp EAX, 15
je Block32
cmp EAX, 16
je Block21
cmp EAX, 17
je Block36
cmp EAX, 18
je Block22
cmp EAX, 19
je Block23


 Block9:
	mov eax,dword ptr [esi+0x108]
	test eax,eax
	jle Block46

 Block10:
	cmp eax,5
	jg Block46

 Block11:
	push eax
	call get_tab_from_item_typeindex
	mov ecx,dword ptr [esi+0xB8]
	add esp,4
	cmp dword ptr [ecx+0x44],eax
	je Block13

 Block12:
	push eax
	call CCtrlTab::SetTab

 Block13:
	mov edx,dword ptr [esi+0xCC]
	mov ebx,dword ptr [edx+0x38]
	mov ecx,esi
	call CShopDlg::CmpSellItem
	mov edi,eax
	cmp edi,ebx
	jge Block15

 Block14:
	mov ecx,dword ptr [esi+0xCC]
	push edi
	call CCtrlScrollBar::SetCurPos

 Block15:
	add ebx,4
	cmp edi,ebx
	jle Block17

 Block16:
	mov ecx,dword ptr [esi+0xCC]
	lea eax,[edi-4]
	push eax
	call CCtrlScrollBar::SetCurPos

 Block17:
	mov dword ptr [esi+0x104],edi
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x30
	ret

 Block18:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0x365
	jmp Block38

 Block19:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x44],esp
	push 0x1A8B
	push edx
	jmp Block39

 Block20:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push 0x366
	push eax
	jmp Block39

 Block21:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0x368
	jmp Block38

 Block22:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x44],esp
	push 0xFB2
	push edx
	jmp Block39

 Block23:
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	test eax,eax
	je Block26

 Block24:
	lea eax,[esp+0x44]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	push 0
	push 1
	push 0
	push 0
	push ecx
	lea edx,[esp+0x58]
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push edx
	mov dword ptr [esp+0x54],1
	call ZXString<char>::_ctor_copy
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x58]
	add esp,0x14
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block46

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x30
	ret

 Block26:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push 0x369
	push eax
	jmp Block39

 Block27:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0x153F
	jmp Block38

 Block28:
	mov ecx,edi
	call CInPacket::Decode4
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x30]
	push 0x154F
	push edx
	mov esi,eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,2
	mov dword ptr [esp+0x4C],ebx
	mov dword ptr [esp+0x20],0
	mov eax,dword ptr [eax]
	neg esi
	push esi
	push eax
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x58],3
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	push eax
	call ZXString<char>::_ctor_copy
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x24]
	add esp,0x14
	mov byte ptr [esp+0x3C],bl
	test eax,eax
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block46

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x30
	ret

 Block32:
	mov ecx,edi
	call CInPacket::Decode4
	push 0
	push 0
	push 0
	push 0
	lea ecx,[esp+0x34]
	push 0x154E
	push ecx
	mov esi,eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,4
	mov dword ptr [esp+0x4C],ebx
	mov dword ptr [esp+0x24],0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x58],5
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	push eax
	call ZXString<char>::_ctor_copy
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x3C],bl
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block46

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x30
	ret

 Block36:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push 0x16ED
	push eax
	jmp Block39

 Block37:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0x369

 Block38:
	push ecx

 Block39:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x30
	ret

 Block40:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	je Block42

 Block41:
	push 0x21000003
	lea ecx,[esp+0x2C]
	call CMSException::_ctor_0
	mov edx,dword ptr [esp+0x28]
	push offset CDisconnectException::THROW_INFO
	lea eax,[esp+0x30]
	push eax
	mov dword ptr [esp+0x34],edx
	call _CxxThrowException

 Block42:
	push 0xB88
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x44],eax
	mov dword ptr [esp+0x3C],0
	test eax,eax
	je Block44

 Block43:
	mov ecx,eax
	call CShopDlg::_ctor_default
	jmp Block45

 Block44:
	xor eax,eax

 Block45:
	mov ecx,dword ptr [esp+0x48]
	push ecx
	mov ecx,eax
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call CShopDlg::SetShopDlg

 Block46:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x30
	ret
}
}
