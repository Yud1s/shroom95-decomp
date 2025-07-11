#include "regen.hpp"
// ItemMakerInfo.ipp
#include "ItemMakerInfo.hpp"

static void* ZLIST_LONG_VTABLE = get_vtable<ZList<long>>();

// CItemMakerInfo::GetItemMakeInfo
_SUB_EXCEPTION_HANDLER(1C6190)
__SUB_CLASS_THIS(001C6190, __thiscall, 77830,  CItemMakerInfo, ZRef<ITEM_MAKE_INFO>*, ZRef<ITEM_MAKE_INFO>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1C6190
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+8],eax
	mov esi,dword ptr [esp+0x1C]
	mov dword ptr [esi+4],eax
	mov dword ptr [esp+0x14],eax
	push esi
	lea eax,[esp+0x24]
	push eax
	mov dword ptr [esp+0x10],1
	call ZMap<long, ZRef<ITEM_MAKE_INFO>, long>::GetAt
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 8
}
}
// CItemMakerInfo::GetMakableItemList_Hidden
__SUB_CLASS_THIS(001C8180, __thiscall, 77832,  CItemMakerInfo, int32_t, long, ZList<long>&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push eax
	lea edx,[esp+8]
	push edx
	add ecx,0x30
	call ZMap<long, ZList<long>, long>::GetAt
	neg eax
	sbb eax,eax
	neg eax
	ret 8
}
}
// CItemMakerInfo::Load_ItemMakeInfo
_SUB_EXCEPTION_HANDLER(1C9170)
__SUB_CLASS_THIS0(001C9170, __thiscall, 77828,  CItemMakerInfo, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1C9170
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xCC]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x70],ecx
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x88]
	push eax
	call ebx
	lea ecx,[esp+0x88]
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
	lea edx,[esp+0x78]
	push edx
	mov dword ptr [esp+0xD8],ebp
	call ebx
	lea eax,[esp+0x78]
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
	lea ecx,[esp+0x90]
	push ecx
	lea edx,[esp+0x84]
	push edx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push offset _S_ETCITEMMAKEIMG
	mov byte ptr [esp+0xEC],1
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xE8],2
	cmp dword ptr [_D_G_RM],ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0xAC]
	mov byte ptr [esp+0xE8],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xDC],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
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
	mov byte ptr [esp+0xD4],5
	cmp word ptr [esp+0x98],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0xA0]
	xor ecx,ecx
	mov word ptr [esp+0x98],cx
	cmp eax,ebp
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x98]
	push edx
	call esi

 Block13:
	mov byte ptr [esp+0xD4],6
	cmp word ptr [esp+0x78],di
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x78],ax
	mov eax,dword ptr [esp+0x80]
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x78]
	push ecx
	call esi

 Block17:
	mov byte ptr [esp+0xD4],7
	cmp word ptr [esp+0x88],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x90]
	xor edx,edx
	mov word ptr [esp+0x88],dx
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x88]
	push eax
	call esi

 Block21:
	mov edi,dword ptr [esp+0x14]
	cmp edi,ebp
	sete al
	test al,al
	je Block25

 Block22:
	mov dword ptr [esp+0xD4],0xFFFFFFFF
	cmp edi,ebp
	je Block24

 Block23:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block24:
	xor eax,eax
	jmp Block125

 Block25:
	cmp edi,ebp
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[esp+0x60]
	push eax
	mov ecx,edi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xD8],8
	mov dword ptr [esp+0x1C],ebp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block29:
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebp
	jge Block32

 Block30:
	cmp eax,0x80004002
	je Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0xD4],0xA
	cmp eax,ebp
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	lea eax,[esp+0x40]
	push eax
	call ebx
	mov byte ptr [esp+0xD4],0xB
	mov dword ptr [esp+0x68],ebp
	jmp Block36

 Block35:
	mov edi,dword ptr [esp+0x14]

 Block36:
	mov esi,dword ptr [esp+0x18]
	cmp esi,ebp
	je Block5

 Block37:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x68]
	push edx
	lea eax,[esp+0x44]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block120

 Block38:
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x54]
	push eax
	call DetachBSTR
	add esp,8
	mov ecx,eax
	mov byte ptr [esp+0xD4],0xC
	call _xbstr_t::GetBSTR
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],ebp
	call ZXString<char>::AssignWideStr
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0xD4],0xE
	cmp eax,ebp
	je Block47

 Block39:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebp
	jne Block46

 Block40:
	cmp esi,ebp
	je Block46

 Block41:
	mov eax,dword ptr [esi]
	cmp eax,ebp
	je Block43

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block43:
	mov eax,dword ptr [esi+4]
	cmp eax,ebp
	je Block45

 Block44:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block45:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block46:
	mov dword ptr [esp+0x50],ebp

 Block47:
	mov esi,dword ptr [esp+0x1C]
	push esi
	call _atoi
	add esp,4
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push esi
	mov dword ptr [esp+0x3C],eax
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0xB4]
	push ecx
	mov byte ptr [esp+0xE4],0xF
	mov ecx,edi
	mov byte ptr [esp+0xE4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xDC],0x10
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [esp+0x5C],ebx
	cmp eax,ebp
	je Block50

 Block48:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x74]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	cmp eax,ebp
	setl bl
	dec ebx
	and ebx,dword ptr [esp+0x74]
	cmp eax,ebp
	mov dword ptr [esp+0x5C],ebx
	jge Block50

 Block49:
	cmp eax,0x80004002
	jne Block1

 Block50:
	cmp word ptr [esp+0xA8],8
	mov byte ptr [esp+0xD4],0x12
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [esp+0xA8],ax
	mov eax,dword ptr [esp+0xB0]
	cmp eax,ebp
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[esp+0xA8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	cmp ebx,ebp
	je Block5

 Block55:
	lea edx,[esp+0x64]
	push edx
	mov ecx,ebx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xD8],0x13
	mov dword ptr [esp+0x28],ebp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block57

 Block56:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block57:
	lea ecx,[esp+0x28]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebp
	jge Block59

 Block58:
	cmp eax,0x80004002
	jne Block1

 Block59:
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0xD4],0x15
	cmp eax,ebp
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0xD4],0x16
	mov dword ptr [esp+0x58],ebp
	lea esp,[esp]

 Block62:
	mov esi,dword ptr [esp+0x24]
	xor ebp,ebp
	cmp esi,ebp
	je Block5

 Block63:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x34]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block94

 Block64:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x58]
	push eax
	call DetachBSTR
	add esp,8
	mov ecx,eax
	mov byte ptr [esp+0xD4],0x17
	call _xbstr_t::GetBSTR
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x28],ebp
	test edi,edi
	je Block66

 Block65:
	push ebp
	push ebp
	push ebp
	push ebp
	push 0xFFFFFFFF
	push edi
	push ebp
	push ebp
	call WideCharToMultiByte
	mov esi,eax
	push ebp
	dec esi
	push esi
	lea ecx,[esp+0x30]
	call ZXString<char>::GetBuffer
	push ebp
	push ebp
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push edi
	push ebp
	push ebp
	call WideCharToMultiByte
	push esi
	lea ecx,[esp+0x2C]
	call ZXString<char>::ReleaseBuffer
	mov ebp,dword ptr [esp+0x28]

 Block66:
	mov esi,dword ptr [esp+0x54]
	mov byte ptr [esp+0xD4],0x19
	test esi,esi
	je Block75

 Block67:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block74

 Block68:
	test esi,esi
	je Block74

 Block69:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block71

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block71:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block73

 Block72:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block73:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block74:
	mov dword ptr [esp+0x54],0

 Block75:
	push ebp
	call _atoi
	add esp,4
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push ebp
	mov edi,eax
	call _xbstr_t::_ctor_0
	lea edx,[esp+0xC4]
	mov byte ptr [esp+0xE0],0x1A
	push edx
	mov ecx,ebx
	mov byte ptr [esp+0xE4],0x19
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xDC],0x1B
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x20],esi
	test eax,eax
	je Block78

 Block76:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x6C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x6C]
	mov esi,ecx
	mov dword ptr [esp+0x20],esi
	test eax,eax
	jge Block78

 Block77:
	cmp eax,0x80004002
	jne Block1

 Block78:
	cmp word ptr [esp+0xB8],8
	mov byte ptr [esp+0xD4],0x1D
	jne Block81

 Block79:
	mov eax,dword ptr [esp+0xC0]
	xor edx,edx
	mov word ptr [esp+0xB8],dx
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea eax,[esp+0xB8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block82:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0xCC],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block84

 Block83:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block84:
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x74]
	push edi
	push eax
	call CItemMakerInfo::RegisterTargetItem
	mov byte ptr [esp+0xD4],0x19
	test eax,eax
	je Block105

 Block85:
	test esi,esi
	je Block87

 Block86:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block87:
	mov byte ptr [esp+0xD4],0x16
	test ebp,ebp
	je Block89

 Block88:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block89:
	cmp word ptr [esp+0x30],8
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block62

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block92:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block62

 Block93:
	jmp Block1

 Block94:
	mov edi,8
	mov byte ptr [esp+0xD4],0x15
	cmp word ptr [esp+0x30],di
	jne Block97

 Block95:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,ebp
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block98:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0xD8],0x12
	call edx
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [esp+0xD8],0xE
	call ecx
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xD4],0xB
	cmp eax,ebp
	je Block100

 Block99:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block100:
	cmp word ptr [esp+0x40],di
	jne Block103

 Block101:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	cmp eax,ebp
	je Block35

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block103:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]
	cmp eax,ebp
	jl Block1

 Block104:
	jmp Block35

 Block105:
	test esi,esi
	je Block107

 Block106:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block107:
	mov byte ptr [esp+0xD4],0x16
	test ebp,ebp
	je Block109

 Block108:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block109:
	mov esi,8
	mov byte ptr [esp+0xD4],0x15
	cmp word ptr [esp+0x30],si
	jne Block112

 Block110:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block113

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block112:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block113:
	mov eax,dword ptr [esp+0x24]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0xD8],0x12
	call eax
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [esp+0xD8],0xE
	call edx
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xD4],0xB
	test eax,eax
	je Block115

 Block114:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block115:
	mov byte ptr [esp+0xD4],0xA
	cmp word ptr [esp+0x40],si
	jne Block118

 Block116:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block119:
	mov eax,dword ptr [esp+0x18]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0xD8],7
	call eax
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [esp+0xD8],0xFFFFFFFF
	call edx
	xor eax,eax
	jmp Block125

 Block120:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0xD4],0xA
	jne Block123

 Block121:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,ebp
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block124:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0xD8],7
	call eax
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0xD8],0xFFFFFFFF
	call edx
	mov eax,1

 Block125:
	mov ecx,dword ptr [esp+0xCC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC4
	ret
}
}
// CItemMakerInfo::Load_MonsterCrystalLevel
_SUB_EXCEPTION_HANDLER(1C65A0)
__SUB_CLASS_THIS0(001C65A0, __thiscall, 77828,  CItemMakerInfo, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1C65A0
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
	mov dword ptr [esp+0x3C],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x68]
	push eax
	call esi
	lea ecx,[esp+0x68]
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
	mov dword ptr [esp+0xD4],ebp
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
	lea ecx,[esp+0x70]
	push ecx
	lea edx,[esp+0x64]
	push edx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_ITEMETC0426IMG
	mov byte ptr [esp+0xE8],1
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xE4],2
	cmp dword ptr [_D_G_RM],ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0xBC]
	mov byte ptr [esp+0xE4],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xD8],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
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
	mov edi,8
	mov byte ptr [esp+0xD0],5
	cmp word ptr [esp+0xA8],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0xB0]
	xor ecx,ecx
	mov word ptr [esp+0xA8],cx
	cmp eax,ebp
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0xA8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0xD0],6
	cmp word ptr [esp+0x58],di
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [esp+0xD0],7
	cmp word ptr [esp+0x68],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov edi,dword ptr [esp+0x14]
	cmp edi,ebp
	sete al
	test al,al
	je Block25

 Block22:
	mov dword ptr [esp+0xD0],0xFFFFFFFF
	cmp edi,ebp
	je Block24

 Block23:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block24:
	xor eax,eax
	jmp Block90

 Block25:
	cmp edi,ebp
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[esp+0x48]
	push eax
	mov ecx,edi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xD4],8
	mov dword ptr [esp+0x2C],ebp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block29:
	lea ecx,[esp+0x2C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebp
	jge Block32

 Block30:
	cmp eax,0x80004002
	je Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0xD0],0xA
	cmp eax,ebp
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	lea eax,[esp+0x2C]
	push eax
	call esi
	mov byte ptr [esp+0xD0],0xB
	mov dword ptr [esp+0x40],ebp
	jmp Block37

 Block36:
	mov edi,dword ptr [esp+0x14]

 Block37:
	mov esi,dword ptr [esp+0x28]
	cmp esi,ebp
	je Block5

 Block38:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x30]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block85

 Block39:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x28]
	push eax
	call DetachBSTR
	add esp,8
	mov ecx,eax
	mov byte ptr [esp+0xD0],0xC
	call _xbstr_t::GetBSTR
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebp
	call ZXString<char>::AssignWideStr
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xD0],0xE
	cmp eax,ebp
	je Block48

 Block40:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebp
	jne Block47

 Block41:
	cmp esi,ebp
	je Block47

 Block42:
	mov eax,dword ptr [esi]
	cmp eax,ebp
	je Block44

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block44:
	mov eax,dword ptr [esi+4]
	cmp eax,ebp
	je Block46

 Block45:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block46:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block47:
	mov dword ptr [esp+0x24],ebp

 Block48:
	mov ebx,dword ptr [esp+0x18]
	push ebx
	call _atoi
	add esp,4
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push ebx
	mov dword ptr [esp+0x30],eax
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x84]
	push ecx
	mov byte ptr [esp+0xE0],0xF
	mov ecx,edi
	mov byte ptr [esp+0xE0],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xD8],0x10
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [esp+0x54],edi
	cmp eax,ebp
	je Block51

 Block49:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x44]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	cmp eax,ebp
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x44]
	cmp eax,ebp
	mov edi,ecx
	mov dword ptr [esp+0x54],edi
	jge Block51

 Block50:
	cmp eax,0x80004002
	jne Block1

 Block51:
	cmp word ptr [esp+0x78],8
	mov byte ptr [esp+0xD0],0x12
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x80]
	xor edx,edx
	mov word ptr [esp+0x78],dx
	cmp eax,ebp
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea eax,[esp+0x78]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block55:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_INFO__1
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xDC],0x13
	cmp edi,ebp
	je Block5

 Block56:
	lea ecx,[esp+0x94]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0xE0],0x12
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xD8],0x14
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x1C],esi
	cmp eax,ebp
	je Block59

 Block57:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x50]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	cmp eax,ebp
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x50]
	cmp eax,ebp
	mov esi,ecx
	mov dword ptr [esp+0x1C],esi
	jge Block59

 Block58:
	cmp eax,0x80004002
	jne Block1

 Block59:
	cmp word ptr [esp+0x88],8
	mov byte ptr [esp+0xD0],0x16
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x90]
	xor edx,edx
	mov word ptr [esp+0x88],dx
	cmp eax,ebp
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[esp+0x88]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block63:
	cmp esi,ebp
	sete al
	test al,al
	je Block68

 Block64:
	mov byte ptr [esp+0xD0],0x12
	cmp esi,ebp
	je Block66

 Block65:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block66:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0xD4],0xE
	call ecx
	mov byte ptr [esp+0xD0],0xB
	cmp ebx,ebp
	je Block80

 Block67:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4
	jmp Block80

 Block68:
	push ebp
	push ecx
	mov dword ptr [esp+0x54],esp
	mov ecx,esp
	push offset _S_LVMIN
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xD8],0x17
	cmp esi,ebp
	je Block5

 Block69:
	lea edx,[esp+0xA0]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xDC],0x16
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x18
	call get_int32
	add esp,8
	cmp word ptr [esp+0x98],8
	mov ebx,eax
	mov byte ptr [esp+0xD0],0x16
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [esp+0x98],ax
	mov eax,dword ptr [esp+0xA0]
	cmp eax,ebp
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[esp+0x98]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	push ebp
	push ecx
	mov dword ptr [esp+0x54],esp
	mov ecx,esp
	push offset _S_LVMAX
	call _xbstr_t::_ctor_0
	lea edx,[esp+0xC0]
	mov byte ptr [esp+0xD8],0x19
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xDC],0x16
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x1A
	call get_int32
	add esp,8
	cmp word ptr [esp+0xB8],8
	mov ebp,eax
	mov byte ptr [esp+0xD0],0x16
	jne Block76

 Block74:
	xor eax,eax
	mov word ptr [esp+0xB8],ax
	mov eax,dword ptr [esp+0xC0]
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea ecx,[esp+0xB8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block77:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,0x60
	call ZList<MONSTER_CRYSTAL_LEVEL>::AddTail_
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [eax],ebx
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],edx
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0xD4],0x12
	call ecx
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0xD4],0xE
	call eax
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xD0],0xB
	test eax,eax
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block79:
	xor ebp,ebp

 Block80:
	cmp word ptr [esp+0x2C],8
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block36

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block83:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]
	cmp eax,ebp
	jl Block1

 Block84:
	jmp Block36

 Block85:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xD0],0xA
	jne Block88

 Block86:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block89:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0xD4],7
	call eax
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0xD4],0xFFFFFFFF
	call edx
	mov eax,1

 Block90:
	mov ecx,dword ptr [esp+0xC8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC0
	ret
}
}
// CItemMakerInfo::RegisterTargetItem
_SUB_EXCEPTION_HANDLER(1C81A0)
__SUB_CLASS_THIS(001C81A0, __thiscall, 77838,  CItemMakerInfo, int32_t, long, long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1C81A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x20],ecx
	xor ebx,ebx
	lea ecx,[ebp+0x38]
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp+0x3C],ebx
	call ZRef<ITEM_MAKE_INFO>::_Alloc
	push 1
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_ITEMNUM
	mov byte ptr [ebp-4],1
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],2
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[ebp+0x54]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],3
	call get_int32
	mov edi,dword ptr [ebp+0x3C]
	mov esi,8
	add esp,8
	mov dword ptr [edi+4],eax
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp+0x54],si
	jne Block5

 Block3:
	mov eax,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov word ptr [ebp+0x54],cx
	cmp eax,ebx
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea edx,[ebp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block6:
	push ebx
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_HIDE
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],4
	cmp ecx,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[ebp+0x54]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],5
	call get_int32
	add esp,8
	mov dword ptr [edi],eax
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp+0x54],si
	jne Block11

 Block9:
	mov eax,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov word ptr [ebp+0x54],cx
	cmp eax,ebx
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[ebp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	push ebx
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_REQLEVEL
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],6
	cmp ecx,ebx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea eax,[ebp+0x54]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],7
	call get_int32
	add esp,8
	mov dword ptr [edi+8],eax
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp+0x54],si
	jne Block17

 Block15:
	mov eax,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov word ptr [ebp+0x54],cx
	cmp eax,ebx
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[ebp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	push ebx
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_REQSKILLLEVEL
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],8
	cmp ecx,ebx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea eax,[ebp+0x54]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],9
	call get_int32
	add esp,8
	mov dword ptr [edi+0xC],eax
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp+0x54],si
	jne Block23

 Block21:
	mov eax,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov word ptr [ebp+0x54],cx
	cmp eax,ebx
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[ebp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	push ebx
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_REQITEM
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0xA
	cmp ecx,ebx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea eax,[ebp+0x54]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB
	call get_int32
	add esp,8
	mov dword ptr [edi+0x10],eax
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp+0x54],si
	jne Block29

 Block27:
	mov eax,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov word ptr [ebp+0x54],cx
	cmp eax,ebx
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[ebp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	push ebx
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_REQEQUIP
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0xC
	cmp ecx,ebx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea eax,[ebp+0x54]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	add esp,8
	mov dword ptr [edi+0x14],eax
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp+0x54],si
	jne Block35

 Block33:
	mov eax,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov word ptr [ebp+0x54],cx
	cmp eax,ebx
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[ebp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	push ebx
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_TUC
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0xE
	cmp ecx,ebx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea eax,[ebp+0x54]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xF
	call get_int32
	add esp,8
	mov dword ptr [edi+0x18],eax
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp+0x54],si
	jne Block41

 Block39:
	mov eax,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov word ptr [ebp+0x54],cx
	cmp eax,ebx
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[ebp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	push ebx
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_CATALYST
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0x10
	cmp ecx,ebx
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea eax,[ebp+0x54]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x11
	call get_int32
	add esp,8
	mov dword ptr [edi+0x1C],eax
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp+0x54],si
	jne Block47

 Block45:
	mov eax,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov word ptr [ebp+0x54],cx
	cmp eax,ebx
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[ebp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	push ebx
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_MESO
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0x12
	cmp ecx,ebx
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea eax,[ebp+0x54]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x13
	call get_int32
	add esp,8
	mov dword ptr [edi+0x20],eax
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp+0x54],si
	jne Block53

 Block51:
	mov eax,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov word ptr [ebp+0x54],cx
	cmp eax,ebx
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[ebp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	push ebx
	push ebx
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_REQQUEST
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0x14
	cmp ecx,ebx
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	lea eax,[ebp-0x44]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0x44],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block59

 Block57:
	cmp eax,0x80004002
	je Block59

 Block58:
	push eax
	call _com_issue_error

 Block59:
	mov byte ptr [ebp-4],0x17
	cmp word ptr [ebp-0x44],si
	jne Block62

 Block60:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	cmp eax,ebx
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[ebp-0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov ebx,dword ptr [ebp+0x44]
	test ebx,ebx
	je Block93

 Block64:
	lea eax,[ebp+0x48]
	push eax
	mov ecx,ebx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],0x18
	mov dword ptr [ebp+0x50],0
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block66

 Block65:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block66:
	lea ecx,[ebp+0x50]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	test eax,eax
	jge Block69

 Block67:
	cmp eax,0x80004002
	je Block69

 Block68:
	push eax
	call _com_issue_error

 Block69:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x1A
	test eax,eax
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block71:
	lea eax,[ebp+0x54]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov bl,0x1B
	mov byte ptr [ebp-4],bl
	mov dword ptr [ebp+0x4C],0
	jmp Block73

 Block72:
	mov esi,8

 Block73:
	mov edi,dword ptr [ebp+0x50]
	test edi,edi
	je Block1

 Block74:
	mov ecx,dword ptr [edi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp+0x4C]
	push edx
	lea eax,[ebp+0x54]
	push eax
	push 1
	push edi
	call ecx
	test eax,eax
	jne Block88

 Block75:
	push eax
	lea edx,[ebp+0x54]
	push edx
	call get_int32
	add esp,8
	mov edi,eax
	mov eax,dword ptr [ebp+0x5C]
	push 0
	cmp word ptr [ebp+0x54],si
	je Block77

 Block76:
	mov eax,offset _S___3

 Block77:
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x44]
	lea eax,[ebp+0x10]
	mov byte ptr [ebp-4],0x1C
	push eax
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1D
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x10],8
	mov esi,eax
	mov byte ptr [ebp-4],bl
	jne Block80

 Block78:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	test edi,edi
	je Block83

 Block82:
	mov ecx,dword ptr [ebp+0x3C]
	add ecx,0x24
	call ZList<QUEST_CONDITION>::AddTail_
	mov dword ptr [eax],edi
	mov dword ptr [eax+4],esi

 Block83:
	cmp word ptr [ebp+0x54],8
	jne Block86

 Block84:
	xor eax,eax
	mov word ptr [ebp+0x54],ax
	mov eax,dword ptr [ebp+0x5C]
	test eax,eax
	je Block72

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block86:
	lea ecx,[ebp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jl Block58

 Block87:
	jmp Block72

 Block88:
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp+0x54],si
	jne Block91

 Block89:
	mov eax,dword ptr [ebp+0x5C]
	xor edx,edx
	mov word ptr [ebp+0x54],dx
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea eax,[ebp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block92:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],0x17
	call edx
	mov ebx,dword ptr [ebp+0x44]

 Block93:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_RECIPE
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0x1E
	test ecx,ecx
	jne Block95

 Block94:
	push 0x80004003
	call _com_issue_error

 Block95:
	lea eax,[ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0x17
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1F
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x50],edi
	test eax,eax
	je Block99

 Block96:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x48]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x48]
	mov edi,ecx
	mov dword ptr [ebp+0x50],edi
	test eax,eax
	jge Block99

 Block97:
	cmp eax,0x80004002
	je Block99

 Block98:
	push eax
	call _com_issue_error

 Block99:
	mov byte ptr [ebp-4],0x21
	cmp word ptr [ebp+0x10],si
	jne Block102

 Block100:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	test eax,eax
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block103:
	test edi,edi
	sete al
	test al,al
	je Block114

 Block104:
	mov byte ptr [ebp-4],0x17
	test edi,edi
	je Block106

 Block105:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block106:
	mov byte ptr [ebp-4],1
	test ebx,ebx
	je Block108

 Block107:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block108:
	mov esi,dword ptr [ebp+0x3C]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block111

 Block109:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block111

 Block110:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block111:
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block113

 Block112:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block113:
	xor eax,eax
	jmp Block234

 Block114:
	xor ebx,ebx
	mov dword ptr [ebp+0x4C],ebx
	test edi,edi
	je Block1

 Block115:
	lea ecx,[ecx]

 Block116:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x40]
	push ecx
	push edi
	mov dword ptr [ebp+0x40],0
	call edx
	test eax,eax
	jge Block118

 Block117:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block118:
	cmp ebx,dword ptr [ebp+0x40]
	jae Block143

 Block119:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ebx
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	lea eax,[ebp+0x54]
	mov byte ptr [ebp-4],0x22
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x21
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x23
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x40],esi
	test eax,eax
	je Block122

 Block120:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x48]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x48]
	mov esi,ecx
	mov dword ptr [ebp+0x40],esi
	test eax,eax
	jge Block122

 Block121:
	cmp eax,0x80004002
	jne Block58

 Block122:
	cmp word ptr [ebp+0x54],8
	mov byte ptr [ebp-4],0x25
	jne Block125

 Block123:
	mov eax,dword ptr [ebp+0x5C]
	xor edx,edx
	mov word ptr [ebp+0x54],dx
	test eax,eax
	je Block126

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block126

 Block125:
	lea eax,[ebp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block126:
	test esi,esi
	sete al
	test al,al
	je Block129

 Block127:
	mov byte ptr [ebp-4],0x21
	test esi,esi
	je Block142

 Block128:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	inc ebx
	mov dword ptr [ebp+0x4C],ebx
	jmp Block116

 Block129:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_ITEM__3
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x26
	test esi,esi
	je Block1

 Block130:
	lea eax,[ebp]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x25
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x27
	call get_int32
	add esp,8
	cmp word ptr [ebp],8
	mov ebx,eax
	mov byte ptr [ebp-4],0x25
	jne Block133

 Block131:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	test eax,eax
	je Block134

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block133:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block134:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_COUNT
	call _xbstr_t::_ctor_0
	lea eax,[ebp-0x1C]
	mov byte ptr [ebp-4],0x28
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x25
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x29
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x1C],8
	mov edi,eax
	mov byte ptr [ebp-4],0x25
	jne Block137

 Block135:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	test eax,eax
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block138:
	test ebx,ebx
	je Block141

 Block139:
	test edi,edi
	je Block141

 Block140:
	mov ecx,dword ptr [ebp+0x3C]
	add ecx,0x38
	call ZList<RECIPE_INFO>::AddTail_
	mov dword ptr [eax],ebx
	mov dword ptr [eax+4],edi

 Block141:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0x21
	call ecx
	mov ebx,dword ptr [ebp+0x4C]
	mov edi,dword ptr [ebp+0x50]

 Block142:
	inc ebx
	mov dword ptr [ebp+0x4C],ebx
	jmp Block116

 Block143:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_RANDOMREWARD
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0x2A
	test ecx,ecx
	jne Block145

 Block144:
	push 0x80004003
	call _com_issue_error

 Block145:
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],0x21
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x2B
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x40],ebx
	test eax,eax
	je Block149

 Block146:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x48]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x48]
	mov dword ptr [ebp+0x40],ebx
	test eax,eax
	jge Block149

 Block147:
	cmp eax,0x80004002
	je Block149

 Block148:
	push eax
	call _com_issue_error

 Block149:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x2D
	jne Block152

 Block150:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	test eax,eax
	je Block153

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block153

 Block152:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block153:
	test ebx,ebx
	je Block187

 Block154:
	xor edi,edi

 Block155:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x4C]
	push ecx
	push ebx
	mov dword ptr [ebp+0x48],edi
	mov dword ptr [ebp+0x4C],0
	call edx
	test eax,eax
	jge Block157

 Block156:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block157:
	cmp edi,dword ptr [ebp+0x4C]
	jae Block187

 Block158:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push edi
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	lea eax,[ebp]
	mov byte ptr [ebp-4],0x2E
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x2D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x2F
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x64],esi
	test eax,eax
	je Block161

 Block159:
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
	mov dword ptr [ebp+0x64],esi
	test eax,eax
	jge Block161

 Block160:
	cmp eax,0x80004002
	jne Block58

 Block161:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x31
	jne Block164

 Block162:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block165

 Block163:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block165

 Block164:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block165:
	test esi,esi
	sete al
	test al,al
	je Block168

 Block166:
	mov byte ptr [ebp-4],0x2D
	test esi,esi
	je Block186

 Block167:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	inc edi
	jmp Block155

 Block168:
	push 0
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push offset _S_ITEM__3
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x32
	test esi,esi
	je Block1

 Block169:
	lea eax,[ebp+0x54]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x31
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x33
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x54],8
	mov dword ptr [ebp+0x4C],eax
	mov byte ptr [ebp-4],0x31
	jne Block172

 Block170:
	mov eax,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov word ptr [ebp+0x54],cx
	test eax,eax
	je Block173

 Block171:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block173

 Block172:
	lea edx,[ebp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block173:
	push 0
	push ecx
	mov dword ptr [ebp-0x20],esp
	mov ecx,esp
	push offset _S_ITEMNUM
	call _xbstr_t::_ctor_0
	lea eax,[ebp-0x34]
	mov byte ptr [ebp-4],0x34
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x31
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x35
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x34],8
	mov ebx,eax
	mov byte ptr [ebp-4],0x31
	jne Block176

 Block174:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block177

 Block175:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block177

 Block176:
	lea edx,[ebp-0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block177:
	push 0
	push ecx
	mov dword ptr [ebp-0x20],esp
	mov ecx,esp
	push offset _S_PROB__1
	call _xbstr_t::_ctor_0
	lea eax,[ebp+0x28]
	mov byte ptr [ebp-4],0x36
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x31
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x37
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x28],8
	mov edi,eax
	mov byte ptr [ebp-4],0x31
	jne Block180

 Block178:
	mov eax,dword ptr [ebp+0x30]
	xor ecx,ecx
	mov word ptr [ebp+0x28],cx
	test eax,eax
	je Block181

 Block179:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block181

 Block180:
	lea edx,[ebp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block181:
	cmp dword ptr [ebp+0x4C],0
	je Block185

 Block182:
	test ebx,ebx
	je Block185

 Block183:
	test edi,edi
	je Block185

 Block184:
	mov ecx,dword ptr [ebp+0x3C]
	add ecx,0x4C
	call ZList<RANDOM_REWARD_INFO>::AddTail_
	mov ecx,dword ptr [ebp+0x4C]
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],edi

 Block185:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0x2D
	call eax
	mov edi,dword ptr [ebp+0x48]
	mov ebx,dword ptr [ebp+0x40]

 Block186:
	inc edi
	jmp Block155

 Block187:
	mov esi,dword ptr [ebp+0x20]
	push 0
	lea ecx,[ebp+0x78]
	push ecx
	mov ecx,esi
	call ZMap<long, ZRef<ITEM_MAKE_INFO>, long>::GetAt
	test eax,eax
	je Block197

 Block188:
	mov byte ptr [ebp-4],0x21
	test ebx,ebx
	je Block190

 Block189:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block190:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x17
	call edx
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block192

 Block191:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block192:
	mov esi,dword ptr [ebp+0x3C]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block195

 Block193:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block195

 Block194:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block195:
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block113

 Block196:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	xor eax,eax
	jmp Block234

 Block197:
	lea eax,[ebp+0x38]
	push eax
	lea ecx,[ebp+0x78]
	push ecx
	mov ecx,esi
	call ZMap<long, ZRef<ITEM_MAKE_INFO>, long>::Insert
	mov edx,dword ptr [ebp+0x3C]
	cmp dword ptr [edx],0
	push 0
	jne Block210

 Block198:
	lea eax,[ebp+0x74]
	add esi,0x18
	push eax
	mov ecx,esi
	call ZMap<long, ZList<long>, long>::GetAt
	mov edi,eax
	test edi,edi
	je Block209

 Block199:
	push 0
	lea ecx,[ebp+0x78]
	push ecx
	mov ecx,edi
	call ZList<long>::Find
	test eax,eax
	je Block221

 Block200:
	mov byte ptr [ebp-4],0x21
	test ebx,ebx
	je Block202

 Block201:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block202:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x17
	call edx
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block204

 Block203:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block204:
	mov esi,dword ptr [ebp+0x3C]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block207

 Block205:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block207

 Block206:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block207:
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block113

 Block208:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	xor eax,eax
	jmp Block234

 Block209:
	xor eax,eax
	mov edi,offset ZLIST_LONG_VTABLE
	mov dword ptr [ebp+0x24],edi
	mov dword ptr [ebp+0x2C],eax
	mov dword ptr [ebp+0x30],eax
	mov dword ptr [ebp+0x34],eax
	mov byte ptr [ebp-4],0x38
	jmp Block223

 Block210:
	lea edx,[ebp+0x74]
	add esi,0x30
	push edx
	mov ecx,esi
	call ZMap<long, ZList<long>, long>::GetAt
	mov edi,eax
	test edi,edi
	je Block222

 Block211:
	push 0
	lea eax,[ebp+0x78]
	push eax
	mov ecx,edi
	call ZList<long>::Find
	test eax,eax
	je Block221

 Block212:
	mov byte ptr [ebp-4],0x21
	test ebx,ebx
	je Block214

 Block213:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block214:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x17
	call edx
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block216

 Block215:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block216:
	mov esi,dword ptr [ebp+0x3C]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block219

 Block217:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block219

 Block218:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block219:
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block113

 Block220:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	xor eax,eax
	jmp Block234

 Block221:
	mov ecx,edi
	call ZList<long>::AddTail_
	mov ecx,dword ptr [ebp+0x78]
	mov dword ptr [eax],ecx
	jmp Block224

 Block222:
	xor eax,eax
	mov edi,offset ZLIST_LONG_VTABLE
	mov dword ptr [ebp+0x24],edi
	mov dword ptr [ebp+0x2C],eax
	mov dword ptr [ebp+0x30],eax
	mov dword ptr [ebp+0x34],eax
	mov byte ptr [ebp-4],0x39

 Block223:
	lea ecx,[ebp+0x24]
	call ZList<long>::AddTail_
	mov edx,dword ptr [ebp+0x78]
	mov dword ptr [eax],edx
	lea eax,[ebp+0x24]
	push eax
	lea ecx,[ebp+0x74]
	push ecx
	mov ecx,esi
	call ZMap<long, ZList<long>, long>::Insert
	lea ecx,[ebp+0x24]
	mov dword ptr [ebp+0x24],edi
	mov byte ptr [ebp-4],0x2D
	call ZList<long>::RemoveAll

 Block224:
	mov byte ptr [ebp-4],0x21
	test ebx,ebx
	je Block226

 Block225:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block226:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x17
	call edx
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block228

 Block227:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block228:
	mov esi,dword ptr [ebp+0x3C]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block231

 Block229:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block231

 Block230:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block231:
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block233

 Block232:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block233:
	mov eax,1

 Block234:
	lea esp,[ebp-0x54]
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
}
}
// ITEM_MAKE_INFO::~ITEM_MAKE_INFO
_SUB_EXCEPTION_HANDLER(1C5990)
__SUB_CLASS_THIS0(001C5990, __thiscall, 69913,  ITEM_MAKE_INFO, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1C5990
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
	lea ecx,[esi+0x4C]
	mov dword ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<RANDOM_REWARD_INFO>::`vftable'
	call ZList<RANDOM_REWARD_INFO>::RemoveAll
	lea ecx,[esi+0x38]
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<RECIPE_INFO>::`vftable'
	call ZList<RECIPE_INFO>::RemoveAll
	lea ecx,[esi+0x24]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<QUEST_CONDITION>::`vftable'
	call ZList<QUEST_CONDITION>::RemoveAll
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CItemMakerInfo::Load
__SUB_CLASS_THIS0(001C9A70, __thiscall, 77828,  CItemMakerInfo, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CItemMakerInfo::Load_ItemMakeInfo
	test eax,eax
	jne Block2

 Block1:
	xor eax,eax
	pop esi
	ret

 Block2:
	mov ecx,esi
	call CItemMakerInfo::Load_GemEffect
	test eax,eax
	je Block1

 Block3:
	mov ecx,esi
	call CItemMakerInfo::Load_MonsterCrystalLevel
	test eax,eax
	je Block1

 Block4:
	mov ecx,esi
	call CItemMakerInfo::Load_MonsterTrophy
	neg eax
	sbb eax,eax
	neg eax
	pop esi
	ret
}
}
// CItemMakerInfo::GetMonsterTrophyLevel
__SUB_CLASS_THIS(001C4DB0, __thiscall, 77836,  CItemMakerInfo, int32_t, long, long&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push eax
	lea edx,[esp+8]
	push edx
	add ecx,0x74
	call ZMap<long, long, long>::GetAt
	neg eax
	sbb eax,eax
	neg eax
	ret 8
}
}
// CItemMakerInfo::~CItemMakerInfo
_SUB_EXCEPTION_HANDLER(5C5C20)
__SUB_CLASS_THIS0(005C5C20, __thiscall, 77829,  CItemMakerInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5C5C20
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
	lea ecx,[esi+0x74]
	mov dword ptr [esp+0x14],5
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, long, long>::`vftable'
	call ZMap<long, long, long>::RemoveAll
	lea ecx,[esi+0x60]
	mov byte ptr [esp+0x14],4
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<MONSTER_CRYSTAL_LEVEL>::`vftable'
	call ZList<MONSTER_CRYSTAL_LEVEL>::RemoveAll
	lea ecx,[esi+0x48]
	mov byte ptr [esp+0x14],3
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, GEM_EFFECT_INFO, long>::`vftable'
	call ZMap<long, GEM_EFFECT_INFO, long>::RemoveAll
	lea ecx,[esi+0x30]
	mov byte ptr [esp+0x14],2
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZList<long>, long>::`vftable'
	call ZMap<long, ZList<long>, long>::RemoveAll
	lea ecx,[esi+0x18]
	mov byte ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZList<long>, long>::`vftable'
	call ZMap<long, ZList<long>, long>::RemoveAll
	mov ecx,esi
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [esi],offset ZMap<long, ZRef<ITEM_MAKE_INFO>, long>::`vftable'
	call ZMap<long, ZRef<ITEM_MAKE_INFO>, long>::RemoveAll
	mov dword ptr [TSingleton<CItemMakerInfo>::ms_pInstance],0
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CItemMakerInfo::RegisterGemEffect
_SUB_EXCEPTION_HANDLER(1C7360)
__SUB_CLASS_THIS(001C7360, __thiscall, 77839,  CItemMakerInfo, void, long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1C7360
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
	mov dword ptr [esp+0x18],ecx
	xor ebx,ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_INCPAD
	mov dword ptr [esp+0x48],ebx
	mov dword ptr [esp+0x20],ebx
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],1
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x48],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x44],2
	call get_int32
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	add esp,8
	mov esi,eax
	mov byte ptr [esp+0x3C],bl
	cmp word ptr [esp+0x24],bp
	jne Block5

 Block3:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebx
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea edx,[esp+0x24]
	push edx
	call edi

 Block6:
	cmp esi,ebx
	je Block8

 Block7:
	mov dword ptr [esp+0x14],ebx
	jmp Block76

 Block8:
	push ebx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_INCMAD
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],3
	cmp ecx,ebx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x48],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x44],4
	call get_int32
	add esp,8
	mov esi,eax
	mov byte ptr [esp+0x3C],bl
	cmp word ptr [esp+0x24],bp
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebx
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea edx,[esp+0x24]
	push edx
	call edi

 Block14:
	cmp esi,ebx
	je Block16

 Block15:
	mov dword ptr [esp+0x14],1
	jmp Block76

 Block16:
	push ebx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_INCACC
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],5
	cmp ecx,ebx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x48],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x44],6
	call get_int32
	add esp,8
	mov esi,eax
	mov byte ptr [esp+0x3C],bl
	cmp word ptr [esp+0x24],bp
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x24]
	push edx
	call edi

 Block22:
	cmp esi,ebx
	je Block24

 Block23:
	mov dword ptr [esp+0x14],2
	jmp Block76

 Block24:
	push ebx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_INCEVA
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],7
	cmp ecx,ebx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x48],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x44],8
	call get_int32
	add esp,8
	mov esi,eax
	mov byte ptr [esp+0x3C],bl
	cmp word ptr [esp+0x24],bp
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebx
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x24]
	push edx
	call edi

 Block30:
	cmp esi,ebx
	je Block32

 Block31:
	mov dword ptr [esp+0x14],3
	jmp Block76

 Block32:
	push ebx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_INCSPEED
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],9
	cmp ecx,ebx
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x48],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x44],0xA
	call get_int32
	add esp,8
	lea ecx,[esp+0x24]
	mov esi,eax
	mov byte ptr [esp+0x3C],bl
	call Ztl_variant_t::~Ztl_variant_t
	cmp esi,ebx
	je Block36

 Block35:
	mov dword ptr [esp+0x14],4
	jmp Block76

 Block36:
	push ebx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_INCJUMP
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0xB
	cmp ecx,ebx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x48],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x44],0xC
	call get_int32
	add esp,8
	lea ecx,[esp+0x24]
	mov esi,eax
	mov byte ptr [esp+0x3C],bl
	call Ztl_variant_t::~Ztl_variant_t
	cmp esi,ebx
	je Block40

 Block39:
	mov dword ptr [esp+0x14],5
	jmp Block76

 Block40:
	push ebx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_INCMAXHP
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0xD
	cmp ecx,ebx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x48],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x44],0xE
	call get_int32
	add esp,8
	lea ecx,[esp+0x24]
	mov esi,eax
	mov byte ptr [esp+0x3C],bl
	call Ztl_variant_t::~Ztl_variant_t
	cmp esi,ebx
	je Block44

 Block43:
	mov dword ptr [esp+0x14],6
	jmp Block76

 Block44:
	push ebx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_INCMAXMP
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0xF
	cmp ecx,ebx
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x48],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x44],0x10
	call get_int32
	add esp,8
	lea ecx,[esp+0x24]
	mov esi,eax
	mov byte ptr [esp+0x3C],bl
	call Ztl_variant_t::~Ztl_variant_t
	cmp esi,ebx
	je Block48

 Block47:
	mov dword ptr [esp+0x14],7
	jmp Block76

 Block48:
	push ebx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_INCSTR
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x11
	cmp ecx,ebx
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x48],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x44],0x12
	call get_int32
	add esp,8
	lea ecx,[esp+0x24]
	mov esi,eax
	mov byte ptr [esp+0x3C],bl
	call Ztl_variant_t::~Ztl_variant_t
	cmp esi,ebx
	je Block52

 Block51:
	mov dword ptr [esp+0x14],ebp
	jmp Block76

 Block52:
	push ebx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_INCINT
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x13
	cmp ecx,ebx
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x48],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x44],0x14
	call get_int32
	add esp,8
	lea ecx,[esp+0x24]
	mov esi,eax
	mov byte ptr [esp+0x3C],bl
	call Ztl_variant_t::~Ztl_variant_t
	cmp esi,ebx
	je Block56

 Block55:
	mov dword ptr [esp+0x14],9
	jmp Block76

 Block56:
	push ebx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_INCLUK
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x15
	cmp ecx,ebx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x48],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x44],0x16
	call get_int32
	add esp,8
	lea ecx,[esp+0x24]
	mov esi,eax
	mov byte ptr [esp+0x3C],bl
	call Ztl_variant_t::~Ztl_variant_t
	cmp esi,ebx
	je Block60

 Block59:
	mov dword ptr [esp+0x14],0xA
	jmp Block76

 Block60:
	push ebx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_INCDEX
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x17
	cmp ecx,ebx
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x48],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x44],0x18
	call get_int32
	add esp,8
	lea ecx,[esp+0x24]
	mov esi,eax
	mov byte ptr [esp+0x3C],bl
	call Ztl_variant_t::~Ztl_variant_t
	cmp esi,ebx
	je Block64

 Block63:
	mov dword ptr [esp+0x14],0xB
	jmp Block76

 Block64:
	push ebx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_INCREQLEVEL
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x19
	cmp ecx,ebx
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x48],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x44],0x1A
	call get_int32
	add esp,8
	lea ecx,[esp+0x24]
	mov esi,eax
	mov byte ptr [esp+0x3C],bl
	call Ztl_variant_t::~Ztl_variant_t
	cmp esi,ebx
	je Block68

 Block67:
	mov dword ptr [esp+0x14],0xC
	jmp Block76

 Block68:
	push ebx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_RANDOPTION
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x1B
	cmp ecx,ebx
	jne Block70

 Block69:
	push 0x80004003
	call _com_issue_error

 Block70:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x48],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x44],0x1C
	call get_int32
	add esp,8
	lea ecx,[esp+0x24]
	mov esi,eax
	mov byte ptr [esp+0x3C],bl
	call Ztl_variant_t::~Ztl_variant_t
	cmp esi,ebx
	je Block72

 Block71:
	mov dword ptr [esp+0x14],0xD
	jmp Block76

 Block72:
	push ebx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_RANDSTAT
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0x1D
	cmp ecx,ebx
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x48],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x44],0x1E
	call get_int32
	add esp,8
	lea ecx,[esp+0x24]
	mov esi,eax
	mov byte ptr [esp+0x3C],bl
	call Ztl_variant_t::~Ztl_variant_t
	cmp esi,ebx
	je Block76

 Block75:
	mov dword ptr [esp+0x14],0xE

 Block76:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x1C],ecx
	mov ecx,dword ptr [esp+0x18]
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x48]
	push eax
	add ecx,0x48
	mov dword ptr [esp+0x28],esi
	call ZMap<long, GEM_EFFECT_INFO, long>::Insert
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp eax,ebx
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block78:
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
// CItemMakerInfo::GetMakableItemList
__SUB_CLASS_THIS(001C8160, __thiscall, 77832,  CItemMakerInfo, int32_t, long, ZList<long>&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push eax
	lea edx,[esp+8]
	push edx
	add ecx,0x18
	call ZMap<long, ZList<long>, long>::GetAt
	neg eax
	sbb eax,eax
	neg eax
	ret 8
}
}
// CItemMakerInfo::Load_GemEffect
_SUB_EXCEPTION_HANDLER(1C7A50)
__SUB_CLASS_THIS0(001C7A50, __thiscall, 77828,  CItemMakerInfo, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1C7A50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x90
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xA4]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x44],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x60]
	push eax
	call esi
	lea ecx,[esp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebx,ebx
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x50]
	push edx
	mov dword ptr [esp+0xB0],ebx
	call esi
	lea eax,[esp+0x50]
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
	push ebx
	push ebx
	lea ecx,[esp+0x68]
	push ecx
	lea edx,[esp+0x5C]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_ITEMETC0425IMG
	mov byte ptr [esp+0xC4],1
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xC0],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x84]
	mov byte ptr [esp+0xC0],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xB4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edi,8
	mov byte ptr [esp+0xAC],5
	cmp word ptr [esp+0x70],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0xAC],6
	cmp word ptr [esp+0x50],di
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [esp+0xAC],7
	cmp word ptr [esp+0x60],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov edi,dword ptr [esp+0x18]
	cmp edi,ebx
	sete al
	test al,al
	je Block25

 Block22:
	mov dword ptr [esp+0xAC],0xFFFFFFFF
	cmp edi,ebx
	je Block24

 Block23:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block24:
	xor eax,eax
	jmp Block80

 Block25:
	cmp edi,ebx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[esp+0x4C]
	push eax
	mov ecx,edi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xB0],8
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block29:
	lea ecx,[esp+0x24]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block32

 Block30:
	cmp eax,0x80004002
	je Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xAC],0xA
	cmp eax,ebx
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	lea eax,[esp+0x28]
	push eax
	call esi
	mov byte ptr [esp+0xAC],0xB
	mov dword ptr [esp+0x48],ebx
	jmp Block36

 Block35:
	mov edi,dword ptr [esp+0x18]
	xor ebx,ebx

 Block36:
	mov esi,dword ptr [esp+0x20]
	cmp esi,ebx
	je Block5

 Block37:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block75

 Block38:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x20]
	push eax
	call DetachBSTR
	add esp,8
	mov ecx,eax
	mov byte ptr [esp+0xAC],0xC
	call _xbstr_t::GetBSTR
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],ebx
	call ZXString<char>::AssignWideStr
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xAC],0xE
	cmp eax,ebx
	je Block47

 Block39:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	jne Block46

 Block40:
	cmp esi,ebx
	je Block46

 Block41:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block43

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block43:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block45

 Block44:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block45:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block46:
	mov dword ptr [esp+0x1C],ebx

 Block47:
	mov ebp,dword ptr [esp+0x24]
	push ebp
	call _atoi
	add esp,4
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push ebp
	mov ebx,eax
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x8C]
	push ecx
	mov byte ptr [esp+0xBC],0xF
	mov ecx,edi
	mov byte ptr [esp+0xBC],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xB4],0x10
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [esp+0x40],edi
	test eax,eax
	je Block50

 Block48:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x3C]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x3C]
	mov edi,ecx
	mov dword ptr [esp+0x40],edi
	test eax,eax
	jge Block50

 Block49:
	cmp eax,0x80004002
	jne Block1

 Block50:
	cmp word ptr [esp+0x80],8
	mov byte ptr [esp+0xAC],0x12
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x88]
	xor edx,edx
	mov word ptr [esp+0x80],dx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[esp+0x80]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_INFO__1
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xB8],0x13
	test edi,edi
	je Block5

 Block55:
	lea ecx,[esp+0x9C]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0xBC],0x12
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xB4],0x14
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	test eax,eax
	je Block58

 Block56:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x38]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x38]
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	test eax,eax
	jge Block58

 Block57:
	cmp eax,0x80004002
	jne Block1

 Block58:
	cmp word ptr [esp+0x90],8
	mov byte ptr [esp+0xAC],0x16
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x98]
	xor edx,edx
	mov word ptr [esp+0x90],dx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea eax,[esp+0x90]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block62:
	test esi,esi
	sete al
	test al,al
	jne Block66

 Block63:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0xA4],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block65

 Block64:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block65:
	mov ecx,dword ptr [esp+0x48]
	push ebx
	call CItemMakerInfo::RegisterGemEffect

 Block66:
	mov byte ptr [esp+0xAC],0x12
	test esi,esi
	je Block68

 Block67:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block68:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0xB0],0xE
	call ecx
	mov byte ptr [esp+0xAC],0xB
	test ebp,ebp
	je Block70

 Block69:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block70:
	cmp word ptr [esp+0x28],8
	jne Block73

 Block71:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block35

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block73:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jl Block1

 Block74:
	jmp Block35

 Block75:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xAC],0xA
	jne Block78

 Block76:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebx
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0xB0],7
	call ecx
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov dword ptr [esp+0xB0],0xFFFFFFFF
	call eax
	mov eax,1

 Block80:
	mov ecx,dword ptr [esp+0xA4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x9C
	ret
}
}
// CItemMakerInfo::Load_MonsterTrophy
_SUB_EXCEPTION_HANDLER(1C6CC0)
__SUB_CLASS_THIS0(001C6CC0, __thiscall, 77828,  CItemMakerInfo, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1C6CC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB8]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x4C],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x68]
	push eax
	call esi
	lea ecx,[esp+0x68]
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
	mov dword ptr [esp+0xC4],ebp
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
	lea ecx,[esp+0x70]
	push ecx
	lea edx,[esp+0x64]
	push edx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push offset _S_ITEMETC0400IMG
	mov byte ptr [esp+0xD8],1
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xD4],2
	cmp dword ptr [_D_G_RM],ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0xAC]
	mov byte ptr [esp+0xD4],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC8],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
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
	mov edi,8
	mov byte ptr [esp+0xC0],5
	cmp word ptr [esp+0x98],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0xA0]
	xor ecx,ecx
	mov word ptr [esp+0x98],cx
	cmp eax,ebp
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x98]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0xC0],6
	cmp word ptr [esp+0x58],di
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [esp+0xC0],7
	cmp word ptr [esp+0x68],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov edi,dword ptr [esp+0x14]
	cmp edi,ebp
	sete al
	test al,al
	je Block25

 Block22:
	mov dword ptr [esp+0xC0],0xFFFFFFFF
	cmp edi,ebp
	je Block24

 Block23:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block24:
	xor eax,eax
	jmp Block88

 Block25:
	cmp edi,ebp
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[esp+0x48]
	push eax
	mov ecx,edi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xC4],8
	mov dword ptr [esp+0x2C],ebp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block29:
	lea ecx,[esp+0x2C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebp
	jge Block32

 Block30:
	cmp eax,0x80004002
	je Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0xC0],0xA
	cmp eax,ebp
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	lea eax,[esp+0x2C]
	push eax
	call esi
	mov byte ptr [esp+0xC0],0xB
	mov dword ptr [esp+0x50],ebp
	jmp Block37

 Block36:
	mov edi,dword ptr [esp+0x14]

 Block37:
	mov esi,dword ptr [esp+0x28]
	cmp esi,ebp
	je Block5

 Block38:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x30]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block83

 Block39:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x28]
	push eax
	call DetachBSTR
	add esp,8
	mov ecx,eax
	mov byte ptr [esp+0xC0],0xC
	call _xbstr_t::GetBSTR
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],ebp
	call ZXString<char>::AssignWideStr
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xC0],0xE
	cmp eax,ebp
	je Block48

 Block40:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebp
	jne Block47

 Block41:
	cmp esi,ebp
	je Block47

 Block42:
	mov eax,dword ptr [esi]
	cmp eax,ebp
	je Block44

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block44:
	mov eax,dword ptr [esi+4]
	cmp eax,ebp
	je Block46

 Block45:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block46:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block47:
	mov dword ptr [esp+0x24],ebp

 Block48:
	mov ebx,dword ptr [esp+0x20]
	push ebx
	call _atoi
	add esp,4
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push ebx
	mov dword ptr [esp+0x2C],eax
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x84]
	push ecx
	mov byte ptr [esp+0xD0],0xF
	mov ecx,edi
	mov byte ptr [esp+0xD0],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC8],0x10
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [esp+0x40],edi
	cmp eax,ebp
	je Block51

 Block49:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x44]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	cmp eax,ebp
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x44]
	cmp eax,ebp
	mov edi,ecx
	mov dword ptr [esp+0x40],edi
	jge Block51

 Block50:
	cmp eax,0x80004002
	jne Block1

 Block51:
	cmp word ptr [esp+0x78],8
	mov byte ptr [esp+0xC0],0x12
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x80]
	xor edx,edx
	mov word ptr [esp+0x78],dx
	cmp eax,ebp
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea eax,[esp+0x78]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block55:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_INFO__1
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xCC],0x13
	cmp edi,ebp
	je Block5

 Block56:
	lea ecx,[esp+0x94]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0xD0],0x12
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC8],0x14
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x3C],esi
	cmp eax,ebp
	je Block59

 Block57:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x54]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	cmp eax,ebp
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x54]
	cmp eax,ebp
	mov esi,ecx
	mov dword ptr [esp+0x3C],esi
	jge Block59

 Block58:
	cmp eax,0x80004002
	jne Block1

 Block59:
	cmp word ptr [esp+0x88],8
	mov byte ptr [esp+0xC0],0x16
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x90]
	xor edx,edx
	mov word ptr [esp+0x88],dx
	cmp eax,ebp
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[esp+0x88]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block63:
	cmp esi,ebp
	sete al
	test al,al
	je Block68

 Block64:
	mov byte ptr [esp+0xC0],0x12
	cmp esi,ebp
	je Block66

 Block65:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block66:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0xC4],0xE
	call ecx
	mov byte ptr [esp+0xC0],0xB
	cmp ebx,ebp
	je Block78

 Block67:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4
	jmp Block78

 Block68:
	push ebp
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_LV
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xC8],0x17
	cmp esi,ebp
	je Block5

 Block69:
	lea edx,[esp+0xB0]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xCC],0x16
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xC8],0x18
	call get_int32
	add esp,8
	cmp word ptr [esp+0xA8],8
	mov ebp,eax
	mov dword ptr [esp+0x18],ebp
	mov byte ptr [esp+0xC0],0x16
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [esp+0xA8],ax
	mov eax,dword ptr [esp+0xB0]
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[esp+0xA8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	test ebp,ebp
	je Block75

 Block74:
	mov ecx,dword ptr [esp+0x4C]
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x20]
	push eax
	add ecx,0x74
	call ZMap<long, long, long>::Insert

 Block75:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0xC4],0x12
	call edx
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0xC4],0xE
	call ecx
	mov byte ptr [esp+0xC0],0xB
	test ebx,ebx
	je Block77

 Block76:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block77:
	xor ebp,ebp

 Block78:
	cmp word ptr [esp+0x2C],8
	jne Block81

 Block79:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebp
	je Block36

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block81:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]
	cmp eax,ebp
	jl Block1

 Block82:
	jmp Block36

 Block83:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xC0],0xA
	jne Block86

 Block84:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0xC4],7
	call ecx
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov dword ptr [esp+0xC4],0xFFFFFFFF
	call eax
	mov eax,1

 Block88:
	mov ecx,dword ptr [esp+0xB8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xB0
	ret
}
}
// CItemMakerInfo::CItemMakerInfo
__SUB_CLASS_THIS0(005C5B70, __thiscall, 77844,  CItemMakerInfo, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	push edi
	mov dword ptr [TSingleton<CItemMakerInfo>::ms_pInstance],esi
	xor edi,edi
	mov ebx,0x1F
	push 0x64
	int 3// TODO: 	mov dword ptr [esi],offset ZMap<long, ZRef<ITEM_MAKE_INFO>, long>::`vftable'
	mov dword ptr [esi+4],edi
	mov dword ptr [esi+8],ebx
	mov dword ptr [esi+0xC],edi
	call ZMap<long, ZRef<ITEM_MAKE_INFO>, long>::_CalcAutoGrow
	lea ecx,[esi+0x18]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZList<long>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZList<long>, long>::_CalcAutoGrow
	lea ecx,[esi+0x30]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZList<long>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZList<long>, long>::_CalcAutoGrow
	lea ecx,[esi+0x48]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, GEM_EFFECT_INFO, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, GEM_EFFECT_INFO, long>::_CalcAutoGrow
	lea ecx,[esi+0x74]
	int 3// TODO: 	mov dword ptr [esi+0x60],offset ZList<MONSTER_CRYSTAL_LEVEL>::`vftable'
	mov dword ptr [esi+0x68],edi
	mov dword ptr [esi+0x6C],edi
	mov dword ptr [esi+0x70],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, long, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, long, long>::_CalcAutoGrow
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	ret
}
}
