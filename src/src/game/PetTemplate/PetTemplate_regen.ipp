#include "regen.hpp"
// PetTemplate.ipp
#include "PetTemplate.hpp"

// CPetTemplate::~CPetTemplate
_SUB_EXCEPTION_HANDLER(2A6B10)
__SUB_CLASS_THIS0(002A6B10, __thiscall, 47628,  CPetTemplate, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A6B10
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
	lea ecx,[esi+0x64]
	mov dword ptr [esp+0x14],8
	call ZArray<ZXString<char>>::RemoveAll
	lea ecx,[esi+0x60]
	mov byte ptr [esp+0x14],7
	call ZArray<ZXString<char>>::RemoveAll
	lea ecx,[esi+0x5C]
	mov byte ptr [esp+0x14],6
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0x58]
	mov byte ptr [esp+0x14],5
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0x54]
	mov byte ptr [esp+0x14],4
	call ZArray<CPetTemplate::RANDOMACTION>::RemoveAll
	lea ecx,[esi+0x50]
	mov byte ptr [esp+0x14],3
	call ZArray<CPetTemplate::SLANGREACTION>::RemoveAll
	lea ecx,[esi+0x4C]
	mov byte ptr [esp+0x14],2
	call ZArray<CPetTemplate::FOODREACTION>::RemoveAll
	lea ecx,[esi+0x48]
	mov byte ptr [esp+0x14],1
	call ZArray<CPetTemplate::INTERACTION>::RemoveAll
	lea ecx,[esi+0x3C]
	mov byte ptr [esp+0x14],0
	call ZArray<Ztl_bstr_t>::RemoveAll
	mov esi,dword ptr [esi+4]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block2

 Block1:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CPetTemplate::GetActionNo
__SUB_CLASS_THIS(002A62B0, __thiscall, 47595,  CPetTemplate, long, NakedParam<Ztl_bstr_t>) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	mov ebx,ecx
	mov eax,dword ptr [ebx+0x3C]
	push esi
	push edi
	test eax,eax
	jne Block2

 Block1:
	xor ebp,ebp
	jmp Block3

 Block2:
	mov ebp,dword ptr [eax-4]

 Block3:
	xor edi,edi
	mov esi,offset ActionData::m_sPetAction
	lea esp,[esp]

 Block4:
	push esi
	lea ecx,[esp+0x1C]
	call _xbstr_t::operator==
	test al,al
	jne Block15

 Block5:
	add esi,4
	inc edi
	cmp esi,offset ActionData::m_sPetAction+36
	jl Block4

 Block6:
	mov esi,dword ptr [esp+0x18]
	xor edi,edi
	test ebp,ebp
	jle Block31

 Block7:
	mov ebx,dword ptr [ebx+0x3C]
	jmp Block9

 Block9:
	mov ecx,dword ptr [ebx]
	cmp ecx,esi
	je Block40

 Block10:
	test ecx,ecx
	jne Block25

 Block11:
	test esi,esi
	je Block40

 Block12:
	cmp dword ptr [esi],ecx
	je Block40

 Block13:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block40

 Block14:
	mov ecx,dword ptr [eax-4]
	shr ecx,1
	jmp Block29

 Block15:
	mov esi,dword ptr [esp+0x18]

 Block16:
	test esi,esi
	je Block24

 Block17:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block24

 Block18:
	test esi,esi
	je Block24

 Block19:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block21:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block23

 Block22:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block23:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block24:
	mov eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 4

 Block25:
	test esi,esi
	jne Block28

 Block26:
	mov ecx,dword ptr [ecx]
	test ecx,ecx
	je Block40

 Block27:
	mov edx,dword ptr [ecx-4]
	shr edx,1
	jmp Block29

 Block28:
	push esi
	call _xbstr_t::Data_t::Compare
	test eax,eax

 Block29:
	je Block40

 Block30:
	inc edi
	add ebx,4
	cmp edi,ebp
	jl Block9

 Block31:
	test esi,esi
	je Block39

 Block32:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block39

 Block33:
	test esi,esi
	je Block39

 Block34:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block36:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block38

 Block37:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block38:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block39:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	pop ecx
	ret 4

 Block40:
	add edi,9
	jmp Block16
}
}
// CPetTemplate::GetAutoSpeakingByRandom
__SUB_CLASS_THIS(002A0F70, __thiscall, 47616,  CPetTemplate, ZXString<char>*, ZXString<char>*) {
__asm {

 Block0:
	push ecx
	push esi
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0x64]
	mov dword ptr [esp+8],0
	test eax,eax
	je Block2

 Block1:
	mov esi,dword ptr [eax-4]
	test esi,esi
	jne Block3

 Block2:
	mov esi,dword ptr [esp+0x10]
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	pop edi
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block3:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	div esi
	mov eax,dword ptr [edi+0x64]
	mov esi,dword ptr [esp+0x10]
	mov ecx,esi
	mov dword ptr [esi],0
	lea eax,[eax+edx*4]
	push eax
	call ZXString<char>::op_assign
	pop edi
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CPetTemplate::GetAutoSpeakingByEvent
__SUB_CLASS_THIS(002A0F00, __thiscall, 47615,  CPetTemplate, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x60]
	push esi
	mov dword ptr [esp+4],0
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]
	mov edx,dword ptr [esp+0x10]
	cmp eax,edx
	ja Block3

 Block2:
	mov esi,dword ptr [esp+0xC]
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	mov eax,esi
	pop esi
	pop ecx
	ret 8

 Block3:
	mov eax,dword ptr [ecx+0x60]
	mov esi,dword ptr [esp+0xC]
	lea eax,[eax+edx*4]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,esi
	pop esi
	pop ecx
	ret 8
}
}
// CPetTemplate::GetPetTemplate
_SUB_EXCEPTION_HANDLER(2A5F90)
__SUB(002A5F90, __cdecl, 47619,  CPetTemplate*, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A5F90
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
	mov eax,dword ptr [esp+0x28]
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	mov ecx,offset CPetTemplate::ms_mPetTemplate
	mov dword ptr [esp+0x28],0
	mov dword ptr [esp+0x30],eax
	call ZMap<long, ZRef<CPetTemplate>, long>::GetAt
	mov ebx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test ebx,ebx
	je Block4

 Block1:
	lea esi,[ebx-0x10]
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
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block4:
	mov eax,ebx
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret
}
}
// CPetTemplate::RegisterPet
_SUB_EXCEPTION_HANDLER(2A6D30)
__SUB(002A6D30, __cdecl, 47622,  int32_t, unsigned long, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x60]
	sub esp,0x60
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A6D30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x168
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x5C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	xor ebx,ebx
	mov dword ptr [ebp+0x44],ebx
	lea ecx,[ebp-0x2C]
	mov dword ptr [ebp-4],1
	mov dword ptr [ebp-0x28],ebx
	call ZRef<CPetTemplate>::_Alloc
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x3D5
	push eax
	mov byte ptr [ebp-4],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],3
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x144]
	push edx
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x34]
	mov dword ptr [ebp-0x34],ebx
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
	mov esi,8
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x144],si
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp-0x144],ax
	mov eax,dword ptr [ebp-0x13C]
	cmp eax,ebx
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp-0x144]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov eax,dword ptr [ebp+0x6C]
	mov dword ptr [ebp-0x38],eax
	cmp eax,ebx
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block11:
	mov eax,dword ptr [ebp+0x68]
	mov edi,dword ptr [ebp-0x28]
	push eax
	lea ecx,[ebp+0x50]
	mov dword ptr [edi],eax
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov byte ptr [ebp-4],7
	call CItemInfo::GetItemName
	push eax
	lea ecx,[edi+4]
	mov byte ptr [ebp-4],8
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],7
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
	mov dword ptr [ebp+0x4C],esp
	push 0x6C9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],9
	cmp ecx,ebx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea eax,[ebp-0x174]
	push eax
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x24]
	mov dword ptr [ebp-0x24],ebx
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
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x174],si
	jne Block21

 Block19:
	mov eax,dword ptr [ebp-0x16C]
	xor ecx,ecx
	mov word ptr [ebp-0x174],cx
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[ebp-0x174]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov esi,dword ptr [ebp-0x24]
	cmp esi,ebx
	sete al
	test al,al
	mov dword ptr [ebp+0x18],ebx
	sete byte ptr [ebp+0x43]
	lea esp,[esp]

 Block23:
	cmp byte ptr [ebp+0x43],0
	je Block244

 Block24:
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov eax,esp
	push ebx
	push ebx
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x18]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0xD
	cmp esi,ebx
	je Block1

 Block25:
	lea ecx,[ebp-0x164]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0xC
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xE
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0xC],esi
	cmp eax,ebx
	je Block28

 Block26:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0xA4]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0xA4]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [ebp+0xC],esi
	jge Block28

 Block27:
	cmp eax,0x80004002
	jne Block4

 Block28:
	cmp word ptr [ebp-0x164],8
	mov byte ptr [ebp-4],0x10
	jne Block31

 Block29:
	mov eax,dword ptr [ebp-0x15C]
	xor edx,edx
	mov word ptr [ebp-0x164],dx
	cmp eax,ebx
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[ebp-0x164]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block32:
	cmp esi,ebx
	sete al
	test al,al
	jne Block242

 Block33:
	push 0xFFFFFFFF
	lea ecx,[edi+0x48]
	call ZArray<CPetTemplate::INTERACTION>::InsertBefore
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x4C],esp
	mov ebx,eax
	push 0x6CA
	push ecx
	mov dword ptr [ebp+0x14],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x11
	test esi,esi
	je Block1

 Block34:
	lea edx,[ebp-0x154]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x12
	call get_int32
	mov edi,8
	add esp,8
	mov dword ptr [ebx+8],eax
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x154],di
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [ebp-0x154],ax
	mov eax,dword ptr [ebp-0x14C]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[ebp-0x154]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x6CB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x124]
	mov byte ptr [ebp-4],0x13
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x14
	call get_int32
	add esp,8
	mov dword ptr [ebx+0xC],eax
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x124],di
	jne Block41

 Block39:
	mov eax,dword ptr [ebp-0x11C]
	xor ecx,ecx
	mov word ptr [ebp-0x124],cx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[ebp-0x124]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x606
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x104]
	push ecx
	mov byte ptr [ebp-4],0x15
	mov ecx,esi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x16
	call get_int32
	add esp,8
	mov dword ptr [ebx],eax
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x104],di
	jne Block45

 Block43:
	mov eax,dword ptr [ebp-0xFC]
	xor edx,edx
	mov word ptr [ebp-0x104],dx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[ebp-0x104]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x607
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x134]
	mov byte ptr [ebp-4],0x17
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x18
	call get_int32
	add esp,8
	mov dword ptr [ebx+4],eax
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x134],di
	jne Block49

 Block47:
	xor eax,eax
	mov word ptr [ebp-0x134],ax
	mov eax,dword ptr [ebp-0x12C]
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea ecx,[ebp-0x134]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x6CC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x6C]
	mov byte ptr [ebp-4],0x19
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [eax],di
	jne Block52

 Block51:
	mov eax,dword ptr [eax+8]
	jmp Block53

 Block52:
	mov eax,offset _S___3

 Block53:
	push eax
	lea ecx,[ebp+0x1C]
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp-0x6C],di
	jne Block56

 Block54:
	mov eax,dword ptr [ebp-0x64]
	xor ecx,ecx
	mov word ptr [ebp-0x6C],cx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea edx,[ebp-0x6C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	push ecx
	mov ecx,dword ptr [ebp+0x1C]
	mov eax,esp
	mov dword ptr [ebp+0x4C],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block59

 Block58:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block59:
	mov eax,dword ptr [ebp+0x68]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x70]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp+0x4C],esp
	test eax,eax
	je Block61

 Block60:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block61:
	lea ecx,[ebp+0x48]
	push ecx
	call get_labeled_string_0
	add esp,0x10
	push 0
	push 0
	lea ecx,[ebp+0x48]
	mov byte ptr [ebp-4],0x1D
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push eax
	lea ecx,[ebp+0x48]
	call ZXString<char>::op_assign
	push 0
	push 0
	push offset _S___40
	lea ecx,[ebp+0x48]
	call ZXString<char>::Find__0
	mov esi,eax
	test esi,esi
	jl Block68

 Block62:
	lea edi,[ebx+0x10]

 Block63:
	push esi
	lea edx,[ebp-0xAC]
	push edx
	lea ecx,[ebp+0x48]
	call ZXString<char>::Left
	push eax
	push 0xFFFFFFFF
	mov ecx,edi
	mov byte ptr [ebp-4],0x1E
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0xAC]
	mov byte ptr [ebp-4],0x1D
	test eax,eax
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block65:
	push 0xFFFFFFFF
	inc esi
	push esi
	lea eax,[ebp-0xA0]
	push eax
	lea ecx,[ebp+0x48]
	call ZXString<char>::Mid
	push eax
	lea ecx,[ebp+0x48]
	mov byte ptr [ebp-4],0x1F
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0xA0]
	mov byte ptr [ebp-4],0x1D
	test eax,eax
	je Block67

 Block66:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block67:
	push 0
	push 0
	lea ecx,[ebp+0x48]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push eax
	lea ecx,[ebp+0x48]
	call ZXString<char>::op_assign
	push 0
	push 0
	push offset _S___40
	lea ecx,[ebp+0x48]
	call ZXString<char>::Find__0
	mov esi,eax
	test esi,esi
	jge Block63

 Block68:
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block71

 Block69:
	cmp byte ptr [eax],0
	je Block71

 Block70:
	lea ecx,[ebp+0x48]
	push ecx
	push 0xFFFFFFFF
	lea ecx,[ebx+0x10]
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign

 Block71:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x1ADC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0xC]
	lea eax,[ebp-0x48]
	mov byte ptr [ebp-4],0x20
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x1D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x21
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x2C],ebx
	test eax,eax
	je Block74

 Block72:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0xB0]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp-0xB0]
	mov dword ptr [ebp+0x2C],ebx
	test eax,eax
	jge Block74

 Block73:
	cmp eax,0x80004002
	jne Block4

 Block74:
	cmp word ptr [ebp-0x48],8
	mov byte ptr [ebp-4],0x23
	jne Block77

 Block75:
	mov eax,dword ptr [ebp-0x40]
	xor ecx,ecx
	mov word ptr [ebp-0x48],cx
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea edx,[ebp-0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block78:
	test ebx,ebx
	sete al
	test al,al
	jne Block246

 Block79:
	mov dword ptr [ebp+0x24],0

 Block80:
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x24]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x24
	test ebx,ebx
	je Block1

 Block81:
	lea ecx,[ebp+0x30]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x23
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x25
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x28],esi
	test eax,eax
	je Block84

 Block82:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0xB4]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0xB4]
	mov esi,ecx
	mov dword ptr [ebp+0x28],esi
	test eax,eax
	jge Block84

 Block83:
	cmp eax,0x80004002
	jne Block4

 Block84:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],0x27
	jne Block87

 Block85:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block88:
	test esi,esi
	sete al
	test al,al
	jne Block151

 Block89:
	mov ecx,dword ptr [ebp+0x14]
	push 0xFFFFFFFF
	add ecx,0x14
	call ZArray<CPetTemplate::ACTION>::InsertBefore
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x4C],esp
	mov edi,eax
	push 0x45C
	push ecx
	mov dword ptr [ebp+0x50],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x28
	test esi,esi
	je Block1

 Block90:
	lea edx,[ebp-0x58]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x27
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x29
	jne Block92

 Block91:
	mov eax,dword ptr [eax+8]
	jmp Block93

 Block92:
	mov eax,offset _S___3

 Block93:
	push eax
	lea ecx,[ebp+4]
	call _xbstr_t::_ctor_1
	lea eax,[ebp+4]
	cmp edi,eax
	je Block105

 Block94:
	mov esi,dword ptr [edi]
	test esi,esi
	je Block103

 Block95:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block102

 Block96:
	test esi,esi
	je Block102

 Block97:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block99

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block99:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block101

 Block100:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block101:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block102:
	mov dword ptr [edi],0

 Block103:
	mov esi,dword ptr [ebp+4]
	mov dword ptr [edi],esi
	test esi,esi
	je Block114

 Block104:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block106

 Block105:
	mov esi,dword ptr [ebp+4]

 Block106:
	test esi,esi
	je Block114

 Block107:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block113

 Block108:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block110

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block110:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block112

 Block111:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block112:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block113:
	mov dword ptr [ebp+4],0

 Block114:
	cmp word ptr [ebp-0x58],8
	mov byte ptr [ebp-4],0x27
	jne Block117

 Block115:
	mov eax,dword ptr [ebp-0x50]
	xor ecx,ecx
	mov word ptr [ebp-0x58],cx
	test eax,eax
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea edx,[ebp-0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block118:
	xor ebx,ebx
	nop

 Block119:
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [ebp+0x28]
	lea eax,[ebp-0x8C]
	mov byte ptr [ebp-4],0x2A
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x27
	call IWzProperty::Getitem
	cmp word ptr [ebp-0x8C],0
	mov byte ptr [ebp-4],0x2B
	lea edx,[ebp-0x8C]
	je Block150

 Block120:
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_3
	mov eax,dword ptr [ebp+0x68]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x70]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp+0x4C],esp
	test eax,eax
	je Block122

 Block121:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block122:
	lea ecx,[ebp-0xA8]
	push ecx
	call get_labeled_string_0
	add esp,0x10
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x2C
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp-0xA8]
	mov byte ptr [ebp-4],0x2E
	test eax,eax
	je Block124

 Block123:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block124:
	mov ecx,dword ptr [ebp+0x50]
	push 0xFFFFFFFF
	add ecx,4
	call ZArray<Ztl_bstr_t>::InsertBefore
	mov edi,eax
	lea edx,[ebp+0x20]
	cmp edi,edx
	je Block136

 Block125:
	mov esi,dword ptr [edi]
	test esi,esi
	je Block134

 Block126:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block133

 Block127:
	test esi,esi
	je Block133

 Block128:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block130

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block130:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block132

 Block131:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block132:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block133:
	mov dword ptr [edi],0

 Block134:
	mov esi,dword ptr [ebp+0x20]
	mov dword ptr [edi],esi
	test esi,esi
	je Block137

 Block135:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block137

 Block136:
	mov esi,dword ptr [ebp+0x20]

 Block137:
	mov byte ptr [ebp-4],0x2B
	test esi,esi
	je Block145

 Block138:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block144

 Block139:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block141

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block141:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block143

 Block142:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block143:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block144:
	mov dword ptr [ebp+0x20],0

 Block145:
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],0x27
	jne Block148

 Block146:
	xor eax,eax
	mov word ptr [ebp-0x8C],ax
	mov eax,dword ptr [ebp-0x84]
	test eax,eax
	je Block149

 Block147:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc ebx
	jmp Block119

 Block148:
	lea ecx,[ebp-0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block149:
	inc ebx
	jmp Block119

 Block150:
	push edx
	call dword ptr [ZImports::_VariantClear]
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0x23
	call ecx
	inc dword ptr [ebp+0x24]
	mov ebx,dword ptr [ebp+0x2C]
	jmp Block80

 Block151:
	mov byte ptr [ebp-4],0x23
	test esi,esi
	je Block153

 Block152:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block153:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x6CD
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0xC]
	lea edx,[ebp-0x7C]
	mov byte ptr [ebp-4],0x2F
	push edx
	mov byte ptr [ebp-4],0x23
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x30
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x50],edi
	test eax,eax
	je Block156

 Block154:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x30]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x30]
	mov edi,ecx
	mov dword ptr [ebp+0x50],edi
	test eax,eax
	jge Block156

 Block155:
	cmp eax,0x80004002
	jne Block4

 Block156:
	cmp word ptr [ebp-0x7C],8
	mov byte ptr [ebp-4],0x32
	jne Block159

 Block157:
	mov eax,dword ptr [ebp-0x74]
	xor edx,edx
	mov word ptr [ebp-0x7C],dx
	test eax,eax
	je Block160

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block160

 Block159:
	lea eax,[ebp-0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block160:
	test edi,edi
	sete al
	test al,al
	mov dword ptr [ebp+0x24],0
	sete byte ptr [ebp+0x57]

 Block161:
	cmp byte ptr [ebp+0x57],0
	je Block235

 Block162:
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov ecx,dword ptr [ebp+0x24]
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x33
	test edi,edi
	je Block1

 Block163:
	lea edx,[ebp-0xC4]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x32
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x34
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x28],esi
	test eax,eax
	je Block166

 Block164:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x5C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x5C]
	mov esi,ecx
	mov dword ptr [ebp+0x28],esi
	test eax,eax
	jge Block166

 Block165:
	cmp eax,0x80004002
	jne Block4

 Block166:
	cmp word ptr [ebp-0xC4],8
	mov byte ptr [ebp-4],0x36
	jne Block169

 Block167:
	mov eax,dword ptr [ebp-0xBC]
	xor edx,edx
	mov word ptr [ebp-0xC4],dx
	test eax,eax
	je Block170

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block169:
	lea eax,[ebp-0xC4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block170:
	test esi,esi
	sete al
	test al,al
	jne Block233

 Block171:
	mov ecx,dword ptr [ebp+0x14]
	push 0xFFFFFFFF
	add ecx,0x18
	call ZArray<CPetTemplate::ACTION>::InsertBefore
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	mov edi,eax
	push 0x45C
	push ecx
	mov dword ptr [ebp+0x4C],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x37
	test esi,esi
	je Block1

 Block172:
	lea edx,[ebp-0x114]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x36
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x38
	jne Block174

 Block173:
	mov eax,dword ptr [eax+8]
	jmp Block175

 Block174:
	mov eax,offset _S___3

 Block175:
	push eax
	lea ecx,[ebp]
	call _xbstr_t::_ctor_1
	lea eax,[ebp]
	cmp edi,eax
	je Block187

 Block176:
	mov esi,dword ptr [edi]
	test esi,esi
	je Block185

 Block177:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block184

 Block178:
	test esi,esi
	je Block184

 Block179:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block181

 Block180:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block181:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block183

 Block182:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block183:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block184:
	mov dword ptr [edi],0

 Block185:
	mov esi,dword ptr [ebp]
	mov dword ptr [edi],esi
	test esi,esi
	je Block196

 Block186:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block188

 Block187:
	mov esi,dword ptr [ebp]

 Block188:
	test esi,esi
	je Block196

 Block189:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block195

 Block190:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block192

 Block191:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block192:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block194

 Block193:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block194:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block195:
	mov dword ptr [ebp],0

 Block196:
	cmp word ptr [ebp-0x114],8
	mov byte ptr [ebp-4],0x36
	jne Block199

 Block197:
	mov eax,dword ptr [ebp-0x10C]
	xor ecx,ecx
	mov word ptr [ebp-0x114],cx
	test eax,eax
	je Block200

 Block198:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block200

 Block199:
	lea edx,[ebp-0x114]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block200:
	xor ebx,ebx

 Block201:
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [ebp+0x28]
	lea eax,[ebp-0x20]
	mov byte ptr [ebp-4],0x39
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x36
	call IWzProperty::Getitem
	cmp word ptr [ebp-0x20],0
	mov byte ptr [ebp-4],0x3A
	lea edx,[ebp-0x20]
	je Block232

 Block202:
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_3
	mov eax,dword ptr [ebp+0x68]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x70]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp+0x58],esp
	test eax,eax
	je Block204

 Block203:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block204:
	lea ecx,[ebp+0x10]
	push ecx
	call get_labeled_string_0
	add esp,0x10
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[ebp+8]
	mov byte ptr [ebp-4],0x3B
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x3D
	test eax,eax
	je Block206

 Block205:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block206:
	mov ecx,dword ptr [ebp+0x4C]
	push 0xFFFFFFFF
	add ecx,4
	call ZArray<Ztl_bstr_t>::InsertBefore
	mov edi,eax
	lea edx,[ebp+8]
	cmp edi,edx
	je Block218

 Block207:
	mov esi,dword ptr [edi]
	test esi,esi
	je Block216

 Block208:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block215

 Block209:
	test esi,esi
	je Block215

 Block210:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block212

 Block211:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block212:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block214

 Block213:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block214:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block215:
	mov dword ptr [edi],0

 Block216:
	mov esi,dword ptr [ebp+8]
	mov dword ptr [edi],esi
	test esi,esi
	je Block219

 Block217:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block219

 Block218:
	mov esi,dword ptr [ebp+8]

 Block219:
	mov byte ptr [ebp-4],0x3A
	test esi,esi
	je Block227

 Block220:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block226

 Block221:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block223

 Block222:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block223:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block225

 Block224:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block225:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block226:
	mov dword ptr [ebp+8],0

 Block227:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],0x36
	jne Block230

 Block228:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block231

 Block229:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc ebx
	jmp Block201

 Block230:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block231:
	inc ebx
	jmp Block201

 Block232:
	push edx
	call dword ptr [ZImports::_VariantClear]
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0x32
	call ecx
	inc dword ptr [ebp+0x24]
	mov ebx,dword ptr [ebp+0x2C]
	mov edi,dword ptr [ebp+0x50]
	jmp Block161

 Block233:
	mov byte ptr [ebp-4],0x32
	test esi,esi
	je Block235

 Block234:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block235:
	mov byte ptr [ebp-4],0x23
	test edi,edi
	je Block237

 Block236:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block237:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],0x1D
	call ecx
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x1C
	test eax,eax
	je Block239

 Block238:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block239:
	mov ecx,dword ptr [ebp+0x1C]
	test ecx,ecx
	je Block241

 Block240:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x1C],0

 Block241:
	mov eax,dword ptr [ebp+0xC]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0xC
	call eax
	inc dword ptr [ebp+0x18]
	mov esi,dword ptr [ebp-0x24]
	mov edi,dword ptr [ebp-0x28]
	xor ebx,ebx
	jmp Block23

 Block242:
	mov byte ptr [ebp-4],0xC
	cmp esi,ebx
	je Block244

 Block243:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block244:
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0x6D3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0x3E
	cmp ecx,ebx
	jne Block260

 Block245:
	push 0x80004003
	call _com_issue_error

 Block246:
	mov byte ptr [ebp-4],0x1D
	test ebx,ebx
	je Block248

 Block247:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block248:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x1C
	test eax,eax
	je Block250

 Block249:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block250:
	mov ecx,dword ptr [ebp+0x1C]
	test ecx,ecx
	je Block252

 Block251:
	call _xbstr_t::Data_t::Release

 Block252:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0xC
	call eax
	mov eax,dword ptr [ebp-0x24]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],7
	call edx

 Block253:
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block255

 Block254:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block255:
	mov eax,dword ptr [ebp-0x34]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block257

 Block256:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block257:
	mov esi,dword ptr [ebp-0x28]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block840

 Block258:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block840

 Block259:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx
	jmp Block840

 Block260:
	lea edx,[ebp-0x114]
	push edx
	mov byte ptr [ebp-4],0xC
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x3F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+4]
	mov dword ptr [ebp+4],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block263

 Block261:
	cmp eax,0x80004002
	je Block263

 Block262:
	push eax
	call _com_issue_error

 Block263:
	cmp word ptr [ebp-0x114],8
	mov byte ptr [ebp-4],0x41
	jne Block266

 Block264:
	xor eax,eax
	mov word ptr [ebp-0x114],ax
	mov eax,dword ptr [ebp-0x10C]
	cmp eax,ebx
	je Block267

 Block265:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block267

 Block266:
	lea ecx,[ebp-0x114]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block267:
	mov esi,dword ptr [ebp+4]
	cmp esi,ebx
	sete al
	test al,al
	mov dword ptr [ebp+0x18],ebx
	sete byte ptr [ebp+0x57]

 Block268:
	cmp byte ptr [ebp+0x57],0
	je Block400

 Block269:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [ebp+0x18]
	mov dword ptr [ebp-0x10],esp
	mov eax,esp
	push ebx
	push ebx
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x42
	cmp esi,ebx
	je Block1

 Block270:
	lea eax,[ebp-0xC4]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x41
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x43
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x2C]
	mov dword ptr [ebp+0x2C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block272

 Block271:
	cmp eax,0x80004002
	jne Block4

 Block272:
	cmp word ptr [ebp-0xC4],8
	mov byte ptr [ebp-4],0x45
	jne Block275

 Block273:
	mov eax,dword ptr [ebp-0xBC]
	xor ecx,ecx
	mov word ptr [ebp-0xC4],cx
	cmp eax,ebx
	je Block276

 Block274:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block276

 Block275:
	lea edx,[ebp-0xC4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block276:
	mov ebx,dword ptr [ebp+0x2C]
	test ebx,ebx
	sete al
	test al,al
	jne Block398

 Block277:
	mov ecx,dword ptr [ebp-0x28]
	push 0xFFFFFFFF
	add ecx,0x4C
	call ZArray<CPetTemplate::FOODREACTION>::InsertBefore
	push 0
	push ecx
	mov edi,eax
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0x606
	push eax
	mov dword ptr [ebp+0x14],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x46
	test ebx,ebx
	je Block1

 Block278:
	lea ecx,[ebp-0x7C]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x45
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x47
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x7C],8
	mov dword ptr [edi],eax
	mov byte ptr [ebp-4],0x45
	jne Block281

 Block279:
	mov eax,dword ptr [ebp-0x74]
	xor edx,edx
	mov word ptr [ebp-0x7C],dx
	test eax,eax
	je Block282

 Block280:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block282

 Block281:
	lea eax,[ebp-0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block282:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x607
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x58]
	mov byte ptr [ebp-4],0x48
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x45
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x49
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x58],8
	mov dword ptr [edi+4],eax
	mov byte ptr [ebp-4],0x45
	jne Block285

 Block283:
	xor eax,eax
	mov word ptr [ebp-0x58],ax
	mov eax,dword ptr [ebp-0x50]
	test eax,eax
	je Block286

 Block284:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block286

 Block285:
	lea ecx,[ebp-0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block286:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x1ADC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x30]
	mov byte ptr [ebp-4],0x4A
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x45
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x4B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x48]
	mov dword ptr [ebp+0x48],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block288

 Block287:
	cmp eax,0x80004002
	jne Block4

 Block288:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],0x4D
	jne Block291

 Block289:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	test eax,eax
	je Block292

 Block290:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block292

 Block291:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block292:
	mov edi,dword ptr [ebp+0x48]
	test edi,edi
	sete al
	test al,al
	jne Block402

 Block293:
	mov dword ptr [ebp+0x24],0

 Block294:
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x24]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x4E
	test edi,edi
	je Block1

 Block295:
	lea ecx,[ebp-0x48]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x4D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x4F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x50],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block297

 Block296:
	cmp eax,0x80004002
	jne Block4

 Block297:
	cmp word ptr [ebp-0x48],8
	mov byte ptr [ebp-4],0x51
	jne Block300

 Block298:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	test eax,eax
	je Block301

 Block299:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block301

 Block300:
	lea eax,[ebp-0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block301:
	mov ebx,dword ptr [ebp+0x50]
	test ebx,ebx
	sete al
	test al,al
	jne Block338

 Block302:
	mov ecx,dword ptr [ebp+0x14]
	push 0xFFFFFFFF
	add ecx,8
	call ZArray<CPetTemplate::ACTION>::InsertBefore
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	mov edi,eax
	push 0x45C
	push ecx
	mov dword ptr [ebp+0x10],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x52
	test ebx,ebx
	je Block1

 Block303:
	lea edx,[ebp-0x6C]
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x51
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x53
	jne Block305

 Block304:
	mov eax,dword ptr [eax+8]
	jmp Block306

 Block305:
	mov eax,offset _S___3

 Block306:
	push eax
	lea ecx,[ebp+0x1C]
	call _xbstr_t::_ctor_1
	lea eax,[ebp+0x1C]
	cmp edi,eax
	je Block311

 Block307:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block309

 Block308:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],0

 Block309:
	mov esi,dword ptr [ebp+0x1C]
	mov dword ptr [edi],esi
	test esi,esi
	je Block314

 Block310:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block312

 Block311:
	mov esi,dword ptr [ebp+0x1C]

 Block312:
	test esi,esi
	je Block314

 Block313:
	mov ecx,esi
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x1C],0

 Block314:
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0x51
	jne Block317

 Block315:
	mov eax,dword ptr [ebp-0x64]
	xor edx,edx
	mov word ptr [ebp-0x6C],dx
	test eax,eax
	je Block318

 Block316:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block318

 Block317:
	lea eax,[ebp-0x6C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block318:
	mov dword ptr [ebp+0x20],0
	lea esp,[esp]

 Block319:
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov ecx,dword ptr [ebp+0x20]
	mov eax,esp
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x20]
	mov byte ptr [ebp-4],0x54
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x51
	call IWzProperty::Getitem
	cmp word ptr [ebp-0x20],0
	mov byte ptr [ebp-4],0x55
	je Block337

 Block320:
	push ecx
	lea eax,[ebp-0x20]
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_3
	mov ecx,dword ptr [ebp+0x68]
	mov edx,dword ptr [ebp+0x70]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp+0x58],esp
	test eax,eax
	je Block322

 Block321:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block322:
	lea eax,[ebp+0x4C]
	push eax
	call get_labeled_string_0
	add esp,0x10
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[ebp+0xC]
	mov byte ptr [ebp-4],0x56
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x58
	test eax,eax
	je Block324

 Block323:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block324:
	push 0xFFFFFFFF
	lea ecx,[edi+4]
	call ZArray<Ztl_bstr_t>::InsertBefore
	mov esi,eax
	lea ecx,[ebp+0xC]
	cmp esi,ecx
	je Block329

 Block325:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block327

 Block326:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block327:
	mov edi,dword ptr [ebp+0xC]
	mov dword ptr [esi],edi
	test edi,edi
	je Block332

 Block328:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block330

 Block329:
	mov edi,dword ptr [ebp+0xC]

 Block330:
	test edi,edi
	je Block332

 Block331:
	mov ecx,edi
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0xC],0

 Block332:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],0x51
	jne Block335

 Block333:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block336

 Block334:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [ebp+0x20]
	mov edi,dword ptr [ebp+0x10]
	jmp Block319

 Block335:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block336:
	inc dword ptr [ebp+0x20]
	mov edi,dword ptr [ebp+0x10]
	jmp Block319

 Block337:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],0x4D
	call ecx
	inc dword ptr [ebp+0x24]
	mov edi,dword ptr [ebp+0x48]
	jmp Block294

 Block338:
	mov byte ptr [ebp-4],0x4D
	test ebx,ebx
	je Block340

 Block339:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block340:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x6CD
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x2C]
	lea edx,[ebp-0x134]
	mov byte ptr [ebp-4],0x59
	push edx
	mov byte ptr [ebp-4],0x4D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x5A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x20]
	mov dword ptr [ebp+0x20],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block342

 Block341:
	cmp eax,0x80004002
	jne Block4

 Block342:
	cmp word ptr [ebp-0x134],8
	mov byte ptr [ebp-4],0x5C
	jne Block345

 Block343:
	xor eax,eax
	mov word ptr [ebp-0x134],ax
	mov eax,dword ptr [ebp-0x12C]
	test eax,eax
	je Block346

 Block344:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block346

 Block345:
	lea ecx,[ebp-0x134]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block346:
	cmp dword ptr [ebp+0x20],0
	mov dword ptr [ebp+0x24],0
	sete al
	test al,al
	sete byte ptr [ebp+0x43]

 Block347:
	cmp byte ptr [ebp+0x43],0
	je Block395

 Block348:
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov edx,dword ptr [ebp+0x24]
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x5D
	test ecx,ecx
	je Block1

 Block349:
	lea eax,[ebp-0x104]
	push eax
	mov byte ptr [ebp-4],0x5C
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x5E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x50],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block351

 Block350:
	cmp eax,0x80004002
	jne Block4

 Block351:
	cmp word ptr [ebp-0x104],8
	mov byte ptr [ebp-4],0x60
	jne Block354

 Block352:
	mov eax,dword ptr [ebp-0xFC]
	xor ecx,ecx
	mov word ptr [ebp-0x104],cx
	test eax,eax
	je Block355

 Block353:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block355

 Block354:
	lea edx,[ebp-0x104]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block355:
	mov ebx,dword ptr [ebp+0x50]
	test ebx,ebx
	sete al
	test al,al
	jne Block393

 Block356:
	mov ecx,dword ptr [ebp+0x14]
	push 0xFFFFFFFF
	add ecx,0xC
	call ZArray<CPetTemplate::ACTION>::InsertBefore
	push ecx
	mov edi,eax
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0x45C
	push eax
	mov dword ptr [ebp+0x10],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x61
	test ebx,ebx
	je Block1

 Block357:
	lea ecx,[ebp-0x124]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x60
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x62
	jne Block359

 Block358:
	mov eax,dword ptr [eax+8]
	jmp Block360

 Block359:
	mov eax,offset _S___3

 Block360:
	push eax
	lea ecx,[ebp+8]
	call _xbstr_t::_ctor_1
	lea edx,[ebp+8]
	cmp edi,edx
	je Block365

 Block361:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block363

 Block362:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],0

 Block363:
	mov esi,dword ptr [ebp+8]
	mov dword ptr [edi],esi
	test esi,esi
	je Block368

 Block364:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block366

 Block365:
	mov esi,dword ptr [ebp+8]

 Block366:
	test esi,esi
	je Block368

 Block367:
	mov ecx,esi
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+8],0

 Block368:
	cmp word ptr [ebp-0x124],8
	mov byte ptr [ebp-4],0x60
	jne Block371

 Block369:
	mov eax,dword ptr [ebp-0x11C]
	xor ecx,ecx
	mov word ptr [ebp-0x124],cx
	test eax,eax
	je Block372

 Block370:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block372

 Block371:
	lea edx,[ebp-0x124]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block372:
	mov dword ptr [ebp+0x28],0
	jmp Block374

 Block374:
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov eax,esp
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x28]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x8C]
	push ecx
	mov byte ptr [ebp-4],0x63
	mov ecx,ebx
	mov byte ptr [ebp-4],0x60
	call IWzProperty::Getitem
	cmp word ptr [ebp-0x8C],0
	mov byte ptr [ebp-4],0x64
	je Block392

 Block375:
	push ecx
	lea edx,[ebp-0x8C]
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_3
	mov eax,dword ptr [ebp+0x68]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x70]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp+0x58],esp
	test eax,eax
	je Block377

 Block376:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block377:
	lea ecx,[ebp-0x5C]
	push ecx
	call get_labeled_string_0
	add esp,0x10
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[ebp]
	mov byte ptr [ebp-4],0x65
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp-0x5C]
	mov byte ptr [ebp-4],0x67
	test eax,eax
	je Block379

 Block378:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block379:
	push 0xFFFFFFFF
	lea ecx,[edi+4]
	call ZArray<Ztl_bstr_t>::InsertBefore
	mov esi,eax
	lea edx,[ebp]
	cmp esi,edx
	je Block384

 Block380:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block382

 Block381:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block382:
	mov edi,dword ptr [ebp]
	mov dword ptr [esi],edi
	test edi,edi
	je Block387

 Block383:
	lea eax,[edi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block385

 Block384:
	mov edi,dword ptr [ebp]

 Block385:
	test edi,edi
	je Block387

 Block386:
	mov ecx,edi
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp],0

 Block387:
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],0x60
	jne Block390

 Block388:
	mov eax,dword ptr [ebp-0x84]
	xor ecx,ecx
	mov word ptr [ebp-0x8C],cx
	test eax,eax
	je Block391

 Block389:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [ebp+0x28]
	mov edi,dword ptr [ebp+0x10]
	jmp Block374

 Block390:
	lea edx,[ebp-0x8C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block391:
	inc dword ptr [ebp+0x28]
	mov edi,dword ptr [ebp+0x10]
	jmp Block374

 Block392:
	lea eax,[ebp-0x8C]
	push eax
	call dword ptr [ZImports::_VariantClear]
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [ebp-4],0x5C
	call edx
	inc dword ptr [ebp+0x24]
	jmp Block347

 Block393:
	mov byte ptr [ebp-4],0x5C
	test ebx,ebx
	je Block395

 Block394:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block395:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x4D
	test eax,eax
	je Block397

 Block396:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block397:
	mov eax,dword ptr [ebp+0x48]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x45
	call edx
	mov eax,dword ptr [ebp+0x2C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x41
	call edx
	inc dword ptr [ebp+0x18]
	mov esi,dword ptr [ebp+4]
	xor ebx,ebx
	jmp Block268

 Block398:
	mov byte ptr [ebp-4],0x41
	test ebx,ebx
	je Block400

 Block399:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block400:
	xor edi,edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0xEE4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0x68
	cmp ecx,edi
	jne Block406

 Block401:
	push 0x80004003
	call _com_issue_error

 Block402:
	mov byte ptr [ebp-4],0x45
	test edi,edi
	je Block404

 Block403:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block404:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [ebp-4],0x41
	call edx
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0xC
	call ecx
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block253

 Block405:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block253

 Block406:
	lea edx,[ebp-0xC4]
	push edx
	mov byte ptr [ebp-4],0x41
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x69
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x20]
	mov dword ptr [ebp+0x20],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block409

 Block407:
	cmp eax,0x80004002
	je Block409

 Block408:
	push eax
	call _com_issue_error

 Block409:
	cmp word ptr [ebp-0xC4],8
	mov byte ptr [ebp-4],0x6B
	jne Block412

 Block410:
	xor eax,eax
	mov word ptr [ebp-0xC4],ax
	mov eax,dword ptr [ebp-0xBC]
	cmp eax,edi
	je Block413

 Block411:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block413

 Block412:
	lea ecx,[ebp-0xC4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block413:
	mov esi,dword ptr [ebp+0x20]
	cmp esi,edi
	sete al
	test al,al
	mov dword ptr [ebp+0x18],edi
	sete byte ptr [ebp+0x57]

 Block414:
	cmp byte ptr [ebp+0x57],0
	je Block470

 Block415:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [ebp+0x18]
	mov dword ptr [ebp-0x10],esp
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
	mov byte ptr [ebp-4],0x6C
	cmp esi,edi
	je Block1

 Block416:
	lea eax,[ebp-0x7C]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x6B
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x6D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x50],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block418

 Block417:
	cmp eax,0x80004002
	jne Block4

 Block418:
	cmp word ptr [ebp-0x7C],8
	mov byte ptr [ebp-4],0x6F
	jne Block421

 Block419:
	mov eax,dword ptr [ebp-0x74]
	xor ecx,ecx
	mov word ptr [ebp-0x7C],cx
	cmp eax,edi
	je Block422

 Block420:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block422

 Block421:
	lea edx,[ebp-0x7C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block422:
	mov ebx,dword ptr [ebp+0x50]
	test ebx,ebx
	sete al
	test al,al
	jne Block468

 Block423:
	mov ecx,dword ptr [ebp-0x28]
	push 0xFFFFFFFF
	add ecx,0x50
	call ZArray<CPetTemplate::SLANGREACTION>::InsertBefore
	push 0
	push ecx
	mov esi,eax
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0x606
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x70
	test ebx,ebx
	je Block1

 Block424:
	lea ecx,[ebp-0x58]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x6F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x71
	call get_int32
	mov edi,8
	add esp,8
	mov dword ptr [esi],eax
	mov byte ptr [ebp-4],0x6F
	cmp word ptr [ebp-0x58],di
	jne Block427

 Block425:
	mov eax,dword ptr [ebp-0x50]
	xor edx,edx
	mov word ptr [ebp-0x58],dx
	test eax,eax
	je Block428

 Block426:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block428

 Block427:
	lea eax,[ebp-0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block428:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x607
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x30]
	mov byte ptr [ebp-4],0x72
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x6F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x73
	call get_int32
	add esp,8
	mov dword ptr [esi+4],eax
	mov byte ptr [ebp-4],0x6F
	cmp word ptr [ebp+0x30],di
	jne Block431

 Block429:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block432

 Block430:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block432

 Block431:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block432:
	push 0xFFFFFFFF
	lea ecx,[esi+8]
	call ZArray<CPetTemplate::ACTION>::InsertBefore
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	mov edi,eax
	push 0x45C
	push edx
	mov dword ptr [ebp+0x10],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x48]
	mov byte ptr [ebp-4],0x74
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x6F
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x75
	jne Block434

 Block433:
	mov eax,dword ptr [eax+8]
	jmp Block435

 Block434:
	mov eax,offset _S___3

 Block435:
	push eax
	lea ecx,[ebp+0x2C]
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x2C]
	cmp edi,ecx
	je Block440

 Block436:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block438

 Block437:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],0

 Block438:
	mov esi,dword ptr [ebp+0x2C]
	mov dword ptr [edi],esi
	test esi,esi
	je Block443

 Block439:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block441

 Block440:
	mov esi,dword ptr [ebp+0x2C]

 Block441:
	test esi,esi
	je Block443

 Block442:
	mov ecx,esi
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x2C],0

 Block443:
	cmp word ptr [ebp-0x48],8
	mov byte ptr [ebp-4],0x6F
	jne Block446

 Block444:
	xor eax,eax
	mov word ptr [ebp-0x48],ax
	mov eax,dword ptr [ebp-0x40]
	test eax,eax
	je Block447

 Block445:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block447

 Block446:
	lea ecx,[ebp-0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block447:
	mov dword ptr [ebp+0x28],0
	jmp Block449

 Block449:
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov edx,dword ptr [ebp+0x28]
	mov eax,esp
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x20]
	mov byte ptr [ebp-4],0x76
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x6F
	call IWzProperty::Getitem
	cmp word ptr [ebp-0x20],0
	mov byte ptr [ebp-4],0x77
	je Block467

 Block450:
	push ecx
	lea edx,[ebp-0x20]
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_3
	mov eax,dword ptr [ebp+0x68]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x70]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp+0x58],esp
	test eax,eax
	je Block452

 Block451:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block452:
	lea ecx,[ebp+0x4C]
	push ecx
	call get_labeled_string_0
	add esp,0x10
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[ebp+0x1C]
	mov byte ptr [ebp-4],0x78
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x7A
	test eax,eax
	je Block454

 Block453:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block454:
	push 0xFFFFFFFF
	lea ecx,[edi+4]
	call ZArray<Ztl_bstr_t>::InsertBefore
	mov esi,eax
	lea edx,[ebp+0x1C]
	cmp esi,edx
	je Block459

 Block455:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block457

 Block456:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block457:
	mov edi,dword ptr [ebp+0x1C]
	mov dword ptr [esi],edi
	test edi,edi
	je Block462

 Block458:
	lea eax,[edi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block460

 Block459:
	mov edi,dword ptr [ebp+0x1C]

 Block460:
	test edi,edi
	je Block462

 Block461:
	mov ecx,edi
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x1C],0

 Block462:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],0x6F
	jne Block465

 Block463:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	test eax,eax
	je Block466

 Block464:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [ebp+0x28]
	mov edi,dword ptr [ebp+0x10]
	jmp Block449

 Block465:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block466:
	inc dword ptr [ebp+0x28]
	mov edi,dword ptr [ebp+0x10]
	jmp Block449

 Block467:
	lea eax,[ebp-0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [ebp-4],0x6B
	call edx
	inc dword ptr [ebp+0x18]
	mov esi,dword ptr [ebp+0x20]
	xor edi,edi
	jmp Block414

 Block468:
	mov byte ptr [ebp-4],0x6B
	test ebx,ebx
	je Block470

 Block469:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block470:
	xor ebx,ebx
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0xF85
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0x7B
	cmp ecx,ebx
	jne Block472

 Block471:
	push 0x80004003
	call _com_issue_error

 Block472:
	lea eax,[ebp-0x7C]
	push eax
	mov byte ptr [ebp-4],0x6B
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x7C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x24]
	mov dword ptr [ebp+0x24],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block475

 Block473:
	cmp eax,0x80004002
	je Block475

 Block474:
	push eax
	call _com_issue_error

 Block475:
	cmp word ptr [ebp-0x7C],8
	mov byte ptr [ebp-4],0x7E
	jne Block478

 Block476:
	mov eax,dword ptr [ebp-0x74]
	xor ecx,ecx
	mov word ptr [ebp-0x7C],cx
	cmp eax,ebx
	je Block479

 Block477:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block479

 Block478:
	lea edx,[ebp-0x7C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block479:
	mov esi,dword ptr [ebp+0x24]
	cmp esi,ebx
	sete al
	test al,al
	mov dword ptr [ebp+0x18],ebx
	sete byte ptr [ebp+0x57]

 Block480:
	cmp byte ptr [ebp+0x57],0
	je Block516

 Block481:
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov eax,esp
	push ebx
	push ebx
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x18]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x7F
	cmp esi,ebx
	je Block1

 Block482:
	lea ecx,[ebp-0x58]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x7E
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x80
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x50],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block484

 Block483:
	cmp eax,0x80004002
	jne Block4

 Block484:
	cmp word ptr [ebp-0x58],8
	mov byte ptr [ebp-4],0x82
	jne Block487

 Block485:
	mov eax,dword ptr [ebp-0x50]
	xor edx,edx
	mov word ptr [ebp-0x58],dx
	cmp eax,ebx
	je Block488

 Block486:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block488

 Block487:
	lea eax,[ebp-0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block488:
	mov edi,dword ptr [ebp+0x50]
	cmp edi,ebx
	sete al
	test al,al
	jne Block514

 Block489:
	mov ecx,dword ptr [ebp-0x28]
	push 0xFFFFFFFF
	add ecx,0x54
	call ZArray<CPetTemplate::RANDOMACTION>::InsertBefore
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x606
	push ecx
	mov esi,eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x83
	cmp edi,ebx
	je Block1

 Block490:
	lea edx,[ebp+0x30]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x82
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x84
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x30],8
	mov dword ptr [esi],eax
	mov byte ptr [ebp-4],0x82
	jne Block493

 Block491:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	cmp eax,ebx
	je Block494

 Block492:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block494

 Block493:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block494:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x607
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x48]
	mov byte ptr [ebp-4],0x85
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x82
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x86
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x48],8
	mov dword ptr [esi+4],eax
	mov byte ptr [ebp-4],0x82
	jne Block497

 Block495:
	mov eax,dword ptr [ebp-0x40]
	xor ecx,ecx
	mov word ptr [ebp-0x48],cx
	cmp eax,ebx
	je Block498

 Block496:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block498

 Block497:
	lea edx,[ebp-0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block498:
	push 0xFFFFFFFF
	lea ecx,[esi+8]
	call ZArray<CPetTemplate::ACTION>::InsertBefore
	push ecx
	mov esi,eax
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0x45C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x6C]
	push ecx
	mov byte ptr [ebp-4],0x87
	mov ecx,edi
	mov byte ptr [ebp-4],0x82
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x88
	jne Block500

 Block499:
	mov eax,dword ptr [eax+8]
	jmp Block501

 Block500:
	mov eax,offset _S___3

 Block501:
	push eax
	lea ecx,[ebp+0x2C]
	call _xbstr_t::_ctor_1
	lea edx,[ebp+0x2C]
	cmp esi,edx
	je Block506

 Block502:
	mov ecx,dword ptr [esi]
	cmp ecx,ebx
	je Block504

 Block503:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],ebx

 Block504:
	mov ebx,dword ptr [ebp+0x2C]
	mov dword ptr [esi],ebx
	test ebx,ebx
	je Block509

 Block505:
	lea eax,[ebx+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block507

 Block506:
	mov ebx,dword ptr [ebp+0x2C]

 Block507:
	test ebx,ebx
	je Block509

 Block508:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x2C],0

 Block509:
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0x82
	jne Block512

 Block510:
	mov eax,dword ptr [ebp-0x64]
	xor ecx,ecx
	mov word ptr [ebp-0x6C],cx
	test eax,eax
	je Block513

 Block511:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block513

 Block512:
	lea edx,[ebp-0x6C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block513:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],0x7E
	call ecx
	inc dword ptr [ebp+0x18]
	mov esi,dword ptr [ebp+0x24]
	xor ebx,ebx
	jmp Block480

 Block514:
	mov byte ptr [ebp-4],0x7E
	cmp edi,ebx
	je Block516

 Block515:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block516:
	push ebx
	push ebx
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push offset _S_FAVORITEITEM
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0x89
	cmp ecx,ebx
	jne Block518

 Block517:
	push 0x80004003
	call _com_issue_error

 Block518:
	lea edx,[ebp-0x58]
	push edx
	mov byte ptr [ebp-4],0x7E
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x8A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x48]
	mov dword ptr [ebp+0x48],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block521

 Block519:
	cmp eax,0x80004002
	je Block521

 Block520:
	push eax
	call _com_issue_error

 Block521:
	cmp word ptr [ebp-0x58],8
	mov byte ptr [ebp-4],0x8C
	jne Block524

 Block522:
	xor eax,eax
	mov word ptr [ebp-0x58],ax
	mov eax,dword ptr [ebp-0x50]
	cmp eax,ebx
	je Block525

 Block523:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block525

 Block524:
	lea ecx,[ebp-0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block525:
	mov ebx,dword ptr [ebp+0x48]
	xor esi,esi
	cmp ebx,esi
	je Block543

 Block526:
	lea edx,[ebp+0x4C]
	push edx
	mov ecx,ebx
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp+0x50]
	mov byte ptr [ebp-4],0x8D
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x8F
	cmp eax,esi
	je Block528

 Block527:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block528:
	lea eax,[ebp-0x20]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0x90
	mov dword ptr [ebp+0x10],esi
	cmp dword ptr [ebp+0x50],esi
	je Block1

 Block529:
	mov esi,dword ptr [ebp+0x50]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp+0x10]
	push edx
	lea eax,[ebp-0x20]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block538

 Block530:
	lea edx,[ebp-0x20]
	push edx
	lea eax,[ebp+0x14]
	push eax
	call DetachBSTR
	add esp,8
	mov edi,dword ptr [ebp+0x14]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block532

 Block531:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block532:
	lea edx,[ebp+0x30]
	mov byte ptr [ebp-4],0x92
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x91
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x93
	call get_int32
	mov ecx,dword ptr [ebp-0x28]
	add esp,8
	push 0xFFFFFFFF
	add ecx,0x58
	mov esi,eax
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],esi
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],0x91
	jne Block535

 Block533:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block536

 Block534:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block536

 Block535:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block536:
	mov byte ptr [ebp-4],0x90
	test edi,edi
	je Block529

 Block537:
	mov ecx,edi
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x14],0
	jmp Block529

 Block538:
	mov edi,8
	mov byte ptr [ebp-4],0x8F
	cmp word ptr [ebp-0x20],di
	jne Block541

 Block539:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	test eax,eax
	je Block542

 Block540:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],0x8C
	call edx
	xor esi,esi
	jmp Block544

 Block541:
	lea eax,[ebp-0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block542:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],0x8C
	call edx
	xor esi,esi
	jmp Block544

 Block543:
	mov edi,8

 Block544:
	push esi
	push esi
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push offset _S_UNFAVORITEITEM
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0x94
	cmp ecx,esi
	jne Block546

 Block545:
	push 0x80004003
	call _com_issue_error

 Block546:
	lea eax,[ebp+0x30]
	push eax
	mov byte ptr [ebp-4],0x8C
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x95
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x48]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block549

 Block547:
	cmp eax,0x80004002
	je Block549

 Block548:
	push eax
	call _com_issue_error

 Block549:
	mov byte ptr [ebp-4],0x8C
	cmp word ptr [ebp+0x30],di
	jne Block552

 Block550:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	cmp eax,esi
	je Block553

 Block551:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block553

 Block552:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block553:
	mov ecx,dword ptr [ebp+0x48]
	cmp ecx,esi
	je Block572

 Block554:
	lea eax,[ebp+0x4C]
	push eax
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp+0x50]
	mov byte ptr [ebp-4],0x96
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x98
	cmp eax,esi
	je Block556

 Block555:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block556:
	lea eax,[ebp-0x20]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0x99
	mov dword ptr [ebp+0x10],esi
	cmp dword ptr [ebp+0x50],esi
	je Block1

 Block557:
	mov bl,0x9A

 Block558:
	mov esi,dword ptr [ebp+0x50]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp+0x10]
	push edx
	lea eax,[ebp-0x20]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block567

 Block559:
	lea edx,[ebp-0x20]
	push edx
	lea eax,[ebp+0x14]
	push eax
	call DetachBSTR
	add esp,8
	mov edi,dword ptr [ebp+0x14]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block561

 Block560:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block561:
	mov ecx,dword ptr [ebp+0x48]
	lea edx,[ebp+0x30]
	mov byte ptr [ebp-4],0x9B
	push edx
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x9C
	call get_int32
	mov ecx,dword ptr [ebp-0x28]
	add esp,8
	push 0xFFFFFFFF
	add ecx,0x5C
	mov esi,eax
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],esi
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],bl
	jne Block564

 Block562:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block565

 Block563:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block565

 Block564:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block565:
	mov byte ptr [ebp-4],0x99
	test edi,edi
	je Block558

 Block566:
	mov ecx,edi
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x14],0
	jmp Block558

 Block567:
	mov edi,8
	mov byte ptr [ebp-4],0x98
	cmp word ptr [ebp-0x20],di
	jne Block570

 Block568:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	test eax,eax
	je Block571

 Block569:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block571

 Block570:
	lea eax,[ebp-0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block571:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],0x8C
	call edx
	xor esi,esi

 Block572:
	mov eax,0x20
	mov byte ptr [ebp-4],0x9D
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov eax,esp
	push esi
	push esi
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x68]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0x9E
	cmp ecx,esi
	jne Block574

 Block573:
	push 0x80004003
	call _com_issue_error

 Block574:
	lea edx,[ebp+0x30]
	push edx
	mov byte ptr [ebp-4],0x9D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x9F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x2C]
	mov dword ptr [ebp+0x2C],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block577

 Block575:
	cmp eax,0x80004002
	je Block577

 Block576:
	push eax
	call _com_issue_error

 Block577:
	mov byte ptr [ebp-4],0xA1
	cmp word ptr [ebp+0x30],di
	jne Block580

 Block578:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	cmp eax,esi
	je Block581

 Block579:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block581

 Block580:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block581:
	mov ebx,dword ptr [ebp+0x2C]
	cmp ebx,esi
	sete al
	test al,al
	je Block584

 Block582:
	mov byte ptr [ebp-4],0x9D
	cmp ebx,esi
	je Block613

 Block583:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax
	jmp Block613

 Block584:
	push esi
	push esi
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push offset _S_AUTOSPEKAING
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0xA2
	cmp ebx,esi
	jne Block586

 Block585:
	push 0x80004003
	call _com_issue_error

 Block586:
	lea ecx,[ebp-0x48]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0xA1
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xA3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x50],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block589

 Block587:
	cmp eax,0x80004002
	je Block589

 Block588:
	push eax
	call _com_issue_error

 Block589:
	mov byte ptr [ebp-4],0xA5
	cmp word ptr [ebp-0x48],di
	jne Block592

 Block590:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	cmp eax,esi
	je Block593

 Block591:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block593

 Block592:
	lea eax,[ebp-0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block593:
	mov edi,dword ptr [ebp+0x50]
	cmp edi,esi
	sete al
	test al,al
	je Block597

 Block594:
	mov byte ptr [ebp-4],0xA1
	cmp edi,esi
	je Block596

 Block595:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block596:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],0x9D
	call ecx
	jmp Block613

 Block597:
	cmp edi,esi
	jne Block599

 Block598:
	push 0x80004003
	call _com_issue_error

 Block599:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x28]
	push eax
	push edi
	mov dword ptr [ebp+0x28],esi
	call ecx
	cmp eax,esi
	jge Block601

 Block600:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block601:
	mov ebx,dword ptr [ebp-0x28]
	mov eax,dword ptr [ebp+0x28]
	lea edx,[ebp+0x57]
	push edx
	push 1
	add ebx,0x64
	push eax
	mov ecx,ebx
	call ZArray<ZXString<char>>::_Realloc
	xor esi,esi

 Block602:
	cmp esi,dword ptr [ebp+0x28]
	jge Block611

 Block603:
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov eax,esp
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x6C]
	push ecx
	mov byte ptr [ebp-4],0xA6
	mov ecx,edi
	mov byte ptr [ebp-4],0xA5
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0xA7
	jne Block605

 Block604:
	mov eax,dword ptr [eax+8]
	jmp Block606

 Block605:
	mov eax,offset _S___3

 Block606:
	mov edx,dword ptr [ebx]
	push 0xFFFFFFFF
	lea ecx,[edx+esi*4]
	push eax
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0xA5
	jne Block609

 Block607:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block610

 Block608:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc esi
	jmp Block602

 Block609:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block610:
	inc esi
	jmp Block602

 Block611:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],0xA1
	call eax
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x9D
	test eax,eax
	je Block613

 Block612:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block613:
	mov dword ptr [ebp-4],0x8C
	mov edi,dword ptr [ebp-0x28]
	lea eax,[ebp+0x57]
	push eax
	push 1
	lea ebx,[edi+0x60]
	push 7
	mov ecx,ebx
	call ZArray<ZXString<char>>::_Realloc
	xor esi,esi
	lea esp,[esp]

 Block614:
	mov eax,dword ptr [esi+_D_ASAUTOSPEAKING__23]
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x68]
	mov edx,dword ptr [ebp+0x70]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp+0x58],esp
	test eax,eax
	je Block616

 Block615:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block616:
	lea eax,[ebp+0x28]
	push eax
	call get_labeled_string_0
	add esp,0x10
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0xA9
	test eax,eax
	je Block619

 Block617:
	cmp byte ptr [eax],0
	je Block619

 Block618:
	lea ecx,[ebp+0x28]
	push ecx
	mov ecx,dword ptr [ebx]
	add ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x28]

 Block619:
	mov byte ptr [ebp-4],0x8C
	test eax,eax
	je Block621

 Block620:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block621:
	add esi,4
	cmp esi,0x18
	jl Block614

 Block622:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x1ABC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0xAA
	test ebx,ebx
	jne Block625

 Block623:
	push 0x80004003
	call _com_issue_error

 Block625:
	lea eax,[ebp-0xE4]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x8C
	call IWzProperty::Getitem
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x1AC2
	push ecx
	mov byte ptr [ebp-4],0xAB
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0xD4]
	mov byte ptr [ebp-4],0xAC
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0xAB
	call IWzProperty::Getitem
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0x5F0
	push eax
	mov byte ptr [ebp-4],0xAD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0xF4]
	push ecx
	mov byte ptr [ebp-4],0xAE
	mov ecx,ebx
	mov byte ptr [ebp-4],0xAD
	call IWzProperty::Getitem
	mov si,word ptr [ebp-0xF4]
	xor ecx,ecx
	cmp word ptr [ebp-0xE4],cx
	mov byte ptr [ebp-4],0xAF
	setne cl
	xor edx,edx
	cmp word ptr [ebp-0xD4],dx
	setne dl
	xor eax,eax
	test si,si
	setne al
	test eax,eax
	je Block627

 Block626:
	mov dword ptr [edi+8],4
	jmp Block630

 Block627:
	test ecx,ecx
	je Block812

 Block628:
	test edx,edx
	je Block812

 Block629:
	mov dword ptr [edi+8],3

 Block630:
	push 3
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x456
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp-0x34]
	mov byte ptr [ebp-4],0xB0
	test esi,esi
	jne Block632

 Block631:
	push 0x80004003
	call _com_issue_error

 Block632:
	lea eax,[ebp+0x30]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xAF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB1
	call get_int32
	mov ebx,8
	add esp,8
	mov dword ptr [edi+0xC],eax
	mov byte ptr [ebp-4],0xAF
	cmp word ptr [ebp+0x30],bx
	jne Block635

 Block633:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	test eax,eax
	je Block636

 Block634:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block636

 Block635:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block636:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0x99E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x30]
	push ecx
	mov byte ptr [ebp-4],0xB2
	mov ecx,esi
	mov byte ptr [ebp-4],0xAF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB3
	call get_int32
	add esp,8
	mov dword ptr [edi+0x10],eax
	mov byte ptr [ebp-4],0xAF
	cmp word ptr [ebp+0x30],bx
	jne Block639

 Block637:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block640

 Block638:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block640

 Block639:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block640:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x99D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x30]
	mov byte ptr [ebp-4],0xB4
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xAF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB5
	call get_int32
	add esp,8
	mov dword ptr [edi+0x14],eax
	mov byte ptr [ebp-4],0xAF
	cmp word ptr [ebp+0x30],bx
	jne Block643

 Block641:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block644

 Block642:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block644

 Block643:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block644:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0xC38
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x30]
	mov byte ptr [ebp-4],0xB6
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xAF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB7
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0x18],eax
	mov byte ptr [ebp-4],0xAF
	cmp word ptr [ebp+0x30],bx
	jne Block647

 Block645:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	test eax,eax
	je Block648

 Block646:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block648

 Block647:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block648:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0xC3B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x30]
	push ecx
	mov byte ptr [ebp-4],0xB8
	mov ecx,esi
	mov byte ptr [ebp-4],0xAF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB9
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0x1C],eax
	mov byte ptr [ebp-4],0xAF
	cmp word ptr [ebp+0x30],bx
	jne Block651

 Block649:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block652

 Block650:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block652

 Block651:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block652:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push 0xC3C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x30]
	mov byte ptr [ebp-4],0xBA
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xAF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xBB
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0x20],eax
	mov byte ptr [ebp-4],0xAF
	cmp word ptr [ebp+0x30],bx
	jne Block655

 Block653:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block656

 Block654:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block656

 Block655:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block656:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0xC3D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x30]
	mov byte ptr [ebp-4],0xBC
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xAF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xBD
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0x24],eax
	mov byte ptr [ebp-4],0xAF
	cmp word ptr [ebp+0x30],bx
	jne Block659

 Block657:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	test eax,eax
	je Block660

 Block658:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block660

 Block659:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block660:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0xC3F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x30]
	push ecx
	mov byte ptr [ebp-4],0xBE
	mov ecx,esi
	mov byte ptr [ebp-4],0xAF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xBF
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0x28],eax
	mov byte ptr [ebp-4],0xAF
	cmp word ptr [ebp+0x30],bx
	jne Block663

 Block661:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block664

 Block662:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block664

 Block663:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block664:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push 0xC40
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x30]
	mov byte ptr [ebp-4],0xC0
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xAF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xC1
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0x2C],eax
	mov byte ptr [ebp-4],0xAF
	cmp word ptr [ebp+0x30],bx
	jne Block667

 Block665:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block668

 Block666:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block668

 Block667:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block668:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x1301
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x30]
	mov byte ptr [ebp-4],0xC2
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xAF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xC3
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0x30],eax
	mov byte ptr [ebp-4],0xAF
	cmp word ptr [ebp+0x30],bx
	jne Block671

 Block669:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	test eax,eax
	je Block672

 Block670:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block672

 Block671:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block672:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0x1A9F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x30]
	push ecx
	mov byte ptr [ebp-4],0xC4
	mov ecx,esi
	mov byte ptr [ebp-4],0xAF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xC5
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0x34],eax
	mov byte ptr [ebp-4],0xAF
	cmp word ptr [ebp+0x30],bx
	jne Block675

 Block673:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block676

 Block674:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block676

 Block675:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block676:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x1303
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x30]
	mov byte ptr [ebp-4],0xC6
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xAF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xC7
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0x38],eax
	mov byte ptr [ebp-4],0xAF
	cmp word ptr [ebp+0x30],bx
	jne Block679

 Block677:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block680

 Block678:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block680

 Block679:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block680:
	push 0
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push offset _S_INTERACTBYUSERAC
	call _xbstr_t::_ctor_1
	lea edx,[ebp+0x30]
	mov byte ptr [ebp-4],0xC8
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xAF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xC9
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [edi+0x40],eax
	mov byte ptr [ebp-4],0xAF
	cmp word ptr [ebp+0x30],bx
	jne Block683

 Block681:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block684

 Block682:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block684

 Block683:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block684:
	mov ecx,dword ptr [ebp-0x38]
	lea edx,[ebp+0x4C]
	push edx
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp+0x10]
	mov byte ptr [ebp-4],0xCA
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0xCC
	test eax,eax
	je Block686

 Block685:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block686:
	lea eax,[ebp-0x9C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0xCD
	mov dword ptr [ebp-0x5C],0
	jmp Block688

 Block688:
	mov esi,dword ptr [ebp+0x10]
	test esi,esi
	je Block1

 Block689:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp-0x5C]
	push edx
	lea eax,[ebp-0x9C]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block751

 Block690:
	mov esi,dword ptr [ebp-0x94]
	lea edx,[ebp+8]
	push 0x3D5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ebx,dword ptr [ebp+0x44]
	push eax
	or ebx,1
	push esi
	mov byte ptr [ebp-4],0xCE
	mov dword ptr [ebp+0x44],ebx
	call __wcsicmp
	add esp,8
	test eax,eax
	je Block703

 Block691:
	lea eax,[ebp+0xC]
	push 0xEE4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	or ebx,2
	push esi
	mov dword ptr [ebp-4],0xCF
	mov dword ptr [ebp+0x44],ebx
	call __wcsicmp
	add esp,8
	test eax,eax
	je Block703

 Block692:
	lea ecx,[ebp+0x1C]
	push 0x6D4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	or ebx,4
	push esi
	mov dword ptr [ebp-4],0xD0
	mov dword ptr [ebp+0x44],ebx
	call __wcsicmp
	add esp,8
	test eax,eax
	je Block703

 Block693:
	lea edx,[ebp+0x2C]
	push 0x6C9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	or ebx,8
	push esi
	mov dword ptr [ebp-4],0xD1
	mov dword ptr [ebp+0x44],ebx
	call __wcsicmp
	add esp,8
	test eax,eax
	je Block703

 Block694:
	lea eax,[ebp+0x28]
	push 0x6D3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	or ebx,0x10
	push esi
	mov dword ptr [ebp-4],0xD2
	mov dword ptr [ebp+0x44],ebx
	call __wcsicmp
	add esp,8
	test eax,eax
	je Block703

 Block695:
	lea ecx,[ebp+0x14]
	push 0x1AC2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	or ebx,0x20
	push esi
	mov dword ptr [ebp-4],0xD3
	mov dword ptr [ebp+0x44],ebx
	call __wcsicmp
	add esp,8
	test eax,eax
	je Block703

 Block696:
	lea edx,[ebp-0xA4]
	push 0x42C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	or ebx,0x40
	push esi
	mov dword ptr [ebp-4],0xD4
	mov dword ptr [ebp+0x44],ebx
	call __wcsicmp
	add esp,8
	test eax,eax
	je Block703

 Block697:
	lea eax,[ebp-0xAC]
	push 0x42D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	or ebx,0x80
	push esi
	mov dword ptr [ebp-4],0xD5
	mov dword ptr [ebp+0x44],ebx
	call __wcsicmp
	add esp,8
	test eax,eax
	je Block703

 Block698:
	lea ecx,[ebp-0xA0]
	push 0x1ABC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	or ebx,0x100
	push esi
	mov dword ptr [ebp-4],0xD6
	mov dword ptr [ebp+0x44],ebx
	call __wcsicmp
	add esp,8
	test eax,eax
	je Block703

 Block699:
	lea edx,[ebp-0xB0]
	push 0x456
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	or ebx,0x200
	push esi
	mov dword ptr [ebp-4],0xD7
	mov dword ptr [ebp+0x44],ebx
	call __wcsicmp
	add esp,8
	test eax,eax
	je Block703

 Block700:
	lea eax,[ebp-0xB4]
	push 0x454
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	or ebx,0x400
	push esi
	mov dword ptr [ebp-4],0xD8
	mov dword ptr [ebp+0x44],ebx
	call __wcsicmp
	add esp,8
	test eax,eax
	je Block703

 Block701:
	lea ecx,[ebp-0xA8]
	push 0x455
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	or ebx,0x800
	push esi
	mov dword ptr [ebp-4],0xD9
	mov dword ptr [ebp+0x44],ebx
	call __wcsicmp
	add esp,8
	test eax,eax
	je Block703

 Block702:
	lea edx,[ebp-0x30]
	push 0x457
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	or ebx,0x1000
	push esi
	mov dword ptr [ebp+0x44],ebx
	call __wcsicmp
	add esp,8
	mov byte ptr [ebp+0x43],0
	test eax,eax
	jne Block704

 Block703:
	mov byte ptr [ebp+0x43],1

 Block704:
	test ebx,0x1000
	je Block707

 Block705:
	mov eax,dword ptr [ebp-0x30]
	and ebx,0xFFFFEFFF
	mov dword ptr [ebp+0x44],ebx
	test eax,eax
	je Block707

 Block706:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block707:
	mov dword ptr [ebp-4],0xD8
	test ebx,0x800
	je Block710

 Block708:
	mov eax,dword ptr [ebp-0xA8]
	and ebx,0xFFFFF7FF
	mov dword ptr [ebp+0x44],ebx
	test eax,eax
	je Block710

 Block709:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block710:
	mov dword ptr [ebp-4],0xD7
	test ebx,0x400
	je Block713

 Block711:
	mov eax,dword ptr [ebp-0xB4]
	and ebx,0xFFFFFBFF
	mov dword ptr [ebp+0x44],ebx
	test eax,eax
	je Block713

 Block712:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block713:
	mov dword ptr [ebp-4],0xD6
	test ebx,0x200
	je Block716

 Block714:
	mov eax,dword ptr [ebp-0xB0]
	and ebx,0xFFFFFDFF
	mov dword ptr [ebp+0x44],ebx
	test eax,eax
	je Block716

 Block715:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block716:
	mov dword ptr [ebp-4],0xD5
	test ebx,0x100
	je Block719

 Block717:
	mov eax,dword ptr [ebp-0xA0]
	and ebx,0xFFFFFEFF
	mov dword ptr [ebp+0x44],ebx
	test eax,eax
	je Block719

 Block718:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block719:
	mov dword ptr [ebp-4],0xD4
	test bl,bl
	jns Block722

 Block720:
	mov eax,dword ptr [ebp-0xAC]
	and ebx,0xFFFFFF7F
	mov dword ptr [ebp+0x44],ebx
	test eax,eax
	je Block722

 Block721:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block722:
	mov dword ptr [ebp-4],0xD3
	test bl,0x40
	je Block725

 Block723:
	mov eax,dword ptr [ebp-0xA4]
	and ebx,0xFFFFFFBF
	mov dword ptr [ebp+0x44],ebx
	test eax,eax
	je Block725

 Block724:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block725:
	mov dword ptr [ebp-4],0xD2
	test bl,0x20
	je Block728

 Block726:
	mov eax,dword ptr [ebp+0x14]
	and ebx,0xFFFFFFDF
	mov dword ptr [ebp+0x44],ebx
	test eax,eax
	je Block728

 Block727:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block728:
	mov dword ptr [ebp-4],0xD1
	test bl,0x10
	je Block731

 Block729:
	mov eax,dword ptr [ebp+0x28]
	and ebx,0xFFFFFFEF
	mov dword ptr [ebp+0x44],ebx
	test eax,eax
	je Block731

 Block730:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block731:
	mov dword ptr [ebp-4],0xD0
	test bl,8
	je Block734

 Block732:
	mov eax,dword ptr [ebp+0x2C]
	and ebx,0xFFFFFFF7
	mov dword ptr [ebp+0x44],ebx
	test eax,eax
	je Block734

 Block733:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block734:
	mov dword ptr [ebp-4],0xCF
	test bl,4
	je Block737

 Block735:
	mov eax,dword ptr [ebp+0x1C]
	and ebx,0xFFFFFFFB
	mov dword ptr [ebp+0x44],ebx
	test eax,eax
	je Block737

 Block736:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block737:
	mov dword ptr [ebp-4],0xCE
	test bl,2
	je Block740

 Block738:
	mov eax,dword ptr [ebp+0xC]
	and ebx,0xFFFFFFFD
	mov dword ptr [ebp+0x44],ebx
	test eax,eax
	je Block740

 Block739:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block740:
	mov dword ptr [ebp-4],0xCD
	test bl,1
	je Block743

 Block741:
	mov eax,dword ptr [ebp+8]
	and ebx,0xFFFFFFFE
	mov dword ptr [ebp+0x44],ebx
	test eax,eax
	je Block743

 Block742:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block743:
	cmp byte ptr [ebp+0x43],0
	jne Block746

 Block744:
	lea eax,[ebp-0x9C]
	push eax
	lea ecx,[ebp+0x50]
	push ecx
	call DetachBSTR
	add esp,8
	push 0xFFFFFFFF
	push eax
	lea ecx,[edi+0x3C]
	mov byte ptr [ebp-4],0xDA
	call ZArray<Ztl_bstr_t>::Insert
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0xCD
	test ecx,ecx
	je Block746

 Block745:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x50],0

 Block746:
	cmp word ptr [ebp-0x9C],8
	jne Block749

 Block747:
	mov eax,dword ptr [ebp-0x94]
	xor edx,edx
	mov word ptr [ebp-0x9C],dx
	test eax,eax
	je Block688

 Block748:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block688

 Block749:
	lea eax,[ebp-0x9C]
	push eax
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block688

 Block750:
	jmp Block4

 Block751:
	mov edi,dword ptr [ebp+0x68]
	push 0
	lea ecx,[ebp-0x30]
	push ecx
	mov ecx,offset CPetTemplate::ms_mPetTemplate
	mov dword ptr [ebp-0x30],edi
	call ZMap<long, ZRef<CPetTemplate>, long>::GetAt
	test eax,eax
	je Block780

 Block752:
	mov ebx,8
	mov byte ptr [ebp-4],0xCC
	cmp word ptr [ebp-0x9C],bx
	jne Block759

 Block753:
	mov eax,dword ptr [ebp-0x94]
	xor edx,edx
	mov word ptr [ebp-0x9C],dx
	test eax,eax
	je Block755

 Block754:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block755:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block756:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],0xAF
	call edx
	mov byte ptr [ebp-4],0xAD
	cmp word ptr [ebp-0xF4],bx
	jne Block760

 Block757:
	xor eax,eax
	mov word ptr [ebp-0xF4],ax
	mov eax,dword ptr [ebp-0xEC]
	test eax,eax
	je Block761

 Block758:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block761

 Block759:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x9C]
	push eax
	call edi
	jmp Block756

 Block760:
	lea ecx,[ebp-0xF4]
	push ecx
	call edi

 Block761:
	mov byte ptr [ebp-4],0xAB
	cmp word ptr [ebp-0xD4],bx
	jne Block764

 Block762:
	mov eax,dword ptr [ebp-0xCC]
	xor edx,edx
	mov word ptr [ebp-0xD4],dx
	test eax,eax
	je Block765

 Block763:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block765

 Block764:
	lea eax,[ebp-0xD4]
	push eax
	call edi

 Block765:
	mov byte ptr [ebp-4],0x8C
	cmp word ptr [ebp-0xE4],bx
	jne Block768

 Block766:
	mov eax,dword ptr [ebp-0xDC]
	xor ecx,ecx
	mov word ptr [ebp-0xE4],cx
	test eax,eax
	je Block769

 Block767:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block769

 Block768:
	lea edx,[ebp-0xE4]
	push edx
	call edi

 Block769:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x7E
	test eax,eax
	je Block771

 Block770:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block771:
	mov eax,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0x6B
	test eax,eax
	je Block773

 Block772:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block773:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x41
	test eax,eax
	je Block775

 Block774:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block775:
	mov eax,dword ptr [ebp+4]
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block777

 Block776:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block777:
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block779

 Block778:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block779:
	mov eax,dword ptr [ebp-0x38]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],6
	call edx
	mov eax,dword ptr [ebp-0x34]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],2
	call edx
	lea ecx,[ebp-0x2C]
	mov byte ptr [ebp-4],1
	call ZRef<CPetTemplate>::~ZRef<CPetTemplate>
	jmp Block840

 Block780:
	lea eax,[ebp-0x2C]
	push eax
	lea ecx,[ebp-0x30]
	push ecx
	mov ecx,offset CPetTemplate::ms_mPetTemplate
	mov dword ptr [ebp-0x30],edi
	call ZMap<long, ZRef<CPetTemplate>, long>::Insert
	mov ebx,8
	mov byte ptr [ebp-4],0xCC
	cmp word ptr [ebp-0x9C],bx
	jne Block787

 Block781:
	mov eax,dword ptr [ebp-0x94]
	xor edx,edx
	mov word ptr [ebp-0x9C],dx
	test eax,eax
	je Block783

 Block782:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block783:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block784:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],0xAF
	call edx
	mov byte ptr [ebp-4],0xAD
	cmp word ptr [ebp-0xF4],bx
	jne Block788

 Block785:
	xor eax,eax
	mov word ptr [ebp-0xF4],ax
	mov eax,dword ptr [ebp-0xEC]
	test eax,eax
	je Block789

 Block786:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block789

 Block787:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x9C]
	push eax
	call edi
	jmp Block784

 Block788:
	lea ecx,[ebp-0xF4]
	push ecx
	call edi

 Block789:
	mov byte ptr [ebp-4],0xAB
	cmp word ptr [ebp-0xD4],bx
	jne Block792

 Block790:
	mov eax,dword ptr [ebp-0xCC]
	xor edx,edx
	mov word ptr [ebp-0xD4],dx
	test eax,eax
	je Block793

 Block791:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block793

 Block792:
	lea eax,[ebp-0xD4]
	push eax
	call edi

 Block793:
	mov byte ptr [ebp-4],0x8C
	cmp word ptr [ebp-0xE4],bx
	jne Block796

 Block794:
	mov eax,dword ptr [ebp-0xDC]
	xor ecx,ecx
	mov word ptr [ebp-0xE4],cx
	test eax,eax
	je Block797

 Block795:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block797

 Block796:
	lea edx,[ebp-0xE4]
	push edx
	call edi

 Block797:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x7E
	test eax,eax
	je Block799

 Block798:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block799:
	mov eax,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0x6B
	test eax,eax
	je Block801

 Block800:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block801:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x41
	test eax,eax
	je Block803

 Block802:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block803:
	mov eax,dword ptr [ebp+4]
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block805

 Block804:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block805:
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block807

 Block806:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block807:
	mov eax,dword ptr [ebp-0x38]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],6
	call edx
	mov eax,dword ptr [ebp-0x34]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],2
	call edx
	lea ecx,[ebp-0x2C]
	mov byte ptr [ebp-4],1
	call ZRef<CPetTemplate>::~ZRef<CPetTemplate>
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block809

 Block808:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block809:
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block811

 Block810:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block811:
	mov eax,1
	jmp Block845

 Block812:
	mov byte ptr [ebp-4],0xAD
	cmp si,8
	jne Block815

 Block813:
	xor eax,eax
	mov word ptr [ebp-0xF4],ax
	mov eax,dword ptr [ebp-0xEC]
	test eax,eax
	je Block816

 Block814:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block816

 Block815:
	lea ecx,[ebp-0xF4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block816:
	mov esi,8
	mov byte ptr [ebp-4],0xAB
	cmp word ptr [ebp-0xD4],si
	jne Block819

 Block817:
	mov eax,dword ptr [ebp-0xCC]
	xor edx,edx
	mov word ptr [ebp-0xD4],dx
	test eax,eax
	je Block820

 Block818:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block820

 Block819:
	lea eax,[ebp-0xD4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block820:
	mov byte ptr [ebp-4],0x8C
	cmp word ptr [ebp-0xE4],si
	jne Block823

 Block821:
	mov eax,dword ptr [ebp-0xDC]
	xor ecx,ecx
	mov word ptr [ebp-0xE4],cx
	test eax,eax
	je Block824

 Block822:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block824

 Block823:
	lea edx,[ebp-0xE4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block824:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x7E
	test eax,eax
	je Block826

 Block825:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block826:
	mov eax,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0x6B
	test eax,eax
	je Block828

 Block827:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block828:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x41
	test eax,eax
	je Block830

 Block829:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block830:
	mov eax,dword ptr [ebp+4]
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block832

 Block831:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block832:
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block834

 Block833:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block834:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],6
	call ecx
	mov eax,dword ptr [ebp-0x34]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block836

 Block835:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block836:
	mov byte ptr [ebp-4],1
	test edi,edi
	je Block840

 Block837:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block840

 Block838:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block840

 Block839:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block840:
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block842

 Block841:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block842:
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block844

 Block843:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block844:
	xor eax,eax

 Block845:
	lea esp,[ebp-0x184]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x5C]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x60
	mov esp,ebp
	pop ebp
	ret
}
}
// CPetTemplate::Load
_SUB_EXCEPTION_HANDLER(2AA940)
__SUB0(002AA940, __cdecl, 47618,  void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2AA940
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
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x78]
	push eax
	call esi
	lea ecx,[esp+0x78]
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
	lea edx,[esp+0x58]
	push edx
	mov dword ptr [esp+0xE4],ebp
	call esi
	lea eax,[esp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push ebp
	push ebp
	lea ecx,[esp+0x80]
	push ecx
	lea edx,[esp+0x64]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x6C5
	mov bl,1
	push eax
	mov byte ptr [esp+0xFC],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xF4],2
	cmp dword ptr [_D_G_RM],ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0xAC]
	push ecx
	mov byte ptr [esp+0xF8],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xE8],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0xE0],5
	cmp word ptr [esp+0x98],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0xA0]
	xor edx,edx
	mov word ptr [esp+0x98],dx
	cmp eax,ebp
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x98]
	push eax
	call esi

 Block13:
	mov byte ptr [esp+0xE0],6
	cmp word ptr [esp+0x58],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x58]
	push edx
	call esi

 Block17:
	mov byte ptr [esp+0xE0],7
	cmp word ptr [esp+0x78],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x78],ax
	mov eax,dword ptr [esp+0x80]
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x78]
	push ecx
	call esi

 Block21:
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x6C6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xEC],8
	cmp dword ptr [_D_G_ROOT],ebp
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea eax,[esp+0xC4]
	mov byte ptr [esp+0xEC],7
	mov ecx,dword ptr [_D_G_ROOT]
	push eax
	call IWzNameSpace::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xE8],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebp
	call _x_com_ptr<IWzNameSpace>::_QueryUnknown
	cmp eax,ebp
	jge Block26

 Block24:
	cmp eax,0x80004002
	je Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	mov byte ptr [esp+0xE0],0xB
	cmp word ptr [esp+0xB8],di
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0xC0]
	xor ecx,ecx
	mov word ptr [esp+0xB8],cx
	cmp eax,ebp
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0xB8]
	push edx
	call esi

 Block30:
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,ebp
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea eax,[esp+0x54]
	push eax
	call IWzNameSpace::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xE4],0xC
	mov dword ptr [esp+0x44],ebp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block34:
	lea ecx,[esp+0x44]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebp
	jge Block37

 Block35:
	cmp eax,0x80004002
	je Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0xE0],0xE
	cmp eax,ebp
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0xE0],0xF
	mov dword ptr [esp+0x48],ebp
	jmp Block41

 Block41:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block42:
	mov esi,dword ptr [esp+0x40]
	lea ecx,[esp+0x48]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push esi
	call enum_next_in_directory
	add esp,0xC
	test eax,eax
	je Block101

 Block43:
	cmp word ptr [esp+0x30],8
	mov edx,dword ptr [esp+0x38]
	je Block45

 Block44:
	mov edx,offset _S___3

 Block45:
	xor ebp,ebp
	mov dword ptr [esp+0x18],ebp
	test edx,edx
	je Block49

 Block46:
	mov eax,edx
	lea esi,[eax+2]

 Block47:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block47

 Block48:
	sub eax,esi
	sar eax,1
	mov esi,eax
	lea eax,[esi+esi]
	push eax
	push edx
	push 0
	push esi
	lea ecx,[esp+0x28]
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x1C]
	call ZXString16::ReleaseBuffer
	mov ebp,dword ptr [esp+0x18]

 Block49:
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0xF0],0x10
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0xB4]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xF0],0x11
	mov byte ptr [esp+0xF0],0x10
	call IWzNameSpace::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xE8],0x12
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [esp+0x50],ebx
	test eax,eax
	je Block52

 Block50:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x44]
	push ecx
	push offset __GUID_3c39b9aa_18cc_408c_8716_c4fb2117266e
	push eax
	call edx
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [esp+0x44]
	mov dword ptr [esp+0x50],ebx
	test eax,eax
	jge Block52

 Block51:
	cmp eax,0x80004002
	jne Block1

 Block52:
	cmp word ptr [esp+0xA8],8
	mov byte ptr [esp+0xE0],0x14
	jne Block55

 Block53:
	xor eax,eax
	mov word ptr [esp+0xA8],ax
	mov eax,dword ptr [esp+0xB0]
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea ecx,[esp+0xA8]
	push ecx
	call edi

 Block56:
	test ebx,ebx
	sete al
	test al,al
	je Block59

 Block57:
	mov byte ptr [esp+0xE0],0x10
	test ebx,ebx
	je Block93

 Block58:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax
	jmp Block93

 Block59:
	lea ecx,[esp+0x28]
	push 0x6C7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0xE0],0x15
	test ebp,ebp
	je Block61

 Block60:
	mov eax,dword ptr [ebp-4]
	shr eax,1
	jmp Block62

 Block61:
	xor eax,eax

 Block62:
	push eax
	push ebp
	lea ecx,[esp+0x30]
	call ZXString16::_Cat
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x88]
	push edx
	call esi
	lea eax,[esp+0x88]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block63:
	lea ecx,[esp+0x68]
	push ecx
	mov byte ptr [esp+0xE4],0x16
	call esi
	lea edx,[esp+0x68]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block64:
	mov edx,dword ptr [esp+0x28]
	push 0
	push 0
	lea eax,[esp+0x90]
	push eax
	lea ecx,[esp+0x74]
	push ecx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xF8],0x17
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xF4],0x18
	je Block5

 Block65:
	lea eax,[esp+0xDC]
	mov byte ptr [esp+0xF4],0x17
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xE8],0x19
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x24],esi
	test eax,eax
	je Block68

 Block66:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x2C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x2C]
	mov esi,ecx
	mov dword ptr [esp+0x24],esi
	test eax,eax
	jge Block68

 Block67:
	cmp eax,0x80004002
	jne Block1

 Block68:
	cmp word ptr [esp+0xC8],8
	mov byte ptr [esp+0xE0],0x1B
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0xD0]
	xor edx,edx
	mov word ptr [esp+0xC8],dx
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea eax,[esp+0xC8]
	push eax
	call edi

 Block72:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0xE0],0x1C
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea edx,[esp+0x68]
	push edx
	call edi

 Block76:
	cmp word ptr [esp+0x88],8
	mov byte ptr [esp+0xE0],0x1D
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [esp+0x88],ax
	mov eax,dword ptr [esp+0x90]
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea ecx,[esp+0x88]
	push ecx
	call edi

 Block80:
	push 0
	push 0x2E
	lea ecx,[esp+0x20]
	call ZXString16::Find_
	push eax
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x20]
	call ZXString16::Left
	mov eax,dword ptr [eax]
	push eax
	call __wtoi
	mov edi,eax
	mov eax,dword ptr [esp+0x18]
	add esp,4
	test eax,eax
	je Block82

 Block81:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block82:
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov eax,esp
	mov dword ptr [esp+0x50],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block84

 Block83:
	mov eax,ecx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block84:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x54],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block86

 Block85:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block86:
	push edi
	call CPetTemplate::RegisterPet
	add esp,0xC
	test eax,eax
	je Block100

 Block87:
	mov byte ptr [esp+0xE0],0x15
	test esi,esi
	je Block89

 Block88:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block89:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xE0],0x14
	test eax,eax
	je Block91

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block91:
	mov byte ptr [esp+0xE0],0x10
	test ebx,ebx
	je Block93

 Block92:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block93:
	mov byte ptr [esp+0xE0],0xF
	test ebp,ebp
	je Block95

 Block94:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block95:
	cmp word ptr [esp+0x30],8
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block41

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block98:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x30]
	push ecx
	call edi
	test eax,eax
	jge Block42

 Block99:
	jmp Block1

 Block100:
	push 0x22000006
	lea ecx,[esp+0x18]
	call CMSException::_ctor_0
	mov edx,dword ptr [esp+0x14]
	push offset CTerminateException::THROW_INFO
	lea eax,[esp+0x30]
	push eax
	mov dword ptr [esp+0x34],edx
	call _CxxThrowException

 Block101:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xE0],0xE
	jne Block104

 Block102:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea edx,[esp+0x30]
	push edx
	call edi

 Block105:
	mov byte ptr [esp+0xE0],0xB
	test esi,esi
	je Block107

 Block106:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block107:
	mov eax,dword ptr [esp+0x1C]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0xE4],7
	call eax
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	test eax,eax
	je Block109

 Block108:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block109:
	mov ecx,dword ptr [esp+0xD8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xD0
	ret
}
}
// CPetTemplate::GetActionName
__SUB_CLASS_THIS(002A6280, __thiscall, 47594,  CPetTemplate, Ztl_bstr_t*, Ztl_bstr_t*, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x3C]
	mov ecx,dword ptr [esp+0xC]
	mov eax,dword ptr [eax+ecx*4]
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
	ret 8
}
}
// CPetTemplate::Unload
__SUB0(002A5B70, __cdecl, 47618,  void) {
__asm {

 Block0:
	mov ecx,offset CPetTemplate::ms_mPetTemplate
	jmp  ZMap<long, ZRef<CPetTemplate>, long>::RemoveAll
}
}
