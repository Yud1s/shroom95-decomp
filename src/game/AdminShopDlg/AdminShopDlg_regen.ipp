#include "regen.hpp"
// AdminShopDlg.ipp
#include "AdminShopDlg.hpp"


// CAdminShopDlg::DrawNPCItem
_SUB_EXCEPTION_HANDLER(2DC90)
__SUB_CLASS_THIS(0002DC90, __thiscall, 60766,  CAdminShopDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DC90
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
	mov ebx,ecx
	mov dword ptr [esp+0x2C],ebx
	mov eax,dword ptr [ebx+0xB0]
	mov ecx,dword ptr [eax+0x44]
	mov dword ptr [esp+0xB4],0
	lea ebp,[ebx+0xE0]
	test ecx,ecx
	jne Block2

 Block1:
	lea ebp,[ebx+0xDC]

 Block2:
	mov esi,dword ptr [ebx+ecx*4+0xB44]
	mov ecx,dword ptr [ebx+0xC0]
	push esi
	mov dword ptr [esp+0x34],ebp
	call CCtrlScrollBar::SetCurPos
	mov dword ptr [esp+0x20],esi
	add esi,esi
	add esi,esi
	add esi,esi
	mov dword ptr [esp+0x3C],esi
	mov dword ptr [esp+0x18],0x7F

 Block3:
	mov ecx,ebp
	call ZArray<ZRef<CAdminShopDlg::AdminShopCommodity>>::GetCount
	cmp dword ptr [esp+0x20],eax
	jae Block77

 Block4:
	mov eax,dword ptr [ebp]
	mov edi,dword ptr [eax+esi+4]
	add eax,esi
	mov dword ptr [esp+0x44],edi
	test edi,edi
	je Block6

 Block5:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov esi,dword ptr [ebx+0xEC]
	mov byte ptr [esp+0xB4],1
	mov dword ptr [esp+0x38],esi
	test esi,esi
	je Block8

 Block7:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block8:
	mov ebp,dword ptr [edi+0x40]
	mov byte ptr [esp+0xB4],2
	mov dword ptr [esp+0x28],ebp
	test ebp,ebp
	je Block10

 Block9:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	push ebp
	call ecx

 Block10:
	cmp byte ptr [edi+0x38],0
	mov byte ptr [esp+0xB4],3
	je Block21

 Block11:
	mov eax,dword ptr [ebx+0xF0]
	cmp esi,eax
	je Block16

 Block12:
	mov dword ptr [esp+0x38],eax
	test eax,eax
	je Block14

 Block13:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block14:
	test esi,esi
	je Block16

 Block15:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block16:
	mov eax,dword ptr [edi+0x44]
	cmp ebp,eax
	je Block21

 Block17:
	mov esi,ebp
	mov ebp,eax
	mov dword ptr [esp+0x28],ebp
	test eax,eax
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block19:
	test esi,esi
	je Block21

 Block20:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block21:
	mov edx,dword ptr [esp+0x20]
	cmp dword ptr [ebx+0xB50],edx
	jne Block30

 Block22:
	mov eax,3
	mov edx,0xFF
	mov word ptr [esp+0x58],ax
	mov dword ptr [esp+0x60],edx
	mov ecx,dword ptr [esp+0xBC]
	mov esi,dword ptr [ebx+0xF8]
	mov byte ptr [esp+0xB4],4
	test ecx,ecx
	je Block81

 Block23:
	mov ebp,dword ptr [esp+0x58]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x6C]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x74]
	push esi
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x2C]
	push eax
	push 0x2B
	mov edi,ecx
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	call ecx
	test eax,eax
	jge Block25

 Block24:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block25:
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0xB4],3
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov ebp,dword ptr [esp+0x28]

 Block30:
	mov ecx,3
	mov word ptr [esp+0x48],cx
	mov dword ptr [esp+0x50],0xFF
	mov byte ptr [esp+0xB4],5
	test ebp,ebp
	je Block81

 Block31:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x34]
	push eax
	push ebp
	mov dword ptr [esp+0x3C],0
	call ecx
	test eax,eax
	jge Block33

 Block32:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block33:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x6C]
	mov edi,dword ptr [esp+0x34]
	lea eax,[esp+0x14]
	push eax
	push ebp
	mov dword ptr [esp+0x1C],0
	call ecx
	test eax,eax
	jge Block35

 Block34:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block35:
	mov ecx,dword ptr [esp+0xBC]
	test ecx,ecx
	je Block81

 Block36:
	mov ebx,dword ptr [esp+0x48]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x5C]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x60]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x64]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [esp+0x28]
	sub eax,edi
	push ebp
	add eax,0x22
	push eax
	mov eax,8
	sub eax,dword ptr [esp+0x2C]
	mov esi,ecx
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block38

 Block37:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block38:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0xB4],3
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov ecx,dword ptr [esp+0x44]
	add ecx,0x3C
	push ecx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],0
	call ZXString<char>::op_assign
	mov edx,dword ptr [esp+0x2C]
	mov eax,dword ptr [edx+0xEC]
	push 0xA0
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xBC],6
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block44:
	lea eax,[esp+0x2C]
	push eax
	call format_string_1
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[esp+0x8C]
	push ecx
	call esi
	lea edx,[esp+0x8C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block82

 Block45:
	lea eax,[esp+0x6C]
	mov bl,7
	push eax
	mov byte ptr [esp+0xB8],bl
	call esi
	lea ecx,[esp+0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block82

 Block46:
	mov ecx,dword ptr [esp+0xBC]
	lea edx,[esp+0x8C]
	push edx
	mov edx,dword ptr [esp+0x28]
	lea eax,[esp+0x70]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xC8],8
	call _xbstr_t::_ctor_0
	mov esi,dword ptr [esp+0x48]
	mov byte ptr [esp+0xC4],9
	test esi,esi
	je Block81

 Block47:
	mov edi,dword ptr [esp+0x28]
	add edi,0x15
	lea eax,[edi-0x12]
	push eax
	push 0x31
	mov ecx,esi
	mov byte ptr [esp+0xCC],8
	call IWzFont::DrawTextA
	mov byte ptr [esp+0xB4],bl
	mov ebx,8
	cmp word ptr [esp+0x6C],bx
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x74]
	xor ecx,ecx
	mov word ptr [esp+0x6C],cx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x6C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov byte ptr [esp+0xB4],6
	cmp word ptr [esp+0x8C],bx
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x8C],ax
	mov eax,dword ptr [esp+0x94]
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[esp+0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov dword ptr [esp+0x1C],0
	mov edx,dword ptr [esp+0x44]
	mov eax,dword ptr [edx+0x30]
	push 1
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov byte ptr [esp+0xC0],0xA
	call format_integer
	add esp,0xC
	lea edx,[esp+0x68]
	push 0x1AC1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xB4],0xB
	test eax,eax
	je Block57

 Block56:
	mov ecx,dword ptr [eax-4]
	jmp Block58

 Block57:
	xor ecx,ecx

 Block58:
	push ecx
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0xB4],0xA
	test eax,eax
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block60:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x9C]
	push eax
	call ebx
	lea ecx,[esp+0x9C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block82

 Block61:
	lea edx,[esp+0x7C]
	push edx
	mov byte ptr [esp+0xB8],0xC
	call ebx
	lea eax,[esp+0x7C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block82

 Block62:
	mov eax,dword ptr [esp+0xBC]
	lea ecx,[esp+0x9C]
	push ecx
	lea edx,[esp+0x80]
	push edx
	mov edx,dword ptr [esp+0x24]
	push eax
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov bl,0xD
	push edx
	mov byte ptr [esp+0xC8],bl
	call _xbstr_t::_ctor_0
	push edi
	mov byte ptr [esp+0xC8],0xE
	push 0x31
	mov ecx,esi
	mov byte ptr [esp+0xCC],bl
	call IWzFont::DrawTextA
	mov edi,8
	mov byte ptr [esp+0xB4],0xC
	cmp word ptr [esp+0x7C],di
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea ecx,[esp+0x7C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	mov byte ptr [esp+0xB4],0xA
	cmp word ptr [esp+0x9C],di
	jne Block69

 Block67:
	mov eax,dword ptr [esp+0xA4]
	xor edx,edx
	mov word ptr [esp+0x9C],dx
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea eax,[esp+0x9C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB4],6
	test eax,eax
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block72:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xB4],3
	test eax,eax
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block74:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0xB8],2
	call edx
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0xB8],1
	call ecx
	mov edi,dword ptr [esp+0x44]
	lea esi,[edi+4]
	push esi
	mov byte ptr [esp+0xB8],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block76

 Block75:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block76:
	mov ebp,dword ptr [esp+0x30]
	mov ebx,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x44],0

 Block77:
	mov eax,dword ptr [esp+0x18]
	mov esi,dword ptr [esp+0x3C]
	inc dword ptr [esp+0x20]
	add eax,0x28
	add esi,8
	cmp eax,0x147
	mov dword ptr [esp+0x3C],esi
	mov dword ptr [esp+0x18],eax
	jl Block3

 Block78:
	mov eax,dword ptr [esp+0xBC]
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	test eax,eax
	je Block80

 Block79:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block80:
	mov ecx,dword ptr [esp+0xAC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA4
	ret 4

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	push eax
	call _com_issue_error
}
}

// CAdminShopDlg::DrawUserItem
_SUB_EXCEPTION_HANDLER(2E3C0)
__SUB_CLASS_THIS(0002E3C0, __thiscall, 60766,  CAdminShopDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E3C0
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
	mov ebp,ecx
	mov dword ptr [esp+0x20],ebp
	mov eax,dword ptr [ebp+0xC8]
	mov eax,dword ptr [eax+0x38]
	mov ebx,dword ptr [ZImports::_VariantInit]
	mov esi,eax
	add eax,eax
	add eax,eax
	add eax,eax
	mov dword ptr [esp+0x94],0
	mov dword ptr [esp+0x28],esi
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x14],0x82

 Block1:
	mov eax,dword ptr [ebp+0xE4]
	test eax,eax
	je Block62

 Block2:
	cmp esi,dword ptr [eax-4]
	jae Block62

 Block3:
	add eax,dword ptr [esp+0x24]
	mov edi,dword ptr [eax+4]
	mov dword ptr [esp+0x38],edi
	test edi,edi
	je Block5

 Block4:
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov byte ptr [esp+0x94],1
	cmp dword ptr [ebp+0xB54],esi
	jne Block14

 Block6:
	mov edx,3
	mov word ptr [esp+0x3C],dx
	mov edx,0xFF
	mov dword ptr [esp+0x44],edx
	mov ecx,dword ptr [esp+0x9C]
	mov esi,dword ptr [ebp+0xF8]
	mov byte ptr [esp+0x94],2
	test ecx,ecx
	je Block66

 Block7:
	mov ebp,dword ptr [esp+0x3C]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x50]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x58]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x24]
	push esi
	add eax,0xFFFFFFFD
	push eax
	push 0x111
	mov edi,ecx
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	call ecx
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block9:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x94],1
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov ebp,dword ptr [esp+0x20]
	mov ebx,dword ptr [ZImports::_VariantInit]
	mov edi,dword ptr [esp+0x38]

 Block14:
	mov eax,dword ptr [edi+0x4C]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block16

 Block15:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block16:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::CalcEquipItemQuality
	mov ecx,dword ptr [edi+0x4C]
	mov edx,dword ptr [ecx]
	push 2
	push 0
	push eax
	mov eax,dword ptr [edx+4]
	push 0
	push 0
	push 0
	call eax
	mov ecx,dword ptr [esp+0x2C]
	push eax
	add ecx,0x1F
	push ecx
	lea esi,[edi+0x18]
	push 0xEE
	mov ecx,esi
	call TSecType<long>::GetData
	mov edx,dword ptr [esp+0xC0]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0xC8]
	mov dword ptr [esp+0x5C],esp
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block18:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	lea eax,[edi+0x3C]
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0xEC]
	push 0xA0
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x9C],3
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block20:
	lea eax,[esp+0x24]
	push eax
	call format_string_1
	add esp,0xC
	lea ecx,[esp+0x5C]
	push ecx
	call ebx
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block67

 Block21:
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x98],4
	call ebx
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block67

 Block22:
	mov ecx,dword ptr [esp+0x9C]
	lea edx,[esp+0x5C]
	push edx
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x50]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xA8],5
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0xEC]
	mov byte ptr [esp+0xA4],6
	test ecx,ecx
	je Block66

 Block23:
	mov eax,dword ptr [esp+0x24]
	push eax
	push 0x117
	mov byte ptr [esp+0xAC],5
	call IWzFont::DrawTextA
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x94],4
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0x94],3
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov dword ptr [esp+0x18],0
	mov edx,dword ptr [edi+0x30]
	push 1
	push edx
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0xA0],7
	call format_integer
	add esp,0xC
	lea ecx,[esp+0x2C]
	push 0x1AC1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax-4]
	jmp Block34

 Block33:
	xor ecx,ecx

 Block34:
	push ecx
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x94],7
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	lea edx,[esp+0x7C]
	push edx
	call ebx
	lea eax,[esp+0x7C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block67

 Block37:
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0x98],9
	call ebx
	lea edx,[esp+0x6C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block67

 Block38:
	mov edx,dword ptr [esp+0x9C]
	lea eax,[esp+0x7C]
	push eax
	mov eax,dword ptr [esp+0x1C]
	lea ecx,[esp+0x70]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xA8],0xA
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0xEC]
	mov byte ptr [esp+0xA4],0xB
	test ecx,ecx
	je Block66

 Block39:
	mov edx,dword ptr [esp+0x24]
	add edx,0x12
	push edx
	push 0x117
	mov byte ptr [esp+0xAC],0xA
	call IWzFont::DrawTextA
	cmp word ptr [esp+0x6C],8
	mov byte ptr [esp+0x94],9
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	cmp word ptr [esp+0x7C],8
	mov byte ptr [esp+0x94],7
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x84]
	xor edx,edx
	mov word ptr [esp+0x7C],dx
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[esp+0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block47:
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	je Block50

 Block48:
	cmp eax,3
	je Block50

 Block49:
	cmp eax,4
	jne Block55

 Block50:
	mov ecx,dword ptr [edi+0x4C]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	push 0
	push ecx
	mov esi,eax
	mov eax,dword ptr [ebp+0xF4]
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block52:
	mov eax,dword ptr [esp+0x1C]
	add eax,0x11
	push esi
	push eax
	push 0xEC
	push ecx
	mov ecx,dword ptr [esp+0xB4]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xB4]
	mov dword ptr [esp+0x48],esp
	test eax,eax
	je Block54

 Block53:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block54:
	call draw_number_by_image
	add esp,0x18

 Block55:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x94],3
	test eax,eax
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block57:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x94],1
	test eax,eax
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block59:
	lea esi,[edi+4]
	push esi
	mov byte ptr [esp+0x98],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block61

 Block60:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block61:
	mov esi,dword ptr [esp+0x28]
	mov dword ptr [esp+0x38],0

 Block62:
	mov eax,dword ptr [esp+0x14]
	add dword ptr [esp+0x24],8
	add eax,0x28
	inc esi
	cmp eax,0x14A
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x28],esi
	jl Block1

 Block63:
	mov eax,dword ptr [esp+0x9C]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	test eax,eax
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block65:
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret 4

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	push eax
	call _com_issue_error
}
}
// CAdminShopDlg::GetRTTI
__SUB_CLASS_THIS0(0002D5F0, __thiscall, 60773,  CAdminShopDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CAdminShopDlg::ms_RTTI_CAdminShopDlg
	ret
}
}

// CAdminShopDlg::GetCurNPCItem
__SUB_CLASS_THIS0(00029B60, __thiscall, 60769,  CAdminShopDlg, ZArray<ZRef<CAdminShopDlg::AdminShopCommodity> >&) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xB0]
	cmp dword ptr [eax+0x44],0
	lea eax,[ecx+0xE0]
	jne Block2

 Block1:
	lea eax,[ecx+0xDC]

 Block2:
	ret
}
}
// CAdminShopDlg::AdminShopCommodity::operator=
__SUB_CLASS_THIS(0002D250, __thiscall, 60791,  CAdminShopDlg::AdminShopCommodity, CAdminShopDlg::AdminShopCommodity&, CAdminShopDlg::AdminShopCommodity&) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	push eax
	lea ecx,[esi+0xC]
	call TSecType<long>::SetData
	lea ecx,[edi+0x18]
	call TSecType<long>::GetData
	push eax
	lea ecx,[esi+0x18]
	call TSecType<long>::SetData
	mov eax,dword ptr [edi+0x24]
	mov dword ptr [esi+0x24],eax
	mov ecx,dword ptr [edi+0x28]
	mov dword ptr [esi+0x28],ecx
	mov edx,dword ptr [edi+0x2C]
	mov dword ptr [esi+0x2C],edx
	mov eax,dword ptr [edi+0x30]
	mov dword ptr [esi+0x30],eax
	mov ecx,dword ptr [edi+0x34]
	mov dword ptr [esi+0x34],ecx
	mov dl,byte ptr [edi+0x38]
	lea eax,[edi+0x3C]
	push eax
	lea ecx,[esi+0x3C]
	mov byte ptr [esi+0x38],dl
	call ZXString<char>::op_assign
	mov eax,dword ptr [edi+0x40]
	mov ebx,dword ptr [esi+0x40]
	cmp ebx,eax
	je Block5

 Block1:
	mov dword ptr [esi+0x40],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	test ebx,ebx
	je Block5

 Block4:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block5:
	mov eax,dword ptr [edi+0x44]
	mov ebx,dword ptr [esi+0x44]
	cmp ebx,eax
	je Block10

 Block6:
	mov dword ptr [esi+0x44],eax
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block8:
	test ebx,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block10:
	add edi,0x48
	push edi
	lea ecx,[esi+0x48]
	call ZRef<GW_ItemSlotBase>::op_assign_copy
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	ret 4
}
}
// CAdminShopDlg::SetScrollBar
__SUB_CLASS_THIS0(0002A4D0, __thiscall, 60746,  CAdminShopDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xB0]
	mov ecx,dword ptr [eax+0x44]
	lea eax,[esi+0xE0]
	test ecx,ecx
	jne Block2

 Block1:
	lea eax,[esi+0xDC]

 Block2:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block9

 Block3:
	cmp dword ptr [eax-4],5
	jbe Block9

 Block4:
	lea eax,[esi+0xE0]
	test ecx,ecx
	jne Block6

 Block5:
	lea eax,[esi+0xDC]

 Block6:
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block8

 Block7:
	mov eax,0xFFFFFFFC
	jmp Block10

 Block8:
	mov eax,dword ptr [eax-4]
	add eax,0xFFFFFFFC
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	mov ecx,dword ptr [esi+0xC0]
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [esi+0xE4]
	test eax,eax
	je Block15

 Block11:
	cmp dword ptr [eax-4],5
	jbe Block15

 Block12:
	test eax,eax
	jne Block14

 Block13:
	mov ecx,dword ptr [esi+0xC8]
	mov eax,0xFFFFFFFC
	push eax
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret

 Block14:
	mov eax,dword ptr [eax-4]
	mov ecx,dword ptr [esi+0xC8]
	add eax,0xFFFFFFFC
	push eax
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret

 Block15:
	mov ecx,dword ptr [esi+0xC8]
	xor eax,eax
	push eax
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret
}
}
// rc_equip
__SUB(00029650, __cdecl, 146323,  GW_ItemSlotEquip*, GW_ItemSlotBase*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	ret
}
}
// make_act_dir
__SUB(00029640, __cdecl, 146322,  long, long, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [esp+8]
	add eax,eax
	and ecx,1
	or eax,ecx
	ret
}
}
// CAdminShopDlg::OnChildNotify
__SUB_CLASS_THIS(00029C30, __thiscall, 60758,  CAdminShopDlg, void, uint32_t, uint32_t, uint32_t) {
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
	call CAdminShopDlg::OnTabChanged
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
	mov edx,dword ptr [ecx+0xC0]
	mov eax,dword ptr [ecx+0xB0]
	mov eax,dword ptr [eax+0x44]
	mov edx,dword ptr [edx+0x38]
	mov dword ptr [ecx+eax*4+0xB44],edx

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
// CAdminShopDlg::Update
__SUB_CLASS_THIS0(00029CC0, __thiscall, 60746,  CAdminShopDlg, void) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0xD4]
	jmp  CAvatar::Update
}
}
// CAdminShopDlg::SetRet
_SUB_EXCEPTION_HANDLER(2CA60)
__SUB_CLASS_THIS(0002CA60, __thiscall, 60750,  CAdminShopDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2CA60
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
	push 0x4A
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 2
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
// CAdminShopDlg::DrawMoney
_SUB_EXCEPTION_HANDLER(2E9F0)
__SUB_CLASS_THIS(0002E9F0, __thiscall, 60767,  CAdminShopDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2E9F0
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
	push 0x37
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
	mov esi,0x1BF
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
	push 0x38
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
	push 0x40
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
// CAdminShopDlg::ClearToolTip
__SUB_CLASS_THIS0(0002D5E0, __thiscall, 60760,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0xF8
	jmp  CUIToolTip::ClearToolTip
}
}
// CAdminShopDlg::OnPacket
_SUB_EXCEPTION_HANDLER(310F0)
__SUB(000310F0, __cdecl, 60747,  void, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_310F0
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
	mov eax,dword ptr [esp+0x78]
	sub eax,0x16E
	je Block20

 Block1:
	sub eax,1
	jne Block60

 Block2:
	mov esi,dword ptr [esp+0x7C]
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov ebx,eax
	call CInPacket::Decode2
	movzx edi,ax
	test edi,edi
	jne Block11

 Block3:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x78],eax
	mov dword ptr [esp+0x70],edi
	test eax,eax
	je Block10

 Block4:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block10

 Block5:
	add eax,8
	je Block10

 Block6:
	lea esi,[eax-8]
	mov dword ptr [esp+0x44],esi
	test esi,esi
	je Block8

 Block7:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x84],esp
	push 0x1238
	push ecx
	mov dword ptr [esp+0x84],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push ebx
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
	push 0x4A
	lea ecx,[esp+0x5C]
	call COutPacket::_ctor_1
	push 2
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x74],2
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x58]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x70],1
	call ZArray<unsigned char>::RemoveAll
	mov dword ptr [esp+0x70],0xFFFFFFFF
	test esi,esi
	je Block60

 Block9:
	push 0
	lea ecx,[esp+0x44]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret

 Block10:
	xor esi,esi
	mov dword ptr [esp+0x44],esi
	jmp Block8

 Block11:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test eax,eax
	je Block14

 Block12:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CAdminShopDlg::ms_RTTI_CAdminShopDlg
	call edx
	test eax,eax
	je Block60

 Block13:
	mov ecx,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	jmp Block18

 Block14:
	push 0xB78
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x78],eax
	mov dword ptr [esp+0x70],3
	test eax,eax
	je Block16

 Block15:
	mov ecx,eax
	call CAdminShopDlg::_ctor_default
	jmp Block17

 Block16:
	xor eax,eax

 Block17:
	mov dword ptr [esp+0x70],0xFFFFFFFF
	mov ecx,eax

 Block18:
	test ecx,ecx
	je Block60

 Block19:
	push edi
	push ebx
	push esi
	call CAdminShopDlg::SetAdminShopDlg
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret

 Block20:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test eax,eax
	je Block60

 Block21:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CAdminShopDlg::ms_RTTI_CAdminShopDlg
	call edx
	test eax,eax
	je Block60

 Block22:
	mov esi,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test esi,esi
	je Block60

 Block23:
	cmp dword ptr [esi+0xB5C],0
	jne Block25

 Block24:
	push 0x21000003
	lea ecx,[esp+0x1C]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0x18]
	push offset CDisconnectException::THROW_INFO
	lea ecx,[esp+0x20]
	push ecx
	mov dword ptr [esp+0x24],eax
	call _CxxThrowException

 Block25:
	mov edi,dword ptr [esp+0x7C]
	mov ecx,edi
	mov dword ptr [esi+0xB5C],0
	call CInPacket::Decode1
	cmp al,4
	jne Block60

 Block26:
	mov ecx,edi
	call CInPacket::Decode1
	movzx edi,al
	test edi,edi
	jne Block34

 Block27:
	mov eax,dword ptr [esi+0xB58]
	test eax,eax
	jle Block34

 Block28:
	cmp eax,5
	jg Block34

 Block29:
	mov eax,dword ptr [esi+0xC8]
	mov ebx,dword ptr [eax+0x38]
	mov ecx,esi
	call CAdminShopDlg::CmpSellItem
	mov ebp,eax
	cmp ebp,ebx
	jge Block31

 Block30:
	mov ecx,dword ptr [esi+0xC8]
	push ebp
	call CCtrlScrollBar::SetCurPos

 Block31:
	add ebx,4
	cmp ebp,ebx
	jle Block33

 Block32:
	mov ecx,dword ptr [esi+0xC8]
	lea edx,[ebp-4]
	push edx
	call CCtrlScrollBar::SetCurPos

 Block33:
	mov dword ptr [esi+0xB54],ebp

 Block34:
	mov ebp,dword ptr [esi+0xCC]
	cmp edi,1
	je Block42

 Block35:
	cmp edi,2
	je Block42

 Block36:
	cmp edi,3
	je Block42

 Block37:
	cmp edi,6
	je Block42

 Block38:
	cmp edi,7
	je Block42

 Block39:
	cmp edi,8
	je Block42

 Block40:
	cmp edi,0xB
	je Block42

 Block41:
	mov dword ptr [esp+0x14],0
	jmp Block43

 Block42:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 1
	mov ecx,esi
	mov dword ptr [esp+0x18],1
	call edx

 Block43:
	xor ebx,ebx
	mov dword ptr [esp+0x78],ebx
	lea eax,[edi-1]
	mov dword ptr [esp+0x70],4
	cmp eax,0xA
	ja Block56

 Block44:
	cmp EAX, 0
je Block45
cmp EAX, 1
je Block45
cmp EAX, 2
je Block45
cmp EAX, 3
je Block61
cmp EAX, 4
je Block62
cmp EAX, 5
je Block63
cmp EAX, 6
je Block64
cmp EAX, 7
je Block65
cmp EAX, 8
je Block66
cmp EAX, 9
je Block68
cmp EAX, 10
je Block67


 Block45:
	lea eax,[esp+0x20]
	push 0x1239
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x7C]
	mov byte ptr [esp+0x74],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x70],4

 Block46:
	test eax,eax
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	mov ebx,dword ptr [esp+0x78]
	test ebx,ebx
	je Block56

 Block49:
	cmp byte ptr [ebx],0
	je Block56

 Block50:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x40],eax
	mov byte ptr [esp+0x70],0xD
	test eax,eax
	je Block69

 Block51:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block69

 Block52:
	add eax,8
	je Block69

 Block53:
	lea esi,[eax-8]
	mov dword ptr [esp+0x4C],esi
	test esi,esi
	je Block55

 Block54:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block55:
	push 0
	push 0
	push ecx
	lea edx,[esp+0x84]
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push edx
	mov byte ptr [esp+0x80],0xE
	call ZXString<char>::_ctor_copy
	push ebp
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
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0x70],4
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>

 Block56:
	cmp dword ptr [esp+0x14],0
	je Block58

 Block57:
	push 0x4A
	lea ecx,[esp+0x4C]
	call COutPacket::_ctor_1
	push 0
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x74],0xF
	call COutPacket::Encode1
	push ebp
	lea ecx,[esp+0x4C]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x48]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x70],4
	call ZArray<unsigned char>::RemoveAll

 Block58:
	mov dword ptr [esp+0x70],0xFFFFFFFF
	test ebx,ebx
	je Block60

 Block59:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block60:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret

 Block61:
	lea ecx,[esp+0x24]
	push 0x123A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x7C]
	mov byte ptr [esp+0x74],6
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x70],4
	jmp Block46

 Block62:
	lea edx,[esp+0x28]
	push 0x123B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x7C]
	mov byte ptr [esp+0x74],7
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x70],4
	jmp Block46

 Block63:
	lea eax,[esp+0x2C]
	push 0x123C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x7C]
	mov byte ptr [esp+0x74],8
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x70],4
	jmp Block46

 Block64:
	lea ecx,[esp+0x30]
	push 0x123D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x7C]
	mov byte ptr [esp+0x74],9
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x70],4
	jmp Block46

 Block65:
	lea edx,[esp+0x34]
	push 0x123E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x7C]
	mov byte ptr [esp+0x74],0xA
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x70],4
	jmp Block46

 Block66:
	lea eax,[esp+0x38]
	push 0x123F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x7C]
	mov byte ptr [esp+0x74],0xB
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x70],4
	jmp Block46

 Block67:
	lea ecx,[esp+0x3C]
	push 0x1240
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x7C]
	mov byte ptr [esp+0x74],0xC
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x70],4
	jmp Block46

 Block68:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x54],esp
	push 0x16ED
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block56

 Block69:
	xor esi,esi
	mov dword ptr [esp+0x4C],esi
	jmp Block55
}
}
// CAdminShopDlg::IsKindOf
__SUB_CLASS_THIS(0002D610, __thiscall, 60774,  CAdminShopDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CAdminShopDlg::ms_RTTI_CAdminShopDlg
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
// get_gr
__SUB0(00029890, __cdecl, 146324,  _x_com_ptr<IWzGr2D>&) {
__asm {

 Block0:
	mov eax,offset _D_G_GR
	ret
}
}
// CAdminShopDlg::OnTabChanged
__SUB_CLASS_THIS(000297A0, __thiscall, 60750,  CAdminShopDlg, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x38]
	call edx
	ret 4
}
}
// CAdminShopDlg::OnMouseMove
_SUB_EXCEPTION_HANDLER(2CB40)
__SUB_CLASS_THIS(0002CB40, __thiscall, 60754,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2CB40
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
	mov edx,dword ptr [esp+0x4C]
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [esp+0x4C]
	lea ecx,[esp+0x1C]
	push ecx
	push edx
	lea edi,[esi-4]
	push eax
	mov ecx,edi
	call CAdminShopDlg::GetItemIndexFromPoint
	test eax,eax
	jne Block2

 Block1:
	lea ecx,[esi+0xF8]
	call CUIToolTip::ClearToolTip
	xor eax,eax
	jmp Block17

 Block2:
	cmp dword ptr [esp+0x18],0
	je Block5

 Block3:
	mov eax,dword ptr [edi+0xB0]
	cmp dword ptr [eax+0x44],0
	lea eax,[edi+0xE0]
	jne Block6

 Block4:
	lea eax,[edi+0xDC]
	jmp Block6

 Block5:
	lea eax,[esi+0xE0]

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [esp+0x1C]
	mov edi,dword ptr [ecx+edx*8+4]
	lea eax,[ecx+edx*8]
	mov dword ptr [esp+0x34],edi
	test edi,edi
	je Block8

 Block7:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	lea ebp,[edi+0x18]
	mov ecx,ebp
	mov dword ptr [esp+0x40],0
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	sub eax,1
	jne Block14

 Block9:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	lea ecx,[esp+0x28]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,ebp
	call TSecType<long>::GetData
	movzx ecx,byte ptr [ebx+0x11]
	push 0
	lea edx,[esp+0x18]
	push edx
	push ecx
	push eax
	call get_bodypart_from_item
	mov edx,dword ptr [esp+0x24]
	add esp,0x10
	neg edx
	push edx
	push 1
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebx
	call CharacterData::GetItem
	mov ebx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x40],1
	test ebx,ebx
	je Block13

 Block10:
	cmp dword ptr [esp+0x14],5
	jne Block12

 Block11:
	lea ecx,[ebx+0xC]
	call TSecType<long>::GetData
	mov ecx,ebp
	mov dword ptr [esp+0x1C],eax
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
	mov dword ptr [esp+0x18],eax
	mov eax,0x68DB8BAD
	imul dword ptr [esp+0x1C]
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x69
	mov eax,dword ptr [esp+0x18]
	sete cl
	cmp ecx,eax
	jne Block13

 Block12:
	mov edi,dword ptr [edi+0x4C]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x30]
	push 0
	push 0
	push 0
	push edi
	push ebx
	mov ecx,esi
	call eax
	add eax,dword ptr [esp+0x60]
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,dword ptr [esp+0x60]
	lea ecx,[esi+0xF8]
	push eax
	call CUIToolTip::SetToolTip_Equip2
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x40],0
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call ZRef<CAdminShopDlg::AdminShopCommodity>::~ZRef<CAdminShopDlg::AdminShopCommodity>
	jmp Block16

 Block13:
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x40],0
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>

 Block14:
	mov eax,dword ptr [edi+0x4C]
	mov edx,dword ptr [esi]
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	add eax,dword ptr [esp+0x64]
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,dword ptr [esp+0x64]
	lea ecx,[esi+0xF8]
	push eax
	call CUIToolTip::ShowItemToolTip
	lea esi,[edi+4]
	push esi
	mov dword ptr [esp+0x44],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block16

 Block15:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block16:
	mov eax,1

 Block17:
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
// CDisconnectException::~CDisconnectException
__SUB_CLASS_THIS0(00029880, __thiscall, 97649,  CDisconnectException, void) {
__asm {

 Block0:
	ret
}
}
// CAdminShopDlg::SetNPC
_SUB_EXCEPTION_HANDLER(2BB10)
__SUB_CLASS_THIS0(0002BB10, __thiscall, 60746,  CAdminShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2BB10
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
	mov ebp,ecx
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
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
	mov edx,3
	mov dword ptr [esp+0x94],edi
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],edi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x94],1
	cmp ecx,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x1C]
	push edx
	push edi
	push edi
	push edi
	push edi
	push edi
	lea eax,[esp+0x30]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0xD8]
	cmp esi,eax
	je Block9

 Block5:
	mov dword ptr [ebp+0xD8],eax
	cmp eax,edi
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block7:
	cmp esi,edi
	je Block9

 Block8:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block9:
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
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
	cmp eax,edi
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
	cmp eax,edi
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
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,2
	mov ecx,0xD
	mov dword ptr [esp+0x94],ebx
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	cmp eax,edi
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block21:
	mov esi,dword ptr [ebp+0xD8]
	mov byte ptr [esp+0x94],3
	cmp esi,edi
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
	cmp eax,edi
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
	cmp eax,edi
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
	cmp eax,edi
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
	cmp eax,edi
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
	cmp eax,edi
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	mov ecx,dword ptr [ebp+0xD8]
	mov byte ptr [esp+0x94],5
	cmp ecx,edi
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
	push 0x38
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x94],bl
	cmp word ptr [esp+0x28],si
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,edi
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
	cmp eax,edi
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
	mov esi,dword ptr [ebp+0xD8]
	cmp esi,edi
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
	cmp eax,edi
	jge Block49

 Block48:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block49:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,6
	mov edx,0xD
	mov dword ptr [esp+0x94],ebx
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],eax
	cmp eax,edi
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block51:
	mov esi,dword ptr [ebp+0xD8]
	mov byte ptr [esp+0x94],7
	cmp esi,edi
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
	cmp eax,edi
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
	cmp eax,edi
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
	cmp eax,edi
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov esi,dword ptr [ebp+0xD8]
	cmp esi,edi
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
	cmp eax,edi
	jge Block65

 Block64:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block65:
	mov esi,dword ptr [ebp+0xD8]
	cmp esi,edi
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
	cmp eax,edi
	jge Block69

 Block68:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block69:
	mov ecx,dword ptr [ebp+0xCC]
	push ecx
	call CNpcTemplate::GetNpcTemplate
	add esp,4
	int 3// TODO: 	mov dword ptr [esp+0x78],offset ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::`vftable'
	mov dword ptr [esp+0x80],edi
	mov dword ptr [esp+0x84],edi
	mov dword ptr [esp+0x88],edi
	mov ecx,dword ptr [eax+0x34]
	mov esi,8
	mov dword ptr [esp+0x94],esi
	cmp ecx,edi
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
	mov ecx,dword ptr [ebp+0xD8]
	mov byte ptr [esp+0x94],9
	cmp ecx,edi
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
	cmp eax,edi
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
	cmp eax,edi
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
	cmp eax,edi
	je Block112

 Block80:
	lea ebx,[ebx]

 Block81:
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
	cmp eax,edi
	jl Block1

 Block82:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x98],0xA
	call ebx
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block83:
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x98],0xB
	call ebx
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block84:
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0x98],0xC
	call ebx
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block85:
	mov eax,dword ptr [esi+0x10]
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],eax
	mov ecx,dword ptr [ebp+0xD8]
	mov esi,dword ptr [esi+0xC]
	mov byte ptr [esp+0x94],0xE
	cmp ecx,edi
	je Block3

 Block86:
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
	jne Block89

 Block87:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	cmp eax,edi
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x94],0xD
	jne Block97

 Block91:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,edi
	je Block93

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block93:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block94:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x94],0xC
	jne Block98

 Block95:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block99

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block97:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x28]
	push eax
	call esi
	jmp Block94

 Block98:
	lea edx,[esp+0x18]
	push edx
	call esi

 Block99:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x94],0xB
	jne Block102

 Block100:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,edi
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea ecx,[esp+0x38]
	push ecx
	call esi

 Block103:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x94],0xA
	jne Block106

 Block104:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,edi
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea eax,[esp+0x48]
	push eax
	call esi

 Block107:
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x94],8
	jne Block110

 Block108:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,edi
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea edx,[esp+0x58]
	push edx
	call esi

 Block111:
	cmp dword ptr [esp+0x14],edi
	jne Block81

 Block112:
	lea eax,[esp+0x48]
	push eax
	call ebx
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block114

 Block113:
	push eax
	call _com_issue_error

 Block114:
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
	cmp eax,edi
	jge Block116

 Block115:
	push eax
	call _com_issue_error

 Block116:
	mov ecx,dword ptr [ebp+0xD8]
	mov byte ptr [esp+0x94],0x10
	cmp ecx,edi
	jne Block118

 Block117:
	push 0x80004003
	call _com_issue_error

 Block118:
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x5C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x94],bl
	cmp word ptr [esp+0x58],si
	jne Block121

 Block119:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,edi
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block122:
	mov byte ptr [esp+0x94],8
	cmp word ptr [esp+0x48],si
	jne Block125

 Block123:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,edi
	je Block126

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block126

 Block125:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block126:
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
// CAdminShopDlg::AdminShopCommodity::~AdminShopCommodity
_SUB_EXCEPTION_HANDLER(2C6B0)
__SUB_CLASS_THIS0(0002C6B0, __thiscall, 60788,  CAdminShopDlg::AdminShopCommodity, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2C6B0
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
	mov eax,dword ptr [esi+0x4C]
	mov dword ptr [esp+0x14],5
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0x4C]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0x4C]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0x4C],0

 Block5:
	mov eax,dword ptr [esi+0x44]
	mov byte ptr [esp+0x14],4
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,dword ptr [esi+0x40]
	mov byte ptr [esp+0x14],3
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov eax,dword ptr [esi+0x3C]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov eax,dword ptr [esi+0x20]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block13

 Block12:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block13:
	mov eax,dword ptr [esi+0x14]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block15

 Block14:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block15:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CAdminShopDlg::AskItemCount
_SUB_EXCEPTION_HANDLER(2D310)
__SUB_CLASS_THIS(0002D310, __thiscall, 60770,  CAdminShopDlg, long, const char*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D310
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
// CDisconnectException::GetNoticeIdx
__SUB_CLASS_THIS0(00121060, __thiscall, 97652,  CDisconnectException, long) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx]
	lea eax,[ecx-0x21000001]
	cmp eax,4
	ja Block7

 Block1:
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


 Block2:
	mov eax,0x16
	ret

 Block3:
	mov eax,0x17
	ret

 Block4:
	mov eax,0x18
	ret

 Block5:
	mov eax,0x19
	ret

 Block6:
	mov eax,0x23
	ret

 Block7:
	or eax,0xFFFFFFFF
	ret
}
}
// CAdminShopDlg::CAdminShopDlg
_SUB_EXCEPTION_HANDLER(2D4D0)
__SUB_CLASS_THIS0(0002D4D0, __thiscall, 60744,  CAdminShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D4D0
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
	int 3// TODO: 	mov dword ptr [esi],offset CAdminShopDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CAdminShopDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CAdminShopDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esi+0xD8],edi
	mov dword ptr [esi+0xDC],edi
	mov dword ptr [esi+0xE0],edi
	mov dword ptr [esi+0xE4],edi
	mov dword ptr [esi+0xE8],edi
	mov dword ptr [esi+0xEC],edi
	mov dword ptr [esi+0xF0],edi
	mov dword ptr [esi+0xF4],edi
	mov dword ptr [esi+0xF8],edi
	lea ecx,[esi+0xFC]
	mov byte ptr [esp+0x18],0x11
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xB64],edi
	mov dword ptr [esi+0xB68],edi
	mov dword ptr [esi+0xB6C],edi
	mov dword ptr [esi+0xB70],edi
	mov dword ptr [esi+0xB74],edi
	push 1
	push edi
	push 1
	push offset _S_UIUIWINDOW2IMGSH__10
	mov ecx,esi
	mov byte ptr [esp+0x28],0x13
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
// CAdminShopDlg::SetUserItems
_SUB_EXCEPTION_HANDLER(2FF20)
__SUB_CLASS_THIS(0002FF20, __thiscall, 60765,  CAdminShopDlg, void, long, ZArray<ZRef<CAdminShopDlg::AdminShopCommodity> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2FF20
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
	mov dword ptr [esp+0x18],ecx
	xor ebx,ebx
	cmp dword ptr [esp+0x50],ebx
	jne Block2

 Block1:
	mov eax,dword ptr [ecx+0xB8]
	mov eax,dword ptr [eax+0x44]
	inc eax
	mov dword ptr [esp+0x50],eax

 Block2:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x38]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x1C],ebp
	cmp eax,ebx
	je Block7

 Block3:
	lea esi,[eax-0x10]
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
	mov dword ptr [esp+0x3C],ebx

 Block7:
	mov ecx,dword ptr [esp+0x54]
	call ZArray<ZRef<CAdminShopDlg::AdminShopCommodity>>::RemoveAll
	mov ecx,dword ptr [esp+0x50]
	push ecx
	mov esi,1
	mov ecx,ebp
	mov dword ptr [esp+0x18],esi
	call CharacterData::GetItemSlotCount
	cmp eax,esi
	jl Block37

 Block8:
	jmp Block10

 Block9:
	mov ebp,dword ptr [esp+0x1C]

 Block10:
	mov edx,dword ptr [esp+0x50]
	push esi
	push edx
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebp
	call CharacterData::GetItem
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block15

 Block11:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	mov ecx,dword ptr [esp+0x24]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x24]
	cmp ecx,ebx
	je Block14

 Block13:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block14:
	mov dword ptr [esp+0x24],ebx

 Block15:
	cmp ebp,ebx
	je Block36

 Block16:
	lea edi,[ebp+0xC]
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsQuestItem
	test eax,eax
	jne Block36

 Block17:
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsNotSaleItem
	test eax,eax
	jne Block36

 Block18:
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	jne Block36

 Block19:
	mov ecx,dword ptr [ebp+0x18]
	or ecx,dword ptr [ebp+0x1C]
	jne Block36

 Block20:
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x48],ebx
	xor esi,esi
	jmp Block22

 Block22:
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [ecx+0xE0]
	cmp eax,ebx
	je Block27

 Block23:
	cmp esi,dword ptr [eax-4]
	jae Block27

 Block24:
	mov edx,eax
	lea eax,[edx+esi*8]
	mov eax,dword ptr [eax+4]
	lea ecx,[eax+0x18]
	call TSecType<long>::GetData
	mov ecx,edi
	mov ebx,eax
	call TSecType<long>::GetData
	cmp ebx,eax
	je Block26

 Block25:
	inc esi
	xor ebx,ebx
	jmp Block22

 Block26:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0xE0]
	lea edx,[ecx+esi*8]
	push edx
	lea ecx,[esp+0x34]
	call ZRef<CAdminShopDlg::AdminShopCommodity>::op_assign_copy
	mov edi,dword ptr [esp+0x34]
	xor ebx,ebx
	cmp edi,ebx
	jne Block28

 Block27:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	jmp Block36

 Block28:
	cmp byte ptr [edi+0x38],bl
	je Block31

 Block29:
	lea esi,[edi+4]
	push esi
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block35

 Block30:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx
	jmp Block35

 Block31:
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x2C],ebx
	call ZRef<CAdminShopDlg::AdminShopCommodity>::_Alloc
	mov esi,dword ptr [esp+0x2C]
	push edi
	mov ecx,esi
	mov byte ptr [esp+0x4C],1
	call CAdminShopDlg::AdminShopCommodity::operator=
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esi+0x24],eax
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0x20]
	mov ecx,ebp
	call eax
	push ebp
	lea ecx,[esi+0x48]
	mov dword ptr [esi+0x28],eax
	call ZRef<GW_ItemSlotBase>::op_assign_ptr
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [esp+0x58]
	push 0xFFFFFFFF
	call ZArray<ZRef<CAdminShopDlg::AdminShopCommodity>>::InsertBefore
	mov ecx,eax
	call ZRef<CAdminShopDlg::AdminShopCommodity>::op_assign_copy
	lea ebp,[esi+4]
	push ebp
	mov byte ptr [esp+0x4C],bl
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block33

 Block32:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block33:
	lea esi,[edi+4]
	push esi
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block35

 Block34:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block35:
	mov dword ptr [esp+0x34],ebx

 Block36:
	mov esi,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x50]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	inc esi
	mov dword ptr [esp+0x18],esi
	call CharacterData::GetItemSlotCount
	cmp esi,eax
	jle Block9

 Block37:
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
// CAdminShopDlg::SendTradeRequest
_SUB_EXCEPTION_HANDLER(30220)
__SUB_CLASS_THIS0(00030220, __thiscall, 60746,  CAdminShopDlg, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_30220
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
	mov edi,ecx
	mov dword ptr [esp+0x28],edi
	xor esi,esi
	mov dword ptr [esp+0x24],esi
	cmp dword ptr [edi+0xB5C],esi
	jne Block54

 Block1:
	mov dword ptr [esp+0x30],esi
	mov eax,dword ptr [edi+0xB4C]
	mov dword ptr [esp+0x68],esi
	cmp eax,esi
	jne Block12

 Block2:
	mov edx,dword ptr [edi+0xB50]
	cmp edx,esi
	jl Block53

 Block3:
	mov ecx,dword ptr [edi+0xB0]
	lea eax,[edi+0xE0]
	cmp dword ptr [ecx+0x44],esi
	jne Block5

 Block4:
	lea eax,[edi+0xDC]

 Block5:
	mov eax,dword ptr [eax]
	cmp eax,esi
	jne Block7

 Block6:
	xor eax,eax
	jmp Block8

 Block7:
	mov eax,dword ptr [eax-4]

 Block8:
	cmp edx,eax
	jae Block53

 Block9:
	lea eax,[edi+0xE0]
	cmp dword ptr [ecx+0x44],esi
	jne Block11

 Block10:
	lea eax,[edi+0xDC]

 Block11:
	mov eax,dword ptr [eax]
	lea ecx,[eax+edx*8]
	push ecx
	jmp Block19

 Block12:
	cmp eax,1
	jne Block53

 Block13:
	mov ecx,dword ptr [edi+0xB54]
	cmp ecx,esi
	jl Block53

 Block14:
	mov eax,dword ptr [edi+0xE4]
	cmp eax,esi
	jne Block16

 Block15:
	xor eax,eax
	jmp Block17

 Block16:
	mov eax,dword ptr [eax-4]

 Block17:
	cmp ecx,eax
	jae Block53

 Block18:
	mov edx,dword ptr [edi+0xE4]
	lea eax,[edx+ecx*8]
	push eax

 Block19:
	lea ecx,[esp+0x30]
	call ZRef<CAdminShopDlg::AdminShopCommodity>::op_assign_copy
	mov ebp,dword ptr [esp+0x30]
	cmp byte ptr [ebp+0x38],0
	jne Block53

 Block20:
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [esp+0x20],esi
	mov dword ptr [esp+0x1C],1
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x20],ebx
	call ZRef<CharacterData>::~ZRef<CharacterData>
	cmp dword ptr [ebp+0x2C],esi
	jle Block35

 Block21:
	lea ecx,[ebp+0x18]
	mov dword ptr [esp+0x20],ecx
	call TSecType<long>::GetData
	push eax
	call is_treat_singly_0
	add esp,4
	test eax,eax
	je Block24

 Block22:
	push esi
	push esi
	push esi
	push esi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x361
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	je Block28

 Block23:
	jmp Block53

 Block24:
	lea eax,[esp+0x24]
	push 0x362
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x34]
	mov eax,dword ptr [eax]
	push ecx
	push 1
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x74],1
	call CAdminShopDlg::AskItemCount
	mov esi,eax
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x18],esi
	mov byte ptr [esp+0x68],0
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	test esi,esi
	jle Block53

 Block27:
	cmp esi,dword ptr [ebp+0x34]
	jg Block53

 Block28:
	mov eax,dword ptr [ebp+0x30]
	imul dword ptr [esp+0x18]
	mov ecx,ebx
	mov dword ptr [esp+0x34],eax
	mov esi,edx
	call GW_CharacterStat::_ZtlSecureGet_nMoney
	test esi,esi
	jl Block34

 Block29:
	jg Block31

 Block30:
	cmp dword ptr [esp+0x34],0
	jbe Block34

 Block31:
	cdq
	cmp edx,esi
	jg Block72

 Block32:
	jl Block34

 Block33:
	cmp eax,dword ptr [esp+0x34]
	jae Block72

 Block34:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x1A8B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block53

 Block35:
	mov dword ptr [esp+0x38],esi
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [esp+0x68],2
	cmp eax,esi
	jne Block48

 Block36:
	cmp dword ptr [ebp+0x24],esi
	jne Block48

 Block37:
	lea ecx,[ebp+0x18]
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	push esi
	mov ecx,ebx
	mov ebp,1
	call CharacterData::GetItemSlotCount
	cmp eax,ebp
	jl Block50

 Block38:
	push ebp
	push esi
	lea eax,[esp+0x4C]
	push eax
	mov ecx,ebx
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x44]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	je Block45

 Block39:
	lea ebx,[edi+0xC]
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsQuestItem
	test eax,eax
	jne Block44

 Block40:
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsNotSaleItem
	test eax,eax
	jne Block44

 Block41:
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	jne Block44

 Block42:
	mov ecx,dword ptr [edi+0x18]
	or ecx,dword ptr [edi+0x1C]
	jne Block44

 Block43:
	mov eax,dword ptr [esp+0x30]
	add eax,0x18
	push eax
	mov ecx,ebx
	call TSecType<long>::op_eq_0
	test eax,eax
	jne Block47

 Block44:
	mov ebx,dword ptr [esp+0x20]

 Block45:
	push esi
	mov ecx,ebx
	inc ebp
	call CharacterData::GetItemSlotCount
	cmp ebp,eax
	jle Block38

 Block46:
	jmp Block50

 Block47:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x20]
	mov ecx,edi
	mov dword ptr [esp+0x1C],ebp
	call eax
	push edi
	lea ecx,[esp+0x38]
	mov esi,eax
	call ZRef<GW_ItemSlotBase>::op_assign_ptr
	mov edi,dword ptr [esp+0x28]
	mov ebx,dword ptr [esp+0x20]
	mov ebp,dword ptr [esp+0x30]
	jmp Block49

 Block48:
	mov ecx,dword ptr [ebp+0x24]
	lea edx,[ebp+0x48]
	mov dword ptr [esp+0x1C],ecx
	push edx
	lea ecx,[esp+0x38]
	mov esi,eax
	call ZRef<GW_ItemSlotBase>::op_assign_copy

 Block49:
	test esi,esi
	jne Block55

 Block50:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push 0x1241
	push eax

 Block51:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block52:
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x68],0
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>

 Block53:
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	call ZRef<CAdminShopDlg::AdminShopCommodity>::~ZRef<CAdminShopDlg::AdminShopCommodity>

 Block54:
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

 Block55:
	mov ecx,dword ptr [esp+0x38]
	test ecx,ecx
	je Block58

 Block56:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	call eax
	test eax,eax
	je Block58

 Block57:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0xD78
	push ecx
	jmp Block51

 Block58:
	lea ecx,[ebp+0x18]
	mov dword ptr [esp+0x20],ecx
	call TSecType<long>::GetData
	push eax
	call is_treat_singly_0
	add esp,4
	test eax,eax
	je Block61

 Block59:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x363
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	je Block65

 Block60:
	jmp Block52

 Block61:
	lea eax,[esp+0x28]
	push 0x364
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push esi
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x74],3
	call CAdminShopDlg::AskItemCount
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x68],2
	test ecx,ecx
	je Block63

 Block62:
	add ecx,0xFFFFFFF4
	push ecx
	call ZXString<char>::_Release
	mov eax,dword ptr [esp+0x1C]
	add esp,4

 Block63:
	test eax,eax
	jle Block52

 Block64:
	cmp eax,esi
	jg Block52

 Block65:
	mov esi,dword ptr [esp+0x38]
	test esi,esi
	je Block68

 Block66:
	mov ecx,dword ptr [esp+0x20]
	call TSecType<long>::GetData
	mov edx,dword ptr [esp+0x1C]
	mov ecx,eax
	push edx
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,ebx
	call CharacterData::GetItem
	mov dword ptr [esp+0x24],1
	cmp dword ptr [eax+4],esi
	jne Block68

 Block67:
	xor bl,bl
	jmp Block69

 Block68:
	mov bl,1

 Block69:
	test byte ptr [esp+0x24],1
	je Block71

 Block70:
	lea ecx,[esp+0x44]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>

 Block71:
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x68],0
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test bl,bl
	jne Block53

 Block72:
	push 0x4A
	lea ecx,[esp+0x50]
	call COutPacket::_ctor_1
	push 1
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0x6C],4
	call COutPacket::Encode1
	lea ecx,[ebp+0xC]
	call TSecType<long>::GetData
	push eax
	lea ecx,[esp+0x50]
	call COutPacket::Encode4
	mov edx,dword ptr [esp+0x18]
	push edx
	lea ecx,[esp+0x50]
	call COutPacket::Encode2
	mov eax,dword ptr [esp+0x1C]
	push eax
	lea ecx,[esp+0x50]
	call COutPacket::Encode2
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [edi+0xB5C],1
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[edi+0xE8]
	push edx
	push eax
	mov ecx,edi
	mov dword ptr [edi+0xB58],eax
	call CAdminShopDlg::SetUserItems
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0x68],0
	call ZArray<unsigned char>::RemoveAll
	jmp Block53
}
}
// SendPacket
__SUB(00029B80, __cdecl, 146327,  void, const COutPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	push eax
	call CClientSocket::SendPacket
	ret
}
}
// CAdminShopDlg::SetAdminShopDlg
_SUB_EXCEPTION_HANDLER(307C0)
__SUB_CLASS_THIS(000307C0, __thiscall, 60749,  CAdminShopDlg, void, CInPacket&, unsigned long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_307C0
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
	mov ebp,ecx
	mov dword ptr [esp+0x18],ebp
	mov eax,dword ptr [esp+0x80]
	mov dword ptr [ebp+0xCC],eax
	or eax,0xFFFFFFFF
	xor ebx,ebx
	lea ecx,[ebp+0xDC]
	mov dword ptr [ebp+0xB4C],eax
	mov dword ptr [ebp+0xB54],eax
	mov dword ptr [ebp+0xB50],eax
	mov dword ptr [ebp+0xB5C],ebx
	call ZArray<ZRef<CAdminShopDlg::AdminShopCommodity>>::RemoveAll
	lea ecx,[ebp+0xE0]
	call ZArray<ZRef<CAdminShopDlg::AdminShopCommodity>>::RemoveAll
	lea ecx,[ebp+0xE4]
	call ZArray<ZRef<CAdminShopDlg::AdminShopCommodity>>::RemoveAll
	lea ecx,[ebp+0xE8]
	call ZArray<ZRef<CAdminShopDlg::AdminShopCommodity>>::RemoveAll
	cmp dword ptr [esp+0x84],ebx
	mov edi,dword ptr [esp+0x7C]
	mov dword ptr [esp+0x1C],ebx
	jle Block74

 Block1:
	push ebx
	call ZRefCounted_AllocHelper<CAdminShopDlg::AdminShopCommodity>::call
	mov esi,eax
	add esp,4
	mov dword ptr [esi+4],1
	mov dword ptr [esp+0x38],esi
	mov ecx,edi
	mov dword ptr [esp+0x74],ebx
	call CInPacket::Decode4
	lea ecx,[esi+0xC]
	push eax
	call TSecType<long>::SetData
	mov ecx,edi
	call CInPacket::Decode4
	lea ebp,[esi+0x18]
	push eax
	mov ecx,ebp
	call TSecType<long>::SetData
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esi+0x2C],eax
	cdq
	xor eax,edx
	sub eax,edx
	mov ecx,edi
	mov dword ptr [esi+0x30],eax
	call CInPacket::Decode1
	mov ecx,edi
	mov byte ptr [esi+0x38],al
	call CInPacket::Decode2
	movzx ecx,ax
	mov dword ptr [esi+0x34],ecx
	mov ecx,ebp
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[esp+0x24]
	push edx
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esi+0x3C]
	mov byte ptr [esp+0x78],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x74],0
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	mov ecx,ebp
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebx
	push 1
	push eax
	lea eax,[esp+0x30]
	push eax
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x40]
	cmp edi,eax
	je Block8

 Block4:
	mov dword ptr [esi+0x40],eax
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	cmp edi,ebx
	je Block8

 Block7:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block8:
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block10:
	lea ecx,[esp+0x28]
	push 0x3D0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[esi+0x44]
	push ebx
	push ecx
	push eax
	mov byte ptr [esp+0x80],2
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x74],0
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block12:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x4C]
	push edx
	call edi
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block75

 Block13:
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0x78],3
	call edi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block75

 Block14:
	mov edi,dword ptr [esi+0x40]
	mov byte ptr [esp+0x74],4
	cmp edi,ebx
	je Block76

 Block15:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x80]
	push ecx
	push edi
	mov dword ptr [esp+0x88],ebx
	call edx
	cmp eax,ebx
	jge Block17

 Block16:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block17:
	mov edi,dword ptr [esi+0x40]
	mov ebp,dword ptr [esp+0x80]
	cmp edi,ebx
	je Block76

 Block18:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block20:
	mov edi,dword ptr [esi+0x44]
	cmp edi,ebx
	je Block76

 Block21:
	mov edx,dword ptr [esp+0x4C]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x64]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x68]
	mov ecx,dword ptr [ecx+0x2C]
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
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x34]
	push ebp
	push eax
	push edi
	call ecx
	cmp eax,ebx
	jge Block23

 Block22:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block23:
	mov edi,8
	mov byte ptr [esp+0x74],3
	cmp word ptr [esp+0x3C],di
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebx
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov byte ptr [esp+0x74],0
	cmp word ptr [esp+0x4C],di
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	cmp eax,ebx
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov edi,dword ptr [esi+0x40]
	cmp edi,ebx
	je Block76

 Block32:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x6C]
	lea ecx,[esp+0x80]
	push ecx
	push edi
	mov dword ptr [esp+0x88],ebx
	call edx
	cmp eax,ebx
	jge Block34

 Block33:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block34:
	mov edi,dword ptr [esi+0x44]
	cmp edi,ebx
	je Block76

 Block35:
	mov ecx,dword ptr [esp+0x80]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x70]
	push ecx
	push edi
	call edx
	cmp eax,ebx
	jge Block37

 Block36:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block37:
	mov edi,dword ptr [esi+0x40]
	cmp edi,ebx
	je Block76

 Block38:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x80]
	push ecx
	push edi
	mov dword ptr [esp+0x88],ebx
	call edx
	cmp eax,ebx
	jge Block40

 Block39:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block40:
	mov edi,dword ptr [esi+0x44]
	cmp edi,ebx
	je Block76

 Block41:
	mov ecx,dword ptr [esp+0x80]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x78]
	push ecx
	push edi
	call edx
	cmp eax,ebx
	jge Block43

 Block42:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block43:
	mov eax,3
	mov ecx,0x64
	mov word ptr [esp+0x5C],ax
	mov dword ptr [esp+0x64],ecx
	mov edi,dword ptr [esi+0x44]
	mov edx,dword ptr [esi+0x40]
	mov byte ptr [esp+0x74],5
	cmp edi,ebx
	je Block76

 Block44:
	mov ebp,dword ptr [esp+0x5C]
	mov ebx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x70]
	mov dword ptr [eax+4],ebp
	push edx
	mov edx,dword ptr [ebx+0x80]
	xor ebp,ebp
	push ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x80]
	push ebp
	push edi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,ebp
	jge Block46

 Block45:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block46:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0x74],0
	jne Block49

 Block47:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	cmp eax,ebp
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov eax,dword ptr [esi+0x44]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x84],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block52

 Block51:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block52:
	call make_gray_canvas
	add esp,4
	lea ecx,[esi+0x18]
	call TSecType<long>::GetData
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemSlot
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x74],6
	cmp eax,ebp
	je Block54

 Block53:
	add eax,4
	push eax
	call ebx

 Block54:
	mov eax,dword ptr [esi+0x4C]
	cmp eax,ebp
	je Block59

 Block55:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block58

 Block56:
	mov eax,dword ptr [esi+0x4C]
	add eax,4
	push eax
	call ebx
	mov ecx,dword ptr [esi+0x4C]
	cmp ecx,ebp
	je Block58

 Block57:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block58:
	mov dword ptr [esi+0x4C],ebp

 Block59:
	mov ecx,dword ptr [edi+4]
	mov dword ptr [esi+0x4C],ecx
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x74],0
	cmp eax,ebp
	je Block64

 Block60:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block63

 Block61:
	mov edx,dword ptr [esp+0x30]
	add edx,4
	push edx
	call ebx
	mov ecx,dword ptr [esp+0x30]
	cmp ecx,ebp
	je Block63

 Block62:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block63:
	mov dword ptr [esp+0x30],ebp

 Block64:
	mov dword ptr [esi+0x24],ebp
	mov dword ptr [esi+0x28],ebp
	cmp dword ptr [esi+0x2C],ebp
	mov ebp,dword ptr [esp+0x18]
	push 0xFFFFFFFF
	lea ecx,[ebp+0xDC]
	jg Block66

 Block65:
	lea ecx,[ebp+0xE0]

 Block66:
	call ZArray<ZRef<CAdminShopDlg::AdminShopCommodity>>::InsertBefore
	lea ebx,[esi+4]
	push ebx
	mov edi,eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block71

 Block67:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block70

 Block68:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	test ecx,ecx
	je Block70

 Block69:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block70:
	mov dword ptr [edi+4],0

 Block71:
	push ebx
	mov dword ptr [edi+4],esi
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block73

 Block72:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block73:
	mov eax,dword ptr [esp+0x1C]
	mov edi,dword ptr [esp+0x7C]
	inc eax
	xor ebx,ebx
	cmp eax,dword ptr [esp+0x84]
	mov dword ptr [esp+0x38],0
	mov dword ptr [esp+0x1C],eax
	jl Block1

 Block74:
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [ebp+0xB60],eax
	lea eax,[ebp+0xE4]
	push eax
	push ebx
	mov ecx,ebp
	call CAdminShopDlg::SetUserItems
	mov ecx,ebp
	call CAdminShopDlg::SetScrollBar
	mov ecx,ebp
	call CAdminShopDlg::SetAvatar
	mov ecx,ebp
	call CAdminShopDlg::SetNPC
	push ebx
	mov ecx,ebp
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x64
	ret 0xC

 Block75:
	push eax
	call _com_issue_error

 Block76:
	push 0x80004003
	call _com_issue_error
}
}
// CAdminShopDlg::~CAdminShopDlg
_SUB_EXCEPTION_HANDLER(2D640)
__SUB_CLASS_THIS0(0002D640, __thiscall, 60746,  CAdminShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D640
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
	int 3// TODO: 	mov dword ptr [esi],offset CAdminShopDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CAdminShopDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CAdminShopDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB64]
	mov dword ptr [esp+0x20],0x12
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0xFC]
	mov byte ptr [esp+0x20],0x11
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0xF8]
	xor ebx,ebx
	mov byte ptr [esp+0x20],0x10
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xF4]
	mov byte ptr [esp+0x20],0xF
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xF0]
	mov byte ptr [esp+0x20],0xE
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xEC]
	mov byte ptr [esp+0x20],0xD
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	lea ecx,[esi+0xE8]
	mov byte ptr [esp+0x20],0xC
	call ZArray<ZRef<CAdminShopDlg::AdminShopCommodity>>::RemoveAll
	lea ecx,[esi+0xE4]
	mov byte ptr [esp+0x20],0xB
	call ZArray<ZRef<CAdminShopDlg::AdminShopCommodity>>::RemoveAll
	lea ecx,[esi+0xE0]
	mov byte ptr [esp+0x20],0xA
	call ZArray<ZRef<CAdminShopDlg::AdminShopCommodity>>::RemoveAll
	lea ecx,[esi+0xDC]
	mov byte ptr [esp+0x20],9
	call ZArray<ZRef<CAdminShopDlg::AdminShopCommodity>>::RemoveAll
	mov eax,dword ptr [esi+0xD8]
	mov byte ptr [esp+0x20],8
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0xD4]
	mov byte ptr [esp+0x20],7
	cmp eax,ebx
	je Block15

 Block11:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block14

 Block13:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block14:
	mov dword ptr [esi+0xD4],ebx

 Block15:
	lea edi,[esi+0xC4]
	mov byte ptr [esp+0x20],6
	cmp dword ptr [edi+4],ebx
	je Block17

 Block16:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block17:
	lea edi,[esi+0xBC]
	mov byte ptr [esp+0x20],5
	cmp dword ptr [edi+4],ebx
	je Block19

 Block18:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block19:
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
// CAdminShopDlg::OnCreate
_SUB_EXCEPTION_HANDLER(2ECD0)
__SUB_CLASS_THIS(0002ECD0, __thiscall, 60751,  CAdminShopDlg, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2ECD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x6C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp+0x24],esi
	push 0
	push 0
	lea ebx,[esi+0xB64]
	push esi
	mov ecx,ebx
	call CLayoutMan::Init
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x14]
	push eax
	call edi
	lea ecx,[ebp+0x14]
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
	call edi
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
	lea ecx,[ebp+0x14]
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
	lea eax,[ebp+4]
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xF8]
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
	cmp word ptr [ebp+4],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],1
	jne Block12

 Block10:
	mov eax,dword ptr [ebp+0xC]
	xor ecx,ecx
	mov word ptr [ebp+4],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[ebp+4]
	push edx
	call edi

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
	call edi

 Block17:
	cmp word ptr [ebp+0x14],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block20

 Block18:
	mov eax,dword ptr [ebp+0x1C]
	xor edx,edx
	mov word ptr [ebp+0x14],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp+0x14]
	push eax
	call edi

 Block21:
	xor eax,eax
	mov dword ptr [ebp-0x60],eax
	mov dword ptr [ebp-0x6C],1
	mov dword ptr [ebp-0x68],eax
	mov dword ptr [ebp-0x64],eax
	push eax
	push eax
	push eax
	push 2
	push offset _S_UIUIWINDOW2IMGSH__7
	lea ecx,[ebp+0x60]
	push ecx
	mov ecx,ebx
	mov dword ptr [ebp-4],4
	call CLayoutMan::AddButton
	cmp dword ptr [ebp+0x64],0
	je Block23

 Block22:
	push 0
	lea ecx,[ebp+0x60]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block23:
	push 0
	push 0
	push 0
	push 0x3E8
	push offset _S_UIUIWINDOW2IMGSH__6
	lea edx,[ebp+0x60]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddButton
	cmp dword ptr [ebp+0x64],0
	je Block25

 Block24:
	push 0
	lea ecx,[ebp+0x60]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block25:
	push 0
	push 0
	push 0
	push 0x3E9
	push offset _S_UIUIWINDOW2IMGSH__5
	lea eax,[ebp+0x60]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	cmp dword ptr [ebp+0x64],0
	je Block27

 Block26:
	push 0
	lea ecx,[ebp+0x60]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block27:
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],5
	test eax,eax
	je Block29

 Block28:
	mov ecx,eax
	call CCtrlTab::_ctor_default
	jmp Block30

 Block29:
	xor eax,eax

 Block30:
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block38

 Block31:
	add eax,8
	je Block38

 Block32:
	lea edi,[eax-8]
	test edi,edi
	je Block34

 Block33:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block34:
	mov eax,dword ptr [esi+0xB0]
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [ebp+0x64],eax
	test eax,eax
	je Block36

 Block35:
	push 0
	lea ecx,[ebp+0x60]
	call ZRef<CCtrlTab>::_ReleaseRaw

 Block36:
	mov ecx,dword ptr [esi+0xB0]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0
	push 0xDE
	push 0x5F
	push 5
	mov ebx,7
	push ebx
	push 0x3EA
	push esi
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
	jge Block39

 Block37:
	push eax
	call _com_issue_error

 Block38:
	xor edi,edi
	jmp Block34

 Block39:
	lea eax,[ebp+0x14]
	push eax
	mov byte ptr [ebp-4],6
	call esi
	lea ecx,[ebp+0x14]
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
	lea edx,[ebp-0x1C]
	push edx
	lea eax,[ebp+0x14]
	push eax
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGSH__4
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],8
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	lea ecx,[ebp-0x5C]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x30]
	mov dword ptr [ebp+0x30],0
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
	mov edi,8
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x5C],di
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
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp+0x14],di
	jne Block53

 Block51:
	mov eax,dword ptr [ebp+0x1C]
	xor ecx,ecx
	mov word ptr [ebp+0x14],cx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[ebp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x1C],di
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	lea edx,[ebp+4]
	push edx
	call esi
	lea eax,[ebp+4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block60

 Block59:
	push eax
	call _com_issue_error

 Block60:
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],0xE
	call esi
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	push 0
	push 0
	lea eax,[ebp+4]
	push eax
	lea ecx,[ebp-0x2C]
	push ecx
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	mov bl,0xF
	push offset _S_UIUIWINDOW2IMGSH__3
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x10
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	lea edx,[ebp-0x3C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x11
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x2C]
	mov dword ptr [ebp+0x2C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block67

 Block65:
	cmp eax,0x80004002
	je Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	mov esi,8
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x3C],si
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov byte ptr [ebp-4],0x14
	cmp word ptr [ebp-0x2C],si
	jne Block74

 Block72:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+4],si
	jne Block78

 Block76:
	mov eax,dword ptr [ebp+0xC]
	xor ecx,ecx
	mov word ptr [ebp+4],cx
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea edx,[ebp+4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov eax,0x20
	call __chkstk
	mov eax,0x20
	mov esi,esp
	call __chkstk
	mov edi,esp
	push 1
	push 0
	push 0
	push 0xA
	push esi
	push 2
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ebx,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x16
	test ebx,ebx
	jne Block81

 Block80:
	push 0x80004003
	call _com_issue_error

 Block81:
	lea eax,[ebp+0x48]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x17
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block84

 Block82:
	cmp eax,0x80004002
	je Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	push 0
	push 0
	push 0xA
	push edi
	push 2
	mov byte ptr [ebp-4],0x18
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x44],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x19
	test ecx,ecx
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	lea edx,[ebp+0x34]
	push edx
	mov byte ptr [ebp-4],0x18
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1A
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x44],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block89

 Block87:
	cmp eax,0x80004002
	je Block89

 Block88:
	push eax
	call _com_issue_error

 Block89:
	mov eax,dword ptr [ebp+0x24]
	mov ecx,dword ptr [eax+0xB0]
	mov byte ptr [ebp-4],0x1B
	call CCtrlTab::AddItem_Canvas
	mov esi,8
	mov byte ptr [ebp-4],0x17
	cmp word ptr [ebp+0x34],si
	jne Block92

 Block90:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea edx,[ebp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x48],si
	jne Block96

 Block94:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block97:
	mov eax,0x20
	call __chkstk
	mov eax,0x20
	mov esi,esp
	call __chkstk
	mov edi,esp
	push 1
	push 0
	push 0
	push 0xA
	push esi
	push 3
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	lea edx,[ebp+0x48]
	mov byte ptr [ebp-4],0x1C
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1D
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block100

 Block98:
	cmp eax,0x80004002
	je Block100

 Block99:
	push eax
	call _com_issue_error

 Block100:
	push 0
	push 0
	push 0xA
	push edi
	mov bl,0x1E
	push 3
	mov byte ptr [ebp-4],bl
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x44],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x30]
	lea eax,[ebp+0x34]
	mov byte ptr [ebp-4],0x1F
	push eax
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x20
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x44],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block103

 Block101:
	cmp eax,0x80004002
	je Block103

 Block102:
	push eax
	call _com_issue_error

 Block103:
	mov esi,dword ptr [ebp+0x24]
	mov ecx,dword ptr [esi+0xB0]
	mov byte ptr [ebp-4],0x21
	call CCtrlTab::AddItem_Canvas
	mov edi,8
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp+0x34],di
	jne Block106

 Block104:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	test eax,eax
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea edx,[ebp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block107:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x48],di
	jne Block110

 Block108:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block111:
	mov eax,dword ptr [esi+0xB0]
	mov dword ptr [eax+0x34],1
	mov dword ptr [eax+0x38],0x32
	xor eax,eax
	mov dword ptr [esi+0xB44],eax
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esi+0xB48],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],0x22
	test eax,eax
	je Block113

 Block112:
	mov ecx,eax
	call CCtrlTab::_ctor_default
	jmp Block114

 Block113:
	xor eax,eax

 Block114:
	mov byte ptr [ebp-4],0x15
	test eax,eax
	je Block122

 Block115:
	add eax,8
	je Block122

 Block116:
	lea edi,[eax-8]
	test edi,edi
	je Block118

 Block117:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block118:
	mov eax,dword ptr [esi+0xB8]
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [ebp+0x64],eax
	test eax,eax
	je Block120

 Block119:
	push 0
	lea ecx,[ebp+0x60]
	call ZRef<CCtrlTab>::_ReleaseRaw

 Block120:
	mov ecx,dword ptr [esi+0xB8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x28]
	push 0
	push 0
	push 0xDE
	push 0x5F
	push 0xEB
	push 2
	push 0x3EB
	push esi
	call edx
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
	jge Block123

 Block121:
	push eax
	call _com_issue_error

 Block122:
	xor edi,edi
	jmp Block118

 Block123:
	lea edx,[ebp+0x58]
	push edx
	mov byte ptr [ebp-4],0x23
	call esi
	lea eax,[ebp+0x58]
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
	push 0
	push 0
	lea ecx,[ebp+0x48]
	push ecx
	lea edx,[ebp+0x58]
	push edx
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	mov bl,0x24
	push offset _S_UIUIWINDOW2IMGSH__2
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x25
	jne Block127

 Block126:
	push 0x80004003
	call _com_issue_error

 Block127:
	lea eax,[ebp+0x34]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x26
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x30]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block130

 Block128:
	cmp eax,0x80004002
	je Block130

 Block129:
	push eax
	call _com_issue_error

 Block130:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x34],di
	jne Block133

 Block131:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	test eax,eax
	je Block134

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block133:
	lea edx,[ebp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block134:
	mov byte ptr [ebp-4],0x23
	cmp word ptr [ebp+0x58],di
	jne Block137

 Block135:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block138:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x48],di
	jne Block141

 Block139:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	test eax,eax
	je Block142

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block141:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block142:
	lea ecx,[ebp+0x58]
	push ecx
	call esi
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block144

 Block143:
	push eax
	call _com_issue_error

 Block144:
	lea eax,[ebp+0x48]
	push eax
	mov byte ptr [ebp-4],0x27
	call esi
	lea ecx,[ebp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block146

 Block145:
	push eax
	call _com_issue_error

 Block146:
	push 0
	push 0
	lea edx,[ebp+0x58]
	push edx
	lea eax,[ebp+0x48]
	push eax
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	mov bl,0x28
	push offset _S_UIUIWINDOW2IMGSH__1
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x29
	jne Block148

 Block147:
	push 0x80004003
	call _com_issue_error

 Block148:
	lea ecx,[ebp+0x34]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x2A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x2C]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block151

 Block149:
	cmp eax,0x80004002
	je Block151

 Block150:
	push eax
	call _com_issue_error

 Block151:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x34],si
	jne Block154

 Block152:
	mov eax,dword ptr [ebp+0x3C]
	xor edx,edx
	mov word ptr [ebp+0x34],dx
	test eax,eax
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block155

 Block154:
	lea eax,[ebp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block155:
	mov byte ptr [ebp-4],0x27
	cmp word ptr [ebp+0x48],si
	jne Block158

 Block156:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block159:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x58],si
	jne Block162

 Block160:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block163:
	mov dword ptr [ebp+0x28],0
	lea ebx,[ebx]

 Block164:
	mov edi,dword ptr [ebp+0x2C]
	mov eax,0x20
	call __chkstk
	mov eax,0x20
	mov esi,esp
	call __chkstk
	mov edx,dword ptr [ebp+0x28]
	mov dword ptr [ebp+0x44],esp
	push 1
	push 0
	push 0
	push 0xA
	push esi
	push edx
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x2B
	test edi,edi
	je Block5

 Block165:
	lea eax,[ebp+0x48]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x2C
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block170

 Block166:
	mov ecx,dword ptr [eax]
	lea edx,[ebp]
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
	and ebx,dword ptr [ebp]
	test eax,eax
	je Block168

 Block167:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block168:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block170

 Block169:
	cmp edi,0x80004002
	jne Block187

 Block170:
	mov eax,dword ptr [ebp+0x44]
	mov ecx,dword ptr [ebp+0x28]
	push 0
	push 0
	push 0xA
	push eax
	push ecx
	mov byte ptr [ebp-4],0x2D
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x44],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x2E
	test ecx,ecx
	je Block5

 Block171:
	lea edx,[ebp+0x34]
	push edx
	mov byte ptr [ebp-4],0x2D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x2F
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x44],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block176

 Block172:
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
	je Block174

 Block173:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block174:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block176

 Block175:
	cmp edi,0x80004002
	jne Block187

 Block176:
	mov edi,dword ptr [ebp+0x24]
	mov ecx,dword ptr [edi+0xB8]
	mov byte ptr [ebp-4],0x30
	call CCtrlTab::AddItem_Canvas
	mov esi,8
	mov byte ptr [ebp-4],0x2C
	cmp word ptr [ebp+0x34],si
	jne Block179

 Block177:
	xor eax,eax
	mov word ptr [ebp+0x34],ax
	mov eax,dword ptr [ebp+0x3C]
	test eax,eax
	je Block180

 Block178:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block180

 Block179:
	lea ecx,[ebp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block180:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x48],si
	jne Block183

 Block181:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	test eax,eax
	je Block184

 Block182:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block184

 Block183:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block184:
	mov eax,dword ptr [ebp+0x28]
	inc eax
	cmp eax,5
	mov dword ptr [ebp+0x28],eax
	jl Block164

 Block185:
	mov eax,dword ptr [edi+0xB8]
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [eax+0x34],1
	mov dword ptr [eax+0x38],0
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x64],eax
	mov byte ptr [ebp-4],0x31
	test eax,eax
	je Block188

 Block186:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block189

 Block187:
	push edi
	call _com_issue_error

 Block188:
	xor eax,eax

 Block189:
	mov byte ptr [ebp-4],0x15
	test eax,eax
	je Block199

 Block190:
	add eax,8
	je Block199

 Block191:
	lea esi,[eax-8]
	test esi,esi
	je Block193

 Block192:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block193:
	mov eax,dword ptr [edi+0xC0]
	mov dword ptr [edi+0xC0],esi
	test eax,eax
	je Block197

 Block194:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block197

 Block195:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block197

 Block196:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block197:
	mov ecx,dword ptr [edi+0xC0]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0xC2
	push 0x83
	push 0xD2
	push 3
	push 1
	push 0x3EC
	push edi
	call eax
	mov eax,dword ptr [edi+0xC0]
	mov ebx,0xCC
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [eax+0x34],ebx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x64],eax
	mov byte ptr [ebp-4],0x32
	test eax,eax
	je Block200

 Block198:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block201

 Block199:
	xor esi,esi
	jmp Block193

 Block200:
	xor eax,eax

 Block201:
	mov byte ptr [ebp-4],0x15
	test eax,eax
	je Block225

 Block202:
	add eax,8
	je Block225

 Block203:
	lea esi,[eax-8]
	test esi,esi
	je Block205

 Block204:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block205:
	mov eax,dword ptr [edi+0xC8]
	mov dword ptr [edi+0xC8],esi
	test eax,eax
	je Block209

 Block206:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block209

 Block207:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block209

 Block208:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block209:
	mov ecx,dword ptr [edi+0xC8]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0xC2
	push 0x83
	push 0x1B9
	push 3
	push 1
	push 0x3ED
	push edi
	call eax
	mov eax,dword ptr [edi+0xC8]
	lea ecx,[ebp+0x68]
	push 0x31
	push ecx
	mov dword ptr [eax+0x34],ebx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xEC]
	add esp,8
	cmp esi,eax
	je Block214

 Block210:
	mov dword ptr [edi+0xEC],eax
	test eax,eax
	je Block212

 Block211:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block212:
	test esi,esi
	je Block214

 Block213:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block214:
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block216

 Block215:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block216:
	lea eax,[ebp+0x68]
	push 2
	push eax
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
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block219:
	test esi,esi
	je Block221

 Block220:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block221:
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block223

 Block222:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block223:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x34]
	push ecx
	call esi
	lea edx,[ebp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block226

 Block224:
	push eax
	call _com_issue_error

 Block225:
	xor esi,esi
	jmp Block205

 Block226:
	lea eax,[ebp+0x48]
	push eax
	mov byte ptr [ebp-4],0x33
	call esi
	lea ecx,[ebp+0x48]
	push offset _D_VTMISSING
	push ecx
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
	lea edx,[ebp+0x34]
	push edx
	lea eax,[ebp+0x48]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x50E
	push ecx
	mov byte ptr [ebp-4],0x34
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x35
	jne Block230

 Block229:
	push 0x80004003
	call _com_issue_error

 Block230:
	lea edx,[ebp-0x4C]
	mov byte ptr [ebp-4],0x34
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x36
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block236

 Block231:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x68]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov esi,eax
	mov eax,dword ptr [edi+0xF4]
	test esi,esi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x68]
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
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],0x34
	jne Block241

 Block239:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block242

 Block240:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block242

 Block241:
	lea ecx,[ebp-0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block242:
	mov esi,8
	mov byte ptr [ebp-4],0x33
	cmp word ptr [ebp+0x48],si
	jne Block245

 Block243:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	test eax,eax
	je Block246

 Block244:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block246

 Block245:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block246:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x34],si
	jne Block249

 Block247:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	test eax,eax
	je Block250

 Block248:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block250

 Block249:
	lea edx,[ebp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block250:
	or eax,0xFFFFFFFF
	mov dword ptr [edi+0xB4C],eax
	mov dword ptr [edi+0xB54],eax
	mov dword ptr [edi+0xB50],eax
	mov eax,dword ptr [ebp+0x2C]
	mov dword ptr [edi+0xB5C],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xD
	call edx
	mov eax,dword ptr [ebp+0x30]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],4
	call edx
	lea esp,[ebp-0x7C]
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
// CAdminShopDlg::OnKey
__SUB_CLASS_THIS(00029770, __thiscall, 60757,  IUIMsgHandler, void, uint32_t, int) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	test eax,eax
	js Block3

 Block1:
	cmp edx,0x1B
	je Block4

 Block2:
	cmp edx,0xD
	je Block4

 Block3:
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+4],edx
	jmp  CDialog::OnKey

 Block4:
	ret 8
}
}
// CAdminShopDlg::GetItemIndexFromPoint
__SUB_CLASS_THIS(0002A580, __thiscall, 60768,  CAdminShopDlg, int32_t, long, long, int32_t*, long*) {
__asm {

 Block0:
	sub esp,0x1C
	push ebx
	push ebp
	mov ebp,ecx
	mov eax,dword ptr [ebp+0xC0]
	mov ecx,dword ptr [eax+0x38]
	push esi
	push edi
	mov dword ptr [esp+0x10],ecx
	mov edi,0x7F
	jmp Block2

 Block2:
	mov ecx,ebp
	call CAdminShopDlg::GetCurNPCItem
	mov ecx,eax
	call ZArray<ZRef<CAdminShopDlg::AdminShopCommodity>>::GetCount
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
	add eax,6
	push eax
	push edi
	push 6
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
	add edi,0x28
	cmp edi,0x147
	jl Block2

 Block11:
	mov eax,dword ptr [ebp+0xC8]
	mov ecx,dword ptr [eax+0x38]
	mov dword ptr [esp+0x10],ecx
	mov edi,0x7F
	mov edi,edi

 Block12:
	mov eax,dword ptr [ebp+0xE4]
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
	add ecx,0xEC
	push ecx
	push edi
	push 0xEC
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
	add edi,0x28
	cmp edi,0x147
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
// CAdminShopDlg::AdminShopCommodity::AdminShopCommodity
_SUB_EXCEPTION_HANDLER(2C5B0)
__SUB_CLASS_THIS0(0002C5B0, __thiscall, 60786,  CAdminShopDlg::AdminShopCommodity, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2C5B0
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
	xor eax,eax
	mov dword ptr [esi+4],eax
	xor ebp,ebp
	mov dword ptr [esi+8],eax
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x24],ebp
	int 3// TODO: 	mov dword ptr [esi],offset CAdminShopDlg::AdminShopCommodity::`vftable'
	lea edi,[esi+0xC]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	movzx ecx,byte ptr [edi]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+5],cl
	mov al,byte ptr [edi+4]
	mov edx,dword ptr [edi+8]
	mov byte ptr [edx+6],al
	xor eax,eax
	push eax
	mov ecx,edi
	call TSecType<long>::SetData
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],1
	lea edi,[esi+0x18]
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [edi+8],eax
	lea ebx,[edi-0x3FF8]
	call _rand
	add eax,ebx
	mov dword ptr [edi],eax
	call _rand
	mov ecx,dword ptr [edi+8]
	mov dl,byte ptr [edi]
	add eax,ebx
	mov dword ptr [edi+4],eax
	mov byte ptr [ecx+5],dl
	movzx ecx,byte ptr [edi+4]
	mov eax,dword ptr [edi+8]
	mov byte ptr [eax+6],cl
	xor eax,eax
	push eax
	mov ecx,edi
	call TSecType<long>::SetData
	mov dword ptr [esi+0x3C],ebp
	mov dword ptr [esi+0x40],ebp
	mov dword ptr [esi+0x44],ebp
	mov dword ptr [esi+0x4C],ebp
	mov eax,esi
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
// CAdminShopDlg::OnMouseEnter
__SUB_CLASS_THIS(00029750, __thiscall, 60756,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0xF8]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CDisconnectException::CDisconnectException
__SUB_CLASS_THIS(00029860, __thiscall, 97648,  CDisconnectException, void, HRESULT) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CMSException::_ctor_0
	mov eax,esi
	pop esi
	ret 4
}
}
// CAdminShopDlg::CmpSellItem
_SUB_EXCEPTION_HANDLER(2CDB0)
__SUB_CLASS_THIS0(0002CDB0, __thiscall, 60771,  CAdminShopDlg, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2CDB0
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
	mov ebp,ecx
	mov dword ptr [esp+0x18],ebp
	mov eax,dword ptr [ebp+0xE8]
	test eax,eax
	jne Block2

 Block1:
	xor ecx,ecx
	jmp Block3

 Block2:
	mov ecx,dword ptr [eax-4]

 Block3:
	mov eax,dword ptr [ebp+0xE4]
	test eax,eax
	je Block5

 Block4:
	mov eax,dword ptr [eax-4]

 Block5:
	mov esi,eax
	push eax
	sub esi,ecx
	xor edi,edi
	push ecx
	mov dword ptr [esp+0x28],esi
	mov dword ptr [esp+0x1C],edi
	call _zmin_long
	add esp,8
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	jle Block23

 Block6:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	jmp Block10

 Block9:
	mov ebp,dword ptr [esp+0x18]

 Block10:
	mov eax,dword ptr [ebp+0xE8]
	lea esi,[edi*8]
	mov edi,dword ptr [eax+esi+4]
	add eax,esi
	mov dword ptr [esp+0x30],edi
	test edi,edi
	je Block12

 Block11:
	lea eax,[edi+4]
	push eax
	call ebx

 Block12:
	mov eax,dword ptr [ebp+0xE4]
	add eax,esi
	mov esi,dword ptr [eax+4]
	mov dword ptr [esp+0x3C],0
	mov dword ptr [esp+0x28],esi
	test esi,esi
	je Block14

 Block13:
	lea ecx,[esi+4]
	push ecx
	call ebx

 Block14:
	lea ecx,[edi+0x18]
	mov byte ptr [esp+0x3C],1
	call TSecType<long>::GetData
	lea ecx,[esi+0x18]
	mov ebp,eax
	call TSecType<long>::GetData
	cmp ebp,eax
	jne Block25

 Block15:
	mov edx,dword ptr [edi+0x24]
	cmp edx,dword ptr [esi+0x24]
	jne Block25

 Block16:
	mov eax,dword ptr [edi+0x28]
	cmp eax,dword ptr [esi+0x28]
	jne Block25

 Block17:
	lea ebp,[esi+4]
	push ebp
	mov byte ptr [esp+0x40],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block19

 Block18:
	push ebp
	call ebx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block19:
	lea esi,[edi+4]
	xor ebp,ebp
	push esi
	mov dword ptr [esp+0x2C],ebp
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block21

 Block20:
	push esi
	call ebx
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block21:
	mov eax,dword ptr [esp+0x14]
	inc eax
	cmp eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x30],ebp
	mov dword ptr [esp+0x14],eax
	mov edi,eax
	jl Block9

 Block22:
	mov esi,dword ptr [esp+0x20]

 Block23:
	test esi,esi
	jne Block32

 Block24:
	xor eax,eax
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret

 Block25:
	mov byte ptr [esp+0x3C],0
	test esi,esi
	je Block28

 Block26:
	lea ebp,[esi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block28

 Block27:
	push ebp
	call ebx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block28:
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test edi,edi
	je Block31

 Block29:
	lea esi,[edi+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block31

 Block30:
	push esi
	call ebx
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block31:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret

 Block32:
	mov eax,edi
	jg Block34

 Block33:
	lea eax,[edi-1]

 Block34:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret
}
}
// _Int2Str
__SUB(000298A0, __cdecl, 146326,  const char*, int32_t, char*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov ecx,dword ptr [esp+4]
	push 0xA
	push eax
	push ecx
	call _itoa
	add esp,0xC
	ret
}
}
// CAdminShopDlg::OnMouseButton
__SUB_CLASS_THIS(00030E80, __thiscall, 60755,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push edi
	mov esi,ecx
	cmp eax,0x201
	jne Block8

 Block1:
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x14]
	push eax
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0x1C]
	push ecx
	push edx
	lea edi,[esi-4]
	push eax
	mov ecx,edi
	call CAdminShopDlg::GetItemIndexFromPoint
	test eax,eax
	je Block13

 Block2:
	mov eax,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x14]
	xor ecx,ecx
	test eax,eax
	sete cl
	mov dword ptr [esi+0xB48],ecx
	test eax,eax
	je Block4

 Block3:
	mov ecx,edx
	jmp Block5

 Block4:
	or ecx,0xFFFFFFFF

 Block5:
	mov dword ptr [esi+0xB4C],ecx
	test eax,eax
	je Block7

 Block6:
	or eax,0xFFFFFFFF
	push 0
	mov ecx,edi
	mov dword ptr [esi+0xB50],eax
	call CWnd::InvalidateRect
	pop edi
	pop esi
	ret 0x10

 Block7:
	mov eax,edx
	push 0
	mov ecx,edi
	mov dword ptr [esi+0xB50],eax
	call CWnd::InvalidateRect
	pop edi
	pop esi
	ret 0x10

 Block8:
	cmp eax,0x203
	jne Block14

 Block9:
	mov ecx,dword ptr [esp+0x18]
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x18]
	push eax
	push ecx
	lea edi,[esi-4]
	push edx
	mov ecx,edi
	call CAdminShopDlg::GetItemIndexFromPoint
	test eax,eax
	je Block13

 Block10:
	cmp dword ptr [esp+0x14],0
	je Block15

 Block11:
	cmp dword ptr [esi+0xB48],0
	jne Block13

 Block12:
	mov eax,dword ptr [esp+0x18]
	cmp eax,dword ptr [esi+0xB4C]
	je Block17

 Block13:
	mov dword ptr [esi+0xB48],0xFFFFFFFF

 Block14:
	pop edi
	pop esi
	ret 0x10

 Block15:
	cmp dword ptr [esi+0xB48],1
	jne Block13

 Block16:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,dword ptr [esi+0xB50]
	jne Block13

 Block17:
	mov ecx,edi
	call CAdminShopDlg::SendTradeRequest
	pop edi
	pop esi
	ret 0x10
}
}
// CAdminShopDlg::OnButtonClicked
_SUB_EXCEPTION_HANDLER(30F90)
__SUB_CLASS_THIS(00030F90, __thiscall, 60759,  CAdminShopDlg, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_30F90
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
	mov eax,dword ptr [esp+0x24]
	cmp eax,2
	je Block4

 Block1:
	cmp eax,0x3E7
	jbe Block16

 Block2:
	cmp eax,0x3E9
	ja Block16

 Block3:
	call CAdminShopDlg::SendTradeRequest
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4

 Block4:
	cmp dword ptr [edi+0xB60],0
	je Block14

 Block5:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x1C],0
	test eax,eax
	je Block15

 Block6:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block15

 Block7:
	add eax,8
	je Block15

 Block8:
	lea esi,[eax-8]
	mov dword ptr [esp+0x10],esi
	test esi,esi
	je Block10

 Block9:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0x1237
	push ecx
	mov dword ptr [esp+0x30],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [edi+0xCC]
	push edx
	push 1
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_YESNO
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,6
	jne Block12

 Block11:
	call TSingleton<CUIAdminShopWishList>::CreateInstance

 Block12:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test esi,esi
	je Block14

 Block13:
	push 0
	lea ecx,[esp+0x10]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block14:
	push 2
	mov ecx,edi
	jmp Block20

 Block15:
	xor esi,esi
	mov dword ptr [esp+0x10],esi
	jmp Block10

 Block16:
	cmp eax,1
	jne Block18

 Block17:
	push eax
	jmp Block20

 Block18:
	cmp eax,8
	jne Block21

 Block19:
	push eax

 Block20:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x34]
	call edx

 Block21:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4
}
}
// CAdminShopDlg::Draw
_SUB_EXCEPTION_HANDLER(2FDF0)
__SUB_CLASS_THIS(0002FDF0, __thiscall, 60752,  CAdminShopDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2FDF0
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
	call CAdminShopDlg::DrawNPCItem
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
	call CAdminShopDlg::DrawUserItem
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
	call CAdminShopDlg::DrawMoney
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
// CAdminShopDlg::HitTest
__SUB_CLASS_THIS(00029710, __thiscall, 60753,  CAdminShopDlg, int32_t, long, long, CCtrlWnd**) {
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
// CAdminShopDlg::ResetInfo
__SUB_CLASS_THIS0(00030E50, __thiscall, 60746,  CAdminShopDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea eax,[esi+0xE4]
	push eax
	push 0
	call CAdminShopDlg::SetUserItems
	mov ecx,esi
	call CAdminShopDlg::SetScrollBar
	mov ecx,esi
	call CAdminShopDlg::SetAvatar
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret
}
}
// CAdminShopDlg::SetAvatar
_SUB_EXCEPTION_HANDLER(2DB20)
__SUB_CLASS_THIS0(0002DB20, __thiscall, 60746,  CAdminShopDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DB20
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
	lea ecx,[esi+0xD0]
	call ZRef<CAvatar>::_Alloc
	push 0
	push 0x64
	push 0x4C
	push 0x11D
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
	mov ecx,dword ptr [esi+0xD4]
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
