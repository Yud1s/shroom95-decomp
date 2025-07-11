#include "regen.hpp"
// ItemInfo.ipp
#include "ItemInfo.hpp"

static void* ZLIST_REF_ITEMSKILL_VTABLE = get_vtable<ZList<ZRef<CItemInfo::ItemSkill>>>();
static void* ZMAP_LONG_LONG_VTABLE = get_vtable<ZMap<long, long, long>>();
static void* ZMAP_LONG_ZXSTRINGA_VTABLE = get_vtable<ZMap<long, ZXString<char>, long>>();
// CItemInfo::IterateExtendExpireDateItem
_SUB_EXCEPTION_HANDLER(1A2000)
__SUB_CLASS_THIS0(001A2000, __thiscall, 78614,  CItemInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A2000
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
	mov dword ptr [esp+0x34],ecx
	xor ebp,ebp
	mov dword ptr [esp+0x38],ebp
	mov dword ptr [esp+0x98],ebp
	mov dword ptr [esp+0x20],ebp
	lea eax,[esp+0x1C]
	push 0x958
	push eax
	mov byte ptr [esp+0xA0],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x226
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0xA4],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x98],1
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x60]
	push edx
	call esi
	lea eax,[esp+0x60]
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
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x9C],3
	call esi
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov edx,dword ptr [esp+0x20]
	push ebp
	push ebp
	lea eax,[esp+0x68]
	push eax
	lea ecx,[esp+0x5C]
	push ecx
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	mov bl,4
	push edx
	mov byte ptr [esp+0xB0],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xAC],5
	cmp dword ptr [_D_G_RM],ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x84]
	mov byte ptr [esp+0xAC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA0],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov edi,8
	mov byte ptr [esp+0x98],8
	cmp word ptr [esp+0x70],di
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	cmp eax,ebp
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov byte ptr [esp+0x98],9
	cmp word ptr [esp+0x50],di
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,ebp
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov byte ptr [esp+0x98],0xA
	cmp word ptr [esp+0x60],di
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	cmp eax,ebp
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea edx,[esp+0x24]
	push edx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x9C],0xB
	mov dword ptr [esp+0x20],ebp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block27:
	lea ecx,[esp+0x20]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebp
	jge Block30

 Block28:
	cmp eax,0x80004002
	je Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x98],0xD
	cmp eax,ebp
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block32:
	lea eax,[esp+0x40]
	push eax
	call esi
	mov byte ptr [esp+0x98],0xE
	mov dword ptr [esp+0x28],ebp
	mov bl,0xF

 Block33:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block7

 Block34:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x28]
	push edx
	lea edx,[esp+0x44]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block76

 Block35:
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	call DetachBSTR
	add esp,8
	mov edi,dword ptr [esp+0x18]
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax],edi
	cmp edi,ebp
	je Block37

 Block36:
	lea eax,[edi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block37:
	lea ecx,[esp+0x8C]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0xA8],0x10
	mov byte ptr [esp+0xA8],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xA0],0x11
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x30],esi
	cmp eax,ebp
	je Block40

 Block38:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x2C]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	cmp eax,ebp
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x2C]
	cmp eax,ebp
	mov esi,ecx
	mov dword ptr [esp+0x30],esi
	jge Block40

 Block39:
	cmp eax,0x80004002
	jne Block3

 Block40:
	cmp word ptr [esp+0x80],8
	mov byte ptr [esp+0x98],0x13
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0x88]
	xor edx,edx
	mov word ptr [esp+0x80],dx
	cmp eax,ebp
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea eax,[esp+0x80]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block44:
	cmp esi,ebp
	sete al
	test al,al
	je Block55

 Block45:
	mov byte ptr [esp+0x98],bl
	cmp esi,ebp
	je Block47

 Block46:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block47:
	mov byte ptr [esp+0x98],0xE
	cmp edi,ebp
	je Block71

 Block48:
	lea eax,[edi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block54

 Block49:
	mov eax,dword ptr [edi]
	cmp eax,ebp
	je Block51

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block51:
	mov eax,dword ptr [edi+4]
	cmp eax,ebp
	je Block53

 Block52:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block53:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block54:
	mov dword ptr [esp+0x18],ebp
	jmp Block71

 Block55:
	cmp edi,ebp
	je Block57

 Block56:
	mov eax,dword ptr [edi]
	jmp Block58

 Block57:
	xor eax,eax

 Block58:
	push eax
	call __wtoi
	mov ebp,eax
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block60

 Block59:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block60:
	mov ecx,dword ptr [esp+0x38]
	push ebp
	call CItemInfo::RegisterExtendExpireDateItem
	mov byte ptr [esp+0x98],bl
	test esi,esi
	je Block62

 Block61:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block62:
	mov byte ptr [esp+0x98],0xE
	test edi,edi
	je Block70

 Block63:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block69

 Block64:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block66

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block66:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block68

 Block67:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block68:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block69:
	mov dword ptr [esp+0x18],0

 Block70:
	xor ebp,ebp

 Block71:
	cmp word ptr [esp+0x40],8
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,ebp
	je Block33

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block74:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	cmp eax,ebp
	jge Block33

 Block75:
	jmp Block3

 Block76:
	mov eax,dword ptr [_D_G_RM]
	cmp eax,ebp
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
	mov edx,dword ptr [eax]
	push ebp
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+0x24]
	call eax
	cmp eax,ebp
	jge Block80

 Block79:
	push offset __GUID_57dfe40b_3e20_4dbc_97e8_805a50f381bf
	push esi
	push eax
	call _com_issue_errorex

 Block80:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x98],0xD
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	cmp eax,ebp
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x9C],0xA
	call edx
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x9C],1
	call edx
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x98],0
	cmp eax,ebp
	je Block86

 Block85:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block86:
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret
}
}
// CItemInfo::IterateItemInfo
_SUB_EXCEPTION_HANDLER(1C4C00)
__SUB_CLASS_THIS0(001C4C00, __thiscall, 130678,  CItemInfo, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1C4C00
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov esi,ecx
	mov dword ptr [ebp-4],0
	call CItemInfo::IterateMapString_1
	mov ecx,esi
	call CItemInfo::IterateItemString_1
	mov ecx,esi
	call CItemInfo::RegisterSetItemEffect
	mov ecx,esi
	call CItemInfo::RegisterSetItemInfo
	mov ecx,esi
	call CItemInfo::RegisterGachaponItemInfo
	mov ecx,esi
	call CItemInfo::IterateItemNameforScanner_1
	mov ecx,esi
	call CItemInfo::IterateCashBundleItem
	mov ecx,esi
	call CItemInfo::IterateBridleItem
	mov ecx,esi
	call CItemInfo::IterateLotteryItem
	mov ecx,esi
	call CItemInfo::IterateExtendExpireDateItem
	mov ecx,esi
	call CItemInfo::IterateDamageByEquipUpgrade
	mov eax,1
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CItemInfo::LevelInfo::RandomINT::GetStatType
__SUB_CLASS_THIS0(00191620, __thiscall, 131157,  CItemInfo::LevelInfo::RandomINT, long) {
__asm {

 Block0:
	mov eax,4
	ret
}
}
// ZSort_ZPair_long_long__PairFirstLess_
__SUB(0019AD00, __cdecl, 141452,  void, ZArray<ZPair<long,long> >&, __POSITION*, __POSITION*, none) {
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
	call ZArray<ZPair<long, long>>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<ZPair<long, long>>::IndexOf
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
	lea eax,[esp+0x1C]
	push eax
	add ecx,ecx
	push ecx
	push edi
	push esi
	push ebx
	call IntroSortLoopHelper<ZPair<long, long>, int, PairFirstLess>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<ZPair<long, long>, PairFirstLess>::call
	add esp,0x24

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// CItemInfo::IterateItemString
_SUB_EXCEPTION_HANDLER(1B5360)
__SUB_CLASS_THIS(001B5360, __thiscall, 130742,  CItemInfo, void, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B5360
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
	mov dword ptr [esp+0x24],ecx
	mov ecx,dword ptr [esp+0xA0]
	xor ebx,ebx
	mov dword ptr [esp+0x98],ebx
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+0x30]
	push eax
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x9C],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x50],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block7

 Block5:
	cmp eax,0x80004002
	je Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x98],3
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	lea eax,[esp+0x70]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov ebp,dword ptr [esp+0x18]
	mov byte ptr [esp+0x98],4
	mov dword ptr [esp+0x34],ebx
	cmp ebp,ebx
	je Block1

 Block10:
	mov ecx,dword ptr [ebp]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x74]
	push eax
	push 1
	push ebp
	call ecx
	test eax,eax
	jne Block80

 Block11:
	lea edx,[esp+0x70]
	push edx
	lea eax,[esp+0x24]
	push eax
	call DetachBSTR
	add esp,8
	mov edi,dword ptr [esp+0x20]
	cmp edi,ebx
	je Block13

 Block12:
	mov eax,dword ptr [edi]
	jmp Block14

 Block13:
	xor eax,eax

 Block14:
	push 0xA
	lea ecx,[esp+0x40]
	push ecx
	push eax
	call _wcstol
	xor esi,esi
	add esp,0xC
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x1C],esi
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x58],esp
	mov dword ptr [eax],edi
	cmp edi,ebx
	je Block16

 Block15:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block16:
	mov ecx,dword ptr [esp+0xAC]
	mov byte ptr [esp+0xA4],7
	cmp ecx,ebx
	je Block1

 Block17:
	lea eax,[esp+0x8C]
	push eax
	mov byte ptr [esp+0xA8],6
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xA0],8
	call Ztl_variant_t::GetUnknown
	cmp eax,ebx
	je Block20

 Block18:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x38]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x38]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [esp+0x1C],esi
	jge Block20

 Block19:
	cmp eax,0x80004002
	jne Block6

 Block20:
	cmp word ptr [esp+0x80],8
	mov byte ptr [esp+0x98],6
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x88]
	xor edx,edx
	mov word ptr [esp+0x80],dx
	cmp eax,ebx
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[esp+0x80]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov ecx,dword ptr [esp+0x3C]
	cmp word ptr [ecx],bx
	je Block28

 Block25:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x50],esp
	mov dword ptr [eax],esi
	cmp esi,ebx
	je Block27

 Block26:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block27:
	mov ecx,dword ptr [esp+0x28]
	call CItemInfo::IterateItemString_0
	jmp Block70

 Block28:
	push ebx
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	add ecx,0x6C
	call ZMap<long, ZMap<char const *, ZXString<char>, ZXString<char>>, long>::Insert
	add eax,0xC
	mov dword ptr [esp+0x4C],eax
	cmp esi,ebx
	je Block1

 Block29:
	lea edx,[esp+0x40]
	push edx
	mov ecx,esi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x9C],9
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block31:
	lea ecx,[esp+0x2C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block33

 Block32:
	cmp eax,0x80004002
	jne Block6

 Block33:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x98],0xB
	cmp eax,ebx
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0x98],0xC
	mov dword ptr [esp+0x44],ebx

 Block36:
	mov edi,dword ptr [esp+0x28]
	xor ebx,ebx
	cmp edi,ebx
	je Block1

 Block37:
	mov ecx,dword ptr [edi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x64]
	push eax
	push 1
	push edi
	call ecx
	test eax,eax
	jne Block65

 Block38:
	lea edx,[esp+0x60]
	push edx
	lea eax,[esp+0x30]
	push eax
	call DetachBSTR
	mov ebp,dword ptr [esp+0x34]
	add esp,4
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [eax],ebp
	cmp ebp,ebx
	je Block40

 Block39:
	lea ecx,[ebp+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block40:
	lea edx,[esp+0x54]
	mov byte ptr [esp+0x9C],0xE
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],0xD
	call IWzProperty::Getitem
	cmp word ptr [esp+0x50],8
	mov edi,dword ptr [esp+0x58]
	mov byte ptr [esp+0x98],0xF
	je Block42

 Block41:
	mov edi,offset _S___3

 Block42:
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	test edi,edi
	je Block44

 Block43:
	push ebx
	push ebx
	push ebx
	push ebx
	push 0xFFFFFFFF
	push edi
	push ebx
	push ebx
	call WideCharToMultiByte
	mov esi,eax
	push ebx
	dec esi
	push esi
	lea ecx,[esp+0x1C]
	call ZXString<char>::GetBuffer
	push ebx
	push ebx
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push edi
	push ebx
	push ebx
	call WideCharToMultiByte
	push esi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	mov ebx,dword ptr [esp+0x14]
	mov esi,dword ptr [esp+0x1C]

 Block44:
	mov byte ptr [esp+0x98],0x10
	test ebp,ebp
	je Block50

 Block45:
	cmp dword ptr [ebp+4],0
	jne Block49

 Block46:
	mov edi,dword ptr [ebp]
	test edi,edi
	jne Block48

 Block47:
	xor esi,esi
	mov dword ptr [ebp+4],esi
	mov esi,dword ptr [esp+0x1C]
	mov eax,dword ptr [ebp+4]
	jmp Block51

 Block48:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	push 0
	push 0
	push 0x3FFFFFFF
	mov esi,eax
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	mov dword ptr [ebp+4],esi
	mov esi,dword ptr [esp+0x1C]

 Block49:
	mov eax,dword ptr [ebp+4]
	jmp Block51

 Block50:
	xor eax,eax

 Block51:
	mov dword ptr [esp+0x48],eax
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,dword ptr [esp+0x54]
	call ZMap<char const *, ZXString<char>, ZXString<char>>::Insert
	mov byte ptr [esp+0x98],0xF
	test ebx,ebx
	je Block53

 Block52:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block53:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x98],0xD
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov byte ptr [esp+0x98],0xC
	test ebp,ebp
	je Block36

 Block58:
	lea ecx,[ebp+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block64

 Block59:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block61

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block61:
	mov eax,dword ptr [ebp+4]
	test eax,eax
	je Block63

 Block62:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block63:
	push ebp
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block64:
	mov dword ptr [esp+0x2C],0
	jmp Block36

 Block65:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x98],0xB
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	cmp eax,ebx
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [esp+0x9C],6
	call edx
	mov edi,dword ptr [esp+0x20]
	mov ebp,dword ptr [esp+0x18]

 Block70:
	mov byte ptr [esp+0x98],5
	cmp esi,ebx
	je Block72

 Block71:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block72:
	mov byte ptr [esp+0x98],4
	cmp edi,ebx
	je Block10

 Block73:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block79

 Block74:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block76

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block76:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block78

 Block77:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block78:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block79:
	mov dword ptr [esp+0x20],ebx
	jmp Block10

 Block80:
	mov eax,dword ptr [_D_G_RM]
	cmp eax,ebx
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x24]
	push 0
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block84

 Block83:
	push offset __GUID_57dfe40b_3e20_4dbc_97e8_805a50f381bf
	push esi
	push eax
	call _com_issue_errorex

 Block84:
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0x98],3
	jne Block87

 Block85:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea ecx,[esp+0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	mov eax,dword ptr [esp+0x18]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0x9C],0
	call eax
	mov eax,dword ptr [esp+0xA0]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	test eax,eax
	je Block90

 Block89:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block90:
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
// CItemInfo::GetMonsterAffectDamageInfo
_SUB_EXCEPTION_HANDLER(1A0800)
__SUB_CLASS_THIS(001A0800, __thiscall, 130711,  CItemInfo, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A0800
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
	mov dword ptr [esp+0xC],ebx
	mov dword ptr [esp+0x10],ebx
	lea eax,[esp+0x10]
	push eax
	lea edx,[esp+0x2C]
	push edx
	add ecx,0x280
	mov dword ptr [esp+0x24],1
	call ZMap<long, ZXString<char>, long>::GetAt
	test eax,eax
	je Block2

 Block1:
	lea eax,[esp+0x10]
	jmp Block3

 Block2:
	push 0
	push offset _S_
	push 0
	push 0
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x38],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	lea ecx,[esp+0x2C]
	call ZXString<char>::ReleaseBuffer
	mov ebx,1
	lea eax,[esp+0x28]
	mov byte ptr [esp+0x1C],2
	mov dword ptr [esp+0xC],ebx

 Block3:
	mov esi,dword ptr [esp+0x24]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	or ebx,2
	mov dword ptr [esp+0xC],ebx
	mov dword ptr [esp+0x1C],1
	test bl,1
	je Block6

 Block4:
	mov eax,dword ptr [esp+0x28]
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0xC],ebx
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x14
	ret 8
}
}
// CItemInfo::DrawSpecialIconForSlot
_SUB_EXCEPTION_HANDLER(1A8920)
__SUB_CLASS_THIS(001A8920, __thiscall, 130759,  CItemInfo, void, NakedParam<_x_com_ptr<IWzCanvas>>, long, long, long, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A8920
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x68]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x7C]
	push eax
	lea edx,[esp+0x24]
	xor ebx,ebx
	push edx
	mov dword ptr [esp+0x78],ebx
	call CItemInfo::GetSpecialIcon
	mov esi,dword ptr [esp+0x20]
	cmp esi,ebx
	sete al
	mov byte ptr [esp+0x70],1
	test al,al
	je Block5

 Block1:
	mov byte ptr [esp+0x70],bl
	cmp esi,ebx
	je Block3

 Block2:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block3:
	mov eax,dword ptr [esp+0x78]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp eax,ebx
	je Block79

 Block4:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block79

 Block5:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push ecx
	call edi
	lea edx,[esp+0x38]
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
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x74],2
	call edi
	lea ecx,[esp+0x28]
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
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x34]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x90],esp
	push 0x95F
	push ecx
	mov byte ptr [esp+0x8C],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x84],4
	cmp dword ptr [_D_G_RM],ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea edx,[esp+0x6C]
	mov byte ptr [esp+0x84],3
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x78],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x80]
	mov dword ptr [esp+0x80],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov ebp,8
	mov byte ptr [esp+0x70],7
	cmp word ptr [esp+0x58],bp
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	cmp eax,ebx
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov byte ptr [esp+0x70],8
	cmp word ptr [esp+0x28],bp
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov byte ptr [esp+0x70],9
	cmp word ptr [esp+0x38],bp
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebx
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov ebp,dword ptr [esp+0x7C]
	cmp dword ptr [esp+0x88],ebx
	je Block53

 Block27:
	lea eax,[esp+0x48]
	push eax
	call edi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov byte ptr [esp+0x70],0xA
	cmp esi,ebx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x88]
	push eax
	push esi
	mov dword ptr [esp+0x90],ebx
	call ecx
	cmp eax,ebx
	jge Block33

 Block32:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block33:
	mov edx,dword ptr [esp+0x88]
	mov eax,dword ptr [esi]
	lea ecx,[esp+0x14]
	push ecx
	mov dword ptr [esp+0x28],edx
	mov edx,dword ptr [eax+0x40]
	push esi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block35

 Block34:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block35:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	mov ebx,dword ptr [esp+0x14]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],0
	call edx
	test eax,eax
	jge Block37

 Block36:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block37:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x6C]
	mov edi,dword ptr [esp+0x18]
	lea ecx,[esp+0x1C]
	push ecx
	push esi
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block39

 Block38:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block39:
	mov ecx,dword ptr [esp+0x78]
	test ecx,ecx
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	mov edx,dword ptr [esp+0x24]
	lea eax,[esp+0x48]
	push eax
	push 0
	push 0
	push 0
	push 0
	lea eax,[edx+edx]
	push eax
	lea edx,[ebx+ebx]
	push edx
	lea eax,[edi+edi]
	mov edi,dword ptr [esp+0xA0]
	push 0xFF
	push esi
	mov edx,edi
	sub edx,eax
	mov eax,dword ptr [esp+0x40]
	push edx
	lea edx,[eax+eax]
	mov eax,dword ptr [esp+0xA8]
	sub eax,edx
	push eax
	call IWzCanvas::CopyEx
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x70],9
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	cmp dword ptr [esp+0x8C],0
	jne Block75

 Block46:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	mov byte ptr [esp+0x70],0xB
	test ebp,ebp
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	lea edx,[esp+0x48]
	push edx
	push 0
	push 0
	push 0
	push 0
	mov ecx,ebp
	mov ebx,eax
	call IWzCanvas::Getheight
	add eax,eax
	push eax
	mov ecx,ebp
	call IWzCanvas::Getwidth
	add eax,eax
	push eax
	push 0xFF
	push ebp
	mov ecx,ebp
	call IWzCanvas::Getcy
	add eax,eax
	sub edi,eax
	push edi
	mov ecx,ebp
	call IWzCanvas::Getcx
	mov edx,dword ptr [esp+0xA8]
	mov ecx,0x20
	sub ecx,eax
	lea eax,[edx+ecx*2]
	push eax
	mov ecx,ebx
	call IWzCanvas::CopyEx
	jmp Block71

 Block53:
	mov eax,3
	mov word ptr [esp+0x48],ax
	mov dword ptr [esp+0x50],0xFF
	mov byte ptr [esp+0x70],0xC
	cmp esi,ebx
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[esp+0x88]
	push edx
	push esi
	mov dword ptr [esp+0x90],ebx
	call eax
	cmp eax,ebx
	jge Block57

 Block56:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block57:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x6C]
	mov edi,dword ptr [esp+0x88]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x24],ebx
	call eax
	cmp eax,ebx
	jge Block59

 Block58:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block59:
	mov ecx,dword ptr [esp+0x78]
	cmp ecx,ebx
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	mov ebx,dword ptr [esp+0x84]
	mov eax,ebx
	sub eax,edi
	mov edi,dword ptr [esp+0x80]
	lea edx,[esp+0x48]
	push edx
	push esi
	mov edx,edi
	sub edx,dword ptr [esp+0x24]
	push eax
	push edx
	call IWzCanvas::Copy
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x70],9
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	cmp dword ptr [esp+0x8C],0
	jne Block75

 Block66:
	mov edx,3
	mov word ptr [esp+0x48],dx
	mov dword ptr [esp+0x50],0xFF
	mov byte ptr [esp+0x70],0xD
	test ebp,ebp
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	jne Block70

 Block69:
	push 0x80004003
	call _com_issue_error

 Block70:
	mov dword ptr [esp+0x80],eax
	lea eax,[esp+0x48]
	push eax
	push ebp
	mov ecx,ebp
	call IWzCanvas::Getcy
	sub ebx,eax
	push ebx
	mov ecx,ebp
	call IWzCanvas::Getcx
	mov ecx,dword ptr [esp+0x8C]
	sub edi,eax
	add edi,0x20
	push edi
	call IWzCanvas::Copy

 Block71:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x70],9
	jne Block74

 Block72:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov byte ptr [esp+0x70],1
	test ebp,ebp
	je Block77

 Block76:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block77:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x74],0
	call eax
	mov eax,dword ptr [esp+0x78]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	test eax,eax
	je Block79

 Block78:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block79:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret 0x18
}
}
// CItemInfo::EQUIPITEM::_ZtlSecureGet_nrDEX
__SUB_CLASS0(00100080, __fastcall, 85137,  CItemInfo::EQUIPITEM, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x38]
	push eax
	add ecx,0x30
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CItemInfo::LevelInfo::~LevelInfo
_SUB_EXCEPTION_HANDLER(19A230)
__SUB_CLASS_THIS0(0019A230, __thiscall, 130970,  CItemInfo::LevelInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_19A230
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
	lea ecx,[esi+0x18]
	mov dword ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<CItemInfo::LevelInfo::Ability>, long>::`vftable'
	call ZMap<long, ZRef<CItemInfo::LevelInfo::Ability>, long>::RemoveAll
	lea ecx,[esi+4]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<CItemInfo::LevelInfo::RandomStat>>::`vftable'
	call ZList<ZRef<CItemInfo::LevelInfo::RandomStat>>::RemoveAll
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CItemInfo::EQUIPITEM::_ZtlSecureGet_niSpeed
__SUB_CLASS0(001918B0, __fastcall, 130917,  CItemInfo::EQUIPITEM, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x11C]
	push eax
	add ecx,0x118
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// CItemInfo::GetMaxLevel
__SUB_CLASS_THIS(001C09B0, __thiscall, 84833,  CItemInfo, long, long) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	mov eax,0x431BDE83
	imul esi
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,1
	jne Block4

 Block1:
	push esi
	call CItemInfo::GetEquipItem
	test eax,eax
	je Block4

 Block2:
	mov eax,dword ptr [eax+0x210]
	test eax,eax
	je Block4

 Block3:
	mov eax,dword ptr [eax-4]
	pop esi
	ret 4

 Block4:
	xor eax,eax
	pop esi
	ret 4
}
}
// CItemInfo::GetEquipExtItem
_SUB_EXCEPTION_HANDLER(1ACC90)
__SUB_CLASS_THIS(001ACC90, __thiscall, 130735,  CItemInfo, ZRef<CItemInfo::EQUIPEXTITEM>*, ZRef<CItemInfo::EQUIPEXTITEM>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1ACC90
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
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	mov edi,dword ptr [esp+0x44]
	push edi
	lea eax,[esp+0x48]
	push eax
	call CItemInfo::GetItemInfo
	mov ebp,dword ptr [esp+0x44]
	mov dword ptr [esp+0x38],esi
	cmp ebp,esi
	je Block13

 Block1:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x1C],esi
	call ZRef<CItemInfo::EQUIPEXTITEM>::_Alloc
	mov esi,dword ptr [esp+0x1C]
	push 0
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	mov ebx,1
	push offset _S_SLOTINDEX
	mov byte ptr [esp+0x44],bl
	mov dword ptr [esi],edi
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x44],2
	mov ecx,ebp
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],3
	call get_int32
	mov edi,8
	add esp,8
	mov dword ptr [esi+4],eax
	mov byte ptr [esp+0x38],bl
	cmp word ptr [esp+0x20],di
	jne Block4

 Block2:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block5

 Block3:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block5

 Block4:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block5:
	push 0
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_ADDDAY
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x44],4
	mov ecx,ebp
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],5
	call get_int32
	add esp,8
	mov dword ptr [esi+8],eax
	mov byte ptr [esp+0x38],bl
	cmp word ptr [esp+0x20],di
	jne Block8

 Block6:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr [ecx+4],esi
	add esi,0xFFFFFFF0
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x3C],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block10:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block12

 Block11:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push ebx
	mov ecx,esi
	call edx

 Block12:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ecx
	mov eax,dword ptr [esp+0x40]
	jmp Block14

 Block13:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [eax+4],esi

 Block14:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 8
}
}
// CItemInfo::GetRequiredLEV
_SUB_EXCEPTION_HANDLER(1ACA50)
__SUB_CLASS_THIS(001ACA50, __thiscall, 84833,  CItemInfo, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1ACA50
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
	mov eax,dword ptr [esp+0x30]
	push eax
	lea edx,[esp+0x34]
	push edx
	call CItemInfo::GetItemInfo
	mov esi,dword ptr [esp+0x30]
	test esi,esi
	sete al
	mov dword ptr [esp+0x28],0
	test al,al
	je Block4

 Block1:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test esi,esi
	je Block3

 Block2:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block3:
	xor eax,eax
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 4

 Block4:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x14],esp
	push 0x787
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x30],1
	test esi,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x34],0
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x30],2
	call get_int32
	add esp,8
	cmp word ptr [esp+0x10],8
	mov edi,eax
	mov byte ptr [esp+0x28],0
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x18]
	xor ecx,ecx
	mov word ptr [esp+0x10],cx
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ecx
	mov eax,edi
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 4
}
}
// CItemInfo::GetBundleItem
_SUB_EXCEPTION_HANDLER(1B5200)
__SUB_CLASS_THIS(001B5200, __thiscall, 130717,  CItemInfo, const CItemInfo::BUNDLEITEM*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B5200
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
	xor ebx,ebx
	mov dword ptr [esp+0x24],ebx
	lea eax,[esp+0x20]
	push eax
	lea edx,[esp+0x3C]
	lea ecx,[esi+0x54]
	push edx
	mov dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x1C],ecx
	call ZMap<long, ZRef<CItemInfo::BUNDLEITEM>, long>::GetAt
	test eax,eax
	je Block4

 Block1:
	mov ebp,dword ptr [esp+0x24]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp ebp,ebx
	je Block16

 Block2:
	lea esi,[ebp-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block16

 Block3:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	jmp Block14

 Block4:
	mov edi,dword ptr [esp+0x38]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push edi
	push eax
	mov ecx,esi
	call CItemInfo::GetItemInfo
	push edi
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	call CItemInfo::GetBundleItemInfoData
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x34],1
	call ZRef<CItemInfo::BUNDLEITEM>::op_assign_copy
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	mov byte ptr [esp+0x30],0
	je Block9

 Block5:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block8

 Block6:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block8

 Block7:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block8:
	mov dword ptr [esp+0x1C],0

 Block9:
	mov ebp,dword ptr [esp+0x24]
	test ebp,ebp
	je Block11

 Block10:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	lea edx,[esp+0x3C]
	push edx
	call ZMap<long, ZRef<CItemInfo::BUNDLEITEM>, long>::Insert

 Block11:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test ebp,ebp
	je Block16

 Block12:
	lea esi,[ebp-0x10]
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block16

 Block13:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi

 Block14:
	je Block16

 Block15:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block16:
	mov eax,ebp
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
// CItemInfo::GetGachaponSucessNpc
_SUB_EXCEPTION_HANDLER(1C06B0)
__SUB_CLASS_THIS(001C06B0, __thiscall, 84833,  CItemInfo, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1C06B0
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
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x14],0
	call ZRef<CItemInfo::GACHAPONITEMINFO>::_Alloc
	mov ecx,dword ptr [esp+0x14]
	xor eax,eax
	mov dword ptr [ecx],eax
	mov dword ptr [ecx+4],eax
	mov dword ptr [ecx+8],eax
	mov dword ptr [ecx+0xC],eax
	mov dword ptr [ecx+0x10],eax
	mov dword ptr [ecx+0x14],eax
	mov dword ptr [ecx+0x18],eax
	mov dword ptr [ecx+0x1C],eax
	mov dword ptr [ecx+0x20],eax
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	lea ecx,[esi+0x1A0]
	mov dword ptr [esp+0x28],0
	call ZMap<long, ZRef<CItemInfo::GACHAPONITEMINFO>, long>::GetAt
	test eax,eax
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	jne Block6

 Block1:
	test eax,eax
	je Block5

 Block2:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block5

 Block4:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block5:
	xor eax,eax
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4

 Block6:
	mov ebx,dword ptr [eax+0xC]
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
	mov eax,ebx
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
// CItemInfo::EQUIPITEM::_ZtlSecureGet_nrSTR
__SUB_CLASS0(00100040, __fastcall, 85137,  CItemInfo::EQUIPITEM, long) {
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
// CItemInfo::IterateMapString
_SUB_EXCEPTION_HANDLER(1B7D50)
__SUB_CLASS_THIS0(001B7D50, __thiscall, 78614,  CItemInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B7D50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0xC],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push eax
	call esi
	lea ecx,[esp+0x24]
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
	lea edx,[esp+0x14]
	push edx
	mov dword ptr [esp+0x50],0
	call esi
	lea eax,[esp+0x14]
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
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x952
	push eax
	mov byte ptr [esp+0x68],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x60],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x64],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x54],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0xC],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [esp+0x34],8
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x4C],5
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x34]
	push eax
	call esi

 Block13:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x4C],6
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x14]
	push edx
	call esi

 Block17:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x4C],7
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x24]
	push ecx
	call esi

 Block21:
	mov esi,dword ptr [esp+8]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x14],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block23

 Block22:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block23:
	mov ecx,dword ptr [esp+0x10]
	call CItemInfo::IterateMapString_0
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test esi,esi
	je Block25

 Block24:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block25:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x48
	ret
}
}
// CItemInfo::GetItemInfo
_SUB_EXCEPTION_HANDLER(1A8F20)
__SUB_CLASS_THIS(001A8F20, __thiscall, 130719,  CItemInfo, _x_com_ptr<IWzProperty>*, _x_com_ptr<IWzProperty>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A8F20
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
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov edi,dword ptr [esp+0x3C]
	push edi
	lea eax,[esp+0x18]
	push eax
	call CItemInfo::GetItemProp
	mov esi,dword ptr [esp+0x14]
	cmp esi,ebx
	sete al
	mov dword ptr [esp+0x30],ebx
	cmp al,bl
	je Block4

 Block1:
	mov edi,dword ptr [esp+0x38]
	mov dword ptr [edi],ebx
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp esi,ebx
	je Block3

 Block2:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block3:
	mov eax,edi
	jmp Block22

 Block4:
	mov eax,0x68DB8BAD
	imul edi
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x38E
	jne Block10

 Block5:
	mov edi,dword ptr [esp+0x38]
	mov dword ptr [edi],esi
	cmp esi,ebx
	je Block7

 Block6:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block7:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp esi,ebx
	je Block9

 Block8:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block9:
	mov eax,edi
	jmp Block22

 Block10:
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x48],esp
	push 0x3D5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x3C],1
	cmp esi,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea eax,[esp+0x24]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x38],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x40],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block15

 Block13:
	cmp eax,0x80004002
	je Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x30],bl
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebx
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov edi,dword ptr [esp+0x3C]
	mov ebp,dword ptr [esp+0x38]
	mov dword ptr [ebp],edi
	cmp edi,ebx
	je Block21

 Block20:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block21:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call edx
	mov eax,ebp

 Block22:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 8
}
}
// CItemInfo::EQUIPITEM::ADDITION::~ADDITION
_SUB_EXCEPTION_HANDLER(19A000)
__SUB_CLASS_THIS0(0019A000, __thiscall, 130942,  CItemInfo::EQUIPITEM::ADDITION, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_19A000
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
	mov ebp,ecx
	mov dword ptr [esp+0x14],ebp
	mov eax,dword ptr [ebp+0x34]
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	mov dword ptr [esp+0x20],5
	test eax,eax
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebx
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
	mov dword ptr [ebp+0x34],0

 Block5:
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [esp+0x20],4
	test eax,eax
	je Block10

 Block6:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block9

 Block7:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block9

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block9:
	mov dword ptr [ebp+0x2C],0

 Block10:
	mov eax,dword ptr [ebp+0x24]
	mov byte ptr [esp+0x20],3
	test eax,eax
	je Block15

 Block11:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block14

 Block12:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block14

 Block13:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block14:
	mov dword ptr [ebp+0x24],0

 Block15:
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [esp+0x20],2
	test eax,eax
	je Block20

 Block16:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block19

 Block17:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block19

 Block18:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block19:
	mov dword ptr [ebp+0x1C],0

 Block20:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [esp+0x20],1
	test eax,eax
	je Block25

 Block21:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block24

 Block22:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block24

 Block23:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block24:
	mov dword ptr [ebp+0x14],0

 Block25:
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block30

 Block26:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block29

 Block27:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block29

 Block28:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block29:
	mov dword ptr [ebp+0xC],0

 Block30:
	mov eax,dword ptr [ebp+4]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block35

 Block31:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block34

 Block32:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block34

 Block33:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block34:
	mov dword ptr [ebp+4],0

 Block35:
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
// CItemInfo::GetItemTypeName
__SUB_CLASS_THIS(0019F140, __thiscall, 130711,  CItemInfo, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [esp+0xC]
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	lea eax,[edx+eax-1]
	push esi
	mov dword ptr [esp+4],0
	cmp eax,4
	ja Block8

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block4
cmp EAX, 2
je Block5
cmp EAX, 3
je Block6
cmp EAX, 4
je Block7


 Block2:
	push 0xA

 Block3:
	mov esi,dword ptr [esp+0x10]
	push esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,esi
	pop esi
	pop ecx
	ret 8

 Block4:
	push 0x1A87
	jmp Block3

 Block5:
	push 0xB
	jmp Block3

 Block6:
	push 0x1A38
	jmp Block3

 Block7:
	push 0x1A2C
	jmp Block3

 Block8:
	mov esi,dword ptr [esp+0xC]
	push 0
	push 0xA
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_ERROETYPE]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [_S_ERROETYPE+4]
	mov dword ptr [eax+4],edx
	mov cx,word ptr [_S_ERROETYPE+8]
	mov word ptr [eax+8],cx
	push 0xA
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	mov eax,esi
	pop esi
	pop ecx
	ret 8
}
}
// CItemInfo::GetMaxLEV
_SUB_EXCEPTION_HANDLER(1ACB70)
__SUB_CLASS_THIS(001ACB70, __thiscall, 84833,  CItemInfo, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1ACB70
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
	mov eax,dword ptr [esp+0x30]
	push eax
	lea edx,[esp+0x34]
	push edx
	call CItemInfo::GetItemInfo
	mov esi,dword ptr [esp+0x30]
	test esi,esi
	sete al
	mov dword ptr [esp+0x28],0
	test al,al
	je Block4

 Block1:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test esi,esi
	je Block3

 Block2:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block3:
	xor eax,eax
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 4

 Block4:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x14],esp
	push 0x788
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x30],1
	test esi,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x34],0
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x30],2
	call get_int32
	add esp,8
	cmp word ptr [esp+0x10],8
	mov edi,eax
	mov byte ptr [esp+0x28],0
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x18]
	xor ecx,ecx
	mov word ptr [esp+0x10],cx
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ecx
	mov eax,edi
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 4
}
}
// ItemOptionLevelData::LoadLevelData
_SUB_EXCEPTION_HANDLER(1A2890)
__SUB_CLASS_THIS(001A2890, __thiscall, 98041,  ItemOptionLevelData, int32_t, long, NakedParam<_x_com_ptr<IWzProperty>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A2890
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
	mov esi,ecx
	xor ebx,ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x964
	push eax
	mov dword ptr [esp+0x44],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],1
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],2
	call get_int32
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov edi,8
	add esp,8
	mov dword ptr [esi],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block5

 Block3:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block6:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x963
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],3
	cmp ecx,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],4
	call get_int32
	add esp,8
	mov dword ptr [esi+4],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block12:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x811
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],5
	cmp ecx,ebx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],6
	call get_int32
	add esp,8
	mov dword ptr [esi+8],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block18:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x812
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],7
	cmp ecx,ebx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],8
	call get_int32
	add esp,8
	mov dword ptr [esi+0xC],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block24:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x813
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],9
	cmp ecx,ebx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0xA
	call get_int32
	add esp,8
	mov dword ptr [esi+0x10],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block30:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x814
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0xB
	cmp ecx,ebx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0xC
	call get_int32
	add esp,8
	mov dword ptr [esi+0x14],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block36:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x7D1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0xD
	cmp ecx,ebx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0xE
	call get_int32
	add esp,8
	mov dword ptr [esi+0x18],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block42:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x7D3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0xF
	cmp ecx,ebx
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x10
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1C],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block48:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x815
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x11
	cmp ecx,ebx
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x12
	call get_int32
	add esp,8
	mov dword ptr [esi+0x20],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block54:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x816
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x13
	cmp ecx,ebx
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x14
	call get_int32
	add esp,8
	mov dword ptr [esi+0x24],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block59

 Block57:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block60:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x81B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x15
	cmp ecx,ebx
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x16
	call get_int32
	add esp,8
	mov dword ptr [esi+0x28],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block66:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x81C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x17
	cmp ecx,ebx
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x18
	call get_int32
	add esp,8
	mov dword ptr [esi+0x2C],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block72:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x81E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x19
	cmp ecx,ebx
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x1A
	call get_int32
	add esp,8
	mov dword ptr [esi+0x30],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block77

 Block75:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block78:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x81F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x1B
	cmp ecx,ebx
	jne Block80

 Block79:
	push 0x80004003
	call _com_issue_error

 Block80:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x1C
	call get_int32
	add esp,8
	mov dword ptr [esi+0x34],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block84:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x817
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x1D
	cmp ecx,ebx
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x1E
	call get_int32
	add esp,8
	mov dword ptr [esi+0x38],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block89

 Block87:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block90:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x819
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x1F
	cmp ecx,ebx
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x20
	call get_int32
	add esp,8
	mov dword ptr [esi+0x3C],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block95

 Block93:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block96:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x818
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x21
	cmp ecx,ebx
	jne Block98

 Block97:
	push 0x80004003
	call _com_issue_error

 Block98:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x22
	call get_int32
	add esp,8
	mov dword ptr [esi+0x40],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block102:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x81A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x23
	cmp ecx,ebx
	jne Block104

 Block103:
	push 0x80004003
	call _com_issue_error

 Block104:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x24
	call get_int32
	add esp,8
	mov dword ptr [esi+0x44],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block107

 Block105:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block108:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x176D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x25
	cmp ecx,ebx
	jne Block110

 Block109:
	push 0x80004003
	call _com_issue_error

 Block110:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x26
	call get_int32
	add esp,8
	mov dword ptr [esi+0x48],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block113

 Block111:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block114:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x176E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x27
	cmp ecx,ebx
	jne Block116

 Block115:
	push 0x80004003
	call _com_issue_error

 Block116:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x28
	call get_int32
	add esp,8
	mov dword ptr [esi+0x4C],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block119

 Block117:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block120:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x176F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x29
	cmp ecx,ebx
	jne Block122

 Block121:
	push 0x80004003
	call _com_issue_error

 Block122:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x2A
	call get_int32
	add esp,8
	mov dword ptr [esi+0x50],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block125

 Block123:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block126

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block126

 Block125:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block126:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1770
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x2B
	cmp ecx,ebx
	jne Block128

 Block127:
	push 0x80004003
	call _com_issue_error

 Block128:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x2C
	call get_int32
	add esp,8
	mov dword ptr [esi+0x54],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block131

 Block129:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block132:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x1768
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x2D
	cmp ecx,ebx
	jne Block134

 Block133:
	push 0x80004003
	call _com_issue_error

 Block134:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x2E
	call get_int32
	add esp,8
	mov dword ptr [esi+0x58],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block137

 Block135:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block138:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1769
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x2F
	cmp ecx,ebx
	jne Block140

 Block139:
	push 0x80004003
	call _com_issue_error

 Block140:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x30
	call get_int32
	add esp,8
	mov dword ptr [esi+0x5C],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block143

 Block141:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block144

 Block142:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block144

 Block143:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block144:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x1771
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x31
	cmp ecx,ebx
	jne Block146

 Block145:
	push 0x80004003
	call _com_issue_error

 Block146:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x32
	call get_int32
	add esp,8
	mov dword ptr [esi+0x60],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block149

 Block147:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block150:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1772
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x33
	cmp ecx,ebx
	jne Block152

 Block151:
	push 0x80004003
	call _com_issue_error

 Block152:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x34
	call get_int32
	add esp,8
	mov dword ptr [esi+0x64],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block155

 Block153:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block156

 Block154:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block156

 Block155:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block156:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x1773
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x35
	cmp ecx,ebx
	jne Block158

 Block157:
	push 0x80004003
	call _com_issue_error

 Block158:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x36
	call get_int32
	add esp,8
	mov dword ptr [esi+0x68],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block161

 Block159:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block162

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block162

 Block161:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block162:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1775
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x37
	cmp ecx,ebx
	jne Block164

 Block163:
	push 0x80004003
	call _com_issue_error

 Block164:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x38
	call get_int32
	add esp,8
	mov dword ptr [esi+0x6C],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block167

 Block165:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block168

 Block166:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block168

 Block167:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block168:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x1774
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x39
	cmp ecx,ebx
	jne Block170

 Block169:
	push 0x80004003
	call _com_issue_error

 Block170:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x3A
	call get_int32
	add esp,8
	mov dword ptr [esi+0x70],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block173

 Block171:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block174

 Block172:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block174

 Block173:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block174:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1776
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x3B
	cmp ecx,ebx
	jne Block176

 Block175:
	push 0x80004003
	call _com_issue_error

 Block176:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x3C
	call get_int32
	add esp,8
	mov dword ptr [esi+0x74],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block179

 Block177:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block180

 Block178:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block180

 Block179:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block180:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x1777
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x3D
	cmp ecx,ebx
	jne Block182

 Block181:
	push 0x80004003
	call _com_issue_error

 Block182:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x3E
	call get_int32
	add esp,8
	mov dword ptr [esi+0x78],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block185

 Block183:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block186

 Block184:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block186

 Block185:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block186:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1778
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x3F
	cmp ecx,ebx
	jne Block188

 Block187:
	push 0x80004003
	call _com_issue_error

 Block188:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x40
	call get_int32
	add esp,8
	mov dword ptr [esi+0x7C],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block191

 Block189:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block192

 Block190:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block192

 Block191:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block192:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x1779
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x41
	cmp ecx,ebx
	jne Block194

 Block193:
	push 0x80004003
	call _com_issue_error

 Block194:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x42
	call get_int32
	add esp,8
	mov dword ptr [esi+0x80],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block197

 Block195:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block198

 Block196:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block198

 Block197:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block198:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x821
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x43
	cmp ecx,ebx
	jne Block200

 Block199:
	push 0x80004003
	call _com_issue_error

 Block200:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x44
	call get_int32
	add esp,8
	mov dword ptr [esi+0x84],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block203

 Block201:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block204

 Block202:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block204

 Block203:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block204:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x822
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x45
	cmp ecx,ebx
	jne Block206

 Block205:
	push 0x80004003
	call _com_issue_error

 Block206:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x46
	call get_int32
	add esp,8
	mov dword ptr [esi+0x88],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block209

 Block207:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block210

 Block208:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block210

 Block209:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block210:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x823
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x47
	cmp ecx,ebx
	jne Block212

 Block211:
	push 0x80004003
	call _com_issue_error

 Block212:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x48
	call get_int32
	add esp,8
	mov dword ptr [esi+0x8C],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block215

 Block213:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block216

 Block214:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block216

 Block215:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block216:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x824
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x49
	cmp ecx,ebx
	jne Block218

 Block217:
	push 0x80004003
	call _com_issue_error

 Block218:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x4A
	call get_int32
	add esp,8
	mov dword ptr [esi+0x90],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block221

 Block219:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block222

 Block220:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block222

 Block221:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block222:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x825
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x4B
	cmp ecx,ebx
	jne Block224

 Block223:
	push 0x80004003
	call _com_issue_error

 Block224:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x4C
	call get_int32
	add esp,8
	mov dword ptr [esi+0x94],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block227

 Block225:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block228

 Block226:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block228

 Block227:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block228:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x177A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x4D
	cmp ecx,ebx
	jne Block230

 Block229:
	push 0x80004003
	call _com_issue_error

 Block230:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x4E
	call get_int32
	add esp,8
	mov dword ptr [esi+0x98],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block233

 Block231:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block234

 Block232:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block234

 Block233:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block234:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x177B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x4F
	cmp ecx,ebx
	jne Block236

 Block235:
	push 0x80004003
	call _com_issue_error

 Block236:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x50
	call get_int32
	add esp,8
	mov dword ptr [esi+0x9C],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block239

 Block237:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block240

 Block238:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block240

 Block239:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block240:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x177C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x51
	cmp ecx,ebx
	jne Block242

 Block241:
	push 0x80004003
	call _com_issue_error

 Block242:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x52
	call get_int32
	add esp,8
	mov dword ptr [esi+0xA0],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block245

 Block243:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block246

 Block244:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block246

 Block245:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block246:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x177D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x53
	cmp ecx,ebx
	jne Block248

 Block247:
	push 0x80004003
	call _com_issue_error

 Block248:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x54
	call get_int32
	add esp,8
	mov dword ptr [esi+0xA4],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block251

 Block249:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block252

 Block250:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block252

 Block251:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block252:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x177E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x55
	cmp ecx,ebx
	jne Block254

 Block253:
	push 0x80004003
	call _com_issue_error

 Block254:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x56
	call get_int32
	add esp,8
	mov dword ptr [esi+0xA8],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block257

 Block255:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block258

 Block256:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block258

 Block257:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block258:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x177F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x57
	cmp ecx,ebx
	jne Block260

 Block259:
	push 0x80004003
	call _com_issue_error

 Block260:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x58
	call get_int32
	add esp,8
	mov dword ptr [esi+0xAC],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block263

 Block261:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block264

 Block262:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block264

 Block263:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block264:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x1780
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x59
	cmp ecx,ebx
	jne Block266

 Block265:
	push 0x80004003
	call _com_issue_error

 Block266:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x5A
	call get_int32
	add esp,8
	mov dword ptr [esi+0xB0],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block269

 Block267:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block270

 Block268:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block270

 Block269:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block270:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1781
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x5B
	cmp ecx,ebx
	jne Block272

 Block271:
	push 0x80004003
	call _com_issue_error

 Block272:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x5C
	call get_int32
	add esp,8
	mov dword ptr [esi+0xB4],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block275

 Block273:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block276

 Block274:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block276

 Block275:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block276:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x1783
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x5D
	cmp ecx,ebx
	jne Block278

 Block277:
	push 0x80004003
	call _com_issue_error

 Block278:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x5E
	call get_int32
	add esp,8
	mov dword ptr [esi+0xB8],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block281

 Block279:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block282

 Block280:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block282

 Block281:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block282:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1784
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x5F
	cmp ecx,ebx
	jne Block284

 Block283:
	push 0x80004003
	call _com_issue_error

 Block284:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x60
	call get_int32
	add esp,8
	mov dword ptr [esi+0xBC],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block287

 Block285:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block288

 Block286:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block288

 Block287:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block288:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x677
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x61
	cmp ecx,ebx
	jne Block290

 Block289:
	push 0x80004003
	call _com_issue_error

 Block290:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x62
	call get_int32
	add esp,8
	mov dword ptr [esi+0xC0],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block293

 Block291:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block294

 Block292:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block294

 Block293:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block294:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1AA4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0x63
	cmp ecx,ebx
	jne Block296

 Block295:
	push 0x80004003
	call _com_issue_error

 Block296:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],0x64
	call get_int32
	add esp,8
	mov dword ptr [esi+0xC4],eax
	mov byte ptr [esp+0x34],bl
	cmp word ptr [esp+0x1C],di
	jne Block299

 Block297:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block300

 Block298:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block300

 Block299:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block300:
	mov dword ptr [esp+0x14],ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x45A
	push eax
	mov byte ptr [esp+0x40],0x65
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x44]
	mov byte ptr [esp+0x38],0x66
	cmp ecx,ebx
	jne Block302

 Block301:
	push 0x80004003
	call _com_issue_error

 Block302:
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x3C],0x65
	call IWzProperty::Getitem
	mov byte ptr [esp+0x34],0x67
	cmp word ptr [eax],di
	jne Block304

 Block303:
	mov eax,dword ptr [eax+8]
	jmp Block305

 Block304:
	mov eax,offset _S___3

 Block305:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x34],0x65
	cmp word ptr [esp+0x1C],di
	jne Block308

 Block306:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block309

 Block307:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block309

 Block308:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block309:
	mov ebp,dword ptr [esp+0x14]
	cmp ebp,ebx
	je Block312

 Block310:
	cmp byte ptr [ebp],bl
	je Block312

 Block311:
	xor eax,eax
	jmp Block313

 Block312:
	mov eax,1

 Block313:
	xor edx,edx
	cmp eax,ebx
	sete dl
	lea eax,[esp+0x18]
	push 0x3F1
	push eax
	mov dword ptr [esi+0xC8],ebx
	mov dword ptr [esi+0xCC],ebx
	mov dword ptr [esi+0xD0],ebx
	mov dword ptr [esi+0xDC],edx
	mov dword ptr [esi+0xD4],ebx
	mov dword ptr [esi+0xD8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x34],0x68
	cmp edi,ebx
	je Block317

 Block314:
	cmp dword ptr [edi+4],ebx
	jne Block316

 Block315:
	mov ecx,dword ptr [edi]
	push ecx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [edi+4],eax

 Block316:
	mov edi,dword ptr [edi+4]
	jmp Block318

 Block317:
	xor edi,edi

 Block318:
	push edi
	lea ecx,[esp+0x18]
	call ZXString<char>::Compare
	mov ecx,dword ptr [esp+0x18]
	mov edi,eax
	neg edi
	sbb edi,edi
	inc edi
	mov byte ptr [esp+0x34],0x65
	cmp ecx,ebx
	je Block320

 Block319:
	call _xbstr_t::Data_t::Release

 Block320:
	cmp edi,ebx
	je Block322

 Block321:
	mov dword ptr [esi+0xC8],1
	jmp Block353

 Block322:
	lea edx,[esp+0x18]
	push 0x3F6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x34],0x69
	cmp edi,ebx
	je Block326

 Block323:
	cmp dword ptr [edi+4],ebx
	jne Block325

 Block324:
	mov eax,dword ptr [edi]
	push eax
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [edi+4],eax

 Block325:
	mov edi,dword ptr [edi+4]
	jmp Block327

 Block326:
	xor edi,edi

 Block327:
	push edi
	lea ecx,[esp+0x18]
	call ZXString<char>::Compare
	mov ecx,dword ptr [esp+0x18]
	mov edi,eax
	neg edi
	sbb edi,edi
	inc edi
	mov byte ptr [esp+0x34],0x65
	cmp ecx,ebx
	je Block329

 Block328:
	call _xbstr_t::Data_t::Release

 Block329:
	cmp edi,ebx
	je Block331

 Block330:
	mov dword ptr [esi+0xCC],1
	jmp Block353

 Block331:
	lea ecx,[esp+0x18]
	push 0x3FC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x34],0x6A
	cmp edi,ebx
	je Block335

 Block332:
	cmp dword ptr [edi+4],ebx
	jne Block334

 Block333:
	mov edx,dword ptr [edi]
	push edx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [edi+4],eax

 Block334:
	mov edi,dword ptr [edi+4]
	jmp Block336

 Block335:
	xor edi,edi

 Block336:
	push edi
	lea ecx,[esp+0x18]
	call ZXString<char>::Compare
	mov ecx,dword ptr [esp+0x18]
	mov edi,eax
	neg edi
	sbb edi,edi
	inc edi
	mov byte ptr [esp+0x34],0x65
	cmp ecx,ebx
	je Block338

 Block337:
	call _xbstr_t::Data_t::Release

 Block338:
	cmp edi,ebx
	je Block340

 Block339:
	mov dword ptr [esi+0xD0],1
	jmp Block353

 Block340:
	lea eax,[esp+0x18]
	push 0x1AA1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x34],0x6B
	cmp edi,ebx
	je Block344

 Block341:
	cmp dword ptr [edi+4],ebx
	jne Block343

 Block342:
	mov ecx,dword ptr [edi]
	push ecx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [edi+4],eax

 Block343:
	mov edi,dword ptr [edi+4]
	jmp Block345

 Block344:
	xor edi,edi

 Block345:
	push edi
	lea ecx,[esp+0x18]
	call ZXString<char>::Compare
	mov ecx,dword ptr [esp+0x18]
	mov edi,eax
	neg edi
	sbb edi,edi
	inc edi
	mov byte ptr [esp+0x34],0x65
	cmp ecx,ebx
	je Block347

 Block346:
	call _xbstr_t::Data_t::Release

 Block347:
	cmp edi,ebx
	je Block349

 Block348:
	mov dword ptr [esi+0xD4],1
	jmp Block353

 Block349:
	lea edx,[esp+0x18]
	push 0x3FA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,eax
	mov byte ptr [esp+0x34],0x6C
	call _xbstr_t::op_char_str
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::Compare
	mov ecx,dword ptr [esp+0x18]
	mov edi,eax
	neg edi
	sbb edi,edi
	inc edi
	cmp ecx,ebx
	je Block351

 Block350:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],ebx

 Block351:
	cmp edi,ebx
	je Block353

 Block352:
	mov dword ptr [esi+0xD8],1

 Block353:
	mov byte ptr [esp+0x34],bl
	cmp ebp,ebx
	je Block355

 Block354:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block355:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block357

 Block356:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block357:
	mov eax,1
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 0xC
}
}
// GETCRC32_long_long_
__SUB(001924F0, __cdecl, 141412,  int32_t, const long&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [eax]
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x14]
	push 4
	push edx
	mov dword ptr [esp+0x1C],ecx
	call CCrc32::GetCrc32
	add esp,0x18
	ret
}
}
// DownHeap_ZPair_long_long__PairSecondLess_
__SUB(00191730, __cdecl, 141407,  void, ZArray<ZPair<long,long> >&, int32_t, int32_t, int32_t, none&) {
__asm {

 Block0:
	sub esp,8
	push ebx
	mov ebx,dword ptr [esp+0x1C]
	push esi
	mov esi,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	push edi
	mov edi,dword ptr [esp+0x1C]
	lea eax,[edi+ebx]
	mov edx,dword ptr [ecx+eax*8-8]
	lea eax,[ecx+eax*8-8]
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x10],eax
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0xC],edx
	cdq
	sub eax,edx
	sar eax,1
	cmp edi,eax
	jg Block10

 Block1:
	push ebp
	jmp Block4

 Block3:
	mov esi,dword ptr [esp+0x1C]

 Block4:
	lea ecx,[edi+edi]
	cmp ecx,dword ptr [esp+0x24]
	jge Block7

 Block5:
	mov ebp,dword ptr [esi]
	lea edx,[ecx+ebx]
	lea edx,[ebp+edx*8]
	mov ebp,dword ptr [edx-4]
	cmp ebp,dword ptr [edx+4]
	jge Block7

 Block6:
	inc ecx

 Block7:
	mov edx,dword ptr [esi]
	mov ebp,dword ptr [esp+0x14]
	lea esi,[ecx+ebx]
	cmp ebp,dword ptr [edx+esi*8-4]
	lea esi,[edx+esi*8]
	jge Block9

 Block8:
	mov ebp,dword ptr [esi-8]
	add edi,ebx
	cmp ecx,eax
	mov dword ptr [edx+edi*8-8],ebp
	mov esi,dword ptr [esi-4]
	mov dword ptr [edx+edi*8-4],esi
	mov edi,ecx
	jle Block3

 Block9:
	mov esi,dword ptr [esp+0x1C]
	pop ebp

 Block10:
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
// CItemOptionInfo::LoadItemOption
_SUB_EXCEPTION_HANDLER(1ADE40)
__SUB_CLASS_THIS(001ADE40, __thiscall, 107952,  CItemOptionInfo, ZRef<ItemOptionInfo>*, ZRef<ItemOptionInfo>*, long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1ADE40
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x54]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x20],ecx
	xor ebx,ebx
	mov dword ptr [esp+0x1C],ebx
	lea eax,[esp+0x44]
	mov edi,1
	push eax
	mov dword ptr [esp+0x60],edi
	call dword ptr [ZImports::_VariantInit]
	mov esi,dword ptr [esp+0x64]
	mov ecx,esi
	mov byte ptr [esp+0x5C],2
	mov dword ptr [esi+4],ebx
	call ZRef<ItemOptionInfo>::_Alloc
	mov eax,dword ptr [esi+4]
	xor ecx,ecx
	mov dword ptr [eax],ecx
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [eax+4],ecx
	mov dword ptr [esp+0x18],ebx
	mov ebp,dword ptr [esp+0x68]
	push ebp
	lea ecx,[esp+0x1C]
	push offset _S_06D
	push ecx
	mov byte ptr [esp+0x68],3
	call ZXString<char>::Format
	mov eax,dword ptr [esi+4]
	add esp,0xC
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x74],esp
	push 0x3D5
	push edx
	mov dword ptr [eax],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x78]
	mov byte ptr [esp+0x68],4
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0x6C],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x64],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebx
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
	cmp word ptr [esp+0x24],8
	mov bl,7
	mov byte ptr [esp+0x5C],bl
	jne Block8

 Block6:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov edi,dword ptr [esp+0x14]
	test edi,edi
	je Block19

 Block10:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x70],esp
	push 0x787
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0x68],8
	mov ecx,edi
	mov byte ptr [esp+0x68],bl
	call IWzProperty::Getitem
	mov edi,dword ptr [esi+4]
	push eax
	mov byte ptr [esp+0x64],9
	call get_int32
	add esp,8
	mov dword ptr [edi+4],eax
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x5C],bl
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block14:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x70],esp
	push 0x176C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0x3C]
	mov byte ptr [esp+0x64],0xA
	push edx
	mov byte ptr [esp+0x68],bl
	call IWzProperty::Getitem
	mov edi,dword ptr [esi+4]
	push eax
	mov byte ptr [esp+0x64],0xB
	call get_int32
	add esp,8
	mov dword ptr [edi+8],eax
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x5C],bl
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov edi,dword ptr [esp+0x14]

 Block19:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x74],esp
	push 0x677
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x78]
	mov byte ptr [esp+0x68],0xC
	test ecx,ecx
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x6C],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x64],0xD
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block24

 Block22:
	cmp eax,0x80004002
	je Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	mov eax,dword ptr [esi+4]
	mov ecx,dword ptr [esp+0x24]
	add eax,0xC
	push eax
	push ebp
	call CItemOptionInfo::LoadItemOptionLevelData
	test eax,eax
	mov byte ptr [esp+0x5C],bl
	mov ebx,8
	sete byte ptr [esp+0x68]
	cmp word ptr [esp+0x34],bx
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	cmp byte ptr [esp+0x68],0
	je Block30

 Block29:
	push offset ZException::THROW_INFO
	lea eax,[esp+0x6C]
	push eax
	mov dword ptr [esp+0x70],0x80004005
	call _CxxThrowException

 Block30:
	mov byte ptr [esp+0x5C],3
	test edi,edi
	je Block32

 Block31:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block32:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x5C],2
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov byte ptr [esp+0x5C],1
	cmp word ptr [esp+0x44],bx
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x5C],0
	test eax,eax
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block40:
	mov eax,esi
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 0xC
}
}
// CItemInfo::IterateItemString
_SUB_EXCEPTION_HANDLER(1B7340)
__SUB_CLASS_THIS0(001B7340, __thiscall, 78614,  CItemInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B7340
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x68
	push ebx
	push ebp
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x78]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	call esi
	lea ecx,[esp+0x28]
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
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x84],0
	call esi
	lea eax,[esp+0x18]
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
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x112C
	mov bl,1
	push eax
	mov byte ptr [esp+0x9C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0x98],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x14],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [esp+0x58],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x80],5
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x58]
	push eax
	call ebx

 Block13:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x80],6
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block17:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x80],7
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x28]
	push ecx
	call ebx

 Block21:
	mov eax,dword ptr [esp+0x10]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block23

 Block22:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block23:
	mov ecx,ebp
	call CItemInfo::IterateItemString_0
	lea ecx,[esp+0x48]
	push ecx
	call esi
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x84],8
	call esi
	lea ecx,[esp+0x38]
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
	push 0
	push 0
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x44]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x112D
	mov bl,9
	push ecx
	mov byte ptr [esp+0x9C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0xA
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea edx,[esp+0x7C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
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
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0x80],bl
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov ebx,8
	mov byte ptr [esp+0x80],8
	cmp word ptr [esp+0x38],bx
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov byte ptr [esp+0x80],7
	cmp word ptr [esp+0x48],bx
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov eax,dword ptr [esp+0x10]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block46

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block46:
	mov ecx,ebp
	call CItemInfo::IterateItemString_0
	lea eax,[esp+0x38]
	push eax
	call esi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x84],0xC
	call esi
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	push 0
	push 0
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x54]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x112E
	mov bl,0xD
	push eax
	mov byte ptr [esp+0x9C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0xE
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	lea ecx,[esp+0x7C]
	push ecx
	mov byte ptr [esp+0x98],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block55

 Block53:
	cmp eax,0x80004002
	je Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0x80],bl
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov ebx,8
	mov byte ptr [esp+0x80],0xC
	cmp word ptr [esp+0x48],bx
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov byte ptr [esp+0x80],7
	cmp word ptr [esp+0x38],bx
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
	mov eax,dword ptr [esp+0x10]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block69

 Block68:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block69:
	mov ecx,ebp
	call CItemInfo::IterateItemString_0
	lea ecx,[esp+0x38]
	push ecx
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block71

 Block70:
	push eax
	call _com_issue_error

 Block71:
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x84],0x10
	call esi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block73

 Block72:
	push eax
	call _com_issue_error

 Block73:
	push 0
	push 0
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x54]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x112F
	mov bl,0x11
	push ecx
	mov byte ptr [esp+0x9C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0x12
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	lea edx,[esp+0x7C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0x13
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block78

 Block76:
	cmp eax,0x80004002
	je Block78

 Block77:
	push eax
	call _com_issue_error

 Block78:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0x80],bl
	jne Block81

 Block79:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block82:
	mov ebx,8
	mov byte ptr [esp+0x80],0x10
	cmp word ptr [esp+0x48],bx
	jne Block85

 Block83:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block86:
	mov byte ptr [esp+0x80],7
	cmp word ptr [esp+0x38],bx
	jne Block89

 Block87:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	mov eax,dword ptr [esp+0x10]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block92

 Block91:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block92:
	mov ecx,ebp
	call CItemInfo::IterateItemString_0
	lea eax,[esp+0x38]
	push eax
	call esi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block94

 Block93:
	push eax
	call _com_issue_error

 Block94:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x84],0x14
	call esi
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	push 0
	push 0
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x54]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x1130
	mov bl,0x15
	push eax
	mov byte ptr [esp+0x9C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0x16
	jne Block98

 Block97:
	push 0x80004003
	call _com_issue_error

 Block98:
	lea ecx,[esp+0x7C]
	push ecx
	mov byte ptr [esp+0x98],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0x17
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block101

 Block99:
	cmp eax,0x80004002
	je Block101

 Block100:
	push eax
	call _com_issue_error

 Block101:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0x80],bl
	jne Block104

 Block102:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block105:
	mov ebx,8
	mov byte ptr [esp+0x80],0x14
	cmp word ptr [esp+0x48],bx
	jne Block108

 Block106:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block109:
	mov byte ptr [esp+0x80],7
	cmp word ptr [esp+0x38],bx
	jne Block112

 Block110:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block113

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block112:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block113:
	mov eax,dword ptr [esp+0x10]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block115

 Block114:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block115:
	mov ecx,ebp
	call CItemInfo::IterateItemString_0
	lea ecx,[esp+0x38]
	push ecx
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block117

 Block116:
	push eax
	call _com_issue_error

 Block117:
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x84],0x18
	call esi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block119

 Block118:
	push eax
	call _com_issue_error

 Block119:
	push 0
	push 0
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x54]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1131
	mov bl,0x19
	push ecx
	mov byte ptr [esp+0x9C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0x1A
	jne Block121

 Block120:
	push 0x80004003
	call _com_issue_error

 Block121:
	lea edx,[esp+0x7C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0x1B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block124

 Block122:
	cmp eax,0x80004002
	je Block124

 Block123:
	push eax
	call _com_issue_error

 Block124:
	mov esi,8
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x68],si
	jne Block127

 Block125:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block128:
	mov byte ptr [esp+0x80],0x18
	cmp word ptr [esp+0x48],si
	jne Block131

 Block129:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block132:
	mov byte ptr [esp+0x80],7
	cmp word ptr [esp+0x38],si
	jne Block135

 Block133:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block136

 Block134:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block136

 Block135:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block136:
	mov esi,dword ptr [esp+0x10]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block138

 Block137:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block138:
	mov ecx,ebp
	call CItemInfo::IterateItemString_0
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test esi,esi
	je Block140

 Block139:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block140:
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x74
	ret
}
}
// CItemInfo::GetItemString
_SUB_EXCEPTION_HANDLER(1A9BC0)
__SUB_CLASS_THIS(001A9BC0, __thiscall, 130713,  CItemInfo, ZXString<char>*, ZXString<char>*, long, const char*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A9BC0
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
	mov esi,ecx
	xor ebx,ebx
	push ebx
	push offset _S_
	push ebx
	mov dword ptr [esp+0x1C],ebx
	push ebx
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	lea ecx,[esp+0x10]
	call ZXString<char>::ReleaseBuffer
	push ebx
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esi+0x6C]
	mov dword ptr [esp+0x24],1
	call ZMap<long, ZMap<char const *, ZXString<char>, ZXString<char>>, long>::GetAt
	cmp eax,ebx
	jne Block2

 Block1:
	mov esi,dword ptr [esp+0x24]
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,esi
	mov dword ptr [esi],ebx
	call ZXString<char>::op_assign
	jmp Block3

 Block2:
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,eax
	call ZMap<char const *, ZXString<char>, ZXString<char>>::GetAt
	mov esi,dword ptr [esp+0x24]
	lea edx,[esp+0xC]
	push edx
	mov ecx,esi
	mov dword ptr [esi],ebx
	call ZXString<char>::op_assign

 Block3:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x1C],bl
	mov dword ptr [esp+0x10],1
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x14
	ret 0xC
}
}
// CItemInfo::RegisterQuestDeliveryItem
_SUB_EXCEPTION_HANDLER(1B2080)
__SUB_CLASS_THIS(001B2080, __thiscall, 130738,  CItemInfo, void, long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B2080
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x70
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x58],ecx
	xor esi,esi
	push esi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x3D5
	push eax
	mov dword ptr [ebp-4],esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],1
	cmp ecx,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x78]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov edi,8
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x78],di
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp-0x78],ax
	mov eax,dword ptr [ebp-0x70]
	cmp eax,esi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp-0x78]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	push esi
	push esi
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x19FB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],5
	cmp ecx,esi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[ebp-0x68]
	push eax
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x1C]
	mov dword ptr [ebp-0x1C],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x68],di
	jne Block17

 Block15:
	mov eax,dword ptr [ebp-0x60]
	xor ecx,ecx
	mov word ptr [ebp-0x68],cx
	cmp eax,esi
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[ebp-0x68]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	push esi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x19FC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],9
	cmp ecx,esi
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea edx,[ebp-0x50]
	push edx
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x20]
	mov dword ptr [ebp-0x20],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block23

 Block21:
	cmp eax,0x80004002
	je Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x50],di
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [ebp-0x50],ax
	mov eax,dword ptr [ebp-0x48]
	cmp eax,esi
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[ebp-0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov dword ptr [ebp-0x7C],esi
	lea ecx,[ebp-0x48]
	mov byte ptr [ebp-4],0xD
	mov dword ptr [ebp-0x44],esi
	call ZRef<CItemInfo::QUESTDELIVERYITEM>::_Alloc
	mov edx,dword ptr [ebp+8]
	mov edi,dword ptr [ebp-0x44]
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push offset _S_EFFECT__3
	mov byte ptr [ebp-4],0xE
	mov dword ptr [edi],edx
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0xF
	cmp ecx,esi
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea eax,[ebp-0x30]
	push eax
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov bl,0x10
	mov byte ptr [ebp-4],bl
	jne Block31

 Block30:
	mov eax,dword ptr [eax+8]
	jmp Block32

 Block31:
	mov eax,offset _S___3

 Block32:
	push esi
	push esi
	push esi
	push esi
	push 0xFFFFFFFF
	push eax
	push esi
	push esi
	call WideCharToMultiByte
	call __alloca_probe_16
	mov esi,esp
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push offset _S_EFFECT__3
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x40]
	push ecx
	mov ecx,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0x11
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x12
	jne Block34

 Block33:
	mov eax,dword ptr [eax+8]
	jmp Block35

 Block34:
	mov eax,offset _S___3

 Block35:
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call WideCharToMultiByte
	push esi
	lea ecx,[edi+8]
	call ZXString<char>::AssignCStr
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x40],si
	jne Block38

 Block36:
	mov eax,dword ptr [ebp-0x38]
	xor edx,edx
	xor ebx,ebx
	mov word ptr [ebp-0x40],dx
	cmp eax,ebx
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea eax,[ebp-0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]
	xor ebx,ebx

 Block39:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x30],si
	jne Block42

 Block40:
	mov eax,dword ptr [ebp-0x28]
	xor ecx,ecx
	mov word ptr [ebp-0x30],cx
	cmp eax,ebx
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea edx,[ebp-0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov esi,dword ptr [ebp-0x20]
	cmp esi,ebx
	je Block62

 Block44:
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x19FD
	push eax
	mov dword ptr [edi+4],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x30]
	push ecx
	mov byte ptr [ebp-4],0x13
	mov ecx,esi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x14
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block47

 Block45:
	cmp eax,0x80004002
	je Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],0x16
	jne Block50

 Block48:
	mov eax,dword ptr [ebp-0x28]
	xor edx,edx
	mov word ptr [ebp-0x30],dx
	cmp eax,ebx
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea eax,[ebp-0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov ebx,dword ptr [ebp-0x14]
	test ebx,ebx
	je Block60

 Block52:
	xor edi,edi
	lea ecx,[ecx]

 Block53:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x54],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x40]
	push ecx
	mov byte ptr [ebp-4],0x17
	mov ecx,ebx
	mov byte ptr [ebp-4],0x16
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x18
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x40],8
	mov esi,eax
	mov byte ptr [ebp-4],0x16
	jne Block56

 Block54:
	mov eax,dword ptr [ebp-0x38]
	xor edx,edx
	mov word ptr [ebp-0x40],dx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea eax,[ebp-0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block57:
	test esi,esi
	jle Block59

 Block58:
	mov ecx,dword ptr [ebp-0x44]
	add ecx,0x20
	call ZList<unsigned short>::AddTail_
	mov word ptr [eax],si
	inc edi
	jmp Block53

 Block59:
	mov edi,dword ptr [ebp-0x44]

 Block60:
	mov byte ptr [ebp-4],0xE
	test ebx,ebx
	je Block82

 Block61:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx
	jmp Block82

 Block62:
	mov esi,dword ptr [ebp-0x1C]
	cmp esi,ebx
	je Block90

 Block63:
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x54],esp
	push 0x19FD
	push eax
	mov dword ptr [edi+4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x30]
	push ecx
	mov byte ptr [ebp-4],0x19
	mov ecx,esi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block66

 Block64:
	cmp eax,0x80004002
	je Block66

 Block65:
	push eax
	call _com_issue_error

 Block66:
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],0x1C
	jne Block69

 Block67:
	mov eax,dword ptr [ebp-0x28]
	xor edx,edx
	mov word ptr [ebp-0x30],dx
	cmp eax,ebx
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea eax,[ebp-0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov ebx,dword ptr [ebp-0x14]
	test ebx,ebx
	je Block79

 Block71:
	xor edi,edi
	jmp Block73

 Block73:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x54],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x40]
	push ecx
	mov byte ptr [ebp-4],0x1D
	mov ecx,ebx
	mov byte ptr [ebp-4],0x1C
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1E
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x40],8
	mov esi,eax
	mov byte ptr [ebp-4],0x1C
	jne Block76

 Block74:
	mov eax,dword ptr [ebp-0x38]
	xor edx,edx
	mov word ptr [ebp-0x40],dx
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea eax,[ebp-0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block77:
	test esi,esi
	jle Block79

 Block78:
	mov ecx,dword ptr [ebp-0x44]
	add ecx,0xC
	call ZList<unsigned short>::AddTail_
	mov word ptr [eax],si
	inc edi
	jmp Block73

 Block79:
	mov byte ptr [ebp-4],0xE
	test ebx,ebx
	je Block81

 Block80:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block81:
	mov edi,dword ptr [ebp-0x44]

 Block82:
	mov ecx,dword ptr [ebp-0x58]
	lea eax,[ebp-0x48]
	push eax
	push edi
	add ecx,0x1C
	call ZMap<long, ZRef<CItemInfo::QUESTDELIVERYITEM>, long>::Insert
	lea esi,[edi-0x10]
	lea ebx,[esi+4]
	push ebx
	mov byte ptr [ebp-4],0xD
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block85

 Block83:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block85

 Block84:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block85:
	mov eax,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block87

 Block86:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block87:
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block89

 Block88:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block89:
	mov eax,dword ptr [ebp-0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp+0xC]
	test eax,eax
	jmp Block91

 Block90:
	lea ecx,[ebp-0x48]
	mov byte ptr [ebp-4],0xD
	call ZRef<CItemInfo::QUESTDELIVERYITEM>::~ZRef<CItemInfo::QUESTDELIVERYITEM>
	mov eax,dword ptr [ebp-0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp+0xC]
	cmp eax,ebx

 Block91:
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block93

 Block92:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block93:
	lea esp,[ebp-0x8C]
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
// CItemInfo::LevelInfo::RandomMDD::GetStatType
__SUB_CLASS_THIS0(00191670, __thiscall, 131082,  CItemInfo::LevelInfo::RandomMDD, long) {
__asm {

 Block0:
	mov eax,9
	ret
}
}
// CItemInfo::LevelInfo::RandomACC::GetStatType
__SUB_CLASS_THIS0(00191680, __thiscall, 131067,  CItemInfo::LevelInfo::RandomACC, long) {
__asm {

 Block0:
	mov eax,0xA
	ret
}
}
// CItemInfo::EQUIPITEM::IsItemSuitedForTamingMob
__SUB_CLASS_THIS(000BC300, __thiscall, 130923,  CItemInfo::EQUIPITEM, int32_t, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+8]
	push edi
	push eax
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	add esp,8
	cmp ecx,0xBF
	jne Block8

 Block1:
	mov edi,dword ptr [esp+0xC]
	mov eax,0x68DB8BAD
	imul edi
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xBE
	jne Block8

 Block2:
	xor ecx,ecx
	lea ebx,[ebx]

 Block3:
	mov eax,dword ptr [esi+0x254]
	test eax,eax
	je Block8

 Block4:
	cmp ecx,dword ptr [eax-4]
	jae Block8

 Block5:
	mov edx,eax
	cmp dword ptr [edx+ecx*4],edi
	je Block7

 Block6:
	inc ecx
	jmp Block3

 Block7:
	pop edi
	mov eax,1
	pop esi
	ret 4

 Block8:
	pop edi
	xor eax,eax
	pop esi
	ret 4
}
}
// CItemInfo::EQUIPITEM::ADDITION::Load
_SUB_EXCEPTION_HANDLER(1AF1C0)
__SUB(001AF1C0, __cdecl, 130934,  ZRef<CItemInfo::EQUIPITEM::ADDITION>, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1AF1C0
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
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebp
	sete cl
	mov edx,1
	mov dword ptr [esp+0x44],edx
	test cl,cl
	je Block4

 Block1:
	mov esi,dword ptr [esp+0x4C]
	mov dword ptr [esi+4],ebp
	mov dword ptr [esp+0x14],edx
	mov byte ptr [esp+0x44],0
	cmp eax,ebp
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	mov eax,esi
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret

 Block4:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x20],ebp
	call ZRef<CItemInfo::EQUIPITEM::ADDITION>::_Alloc
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_SKILL__1
	mov byte ptr [esp+0x54],2
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x50],3
	cmp ecx,ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x54],2
	call IWzProperty::Getitem
	mov bl,4
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [ecx],ebp
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
	lea ecx,[esp+0x28]
	push ecx
	call Additional::TCond<Additional::SKILL>::Load
	add esp,8
	mov esi,dword ptr [esp+0x20]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x48],5
	call ZRef<Additional::TCond<Additional::SKILL>>::op_assign_copy
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebp
	je Block14

 Block10:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block13

 Block12:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block13:
	mov esi,dword ptr [esp+0x20]
	mov dword ptr [esp+0x28],ebp

 Block14:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x44],2
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_MOBCATEGORY
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x50],6
	cmp ecx,ebp
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x54],2
	call IWzProperty::Getitem
	mov bl,7
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [ecx],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block23

 Block21:
	cmp eax,0x80004002
	je Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea ecx,[esp+0x28]
	push ecx
	call Additional::TCond<Additional::MOBCATEGORY>::Load
	add esp,8
	push eax
	lea ecx,[esi+8]
	mov byte ptr [esp+0x48],8
	call ZRef<Additional::TCond<Additional::MOBCATEGORY>>::op_assign_copy
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebp
	je Block28

 Block24:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block27

 Block25:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block27

 Block26:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block27:
	mov esi,dword ptr [esp+0x20]
	mov dword ptr [esp+0x28],ebp

 Block28:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x44],2
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_ELEMBOOST
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x50],9
	cmp ecx,ebp
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x54],2
	call IWzProperty::Getitem
	mov bl,0xA
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [ecx],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block37

 Block35:
	cmp eax,0x80004002
	je Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	lea ecx,[esp+0x28]
	push ecx
	call Additional::TCond<Additional::ELEMBOOST>::Load
	add esp,8
	push eax
	lea ecx,[esi+0x10]
	mov byte ptr [esp+0x48],0xB
	call ZRef<Additional::TCond<Additional::ELEMBOOST>>::op_assign_copy
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebp
	je Block42

 Block38:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block41

 Block39:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block41

 Block40:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block41:
	mov esi,dword ptr [esp+0x20]
	mov dword ptr [esp+0x28],ebp

 Block42:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x44],2
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_CRITICAL
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x50],0xC
	cmp ecx,ebp
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x54],2
	call IWzProperty::Getitem
	mov bl,0xD
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [ecx],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block51

 Block49:
	cmp eax,0x80004002
	je Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	lea ecx,[esp+0x28]
	push ecx
	call Additional::TCond<Additional::CRITICAL>::Load
	add esp,8
	push eax
	lea ecx,[esi+0x18]
	mov byte ptr [esp+0x48],0xE
	call ZRef<Additional::TCond<Additional::CRITICAL>>::op_assign_copy
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebp
	je Block56

 Block52:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block55

 Block53:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block55

 Block54:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block55:
	mov esi,dword ptr [esp+0x20]
	mov dword ptr [esp+0x28],ebp

 Block56:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x44],2
	jne Block59

 Block57:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_BOSS
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x50],0xF
	cmp ecx,ebp
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x54],2
	call IWzProperty::Getitem
	mov bl,0x10
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [ecx],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block65

 Block63:
	cmp eax,0x80004002
	je Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	lea ecx,[esp+0x28]
	push ecx
	call Additional::TCond<Additional::BOSS>::Load
	add esp,8
	push eax
	lea ecx,[esi+0x20]
	mov byte ptr [esp+0x48],0x11
	call ZRef<Additional::TCond<Additional::BOSS>>::op_assign_copy
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebp
	je Block70

 Block66:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block69

 Block67:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block69

 Block68:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block69:
	mov esi,dword ptr [esp+0x20]
	mov dword ptr [esp+0x28],ebp

 Block70:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x44],2
	jne Block73

 Block71:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block74:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_MOBDIE
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x50],0x12
	cmp ecx,ebp
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x54],2
	call IWzProperty::Getitem
	mov bl,0x13
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [ecx],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block79

 Block77:
	cmp eax,0x80004002
	je Block79

 Block78:
	push eax
	call _com_issue_error

 Block79:
	lea ecx,[esp+0x28]
	push ecx
	call Additional::TCond<Additional::MOBDIE>::Load
	add esp,8
	push eax
	lea ecx,[esi+0x28]
	mov byte ptr [esp+0x48],0x14
	call ZRef<Additional::TCond<Additional::MOBDIE>>::op_assign_copy
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebp
	je Block84

 Block80:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block83

 Block81:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block83

 Block82:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block83:
	mov esi,dword ptr [esp+0x20]
	mov dword ptr [esp+0x28],ebp

 Block84:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x44],2
	jne Block87

 Block85:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_HPMPCHANGE
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x50],0x15
	cmp ecx,ebp
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x54],2
	call IWzProperty::Getitem
	mov bl,0x16
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [ecx],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block93

 Block91:
	cmp eax,0x80004002
	je Block93

 Block92:
	push eax
	call _com_issue_error

 Block93:
	lea ecx,[esp+0x28]
	push ecx
	call Additional::TCond<Additional::HPMPCHANGE>::Load
	add esp,8
	push eax
	lea ecx,[esi+0x30]
	mov byte ptr [esp+0x48],0x17
	call ZRef<Additional::TCond<Additional::HPMPCHANGE>>::op_assign_copy
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebp
	je Block98

 Block94:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block97

 Block95:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block97

 Block96:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block97:
	mov esi,dword ptr [esp+0x20]
	mov dword ptr [esp+0x28],ebp

 Block98:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x44],2
	jne Block101

 Block99:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	mov ebx,dword ptr [esp+0x4C]
	mov dword ptr [ebx+4],esi
	cmp esi,ebp
	je Block104

 Block103:
	lea eax,[esi-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block104:
	mov dword ptr [esp+0x14],1
	mov byte ptr [esp+0x44],1
	cmp esi,ebp
	je Block108

 Block105:
	mov esi,dword ptr [esp+0x20]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block108

 Block106:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block108

 Block107:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block108:
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],0
	cmp eax,ebp
	je Block110

 Block109:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block110:
	mov eax,ebx
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
// CItemInfo::SET_EFFECT::SET_EFFECT
_SUB_EXCEPTION_HANDLER(19B150)
__SUB_CLASS_THIS0(0019B150, __thiscall, 130781,  CItemInfo::SET_EFFECT, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_19B150
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
	push offset ZList<long>::~ZList<long>
	push offset ZList<long>::_ctor_default
	push 0x3C
	push 0x14
	lea eax,[esi+4]
	push eax
	call __eh_vector_ctor_iterator
	push offset ZList<long>::~ZList<long>
	push offset ZList<long>::_ctor_default
	push 5
	push 0x14
	lea ecx,[esi+0x4B4]
	xor edi,edi
	push ecx
	mov dword ptr [esp+0x2C],edi
	call __eh_vector_ctor_iterator
	int 3// TODO: 	mov dword ptr [esi+0x518],offset ZList<long>::`vftable'
	mov dword ptr [esi+0x520],edi
	mov dword ptr [esi+0x524],edi
	mov dword ptr [esi+0x528],edi
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
// CItemInfo::GetKarmaScissorsItem
_SUB_EXCEPTION_HANDLER(81720)
__SUB_CLASS_THIS(00081720, __thiscall, 130729,  CItemInfo, const CItemInfo::KARMASCISSORSITEM*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_81720
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
	xor ebx,ebx
	xor edi,edi
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x18],edi
	lea eax,[esp+0x14]
	push eax
	lea edx,[esp+0x38]
	push edx
	add ecx,0x144
	mov dword ptr [esp+0x34],edi
	call ZMap<long, ZRef<CItemInfo::KARMASCISSORSITEM>, long>::GetAt
	test eax,eax
	je Block2

 Block1:
	mov esi,dword ptr [esp+0x20]
	lea eax,[esp+0x14]
	jmp Block3

 Block2:
	xor esi,esi
	mov dword ptr [esp+0x20],esi
	lea eax,[esp+0x1C]
	mov ebx,1

 Block3:
	mov ebp,dword ptr [eax+4]
	test bl,1
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	je Block8

 Block4:
	cmp esi,edi
	je Block8

 Block5:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block8

 Block6:
	push edi
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
	mov esi,dword ptr [esp+0x18]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test esi,esi
	je Block12

 Block9:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block12

 Block10:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block12

 Block11:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block12:
	mov eax,ebp
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
// CItemInfo::GetSpecialProp
_SUB_EXCEPTION_HANDLER(1A6EE0)
__SUB_CLASS_THIS(001A6EE0, __thiscall, 130719,  CItemInfo, _x_com_ptr<IWzProperty>*, _x_com_ptr<IWzProperty>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A6EE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],0
	mov dword ptr [esp+0x10],0
	mov esi,dword ptr [esp+0x5C]
	mov eax,0x68DB8BAD
	imul esi
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edi,1
	mov dword ptr [esp+0x50],edi
	cmp eax,0x38E
	jne Block4

 Block1:
	lea ecx,[esp+0x5C]
	push 0xB71
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x50],2
	test eax,eax
	je Block3

 Block2:
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[esp+0x18]
	push edx
	jmp Block9

 Block3:
	push esi
	xor eax,eax
	push eax
	lea edx,[esp+0x18]
	push edx
	jmp Block9

 Block4:
	push esi
	call is_slot_inc_item
	add esp,4
	test eax,eax
	je Block35

 Block5:
	lea eax,[esp+0x5C]
	push 0xB72
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x50],3
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax]
	jmp Block8

 Block7:
	xor eax,eax

 Block8:
	push esi
	push eax
	lea ecx,[esp+0x18]
	push ecx

 Block9:
	call ZXString16::Format
	mov ecx,dword ptr [esp+0x68]
	add esp,0xC
	mov byte ptr [esp+0x50],1
	test ecx,ecx
	je Block11

 Block10:
	call _xbstr_t::Data_t::Release

 Block11:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push edx
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x54],4
	call esi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov edx,dword ptr [esp+0x10]
	push 0
	push 0
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esp+0x24]
	push ecx
	push ecx
	mov dword ptr [esp+0x70],esp
	mov ecx,esp
	mov bl,5
	push edx
	mov byte ptr [esp+0x68],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x64],6
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea eax,[esp+0x4C]
	mov byte ptr [esp+0x64],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x58],7
	call Ztl_variant_t::GetUnknown
	mov esi,dword ptr [esp+0x58]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
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
	mov dword ptr [esp+0x14],edi
	mov edi,8
	mov byte ptr [esp+0x50],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x38],di
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[esp+0x38]
	push edx
	call ebx

 Block24:
	mov byte ptr [esp+0x50],4
	cmp word ptr [esp+0x18],di
	jne Block27

 Block25:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block28:
	mov byte ptr [esp+0x50],1
	cmp word ptr [esp+0x28],di
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[esp+0x28]
	push eax
	call ebx

 Block32:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x50],0
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block34:
	mov eax,esi
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x44
	ret 8

 Block35:
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [eax],0
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x44
	ret 8
}
}
// CItemInfo::LoadSkillBonus
_SUB_EXCEPTION_HANDLER(1A1570)
__SUB_CLASS_THIS(001A1570, __thiscall, 130693,  CItemInfo, void, NakedParam<_x_com_ptr<IWzProperty>>, ZMap<long,long,long>&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A1570
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ebp+8]
	xor esi,esi
	cmp eax,esi
	sete cl
	mov dword ptr [ebp-4],esi
	test cl,cl
	jne Block37

 Block1:
	push esi
	push esi
	push ecx
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push offset _S_SKILL
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],1
	cmp ecx,esi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea eax,[ebp-0x30]
	push eax
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x20]
	mov dword ptr [ebp-0x20],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block6

 Block4:
	cmp eax,0x80004002
	je Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],4
	jne Block9

 Block7:
	mov eax,dword ptr [ebp-0x28]
	xor ecx,ecx
	mov word ptr [ebp-0x30],cx
	cmp eax,esi
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[ebp-0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov edi,dword ptr [ebp-0x20]
	cmp edi,esi
	sete al
	test al,al
	je Block15

 Block11:
	mov byte ptr [ebp-4],0
	cmp edi,esi
	je Block13

 Block12:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block13:
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,esi
	je Block39

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block39

 Block15:
	xor ebx,ebx
	cmp edi,esi
	je Block2

 Block16:
	nop

 Block17:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp-0x14]
	push edx
	push edi
	mov dword ptr [ebp-0x14],esi
	call eax
	cmp eax,esi
	jge Block19

 Block18:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block19:
	cmp ebx,dword ptr [ebp-0x14]
	jae Block36

 Block20:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push esi
	push esi
	push 0xA
	push eax
	push ebx
	call _itoa
	add esp,8
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	lea ecx,[ebp-0x50]
	push ecx
	mov byte ptr [ebp-4],5
	mov ecx,edi
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block22

 Block21:
	cmp eax,0x80004002
	jne Block5

 Block22:
	cmp word ptr [ebp-0x50],8
	mov byte ptr [ebp-4],8
	jne Block25

 Block23:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	cmp eax,esi
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x18],esp
	push 0x965
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],9
	test esi,esi
	je Block2

 Block27:
	lea edx,[ebp-0x40]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xA
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x40],8
	mov dword ptr [ebp-0x18],eax
	mov byte ptr [ebp-4],8
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x1C],esp
	push 0x677
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x60]
	mov byte ptr [ebp-4],0xB
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xC
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x60],8
	mov dword ptr [ebp-0x1C],eax
	mov byte ptr [ebp-4],8
	jne Block34

 Block32:
	mov eax,dword ptr [ebp-0x58]
	xor ecx,ecx
	mov word ptr [ebp-0x60],cx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[ebp-0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	lea eax,[ebp-0x1C]
	push eax
	lea ecx,[ebp-0x18]
	push ecx
	mov ecx,dword ptr [ebp+0xC]
	call ZMap<long, long, long>::Insert
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],4
	call eax
	inc ebx
	xor esi,esi
	jmp Block17

 Block36:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp+8]

 Block37:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,esi
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	lea esp,[ebp-0x70]
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
// CItemInfo::LevelInfo::RandomCraft::GetStatType
__SUB_CLASS_THIS0(001916A0, __thiscall, 131037,  CItemInfo::LevelInfo::RandomCraft, long) {
__asm {

 Block0:
	mov eax,0xC
	ret
}
}
// CItemInfo::RegisterBridleItem
_SUB_EXCEPTION_HANDLER(1B17D0)
__SUB_CLASS_THIS(001B17D0, __thiscall, 130738,  CItemInfo, void, long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B17D0
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
	xor esi,esi
	push esi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x3D5
	push eax
	mov dword ptr [esp+0x6C],esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x70]
	mov byte ptr [esp+0x64],1
	cmp ecx,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x68],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x60],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov ebp,8
	mov byte ptr [esp+0x58],4
	cmp word ptr [esp+0x30],bp
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,esi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x2C],esi
	call ZRef<CItemInfo::BRIDLEITEM>::_Alloc
	mov edx,dword ptr [esp+0x60]
	mov edi,dword ptr [esp+0x2C]
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x68],esp
	push 0xF1A
	mov bl,5
	push eax
	mov byte ptr [esp+0x68],bl
	mov dword ptr [edi+4],edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x60],6
	test esi,esi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x64],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x60],7
	call get_int32
	add esp,8
	mov dword ptr [edi+0x18],eax
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x40],bp
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block15:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x68],esp
	push 0x168E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x48]
	mov byte ptr [esp+0x60],8
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x64],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x60],9
	call get_int32
	add esp,8
	mov dword ptr [edi+0x1C],eax
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x40],bp
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x68],esp
	push 0x666
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x48]
	mov byte ptr [esp+0x60],0xA
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x64],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x60],0xB
	call get_int32
	add esp,8
	mov dword ptr [edi],eax
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x40],bp
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	push 0x64
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x68],esp
	push 0x668
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x64],0xC
	mov ecx,esi
	mov byte ptr [esp+0x64],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x60],0xD
	call get_int32
	add esp,8
	mov dword ptr [edi+0x20],eax
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x40],bp
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block27:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x68],esp
	push 0x669
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x48]
	mov byte ptr [esp+0x60],0xE
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x64],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x60],0xF
	call get_int32
	add esp,8
	mov dword ptr [edi+0x24],eax
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x40],bp
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	fld dword ptr [__real_42c80000]
	sub esp,8
	mov edx,esp
	fstp dword ptr [esp+4]
	mov dword ptr [esp+0x68],esp
	push 0x66A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x48]
	mov byte ptr [esp+0x60],0x10
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x64],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x60],0x11
	call get_float
	fstp dword ptr [edi+0x28]
	add esp,8
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x40],bp
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	fldz
	sub esp,8
	mov eax,esp
	fstp dword ptr [esp+4]
	mov dword ptr [esp+0x68],esp
	push 0x66B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x64],0x12
	mov ecx,esi
	mov byte ptr [esp+0x64],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x60],0x13
	call get_float
	fstp dword ptr [edi+0x2C]
	add esp,8
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x40],bp
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block39:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x68],esp
	push 0x66C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x48]
	mov byte ptr [esp+0x60],0x14
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x64],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x60],0x15
	call get_int32
	add esp,8
	mov dword ptr [edi+0x30],eax
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x40],bp
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x64],esp
	push 0x66D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x44]
	mov byte ptr [esp+0x5C],0x16
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	mov byte ptr [esp+0x58],0x17
	cmp word ptr [eax],bp
	jne Block45

 Block44:
	mov eax,dword ptr [eax+8]
	jmp Block46

 Block45:
	mov eax,offset _S___3

 Block46:
	push 0xFFFFFFFF
	lea ecx,[edi+0x34]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x40],bp
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x64],esp
	push 0x66E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x44]
	push ecx
	mov byte ptr [esp+0x60],0x18
	mov ecx,esi
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	mov byte ptr [esp+0x58],0x19
	cmp word ptr [eax],bp
	jne Block52

 Block51:
	mov eax,dword ptr [eax+8]
	jmp Block53

 Block52:
	mov eax,offset _S___3

 Block53:
	push 0xFFFFFFFF
	lea ecx,[edi+0x38]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x40],bp
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block57:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x68],esp
	push 0xF16
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x48]
	mov byte ptr [esp+0x60],0x1A
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x64],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x60],0x1B
	call get_int32
	add esp,8
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x40],bp
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x68],esp
	push 0xF17
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x48]
	mov byte ptr [esp+0x60],0x1C
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x64],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x60],0x1D
	call get_int32
	add esp,8
	mov dword ptr [esp+0x60],eax
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x40],bp
	jne Block64

 Block62:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0xF18
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x64],0x1E
	mov ecx,esi
	mov byte ptr [esp+0x64],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x60],0x1F
	call get_int32
	add esp,8
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x40],bp
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block69:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0xF19
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x48]
	mov byte ptr [esp+0x60],0x20
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x64],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x60],0x21
	call get_int32
	add esp,8
	cmp word ptr [esp+0x40],8
	mov ebp,eax
	mov byte ptr [esp+0x58],bl
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov edx,dword ptr [esp+0x60]
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x1C]
	push ebp
	push edx
	push eax
	push ecx
	lea edx,[edi+8]
	push edx
	call SetRect
	mov ecx,dword ptr [esp+0x20]
	lea eax,[esp+0x28]
	push eax
	lea eax,[edi+4]
	push eax
	add ecx,0xCC
	call ZMap<long, ZRef<CItemInfo::BRIDLEITEM>, long>::Insert
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	mov byte ptr [esp+0x5C],4
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block76

 Block74:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block76

 Block75:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block76:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0x5C],0
	call edx
	mov eax,dword ptr [esp+0x64]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	test eax,eax
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block78:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret 8
}
}
// CItemInfo::GetItemIconCRC
_SUB_EXCEPTION_HANDLER(1ADB30)
__SUB_CLASS_THIS(001ADB30, __thiscall, 130721,  CItemInfo, unsigned long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1ADB30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x64]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x40],ecx
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x24],ebx

 Block1:
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x74]
	push ebx
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x4C]
	lea edx,[esp+0x50]
	push edx
	call CItemInfo::GetItemIcon
	mov ebp,dword ptr [esp+0x44]
	cmp ebp,ebx
	sete al
	mov dword ptr [esp+0x6C],ebx
	test al,al
	jne Block36

 Block2:
	cmp ebp,ebx
	je Block39

 Block3:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x38]
	lea ecx,[esp+0x14]
	push ecx
	push ebp
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block5

 Block4:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block5:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x3C]
	lea ecx,[esp+0x1C]
	push ecx
	push ebp
	mov dword ptr [esp+0x24],ebx
	call edx
	cmp eax,ebx
	jge Block7

 Block6:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block7:
	mov edi,dword ptr [esp+0x14]
	cmp edi,ebx
	je Block40

 Block8:
	mov esi,dword ptr [esp+0x1C]
	cmp esi,ebx
	je Block40

 Block9:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x20]
	push ecx
	push ebp
	mov dword ptr [esp+0x28],ebx
	call edx
	cmp eax,ebx
	jge Block11

 Block10:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block11:
	mov eax,dword ptr [esp+0x20]
	lea eax,[eax+edi-1]
	xor edx,edx
	div edi
	mov ecx,dword ptr [ebp]
	lea edx,[esp+0x20]
	push edx
	push ebp
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x40],eax
	mov eax,dword ptr [ecx+0x48]
	call eax
	cmp eax,ebx
	jge Block13

 Block12:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block13:
	mov ecx,dword ptr [esp+0x20]
	xor edx,edx
	lea eax,[ecx+esi-1]
	div esi
	mov dword ptr [esp+0x3C],ebx
	cmp eax,ebx
	mov dword ptr [esp+0x50],eax
	jle Block33

 Block14:
	mov dword ptr [esp+0x20],ebx

 Block15:
	cmp dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x34],ebx
	jle Block32

 Block16:
	mov dword ptr [esp+0x18],ebx
	lea ecx,[ecx]

 Block17:
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [esp+0x18]
	push edx
	push eax
	lea ecx,[esp+0x50]
	push ecx
	mov ecx,ebp
	call IWzCanvas::GetrawCanvas
	mov edi,dword ptr [esp+0x48]
	mov byte ptr [esp+0x6C],1
	cmp edi,ebx
	je Block39

 Block18:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x18]
	lea eax,[esp+0x2C]
	push eax
	push edi
	mov dword ptr [esp+0x34],ebx
	call ecx
	cmp eax,ebx
	jge Block20

 Block19:
	push offset __GUID_312126f0_c399_4111_8eab_0f96a30b6b7c
	push edi
	push eax
	call _com_issue_errorex

 Block20:
	mov ebx,dword ptr [esp+0x2C]
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x58]
	push eax
	mov ecx,edi
	call IWzRawCanvas::_LockAddress
	mov esi,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x6C],2
	test ebx,ebx
	jle Block24

 Block21:
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x30]
	push edx
	push ebp
	dec ebx
	mov dword ptr [esp+0x38],0
	call eax
	test eax,eax
	jge Block23

 Block22:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block23:
	mov ecx,dword ptr [esp+0x30]
	push 0
	push 0
	push 0
	push 0
	lea edx,[ecx+ecx]
	push edx
	push esi
	call CCrc32::GetCrc32
	xor dword ptr [esp+0x40],eax
	add esi,dword ptr [esp+0x64]
	add esp,0x18
	test ebx,ebx
	jg Block21

 Block24:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0x20]
	push 0
	push edi
	call ecx
	test eax,eax
	jge Block26

 Block25:
	push offset __GUID_312126f0_c399_4111_8eab_0f96a30b6b7c
	push edi
	push eax
	call _com_issue_errorex

 Block26:
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0x6C],1
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [esp+0x70],0
	call edx
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x14]
	add dword ptr [esp+0x18],ecx
	inc eax
	xor ebx,ebx
	cmp eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x34],eax
	jl Block17

 Block31:
	mov eax,dword ptr [esp+0x50]
	mov esi,dword ptr [esp+0x1C]

 Block32:
	mov ecx,dword ptr [esp+0x3C]
	add dword ptr [esp+0x20],esi
	inc ecx
	cmp ecx,eax
	mov dword ptr [esp+0x3C],ecx
	jl Block15

 Block33:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	mov dword ptr [esp+0x70],0xFFFFFFFF
	call eax
	mov eax,dword ptr [esp+0x24]
	inc eax
	cmp eax,2
	mov dword ptr [esp+0x24],eax
	jl Block1

 Block34:
	mov eax,dword ptr [esp+0x28]

 Block35:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret 4

 Block36:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp ebp,ebx
	je Block38

 Block37:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block38:
	xor eax,eax
	jmp Block35

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov dword ptr [esp+0x70],0xFFFFFFFF
	call ecx
	xor eax,eax
	jmp Block35
}
}
// ZSort_ZPair_long_long__PairSecondLess_
__SUB(0019AC90, __cdecl, 141450,  void, ZArray<ZPair<long,long> >&, __POSITION*, __POSITION*, none) {
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
	call ZArray<ZPair<long, long>>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<ZPair<long, long>>::IndexOf
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
	lea eax,[esp+0x1C]
	push eax
	add ecx,ecx
	push ecx
	push edi
	push esi
	push ebx
	call IntroSortLoopHelper<ZPair<long, long>, int, PairSecondLess>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<ZPair<long, long>, PairSecondLess>::call
	add esp,0x24

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// CItemInfo::EQUIPITEM::ADDITION::GetDesc
_SUB_EXCEPTION_HANDLER(1A6B90)
__SUB_CLASS_THIS0(001A6B90, __thiscall, 130936,  CItemInfo::EQUIPITEM::ADDITION, ZXString<char>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A6B90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	push ebp
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x10],ebx
	mov edi,dword ptr [esp+0x28]
	mov dword ptr [edi],ebx
	mov ecx,dword ptr [ebp+4]
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x10],1
	cmp ecx,ebx
	je Block6

 Block1:
	lea eax,[esp+0x14]
	push eax
	call Additional::TCond<Additional::SKILL>::GetDesc
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x20],1
	cmp eax,ebx
	je Block3

 Block2:
	mov ecx,dword ptr [eax-4]
	jmp Block4

 Block3:
	xor ecx,ecx

 Block4:
	push ecx
	push eax
	mov ecx,edi
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [ebp+0xC]
	cmp ecx,ebx
	je Block12

 Block7:
	lea edx,[esp+0x14]
	push edx
	call Additional::TCond<Additional::MOBCATEGORY>::GetDesc
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x20],2
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,dword ptr [eax-4]
	jmp Block10

 Block9:
	xor ecx,ecx

 Block10:
	push ecx
	push eax
	mov ecx,edi
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov ecx,dword ptr [ebp+0x14]
	cmp ecx,ebx
	je Block18

 Block13:
	lea eax,[esp+0x14]
	push eax
	call Additional::TCond<Additional::ELEMBOOST>::GetDesc
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x20],3
	cmp eax,ebx
	je Block15

 Block14:
	mov ecx,dword ptr [eax-4]
	jmp Block16

 Block15:
	xor ecx,ecx

 Block16:
	push ecx
	push eax
	mov ecx,edi
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov ecx,dword ptr [ebp+0x1C]
	cmp ecx,ebx
	je Block24

 Block19:
	lea edx,[esp+0x14]
	push edx
	call Additional::TCond<Additional::CRITICAL>::GetDesc
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x20],4
	cmp eax,ebx
	je Block21

 Block20:
	mov ecx,dword ptr [eax-4]
	jmp Block22

 Block21:
	xor ecx,ecx

 Block22:
	push ecx
	push eax
	mov ecx,edi
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov ecx,dword ptr [ebp+0x24]
	cmp ecx,ebx
	je Block30

 Block25:
	lea eax,[esp+0x14]
	push eax
	call Additional::TCond<Additional::BOSS>::GetDesc
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x20],5
	cmp eax,ebx
	je Block27

 Block26:
	mov ecx,dword ptr [eax-4]
	jmp Block28

 Block27:
	xor ecx,ecx

 Block28:
	push ecx
	push eax
	mov ecx,edi
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	mov ecx,dword ptr [ebp+0x2C]
	cmp ecx,ebx
	je Block36

 Block31:
	lea edx,[esp+0x14]
	push edx
	call Additional::TCond<Additional::MOBDIE>::GetDesc
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x20],6
	cmp eax,ebx
	je Block33

 Block32:
	mov ecx,dword ptr [eax-4]
	jmp Block34

 Block33:
	xor ecx,ecx

 Block34:
	push ecx
	push eax
	mov ecx,edi
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	mov ecx,dword ptr [ebp+0x34]
	cmp ecx,ebx
	je Block42

 Block37:
	lea eax,[esp+0x14]
	push eax
	call Additional::TCond<Additional::HPMPCHANGE>::GetDesc
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x20],7
	cmp eax,ebx
	je Block39

 Block38:
	mov ecx,dword ptr [eax-4]
	jmp Block40

 Block39:
	xor ecx,ecx

 Block40:
	push ecx
	push eax
	mov ecx,edi
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	mov eax,edi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop ebp
	pop ebx
	add esp,0x14
	ret 4
}
}
// CItemInfo::EQUIPITEM::IsPotionDiscount
__SUB_CLASS_THIS0(005CF950, __thiscall, 76493,  CItemInfo::EQUIPITEM, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x250]
	test eax,eax
	jne Block2

 Block1:
	xor ecx,ecx
	test eax,eax
	setne cl
	mov eax,ecx
	ret

 Block2:
	mov eax,dword ptr [eax-4]
	xor ecx,ecx
	test eax,eax
	setne cl
	mov eax,ecx
	ret
}
}
// CItemInfo::IterateMapString
_SUB_EXCEPTION_HANDLER(1B5980)
__SUB_CLASS_THIS(001B5980, __thiscall, 130742,  CItemInfo, void, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B5980
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
	mov dword ptr [esp+0x24],ecx
	mov ecx,dword ptr [esp+0xA0]
	xor ebx,ebx
	mov dword ptr [esp+0x98],ebx
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+0x30]
	push eax
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x9C],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x50],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block7

 Block5:
	cmp eax,0x80004002
	je Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x98],3
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	lea eax,[esp+0x70]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0x98],4
	mov dword ptr [esp+0x34],ebx
	cmp dword ptr [esp+0x18],ebx
	je Block1

 Block10:
	lea esp,[esp]

 Block11:
	mov edi,dword ptr [esp+0x18]
	mov ecx,dword ptr [edi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x74]
	push eax
	push 1
	push edi
	call ecx
	test eax,eax
	jne Block81

 Block12:
	lea edx,[esp+0x70]
	push edx
	lea eax,[esp+0x24]
	push eax
	call DetachBSTR
	add esp,8
	mov ebp,dword ptr [esp+0x20]
	cmp ebp,ebx
	je Block14

 Block13:
	mov eax,dword ptr [ebp]
	jmp Block15

 Block14:
	xor eax,eax

 Block15:
	push 0xA
	lea ecx,[esp+0x40]
	push ecx
	push eax
	call _wcstol
	xor edi,edi
	add esp,0xC
	mov esi,eax
	mov dword ptr [esp+0x1C],edi
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x58],esp
	mov dword ptr [eax],ebp
	cmp ebp,ebx
	je Block17

 Block16:
	lea edx,[ebp+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	mov ecx,dword ptr [esp+0xAC]
	mov byte ptr [esp+0xA4],7
	cmp ecx,ebx
	je Block1

 Block18:
	lea eax,[esp+0x8C]
	push eax
	mov byte ptr [esp+0xA8],6
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xA0],8
	call Ztl_variant_t::GetUnknown
	cmp eax,ebx
	je Block21

 Block19:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x38]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x38]
	cmp eax,ebx
	mov edi,ecx
	mov dword ptr [esp+0x1C],edi
	jge Block21

 Block20:
	cmp eax,0x80004002
	jne Block6

 Block21:
	cmp word ptr [esp+0x80],8
	mov byte ptr [esp+0x98],6
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x88]
	xor edx,edx
	mov word ptr [esp+0x80],dx
	cmp eax,ebx
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea eax,[esp+0x80]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov ecx,dword ptr [esp+0x3C]
	cmp word ptr [ecx],bx
	je Block29

 Block26:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x50],esp
	mov dword ptr [eax],edi
	cmp edi,ebx
	je Block28

 Block27:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block28:
	mov ecx,dword ptr [esp+0x28]
	call CItemInfo::IterateMapString_0
	jmp Block71

 Block29:
	push ebx
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	add ecx,0x84
	mov dword ptr [esp+0x30],esi
	call ZMap<unsigned long, ZMap<char const *, ZXString<char>, ZXString<char>>, unsigned long>::Insert
	add eax,0xC
	mov dword ptr [esp+0x4C],eax
	cmp edi,ebx
	je Block1

 Block30:
	lea edx,[esp+0x40]
	push edx
	mov ecx,edi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x9C],9
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block32:
	lea ecx,[esp+0x2C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block34

 Block33:
	cmp eax,0x80004002
	jne Block6

 Block34:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x98],0xB
	cmp eax,ebx
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0x98],0xC
	mov dword ptr [esp+0x44],ebx
	nop

 Block37:
	mov esi,dword ptr [esp+0x28]
	xor ebx,ebx
	cmp esi,ebx
	je Block1

 Block38:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x64]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block66

 Block39:
	lea edx,[esp+0x60]
	push edx
	lea eax,[esp+0x30]
	push eax
	call DetachBSTR
	mov ebp,dword ptr [esp+0x34]
	add esp,4
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [eax],ebp
	cmp ebp,ebx
	je Block41

 Block40:
	lea ecx,[ebp+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block41:
	mov ecx,dword ptr [esp+0x20]
	lea edx,[esp+0x54]
	mov byte ptr [esp+0x9C],0xE
	push edx
	mov byte ptr [esp+0xA0],0xD
	call IWzProperty::Getitem
	cmp word ptr [esp+0x50],8
	mov edi,dword ptr [esp+0x58]
	mov byte ptr [esp+0x98],0xF
	je Block43

 Block42:
	mov edi,offset _S___3

 Block43:
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	test edi,edi
	je Block45

 Block44:
	push ebx
	push ebx
	push ebx
	push ebx
	push 0xFFFFFFFF
	push edi
	push ebx
	push ebx
	call WideCharToMultiByte
	mov esi,eax
	push ebx
	dec esi
	push esi
	lea ecx,[esp+0x1C]
	call ZXString<char>::GetBuffer
	push ebx
	push ebx
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push edi
	push ebx
	push ebx
	call WideCharToMultiByte
	push esi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	mov ebx,dword ptr [esp+0x14]

 Block45:
	mov byte ptr [esp+0x98],0x10
	test ebp,ebp
	je Block51

 Block46:
	cmp dword ptr [ebp+4],0
	jne Block50

 Block47:
	mov edi,dword ptr [ebp]
	test edi,edi
	jne Block49

 Block48:
	xor esi,esi
	mov dword ptr [ebp+4],esi
	mov eax,esi
	jmp Block52

 Block49:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	push 0
	push 0
	push 0x3FFFFFFF
	mov esi,eax
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	mov dword ptr [ebp+4],esi

 Block50:
	mov eax,dword ptr [ebp+4]
	jmp Block52

 Block51:
	xor eax,eax

 Block52:
	mov dword ptr [esp+0x48],eax
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,dword ptr [esp+0x54]
	call ZMap<char const *, ZXString<char>, ZXString<char>>::Insert
	mov byte ptr [esp+0x98],0xF
	test ebx,ebx
	je Block54

 Block53:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block54:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x98],0xD
	jne Block57

 Block55:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov byte ptr [esp+0x98],0xC
	test ebp,ebp
	je Block37

 Block59:
	lea ecx,[ebp+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block65

 Block60:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block62

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block62:
	mov eax,dword ptr [ebp+4]
	test eax,eax
	je Block64

 Block63:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block64:
	push ebp
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block65:
	mov dword ptr [esp+0x2C],0
	jmp Block37

 Block66:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x98],0xB
	jne Block69

 Block67:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	cmp eax,ebx
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0x9C],6
	call edx
	mov ebp,dword ptr [esp+0x20]
	mov edi,dword ptr [esp+0x1C]

 Block71:
	mov byte ptr [esp+0x98],5
	cmp edi,ebx
	je Block73

 Block72:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block73:
	mov byte ptr [esp+0x98],4
	cmp ebp,ebx
	je Block11

 Block74:
	lea edx,[ebp+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block80

 Block75:
	mov eax,dword ptr [ebp]
	cmp eax,ebx
	je Block77

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block77:
	mov eax,dword ptr [ebp+4]
	cmp eax,ebx
	je Block79

 Block78:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block79:
	push ebp
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block80:
	mov dword ptr [esp+0x20],ebx
	jmp Block11

 Block81:
	mov eax,dword ptr [_D_G_RM]
	cmp eax,ebx
	jne Block83

 Block82:
	push 0x80004003
	call _com_issue_error

 Block83:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x24]
	push ebx
	push eax
	mov esi,eax
	call edx
	cmp eax,ebx
	jge Block85

 Block84:
	push offset __GUID_57dfe40b_3e20_4dbc_97e8_805a50f381bf
	push esi
	push eax
	call _com_issue_errorex

 Block85:
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0x98],3
	jne Block88

 Block86:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	cmp eax,ebx
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea ecx,[esp+0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block89:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0x9C],0
	call eax
	mov eax,dword ptr [esp+0xA0]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	cmp eax,ebx
	je Block91

 Block90:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block91:
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
// CItemInfo::EQUIPITEM::~EQUIPITEM
_SUB_EXCEPTION_HANDLER(1A5CB0)
__SUB_CLASS_THIS0(001A5CB0, __thiscall, 130929,  CItemInfo::EQUIPITEM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A5CB0
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
	mov eax,dword ptr [esi+0x25C]
	mov dword ptr [esp+0x1C],0xA
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
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block4:
	mov dword ptr [esi+0x25C],0

 Block5:
	lea ecx,[esi+0x254]
	mov byte ptr [esp+0x1C],9
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0x250]
	mov byte ptr [esp+0x1C],8
	call ZArray<ZPair<long, long>>::RemoveAll
	lea ecx,[esi+0x24C]
	mov byte ptr [esp+0x1C],7
	call ZArray<ZPair<long, long>>::RemoveAll
	lea ecx,[esi+0x234]
	mov byte ptr [esp+0x1C],6
	int 3// TODO: 	mov dword ptr [ecx],ZMAP_LONG_LONG_VTABLE
	call ZMap<long, long, long>::RemoveAll
	lea ecx,[esi+0x220]
	mov byte ptr [esp+0x1C],5
	int 3// TODO: 	mov dword ptr [ecx],offset ZLIST_REF_ITEMSKILL_VTABLE
	call ZList<ZRef<CItemInfo::ItemSkill>>::RemoveAll
	mov eax,dword ptr [esi+0x21C]
	mov byte ptr [esp+0x1C],4
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	lea ecx,[esi+0x210]
	mov byte ptr [esp+0x1C],3
	call ZArray<ZRef<CItemInfo::LevelInfo>>::RemoveAll
	lea ecx,[esi+0x20C]
	mov byte ptr [esp+0x1C],2
	call ZArray<long>::RemoveAll
	mov eax,dword ptr [esi+0x7C]
	mov byte ptr [esp+0x1C],1
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov ecx,dword ptr [esi+0x14]
	test ecx,ecx
	je Block11

 Block10:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x14],0

 Block11:
	mov esi,dword ptr [esi+0x10]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test esi,esi
	je Block13

 Block12:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block13:
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
// CItemInfo::EQUIPITEM::GetSetItemID
__SUB_CLASS_THIS0(00194C80, __thiscall, 130921,  CItemInfo::EQUIPITEM, long) {
__asm {

 Block0:
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0x20C]
	test eax,eax
	je Block2

 Block1:
	cmp dword ptr [eax-4],0
	jne Block3

 Block2:
	xor eax,eax
	pop edi
	ret

 Block3:
	push esi
	test eax,eax
	je Block6

 Block4:
	mov esi,dword ptr [eax-4]
	test esi,esi
	je Block6

 Block5:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	div esi
	mov ecx,dword ptr [edi+0x20C]
	pop esi
	pop edi
	mov eax,edx
	mov eax,dword ptr [ecx+eax*4]
	ret

 Block6:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	mov ecx,dword ptr [edi+0x20C]
	mov eax,dword ptr [ecx+eax*4]
	pop esi
	pop edi
	ret
}
}
// CItemInfo::GetItemCRC
_SUB_EXCEPTION_HANDLER(1C2890)
__SUB_CLASS_THIS(001C2890, __thiscall, 130721,  CItemInfo, unsigned long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1C2890
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esp+0x38]
	lea ebp,[esi+4]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x18],0
	mov dword ptr [esp+0x1C],ebp
	call ZMap<long, unsigned long, long>::GetAt
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x20
	ret 4

 Block2:
	mov edi,dword ptr [esp+0x34]
	push edi
	mov ecx,esi
	call CItemInfo::GetEquipItem
	test eax,eax
	je Block4

 Block3:
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x38]
	push eax
	mov ecx,ebp
	call ZMap<long, unsigned long, long>::GetAt
	neg eax
	sbb eax,eax
	and eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x20
	ret 4

 Block4:
	mov eax,0x431BDE83
	imul edi
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	je Block7

 Block5:
	cmp eax,3
	je Block7

 Block6:
	cmp eax,4
	jne Block15

 Block7:
	push edi
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	call CItemInfo::GetItemInfo
	mov ebp,dword ptr [esp+0x18]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],0
	mov dword ptr [esp+0x14],esp
	mov dword ptr [eax],ebp
	test ebp,ebp
	je Block9

 Block8:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+4]
	push ebp
	call eax

 Block9:
	push edi
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,esi
	call CItemInfo::GetBundleItemInfoData
	mov edx,dword ptr [esp+0x20]
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],edx
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x34],1
	mov dword ptr [esp+0x18],esp
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov ecx,esi
	call CItemInfo::GetBundleItemCRC
	mov esi,eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x10],esi
	mov byte ptr [esp+0x2C],0
	call ZRef<CItemInfo::BUNDLEITEM>::~ZRef<CItemInfo::BUNDLEITEM>
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test ebp,ebp
	je Block13

 Block12:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block13:
	mov ebp,dword ptr [esp+0x14]

 Block14:
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x38]
	push eax
	mov ecx,ebp
	call ZMap<long, unsigned long, long>::Insert
	mov eax,esi
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x20
	ret 4

 Block15:
	push edi
	mov ecx,esi
	call CItemInfo::GetItemCommonCRC
	mov esi,eax
	mov dword ptr [esp+0x10],esi
	jmp Block14
}
}
// CItemInfo::RegisterEquipItemInfo
_SUB_EXCEPTION_HANDLER(1B8EF0)
__SUB_CLASS_THIS(001B8EF0, __thiscall, 130741,  CItemInfo, ZRef<CItemInfo::EQUIPITEM>*, ZRef<CItemInfo::EQUIPITEM>*, long, const wchar_t*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B8EF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xAC8
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov dword ptr [ebp+0x2C],ecx
	xor ebx,ebx
	mov dword ptr [ebp+0x44],ebx
	lea ecx,[ebp+0x48]
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp+0x4C],ebx
	call ZRef<CItemInfo::EQUIPITEM>::_Alloc
	mov edi,dword ptr [ebp+0x7C]
	push edi
	lea ecx,[ebp+0x24]
	mov byte ptr [ebp-4],1
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [ebp+0x4C]
	add esi,0x14
	lea eax,[ebp+0x24]
	cmp esi,eax
	je Block5

 Block1:
	cmp dword ptr [esi],ebx
	je Block3

 Block2:
	mov ecx,dword ptr [esi]
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],ebx

 Block3:
	mov ebx,dword ptr [ebp+0x24]
	mov dword ptr [esi],ebx
	test ebx,ebx
	je Block8

 Block4:
	lea ecx,[ebx+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block6

 Block5:
	mov ebx,dword ptr [ebp+0x24]

 Block6:
	test ebx,ebx
	je Block8

 Block7:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release

 Block8:
	mov edx,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [ebp+0x78]
	call _ZtlSecureTearHelper<long>::call
	mov edx,dword ptr [ebp+0x4C]
	mov esi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [edx+8],eax
	lea eax,[ebp-0x1BC]
	push eax
	call esi
	lea ecx,[ebp-0x1BC]
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
	lea edx,[ebp-0x1CC]
	push edx
	mov byte ptr [ebp-4],2
	call esi
	lea eax,[ebp-0x1CC]
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
	push 0
	push 0
	lea ecx,[ebp-0x1BC]
	push ecx
	lea edx,[ebp-0x1CC]
	push edx
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push edi
	mov byte ptr [ebp-4],3
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],4
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea eax,[ebp-0x284]
	mov byte ptr [ebp-4],3
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x28]
	mov dword ptr [ebp+0x28],0
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
	cmp word ptr [ebp-0x284],8
	mov byte ptr [ebp-4],7
	jne Block24

 Block18:
	mov eax,dword ptr [ebp-0x27C]
	xor ecx,ecx
	mov word ptr [ebp-0x284],cx
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block20:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block21:
	mov edi,8
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x1CC],di
	jne Block25

 Block22:
	xor eax,eax
	mov word ptr [ebp-0x1CC],ax
	mov eax,dword ptr [ebp-0x1C4]
	test eax,eax
	je Block26

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block24:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x284]
	push edx
	call ebx
	jmp Block21

 Block25:
	lea ecx,[ebp-0x1CC]
	push ecx
	call ebx

 Block26:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x1BC],di
	jne Block29

 Block27:
	mov eax,dword ptr [ebp-0x1B4]
	xor edx,edx
	mov word ptr [ebp-0x1BC],dx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[ebp-0x1BC]
	push eax
	call ebx

 Block30:
	push 0
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x3D5
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0xA
	test ecx,ecx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea edx,[ebp-0x844]
	push edx
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x50],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block35

 Block33:
	cmp eax,0x80004002
	je Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x844],di
	jne Block38

 Block36:
	xor eax,eax
	mov word ptr [ebp-0x844],ax
	mov eax,dword ptr [ebp-0x83C]
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea ecx,[ebp-0x844]
	push ecx
	call ebx

 Block39:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xB7D
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0xE
	test esi,esi
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	lea eax,[ebp-0x2A4]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xF
	call get_int32
	mov ecx,dword ptr [ebp+0x4C]
	add esp,8
	mov dword ptr [ecx+0xC],eax
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x2A4],di
	jne Block44

 Block42:
	mov eax,dword ptr [ebp-0x29C]
	xor edx,edx
	mov word ptr [ebp-0x2A4],dx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[ebp-0x2A4]
	push eax
	call ebx

 Block45:
	lea ecx,[ebp+0x48]
	push ecx
	mov ecx,dword ptr [ebp+0x2C]
	lea edx,[ebp+0x78]
	push edx
	add ecx,0x3C
	call ZMap<long, ZRef<CItemInfo::EQUIPITEM>, long>::Insert
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_REPLACE
	call _xbstr_t::_ctor_0
	lea eax,[ebp-0x5E4]
	mov byte ptr [ebp-4],0x10
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x11
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x24]
	mov dword ptr [ebp+0x24],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block48

 Block46:
	cmp eax,0x80004002
	je Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	cmp word ptr [ebp-0x5E4],8
	mov edi,0x13
	mov byte ptr [ebp-4],0x13
	jne Block51

 Block49:
	mov eax,dword ptr [ebp-0x5DC]
	xor ecx,ecx
	mov word ptr [ebp-0x5E4],cx
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea edx,[ebp-0x5E4]
	push edx
	call ebx

 Block52:
	mov esi,dword ptr [ebp+0x24]
	test esi,esi
	je Block54

 Block53:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_ITEMID__1
	call _xbstr_t::_ctor_0
	lea eax,[ebp-0x2C4]
	mov byte ptr [ebp-4],0x14
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	mov ebx,1
	push eax
	mov byte ptr [ebp-4],0x15
	mov dword ptr [ebp+0x44],ebx
	call get_int32
	add esp,8
	jmp Block55

 Block54:
	mov ebx,dword ptr [ebp+0x44]
	xor eax,eax

 Block55:
	mov ecx,dword ptr [ebp+0x4C]
	mov dword ptr [ecx+0x78],eax
	mov dword ptr [ebp-4],edi
	test bl,1
	je Block60

 Block56:
	and ebx,0xFFFFFFFE
	cmp word ptr [ebp-0x2C4],8
	jne Block59

 Block57:
	mov eax,dword ptr [ebp-0x2BC]
	xor edx,edx
	mov word ptr [ebp-0x2C4],dx
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[ebp-0x2C4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block60:
	test esi,esi
	je Block62

 Block61:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xCC0
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x784]
	mov byte ptr [ebp-4],0x16
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	or ebx,2
	push eax
	mov byte ptr [ebp-4],0x17
	mov dword ptr [ebp+0x44],ebx
	call get_int32
	add esp,8
	jmp Block63

 Block62:
	xor eax,eax

 Block63:
	mov ecx,dword ptr [ebp+0x4C]
	mov dword ptr [ecx+0x80],eax
	mov dword ptr [ebp-4],edi
	test bl,2
	je Block68

 Block64:
	cmp word ptr [ebp-0x784],8
	jne Block67

 Block65:
	mov eax,dword ptr [ebp-0x77C]
	xor edx,edx
	mov word ptr [ebp-0x784],dx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea eax,[ebp-0x784]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block68:
	test esi,esi
	je Block76

 Block69:
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_MSG
	call _xbstr_t::_ctor_0
	lea ecx,[ebp-0x2E4]
	push ecx
	mov byte ptr [ebp-4],0x18
	mov ecx,esi
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	mov edi,8
	mov byte ptr [ebp-4],0x19
	cmp word ptr [eax],di
	jne Block71

 Block70:
	mov eax,dword ptr [eax+8]
	jmp Block72

 Block71:
	mov eax,offset _S___3

 Block72:
	mov esi,dword ptr [ebp+0x4C]
	push 0xFFFFFFFF
	lea ecx,[esi+0x7C]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x2E4],di
	jne Block75

 Block73:
	mov eax,dword ptr [ebp-0x2DC]
	xor edx,edx
	mov word ptr [ebp-0x2E4],dx
	test eax,eax
	je Block77

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block75:
	lea eax,[ebp-0x2E4]
	push eax
	call dword ptr [ZImports::_VariantClear]
	jmp Block77

 Block76:
	mov esi,dword ptr [ebp+0x4C]
	mov edi,8

 Block77:
	mov ecx,dword ptr [ebp+0x78]
	push ecx
	mov ecx,dword ptr [ebp+0x2C]
	lea edx,[ebp-0x118]
	push edx
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esi+0x10]
	mov byte ptr [ebp-4],0x1A
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x118]
	mov byte ptr [ebp-4],0x13
	test eax,eax
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block79:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x809
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [ebp+0x50]
	lea edx,[ebp-0x604]
	mov byte ptr [ebp-4],0x1B
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1C
	call get_int32
	lea edx,[esi+0x18]
	add esp,8
	mov ecx,eax
	mov dword ptr [ebp+0x40],edx
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x20],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x604],di
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [ebp-0x604],ax
	mov eax,dword ptr [ebp-0x5FC]
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[ebp-0x604]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x80B
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x304]
	mov byte ptr [ebp-4],0x1D
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1E
	call get_int32
	lea edx,[esi+0x24]
	add esp,8
	mov ecx,eax
	mov dword ptr [ebp+0x38],edx
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2C],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x304],di
	jne Block86

 Block84:
	mov eax,dword ptr [ebp-0x2FC]
	xor ecx,ecx
	mov word ptr [ebp-0x304],cx
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea edx,[ebp-0x304]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block87:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x80A
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x8E4]
	mov byte ptr [ebp-4],0x1F
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x20
	call get_int32
	lea edx,[esi+0x30]
	add esp,8
	mov ecx,eax
	mov dword ptr [ebp+0x44],edx
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x38],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x8E4],di
	jne Block90

 Block88:
	xor eax,eax
	mov word ptr [ebp-0x8E4],ax
	mov eax,dword ptr [ebp-0x8DC]
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea ecx,[ebp-0x8E4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x80C
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x324]
	mov byte ptr [ebp-4],0x21
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x22
	call get_int32
	add esp,8
	lea edx,[esi+0x3C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x44],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x324],di
	jne Block94

 Block92:
	mov eax,dword ptr [ebp-0x31C]
	xor ecx,ecx
	mov word ptr [ebp-0x324],cx
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea edx,[ebp-0x324]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block95:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x80D
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x624]
	mov byte ptr [ebp-4],0x23
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x24
	call get_int32
	add esp,8
	lea edx,[esi+0x48]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x50],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x624],di
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [ebp-0x624],ax
	mov eax,dword ptr [ebp-0x61C]
	test eax,eax
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea ecx,[ebp-0x624]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block99:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x80E
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x344]
	mov byte ptr [ebp-4],0x25
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x26
	call get_int32
	add esp,8
	lea edx,[esi+0x54]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x5C],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x344],di
	jne Block102

 Block100:
	mov eax,dword ptr [ebp-0x33C]
	xor ecx,ecx
	mov word ptr [ebp-0x344],cx
	test eax,eax
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea edx,[ebp-0x344]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block103:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x787
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x244]
	mov byte ptr [ebp-4],0x27
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x28
	call get_int32
	add esp,8
	lea edx,[esi+0x60]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x68],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x244],di
	jne Block106

 Block104:
	xor eax,eax
	mov word ptr [ebp-0x244],ax
	mov eax,dword ptr [ebp-0x23C]
	test eax,eax
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea ecx,[ebp-0x244]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block107:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x789
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x7A4]
	mov byte ptr [ebp-4],0x29
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2A
	call get_int32
	add esp,8
	lea edx,[esi+0x6C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x74],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x7A4],di
	jne Block110

 Block108:
	mov eax,dword ptr [ebp-0x79C]
	xor ecx,ecx
	mov word ptr [ebp-0x7A4],cx
	test eax,eax
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea edx,[ebp-0x7A4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block111:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x810
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x364]
	mov byte ptr [ebp-4],0x2B
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2C
	call get_int32
	add esp,8
	lea edx,[esi+0xA0]
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [esi+0xA4],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x364],di
	jne Block114

 Block112:
	xor eax,eax
	mov word ptr [ebp-0x364],ax
	mov eax,dword ptr [ebp-0x35C]
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea ecx,[ebp-0x364]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block115:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x810
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x644]
	mov byte ptr [ebp-4],0x2D
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2E
	call get_int32
	add esp,8
	lea edx,[esi+0xA8]
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [esi+0xAC],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x644],di
	jne Block118

 Block116:
	mov eax,dword ptr [ebp-0x63C]
	xor ecx,ecx
	mov word ptr [ebp-0x644],cx
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea edx,[ebp-0x644]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block119:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x811
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x384]
	mov byte ptr [ebp-4],0x2F
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x30
	call get_int32
	add esp,8
	lea edx,[esi+0xB0]
	mov ecx,eax
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0xB4],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x384],di
	jne Block122

 Block120:
	xor eax,eax
	mov word ptr [ebp-0x384],ax
	mov eax,dword ptr [ebp-0x37C]
	test eax,eax
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea ecx,[ebp-0x384]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block123:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x812
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x864]
	mov byte ptr [ebp-4],0x31
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x32
	call get_int32
	add esp,8
	lea edx,[esi+0xB8]
	mov ecx,eax
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0xBC],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x864],di
	jne Block126

 Block124:
	mov eax,dword ptr [ebp-0x85C]
	xor ecx,ecx
	mov word ptr [ebp-0x864],cx
	test eax,eax
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea edx,[ebp-0x864]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block127:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x813
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x3A4]
	mov byte ptr [ebp-4],0x33
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x34
	call get_int32
	add esp,8
	lea edx,[esi+0xC0]
	mov ecx,eax
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0xC4],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x3A4],di
	jne Block130

 Block128:
	xor eax,eax
	mov word ptr [ebp-0x3A4],ax
	mov eax,dword ptr [ebp-0x39C]
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea ecx,[ebp-0x3A4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x814
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x664]
	mov byte ptr [ebp-4],0x35
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x36
	call get_int32
	add esp,8
	lea edx,[esi+0xC8]
	mov ecx,eax
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0xCC],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x664],di
	jne Block134

 Block132:
	mov eax,dword ptr [ebp-0x65C]
	xor ecx,ecx
	mov word ptr [ebp-0x664],cx
	test eax,eax
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea edx,[ebp-0x664]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block135:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x815
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x3C4]
	mov byte ptr [ebp-4],0x37
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x38
	call get_int32
	add esp,8
	lea edx,[esi+0xD0]
	mov ecx,eax
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0xD4],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x3C4],di
	jne Block138

 Block136:
	xor eax,eax
	mov word ptr [ebp-0x3C4],ax
	mov eax,dword ptr [ebp-0x3BC]
	test eax,eax
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block138:
	lea ecx,[ebp-0x3C4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block139:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x816
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x7C4]
	mov byte ptr [ebp-4],0x39
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x3A
	call get_int32
	add esp,8
	lea edx,[esi+0xD8]
	mov ecx,eax
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0xDC],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x7C4],di
	jne Block142

 Block140:
	mov eax,dword ptr [ebp-0x7BC]
	xor ecx,ecx
	mov word ptr [ebp-0x7C4],cx
	test eax,eax
	je Block143

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block142:
	lea edx,[ebp-0x7C4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block143:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1768
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x3E4]
	mov byte ptr [ebp-4],0x3B
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x3C
	call get_int32
	add esp,8
	mov word ptr [esi+0x9C],ax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x3E4],di
	jne Block146

 Block144:
	xor eax,eax
	mov word ptr [ebp-0x3E4],ax
	mov eax,dword ptr [ebp-0x3DC]
	test eax,eax
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea ecx,[ebp-0x3E4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block147:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1769
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x684]
	mov byte ptr [ebp-4],0x3D
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x3E
	call get_int32
	add esp,8
	mov word ptr [esi+0x9E],ax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x684],di
	jne Block150

 Block148:
	mov eax,dword ptr [ebp-0x67C]
	xor ecx,ecx
	mov word ptr [ebp-0x684],cx
	test eax,eax
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea edx,[ebp-0x684]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block151:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x817
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x404]
	mov byte ptr [ebp-4],0x3F
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x40
	call get_int32
	add esp,8
	lea edx,[esi+0xE0]
	mov ecx,eax
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0xE4],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x404],di
	jne Block154

 Block152:
	xor eax,eax
	mov word ptr [ebp-0x404],ax
	mov eax,dword ptr [ebp-0x3FC]
	test eax,eax
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block155

 Block154:
	lea ecx,[ebp-0x404]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block155:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x819
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x8C4]
	mov byte ptr [ebp-4],0x41
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x42
	call get_int32
	add esp,8
	lea edx,[esi+0xE8]
	mov ecx,eax
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0xEC],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x8C4],di
	jne Block158

 Block156:
	mov eax,dword ptr [ebp-0x8BC]
	xor ecx,ecx
	mov word ptr [ebp-0x8C4],cx
	test eax,eax
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea edx,[ebp-0x8C4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block159:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x818
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x424]
	mov byte ptr [ebp-4],0x43
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x44
	call get_int32
	add esp,8
	lea edx,[esi+0xF0]
	mov ecx,eax
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0xF4],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x424],di
	jne Block162

 Block160:
	xor eax,eax
	mov word ptr [ebp-0x424],ax
	mov eax,dword ptr [ebp-0x41C]
	test eax,eax
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea ecx,[ebp-0x424]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block163:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x81A
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x6A4]
	mov byte ptr [ebp-4],0x45
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x46
	call get_int32
	add esp,8
	lea edx,[esi+0xF8]
	mov ecx,eax
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0xFC],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x6A4],di
	jne Block166

 Block164:
	mov eax,dword ptr [ebp-0x69C]
	xor ecx,ecx
	mov word ptr [ebp-0x6A4],cx
	test eax,eax
	je Block167

 Block165:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block167

 Block166:
	lea edx,[ebp-0x6A4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block167:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x81B
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x444]
	mov byte ptr [ebp-4],0x47
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x48
	call get_int32
	add esp,8
	lea edx,[esi+0x100]
	mov ecx,eax
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x104],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x444],di
	jne Block170

 Block168:
	xor eax,eax
	mov word ptr [ebp-0x444],ax
	mov eax,dword ptr [ebp-0x43C]
	test eax,eax
	je Block171

 Block169:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block171

 Block170:
	lea ecx,[ebp-0x444]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block171:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x81C
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x7E4]
	mov byte ptr [ebp-4],0x49
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x4A
	call get_int32
	add esp,8
	lea edx,[esi+0x108]
	mov ecx,eax
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x10C],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x7E4],di
	jne Block174

 Block172:
	mov eax,dword ptr [ebp-0x7DC]
	xor ecx,ecx
	mov word ptr [ebp-0x7E4],cx
	test eax,eax
	je Block175

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block174:
	lea edx,[ebp-0x7E4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block175:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x81D
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x464]
	mov byte ptr [ebp-4],0x4B
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x4C
	call get_int32
	add esp,8
	lea edx,[esi+0x110]
	mov ecx,eax
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x114],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x464],di
	jne Block178

 Block176:
	xor eax,eax
	mov word ptr [ebp-0x464],ax
	mov eax,dword ptr [ebp-0x45C]
	test eax,eax
	je Block179

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block179

 Block178:
	lea ecx,[ebp-0x464]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block179:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x81E
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x6C4]
	mov byte ptr [ebp-4],0x4D
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x4E
	call get_int32
	add esp,8
	lea edx,[esi+0x118]
	mov ecx,eax
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x11C],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x6C4],di
	jne Block182

 Block180:
	mov eax,dword ptr [ebp-0x6BC]
	xor ecx,ecx
	mov word ptr [ebp-0x6C4],cx
	test eax,eax
	je Block183

 Block181:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block183

 Block182:
	lea edx,[ebp-0x6C4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block183:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x81F
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x484]
	mov byte ptr [ebp-4],0x4F
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x50
	call get_int32
	add esp,8
	lea edx,[esi+0x120]
	mov ecx,eax
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x124],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x484],di
	jne Block186

 Block184:
	xor eax,eax
	mov word ptr [ebp-0x484],ax
	mov eax,dword ptr [ebp-0x47C]
	test eax,eax
	je Block187

 Block185:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block187

 Block186:
	lea ecx,[ebp-0x484]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block187:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x820
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x884]
	mov byte ptr [ebp-4],0x51
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x52
	call get_int32
	add esp,8
	lea edx,[esi+0x128]
	mov ecx,eax
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x12C],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x884],di
	jne Block190

 Block188:
	mov eax,dword ptr [ebp-0x87C]
	xor ecx,ecx
	mov word ptr [ebp-0x884],cx
	test eax,eax
	je Block191

 Block189:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block191

 Block190:
	lea edx,[ebp-0x884]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block191:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xF15
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x4A4]
	mov byte ptr [ebp-4],0x53
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x54
	call get_int32
	add esp,8
	lea edx,[esi+0x130]
	mov ecx,eax
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x134],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x4A4],di
	jne Block194

 Block192:
	xor eax,eax
	mov word ptr [ebp-0x4A4],ax
	mov eax,dword ptr [ebp-0x49C]
	test eax,eax
	je Block195

 Block193:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block195

 Block194:
	lea ecx,[ebp-0x4A4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block195:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AC9
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x6E4]
	mov byte ptr [ebp-4],0x55
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x56
	call get_int32
	add esp,8
	lea edx,[esi+0x84]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x8C],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x6E4],di
	jne Block198

 Block196:
	mov eax,dword ptr [ebp-0x6DC]
	xor ecx,ecx
	mov word ptr [ebp-0x6E4],cx
	test eax,eax
	je Block199

 Block197:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block199

 Block198:
	lea edx,[ebp-0x6E4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block199:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x826
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x4C4]
	mov byte ptr [ebp-4],0x57
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x58
	call get_int32
	add esp,8
	lea edx,[esi+0x90]
	mov ecx,eax
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [esi+0x98],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x4C4],di
	jne Block202

 Block200:
	xor eax,eax
	mov word ptr [ebp-0x4C4],ax
	mov eax,dword ptr [ebp-0x4BC]
	test eax,eax
	je Block203

 Block201:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block203

 Block202:
	lea ecx,[ebp-0x4C4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block203:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xBC8
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x804]
	mov byte ptr [ebp-4],0x59
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x5A
	call get_int32
	add esp,8
	mov dword ptr [esi+0x19C],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x804],di
	jne Block206

 Block204:
	mov eax,dword ptr [ebp-0x7FC]
	xor ecx,ecx
	mov word ptr [ebp-0x804],cx
	test eax,eax
	je Block207

 Block205:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block207

 Block206:
	lea edx,[ebp-0x804]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block207:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xBC9
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x4E4]
	mov byte ptr [ebp-4],0x5B
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x5C
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1A0],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x4E4],di
	jne Block210

 Block208:
	xor eax,eax
	mov word ptr [ebp-0x4E4],ax
	mov eax,dword ptr [ebp-0x4DC]
	test eax,eax
	je Block211

 Block209:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block211

 Block210:
	lea ecx,[ebp-0x4E4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block211:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xC9F
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x704]
	mov byte ptr [ebp-4],0x5D
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x5E
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1A4],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x704],di
	jne Block214

 Block212:
	mov eax,dword ptr [ebp-0x6FC]
	xor ecx,ecx
	mov word ptr [ebp-0x704],cx
	test eax,eax
	je Block215

 Block213:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block215

 Block214:
	lea edx,[ebp-0x704]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block215:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1409
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x504]
	mov byte ptr [ebp-4],0x5F
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x60
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1A8],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x504],di
	jne Block218

 Block216:
	xor eax,eax
	mov word ptr [ebp-0x504],ax
	mov eax,dword ptr [ebp-0x4FC]
	test eax,eax
	je Block219

 Block217:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block219

 Block218:
	lea ecx,[ebp-0x504]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block219:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xCA0
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x904]
	mov byte ptr [ebp-4],0x61
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x62
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1AC],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x904],di
	jne Block222

 Block220:
	mov eax,dword ptr [ebp-0x8FC]
	xor ecx,ecx
	mov word ptr [ebp-0x904],cx
	test eax,eax
	je Block223

 Block221:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block223

 Block222:
	lea edx,[ebp-0x904]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block223:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xCA2
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x524]
	mov byte ptr [ebp-4],0x63
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x64
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1B0],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x524],di
	jne Block226

 Block224:
	xor eax,eax
	mov word ptr [ebp-0x524],ax
	mov eax,dword ptr [ebp-0x51C]
	test eax,eax
	je Block227

 Block225:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block227

 Block226:
	lea ecx,[ebp-0x524]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block227:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x13DD
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x724]
	mov byte ptr [ebp-4],0x65
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x66
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1D8],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x724],di
	jne Block230

 Block228:
	mov eax,dword ptr [ebp-0x71C]
	xor ecx,ecx
	mov word ptr [ebp-0x724],cx
	test eax,eax
	je Block231

 Block229:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block231

 Block230:
	lea edx,[ebp-0x724]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block231:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x168D
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x544]
	mov byte ptr [ebp-4],0x67
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x68
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1DC],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x544],di
	jne Block234

 Block232:
	xor eax,eax
	mov word ptr [ebp-0x544],ax
	mov eax,dword ptr [ebp-0x53C]
	test eax,eax
	je Block235

 Block233:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block235

 Block234:
	lea ecx,[ebp-0x544]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block235:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xCA3
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x824]
	mov byte ptr [ebp-4],0x69
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x6A
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1B4],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x824],di
	jne Block238

 Block236:
	mov eax,dword ptr [ebp-0x81C]
	xor ecx,ecx
	mov word ptr [ebp-0x824],cx
	test eax,eax
	je Block239

 Block237:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block239

 Block238:
	lea edx,[ebp-0x824]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block239:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xE2B
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x564]
	mov byte ptr [ebp-4],0x6B
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x6C
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1BC],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x564],di
	jne Block242

 Block240:
	xor eax,eax
	mov word ptr [ebp-0x564],ax
	mov eax,dword ptr [ebp-0x55C]
	test eax,eax
	je Block243

 Block241:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block243

 Block242:
	lea ecx,[ebp-0x564]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block243:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1ABD
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x744]
	mov byte ptr [ebp-4],0x6D
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x6E
	call get_int32
	add esp,8
	lea edx,[esi+0x138]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x140],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x744],di
	jne Block246

 Block244:
	mov eax,dword ptr [ebp-0x73C]
	xor ecx,ecx
	mov word ptr [ebp-0x744],cx
	test eax,eax
	je Block247

 Block245:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block247

 Block246:
	lea edx,[ebp-0x744]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block247:
	fld1
	sub esp,8
	fstp qword ptr [esp]
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1ACC
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x584]
	mov byte ptr [ebp-4],0x6F
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x70
	call get_double
	add esp,0xC
	sub esp,8
	lea ecx,[esi+0x148]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x158],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x584],di
	jne Block250

 Block248:
	xor eax,eax
	mov word ptr [ebp-0x584],ax
	mov eax,dword ptr [ebp-0x57C]
	test eax,eax
	je Block251

 Block249:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block251

 Block250:
	lea ecx,[ebp-0x584]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block251:
	fld1
	sub esp,8
	fstp qword ptr [esp]
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x68D
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x8A4]
	mov byte ptr [ebp-4],0x71
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x72
	call get_double
	add esp,0xC
	sub esp,8
	lea ecx,[esi+0x160]
	fstp qword ptr [esp]
	call _ZtlSecureTearHelper<double>::call
	mov dword ptr [esi+0x170],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x8A4],di
	jne Block254

 Block252:
	mov eax,dword ptr [ebp-0x89C]
	xor ecx,ecx
	mov word ptr [ebp-0x8A4],cx
	test eax,eax
	je Block255

 Block253:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block255

 Block254:
	lea edx,[ebp-0x8A4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block255:
	push 0x64
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xD0C
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x5A4]
	mov byte ptr [ebp-4],0x73
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x74
	call get_int32
	add esp,8
	lea edx,[esi+0x174]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x17C],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x5A4],di
	jne Block258

 Block256:
	xor eax,eax
	mov word ptr [ebp-0x5A4],ax
	mov eax,dword ptr [ebp-0x59C]
	test eax,eax
	je Block259

 Block257:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block259

 Block258:
	lea ecx,[ebp-0x5A4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block259:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xDFA
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x764]
	mov byte ptr [ebp-4],0x75
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x76
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1B8],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x764],di
	jne Block262

 Block260:
	mov eax,dword ptr [ebp-0x75C]
	xor ecx,ecx
	mov word ptr [ebp-0x764],cx
	test eax,eax
	je Block263

 Block261:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block263

 Block262:
	lea edx,[ebp-0x764]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block263:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xF12
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x264]
	mov byte ptr [ebp-4],0x77
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x78
	call get_int32
	add esp,8
	lea edx,[esi+0x180]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x188],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x264],di
	jne Block266

 Block264:
	xor eax,eax
	mov word ptr [ebp-0x264],ax
	mov eax,dword ptr [ebp-0x25C]
	test eax,eax
	je Block267

 Block265:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block267

 Block266:
	lea ecx,[ebp-0x264]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block267:
	push 0x64
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1304
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x274]
	mov byte ptr [ebp-4],0x79
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x7A
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x274],8
	mov edi,eax
	mov byte ptr [ebp-4],0x13
	jne Block270

 Block268:
	mov eax,dword ptr [ebp-0x26C]
	xor ecx,ecx
	mov word ptr [ebp-0x274],cx
	test eax,eax
	je Block271

 Block269:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block271

 Block270:
	lea edx,[ebp-0x274]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block271:
	push edi
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1305
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x294]
	mov byte ptr [ebp-4],0x7B
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x7C
	call get_int32
	add esp,8
	mov word ptr [esi+0x1C0],ax
	cmp word ptr [ebp-0x294],8
	mov byte ptr [ebp-4],0x13
	jne Block274

 Block272:
	xor eax,eax
	mov word ptr [ebp-0x294],ax
	mov eax,dword ptr [ebp-0x28C]
	test eax,eax
	je Block275

 Block273:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block275

 Block274:
	lea ecx,[ebp-0x294]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block275:
	push edi
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1306
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x2B4]
	mov byte ptr [ebp-4],0x7D
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x7E
	call get_int32
	add esp,8
	mov word ptr [esi+0x1C2],ax
	cmp word ptr [ebp-0x2B4],8
	mov byte ptr [ebp-4],0x13
	jne Block278

 Block276:
	mov eax,dword ptr [ebp-0x2AC]
	xor ecx,ecx
	mov word ptr [ebp-0x2B4],cx
	test eax,eax
	je Block279

 Block277:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block279

 Block278:
	lea edx,[ebp-0x2B4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block279:
	push edi
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1307
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x2D4]
	mov byte ptr [ebp-4],0x7F
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x80
	call get_int32
	add esp,8
	mov word ptr [esi+0x1C4],ax
	cmp word ptr [ebp-0x2D4],8
	mov byte ptr [ebp-4],0x13
	jne Block282

 Block280:
	xor eax,eax
	mov word ptr [ebp-0x2D4],ax
	mov eax,dword ptr [ebp-0x2CC]
	test eax,eax
	je Block283

 Block281:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block283

 Block282:
	lea ecx,[ebp-0x2D4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block283:
	push edi
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1308
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x2F4]
	mov byte ptr [ebp-4],0x81
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x82
	call get_int32
	add esp,8
	mov word ptr [esi+0x1C6],ax
	cmp word ptr [ebp-0x2F4],8
	mov byte ptr [ebp-4],0x13
	jne Block286

 Block284:
	mov eax,dword ptr [ebp-0x2EC]
	xor ecx,ecx
	mov word ptr [ebp-0x2F4],cx
	test eax,eax
	je Block287

 Block285:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block287

 Block286:
	lea edx,[ebp-0x2F4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block287:
	push edi
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1309
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x314]
	mov byte ptr [ebp-4],0x83
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x84
	call get_int32
	mov edi,8
	add esp,8
	mov word ptr [esi+0x1C8],ax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x314],di
	jne Block290

 Block288:
	xor eax,eax
	mov word ptr [ebp-0x314],ax
	mov eax,dword ptr [ebp-0x30C]
	test eax,eax
	je Block291

 Block289:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block291

 Block290:
	lea ecx,[ebp-0x314]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block291:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_EQUIPTRADEBLOCK
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x334]
	mov byte ptr [ebp-4],0x85
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x86
	call get_int32
	xor ecx,ecx
	add esp,8
	test eax,eax
	setne cl
	mov byte ptr [ebp-4],0x13
	mov dword ptr [esi+0x1CC],ecx
	cmp word ptr [ebp-0x334],di
	jne Block294

 Block292:
	mov eax,dword ptr [ebp-0x32C]
	xor edx,edx
	mov word ptr [ebp-0x334],dx
	test eax,eax
	je Block295

 Block293:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block295

 Block294:
	lea eax,[ebp-0x334]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block295:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_SPECIALID
	call _xbstr_t::_ctor_0
	lea ecx,[ebp-0x354]
	push ecx
	mov byte ptr [ebp-4],0x87
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x88
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1D0],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x354],di
	jne Block298

 Block296:
	mov eax,dword ptr [ebp-0x34C]
	xor edx,edx
	mov word ptr [ebp-0x354],dx
	test eax,eax
	je Block299

 Block297:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block299

 Block298:
	lea eax,[ebp-0x354]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block299:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1408
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x374]
	mov byte ptr [ebp-4],0x89
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x8A
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1D4],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x374],di
	jne Block302

 Block300:
	xor eax,eax
	mov word ptr [ebp-0x374],ax
	mov eax,dword ptr [ebp-0x36C]
	test eax,eax
	je Block303

 Block301:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block303

 Block302:
	lea ecx,[ebp-0x374]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block303:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_EPICITEM
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x394]
	mov byte ptr [ebp-4],0x8B
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x8C
	call get_int32
	xor ecx,ecx
	add esp,8
	test eax,eax
	setne cl
	mov byte ptr [ebp-4],0x13
	mov dword ptr [esi+0x214],ecx
	cmp word ptr [ebp-0x394],di
	jne Block306

 Block304:
	mov eax,dword ptr [ebp-0x38C]
	xor edx,edx
	mov word ptr [ebp-0x394],dx
	test eax,eax
	je Block307

 Block305:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block307

 Block306:
	lea eax,[ebp-0x394]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block307:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_ADDITION
	call _xbstr_t::_ctor_0
	lea ecx,[ebp-0x3B4]
	push ecx
	mov byte ptr [ebp-4],0x8D
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	mov bl,0x8E
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block310

 Block308:
	cmp eax,0x80004002
	je Block310

 Block309:
	push eax
	call _com_issue_error

 Block310:
	lea edx,[ebp-0x92C]
	push edx
	call CItemInfo::EQUIPITEM::ADDITION::Load
	add esp,8
	push eax
	lea ecx,[esi+0x258]
	mov byte ptr [ebp-4],0x8F
	call ZRef<CItemInfo::EQUIPITEM::ADDITION>::op_assign_copy
	lea ecx,[ebp-0x92C]
	mov byte ptr [ebp-4],bl
	call ZRef<CItemInfo::EQUIPITEM::ADDITION>::~ZRef<CItemInfo::EQUIPITEM::ADDITION>
	mov ebx,8
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x3B4],bx
	jne Block313

 Block311:
	xor eax,eax
	mov word ptr [ebp-0x3B4],ax
	mov eax,dword ptr [ebp-0x3AC]
	test eax,eax
	je Block314

 Block312:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block314

 Block313:
	lea ecx,[ebp-0x3B4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block314:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_DURABILITY
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [ebp+0x50]
	lea edx,[ebp-0x3D4]
	mov byte ptr [ebp-4],0x90
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x91
	call get_int32
	add esp,8
	mov dword ptr [esi+0x260],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x3D4],bx
	jne Block317

 Block315:
	xor eax,eax
	mov word ptr [ebp-0x3D4],ax
	mov eax,dword ptr [ebp-0x3CC]
	test eax,eax
	je Block318

 Block316:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block318

 Block317:
	lea ecx,[ebp-0x3D4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block318:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_GRADE
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x254]
	mov byte ptr [ebp-4],0x92
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x93
	call get_int32
	add esp,8
	mov byte ptr [esi+0x198],al
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x254],bx
	jne Block321

 Block319:
	xor eax,eax
	mov word ptr [ebp-0x254],ax
	mov eax,dword ptr [ebp-0x24C]
	test eax,eax
	je Block322

 Block320:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block322

 Block321:
	lea ecx,[ebp-0x254]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block322:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_SETITEMID
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x3F4]
	mov byte ptr [ebp-4],0x94
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x95
	call get_int32
	add esp,8
	mov dword ptr [esi+0x218],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x3F4],bx
	jne Block325

 Block323:
	xor eax,eax
	mov word ptr [ebp-0x3F4],ax
	mov eax,dword ptr [ebp-0x3EC]
	test eax,eax
	je Block326

 Block324:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block326

 Block325:
	lea ecx,[ebp-0x3F4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block326:
	lea edx,[esi+0x18C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	push 0x64
	mov dword ptr [esi+0x194],eax
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x153B
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x414]
	mov byte ptr [ebp-4],0x96
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x97
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1E4],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x414],bx
	jne Block329

 Block327:
	mov eax,dword ptr [ebp-0x40C]
	xor ecx,ecx
	mov word ptr [ebp-0x414],cx
	test eax,eax
	je Block330

 Block328:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block330

 Block329:
	lea edx,[ebp-0x414]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block330:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x153C
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x434]
	mov byte ptr [ebp-4],0x98
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x99
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1E8],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x434],bx
	jne Block333

 Block331:
	xor eax,eax
	mov word ptr [ebp-0x434],ax
	mov eax,dword ptr [ebp-0x42C]
	test eax,eax
	je Block334

 Block332:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block334

 Block333:
	lea ecx,[ebp-0x434]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block334:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x153D
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x454]
	mov byte ptr [ebp-4],0x9A
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x9B
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1EC],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x454],bx
	jne Block337

 Block335:
	mov eax,dword ptr [ebp-0x44C]
	xor ecx,ecx
	mov word ptr [ebp-0x454],cx
	test eax,eax
	je Block338

 Block336:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block338

 Block337:
	lea edx,[ebp-0x454]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block338:
	push 1
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x17C5
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x474]
	mov byte ptr [ebp-4],0x9C
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x9D
	call get_int32
	add esp,8
	mov dword ptr [esi+0x264],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x474],bx
	jne Block341

 Block339:
	xor eax,eax
	mov word ptr [ebp-0x474],ax
	mov eax,dword ptr [ebp-0x46C]
	test eax,eax
	je Block342

 Block340:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block342

 Block341:
	lea ecx,[ebp-0x474]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block342:
	push 2
	mov dword ptr [esi+0x268],0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x17D7
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x494]
	mov byte ptr [ebp-4],0x9E
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x9F
	call get_int32
	add esp,8
	mov dword ptr [esi+0x26C],eax
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x494],bx
	jne Block345

 Block343:
	mov eax,dword ptr [ebp-0x48C]
	xor ecx,ecx
	mov word ptr [ebp-0x494],cx
	test eax,eax
	je Block346

 Block344:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block346

 Block345:
	lea edx,[ebp-0x494]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block346:
	mov eax,dword ptr [ebp+0x78]
	mov ecx,dword ptr [ebp+0x2C]
	push eax
	call CItemInfo::GetItemCommonCRC
	mov ebx,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [ebx+0x20]
	mov edx,dword ptr [ebp+0x40]
	push ecx
	push edx
	mov edi,eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [ebp+0x44]
	mov esi,eax
	mov eax,dword ptr [ebx+0x38]
	add esp,8
	push eax
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [ebx+0x2C]
	add esp,8
	mov dword ptr [ebp+0x40],eax
	mov eax,dword ptr [ebp+0x38]
	push edx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push 0
	push 0
	push 0
	push 0
	lea ecx,[ebp-0x178]
	push 4
	push ecx
	mov dword ptr [ebp+0x44],eax
	mov dword ptr [ebp-0x178],esi
	call CCrc32::GetCrc32
	mov edx,dword ptr [ebp+0x40]
	add esp,0x18
	push 0
	push 0
	push 0
	push 0
	mov ebx,eax
	lea eax,[ebp-0x1A8]
	push 4
	push eax
	mov dword ptr [ebp-0x1A8],edx
	call CCrc32::GetCrc32
	mov ecx,dword ptr [ebp+0x44]
	add esp,0x18
	push 0
	push 0
	push 0
	push 0
	lea edx,[ebp-0x158]
	push 4
	push edx
	mov esi,eax
	mov dword ptr [ebp-0x158],ecx
	call CCrc32::GetCrc32
	or eax,esi
	or eax,ebx
	xor edi,eax
	mov eax,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [eax+0x44]
	add esp,0x18
	push ecx
	add eax,0x3C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,dword ptr [ebp+0x4C]
	mov edx,dword ptr [ebx+0x50]
	add esp,8
	mov esi,eax
	push edx
	lea eax,[ebx+0x48]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebp+0x40],eax
	mov eax,dword ptr [ebx+0x5C]
	add esp,8
	push eax
	lea eax,[ebx+0x54]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push 0
	push 0
	push 0
	push 0
	lea ecx,[ebp-0x188]
	push 4
	push ecx
	mov dword ptr [ebp+0x44],eax
	mov dword ptr [ebp-0x188],esi
	call CCrc32::GetCrc32
	mov edx,dword ptr [ebp+0x40]
	add esp,0x18
	push 0
	push 0
	push 0
	push 0
	mov ebx,eax
	lea eax,[ebp-0x160]
	push 4
	push eax
	mov dword ptr [ebp-0x160],edx
	call CCrc32::GetCrc32
	mov ecx,dword ptr [ebp+0x44]
	add esp,0x18
	push 0
	push 0
	push 0
	push 0
	lea edx,[ebp-0x1A0]
	push 4
	push edx
	mov esi,eax
	mov dword ptr [ebp-0x1A0],ecx
	call CCrc32::GetCrc32
	or eax,esi
	or eax,ebx
	xor edi,eax
	mov eax,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [eax+0x68]
	add esp,0x18
	push ecx
	add eax,0x60
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,dword ptr [ebp+0x4C]
	mov edx,dword ptr [ebx+0x74]
	add esp,8
	mov esi,eax
	push edx
	lea eax,[ebx+0x6C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebp+0x40],eax
	mov eax,dword ptr [ebx+0x8C]
	add esp,8
	push eax
	lea eax,[ebx+0x84]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push 0
	push 0
	push 0
	push 0
	lea ecx,[ebp-0x168]
	push 4
	push ecx
	mov dword ptr [ebp+0x44],eax
	mov dword ptr [ebp-0x168],esi
	call CCrc32::GetCrc32
	mov edx,dword ptr [ebp+0x40]
	add esp,0x18
	push 0
	mov ebx,eax
	mov dword ptr [ebp-0x190],edx
	push 0
	push 0
	push 0
	lea eax,[ebp-0x190]
	push 4
	push eax
	call CCrc32::GetCrc32
	mov ecx,dword ptr [ebp+0x44]
	add esp,0x18
	push 0
	push 0
	push 0
	push 0
	lea edx,[ebp-0x170]
	push 4
	push edx
	mov esi,eax
	mov dword ptr [ebp-0x170],ecx
	call CCrc32::GetCrc32
	or eax,esi
	or eax,ebx
	xor edi,eax
	mov eax,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [eax+0x158]
	add esp,0x18
	push ecx
	add eax,0x148
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [ebp+8]
	mov ebx,dword ptr [ebp+0x4C]
	mov edx,dword ptr [ebx+0x170]
	add esp,8
	push edx
	lea eax,[ebx+0x160]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	fstp qword ptr [ebp-0xE4]
	fld qword ptr [ebp+8]
	add esp,8
	push 0
	fstp qword ptr [ebp-0x934]
	push 0
	push 0
	push 0
	lea eax,[ebp-0x934]
	push 8
	push eax
	call CCrc32::GetCrc32
	fld qword ptr [ebp-0xE4]
	add esp,0x18
	fstp qword ptr [ebp-0x91C]
	push 0
	push 0
	push 0
	push 0
	lea ecx,[ebp-0x91C]
	push 8
	push ecx
	mov esi,eax
	call CCrc32::GetCrc32
	mov edx,dword ptr [ebx+0x140]
	or eax,esi
	add esp,0x18
	xor edi,eax
	push edx
	lea eax,[ebx+0x138]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov esi,eax
	mov eax,ebx
	mov ecx,dword ptr [eax+0x17C]
	add esp,8
	push ecx
	add eax,0x174
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push 0
	mov ebx,eax
	mov dword ptr [ebp-0x130],esi
	push 0
	push 0
	push 0
	lea edx,[ebp-0x130]
	push 4
	push edx
	call CCrc32::GetCrc32
	add esp,0x18
	push 0
	push 0
	push 0
	push 0
	mov esi,eax
	lea eax,[ebp-0x134]
	push 4
	push eax
	mov dword ptr [ebp-0x134],ebx
	call CCrc32::GetCrc32
	mov ebx,dword ptr [ebp+0x4C]
	or eax,esi
	xor ecx,ecx
	xor edi,eax
	add esp,0x18
	cmp dword ptr [ebx+0xC],ecx
	push 0
	setne cl
	xor edx,edx
	cmp dword ptr [ebx+0x1A4],edx
	push 0
	setne dl
	push 0
	push 0
	push 4
	lea eax,[edx+ecx*2]
	xor ecx,ecx
	cmp dword ptr [ebx+0x1A8],ecx
	setne cl
	lea edx,[ecx+eax*2]
	xor eax,eax
	cmp dword ptr [ebx+0x1AC],eax
	setne al
	lea ecx,[eax+edx*2]
	xor edx,edx
	cmp dword ptr [ebx+0x1B0],edx
	setne dl
	lea eax,[edx+ecx*2]
	xor ecx,ecx
	cmp dword ptr [ebx+0x1D8],ecx
	setne cl
	lea edx,[ecx+eax*2]
	xor eax,eax
	cmp dword ptr [ebx+0x1B4],eax
	setne al
	lea ecx,[eax+edx*2]
	xor edx,edx
	cmp dword ptr [ebx+0x1BC],edx
	setne dl
	lea eax,[edx+ecx*2]
	xor ecx,ecx
	cmp dword ptr [ebx+0x1D4],ecx
	setne cl
	xor edx,edx
	cmp dword ptr [ebx+0x214],edx
	setne dl
	lea eax,[ecx+eax*2]
	lea ecx,[ebp-0x104]
	push ecx
	lea eax,[edx+eax*2]
	mov dword ptr [ebp-0x104],eax
	call CCrc32::GetCrc32
	mov ecx,dword ptr [ebp+0x2C]
	add esp,0x18
	xor edi,eax
	lea edx,[ebp+0x40]
	push edx
	lea eax,[ebp+0x78]
	push eax
	add ecx,4
	mov dword ptr [ebp+0x40],edi
	call ZMap<long, unsigned long, long>::Insert
	xor esi,esi
	push esi
	push esi
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_BONUSEXP
	call _xbstr_t::_ctor_0
	lea ecx,[ebp-0x4B4]
	push ecx
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0xA0
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xA1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x20]
	mov dword ptr [ebp+0x20],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block349

 Block347:
	cmp eax,0x80004002
	je Block349

 Block348:
	push eax
	call _com_issue_error

 Block349:
	cmp word ptr [ebp-0x4B4],8
	mov byte ptr [ebp-4],0xA3
	jne Block352

 Block350:
	mov eax,dword ptr [ebp-0x4AC]
	xor edx,edx
	mov word ptr [ebp-0x4B4],dx
	cmp eax,esi
	je Block353

 Block351:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block353

 Block352:
	lea eax,[ebp-0x4B4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block353:
	mov ecx,dword ptr [ebp+0x20]
	cmp ecx,esi
	je Block399

 Block354:
	lea edx,[ebp-0x10C]
	push edx
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp-0x20]
	mov byte ptr [ebp-4],0xA4
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp-0x10C]
	mov byte ptr [ebp-4],0xA6
	cmp eax,esi
	je Block356

 Block355:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block356:
	lea eax,[ebp-0x6C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0xA7
	mov dword ptr [ebp-0x114],esi
	jmp Block358

 Block358:
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	jne Block360

 Block359:
	push 0x80004003
	call _com_issue_error

 Block360:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x114]
	push edx
	lea edx,[ebp-0x6C]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block393

 Block361:
	mov edx,dword ptr [ebp-0x64]
	push eax
	push eax
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x20]
	lea eax,[ebp-0x4D4]
	mov byte ptr [ebp-4],0xA8
	push eax
	mov byte ptr [ebp-4],0xA7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xA9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x30]
	mov dword ptr [ebp+0x30],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block364

 Block362:
	cmp eax,0x80004002
	je Block364

 Block363:
	push eax
	call _com_issue_error

 Block364:
	cmp word ptr [ebp-0x4D4],8
	mov byte ptr [ebp-4],0xAB
	jne Block367

 Block365:
	mov eax,dword ptr [ebp-0x4CC]
	xor ecx,ecx
	mov word ptr [ebp-0x4D4],cx
	test eax,eax
	je Block368

 Block366:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block368

 Block367:
	lea edx,[ebp-0x4D4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block368:
	mov esi,dword ptr [ebp+0x30]
	test esi,esi
	sete al
	test al,al
	je Block371

 Block369:
	mov byte ptr [ebp-4],0xA7
	test esi,esi
	je Block388

 Block370:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx
	jmp Block388

 Block371:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_TERMSTART
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0xAC
	test esi,esi
	jne Block373

 Block372:
	push 0x80004003
	call _com_issue_error

 Block373:
	lea edx,[ebp-0x4F4]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xAB
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xAD
	call get_int32
	mov ebx,8
	add esp,8
	mov edi,eax
	mov byte ptr [ebp-4],0xAB
	cmp word ptr [ebp-0x4F4],bx
	jne Block376

 Block374:
	xor eax,eax
	mov word ptr [ebp-0x4F4],ax
	mov eax,dword ptr [ebp-0x4EC]
	test eax,eax
	je Block377

 Block375:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block377

 Block376:
	lea ecx,[ebp-0x4F4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block377:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_INCEXPR
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x514]
	mov byte ptr [ebp-4],0xAE
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xAB
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xAF
	call get_int32
	add esp,8
	mov esi,eax
	mov byte ptr [ebp-4],0xAB
	cmp word ptr [ebp-0x514],bx
	jne Block380

 Block378:
	xor eax,eax
	mov word ptr [ebp-0x514],ax
	mov eax,dword ptr [ebp-0x50C]
	test eax,eax
	je Block381

 Block379:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block381

 Block380:
	lea ecx,[ebp-0x514]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block381:
	mov ebx,dword ptr [ebp+0x4C]
	add ebx,0x24C
	push 0xFFFFFFFF
	mov ecx,ebx
	call ZArray<ZPair<long, long>>::InsertBefore
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	mov dword ptr [eax],edi
	push offset _S_TERMEND
	mov dword ptr [eax+4],esi
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x30]
	lea edx,[ebp-0x534]
	mov byte ptr [ebp-4],0xB0
	push edx
	mov byte ptr [ebp-4],0xAB
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB1
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x534],8
	mov edi,eax
	mov byte ptr [ebp-4],0xAB
	jne Block384

 Block382:
	xor eax,eax
	mov word ptr [ebp-0x534],ax
	mov eax,dword ptr [ebp-0x52C]
	test eax,eax
	je Block385

 Block383:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block385

 Block384:
	lea ecx,[ebp-0x534]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block385:
	test edi,edi
	je Block387

 Block386:
	push 0xFFFFFFFF
	mov ecx,ebx
	xor esi,esi
	call ZArray<ZPair<long, long>>::InsertBefore
	mov dword ptr [eax],edi
	mov dword ptr [eax+4],esi

 Block387:
	mov eax,dword ptr [ebp+0x30]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0xA7
	call eax
	mov ebx,dword ptr [ebp+0x4C]

 Block388:
	cmp word ptr [ebp-0x6C],8
	jne Block391

 Block389:
	mov eax,dword ptr [ebp-0x64]
	xor ecx,ecx
	mov word ptr [ebp-0x6C],cx
	test eax,eax
	je Block358

 Block390:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block358

 Block391:
	lea edx,[ebp-0x6C]
	push edx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block358

 Block392:
	push eax
	call _com_issue_error

 Block393:
	mov byte ptr [ebp+0x40],0
	mov eax,dword ptr [ebp+0x40]
	push eax
	lea esi,[ebx+0x24C]
	push esi
	call ZSortHelper<ZPair<long, long>, PairSecondLess>::call_1
	add esp,8
	mov byte ptr [ebp+0x40],0
	mov ecx,dword ptr [ebp+0x40]
	push ecx
	push esi
	call ZSortHelper<ZPair<long, long>, PairFirstLess>::call_1
	add esp,8
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0xA6
	jne Block396

 Block394:
	mov eax,dword ptr [ebp-0x64]
	xor edx,edx
	mov word ptr [ebp-0x6C],dx
	test eax,eax
	je Block397

 Block395:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block397

 Block396:
	lea eax,[ebp-0x6C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block397:
	mov eax,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],0xA3
	test eax,eax
	je Block399

 Block398:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block399:
	xor esi,esi
	push esi
	push esi
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_POTIONDISCOUNT
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0xB2
	cmp ecx,esi
	jne Block401

 Block400:
	push 0x80004003
	call _com_issue_error

 Block401:
	lea eax,[ebp-0x554]
	push eax
	mov byte ptr [ebp-4],0xA3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xB3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x30]
	mov dword ptr [ebp+0x30],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block404

 Block402:
	cmp eax,0x80004002
	je Block404

 Block403:
	push eax
	call _com_issue_error

 Block404:
	cmp word ptr [ebp-0x554],8
	mov byte ptr [ebp-4],0xB5
	jne Block407

 Block405:
	mov eax,dword ptr [ebp-0x54C]
	xor ecx,ecx
	mov word ptr [ebp-0x554],cx
	cmp eax,esi
	je Block408

 Block406:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block408

 Block407:
	lea edx,[ebp-0x554]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block408:
	mov ecx,dword ptr [ebp+0x30]
	cmp ecx,esi
	je Block453

 Block409:
	lea eax,[ebp-0x11C]
	push eax
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp]
	mov byte ptr [ebp-4],0xB6
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp-0x11C]
	mov byte ptr [ebp-4],0xB8
	cmp eax,esi
	je Block411

 Block410:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block411:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0xB9
	mov dword ptr [ebp-0x16C],esi

 Block412:
	mov eax,dword ptr [ebp]
	test eax,eax
	jne Block414

 Block413:
	push 0x80004003
	call _com_issue_error

 Block414:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x16C]
	push edx
	lea edx,[ebp-0x4C]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block447

 Block415:
	mov edx,dword ptr [ebp-0x44]
	push eax
	push eax
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x30]
	lea eax,[ebp-0x574]
	mov byte ptr [ebp-4],0xBA
	push eax
	mov byte ptr [ebp-4],0xB9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xBB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x34]
	mov dword ptr [ebp+0x34],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block418

 Block416:
	cmp eax,0x80004002
	je Block418

 Block417:
	push eax
	call _com_issue_error

 Block418:
	cmp word ptr [ebp-0x574],8
	mov byte ptr [ebp-4],0xBD
	jne Block421

 Block419:
	mov eax,dword ptr [ebp-0x56C]
	xor ecx,ecx
	mov word ptr [ebp-0x574],cx
	test eax,eax
	je Block422

 Block420:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block422

 Block421:
	lea edx,[ebp-0x574]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block422:
	mov esi,dword ptr [ebp+0x34]
	test esi,esi
	sete al
	test al,al
	je Block425

 Block423:
	mov byte ptr [ebp-4],0xB9
	test esi,esi
	je Block442

 Block424:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx
	jmp Block442

 Block425:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_TERMSTART
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0xBE
	test esi,esi
	jne Block427

 Block426:
	push 0x80004003
	call _com_issue_error

 Block427:
	lea edx,[ebp-0x594]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xBD
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xBF
	call get_int32
	mov ebx,8
	add esp,8
	mov edi,eax
	mov byte ptr [ebp-4],0xBD
	cmp word ptr [ebp-0x594],bx
	jne Block430

 Block428:
	xor eax,eax
	mov word ptr [ebp-0x594],ax
	mov eax,dword ptr [ebp-0x58C]
	test eax,eax
	je Block431

 Block429:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block431

 Block430:
	lea ecx,[ebp-0x594]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block431:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_POTIONDISCR
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x5B4]
	mov byte ptr [ebp-4],0xC0
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xBD
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xC1
	call get_int32
	add esp,8
	mov esi,eax
	mov byte ptr [ebp-4],0xBD
	cmp word ptr [ebp-0x5B4],bx
	jne Block434

 Block432:
	xor eax,eax
	mov word ptr [ebp-0x5B4],ax
	mov eax,dword ptr [ebp-0x5AC]
	test eax,eax
	je Block435

 Block433:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block435

 Block434:
	lea ecx,[ebp-0x5B4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block435:
	mov ebx,dword ptr [ebp+0x4C]
	add ebx,0x250
	push 0xFFFFFFFF
	mov ecx,ebx
	call ZArray<ZPair<long, long>>::InsertBefore
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	mov dword ptr [eax],edi
	push offset _S_TERMEND
	mov dword ptr [eax+4],esi
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x34]
	lea edx,[ebp-0x5D4]
	mov byte ptr [ebp-4],0xC2
	push edx
	mov byte ptr [ebp-4],0xBD
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xC3
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x5D4],8
	mov edi,eax
	mov byte ptr [ebp-4],0xBD
	jne Block438

 Block436:
	xor eax,eax
	mov word ptr [ebp-0x5D4],ax
	mov eax,dword ptr [ebp-0x5CC]
	test eax,eax
	je Block439

 Block437:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block439

 Block438:
	lea ecx,[ebp-0x5D4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block439:
	test edi,edi
	je Block441

 Block440:
	push 0xFFFFFFFF
	mov ecx,ebx
	xor esi,esi
	call ZArray<ZPair<long, long>>::InsertBefore
	mov dword ptr [eax],edi
	mov dword ptr [eax+4],esi

 Block441:
	mov eax,dword ptr [ebp+0x34]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0xB9
	call eax
	mov ebx,dword ptr [ebp+0x4C]

 Block442:
	cmp word ptr [ebp-0x4C],8
	jne Block445

 Block443:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	test eax,eax
	je Block412

 Block444:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block412

 Block445:
	lea edx,[ebp-0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block412

 Block446:
	push eax
	call _com_issue_error

 Block447:
	mov byte ptr [ebp+0x40],0
	mov eax,dword ptr [ebp+0x40]
	push eax
	lea esi,[ebx+0x250]
	push esi
	call ZSortHelper<ZPair<long, long>, PairSecondLess>::call_1
	add esp,8
	mov byte ptr [ebp+0x40],0
	mov ecx,dword ptr [ebp+0x40]
	push ecx
	push esi
	call ZSortHelper<ZPair<long, long>, PairFirstLess>::call_1
	add esp,8
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],0xB8
	jne Block450

 Block448:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	test eax,eax
	je Block451

 Block449:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block451

 Block450:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block451:
	mov eax,dword ptr [ebp]
	mov byte ptr [ebp-4],0xB5
	test eax,eax
	je Block453

 Block452:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block453:
	mov esi,dword ptr [ebp+0x78]
	mov eax,0x68DB8BAD
	imul esi
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov dword ptr [ebx+0x1E0],0
	cmp eax,0xB5
	jne Block456

 Block454:
	mov ecx,dword ptr [ebp+0x2C]
	push esi
	call CItemInfo::GetEquipItem
	mov ecx,dword ptr [eax+0x98]
	push ecx
	add eax,0x90
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block456

 Block455:
	push offset ZException::THROW_INFO
	lea edx,[ebp-0x174]
	push edx
	mov dword ptr [ebp-0x174],0x80004005
	call _CxxThrowException

 Block456:
	mov eax,0x14F8B589
	imul esi
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x11
	jne Block493

 Block457:
	mov ecx,dword ptr [ebp+0x28]
	test ecx,ecx
	jne Block459

 Block458:
	push 0x80004003
	call _com_issue_error

 Block459:
	lea edx,[ebp-0x17C]
	push edx
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp-0x14]
	mov byte ptr [ebp-4],0xC4
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp-0x17C]
	mov byte ptr [ebp-4],0xC6
	test eax,eax
	je Block461

 Block460:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block461:
	lea eax,[ebp-0x5C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0xC7
	mov dword ptr [ebp-0x184],0

 Block462:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	jne Block464

 Block463:
	push 0x80004003
	call _com_issue_error

 Block464:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x184]
	push edx
	lea edx,[ebp-0x5C]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block484

 Block465:
	mov esi,dword ptr [ebp-0x54]
	call StringPool::GetInstance
	push 0x3D5
	lea ecx,[ebp-0x18C]
	push ecx
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push esi
	call __wcsicmp
	add esp,8
	test eax,eax
	mov eax,dword ptr [ebp-0x18C]
	sete bl
	test eax,eax
	je Block467

 Block466:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block467:
	test bl,bl
	jne Block478

 Block468:
	call StringPool::GetInstance
	push 0x4A2
	lea edx,[ebp-0x194]
	push edx
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push esi
	call __wcsicmp
	add esp,8
	test eax,eax
	mov eax,dword ptr [ebp-0x194]
	sete bl
	test eax,eax
	je Block470

 Block469:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block470:
	test bl,bl
	jne Block478

 Block471:
	push esi
	call __wtoi
	add esp,4
	mov ecx,1
	lea esp,[esp]

 Block472:
	cmp ecx,0x11
	jg Block483

 Block473:
	cmp dword ptr [ecx*4+_D_G_ANWEAPONTYPE],eax
	je Block475

 Block474:
	inc ecx
	jmp Block472

 Block475:
	test ecx,ecx
	je Block483

 Block476:
	mov esi,dword ptr [ebp+0x4C]
	mov eax,dword ptr [esi+0x1E0]
	mov edx,1
	shl edx,cl
	test edx,eax
	jne Block483

 Block477:
	or eax,edx
	mov dword ptr [esi+0x1E0],eax

 Block478:
	cmp word ptr [ebp-0x5C],8
	jne Block481

 Block479:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	je Block462

 Block480:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block462

 Block481:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block462

 Block482:
	push eax
	call _com_issue_error

 Block483:
	push offset ZException::THROW_INFO
	lea edx,[ebp-0x19C]
	push edx
	mov dword ptr [ebp-0x19C],0x80004005
	call _CxxThrowException

 Block484:
	mov ebx,dword ptr [ebp+0x4C]
	cmp dword ptr [ebx+0x1E0],0
	jne Block486

 Block485:
	push offset ZException::THROW_INFO
	lea eax,[ebp-0x1A4]
	push eax
	mov dword ptr [ebp-0x1A4],0x80004005
	call _CxxThrowException

 Block486:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0xC6
	jne Block489

 Block487:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	test eax,eax
	je Block490

 Block488:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block490

 Block489:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block490:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0xB5
	test eax,eax
	je Block492

 Block491:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block492:
	mov esi,dword ptr [ebp+0x78]

 Block493:
	push 0
	lea ecx,[ebx+0x1F0]
	call MY_UINT128::setValue_1
	mov eax,0x68DB8BAD
	imul esi
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xB4
	jne Block527

 Block494:
	mov eax,0x10624DD3
	imul esi
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	imul ecx,0x3E8
	mov edx,esi
	sub edx,ecx
	cmp edx,0x64
	jge Block527

 Block495:
	mov ecx,dword ptr [ebp+0x28]
	test ecx,ecx
	jne Block497

 Block496:
	push 0x80004003
	call _com_issue_error

 Block497:
	lea eax,[ebp-0x1AC]
	push eax
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp-0x1C]
	mov byte ptr [ebp-4],0xC8
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp-0x1AC]
	mov byte ptr [ebp-4],0xCA
	test eax,eax
	je Block499

 Block498:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block499:
	lea eax,[ebp-0x7C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0xCB
	mov dword ptr [ebp-0x108],0

 Block500:
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	jne Block502

 Block501:
	push 0x80004003
	call _com_issue_error

 Block502:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x108]
	push edx
	lea edx,[ebp-0x7C]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block518

 Block503:
	mov esi,dword ptr [ebp-0x74]
	call StringPool::GetInstance
	push 0x3D5
	lea ecx,[ebp-0x13C]
	push ecx
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push esi
	call __wcsicmp
	add esp,8
	test eax,eax
	mov eax,dword ptr [ebp-0x13C]
	sete bl
	test eax,eax
	je Block505

 Block504:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block505:
	test bl,bl
	jne Block512

 Block506:
	call StringPool::GetInstance
	push 0x4A2
	lea edx,[ebp-0x110]
	push edx
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push esi
	call __wcsicmp
	add esp,8
	test eax,eax
	mov eax,dword ptr [ebp-0x110]
	sete bl
	test eax,eax
	je Block508

 Block507:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block508:
	test bl,bl
	jne Block512

 Block509:
	push esi
	call __wtoi
	add esp,4
	lea ecx,[ebp-0x944]
	mov esi,eax
	call MY_UINT128::_ctor_default
	mov eax,0x10624DD3
	imul esi
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x3E8
	mov ecx,esi
	sub ecx,eax
	push 1
	push ecx
	lea ecx,[ebp-0x944]
	call MY_UINT128::setBitNumber
	mov eax,0x68DB8BAD
	imul esi
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x1F4
	jne Block517

 Block510:
	mov esi,dword ptr [ebp+0x4C]
	lea ecx,[ebp-0x944]
	push ecx
	lea edx,[ebp-0xAD4]
	add esi,0x1F0
	push edx
	mov ecx,esi
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_neg
	test al,al
	je Block517

 Block511:
	lea eax,[ebp-0x944]
	push eax
	mov ecx,esi
	call MY_UINT128::operator|=

 Block512:
	cmp word ptr [ebp-0x7C],8
	jne Block515

 Block513:
	mov eax,dword ptr [ebp-0x74]
	xor ecx,ecx
	mov word ptr [ebp-0x7C],cx
	test eax,eax
	je Block500

 Block514:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block500

 Block515:
	lea edx,[ebp-0x7C]
	push edx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block500

 Block516:
	push eax
	call _com_issue_error

 Block517:
	push offset ZException::THROW_INFO
	lea eax,[ebp-0x144]
	push eax
	mov dword ptr [ebp-0x144],0x80004005
	call _CxxThrowException

 Block518:
	mov ebx,dword ptr [ebp+0x4C]
	lea ecx,[ebx+0x1F0]
	call MY_UINT128::op_neg
	test al,al
	je Block520

 Block519:
	push offset ZException::THROW_INFO
	lea ecx,[ebp-0x100]
	push ecx
	mov dword ptr [ebp-0x100],0x80004005
	call _CxxThrowException

 Block520:
	cmp word ptr [ebp-0x7C],8
	mov byte ptr [ebp-4],0xCA
	jne Block523

 Block521:
	mov eax,dword ptr [ebp-0x74]
	xor edx,edx
	mov word ptr [ebp-0x7C],dx
	test eax,eax
	je Block524

 Block522:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block524

 Block523:
	lea eax,[ebp-0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block524:
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],0xB5
	test eax,eax
	je Block526

 Block525:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block526:
	mov esi,dword ptr [ebp+0x78]

 Block527:
	mov eax,0x68DB8BAD
	imul esi
	sar edx,0xC
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	mov dword ptr [ebx+0x200],0
	cmp edi,0xB5
	jne Block578

 Block528:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xC39
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0xCC
	test ecx,ecx
	jne Block530

 Block529:
	push 0x80004003
	call _com_issue_error

 Block530:
	lea edx,[ebp-0x5F4]
	push edx
	mov byte ptr [ebp-4],0xB5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xCD
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x5F4],8
	mov esi,eax
	mov byte ptr [ebp-4],0xB5
	jne Block533

 Block531:
	xor eax,eax
	mov word ptr [ebp-0x5F4],ax
	mov eax,dword ptr [ebp-0x5EC]
	test eax,eax
	je Block534

 Block532:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block534

 Block533:
	lea ecx,[ebp-0x5F4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block534:
	test esi,esi
	je Block536

 Block535:
	or dword ptr [ebx+0x200],1

 Block536:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xC38
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x50]
	lea eax,[ebp-0x614]
	mov byte ptr [ebp-4],0xCE
	push eax
	mov byte ptr [ebp-4],0xB5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xCF
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x614],8
	mov esi,eax
	mov byte ptr [ebp-4],0xB5
	jne Block539

 Block537:
	mov eax,dword ptr [ebp-0x60C]
	xor ecx,ecx
	mov word ptr [ebp-0x614],cx
	test eax,eax
	je Block540

 Block538:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block540

 Block539:
	lea edx,[ebp-0x614]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block540:
	test esi,esi
	je Block542

 Block541:
	or dword ptr [ebx+0x200],2

 Block542:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xC3A
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x50]
	lea edx,[ebp-0x634]
	mov byte ptr [ebp-4],0xD0
	push edx
	mov byte ptr [ebp-4],0xB5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD1
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x634],8
	mov esi,eax
	mov byte ptr [ebp-4],0xB5
	jne Block545

 Block543:
	xor eax,eax
	mov word ptr [ebp-0x634],ax
	mov eax,dword ptr [ebp-0x62C]
	test eax,eax
	je Block546

 Block544:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block546

 Block545:
	lea ecx,[ebp-0x634]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block546:
	test esi,esi
	je Block548

 Block547:
	or dword ptr [ebx+0x200],4

 Block548:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xC3B
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x50]
	lea eax,[ebp-0x654]
	mov byte ptr [ebp-4],0xD2
	push eax
	mov byte ptr [ebp-4],0xB5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD3
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x654],8
	mov esi,eax
	mov byte ptr [ebp-4],0xB5
	jne Block551

 Block549:
	mov eax,dword ptr [ebp-0x64C]
	xor ecx,ecx
	mov word ptr [ebp-0x654],cx
	test eax,eax
	je Block552

 Block550:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block552

 Block551:
	lea edx,[ebp-0x654]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block552:
	test esi,esi
	je Block554

 Block553:
	or dword ptr [ebx+0x200],0x20

 Block554:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xC3C
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x50]
	lea edx,[ebp-0x674]
	mov byte ptr [ebp-4],0xD4
	push edx
	mov byte ptr [ebp-4],0xB5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD5
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x674],8
	mov esi,eax
	mov byte ptr [ebp-4],0xB5
	jne Block557

 Block555:
	xor eax,eax
	mov word ptr [ebp-0x674],ax
	mov eax,dword ptr [ebp-0x66C]
	test eax,eax
	je Block558

 Block556:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block558

 Block557:
	lea ecx,[ebp-0x674]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block558:
	test esi,esi
	je Block560

 Block559:
	or dword ptr [ebx+0x200],0x40

 Block560:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xC3D
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x50]
	lea eax,[ebp-0x694]
	mov byte ptr [ebp-4],0xD6
	push eax
	mov byte ptr [ebp-4],0xB5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD7
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x694],8
	mov esi,eax
	mov byte ptr [ebp-4],0xB5
	jne Block563

 Block561:
	mov eax,dword ptr [ebp-0x68C]
	xor ecx,ecx
	mov word ptr [ebp-0x694],cx
	test eax,eax
	je Block564

 Block562:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block564

 Block563:
	lea edx,[ebp-0x694]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block564:
	test esi,esi
	je Block566

 Block565:
	or dword ptr [ebx+0x200],0x10

 Block566:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xC3F
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x50]
	lea edx,[ebp-0x6B4]
	mov byte ptr [ebp-4],0xD8
	push edx
	mov byte ptr [ebp-4],0xB5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD9
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x6B4],8
	mov esi,eax
	mov byte ptr [ebp-4],0xB5
	jne Block569

 Block567:
	xor eax,eax
	mov word ptr [ebp-0x6B4],ax
	mov eax,dword ptr [ebp-0x6AC]
	test eax,eax
	je Block570

 Block568:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block570

 Block569:
	lea ecx,[ebp-0x6B4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block570:
	test esi,esi
	je Block572

 Block571:
	or dword ptr [ebx+0x200],8

 Block572:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xC40
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x50]
	lea eax,[ebp-0x6D4]
	mov byte ptr [ebp-4],0xDA
	push eax
	mov byte ptr [ebp-4],0xB5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xDB
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x6D4],8
	mov esi,eax
	mov byte ptr [ebp-4],0xB5
	jne Block575

 Block573:
	mov eax,dword ptr [ebp-0x6CC]
	xor ecx,ecx
	mov word ptr [ebp-0x6D4],cx
	test eax,eax
	je Block576

 Block574:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block576

 Block575:
	lea edx,[ebp-0x6D4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block576:
	test esi,esi
	je Block578

 Block577:
	or dword ptr [ebx+0x200],0x80

 Block578:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x99E
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0xDC
	test esi,esi
	jne Block580

 Block579:
	push 0x80004003
	call _com_issue_error

 Block580:
	lea edx,[ebp-0x6F4]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xB5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xDD
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x204],eax
	cmp word ptr [ebp-0x6F4],8
	mov byte ptr [ebp-4],0xB5
	jne Block583

 Block581:
	xor eax,eax
	mov word ptr [ebp-0x6F4],ax
	mov eax,dword ptr [ebp-0x6EC]
	test eax,eax
	je Block584

 Block582:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block584

 Block583:
	lea ecx,[ebp-0x6F4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block584:
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x99D
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x714]
	mov byte ptr [ebp-4],0xDE
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xB5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xDF
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x208],eax
	cmp word ptr [ebp-0x714],8
	mov byte ptr [ebp-4],0xB5
	jne Block587

 Block585:
	mov eax,dword ptr [ebp-0x70C]
	xor ecx,ecx
	mov word ptr [ebp-0x714],cx
	test eax,eax
	je Block588

 Block586:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block588

 Block587:
	lea edx,[ebp-0x714]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block588:
	lea ecx,[ebx+0x254]
	call ZArray<long>::RemoveAll
	cmp edi,0xBF
	jne Block619

 Block589:
	mov ecx,dword ptr [ebp+0x28]
	test ecx,ecx
	jne Block591

 Block590:
	push 0x80004003
	call _com_issue_error

 Block591:
	lea eax,[ebp-0x14C]
	push eax
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp-0x24]
	mov byte ptr [ebp-4],0xE0
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp-0x14C]
	mov byte ptr [ebp-4],0xE2
	test eax,eax
	je Block593

 Block592:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block593:
	lea eax,[ebp-0x9C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0xE3
	mov dword ptr [ebp-0x120],0

 Block594:
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	jne Block596

 Block595:
	push 0x80004003
	call _com_issue_error

 Block596:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x120]
	push edx
	lea edx,[ebp-0x9C]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block609

 Block597:
	mov esi,dword ptr [ebp-0x94]
	call StringPool::GetInstance
	push 0x3D5
	lea ecx,[ebp-0x154]
	push ecx
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push esi
	call __wcsicmp
	add esp,8
	test eax,eax
	mov eax,dword ptr [ebp-0x154]
	sete bl
	test eax,eax
	je Block599

 Block598:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block599:
	test bl,bl
	jne Block603

 Block600:
	push esi
	call __wtoi
	mov esi,eax
	mov eax,0x68DB8BAD
	imul esi
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,4
	cmp eax,0xBE
	jne Block608

 Block601:
	mov edi,dword ptr [ebp+0x4C]
	push esi
	mov ecx,edi
	call CItemInfo::EQUIPITEM::IsItemSuitedForTamingMob
	test eax,eax
	jne Block608

 Block602:
	push 0xFFFFFFFF
	lea ecx,[edi+0x254]
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],esi

 Block603:
	cmp word ptr [ebp-0x9C],8
	jne Block606

 Block604:
	mov eax,dword ptr [ebp-0x94]
	xor ecx,ecx
	mov word ptr [ebp-0x9C],cx
	test eax,eax
	je Block594

 Block605:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block594

 Block606:
	lea edx,[ebp-0x9C]
	push edx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block594

 Block607:
	push eax
	call _com_issue_error

 Block608:
	push offset ZException::THROW_INFO
	lea eax,[ebp-0x12C]
	push eax
	mov dword ptr [ebp-0x12C],0x80004005
	call _CxxThrowException

 Block609:
	mov ebx,dword ptr [ebp+0x4C]
	cmp dword ptr [ebx+0x254],0
	je Block611

 Block610:
	mov ecx,dword ptr [ebx+0x254]
	cmp dword ptr [ecx-4],0
	jne Block612

 Block611:
	push offset ZException::THROW_INFO
	lea edx,[ebp-0x15C]
	push edx
	mov dword ptr [ebp-0x15C],0x80004005
	call _CxxThrowException

 Block612:
	cmp word ptr [ebp-0x9C],8
	mov byte ptr [ebp-4],0xE2
	jne Block615

 Block613:
	xor eax,eax
	mov word ptr [ebp-0x9C],ax
	mov eax,dword ptr [ebp-0x94]
	test eax,eax
	je Block616

 Block614:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block616

 Block615:
	lea ecx,[ebp-0x9C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block616:
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],0xB5
	test eax,eax
	je Block618

 Block617:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block618:
	mov esi,dword ptr [ebp+0x50]

 Block619:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_LEVEL__2
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0xE4
	test esi,esi
	jne Block621

 Block620:
	push 0x80004003
	call _com_issue_error

 Block621:
	lea ecx,[ebp-0x734]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0xB5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xE5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x34]
	mov dword ptr [ebp+0x34],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block624

 Block622:
	cmp eax,0x80004002
	je Block624

 Block623:
	push eax
	call _com_issue_error

 Block624:
	cmp word ptr [ebp-0x734],8
	mov byte ptr [ebp-4],0xE7
	jne Block627

 Block625:
	mov eax,dword ptr [ebp-0x72C]
	xor edx,edx
	mov word ptr [ebp-0x734],dx
	test eax,eax
	je Block628

 Block626:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block628

 Block627:
	lea eax,[ebp-0x734]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block628:
	mov edi,dword ptr [ebp+0x34]
	test edi,edi
	je Block797

 Block629:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_INFO__1
	call _xbstr_t::_ctor_0
	lea ecx,[ebp-0x754]
	push ecx
	mov byte ptr [ebp-4],0xE8
	mov ecx,edi
	mov byte ptr [ebp-4],0xE7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xE9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0x44],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block632

 Block630:
	cmp eax,0x80004002
	je Block632

 Block631:
	push eax
	call _com_issue_error

 Block632:
	cmp word ptr [ebp-0x754],8
	mov byte ptr [ebp-4],0xEB
	jne Block635

 Block633:
	mov eax,dword ptr [ebp-0x74C]
	xor edx,edx
	mov word ptr [ebp-0x754],dx
	test eax,eax
	je Block636

 Block634:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block636

 Block635:
	lea eax,[ebp-0x754]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block636:
	mov ebx,dword ptr [ebp+0x44]
	test ebx,ebx
	je Block765

 Block637:
	mov esi,1
	mov dword ptr [ebp+0x38],esi

 Block638:
	mov dword ptr [ebp-0x2C],0
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp-0x2C]
	push edx
	push ebx
	call eax
	test eax,eax
	jge Block640

 Block639:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block640:
	cmp esi,dword ptr [ebp-0x2C]
	ja Block765

 Block641:
	mov eax,0x20
	call __alloca_probe_8
	mov dword ptr [ebp-0x10],esp
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push esi
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	lea ecx,[ebp-0x774]
	push ecx
	mov byte ptr [ebp-4],0xEC
	mov ecx,ebx
	mov byte ptr [ebp-4],0xEB
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xED
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp+0x5C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block644

 Block642:
	cmp eax,0x80004002
	je Block644

 Block643:
	push eax
	call _com_issue_error

 Block644:
	cmp word ptr [ebp-0x774],8
	mov byte ptr [ebp-4],0xEF
	jne Block647

 Block645:
	mov eax,dword ptr [ebp-0x76C]
	xor edx,edx
	mov word ptr [ebp-0x774],dx
	test eax,eax
	je Block648

 Block646:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block648

 Block647:
	lea eax,[ebp-0x774]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block648:
	mov esi,dword ptr [ebp+0x5C]
	xor ebx,ebx
	cmp esi,ebx
	sete al
	test al,al
	je Block651

 Block649:
	mov byte ptr [ebp-4],0xEB
	cmp esi,ebx
	je Block766

 Block650:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	jmp Block766

 Block651:
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x58],ebx
	call ZRef<CItemInfo::LevelInfo>::_Alloc
	push ebx
	mov byte ptr [ebp-4],0xF0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x683
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0xF1
	cmp esi,ebx
	jne Block653

 Block652:
	push 0x80004003
	call _com_issue_error

 Block653:
	lea edx,[ebp-0x794]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xF0
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xF2
	call get_int32
	mov ebx,dword ptr [ebp+0x58]
	add esp,8
	mov dword ptr [ebx],eax
	cmp word ptr [ebp-0x794],8
	mov byte ptr [ebp-4],0xF0
	jne Block656

 Block654:
	xor eax,eax
	mov word ptr [ebp-0x794],ax
	mov eax,dword ptr [ebp-0x78C]
	test eax,eax
	je Block657

 Block655:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block657

 Block656:
	lea ecx,[ebp-0x794]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block657:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_INCMHPMIN
	call _xbstr_t::_ctor_0
	mov esi,dword ptr [ebp+0x5C]
	lea edx,[ebp-0x7B4]
	mov byte ptr [ebp-4],0xF3
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xF0
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xF4
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x7B4],8
	mov edi,eax
	mov byte ptr [ebp-4],0xF0
	jne Block660

 Block658:
	xor eax,eax
	mov word ptr [ebp-0x7B4],ax
	mov eax,dword ptr [ebp-0x7AC]
	test eax,eax
	je Block661

 Block659:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block661

 Block660:
	lea ecx,[ebp-0x7B4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block661:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_INCMHPMAX
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x7D4]
	mov byte ptr [ebp-4],0xF5
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xF0
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xF6
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x7D4],8
	mov esi,eax
	mov byte ptr [ebp-4],0xF0
	jne Block664

 Block662:
	xor eax,eax
	mov word ptr [ebp-0x7D4],ax
	mov eax,dword ptr [ebp-0x7CC]
	test eax,eax
	je Block665

 Block663:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block665

 Block664:
	lea ecx,[ebp-0x7D4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block665:
	test esi,esi
	jl Block669

 Block666:
	test edi,edi
	jl Block669

 Block667:
	cmp esi,edi
	jl Block763

 Block668:
	lea ecx,[ebp+0x10]
	mov dword ptr [ebp+0x14],0
	call ZRef<CItemInfo::LevelInfo::RandomMHP>::_Alloc
	mov eax,dword ptr [ebp+0x14]
	mov dword ptr [eax+0xC],edi
	mov dword ptr [eax+0x10],esi
	mov dword ptr [ebp-0x1D0],eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	lea ecx,[ebx+4]
	mov byte ptr [ebp-4],0xF8
	call ZList<ZRef<CItemInfo::LevelInfo::RandomStat>>::AddTail_
	lea edx,[ebp-0x1D4]
	push edx
	mov ecx,eax
	call ZRef<CItemInfo::LevelInfo::RandomStat>::op_assign_copy
	lea ecx,[ebp-0x1D4]
	mov byte ptr [ebp-4],0xF7
	call ZRef<CItemInfo::LevelInfo::RandomStat>::~ZRef<CItemInfo::LevelInfo::RandomStat>
	lea ecx,[ebp+0x10]
	mov byte ptr [ebp-4],0xF0
	call ZRef<CItemInfo::LevelInfo::RandomMHP>::~ZRef<CItemInfo::LevelInfo::RandomMHP>
	jmp Block670

 Block669:
	cmp esi,edi
	jne Block763

 Block670:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_INCMMPMIN
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x5C]
	lea eax,[ebp-0x7F4]
	mov byte ptr [ebp-4],0xF9
	push eax
	mov byte ptr [ebp-4],0xF0
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xFA
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x7F4],8
	mov edi,eax
	mov byte ptr [ebp-4],0xF0
	jne Block673

 Block671:
	mov eax,dword ptr [ebp-0x7EC]
	xor ecx,ecx
	mov word ptr [ebp-0x7F4],cx
	test eax,eax
	je Block674

 Block672:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block674

 Block673:
	lea edx,[ebp-0x7F4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block674:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_INCMMPMAX
	call _xbstr_t::_ctor_0
	mov ebx,dword ptr [ebp+0x5C]
	lea eax,[ebp-0x814]
	mov byte ptr [ebp-4],0xFB
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0xF0
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xFC
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x814],8
	mov esi,eax
	mov byte ptr [ebp-4],0xF0
	jne Block677

 Block675:
	mov eax,dword ptr [ebp-0x80C]
	xor ecx,ecx
	mov word ptr [ebp-0x814],cx
	test eax,eax
	je Block678

 Block676:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block678

 Block677:
	lea edx,[ebp-0x814]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block678:
	test esi,esi
	jl Block682

 Block679:
	test edi,edi
	jl Block682

 Block680:
	cmp esi,edi
	jl Block762

 Block681:
	lea ecx,[ebp+0x3C]
	mov dword ptr [ebp+0x40],0
	call ZRef<CItemInfo::LevelInfo::RandomMMP>::_Alloc
	mov eax,dword ptr [ebp+0x40]
	mov dword ptr [eax+0xC],edi
	mov dword ptr [eax+0x10],esi
	mov dword ptr [ebp-0x1E8],eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x58]
	add ecx,4
	mov byte ptr [ebp-4],0xFE
	call ZList<ZRef<CItemInfo::LevelInfo::RandomStat>>::AddTail_
	lea ecx,[ebp-0x1EC]
	push ecx
	mov ecx,eax
	call ZRef<CItemInfo::LevelInfo::RandomStat>::op_assign_copy
	lea ecx,[ebp-0x1EC]
	mov byte ptr [ebp-4],0xFD
	call ZRef<CItemInfo::LevelInfo::RandomStat>::~ZRef<CItemInfo::LevelInfo::RandomStat>
	lea ecx,[ebp+0x3C]
	mov byte ptr [ebp-4],0xF0
	call ZRef<CItemInfo::LevelInfo::RandomMMP>::~ZRef<CItemInfo::LevelInfo::RandomMMP>
	jmp Block683

 Block682:
	cmp esi,edi
	jne Block762

 Block683:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_INCSTRMIN
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x834]
	mov byte ptr [ebp-4],0xFF
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0xF0
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x100
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x834],8
	mov esi,0xF0
	mov ebx,eax
	mov dword ptr [ebp-4],esi
	jne Block686

 Block684:
	xor eax,eax
	mov word ptr [ebp-0x834],ax
	mov eax,dword ptr [ebp-0x82C]
	test eax,eax
	je Block687

 Block685:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block687

 Block686:
	lea ecx,[ebp-0x834]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block687:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_INCSTRMAX
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [ebp+0x5C]
	lea edx,[ebp-0x854]
	mov dword ptr [ebp-4],0x101
	push edx
	mov ecx,edi
	mov dword ptr [ebp-4],esi
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x102
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x854],8
	mov esi,eax
	mov dword ptr [ebp-4],0xF0
	jne Block690

 Block688:
	xor eax,eax
	mov word ptr [ebp-0x854],ax
	mov eax,dword ptr [ebp-0x84C]
	test eax,eax
	je Block691

 Block689:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block691

 Block690:
	lea ecx,[ebp-0x854]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block691:
	test esi,esi
	jl Block695

 Block692:
	test ebx,ebx
	jl Block695

 Block693:
	cmp esi,ebx
	jl Block761

 Block694:
	lea ecx,[ebp+0x18]
	mov dword ptr [ebp+0x1C],0
	call ZRef<CItemInfo::LevelInfo::RandomSTR>::_Alloc
	mov eax,dword ptr [ebp+0x1C]
	mov dword ptr [eax+0xC],ebx
	mov dword ptr [eax+0x10],esi
	mov dword ptr [ebp-0x228],eax
	add eax,4
	push eax
	mov dword ptr [ebp-4],0x103
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x58]
	add ecx,4
	mov byte ptr [ebp-4],4
	call ZList<ZRef<CItemInfo::LevelInfo::RandomStat>>::AddTail_
	lea edx,[ebp-0x22C]
	push edx
	mov ecx,eax
	call ZRef<CItemInfo::LevelInfo::RandomStat>::op_assign_copy
	lea ecx,[ebp-0x22C]
	mov byte ptr [ebp-4],3
	call ZRef<CItemInfo::LevelInfo::RandomStat>::~ZRef<CItemInfo::LevelInfo::RandomStat>
	lea ecx,[ebp+0x18]
	mov dword ptr [ebp-4],0xF0
	call ZRef<CItemInfo::LevelInfo::RandomSTR>::~ZRef<CItemInfo::LevelInfo::RandomSTR>
	jmp Block696

 Block695:
	cmp esi,ebx
	jne Block761

 Block696:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_INCDEXMIN
	call _xbstr_t::_ctor_0
	lea eax,[ebp-0xA04]
	mov dword ptr [ebp-4],0x105
	push eax
	mov ecx,edi
	mov dword ptr [ebp-4],0xF0
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x106
	call get_int32
	lea ecx,[ebp-0xA04]
	add esp,8
	mov esi,0xF0
	push ecx
	mov edi,eax
	mov dword ptr [ebp-4],esi
	call ZComAPI::ZComVariantClear
	add esp,4
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_INCDEXMAX
	call _xbstr_t::_ctor_0
	mov ebx,dword ptr [ebp+0x5C]
	lea edx,[ebp-0xA24]
	mov dword ptr [ebp-4],0x107
	push edx
	mov ecx,ebx
	mov dword ptr [ebp-4],esi
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x108
	call get_int32
	mov esi,eax
	lea eax,[ebp-0xA24]
	add esp,8
	push eax
	mov dword ptr [ebp-4],0xF0
	call ZComAPI::ZComVariantClear
	add esp,4
	test esi,esi
	jl Block700

 Block697:
	test edi,edi
	jl Block700

 Block698:
	cmp esi,edi
	jl Block760

 Block699:
	lea ecx,[ebp-0x128]
	mov dword ptr [ebp-0x124],0
	call ZRef<CItemInfo::LevelInfo::RandomDEX>::_Alloc
	mov eax,dword ptr [ebp-0x124]
	mov dword ptr [eax+0xC],edi
	mov dword ptr [eax+0x10],esi
	mov dword ptr [ebp-0x1F8],eax
	add eax,4
	push eax
	mov dword ptr [ebp-4],0x109
	call dword ptr [ZImports::_InterlockedIncrement]
	lea ecx,[ebp-0x1FC]
	push ecx
	mov ecx,dword ptr [ebp+0x58]
	add ecx,4
	mov byte ptr [ebp-4],0xA
	call ZList<ZRef<CItemInfo::LevelInfo::RandomStat>>::Insert
	lea ecx,[ebp-0x1FC]
	mov byte ptr [ebp-4],9
	call ZRef<CItemInfo::LevelInfo::RandomStat>::~ZRef<CItemInfo::LevelInfo::RandomStat>
	mov esi,0xF0
	lea ecx,[ebp-0x128]
	mov dword ptr [ebp-4],esi
	call ZRef<CItemInfo::LevelInfo::RandomDEX>::~ZRef<CItemInfo::LevelInfo::RandomDEX>
	jmp Block702

 Block700:
	cmp esi,edi
	jne Block760

 Block701:
	mov esi,0xF0

 Block702:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_INCINTMIN
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x984]
	mov dword ptr [ebp-4],0x10B
	push edx
	mov ecx,ebx
	mov dword ptr [ebp-4],esi
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x10C
	call get_int32
	add esp,8
	lea ecx,[ebp-0x984]
	mov edi,eax
	mov dword ptr [ebp-4],esi
	call Ztl_variant_t::~Ztl_variant_t
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_INCINTMAX
	call _xbstr_t::_ctor_0
	lea eax,[ebp-0xA84]
	mov dword ptr [ebp-4],0x10D
	push eax
	mov ecx,ebx
	mov dword ptr [ebp-4],esi
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x10E
	call get_int32
	add esp,8
	lea ecx,[ebp-0xA84]
	mov esi,eax
	mov dword ptr [ebp-4],0xF0
	call Ztl_variant_t::~Ztl_variant_t
	test esi,esi
	jl Block706

 Block703:
	test edi,edi
	jl Block706

 Block704:
	cmp esi,edi
	jl Block762

 Block705:
	lea ecx,[ebp+0x63]
	push ecx
	lea ecx,[ebp-0xD4]
	call ZRef<CItemInfo::LevelInfo::RandomINT>::_ctor_alloc
	mov edx,dword ptr [ebp-0xD0]
	mov dword ptr [edx+0xC],edi
	mov eax,dword ptr [ebp-0xD0]
	mov dword ptr [eax+0x10],esi
	mov ecx,dword ptr [ebp-0xD0]
	push 1
	push ecx
	lea ecx,[ebp-0x21C]
	mov dword ptr [ebp-4],0x10F
	call ZRef<CItemInfo::LevelInfo::RandomStat>::_ctor_zero
	mov ecx,dword ptr [ebp+0x58]
	lea edx,[ebp-0x21C]
	push edx
	add ecx,4
	mov byte ptr [ebp-4],0x10
	call ZList<ZRef<CItemInfo::LevelInfo::RandomStat>>::Insert
	lea ecx,[ebp-0x21C]
	mov byte ptr [ebp-4],0xF
	call ZRef<CItemInfo::LevelInfo::RandomStat>::~ZRef<CItemInfo::LevelInfo::RandomStat>
	mov esi,0xF0
	lea ecx,[ebp-0xD4]
	mov dword ptr [ebp-4],esi
	call ZRef<CItemInfo::LevelInfo::RandomINT>::~ZRef<CItemInfo::LevelInfo::RandomINT>
	jmp Block708

 Block706:
	cmp esi,edi
	jne Block762

 Block707:
	mov esi,0xF0

 Block708:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_INCLUKMIN
	call _xbstr_t::_ctor_0
	lea eax,[ebp-0x9A4]
	mov dword ptr [ebp-4],0x111
	push eax
	mov ecx,ebx
	mov dword ptr [ebp-4],esi
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x112
	call get_int32
	add esp,8
	lea ecx,[ebp-0x9A4]
	mov edi,eax
	mov dword ptr [ebp-4],esi
	call Ztl_variant_t::~Ztl_variant_t
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_INCLUKMAX
	call _xbstr_t::_ctor_0
	lea ecx,[ebp-0xA44]
	push ecx
	mov dword ptr [ebp-4],0x113
	mov ecx,ebx
	mov dword ptr [ebp-4],esi
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x114
	call get_int32
	mov ebx,0xF0
	add esp,8
	lea ecx,[ebp-0xA44]
	mov esi,eax
	mov dword ptr [ebp-4],ebx
	call Ztl_variant_t::~Ztl_variant_t
	test esi,esi
	jl Block712

 Block709:
	test edi,edi
	jl Block712

 Block710:
	cmp esi,edi
	jl Block759

 Block711:
	lea edx,[ebp+0x63]
	push edx
	lea ecx,[ebp-0xC4]
	call ZRef<CItemInfo::LevelInfo::RandomLUK>::_ctor_alloc
	mov eax,dword ptr [ebp-0xC0]
	mov dword ptr [eax+0xC],edi
	mov ecx,dword ptr [ebp-0xC0]
	mov dword ptr [ecx+0x10],esi
	mov edx,dword ptr [ebp-0xC0]
	push 1
	push edx
	lea ecx,[ebp-0x1DC]
	mov dword ptr [ebp-4],0x115
	call ZRef<CItemInfo::LevelInfo::RandomStat>::_ctor_zero
	mov ecx,dword ptr [ebp+0x58]
	lea eax,[ebp-0x1DC]
	push eax
	add ecx,4
	mov byte ptr [ebp-4],0x16
	call ZList<ZRef<CItemInfo::LevelInfo::RandomStat>>::Insert
	lea ecx,[ebp-0x1DC]
	mov byte ptr [ebp-4],0x15
	call ZRef<CItemInfo::LevelInfo::RandomStat>::~ZRef<CItemInfo::LevelInfo::RandomStat>
	lea ecx,[ebp-0xC4]
	mov dword ptr [ebp-4],ebx
	call ZRef<CItemInfo::LevelInfo::RandomLUK>::~ZRef<CItemInfo::LevelInfo::RandomLUK>
	jmp Block713

 Block712:
	cmp esi,edi
	jne Block759

 Block713:
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push offset _S_INCPADMIN
	call Ztl_bstr_t::_ctor_1
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp-4],0x117
	call _x_com_ptr<IWzProperty>::op_arrow
	lea ecx,[ebp-0x9C4]
	push ecx
	mov ecx,eax
	mov dword ptr [ebp-4],ebx
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x118
	call get_int32
	add esp,8
	lea ecx,[ebp-0x9C4]
	mov edi,eax
	mov dword ptr [ebp-4],ebx
	call Ztl_variant_t::~Ztl_variant_t
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push offset _S_INCPADMAX
	call Ztl_bstr_t::_ctor_1
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp-4],0x119
	call _x_com_ptr<IWzProperty>::op_arrow
	lea edx,[ebp-0xAC4]
	push edx
	mov ecx,eax
	mov dword ptr [ebp-4],ebx
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x11A
	call get_int32
	add esp,8
	lea ecx,[ebp-0xAC4]
	mov esi,eax
	mov dword ptr [ebp-4],ebx
	call Ztl_variant_t::~Ztl_variant_t
	test esi,esi
	jl Block717

 Block714:
	test edi,edi
	jl Block717

 Block715:
	cmp esi,edi
	jl Block759

 Block716:
	lea eax,[ebp+0x63]
	push eax
	lea ecx,[ebp-0xA4]
	call ZRef<CItemInfo::LevelInfo::RandomPAD>::_ctor_alloc
	mov ecx,dword ptr [ebp-0xA0]
	mov dword ptr [ecx+0xC],edi
	mov edx,dword ptr [ebp-0xA0]
	mov dword ptr [edx+0x10],esi
	mov eax,dword ptr [ebp-0xA0]
	push 1
	push eax
	lea ecx,[ebp-0x1E4]
	mov dword ptr [ebp-4],0x11B
	call ZRef<CItemInfo::LevelInfo::RandomStat>::_ctor_zero
	lea ecx,[ebp-0x1E4]
	push ecx
	mov ecx,dword ptr [ebp+0x58]
	add ecx,4
	mov byte ptr [ebp-4],0x1C
	call ZList<ZRef<CItemInfo::LevelInfo::RandomStat>>::Insert
	lea ecx,[ebp-0x1E4]
	mov byte ptr [ebp-4],0x1B
	call ZRef<CItemInfo::LevelInfo::RandomStat>::~ZRef<CItemInfo::LevelInfo::RandomStat>
	lea ecx,[ebp-0xA4]
	mov dword ptr [ebp-4],ebx
	call ZRef<CItemInfo::LevelInfo::RandomPAD>::~ZRef<CItemInfo::LevelInfo::RandomPAD>
	jmp Block718

 Block717:
	cmp esi,edi
	jne Block759

 Block718:
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push offset _S_INCPDDMIN
	call Ztl_bstr_t::_ctor_1
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp-4],0x11D
	call _x_com_ptr<IWzProperty>::op_arrow
	lea edx,[ebp-0x9E4]
	push edx
	mov ecx,eax
	mov dword ptr [ebp-4],ebx
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x11E
	call get_int32
	add esp,8
	lea ecx,[ebp-0x9E4]
	mov edi,eax
	mov dword ptr [ebp-4],ebx
	call Ztl_variant_t::~Ztl_variant_t
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push offset _S_INCPDDMAX
	call Ztl_bstr_t::_ctor_1
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp-4],0x11F
	call _x_com_ptr<IWzProperty>::op_arrow
	lea ecx,[ebp-0xA64]
	push ecx
	mov ecx,eax
	mov dword ptr [ebp-4],ebx
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x120
	call get_int32
	add esp,8
	lea ecx,[ebp-0xA64]
	mov esi,eax
	mov dword ptr [ebp-4],ebx
	call Ztl_variant_t::~Ztl_variant_t
	test esi,esi
	jl Block722

 Block719:
	test edi,edi
	jl Block722

 Block720:
	cmp esi,edi
	jl Block759

 Block721:
	lea edx,[ebp+0x63]
	push edx
	lea ecx,[ebp-0xAC]
	call ZRef<CItemInfo::LevelInfo::RandomPDD>::_ctor_alloc
	mov eax,dword ptr [ebp-0xA8]
	mov dword ptr [eax+0xC],edi
	mov ecx,dword ptr [ebp-0xA8]
	mov dword ptr [ecx+0x10],esi
	mov edx,dword ptr [ebp-0xA8]
	push 1
	push edx
	lea ecx,[ebp-0x1F4]
	mov dword ptr [ebp-4],0x121
	call ZRef<CItemInfo::LevelInfo::RandomStat>::_ctor_zero
	mov ecx,dword ptr [ebp+0x58]
	lea eax,[ebp-0x1F4]
	push eax
	add ecx,4
	mov byte ptr [ebp-4],0x22
	call ZList<ZRef<CItemInfo::LevelInfo::RandomStat>>::Insert
	lea ecx,[ebp-0x1F4]
	mov byte ptr [ebp-4],0x21
	call ZRef<CItemInfo::LevelInfo::RandomStat>::~ZRef<CItemInfo::LevelInfo::RandomStat>
	lea ecx,[ebp-0xAC]
	mov dword ptr [ebp-4],ebx
	call ZRef<CItemInfo::LevelInfo::RandomPDD>::~ZRef<CItemInfo::LevelInfo::RandomPDD>
	jmp Block723

 Block722:
	cmp esi,edi
	jne Block759

 Block723:
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push offset _S_INCMADMIN
	call Ztl_bstr_t::_ctor_1
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp-4],0x123
	call _x_com_ptr<IWzProperty>::op_arrow
	lea ecx,[ebp-0x954]
	push ecx
	mov ecx,eax
	mov dword ptr [ebp-4],ebx
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x124
	call get_int32
	add esp,8
	lea ecx,[ebp-0x954]
	mov edi,eax
	mov dword ptr [ebp-4],ebx
	call Ztl_variant_t::~Ztl_variant_t
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push offset _S_INCMADMAX
	call Ztl_bstr_t::_ctor_1
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp-4],0x125
	call _x_com_ptr<IWzProperty>::op_arrow
	lea edx,[ebp-0xAA4]
	push edx
	mov ecx,eax
	mov dword ptr [ebp-4],ebx
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x126
	call get_int32
	add esp,8
	lea ecx,[ebp-0xAA4]
	mov esi,eax
	mov dword ptr [ebp-4],ebx
	call Ztl_variant_t::~Ztl_variant_t
	test esi,esi
	jl Block727

 Block724:
	test edi,edi
	jl Block727

 Block725:
	cmp esi,edi
	jl Block759

 Block726:
	lea eax,[ebp+0x63]
	push eax
	lea ecx,[ebp-0xBC]
	call ZRef<CItemInfo::LevelInfo::RandomMAD>::_ctor_alloc
	mov ecx,dword ptr [ebp-0xB8]
	mov dword ptr [ecx+0xC],edi
	mov edx,dword ptr [ebp-0xB8]
	mov dword ptr [edx+0x10],esi
	mov eax,dword ptr [ebp-0xB8]
	push 1
	push eax
	lea ecx,[ebp-0x204]
	mov dword ptr [ebp-4],0x127
	call ZRef<CItemInfo::LevelInfo::RandomStat>::_ctor_zero
	lea ecx,[ebp-0x204]
	push ecx
	mov ecx,dword ptr [ebp+0x58]
	add ecx,4
	mov byte ptr [ebp-4],0x28
	call ZList<ZRef<CItemInfo::LevelInfo::RandomStat>>::Insert
	lea ecx,[ebp-0x204]
	mov byte ptr [ebp-4],0x27
	call ZRef<CItemInfo::LevelInfo::RandomStat>::~ZRef<CItemInfo::LevelInfo::RandomStat>
	lea ecx,[ebp-0xBC]
	mov dword ptr [ebp-4],ebx
	call ZRef<CItemInfo::LevelInfo::RandomMAD>::~ZRef<CItemInfo::LevelInfo::RandomMAD>
	jmp Block728

 Block727:
	cmp esi,edi
	jne Block759

 Block728:
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push offset _S_INCMDDMIN
	call Ztl_bstr_t::_ctor_1
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp-4],0x129
	call _x_com_ptr<IWzProperty>::op_arrow
	lea edx,[ebp-0x964]
	push edx
	mov ecx,eax
	mov dword ptr [ebp-4],ebx
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x12A
	call get_int32
	add esp,8
	lea ecx,[ebp-0x964]
	mov edi,eax
	mov dword ptr [ebp-4],ebx
	call Ztl_variant_t::~Ztl_variant_t
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push offset _S_INCMDDMAX
	call Ztl_bstr_t::_ctor_1
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp-4],0x12B
	call _x_com_ptr<IWzProperty>::op_arrow
	lea ecx,[ebp-0x974]
	push ecx
	mov ecx,eax
	mov dword ptr [ebp-4],ebx
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x12C
	call get_int32
	add esp,8
	lea ecx,[ebp-0x974]
	mov esi,eax
	mov dword ptr [ebp-4],ebx
	call Ztl_variant_t::~Ztl_variant_t
	test esi,esi
	jl Block732

 Block729:
	test edi,edi
	jl Block732

 Block730:
	cmp esi,edi
	jl Block759

 Block731:
	lea edx,[ebp+0x63]
	push edx
	lea ecx,[ebp-0xCC]
	call ZRef<CItemInfo::LevelInfo::RandomMDD>::_ctor_alloc
	mov eax,dword ptr [ebp-0xC8]
	mov dword ptr [eax+0xC],edi
	mov ecx,dword ptr [ebp-0xC8]
	mov dword ptr [ecx+0x10],esi
	mov edx,dword ptr [ebp-0xC8]
	push 1
	push edx
	lea ecx,[ebp-0x214]
	mov dword ptr [ebp-4],0x12D
	call ZRef<CItemInfo::LevelInfo::RandomStat>::_ctor_zero
	mov ecx,dword ptr [ebp+0x58]
	lea eax,[ebp-0x214]
	push eax
	add ecx,4
	mov byte ptr [ebp-4],0x2E
	call ZList<ZRef<CItemInfo::LevelInfo::RandomStat>>::Insert
	lea ecx,[ebp-0x214]
	mov byte ptr [ebp-4],0x2D
	call ZRef<CItemInfo::LevelInfo::RandomStat>::~ZRef<CItemInfo::LevelInfo::RandomStat>
	lea ecx,[ebp-0xCC]
	mov dword ptr [ebp-4],ebx
	call ZRef<CItemInfo::LevelInfo::RandomMDD>::~ZRef<CItemInfo::LevelInfo::RandomMDD>
	jmp Block733

 Block732:
	cmp esi,edi
	jne Block759

 Block733:
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push offset _S_INCACCMIN
	call Ztl_bstr_t::_ctor_1
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp-4],0x12F
	call _x_com_ptr<IWzProperty>::op_arrow
	lea ecx,[ebp-0x994]
	push ecx
	mov ecx,eax
	mov dword ptr [ebp-4],ebx
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x130
	call get_int32
	add esp,8
	lea ecx,[ebp-0x994]
	mov edi,eax
	mov dword ptr [ebp-4],ebx
	call Ztl_variant_t::~Ztl_variant_t
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push offset _S_INCACCMAX
	call Ztl_bstr_t::_ctor_1
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp-4],0x131
	call _x_com_ptr<IWzProperty>::op_arrow
	lea edx,[ebp-0x9B4]
	push edx
	mov ecx,eax
	mov dword ptr [ebp-4],ebx
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x132
	call get_int32
	add esp,8
	lea ecx,[ebp-0x9B4]
	mov esi,eax
	mov dword ptr [ebp-4],ebx
	call Ztl_variant_t::~Ztl_variant_t
	test esi,esi
	jl Block737

 Block734:
	test edi,edi
	jl Block737

 Block735:
	cmp esi,edi
	jl Block759

 Block736:
	lea eax,[ebp+0x63]
	push eax
	lea ecx,[ebp-0xDC]
	call ZRef<CItemInfo::LevelInfo::RandomACC>::_ctor_alloc
	mov ecx,dword ptr [ebp-0xD8]
	mov dword ptr [ecx+0xC],edi
	mov edx,dword ptr [ebp-0xD8]
	mov dword ptr [edx+0x10],esi
	mov eax,dword ptr [ebp-0xD8]
	push 1
	push eax
	lea ecx,[ebp-0x224]
	mov dword ptr [ebp-4],0x133
	call ZRef<CItemInfo::LevelInfo::RandomStat>::_ctor_zero
	lea ecx,[ebp-0x224]
	push ecx
	mov ecx,dword ptr [ebp+0x58]
	add ecx,4
	mov byte ptr [ebp-4],0x34
	call ZList<ZRef<CItemInfo::LevelInfo::RandomStat>>::Insert
	lea ecx,[ebp-0x224]
	mov byte ptr [ebp-4],0x33
	call ZRef<CItemInfo::LevelInfo::RandomStat>::~ZRef<CItemInfo::LevelInfo::RandomStat>
	lea ecx,[ebp-0xDC]
	mov dword ptr [ebp-4],ebx
	call ZRef<CItemInfo::LevelInfo::RandomACC>::~ZRef<CItemInfo::LevelInfo::RandomACC>
	jmp Block738

 Block737:
	cmp esi,edi
	jne Block759

 Block738:
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push offset _S_INCEVAMIN
	call Ztl_bstr_t::_ctor_1
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp-4],0x135
	call _x_com_ptr<IWzProperty>::op_arrow
	lea edx,[ebp-0x9D4]
	push edx
	mov ecx,eax
	mov dword ptr [ebp-4],ebx
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x136
	call get_int32
	add esp,8
	lea ecx,[ebp-0x9D4]
	mov edi,eax
	mov dword ptr [ebp-4],ebx
	call Ztl_variant_t::~Ztl_variant_t
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push offset _S_INCEVAMAX
	call Ztl_bstr_t::_ctor_1
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp-4],0x137
	call _x_com_ptr<IWzProperty>::op_arrow
	lea ecx,[ebp-0x9F4]
	push ecx
	mov ecx,eax
	mov dword ptr [ebp-4],ebx
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x138
	call get_int32
	add esp,8
	lea ecx,[ebp-0x9F4]
	mov esi,eax
	mov dword ptr [ebp-4],ebx
	call Ztl_variant_t::~Ztl_variant_t
	test esi,esi
	jl Block742

 Block739:
	test edi,edi
	jl Block742

 Block740:
	cmp esi,edi
	jl Block759

 Block741:
	lea edx,[ebp+0x63]
	push edx
	lea ecx,[ebp-0xEC]
	call ZRef<CItemInfo::LevelInfo::RandomEVA>::_ctor_alloc
	mov eax,dword ptr [ebp-0xE8]
	mov dword ptr [eax+0xC],edi
	mov ecx,dword ptr [ebp-0xE8]
	mov dword ptr [ecx+0x10],esi
	mov edx,dword ptr [ebp-0xE8]
	push 1
	push edx
	lea ecx,[ebp-0x234]
	mov dword ptr [ebp-4],0x139
	call ZRef<CItemInfo::LevelInfo::RandomStat>::_ctor_zero
	mov ecx,dword ptr [ebp+0x58]
	lea eax,[ebp-0x234]
	push eax
	add ecx,4
	mov byte ptr [ebp-4],0x3A
	call ZList<ZRef<CItemInfo::LevelInfo::RandomStat>>::Insert
	lea ecx,[ebp-0x234]
	mov byte ptr [ebp-4],0x39
	call ZRef<CItemInfo::LevelInfo::RandomStat>::~ZRef<CItemInfo::LevelInfo::RandomStat>
	lea ecx,[ebp-0xEC]
	mov dword ptr [ebp-4],ebx
	call ZRef<CItemInfo::LevelInfo::RandomEVA>::~ZRef<CItemInfo::LevelInfo::RandomEVA>
	jmp Block743

 Block742:
	cmp esi,edi
	jne Block759

 Block743:
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push offset _S_INCCRAFTMIN
	call Ztl_bstr_t::_ctor_1
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp-4],0x13B
	call _x_com_ptr<IWzProperty>::op_arrow
	lea ecx,[ebp-0xA14]
	push ecx
	mov ecx,eax
	mov dword ptr [ebp-4],ebx
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x13C
	call get_int32
	add esp,8
	lea ecx,[ebp-0xA14]
	mov edi,eax
	mov dword ptr [ebp-4],ebx
	call Ztl_variant_t::~Ztl_variant_t
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push offset _S_INCCRAFTMAX
	call Ztl_bstr_t::_ctor_1
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp-4],0x13D
	call _x_com_ptr<IWzProperty>::op_arrow
	lea edx,[ebp-0xA34]
	push edx
	mov ecx,eax
	mov dword ptr [ebp-4],ebx
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x13E
	call get_int32
	add esp,8
	lea ecx,[ebp-0xA34]
	mov esi,eax
	mov dword ptr [ebp-4],ebx
	call Ztl_variant_t::~Ztl_variant_t
	test esi,esi
	jl Block747

 Block744:
	test edi,edi
	jl Block747

 Block745:
	cmp esi,edi
	jl Block759

 Block746:
	lea eax,[ebp+0x63]
	push eax
	lea ecx,[ebp-0xFC]
	call ZRef<CItemInfo::LevelInfo::RandomCraft>::_ctor_alloc
	mov ecx,dword ptr [ebp-0xF8]
	mov dword ptr [ecx+0xC],edi
	mov edx,dword ptr [ebp-0xF8]
	mov dword ptr [edx+0x10],esi
	mov eax,dword ptr [ebp-0xF8]
	push 1
	push eax
	lea ecx,[ebp-0x20C]
	mov dword ptr [ebp-4],0x13F
	call ZRef<CItemInfo::LevelInfo::RandomStat>::_ctor_zero
	lea ecx,[ebp-0x20C]
	push ecx
	mov ecx,dword ptr [ebp+0x58]
	add ecx,4
	mov byte ptr [ebp-4],0x40
	call ZList<ZRef<CItemInfo::LevelInfo::RandomStat>>::Insert
	lea ecx,[ebp-0x20C]
	mov byte ptr [ebp-4],0x3F
	call ZRef<CItemInfo::LevelInfo::RandomStat>::~ZRef<CItemInfo::LevelInfo::RandomStat>
	lea ecx,[ebp-0xFC]
	mov dword ptr [ebp-4],ebx
	call ZRef<CItemInfo::LevelInfo::RandomCraft>::~ZRef<CItemInfo::LevelInfo::RandomCraft>
	jmp Block748

 Block747:
	cmp esi,edi
	jne Block759

 Block748:
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push offset _S_INCSPEEDMIN
	call Ztl_bstr_t::_ctor_1
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp-4],0x141
	call _x_com_ptr<IWzProperty>::op_arrow
	lea edx,[ebp-0xA54]
	push edx
	mov ecx,eax
	mov dword ptr [ebp-4],ebx
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x142
	call get_int32
	add esp,8
	lea ecx,[ebp-0xA54]
	mov edi,eax
	mov dword ptr [ebp-4],ebx
	call Ztl_variant_t::~Ztl_variant_t
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push offset _S_INCSPEEDMAX
	call Ztl_bstr_t::_ctor_1
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp-4],0x143
	call _x_com_ptr<IWzProperty>::op_arrow
	lea ecx,[ebp-0xA74]
	push ecx
	mov ecx,eax
	mov dword ptr [ebp-4],ebx
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x144
	call get_int32
	add esp,8
	lea ecx,[ebp-0xA74]
	mov esi,eax
	mov dword ptr [ebp-4],ebx
	call Ztl_variant_t::~Ztl_variant_t
	test esi,esi
	jl Block752

 Block749:
	test edi,edi
	jl Block752

 Block750:
	cmp esi,edi
	jl Block759

 Block751:
	lea edx,[ebp+0x63]
	push edx
	lea ecx,[ebp-0xB4]
	call ZRef<CItemInfo::LevelInfo::RandomSpeed>::_ctor_alloc
	mov eax,dword ptr [ebp-0xB0]
	mov dword ptr [eax+0xC],edi
	mov ecx,dword ptr [ebp-0xB0]
	mov dword ptr [ecx+0x10],esi
	mov edx,dword ptr [ebp-0xB0]
	push 1
	push edx
	lea ecx,[ebp-0xE4]
	mov dword ptr [ebp-4],0x145
	call ZRef<CItemInfo::LevelInfo::RandomStat>::_ctor_zero
	mov ecx,dword ptr [ebp+0x58]
	lea eax,[ebp-0xE4]
	push eax
	add ecx,4
	mov byte ptr [ebp-4],0x46
	call ZList<ZRef<CItemInfo::LevelInfo::RandomStat>>::Insert
	lea ecx,[ebp-0xE4]
	mov byte ptr [ebp-4],0x45
	call ZRef<CItemInfo::LevelInfo::RandomStat>::~ZRef<CItemInfo::LevelInfo::RandomStat>
	lea ecx,[ebp-0xB4]
	mov dword ptr [ebp-4],ebx
	call ZRef<CItemInfo::LevelInfo::RandomSpeed>::~ZRef<CItemInfo::LevelInfo::RandomSpeed>
	jmp Block753

 Block752:
	cmp esi,edi
	jne Block759

 Block753:
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push offset _S_INCJUMPMIN
	call Ztl_bstr_t::_ctor_1
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp-4],0x147
	call _x_com_ptr<IWzProperty>::op_arrow
	lea ecx,[ebp-0xA94]
	push ecx
	mov ecx,eax
	mov dword ptr [ebp-4],ebx
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x148
	call get_int32
	add esp,8
	lea ecx,[ebp-0xA94]
	mov edi,eax
	mov dword ptr [ebp-4],ebx
	call Ztl_variant_t::~Ztl_variant_t
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push offset _S_INCJUMPMAX
	call Ztl_bstr_t::_ctor_1
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp-4],0x149
	call _x_com_ptr<IWzProperty>::op_arrow
	lea edx,[ebp-0xAB4]
	push edx
	mov ecx,eax
	mov dword ptr [ebp-4],ebx
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x14A
	call get_int32
	add esp,8
	lea ecx,[ebp-0xAB4]
	mov esi,eax
	mov dword ptr [ebp-4],ebx
	call Ztl_variant_t::~Ztl_variant_t
	test esi,esi
	jl Block757

 Block754:
	test edi,edi
	jl Block757

 Block755:
	cmp esi,edi
	jl Block759

 Block756:
	lea eax,[ebp+0x63]
	push eax
	lea ecx,[ebp-0xF4]
	call ZRef<CItemInfo::LevelInfo::RandomJump>::_ctor_alloc
	mov ecx,dword ptr [ebp-0xF0]
	mov dword ptr [ecx+0xC],edi
	mov edx,dword ptr [ebp-0xF0]
	mov dword ptr [edx+0x10],esi
	mov eax,dword ptr [ebp-0xF0]
	push 1
	push eax
	lea ecx,[ebp+8]
	mov dword ptr [ebp-4],0x14B
	call ZRef<CItemInfo::LevelInfo::RandomStat>::_ctor_zero
	lea ecx,[ebp+8]
	push ecx
	mov ecx,dword ptr [ebp+0x58]
	add ecx,4
	mov byte ptr [ebp-4],0x4C
	call ZList<ZRef<CItemInfo::LevelInfo::RandomStat>>::Insert
	lea ecx,[ebp+8]
	mov byte ptr [ebp-4],0x4B
	call ZRef<CItemInfo::LevelInfo::RandomStat>::~ZRef<CItemInfo::LevelInfo::RandomStat>
	lea ecx,[ebp-0xF4]
	mov dword ptr [ebp-4],ebx
	call ZRef<CItemInfo::LevelInfo::RandomJump>::~ZRef<CItemInfo::LevelInfo::RandomJump>
	jmp Block758

 Block757:
	cmp esi,edi
	jne Block759

 Block758:
	mov ecx,dword ptr [ebp+0x4C]
	push 0xFFFFFFFF
	lea edx,[ebp+0x54]
	push edx
	add ecx,0x210
	call ZArray<ZRef<CItemInfo::LevelInfo>>::Insert

 Block759:
	lea ecx,[ebp+0x54]
	mov byte ptr [ebp-4],0xEF
	call ZRef<CItemInfo::LevelInfo>::~ZRef<CItemInfo::LevelInfo>
	lea ecx,[ebp+0x5C]
	mov byte ptr [ebp-4],0xEB
	call _x_com_ptr<IWzProperty>::~_x_com_ptr<IWzProperty>
	inc dword ptr [ebp+0x38]
	mov ebx,dword ptr [ebp+0x44]
	mov edi,dword ptr [ebp+0x34]
	mov esi,dword ptr [ebp+0x38]
	jmp Block638

 Block760:
	lea ecx,[ebp+0x54]
	mov byte ptr [ebp-4],0xEF
	call ZRef<CItemInfo::LevelInfo>::~ZRef<CItemInfo::LevelInfo>
	mov edx,dword ptr [ebx]
	push ebx
	jmp Block764

 Block761:
	lea ecx,[ebp+0x54]
	mov byte ptr [ebp-4],0xEF
	call ZRef<CItemInfo::LevelInfo>::~ZRef<CItemInfo::LevelInfo>
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],0xEB
	call edx
	inc dword ptr [ebp+0x38]
	mov ebx,dword ptr [ebp+0x44]
	mov edi,dword ptr [ebp+0x34]
	mov esi,dword ptr [ebp+0x38]
	jmp Block638

 Block762:
	lea ecx,[ebp+0x54]
	mov byte ptr [ebp-4],0xEF
	call ZRef<CItemInfo::LevelInfo>::~ZRef<CItemInfo::LevelInfo>
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],0xEB
	call ecx
	inc dword ptr [ebp+0x38]
	mov ebx,dword ptr [ebp+0x44]
	mov edi,dword ptr [ebp+0x34]
	mov esi,dword ptr [ebp+0x38]
	jmp Block638

 Block763:
	lea ecx,[ebp+0x54]
	mov byte ptr [ebp-4],0xEF
	call ZRef<CItemInfo::LevelInfo>::~ZRef<CItemInfo::LevelInfo>
	mov eax,dword ptr [ebp+0x5C]
	mov edx,dword ptr [eax]
	push eax

 Block764:
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0xEB
	call eax
	inc dword ptr [ebp+0x38]
	mov ebx,dword ptr [ebp+0x44]
	mov edi,dword ptr [ebp+0x34]
	mov esi,dword ptr [ebp+0x38]
	jmp Block638

 Block765:
	xor ebx,ebx

 Block766:
	push ebx
	push ebx
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_CASE
	call _xbstr_t::_ctor_0
	mov dword ptr [ebp-4],0x14D
	cmp edi,ebx
	jne Block768

 Block767:
	push 0x80004003
	call _com_issue_error

 Block768:
	lea ecx,[ebp-0x874]
	push ecx
	mov ecx,edi
	mov dword ptr [ebp-4],0xEB
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],0x14E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x38]
	mov dword ptr [ebp+0x38],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block771

 Block769:
	cmp eax,0x80004002
	je Block771

 Block770:
	push eax
	call _com_issue_error

 Block771:
	cmp word ptr [ebp-0x874],8
	mov byte ptr [ebp-4],0x50
	jne Block774

 Block772:
	mov eax,dword ptr [ebp-0x86C]
	xor edx,edx
	mov word ptr [ebp-0x874],dx
	cmp eax,ebx
	je Block775

 Block773:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block775

 Block774:
	lea eax,[ebp-0x874]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block775:
	mov esi,dword ptr [ebp+0x38]
	cmp esi,ebx
	je Block792

 Block776:
	xor edi,edi
	mov dword ptr [ebp+0x5C],edi

 Block777:
	cmp esi,ebx
	jne Block779

 Block778:
	push 0x80004003
	call _com_issue_error

 Block779:
	mov dword ptr [ebp+4],ebx
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+4]
	push edx
	push esi
	call eax
	cmp eax,ebx
	jge Block781

 Block780:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block781:
	cmp edi,dword ptr [ebp+4]
	jae Block792

 Block782:
	mov eax,0x20
	call __alloca_probe_8
	mov dword ptr [ebp-0x10],esp
	mov eax,esp
	push ebx
	push ebx
	push 0xA
	push eax
	push edi
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	lea ecx,[ebp-0x894]
	push ecx
	mov byte ptr [ebp-4],0x51
	mov ecx,esi
	mov byte ptr [ebp-4],0x50
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x52
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x40]
	mov dword ptr [ebp+0x40],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block785

 Block783:
	cmp eax,0x80004002
	je Block785

 Block784:
	push eax
	call _com_issue_error

 Block785:
	cmp word ptr [ebp-0x894],8
	mov byte ptr [ebp-4],0x54
	jne Block788

 Block786:
	mov eax,dword ptr [ebp-0x88C]
	xor edx,edx
	mov word ptr [ebp-0x894],dx
	cmp eax,ebx
	je Block789

 Block787:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block789

 Block788:
	lea eax,[ebp-0x894]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block789:
	mov ebx,dword ptr [ebp+0x40]
	test ebx,ebx
	sete al
	test al,al
	je Block800

 Block790:
	mov byte ptr [ebp-4],0x50
	test ebx,ebx
	je Block792

 Block791:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block792:
	mov eax,dword ptr [ebp+0x38]
	mov dword ptr [ebp-4],0xEB
	test eax,eax
	je Block794

 Block793:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block794:
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0xE7
	test eax,eax
	je Block796

 Block795:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block796:
	mov ebx,dword ptr [ebp+0x4C]

 Block797:
	mov eax,0x68DB8BAD
	imul dword ptr [ebp+0x78]
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xBF
	jne Block890

 Block798:
	mov ecx,dword ptr [ebp+0x28]
	test ecx,ecx
	jne Block864

 Block799:
	push 0x80004003
	call _com_issue_error

 Block800:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x6CB
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x55
	test ebx,ebx
	jne Block802

 Block801:
	push 0x80004003
	call _com_issue_error

 Block802:
	lea edx,[ebp-0x8B4]
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x54
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x56
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x8B4],8
	mov edi,eax
	mov byte ptr [ebp-4],0x54
	jne Block805

 Block803:
	xor eax,eax
	mov word ptr [ebp-0x8B4],ax
	mov eax,dword ptr [ebp-0x8AC]
	test eax,eax
	je Block806

 Block804:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block806

 Block805:
	lea ecx,[ebp-0x8B4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block806:
	xor esi,esi

 Block807:
	cmp esi,edi
	jge Block809

 Block808:
	mov ecx,dword ptr [ebp+0x4C]
	push 0xFFFFFFFF
	add ecx,0x20C
	call ZArray<long>::InsertBefore
	mov edx,dword ptr [ebp+0x5C]
	mov dword ptr [eax],edx
	inc esi
	jmp Block807

 Block809:
	lea eax,[ebp-0x8C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	xor edi,edi
	mov byte ptr [ebp-4],0x57
	cmp ebx,edi
	jne Block811

 Block810:
	push 0x80004003
	call _com_issue_error

 Block811:
	lea ecx,[ebp-0x164]
	push ecx
	mov ecx,ebx
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp-0x18]
	mov byte ptr [ebp-4],0x58
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp-0x164]
	mov byte ptr [ebp-4],0x5A
	cmp eax,edi
	je Block813

 Block812:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block813:
	mov dword ptr [ebp-0x138],edi

 Block814:
	mov eax,dword ptr [ebp-0x18]
	cmp eax,edi
	jne Block816

 Block815:
	push 0x80004003
	call _com_issue_error

 Block816:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x138]
	push edx
	lea edx,[ebp-0x8C]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	cmp eax,edi
	jne Block857

 Block817:
	mov eax,dword ptr [ebp-0x84]
	push edi
	push edi
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	mov esi,eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x8D4]
	push ecx
	mov byte ptr [ebp-4],0x5B
	mov ecx,ebx
	mov byte ptr [ebp-4],0x5A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x5C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x1C]
	mov dword ptr [ebp+0x1C],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block820

 Block818:
	cmp eax,0x80004002
	je Block820

 Block819:
	push eax
	call _com_issue_error

 Block820:
	cmp word ptr [ebp-0x8D4],8
	mov byte ptr [ebp-4],0x5E
	jne Block823

 Block821:
	mov eax,dword ptr [ebp-0x8CC]
	xor edx,edx
	mov word ptr [ebp-0x8D4],dx
	cmp eax,edi
	je Block824

 Block822:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block824

 Block823:
	lea eax,[ebp-0x8D4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block824:
	push esi
	call __wtoi
	mov ecx,eax
	add esp,4
	mov dword ptr [ebp+0x64],ecx
	cmp ecx,edi
	jne Block827

 Block825:
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x5A
	cmp eax,edi
	je Block850

 Block826:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block850

 Block827:
	mov eax,dword ptr [ebp+0x4C]
	cmp dword ptr [eax+0x210],edi
	jne Block829

 Block828:
	xor eax,eax
	jmp Block830

 Block829:
	mov eax,dword ptr [eax+0x210]
	mov eax,dword ptr [eax-4]

 Block830:
	cmp ecx,eax
	ja Block855

 Block831:
	cmp ecx,edi
	jl Block855

 Block832:
	lea ecx,[ebp+0x10]
	mov dword ptr [ebp+0x14],edi
	call ZRef<CItemInfo::LevelInfo::Ability>::_Alloc
	mov byte ptr [ebp-4],0x5F
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x986
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x60
	test edi,edi
	jne Block834

 Block833:
	push 0x80004003
	call _com_issue_error

 Block834:
	lea edx,[ebp-0x8F4]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x5F
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x61
	jne Block836

 Block835:
	mov eax,dword ptr [eax+8]
	jmp Block837

 Block836:
	mov eax,offset _S___3

 Block837:
	mov esi,dword ptr [ebp+0x14]
	push 0xFFFFFFFF
	push eax
	mov ecx,esi
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x8F4],8
	mov byte ptr [ebp-4],0x5F
	jne Block840

 Block838:
	xor eax,eax
	mov word ptr [ebp-0x8F4],ax
	mov eax,dword ptr [ebp-0x8EC]
	test eax,eax
	je Block841

 Block839:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block841

 Block840:
	lea ecx,[ebp-0x8F4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block841:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block843

 Block842:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block843:
	mov ebx,dword ptr [ebp+0x2C]
	lea ecx,[ebp-0x924]
	push ecx
	mov ecx,ebx
	call CItemInfo::LoadRecovery
	push eax
	lea ecx,[esi+4]
	mov byte ptr [ebp-4],0x62
	call ZRef<CItemInfo::Recovery>::op_assign_copy
	lea ecx,[ebp-0x924]
	mov byte ptr [ebp-4],0x5F
	call ZRef<CItemInfo::Recovery>::~ZRef<CItemInfo::Recovery>
	lea edx,[esi+0xC]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block845

 Block844:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block845:
	mov ecx,ebx
	call CItemInfo::LoadItemSkill
	add esi,0x20
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block847

 Block846:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block847:
	mov ecx,ebx
	call CItemInfo::LoadSkillBonus
	mov ecx,dword ptr [ebp+0x4C]
	mov edx,dword ptr [ecx+0x210]
	mov eax,dword ptr [ebp+0x64]
	mov esi,dword ptr [edx+eax*8-4]
	lea eax,[edx+eax*8-8]
	mov dword ptr [ebp+0xC],esi
	test esi,esi
	je Block849

 Block848:
	lea ecx,[esi-0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block849:
	lea edx,[ebp+0x10]
	push edx
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[esi+0x18]
	mov byte ptr [ebp-4],0x63
	call ZMap<long, ZRef<CItemInfo::LevelInfo::Ability>, long>::Insert
	lea ecx,[ebp+8]
	mov byte ptr [ebp-4],0x5F
	call ZRef<CItemInfo::LevelInfo>::~ZRef<CItemInfo::LevelInfo>
	lea ecx,[ebp+0x10]
	mov byte ptr [ebp-4],0x5E
	call ZRef<CItemInfo::LevelInfo::Ability>::~ZRef<CItemInfo::LevelInfo::Ability>
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],0x5A
	call edx
	mov ebx,dword ptr [ebp+0x40]
	xor edi,edi

 Block850:
	cmp word ptr [ebp-0x8C],8
	jne Block853

 Block851:
	xor eax,eax
	mov word ptr [ebp-0x8C],ax
	mov eax,dword ptr [ebp-0x84]
	cmp eax,edi
	je Block814

 Block852:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block814

 Block853:
	lea ecx,[ebp-0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	cmp eax,edi
	jge Block814

 Block854:
	push eax
	call _com_issue_error

 Block855:
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x5A
	cmp eax,edi
	je Block857

 Block856:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block857:
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0x57
	cmp eax,edi
	je Block859

 Block858:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block859:
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],0x54
	jne Block862

 Block860:
	xor eax,eax
	mov word ptr [ebp-0x8C],ax
	mov eax,dword ptr [ebp-0x84]
	cmp eax,edi
	je Block863

 Block861:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block863

 Block862:
	lea ecx,[ebp-0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block863:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov byte ptr [ebp-4],0x50
	call eax
	inc dword ptr [ebp+0x5C]
	mov edi,dword ptr [ebp+0x5C]
	mov esi,dword ptr [ebp+0x38]
	xor ebx,ebx
	jmp Block777

 Block864:
	lea edx,[ebp-0x140]
	push edx
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp-0x28]
	mov dword ptr [ebp-4],0x164
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp-0x140]
	mov byte ptr [ebp-4],0x66
	test eax,eax
	je Block866

 Block865:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block866:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0x67
	mov dword ptr [ebp-0x198],0

 Block867:
	mov eax,dword ptr [ebp-0x28]
	test eax,eax
	jne Block869

 Block868:
	push 0x80004003
	call _com_issue_error

 Block869:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x198]
	push edx
	lea edx,[ebp-0x3C]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block881

 Block870:
	mov esi,dword ptr [ebp-0x34]
	call StringPool::GetInstance
	push 0x3D5
	lea ecx,[ebp-0x148]
	push ecx
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push esi
	call __wcsicmp
	add esp,8
	test eax,eax
	mov eax,dword ptr [ebp-0x148]
	sete bl
	test eax,eax
	je Block872

 Block871:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block872:
	test bl,bl
	jne Block876

 Block873:
	push esi
	call __wtoi
	mov esi,eax
	mov eax,0x68DB8BAD
	imul esi
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,4
	cmp eax,0xBE
	je Block875

 Block874:
	push offset ZException::THROW_INFO
	lea ecx,[ebp-0x180]
	push ecx
	mov dword ptr [ebp-0x180],0x80004005
	call _CxxThrowException

 Block875:
	mov ecx,dword ptr [ebp+0x4C]
	push 0xFFFFFFFF
	add ecx,0x254
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],esi

 Block876:
	cmp word ptr [ebp-0x3C],8
	jne Block879

 Block877:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block867

 Block878:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block867

 Block879:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block867

 Block880:
	push eax
	call _com_issue_error

 Block881:
	mov ebx,dword ptr [ebp+0x4C]
	cmp dword ptr [ebx+0x254],0
	je Block883

 Block882:
	mov ecx,dword ptr [ebx+0x254]
	cmp dword ptr [ecx-4],0
	jne Block884

 Block883:
	push offset ZException::THROW_INFO
	lea edx,[ebp-0x150]
	push edx
	mov dword ptr [ebp-0x150],0x80004005
	call _CxxThrowException

 Block884:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x66
	jne Block887

 Block885:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block888

 Block886:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block888

 Block887:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block888:
	mov eax,dword ptr [ebp-0x28]
	mov edi,0xE7
	mov dword ptr [ebp-4],edi
	test eax,eax
	je Block891

 Block889:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block891

 Block890:
	mov edi,0xE7

 Block891:
	cmp dword ptr [ebx+0x214],0
	je Block915

 Block892:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push offset _S_EPIC
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x50]
	mov dword ptr [ebp-4],0x168
	test ecx,ecx
	jne Block894

 Block893:
	push 0x80004003
	call _com_issue_error

 Block894:
	lea edx,[ebp-0x914]
	push edx
	mov dword ptr [ebp-4],edi
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],0x169
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x40]
	mov dword ptr [ebp+0x40],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block897

 Block895:
	cmp eax,0x80004002
	je Block897

 Block896:
	push eax
	call _com_issue_error

 Block897:
	cmp word ptr [ebp-0x914],8
	mov byte ptr [ebp-4],0x6B
	jne Block900

 Block898:
	xor eax,eax
	mov word ptr [ebp-0x914],ax
	mov eax,dword ptr [ebp-0x90C]
	test eax,eax
	je Block901

 Block899:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block901

 Block900:
	lea ecx,[ebp-0x914]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block901:
	mov esi,dword ptr [ebp+0x40]
	test esi,esi
	je Block909

 Block902:
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x986
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x5C4]
	mov byte ptr [ebp-4],0x6C
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x6B
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x6D
	jne Block904

 Block903:
	mov eax,dword ptr [eax+8]
	jmp Block905

 Block904:
	mov eax,offset _S___3

 Block905:
	push 0xFFFFFFFF
	lea ecx,[ebx+0x21C]
	push eax
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x5C4],8
	mov byte ptr [ebp-4],0x6B
	jne Block908

 Block906:
	mov eax,dword ptr [ebp-0x5BC]
	xor ecx,ecx
	mov word ptr [ebp-0x5C4],cx
	test eax,eax
	je Block909

 Block907:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block909

 Block908:
	lea edx,[ebp-0x5C4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block909:
	lea eax,[ebx+0x220]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block911

 Block910:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block911:
	mov ecx,dword ptr [ebp+0x2C]
	call CItemInfo::LoadItemSkill
	lea eax,[ebx+0x234]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block913

 Block912:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block913:
	mov ecx,dword ptr [ebp+0x2C]
	call CItemInfo::LoadSkillBonus
	mov dword ptr [ebp-4],edi
	test esi,esi
	je Block915

 Block914:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block915:
	mov esi,dword ptr [ebp+0x74]
	mov dword ptr [esi+4],ebx
	test ebx,ebx
	je Block917

 Block916:
	add ebx,0xFFFFFFF4
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block917:
	cmp dword ptr [ebp+0x34],0
	mov byte ptr [ebp-4],0xB5
	je Block919

 Block918:
	mov eax,dword ptr [ebp+0x34]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block919:
	cmp dword ptr [ebp+0x30],0
	mov byte ptr [ebp-4],0xA3
	je Block921

 Block920:
	mov eax,dword ptr [ebp+0x30]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block921:
	cmp dword ptr [ebp+0x20],0
	mov byte ptr [ebp-4],0x13
	je Block923

 Block922:
	mov eax,dword ptr [ebp+0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block923:
	cmp dword ptr [ebp+0x24],0
	mov byte ptr [ebp-4],0xD
	je Block925

 Block924:
	mov eax,dword ptr [ebp+0x24]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block925:
	cmp dword ptr [ebp+0x50],0
	mov byte ptr [ebp-4],9
	je Block927

 Block926:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block927:
	cmp dword ptr [ebp+0x28],0
	mov byte ptr [ebp-4],1
	je Block929

 Block928:
	mov eax,dword ptr [ebp+0x28]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block929:
	lea ecx,[ebp+0x48]
	mov byte ptr [ebp-4],0
	call ZRef<CItemInfo::EQUIPITEM>::~ZRef<CItemInfo::EQUIPITEM>
	mov eax,esi
	jmp Block933

 Block933:
	lea esp,[ebp-0xAE4]
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
// CItemInfo::IterateLotteryItem
_SUB_EXCEPTION_HANDLER(1C41B0)
__SUB_CLASS_THIS0(001C41B0, __thiscall, 78614,  CItemInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1C41B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xDC
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xF0]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x6C],ecx
	xor ebp,ebp
	mov dword ptr [esp+0xEC],ebp
	test byte ptr [_D__S5],1
	mov dword ptr [esp+0xF8],ebp
	jne Block2

 Block1:
	or dword ptr [_D__S5],1
	push ebp
	push offset _S___3
	push ebp
	push ebp
	mov ecx,offset _D_S_ASTYPENAME
	mov byte ptr [esp+0x108],1
	mov dword ptr [_D_S_ASTYPENAME],ebp
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebp
	mov ecx,offset _D_S_ASTYPENAME
	call ZXString16::ReleaseBuffer
	push 0x953
	push offset _D_S_ASTYPENAME+4
	mov byte ptr [esp+0x100],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push 0x954
	push offset _D_S_ASTYPENAME+8
	mov byte ptr [esp+0x100],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push 0x1A38
	push offset _D_S_ASTYPENAME+12
	mov byte ptr [esp+0x100],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push 0xB12970
	call _atexit
	add esp,4

 Block2:
	mov dword ptr [esp+0x1C],ebp
	mov ebx,2
	mov byte ptr [esp+0xF8],5
	mov dword ptr [esp+0x30],ebx

 Block3:
	lea eax,[esp+0x74]
	push 0x967
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebx*4+_D__S4__5]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x104],6
	call ZXString16::Format
	mov eax,dword ptr [esp+0x80]
	add esp,0xC
	mov byte ptr [esp+0xF8],5
	cmp eax,ebp
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov eax,dword ptr [esp+0x1C]
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x104],7
	cmp dword ptr [_D_G_ROOT],ebp
	je Block124

 Block6:
	lea ecx,[esp+0xD4]
	push ecx
	mov byte ptr [esp+0x108],5
	mov ecx,dword ptr [_D_G_ROOT]
	call IWzNameSpace::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x100],8
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x28],esi
	cmp eax,ebp
	je Block9

 Block7:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x68]
	push ecx
	push offset __GUID_2aeeeb36_a4e1_4e2b_8f6f_2e7bdec5c53d
	push eax
	call edx
	xor ecx,ecx
	cmp eax,ebp
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x68]
	cmp eax,ebp
	mov esi,ecx
	mov dword ptr [esp+0x28],esi
	jge Block9

 Block8:
	cmp eax,0x80004002
	jne Block93

 Block9:
	cmp word ptr [esp+0xC8],8
	mov byte ptr [esp+0xF8],0xA
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0xD0]
	xor edx,edx
	mov word ptr [esp+0xC8],dx
	cmp eax,ebp
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0xC8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	cmp esi,ebp
	je Block124

 Block14:
	lea ecx,[esp+0x7C]
	push ecx
	mov ecx,esi
	call IWzNameSpace::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xFC],0xB
	mov dword ptr [esp+0x1C],ebp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block16:
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebp
	jge Block18

 Block17:
	cmp eax,0x80004002
	jne Block93

 Block18:
	mov eax,dword ptr [esp+0x7C]
	mov byte ptr [esp+0xF8],0xD
	cmp eax,ebp
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov edi,dword ptr [esp+0x18]
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x40]
	push edx
	push edi
	mov byte ptr [esp+0x104],0xE
	mov dword ptr [esp+0x44],ebp
	call enum_next_in_directory
	add esp,0xC
	test eax,eax
	je Block116

 Block21:
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	call DetachBSTR
	add esp,8
	push ebp
	push ebp
	push ecx
	mov ecx,dword ptr [esp+0x30]
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],ecx
	cmp ecx,ebp
	je Block23

 Block22:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block23:
	lea edx,[esp+0xC4]
	mov byte ptr [esp+0x104],0x10
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x108],0xF
	call IWzNameSpace::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x100],0x11
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x4C],esi
	cmp eax,ebp
	je Block26

 Block24:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x84]
	push edx
	push offset __GUID_3c39b9aa_18cc_408c_8716_c4fb2117266e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebp
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x84]
	cmp eax,ebp
	mov esi,ecx
	mov dword ptr [esp+0x4C],esi
	jge Block26

 Block25:
	cmp eax,0x80004002
	jne Block93

 Block26:
	cmp word ptr [esp+0xB8],8
	mov byte ptr [esp+0xF8],0x13
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0xC0]
	xor edx,edx
	mov word ptr [esp+0xB8],dx
	cmp eax,ebp
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[esp+0xB8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block30:
	cmp esi,ebp
	sete al
	test al,al
	sete al
	test al,al
	je Block100

 Block31:
	lea ecx,[esp+0x1C]
	push ecx
	xor ebx,ebx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],ebx
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xF8],0x14
	cmp eax,ebx
	je Block33

 Block32:
	mov edi,dword ptr [eax]
	jmp Block34

 Block33:
	xor edi,edi

 Block34:
	push 1
	push offset _S___9
	lea ecx,[esp+0x28]
	call ZXString16::_Cat
	mov edx,edi
	lea ecx,[edx+2]
	jmp Block36

 Block36:
	mov si,word ptr [edx]
	add edx,2
	cmp si,bx
	jne Block36

 Block37:
	sub edx,ecx
	sar edx,1
	push edx
	push edi
	mov ecx,eax
	call ZXString16::_Cat
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x88]
	push edx
	call edi
	lea eax,[esp+0x88]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block93

 Block38:
	lea ecx,[esp+0x98]
	push ecx
	mov byte ptr [esp+0xFC],0x15
	call edi
	lea edx,[esp+0x98]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block93

 Block39:
	mov edx,dword ptr [esp+0x20]
	push ebx
	push ebx
	lea eax,[esp+0x90]
	push eax
	lea ecx,[esp+0xA4]
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x110],0x16
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x10C],0x17
	cmp dword ptr [_D_G_RM],ebx
	je Block124

 Block40:
	lea eax,[esp+0xEC]
	mov byte ptr [esp+0x10C],0x16
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x100],0x18
	call Ztl_variant_t::GetUnknown
	xor ebp,ebp
	mov dword ptr [esp+0x60],ebp
	cmp eax,ebx
	je Block43

 Block41:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x64]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x64]
	cmp eax,ebx
	mov ebp,ecx
	mov dword ptr [esp+0x60],ebp
	jge Block43

 Block42:
	cmp eax,0x80004002
	jne Block93

 Block43:
	mov esi,8
	mov byte ptr [esp+0xF8],0x1A
	cmp word ptr [esp+0xD8],si
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0xE0]
	xor edx,edx
	mov word ptr [esp+0xD8],dx
	cmp eax,ebx
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[esp+0xD8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block47:
	mov byte ptr [esp+0xF8],0x1B
	cmp word ptr [esp+0x98],si
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0xA0]
	xor ecx,ecx
	mov word ptr [esp+0x98],cx
	cmp eax,ebx
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x98]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov byte ptr [esp+0xF8],0x1C
	cmp word ptr [esp+0x88],si
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x88],ax
	mov eax,dword ptr [esp+0x90]
	cmp eax,ebx
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[esp+0x88]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	cmp ebp,ebx
	je Block124

 Block56:
	lea edx,[esp+0x70]
	push edx
	mov ecx,ebp
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xFC],0x1D
	mov dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block58:
	lea ecx,[esp+0x38]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block60

 Block59:
	cmp eax,0x80004002
	jne Block93

 Block60:
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0xF8],0x1F
	cmp eax,ebx
	je Block62

 Block61:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block62:
	lea eax,[esp+0x50]
	push eax
	call edi
	mov dword ptr [esp+0x80],ebx
	mov ebx,dword ptr [esp+0x34]
	mov byte ptr [esp+0xF8],0x20

 Block63:
	test ebx,ebx
	je Block124

 Block64:
	mov ecx,dword ptr [ebx]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x80]
	push edx
	lea eax,[esp+0x54]
	push eax
	push 1
	push ebx
	call ecx
	test eax,eax
	jne Block94

 Block65:
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x30]
	push eax
	call DetachBSTR
	add esp,8
	mov edi,dword ptr [esp+0x2C]
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block67

 Block66:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block67:
	lea edx,[esp+0xB4]
	mov byte ptr [esp+0x104],0x22
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x108],0x21
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x100],0x23
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	test eax,eax
	je Block70

 Block68:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x78]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x78]
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	test eax,eax
	jge Block70

 Block69:
	cmp eax,0x80004002
	jne Block93

 Block70:
	cmp word ptr [esp+0xA8],8
	mov byte ptr [esp+0xF8],0x25
	jne Block73

 Block71:
	mov eax,dword ptr [esp+0xB0]
	xor edx,edx
	mov word ptr [esp+0xA8],dx
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea eax,[esp+0xA8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block74:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0xEC],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block76

 Block75:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block76:
	test edi,edi
	je Block78

 Block77:
	mov eax,dword ptr [edi]
	jmp Block79

 Block78:
	xor eax,eax

 Block79:
	push eax
	call __wtoi
	mov ecx,dword ptr [esp+0x74]
	add esp,4
	push eax
	call CItemInfo::RegisterLotteryItem
	mov byte ptr [esp+0xF8],0x21
	test esi,esi
	je Block81

 Block80:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block81:
	mov byte ptr [esp+0xF8],0x20
	test edi,edi
	je Block89

 Block82:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block88

 Block83:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block85

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block85:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block87

 Block86:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block87:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block88:
	mov dword ptr [esp+0x2C],0

 Block89:
	cmp word ptr [esp+0x50],8
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block63

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block92:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block63

 Block93:
	push eax
	call _com_issue_error

 Block94:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0xF8],0x1F
	jne Block97

 Block95:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block98:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [esp+0xFC],0x1C
	call edx
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0xFC],0x14
	call ecx
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xF8],0x13
	test eax,eax
	je Block100

 Block99:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block100:
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xF8],0xF
	test eax,eax
	je Block102

 Block101:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block102:
	mov esi,dword ptr [esp+0x24]
	mov byte ptr [esp+0xF8],0xE
	test esi,esi
	je Block110

 Block103:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block109

 Block104:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block106

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block106:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block108

 Block107:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block108:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block109:
	mov dword ptr [esp+0x24],0

 Block110:
	cmp word ptr [esp+0x3C],8
	jne Block113

 Block111:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jl Block93

 Block114:
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x40]
	push edx
	push eax
	call enum_next_in_directory
	mov esi,dword ptr [esp+0x34]
	add esp,0xC
	xor ebp,ebp
	test eax,eax
	jne Block21

 Block115:
	mov edi,dword ptr [esp+0x18]
	mov ebx,dword ptr [esp+0x30]

 Block116:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xF8],0xD
	jne Block119

 Block117:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block120:
	mov byte ptr [esp+0xF8],0xA
	cmp edi,ebp
	je Block122

 Block121:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block122:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0xFC],5
	call eax
	inc ebx
	cmp ebx,4
	mov dword ptr [esp+0x30],ebx
	jle Block3

 Block123:
	mov eax,dword ptr [_D_G_RM]
	cmp eax,ebp
	jne Block125

 Block124:
	push 0x80004003
	call _com_issue_error

 Block125:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x24]
	push ebp
	push eax
	mov esi,eax
	call edx
	cmp eax,ebp
	jge Block127

 Block126:
	push offset __GUID_57dfe40b_3e20_4dbc_97e8_805a50f381bf
	push esi
	push eax
	call _com_issue_errorex

 Block127:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xF8],0
	cmp eax,ebp
	je Block129

 Block128:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block129:
	mov ecx,dword ptr [esp+0xF0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xE8
	ret
}
}
// CItemInfo::SET_EFFECT::operator=
__SUB_CLASS_THIS(001A52D0, __thiscall, 130784,  CItemInfo::SET_EFFECT, CItemInfo::SET_EFFECT&, const CItemInfo::SET_EFFECT&) {
__asm {

 Block0:
	sub esp,0xC
	push ebx
	mov ebx,dword ptr [esp+0x14]
	mov eax,dword ptr [ebx]
	push ebp
	mov ebp,ecx
	push esi
	push edi
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [ebp],eax
	add ebx,0x10
	lea esi,[ebp+4]
	mov dword ptr [esp+0x14],0x3C

 Block1:
	mov ecx,esi
	call ZList<long>::RemoveAll
	mov eax,dword ptr [ebx]
	mov dword ptr [esp+0x10],eax
	test eax,eax
	je Block3

 Block2:
	lea ecx,[esp+0x10]
	push ecx
	call ZList<long>::GetNext
	add esp,4
	mov ecx,esi
	mov edi,eax
	call ZList<long>::AddTail_
	cmp dword ptr [esp+0x10],0
	mov edx,dword ptr [edi]
	mov dword ptr [eax],edx
	jne Block2

 Block3:
	add esi,0x14
	add ebx,0x14
	sub dword ptr [esp+0x14],1
	jne Block1

 Block4:
	mov ebx,dword ptr [esp+0x20]
	lea esi,[ebp+0x4B4]
	add ebx,0x4C0
	mov ebp,5

 Block5:
	mov ecx,esi
	call ZList<long>::RemoveAll
	mov eax,dword ptr [ebx]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block8

 Block6:
	lea esp,[esp]

 Block7:
	lea eax,[esp+0x14]
	push eax
	call ZList<long>::GetNext
	add esp,4
	mov ecx,esi
	mov edi,eax
	call ZList<long>::AddTail_
	cmp dword ptr [esp+0x14],0
	mov ecx,dword ptr [edi]
	mov dword ptr [eax],ecx
	jne Block7

 Block8:
	add esi,0x14
	add ebx,0x14
	sub ebp,1
	jne Block5

 Block9:
	mov ebx,dword ptr [esp+0x18]
	lea esi,[ebx+0x518]
	mov ecx,esi
	call ZList<long>::RemoveAll
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [edx+0x524]
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block12

 Block10:
	nop

 Block11:
	lea eax,[esp+0x20]
	push eax
	call ZList<long>::GetNext
	add esp,4
	mov ecx,esi
	mov edi,eax
	call ZList<long>::AddTail_
	cmp dword ptr [esp+0x20],0
	mov ecx,dword ptr [edi]
	mov dword ptr [eax],ecx
	jne Block11

 Block12:
	pop edi
	pop esi
	pop ebp
	mov eax,ebx
	pop ebx
	add esp,0xC
	ret 4
}
}
// CItemOptionInfo::CItemOptionInfo
__SUB_CLASS_THIS0(005C4BA0, __thiscall, 78611,  CItemOptionInfo, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push edi
	lea ecx,[esi+4]
	xor edi,edi
	cmp ecx,edi
	je Block2

 Block1:
	lea eax,[ecx-4]
	mov dword ptr [TSingleton<CItemOptionInfo>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CItemOptionInfo>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CItemOptionInfo::`vftable'
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<ItemOptionInfo>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<ItemOptionInfo>, long>::_CalcAutoGrow
	lea ecx,[esi+0x1C]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<SocketOptionInfo>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<SocketOptionInfo>, long>::_CalcAutoGrow
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// _ZtlSecureTear_int_
__SUB(00195300, __fastcall, 141423,  uint32_t, int32_t, int32_t*) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	mov ecx,offset _D_G_RAND
	mov esi,edx
	call CRand32::Random
	mov ecx,eax
	mov dword ptr [esi],eax
	xor ecx,edi
	ror ecx,5
	xor eax,0xBAADF00D
	ror eax,5
	pop edi
	mov dword ptr [esi+4],ecx
	add eax,ecx
	pop esi
	ret
}
}
// DownHeap_ZPair_long_long__PairFirstLess_
__SUB(001917E0, __cdecl, 141411,  void, ZArray<ZPair<long,long> >&, int32_t, int32_t, int32_t, none&) {
__asm {

 Block0:
	sub esp,8
	push ebx
	mov ebx,dword ptr [esp+0x1C]
	push esi
	mov esi,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	push edi
	mov edi,dword ptr [esp+0x1C]
	lea eax,[edi+ebx]
	mov edx,dword ptr [ecx+eax*8-8]
	lea eax,[ecx+eax*8-8]
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x10],eax
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0xC],edx
	cdq
	sub eax,edx
	sar eax,1
	cmp edi,eax
	jg Block10

 Block1:
	push ebp
	jmp Block4

 Block3:
	mov esi,dword ptr [esp+0x1C]

 Block4:
	lea ecx,[edi+edi]
	cmp ecx,dword ptr [esp+0x24]
	jge Block7

 Block5:
	mov ebp,dword ptr [esi]
	lea edx,[ecx+ebx]
	lea edx,[ebp+edx*8]
	mov ebp,dword ptr [edx-8]
	cmp ebp,dword ptr [edx]
	jge Block7

 Block6:
	inc ecx

 Block7:
	mov edx,dword ptr [esi]
	mov ebp,dword ptr [esp+0x10]
	lea esi,[ecx+ebx]
	cmp ebp,dword ptr [edx+esi*8-8]
	lea esi,[edx+esi*8-8]
	jge Block9

 Block8:
	mov ebp,dword ptr [esi]
	add edi,ebx
	cmp ecx,eax
	mov dword ptr [edx+edi*8-8],ebp
	mov esi,dword ptr [esi+4]
	mov dword ptr [edx+edi*8-4],esi
	mov edi,ecx
	jle Block3

 Block9:
	mov esi,dword ptr [esp+0x1C]
	pop ebp

 Block10:
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
// CItemInfo::SET_EFFECT::~SET_EFFECT
_SUB_EXCEPTION_HANDLER(19B1E0)
__SUB_CLASS_THIS0(0019B1E0, __thiscall, 130783,  CItemInfo::SET_EFFECT, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_19B1E0
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
	lea ecx,[esi+0x518]
	mov dword ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	push offset ZList<long>::~ZList<long>
	push 5
	push 0x14
	lea eax,[esi+0x4B4]
	push eax
	mov byte ptr [esp+0x24],0
	call __eh_vector_dtor_iterator
	push offset ZList<long>::~ZList<long>
	push 0x3C
	push 0x14
	add esi,4
	push esi
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call __eh_vector_dtor_iterator
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CItemInfo::RegisterCoupleChairItem
_SUB_EXCEPTION_HANDLER(1A25B0)
__SUB_CLASS_THIS(001A25B0, __thiscall, 130738,  CItemInfo, void, long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A25B0
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
	mov dword ptr [esp+0x14],ecx
	mov eax,dword ptr [esp+0x44]
	xor edi,edi
	cmp eax,edi
	sete cl
	mov dword ptr [esp+0x38],edi
	test cl,cl
	je Block2

 Block1:
	cmp eax,edi
	jmp Block30

 Block2:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x1C],edi
	call ZRef<CItemInfo::COUPLECHAIRITEM>::_Alloc
	mov eax,dword ptr [esp+0x40]
	mov esi,dword ptr [esp+0x1C]
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push 0x1328
	mov ebx,1
	push ecx
	mov byte ptr [esp+0x48],bl
	mov dword ptr [esi],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x40],2
	cmp ecx,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],3
	call get_int32
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov edi,8
	add esp,8
	mov dword ptr [esi+4],eax
	mov byte ptr [esp+0x38],bl
	cmp word ptr [esp+0x20],di
	jne Block7

 Block5:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea ecx,[esp+0x20]
	push ecx
	call ebp

 Block8:
	push 0xFFFFFFFF
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x48],esp
	push 0x1329
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x40],4
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],5
	call get_int32
	add esp,8
	mov dword ptr [esi+8],eax
	mov byte ptr [esp+0x38],bl
	cmp word ptr [esp+0x20],di
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea edx,[esp+0x20]
	push edx
	call ebp

 Block14:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push 0x132A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x40],6
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],7
	call get_int32
	add esp,8
	mov dword ptr [esi+0xC],eax
	mov byte ptr [esp+0x38],bl
	cmp word ptr [esp+0x20],di
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x20]
	push ecx
	call ebp

 Block20:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x48],esp
	push 0xEED
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x40],8
	test ecx,ecx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],9
	call get_int32
	add esp,8
	mov dword ptr [esi+0x10],eax
	mov byte ptr [esp+0x38],bl
	cmp word ptr [esp+0x20],di
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x20]
	push edx
	call ebp

 Block26:
	mov ecx,dword ptr [esp+0x14]
	lea eax,[esp+0x18]
	push eax
	push esi
	add ecx,0x1F8
	call ZMap<long, ZRef<CItemInfo::COUPLECHAIRITEM>, long>::Insert
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x3C],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block29

 Block27:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block29

 Block28:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push ebx
	mov ecx,esi
	call eax

 Block29:
	mov eax,dword ptr [esp+0x44]
	test eax,eax

 Block30:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block32:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 8
}
}
// CItemInfo::IterateItemNameforScanner
_SUB_EXCEPTION_HANDLER(1B2700)
__SUB_CLASS_THIS(001B2700, __thiscall, 130742,  CItemInfo, void, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B2700
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
	mov dword ptr [esp+0x28],ecx
	mov ecx,dword ptr [esp+0x88]
	xor esi,esi
	mov dword ptr [esp+0x80],esi
	cmp ecx,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+0x30]
	push eax
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x84],1
	mov dword ptr [esp+0x28],esi
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	lea ecx,[esp+0x28]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block7

 Block5:
	cmp eax,0x80004002
	je Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x80],3
	cmp eax,esi
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0x80],4
	mov dword ptr [esp+0x34],esi
	cmp dword ptr [esp+0x24],esi
	je Block1

 Block10:
	mov edi,dword ptr [esp+0x24]
	mov ecx,dword ptr [edi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x5C]
	push eax
	push 1
	push edi
	call ecx
	test eax,eax
	jne Block69

 Block11:
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call DetachBSTR
	add esp,8
	mov esi,dword ptr [esp+0x18]
	test esi,esi
	je Block13

 Block12:
	mov eax,dword ptr [esi]
	jmp Block14

 Block13:
	xor eax,eax

 Block14:
	push 0xA
	lea ecx,[esp+0x40]
	push ecx
	push eax
	call _wcstol
	xor ebx,ebx
	add esp,0xC
	mov ebp,eax
	mov dword ptr [esp+0x2C],ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block16

 Block15:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block16:
	mov ecx,dword ptr [esp+0x94]
	mov byte ptr [esp+0x8C],7
	test ecx,ecx
	je Block1

 Block17:
	lea eax,[esp+0x74]
	push eax
	mov byte ptr [esp+0x90],6
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x88],8
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block21

 Block18:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x38]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x38]
	mov dword ptr [esp+0x2C],ecx
	test eax,eax
	jge Block20

 Block19:
	cmp eax,0x80004002
	jne Block6

 Block20:
	mov ebx,dword ptr [esp+0x2C]

 Block21:
	mov edi,8
	mov byte ptr [esp+0x80],6
	cmp word ptr [esp+0x68],di
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov ecx,dword ptr [esp+0x3C]
	cmp word ptr [ecx],0
	je Block29

 Block26:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block28

 Block27:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax

 Block28:
	mov ecx,dword ptr [esp+0x2C]
	call CItemInfo::IterateItemNameforScanner_0
	jmp Block59

 Block29:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	lea edx,[esp+0x20]
	push edx
	add ecx,0x224
	mov dword ptr [esp+0x24],ebp
	mov dword ptr [esp+0x28],0
	call ZMap<long, int, long>::GetAt
	cmp dword ptr [esp+0x20],0
	je Block34

 Block30:
	mov byte ptr [esp+0x80],5
	test ebx,ebx
	je Block32

 Block31:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block32:
	mov byte ptr [esp+0x80],4
	test esi,esi
	je Block10

 Block33:
	mov ecx,esi
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],0
	jmp Block10

 Block34:
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_NAME
	call _xbstr_t::_ctor_1
	xor esi,esi
	mov byte ptr [esp+0x84],9
	cmp ebx,esi
	je Block1

 Block35:
	lea edx,[esp+0x4C]
	push edx
	mov ecx,ebx
	mov byte ptr [esp+0x88],6
	call IWzProperty::Getitem
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x80],0xA
	cmp word ptr [esp+0x48],di
	je Block37

 Block36:
	mov eax,offset _S___3

 Block37:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],esi
	call ZXString<char>::AssignWideStr
	push esi
	push offset _S_
	push esi
	push esi
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x90],0xB
	mov dword ptr [esp+0x2C],esi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x20]
	call ZXString<char>::ReleaseBuffer
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x80],0xC
	call ZXString<char>::GetLength
	test eax,eax
	jle Block42

 Block38:
	lea esp,[esp]

 Block39:
	mov eax,dword ptr [esp+0x20]
	mov al,byte ptr [esi+eax]
	cmp al,0x20
	je Block41

 Block40:
	push 1
	lea ecx,[esp+0x18]
	push ecx
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x1C],al
	call ZXString<char>::_Cat

 Block41:
	lea ecx,[esp+0x20]
	inc esi
	call ZXString<char>::GetLength
	cmp esi,eax
	jl Block39

 Block42:
	push 0
	call ZRefCounted_AllocHelper<ZRefCountedDummy<ITEMNAME>>::call
	lea esi,[eax+0x10]
	add esp,4
	mov dword ptr [eax+4],1
	mov dword ptr [esp+0x44],esi
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x84],0xD
	mov dword ptr [esi+4],ebp
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x28]
	add ecx,0x23C
	call ZList<ZRef<ITEMNAME>>::AddTail_
	mov ebp,eax
	lea edi,[esi-0x10]
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebp+4]
	test eax,eax
	je Block47

 Block43:
	lea ebx,[eax-0x10]
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block46

 Block44:
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block46

 Block45:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block46:
	mov ebx,dword ptr [esp+0x2C]
	mov dword ptr [ebp+4],0

 Block47:
	mov dword ptr [ebp+4],esi
	lea esi,[edi+4]
	push esi
	mov byte ptr [esp+0x84],0xC
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block50

 Block48:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block50

 Block49:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block50:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x44],0
	mov byte ptr [esp+0x80],0xB
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block52:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x80],0xA
	test eax,eax
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block54:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x80],6
	jne Block57

 Block55:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov esi,dword ptr [esp+0x18]

 Block59:
	mov byte ptr [esp+0x80],5
	test ebx,ebx
	je Block61

 Block60:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block61:
	mov byte ptr [esp+0x80],4
	test esi,esi
	je Block10

 Block62:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block68

 Block63:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block65

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block65:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block67

 Block66:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block67:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block68:
	mov dword ptr [esp+0x18],0
	jmp Block10

 Block69:
	mov eax,dword ptr [_D_G_RM]
	test eax,eax
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x24]
	push 0
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block73

 Block72:
	push offset __GUID_57dfe40b_3e20_4dbc_97e8_805a50f381bf
	push esi
	push eax
	call _com_issue_errorex

 Block73:
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x80],3
	jne Block76

 Block74:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block77:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0x84],0
	call eax
	mov eax,dword ptr [esp+0x88]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test eax,eax
	je Block79

 Block78:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block79:
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret 4
}
}
// CItemInfo::GetAppliableKarmaType
__SUB_CLASS_THIS(001C09F0, __thiscall, 84833,  CItemInfo, long, long) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	mov eax,0x431BDE83
	imul esi
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	push esi
	cmp eax,1
	jne Block3

 Block1:
	call CItemInfo::GetEquipItem
	test eax,eax
	je Block5

 Block2:
	mov eax,dword ptr [eax+0x1B0]
	pop esi
	ret 4

 Block3:
	call CItemInfo::GetBundleItem
	test eax,eax
	je Block5

 Block4:
	mov eax,dword ptr [eax+0x14]
	pop esi
	ret 4

 Block5:
	xor eax,eax
	pop esi
	ret 4
}
}
// CItemInfo::RegisterPetFoodItem
_SUB_EXCEPTION_HANDLER(1AA0A0)
__SUB_CLASS_THIS(001AA0A0, __thiscall, 130738,  CItemInfo, void, long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1AA0A0
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
	mov dword ptr [ebp-0x38],ecx
	xor esi,esi
	push esi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x3D5
	push eax
	mov dword ptr [ebp-4],esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],1
	cmp ecx,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x58]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov edi,8
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x58],di
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp-0x58],ax
	mov eax,dword ptr [ebp-0x50]
	cmp eax,esi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp-0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	push esi
	push esi
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x18],esp
	push 0x928
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],5
	cmp ecx,esi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[ebp-0x48]
	push eax
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x48],di
	jne Block17

 Block15:
	mov eax,dword ptr [ebp-0x40]
	xor ecx,ecx
	mov word ptr [ebp-0x48],cx
	cmp eax,esi
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[ebp-0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	lea ecx,[ebp-0x20]
	mov dword ptr [ebp-0x1C],esi
	call ZRef<CItemInfo::PETFOODITEM>::_Alloc
	mov eax,dword ptr [ebp+8]
	mov edi,dword ptr [ebp-0x1C]
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x34],esp
	push 0x6CA
	push ecx
	mov byte ptr [ebp-4],9
	mov dword ptr [edi],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0xA
	cmp ebx,esi
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea edx,[ebp-0x30]
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB
	call get_int32
	add esp,8
	mov dword ptr [edi+4],eax
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],9
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	cmp eax,esi
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[ebp-0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	xor edi,edi
	mov edi,edi

 Block25:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push esi
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x34],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x30]
	mov byte ptr [ebp-4],0xC
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x30],8
	mov esi,eax
	mov byte ptr [ebp-4],9
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[ebp-0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	test esi,esi
	je Block31

 Block30:
	mov ecx,dword ptr [ebp-0x1C]
	add ecx,8
	call ZList<unsigned long>::AddTail_
	mov dword ptr [eax],esi
	inc edi
	xor esi,esi
	jmp Block25

 Block31:
	mov esi,dword ptr [ebp-0x1C]
	mov ecx,dword ptr [ebp-0x38]
	lea edx,[ebp-0x20]
	push edx
	push esi
	add ecx,0xB4
	call ZMap<long, ZRef<CItemInfo::PETFOODITEM>, long>::Insert
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],8
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block34

 Block32:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block34

 Block33:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block34:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],4
	call ecx
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block36

 Block35:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block36:
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block38

 Block37:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block38:
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
	ret 8
}
}
// CItemInfo::LoadNoScanItem
_SUB_EXCEPTION_HANDLER(1A1E00)
__SUB_CLASS_THIS(001A1E00, __thiscall, 130742,  CItemInfo, void, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A1E00
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
	mov dword ptr [esp+0x30],ecx
	mov ecx,dword ptr [esp+0x54]
	xor ebx,ebx
	mov dword ptr [esp+0x4C],ebx
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+0x1C]
	push eax
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x50],1
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	lea ecx,[esp+0x18]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block7

 Block5:
	cmp eax,0x80004002
	je Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x4C],3
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov edi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x4C],4
	mov dword ptr [esp+0x20],ebx
	cmp edi,ebx
	je Block1

 Block10:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	mov edi,edi

 Block11:
	mov ecx,dword ptr [edi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x38]
	push eax
	push 1
	push edi
	call ecx
	test eax,eax
	jne Block25

 Block12:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call DetachBSTR
	add esp,8
	mov esi,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],5
	cmp esi,ebx
	je Block14

 Block13:
	mov eax,dword ptr [esi]
	jmp Block15

 Block14:
	xor eax,eax

 Block15:
	push 0xA
	lea ecx,[esp+0x28]
	push ecx
	push eax
	call _wcstol
	mov edx,dword ptr [esp+0x30]
	add esp,0xC
	mov dword ptr [esp+0x2C],eax
	cmp word ptr [edx],bx
	jne Block17

 Block16:
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esp+0x38]
	add ecx,0x224
	mov dword ptr [esp+0x30],1
	call ZMap<long, int, long>::Insert

 Block17:
	mov byte ptr [esp+0x4C],4
	cmp esi,ebx
	je Block11

 Block18:
	lea edx,[esi+8]
	push edx
	call ebp
	test eax,eax
	jne Block24

 Block19:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block21

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block21:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
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
	mov dword ptr [esp+0x18],ebx
	jmp Block11

 Block25:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x4C],3
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebx
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0x50],bl
	call eax
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp eax,ebx
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
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
// CItemInfo::EQUIPITEM::EQUIPITEM
_SUB_EXCEPTION_HANDLER(1A6E10)
__SUB_CLASS_THIS0(001A6E10, __thiscall, 130927,  CItemInfo::EQUIPITEM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A6E10
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
	xor ebx,ebx
	mov dword ptr [esi+0x10],ebx
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esi+0x14],ebx
	mov dword ptr [esi+0x7C],ebx
	lea ecx,[esi+0x1F0]
	mov byte ptr [esp+0x18],2
	call MY_UINT128::_ctor_default
	mov dword ptr [esi+0x20C],ebx
	mov dword ptr [esi+0x210],ebx
	mov dword ptr [esi+0x21C],ebx
	lea ecx,[esi+0x234]
	int 3// TODO: 	mov dword ptr [esi+0x220],offset ZLIST_REF_ITEMSKILL_VTABLE
	mov dword ptr [esi+0x228],ebx
	mov dword ptr [esi+0x22C],ebx
	mov dword ptr [esi+0x230],ebx
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],ZMAP_LONG_LONG_VTABLE
	mov dword ptr [ecx+4],ebx
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],ebx
	call ZMap<long, long, long>::_CalcAutoGrow
	mov dword ptr [esi+0x24C],ebx
	mov dword ptr [esi+0x250],ebx
	mov dword ptr [esi+0x254],ebx
	mov dword ptr [esi+0x25C],ebx
	mov byte ptr [esi+0x198],bl
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret
}
}
// Partition_ZPair_long_long__PairSecondLess_
__SUB(00194950, __cdecl, 141420,  int32_t, ZArray<ZPair<long,long> >&, int32_t, int32_t, const ZPair<long,long>&, none&) {
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
	mov esi,dword ptr [ebp+4]
	lea ecx,[ecx+eax*8+4]
	mov edi,edi

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
	jge Block9

 Block6:
	mov ecx,dword ptr [ebx]
	mov esi,dword ptr [ebp+4]
	lea ecx,[ecx+edx*8+4]
	lea esp,[esp]

 Block7:
	cmp esi,dword ptr [ecx]
	jge Block9

 Block8:
	dec edx
	sub ecx,8
	cmp dword ptr [esp+0x1C],edx
	jl Block7

 Block9:
	cmp eax,edx
	jge Block11

 Block10:
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

 Block11:
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
// CItemInfo::GetItemIcon
_SUB_EXCEPTION_HANDLER(1AA990)
__SUB_CLASS_THIS(001AA990, __thiscall, 130720,  CItemInfo, _x_com_ptr<IWzCanvas>*, _x_com_ptr<IWzCanvas>*, long, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1AA990
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
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov eax,dword ptr [esp+0x5C]
	push eax
	lea edx,[esp+0x20]
	push edx
	call CItemInfo::GetItemInfo
	mov esi,dword ptr [esp+0x1C]
	cmp esi,ebp
	sete al
	mov dword ptr [esp+0x50],ebp
	test al,al
	je Block3

 Block1:
	mov edi,dword ptr [esp+0x58]
	mov dword ptr [edi],ebp
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp esi,ebp
	je Block45

 Block2:
	jmp Block44

 Block3:
	cmp dword ptr [esp+0x64],ebp
	je Block24

 Block4:
	cmp dword ptr [esp+0x60],ebp
	je Block6

 Block5:
	lea edx,[esp+0x5C]
	push 0x95A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,2
	jmp Block7

 Block6:
	lea eax,[esp+0x60]
	push 0x95C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,4

 Block7:
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x68],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block9

 Block8:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov dword ptr [esp+0x54],3
	cmp esi,ebp
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x58],2
	call IWzProperty::Getitem
	push eax
	lea edx,[esp+0x24]
	push edx
	mov dword ptr [esp+0x58],4
	call get_unknown
	add esp,8
	mov edi,dword ptr [esp+0x58]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x54],5
	call _x_com_ptr<IWzCanvas>::CreateFromUnknownComPtr
	mov eax,dword ptr [esp+0x20]
	or ebx,1
	mov dword ptr [esp+0x14],ebx
	mov byte ptr [esp+0x50],4
	cmp eax,ebp
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x50],2
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	test bl,4
	je Block20

 Block18:
	mov ecx,dword ptr [esp+0x60]
	and ebx,0xFFFFFFFB
	cmp ecx,ebp
	je Block20

 Block19:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x60],ebp

 Block20:
	test bl,2
	je Block23

 Block21:
	mov ecx,dword ptr [esp+0x5C]
	cmp ecx,ebp
	je Block23

 Block22:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x5C],ebp

 Block23:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [esp+0x54],0xFFFFFFFF
	call eax
	jmp Block45

 Block24:
	cmp dword ptr [esp+0x60],ebp
	je Block26

 Block25:
	lea ecx,[esp+0x18]
	push 0x95B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,8
	jmp Block27

 Block26:
	lea edx,[esp+0x64]
	push 0x661
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,0x10

 Block27:
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x64],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block29

 Block28:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block29:
	mov dword ptr [esp+0x54],8
	cmp esi,ebp
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea eax,[esp+0x3C]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x58],7
	call IWzProperty::Getitem
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov dword ptr [esp+0x58],9
	call get_unknown
	add esp,8
	mov edi,dword ptr [esp+0x58]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x54],0xA
	call _x_com_ptr<IWzCanvas>::CreateFromUnknownComPtr
	mov eax,dword ptr [esp+0x24]
	or ebx,1
	mov dword ptr [esp+0x14],ebx
	mov byte ptr [esp+0x50],9
	cmp eax,ebp
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block33:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x50],7
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebp
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	test bl,0x10
	je Block40

 Block38:
	mov ecx,dword ptr [esp+0x64]
	and ebx,0xFFFFFFEF
	cmp ecx,ebp
	je Block40

 Block39:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x64],ebp

 Block40:
	test bl,8
	je Block43

 Block41:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,ebp
	je Block43

 Block42:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],ebp

 Block43:
	mov dword ptr [esp+0x50],0xFFFFFFFF

 Block44:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block45:
	mov eax,edi
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 0x10
}
}
// CItemInfo::SETITEMINFO::~SETITEMINFO
_SUB_EXCEPTION_HANDLER(19D280)
__SUB_CLASS_THIS0(0019D280, __thiscall, 130894,  CItemInfo::SETITEMINFO, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_19D280
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
	lea ecx,[esi+0x1F4]
	mov dword ptr [esp+0x14],3
	int 3// TODO: 	mov dword ptr [ecx],offset ZMAP_LONG_ZXSTRINGA_VTABLE
	call ZMap<long, ZXString<char>, long>::RemoveAll
	mov eax,dword ptr [esi+0x1F0]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0x1E8]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	push offset ZRef<CItemInfo::SETEFFECT>::~ZRef<CItemInfo::SETEFFECT>
	push 0x3C
	push 8
	lea eax,[esi+8]
	push eax
	mov byte ptr [esp+0x24],0
	call __eh_vector_dtor_iterator
	lea ecx,[esi+4]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZArray<long>::RemoveAll
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CItemInfo::GetItemAffectDamageInfo
_SUB_EXCEPTION_HANDLER(19DB20)
__SUB_CLASS_THIS(0019DB20, __thiscall, 130767,  CItemInfo, ZRef<DamageModifiedInfo>*, ZRef<DamageModifiedInfo>*, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_19DB20
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
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x2C],1
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x1C]
	push eax
	lea edx,[esp+0x3C]
	push edx
	add ecx,0x250
	mov byte ptr [esp+0x34],2
	call ZMap<ZXString<char>, ZRef<DamageModifiedInfo>, ZXString<char>>::GetAt
	test eax,eax
	je Block2

 Block1:
	mov esi,dword ptr [esp+0x18]
	lea eax,[esp+0x1C]
	jmp Block3

 Block2:
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	lea eax,[esp+0x14]
	lea ebx,[esi+1]

 Block3:
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	or ebx,2
	mov dword ptr [esp+0x14],ebx
	test bl,1
	je Block10

 Block6:
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x14],ebx
	test esi,esi
	je Block10

 Block7:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block10

 Block8:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block10

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block10:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x2C],1
	test eax,eax
	je Block14

 Block11:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block14

 Block12:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block14

 Block13:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block14:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x2C],0
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esp+0x34]
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
// CItemOptionInfo::GetSocketOption
_SUB_EXCEPTION_HANDLER(1751A0)
__SUB_CLASS_THIS(001751A0, __thiscall, 107950,  CItemOptionInfo, ZRef<SocketOptionInfo>*, ZRef<SocketOptionInfo>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1751A0
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
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x1C]
	push eax
	lea edx,[esp+0x3C]
	push edx
	add ecx,0x1C
	mov dword ptr [esp+0x34],1
	call ZMap<long, ZRef<SocketOptionInfo>, long>::GetAt
	test eax,eax
	je Block2

 Block1:
	mov esi,dword ptr [esp+0x18]
	lea eax,[esp+0x1C]
	jmp Block3

 Block2:
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	lea eax,[esp+0x14]
	lea ebx,[esi+1]

 Block3:
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	or ebx,2
	mov dword ptr [esp+0x14],ebx
	test bl,1
	je Block10

 Block6:
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x14],ebx
	test esi,esi
	je Block10

 Block7:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block10

 Block8:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block10

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block10:
	mov esi,dword ptr [esp+0x20]
	mov byte ptr [esp+0x2C],0
	test esi,esi
	je Block14

 Block11:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block14

 Block12:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block14

 Block13:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block14:
	mov eax,dword ptr [esp+0x34]
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
// CItemInfo::EQUIPITEM::GetBonusExpRate
__SUB_CLASS_THIS(002D2C40, __thiscall, 130922,  CItemInfo::EQUIPITEM, long, long) {
__asm {

 Block0:
	sub esp,8
	push ebp
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x260]
	test eax,eax
	jle Block3

 Block1:
	mov ebp,dword ptr [esp+0x14]
	cmp ebp,eax
	jge Block3

 Block2:
	mov eax,dword ptr [esi+0x68]
	push ebx
	push edi
	push eax
	lea edi,[esi+0x60]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x68]
	push ecx
	push edi
	mov ebx,eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x8C]
	mov edi,eax
	push edx
	lea eax,[esi+0x84]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	imul edi,ebx
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x34],edi
	mov ecx,dword ptr [esi+0x260]
	mov dword ptr [esp+0x2C],ecx
	fild dword ptr [esp+0x34]
	mov eax,ebp
	fild dword ptr [esp+0x28]
	imul eax,0x64
	fdiv qword ptr [__real_4049000000000000]
	cdq
	idiv ecx
	xor ecx,ecx
	add esp,0x18
	cmp dword ptr [esi+0x214],ecx
	fmulp st(1),st(0)
	setne cl
	fild dword ptr [esp+0x14]
	fld qword ptr [__real_4059000000000000]
	fdiv st(1),st
	mov dword ptr [esp+0x1C],eax
	fxch st(2)
	fdivrp st(1),st(0)
	fild dword ptr [esp+0x1C]
	mov dword ptr [esp+0x1C],ecx
	fsubp st(2),st
	fmulp st(1),st(0)
	fild dword ptr [esp+0x1C]
	fmul qword ptr [__real_3fd0000000000000]
	fadd qword ptr [__real_3ff0000000000000]
	fmulp st(1),st(0)
	call __ftol2_sse
	pop edi
	pop ebx
	pop esi
	pop ebp
	add esp,8
	ret 4

 Block3:
	pop esi
	xor eax,eax
	pop ebp
	add esp,8
	ret 4
}
}
// CItemInfo::LevelInfo::RandomMHP::GetStatType
__SUB_CLASS_THIS0(001915E0, __thiscall, 131217,  CItemInfo::LevelInfo::RandomMHP, long) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// CItemInfo::CItemInfo
__SUB_CLASS_THIS0(005C4CA0, __thiscall, 78613,  CItemInfo, void) {
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
	mov dword ptr [TSingleton<CItemInfo>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CItemInfo>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CItemInfo::`vftable'
	mov ebx,0x1F
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, unsigned long, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, unsigned long, long>::_CalcAutoGrow
	lea ecx,[esi+0x1C]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<CItemInfo::QUESTDELIVERYITEM>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CItemInfo::QUESTDELIVERYITEM>, long>::_CalcAutoGrow
	lea ecx,[esi+0x3C]
	mov dword ptr [esi+0x34],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<CItemInfo::EQUIPITEM>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CItemInfo::EQUIPITEM>, long>::_CalcAutoGrow
	lea ecx,[esi+0x54]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<CItemInfo::BUNDLEITEM>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CItemInfo::BUNDLEITEM>, long>::_CalcAutoGrow
	lea ecx,[esi+0x6C]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZMap<char const *, ZXString<char>, ZXString<char>>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZMap<char const *, ZXString<char>, ZXString<char>>, long>::_CalcAutoGrow
	lea ecx,[esi+0x84]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZMap<char const *, ZXString<char>, ZXString<char>>, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, ZMap<char const *, ZXString<char>, ZXString<char>>, unsigned long>::_CalcAutoGrow
	lea ecx,[esi+0x9C]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<CItemInfo::SETITEMINFO>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CItemInfo::SETITEMINFO>, long>::_CalcAutoGrow
	lea ecx,[esi+0xB4]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<CItemInfo::PETFOODITEM>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CItemInfo::PETFOODITEM>, long>::_CalcAutoGrow
	lea ecx,[esi+0xCC]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<CItemInfo::BRIDLEITEM>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CItemInfo::BRIDLEITEM>, long>::_CalcAutoGrow
	lea ecx,[esi+0xE4]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<CItemInfo::LOTTERYITEM>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CItemInfo::LOTTERYITEM>, long>::_CalcAutoGrow
	lea ecx,[esi+0xFC]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<CItemInfo::EXTENDEXPIREDATEITEM>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CItemInfo::EXTENDEXPIREDATEITEM>, long>::_CalcAutoGrow
	lea ecx,[esi+0x114]
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<CItemInfo::EXPIREDPROTECTINGITEM>, long>::`vftable'
	push 0x64
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CItemInfo::EXPIREDPROTECTINGITEM>, long>::_CalcAutoGrow
	lea ecx,[esi+0x12C]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<CItemInfo::PROTECTONDIEITEM>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CItemInfo::PROTECTONDIEITEM>, long>::_CalcAutoGrow
	lea ecx,[esi+0x144]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<CItemInfo::KARMASCISSORSITEM>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CItemInfo::KARMASCISSORSITEM>, long>::_CalcAutoGrow
	lea ecx,[esi+0x170]
	int 3// TODO: 	mov dword ptr [esi+0x15C],offset ZList<long>::`vftable'
	mov dword ptr [esi+0x164],edi
	mov dword ptr [esi+0x168],edi
	mov dword ptr [esi+0x16C],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<CItemInfo::AREABUFFITEM>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CItemInfo::AREABUFFITEM>, long>::_CalcAutoGrow
	lea ecx,[esi+0x188]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<CItemInfo::INCLEVELITEM>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CItemInfo::INCLEVELITEM>, long>::_CalcAutoGrow
	lea ecx,[esi+0x1A0]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<CItemInfo::GACHAPONITEMINFO>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CItemInfo::GACHAPONITEMINFO>, long>::_CalcAutoGrow
	mov dword ptr [esi+0x1B8],edi
	mov dword ptr [esi+0x1BC],edi
	mov dword ptr [esi+0x1C0],edi
	mov dword ptr [esi+0x1C4],edi
	mov dword ptr [esi+0x1C8],edi
	mov dword ptr [esi+0x1CC],edi
	mov dword ptr [esi+0x1D0],edi
	mov dword ptr [esi+0x1D4],edi
	mov dword ptr [esi+0x1D8],edi
	lea ecx,[esi+0x1E0]
	mov dword ptr [esi+0x1DC],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],ZMAP_LONG_LONG_VTABLE
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, long, long>::_CalcAutoGrow
	lea ecx,[esi+0x1F8]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<CItemInfo::COUPLECHAIRITEM>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CItemInfo::COUPLECHAIRITEM>, long>::_CalcAutoGrow
	lea ecx,[esi+0x224]
	int 3// TODO: 	mov dword ptr [esi+0x210],offset ZList<CItemInfo::SET_EFFECT>::`vftable'
	mov dword ptr [esi+0x218],edi
	mov dword ptr [esi+0x21C],edi
	mov dword ptr [esi+0x220],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, int, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, int, long>::_CalcAutoGrow
	int 3// TODO: 	mov dword ptr [esi+0x23C],offset ZList<ZRef<ITEMNAME>>::`vftable'
	mov dword ptr [esi+0x244],edi
	lea ecx,[esi+0x250]
	mov dword ptr [esi+0x248],edi
	mov dword ptr [esi+0x24C],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, ZRef<DamageModifiedInfo>, ZXString<char>>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<ZXString<char>, ZRef<DamageModifiedInfo>, ZXString<char>>::_CalcAutoGrow
	lea ecx,[esi+0x268]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<ZArray<ZXString<char>>>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<ZArray<ZXString<char>>>, long>::_CalcAutoGrow
	lea ecx,[esi+0x280]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMAP_LONG_ZXSTRINGA_VTABLE
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZXString<char>, long>::_CalcAutoGrow
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	ret
}
}
// CItemInfo::IsEquipItem
__SUB_CLASS_THIS(000C6320, __thiscall, 130680,  CItemInfo, int32_t, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push eax
	call CItemInfo::GetEquipItem
	neg eax
	sbb eax,eax
	neg eax
	ret 4
}
}
// CItemInfo::GetGachaponMsg
_SUB_EXCEPTION_HANDLER(1C0570)
__SUB_CLASS_THIS(001C0570, __thiscall, 130746,  CItemInfo, ZXString<char>*, ZXString<char>*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1C0570
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
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x20],ebx
	call ZRef<CItemInfo::GACHAPONITEMINFO>::_Alloc
	mov ecx,dword ptr [esp+0x20]
	xor eax,eax
	mov dword ptr [ecx],eax
	mov dword ptr [ecx+4],eax
	mov dword ptr [ecx+8],eax
	mov dword ptr [ecx+0xC],eax
	mov dword ptr [ecx+0x10],eax
	mov dword ptr [ecx+0x14],eax
	mov dword ptr [ecx+0x18],eax
	mov edi,1
	mov dword ptr [ecx+0x1C],eax
	mov dword ptr [esp+0x2C],edi
	mov dword ptr [ecx+0x20],eax
	mov dword ptr [esp+0x18],ebx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	lea ecx,[esi+0x1A0]
	mov byte ptr [esp+0x34],2
	call ZMap<long, ZRef<CItemInfo::GACHAPONITEMINFO>, long>::GetAt
	test eax,eax
	jne Block6

 Block1:
	mov ebp,dword ptr [esp+0x34]
	lea edx,[esp+0x18]
	push edx
	mov ecx,ebp
	mov dword ptr [ebp],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x14],edi
	mov byte ptr [esp+0x2C],bl
	cmp eax,ebx
	je Block5

 Block2:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block5

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block5:
	mov eax,ebp
	jmp Block13

 Block6:
	mov ecx,dword ptr [esp+0x20]
	mov eax,dword ptr [ecx+0x10]
	cmp eax,ebx
	je Block8

 Block7:
	cmp dword ptr [eax-4],5
	je Block9

 Block8:
	lea eax,[esp+0x18]
	push eax
	jmp Block12

 Block9:
	mov eax,dword ptr [esp+0x3C]
	cmp eax,4
	ja Block11

 Block10:
	mov ecx,dword ptr [ecx+0x10]
	lea eax,[ecx+eax*4]
	push eax
	jmp Block12

 Block11:
	lea edx,[esp+0x18]
	push edx

 Block12:
	mov esi,dword ptr [esp+0x38]
	mov ecx,esi
	mov dword ptr [esi],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x14],edi
	mov byte ptr [esp+0x2C],bl
	call ZRef<CItemInfo::GACHAPONITEMINFO>::~ZRef<CItemInfo::GACHAPONITEMINFO>
	mov eax,esi

 Block13:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 0xC
}
}
// CItemInfo::LOTTERY_ENTITY::~LOTTERY_ENTITY
_SUB_EXCEPTION_HANDLER(19D860)
__SUB_CLASS_THIS0(0019D860, __thiscall, 130828,  CItemInfo::LOTTERY_ENTITY, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_19D860
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
	mov eax,dword ptr [esi+0x18]
	mov dword ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0x10]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov esi,dword ptr [esi+0xC]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block6

 Block5:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CItemInfo::QUESTDELIVERYITEM::IsAllowedDeliveryQuest
__SUB_CLASS_THIS(002AE900, __thiscall, 130796,  CItemInfo::QUESTDELIVERYITEM, int32_t, uint16_t) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+4]
	push esi
	push edi
	mov edi,1
	test eax,eax
	jne Block7

 Block1:
	mov ecx,dword ptr [ecx+0x2C]
	mov dword ptr [esp+8],ecx
	test ecx,ecx
	je Block12

 Block2:
	mov si,word ptr [esp+0x10]
	nop

 Block3:
	lea eax,[esp+8]
	push eax
	call ZList<unsigned short>::GetNext
	add esp,4
	cmp word ptr [eax],si
	je Block6

 Block4:
	cmp dword ptr [esp+8],0
	jne Block3

 Block5:
	mov eax,edi
	pop edi
	pop esi
	pop ecx
	ret 4

 Block6:
	pop edi
	xor eax,eax
	pop esi
	pop ecx
	ret 4

 Block7:
	cmp eax,1
	jne Block12

 Block8:
	mov ecx,dword ptr [ecx+0x18]
	mov dword ptr [esp+8],ecx
	test ecx,ecx
	je Block12

 Block9:
	mov si,word ptr [esp+0x10]
	mov edi,edi

 Block10:
	lea ecx,[esp+8]
	push ecx
	call ZList<unsigned short>::GetNext
	add esp,4
	cmp word ptr [eax],si
	je Block6

 Block11:
	cmp dword ptr [esp+8],0
	jne Block10

 Block12:
	mov eax,edi
	pop edi
	pop esi
	pop ecx
	ret 4
}
}
// CItemInfo::GetEquipItem
_SUB_EXCEPTION_HANDLER(1C0820)
__SUB_CLASS_THIS(001C0820, __thiscall, 130679,  CItemInfo, const CItemInfo::EQUIPITEM*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1C0820
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
	mov esi,ecx
	lea eax,[esi+0x34]
	push eax
	lea ecx,[esp+0x18]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	xor ebx,ebx
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x20],ebx
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x40]
	lea ebp,[esi+0x3C]
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x3C],1
	call ZMap<long, ZRef<CItemInfo::EQUIPITEM>, long>::GetAt
	test eax,eax
	je Block2

 Block1:
	mov esi,dword ptr [esp+0x20]
	jmp Block13

 Block2:
	mov edi,dword ptr [esp+0x3C]
	lea eax,[esp+0x18]
	push edi
	push eax
	call get_equip_data_path
	add esp,8
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x34],2
	cmp eax,ebx
	je Block4

 Block3:
	cmp word ptr [eax],bx
	jne Block9

 Block4:
	mov byte ptr [esp+0x34],1
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],bl
	call ZRef<CItemInfo::EQUIPITEM>::~ZRef<CItemInfo::EQUIPITEM>
	mov eax,dword ptr [esp+0x14]
	add dword ptr [eax+4],0xFFFFFFFF
	jne Block8

 Block7:
	mov dword ptr [eax],ebx

 Block8:
	xor eax,eax
	jmp Block16

 Block9:
	push eax
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	call CItemInfo::RegisterEquipItemInfo
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x38],3
	call ZRef<CItemInfo::EQUIPITEM>::op_assign_copy
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x34],2
	call ZRef<CItemInfo::EQUIPITEM>::~ZRef<CItemInfo::EQUIPITEM>
	mov esi,dword ptr [esp+0x20]
	cmp esi,ebx
	je Block11

 Block10:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x40]
	push eax
	mov ecx,ebp
	call ZMap<long, ZRef<CItemInfo::EQUIPITEM>, long>::Insert

 Block11:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x34],1
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],bl
	call ZRef<CItemInfo::EQUIPITEM>::~ZRef<CItemInfo::EQUIPITEM>
	mov eax,dword ptr [esp+0x14]
	add dword ptr [eax+4],0xFFFFFFFF
	jne Block15

 Block14:
	mov dword ptr [eax],ebx

 Block15:
	mov eax,esi

 Block16:
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
// CItemInfo::GetExclusiveClothesBodyPart
__SUB_CLASS_THIS(001014C0, __thiscall, 130708,  CItemInfo, long, ZRef<GW_ItemSlotBase>*, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	mov ecx,dword ptr [eax+0x2C]
	push esi
	mov esi,dword ptr [eax+0x34]
	test edx,edx
	je Block8

 Block1:
	mov eax,0x68DB8BAD
	imul edx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x69
	jne Block4

 Block2:
	test esi,esi
	je Block4

 Block3:
	mov eax,6
	pop esi
	ret 8

 Block4:
	cmp eax,0x6A
	jne Block11

 Block5:
	test ecx,ecx
	je Block11

 Block6:
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x69
	jne Block11

 Block7:
	mov eax,5
	pop esi
	ret 8

 Block8:
	test ecx,ecx
	je Block11

 Block9:
	test esi,esi
	je Block11

 Block10:
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	sub eax,0x69
	neg eax
	sbb eax,eax
	and eax,0xFFFFFFFB
	add eax,5
	pop esi
	ret 8

 Block11:
	xor eax,eax
	pop esi
	ret 8
}
}
// CItemInfo::EQUIPITEM::_ZtlSecureGet_nRUC
__SUB_CLASS0(001000C0, __fastcall, 130915,  CItemInfo::EQUIPITEM, unsigned char) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xAC]
	push eax
	add ecx,0xA8
	push ecx
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	ret
}
}
// CItemInfo::GetItemCommonCRC
_SUB_EXCEPTION_HANDLER(1B3A60)
__SUB_CLASS_THIS(001B3A60, __thiscall, 130721,  CItemInfo, unsigned long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B3A60
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
	push 0
	push 0
	push 0
	lea eax,[esp+0x28]
	push 4
	push eax
	mov dword ptr [esp+0x30],0x5F
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push 0
	lea ecx,[esp+0x40]
	push 4
	push ecx
	mov dword ptr [esp+0x48],eax
	call CCrc32::GetCrc32
	mov edi,dword ptr [esp+0x64]
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x74]
	push 4
	push edx
	mov ebx,eax
	mov dword ptr [esp+0x7C],edi
	call CCrc32::GetCrc32
	add esp,0x48
	push edi
	mov ecx,esi
	xor ebx,eax
	call CItemInfo::GetItemIconCRC
	xor ebx,eax
	push edi
	lea eax,[esp+0x24]
	push eax
	mov ecx,esi
	call CItemInfo::GetItemDesc
	mov ebp,eax
	push edi
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x34],0
	call CItemInfo::GetItemName
	push ebp
	lea edx,[esp+0x18]
	push edx
	mov ecx,eax
	mov byte ptr [esp+0x34],1
	call ZXString<char>::op_add_1
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x2C],3
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x2C],4
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block7

 Block5:
	cmp byte ptr [eax],0
	je Block7

 Block6:
	mov esi,dword ptr [eax-4]
	push 1
	push 0
	lea ecx,[esp+0x1C]
	call ZXString<char>::GetBuffer
	push 0
	push 0
	push 0
	push 0
	push esi
	push eax
	call CCrc32::GetCrc32
	add esp,0x18
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	xor ebx,eax
	call ZXString<char>::ReleaseBuffer
	mov eax,dword ptr [esp+0x14]

 Block7:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov eax,ebx
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
// CItemInfo::IsCashItem
__SUB_CLASS_THIS(001010D0, __thiscall, 130682,  CItemInfo, int32_t, GW_ItemSlotBase*) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	push eax
	mov ecx,esi
	call CItemInfo::IsCashItem_1
	test eax,eax
	jne Block3

 Block1:
	mov eax,dword ptr [edi+0x18]
	or eax,dword ptr [edi+0x1C]
	jne Block3

 Block2:
	pop edi
	pop esi
	ret 4

 Block3:
	pop edi
	mov eax,1
	pop esi
	ret 4
}
}
// CItemInfo::RegisterLotteryItem
_SUB_EXCEPTION_HANDLER(1C31B0)
__SUB_CLASS_THIS(001C31B0, __thiscall, 130738,  CItemInfo, void, long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1C31B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
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
	xor ebx,ebx
	push ebx
	push ebx
	push ecx
	mov dword ptr [ebp+0x50],esp
	mov ecx,esp
	push offset _S_REWARD
	mov dword ptr [ebp-4],ebx
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x74]
	mov byte ptr [ebp-4],1
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp+0x5C],ebx
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
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],4
	jne Block8

 Block6:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	cmp eax,ebx
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov esi,dword ptr [ebp+0x5C]
	cmp esi,ebx
	sete al
	test al,al
	je Block14

 Block10:
	mov byte ptr [ebp-4],0
	cmp esi,ebx
	je Block12

 Block11:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block12:
	mov eax,dword ptr [ebp+0x74]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,ebx
	je Block105

 Block13:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block105

 Block14:
	lea ecx,[ebp+0x48]
	mov dword ptr [ebp+0x4C],ebx
	call ZRef<CItemInfo::LOTTERYITEM>::_Alloc
	mov edi,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],5
	mov dword ptr [edi+4],ebx
	mov dword ptr [ebp+0x54],ebx
	jmp Block16

 Block16:
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [ebp+0x54]
	mov eax,esp
	push ebx
	push ebx
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x50],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],6
	cmp esi,ebx
	je Block1

 Block17:
	lea edx,[ebp+0x30]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x50],esi
	cmp eax,ebx
	je Block20

 Block18:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x44]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x44]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [ebp+0x50],esi
	jge Block20

 Block19:
	cmp eax,0x80004002
	jne Block4

 Block20:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],9
	jne Block23

 Block21:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	cmp eax,ebx
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block24:
	cmp esi,ebx
	sete al
	test al,al
	jne Block98

 Block25:
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<CItemInfo::LOTTERY_ENTITY>::InsertBefore
	push 1
	push ecx
	mov ebx,eax
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_PROB
	mov dword ptr [ebp+0x58],ebx
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0xA
	test esi,esi
	je Block1

 Block26:
	lea ecx,[ebp-0x7C]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x7C],8
	mov dword ptr [ebx+4],eax
	mov byte ptr [ebp-4],9
	jne Block29

 Block27:
	mov eax,dword ptr [ebp-0x74]
	xor edx,edx
	mov word ptr [ebp-0x7C],dx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[ebp-0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov ecx,dword ptr [ebx+4]
	add dword ptr [edi+4],ecx
	push 0
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_ITEM__1
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x1C]
	mov byte ptr [ebp-4],0xC
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x1C],8
	mov dword ptr [ebx],eax
	mov byte ptr [ebp-4],9
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	push 0
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_COUNT__1
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x5C]
	mov byte ptr [ebp-4],0xE
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xF
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x5C],8
	mov dword ptr [ebx+8],eax
	mov byte ptr [ebp-4],9
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_EFFECT__3
	call _xbstr_t::_ctor_1
	lea edx,[ebp+0x20]
	mov byte ptr [ebp-4],0x10
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x11
	jne Block40

 Block39:
	mov eax,dword ptr [eax+8]
	jmp Block41

 Block40:
	mov eax,offset _S___3

 Block41:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call WideCharToMultiByte
	call __alloca_probe_16
	mov edi,esp
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_EFFECT__3
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x3C]
	mov byte ptr [ebp-4],0x12
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x11
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x13
	jne Block43

 Block42:
	mov eax,dword ptr [eax+8]
	jmp Block44

 Block43:
	mov eax,offset _S___3

 Block44:
	push 0
	push 0
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call WideCharToMultiByte
	test edi,edi
	jne Block47

 Block45:
	mov eax,dword ptr [ebx+0xC]
	test eax,eax
	je Block50

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [ebx+0xC],edi
	jmp Block50

 Block47:
	mov eax,edi
	lea edx,[eax+1]

 Block48:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block48

 Block49:
	sub eax,edx
	mov ebx,eax
	push ebx
	push edi
	mov edi,dword ptr [ebp+0x58]
	push 0
	push ebx
	lea ecx,[edi+0xC]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	lea ecx,[edi+0xC]
	call ZXString<char>::ReleaseBuffer
	mov ebx,edi

 Block50:
	mov edi,8
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x3C],di
	jne Block53

 Block51:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[ebp-0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x20],di
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_WORLDMSG
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x2C]
	mov byte ptr [ebp-4],0x14
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0x15
	cmp word ptr [eax],di
	jne Block60

 Block59:
	mov eax,dword ptr [eax+8]
	jmp Block61

 Block60:
	mov eax,offset _S___3

 Block61:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call WideCharToMultiByte
	call __alloca_probe_16
	mov edi,esp
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_WORLDMSG
	call _xbstr_t::_ctor_1
	lea eax,[ebp]
	mov byte ptr [ebp-4],0x16
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x17
	jne Block63

 Block62:
	mov eax,dword ptr [eax+8]
	jmp Block64

 Block63:
	mov eax,offset _S___3

 Block64:
	push 0
	push 0
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call WideCharToMultiByte
	test edi,edi
	jne Block67

 Block65:
	mov eax,dword ptr [ebx+0x10]
	test eax,eax
	je Block70

 Block66:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [ebx+0x10],edi
	jmp Block70

 Block67:
	mov eax,edi
	lea edx,[eax+1]

 Block68:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block68

 Block69:
	sub eax,edx
	mov ebx,eax
	push ebx
	push edi
	mov edi,dword ptr [ebp+0x58]
	push 0
	push ebx
	lea ecx,[edi+0x10]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	lea ecx,[edi+0x10]
	call ZXString<char>::ReleaseBuffer
	mov ebx,edi

 Block70:
	mov edi,8
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp],di
	jne Block73

 Block71:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block74:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x2C],di
	jne Block77

 Block75:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block78:
	push 0
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_PERIOD
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x4C]
	mov byte ptr [ebp-4],0x18
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x19
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x14],eax
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x4C],di
	jne Block81

 Block79:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea ecx,[ebp-0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block82:
	cmp dword ptr [ebx+0x14],0
	jne Block97

 Block83:
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_DATEEXPIRE
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x8C]
	mov byte ptr [ebp-4],0x1A
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x1B
	jne Block85

 Block84:
	mov eax,dword ptr [eax+8]
	jmp Block86

 Block85:
	mov eax,offset _S___3

 Block86:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call WideCharToMultiByte
	call __alloca_probe_16
	mov edi,esp
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_DATEEXPIRE
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x6C]
	mov byte ptr [ebp-4],0x1C
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x1B
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x1D
	jne Block88

 Block87:
	mov eax,dword ptr [eax+8]
	jmp Block89

 Block88:
	mov eax,offset _S___3

 Block89:
	push 0
	push 0
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call WideCharToMultiByte
	push edi
	lea ecx,[ebx+0x18]
	call ZXString<char>::AssignCStr
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0x1B
	jne Block92

 Block90:
	mov eax,dword ptr [ebp-0x64]
	xor ecx,ecx
	mov word ptr [ebp-0x6C],cx
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea edx,[ebp-0x6C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],9
	jne Block96

 Block94:
	xor eax,eax
	mov word ptr [ebp-0x8C],ax
	mov eax,dword ptr [ebp-0x84]
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea ecx,[ebp-0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block97:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],5
	call eax
	inc dword ptr [ebp+0x54]
	mov edi,dword ptr [ebp+0x4C]
	mov esi,dword ptr [ebp+0x5C]
	xor ebx,ebx
	jmp Block16

 Block98:
	mov byte ptr [ebp-4],5
	cmp esi,ebx
	je Block100

 Block99:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block100:
	lea eax,[ebp+0x48]
	push eax
	lea ecx,[ebp+0x70]
	push ecx
	mov ecx,dword ptr [ebp+0x40]
	add ecx,0xE4
	call ZMap<long, ZRef<CItemInfo::LOTTERYITEM>, long>::Insert
	mov esi,dword ptr [ebp+0x4C]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],4
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block103

 Block101:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block103

 Block102:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block103:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp+0x74]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block105

 Block104:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block105:
	lea esp,[ebp-0x9C]
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
// CItemInfo::GetQuestDeliveryItem
_SUB_EXCEPTION_HANDLER(2AEBC0)
__SUB_CLASS_THIS(002AEBC0, __thiscall, 130737,  CItemInfo, const ZRef<CItemInfo::QUESTDELIVERYITEM>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2AEBC0
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
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x1C]
	push eax
	lea edx,[esp+0x3C]
	push edx
	add ecx,0x1C
	mov dword ptr [esp+0x34],1
	call ZMap<long, ZRef<CItemInfo::QUESTDELIVERYITEM>, long>::GetAt
	test eax,eax
	je Block2

 Block1:
	mov esi,dword ptr [esp+0x18]
	lea eax,[esp+0x1C]
	jmp Block3

 Block2:
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	lea eax,[esp+0x14]
	lea ebx,[esi+1]

 Block3:
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	or ebx,2
	mov dword ptr [esp+0x14],ebx
	test bl,1
	je Block10

 Block6:
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x14],ebx
	test esi,esi
	je Block10

 Block7:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block10

 Block8:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block10

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block10:
	mov esi,dword ptr [esp+0x20]
	mov byte ptr [esp+0x2C],0
	test esi,esi
	je Block14

 Block11:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block14

 Block12:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block14

 Block13:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block14:
	mov eax,dword ptr [esp+0x34]
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
// CItemInfo::IterateItemNameforScanner
_SUB_EXCEPTION_HANDLER(1B5FA0)
__SUB_CLASS_THIS0(001B5FA0, __thiscall, 78614,  CItemInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B5FA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA0
	push ebx
	push ebp
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB0]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x38],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x80]
	push eax
	call esi
	lea ecx,[esp+0x80]
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
	lea edx,[esp+0x60]
	push edx
	mov dword ptr [esp+0xBC],0
	call esi
	lea eax,[esp+0x60]
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
	lea ecx,[esp+0x88]
	push ecx
	lea edx,[esp+0x6C]
	push edx
	push ecx
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	mov bl,1
	push offset _S_ETCSCANBLOCKIMG
	mov byte ptr [esp+0xD0],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xCC],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0xA4]
	mov byte ptr [esp+0xCC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC0],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x50],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	mov byte ptr [esp+0xB8],5
	cmp word ptr [esp+0x90],bp
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x98]
	xor ecx,ecx
	mov word ptr [esp+0x90],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x90]
	push edx
	call ebx

 Block13:
	mov byte ptr [esp+0xB8],6
	cmp word ptr [esp+0x60],bp
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x60]
	push ecx
	call ebx

 Block17:
	mov byte ptr [esp+0xB8],7
	cmp word ptr [esp+0x80],bp
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x88]
	xor edx,edx
	mov word ptr [esp+0x80],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x80]
	push eax
	call ebx

 Block21:
	mov ecx,dword ptr [esp+0x4C]
	test ecx,ecx
	je Block23

 Block22:
	push ecx
	mov eax,esp
	mov dword ptr [eax],ecx
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x14],esp
	push ecx
	call eax
	mov ecx,dword ptr [esp+0x3C]
	call CItemInfo::LoadNoScanItem

 Block23:
	lea ecx,[esp+0x70]
	push ecx
	call esi
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	lea eax,[esp+0x50]
	push eax
	mov byte ptr [esp+0xBC],8
	call esi
	lea ecx,[esp+0x50]
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
	push 0
	push 0
	lea edx,[esp+0x78]
	push edx
	lea eax,[esp+0x5C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x112C
	mov bl,9
	push ecx
	mov byte ptr [esp+0xD4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xCC],0xA
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea edx,[esp+0xB4]
	mov byte ptr [esp+0xCC],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC0],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x14],0
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
	mov byte ptr [esp+0xB8],0xD
	cmp word ptr [esp+0xA0],bp
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [esp+0xA0],ax
	mov eax,dword ptr [esp+0xA8]
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[esp+0xA0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov byte ptr [esp+0xB8],0xE
	cmp word ptr [esp+0x50],bp
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov byte ptr [esp+0xB8],0xF
	cmp word ptr [esp+0x70],bp
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea edx,[esp+0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block46

 Block45:
	push ecx
	mov ecx,esp
	mov dword ptr [ecx],eax
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x18],esp
	push eax
	call edx
	mov ecx,dword ptr [esp+0x3C]
	call CItemInfo::IterateItemNameforScanner_0

 Block46:
	lea eax,[esp+0x18]
	push eax
	call esi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0xBC],0x10
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	push 0
	push 0
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x112D
	mov bl,0x11
	push eax
	mov byte ptr [esp+0xD4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xCC],0x12
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0xD0],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC0],0x13
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block55

 Block53:
	cmp eax,0x80004002
	je Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	mov byte ptr [esp+0xB8],bl
	cmp word ptr [esp+0x3C],bp
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov byte ptr [esp+0xB8],0x10
	cmp word ptr [esp+0x28],bp
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov byte ptr [esp+0xB8],0xF
	cmp word ptr [esp+0x18],bp
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block69

 Block68:
	push ecx
	mov ecx,esp
	mov dword ptr [ecx],eax
	mov edx,dword ptr [eax]
	mov dword ptr [esp+0x18],esp
	push eax
	mov eax,dword ptr [edx+4]
	call eax
	mov ecx,dword ptr [esp+0x3C]
	call CItemInfo::IterateItemNameforScanner_0

 Block69:
	lea ecx,[esp+0x28]
	push ecx
	call esi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block71

 Block70:
	push eax
	call _com_issue_error

 Block71:
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0xBC],0x14
	call esi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block73

 Block72:
	push eax
	call _com_issue_error

 Block73:
	push 0
	push 0
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x112E
	mov bl,0x15
	push ecx
	mov byte ptr [esp+0xD4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xCC],0x16
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	lea edx,[esp+0x50]
	mov byte ptr [esp+0xCC],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC0],0x17
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block78

 Block76:
	cmp eax,0x80004002
	je Block78

 Block77:
	push eax
	call _com_issue_error

 Block78:
	mov byte ptr [esp+0xB8],bl
	cmp word ptr [esp+0x3C],bp
	jne Block81

 Block79:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block82:
	mov byte ptr [esp+0xB8],0x14
	cmp word ptr [esp+0x18],bp
	jne Block85

 Block83:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block86:
	mov byte ptr [esp+0xB8],0xF
	cmp word ptr [esp+0x28],bp
	jne Block89

 Block87:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block92

 Block91:
	push ecx
	mov ecx,esp
	mov dword ptr [ecx],eax
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x18],esp
	push eax
	call edx
	mov ecx,dword ptr [esp+0x3C]
	call CItemInfo::IterateItemNameforScanner_0

 Block92:
	lea eax,[esp+0x28]
	push eax
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block94

 Block93:
	push eax
	call _com_issue_error

 Block94:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0xBC],0x18
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	push 0
	push 0
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x112F
	mov bl,0x19
	push eax
	mov byte ptr [esp+0xD4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xCC],0x1A
	jne Block98

 Block97:
	push 0x80004003
	call _com_issue_error

 Block98:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0xD0],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC0],0x1B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block101

 Block99:
	cmp eax,0x80004002
	je Block101

 Block100:
	push eax
	call _com_issue_error

 Block101:
	mov byte ptr [esp+0xB8],bl
	cmp word ptr [esp+0x3C],bp
	jne Block104

 Block102:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block105:
	mov byte ptr [esp+0xB8],0x18
	cmp word ptr [esp+0x18],bp
	jne Block108

 Block106:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block109:
	mov byte ptr [esp+0xB8],0xF
	cmp word ptr [esp+0x28],bp
	jne Block112

 Block110:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block113

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block112:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block113:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block115

 Block114:
	push ecx
	mov ecx,esp
	mov dword ptr [ecx],eax
	mov edx,dword ptr [eax]
	mov dword ptr [esp+0x18],esp
	push eax
	mov eax,dword ptr [edx+4]
	call eax
	mov ecx,dword ptr [esp+0x3C]
	call CItemInfo::IterateItemNameforScanner_0

 Block115:
	lea ecx,[esp+0x28]
	push ecx
	call esi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block117

 Block116:
	push eax
	call _com_issue_error

 Block117:
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0xBC],0x1C
	call esi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block119

 Block118:
	push eax
	call _com_issue_error

 Block119:
	push 0
	push 0
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1130
	mov bl,0x1D
	push ecx
	mov byte ptr [esp+0xD4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xCC],0x1E
	jne Block121

 Block120:
	push 0x80004003
	call _com_issue_error

 Block121:
	lea edx,[esp+0x50]
	mov byte ptr [esp+0xCC],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC0],0x1F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block124

 Block122:
	cmp eax,0x80004002
	je Block124

 Block123:
	push eax
	call _com_issue_error

 Block124:
	mov byte ptr [esp+0xB8],bl
	cmp word ptr [esp+0x3C],bp
	jne Block127

 Block125:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block128:
	mov byte ptr [esp+0xB8],0x1C
	cmp word ptr [esp+0x18],bp
	jne Block131

 Block129:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block132:
	mov byte ptr [esp+0xB8],0xF
	cmp word ptr [esp+0x28],bp
	jne Block135

 Block133:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block136

 Block134:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block136

 Block135:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block136:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block138

 Block137:
	push ecx
	mov ecx,esp
	mov dword ptr [ecx],eax
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x18],esp
	push eax
	call edx
	mov ecx,dword ptr [esp+0x3C]
	call CItemInfo::IterateItemNameforScanner_0

 Block138:
	lea eax,[esp+0x28]
	push eax
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block140

 Block139:
	push eax
	call _com_issue_error

 Block140:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0xBC],0x20
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block142

 Block141:
	push eax
	call _com_issue_error

 Block142:
	push 0
	push 0
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x1131
	mov bl,0x21
	push eax
	mov byte ptr [esp+0xD4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xCC],0x22
	jne Block144

 Block143:
	push 0x80004003
	call _com_issue_error

 Block144:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0xD0],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC0],0x23
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block147

 Block145:
	cmp eax,0x80004002
	je Block147

 Block146:
	push eax
	call _com_issue_error

 Block147:
	mov byte ptr [esp+0xB8],bl
	cmp word ptr [esp+0x3C],bp
	jne Block150

 Block148:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block151:
	mov byte ptr [esp+0xB8],0x20
	cmp word ptr [esp+0x18],bp
	jne Block154

 Block152:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block155

 Block154:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block155:
	mov byte ptr [esp+0xB8],0xF
	cmp word ptr [esp+0x28],bp
	jne Block158

 Block156:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block159:
	mov esi,dword ptr [esp+0x10]
	test esi,esi
	je Block161

 Block160:
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x18],esp
	push esi
	call eax
	mov ecx,dword ptr [esp+0x3C]
	call CItemInfo::IterateItemNameforScanner_0

 Block161:
	mov byte ptr [esp+0xB8],7
	test esi,esi
	je Block163

 Block162:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block163:
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	test eax,eax
	je Block165

 Block164:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block165:
	mov ecx,dword ptr [esp+0xB0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0xAC
	ret
}
}
// CItemInfo::GetItemSlot
_SUB_EXCEPTION_HANDLER(1C3B20)
__SUB_CLASS_THIS(001C3B20, __thiscall, 130752,  CItemInfo, ZRef<GW_ItemSlotBase>*, ZRef<GW_ItemSlotBase>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1C3B20
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
	mov dword ptr [esp+0x14],edi
	xor esi,esi
	mov dword ptr [esp+0x1C],esi
	mov ebx,dword ptr [esp+0x44]
	mov eax,0x431BDE83
	imul ebx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	lea edx,[edx+eax-1]
	cmp edx,4
	ja Block35

 Block1:
	cmp EDX, 0
je Block2
cmp EDX, 1
je Block7
cmp EDX, 2
je Block7
cmp EDX, 3
je Block7
cmp EDX, 4
je Block16


 Block2:
	push ebx
	call CItemInfo::GetEquipItem
	mov edi,eax
	cmp edi,esi
	je Block35

 Block3:
	push 0x139
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x44],eax
	mov dword ptr [esp+0x38],esi
	cmp eax,esi
	je Block5

 Block4:
	mov ecx,eax
	call GW_ItemSlotEquip::_ctor_default
	mov ebp,eax
	jmp Block6

 Block5:
	xor ebp,ebp

 Block6:
	push ebx
	lea ecx,[ebp+0xC]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call TSecType<long>::SetData
	mov ecx,dword ptr [edi+0xA4]
	push ecx
	lea edx,[edi+0xA0]
	push edx
	call _ZtlSecureFuseHelper<unsigned char>::call
	lea esi,[ebp+0x49]
	add esp,8
	mov edx,esi
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	lea edx,[esi+6]
	xor cl,cl
	mov dword ptr [esi+2],eax
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [esi+8],eax
	mov eax,dword ptr [edi+0xB4]
	push eax
	lea ecx,[edi+0xB0]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0xC]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x10],eax
	mov edx,dword ptr [edi+0xBC]
	push edx
	lea eax,[edi+0xB8]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0x14]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x18],eax
	mov ecx,dword ptr [edi+0xC4]
	push ecx
	lea edx,[edi+0xC0]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0x1C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x20],eax
	mov eax,dword ptr [edi+0xCC]
	push eax
	lea ecx,[edi+0xC8]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0x24]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x28],eax
	mov edx,dword ptr [edi+0xD4]
	push edx
	lea eax,[edi+0xD0]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0x2C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x30],eax
	mov ecx,dword ptr [edi+0xDC]
	push ecx
	lea edx,[edi+0xD8]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0x34]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x38],eax
	mov eax,dword ptr [edi+0xE4]
	push eax
	lea ecx,[edi+0xE0]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0x3C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x40],eax
	mov edx,dword ptr [edi+0xEC]
	push edx
	lea eax,[edi+0xE8]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0x44]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x48],eax
	mov ecx,dword ptr [edi+0xF4]
	push ecx
	lea edx,[edi+0xF0]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0x4C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x50],eax
	mov eax,dword ptr [edi+0xFC]
	push eax
	lea ecx,[edi+0xF8]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0x54]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x58],eax
	mov edx,dword ptr [edi+0x104]
	push edx
	lea eax,[edi+0x100]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0x5C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x60],eax
	mov ecx,dword ptr [edi+0x10C]
	push ecx
	lea edx,[edi+0x108]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0x64]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x68],eax
	mov eax,dword ptr [edi+0x114]
	push eax
	lea ecx,[edi+0x110]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0x6C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x70],eax
	mov edx,dword ptr [edi+0x11C]
	push edx
	lea eax,[edi+0x118]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0x74]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x78],eax
	mov ecx,dword ptr [edi+0x124]
	push ecx
	lea edx,[edi+0x120]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[esi+0x7C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x80],eax
	lea edx,[esi+0x84]
	xor ecx,ecx
	mov byte ptr [ebp+0x30],0
	call _ZtlSecureTearHelper<short>::call
	mov ecx,dword ptr [esp+0x14]
	push ebx
	mov dword ptr [esi+0x88],eax
	call CItemInfo::IsGrowthItem
	test eax,eax
	setne dl
	mov ecx,esi
	call GW_ItemSlotEquipBase::_ZtlSecurePut_nLevel
	mov ecx,edi
	call CItemInfo::EQUIPITEM::PickLevelUpType
	mov dl,al
	mov ecx,esi
	call GW_ItemSlotEquipBase::_ZtlSecurePut_nLevelUpType
	lea edx,[esi+0x98]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xA0],eax
	mov edx,dword ptr [edi+0x260]
	mov ecx,esi
	call GW_ItemSlotEquipBase::_ZtlSecurePut_nDurability
	xor eax,eax
	lea edx,[esi+0xB0]
	xor ecx,ecx
	mov dword ptr [ebp+0x28],eax
	mov dword ptr [ebp+0x2C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xB8],eax
	mov esi,dword ptr [esp+0x40]
	mov dword ptr [esi+4],ebp
	add ebp,4
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,esi
	jmp Block36

 Block7:
	push ebx
	lea eax,[esp+0x48]
	push eax
	call CItemInfo::GetItemProp
	mov edi,dword ptr [esp+0x44]
	cmp edi,esi
	sete al
	mov dword ptr [esp+0x38],1
	test al,al
	je Block11

 Block8:
	mov ebx,dword ptr [esp+0x40]
	mov dword ptr [ebx+4],esi
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp edi,esi
	je Block10

 Block9:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block10:
	mov eax,ebx
	jmp Block36

 Block11:
	push 0x4D
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x38],2
	cmp eax,esi
	je Block13

 Block12:
	mov ecx,eax
	call GW_ItemSlotBundle::_ctor_default
	mov esi,eax

 Block13:
	lea ecx,[esi+0xC]
	push ebx
	mov byte ptr [esp+0x3C],1
	call TSecType<long>::SetData
	lea edx,[esi+0x28]
	mov ecx,1
	call _ZtlSecureTearHelper<unsigned short>::call
	lea edx,[esi+0x30]
	xor ecx,ecx
	mov dword ptr [esi+0x2C],eax
	mov byte ptr [esi+0x40],0
	call _ZtlSecureTearHelper<short>::call
	mov ebx,dword ptr [esp+0x40]
	xor ebp,ebp
	mov dword ptr [esi+0x34],eax
	mov dword ptr [esi+0x38],ebp
	mov dword ptr [esi+0x3C],ebp
	mov dword ptr [ebx+4],esi
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp edi,ebp
	je Block15

 Block14:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block15:
	mov eax,ebx
	jmp Block36

 Block16:
	push ebx
	lea edx,[esp+0x48]
	push edx
	call CItemInfo::GetItemInfo
	mov ebp,dword ptr [esp+0x44]
	cmp ebp,esi
	sete al
	mov dword ptr [esp+0x38],3
	test al,al
	je Block20

 Block17:
	mov edi,dword ptr [esp+0x40]
	mov dword ptr [edi+4],esi
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp ebp,esi
	je Block19

 Block18:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block19:
	mov eax,edi
	jmp Block36

 Block20:
	push ebx
	call get_cashslot_item_type
	add esp,4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	cmp eax,8
	je Block26

 Block21:
	push 0x4D
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x38],7
	cmp eax,esi
	je Block23

 Block22:
	mov ecx,eax
	call GW_ItemSlotBundle::_ctor_default
	mov esi,eax

 Block23:
	push ebx
	lea ecx,[esi+0xC]
	mov byte ptr [esp+0x3C],3
	call TSecType<long>::op_assign
	mov edx,1
	mov ecx,esi
	call GW_ItemSlotBundle::_ZtlSecurePut_nNumber
	xor edx,edx
	mov ecx,esi
	mov byte ptr [esi+0x40],0
	call GW_ItemSlotBundle::_ZtlSecurePut_nAttribute
	mov edi,dword ptr [esp+0x40]
	xor ebx,ebx
	mov dword ptr [esi+0x38],ebx
	mov dword ptr [esi+0x3C],ebx
	mov dword ptr [edi+4],esi
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp ebp,ebx
	je Block25

 Block24:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block25:
	mov eax,edi
	jmp Block36

 Block26:
	push 0x75
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x38],4
	cmp eax,esi
	je Block28

 Block27:
	mov ecx,eax
	call GW_ItemSlotPet::_ctor_default
	mov esi,eax

 Block28:
	push ebx
	lea ecx,[esi+0xC]
	mov byte ptr [esp+0x3C],3
	call TSecType<long>::op_assign
	push ebx
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	call CItemInfo::GetItemName
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	push ebx
	lea edx,[esp+0x20]
	push edx
	mov ecx,edi
	call CItemInfo::GetItemName
	mov eax,dword ptr [eax]
	push 0xD
	push eax
	lea eax,[esi+0x28]
	push eax
	call dword ptr [ZImports::_lstrcpynA]
	mov eax,dword ptr [esp+0x1C]
	xor edi,edi
	cmp eax,edi
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	mov dl,1
	mov ecx,esi
	call GW_ItemSlotPet::_ZtlSecurePut_nLevel
	xor edx,edx
	mov ecx,esi
	call GW_ItemSlotPet::_ZtlSecurePut_nTameness
	mov dl,0x64
	mov ecx,esi
	call GW_ItemSlotPet::_ZtlSecurePut_nRepleteness
	xor edx,edx
	mov ecx,esi
	mov dword ptr [esi+0x59],edi
	mov dword ptr [esi+0x5D],edi
	call GW_ItemSlotPet::_ZtlSecurePut_nPetAttribute
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x781
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x40],5
	cmp ebp,edi
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea edx,[esp+0x28]
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x44],3
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],6
	call get_int32
	add esp,8
	mov edx,eax
	mov ecx,esi
	call GW_ItemSlotPet::_ZtlSecurePut_nRemainLife
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x38],3
	call Ztl_variant_t::~Ztl_variant_t
	xor edx,edx
	mov ecx,esi
	call GW_ItemSlotPet::_ZtlSecurePut_nAttribute
	mov edi,dword ptr [esp+0x40]
	mov dword ptr [edi+4],esi
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ecx
	mov eax,edi
	jmp Block36

 Block35:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [eax+4],esi

 Block36:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 8
}
}
// CItemInfo::GetGachaponItemIDByAggID
_SUB_EXCEPTION_HANDLER(19DC50)
__SUB_CLASS_THIS(0019DC50, __thiscall, 130745,  CItemInfo, void, long, ZArray<long>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_19DC50
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
	mov esi,dword ptr [esp+0x30]
	lea eax,[esi-0x3FA110]
	cmp eax,0x63
	ja Block20

 Block1:
	cmp esi,0x3FA11A
	jge Block3

 Block2:
	mov eax,0x66666667
	imul esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*4]
	add edx,edx
	sub esi,edx
	mov ebp,esi
	jmp Block6

 Block3:
	cmp esi,0x3FA173
	jge Block5

 Block4:
	mov eax,0x51EB851F
	imul esi
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x64
	sub esi,eax
	mov ebp,esi
	jmp Block6

 Block5:
	mov ebp,dword ptr [esp+0x30]

 Block6:
	lea edi,[ecx+0x1A0]
	mov ecx,edi
	mov dword ptr [esp+0x14],edi
	call ZMap<long, ZRef<CItemInfo::GACHAPONITEMINFO>, long>::GetHeadPosition
	xor esi,esi
	mov dword ptr [esp+0x30],eax
	cmp eax,esi
	je Block20

 Block7:
	jmp Block9

 Block8:
	mov edi,dword ptr [esp+0x14]
	xor esi,esi

 Block9:
	mov dword ptr [esp+0x1C],esi
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x34]
	push edx
	mov ecx,edi
	mov dword ptr [esp+0x30],esi
	call ZMap<long, ZRef<CItemInfo::GACHAPONITEMINFO>, long>::GetNext
	mov ebx,dword ptr [eax]
	mov edi,dword ptr [esp+0x1C]
	lea ebx,[ebx]

 Block10:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block16

 Block11:
	cmp esi,dword ptr [eax-4]
	jae Block16

 Block12:
	cmp dword ptr [eax+esi*8],ebp
	lea eax,[eax+esi*8]
	jg Block15

 Block13:
	cmp dword ptr [eax+4],ebp
	jl Block15

 Block14:
	mov ecx,dword ptr [esp+0x34]
	push 0xFFFFFFFF
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],ebx

 Block15:
	inc esi
	jmp Block10

 Block16:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block19

 Block17:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block19

 Block18:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block19:
	cmp dword ptr [esp+0x30],0
	mov dword ptr [esp+0x1C],0
	jne Block8

 Block20:
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
// CItemInfo::GetBundleItemCRC
_SUB_EXCEPTION_HANDLER(1B3BD0)
__SUB_CLASS_THIS(001B3BD0, __thiscall, 130723,  CItemInfo, unsigned long, NakedParam<ZRef<CItemInfo::BUNDLEITEM>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B3BD0
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
	mov eax,dword ptr [esp+0x34]
	mov edx,dword ptr [eax+4]
	push edx
	mov dword ptr [esp+0x2C],0
	call CItemInfo::GetItemCommonCRC
	push 0
	push 0
	push 0
	mov esi,eax
	mov eax,dword ptr [esp+0x40]
	mov ecx,dword ptr [eax+0x2C]
	push 0
	lea edx,[esp+0x20]
	push 4
	push edx
	mov dword ptr [esp+0x28],ecx
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	mov edi,eax
	mov eax,dword ptr [esp+0x58]
	mov ecx,dword ptr [eax+0x44]
	push 0
	lea edx,[esp+0x3C]
	push 4
	push edx
	mov dword ptr [esp+0x44],ecx
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	mov ebx,eax
	mov eax,dword ptr [esp+0x70]
	fld qword ptr [eax+0x48]
	push 0
	lea ecx,[esp+0x58]
	fstp qword ptr [esp+0x58]
	push 8
	push ecx
	call CCrc32::GetCrc32
	mov edx,dword ptr [esp+0x7C]
	add esp,0x48
	push 0
	push 0
	or eax,ebx
	or eax,edi
	push 0
	xor esi,eax
	movsx eax,word ptr [edx+0x5C]
	push 0
	lea ecx,[esp+0x24]
	push 4
	push ecx
	mov dword ptr [esp+0x2C],eax
	call CCrc32::GetCrc32
	mov edx,dword ptr [esp+0x4C]
	push 0
	push 0
	push 0
	mov edi,eax
	movsx eax,word ptr [edx+0x5E]
	push 0
	lea ecx,[esp+0x38]
	push 4
	push ecx
	mov dword ptr [esp+0x40],eax
	call CCrc32::GetCrc32
	or eax,edi
	xor esi,eax
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	cmp dword ptr [eax+0x54],edx
	setne dl
	xor ecx,ecx
	cmp dword ptr [eax+0x58],ecx
	setne cl
	lea edx,[ecx+edx*2]
	xor ecx,ecx
	cmp dword ptr [eax+8],ecx
	setne cl
	push 0
	push 0
	push 0
	push 0
	push 4
	lea edx,[ecx+edx*2]
	xor ecx,ecx
	cmp dword ptr [eax+0x10],ecx
	setne cl
	lea edx,[ecx+edx*2]
	xor ecx,ecx
	cmp dword ptr [eax+0x14],ecx
	setne cl
	lea edx,[ecx+edx*2]
	xor ecx,ecx
	cmp dword ptr [eax+0x18],ecx
	setne cl
	lea edx,[ecx+edx*2]
	xor ecx,ecx
	cmp dword ptr [eax+0x20],ecx
	setne cl
	lea ecx,[ecx+edx*2]
	xor edx,edx
	cmp dword ptr [eax+0x24],edx
	setne dl
	lea eax,[edx+ecx*2]
	lea ecx,[esp+0x58]
	push ecx
	mov dword ptr [esp+0x5C],eax
	call CCrc32::GetCrc32
	mov edi,eax
	mov eax,dword ptr [esp+0x7C]
	add esp,0x48
	xor edi,esi
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block4

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
	mov eax,edi
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 8
}
}
// CItemInfo::LevelInfo::Ability::~Ability
_SUB_EXCEPTION_HANDLER(19D070)
__SUB_CLASS_THIS0(0019D070, __thiscall, 131252,  CItemInfo::LevelInfo::Ability, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_19D070
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
	mov dword ptr [esp+0x14],2
	int 3// TODO: 	mov dword ptr [ecx],ZMAP_LONG_LONG_VTABLE
	call ZMap<long, long, long>::RemoveAll
	lea ecx,[esi+0xC]
	mov byte ptr [esp+0x14],1
	mov dword ptr [ecx],offset ZLIST_REF_ITEMSKILL_VTABLE
	call ZList<ZRef<CItemInfo::ItemSkill>>::RemoveAll
	mov eax,dword ptr [esi+8]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+8]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+8]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+8],0

 Block5:
	mov esi,dword ptr [esi]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block7

 Block6:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CItemInfo::CalcMakerSkillDisassembleCost
_SUB_EXCEPTION_HANDLER(1C3050)
__SUB_CLASS_THIS(001C3050, __thiscall, 130705,  CItemInfo, long, NakedParam<ZRef<GW_ItemSlotBase>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1C3050
	mov eax,dword ptr fs:[0]
	push eax
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ecx,dword ptr [esp+0x28]
	mov eax,0x66666667
	imul ecx
	mov eax,dword ptr [esp+0x24]
	sar edx,2
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	mov dword ptr [esp+0x18],0
	test eax,eax
	je Block15

 Block1:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	sub esp,8
	mov ecx,esp
	mov dword ptr [ecx+4],eax
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x30],esp
	test eax,eax
	je Block3

 Block2:
	add eax,4
	push eax
	call ebp

 Block3:
	mov ecx,edi
	call CItemInfo::CalcEquipItemQuality
	inc eax
	mov ecx,0x96
	cmp eax,6
	ja Block11

 Block4:
	cmp EAX, 0
je Block5
cmp EAX, 1
je Block11
cmp EAX, 2
je Block6
cmp EAX, 3
je Block7
cmp EAX, 4
je Block8
cmp EAX, 5
je Block9
cmp EAX, 6
je Block10


 Block5:
	mov ecx,0x64
	jmp Block11

 Block6:
	mov ecx,0xC8
	jmp Block11

 Block7:
	mov ecx,0xFA
	jmp Block11

 Block8:
	mov ecx,0x12C
	jmp Block11

 Block9:
	mov ecx,0x15E
	jmp Block11

 Block10:
	mov ecx,0x190

 Block11:
	imul esi,ecx
	mov eax,0x51EB851F
	imul esi
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add edx,eax
	imul edx,0x3E8
	mov eax,ecx
	sub eax,edx
	xor edx,edx
	test eax,eax
	setle dl
	mov dword ptr [esp+0x18],0xFFFFFFFF
	dec edx
	and eax,edx
	sub ecx,eax
	mov eax,dword ptr [esp+0x24]
	mov esi,ecx
	test eax,eax
	je Block15

 Block12:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x24]
	add eax,4
	push eax
	call ebp
	mov ecx,dword ptr [esp+0x24]
	test ecx,ecx
	je Block15

 Block14:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block15:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0xC
	ret 0xC
}
}
// CItemInfo::RegisterGachaponItemInfo
_SUB_EXCEPTION_HANDLER(1BF040)
__SUB_CLASS_THIS0(001BF040, __thiscall, 78614,  CItemInfo, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1BF040
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1E4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1F8]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x7C],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0xA4]
	push eax
	call esi
	lea ecx,[esp+0xA4]
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
	lea edx,[esp+0x94]
	push edx
	mov dword ptr [esp+0x204],edi
	call esi
	lea eax,[esp+0x94]
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
	lea ecx,[esp+0xAC]
	push ecx
	lea edx,[esp+0xA0]
	push edx
	push ecx
	mov dword ptr [esp+0x6C],esp
	mov ecx,esp
	push offset _S_ETCINCUBATORINFO
	mov byte ptr [esp+0x218],1
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x214],2
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x148]
	mov byte ptr [esp+0x214],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x208],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],edi
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
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x200],5
	cmp word ptr [esp+0x134],bx
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x13C]
	xor ecx,ecx
	mov word ptr [esp+0x134],cx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x134]
	push edx
	call ebp

 Block13:
	mov byte ptr [esp+0x200],6
	cmp word ptr [esp+0x94],bx
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x94],ax
	mov eax,dword ptr [esp+0x9C]
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x94]
	push ecx
	call ebp

 Block17:
	mov byte ptr [esp+0x200],7
	cmp word ptr [esp+0xA4],bx
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0xAC]
	xor edx,edx
	mov word ptr [esp+0xA4],dx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0xA4]
	push eax
	call ebp

 Block21:
	mov ebx,dword ptr [esp+0x24]
	cmp ebx,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea ecx,[esp+0x80]
	push ecx
	mov ecx,ebx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x204],8
	mov dword ptr [esp+0x2C],edi
	mov dword ptr [esp+0x5C],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block25

 Block24:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block25:
	lea ecx,[esp+0x2C]
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
	mov eax,dword ptr [esp+0x80]
	mov byte ptr [esp+0x200],0xA
	cmp eax,edi
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	lea eax,[esp+0x44]
	push eax
	call esi
	mov esi,dword ptr [esp+0x28]
	mov byte ptr [esp+0x200],0xB
	mov dword ptr [esp+0x88],edi
	cmp esi,edi
	je Block5

 Block31:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x88]
	push edx
	lea eax,[esp+0x48]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block208

 Block32:
	push edi
	call ZRefCounted_AllocHelper<ZRefCountedDummy<CItemInfo::GACHAPONITEMINFO>>::call
	lea ebp,[eax+0x10]
	mov dword ptr [eax+4],1
	mov dword ptr [esp+0x7C],ebp
	xor eax,eax
	mov dword ptr [ebp],eax
	mov dword ptr [ebp+4],eax
	mov dword ptr [ebp+8],eax
	mov dword ptr [ebp+0xC],eax
	mov dword ptr [ebp+0x10],eax
	mov dword ptr [ebp+0x14],eax
	mov dword ptr [ebp+0x18],eax
	mov dword ptr [ebp+0x1C],eax
	lea edx,[esp+0x48]
	mov dword ptr [ebp+0x20],eax
	push edx
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0x20C],0xC
	call DetachBSTR
	add esp,0xC
	mov esi,dword ptr [esp+0x3C]
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],esi
	cmp esi,edi
	je Block34

 Block33:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block34:
	lea edx,[esp+0xE0]
	mov byte ptr [esp+0x20C],0xE
	push edx
	mov ecx,ebx
	mov byte ptr [esp+0x210],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x208],0xF
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [esp+0x38],ebx
	cmp eax,edi
	je Block37

 Block35:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x90]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	cmp eax,edi
	setl bl
	dec ebx
	and ebx,dword ptr [esp+0x90]
	cmp eax,edi
	mov dword ptr [esp+0x38],ebx
	jge Block37

 Block36:
	cmp eax,0x80004002
	jne Block1

 Block37:
	cmp word ptr [esp+0xD4],8
	mov byte ptr [esp+0x200],0x11
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0xDC]
	xor ecx,ecx
	mov word ptr [esp+0xD4],cx
	cmp eax,edi
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[esp+0xD4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	cmp ebx,edi
	sete al
	test al,al
	jne Block190

 Block42:
	cmp ebx,edi
	je Block5

 Block43:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x18]
	push ecx
	push ebx
	mov dword ptr [esp+0x20],edi
	call edx
	cmp eax,edi
	jge Block45

 Block44:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block45:
	cmp dword ptr [esp+0x18],edi
	je Block190

 Block46:
	push edi
	push edi
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_USINGEGGTYPE
	call _xbstr_t::_ctor_1
	lea eax,[esp+0x120]
	mov byte ptr [esp+0x20C],0x12
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x210],0x11
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x208],0x13
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x38],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block48

 Block47:
	cmp eax,0x80004002
	jne Block1

 Block48:
	cmp word ptr [esp+0x114],8
	mov byte ptr [esp+0x200],0x15
	jne Block51

 Block49:
	mov eax,dword ptr [esp+0x11C]
	xor ecx,ecx
	mov word ptr [esp+0x114],cx
	cmp eax,edi
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea edx,[esp+0x114]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov edi,dword ptr [esp+0x34]
	test edi,edi
	sete al
	test al,al
	jne Block182

 Block53:
	test edi,edi
	je Block5

 Block54:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x18]
	push ecx
	push edi
	mov dword ptr [esp+0x20],0
	call edx
	test eax,eax
	jge Block56

 Block55:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block56:
	cmp dword ptr [esp+0x18],0
	je Block182

 Block57:
	lea eax,[esp+0x84]
	push eax
	mov ecx,edi
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x204],0x16
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [esp+0x84]
	mov byte ptr [esp+0x200],0x18
	test eax,eax
	je Block59

 Block58:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block59:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0x200],0x19
	mov dword ptr [esp+0x8C],0
	jmp Block62

 Block61:
	mov edi,dword ptr [esp+0x34]
	mov ebx,dword ptr [esp+0x38]

 Block62:
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block5

 Block63:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x8C]
	push edx
	lea edx,[esp+0x60]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block90

 Block64:
	lea ecx,[esp+0x5C]
	push ecx
	lea edx,[esp+0x44]
	push edx
	call DetachBSTR
	add esp,8
	mov eax,dword ptr [esp+0x40]
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block66

 Block65:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block66:
	lea eax,[esp+0x100]
	mov byte ptr [esp+0x20C],0x1B
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x210],0x1A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x208],0x1C
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	cmp eax,edi
	je Block69

 Block67:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x58]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x58]
	cmp eax,edi
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	jge Block69

 Block68:
	cmp eax,0x80004002
	jne Block1

 Block69:
	cmp word ptr [esp+0xF4],8
	mov byte ptr [esp+0x200],0x1E
	jne Block72

 Block70:
	mov eax,dword ptr [esp+0xFC]
	xor edx,edx
	mov word ptr [esp+0xF4],dx
	cmp eax,edi
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea eax,[esp+0xF4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block73:
	push edi
	push ecx
	mov dword ptr [esp+0x20],edi
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_MIN__1
	mov dword ptr [esp+0x28],edi
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x208],0x1F
	cmp esi,edi
	je Block5

 Block74:
	lea ecx,[esp+0xBC]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x20C],0x1E
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x208],0x20
	call get_int32
	add esp,8
	cmp word ptr [esp+0xB4],8
	mov ebx,eax
	mov byte ptr [esp+0x200],0x1E
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0xBC]
	xor edx,edx
	mov word ptr [esp+0xB4],dx
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea eax,[esp+0xB4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block78:
	push 0
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_MAX
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0xCC]
	push ecx
	mov byte ptr [esp+0x20C],0x21
	mov ecx,esi
	mov byte ptr [esp+0x20C],0x1E
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x208],0x22
	call get_int32
	add esp,8
	cmp word ptr [esp+0xC4],8
	mov edi,eax
	mov byte ptr [esp+0x200],0x1E
	jne Block81

 Block79:
	mov eax,dword ptr [esp+0xCC]
	xor edx,edx
	mov word ptr [esp+0xC4],dx
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea eax,[esp+0xC4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block82:
	push 0xFFFFFFFF
	mov ecx,ebp
	call ZArray<CItemInfo::GACHAPONAGGSCOPE>::InsertBefore
	mov dword ptr [eax],ebx
	mov dword ptr [eax+4],edi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0x204],0x1A
	call edx
	cmp dword ptr [esp+0x40],0
	mov byte ptr [esp+0x200],0x19
	je Block61

 Block83:
	mov esi,dword ptr [esp+0x40]
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block89

 Block84:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block86

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block86:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block88

 Block87:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block88:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block89:
	mov dword ptr [esp+0x40],0
	jmp Block61

 Block90:
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_MSG__1
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0xF0]
	push ecx
	mov byte ptr [esp+0x210],0x23
	mov ecx,ebx
	mov byte ptr [esp+0x210],0x19
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x208],0x24
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x58]
	mov dword ptr [esp+0x58],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block92

 Block91:
	cmp eax,0x80004002
	jne Block1

 Block92:
	cmp word ptr [esp+0xE4],8
	mov byte ptr [esp+0x200],0x26
	jne Block95

 Block93:
	mov eax,dword ptr [esp+0xEC]
	xor edx,edx
	mov word ptr [esp+0xE4],dx
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea eax,[esp+0xE4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov esi,dword ptr [esp+0x54]
	test esi,esi
	sete al
	mov byte ptr [esp+0x2F],al
	test al,al
	jne Block169

 Block97:
	test esi,esi
	je Block5

 Block98:
	mov ecx,esi
	call IWzProperty::Getcount
	test eax,eax
	je Block169

 Block99:
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	push offset _S_NOINCUBATOR
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0x158]
	push ecx
	mov byte ptr [esp+0x208],0x27
	mov ecx,esi
	mov byte ptr [esp+0x208],0x26
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0x200],0x28
	jne Block101

 Block100:
	mov eax,dword ptr [eax+8]
	jmp Block102

 Block101:
	mov eax,offset _S___3

 Block102:
	push 0xFFFFFFFF
	xor ebx,ebx
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebx
	call ZXString<char>::AssignWideStr
	lea edx,[esp+0x18]
	push edx
	lea edi,[ebp+0x10]
	push 0xFFFFFFFF
	mov ecx,edi
	mov byte ptr [esp+0x208],0x29
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x200],0x28
	cmp eax,ebx
	je Block104

 Block103:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block104:
	lea ecx,[esp+0x154]
	mov byte ptr [esp+0x200],0x26
	call Ztl_variant_t::~Ztl_variant_t
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	push offset _S_WRONGEGG
	call _xbstr_t::_ctor_1
	lea eax,[esp+0x178]
	mov byte ptr [esp+0x204],0x2A
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x208],0x26
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0x200],0x2B
	jne Block106

 Block105:
	mov eax,dword ptr [eax+8]
	jmp Block107

 Block106:
	mov eax,offset _S___3

 Block107:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebx
	call ZXString<char>::AssignWideStr
	lea ecx,[esp+0x18]
	push ecx
	push 0xFFFFFFFF
	mov ecx,edi
	mov byte ptr [esp+0x208],0x2C
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x200],0x2B
	cmp eax,ebx
	je Block109

 Block108:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block109:
	lea ecx,[esp+0x174]
	mov byte ptr [esp+0x200],0x26
	call Ztl_variant_t::~Ztl_variant_t
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	push offset _S_NOEGG
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x1B8]
	mov byte ptr [esp+0x204],0x2D
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x208],0x26
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0x200],0x2E
	jne Block111

 Block110:
	mov eax,dword ptr [eax+8]
	jmp Block112

 Block111:
	mov eax,offset _S___3

 Block112:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebx
	call ZXString<char>::AssignWideStr
	lea eax,[esp+0x18]
	push eax
	push 0xFFFFFFFF
	mov ecx,edi
	mov byte ptr [esp+0x208],0x2F
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x200],0x2E
	cmp eax,ebx
	je Block114

 Block113:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block114:
	lea ecx,[esp+0x1B4]
	mov byte ptr [esp+0x200],0x26
	call Ztl_variant_t::~Ztl_variant_t
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	push offset _S_SUCESS
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0x198]
	push ecx
	mov byte ptr [esp+0x208],0x30
	mov ecx,esi
	mov byte ptr [esp+0x208],0x26
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0x200],0x31
	jne Block116

 Block115:
	mov eax,dword ptr [eax+8]
	jmp Block117

 Block116:
	mov eax,offset _S___3

 Block117:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebx
	call ZXString<char>::AssignWideStr
	lea edx,[esp+0x18]
	push edx
	push 0xFFFFFFFF
	mov ecx,edi
	mov byte ptr [esp+0x208],0x32
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x200],0x31
	cmp eax,ebx
	je Block119

 Block118:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block119:
	lea ecx,[esp+0x194]
	mov byte ptr [esp+0x200],0x26
	call Ztl_variant_t::~Ztl_variant_t
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_FINALCONFIRMNUM
	call _xbstr_t::_ctor_1
	lea eax,[esp+0x1E0]
	mov byte ptr [esp+0x20C],0x33
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x210],0x26
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x208],0x34
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x74]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0x1D4]
	mov byte ptr [esp+0x200],0x36
	call Ztl_variant_t::~Ztl_variant_t
	cmp byte ptr [esp+0x2F],0
	jne Block163

 Block120:
	mov ecx,esi
	call IWzProperty::Getcount
	test eax,eax
	je Block163

 Block121:
	push ebx
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_EQUIP__1
	call _xbstr_t::_ctor_1
	mov edi,dword ptr [esp+0x78]
	mov byte ptr [esp+0x208],0x37
	cmp edi,ebx
	je Block5

 Block122:
	lea ecx,[esp+0x16C]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x20C],0x36
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x208],0x38
	lea esi,[ebp+0x14]
	call get_int32
	add esp,8
	lea ecx,[esp+0x164]
	mov dword ptr [esi],eax
	mov byte ptr [esp+0x200],0x36
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_CONSUME
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x18C]
	mov byte ptr [esp+0x208],0x39
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x20C],0x36
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x208],0x3A
	call get_int32
	add esp,8
	lea ecx,[esp+0x184]
	mov dword ptr [ebp+0x18],eax
	mov byte ptr [esp+0x200],0x36
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_ETC__1
	call _xbstr_t::_ctor_1
	lea eax,[esp+0x1AC]
	mov byte ptr [esp+0x208],0x3B
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x20C],0x36
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x208],0x3C
	call get_int32
	add esp,8
	lea ecx,[esp+0x1A4]
	mov dword ptr [ebp+0x20],eax
	mov byte ptr [esp+0x200],0x36
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_INSTALL
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0x1CC]
	push ecx
	mov byte ptr [esp+0x20C],0x3D
	mov ecx,edi
	mov byte ptr [esp+0x20C],0x36
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x208],0x3E
	call get_int32
	add esp,8
	lea ecx,[esp+0x1C4]
	mov dword ptr [ebp+0x1C],eax
	mov byte ptr [esp+0x200],0x36
	call Ztl_variant_t::~Ztl_variant_t
	push 0xFFFFFFFF
	push offset _S___3
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_FINALCONFIRM
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x60]
	lea edx,[esp+0x1F0]
	mov byte ptr [esp+0x20C],0x3F
	push edx
	mov byte ptr [esp+0x210],0x36
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x20C],0x40
	call get_string
	add esp,8
	push eax
	lea ecx,[esp+0x28]
	call ZXString<char>::CreateFromCStr
	lea ecx,[esp+0x1E4]
	call Ztl_variant_t::~Ztl_variant_t
	mov dword ptr [esp+0x18],0
	mov byte ptr [esp+0x200],0x43
	mov ebx,4
	lea ebx,[ebx]

 Block123:
	cmp dword ptr [esi],0
	je Block125

 Block124:
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	call ZArray<long>::InsertBefore
	mov ecx,dword ptr [esi]
	mov dword ptr [eax],ecx

 Block125:
	add esi,4
	sub ebx,1
	jne Block123

 Block126:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block137

 Block127:
	mov ecx,dword ptr [eax-4]
	cmp ecx,1
	jne Block129

 Block128:
	mov dword ptr [esp+0x14],ebx
	mov edx,dword ptr [eax]
	mov eax,dword ptr [esp+0x20]
	push edx
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x20C],0x44
	call ZXString<char>::Format
	add esp,0xC
	jmp Block135

 Block129:
	cmp ecx,2
	jne Block131

 Block130:
	mov dword ptr [esp+0x14],0
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x20]
	push edx
	push eax
	push ecx
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x210],0x45
	call ZXString<char>::Format
	add esp,0x10
	jmp Block135

 Block131:
	cmp ecx,3
	jne Block133

 Block132:
	mov dword ptr [esp+0x14],0
	mov ecx,dword ptr [eax+8]
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	push edx
	push eax
	push ecx
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x214],0x46
	call ZXString<char>::Format
	add esp,0x14
	jmp Block135

 Block133:
	cmp ecx,4
	jne Block137

 Block134:
	mov dword ptr [esp+0x14],0
	mov ecx,dword ptr [eax+0xC]
	mov edx,dword ptr [eax+8]
	push ecx
	mov ecx,dword ptr [eax+4]
	push edx
	mov edx,dword ptr [eax]
	mov eax,dword ptr [esp+0x28]
	push ecx
	push edx
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x218],0x47
	call ZXString<char>::Format
	add esp,0x18

 Block135:
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x200],0x43
	test eax,eax
	je Block137

 Block136:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block137:
	lea edx,[esp+0x20]
	push edx
	push 0xFFFFFFFF
	lea ecx,[ebp+0x10]
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	push 0
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_ISNOGRADERESULT
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [esp+0x40]
	lea eax,[esp+0x10C]
	mov byte ptr [esp+0x208],0x48
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x20C],0x43
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x208],0x49
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov ebx,8
	mov dword ptr [ebp+8],eax
	mov byte ptr [esp+0x200],0x43
	cmp word ptr [esp+0x104],bx
	jne Block140

 Block138:
	mov eax,dword ptr [esp+0x10C]
	xor ecx,ecx
	mov word ptr [esp+0x104],cx
	test eax,eax
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea edx,[esp+0x104]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block141:
	push 0
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_ISBONUS
	call _xbstr_t::_ctor_1
	lea eax,[esp+0x12C]
	mov byte ptr [esp+0x208],0x4A
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x20C],0x43
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x208],0x4B
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [ebp+4],eax
	mov byte ptr [esp+0x200],0x43
	cmp word ptr [esp+0x124],bx
	jne Block144

 Block142:
	mov eax,dword ptr [esp+0x12C]
	xor ecx,ecx
	mov word ptr [esp+0x124],cx
	test eax,eax
	je Block145

 Block143:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block144:
	lea edx,[esp+0x124]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block145:
	push 0
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_SUCESSNPCID
	call _xbstr_t::_ctor_1
	lea eax,[esp+0x14C]
	mov byte ptr [esp+0x208],0x4C
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x20C],0x43
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x208],0x4D
	call get_int32
	add esp,8
	mov dword ptr [ebp+0xC],eax
	mov byte ptr [esp+0x200],0x43
	cmp word ptr [esp+0x144],bx
	jne Block148

 Block146:
	mov eax,dword ptr [esp+0x14C]
	xor ecx,ecx
	mov word ptr [esp+0x144],cx
	test eax,eax
	je Block149

 Block147:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block149

 Block148:
	lea edx,[esp+0x144]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block149:
	mov ebp,dword ptr [esp+0x3C]
	test ebp,ebp
	je Block153

 Block150:
	cmp dword ptr [ebp+4],0
	jne Block152

 Block151:
	mov eax,dword ptr [ebp]
	push eax
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [ebp+4],eax

 Block152:
	mov eax,dword ptr [ebp+4]
	jmp Block154

 Block153:
	xor eax,eax

 Block154:
	push eax
	call _atoi
	add esp,4
	lea ecx,[esp+0x74]
	push ecx
	mov ecx,dword ptr [esp+0x80]
	lea edx,[esp+0x18]
	push edx
	add ecx,0x1A0
	mov dword ptr [esp+0x1C],eax
	call ZMap<long, ZRef<CItemInfo::GACHAPONITEMINFO>, long>::Insert
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x200],0x42
	call ZArray<long>::RemoveAll
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x200],0x36
	test eax,eax
	je Block156

 Block155:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block156:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0x204],0x26
	call ecx
	mov eax,dword ptr [esp+0x54]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0x204],0x19
	call eax
	mov byte ptr [esp+0x200],0x18
	cmp word ptr [esp+0x5C],bx
	jne Block159

 Block157:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	test eax,eax
	je Block160

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block160

 Block159:
	lea edx,[esp+0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block160:
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x204],0x15
	call edx
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x204],0x11
	call edx
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0x204],0xD
	call ecx
	test ebp,ebp
	je Block162

 Block161:
	mov ecx,ebp
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x3C],0

 Block162:
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0x200],0xB
	call ZRef<CItemInfo::GACHAPONITEMINFO>::~ZRef<CItemInfo::GACHAPONITEMINFO>
	mov ebx,dword ptr [esp+0x24]
	mov esi,dword ptr [esp+0x28]
	mov ebp,dword ptr [ZImports::_VariantClear]
	xor edi,edi
	jmp Block31

 Block163:
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0x200],0x26
	cmp eax,ebx
	je Block165

 Block164:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block165:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0x204],0x19
	call edx
	lea ecx,[esp+0x5C]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x204],0x15
	call edx
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x204],0x11
	call edx
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x204],0xD
	call edx
	mov ecx,dword ptr [esp+0x3C]
	cmp ecx,ebx
	je Block167

 Block166:
	call _xbstr_t::Data_t::Release

 Block167:
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0x200],0xB
	call ZRef<CItemInfo::GACHAPONITEMINFO>::~ZRef<CItemInfo::GACHAPONITEMINFO>
	lea ecx,[esp+0x44]
	call Ztl_variant_t::~Ztl_variant_t

 Block168:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x204],7
	call edx
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [eax]
	push eax
	jmp Block213

 Block169:
	mov byte ptr [esp+0x200],0x19
	test esi,esi
	je Block171

 Block170:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block171:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0x200],0x18
	jne Block174

 Block172:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block175

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block174:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block175:
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x204],0x15
	call edx
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0x204],0x11
	call ecx
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov byte ptr [esp+0x204],0xD
	call eax
	mov ecx,dword ptr [esp+0x3C]
	test ecx,ecx
	je Block177

 Block176:
	call _xbstr_t::Data_t::Release

 Block177:
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0x200],0xB
	call ZRef<CItemInfo::GACHAPONITEMINFO>::~ZRef<CItemInfo::GACHAPONITEMINFO>

 Block178:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x200],0xA
	jne Block181

 Block179:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block168

 Block180:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block168

 Block181:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block168

 Block182:
	mov byte ptr [esp+0x200],0x11
	test edi,edi
	je Block184

 Block183:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block184:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov byte ptr [esp+0x204],0xD
	call eax
	test esi,esi
	je Block186

 Block185:
	mov ecx,esi
	call _xbstr_t::Data_t::Release

 Block186:
	mov byte ptr [esp+0x200],0xB
	test ebp,ebp
	je Block178

 Block187:
	add ebp,0xFFFFFFF0
	lea edi,[ebp+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block178

 Block188:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebp,ebp
	je Block178

 Block189:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax
	jmp Block178

 Block190:
	mov byte ptr [esp+0x200],0xD
	cmp ebx,edi
	je Block192

 Block191:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block192:
	mov byte ptr [esp+0x200],0xC
	cmp esi,edi
	je Block199

 Block193:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,edi
	jne Block199

 Block194:
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block196

 Block195:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block196:
	mov eax,dword ptr [esi+4]
	cmp eax,edi
	je Block198

 Block197:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block198:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block199:
	mov byte ptr [esp+0x200],0xB
	cmp ebp,edi
	je Block203

 Block200:
	add ebp,0xFFFFFFF0
	lea edi,[ebp+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block203

 Block201:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebp,ebp
	je Block203

 Block202:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebp
	call edx

 Block203:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x200],0xA
	jne Block206

 Block204:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block207

 Block205:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block207

 Block206:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block207:
	mov eax,dword ptr [esp+0x28]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0x204],7
	call eax
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [eax]
	push eax
	jmp Block213

 Block208:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x200],0xA
	jne Block211

 Block209:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,edi
	je Block212

 Block210:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block212

 Block211:
	lea ecx,[esp+0x44]
	push ecx
	call ebp

 Block212:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x204],7
	call eax
	mov ecx,dword ptr [ebx]
	push ebx

 Block213:
	mov edx,dword ptr [ecx+8]
	mov dword ptr [esp+0x204],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x1F8]
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
// CItemInfo::LevelInfo::RandomMAD::GetStatType
__SUB_CLASS_THIS0(00191660, __thiscall, 131097,  CItemInfo::LevelInfo::RandomMAD, long) {
__asm {

 Block0:
	mov eax,8
	ret
}
}
// CItemInfo::GetSpecialName
_SUB_EXCEPTION_HANDLER(1A8460)
__SUB_CLASS_THIS(001A8460, __thiscall, 130711,  CItemInfo, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A8460
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0xC],ebx
	mov eax,dword ptr [esp+0x34]
	push eax
	lea edx,[esp+0x38]
	push edx
	call CItemInfo::GetSpecialProp
	mov dword ptr [esp+0x28],ebx
	cmp dword ptr [esp+0x34],ebx
	je Block12

 Block1:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x10],esp
	push 0x671
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x38]
	mov byte ptr [esp+0x2C],1
	cmp ecx,ebx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0x30],bl
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0x28],2
	jne Block5

 Block4:
	mov eax,dword ptr [eax+8]
	jmp Block6

 Block5:
	mov eax,offset _S___3

 Block6:
	mov esi,dword ptr [esp+0x30]
	push 0xFFFFFFFF
	push eax
	mov ecx,esi
	mov dword ptr [esi],ebx
	call ZXString<char>::AssignWideStr
	cmp word ptr [esp+0x10],8
	mov byte ptr [esp+0x28],bl
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x10],ax
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block14

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block14

 Block12:
	mov esi,dword ptr [esp+0x30]
	push ebx
	push offset _S_
	push ebx
	push ebx
	mov ecx,esi
	mov dword ptr [esi],ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov eax,esi
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x20
	ret 8
}
}
// CItemInfo::EQUIPITEM::_ZtlSecureGet_nrINT
__SUB_CLASS0(00100060, __fastcall, 85137,  CItemInfo::EQUIPITEM, long) {
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
// CItemInfo::EQUIPITEM::_ZtlSecureGet_niJump
__SUB_CLASS0(001918D0, __fastcall, 130917,  CItemInfo::EQUIPITEM, short) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x124]
	push eax
	add ecx,0x120
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	ret
}
}
// CItemInfo::SETITEMINFO::SETITEMINFO
_SUB_EXCEPTION_HANDLER(19D1F0)
__SUB_CLASS_THIS0(0019D1F0, __thiscall, 130892,  CItemInfo::SETITEMINFO, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_19D1F0
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
	push offset ZRef<CItemInfo::SETEFFECT>::~ZRef<CItemInfo::SETEFFECT>
	push offset ZRef<CItemInfo::SETEFFECT>::_ctor_default
	push 0x3C
	push 8
	lea eax,[esi+8]
	push eax
	mov dword ptr [esp+0x2C],edi
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x1E8],edi
	lea ecx,[esi+0x1F4]
	mov dword ptr [esi+0x1F0],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMAP_LONG_ZXSTRINGA_VTABLE
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZXString<char>, long>::_CalcAutoGrow
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
// CItemInfo::LevelInfo::RandomSTR::GetStatType
__SUB_CLASS_THIS0(00191600, __thiscall, 131187,  CItemInfo::LevelInfo::RandomSTR, long) {
__asm {

 Block0:
	mov eax,2
	ret
}
}
// CItemInfo::GetLevelAbilityInfo
_SUB_EXCEPTION_HANDLER(1C3A60)
__SUB_CLASS_THIS(001C3A60, __thiscall, 130689,  CItemInfo, ZRef<CItemInfo::LevelInfo::Ability>*, ZRef<CItemInfo::LevelInfo::Ability>*, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1C3A60
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
	mov eax,dword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x34]
	push eax
	push edx
	lea eax,[esp+0x20]
	xor ebx,ebx
	push eax
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x20],ebx
	call CItemInfo::GetLevelInfo
	mov ebp,dword ptr [esp+0x30]
	mov eax,1
	mov dword ptr [esp+0x28],eax
	mov dword ptr [ebp+4],ebx
	mov esi,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],eax
	cmp esi,ebx
	je Block2

 Block1:
	push ebp
	lea ecx,[esp+0x40]
	push ecx
	lea ecx,[esi+0x18]
	call ZMap<long, ZRef<CItemInfo::LevelInfo::Ability>, long>::GetAt

 Block2:
	mov byte ptr [esp+0x28],bl
	cmp esi,ebx
	je Block6

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
	cmp esi,ebx
	je Block6

 Block5:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block6:
	mov eax,ebp
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 0x10
}
}
// CItemInfo::GetAreaBuffItem
_SUB_EXCEPTION_HANDLER(35590)
__SUB_CLASS_THIS(00035590, __thiscall, 130728,  CItemInfo, const CItemInfo::AREABUFFITEM*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_35590
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
	xor ebx,ebx
	xor edi,edi
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x18],edi
	lea eax,[esp+0x14]
	push eax
	lea edx,[esp+0x38]
	push edx
	add ecx,0x170
	mov dword ptr [esp+0x34],edi
	call ZMap<long, ZRef<CItemInfo::AREABUFFITEM>, long>::GetAt
	test eax,eax
	je Block2

 Block1:
	mov esi,dword ptr [esp+0x20]
	lea eax,[esp+0x14]
	jmp Block3

 Block2:
	xor esi,esi
	mov dword ptr [esp+0x20],esi
	lea eax,[esp+0x1C]
	mov ebx,1

 Block3:
	mov ebp,dword ptr [eax+4]
	test bl,1
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	je Block8

 Block4:
	cmp esi,edi
	je Block8

 Block5:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block8

 Block6:
	push edi
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
	mov esi,dword ptr [esp+0x18]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test esi,esi
	je Block12

 Block9:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block12

 Block10:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block12

 Block11:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block12:
	mov eax,ebp
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
// get_equip_data_path
_SUB_EXCEPTION_HANDLER(1A6060)
// 5A6524
static uint8_t _SUB_1A6060_LOOKUP_TABLE_0[199] = {
0, 0, 1, 2, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
19, 19, 19, 19, 3, 4, 4, 4, 5, 6, 7, 8, 9, 10, 11, 12, 
4, 4, 4, 4, 19, 19, 19, 10, 19, 19, 19, 19, 19, 19, 19, 19, 
19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
19, 13, 13, 13, 13, 13, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
19, 19, 19, 19, 14, 15, 15, 15, 19, 19, 19, 19, 19, 19, 16, 17, 
19, 17, 18, 18, 18, 18, 17, 
};
__SUB(001A6060, __cdecl, 141485,  ZXString16, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A6060
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	push ebx
	push ebp
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x60]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0x10],ebx
	mov esi,dword ptr [esp+0x70]
	mov dword ptr [esi],ebx
	mov ebp,dword ptr [esp+0x74]
	mov eax,0x68DB8BAD
	imul ebp
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov dword ptr [esp+0x68],ebx
	mov dword ptr [esp+0x10],1
	cmp ecx,0xC6
	ja Block21

 Block1:
	movzx eax,byte ptr [ecx+_SUB_1A6060_LOOKUP_TABLE_0]
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
je Block13
cmp EAX, 12
je Block14
cmp EAX, 13
je Block18
cmp EAX, 14
je Block15
cmp EAX, 15
je Block20
cmp EAX, 16
je Block16
cmp EAX, 17
je Block17
cmp EAX, 18
je Block19
cmp EAX, 19
je Block21


 Block2:
	lea ecx,[esp+0x74]
	push 0x93E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x6C],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x74]
	jmp Block26

 Block3:
	lea edx,[esp+0x14]
	push 0x93F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x6C],2
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	jmp Block26

 Block4:
	lea eax,[esp+0x18]
	push 0x940
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x6C],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	jmp Block26

 Block5:
	lea ecx,[esp+0x1C]
	push 0x941
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x6C],4
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x1C]
	jmp Block26

 Block6:
	lea edx,[esp+0x20]
	push 0x942
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x6C],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x20]
	jmp Block26

 Block7:
	lea eax,[esp+0x24]
	push 0x943
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x6C],6
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x24]
	jmp Block26

 Block8:
	lea ecx,[esp+0x28]
	push 0x944
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x6C],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x28]
	jmp Block26

 Block9:
	lea edx,[esp+0x2C]
	push 0x945
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x6C],8
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x2C]
	jmp Block26

 Block10:
	lea eax,[esp+0x30]
	push 0x946
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x6C],9
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x30]
	jmp Block26

 Block11:
	lea ecx,[esp+0x34]
	push 0x947
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x6C],0xA
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x34]
	jmp Block26

 Block12:
	lea edx,[esp+0x38]
	push 0x948
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x6C],0xB
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x38]
	jmp Block26

 Block13:
	lea eax,[esp+0x3C]
	push 0x949
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x6C],0xC
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x3C]
	jmp Block26

 Block14:
	lea ecx,[esp+0x40]
	push 0x94A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x6C],0xD
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x40]
	jmp Block26

 Block15:
	lea edx,[esp+0x44]
	push 0x94B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x6C],0xE
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x44]
	jmp Block26

 Block16:
	lea eax,[esp+0x48]
	push 0x94D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x6C],0xF
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x48]
	jmp Block26

 Block17:
	lea ecx,[esp+0x4C]
	push 0x94D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x6C],0x10
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x4C]
	jmp Block26

 Block18:
	lea edx,[esp+0x50]
	push 0x18FA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x6C],0x11
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x50]
	jmp Block26

 Block19:
	lea eax,[esp+0x54]
	push 0x94F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x6C],0x12
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x54]
	jmp Block26

 Block20:
	lea ecx,[esp+0x58]
	push 0x94B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x6C],0x13
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x58]
	jmp Block26

 Block21:
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xD
	je Block25

 Block22:
	cmp eax,0xE
	je Block25

 Block23:
	cmp eax,0x10
	je Block25

 Block24:
	cmp eax,0x11
	jne Block31

 Block25:
	lea edx,[esp+0x5C]
	push 0x94C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x6C],0x14
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x5C]

 Block26:
	mov byte ptr [esp+0x68],bl
	cmp eax,ebx
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block28:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block31

 Block29:
	cmp word ptr [eax],bx
	je Block31

 Block30:
	push ebp
	push eax
	push esi
	call ZXString16::Format
	add esp,0xC

 Block31:
	mov eax,esi
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret
}
}
// CItemInfo::LevelInfo::RandomSpeed::GetStatType
__SUB_CLASS_THIS0(001916B0, __thiscall, 131022,  CItemInfo::LevelInfo::RandomSpeed, long) {
__asm {

 Block0:
	mov eax,0xD
	ret
}
}
// get_float
_SUB_EXCEPTION_HANDLER(190CA0)
__SUB(00190CA0, __cdecl, 141401,  float, Ztl_variant_t&, float) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_190CA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	lea eax,[esp+4]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov ecx,dword ptr [esp+0x24]
	movzx eax,word ptr [ecx]
	mov dword ptr [esp+0x1C],0
	test ax,ax
	je Block4

 Block1:
	cmp ax,0xA
	je Block4

 Block2:
	push 4
	push 0
	push ecx
	lea ecx,[esp+0x10]
	push ecx
	call ZComAPI::ZComVariantChangeType
	add esp,0x10
	test eax,eax
	jl Block4

 Block3:
	fld dword ptr [esp+0xC]
	jmp Block5

 Block4:
	fld dword ptr [esp+0x28]

 Block5:
	cmp word ptr [esp+4],8
	fstp dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	jne Block8

 Block6:
	mov eax,dword ptr [esp+0xC]
	xor edx,edx
	mov word ptr [esp+4],dx
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	fld dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret

 Block8:
	lea eax,[esp+4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block9:
	fld dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret
}
}
// CItemInfo::GetKarmaScissorsName
_SUB_EXCEPTION_HANDLER(1B4B20)
__SUB_CLASS_THIS(001B4B20, __thiscall, 130711,  CItemInfo, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B4B20
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
	mov dword ptr [esp+0x1C],ecx
	lea esi,[ecx+0x144]
	xor ebp,ebp
	mov dword ptr [esp+0x18],ebp
	mov ecx,esi
	mov dword ptr [esp+0x18],esi
	call ZMap<long, ZRef<CItemInfo::KARMASCISSORSITEM>, long>::GetHeadPosition
	mov dword ptr [esp+0x14],eax
	cmp eax,ebp
	je Block8

 Block1:
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	jmp Block3

 Block2:
	mov esi,dword ptr [esp+0x18]

 Block3:
	mov dword ptr [esp+0x24],ebp
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x38],ebp
	call ZMap<long, ZRef<CItemInfo::KARMASCISSORSITEM>, long>::GetNext
	mov esi,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x3C]
	cmp dword ptr [esi+4],edx
	je Block10

 Block4:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ebx
	test eax,eax
	jne Block7

 Block5:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block7

 Block6:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block7:
	mov dword ptr [esp+0x24],ebp
	cmp dword ptr [esp+0x14],ebp
	jne Block2

 Block8:
	mov esi,dword ptr [esp+0x38]
	push 0xFFFFFFFF
	push offset _S___3
	mov ecx,esi
	mov dword ptr [esi],ebp
	call ZXString<char>::AssignWideStr
	mov eax,esi

 Block9:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 8

 Block10:
	mov eax,dword ptr [esi]
	mov ebp,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x1C]
	push eax
	push ebp
	call CItemInfo::GetItemName
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ebx
	test eax,eax
	jne Block13

 Block11:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block13

 Block12:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block13:
	mov eax,ebp
	jmp Block9
}
}
// CItemInfo::GetItemDesc
_SUB_EXCEPTION_HANDLER(1B16E0)
__SUB_CLASS_THIS(001B16E0, __thiscall, 130711,  CItemInfo, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B16E0
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
	mov dword ptr [esp+0xC],0
	mov edi,dword ptr [esp+0x24]
	cmp edi,0x19F8D1
	jne Block2

 Block1:
	mov esi,dword ptr [esp+0x20]
	push 0x3B
	push offset _S_CANBEEQUIPPEDONC
	push 0
	push 0x3B
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x3B
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 8

 Block2:
	lea eax,[esp+0x24]
	push 0x5D4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push edi
	mov edi,dword ptr [esp+0x28]
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x24],1
	call CItemInfo::GetItemString
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0xC],1
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,edi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 8
}
}
// CItemInfo::GetSpecialDesc
_SUB_EXCEPTION_HANDLER(1A85B0)
__SUB_CLASS_THIS(001A85B0, __thiscall, 130711,  CItemInfo, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A85B0
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
	xor ebx,ebx
	mov dword ptr [esp+0x10],ebx
	mov edi,dword ptr [esp+0x38]
	push edi
	lea eax,[esp+0x3C]
	push eax
	call CItemInfo::GetSpecialProp
	mov dword ptr [esp+0x2C],ebx
	cmp dword ptr [esp+0x38],ebx
	je Block22

 Block1:
	push ecx
	mov dword ptr [esp+0x14],esp
	mov ecx,esp
	push offset _S_DESC__2
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x30],1
	cmp ecx,ebx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x34],bl
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0x2C],2
	jne Block5

 Block4:
	mov eax,dword ptr [eax+8]
	jmp Block6

 Block5:
	mov eax,offset _S___3

 Block6:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::AssignWideStr
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x2C],4
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
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
	mov esi,dword ptr [esp+0x10]
	cmp esi,ebx
	je Block12

 Block11:
	cmp byte ptr [esi],bl
	jne Block18

 Block12:
	add edi,0xFF751C70
	cmp edi,4
	ja Block18

 Block13:
	mov edi,dword ptr [esp+0x34]
	push 0x190D
	push edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x2C],bl
	cmp esi,ebx
	je Block15

 Block14:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block17

 Block16:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block17:
	mov eax,edi
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 8

 Block18:
	mov edi,dword ptr [esp+0x34]
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,edi
	mov dword ptr [edi],ebx
	call ZXString<char>::op_assign
	mov byte ptr [esp+0x2C],bl
	cmp esi,ebx
	je Block20

 Block19:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block17

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	mov eax,edi
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 8

 Block22:
	mov esi,dword ptr [esp+0x34]
	push ebx
	push offset _S_
	push ebx
	push ebx
	mov ecx,esi
	mov dword ptr [esi],ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	mov eax,esi
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 8
}
}
// CItemInfo::DrawItemIconForSlot
_SUB_EXCEPTION_HANDLER(1C0A40)
__SUB_CLASS_THIS(001C0A40, __thiscall, 130756,  CItemInfo, void, NakedParam<_x_com_ptr<IWzCanvas>>, long, long, long, int32_t, int32_t, int32_t, int32_t, long, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1C0A40
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
	mov ebp,ecx
	mov dword ptr [esp+0x1C],ebp
	mov edi,dword ptr [esp+0x8C]
	push edi
	mov dword ptr [esp+0x84],0
	call CItemInfo::GetEquipItem
	neg eax
	sbb eax,eax
	neg eax
	mov esi,0
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x14],esi
	mov eax,dword ptr [esp+0xA0]
	mov byte ptr [esp+0x80],1
	lea ecx,[esp+0xA0]
	push eax
	je Block2

 Block1:
	push esi
	jmp Block3

 Block2:
	push 1

 Block3:
	push edi
	push ecx
	mov ecx,ebp
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [eax]
	test eax,eax
	je Block5

 Block4:
	mov edx,dword ptr [eax]
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x18],esi
	call eax

 Block5:
	mov eax,dword ptr [esp+0xA0]
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	test esi,esi
	sete al
	test al,al
	je Block12

 Block8:
	mov byte ptr [esp+0x80],0
	test esi,esi
	je Block10

 Block9:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block10:
	mov eax,dword ptr [esp+0x88]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test eax,eax
	je Block396

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block396

 Block12:
	cmp dword ptr [ebp+0x1B8],0
	mov edi,dword ptr [ZImports::_VariantInit]
	lea esi,[ebp+0x1B8]
	sete al
	mov dword ptr [esp+0x20],esi
	test al,al
	je Block34

 Block13:
	lea ecx,[esp+0x48]
	push ecx
	call edi
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	lea eax,[esp+0x38]
	mov bl,2
	push eax
	mov byte ptr [esp+0x84],bl
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	push 0
	push 0
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x44]
	push eax
	push ecx
	mov dword ptr [esp+0xB4],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGIT__41
	mov byte ptr [esp+0x98],3
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],4
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0x98],3
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],5
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block22

 Block20:
	cmp eax,0x80004002
	je Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	mov esi,8
	mov byte ptr [esp+0x80],3
	cmp word ptr [esp+0x58],si
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x38],si
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov byte ptr [esp+0x80],1
	cmp word ptr [esp+0x48],si
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	cmp dword ptr [ebp+0x1BC],0
	lea esi,[ebp+0x1BC]
	sete al
	mov dword ptr [esp+0x24],esi
	test al,al
	je Block56

 Block35:
	lea edx,[esp+0x38]
	push edx
	call edi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x84],6
	call edi
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block39

 Block38:
	push eax
	call _com_issue_error

 Block39:
	push 0
	push 0
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x54]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0xB4],esp
	push 0x95F
	mov bl,7
	push edx
	mov byte ptr [esp+0x9C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],8
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	lea eax,[esp+0x6C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],9
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block44

 Block42:
	cmp eax,0x80004002
	je Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	mov esi,8
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],si
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov byte ptr [esp+0x80],6
	cmp word ptr [esp+0x48],si
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov byte ptr [esp+0x80],1
	cmp word ptr [esp+0x38],si
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block56:
	cmp dword ptr [ebp+0x1C0],0
	lea esi,[ebp+0x1C0]
	sete al
	mov dword ptr [esp+0x28],esi
	test al,al
	je Block78

 Block57:
	lea ecx,[esp+0x38]
	push ecx
	call edi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block59

 Block58:
	push eax
	call _com_issue_error

 Block59:
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x84],0xA
	call edi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	push 0
	push 0
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x54]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xB4],esp
	push 0x960
	mov bl,0xB
	push ecx
	mov byte ptr [esp+0x9C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0xC
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	lea edx,[esp+0x6C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block66

 Block64:
	cmp eax,0x80004002
	je Block66

 Block65:
	push eax
	call _com_issue_error

 Block66:
	mov esi,8
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],si
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov byte ptr [esp+0x80],0xA
	cmp word ptr [esp+0x48],si
	jne Block73

 Block71:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block74:
	mov byte ptr [esp+0x80],1
	cmp word ptr [esp+0x38],si
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block78:
	cmp dword ptr [ebp+0x1C4],0
	lea esi,[ebp+0x1C4]
	sete al
	mov dword ptr [esp+0x2C],esi
	test al,al
	je Block100

 Block79:
	lea eax,[esp+0x38]
	push eax
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x84],0xE
	call edi
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
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
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x54]
	push edx
	push ecx
	mov dword ptr [esp+0xB4],esp
	mov ecx,esp
	mov bl,0xF
	push offset _S_UIUIWINDOW2IMGIT__40
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0x10
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	lea eax,[esp+0x6C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0x11
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block88

 Block86:
	cmp eax,0x80004002
	je Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	mov esi,8
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],si
	jne Block91

 Block89:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block92:
	mov byte ptr [esp+0x80],0xE
	cmp word ptr [esp+0x48],si
	jne Block95

 Block93:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov byte ptr [esp+0x80],1
	cmp word ptr [esp+0x38],si
	jne Block99

 Block97:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block100:
	cmp dword ptr [ebp+0x1CC],0
	lea esi,[ebp+0x1CC]
	sete al
	mov dword ptr [esp+0x34],esi
	test al,al
	je Block122

 Block101:
	lea ecx,[esp+0x38]
	push ecx
	call edi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block103

 Block102:
	push eax
	call _com_issue_error

 Block103:
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x84],0x12
	call edi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block105

 Block104:
	push eax
	call _com_issue_error

 Block105:
	push 0
	push 0
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x54]
	push eax
	push ecx
	mov dword ptr [esp+0xB4],esp
	mov ecx,esp
	mov bl,0x13
	push offset _S_UIUIWINDOWIMGITE__4
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0x14
	jne Block107

 Block106:
	push 0x80004003
	call _com_issue_error

 Block107:
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0x98],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0x15
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,esi
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
	mov esi,8
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],si
	jne Block113

 Block111:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block114:
	mov byte ptr [esp+0x80],0x12
	cmp word ptr [esp+0x48],si
	jne Block117

 Block115:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block118:
	mov byte ptr [esp+0x80],1
	cmp word ptr [esp+0x38],si
	jne Block121

 Block119:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block122:
	cmp dword ptr [ebp+0x1D0],0
	lea esi,[ebp+0x1D0]
	sete al
	mov dword ptr [esp+0x38],esi
	test al,al
	je Block144

 Block123:
	lea edx,[esp+0x58]
	push edx
	call edi
	lea eax,[esp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block125

 Block124:
	push eax
	call _com_issue_error

 Block125:
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x84],0x16
	call edi
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block127

 Block126:
	push eax
	call _com_issue_error

 Block127:
	push 0
	push 0
	lea eax,[esp+0x60]
	push eax
	lea ecx,[esp+0x54]
	push ecx
	push ecx
	mov dword ptr [esp+0xB4],esp
	mov ecx,esp
	mov bl,0x17
	push offset _S_UIUIWINDOWIMGITE__3
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0x18
	jne Block129

 Block128:
	push 0x80004003
	call _com_issue_error

 Block129:
	lea edx,[esp+0x7C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0x19
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block132

 Block130:
	cmp eax,0x80004002
	je Block132

 Block131:
	push eax
	call _com_issue_error

 Block132:
	mov esi,8
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x68],si
	jne Block135

 Block133:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block136

 Block134:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block136

 Block135:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block136:
	mov byte ptr [esp+0x80],0x16
	cmp word ptr [esp+0x48],si
	jne Block139

 Block137:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block140:
	mov byte ptr [esp+0x80],1
	cmp word ptr [esp+0x58],si
	jne Block143

 Block141:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	test eax,eax
	je Block144

 Block142:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block144

 Block143:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block144:
	mov edi,dword ptr [esp+0x1C]
	cmp dword ptr [edi+0x1D4],0
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ebp,[edi+0x1D4]
	sete al
	test al,al
	je Block166

 Block145:
	lea eax,[esp+0x48]
	push eax
	call esi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block147

 Block146:
	push eax
	call _com_issue_error

 Block147:
	lea edx,[esp+0x58]
	push edx
	mov byte ptr [esp+0x84],0x1A
	call esi
	lea eax,[esp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block149

 Block148:
	push eax
	call _com_issue_error

 Block149:
	push 0
	push 0
	lea ecx,[esp+0x50]
	push ecx
	lea edx,[esp+0x64]
	push edx
	push ecx
	mov dword ptr [esp+0xB4],esp
	mov ecx,esp
	mov bl,0x1B
	push offset _S_UIUIWINDOWIMGITE__2
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0x1C
	jne Block151

 Block150:
	push 0x80004003
	call _com_issue_error

 Block151:
	lea eax,[esp+0x7C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0x1D
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block154

 Block152:
	cmp eax,0x80004002
	je Block154

 Block153:
	push eax
	call _com_issue_error

 Block154:
	mov byte ptr [esp+0x80],bl
	mov ebx,8
	cmp word ptr [esp+0x68],bx
	jne Block157

 Block155:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	test eax,eax
	je Block158

 Block156:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block158

 Block157:
	lea edx,[esp+0x68]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block158:
	mov byte ptr [esp+0x80],0x1A
	cmp word ptr [esp+0x58],bx
	jne Block161

 Block159:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block162

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block162

 Block161:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block162:
	mov byte ptr [esp+0x80],1
	cmp word ptr [esp+0x48],bx
	jne Block165

 Block163:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block165:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block166:
	add edi,0x1D8
	cmp dword ptr [edi],0
	sete al
	test al,al
	je Block188

 Block167:
	lea ecx,[esp+0x48]
	push ecx
	call esi
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block169

 Block168:
	push eax
	call _com_issue_error

 Block169:
	lea eax,[esp+0x58]
	mov bl,0x1E
	push eax
	mov byte ptr [esp+0x84],bl
	call esi
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block171

 Block170:
	push eax
	call _com_issue_error

 Block171:
	push 0
	push 0
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x64]
	push eax
	push ecx
	mov dword ptr [esp+0xB4],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMGITE__1
	mov byte ptr [esp+0x98],0x1F
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0x20
	jne Block173

 Block172:
	push 0x80004003
	call _com_issue_error

 Block173:
	lea ecx,[esp+0x7C]
	push ecx
	mov byte ptr [esp+0x98],0x1F
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0x21
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block176

 Block174:
	cmp eax,0x80004002
	je Block176

 Block175:
	push eax
	call _com_issue_error

 Block176:
	mov esi,8
	mov byte ptr [esp+0x80],0x1F
	cmp word ptr [esp+0x68],si
	jne Block179

 Block177:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	test eax,eax
	je Block180

 Block178:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block180

 Block179:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block180:
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],si
	jne Block183

 Block181:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	test eax,eax
	je Block184

 Block182:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block184

 Block183:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block184:
	mov byte ptr [esp+0x80],1
	cmp word ptr [esp+0x48],si
	jne Block187

 Block185:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block188

 Block186:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block188

 Block187:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block188:
	mov esi,dword ptr [esp+0x1C]
	add esi,0x1DC
	cmp dword ptr [esi],0
	sete al
	test al,al
	je Block210

 Block189:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x48]
	push edx
	call ebx
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block191

 Block190:
	push eax
	call _com_issue_error

 Block191:
	lea ecx,[esp+0x58]
	push ecx
	mov byte ptr [esp+0x84],0x22
	call ebx
	lea edx,[esp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block193

 Block192:
	push eax
	call _com_issue_error

 Block193:
	push 0
	push 0
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esp+0x64]
	push ecx
	push ecx
	mov dword ptr [esp+0xB4],esp
	mov ecx,esp
	mov bl,0x23
	push offset _S_UIUIWINDOWIMGITE
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0x24
	jne Block195

 Block194:
	push 0x80004003
	call _com_issue_error

 Block195:
	lea edx,[esp+0x7C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0x25
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block198

 Block196:
	cmp eax,0x80004002
	je Block198

 Block197:
	push eax
	call _com_issue_error

 Block198:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0x80],bl
	jne Block201

 Block199:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block202

 Block200:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block202

 Block201:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block202:
	mov ebx,8
	mov byte ptr [esp+0x80],0x22
	cmp word ptr [esp+0x58],bx
	jne Block205

 Block203:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block206

 Block204:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block206

 Block205:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block206:
	mov byte ptr [esp+0x80],1
	cmp word ptr [esp+0x48],bx
	jne Block209

 Block207:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block210

 Block208:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block210

 Block209:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block210:
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	mov eax,dword ptr [esp+0xA8]
	dec eax
	mov byte ptr [esp+0x80],0x26
	mov dword ptr [esp+0xA0],ebx
	cmp eax,4
	ja Block217

 Block211:
	cmp EAX, 0
je Block212
cmp EAX, 1
je Block213
cmp EAX, 2
je Block214
cmp EAX, 3
je Block215
cmp EAX, 4
je Block216


 Block212:
	mov eax,dword ptr [esp+0x34]
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov dword ptr [esp+0xA0],0x36F
	jmp Block217

 Block213:
	mov ecx,dword ptr [esp+0x38]
	push ecx
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov dword ptr [esp+0xA0],0xC6F
	jmp Block217

 Block214:
	push ebp
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov dword ptr [esp+0xA0],0xFC0
	jmp Block217

 Block215:
	push edi
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov dword ptr [esp+0xA0],0x3F0
	jmp Block217

 Block216:
	push esi
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov dword ptr [esp+0xA0],0xF08

 Block217:
	cmp dword ptr [esp+0x9C],ebx
	je Block290

 Block218:
	mov esi,dword ptr [esp+0xB0]
	cmp dword ptr [esp+0x30],ebx
	je Block235

 Block219:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block221

 Block220:
	push eax
	call _com_issue_error

 Block221:
	mov edx,dword ptr [esp+0x20]
	mov ecx,dword ptr [edx]
	mov byte ptr [esp+0x80],0x27
	test ecx,ecx
	jne Block223

 Block222:
	push 0x80004003
	call _com_issue_error

 Block223:
	mov eax,ecx
	test eax,eax
	jne Block225

 Block224:
	push 0x80004003
	call _com_issue_error

 Block225:
	mov ebp,eax
	test ebp,ebp
	jne Block227

 Block226:
	push 0x80004003
	call _com_issue_error

 Block227:
	mov edi,dword ptr [edx]
	test edi,edi
	jne Block229

 Block228:
	push 0x80004003
	call _com_issue_error

 Block229:
	mov ebx,dword ptr [esp+0x88]
	test ebx,ebx
	jne Block231

 Block230:
	push 0x80004003
	call _com_issue_error

 Block231:
	lea eax,[esp+0x58]
	push eax
	push 0
	push 0
	push 0
	push 0
	call IWzCanvas::Getheight
	imul eax,esi
	push eax
	mov ecx,ebp
	call IWzCanvas::Getwidth
	imul eax,esi
	push eax
	push 0xFF
	mov ecx,ebp
	push ecx
	call IWzCanvas::Getcy
	imul eax,esi
	mov edx,dword ptr [esp+0xB8]
	sub edx,eax
	push edx
	mov ecx,edi
	call IWzCanvas::Getcx
	imul eax,esi
	mov ecx,dword ptr [esp+0xB8]
	sub ecx,eax
	push ecx
	mov ecx,ebx
	call IWzCanvas::CopyEx
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x80],0x26
	jne Block234

 Block232:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block235

 Block233:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block235

 Block234:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block235:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	xor ebp,ebp
	add esp,8
	cmp eax,ebp
	jge Block237

 Block236:
	push eax
	call _com_issue_error

 Block237:
	mov edi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0x28
	cmp edi,ebp
	jne Block239

 Block238:
	push 0x80004003
	call _com_issue_error

 Block239:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0xA0]
	push ecx
	push edi
	mov dword ptr [esp+0xA8],ebp
	call edx
	cmp eax,ebp
	jge Block241

 Block240:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block241:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	mov ebx,dword ptr [esp+0xA0]
	lea ecx,[esp+0xA8]
	push ecx
	push edi
	mov dword ptr [esp+0xB0],ebp
	call edx
	cmp eax,ebp
	jge Block243

 Block242:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block243:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x74]
	mov ebp,dword ptr [esp+0xA8]
	lea ecx,[esp+0x9C]
	push ecx
	push edi
	mov dword ptr [esp+0xA4],0
	call edx
	test eax,eax
	jge Block245

 Block244:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block245:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax]
	mov edi,dword ptr [esp+0x9C]
	lea edx,[esp+0xB0]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x6C]
	mov dword ptr [esp+0xB8],0
	call eax
	test eax,eax
	jge Block247

 Block246:
	mov ecx,dword ptr [esp+0x14]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block247:
	mov ecx,dword ptr [esp+0x88]
	test ecx,ecx
	jne Block249

 Block248:
	push 0x80004003
	call _com_issue_error

 Block249:
	mov eax,dword ptr [esp+0x14]
	imul ebx,esi
	imul ebp,esi
	lea edx,[esp+0x58]
	imul edi,esi
	push edx
	mov edx,dword ptr [esp+0x98]
	push 0
	push 0
	push 0
	push 0
	push ebx
	push ebp
	push 0xFF
	push eax
	mov eax,dword ptr [esp+0xD4]
	imul eax,esi
	sub edx,edi
	push edx
	mov edx,dword ptr [esp+0xB8]
	sub edx,eax
	push edx
	call IWzCanvas::CopyEx
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x80],0x26
	jne Block252

 Block250:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block253

 Block251:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block253

 Block252:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block253:
	mov ebx,dword ptr [esp+0x8C]
	mov ecx,dword ptr [esp+0x1C]
	push ebx
	call CItemInfo::IsCashItem_1
	mov edi,dword ptr [esp+0xA4]
	test eax,eax
	je Block259

 Block254:
	test edi,edi
	jne Block259

 Block255:
	push ebx
	call is_only_for_prepaid_card_cash_items
	add esp,4
	test eax,eax
	jne Block259

 Block256:
	push offset _D_VTMISSING
	lea ecx,[esp+0x6C]
	call Ztl_variant_t::_ctor_1
	mov ebx,dword ptr [esp+0x88]
	mov edi,dword ptr [esp+0x24]
	mov ebp,dword ptr [edi]
	mov byte ptr [esp+0x80],0x29
	test ebx,ebx
	jne Block258

 Block257:
	push 0x80004003
	call _com_issue_error

 Block258:
	lea edx,[esp+0x68]
	push edx
	push 0
	push 0
	push 0
	push 0
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getheight
	imul eax,esi
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getwidth
	imul eax,esi
	push eax
	push 0xFF
	push ebp
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getcy
	imul eax,esi
	mov ecx,dword ptr [esp+0xB8]
	sub ecx,eax
	push ecx
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getcx
	mov edx,0x20
	sub edx,eax
	imul edx,esi
	add edx,dword ptr [esp+0xB8]
	mov ecx,ebx
	push edx
	jmp Block272

 Block259:
	push ebx
	call is_only_for_prepaid_card_cash_items
	add esp,4
	test eax,eax
	je Block273

 Block260:
	test edi,edi
	jne Block273

 Block261:
	push offset _D_VTMISSING
	lea ecx,[esp+0x6C]
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x80],0x2A
	test ecx,ecx
	jne Block263

 Block262:
	push 0x80004003
	call _com_issue_error

 Block263:
	mov edx,ecx
	test edx,edx
	jne Block265

 Block264:
	push 0x80004003
	call _com_issue_error

 Block265:
	mov ebx,edx
	test ebx,ebx
	jne Block267

 Block266:
	push 0x80004003
	call _com_issue_error

 Block267:
	mov ebp,edx
	test ebp,ebp
	jne Block269

 Block268:
	push 0x80004003
	call _com_issue_error

 Block269:
	mov edi,dword ptr [esp+0x88]
	test edi,edi
	jne Block271

 Block270:
	push 0x80004003
	call _com_issue_error

 Block271:
	lea eax,[esp+0x68]
	push eax
	push 0
	push 0
	push 0
	push 0
	call IWzCanvas::Getheight
	imul eax,esi
	push eax
	mov ecx,ebx
	call IWzCanvas::Getwidth
	imul eax,esi
	fild dword ptr [esp+0xAC]
	fstp qword ptr [esp+0x50]
	push eax
	push 0xFF
	mov ecx,ebx
	push ecx
	call IWzCanvas::Getcy
	imul eax,esi
	mov dword ptr [esp+0xB0],eax
	fild dword ptr [esp+0xB0]
	fmul qword ptr [__real_3ffccccccccccccd]
	fsubr qword ptr [esp+0x5C]
	call __ftol2_sse
	mov edx,esi
	shl edx,5
	add edx,dword ptr [esp+0xB4]
	push eax
	mov dword ptr [esp+0xB4],edx
	fild dword ptr [esp+0xB4]
	mov ecx,ebp
	fstp qword ptr [esp+0x60]
	call IWzCanvas::Getcx
	imul eax,esi
	mov dword ptr [esp+0xB4],eax
	fild dword ptr [esp+0xB4]
	fmul qword ptr [__real_3ffccccccccccccd]
	fsubr qword ptr [esp+0x60]
	call __ftol2_sse
	push eax
	mov ecx,edi

 Block272:
	call IWzCanvas::CopyEx
	lea ecx,[esp+0x68]
	mov byte ptr [esp+0x80],0x26
	call Ztl_variant_t::~Ztl_variant_t

 Block273:
	cmp dword ptr [esp+0x98],0
	je Block392

 Block274:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block276

 Block275:
	push eax
	call _com_issue_error

 Block276:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x80],0x2B
	test ecx,ecx
	jne Block278

 Block277:
	push 0x80004003
	call _com_issue_error

 Block278:
	mov edx,ecx
	test edx,edx
	jne Block280

 Block279:
	push 0x80004003
	call _com_issue_error

 Block280:
	mov ebx,edx
	test ebx,ebx
	jne Block282

 Block281:
	push 0x80004003
	call _com_issue_error

 Block282:
	mov eax,dword ptr [esp+0x24]
	mov ebp,dword ptr [eax]
	test ebp,ebp
	jne Block284

 Block283:
	push 0x80004003
	call _com_issue_error

 Block284:
	mov edi,dword ptr [esp+0x88]
	test edi,edi
	jne Block286

 Block285:
	push 0x80004003
	call _com_issue_error

 Block286:
	lea edx,[esp+0x58]
	push edx
	push 0
	push 0
	push 0
	push 0
	call IWzCanvas::Getheight
	imul eax,esi
	push eax
	mov ecx,ebx
	call IWzCanvas::Getwidth
	imul eax,esi
	push eax
	push 0xFF
	mov eax,ebx
	push eax
	mov ecx,ebx
	call IWzCanvas::Getcy
	mov ecx,eax
	mov eax,dword ptr [esp+0xB8]
	imul ecx,esi
	sub eax,ecx
	push eax
	mov ecx,ebp
	call IWzCanvas::Getcx
	mov edx,0x20
	sub edx,eax
	imul edx,esi
	add edx,dword ptr [esp+0xB8]
	mov ecx,edi
	push edx
	call IWzCanvas::CopyEx
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x80],0x26
	jne Block289

 Block287:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block392

 Block288:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block392

 Block289:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block392

 Block290:
	mov ebp,dword ptr [esp+0x90]
	cmp dword ptr [esp+0x30],ebx
	je Block301

 Block291:
	mov edx,3
	mov word ptr [esp+0x58],dx
	mov dword ptr [esp+0x60],0xFF
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [edx]
	mov ecx,eax
	mov byte ptr [esp+0x80],0x2C
	test ecx,ecx
	jne Block293

 Block292:
	push 0x80004003
	call _com_issue_error

 Block293:
	mov edi,eax
	test edi,edi
	jne Block295

 Block294:
	push 0x80004003
	call _com_issue_error

 Block295:
	mov esi,dword ptr [esp+0x88]
	test esi,esi
	jne Block297

 Block296:
	push 0x80004003
	call _com_issue_error

 Block297:
	lea edx,[esp+0x58]
	push edx
	push eax
	call IWzCanvas::Getcy
	mov ecx,dword ptr [esp+0x9C]
	sub ecx,eax
	push ecx
	mov ecx,edi
	call IWzCanvas::Getcx
	mov edx,ebp
	sub edx,eax
	push edx
	mov ecx,esi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x80],0x26
	jne Block300

 Block298:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block301

 Block299:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block301

 Block300:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block301:
	cmp word ptr [esp+0xA0],0
	je Block346

 Block302:
	mov dword ptr [esp+0x90],0
	lea edx,[esp+0xA8]
	push 0x3D0
	push edx
	mov byte ptr [esp+0x88],0x2D
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[esp+0x94]
	push ecx
	push eax
	mov byte ptr [esp+0x8C],0x2E
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0xB4]
	add esp,0xC
	mov byte ptr [esp+0x80],0x2D
	test eax,eax
	je Block304

 Block303:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block304:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block306

 Block305:
	push eax
	call _com_issue_error

 Block306:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x58]
	mov bl,0x2F
	push ecx
	mov byte ptr [esp+0x84],bl
	call edi
	lea edx,[esp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block308

 Block307:
	push eax
	call _com_issue_error

 Block308:
	mov ecx,dword ptr [esp+0x90]
	mov byte ptr [esp+0x80],0x30
	test ecx,ecx
	jne Block310

 Block309:
	push 0x80004003
	call _com_issue_error

 Block310:
	lea eax,[esp+0x48]
	push eax
	lea edx,[esp+0x5C]
	push edx
	push 0x20
	push 0x20
	call IWzCanvas::Create
	mov byte ptr [esp+0x80],bl
	mov ebx,8
	cmp word ptr [esp+0x58],bx
	jne Block313

 Block311:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block314

 Block312:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block314

 Block313:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block314:
	mov byte ptr [esp+0x80],0x2D
	cmp word ptr [esp+0x48],bx
	jne Block317

 Block315:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block318

 Block316:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block318

 Block317:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block318:
	mov eax,dword ptr [esp+0x90]
	test eax,eax
	jne Block320

 Block319:
	push 0x80004003
	call _com_issue_error

 Block320:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x70]
	push 0
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block322

 Block321:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block322:
	mov eax,dword ptr [esp+0x90]
	test eax,eax
	jne Block324

 Block323:
	push 0x80004003
	call _com_issue_error

 Block324:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	push 0
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block326

 Block325:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block326:
	lea eax,[esp+0x58]
	push eax
	call edi
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block328

 Block327:
	push eax
	call _com_issue_error

 Block328:
	mov edi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0x31
	test edi,edi
	jne Block330

 Block329:
	push 0x80004003
	call _com_issue_error

 Block330:
	mov esi,dword ptr [esp+0x90]
	test esi,esi
	jne Block332

 Block331:
	push 0x80004003
	call _com_issue_error

 Block332:
	lea edx,[esp+0x58]
	push edx
	push edi
	mov ecx,edi
	call IWzCanvas::Getcy
	mov ecx,0x20
	sub ecx,eax
	push ecx
	mov ecx,edi
	call IWzCanvas::Getcx
	neg eax
	push eax
	mov ecx,esi
	call IWzCanvas::Copy
	mov byte ptr [esp+0x80],0x2D
	cmp word ptr [esp+0x58],bx
	jne Block335

 Block333:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block336

 Block334:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block336

 Block335:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block336:
	mov ecx,dword ptr [esp+0xA0]
	mov edx,dword ptr [esp+0x90]
	push 3
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x9C]
	mov dword ptr [esp+0xAC],esp
	test eax,eax
	je Block338

 Block337:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block338:
	call make_SingleColor_alpha_blur_1
	mov eax,3
	add esp,0xC
	mov word ptr [esp+0x58],ax
	mov dword ptr [esp+0x60],0xFF
	mov ecx,dword ptr [esp+0x88]
	mov byte ptr [esp+0x80],0x32
	test ecx,ecx
	jne Block340

 Block339:
	push 0x80004003
	call _com_issue_error

 Block340:
	mov eax,dword ptr [esp+0x90]
	lea edx,[esp+0x58]
	push edx
	mov edx,dword ptr [esp+0x98]
	push eax
	add edx,0xFFFFFFE0
	push edx
	push ebp
	call IWzCanvas::Copy
	mov byte ptr [esp+0x80],0x2D
	cmp word ptr [esp+0x58],bx
	jne Block343

 Block341:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block344

 Block342:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block344

 Block343:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block344:
	mov eax,dword ptr [esp+0x90]
	mov byte ptr [esp+0x80],0x26
	test eax,eax
	je Block346

 Block345:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block346:
	mov ecx,3
	mov word ptr [esp+0x58],cx
	mov dword ptr [esp+0x60],0xFF
	mov edi,dword ptr [esp+0x14]
	xor ebx,ebx
	mov byte ptr [esp+0x80],0x33
	cmp edi,ebx
	jne Block348

 Block347:
	push 0x80004003
	call _com_issue_error

 Block348:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x90]
	push eax
	push edi
	mov dword ptr [esp+0x98],ebx
	call ecx
	cmp eax,ebx
	jge Block350

 Block349:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block350:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x6C]
	mov esi,dword ptr [esp+0x90]
	lea eax,[esp+0xA0]
	push eax
	push edi
	mov dword ptr [esp+0xA8],ebx
	call ecx
	cmp eax,ebx
	jge Block352

 Block351:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block352:
	mov ecx,dword ptr [esp+0x88]
	cmp ecx,ebx
	jne Block354

 Block353:
	push 0x80004003
	call _com_issue_error

 Block354:
	mov ebx,dword ptr [esp+0x94]
	lea edx,[esp+0x58]
	push edx
	push edi
	mov eax,ebx
	sub eax,esi
	mov edx,ebp
	sub edx,dword ptr [esp+0xA8]
	push eax
	push edx
	call IWzCanvas::Copy
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x80],0x26
	jne Block357

 Block355:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block358

 Block356:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block358

 Block357:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block358:
	mov edi,dword ptr [esp+0x8C]
	mov ecx,dword ptr [esp+0x1C]
	push edi
	call CItemInfo::IsCashItem_1
	mov esi,dword ptr [esp+0xA4]
	test eax,eax
	je Block364

 Block359:
	test esi,esi
	jne Block364

 Block360:
	push edi
	call is_only_for_prepaid_card_cash_items
	add esp,4
	test eax,eax
	jne Block364

 Block361:
	mov edx,3
	mov word ptr [esp+0x68],dx
	mov dword ptr [esp+0x70],0xFF
	mov esi,dword ptr [esp+0x88]
	mov edi,dword ptr [esp+0x24]
	mov eax,dword ptr [edi]
	mov byte ptr [esp+0x80],0x34
	test esi,esi
	jne Block363

 Block362:
	push 0x80004003
	call _com_issue_error

 Block363:
	lea ecx,[esp+0x68]
	push ecx
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getcy
	sub ebx,eax
	push ebx
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getcx
	mov edx,ebp
	sub edx,eax
	add edx,0x20
	push edx
	jmp Block373

 Block364:
	push edi
	call is_only_for_prepaid_card_cash_items
	add esp,4
	test eax,eax
	je Block374

 Block365:
	test esi,esi
	jne Block374

 Block366:
	mov eax,3
	mov word ptr [esp+0x68],ax
	mov dword ptr [esp+0x70],0xFF
	mov ecx,dword ptr [esp+0x28]
	mov eax,dword ptr [ecx]
	mov ecx,eax
	mov byte ptr [esp+0x80],0x35
	test ecx,ecx
	jne Block368

 Block367:
	push 0x80004003
	call _com_issue_error

 Block368:
	mov edx,dword ptr [esp+0x28]
	mov edi,dword ptr [edx]
	test edi,edi
	jne Block370

 Block369:
	push 0x80004003
	call _com_issue_error

 Block370:
	mov esi,dword ptr [esp+0x88]
	test esi,esi
	jne Block372

 Block371:
	push 0x80004003
	call _com_issue_error

 Block372:
	fild dword ptr [esp+0x94]
	lea edx,[esp+0x68]
	push edx
	push eax
	fstp qword ptr [esp+0x40]
	call IWzCanvas::Getcy
	mov dword ptr [esp+0x98],eax
	fild dword ptr [esp+0x98]
	fmul qword ptr [__real_3ffccccccccccccd]
	fsubr qword ptr [esp+0x40]
	call __ftol2_sse
	push eax
	lea eax,[ebp+0x20]
	mov dword ptr [esp+0x9C],eax
	fild dword ptr [esp+0x9C]
	mov ecx,edi
	fstp qword ptr [esp+0x44]
	call IWzCanvas::Getcx
	mov dword ptr [esp+0x9C],eax
	fild dword ptr [esp+0x9C]
	fmul qword ptr [__real_3ffccccccccccccd]
	fsubr qword ptr [esp+0x44]
	call __ftol2_sse
	push eax

 Block373:
	mov ecx,esi
	call IWzCanvas::Copy
	lea ecx,[esp+0x68]
	call Ztl_variant_t::~Ztl_variant_t

 Block374:
	cmp dword ptr [esp+0x98],0
	je Block385

 Block375:
	mov ecx,3
	mov word ptr [esp+0x58],cx
	mov dword ptr [esp+0x60],0xFF
	mov ecx,dword ptr [esp+0x2C]
	mov eax,dword ptr [ecx]
	mov ecx,eax
	mov byte ptr [esp+0x80],0x36
	test ecx,ecx
	jne Block377

 Block376:
	push 0x80004003
	call _com_issue_error

 Block377:
	mov edx,dword ptr [esp+0x2C]
	mov edi,dword ptr [edx]
	test edi,edi
	jne Block379

 Block378:
	push 0x80004003
	call _com_issue_error

 Block379:
	mov esi,dword ptr [esp+0x88]
	test esi,esi
	jne Block381

 Block380:
	push 0x80004003
	call _com_issue_error

 Block381:
	lea edx,[esp+0x58]
	push edx
	push eax
	call IWzCanvas::Getcy
	mov ecx,dword ptr [esp+0x9C]
	sub ecx,eax
	push ecx
	mov ecx,edi
	call IWzCanvas::Getcx
	mov edx,ebp
	sub edx,eax
	add edx,0x20
	push edx
	mov ecx,esi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x80],0x26
	jne Block384

 Block382:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block385

 Block383:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block385

 Block384:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block385:
	mov edi,dword ptr [esp+0x18]
	test edi,edi
	sete al
	test al,al
	sete al
	test al,al
	je Block392

 Block386:
	cmp dword ptr [esp+0xAC],1
	je Block392

 Block387:
	mov edx,3
	mov word ptr [esp+0x68],dx
	mov dword ptr [esp+0x70],0xFF
	mov byte ptr [esp+0x80],0x37
	test edi,edi
	jne Block389

 Block388:
	push 0x80004003
	call _com_issue_error

 Block389:
	mov esi,dword ptr [esp+0x88]
	test esi,esi
	jne Block391

 Block390:
	push 0x80004003
	call _com_issue_error

 Block391:
	lea eax,[esp+0x68]
	push eax
	push edi
	mov ecx,edi
	call IWzCanvas::Getcy
	mov ecx,eax
	mov eax,dword ptr [esp+0x9C]
	sub eax,ecx
	sub eax,0x1F
	push eax
	mov ecx,edi
	call IWzCanvas::Getcx
	sub ebp,eax
	inc ebp
	push ebp
	mov ecx,esi
	call IWzCanvas::Copy
	lea ecx,[esp+0x68]
	call Ztl_variant_t::~Ztl_variant_t

 Block392:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x80],1
	test eax,eax
	je Block394

 Block393:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block394:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x84],0
	call edx
	mov eax,dword ptr [esp+0x88]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test eax,eax
	je Block396

 Block395:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block396:
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret 0x2C
}
}
// CItemInfo::RegisterSetItemInfo
_SUB_EXCEPTION_HANDLER(1AF950)
__SUB_CLASS_THIS0(001AF950, __thiscall, 78614,  CItemInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1AF950
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x298
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2AC]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x5C],ecx
	xor ebp,ebp
	lea ecx,[esp+0x94]
	mov dword ptr [esp+0x98],ebp
	call ZRef<CItemInfo::SETITEMINFO>::_Alloc
	mov eax,dword ptr [esp+0x98]
	push 0x20C
	push ebp
	push eax
	mov dword ptr [esp+0x2C0],ebp
	call _memset
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[esp+0xAC]
	push ecx
	call esi
	lea edx,[esp+0xAC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[esp+0xBC]
	push eax
	mov byte ptr [esp+0x2B8],1
	call esi
	lea ecx,[esp+0xBC]
	push offset _D_VTMISSING
	push ecx
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
	lea edx,[esp+0xB4]
	push edx
	lea eax,[esp+0xC8]
	push eax
	push ecx
	mov dword ptr [esp+0x54],esp
	mov ecx,esp
	push offset _S_ETCSETITEMINFOIM
	mov byte ptr [esp+0x2CC],2
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x2C8],3
	cmp dword ptr [_D_G_RM],ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x2A8]
	push ecx
	mov byte ptr [esp+0x2CC],2
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x2BC],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x40],ebp
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
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0x2B4],6
	cmp word ptr [esp+0x294],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x29C]
	xor edx,edx
	mov word ptr [esp+0x294],dx
	cmp eax,ebp
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x294]
	push eax
	call ebx

 Block13:
	mov byte ptr [esp+0x2B4],7
	cmp word ptr [esp+0xBC],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0xC4]
	xor ecx,ecx
	mov word ptr [esp+0xBC],cx
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0xBC]
	push edx
	call ebx

 Block17:
	mov byte ptr [esp+0x2B4],8
	cmp word ptr [esp+0xAC],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0xAC],ax
	mov eax,dword ptr [esp+0xB4]
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0xAC]
	push ecx
	call ebx

 Block21:
	mov edi,dword ptr [esp+0x3C]
	cmp edi,ebp
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[esp+0x84]
	push edx
	mov ecx,edi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x2B8],9
	mov dword ptr [esp+0x3C],ebp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	lea ecx,[esp+0x3C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebp
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov eax,dword ptr [esp+0x84]
	mov byte ptr [esp+0x2B4],0xB
	cmp eax,ebp
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	lea eax,[esp+0x44]
	push eax
	call esi
	mov esi,dword ptr [esp+0x38]
	mov byte ptr [esp+0x2B4],0xC
	mov dword ptr [esp+0x34],ebp
	cmp esi,ebp
	je Block5

 Block31:
	jmp Block33

 Block33:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x48]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block314

 Block34:
	push ebp
	call ZRefCounted_AllocHelper<ZRefCountedDummy<CItemInfo::SETITEMINFO>>::call
	mov dword ptr [eax+4],1
	add eax,0x10
	mov dword ptr [esp+0x34],eax
	push 0x20C
	push ebp
	push eax
	mov byte ptr [esp+0x2C4],0xD
	call _memset
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x34]
	push eax
	call DetachBSTR
	add esp,0x18
	mov ebx,dword ptr [esp+0x20]
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax],ebx
	cmp ebx,ebp
	je Block36

 Block35:
	lea ecx,[ebx+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block36:
	lea edx,[esp+0x250]
	mov byte ptr [esp+0x2C0],0xF
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x2C4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x2BC],0x10
	call Ztl_variant_t::GetUnknown
	xor ebp,ebp
	mov dword ptr [esp+0x28],ebp
	test eax,eax
	je Block39

 Block37:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0xA8]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0xA8]
	mov ebp,ecx
	mov dword ptr [esp+0x28],ebp
	test eax,eax
	jge Block39

 Block38:
	cmp eax,0x80004002
	jne Block1

 Block39:
	cmp word ptr [esp+0x244],8
	mov byte ptr [esp+0x2B4],0x12
	jne Block42

 Block40:
	mov eax,dword ptr [esp+0x24C]
	xor edx,edx
	mov word ptr [esp+0x244],dx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea eax,[esp+0x244]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block43:
	test ebx,ebx
	je Block49

 Block44:
	cmp dword ptr [ebx+4],0
	jne Block48

 Block45:
	mov edi,dword ptr [ebx]
	test edi,edi
	jne Block47

 Block46:
	xor esi,esi
	mov dword ptr [ebx+4],esi
	mov eax,esi
	jmp Block50

 Block47:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	push 0
	push 0
	push 0x3FFFFFFF
	mov esi,eax
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	mov dword ptr [ebx+4],esi

 Block48:
	mov eax,dword ptr [ebx+4]
	jmp Block50

 Block49:
	xor eax,eax

 Block50:
	push eax
	call _atoi
	mov ecx,dword ptr [esp+0x34]
	add esp,4
	push 0
	push 0
	push ecx
	mov dword ptr [ecx],eax
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_ITEMID
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x2C0],0x13
	test ebp,ebp
	je Block5

 Block51:
	lea edx,[esp+0x1E0]
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x2C4],0x12
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x2BC],0x14
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [esp+0x68],edi
	test eax,eax
	je Block54

 Block52:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0xA4]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0xA4]
	mov edi,ecx
	mov dword ptr [esp+0x68],edi
	test eax,eax
	jge Block54

 Block53:
	cmp eax,0x80004002
	jne Block1

 Block54:
	cmp word ptr [esp+0x1D4],8
	mov byte ptr [esp+0x2B4],0x16
	jne Block57

 Block55:
	mov eax,dword ptr [esp+0x1DC]
	xor edx,edx
	mov word ptr [esp+0x1D4],dx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea eax,[esp+0x1D4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block58:
	test edi,edi
	je Block5

 Block59:
	lea ecx,[esp+0x88]
	push ecx
	mov ecx,edi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x2B8],0x17
	mov dword ptr [esp+0x28],0
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block61

 Block60:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block61:
	lea ecx,[esp+0x28]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	test eax,eax
	jge Block63

 Block62:
	cmp eax,0x80004002
	jne Block1

 Block63:
	mov eax,dword ptr [esp+0x88]
	mov byte ptr [esp+0x2B4],0x19
	test eax,eax
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block65:
	mov ebp,dword ptr [esp+0x24]

 Block66:
	test ebp,ebp
	je Block5

 Block67:
	mov eax,dword ptr [ebp]
	mov eax,dword ptr [eax+0xC]
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x48]
	push edx
	push 1
	push ebp
	call eax
	test eax,eax
	jne Block93

 Block68:
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x5C]
	push edx
	call DetachBSTR
	mov esi,eax
	lea eax,[esp+0x28]
	add esp,8
	cmp eax,esi
	je Block78

 Block69:
	test ebx,ebx
	je Block76

 Block70:
	lea ecx,[ebx+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block76

 Block71:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block73

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block73:
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block75

 Block74:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block75:
	push ebx
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block76:
	mov ebx,dword ptr [esi]
	mov dword ptr [esp+0x20],ebx
	test ebx,ebx
	je Block78

 Block77:
	lea edx,[ebx+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block78:
	mov esi,dword ptr [esp+0x58]
	test esi,esi
	je Block87

 Block79:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block86

 Block80:
	test esi,esi
	je Block86

 Block81:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block83

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block83:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block85

 Block84:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block85:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block86:
	mov dword ptr [esp+0x58],0

 Block87:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block89

 Block88:
	lea ecx,[ebx+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block89:
	lea edx,[esp+0x11C]
	mov byte ptr [esp+0x2BC],0x1A
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x2C0],0x19
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x2BC],0x1B
	call get_int32
	mov ecx,dword ptr [esp+0x38]
	add esp,8
	push 0xFFFFFFFF
	add ecx,4
	mov esi,eax
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],esi
	cmp word ptr [esp+0x114],8
	mov byte ptr [esp+0x2B4],0x19
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [esp+0x114],ax
	mov eax,dword ptr [esp+0x11C]
	test eax,eax
	je Block66

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block92:
	lea ecx,[esp+0x114]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block66

 Block93:
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_CATEGORYNAME
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x34]
	lea edx,[esp+0x240]
	mov byte ptr [esp+0x2C0],0x1C
	push edx
	mov byte ptr [esp+0x2C4],0x19
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x2BC],0x1D
	call Ztl_variant_t::GetUnknown
	xor ebp,ebp
	mov dword ptr [esp+0x64],ebp
	test eax,eax
	je Block96

 Block94:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x8C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x8C]
	mov ebp,ecx
	mov dword ptr [esp+0x64],ebp
	test eax,eax
	jge Block96

 Block95:
	cmp eax,0x80004002
	jne Block1

 Block96:
	cmp word ptr [esp+0x234],8
	mov byte ptr [esp+0x2B4],0x1F
	jne Block99

 Block97:
	mov eax,dword ptr [esp+0x23C]
	xor edx,edx
	mov word ptr [esp+0x234],dx
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea eax,[esp+0x234]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block100:
	test ebp,ebp
	je Block150

 Block101:
	push 0x64
	lea ecx,[esp+0x70]
	mov dword ptr [esp+0x70],offset ZMAP_LONG_ZXSTRINGA_VTABLE
	mov dword ptr [esp+0x74],0
	mov dword ptr [esp+0x78],0x1F
	mov dword ptr [esp+0x7C],0
	call ZMap<long, ZXString<char>, long>::_CalcAutoGrow
	lea ecx,[esp+0xA0]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x2B8],0x20
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x2B8],0x21
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block103

 Block102:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block103:
	lea ecx,[esp+0x28]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	test eax,eax
	jge Block105

 Block104:
	cmp eax,0x80004002
	jne Block1

 Block105:
	mov eax,dword ptr [esp+0xA0]
	mov byte ptr [esp+0x2B4],0x20
	test eax,eax
	je Block108

 Block106:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block108

 Block108:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block5

 Block109:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x34]
	push edx
	lea edx,[esp+0x48]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block149

 Block110:
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x64]
	push edx
	call DetachBSTR
	mov esi,eax
	lea eax,[esp+0x28]
	add esp,8
	cmp eax,esi
	je Block120

 Block111:
	test ebx,ebx
	je Block118

 Block112:
	lea ecx,[ebx+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block118

 Block113:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block115

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block115:
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block117

 Block116:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block117:
	push ebx
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block118:
	mov ebx,dword ptr [esi]
	mov dword ptr [esp+0x20],ebx
	test ebx,ebx
	je Block120

 Block119:
	lea edx,[ebx+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block120:
	mov esi,dword ptr [esp+0x60]
	test esi,esi
	je Block129

 Block121:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block128

 Block122:
	test esi,esi
	je Block128

 Block123:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block125

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block125:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block127

 Block126:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block127:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block128:
	mov dword ptr [esp+0x60],0

 Block129:
	test ebx,ebx
	je Block135

 Block130:
	cmp dword ptr [ebx+4],0
	jne Block134

 Block131:
	mov edi,dword ptr [ebx]
	test edi,edi
	jne Block133

 Block132:
	xor esi,esi
	mov dword ptr [ebx+4],esi
	mov eax,esi
	jmp Block136

 Block133:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	push 0
	push 0
	push 0x3FFFFFFF
	mov esi,eax
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	mov dword ptr [ebx+4],esi

 Block134:
	mov eax,dword ptr [ebx+4]
	jmp Block136

 Block135:
	xor eax,eax

 Block136:
	push eax
	call _atoi
	mov dword ptr [esp+0x1C],eax
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block138

 Block137:
	lea ecx,[ebx+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block138:
	lea edx,[esp+0x138]
	mov byte ptr [esp+0x2B8],0x22
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x2BC],0x20
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0x2B4],0x23
	jne Block140

 Block139:
	mov edi,dword ptr [eax+8]
	jmp Block141

 Block140:
	mov edi,offset _S___3

 Block141:
	xor esi,esi
	mov dword ptr [esp+0x1C],esi
	test edi,edi
	je Block143

 Block142:
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
	lea ecx,[esp+0x24]
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
	lea ecx,[esp+0x20]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [esp+0x1C]

 Block143:
	cmp word ptr [esp+0x134],8
	mov byte ptr [esp+0x2B4],0x25
	jne Block146

 Block144:
	xor eax,eax
	mov word ptr [esp+0x134],ax
	mov eax,dword ptr [esp+0x13C]
	test eax,eax
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea ecx,[esp+0x134]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block147:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x74]
	call ZMap<long, ZXString<char>, long>::Insert
	mov byte ptr [esp+0x2B4],0x20
	test esi,esi
	je Block108

 Block148:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4
	jmp Block108

 Block149:
	lea ecx,[esp+0x6C]
	push ecx
	mov ecx,dword ptr [esp+0x34]
	add ecx,0x1F4
	call ZMap<long, ZXString<char>, long>::operator=
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0x2B4],0x1F
	mov dword ptr [esp+0x6C],offset ZMAP_LONG_ZXSTRINGA_VTABLE
	call ZMap<long, ZXString<char>, long>::RemoveAll

 Block150:
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_EFFECT
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x34]
	lea edx,[esp+0x200]
	mov byte ptr [esp+0x2C0],0x26
	push edx
	mov byte ptr [esp+0x2C4],0x1F
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x2BC],0x27
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block153

 Block151:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x9C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x9C]
	mov esi,ecx
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	jge Block153

 Block152:
	cmp eax,0x80004002
	jne Block1

 Block153:
	cmp word ptr [esp+0x1F4],8
	mov byte ptr [esp+0x2B4],0x29
	jne Block156

 Block154:
	mov eax,dword ptr [esp+0x1FC]
	xor edx,edx
	mov word ptr [esp+0x1F4],dx
	test eax,eax
	je Block157

 Block155:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block157

 Block156:
	lea eax,[esp+0x1F4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block157:
	test esi,esi
	je Block5

 Block158:
	lea ecx,[esp+0x90]
	push ecx
	mov ecx,esi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x2B8],0x2A
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block160

 Block159:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block160:
	lea ecx,[esp+0x28]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	test eax,eax
	jge Block162

 Block161:
	cmp eax,0x80004002
	jne Block1

 Block162:
	mov eax,dword ptr [esp+0x90]
	mov byte ptr [esp+0x2B4],0x29
	test eax,eax
	je Block164

 Block163:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block164:
	mov ebp,dword ptr [esp+0x24]
	mov edi,dword ptr [ZImports::_InterlockedDecrement]
	test ebp,ebp
	je Block5

 Block165:
	mov eax,dword ptr [ebp]
	mov eax,dword ptr [eax+0xC]
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x48]
	push edx
	push 1
	push ebp
	call eax
	test eax,eax
	jne Block282

 Block166:
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x58]
	push edx
	call DetachBSTR
	mov esi,eax
	lea eax,[esp+0x28]
	add esp,8
	cmp eax,esi
	je Block176

 Block167:
	test ebx,ebx
	je Block174

 Block168:
	lea ecx,[ebx+8]
	push ecx
	call edi
	test eax,eax
	jne Block174

 Block169:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block171

 Block170:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block171:
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block173

 Block172:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block173:
	push ebx
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block174:
	mov ebx,dword ptr [esi]
	mov dword ptr [esp+0x20],ebx
	test ebx,ebx
	je Block176

 Block175:
	lea edx,[ebx+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block176:
	mov esi,dword ptr [esp+0x54]
	test esi,esi
	je Block185

 Block177:
	lea eax,[esi+8]
	push eax
	call edi
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
	mov dword ptr [esp+0x54],0

 Block185:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block187

 Block186:
	lea ecx,[ebx+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block187:
	mov ecx,dword ptr [esp+0x28]
	lea edx,[esp+0x160]
	mov byte ptr [esp+0x2C0],0x2B
	push edx
	mov byte ptr [esp+0x2C4],0x29
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x2BC],0x2C
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	test eax,eax
	je Block190

 Block188:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x40]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x40]
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	test eax,eax
	jge Block190

 Block189:
	cmp eax,0x80004002
	jne Block1

 Block190:
	cmp word ptr [esp+0x154],8
	mov byte ptr [esp+0x2B4],0x2E
	jne Block193

 Block191:
	mov eax,dword ptr [esp+0x15C]
	xor edx,edx
	mov word ptr [esp+0x154],dx
	test eax,eax
	je Block194

 Block192:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block194

 Block193:
	lea eax,[esp+0x154]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block194:
	test ebx,ebx
	je Block200

 Block195:
	cmp dword ptr [ebx+4],0
	jne Block199

 Block196:
	mov ebp,dword ptr [ebx]
	test ebp,ebp
	jne Block198

 Block197:
	xor edi,edi
	mov dword ptr [ebx+4],edi
	mov eax,edi
	jmp Block201

 Block198:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push ebp
	push 0
	push 0
	call WideCharToMultiByte
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	push 0
	push 0
	push 0x3FFFFFFF
	mov edi,eax
	push edi
	push 0xFFFFFFFF
	push ebp
	push 0
	push 0
	call WideCharToMultiByte
	mov dword ptr [ebx+4],edi

 Block199:
	mov eax,dword ptr [ebx+4]
	jmp Block201

 Block200:
	xor eax,eax

 Block201:
	push eax
	call _atoi
	push 0
	mov ebp,eax
	call ZRefCounted_AllocHelper<ZRefCountedDummy<CItemInfo::SETEFFECT>>::call
	lea edi,[eax+0x10]
	add esp,8
	mov dword ptr [eax+4],1
	mov dword ptr [esp+0x2A8],edi
	xor eax,eax
	mov dword ptr [edi],eax
	mov byte ptr [esp+0x2B4],0x2F
	mov dword ptr [edi+4],eax
	test edi,edi
	je Block203

 Block202:
	lea ecx,[edi-0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block203:
	mov edx,dword ptr [esp+0x30]
	mov eax,dword ptr [edx+ebp*8+4]
	lea ebx,[edx+ebp*8+4]
	test eax,eax
	je Block208

 Block204:
	lea ebp,[eax-0x10]
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block207

 Block205:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebp,ebp
	je Block207

 Block206:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebp
	call edx

 Block207:
	mov dword ptr [ebx],0

 Block208:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x811
	push eax
	mov dword ptr [ebx],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x2BC],0x30
	test esi,esi
	je Block5

 Block209:
	lea ecx,[esp+0x28C]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x2C0],0x2F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x2BC],0x31
	call get_int32
	mov ebx,8
	add esp,8
	mov word ptr [edi],ax
	mov byte ptr [esp+0x2B4],0x2F
	cmp word ptr [esp+0x284],bx
	jne Block216

 Block210:
	mov eax,dword ptr [esp+0x28C]
	xor edx,edx
	mov word ptr [esp+0x284],dx
	test eax,eax
	je Block212

 Block211:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block212:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block213:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x812
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x17C]
	mov byte ptr [esp+0x2BC],0x32
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x2C0],0x2F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x2BC],0x33
	call get_int32
	add esp,8
	mov word ptr [edi+2],ax
	mov byte ptr [esp+0x2B4],0x2F
	cmp word ptr [esp+0x174],bx
	jne Block217

 Block214:
	xor eax,eax
	mov word ptr [esp+0x174],ax
	mov eax,dword ptr [esp+0x17C]
	test eax,eax
	je Block218

 Block215:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block218

 Block216:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x284]
	push eax
	call ebp
	jmp Block213

 Block217:
	lea ecx,[esp+0x174]
	push ecx
	call ebp

 Block218:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x813
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x21C]
	mov byte ptr [esp+0x2BC],0x34
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x2C0],0x2F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x2BC],0x35
	call get_int32
	add esp,8
	mov word ptr [edi+4],ax
	mov byte ptr [esp+0x2B4],0x2F
	cmp word ptr [esp+0x214],bx
	jne Block221

 Block219:
	mov eax,dword ptr [esp+0x21C]
	xor ecx,ecx
	mov word ptr [esp+0x214],cx
	test eax,eax
	je Block222

 Block220:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block222

 Block221:
	lea edx,[esp+0x214]
	push edx
	call ebp

 Block222:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x814
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x19C]
	push ecx
	mov byte ptr [esp+0x2C0],0x36
	mov ecx,esi
	mov byte ptr [esp+0x2C0],0x2F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x2BC],0x37
	call get_int32
	add esp,8
	mov word ptr [edi+6],ax
	mov byte ptr [esp+0x2B4],0x2F
	cmp word ptr [esp+0x194],bx
	jne Block225

 Block223:
	mov eax,dword ptr [esp+0x19C]
	xor edx,edx
	mov word ptr [esp+0x194],dx
	test eax,eax
	je Block226

 Block224:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block226

 Block225:
	lea eax,[esp+0x194]
	push eax
	call ebp

 Block226:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x815
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x26C]
	mov byte ptr [esp+0x2BC],0x38
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x2C0],0x2F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x2BC],0x39
	call get_int32
	add esp,8
	mov word ptr [edi+8],ax
	mov byte ptr [esp+0x2B4],0x2F
	cmp word ptr [esp+0x264],bx
	jne Block229

 Block227:
	xor eax,eax
	mov word ptr [esp+0x264],ax
	mov eax,dword ptr [esp+0x26C]
	test eax,eax
	je Block230

 Block228:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block230

 Block229:
	lea ecx,[esp+0x264]
	push ecx
	call ebp

 Block230:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x816
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x1BC]
	mov byte ptr [esp+0x2BC],0x3A
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x2C0],0x2F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x2BC],0x3B
	call get_int32
	add esp,8
	mov word ptr [edi+0xA],ax
	mov byte ptr [esp+0x2B4],0x2F
	cmp word ptr [esp+0x1B4],bx
	jne Block233

 Block231:
	mov eax,dword ptr [esp+0x1BC]
	xor ecx,ecx
	mov word ptr [esp+0x1B4],cx
	test eax,eax
	je Block234

 Block232:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block234

 Block233:
	lea edx,[esp+0x1B4]
	push edx
	call ebp

 Block234:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x817
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0xEC]
	push ecx
	mov byte ptr [esp+0x2C0],0x3C
	mov ecx,esi
	mov byte ptr [esp+0x2C0],0x2F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x2BC],0x3D
	call get_int32
	add esp,8
	mov word ptr [edi+0xC],ax
	mov byte ptr [esp+0x2B4],0x2F
	cmp word ptr [esp+0xE4],bx
	jne Block237

 Block235:
	mov eax,dword ptr [esp+0xEC]
	xor edx,edx
	mov word ptr [esp+0xE4],dx
	test eax,eax
	je Block238

 Block236:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block238

 Block237:
	lea eax,[esp+0xE4]
	push eax
	call ebp

 Block238:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x819
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0xFC]
	mov byte ptr [esp+0x2BC],0x3E
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x2C0],0x2F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x2BC],0x3F
	call get_int32
	add esp,8
	mov word ptr [edi+0xE],ax
	mov byte ptr [esp+0x2B4],0x2F
	cmp word ptr [esp+0xF4],bx
	jne Block241

 Block239:
	xor eax,eax
	mov word ptr [esp+0xF4],ax
	mov eax,dword ptr [esp+0xFC]
	test eax,eax
	je Block242

 Block240:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block242

 Block241:
	lea ecx,[esp+0xF4]
	push ecx
	call ebp

 Block242:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x818
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x10C]
	mov byte ptr [esp+0x2BC],0x40
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x2C0],0x2F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x2BC],0x41
	call get_int32
	add esp,8
	mov word ptr [edi+0x10],ax
	mov byte ptr [esp+0x2B4],0x2F
	cmp word ptr [esp+0x104],bx
	jne Block245

 Block243:
	mov eax,dword ptr [esp+0x10C]
	xor ecx,ecx
	mov word ptr [esp+0x104],cx
	test eax,eax
	je Block246

 Block244:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block246

 Block245:
	lea edx,[esp+0x104]
	push edx
	call ebp

 Block246:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x81A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x12C]
	push ecx
	mov byte ptr [esp+0x2C0],0x42
	mov ecx,esi
	mov byte ptr [esp+0x2C0],0x2F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x2BC],0x43
	call get_int32
	add esp,8
	mov word ptr [edi+0x12],ax
	mov byte ptr [esp+0x2B4],0x2F
	cmp word ptr [esp+0x124],bx
	jne Block249

 Block247:
	mov eax,dword ptr [esp+0x12C]
	xor edx,edx
	mov word ptr [esp+0x124],dx
	test eax,eax
	je Block250

 Block248:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block250

 Block249:
	lea eax,[esp+0x124]
	push eax
	call ebp

 Block250:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x81B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x14C]
	mov byte ptr [esp+0x2BC],0x44
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x2C0],0x2F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x2BC],0x45
	call get_int32
	add esp,8
	mov word ptr [edi+0x14],ax
	mov byte ptr [esp+0x2B4],0x2F
	cmp word ptr [esp+0x144],bx
	jne Block253

 Block251:
	xor eax,eax
	mov word ptr [esp+0x144],ax
	mov eax,dword ptr [esp+0x14C]
	test eax,eax
	je Block254

 Block252:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block254

 Block253:
	lea ecx,[esp+0x144]
	push ecx
	call ebp

 Block254:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x81C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x16C]
	mov byte ptr [esp+0x2BC],0x46
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x2C0],0x2F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x2BC],0x47
	call get_int32
	add esp,8
	mov word ptr [edi+0x16],ax
	mov byte ptr [esp+0x2B4],0x2F
	cmp word ptr [esp+0x164],bx
	jne Block257

 Block255:
	mov eax,dword ptr [esp+0x16C]
	xor ecx,ecx
	mov word ptr [esp+0x164],cx
	test eax,eax
	je Block258

 Block256:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block258

 Block257:
	lea edx,[esp+0x164]
	push edx
	call ebp

 Block258:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x81D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x18C]
	push ecx
	mov byte ptr [esp+0x2C0],0x48
	mov ecx,esi
	mov byte ptr [esp+0x2C0],0x2F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x2BC],0x49
	call get_int32
	add esp,8
	mov word ptr [edi+0x18],ax
	mov byte ptr [esp+0x2B4],0x2F
	cmp word ptr [esp+0x184],bx
	jne Block261

 Block259:
	mov eax,dword ptr [esp+0x18C]
	xor edx,edx
	mov word ptr [esp+0x184],dx
	test eax,eax
	je Block262

 Block260:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block262

 Block261:
	lea eax,[esp+0x184]
	push eax
	call ebp

 Block262:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x81E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x1AC]
	mov byte ptr [esp+0x2BC],0x4A
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x2C0],0x2F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x2BC],0x4B
	call get_int32
	add esp,8
	mov word ptr [edi+0x1A],ax
	mov byte ptr [esp+0x2B4],0x2F
	cmp word ptr [esp+0x1A4],bx
	jne Block265

 Block263:
	xor eax,eax
	mov word ptr [esp+0x1A4],ax
	mov eax,dword ptr [esp+0x1AC]
	test eax,eax
	je Block266

 Block264:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block266

 Block265:
	lea ecx,[esp+0x1A4]
	push ecx
	call ebp

 Block266:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x81F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x1CC]
	mov byte ptr [esp+0x2BC],0x4C
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x2C0],0x2F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x2BC],0x4D
	call get_int32
	add esp,8
	mov word ptr [edi+0x1C],ax
	mov byte ptr [esp+0x2B4],0x2F
	cmp word ptr [esp+0x1C4],bx
	jne Block269

 Block267:
	mov eax,dword ptr [esp+0x1CC]
	xor ecx,ecx
	mov word ptr [esp+0x1C4],cx
	test eax,eax
	je Block270

 Block268:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block270

 Block269:
	lea edx,[esp+0x1C4]
	push edx
	call ebp

 Block270:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1ABD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x1EC]
	push ecx
	mov byte ptr [esp+0x2C0],0x4E
	mov ecx,esi
	mov byte ptr [esp+0x2C0],0x2F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x2BC],0x4F
	call get_int32
	add esp,8
	mov dword ptr [edi+0x20],eax
	mov byte ptr [esp+0x2B4],0x2F
	cmp word ptr [esp+0x1E4],bx
	jne Block273

 Block271:
	mov eax,dword ptr [esp+0x1EC]
	xor edx,edx
	mov word ptr [esp+0x1E4],dx
	test eax,eax
	je Block274

 Block272:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block274

 Block273:
	lea eax,[esp+0x1E4]
	push eax
	call ebp

 Block274:
	xor ebx,ebx
	mov dword ptr [esp+0x6C],offset ZLIST_REF_ITEMSKILL_VTABLE
	mov dword ptr [esp+0x74],ebx
	mov dword ptr [esp+0x78],ebx
	mov dword ptr [esp+0x7C],ebx
	push 0x64
	lea ecx,[esp+0xD0]
	mov dword ptr [esp+0xD0],offset ZMAP_LONG_LONG_VTABLE
	mov dword ptr [esp+0xD4],ebx
	mov dword ptr [esp+0xD8],0x1F
	mov dword ptr [esp+0xDC],ebx
	call ZMap<long, long, long>::_CalcAutoGrow
	lea ecx,[esp+0x6C]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x1C],esp
	push esi
	mov byte ptr [esp+0x2C0],0x51
	call eax
	mov ebp,dword ptr [esp+0x64]
	mov ecx,ebp
	call CItemInfo::LoadItemSkill
	lea ecx,[esp+0xCC]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x1C],esp
	push esi
	call eax
	mov ecx,ebp
	call CItemInfo::LoadSkillBonus
	lea ebp,[edi+0x28]
	mov ecx,ebp
	call ZList<ZRef<CItemInfo::ItemSkill>>::RemoveAll
	lea ecx,[esp+0x6C]
	push ecx
	mov ecx,ebp
	call ZList<ZRef<CItemInfo::ItemSkill>>::AddTail_List
	lea edx,[esp+0xCC]
	push edx
	lea ecx,[edi+0x3C]
	call ZMap<long, long, long>::operator=
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x17F3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x20C]
	push ecx
	mov byte ptr [esp+0x2C0],0x52
	mov ecx,esi
	mov byte ptr [esp+0x2C0],0x51
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x2BC],0x53
	call get_int32
	add esp,8
	mov dword ptr [edi+0x24],eax
	cmp word ptr [esp+0x204],8
	mov byte ptr [esp+0x2B4],0x51
	jne Block277

 Block275:
	mov eax,dword ptr [esp+0x20C]
	xor edx,edx
	mov word ptr [esp+0x204],dx
	cmp eax,ebx
	je Block278

 Block276:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block278

 Block277:
	lea eax,[esp+0x204]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block278:
	lea ecx,[esp+0xCC]
	mov byte ptr [esp+0x2B4],0x50
	mov dword ptr [esp+0xCC],offset ZMAP_LONG_LONG_VTABLE
	call ZMap<long, long, long>::RemoveAll
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0x2B4],0x2F
	mov dword ptr [esp+0x6C],offset ZLIST_REF_ITEMSKILL_VTABLE
	call ZList<ZRef<CItemInfo::ItemSkill>>::RemoveAll
	add edi,0xFFFFFFF0
	lea ebp,[edi+4]
	push ebp
	mov byte ptr [esp+0x2B8],0x2E
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block281

 Block279:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block281

 Block280:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block281:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0x2AC],ebx
	mov byte ptr [esp+0x2B8],0x29
	call edx
	mov ebx,dword ptr [esp+0x20]
	jmp Block164

 Block282:
	push 0
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_COMPLETECOUNT
	call _xbstr_t::_ctor_0
	mov esi,dword ptr [esp+0x30]
	lea eax,[esp+0x22C]
	mov byte ptr [esp+0x2BC],0x54
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x2C0],0x29
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x2BC],0x55
	call get_int32
	mov ecx,dword ptr [esp+0x38]
	add esp,8
	mov dword ptr [ecx+0x1EC],eax
	cmp word ptr [esp+0x224],8
	mov byte ptr [esp+0x2B4],0x29
	jne Block285

 Block283:
	mov eax,dword ptr [esp+0x22C]
	xor edx,edx
	mov word ptr [esp+0x224],dx
	test eax,eax
	je Block286

 Block284:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block286

 Block285:
	lea eax,[esp+0x224]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block286:
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	push offset _S_EFFECTLINK
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x258]
	push ecx
	mov byte ptr [esp+0x2BC],0x56
	mov ecx,esi
	mov byte ptr [esp+0x2BC],0x29
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0x2B4],0x57
	jne Block288

 Block287:
	mov edx,dword ptr [eax+8]
	jmp Block289

 Block288:
	mov edx,offset _S___3

 Block289:
	mov esi,dword ptr [esp+0x30]
	lea edi,[esi+0x1F0]
	test edx,edx
	jne Block292

 Block290:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block295

 Block291:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	mov dword ptr [edi],0
	jmp Block295

 Block292:
	mov eax,edx
	lea esi,[eax+2]
	lea esp,[esp]

 Block293:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block293

 Block294:
	sub eax,esi
	sar eax,1
	mov esi,eax
	lea eax,[esi+esi]
	push eax
	push edx
	push 0
	push esi
	mov ecx,edi
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	mov esi,dword ptr [esp+0x30]

 Block295:
	cmp word ptr [esp+0x254],8
	mov byte ptr [esp+0x2B4],0x29
	jne Block298

 Block296:
	mov eax,dword ptr [esp+0x25C]
	xor ecx,ecx
	mov word ptr [esp+0x254],cx
	test eax,eax
	je Block299

 Block297:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block299

 Block298:
	lea edx,[esp+0x254]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block299:
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	push offset _S_SETITEMNAME
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [esp+0x2C]
	lea eax,[esp+0x278]
	mov byte ptr [esp+0x2B8],0x58
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x2BC],0x29
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0x2B4],0x59
	jne Block301

 Block300:
	mov eax,dword ptr [eax+8]
	jmp Block302

 Block301:
	mov eax,offset _S___3

 Block302:
	push 0xFFFFFFFF
	lea ecx,[esi+0x1E8]
	push eax
	call ZXString<char>::AssignWideStr
	cmp word ptr [esp+0x274],8
	mov byte ptr [esp+0x2B4],0x29
	jne Block305

 Block303:
	mov eax,dword ptr [esp+0x27C]
	xor ecx,ecx
	mov word ptr [esp+0x274],cx
	test eax,eax
	je Block306

 Block304:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block306

 Block305:
	lea edx,[esp+0x274]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block306:
	mov ecx,dword ptr [esp+0x5C]
	lea eax,[esp+0x2C]
	push eax
	push esi
	add ecx,0x9C
	call ZMap<long, ZRef<CItemInfo::SETITEMINFO>, long>::Insert
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x2B8],0x1F
	call edx
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x2B4],0x19
	test eax,eax
	je Block308

 Block307:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block308:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0x2B8],0x16
	call ecx
	mov eax,dword ptr [esp+0x68]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0x2B8],0x12
	call eax
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [esp+0x2B8],0xE
	call edx
	test ebx,ebx
	je Block310

 Block309:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x20],0

 Block310:
	mov esi,dword ptr [esp+0x30]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x2B8],0xC
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block313

 Block311:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block313

 Block312:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block313:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,dword ptr [esp+0x38]
	mov edi,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x30],0
	xor ebp,ebp
	jmp Block33

 Block314:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x2B4],0xB
	jne Block317

 Block315:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,ebp
	je Block318

 Block316:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block318

 Block317:
	lea ecx,[esp+0x44]
	push ecx
	call ebx

 Block318:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x2B8],8
	call eax
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [esp+0x2B8],0
	call edx
	lea ecx,[esp+0x94]
	mov dword ptr [esp+0x2B4],0xFFFFFFFF
	call ZRef<CItemInfo::SETITEMINFO>::~ZRef<CItemInfo::SETITEMINFO>
	mov ecx,dword ptr [esp+0x2AC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2A4
	ret
}
}
// CItemInfo::CheckDamageModifiedByEquipUpgrade
_SUB_EXCEPTION_HANDLER(1A44A0)
__SUB(001A44A0, __cdecl, 130770,  int32_t, const CharacterData&, unsigned long, int32_t, long&, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A44A0
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
	xor ebx,ebx
	cmp dword ptr [ebp],ebx
	jle Block32

 Block1:
	mov edi,dword ptr [esp+0x44]
	cmp edi,ebx
	jl Block32

 Block2:
	mov eax,dword ptr [esp+0x38]
	push eax
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetMonsterAffectDamageInfo
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x2C],ebx
	cmp eax,ebx
	je Block30

 Block3:
	cmp byte ptr [eax],bl
	je Block30

 Block4:
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	lea edx,[esp+0x44]
	push edx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CItemInfo::GetItemAffectDamageInfo
	mov esi,dword ptr [esp+0x18]
	cmp esi,ebx
	je Block28

 Block5:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0x38]
	lea edx,[esp+0x44]
	push edx
	add ecx,0x77D
	call ZMap<ZXString<char>, ZPair<long, long>, ZXString<char>>::GetAt
	test eax,eax
	je Block23

 Block6:
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,ebx
	jl Block23

 Block7:
	cmp dword ptr [esp+0x3C],ebx
	je Block17

 Block8:
	mov eax,dword ptr [esi]
	sub eax,1
	jne Block28

 Block9:
	mov eax,dword ptr [esi+8]
	imul eax,ecx
	add eax,dword ptr [esi+4]
	mov ecx,dword ptr [esi+0xC]
	cmp eax,ecx
	jge Block11

 Block10:
	mov eax,ecx
	jmp Block13

 Block11:
	mov esi,dword ptr [esi+0x10]
	cmp eax,esi
	jle Block13

 Block12:
	mov eax,esi

 Block13:
	mov dword ptr [ebp],eax
	mov byte ptr [esp+0x2C],bl
	lea ecx,[esp+0x14]

 Block14:
	call ZRef<DamageModifiedInfo>::~ZRef<DamageModifiedInfo>
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,1
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret

 Block17:
	mov eax,dword ptr [esi+0x14]
	sub eax,1
	jne Block28

 Block18:
	mov eax,dword ptr [esi+0x1C]
	imul eax,ecx
	add eax,dword ptr [esi+0x18]
	mov ecx,dword ptr [esi+0x20]
	cmp eax,ecx
	jle Block20

 Block19:
	mov eax,ecx
	jmp Block22

 Block20:
	mov esi,dword ptr [esi+0x24]
	cmp eax,esi
	jge Block22

 Block21:
	mov eax,esi

 Block22:
	imul edi
	push ebx
	push 0x186A0
	push edx
	push eax
	call __alldiv
	mov dword ptr [esp+0x20],edx
	jmp Block13

 Block23:
	cmp dword ptr [esp+0x3C],ebx
	je Block26

 Block24:
	mov esi,dword ptr [esi]
	sub esi,1
	mov byte ptr [esp+0x2C],bl
	lea ecx,[esp+0x14]
	jne Block29

 Block25:
	mov dword ptr [ebp],ebx
	jmp Block14

 Block26:
	mov eax,dword ptr [esi+0x14]
	sub eax,1
	jne Block28

 Block27:
	mov eax,dword ptr [esi+0x18]
	jmp Block22

 Block28:
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x2C],bl

 Block29:
	call ZRef<DamageModifiedInfo>::~ZRef<DamageModifiedInfo>
	mov eax,dword ptr [esp+0x40]

 Block30:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	xor eax,eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret
}
}
// CItemInfo::LevelInfo::RandomMMP::GetStatType
__SUB_CLASS_THIS0(001915F0, __thiscall, 131202,  CItemInfo::LevelInfo::RandomMMP, long) {
__asm {

 Block0:
	mov eax,1
	ret
}
}
// CItemInfo::RegisterKarmaScissorsItem
_SUB_EXCEPTION_HANDLER(1A1120)
__SUB_CLASS_THIS(001A1120, __thiscall, 130738,  CItemInfo, void, long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A1120
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],ecx
	xor edi,edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x3D5
	push eax
	mov dword ptr [esp+0x5C],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x54],1
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x58],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x50],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x14],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],4
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x1C],edi
	call ZRef<CItemInfo::KARMASCISSORSITEM>::_Alloc
	mov edx,dword ptr [esp+0x50]
	mov esi,dword ptr [esp+0x1C]
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x58],esp
	push 0x15DB
	push eax
	mov byte ptr [esp+0x58],5
	mov dword ptr [esi],edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [esp+0x18]
	mov byte ptr [esp+0x50],6
	cmp ebp,edi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x54],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x50],7
	call get_int32
	add esp,8
	mov dword ptr [esi+4],eax
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x48],5
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,edi
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block15:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	push esi
	add ecx,0x144
	call ZMap<long, ZRef<CItemInfo::KARMASCISSORSITEM>, long>::Insert
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x4C],4
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block18

 Block16:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block18

 Block17:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block18:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0x4C],0
	call edx
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x3C
	ret 8
}
}
// CItemInfo::EQUIPITEM::_ZtlSecureGet_nrLUK
__SUB_CLASS0(001000A0, __fastcall, 85137,  CItemInfo::EQUIPITEM, long) {
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
// CItemInfo::SETEFFECT::~SETEFFECT
_SUB_EXCEPTION_HANDLER(19A1C0)
__SUB_CLASS_THIS0(0019A1C0, __thiscall, 130906,  CItemInfo::SETEFFECT, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_19A1C0
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
	lea ecx,[esi+0x3C]
	mov dword ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],ZMAP_LONG_LONG_VTABLE
	call ZMap<long, long, long>::RemoveAll
	lea ecx,[esi+0x28]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [ecx],offset ZLIST_REF_ITEMSKILL_VTABLE
	call ZList<ZRef<CItemInfo::ItemSkill>>::RemoveAll
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CItemInfo::LevelInfo::RandomDEX::GetStatType
__SUB_CLASS_THIS0(00191610, __thiscall, 131172,  CItemInfo::LevelInfo::RandomDEX, long) {
__asm {

 Block0:
	mov eax,3
	ret
}
}
// CItemInfo::GACHAPONITEMINFO::~GACHAPONITEMINFO
_SUB_EXCEPTION_HANDLER(1A5E10)
__SUB_CLASS_THIS0(001A5E10, __thiscall, 130878,  CItemInfo::GACHAPONITEMINFO, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A5E10
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
	lea ecx,[esi+0x10]
	mov dword ptr [esp+0x14],0
	call ZArray<ZXString<char>>::RemoveAll
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZArray<CItemInfo::GACHAPONAGGSCOPE>::RemoveAll
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// InsertionSort_ZPair_long_long__PairSecondLess_
__SUB(00194490, __cdecl, 141416,  void, ZArray<ZPair<long,long> >&, int32_t, int32_t, none&) {
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
	mov dword ptr [esp+0x10],esi
	mov esi,dword ptr [eax+edx*8+4]
	mov ecx,edx
	jle Block6

 Block3:
	lea ebx,[ebx]

 Block4:
	mov eax,dword ptr [edi]
	cmp esi,dword ptr [eax+ecx*8-4]
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
	mov ebp,dword ptr [esp+0x10]
	inc edx
	cmp edx,dword ptr [esp+0x24]
	mov dword ptr [eax+ecx*8],ebp
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
// get_root
__SUB0(00190C90, __cdecl, 141399,  _x_com_ptr<IWzNameSpace>&) {
__asm {

 Block0:
	mov eax,offset _D_G_ROOT
	ret
}
}
// ZSort_ZPair_long_long__PairSecondLess_
__SUB(0019C5E0, __cdecl, 141456,  void, ZArray<ZPair<long,long> >&, none) {
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
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	xor ecx,ecx
	push ecx
	push eax
	push edx
	call ZSortHelper<ZPair<long, long>, PairSecondLess>::call_0
	add esp,0x10
	pop esi
	ret

 Block3:
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	lea ecx,[eax+ecx*8-8]
	push ecx
	push eax
	push edx
	call ZSortHelper<ZPair<long, long>, PairSecondLess>::call_0
	add esp,0x10
	pop esi
	ret
}
}
// CItemInfo::GetCoupleChairItem
_SUB_EXCEPTION_HANDLER(54AEF0)
__SUB_CLASS_THIS(0054AEF0, __thiscall, 81142,  CItemInfo, const CItemInfo::COUPLECHAIRITEM*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54AEF0
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
	xor ebx,ebx
	xor edi,edi
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x18],edi
	lea eax,[esp+0x14]
	push eax
	lea edx,[esp+0x38]
	push edx
	add ecx,0x1F8
	mov dword ptr [esp+0x34],edi
	call ZMap<long, ZRef<CItemInfo::COUPLECHAIRITEM>, long>::GetAt
	test eax,eax
	je Block2

 Block1:
	mov esi,dword ptr [esp+0x20]
	lea eax,[esp+0x14]
	jmp Block3

 Block2:
	xor esi,esi
	mov dword ptr [esp+0x20],esi
	lea eax,[esp+0x1C]
	mov ebx,1

 Block3:
	mov ebp,dword ptr [eax+4]
	test bl,1
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	je Block8

 Block4:
	cmp esi,edi
	je Block8

 Block5:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block8

 Block6:
	push edi
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
	mov esi,dword ptr [esp+0x18]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test esi,esi
	je Block12

 Block9:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block12

 Block10:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block12

 Block11:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block12:
	mov eax,ebp
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
// CItemInfo::GetItemProp
_SUB_EXCEPTION_HANDLER(1A72A0)
__SUB_CLASS_THIS(001A72A0, __thiscall, 130719,  CItemInfo, _x_com_ptr<IWzProperty>*, _x_com_ptr<IWzProperty>*, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A72A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov ebx,dword ptr [ebp+0xC]
	mov eax,0x431BDE83
	imul ebx
	sar edx,0x12
	mov esi,edx
	shr esi,0x1F
	xor ecx,ecx
	add esi,edx
	mov dword ptr [ebp-0x1C],ecx
	mov dword ptr [ebp-4],ecx
	cmp esi,1
	je Block80

 Block1:
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	cmp edi,3
	jle Block80

 Block2:
	mov dword ptr [ebp-0x18],ecx
	mov dword ptr [ebp-0x14],ecx
	mov byte ptr [ebp-4],2
	cmp esi,5
	jne Block18

 Block3:
	push ebx
	call get_item_slottype_from_id
	add esp,4
	cmp eax,3
	jne Block9

 Block4:
	call StringPool::GetInstance
	push 0x1A49
	lea ecx,[ebp+0xC]
	push ecx
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	push eax
	lea edx,[ebp-0x14]
	push edx
	mov byte ptr [ebp-4],3
	call ZXString16::Format
	mov eax,dword ptr [ebp+0xC]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x50]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x60]
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [ebp-0x14]
	push 0
	push 0
	lea eax,[ebp-0x50]
	push eax
	lea ecx,[ebp-0x60]
	push ecx
	push ecx
	mov dword ptr [ebp+0xC],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],5
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],6
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[ebp-0x40]
	mov byte ptr [ebp-4],5
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	call _x_com_ptr<IWzProperty>::op_assign_unknown
	lea ecx,[ebp-0x40]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x60]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x50]
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block67

 Block9:
	call StringPool::GetInstance
	push 0x958
	lea ecx,[ebp-0x24]
	push ecx
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[ebp-0x14]
	push edx
	mov byte ptr [ebp-4],8
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x24]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x50]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x60]
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [ebp-0x14]
	push 0
	push 0
	lea eax,[ebp-0x50]
	push eax
	lea ecx,[ebp-0x60]
	push ecx
	push ecx
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	mov bl,0xA
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xB
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea eax,[ebp-0x40]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x20]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp-0x40]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x60]
	call Ztl_variant_t::~Ztl_variant_t
	mov bl,0x10
	lea ecx,[ebp-0x50]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	call StringPool::GetInstance
	push 0x6DF
	lea ecx,[ebp-0x24]
	push ecx
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [ebp+0xC]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp-0x14]
	push eax
	mov byte ptr [ebp-4],0x11
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x24]
	add esp,0xC
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block15:
	mov edx,dword ptr [ebp-0x14]
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0xC],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],0x12
	test ecx,ecx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea eax,[ebp-0x30]
	push eax
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0x13
	jmp Block32

 Block18:
	cmp esi,2
	je Block21

 Block19:
	cmp esi,3
	je Block21

 Block20:
	cmp esi,4
	jne Block34

 Block21:
	test byte ptr [_D__S3__10],1
	jne Block23

 Block22:
	or dword ptr [_D__S3__10],1
	mov byte ptr [ebp-4],0x14
	call StringPool::GetInstance
	push 0x953
	push offset _D_S_ASTYPENAME__2
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [ebp-4],0x15
	call StringPool::GetInstance
	push 0x954
	push offset _D_S_ASTYPENAME__2+4
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [ebp-4],0x16
	call StringPool::GetInstance
	push 0x1A38
	push offset _D_S_ASTYPENAME__2+8
	mov ecx,eax
	call StringPool::GetStringW
	//push 0xB12930
	//call _atexit
	//add esp,4
	mov byte ptr [ebp-4],2

 Block23:
	call StringPool::GetInstance
	push 0x957
	lea ecx,[ebp-0x24]
	push ecx
	mov ecx,eax
	call StringPool::GetStringW
	sub esi, 2
	mov edx,dword ptr [esi*4+_D_S_ASTYPENAME__2]
	add esi, 2
	mov eax,dword ptr [eax]
	push edi
	push edx
	push eax
	lea eax,[ebp-0x14]
	push eax
	mov byte ptr [ebp-4],0x17
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x24]
	add esp,0x10
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x50]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x60]
	mov byte ptr [ebp-4],0x18
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [ebp-0x14]
	push 0
	push 0
	lea ecx,[ebp-0x50]
	push ecx
	lea edx,[ebp-0x60]
	push edx
	push ecx
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	mov bl,0x19
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x1A
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea ecx,[ebp-0x40]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x20]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp-0x40]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x60]
	call Ztl_variant_t::~Ztl_variant_t
	mov bl,0x1F
	lea ecx,[ebp-0x50]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	call StringPool::GetInstance
	push 0x6DF
	lea edx,[ebp-0x24]
	push edx
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp+0xC]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp-0x14]
	push edx
	mov byte ptr [ebp-4],0x20
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x24]
	add esp,0xC
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block29:
	mov eax,dword ptr [ebp-0x14]
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0xC],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],0x21
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea edx,[ebp-0x30]
	push edx
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0x22

 Block32:
	mov ecx,eax
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	call _x_com_ptr<IWzProperty>::op_assign_unknown
	lea ecx,[ebp-0x30]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block67

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block67

 Block34:
	mov dword ptr [ebp+0xC],ecx
	mov byte ptr [ebp-4],0x23
	cmp edi,0x38E
	jne Block37

 Block35:
	call StringPool::GetInstance
	push 0xB71
	lea ecx,[ebp-0x24]
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x24
	test eax,eax
	je Block40

 Block36:
	mov eax,dword ptr [eax]
	jmp Block41

 Block37:
	push ebx
	call is_slot_inc_item
	add esp,4
	test eax,eax
	je Block66

 Block38:
	call StringPool::GetInstance
	push 0xB72
	lea ecx,[ebp-0x24]
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x25
	test eax,eax
	je Block40

 Block39:
	mov eax,dword ptr [eax]
	jmp Block41

 Block40:
	xor eax,eax

 Block41:
	push ebx
	push eax
	lea edx,[ebp+0xC]
	push edx
	call ZXString16::Format
	mov ecx,dword ptr [ebp-0x24]
	add esp,0xC
	mov byte ptr [ebp-4],0x23
	test ecx,ecx
	je Block43

 Block42:
	call _xbstr_t::Data_t::Release

 Block43:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x50]
	push eax
	call esi
	lea ecx,[ebp-0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	lea edx,[ebp-0x40]
	push edx
	mov byte ptr [ebp-4],0x26
	call esi
	lea eax,[ebp-0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	mov edi,dword ptr [ebp+0xC]
	push 0
	push 0
	lea ecx,[ebp-0x50]
	push ecx
	lea edx,[ebp-0x40]
	push edx
	push ecx
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	mov bl,0x27
	push edi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x28
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	lea eax,[ebp-0x60]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x29
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block52

 Block50:
	cmp eax,0x80004002
	je Block52

 Block51:
	push eax
	call _com_issue_error

 Block52:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x60],si
	jne Block55

 Block53:
	mov eax,dword ptr [ebp-0x58]
	xor ecx,ecx
	mov word ptr [ebp-0x60],cx
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea edx,[ebp-0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov byte ptr [ebp-4],0x26
	cmp word ptr [ebp-0x40],si
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov byte ptr [ebp-4],0x23
	cmp word ptr [ebp-0x50],si
	jne Block63

 Block61:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov byte ptr [ebp-4],2
	test edi,edi
	je Block67

 Block65:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4
	jmp Block67

 Block66:
	mov byte ptr [ebp-4],2

 Block67:
	mov ebx,dword ptr [ebp-0x18]
	test ebx,ebx
	sete al
	test al,al
	sete al
	test al,al
	je Block69

 Block68:
	mov esi,dword ptr [ebp+0xC]
	lea eax,[ebp-0x18]
	jmp Block70

 Block69:
	xor esi,esi
	mov dword ptr [ebp+0xC],esi
	lea eax,[ebp+0xC]
	mov dword ptr [ebp-0x1C],4

 Block70:
	mov eax,dword ptr [eax]
	mov edi,dword ptr [ebp+8]
	mov dword ptr [edi],eax
	test eax,eax
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block72:
	mov eax,dword ptr [ebp-0x1C]
	or eax,2
	test al,4
	je Block75

 Block73:
	test esi,esi
	je Block75

 Block74:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block75:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block77

 Block76:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block77:
	mov byte ptr [ebp-4],0
	test ebx,ebx
	je Block79

 Block78:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block79:
	mov eax,edi
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 8

 Block80:
	push ebx
	lea ecx,[ebp-0x28]
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	call CActionMan::GetCharacterImgEntry
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block85

 Block81:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block84

 Block82:
	mov edx,dword ptr [ebp-0x24]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp-0x24]
	test ecx,ecx
	je Block84

 Block83:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block84:
	mov dword ptr [ebp-0x24],0

 Block85:
	test esi,esi
	je Block87

 Block86:
	lea eax,[esi+0xC]
	mov esi,dword ptr [ebp+0xC]
	jmp Block88

 Block87:
	xor esi,esi
	mov dword ptr [ebp+0xC],esi
	lea eax,[ebp+0xC]
	mov dword ptr [ebp-0x1C],1

 Block88:
	mov eax,dword ptr [eax]
	mov edi,dword ptr [ebp+8]
	mov dword ptr [edi],eax
	test eax,eax
	je Block90

 Block89:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block90:
	test byte ptr [ebp-0x1C],1
	je Block93

 Block91:
	test esi,esi
	je Block93

 Block92:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block93:
	mov eax,edi
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 8
}
}
// CItemInfo::EQUIPITEM::IsBonusExpItem
__SUB_CLASS_THIS0(005CF920, __thiscall, 76493,  CItemInfo::EQUIPITEM, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x24C]
	test eax,eax
	jne Block2

 Block1:
	xor ecx,ecx
	test eax,eax
	setne cl
	mov eax,ecx
	ret

 Block2:
	mov eax,dword ptr [eax-4]
	xor ecx,ecx
	test eax,eax
	setne cl
	mov eax,ecx
	ret
}
}
// CItemInfo::LoadRecovery
_SUB_EXCEPTION_HANDLER(1A1880)
__SUB_CLASS_THIS(001A1880, __thiscall, 130694,  CItemInfo, ZRef<CItemInfo::Recovery>*, ZRef<CItemInfo::Recovery>*, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A1880
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
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [esp+0x4C]
	cmp eax,edi
	sete cl
	mov edx,1
	mov dword ptr [esp+0x40],edx
	test cl,cl
	je Block4

 Block1:
	mov esi,dword ptr [esp+0x48]
	mov dword ptr [esi+4],edi
	mov dword ptr [esp+0x14],edx
	mov byte ptr [esp+0x40],0
	cmp eax,edi
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	mov eax,esi
	jmp Block36

 Block4:
	mov dword ptr [esp+0x24],edi
	push edi
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	mov bl,2
	push offset _S_HPRECOVERY
	mov byte ptr [esp+0x4C],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0x48],3
	cmp ecx,edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0x4C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x48],4
	call get_int32
	mov esi,8
	add esp,8
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x40],bl
	cmp word ptr [esp+0x28],si
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,edi
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	push edi
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_MPRECOVERY
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0x48],5
	cmp ecx,edi
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0x4C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x48],6
	call get_int32
	add esp,8
	mov ebp,eax
	mov byte ptr [esp+0x40],bl
	cmp word ptr [esp+0x28],si
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	push 0x2710
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_RECOVERYINTERVAL
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0x48],7
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0x4C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x48],8
	call get_int32
	add esp,8
	cmp word ptr [esp+0x28],8
	mov esi,eax
	mov byte ptr [esp+0x40],bl
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov ebx,dword ptr [esp+0x18]
	test ebx,ebx
	jne Block24

 Block23:
	test ebp,ebp
	je Block28

 Block24:
	push 0x18
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	test eax,eax
	je Block26

 Block25:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CItemInfo::Recovery::`vftable'
	mov dword ptr [eax+0xC],ebx
	mov dword ptr [eax+0x10],ebp
	mov dword ptr [eax+0x14],esi
	jmp Block27

 Block26:
	xor eax,eax

 Block27:
	push eax
	lea ecx,[esp+0x24]
	call ZRef<CItemInfo::Recovery>::op_assign_ptr
	mov edi,dword ptr [esp+0x24]

 Block28:
	mov ebp,dword ptr [esp+0x48]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [ebp+4],edi
	test edi,edi
	je Block30

 Block29:
	lea eax,[edi+4]
	push eax
	call ebx

 Block30:
	mov dword ptr [esp+0x14],1
	mov byte ptr [esp+0x40],1
	test edi,edi
	je Block33

 Block31:
	lea esi,[edi+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block33

 Block32:
	push esi
	call ebx
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block33:
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	mov eax,ebp

 Block36:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 8
}
}
// CItemOptionInfo::IterateItemOptionInfo
_SUB_EXCEPTION_HANDLER(1B6D40)
__SUB_CLASS_THIS0(001B6D40, __thiscall, 107948,  CItemOptionInfo, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B6D40
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov dword ptr [ebp-4],0
	call CItemOptionInfo::IterateItemOption
	mov eax,1
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CItemInfo::FindMapByName
typedef ZList<ZPair<unsigned long, ZXString<char>>> name_pair_t;
_SUB_EXCEPTION_HANDLER(1B6EB0)
__SUB_CLASS_THIS(001B6EB0, __thiscall, 130726, CItemInfo, name_pair_t, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B6EB0
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
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x68],1
	int 3// TODO: 	mov dword ptr [esp+0x38],offset ZList<ZPair<unsigned long, ZXString<char>>>::`vftable'
	mov dword ptr [esp+0x40],ebx
	mov dword ptr [esp+0x44],ebx
	mov dword ptr [esp+0x48],ebx
	push ebx
	push ebx
	lea ecx,[esp+0x7C]
	mov byte ptr [esp+0x70],2
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push eax
	lea ecx,[esp+0x78]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x74]
	cmp eax,ebx
	je Block6

 Block1:
	cmp byte ptr [eax],bl
	je Block6

 Block2:
	push 1
	push ebx
	lea ecx,[esp+0x7C]
	call ZXString<char>::GetBuffer
	push eax
	call __strupr
	mov eax,dword ptr [esp+0x78]
	add esp,4
	cmp eax,ebx
	je Block4

 Block3:
	mov eax,dword ptr [eax-4]
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	push eax
	lea ecx,[esp+0x78]
	call ZXString<char>::ReleaseBuffer

 Block6:
	push ebx
	push ebx
	push offset _S___2
	lea ecx,[esp+0x80]
	call ZXString<char>::Find__0
	cmp eax,0xFFFFFFFF
	je Block11

 Block7:
	mov edi,edi

 Block8:
	push offset _S_
	push offset _S___2
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x80]
	call ZXString<char>::Replace
	push eax
	lea ecx,[esp+0x78]
	mov byte ptr [esp+0x6C],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x68],2
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	push ebx
	push ebx
	push offset _S___2
	lea ecx,[esp+0x80]
	call ZXString<char>::Find__0
	cmp eax,0xFFFFFFFF
	jne Block8

 Block11:
	mov dword ptr [esp+0x14],ebx
	xor edi,edi
	mov dword ptr [esp+0x18],edi
	lea ebp,[esi+0x84]
	mov ecx,ebp
	mov byte ptr [esp+0x68],5
	call ZMap<unsigned long, ZMap<char const *, ZXString<char>, ZXString<char>>, unsigned long>::GetHeadPosition
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block32

 Block12:
	push ebx
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,ebp
	call ZMap<unsigned long, ZMap<char const *, ZXString<char>, ZXString<char>>, unsigned long>::GetNext
	mov edi,dword ptr [eax]
	push ebx
	lea edx,[esp+0x28]
	push edx
	mov ecx,ebp
	mov dword ptr [esp+0x2C],edi
	call ZMap<unsigned long, ZMap<char const *, ZXString<char>, ZXString<char>>, unsigned long>::GetAt
	mov esi,eax
	lea eax,[esp+0x28]
	push 0x6EC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x28]
	mov dword ptr [esp+0x28],ecx
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x70],6
	call ZMap<char const *, ZXString<char>, ZXString<char>>::GetAt
	mov esi,eax
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x68],5
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	cmp esi,ebx
	je Block30

 Block15:
	push ebx
	push ebx
	lea ecx,[esp+0x1C]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block21

 Block16:
	cmp byte ptr [eax],bl
	je Block21

 Block17:
	push 1
	push ebx
	lea ecx,[esp+0x1C]
	call ZXString<char>::GetBuffer
	push eax
	call __strupr
	mov eax,dword ptr [esp+0x18]
	add esp,4
	cmp eax,ebx
	je Block19

 Block18:
	mov eax,dword ptr [eax-4]
	jmp Block20

 Block19:
	xor eax,eax

 Block20:
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer

 Block21:
	push ebx
	push ebx
	push offset _S___2
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	cmp eax,0xFFFFFFFF
	je Block26

 Block22:
	nop

 Block23:
	push offset _S_
	push offset _S___2
	lea ecx,[esp+0x34]
	push ecx
	lea ecx,[esp+0x20]
	call ZXString<char>::Replace
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x6C],7
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x68],5
	cmp eax,ebx
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	push ebx
	push ebx
	push offset _S___2
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	cmp eax,0xFFFFFFFF
	jne Block23

 Block26:
	mov esi,dword ptr [esp+0x74]
	push esi
	lea ecx,[esp+0x18]
	call ZXString<char>::Compare
	test eax,eax
	je Block40

 Block27:
	push ebx
	push ebx
	push esi
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	cmp eax,0xFFFFFFFF
	je Block30

 Block28:
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x34],edi
	mov dword ptr [esp+0x38],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x68],0xA
	call ZList<ZPair<unsigned long, ZXString<char>>>::AddTail_
	mov ecx,dword ptr [esp+0x30]
	lea edx,[esp+0x34]
	mov dword ptr [eax],ecx
	push edx
	lea ecx,[eax+4]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x68],5
	cmp eax,ebx
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	cmp dword ptr [esp+0x1C],ebx
	jne Block12

 Block31:
	mov edi,dword ptr [esp+0x18]

 Block32:
	mov esi,dword ptr [esp+0x70]
	mov ecx,esi
	int 3// TODO: 	mov dword ptr [esi],offset ZList<ZPair<unsigned long, ZXString<char>>>::`vftable'
	mov dword ptr [esi+8],ebx
	mov dword ptr [esi+0xC],ebx
	mov dword ptr [esi+0x10],ebx
	call ZList<ZPair<unsigned long, ZXString<char>>>::RemoveAll
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,esi
	call ZList<ZPair<unsigned long, ZXString<char>>>::AddTail_List
	mov dword ptr [esp+0x20],1
	mov byte ptr [esp+0x68],4
	cmp edi,ebx
	je Block34

 Block33:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x68],2
	cmp eax,ebx
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	int 3// TODO: 	mov dword ptr [esp+0x38],offset ZList<ZPair<unsigned long, ZXString<char>>>::`vftable'

 Block37:
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x68],1
	call ZList<ZPair<unsigned long, ZXString<char>>>::RemoveAll
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x68],bl
	cmp eax,ebx
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	mov eax,esi
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 8

 Block40:
	int 3// TODO: 	mov ebp,offset ZList<ZPair<unsigned long, ZXString<char>>>::`vftable'
	mov dword ptr [esp+0x4C],ebp
	mov dword ptr [esp+0x54],ebx
	mov dword ptr [esp+0x58],ebx
	mov dword ptr [esp+0x5C],ebx
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x6C],8
	mov dword ptr [esp+0x34],edi
	mov dword ptr [esp+0x38],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x68],9
	call ZList<ZPair<unsigned long, ZXString<char>>>::AddTail_
	mov ecx,dword ptr [esp+0x30]
	lea edx,[esp+0x34]
	mov dword ptr [eax],ecx
	push edx
	lea ecx,[eax+4]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x68],8
	cmp eax,ebx
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	mov esi,dword ptr [esp+0x70]
	mov ecx,esi
	mov dword ptr [esi],ebp
	mov dword ptr [esi+8],ebx
	mov dword ptr [esi+0xC],ebx
	mov dword ptr [esi+0x10],ebx
	call ZList<ZPair<unsigned long, ZXString<char>>>::RemoveAll
	lea eax,[esp+0x4C]
	push eax
	mov ecx,esi
	call ZList<ZPair<unsigned long, ZXString<char>>>::AddTail_List
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x20],1
	mov byte ptr [esp+0x68],5
	mov dword ptr [esp+0x4C],ebp
	call ZList<ZPair<unsigned long, ZXString<char>>>::RemoveAll
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x68],4
	cmp eax,ebx
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x68],2
	cmp eax,ebx
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	mov dword ptr [esp+0x38],ebp
	jmp Block37
}
}
// CItemInfo::RegisterAreaBuffItem
_SUB_EXCEPTION_HANDLER(1A0910)
__SUB_CLASS_THIS(001A0910, __thiscall, 130738, CItemInfo, void, long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A0910
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
	mov dword ptr [esp+0x30],ecx
	xor ebx,ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x3D5
	push eax
	mov dword ptr [esp+0xA8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xAC]
	mov byte ptr [esp+0xA0],1
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0xA4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x9C],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebx
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
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x94],4
	jne Block11

 Block6:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block8:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block9:
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x38],ebx
	call ZRef<CItemInfo::AREABUFFITEM>::_Alloc
	mov edx,dword ptr [esp+0x9C]
	mov ebp,dword ptr [esp+0x38]
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0x963
	push eax
	mov byte ptr [esp+0xA4],5
	mov dword ptr [ebp],edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [esp+0x24]
	mov byte ptr [esp+0x9C],6
	cmp esi,ebx
	jne Block12

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x3C]
	push ecx
	call edi
	jmp Block9

 Block12:
	lea ecx,[esp+0x54]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0xA0],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x9C],7
	call get_int32
	add esp,8
	mov dword ptr [ebp+8],eax
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x94],5
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,ebx
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea eax,[esp+0x4C]
	push eax
	call edi

 Block16:
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x1ABE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x58]
	mov byte ptr [esp+0xA0],8
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA4],5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x9C],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,ebx
	jge Block19

 Block17:
	cmp eax,0x80004002
	je Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x94],0xB
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebx
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x4C]
	push ecx
	call edi

 Block23:
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 0x1ACB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x68]
	mov byte ptr [esp+0xA0],0xC
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xA4],0xB
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x9C],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebx
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,ebx
	jge Block26

 Block24:
	cmp eax,0x80004002
	je Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0x94],0xF
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	cmp eax,ebx
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x5C]
	push edx
	call edi

 Block30:
	mov edi,dword ptr [esp+0x18]
	mov esi,dword ptr [esp+0x14]
	cmp edi,ebx
	sete al
	test al,al
	je Block33

 Block31:
	cmp esi,ebx
	sete al
	test al,al
	je Block33

 Block32:
	add ebp,0xC
	push ebp
	call dword ptr [ZImports::_SetRectEmpty]
	jmp Block46

 Block33:
	cmp esi,ebx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[esp+0x20]
	push ecx
	push esi
	mov dword ptr [esp+0x28],ebx
	call edx
	cmp eax,ebx
	jge Block37

 Block36:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block37:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	mov ebp,dword ptr [esp+0x20]
	lea ecx,[esp+0x24]
	push ecx
	push esi
	mov dword ptr [esp+0x2C],ebx
	call edx
	cmp eax,ebx
	jge Block39

 Block38:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block39:
	mov ebx,dword ptr [esp+0x24]
	test edi,edi
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[esp+0x28]
	push ecx
	push edi
	mov dword ptr [esp+0x30],0
	call edx
	test eax,eax
	jge Block43

 Block42:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block43:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	mov esi,dword ptr [esp+0x28]
	lea ecx,[esp+0x2C]
	push ecx
	push edi
	mov dword ptr [esp+0x34],0
	call edx
	test eax,eax
	jge Block45

 Block44:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block45:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x38]
	push ebp
	push ebx
	push esi
	push eax
	add ecx,0xC
	push ecx
	call dword ptr [ZImports::_SetRect]
	xor ebx,ebx

 Block46:
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push offset _S_EMOTION
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0xAC]
	mov byte ptr [esp+0xA0],0x10
	cmp ecx,ebx
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea edx,[esp+0x78]
	push edx
	mov byte ptr [esp+0xA4],0xF
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x9C],0x11
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x30],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block51

 Block49:
	cmp eax,0x80004002
	je Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	cmp word ptr [esp+0x6C],8
	mov byte ptr [esp+0x94],0x13
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	cmp eax,ebx
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov edx,dword ptr [esp+0x38]
	mov ebp,dword ptr [esp+0x2C]
	add edx,0x20
	mov edi,offset ActionData::m_saEmotionName
	mov dword ptr [esp+0x28],edx
	jmp Block57

 Block57:
	mov eax,dword ptr [edi]
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block59

 Block58:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block59:
	mov byte ptr [esp+0x9C],0x14
	test ebp,ebp
	je Block1

 Block60:
	lea eax,[esp+0x84]
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0xA0],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x9C],0x15
	call get_int32
	add esp,8
	cmp word ptr [esp+0x7C],8
	mov esi,eax
	mov byte ptr [esp+0x94],0x13
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x84]
	xor ecx,ecx
	mov word ptr [esp+0x7C],cx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea edx,[esp+0x7C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	test esi,esi
	jle Block78

 Block65:
	cmp esi,0x64
	mov eax,esi
	jl Block67

 Block66:
	mov eax,0x64

 Block67:
	add ebx,eax
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [eax],ebx
	add edi,4
	add eax,4
	cmp edi,offset ActionData::m_sNpcAction
	mov dword ptr [esp+0x28],eax
	jl Block57

 Block68:
	mov esi,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x30]
	lea eax,[esp+0x34]
	push eax
	push esi
	add ecx,0x170
	mov dword ptr [esi+0x1C],ebx
	call ZMap<long, ZRef<CItemInfo::AREABUFFITEM>, long>::Insert
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0x98],0xF
	call edx
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x94],0xB
	test eax,eax
	je Block70

 Block69:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block70:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x94],5
	test eax,eax
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block72:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x98],4
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block75

 Block73:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block75

 Block74:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block75:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x98],0
	call edx
	mov eax,dword ptr [esp+0xA0]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	test eax,eax
	je Block77

 Block76:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block77:
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret 8

 Block78:
	xor eax,eax
	jmp Block67
}
}
// CItemInfo::LevelInfo::RandomLUK::GetStatType
__SUB_CLASS_THIS0(00191630, __thiscall, 131142, CItemInfo::LevelInfo::RandomLUK, long) {
__asm {

 Block0:
	mov eax,5
	ret
}
}
// CItemInfo::LevelInfo::RandomPAD::GetStatType
__SUB_CLASS_THIS0(00191640, __thiscall, 131127, CItemInfo::LevelInfo::RandomPAD, long) {
__asm {

 Block0:
	mov eax,6
	ret
}
}
// get_weapon_category_name
__SUB(0019ED10, __cdecl, 80891, ZXString<char>, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0xC]
	push esi
	push eax
	mov dword ptr [esp+8],0
	call get_weapon_type
	add eax,0xFFFFFFE2
	add esp,4
	cmp eax,0x13
	ja Block19

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block4
cmp EAX, 2
je Block5
cmp EAX, 3
je Block6
cmp EAX, 4
je Block19
cmp EAX, 5
je Block19
cmp EAX, 6
je Block19
cmp EAX, 7
je Block7
cmp EAX, 8
je Block8
cmp EAX, 9
je Block19
cmp EAX, 10
je Block9
cmp EAX, 11
je Block10
cmp EAX, 12
je Block11
cmp EAX, 13
je Block12
cmp EAX, 14
je Block13
cmp EAX, 15
je Block14
cmp EAX, 16
je Block15
cmp EAX, 17
je Block16
cmp EAX, 18
je Block17
cmp EAX, 19
je Block18


 Block2:
	push 0x26A

 Block3:
	mov esi,dword ptr [esp+0x10]
	push esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,esi
	pop esi
	pop ecx
	ret

 Block4:
	push 0x26B
	jmp Block3

 Block5:
	push 0x26C
	jmp Block3

 Block6:
	push 0x26D
	jmp Block3

 Block7:
	push 0x26E
	jmp Block3

 Block8:
	push 0x26F
	jmp Block3

 Block9:
	push 0x270
	jmp Block3

 Block10:
	push 0x271
	jmp Block3

 Block11:
	push 0x272
	jmp Block3

 Block12:
	push 0x273
	jmp Block3

 Block13:
	push 0x274
	jmp Block3

 Block14:
	push 0x275
	jmp Block3

 Block15:
	push 0x276
	jmp Block3

 Block16:
	push 0x277
	jmp Block3

 Block17:
	push 0x278
	jmp Block3

 Block18:
	push 0x279
	jmp Block3

 Block19:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [eax],0
	pop esi
	pop ecx
	ret
}
}
// CItemInfo::GetSetItemInfo
typedef ZMap<long, ZRef<CItemInfo::SETITEMINFO>, long> map_set_item_t;
__SUB_CLASS_THIS0(00321590, __thiscall, 130739, CItemInfo, map_set_item_t &) {
__asm {

 Block0:
	lea eax,[ecx+0x9C]
	ret
}
}
// CItemInfo::GetItemPrice
_SUB_EXCEPTION_HANDLER(1AAC90)
__SUB_CLASS_THIS(001AAC90, __thiscall, 130750, CItemInfo, int32_t, long, long &, double &) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1AAC90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push ebp
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x34]
	push eax
	lea edx,[esp+0x38]
	push edx
	call CItemInfo::GetItemInfo
	mov esi,dword ptr [esp+0x34]
	xor ebx,ebx
	cmp esi,ebx
	sete al
	mov dword ptr [esp+0x2C],ebx
	cmp al,bl
	je Block4

 Block1:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp esi,ebx
	je Block3

 Block2:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block3:
	xor eax,eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 0xC

 Block4:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x1AC9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x34],1
	cmp esi,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x38],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x34],2
	call get_int32
	mov ecx,dword ptr [esp+0x40]
	mov ebp,dword ptr [ZImports::_VariantClear]
	add esp,8
	cmp word ptr [esp+0x14],8
	mov dword ptr [ecx],eax
	mov byte ptr [esp+0x2C],bl
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	cmp eax,ebx
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea eax,[esp+0x14]
	push eax
	call ebp

 Block10:
	fldz
	sub esp,0xC
	mov ecx,esp
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x44],esp
	push 0x95E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x20]
	mov byte ptr [esp+0x38],3
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x3C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x38],4
	call get_double
	mov eax,dword ptr [esp+0x48]
	add esp,0xC
	fstp qword ptr [eax]
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x2C],bl
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea edx,[esp+0x14]
	push edx
	call ebp

 Block14:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ecx
	mov eax,1
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 0xC
}
}
// CItemInfo::IterateDamageByEquipUpgrade
_SUB_EXCEPTION_HANDLER(1B7F30)
__SUB_CLASS_THIS0(001B7F30, __thiscall, 78614, CItemInfo, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x78]
	sub esp,0x78
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B7F30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x140
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
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x2C]
	push eax
	call edi
	lea ecx,[ebp-0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor esi,esi
	add esp,8
	cmp eax,esi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x1C]
	push edx
	mov dword ptr [ebp-4],esi
	call edi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push esi
	push esi
	lea ecx,[ebp-0x2C]
	push ecx
	lea edx,[ebp-0x1C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x6C],esp
	push 0x17D2
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x11C]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	mov dword ptr [ebp+0x58],esi
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
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x11C],bx
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x114]
	xor edx,edx
	mov word ptr [ebp-0x11C],dx
	cmp eax,esi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x11C]
	push eax
	call edi

 Block13:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x1C],bx
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,esi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x1C]
	push edx
	call edi

 Block17:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x2C],bx
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	cmp eax,esi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp-0x2C]
	push ecx
	call edi

 Block21:
	mov ecx,dword ptr [ebp+0x58]
	cmp ecx,esi
	sete al
	test al,al
	je Block24

 Block22:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp ecx,esi
	je Block202

 Block23:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax
	jmp Block202

 Block24:
	cmp ecx,esi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[ebp+4]
	push edx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],8
	mov dword ptr [ebp+0x48],esi
	mov dword ptr [ebp+0x6C],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block28:
	lea ecx,[ebp+0x48]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block31

 Block29:
	cmp eax,0x80004002
	je Block31

 Block30:
	push eax
	call _com_issue_error

 Block31:
	mov eax,dword ptr [ebp+4]
	mov byte ptr [ebp-4],0xA
	cmp eax,esi
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0xB
	mov dword ptr [ebp+0xC],esi
	jmp Block35

 Block35:
	mov esi,dword ptr [ebp+0x48]
	test esi,esi
	je Block5

 Block36:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp+0xC]
	push edx
	lea eax,[ebp+0x30]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block193

 Block37:
	lea edx,[ebp+0x30]
	push edx
	lea eax,[ebp+0x68]
	push eax
	call DetachBSTR
	add esp,8
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [ebp+0x68]
	mov eax,esp
	mov dword ptr [ebp+0x6C],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block39

 Block38:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block39:
	lea ecx,[ebp-0x5C]
	push ecx
	mov ecx,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xD
	mov byte ptr [ebp-4],0xC
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xE
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x60],edi
	test eax,eax
	je Block42

 Block40:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp]
	mov edi,ecx
	mov dword ptr [ebp+0x60],edi
	test eax,eax
	jge Block42

 Block41:
	cmp eax,0x80004002
	jne Block1

 Block42:
	mov ebx,8
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x5C],bx
	jne Block45

 Block43:
	mov eax,dword ptr [ebp-0x54]
	xor edx,edx
	mov word ptr [ebp-0x5C],dx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[ebp-0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	push 0
	call ZRefCounted_AllocHelper<ZRefCountedDummy<DamageModifiedInfo>>::call
	lea esi,[eax+0x10]
	add esp,4
	mov dword ptr [eax+4],1
	mov dword ptr [ebp+0x24],esi
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x6C],esp
	push 0x1A9E
	push ecx
	mov byte ptr [ebp-4],0x11
	mov dword ptr [esi],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x12
	test edi,edi
	je Block5

 Block47:
	mov ecx,dword ptr [ebp+0x60]
	lea edx,[ebp-0xDC]
	push edx
	mov byte ptr [ebp-4],0x11
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x13
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x44],edi
	test eax,eax
	je Block50

 Block48:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x10]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x10]
	mov edi,ecx
	mov dword ptr [ebp+0x44],edi
	test eax,eax
	jge Block50

 Block49:
	cmp eax,0x80004002
	jne Block1

 Block50:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp-0xDC],bx
	jne Block53

 Block51:
	mov eax,dword ptr [ebp-0xD4]
	xor edx,edx
	mov word ptr [ebp-0xDC],dx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[ebp-0xDC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	test edi,edi
	je Block75

 Block55:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x6C],esp
	push 0x618
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x7C]
	mov byte ptr [ebp-4],0x16
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x17
	call get_int32
	add esp,8
	mov dword ptr [esi],eax
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp-0x7C],bx
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [ebp-0x7C],ax
	mov eax,dword ptr [ebp-0x74]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[ebp-0x7C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	push 0
	push ecx
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push offset _S_ARG1
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x3C]
	mov byte ptr [ebp-4],0x18
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x19
	call get_int32
	add esp,8
	mov dword ptr [esi+4],eax
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp-0x3C],bx
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	push 0
	push ecx
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push offset _S_ARG2
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x9C]
	mov byte ptr [ebp-4],0x1A
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1B
	call get_int32
	add esp,8
	mov dword ptr [esi+8],eax
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp-0x9C],bx
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [ebp-0x9C],ax
	mov eax,dword ptr [ebp-0x94]
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[ebp-0x9C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	push 0
	push ecx
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push offset _S_ARG3
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0xFC]
	mov byte ptr [ebp-4],0x1C
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1D
	call get_int32
	add esp,8
	mov dword ptr [esi+0xC],eax
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp-0xFC],bx
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [ebp-0xFC],ax
	mov eax,dword ptr [ebp-0xF4]
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea ecx,[ebp-0xFC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	push 0
	push ecx
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push offset _S_ARG4
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0xBC]
	mov byte ptr [ebp-4],0x1E
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1F
	call get_int32
	add esp,8
	mov dword ptr [esi+0x10],eax
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp-0xBC],bx
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [ebp-0xBC],ax
	mov eax,dword ptr [ebp-0xB4]
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea ecx,[ebp-0xBC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	xor edi,edi
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x6C],esp
	push 0x17D3
	push edx
	mov dword ptr [esi+0x14],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x60]
	lea eax,[ebp-0x13C]
	mov byte ptr [ebp-4],0x20
	push eax
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x21
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp+0x40],edi
	test eax,eax
	je Block78

 Block76:
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
	mov edi,ecx
	mov dword ptr [ebp+0x40],edi
	test eax,eax
	jge Block78

 Block77:
	cmp eax,0x80004002
	jne Block1

 Block78:
	mov byte ptr [ebp-4],0x23
	cmp word ptr [ebp-0x13C],bx
	jne Block81

 Block79:
	mov eax,dword ptr [ebp-0x134]
	xor edx,edx
	mov word ptr [ebp-0x13C],dx
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea eax,[ebp-0x13C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block82:
	test edi,edi
	je Block103

 Block83:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x6C],esp
	push 0x618
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x4C]
	mov byte ptr [ebp-4],0x24
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x23
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x25
	call get_int32
	add esp,8
	mov dword ptr [esi+0x14],eax
	mov byte ptr [ebp-4],0x23
	cmp word ptr [ebp-0x4C],bx
	jne Block86

 Block84:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea ecx,[ebp-0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block87:
	push 0
	push ecx
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push offset _S_ARG1
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x6C]
	mov byte ptr [ebp-4],0x26
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x23
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x27
	call get_int32
	add esp,8
	mov dword ptr [esi+0x18],eax
	mov byte ptr [ebp-4],0x23
	cmp word ptr [ebp-0x6C],bx
	jne Block90

 Block88:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	push 0
	push ecx
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push offset _S_ARG2
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x8C]
	mov byte ptr [ebp-4],0x28
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x23
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x29
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1C],eax
	mov byte ptr [ebp-4],0x23
	cmp word ptr [ebp-0x8C],bx
	jne Block94

 Block92:
	xor eax,eax
	mov word ptr [ebp-0x8C],ax
	mov eax,dword ptr [ebp-0x84]
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea ecx,[ebp-0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block95:
	push 0
	push ecx
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push offset _S_ARG3
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0xAC]
	mov byte ptr [ebp-4],0x2A
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x23
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2B
	call get_int32
	add esp,8
	mov dword ptr [esi+0x20],eax
	mov byte ptr [ebp-4],0x23
	cmp word ptr [ebp-0xAC],bx
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [ebp-0xAC],ax
	mov eax,dword ptr [ebp-0xA4]
	test eax,eax
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea ecx,[ebp-0xAC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block99:
	push 0
	push ecx
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push offset _S_ARG4
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0xCC]
	mov byte ptr [ebp-4],0x2C
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x23
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2D
	call get_int32
	add esp,8
	mov dword ptr [esi+0x24],eax
	mov byte ptr [ebp-4],0x23
	cmp word ptr [ebp-0xCC],bx
	jne Block102

 Block100:
	xor eax,eax
	mov word ptr [ebp-0xCC],ax
	mov eax,dword ptr [ebp-0xC4]
	test eax,eax
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea ecx,[ebp-0xCC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block103:
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block105

 Block104:
	mov eax,dword ptr [eax]
	jmp Block106

 Block105:
	xor eax,eax

 Block106:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x70]
	mov dword ptr [ebp+0x70],0
	call ZXString<char>::AssignWideStr
	mov ecx,dword ptr [ebp+0x5C]
	lea edx,[ebp+0x20]
	push edx
	lea eax,[ebp+0x70]
	push eax
	add ecx,0x250
	mov byte ptr [ebp-4],0x2E
	call ZMap<ZXString<char>, ZRef<DamageModifiedInfo>, ZXString<char>>::Insert
	mov eax,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0x23
	test eax,eax
	je Block108

 Block107:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block108:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x6C],esp
	push 0x17D4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x60]
	lea edx,[ebp-0xEC]
	mov byte ptr [ebp-4],0x2F
	push edx
	mov byte ptr [ebp-4],0x23
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x30
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x4C],ebx
	test eax,eax
	je Block111

 Block109:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x14]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x14]
	mov dword ptr [ebp+0x4C],ebx
	test eax,eax
	jge Block111

 Block110:
	cmp eax,0x80004002
	jne Block1

 Block111:
	cmp word ptr [ebp-0xEC],8
	mov byte ptr [ebp-4],0x32
	jne Block114

 Block112:
	mov eax,dword ptr [ebp-0xE4]
	xor ecx,ecx
	mov word ptr [ebp-0xEC],cx
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea edx,[ebp-0xEC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block115:
	test ebx,ebx
	je Block142

 Block116:
	xor esi,esi
	mov dword ptr [ebp+0x64],esi
	lea esp,[esp]

 Block117:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x70]
	push ecx
	push ebx
	mov dword ptr [ebp+0x70],0
	call edx
	test eax,eax
	jge Block119

 Block118:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block119:
	cmp esi,dword ptr [ebp+0x70]
	jae Block142

 Block120:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x10C]
	mov byte ptr [ebp-4],0x33
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x32
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x34
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x10C],8
	mov esi,eax
	mov dword ptr [ebp+0x70],esi
	mov byte ptr [ebp-4],0x32
	jne Block123

 Block121:
	mov eax,dword ptr [ebp-0x104]
	xor ecx,ecx
	mov word ptr [ebp-0x10C],cx
	test eax,eax
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea edx,[ebp-0x10C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block124:
	test esi,esi
	je Block141

 Block125:
	mov dword ptr [ebp+0x2C],0
	mov edi,dword ptr [ebp+0x5C]
	lea eax,[ebp+0x28]
	push eax
	lea ecx,[ebp+0x70]
	add edi,0x268
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x35
	call ZMap<long, ZRef<ZArray<ZXString<char>>>, long>::GetAt
	test eax,eax
	jne Block131

 Block126:
	push eax
	call ZRefCounted_AllocHelper<ZRefCountedDummy<ZArray<ZXString<char>>>>::call
	lea esi,[eax+0x10]
	add esp,4
	mov dword ptr [eax+4],1
	mov dword ptr [ebp+0x1C],esi
	lea edx,[ebp+0x18]
	push edx
	lea eax,[ebp+0x70]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x36
	call ZMap<long, ZRef<ZArray<ZXString<char>>>, long>::Insert
	lea ecx,[ebp+0x18]
	push ecx
	lea ecx,[ebp+0x28]
	call ZRef<ZArray<ZXString<char>>>::op_assign_copy
	mov byte ptr [ebp-4],0x35
	test esi,esi
	je Block131

 Block127:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block130

 Block128:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block130

 Block129:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block130:
	mov dword ptr [ebp+0x1C],0

 Block131:
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block133

 Block132:
	mov eax,dword ptr [eax]
	jmp Block134

 Block133:
	xor eax,eax

 Block134:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x70]
	mov dword ptr [ebp+0x70],0
	call ZXString<char>::AssignWideStr
	mov esi,dword ptr [ebp+0x2C]
	lea ecx,[ebp+0x70]
	push ecx
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [ebp-4],0x37
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0x35
	test eax,eax
	je Block136

 Block135:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block136:
	mov byte ptr [ebp-4],0x32
	test esi,esi
	je Block141

 Block137:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block140

 Block138:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block140

 Block139:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block140:
	mov dword ptr [ebp+0x2C],0

 Block141:
	inc dword ptr [ebp+0x64]
	mov esi,dword ptr [ebp+0x64]
	jmp Block117

 Block142:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x6C],esp
	push 0x17D5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x60]
	lea edx,[ebp-0x12C]
	mov byte ptr [ebp-4],0x38
	push edx
	mov byte ptr [ebp-4],0x32
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x39
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x6C],ebx
	test eax,eax
	je Block145

 Block143:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x50]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x50]
	mov dword ptr [ebp+0x6C],ebx
	test eax,eax
	jge Block145

 Block144:
	cmp eax,0x80004002
	jne Block1

 Block145:
	cmp word ptr [ebp-0x12C],8
	mov byte ptr [ebp-4],0x3B
	jne Block148

 Block146:
	mov eax,dword ptr [ebp-0x124]
	xor ecx,ecx
	mov word ptr [ebp-0x12C],cx
	test eax,eax
	je Block149

 Block147:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block149

 Block148:
	lea edx,[ebp-0x12C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block149:
	test ebx,ebx
	je Block168

 Block150:
	xor esi,esi
	mov dword ptr [ebp+0x64],esi

 Block151:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x70]
	push ecx
	push ebx
	mov dword ptr [ebp+0x70],0
	call edx
	test eax,eax
	jge Block153

 Block152:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block153:
	cmp esi,dword ptr [ebp+0x70]
	jae Block168

 Block154:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x14C]
	mov byte ptr [ebp-4],0x3C
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x3B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x3D
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x14C],8
	mov esi,eax
	mov dword ptr [ebp+0x54],esi
	mov byte ptr [ebp-4],0x3B
	jne Block157

 Block155:
	mov eax,dword ptr [ebp-0x144]
	xor ecx,ecx
	mov word ptr [ebp-0x14C],cx
	test eax,eax
	je Block158

 Block156:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block158

 Block157:
	lea edx,[ebp-0x14C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block158:
	test esi,esi
	je Block167

 Block159:
	mov ecx,dword ptr [ebp+0x5C]
	push 0
	lea eax,[ebp+0x54]
	add ecx,0x280
	push eax
	call ZMap<long, ZXString<char>, long>::GetAt
	test eax,eax
	jne Block192

 Block160:
	cmp dword ptr [ebp+0x68],eax
	je Block162

 Block161:
	mov ecx,dword ptr [ebp+0x68]
	mov edi,dword ptr [ecx]
	jmp Block163

 Block162:
	xor edi,edi

 Block163:
	xor esi,esi
	mov dword ptr [ebp+0x70],esi
	test edi,edi
	je Block165

 Block164:
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
	lea ecx,[ebp+0x70]
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
	lea ecx,[ebp+0x70]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [ebp+0x70]

 Block165:
	mov ecx,dword ptr [ebp+0x5C]
	lea edx,[ebp+0x70]
	push edx
	lea eax,[ebp+0x54]
	push eax
	add ecx,0x280
	mov byte ptr [ebp-4],0x3E
	call ZMap<long, ZXString<char>, long>::Insert
	mov byte ptr [ebp-4],0x3B
	test esi,esi
	je Block167

 Block166:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block167:
	inc dword ptr [ebp+0x64]
	mov esi,dword ptr [ebp+0x64]
	jmp Block151

 Block168:
	mov byte ptr [ebp-4],0x32
	test ebx,ebx
	je Block170

 Block169:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block170:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x23
	test eax,eax
	je Block172

 Block171:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block172:
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0x15
	test eax,eax
	je Block174

 Block173:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block174:
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block176

 Block175:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block176:
	mov esi,dword ptr [ebp+0x24]
	mov edi,dword ptr [ZImports::_InterlockedDecrement]
	add esi,0xFFFFFFF0
	lea ebx,[esi+4]
	push ebx
	mov byte ptr [ebp-4],0x10
	call edi
	test eax,eax
	jne Block179

 Block177:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block179

 Block178:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block179:
	mov eax,dword ptr [ebp+0x60]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	xor ebx,ebx
	push eax
	mov dword ptr [ebp+0x24],ebx
	mov byte ptr [ebp-4],0xC
	call edx
	mov esi,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0xB
	cmp esi,ebx
	je Block187

 Block180:
	lea eax,[esi+8]
	push eax
	call edi
	test eax,eax
	jne Block186

 Block181:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block183

 Block182:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block183:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block185

 Block184:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block185:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block186:
	mov dword ptr [ebp+0x68],ebx

 Block187:
	cmp word ptr [ebp+0x30],8
	jne Block190

 Block188:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	cmp eax,ebx
	je Block35

 Block189:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block190:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]
	cmp eax,ebx
	jge Block35

 Block191:
	jmp Block1

 Block192:
	push offset ZException::THROW_INFO
	lea eax,[ebp+0x50]
	push eax
	mov dword ptr [ebp+0x50],0x80004005
	call _CxxThrowException

 Block193:
	mov eax,dword ptr [_D_G_RM]
	test eax,eax
	jne Block195

 Block194:
	push 0x80004003
	call _com_issue_error

 Block195:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x24]
	push 0
	push eax
	mov edi,eax
	call edx
	test eax,eax
	jge Block197

 Block196:
	push offset __GUID_57dfe40b_3e20_4dbc_97e8_805a50f381bf
	push edi
	push eax
	call _com_issue_errorex

 Block197:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],0xA
	jne Block200

 Block198:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block201

 Block199:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block201

 Block200:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block201:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],7
	call eax
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx

 Block202:
	lea esp,[ebp-0x15C]
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
// CItemOptionInfo::GetItemOption
_SUB_EXCEPTION_HANDLER(175090)
__SUB_CLASS_THIS(00175090, __thiscall, 107949, CItemOptionInfo, ZRef<ItemOptionInfo>*, ZRef<ItemOptionInfo>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_175090
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
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x1C]
	push eax
	lea edx,[esp+0x3C]
	push edx
	add ecx,4
	mov dword ptr [esp+0x34],1
	call ZMap<long, ZRef<ItemOptionInfo>, long>::GetAt
	test eax,eax
	je Block2

 Block1:
	mov esi,dword ptr [esp+0x18]
	lea eax,[esp+0x1C]
	jmp Block3

 Block2:
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	lea eax,[esp+0x14]
	lea ebx,[esi+1]

 Block3:
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	or ebx,2
	mov dword ptr [esp+0x14],ebx
	test bl,1
	je Block10

 Block6:
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x14],ebx
	test esi,esi
	je Block10

 Block7:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block10

 Block8:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block10

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block10:
	mov esi,dword ptr [esp+0x20]
	mov byte ptr [esp+0x2C],0
	test esi,esi
	je Block14

 Block11:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block14

 Block12:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block14

 Block13:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block14:
	mov eax,dword ptr [esp+0x34]
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
// CItemInfo::GetExclusiveEquipItemBodyPart
__SUB_CLASS_THIS(00102B60, __thiscall, 130708, CItemInfo, long, ZRef<GW_ItemSlotBase> *, long) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	push edi
	push ebx
	mov esi,ecx
	call CItemInfo::GetExclusiveWeaponShieldBodyPart
	test eax,eax
	jne Block2

 Block1:
	push edi
	push ebx
	mov ecx,esi
	call CItemInfo::GetExclusiveClothesBodyPart

 Block2:
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CItemInfo::GetLotteryItem
_SUB_EXCEPTION_HANDLER(1008F0)
__SUB_CLASS_THIS(001008F0, __thiscall, 130730, CItemInfo, const CItemInfo::LOTTERYITEM *, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1008F0
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
	xor ebx,ebx
	xor edi,edi
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x18],edi
	lea eax,[esp+0x14]
	push eax
	lea edx,[esp+0x38]
	push edx
	add ecx,0xE4
	mov dword ptr [esp+0x34],edi
	call ZMap<long, ZRef<CItemInfo::LOTTERYITEM>, long>::GetAt
	test eax,eax
	je Block2

 Block1:
	mov esi,dword ptr [esp+0x20]
	lea eax,[esp+0x14]
	jmp Block3

 Block2:
	xor esi,esi
	mov dword ptr [esp+0x20],esi
	lea eax,[esp+0x1C]
	mov ebx,1

 Block3:
	mov ebp,dword ptr [eax+4]
	test bl,1
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	je Block8

 Block4:
	cmp esi,edi
	je Block8

 Block5:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block8

 Block6:
	push edi
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
	mov esi,dword ptr [esp+0x18]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test esi,esi
	je Block12

 Block9:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block12

 Block10:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block12

 Block11:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block12:
	mov eax,ebp
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
// get_weekly_data_path
_SUB_EXCEPTION_HANDLER(1A65F0)
__SUB(001A65F0, __cdecl, 141486, ZXString16, long, uint16_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A65F0
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
	mov eax,dword ptr [esp+0x28]
	xor ebx,ebx
	mov dword ptr [esp+0x10],ebx
	mov esi,dword ptr [esp+0x24]
	push eax
	push esi
	mov dword ptr [esp+0x24],ebx
	call get_equip_data_path
	add esp,8
	mov edi,dword ptr [esp+0x2C]
	lea ecx,[edi-1]
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x10],1
	cmp cx,5
	ja Block3

 Block1:
	lea edx,[esp+0x2C]
	push 0x950
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esi]
	mov eax,dword ptr [eax]
	movzx ecx,di
	dec ecx
	push ecx
	push edx
	push eax
	push esi
	mov dword ptr [esp+0x2C],1
	call ZXString16::Format
	mov eax,dword ptr [esp+0x3C]
	add esp,0x10
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	mov eax,esi
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
// CItemInfo::IterateBridleItem
_SUB_EXCEPTION_HANDLER(1B3550)
__SUB_CLASS_THIS0(001B3550, __thiscall, 78614, CItemInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B3550
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
	mov dword ptr [esp+0x30],ecx
	xor ebp,ebp
	mov dword ptr [esp+0x34],ebp
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x5C]
	push eax
	mov dword ptr [esp+0x98],ebp
	call esi
	lea ecx,[esp+0x5C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x4C]
	push edx
	mov byte ptr [esp+0x98],1
	call esi
	lea eax,[esp+0x4C]
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
	lea ecx,[esp+0x64]
	push ecx
	lea edx,[esp+0x58]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0xF1F
	mov bl,2
	push eax
	mov byte ptr [esp+0xB0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xA8],3
	cmp dword ptr [_D_G_RM],ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x80]
	push ecx
	mov byte ptr [esp+0xAC],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x9C],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebp
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
	mov byte ptr [esp+0x94],6
	cmp word ptr [esp+0x6C],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x74]
	xor edx,edx
	mov word ptr [esp+0x6C],dx
	cmp eax,ebp
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x6C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0x94],7
	cmp word ptr [esp+0x4C],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [esp+0x94],8
	cmp word ptr [esp+0x5C],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,ebp
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[esp+0x20]
	push edx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x98],9
	mov dword ptr [esp+0x20],ebp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	lea ecx,[esp+0x20]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebp
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],0xB
	cmp eax,ebp
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	lea eax,[esp+0x3C]
	push eax
	call esi
	mov byte ptr [esp+0x94],0xC
	mov dword ptr [esp+0x24],ebp
	mov bl,0xD

 Block31:
	mov esi,dword ptr [esp+0x1C]
	test esi,esi
	je Block5

 Block32:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x40]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block71

 Block33:
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x18]
	push eax
	call DetachBSTR
	add esp,8
	mov ebp,dword ptr [esp+0x14]
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [eax],ebp
	test ebp,ebp
	je Block35

 Block34:
	lea ecx,[ebp+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block35:
	mov ecx,dword ptr [esp+0x24]
	lea edx,[esp+0x88]
	mov byte ptr [esp+0xA0],0xE
	push edx
	mov byte ptr [esp+0xA4],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x9C],0xF
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x2C],esi
	test eax,eax
	je Block38

 Block36:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x28]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x28]
	mov esi,ecx
	mov dword ptr [esp+0x2C],esi
	test eax,eax
	jge Block38

 Block37:
	cmp eax,0x80004002
	jne Block1

 Block38:
	mov byte ptr [esp+0x94],0x11
	cmp word ptr [esp+0x7C],di
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x84]
	xor edx,edx
	mov word ptr [esp+0x7C],dx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea eax,[esp+0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block42:
	test esi,esi
	sete al
	test al,al
	je Block53

 Block43:
	mov byte ptr [esp+0x94],bl
	test esi,esi
	je Block45

 Block44:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block45:
	mov byte ptr [esp+0x94],0xC
	test ebp,ebp
	je Block66

 Block46:
	lea eax,[ebp+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block52

 Block47:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block49:
	mov eax,dword ptr [ebp+4]
	test eax,eax
	je Block51

 Block50:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block51:
	push ebp
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block52:
	mov dword ptr [esp+0x14],0
	jmp Block66

 Block53:
	test ebp,ebp
	je Block55

 Block54:
	mov eax,dword ptr [ebp]
	jmp Block56

 Block55:
	xor eax,eax

 Block56:
	push eax
	call __wtoi
	mov edi,eax
	mov eax,0x68DB8BAD
	imul edi
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	add esp,4
	cmp ecx,0xE3
	je Block59

 Block57:
	mov byte ptr [esp+0x94],bl
	test esi,esi
	je Block63

 Block58:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax
	jmp Block63

 Block59:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block61

 Block60:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block61:
	mov ecx,dword ptr [esp+0x34]
	push edi
	call CItemInfo::RegisterBridleItem
	mov byte ptr [esp+0x94],bl
	test esi,esi
	je Block63

 Block62:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block63:
	mov byte ptr [esp+0x94],0xC
	test ebp,ebp
	je Block65

 Block64:
	mov ecx,ebp
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x14],0

 Block65:
	mov edi,8

 Block66:
	cmp word ptr [esp+0x3C],di
	jne Block69

 Block67:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block31

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block69:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block31

 Block70:
	jmp Block1

 Block71:
	mov byte ptr [esp+0x94],0xB
	cmp word ptr [esp+0x3C],di
	jne Block74

 Block72:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0x98],8
	call ecx
	mov eax,dword ptr [esp+0x18]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0x98],0
	call eax
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
// CItemInfo::BUNDLEITEM::~BUNDLEITEM
_SUB_EXCEPTION_HANDLER(19D160)
__SUB_CLASS_THIS0(0019D160, __thiscall, 130866, CItemInfo::BUNDLEITEM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_19D160
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
	mov eax,dword ptr [esi+0x70]
	mov dword ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea ecx,[esi+0x30]
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<unsigned long>::`vftable'
	call ZList<unsigned long>::RemoveAll
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
// InsertionSort_ZPair_long_long__PairFirstLess_
__SUB(00194500, __cdecl, 141418, void, ZArray<ZPair<long, long>> &, int32_t, int32_t, none &) {
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
// Partition_ZPair_long_long__PairFirstLess_
__SUB(00194AB0, __cdecl, 141422, int32_t, ZArray<ZPair<long, long>> &, int32_t, int32_t, const ZPair<long, long> &, none &) {
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
// CItemInfo::GetLevelInfo
__SUB_CLASS_THIS(001C39D0, __thiscall, 130688, CItemInfo, ZRef<CItemInfo::LevelInfo>*, ZRef<CItemInfo::LevelInfo>*, long, long) {
__asm {

 Block0:
	push ecx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x18]
	xor ebp,ebp
	push edi
	mov esi,ecx
	mov dword ptr [esp+0x10],ebp
	call CItemInfo::IsGrowthItem
	test eax,eax
	je Block7

 Block1:
	push ebx
	push edi
	mov ecx,esi
	call CItemInfo::GetEquipItem
	mov ebx,eax
	cmp ebx,ebp
	jne Block3

 Block2:
	mov eax,dword ptr [esp+0x18]
	pop ebx
	pop edi
	pop esi
	mov dword ptr [eax+4],ebp
	pop ebp
	pop ecx
	ret 0xC

 Block3:
	mov ebp,dword ptr [esp+0x20]
	test ebp,ebp
	jle Block6

 Block4:
	push edi
	mov ecx,esi
	call CItemInfo::GetMaxLevel
	cmp ebp,eax
	jg Block6

 Block5:
	mov eax,dword ptr [ebx+0x210]
	mov esi,dword ptr [esp+0x18]
	lea ecx,[eax+ebp*8-8]
	push ecx
	mov ecx,esi
	call ZRef<CItemInfo::LevelInfo>::_ctor_copy
	pop ebx
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ecx
	ret 0xC

 Block6:
	mov eax,dword ptr [esp+0x18]
	pop ebx
	pop edi
	pop esi
	mov dword ptr [eax+4],0
	pop ebp
	pop ecx
	ret 0xC

 Block7:
	mov eax,dword ptr [esp+0x14]
	pop edi
	pop esi
	mov dword ptr [eax+4],ebp
	pop ebp
	pop ecx
	ret 0xC
}
}
// CItemInfo::CheckUseRequirement
_SUB_EXCEPTION_HANDLER(1B6BA0)
__SUB_CLASS_THIS(001B6BA0, __thiscall, 130724, CItemInfo, long, long, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B6BA0
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
	mov ebx,ecx
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test eax,eax
	je Block11

 Block1:
	lea esi,[eax+8]
	test esi,esi
	je Block11

 Block2:
	add esi,0xFFFFFFF8
	mov dword ptr [esp+0x20],esi
	test esi,esi
	je Block4

 Block3:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov dword ptr [esp+0x2C],0
	test esi,esi
	je Block10

 Block5:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov ecx,esi
	call eax
	mov ecx,esi
	movzx ebp,al
	call CUserLocal::GetFieldID
	lea esi,[ebx+0x34]
	mov ecx,esi
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x18],esi
	call ZFatalSection::Lock
	mov ecx,dword ptr [esp+0x34]
	push ecx
	mov ecx,ebx
	mov byte ptr [esp+0x30],1
	call CItemInfo::GetBundleItem
	mov edi,eax
	test edi,edi
	jne Block12

 Block6:
	or eax,0xFFFFFFFF
	test esi,esi
	je Block9

 Block7:
	add dword ptr [esi+4],eax
	jne Block9

 Block8:
	mov dword ptr [esi],edi

 Block9:
	push 0
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x30],eax
	call ZRef<CUserLocal>::_ReleaseRaw

 Block10:
	mov eax,1
	jmp Block29

 Block11:
	xor esi,esi
	mov dword ptr [esp+0x20],esi
	jmp Block4

 Block12:
	mov edx,dword ptr [esp+0x34]
	push edx
	mov ecx,ebx
	call CItemInfo::GetRequiredLEV
	cmp ebp,eax
	jge Block17

 Block13:
	or eax,0xFFFFFFFF
	test esi,esi
	je Block16

 Block14:
	add dword ptr [esi+4],eax
	jne Block16

 Block15:
	mov dword ptr [esi],0

 Block16:
	push 0
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x30],eax
	call ZRef<CUserLocal>::_ReleaseRaw
	mov eax,2
	jmp Block29

 Block17:
	cmp dword ptr [edi+0x38],0
	je Block25

 Block18:
	mov edi,dword ptr [edi+0x3C]
	mov dword ptr [esp+0x34],edi
	test edi,edi
	je Block21

 Block19:
	lea eax,[esp+0x34]
	push eax
	call ZList<unsigned long>::GetNext
	mov ecx,dword ptr [esp+0x18]
	add esp,4
	cmp ecx,dword ptr [eax]
	je Block25

 Block20:
	cmp dword ptr [esp+0x34],0
	jne Block19

 Block21:
	or eax,0xFFFFFFFF
	test esi,esi
	je Block24

 Block22:
	add dword ptr [esi+4],eax
	jne Block24

 Block23:
	mov dword ptr [esi],0

 Block24:
	push 0
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x30],eax
	call ZRef<CUserLocal>::_ReleaseRaw
	mov eax,3
	jmp Block29

 Block25:
	or eax,0xFFFFFFFF
	test esi,esi
	je Block28

 Block26:
	add dword ptr [esi+4],eax
	jne Block28

 Block27:
	mov dword ptr [esi],0

 Block28:
	push 0
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x30],eax
	call ZRef<CUserLocal>::_ReleaseRaw
	xor eax,eax

 Block29:
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
// CItemInfo::GetPetFoodItem
_SUB_EXCEPTION_HANDLER(81630)
__SUB_CLASS_THIS(00081630, __thiscall, 130727, CItemInfo, const CItemInfo::PETFOODITEM *, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_81630
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
	xor ebx,ebx
	xor edi,edi
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x18],edi
	lea eax,[esp+0x14]
	push eax
	lea edx,[esp+0x38]
	push edx
	add ecx,0xB4
	mov dword ptr [esp+0x34],edi
	call ZMap<long, ZRef<CItemInfo::PETFOODITEM>, long>::GetAt
	test eax,eax
	je Block2

 Block1:
	mov esi,dword ptr [esp+0x20]
	lea eax,[esp+0x14]
	jmp Block3

 Block2:
	xor esi,esi
	mov dword ptr [esp+0x20],esi
	lea eax,[esp+0x1C]
	mov ebx,1

 Block3:
	mov ebp,dword ptr [eax+4]
	test bl,1
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	je Block8

 Block4:
	cmp esi,edi
	je Block8

 Block5:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block8

 Block6:
	push edi
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
	mov esi,dword ptr [esp+0x18]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test esi,esi
	je Block12

 Block9:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block12

 Block10:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block12

 Block11:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block12:
	mov eax,ebp
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
// CItemInfo::GetItemIDArrayByName
_SUB_EXCEPTION_HANDLER(1ABE60)
__SUB_CLASS_THIS(001ABE60, __thiscall, 130766, CItemInfo, int32_t, long, const ZXString<char> &, ZArray<long> &) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1ABE60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x64]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x30],edi
	mov eax,dword ptr [esp+0x78]
	xor esi,esi
	mov dword ptr [esp+0x20],esi
	mov eax,dword ptr [eax]
	cmp eax,esi
	je Block2

 Block1:
	mov ecx,dword ptr [eax-4]
	mov dword ptr [esp+0x28],ecx
	jmp Block3

 Block2:
	mov dword ptr [esp+0x28],esi

 Block3:
	mov ecx,dword ptr [esp+0x7C]
	call ZArray<long>::RemoveAll
	lea ecx,[edi+0x6C]
	call ZMap<long, ZMap<char const *, ZXString<char>, ZXString<char>>, long>::GetHeadPosition
	mov dword ptr [esp+0x34],eax
	cmp eax,esi
	je Block60

 Block4:
	jmp Block6

 Block6:
	int 3// TODO: 	mov ebx,offset ZMap<char const *, ZXString<char>, ZXString<char>>::`vftable'
	push 0x64
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x50],ebx
	mov dword ptr [esp+0x54],esi
	mov dword ptr [esp+0x58],0x1F
	mov dword ptr [esp+0x5C],esi
	call ZMap<char const *, ZXString<char>, ZXString<char>>::_CalcAutoGrow
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x38]
	push eax
	lea ecx,[edi+0x6C]
	mov dword ptr [esp+0x74],esi
	call ZMap<long, ZMap<char const *, ZXString<char>, ZXString<char>>, long>::GetNext
	mov ecx,dword ptr [esp+0x74]
	mov ebp,dword ptr [eax]
	cmp ecx,esi
	je Block10

 Block7:
	mov eax,0x431BDE83
	imul ebp
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,ecx
	je Block10

 Block8:
	cmp eax,5
	je Block10

 Block9:
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	mov dword ptr [esp+0x4C],ebx
	call ZMap<char const *, ZXString<char>, ZXString<char>>::RemoveAll
	jmp Block59

 Block10:
	push ebp
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,edi
	call CItemInfo::GetItemProp
	cmp dword ptr [eax],esi
	mov eax,dword ptr [esp+0x38]
	sete bl
	mov byte ptr [esp+0x6C],0
	cmp eax,esi
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block12:
	test bl,bl
	je Block14

 Block13:
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x4C],offset ZMap<char const *, ZXString<char>, ZXString<char>>::`vftable'
	call ZMap<char const *, ZXString<char>, ZXString<char>>::RemoveAll
	jmp Block59

 Block14:
	lea ecx,[esp+0x3C]
	push 0x671
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [eax]
	push esi
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x74],2
	mov dword ptr [esp+0x2C],edx
	call ZMap<char const *, ZXString<char>, ZXString<char>>::Insert
	add eax,0xC
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x6C],4
	cmp eax,esi
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov ebx,dword ptr [esp+0x1C]
	cmp ebx,esi
	je Block24

 Block17:
	cmp byte ptr [ebx],0
	je Block22

 Block18:
	push 1
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call __strlwr
	mov eax,dword ptr [esp+0x20]
	add esp,4
	cmp eax,esi
	je Block20

 Block19:
	mov eax,dword ptr [eax-4]
	jmp Block21

 Block20:
	xor eax,eax

 Block21:
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::ReleaseBuffer
	mov ebx,dword ptr [esp+0x1C]

 Block22:
	cmp ebx,esi
	je Block24

 Block23:
	mov edi,dword ptr [ebx-4]
	jmp Block25

 Block24:
	xor edi,edi

 Block25:
	lea eax,[esp+0x18]
	mov dword ptr [esp+0x24],esi
	mov byte ptr [esp+0x18],0x80
	mov byte ptr [esp+0x19],0
	lea edx,[eax+1]
	lea ebx,[ebx]

 Block26:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block26

 Block27:
	sub eax,edx
	mov esi,eax
	push esi
	lea ecx,[esp+0x1C]
	push ecx
	push 0
	push esi
	lea ecx,[esp+0x34]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x28]
	call ZXString<char>::ReleaseBuffer
	xor esi,esi
	sub edi,dword ptr [esp+0x28]
	mov byte ptr [esp+0x6C],5
	mov dword ptr [esp+0x48],edi
	js Block54

 Block28:
	mov edi,dword ptr [esp+0x78]
	push 1
	push 0
	lea edx,[esp+0x4C]
	push edx
	mov ecx,edi
	call ZXString<char>::Substring
	mov ebx,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x24]
	push ecx
	or ebx,1
	mov ecx,eax
	mov byte ptr [esp+0x70],6
	mov dword ptr [esp+0x24],ebx
	call ZXString<char>::Compare
	test eax,eax
	jge Block30

 Block29:
	lea edx,[esi+1]
	push edx
	push esi
	lea eax,[esp+0x48]
	push eax
	lea ecx,[esp+0x28]
	call ZXString<char>::Substring
	mov ecx,dword ptr [esp+0x24]
	push ecx
	or ebx,2
	mov ecx,eax
	mov dword ptr [esp+0x24],ebx
	call ZXString<char>::Compare
	mov byte ptr [esp+0x17],1
	test eax,eax
	jg Block31

 Block30:
	mov byte ptr [esp+0x17],0

 Block31:
	test bl,2
	je Block34

 Block32:
	mov eax,dword ptr [esp+0x40]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x20],ebx
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov dword ptr [esp+0x6C],5
	test bl,1
	je Block37

 Block35:
	mov eax,dword ptr [esp+0x44]
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x20],ebx
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	cmp byte ptr [esp+0x17],0
	je Block39

 Block38:
	inc esi
	jmp Block49

 Block39:
	mov edx,dword ptr [esp+0x28]
	lea eax,[esi+edx]
	push eax
	push esi
	lea ecx,[esp+0x34]
	push ecx
	lea ecx,[esp+0x28]
	call ZXString<char>::Substring
	push edi
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x70],7
	call ZXString<char>::op_eq_0
	test eax,eax
	je Block47

 Block40:
	mov ebx,dword ptr [esp+0x30]
	push ebp
	mov ecx,ebx
	call CItemInfo::IsCashItem_1
	test eax,eax
	jne Block47

 Block41:
	push ebp
	mov ecx,ebx
	call CItemInfo::IsOnlyItem
	test eax,eax
	jne Block47

 Block42:
	push ebp
	mov ecx,ebx
	call CItemInfo::IsTradeBlockItem_0
	test eax,eax
	jne Block47

 Block43:
	push ebp
	mov ecx,ebx
	call CItemInfo::IsNotSaleItem
	test eax,eax
	jne Block47

 Block44:
	push ebp
	mov ecx,ebx
	call CItemInfo::IsQuestItem
	test eax,eax
	jne Block47

 Block45:
	push ebp
	mov ecx,ebx
	call CItemInfo::IsNPTExceptionItem
	test eax,eax
	jne Block47

 Block46:
	push ebp
	call is_rechargeable_item
	add esp,4
	test eax,eax
	je Block51

 Block47:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x6C],5
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block49:
	inc esi
	cmp esi,dword ptr [esp+0x48]
	jle Block28

 Block50:
	jmp Block53

 Block51:
	mov ecx,dword ptr [esp+0x7C]
	push 0xFFFFFFFF
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],ebp
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x6C],5
	test eax,eax
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	mov ebx,dword ptr [esp+0x1C]

 Block54:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x6C],4
	test eax,eax
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block56:
	mov byte ptr [esp+0x6C],0
	test ebx,ebx
	je Block58

 Block57:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block58:
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x4C],offset ZMap<char const *, ZXString<char>, ZXString<char>>::`vftable'
	call ZMap<char const *, ZXString<char>, ZXString<char>>::RemoveAll
	mov edi,dword ptr [esp+0x30]
	xor esi,esi

 Block59:
	cmp dword ptr [esp+0x34],esi
	jne Block6

 Block60:
	mov edx,dword ptr [esp+0x7C]
	mov eax,dword ptr [edx]
	cmp eax,esi
	jne Block62

 Block61:
	xor eax,eax
	jmp Block63

 Block62:
	mov eax,dword ptr [eax-4]

 Block63:
	xor ecx,ecx
	cmp eax,esi
	setne cl
	mov eax,ecx
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret 0xC
}
}
// CItemInfo::LevelInfo::RandomEVA::GetStatType
__SUB_CLASS_THIS0(00191690, __thiscall, 131052, CItemInfo::LevelInfo::RandomEVA, long) {
__asm {

 Block0:
	mov eax,0xB
	ret
}
}
// CItemInfo::IsScannableItem
_SUB_EXCEPTION_HANDLER(1A7AB0)
__SUB_CLASS_THIS(001A7AB0, __thiscall, 130681, CItemInfo, int32_t, long, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A7AB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	xor ebx,ebx
	mov dword ptr [ebp-0x18],ebx
	mov edi,dword ptr [ebp+8]
	mov eax,0x431BDE83
	imul edi
	sar edx,0x12
	mov esi,edx
	shr esi,0x1F
	mov dword ptr [ebp-4],ebx
	add esi,edx
	mov dword ptr [ebp-0x1C],ebx
	mov dword ptr [ebp-0x14],ebx
	mov byte ptr [ebp-4],2
	cmp esi,1
	jne Block30

 Block1:
	lea eax,[ebp+8]
	push edi
	push eax
	call get_equip_data_path
	add esp,8
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block3

 Block2:
	cmp word ptr [eax],bx
	jne Block7

 Block3:
	mov byte ptr [ebp-4],2

 Block4:
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 8

 Block7:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x44]
	push ecx
	call esi
	lea edx,[ebp-0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	lea eax,[ebp-0x34]
	push eax
	mov byte ptr [ebp-4],4
	call esi
	lea ecx,[ebp-0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	push 0
	push 0
	lea edx,[ebp-0x44]
	push edx
	mov edx,dword ptr [ebp+8]
	lea eax,[ebp-0x34]
	push eax
	push ecx
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	mov bl,5
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],6
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea eax,[ebp-0x54]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x1C]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block16

 Block14:
	cmp eax,0x80004002
	je Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x54],si
	jne Block19

 Block17:
	mov eax,dword ptr [ebp-0x4C]
	xor ecx,ecx
	mov word ptr [ebp-0x54],cx
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[ebp-0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x34],si
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x44],si
	jne Block27

 Block25:
	mov eax,dword ptr [ebp-0x3C]
	xor edx,edx
	mov word ptr [ebp-0x44],dx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea eax,[ebp-0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block75

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block75

 Block30:
	cmp esi,2
	je Block33

 Block31:
	cmp esi,3
	je Block33

 Block32:
	cmp esi,4
	jne Block76

 Block33:
	test byte ptr [_D__S4__5],1
	jne Block35

 Block34:
	or dword ptr [_D__S4__5],1
	push ebx
	push ebx
	mov ecx,offset _D_S_ASTYPENAME__1
	mov byte ptr [ebp-4],8
	mov dword ptr [_D_S_ASTYPENAME__1],ebx
	call ZXString16::GetBuffer
	push 0
	push offset _S___3
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,offset _D_S_ASTYPENAME__1
	call ZXString16::ReleaseBuffer
	push 0
	push 0
	mov ecx,offset _D_S_ASTYPENAME__1+4
	mov byte ptr [ebp-4],9
	mov dword ptr [_D_S_ASTYPENAME__1+4],0
	call ZXString16::GetBuffer
	push 0
	push offset _S___3
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,offset _D_S_ASTYPENAME__1+4
	call ZXString16::ReleaseBuffer
	mov byte ptr [ebp-4],0xA
	call StringPool::GetInstance
	push 0x953
	push offset _D_S_ASTYPENAME__1+8
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [ebp-4],0xB
	call StringPool::GetInstance
	push 0x954
	push offset _D_S_ASTYPENAME__1+12
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [ebp-4],0xC
	call StringPool::GetInstance
	push 0x1A38
	push offset _D_S_ASTYPENAME__1+16
	mov ecx,eax
	call StringPool::GetStringW
	push 0xB12950
	call _atexit
	add esp,4
	mov byte ptr [ebp-4],2

 Block35:
	call StringPool::GetInstance
	push 0x957
	lea ecx,[ebp-0x20]
	push ecx
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	mov eax,0x68DB8BAD
	imul edi
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,dword ptr [esi*4+_D_S_ASTYPENAME__1]
	push eax
	push edx
	push ecx
	lea eax,[ebp-0x14]
	push eax
	mov byte ptr [ebp-4],0xD
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x20]
	add esp,0x10
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block37:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x34]
	push ecx
	call esi
	lea edx,[ebp-0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block39

 Block38:
	push eax
	call _com_issue_error

 Block39:
	lea eax,[ebp-0x44]
	push eax
	mov byte ptr [ebp-4],0xE
	call esi
	lea ecx,[ebp-0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	push 0
	push 0
	lea edx,[ebp-0x34]
	push edx
	mov edx,dword ptr [ebp-0x14]
	lea eax,[ebp-0x44]
	push eax
	push ecx
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	mov bl,0xF
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x10
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	lea eax,[ebp-0x54]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x11
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x20]
	mov dword ptr [ebp-0x20],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block46

 Block44:
	cmp eax,0x80004002
	je Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	cmp word ptr [ebp-0x54],8
	mov byte ptr [ebp-4],0x13
	jne Block53

 Block47:
	mov eax,dword ptr [ebp-0x4C]
	xor ecx,ecx
	mov word ptr [ebp-0x54],cx
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block49:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block50:
	mov esi,8
	mov byte ptr [ebp-4],0x14
	cmp word ptr [ebp-0x44],si
	jne Block54

 Block51:
	xor eax,eax
	mov word ptr [ebp-0x44],ax
	mov eax,dword ptr [ebp-0x3C]
	test eax,eax
	je Block55

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block53:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x54]
	push edx
	call edi
	jmp Block50

 Block54:
	lea ecx,[ebp-0x44]
	push ecx
	call edi

 Block55:
	mov bl,0x15
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x34],si
	jne Block58

 Block56:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[ebp-0x34]
	push eax
	call edi

 Block59:
	call StringPool::GetInstance
	push 0x6DF
	lea ecx,[ebp-0x24]
	push ecx
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [ebp+8]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp-0x14]
	push eax
	mov byte ptr [ebp-4],0x16
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x24]
	add esp,0xC
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block61

 Block60:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block61:
	mov esi,dword ptr [ebp-0x20]
	test esi,esi
	sete al
	test al,al
	je Block65

 Block62:
	mov byte ptr [ebp-4],2
	test esi,esi
	je Block64

 Block63:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block64:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],1
	jmp Block4

 Block65:
	mov eax,dword ptr [ebp-0x14]
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+8],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x17
	test esi,esi
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	lea ecx,[ebp-0x64]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x18
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x1C]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block70

 Block68:
	cmp eax,0x80004002
	je Block70

 Block69:
	push eax
	call _com_issue_error

 Block70:
	cmp word ptr [ebp-0x64],8
	mov byte ptr [ebp-4],bl
	jne Block73

 Block71:
	mov eax,dword ptr [ebp-0x5C]
	xor edx,edx
	mov word ptr [ebp-0x64],dx
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea eax,[ebp-0x64]
	push eax
	call edi

 Block74:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],2
	call edx

 Block75:
	mov ebx,dword ptr [ebp-0x1C]

 Block76:
	test ebx,ebx
	sete al
	test al,al
	je Block81

 Block77:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block79:
	mov byte ptr [ebp-4],0
	test ebx,ebx
	je Block6

 Block80:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx
	jmp Block6

 Block81:
	push 0
	push 0
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp+8],esp
	push 0x3D5
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x19
	test ebx,ebx
	jne Block83

 Block82:
	push 0x80004003
	call _com_issue_error

 Block83:
	lea eax,[ebp-0x64]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+8]
	mov dword ptr [ebp+8],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block86

 Block84:
	cmp eax,0x80004002
	je Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	cmp word ptr [ebp-0x64],8
	mov byte ptr [ebp-4],0x1C
	jne Block89

 Block87:
	mov eax,dword ptr [ebp-0x5C]
	xor ecx,ecx
	mov word ptr [ebp-0x64],cx
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea edx,[ebp-0x64]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	mov esi,dword ptr [ebp+8]
	test esi,esi
	sete al
	test al,al
	je Block96

 Block91:
	mov byte ptr [ebp-4],2
	test esi,esi
	je Block93

 Block92:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block93:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block95

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block95:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov byte ptr [ebp-4],0
	call eax
	jmp Block6

 Block96:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x24],esp
	push 0x826
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x1D
	test esi,esi
	jne Block98

 Block97:
	push 0x80004003
	call _com_issue_error

 Block98:
	lea edx,[ebp-0x54]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x1C
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1E
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x54],8
	mov edi,eax
	mov byte ptr [ebp-4],0x1C
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [ebp-0x54],ax
	mov eax,dword ptr [ebp-0x4C]
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[ebp-0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	test edi,edi
	je Block106

 Block103:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],2
	call eax
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block105

 Block104:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block105:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [ebp-4],0
	call edx
	jmp Block6

 Block106:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x24],esp
	push 0xBC8
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x54]
	mov byte ptr [ebp-4],0x1F
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x1C
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x20
	call get_int32
	add esp,8
	lea ecx,[ebp-0x54]
	mov edi,eax
	mov byte ptr [ebp-4],0x1C
	call Ztl_variant_t::~Ztl_variant_t
	test edi,edi
	je Block108

 Block107:
	mov byte ptr [ebp-4],2
	jmp Block92

 Block108:
	push 0
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x24],esp
	push 0xBC9
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x54]
	mov byte ptr [ebp-4],0x21
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x1C
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x22
	call get_int32
	add esp,8
	lea ecx,[ebp-0x54]
	mov edi,eax
	mov byte ptr [ebp-4],0x1C
	call Ztl_variant_t::~Ztl_variant_t
	test edi,edi
	jne Block107

 Block109:
	cmp dword ptr [ebp+0xC],edi
	jne Block114

 Block110:
	push edi
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0xC],esp
	push 0xCA1
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x34]
	mov byte ptr [ebp-4],0x23
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x1C
	call IWzProperty::Getitem
	mov bl,0x24
	push eax
	mov byte ptr [ebp-4],bl
	mov dword ptr [ebp-0x18],1
	call get_int32
	add esp,8
	test eax,eax
	jne Block114

 Block111:
	push eax
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0xC],esp
	push 0xCA2
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x44]
	mov dword ptr [ebp-4],0x25
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ebx,0x26
	push eax
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp-0x18],3
	call get_int32
	add esp,8
	test eax,eax
	jne Block114

 Block112:
	push eax
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0xC],esp
	push 0xCA0
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x54]
	mov dword ptr [ebp-4],0x27
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov dword ptr [ebp-4],0x28
	mov dword ptr [ebp-0x18],7
	call get_int32
	add esp,8
	test eax,eax
	je Block114

 Block113:
	mov bl,1
	jmp Block115

 Block114:
	xor bl,bl

 Block115:
	test byte ptr [ebp-0x18],4
	je Block117

 Block116:
	and dword ptr [ebp-0x18],0xFFFFFFFB
	lea ecx,[ebp-0x54]
	call Ztl_variant_t::~Ztl_variant_t

 Block117:
	test byte ptr [ebp-0x18],2
	je Block119

 Block118:
	and dword ptr [ebp-0x18],0xFFFFFFFD
	lea ecx,[ebp-0x44]
	call Ztl_variant_t::~Ztl_variant_t

 Block119:
	test byte ptr [ebp-0x18],1
	mov dword ptr [ebp-4],0x1C
	je Block121

 Block120:
	lea ecx,[ebp-0x34]
	call Ztl_variant_t::~Ztl_variant_t

 Block121:
	mov byte ptr [ebp-4],2
	push esi
	test bl,bl
	je Block125

 Block122:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	call ecx
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block124

 Block123:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block124:
	mov eax,dword ptr [ebp-0x1C]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0
	call eax
	jmp Block6

 Block125:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	call edx
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block127

 Block126:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block127:
	mov eax,dword ptr [ebp-0x1C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
	mov eax,1
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 8
}
}
// CItemInfo::GetSetItemEffect
__SUB_CLASS_THIS(00194ED0, __thiscall, 130762, CItemInfo, long, long *, long, long *) {
__asm {

 Block0:
	sub esp,0x10C
	mov ecx,dword ptr [ecx+0x21C]
	push ebx
	xor eax,eax
	push ebp
	push esi
	push edi
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x28],ecx
	cmp ecx,eax
	je Block43

 Block1:
	lea eax,[esp+0x28]
	push eax
	call ZList<CItemInfo::SET_EFFECT>::GetNext
	add esp,4
	mov dword ptr [esp+0x14],eax
	xor ebp,ebp

 Block2:
	mov edx,dword ptr [esp+0x14]
	lea ecx,[ebp+ebp*4]
	lea edi,[edx+ecx*4]
	xor esi,esi
	cmp dword ptr [edi+0xC],esi
	je Block16

 Block3:
	cmp ebp,esi
	jne Block5

 Block4:
	lea ebx,[esi+1]
	mov dword ptr [esp+0x2C],esi
	jmp Block6

 Block5:
	mov eax,dword ptr [edi+0x10]
	mov edx,dword ptr [eax]
	push 1
	lea ecx,[esp+0x30]
	push ecx
	push 2
	push edx
	call get_bodypart_from_item
	add esp,0x10
	mov ebx,eax

 Block6:
	test ebx,ebx
	jle Block17

 Block7:
	add edi,4

 Block8:
	mov eax,dword ptr [esp+esi*4+0x2C]
	cmp eax,0xB
	jne Block11

 Block9:
	cmp dword ptr [esp+0x124],0
	je Block11

 Block10:
	lea eax,[esp+0x124]
	jmp Block12

 Block11:
	mov ecx,dword ptr [esp+0x120]
	lea eax,[ecx+eax*4]

 Block12:
	push 0
	push eax
	mov ecx,edi
	call ZList<long>::Find
	test eax,eax
	jne Block15

 Block13:
	inc esi
	cmp esi,ebx
	jl Block8

 Block14:
	jmp Block17

 Block15:
	cmp esi,ebx
	jge Block17

 Block16:
	inc ebp
	cmp ebp,0x3C
	jl Block2

 Block17:
	mov edx,dword ptr [esp+0x14]
	cmp dword ptr [edx+0x520],0
	je Block24

 Block18:
	mov edi,dword ptr [esp+0x128]
	mov ebx,edx
	xor esi,esi
	add ebx,0x518
	jmp Block20

 Block20:
	push 0
	push edi
	mov ecx,ebx
	call ZList<long>::Find
	test eax,eax
	je Block23

 Block21:
	inc esi
	add edi,4
	cmp esi,3
	jl Block20

 Block22:
	jmp Block24

 Block23:
	cmp esi,3
	jl Block37

 Block24:
	mov esi,dword ptr [esp+0x14]
	xor edx,edx
	xor eax,eax
	lea ecx,[esi+0x4BC]
	lea esp,[esp]

 Block25:
	cmp dword ptr [ecx],0
	jne Block28

 Block26:
	inc eax
	add ecx,0x14
	cmp eax,5
	jl Block25

 Block27:
	jmp Block29

 Block28:
	mov edx,1

 Block29:
	cmp ebp,0x3C
	jl Block37

 Block30:
	test edx,edx
	jne Block37

 Block31:
	mov eax,dword ptr [esi]
	mov ecx,1
	cmp eax,ecx
	je Block40

 Block32:
	cmp eax,2
	jne Block35

 Block33:
	cmp dword ptr [esp+0x18],edx
	jne Block35

 Block34:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x24],eax
	jmp Block37

 Block35:
	cmp dword ptr [esp+0x1C],0
	jne Block37

 Block36:
	mov dword ptr [esp+0x1C],ecx
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [esp+0x20],ecx

 Block37:
	inc dword ptr [esp+0x10]
	cmp dword ptr [esp+0x28],0
	jne Block1

 Block38:
	cmp dword ptr [esp+0x1C],0
	je Block41

 Block39:
	mov eax,dword ptr [esp+0x20]
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10C
	ret 0xC

 Block40:
	mov eax,dword ptr [esp+0x10]
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10C
	ret 0xC

 Block41:
	cmp dword ptr [esp+0x18],0
	je Block43

 Block42:
	mov eax,dword ptr [esp+0x24]
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10C
	ret 0xC

 Block43:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	add esp,0x10C
	ret 0xC
}
}
// CItemInfo::GetSpecialIcon
_SUB_EXCEPTION_HANDLER(1A87B0)
__SUB_CLASS_THIS(001A87B0, __thiscall, 130757, CItemInfo, _x_com_ptr<IWzCanvas>*, _x_com_ptr<IWzCanvas>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A87B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0x10],ebx
	mov eax,dword ptr [esp+0x38]
	push eax
	lea edx,[esp+0x3C]
	push edx
	call CItemInfo::GetSpecialProp
	mov dword ptr [esp+0x2C],ebx
	cmp dword ptr [esp+0x38],ebx
	je Block17

 Block1:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x14],esp
	push 0x95B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x30],1
	cmp ecx,ebx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x34],bl
	call IWzProperty::Getitem
	push eax
	lea eax,[esp+0x10]
	push eax
	mov byte ptr [esp+0x34],2
	call get_unknown
	mov esi,dword ptr [esp+0x3C]
	add esp,4
	mov dword ptr [esi],ebx
	mov eax,dword ptr [eax]
	mov ecx,esp
	mov byte ptr [esp+0x30],3
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block5:
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block8

 Block6:
	cmp eax,0x80004002
	je Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x2C],2
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x2C],bl
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block16:
	mov eax,esi
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x24
	ret 8

 Block17:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [eax],ebx
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x24
	ret 8
}
}
// CItemInfo::GetSlotIncDelta
_SUB_EXCEPTION_HANDLER(1A7190)
__SUB_CLASS_THIS(001A7190, __thiscall, 84833, CItemInfo, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A7190
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x2C]
	push eax
	lea edx,[esp+0x30]
	push edx
	call CItemInfo::GetSpecialProp
	cmp dword ptr [esp+0x2C],0
	mov dword ptr [esp+0x24],0
	je Block10

 Block1:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x10],esp
	push 0xEFD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x34]
	mov byte ptr [esp+0x2C],1
	test ecx,ecx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0x30],0
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x2C],2
	call get_int32
	add esp,8
	cmp word ptr [esp+0xC],8
	mov esi,eax
	mov byte ptr [esp+0x24],0
	jne Block6

 Block4:
	xor eax,eax
	mov word ptr [esp+0xC],ax
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block7

 Block5:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block7

 Block6:
	lea ecx,[esp+0xC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block7:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block9

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block9:
	mov eax,esi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret 4

 Block10:
	xor eax,eax
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret 4
}
}
// CItemInfo::IterateCashBundleItem
_SUB_EXCEPTION_HANDLER(1B2CA0)
__SUB_CLASS_THIS0(001B2CA0, __thiscall, 78614, CItemInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B2CA0
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
	mov dword ptr [esp+0x1C],ecx
	xor ebx,ebx
	mov dword ptr [esp+0xC8],ebx
	lea eax,[esp+0x34]
	push 0x6C8
	push eax
	mov dword ptr [esp+0xDC],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esp+0x34]
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xE4],1
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xE0],2
	cmp dword ptr [_D_G_ROOT],ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+0xA4]
	mov byte ptr [esp+0xE0],1
	mov ecx,dword ptr [_D_G_ROOT]
	push eax
	call IWzNameSpace::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xDC],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],ebx
	call _x_com_ptr<IWzNameSpace>::_QueryUnknown
	cmp eax,ebx
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [esp+0x98],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0xD4],5
	jne Block8

 Block6:
	mov eax,dword ptr [esp+0xA0]
	xor ecx,ecx
	mov word ptr [esp+0x98],cx
	cmp eax,ebx
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea edx,[esp+0x98]
	push edx
	call edi

 Block9:
	mov ecx,dword ptr [esp+0x28]
	cmp ecx,ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[esp+0x64]
	push eax
	call IWzNameSpace::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xD8],6
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block13:
	lea ecx,[esp+0x34]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block16

 Block14:
	cmp eax,0x80004002
	je Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0xD4],8
	cmp eax,ebx
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0xD4],9
	mov dword ptr [esp+0x70],ebx

 Block19:
	mov eax,dword ptr [esp+0x30]
	lea ecx,[esp+0x70]
	push ecx
	lea edx,[esp+0x40]
	push edx
	push eax
	call enum_next_in_directory
	add esp,0xC
	test eax,eax
	je Block116

 Block20:
	mov edx,dword ptr [esp+0x44]
	mov ebp,8
	cmp word ptr [esp+0x3C],bp
	je Block22

 Block21:
	mov edx,offset _S___3

 Block22:
	mov dword ptr [esp+0x20],ebx
	cmp edx,ebx
	je Block26

 Block23:
	mov eax,edx
	lea esi,[eax+2]

 Block24:
	mov cx,word ptr [eax]
	add eax,2
	cmp cx,bx
	jne Block24

 Block25:
	sub eax,esi
	sar eax,1
	mov esi,eax
	lea ecx,[esi+esi]
	push ecx
	push edx
	push ebx
	push esi
	lea ecx,[esp+0x30]
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x24]
	call ZXString16::ReleaseBuffer

 Block26:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x88]
	push edx
	mov byte ptr [esp+0xD8],0xA
	call esi
	lea eax,[esp+0x88]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block4

 Block27:
	lea ecx,[esp+0x78]
	push ecx
	mov byte ptr [esp+0xD8],0xB
	call esi
	lea edx,[esp+0x78]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block4

 Block28:
	push ebx
	push ebx
	lea eax,[esp+0x90]
	push eax
	lea ecx,[esp+0x84]
	push ecx
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x74]
	push eax
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0xEC],0xC
	call ZXString16::op_add_1
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xEC],0xD
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xE8],0xE
	cmp dword ptr [_D_G_RM],ebx
	je Block1

 Block29:
	lea ecx,[esp+0xBC]
	push ecx
	mov byte ptr [esp+0xEC],0xD
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xDC],0xF
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x2C],esi
	cmp eax,ebx
	je Block32

 Block30:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x6C]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x6C]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [esp+0x2C],esi
	jge Block32

 Block31:
	cmp eax,0x80004002
	jne Block4

 Block32:
	mov byte ptr [esp+0xD4],0x11
	cmp word ptr [esp+0xA8],bp
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0xB0]
	xor edx,edx
	mov word ptr [esp+0xA8],dx
	cmp eax,ebx
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea eax,[esp+0xA8]
	push eax
	call edi

 Block36:
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0xD4],0x12
	cmp eax,ebx
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block38:
	mov byte ptr [esp+0xD4],0x13
	cmp word ptr [esp+0x78],bp
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x80]
	xor ecx,ecx
	mov word ptr [esp+0x78],cx
	cmp eax,ebx
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x78]
	push edx
	call edi

 Block42:
	mov byte ptr [esp+0xD4],0x14
	cmp word ptr [esp+0x88],bp
	jne Block45

 Block43:
	xor eax,eax
	mov word ptr [esp+0x88],ax
	mov eax,dword ptr [esp+0x90]
	cmp eax,ebx
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea ecx,[esp+0x88]
	push ecx
	call edi

 Block46:
	cmp esi,ebx
	je Block1

 Block47:
	lea edx,[esp+0x5C]
	push edx
	mov ecx,esi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xD8],0x15
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block49:
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block51

 Block50:
	cmp eax,0x80004002
	jne Block4

 Block51:
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0xD4],0x17
	cmp eax,ebx
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0xD4],0x18
	mov dword ptr [esp+0x74],ebx
	jmp Block56

 Block55:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block56:
	mov esi,dword ptr [esp+0x18]
	cmp esi,ebx
	je Block1

 Block57:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x74]
	push edx
	lea eax,[esp+0x50]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block105

 Block58:
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x3C]
	push eax
	call DetachBSTR
	add esp,8
	mov ebp,dword ptr [esp+0x38]
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],ebp
	cmp ebp,ebx
	je Block60

 Block59:
	lea ecx,[ebp+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block60:
	mov ecx,dword ptr [esp+0x38]
	lea edx,[esp+0xC4]
	mov byte ptr [esp+0xE0],0x1A
	push edx
	mov byte ptr [esp+0xE4],0x19
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xDC],0x1B
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	cmp eax,ebx
	je Block63

 Block61:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x68]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x68]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	jge Block63

 Block62:
	cmp eax,0x80004002
	jne Block4

 Block63:
	cmp word ptr [esp+0xB8],8
	mov byte ptr [esp+0xD4],0x1D
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0xC0]
	xor edx,edx
	mov word ptr [esp+0xB8],dx
	cmp eax,ebx
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea eax,[esp+0xB8]
	push eax
	call edi

 Block67:
	cmp ebp,ebx
	je Block69

 Block68:
	mov eax,dword ptr [ebp]
	jmp Block70

 Block69:
	xor eax,eax

 Block70:
	push eax
	call __wtoi
	mov edi,eax
	mov eax,0x68DB8BAD
	imul edi
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	add esp,4
	cmp ecx,0x20C
	jne Block74

 Block71:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax],esi
	cmp esi,ebx
	je Block73

 Block72:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block73:
	mov ecx,dword ptr [esp+0x20]
	push edi
	call CItemInfo::RegisterPetFoodItem
	jmp Block90

 Block74:
	cmp ecx,0x228
	jne Block78

 Block75:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax],esi
	cmp esi,ebx
	je Block77

 Block76:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block77:
	mov ecx,dword ptr [esp+0x20]
	push edi
	call CItemInfo::RegisterKarmaScissorsItem
	jmp Block90

 Block78:
	mov eax,0x10624DD3
	imul edi
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x14A1
	jne Block82

 Block79:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax],esi
	cmp esi,ebx
	je Block81

 Block80:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block81:
	mov ecx,dword ptr [esp+0x20]
	push edi
	call CItemInfo::RegisterAreaBuffItem
	jmp Block90

 Block82:
	cmp ecx,0x22F
	jne Block86

 Block83:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax],esi
	cmp esi,ebx
	je Block85

 Block84:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block85:
	mov ecx,dword ptr [esp+0x20]
	push edi
	call CItemInfo::RegisterIncLevelItem
	jmp Block90

 Block86:
	cmp ecx,0x236
	jne Block90

 Block87:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax],esi
	cmp esi,ebx
	je Block89

 Block88:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block89:
	mov ecx,dword ptr [esp+0x20]
	push edi
	call CItemInfo::RegisterQuestDeliveryItem

 Block90:
	mov byte ptr [esp+0xD4],0x19
	cmp esi,ebx
	je Block92

 Block91:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block92:
	mov byte ptr [esp+0xD4],0x18
	cmp ebp,ebx
	je Block100

 Block93:
	lea eax,[ebp+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block99

 Block94:
	mov eax,dword ptr [ebp]
	cmp eax,ebx
	je Block96

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block96:
	mov eax,dword ptr [ebp+4]
	cmp eax,ebx
	je Block98

 Block97:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block98:
	push ebp
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block99:
	mov dword ptr [esp+0x38],ebx

 Block100:
	cmp word ptr [esp+0x4C],8
	jne Block103

 Block101:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	cmp eax,ebx
	je Block55

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block103:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]
	cmp eax,ebx
	jl Block4

 Block104:
	jmp Block55

 Block105:
	mov ebp,8
	mov byte ptr [esp+0xD4],0x17
	cmp word ptr [esp+0x4C],bp
	jne Block108

 Block106:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebx
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea ecx,[esp+0x4C]
	push ecx
	call edi

 Block109:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0xD8],0x14
	call eax
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xD8],0xA
	call edx
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xD4],9
	cmp eax,ebx
	je Block111

 Block110:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block111:
	cmp word ptr [esp+0x3C],bp
	jne Block114

 Block112:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebx
	je Block19

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block114:
	lea ecx,[esp+0x3C]
	push ecx
	call edi
	cmp eax,ebx
	jge Block19

 Block115:
	jmp Block4

 Block116:
	mov eax,dword ptr [_D_G_RM]
	cmp eax,ebx
	jne Block118

 Block117:
	push 0x80004003
	call _com_issue_error

 Block118:
	mov edx,dword ptr [eax]
	push ebx
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+0x24]
	call eax
	cmp eax,ebx
	jge Block120

 Block119:
	push offset __GUID_57dfe40b_3e20_4dbc_97e8_805a50f381bf
	push esi
	push eax
	call _com_issue_errorex

 Block120:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xD4],8
	jne Block123

 Block121:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebx
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea edx,[esp+0x3C]
	push edx
	call edi

 Block124:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xD4],5
	cmp eax,ebx
	je Block126

 Block125:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block126:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xD8],1
	call edx
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0xD4],bl
	cmp eax,ebx
	je Block128

 Block127:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block128:
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
// ZSort_ZPair_long_long__PairFirstLess_
__SUB(0019C620, __cdecl, 141458, void, ZArray<ZPair<long, long>> &, none) {
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
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	xor ecx,ecx
	push ecx
	push eax
	push edx
	call ZSortHelper<ZPair<long, long>, PairFirstLess>::call_0
	add esp,0x10
	pop esi
	ret

 Block3:
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	lea ecx,[eax+ecx*8-8]
	push ecx
	push eax
	push edx
	call ZSortHelper<ZPair<long, long>, PairFirstLess>::call_0
	add esp,0x10
	pop esi
	ret
}
}
// CItemOptionInfo::LoadItemOptionLevelData
_SUB_EXCEPTION_HANDLER(1A90C0)
__SUB_CLASS_THIS(001A90C0, __thiscall, 107956, CItemOptionInfo, int32_t, long, ZArray<ItemOptionLevelData> &, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A90C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
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
	xor edi,edi
	cmp eax,edi
	sete cl
	mov dword ptr [ebp-4],edi
	test cl,cl
	je Block2

 Block1:
	push offset ZException::THROW_INFO
	lea eax,[ebp-0x14]
	push eax
	mov dword ptr [ebp-0x14],0x80004005
	call _CxxThrowException

 Block2:
	cmp eax,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x18]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x20]
	mov dword ptr [ebp-0x18],edi
	call eax
	cmp eax,edi
	jge Block6

 Block5:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov esi,dword ptr [ebp-0x18]
	cmp esi,edi
	jg Block8

 Block7:
	push offset ZException::THROW_INFO
	lea ecx,[ebp-0x14]
	push ecx
	mov dword ptr [ebp-0x14],0x80004005
	call _CxxThrowException

 Block8:
	mov ebx,dword ptr [ebp+0xC]
	lea edx,[ebp-0x1D]
	push edx
	push esi
	mov ecx,ebx
	call ZArray<ItemOptionLevelData>::_Alloc
	mov eax,dword ptr [ebx]
	mov dword ptr [eax],edi
	mov edi,1
	cmp esi,edi
	jl Block26

 Block9:
	mov dword ptr [ebp-0x1C],0xE0
	jmp Block13

 Block12:
	mov ebx,dword ptr [ebp+0xC]

 Block13:
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
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],1
	test ecx,ecx
	je Block3

 Block14:
	lea eax,[ebp-0x30]
	push eax
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block16

 Block15:
	cmp eax,0x80004002
	jne Block29

 Block16:
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],4
	jne Block19

 Block17:
	mov eax,dword ptr [ebp-0x28]
	xor ecx,ecx
	mov word ptr [ebp-0x30],cx
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[ebp-0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov esi,dword ptr [ebp-0x14]
	test esi,esi
	sete al
	test al,al
	jne Block30

 Block21:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [ebp-0x1C]
	push edi
	push ecx
	lea ebx,[ecx+eax-0xE0]
	mov eax,esp
	mov dword ptr [ebp-0x34],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block23

 Block22:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block23:
	mov ecx,dword ptr [ebp+8]
	push ecx
	mov ecx,ebx
	call ItemOptionLevelData::LoadLevelData
	mov byte ptr [ebp-4],0
	test esi,esi
	je Block25

 Block24:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block25:
	add dword ptr [ebp-0x1C],0xE0
	inc edi
	cmp edi,dword ptr [ebp-0x18]
	jle Block12

 Block26:
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block28

 Block27:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block28:
	mov eax,1
	lea esp,[ebp-0x44]
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

 Block29:
	push eax
	call _com_issue_error

 Block30:
	push offset ZException::THROW_INFO
	lea ecx,[ebp-0x18]
	push ecx
	mov dword ptr [ebp-0x18],0x80004005
	call _CxxThrowException
	int 3
}
}
// CItemInfo::CalcEquipItemQuality
_SUB_EXCEPTION_HANDLER(1C2A30)
__SUB_CLASS_THIS(001C2A30, __thiscall, 130703, CItemInfo, long, NakedParam<ZRef<GW_ItemSlotBase>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1C2A30
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
	mov ecx,dword ptr [esp+0x90]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x18]
	mov dword ptr [esp+0x84],0
	call edx
	cmp eax,1
	jne Block19

 Block1:
	mov ecx,dword ptr [esp+0x90]
	add ecx,0xC
	call TSecType<long>::GetData
	push eax
	mov ecx,esi
	call CItemInfo::IsCashItem_1
	test eax,eax
	jne Block19

 Block2:
	mov ecx,dword ptr [esp+0x90]
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x14F8B589
	imul ecx
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x13
	je Block19

 Block3:
	mov edi,dword ptr [esp+0x90]
	mov dword ptr [esp+0x78],edi
	test edi,edi
	je Block5

 Block4:
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	lea ecx,[edi+0xC]
	mov byte ptr [esp+0x84],1
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	mov esi,eax
	test esi,esi
	jne Block7

 Block6:
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0x84],0
	call ZRef<GW_ItemSlotEquip>::~ZRef<GW_ItemSlotEquip>
	lea ecx,[esp+0x8C]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	jmp Block23

 Block7:
	mov edx,dword ptr [edi+0x59]
	push edx
	lea eax,[edi+0x55]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esi+0xB4]
	push ecx
	lea edx,[esi+0xB0]
	push edx
	movzx ebp,ax
	call _ZtlSecureFuseHelper<short>::call
	movzx ebx,ax
	mov eax,dword ptr [edi+0x61]
	push eax
	lea ecx,[edi+0x5D]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [esi+0xBC]
	push eax
	lea ecx,[esi+0xB8]
	push ecx
	mov dword ptr [esp+0x90],edx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [edi+0x69]
	push eax
	lea ecx,[edi+0x65]
	push ecx
	mov dword ptr [esp+0x70],edx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [esi+0xC4]
	push eax
	lea ecx,[esi+0xC0]
	push ecx
	mov dword ptr [esp+0x9C],edx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [edi+0x71]
	push eax
	lea ecx,[edi+0x6D]
	push ecx
	mov dword ptr [esp+0x7C],edx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [esi+0xCC]
	push eax
	lea ecx,[esi+0xC8]
	push ecx
	mov dword ptr [esp+0xA8],edx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [edi+0x79]
	add esp,0x40
	push eax
	lea ecx,[edi+0x75]
	push ecx
	mov dword ptr [esp+0x48],edx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [esi+0xD4]
	push eax
	lea ecx,[esi+0xD0]
	push ecx
	mov dword ptr [esp+0x30],edx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [edi+0x81]
	push eax
	lea ecx,[edi+0x7D]
	push ecx
	mov dword ptr [esp+0x34],edx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [esi+0xDC]
	push eax
	lea ecx,[esi+0xD8]
	push ecx
	mov dword ptr [esp+0x38],edx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [edi+0x89]
	push eax
	lea ecx,[edi+0x85]
	push ecx
	mov dword ptr [esp+0x3C],edx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [esi+0xE4]
	push eax
	lea ecx,[esi+0xE0]
	push ecx
	mov dword ptr [esp+0x94],edx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [edi+0x91]
	push eax
	lea ecx,[edi+0x8D]
	push ecx
	mov dword ptr [esp+0x74],edx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [esi+0xEC]
	push eax
	lea ecx,[esi+0xE8]
	push ecx
	mov dword ptr [esp+0xA0],edx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [edi+0x99]
	add esp,0x40
	push eax
	lea ecx,[edi+0x95]
	push ecx
	mov dword ptr [esp+0x40],edx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [esi+0xF4]
	push eax
	lea ecx,[esi+0xF0]
	push ecx
	mov dword ptr [esp+0x6C],edx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [edi+0xA1]
	push eax
	lea ecx,[edi+0x9D]
	push ecx
	mov dword ptr [esp+0x4C],edx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [esi+0xFC]
	push eax
	lea ecx,[esi+0xF8]
	push ecx
	mov dword ptr [esp+0x78],edx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [edi+0xA9]
	push eax
	lea ecx,[edi+0xA5]
	push ecx
	mov dword ptr [esp+0x58],edx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [esi+0x104]
	push eax
	lea ecx,[esi+0x100]
	push ecx
	mov dword ptr [esp+0x84],edx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [edi+0xB1]
	push eax
	lea ecx,[edi+0xAD]
	push ecx
	mov dword ptr [esp+0x64],edx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [esi+0x10C]
	mov dword ptr [esp+0x88],edx
	push eax
	lea ecx,[esi+0x108]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [edi+0xC1]
	add esp,0x40
	push eax
	lea ecx,[edi+0xBD]
	push ecx
	mov dword ptr [esp+0x30],edx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [esi+0x11C]
	push eax
	lea ecx,[esi+0x118]
	push ecx
	mov dword ptr [esp+0x5C],edx
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [edi+0xC9]
	push eax
	add edi,0xC5
	push edi
	mov dword ptr [esp+0x3C],edx
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esi+0x124]
	push ecx
	add esi,0x120
	push esi
	movzx edi,ax
	call _ZtlSecureFuseHelper<short>::call
	movsx edx,word ptr [esp+0x34]
	movsx ecx,word ptr [esp+0x38]
	movsx esi,ax
	sub ecx,edx
	mov eax,0x66666667
	imul ecx
	movsx ecx,word ptr [esp+0x40]
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	movsx edx,word ptr [esp+0x3C]
	mov dword ptr [esp+0x40],eax
	sub ecx,edx
	mov eax,0x66666667
	imul ecx
	mov ecx,dword ptr [esp+0x40]
	sar edx,2
	add ecx,edx
	mov eax,edx
	movsx edx,word ptr [esp+0x48]
	shr eax,0x1F
	add eax,ecx
	movsx ecx,word ptr [esp+0x44]
	sub eax,ecx
	movsx ecx,word ptr [esp+0x4C]
	sub eax,edx
	movsx edx,word ptr [esp+0x50]
	sub eax,ecx
	movsx ecx,word ptr [esp+0x54]
	sub eax,edx
	movsx edx,word ptr [esp+0x58]
	sub eax,ecx
	movsx ecx,word ptr [esp+0x5C]
	sub eax,edx
	movsx edx,word ptr [esp+0x60]
	sub eax,ecx
	movsx ecx,word ptr [esp+0x64]
	sub eax,edx
	movsx edx,word ptr [esp+0x68]
	sub eax,ecx
	sub eax,edx
	movsx ecx,bx
	sub eax,ecx
	movsx ecx,word ptr [esp+0x6C]
	movsx edx,di
	add eax,edx
	add esp,0x20
	add eax,ecx
	movsx edx,word ptr [esp+0x50]
	movsx ecx,word ptr [esp+0x54]
	add eax,edx
	movsx edx,word ptr [esp+0x58]
	add eax,ecx
	movsx ecx,word ptr [esp+0x5C]
	add eax,edx
	movsx edx,word ptr [esp+0x60]
	add eax,ecx
	movsx ecx,word ptr [esp+0x64]
	add eax,edx
	movsx edx,word ptr [esp+0x68]
	add eax,ecx
	movsx ecx,word ptr [esp+0x6C]
	add eax,edx
	movsx edx,word ptr [esp+0x70]
	add eax,ecx
	movsx ecx,bp
	add eax,edx
	add eax,ecx
	sub eax,esi
	jns Block9

 Block8:
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0x84],0
	call ZRef<GW_ItemSlotEquip>::~ZRef<GW_ItemSlotEquip>
	lea ecx,[esp+0x8C]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	or eax,0xFFFFFFFF
	jmp Block24

 Block9:
	cmp eax,6
	jl Block6

 Block10:
	cmp eax,0x17
	mov byte ptr [esp+0x84],0
	lea ecx,[esp+0x74]
	jge Block12

 Block11:
	call ZRef<GW_ItemSlotEquip>::~ZRef<GW_ItemSlotEquip>
	lea ecx,[esp+0x8C]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	mov eax,1
	jmp Block24

 Block12:
	cmp eax,0x28
	jge Block14

 Block13:
	call ZRef<GW_ItemSlotEquip>::~ZRef<GW_ItemSlotEquip>
	lea ecx,[esp+0x8C]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	mov eax,2
	jmp Block24

 Block14:
	cmp eax,0x37
	jge Block16

 Block15:
	call ZRef<GW_ItemSlotEquip>::~ZRef<GW_ItemSlotEquip>
	lea ecx,[esp+0x8C]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	mov eax,3
	jmp Block24

 Block16:
	cmp eax,0x46
	jge Block18

 Block17:
	call ZRef<GW_ItemSlotEquip>::~ZRef<GW_ItemSlotEquip>
	lea ecx,[esp+0x8C]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	mov eax,4
	jmp Block24

 Block18:
	call ZRef<GW_ItemSlotEquip>::~ZRef<GW_ItemSlotEquip>
	lea ecx,[esp+0x8C]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	mov eax,5
	jmp Block24

 Block19:
	mov eax,dword ptr [esp+0x90]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	test eax,eax
	je Block23

 Block20:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block23

 Block21:
	mov edx,dword ptr [esp+0x90]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x90]
	test ecx,ecx
	je Block23

 Block22:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block23:
	xor eax,eax

 Block24:
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
// CItemInfo::LoadItemSkill
_SUB_EXCEPTION_HANDLER(1AA3C0)
__SUB_CLASS_THIS(001AA3C0, __thiscall, 130691, CItemInfo, void, NakedParam<_x_com_ptr<IWzProperty>>, ZList<ZRef<CItemInfo::ItemSkill>> &) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1AA3C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x5C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ebp+8]
	xor ebx,ebx
	cmp eax,ebx
	sete cl
	mov dword ptr [ebp-4],ebx
	test cl,cl
	je Block3

 Block1:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,ebx
	je Block43

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block43

 Block3:
	push ebx
	push ebx
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push offset _S_ITEMSKILL
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],1
	cmp ecx,ebx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea eax,[ebp-0x58]
	push eax
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x1C]
	mov dword ptr [ebp-0x1C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block8

 Block6:
	cmp eax,0x80004002
	je Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	cmp word ptr [ebp-0x58],8
	mov byte ptr [ebp-4],4
	jne Block11

 Block9:
	mov eax,dword ptr [ebp-0x50]
	xor ecx,ecx
	mov word ptr [ebp-0x58],cx
	cmp eax,ebx
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[ebp-0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov esi,dword ptr [ebp-0x1C]
	cmp esi,ebx
	sete al
	test al,al
	je Block15

 Block13:
	mov byte ptr [ebp-4],0
	cmp esi,ebx
	je Block41

 Block14:
	jmp Block40

 Block15:
	xor edi,edi
	mov dword ptr [ebp-0x18],edi
	cmp esi,ebx
	je Block4

 Block16:
	lea esp,[esp]

 Block17:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp-0x14]
	push edx
	push esi
	mov dword ptr [ebp-0x14],ebx
	call eax
	cmp eax,ebx
	jge Block19

 Block18:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block19:
	cmp edi,dword ptr [ebp-0x14]
	jae Block39

 Block20:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push ebx
	push ebx
	push 0xA
	push eax
	push edi
	call _itoa
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	lea ecx,[ebp-0x38]
	push ecx
	mov byte ptr [ebp-4],5
	mov ecx,esi
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block22

 Block21:
	cmp eax,0x80004002
	jne Block7

 Block22:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],8
	jne Block25

 Block23:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	cmp eax,ebx
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[ebp-0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	push ebx
	call ZRefCounted_AllocHelper<ZRefCountedDummy<CItemInfo::ItemSkill>>::call
	lea esi,[eax+0x10]
	add esp,4
	mov dword ptr [eax+4],1
	mov dword ptr [ebp-0x24],esi
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x20],esp
	push 0x965
	push ecx
	mov byte ptr [ebp-4],9
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0xA
	cmp edi,ebx
	je Block4

 Block27:
	lea edx,[ebp-0x48]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB
	call get_int32
	add esp,8
	mov dword ptr [esi],eax
	cmp word ptr [ebp-0x48],8
	mov byte ptr [ebp-4],9
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [ebp-0x48],ax
	mov eax,dword ptr [ebp-0x40]
	cmp eax,ebx
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[ebp-0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x20],esp
	push 0x677
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x68]
	mov byte ptr [ebp-4],0xC
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	add esp,8
	mov dword ptr [esi+4],eax
	cmp word ptr [ebp-0x68],8
	mov byte ptr [ebp-4],9
	jne Block34

 Block32:
	mov eax,dword ptr [ebp-0x60]
	xor ecx,ecx
	mov word ptr [ebp-0x68],cx
	cmp eax,ebx
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[ebp-0x68]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov ecx,dword ptr [ebp+0xC]
	call ZList<ZRef<CItemInfo::ItemSkill>>::AddTail_
	lea ecx,[ebp-0x28]
	push ecx
	mov ecx,eax
	call ZRef<CItemInfo::ItemSkill>::op_assign_copy
	add esi,0xFFFFFFF0
	lea ebx,[esi+4]
	push ebx
	mov byte ptr [ebp-4],8
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block38

 Block36:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block38

 Block37:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block38:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [ebp-0x24],0
	mov byte ptr [ebp-4],4
	call edx
	inc dword ptr [ebp-0x18]
	mov esi,dword ptr [ebp-0x1C]
	mov edi,dword ptr [ebp-0x18]
	xor ebx,ebx
	jmp Block17

 Block39:
	mov byte ptr [ebp-4],0

 Block40:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block41:
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,ebx
	je Block43

 Block42:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block43:
	lea esp,[ebp-0x78]
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
// CItemInfo::GetSetItemArray
__SUB_CLASS_THIS(0019DDA0, __thiscall, 130763, CItemInfo, void, ZArray<long> &) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [ecx+0x21C]
	mov dword ptr [esp],ecx
	test ecx,ecx
	je Block10

 Block1:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push ebp
	push esi
	push edi

 Block2:
	lea eax,[esp+0x10]
	push eax
	call ZList<CItemInfo::SET_EFFECT>::GetNext
	add esp,4
	lea edi,[eax+0x10]
	mov ebp,0x3C
	jmp Block4

 Block4:
	cmp dword ptr [edi-4],0
	je Block7

 Block5:
	mov eax,dword ptr [edi]
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block7

 Block6:
	lea ecx,[esp+0x18]
	push ecx
	call ZList<long>::GetNext
	add esp,4
	push 0xFFFFFFFF
	mov ecx,ebx
	mov esi,eax
	call ZArray<long>::InsertBefore
	cmp dword ptr [esp+0x18],0
	mov edx,dword ptr [esi]
	mov dword ptr [eax],edx
	jne Block6

 Block7:
	add edi,0x14
	sub ebp,1
	jne Block4

 Block8:
	cmp dword ptr [esp+0x10],ebp
	jne Block2

 Block9:
	pop edi
	pop esi
	pop ebp
	pop ebx

 Block10:
	pop ecx
	ret 4
}
}
// CItemInfo::BRIDLEITEM::~BRIDLEITEM
_SUB_EXCEPTION_HANDLER(19CF80)
__SUB_CLASS_THIS0(0019CF80, __thiscall, 130841, CItemInfo::BRIDLEITEM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_19CF80
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
	mov eax,dword ptr [esi+0x38]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [esi+0x34]
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
// CItemInfo::GetPortableChairRecoveryRate
_SUB_EXCEPTION_HANDLER(1AC750)
__SUB_CLASS_THIS(001AC750, __thiscall, 130684, CItemInfo, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1AC750
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
	mov eax,dword ptr [esp+0x40]
	xor ebx,ebx
	cmp eax,ebx
	je Block4

 Block1:
	push eax
	lea eax,[esp+0x44]
	push eax
	call CItemInfo::GetItemInfo
	mov esi,dword ptr [esp+0x40]
	cmp esi,ebx
	sete al
	mov dword ptr [esp+0x38],ebx
	cmp al,bl
	je Block5

 Block2:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp esi,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

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
	cmp dword ptr [esp+0x44],ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	je Block11

 Block6:
	push 0x6F4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x40],1
	cmp esi,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],2
	call get_int32
	add esp,8
	cmp word ptr [esp+0x10],8
	mov edi,eax
	mov byte ptr [esp+0x38],bl
	jne Block10

 Block9:
	mov eax,dword ptr [esp+0x18]
	xor edx,edx
	mov word ptr [esp+0x10],dx
	jmp Block15

 Block10:
	lea eax,[esp+0x10]
	jmp Block18

 Block11:
	push 0x6F5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x40],3
	cmp esi,ebx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],4
	call get_int32
	add esp,8
	cmp word ptr [esp+0x20],8
	mov edi,eax
	mov byte ptr [esp+0x38],bl
	jne Block17

 Block14:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx

 Block15:
	cmp eax,ebx
	je Block19

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block17:
	lea eax,[esp+0x20]

 Block18:
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call edx
	mov eax,edi
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
// CItemInfo::RegisterIncLevelItem
_SUB_EXCEPTION_HANDLER(1A0F30)
__SUB_CLASS_THIS(001A0F30, __thiscall, 130738, CItemInfo, void, long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A0F30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],ecx
	xor edi,edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x3D5
	push eax
	mov dword ptr [esp+0x60],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x64]
	mov byte ptr [esp+0x58],1
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x5C],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x54],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x14],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x4C],4
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,edi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x20],edi
	call ZRef<CItemInfo::INCLEVELITEM>::_Alloc
	mov edx,dword ptr [esp+0x54]
	mov esi,dword ptr [esp+0x20]
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x14CD
	push eax
	mov byte ptr [esp+0x5C],5
	mov dword ptr [esi],edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [esp+0x18]
	mov byte ptr [esp+0x54],6
	cmp ebp,edi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x58],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x54],7
	call get_int32
	add esp,8
	mov dword ptr [esi+4],eax
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x4C],5
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	cmp eax,edi
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block15:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	lea edx,[esp+0x58]
	push edx
	add ecx,0x188
	call ZMap<long, ZRef<CItemInfo::INCLEVELITEM>, long>::Insert
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x50],4
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block18

 Block16:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block18

 Block17:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block18:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0x50],0
	call ecx
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test eax,eax
	je Block20

 Block19:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block20:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x40
	ret 8
}
}
// CItemInfo::RegisterExtendExpireDateItem
_SUB_EXCEPTION_HANDLER(1A1310)
__SUB_CLASS_THIS(001A1310, __thiscall, 130738, CItemInfo, void, long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A1310
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
	mov dword ptr [esp+0x18],ecx
	xor ebp,ebp
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x3D5
	push eax
	mov dword ptr [esp+0x60],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x64]
	mov byte ptr [esp+0x58],1
	cmp ecx,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x5C],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x54],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov edi,8
	mov byte ptr [esp+0x4C],4
	cmp word ptr [esp+0x24],di
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x20],ebp
	call ZRef<CItemInfo::EXTENDEXPIREDATEITEM>::_Alloc
	mov edx,dword ptr [esp+0x54]
	mov esi,dword ptr [esp+0x20]
	push ebp
	push ecx
	mov dword ptr [esp+0x5C],esp
	mov ecx,esp
	mov bl,5
	push offset _S_ADDTIME
	mov byte ptr [esp+0x58],bl
	mov dword ptr [esi],edx
	call _xbstr_t::_ctor_0
	mov ebp,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x54],6
	test ebp,ebp
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[esp+0x3C]
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x58],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x54],7
	call get_int32
	add esp,8
	mov dword ptr [esi+4],eax
	mov byte ptr [esp+0x4C],bl
	cmp word ptr [esp+0x34],di
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	push 0
	push ecx
	mov dword ptr [esp+0x5C],esp
	mov ecx,esp
	push offset _S_MAXDAYS
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x3C]
	mov byte ptr [esp+0x54],8
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x58],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x54],9
	call get_int32
	add esp,8
	mov dword ptr [esi+8],eax
	mov byte ptr [esp+0x4C],bl
	cmp word ptr [esp+0x34],di
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov ecx,dword ptr [esp+0x18]
	lea eax,[esp+0x1C]
	push eax
	push esi
	add ecx,0xFC
	call ZMap<long, ZRef<CItemInfo::EXTENDEXPIREDATEITEM>, long>::Insert
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x50],4
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block22

 Block20:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block22

 Block21:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block22:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0x50],0
	call edx
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 8
}
}
// CItemInfo::LoadNPTExceptionItem
_SUB_EXCEPTION_HANDLER(1A1B20)
__SUB_CLASS_THIS0(001A1B20, __thiscall, 130678, CItemInfo, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A1B20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x20],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x30]
	push eax
	call esi
	lea ecx,[ebp-0x30]
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
	lea edx,[ebp-0x40]
	push edx
	mov dword ptr [ebp-4],edi
	call esi
	lea eax,[ebp-0x40]
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
	lea edx,[ebp-0x40]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x18],esp
	push 0x1266
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x50]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x1C]
	mov dword ptr [ebp-0x1C],edi
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
	mov esi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x50],si
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x40],si
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x38]
	xor ecx,ecx
	mov word ptr [ebp-0x40],cx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov bl,7
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x30],si
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp-0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov esi,dword ptr [ebp-0x1C]
	cmp esi,edi
	sete al
	test al,al
	je Block24

 Block22:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp esi,edi
	je Block40

 Block23:
	jmp Block39

 Block24:
	cmp esi,edi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp-0x14]
	push edx
	push esi
	mov dword ptr [ebp-0x14],edi
	call eax
	cmp eax,edi
	jge Block28

 Block27:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block28:
	cmp dword ptr [ebp-0x14],edi
	jne Block30

 Block29:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	jmp Block40

 Block30:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp-0x14]
	push ecx
	push esi
	mov dword ptr [ebp-0x14],0
	call edx
	test eax,eax
	jge Block32

 Block31:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block32:
	cmp edi,dword ptr [ebp-0x14]
	jae Block38

 Block33:
	mov eax,0x20
	mov dword ptr [ebp-0x14],1
	call __chkstk
	mov eax,esp
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x60]
	mov byte ptr [ebp-4],8
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],9
	call get_int32
	add esp,8
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,dword ptr [ebp-0x20]
	lea edx,[ebp-0x18]
	push edx
	add ecx,0x1E0
	mov dword ptr [ebp-0x18],eax
	call ZMap<long, long, long>::Insert
	cmp word ptr [ebp-0x60],8
	mov byte ptr [ebp-4],bl
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc edi
	jmp Block30

 Block36:
	lea ecx,[ebp-0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	inc edi
	jmp Block30

 Block38:
	mov dword ptr [ebp-4],0xFFFFFFFF

 Block39:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block40:
	mov eax,1
	lea esp,[ebp-0x70]
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
// CItemInfo::RegisterSetItemEffect
_SUB_EXCEPTION_HANDLER(1ACE40)
__SUB_CLASS_THIS0(001ACE40, __thiscall, 78614, CItemInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1ACE40
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x63C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x650]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x70],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x94]
	push eax
	call esi
	lea ecx,[esp+0x94]
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
	lea edx,[esp+0x84]
	push edx
	mov dword ptr [esp+0x65C],ebx
	call esi
	lea eax,[esp+0x84]
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
	lea ecx,[esp+0x9C]
	push ecx
	lea edx,[esp+0x90]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	push 0x961
	push eax
	mov byte ptr [esp+0x674],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x66C],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x128]
	push ecx
	mov byte ptr [esp+0x670],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x660],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],ebx
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
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	mov byte ptr [esp+0x658],5
	cmp word ptr [esp+0x114],bp
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x11C]
	xor edx,edx
	mov word ptr [esp+0x114],dx
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x114]
	push eax
	call edi

 Block13:
	mov byte ptr [esp+0x658],6
	cmp word ptr [esp+0x84],bp
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x8C]
	xor ecx,ecx
	mov word ptr [esp+0x84],cx
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x84]
	push edx
	call edi

 Block17:
	mov byte ptr [esp+0x658],7
	cmp word ptr [esp+0x94],bp
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x94],ax
	mov eax,dword ptr [esp+0x9C]
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x94]
	push ecx
	call edi

 Block21:
	lea edx,[esp+0x48]
	push edx
	call esi
	mov ebp,dword ptr [esp+0x20]
	mov byte ptr [esp+0x658],8
	cmp ebp,ebx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea eax,[esp+0x74]
	push eax
	mov ecx,ebp
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x65C],9
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	lea ecx,[esp+0x20]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x658],0xB
	cmp eax,ebx
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	mov edi,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x6C],ebx
	cmp edi,ebx
	je Block5

 Block31:
	jmp Block34

 Block33:
	mov ebp,dword ptr [esp+0x20]
	mov edi,dword ptr [esp+0x1C]

 Block34:
	mov eax,dword ptr [edi]
	mov eax,dword ptr [eax+0xC]
	lea ecx,[esp+0x6C]
	push ecx
	lea edx,[esp+0x4C]
	push edx
	push 1
	push edi
	call eax
	test eax,eax
	jne Block185

 Block35:
	lea ecx,[esp+0x48]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	call DetachBSTR
	add esp,8
	mov ebx,dword ptr [esp+0x28]
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block37

 Block36:
	lea eax,[ebx+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block37:
	lea ecx,[esp+0x100]
	push ecx
	mov byte ptr [esp+0x668],0xD
	mov ecx,ebp
	mov byte ptr [esp+0x668],0xC
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x660],0xE
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x44],esi
	test eax,eax
	je Block40

 Block38:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x68]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x68]
	mov esi,ecx
	mov dword ptr [esp+0x44],esi
	test eax,eax
	jge Block40

 Block39:
	cmp eax,0x80004002
	jne Block1

 Block40:
	cmp word ptr [esp+0xF4],8
	mov byte ptr [esp+0x658],0x10
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0xFC]
	xor edx,edx
	mov word ptr [esp+0xF4],dx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea eax,[esp+0xF4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block44:
	test esi,esi
	sete al
	test al,al
	jne Block181

 Block45:
	lea ecx,[esp+0x124]
	call CItemInfo::SET_EFFECT::_ctor_default
	xor edi,edi
	push edi
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_CASH
	mov byte ptr [esp+0x664],0x11
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x660],0x12
	cmp esi,edi
	je Block5

 Block46:
	lea ecx,[esp+0xDC]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x664],0x11
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x660],0x13
	call get_int32
	mov ebx,8
	add esp,8
	mov dword ptr [esp+0x124],eax
	mov byte ptr [esp+0x658],0x11
	cmp word ptr [esp+0xD4],bx
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0xDC]
	xor edx,edx
	mov word ptr [esp+0xD4],dx
	cmp eax,edi
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea eax,[esp+0xD4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block50:
	cmp dword ptr [esp+0x124],edi
	jne Block57

 Block51:
	push edi
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_MULTIPET__1
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0xAC]
	push ecx
	mov byte ptr [esp+0x664],0x14
	mov ecx,esi
	mov byte ptr [esp+0x664],0x11
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x660],0x15
	call get_int32
	add esp,8
	mov dword ptr [esp+0x124],eax
	mov byte ptr [esp+0x658],0x11
	cmp word ptr [esp+0xA4],bx
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0xAC]
	xor edx,edx
	mov word ptr [esp+0xA4],dx
	cmp eax,edi
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea eax,[esp+0xA4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block55:
	cmp dword ptr [esp+0x124],edi
	je Block57

 Block56:
	mov dword ptr [esp+0x124],2

 Block57:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x3D5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0xC0]
	mov byte ptr [esp+0x664],0x16
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x668],0x11
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x660],0x17
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x24],esi
	cmp eax,edi
	je Block60

 Block58:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x80]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x80]
	cmp eax,edi
	mov esi,ecx
	mov dword ptr [esp+0x24],esi
	jge Block60

 Block59:
	cmp eax,0x80004002
	jne Block1

 Block60:
	mov byte ptr [esp+0x658],0x19
	cmp word ptr [esp+0xB4],bx
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0xBC]
	xor edx,edx
	mov word ptr [esp+0xB4],dx
	cmp eax,edi
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea eax,[esp+0xB4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block64:
	cmp esi,edi
	je Block5

 Block65:
	lea ecx,[esp+0x7C]
	push ecx
	mov ecx,esi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x65C],0x1A
	mov dword ptr [esp+0x34],edi
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block67

 Block66:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block67:
	lea ecx,[esp+0x34]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block69

 Block68:
	cmp eax,0x80004002
	jne Block1

 Block69:
	mov eax,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x658],0x1C
	cmp eax,edi
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block71:
	mov dword ptr [esp+0x64],edi
	lea ecx,[ecx]

 Block72:
	mov eax,dword ptr [esp+0x30]
	xor ebp,ebp
	cmp eax,ebp
	je Block5

 Block73:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x64]
	push edx
	lea edx,[esp+0x4C]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block172

 Block74:
	lea ecx,[esp+0x48]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	call DetachBSTR
	add esp,8
	push offset _S_MULTIPET
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0x65C],0x1D
	mov dword ptr [esp+0x40],ebp
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [esp+0x18]
	mov esi,dword ptr [esp+0x40]
	cmp edi,esi
	jne Block76

 Block75:
	xor eax,eax
	jmp Block89

 Block76:
	cmp edi,ebp
	jne Block82

 Block77:
	cmp esi,ebp
	je Block80

 Block78:
	mov eax,dword ptr [esi]
	cmp eax,ebp
	je Block80

 Block79:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,ebp
	jne Block81

 Block80:
	xor eax,eax
	jmp Block89

 Block81:
	or eax,0xFFFFFFFF
	jmp Block89

 Block82:
	cmp esi,ebp
	jne Block88

 Block83:
	cmp dword ptr [edi],ebp
	je Block86

 Block84:
	mov eax,dword ptr [edi]
	cmp eax,ebp
	je Block86

 Block85:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,ebp
	jne Block87

 Block86:
	xor eax,eax
	jmp Block89

 Block87:
	mov eax,1
	jmp Block89

 Block88:
	push esi
	mov ecx,edi
	call _xbstr_t::Data_t::Compare

 Block89:
	cmp eax,ebp
	sete bl
	cmp esi,ebp
	je Block97

 Block90:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebp
	jne Block96

 Block91:
	mov eax,dword ptr [esi]
	cmp eax,ebp
	je Block93

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block93:
	mov eax,dword ptr [esi+4]
	cmp eax,ebp
	je Block95

 Block94:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block95:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block96:
	mov dword ptr [esp+0x40],ebp

 Block97:
	test bl,bl
	je Block99

 Block98:
	mov dword ptr [esp+0x3C],1

 Block99:
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],edi
	cmp edi,ebp
	je Block101

 Block100:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block101:
	mov esi,dword ptr [esp+0x30]
	lea edx,[esp+0xD0]
	mov byte ptr [esp+0x664],0x1E
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x668],0x1D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x660],0x1F
	call Ztl_variant_t::GetUnknown
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	test eax,eax
	je Block104

 Block102:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x58]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x58]
	mov ebp,ecx
	mov dword ptr [esp+0x14],ebp
	test eax,eax
	jge Block104

 Block103:
	cmp eax,0x80004002
	jne Block1

 Block104:
	cmp word ptr [esp+0xC4],8
	mov byte ptr [esp+0x658],0x21
	jne Block107

 Block105:
	mov eax,dword ptr [esp+0xCC]
	xor edx,edx
	mov word ptr [esp+0xC4],dx
	test eax,eax
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea eax,[esp+0xC4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block108:
	test ebp,ebp
	sete al
	test al,al
	jne Block162

 Block109:
	cmp dword ptr [esp+0x3C],0
	je Block111

 Block110:
	xor ebx,ebx
	jmp Block115

 Block111:
	test edi,edi
	je Block113

 Block112:
	mov eax,dword ptr [edi]
	jmp Block114

 Block113:
	xor eax,eax

 Block114:
	push eax
	call __wtoi
	add esp,4
	mov ebx,eax

 Block115:
	test ebp,ebp
	je Block5

 Block116:
	lea ecx,[esp+0x60]
	push ecx
	mov ecx,ebp
	call IWzProperty::Get_NewEnum
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x658],0x22
	mov dword ptr [esp+0x34],0
	test esi,esi
	je Block118

 Block117:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax
	test esi,esi

 Block118:
	sete al
	test al,al
	sete al
	test al,al
	je Block121

 Block119:
	test esi,esi
	je Block5

 Block120:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx]
	lea edx,[esp+0x5C]
	push edx
	push offset __GUID_00020404_0000_0000_c000_000000000046
	push esi
	call eax
	xor ecx,ecx
	mov edi,eax
	test edi,edi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x34],ecx
	jmp Block122

 Block121:
	mov edi,0x80004002

 Block122:
	test esi,esi
	je Block124

 Block123:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block124:
	test edi,edi
	jge Block126

 Block125:
	cmp edi,0x80004002
	jne Block188

 Block126:
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x658],0x24
	test eax,eax
	je Block128

 Block127:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block128:
	mov dword ptr [esp+0x38],0
	jmp Block130

 Block130:
	cmp dword ptr [esp+0x34],0
	je Block5

 Block131:
	mov esi,dword ptr [esp+0x34]
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+0xC]
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x4C]
	push edx
	push 1
	push esi
	call eax
	test eax,eax
	jne Block154

 Block132:
	lea ecx,[esp+0x48]
	push ecx
	lea edx,[esp+0x30]
	push edx
	call DetachBSTR
	add esp,8
	cmp dword ptr [esp+0x3C],0
	mov edi,dword ptr [esp+0x2C]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x80],esp
	mov dword ptr [eax],edi
	je Block138

 Block133:
	test edi,edi
	je Block135

 Block134:
	lea eax,[edi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block135:
	lea ecx,[esp+0xEC]
	push ecx
	mov byte ptr [esp+0x664],0x26
	mov ecx,ebp
	mov byte ptr [esp+0x664],0x25
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x660],0x27
	call get_int32
	add esp,8
	lea ecx,[esp+0x63C]
	mov esi,eax
	call ZList<long>::AddTail_
	mov dword ptr [eax],esi
	cmp word ptr [esp+0xE4],8
	mov byte ptr [esp+0x658],0x25
	jne Block137

 Block136:
	mov eax,dword ptr [esp+0xEC]
	xor edx,edx
	mov word ptr [esp+0xE4],dx
	jmp Block142

 Block137:
	lea eax,[esp+0xE4]
	push eax
	jmp Block145

 Block138:
	test edi,edi
	je Block140

 Block139:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block140:
	lea edx,[esp+0x10C]
	mov byte ptr [esp+0x660],0x28
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x664],0x25
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x660],0x29
	call get_int32
	lea ecx,[ebx+ebx*4]
	add esp,8
	lea ecx,[esp+ecx*4+0x128]
	mov esi,eax
	call ZList<long>::AddTail_
	mov dword ptr [eax],esi
	cmp word ptr [esp+0x104],8
	mov byte ptr [esp+0x658],0x25
	jne Block144

 Block141:
	xor eax,eax
	mov word ptr [esp+0x104],ax
	mov eax,dword ptr [esp+0x10C]

 Block142:
	test eax,eax
	je Block146

 Block143:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block146

 Block144:
	lea ecx,[esp+0x104]
	push ecx

 Block145:
	call dword ptr [ZImports::_VariantClear]

 Block146:
	mov byte ptr [esp+0x658],0x24
	test edi,edi
	je Block130

 Block147:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block153

 Block148:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block150

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block150:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block152

 Block151:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block152:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block153:
	mov dword ptr [esp+0x2C],0
	jmp Block130

 Block154:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0x65C],0x21
	call ecx
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	mov byte ptr [esp+0x65C],0x1D
	call eax
	cmp dword ptr [esp+0x18],0
	mov byte ptr [esp+0x658],0x1C
	je Block72

 Block155:
	mov esi,dword ptr [esp+0x18]
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block161

 Block156:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block158

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block158:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block160

 Block159:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block160:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block161:
	mov dword ptr [esp+0x18],0
	jmp Block72

 Block162:
	mov byte ptr [esp+0x658],0x1D
	test ebp,ebp
	je Block164

 Block163:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block164:
	mov byte ptr [esp+0x658],0x1C
	test edi,edi
	je Block173

 Block165:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block171

 Block166:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block168

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block168:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block170

 Block169:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block170:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block171:
	mov dword ptr [esp+0x18],0
	jmp Block173

 Block172:
	mov esi,dword ptr [esp+0x24]

 Block173:
	mov ecx,dword ptr [esp+0x70]
	add ecx,0x210
	call ZList<CItemInfo::SET_EFFECT>::AddTail_
	lea edx,[esp+0x124]
	push edx
	mov ecx,eax
	call CItemInfo::SET_EFFECT::operator=
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x65C],0x19
	call edx
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0x65C],0x11
	call ecx
	lea ecx,[esp+0x124]
	mov byte ptr [esp+0x658],0x10
	call CItemInfo::SET_EFFECT::~SET_EFFECT
	mov eax,dword ptr [esp+0x44]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0x65C],0xC
	call eax
	mov esi,dword ptr [esp+0x28]
	mov byte ptr [esp+0x658],0xB
	test esi,esi
	je Block33

 Block174:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block180

 Block175:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block177

 Block176:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block177:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block179

 Block178:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block179:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block180:
	mov dword ptr [esp+0x28],0
	jmp Block33

 Block181:
	mov byte ptr [esp+0x658],0xC
	test esi,esi
	je Block183

 Block182:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block183:
	test ebx,ebx
	je Block185

 Block184:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release

 Block185:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [esp+0x65C],8
	call edx
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x658],7
	jne Block189

 Block186:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block190

 Block187:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block190

 Block188:
	push edi
	call _com_issue_error

 Block189:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block190:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	mov dword ptr [esp+0x65C],0xFFFFFFFF
	call eax
	mov ecx,dword ptr [esp+0x650]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x648
	ret
}
}
// CItemInfo::GetMapString
_SUB_EXCEPTION_HANDLER(1A9CA0)
__SUB_CLASS_THIS(001A9CA0, __thiscall, 130714, CItemInfo, ZXString<char>*, ZXString<char>*, unsigned long, const char *) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A9CA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov dword ptr [ebp-0x28],ecx
	xor edi,edi
	mov dword ptr [ebp-0x24],edi
	mov dword ptr [ebp-0x1C],edi
	lea eax,[ebp-0x20]
	push 0x9EC
	push eax
	mov dword ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],2
	cmp eax,edi
	je Block2

 Block1:
	mov esi,dword ptr [eax]
	jmp Block3

 Block2:
	xor esi,esi

 Block3:
	mov ecx,dword ptr [ebp+0xC]
	mov eax,0x55E63B89
	mul ecx
	push ecx
	shr edx,0x19
	push edx
	lea ecx,[ebp-0x1C]
	push esi
	push ecx
	call ZXString16::Format
	mov ecx,dword ptr [ebp-0x20]
	add esp,0x10
	cmp ecx,edi
	je Block5

 Block4:
	call _xbstr_t::Data_t::Release

 Block5:
	mov dword ptr [ebp-0x18],edi
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x48]
	push edx
	mov byte ptr [ebp-4],4
	call esi
	lea eax,[ebp-0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea ecx,[ebp-0x38]
	push ecx
	mov byte ptr [ebp-4],5
	call esi
	lea edx,[ebp-0x38]
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
	mov edx,dword ptr [ebp-0x1C]
	push edi
	push edi
	lea eax,[ebp-0x48]
	push eax
	lea ecx,[ebp-0x38]
	push ecx
	push ecx
	mov dword ptr [ebp-0x20],esp
	mov ecx,esp
	mov bl,6
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],7
	cmp dword ptr [_D_G_RM],edi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[ebp-0x58]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],8
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x58],si
	jne Block17

 Block15:
	mov eax,dword ptr [ebp-0x50]
	xor ecx,ecx
	mov word ptr [ebp-0x58],cx
	cmp eax,edi
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[ebp-0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x38],si
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	cmp eax,edi
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x48],si
	jne Block25

 Block23:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	cmp eax,edi
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov dword ptr [ebp-4],3
	jmp Block29

 Block25:
	lea eax,[ebp-0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov dword ptr [ebp-4],3
	jmp Block29

 Block29:
	mov ebx,dword ptr [ebp-0x18]
	mov dword ptr [ebp-0x20],edi
	test ebx,ebx
	je Block47

 Block30:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x3D5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x58]
	mov byte ptr [ebp-4],0xA
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block33

 Block31:
	cmp eax,0x80004002
	je Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	mov bl,0xD
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x58],si
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [ebp-0x58],ax
	mov eax,dword ptr [ebp-0x50]
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[ebp-0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov esi,dword ptr [ebp-0x14]
	test esi,esi
	je Block45

 Block38:
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x20],esp
	push 0x3D6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x48]
	mov byte ptr [ebp-4],0xE
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	jne Block40

 Block39:
	mov eax,dword ptr [eax+8]
	jmp Block41

 Block40:
	mov eax,offset _S_0

 Block41:
	push eax
	call __wtoi
	add esp,4
	cmp word ptr [ebp-0x48],8
	mov edi,eax
	mov dword ptr [ebp-0x20],edi
	jne Block44

 Block42:
	mov eax,dword ptr [ebp-0x40]
	xor ecx,ecx
	mov word ptr [ebp-0x48],cx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea edx,[ebp-0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov byte ptr [ebp-4],3
	test esi,esi
	je Block47

 Block46:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block47:
	push 0
	push offset _S_
	push 0
	push 0
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	lea ecx,[ebp-0x14]
	call ZXString<char>::ReleaseBuffer
	mov byte ptr [ebp-4],0xF
	lea eax,[ebp-0x20]
	test edi,edi
	jne Block49

 Block48:
	lea eax,[ebp+0xC]

 Block49:
	mov ecx,dword ptr [ebp-0x28]
	push 0
	push eax
	add ecx,0x84
	call ZMap<unsigned long, ZMap<char const *, ZXString<char>, ZXString<char>>, unsigned long>::GetAt
	test eax,eax
	jne Block51

 Block50:
	mov esi,dword ptr [ebp+8]
	lea edx,[ebp-0x14]
	push edx
	mov ecx,esi
	mov dword ptr [esi],eax
	call ZXString<char>::op_assign
	jmp Block52

 Block51:
	lea ecx,[ebp-0x14]
	push ecx
	lea edx,[ebp+0x10]
	push edx
	mov ecx,eax
	call ZMap<char const *, ZXString<char>, ZXString<char>>::GetAt
	mov esi,dword ptr [ebp+8]
	lea eax,[ebp-0x14]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign

 Block52:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],3
	mov dword ptr [ebp-0x24],1
	test eax,eax
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block54:
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block56:
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block58:
	mov eax,esi
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// CItemInfo::GetItemAffectDamageTheme
_SUB_EXCEPTION_HANDLER(5D3D00)
__SUB_CLASS_THIS(005D3D00, __thiscall, 76572, CItemInfo, ZRef<ZArray<ZXString<char>>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5D3D00
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
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x1C]
	push eax
	lea edx,[esp+0x3C]
	push edx
	add ecx,0x268
	mov dword ptr [esp+0x34],1
	call ZMap<long, ZRef<ZArray<ZXString<char>>>, long>::GetAt
	test eax,eax
	je Block2

 Block1:
	mov esi,dword ptr [esp+0x18]
	lea eax,[esp+0x1C]
	jmp Block3

 Block2:
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	lea eax,[esp+0x14]
	lea ebx,[esi+1]

 Block3:
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	or ebx,2
	mov dword ptr [esp+0x14],ebx
	test bl,1
	je Block10

 Block6:
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x14],ebx
	test esi,esi
	je Block10

 Block7:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block10

 Block8:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block10

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block10:
	mov esi,dword ptr [esp+0x20]
	mov byte ptr [esp+0x2C],0
	test esi,esi
	je Block14

 Block11:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block14

 Block12:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block14

 Block13:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block14:
	mov eax,dword ptr [esp+0x34]
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
// CItemInfo::LevelInfo::RandomJump::GetStatType
__SUB_CLASS_THIS0(001916C0, __thiscall, 131007, CItemInfo::LevelInfo::RandomJump, long) {
__asm {

 Block0:
	mov eax,0xE
	ret
}
}
// CItemInfo::IsAbleToEquip
_SUB_EXCEPTION_HANDLER(101110)
__SUB_CLASS_THIS(00101110, __thiscall, 130710, CItemInfo, int32_t, long, long, long, short, long, long, long, long, long, NakedParam<ZRef<GW_ItemSlotPet>>, long, long, ZRef<GW_ItemSlotBase> *) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_101110
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
	xor ebx,ebx
	xor edi,edi
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [esp+0x60]
	push eax
	mov dword ptr [esp+0x30],edi
	call CItemInfo::GetEquipItem
	mov ebp,eax
	cmp ebp,edi
	jne Block6

 Block1:
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,edi
	je Block5

 Block2:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	mov ecx,dword ptr [esp+0x5C]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x5C]
	cmp ecx,edi
	je Block5

 Block4:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block5:
	xor eax,eax
	jmp Block48

 Block6:
	cmp dword ptr [ebp+0x260],edi
	jle Block9

 Block7:
	cmp dword ptr [esp+0x64],edi
	jne Block9

 Block8:
	lea ecx,[esp+0x58]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZRef<GW_ItemSlotPet>::~ZRef<GW_ItemSlotPet>
	xor eax,eax
	jmp Block48

 Block9:
	mov ecx,dword ptr [esp+0x68]
	mov eax,dword ptr [ecx+0x5C]
	cmp eax,edi
	je Block11

 Block10:
	add eax,0xC
	jmp Block12

 Block11:
	push edi
	lea ecx,[esp+0x1C]
	call TSecType<long>::_ctor_1
	mov ebx,1
	mov byte ptr [esp+0x2C],1
	mov dword ptr [esp+0x14],ebx

 Block12:
	mov ecx,eax
	call TSecType<long>::GetData
	mov esi,eax
	mov dword ptr [esp+0x2C],edi
	test bl,1
	je Block15

 Block13:
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block15

 Block14:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block15:
	mov edx,dword ptr [esp+0x60]
	push edx
	call get_weapon_type
	mov edi,dword ptr [esp+0x40]
	add esp,4
	cmp eax,0x22
	jne Block20

 Block16:
	push esi
	call get_weapon_type
	add esp,4
	cmp eax,0x21
	jne Block8

 Block17:
	cmp edi,0x1AE
	jl Block19

 Block18:
	cmp edi,0x1B2
	jle Block20

 Block19:
	cmp edi,0x384
	jne Block8

 Block20:
	mov eax,0x10624DD3
	imul edi
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	jne Block23

 Block21:
	cmp word ptr [esp+0x40],1
	jne Block23

 Block22:
	mov eax,0x68DB8BAD
	imul dword ptr [esp+0x60]
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x6D
	je Block8

 Block23:
	mov ebx,dword ptr [esp+0x34]
	imul ecx,0x3E8
	mov edx,edi
	sub edx,ecx
	mov ecx,dword ptr [esp+0x60]
	mov eax,0x51EB851F
	imul edx
	sar edx,5
	push ebx
	mov esi,edx
	push 0xE
	shr esi,0x1F
	push ecx
	add esi,edx
	call is_correct_bodypart
	add esp,0xC
	test eax,eax
	je Block27

 Block24:
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block8

 Block25:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	mov ecx,ebp
	call CItemInfo::EQUIPITEM::IsItemSuitedForPet
	test eax,eax
	je Block8

 Block26:
	mov ecx,dword ptr [esp+0x5C]
	call GW_ItemSlotPet::_ZtlSecureGet_nLevel
	movzx edx,al
	mov dword ptr [esp+0x38],edx

 Block27:
	test esi,esi
	je Block29

 Block28:
	lea ecx,[esi-1]
	mov esi,1
	shl esi,cl
	jmp Block30

 Block29:
	xor esi,esi

 Block30:
	push edi
	call is_admin_job
	add esp,4
	test eax,eax
	jne Block46

 Block31:
	push edi
	call is_manager_job
	add esp,4
	test eax,eax
	jne Block46

 Block32:
	mov eax,dword ptr [esp+0x60]
	push ebx
	push eax
	call is_matched_itemid_gender
	add esp,8
	test eax,eax
	je Block45

 Block33:
	mov ecx,ebp
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrLevel
	cmp dword ptr [esp+0x38],eax
	jl Block45

 Block34:
	mov ecx,ebp
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrSTR
	cmp dword ptr [esp+0x44],eax
	jl Block45

 Block35:
	mov ecx,ebp
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrDEX
	cmp dword ptr [esp+0x48],eax
	jl Block45

 Block36:
	mov ecx,ebp
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrINT
	cmp dword ptr [esp+0x4C],eax
	jl Block45

 Block37:
	mov ecx,ebp
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrLUK
	cmp dword ptr [esp+0x50],eax
	jl Block45

 Block38:
	mov ecx,ebp
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrPOP
	test eax,eax
	je Block40

 Block39:
	mov ecx,ebp
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrPOP
	cmp dword ptr [esp+0x54],eax
	jl Block45

 Block40:
	mov ecx,ebp
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrJob
	test eax,eax
	je Block46

 Block41:
	mov ecx,ebp
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrJob
	cmp eax,0xFFFFFFFF
	jne Block43

 Block42:
	test esi,esi
	je Block46

 Block43:
	mov ecx,ebp
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrJob
	test eax,eax
	jle Block45

 Block44:
	mov ecx,ebp
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrJob
	test esi,eax
	jne Block46

 Block45:
	xor esi,esi
	jmp Block47

 Block46:
	mov esi,1

 Block47:
	lea ecx,[esp+0x58]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZRef<GW_ItemSlotPet>::~ZRef<GW_ItemSlotPet>
	mov eax,esi

 Block48:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 0x38
}
}
// CItemInfo::GetExclusiveWeaponShieldBodyPart
__SUB_CLASS_THIS(00101400, __thiscall, 130708, CItemInfo, long, ZRef<GW_ItemSlotBase> *, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [eax+0x5C]
	push esi
	mov esi,dword ptr [esp+0xC]
	push edi
	mov edi,dword ptr [eax+0x54]
	test esi,esi
	je Block8

 Block1:
	mov eax,0x14F8B589
	imul esi
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xE
	jne Block4

 Block2:
	test edi,edi
	je Block4

 Block3:
	pop edi
	mov eax,0xA
	pop esi
	ret 8

 Block4:
	mov eax,0x68DB8BAD
	imul esi
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x6D
	jne Block11

 Block5:
	test ecx,ecx
	je Block11

 Block6:
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x14F8B589
	imul ecx
	sar edx,0xD
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0xE
	jne Block11

 Block7:
	pop edi
	lea eax,[ecx-3]
	pop esi
	ret 8

 Block8:
	test edi,edi
	je Block11

 Block9:
	test ecx,ecx
	je Block11

 Block10:
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x14F8B589
	imul ecx
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	sub eax,0xE
	neg eax
	sbb eax,eax
	and eax,0xFFFFFFF5
	pop edi
	add eax,0xB
	pop esi
	ret 8

 Block11:
	pop edi
	xor eax,eax
	pop esi
	ret 8
}
}
// CItemInfo::GetItemName
_SUB_EXCEPTION_HANDLER(1B1640)
__SUB_CLASS_THIS(001B1640, __thiscall, 130711, CItemInfo, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B1640
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
	lea eax,[esp+0x10]
	push 0x671
	push eax
	mov dword ptr [esp+0x14],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x28]
	mov edi,dword ptr [esp+0x24]
	push eax
	push ecx
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x28],1
	call CItemInfo::GetItemString
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0xC],1
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,edi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 8
}
}
// CItemInfo::GetExtendExpireDateItem
_SUB_EXCEPTION_HANDLER(1009E0)
__SUB_CLASS_THIS(001009E0, __thiscall, 130732, CItemInfo, const CItemInfo::EXTENDEXPIREDATEITEM *, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1009E0
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
	xor ebx,ebx
	xor edi,edi
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x18],edi
	lea eax,[esp+0x14]
	push eax
	lea edx,[esp+0x38]
	push edx
	add ecx,0xFC
	mov dword ptr [esp+0x34],edi
	call ZMap<long, ZRef<CItemInfo::EXTENDEXPIREDATEITEM>, long>::GetAt
	test eax,eax
	je Block2

 Block1:
	mov esi,dword ptr [esp+0x20]
	lea eax,[esp+0x14]
	jmp Block3

 Block2:
	xor esi,esi
	mov dword ptr [esp+0x20],esi
	lea eax,[esp+0x1C]
	mov ebx,1

 Block3:
	mov ebp,dword ptr [eax+4]
	test bl,1
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	je Block8

 Block4:
	cmp esi,edi
	je Block8

 Block5:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block8

 Block6:
	push edi
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
	mov esi,dword ptr [esp+0x18]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test esi,esi
	je Block12

 Block9:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block12

 Block10:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block12

 Block11:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block12:
	mov eax,ebp
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
// CItemInfo::LevelInfo::RandomPDD::GetStatType
__SUB_CLASS_THIS0(00191650, __thiscall, 131112, CItemInfo::LevelInfo::RandomPDD, long) {
__asm {

 Block0:
	mov eax,7
	ret
}
}
// CItemInfo::GetHalloweenItem
__SUB_CLASS_THIS(001A6DE0, __thiscall, 130736, CItemInfo, void, ZList<long> &) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	mov ecx,edi
	call ZList<long>::RemoveAll
	add esi,0x15C
	push esi
	mov ecx,edi
	call ZList<long>::AddTail_List
	pop edi
	pop esi
	ret 4
}
}
// CItemInfo::GetBundleItemInfoData
_SUB_EXCEPTION_HANDLER(1B3D90)
__SUB_CLASS_THIS(001B3D90, __thiscall, 130718, CItemInfo, ZRef<CItemInfo::BUNDLEITEM>*, ZRef<CItemInfo::BUNDLEITEM>*, long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B3D90
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
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov eax,dword ptr [esp+0x64]
	cmp eax,ebp
	sete cl
	mov edx,1
	mov dword ptr [esp+0x54],edx
	test cl,cl
	je Block4

 Block1:
	mov esi,dword ptr [esp+0x5C]
	mov dword ptr [esi+4],ebp
	mov dword ptr [esp+0x14],edx
	mov byte ptr [esp+0x54],0
	cmp eax,ebp
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	mov eax,esi
	jmp Block165

 Block4:
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x28],ebp
	call ZRef<CItemInfo::BUNDLEITEM>::_Alloc
	mov eax,dword ptr [esp+0x60]
	mov esi,dword ptr [esp+0x28]
	push eax
	mov dword ptr [esi+4],eax
	lea eax,[esp+0x64]
	mov bl,2
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x5C],bl
	call CItemInfo::GetItemName
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x58],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x54],bl
	cmp eax,ebp
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x68],esp
	push 0x817
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x5C],4
	cmp ecx,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x5C],5
	call get_int32
	mov edi,8
	add esp,8
	mov dword ptr [esi+0x28],eax
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x68],esp
	push 0x787
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x5C],6
	cmp ecx,ebp
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x5C],7
	call get_int32
	add esp,8
	mov dword ptr [esi+0x2C],eax
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x68],esp
	push 0x1AC9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x5C],8
	cmp ecx,ebp
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x5C],9
	call get_int32
	add esp,8
	mov dword ptr [esi+0x44],eax
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	fldz
	sub esp,0xC
	mov edx,esp
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x6C],esp
	push 0x95E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x70]
	mov byte ptr [esp+0x60],0xA
	cmp ecx,ebp
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x64],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x60],0xB
	call get_double
	fstp qword ptr [esi+0x48]
	add esp,0xC
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x68],esp
	push 0x826
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x5C],0xC
	cmp ecx,ebp
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x5C],0xD
	call get_int32
	add esp,8
	mov dword ptr [esi+0x50],eax
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x68],esp
	push 0xBC8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x5C],0xE
	cmp ecx,ebp
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x5C],0xF
	call get_int32
	add esp,8
	mov dword ptr [esi+0x54],eax
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x68],esp
	push 0xBC9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x5C],0x10
	cmp ecx,ebp
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x5C],0x11
	call get_int32
	add esp,8
	mov dword ptr [esi+0x58],eax
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block47

 Block45:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x68],esp
	push 0xB7D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x5C],0x12
	cmp ecx,ebp
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x5C],0x13
	call get_int32
	add esp,8
	mov dword ptr [esi+8],eax
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	push 0x64
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x68],esp
	push 0x968
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x5C],0x14
	cmp ecx,ebp
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x5C],0x15
	call get_int32
	add esp,8
	mov word ptr [esi+0x5C],ax
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x68],esp
	push 0x5D7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x5C],0x16
	cmp ecx,ebp
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x5C],0x17
	call get_int32
	add esp,8
	mov word ptr [esi+0x5E],ax
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block65

 Block63:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	push ebp
	push ecx
	mov dword ptr [esp+0x68],esp
	mov ecx,esp
	push offset _S_REQQUESTONPROGRE
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x5C],0x18
	cmp ecx,ebp
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x5C],0x19
	call get_int32
	add esp,8
	mov word ptr [esi+0x60],ax
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x68],esp
	push 0xC9F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x5C],0x1A
	cmp ecx,ebp
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x5C],0x1B
	call get_int32
	add esp,8
	mov dword ptr [esi+0xC],eax
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block77

 Block75:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block78:
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x68],esp
	push 0xCA0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x5C],0x1C
	cmp ecx,ebp
	jne Block80

 Block79:
	push 0x80004003
	call _com_issue_error

 Block80:
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x5C],0x1D
	call get_int32
	add esp,8
	mov dword ptr [esi+0x10],eax
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x68],esp
	push 0xCA2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x5C],0x1E
	cmp ecx,ebp
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x5C],0x1F
	call get_int32
	add esp,8
	mov dword ptr [esi+0x14],eax
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block89

 Block87:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x68],esp
	push 0xCA3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x5C],0x20
	cmp ecx,ebp
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x5C],0x21
	call get_int32
	add esp,8
	mov dword ptr [esi+0x18],eax
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block95

 Block93:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x68],esp
	push 0xDFA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x5C],0x22
	cmp ecx,ebp
	jne Block98

 Block97:
	push 0x80004003
	call _com_issue_error

 Block98:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x5C],0x23
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1C],eax
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x68],esp
	push 0xE2B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x5C],0x24
	cmp ecx,ebp
	jne Block104

 Block103:
	push 0x80004003
	call _com_issue_error

 Block104:
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x5C],0x25
	call get_int32
	add esp,8
	mov dword ptr [esi+0x20],eax
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block107

 Block105:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block108:
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x68],esp
	push 0x1059
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x5C],0x26
	cmp ecx,ebp
	jne Block110

 Block109:
	push 0x80004003
	call _com_issue_error

 Block110:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x5C],0x27
	call get_int32
	add esp,8
	mov dword ptr [esi+0x64],eax
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block113

 Block111:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block114:
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x68],esp
	push 0xFED
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x5C],0x28
	cmp ecx,ebp
	jne Block116

 Block115:
	push 0x80004003
	call _com_issue_error

 Block116:
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x5C],0x29
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0x24],eax
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block119

 Block117:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block120:
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x68],esp
	push 0xA49
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x5C],0x2A
	cmp ecx,ebp
	jne Block122

 Block121:
	push 0x80004003
	call _com_issue_error

 Block122:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x5C],0x2B
	call get_int32
	add esp,8
	mov dword ptr [esi+0x68],eax
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block125

 Block123:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block126

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block126

 Block125:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block126:
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x68],esp
	push 0x13DD
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x5C],0x2C
	cmp ecx,ebp
	jne Block128

 Block127:
	push 0x80004003
	call _com_issue_error

 Block128:
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x5C],0x2D
	call get_int32
	add esp,8
	mov dword ptr [esi+0x78],eax
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block131

 Block129:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block132:
	lea ecx,[esi+0x30]
	call ZList<unsigned long>::RemoveAll
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x6C],esp
	push 0x78A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x70]
	mov byte ptr [esp+0x60],0x2E
	cmp ecx,ebp
	jne Block134

 Block133:
	push 0x80004003
	call _com_issue_error

 Block134:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x64],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x5C],0x2F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x64]
	mov dword ptr [esp+0x64],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block137

 Block135:
	cmp eax,0x80004002
	je Block137

 Block136:
	push eax
	call _com_issue_error

 Block137:
	mov byte ptr [esp+0x54],0x31
	cmp word ptr [esp+0x3C],di
	jne Block140

 Block138:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block141:
	mov ecx,dword ptr [esp+0x60]
	cmp ecx,ebp
	je Block157

 Block142:
	lea edx,[esp+0x18]
	push edx
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x58],0x32
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x54],0x34
	cmp eax,ebp
	je Block144

 Block143:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block144:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov dword ptr [esp+0x20],ebp
	mov ebp,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x54],0x35

 Block145:
	test ebp,ebp
	je Block7

 Block146:
	mov ecx,dword ptr [ebp]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x30]
	push eax
	push 1
	push ebp
	call ecx
	test eax,eax
	jne Block152

 Block147:
	push eax
	lea edx,[esp+0x30]
	push edx
	call get_int32
	add esp,8
	lea ecx,[esi+0x30]
	mov edi,eax
	call ZList<unsigned long>::AddTail_
	mov dword ptr [eax],edi
	cmp word ptr [esp+0x2C],8
	jne Block150

 Block148:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block145

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block150:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block145

 Block151:
	jmp Block136

 Block152:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x54],0x34
	jne Block155

 Block153:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block156

 Block154:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block156

 Block155:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block156:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0x58],0x31
	call edx

 Block157:
	mov eax,dword ptr [esp+0x5C]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [eax+4],esi
	add esi,0xFFFFFFF0
	lea ecx,[esi+4]
	push ecx
	call ebp
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x14],1
	mov byte ptr [esp+0x54],bl
	test eax,eax
	je Block159

 Block158:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block159:
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x58],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block162

 Block160:
	push edi
	call ebp
	test esi,esi
	je Block162

 Block161:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block162:
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x54],0
	test eax,eax
	je Block164

 Block163:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block164:
	mov eax,dword ptr [esp+0x5C]

 Block165:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 0xC
}
}
// CItemInfo::GetBridleItem
_SUB_EXCEPTION_HANDLER(5D3C10)
__SUB_CLASS_THIS(005D3C10, __thiscall, 76528, CItemInfo, const CItemInfo::BRIDLEITEM *, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5D3C10
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
	xor ebx,ebx
	xor edi,edi
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x18],edi
	lea eax,[esp+0x14]
	push eax
	lea edx,[esp+0x38]
	push edx
	add ecx,0xCC
	mov dword ptr [esp+0x34],edi
	call ZMap<long, ZRef<CItemInfo::BRIDLEITEM>, long>::GetAt
	test eax,eax
	je Block2

 Block1:
	mov esi,dword ptr [esp+0x20]
	lea eax,[esp+0x14]
	jmp Block3

 Block2:
	xor esi,esi
	mov dword ptr [esp+0x20],esi
	lea eax,[esp+0x1C]
	mov ebx,1

 Block3:
	mov ebp,dword ptr [eax+4]
	test bl,1
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	je Block8

 Block4:
	cmp esi,edi
	je Block8

 Block5:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block8

 Block6:
	push edi
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
	mov esi,dword ptr [esp+0x18]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test esi,esi
	je Block12

 Block9:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block12

 Block10:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block12

 Block11:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block12:
	mov eax,ebp
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
// CItemOptionInfo::~CItemOptionInfo
_SUB_EXCEPTION_HANDLER(1B4C40)
__SUB_CLASS_THIS0(001B4C40, __thiscall, 78612, CItemOptionInfo, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B4C40
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x84
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x98]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x30],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x64]
	push eax
	call esi
	lea ecx,[esp+0x64]
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
	lea edx,[esp+0x54]
	push edx
	mov dword ptr [esp+0xA4],edi
	call esi
	lea eax,[esp+0x54]
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
	lea ecx,[esp+0x6C]
	push ecx
	lea edx,[esp+0x60]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push 0x176A
	push eax
	mov byte ptr [esp+0xBC],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xB4],2
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x88]
	push ecx
	mov byte ptr [esp+0xB8],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA8],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],edi
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
	mov byte ptr [esp+0xA0],5
	cmp word ptr [esp+0x74],bx
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x7C]
	xor edx,edx
	mov word ptr [esp+0x74],dx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x74]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0xA0],6
	cmp word ptr [esp+0x54],bx
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [esp+0xA0],7
	cmp word ptr [esp+0x64],bx
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[esp+0x20]
	push edx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xA4],8
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	lea ecx,[esp+0x1C]
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
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xA0],0xA
	cmp eax,edi
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	lea eax,[esp+0x44]
	push eax
	call esi
	mov byte ptr [esp+0xA0],0xB
	mov dword ptr [esp+0x24],edi

 Block31:
	mov esi,dword ptr [esp+0x18]
	cmp esi,edi
	je Block5

 Block32:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x48]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block69

 Block33:
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x20]
	push eax
	call DetachBSTR
	add esp,8
	mov ebx,dword ptr [esp+0x1C]
	cmp ebx,edi
	je Block35

 Block34:
	mov eax,dword ptr [ebx]
	jmp Block36

 Block35:
	xor eax,eax

 Block36:
	push eax
	call __wtoi
	add esp,4
	push edi
	push edi
	push ecx
	mov esi,eax
	mov eax,esp
	mov dword ptr [esp+0x40],esi
	mov dword ptr [esp+0x38],esp
	mov dword ptr [eax],ebx
	cmp ebx,edi
	je Block38

 Block37:
	lea ecx,[ebx+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block38:
	mov ecx,dword ptr [esp+0x20]
	lea edx,[esp+0x90]
	mov byte ptr [esp+0xAC],0xD
	push edx
	mov byte ptr [esp+0xB0],0xC
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xA8],0xE
	call Ztl_variant_t::GetUnknown
	xor ebp,ebp
	mov dword ptr [esp+0x2C],ebp
	cmp eax,edi
	je Block41

 Block39:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x28]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x28]
	cmp eax,edi
	mov ebp,ecx
	mov dword ptr [esp+0x2C],ebp
	jge Block41

 Block40:
	cmp eax,0x80004002
	jne Block1

 Block41:
	cmp word ptr [esp+0x84],8
	mov byte ptr [esp+0xA0],0x10
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x8C]
	xor edx,edx
	mov word ptr [esp+0x84],dx
	cmp eax,edi
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[esp+0x84]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block45:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax],ebp
	cmp ebp,edi
	je Block47

 Block46:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+4]
	push ebp
	call edx

 Block47:
	push esi
	mov esi,dword ptr [esp+0x38]
	lea eax,[esp+0x44]
	push eax
	mov ecx,esi
	call CItemOptionInfo::LoadItemOption
	mov byte ptr [esp+0xA0],0x11
	lea edx,[esp+0x34]
	cmp dword ptr [esp+0x40],edi
	je Block68

 Block48:
	lea ecx,[esp+0x3C]
	push ecx
	push edx
	lea ecx,[esi+4]
	call ZMap<long, ZRef<ItemOptionInfo>, long>::Insert
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xA0],0x10
	cmp eax,edi
	je Block53

 Block49:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block52

 Block50:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block52

 Block51:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block52:
	mov dword ptr [esp+0x40],0
	xor edi,edi

 Block53:
	mov byte ptr [esp+0xA0],0xC
	cmp ebp,edi
	je Block55

 Block54:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block55:
	mov byte ptr [esp+0xA0],0xB
	cmp ebx,edi
	je Block63

 Block56:
	lea edx,[ebx+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block62

 Block57:
	mov eax,dword ptr [ebx]
	cmp eax,edi
	je Block59

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block59:
	mov eax,dword ptr [ebx+4]
	cmp eax,edi
	je Block61

 Block60:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block61:
	push ebx
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block62:
	mov dword ptr [esp+0x1C],edi

 Block63:
	cmp word ptr [esp+0x44],8
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,edi
	je Block31

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block66:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	cmp eax,edi
	jge Block31

 Block67:
	jmp Block1

 Block68:
	push offset ZException::THROW_INFO
	push edx
	mov dword ptr [esp+0x3C],0x80004005
	call _CxxThrowException

 Block69:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0xA0],0xA
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,edi
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0xA4],7
	call eax
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [esp+0xA4],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x98]
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
// CItemInfo::GetBulletPAD
_SUB_EXCEPTION_HANDLER(1AC630)
__SUB_CLASS_THIS(001AC630, __thiscall, 84833, CItemInfo, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1AC630
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
	mov eax,dword ptr [esp+0x30]
	push eax
	lea edx,[esp+0x34]
	push edx
	call CItemInfo::GetItemInfo
	mov esi,dword ptr [esp+0x30]
	test esi,esi
	sete al
	mov dword ptr [esp+0x28],0
	test al,al
	je Block4

 Block1:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test esi,esi
	je Block3

 Block2:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block3:
	xor eax,eax
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 4

 Block4:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x14],esp
	push 0x817
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x30],1
	test esi,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x34],0
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x30],2
	call get_int32
	add esp,8
	cmp word ptr [esp+0x10],8
	mov edi,eax
	mov byte ptr [esp+0x28],0
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x18]
	xor ecx,ecx
	mov word ptr [esp+0x10],cx
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ecx
	mov eax,edi
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 4
}
}
// CItemInfo::DrawGradeFrame
_SUB_EXCEPTION_HANDLER(194D10)
__SUB_CLASS_THIS(00194D10, __thiscall, 130754, CItemInfo, void, NakedParam<_x_com_ptr<IWzCanvas>>, GW_ItemSlotEquip *, long, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_194D10
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x28]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x80]
	mov ecx,esi
	mov dword ptr [esp+0x1C],0
	call edx
	test al,al
	jbe Block24

 Block1:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x78]
	mov ecx,esi
	mov ebx,0xFFFF0066
	call edx
	test eax,eax
	je Block8

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x80]
	mov ecx,esi
	call edx
	movzx eax,al
	sub eax,1
	je Block7

 Block3:
	sub eax,1
	je Block6

 Block4:
	sub eax,1
	jne Block8

 Block5:
	mov ebx,0xFFFFCC00
	jmp Block8

 Block6:
	mov ebx,0xFFC261FF
	jmp Block8

 Block7:
	mov ebx,0xFF5CA1FF

 Block8:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov edi,dword ptr [esp+0x2C]
	mov esi,dword ptr [esp+0x34]
	mov ebp,dword ptr [esp+0x30]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x8C]
	push ebx
	push 1
	sub esi,edi
	push esi
	push ebp
	push edi
	push eax
	mov dword ptr [esp+0x40],eax
	call edx
	test eax,eax
	jge Block12

 Block11:
	mov ecx,dword ptr [esp+0x28]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block12:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov edx,dword ptr [eax]
	push ebx
	push 1
	push esi
	mov esi,dword ptr [esp+0x44]
	push esi
	push edi
	mov dword ptr [esp+0x3C],eax
	push eax
	mov eax,dword ptr [edx+0x8C]
	call eax
	test eax,eax
	jge Block16

 Block15:
	mov ecx,dword ptr [esp+0x28]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block16:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov edx,dword ptr [eax]
	push ebx
	sub esi,ebp
	push esi
	push 1
	push ebp
	push edi
	mov dword ptr [esp+0x3C],eax
	push eax
	mov eax,dword ptr [edx+0x8C]
	call eax
	test eax,eax
	jge Block20

 Block19:
	mov ecx,dword ptr [esp+0x28]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block20:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x8C]
	push ebx
	push esi
	push 1
	push ebp
	push ecx
	push eax
	mov edi,eax
	call edx
	test eax,eax
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block24:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 0x18
}
}
// CItemInfo::QUESTDELIVERYITEM::~QUESTDELIVERYITEM
_SUB_EXCEPTION_HANDLER(19CFF0)
__SUB_CLASS_THIS0(0019CFF0, __thiscall, 130797, CItemInfo::QUESTDELIVERYITEM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_19CFF0
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
	mov dword ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<unsigned short>::`vftable'
	call ZList<unsigned short>::RemoveAll
	lea ecx,[esi+0xC]
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<unsigned short>::`vftable'
	call ZList<unsigned short>::RemoveAll
	mov esi,dword ptr [esi+8]
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
