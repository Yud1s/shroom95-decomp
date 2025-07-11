#include "regen.hpp"
// UICharacterSale.ipp
#include "UICharacterSale.hpp"

// CUICharacterSaleDlg::SetStep5
__SUB_CLASS_THIS(0037A7F0, __thiscall, 67192,  CUICharacterSaleDlg, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	test edi,edi
	je Block2

 Block1:
	push 0
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x1395
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov ecx,esi
	call CUICharacterSaleDlg::ShowClass

 Block2:
	mov eax,dword ptr [esi+0x110]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push edi
	call eax
	mov eax,dword ptr [esi+0x110]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push edi
	call eax
	mov eax,dword ptr [esi+0x118]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push edi
	call eax
	mov eax,dword ptr [esi+0x118]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push edi
	call eax
	mov ecx,dword ptr [esi+0x110]
	push 0
	test edi,edi
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	mov ecx,dword ptr [esi+0x118]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push 0
	call eax
	push edi
	mov ecx,esi
	call CUICharacterSaleDlg::SetAvatar
	mov eax,1
	pop edi
	pop esi
	ret 4

 Block4:
	call CCtrlWnd::SetBelow
	mov ecx,dword ptr [esi+0x118]
	push 0
	call CCtrlWnd::SetBelow
	push edi
	mov ecx,esi
	call CUICharacterSaleDlg::SetAvatar
	pop edi
	mov eax,1
	pop esi
	ret 4
}
}
// CUICharacterSaleDlg::InitNewCharEquip
_SUB_EXCEPTION_HANDLER(37ABE0)
__SUB_CLASS_THIS0(0037ABE0, __thiscall, 67180,  CUICharacterSaleDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_37ABE0
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
	lea esi,[edi+0x234]
	mov ebp,5

 Block1:
	lea ecx,[esi-0x24]
	call ZArray<CUICharacterSaleDlg::ASITEM>::RemoveAll
	mov ecx,esi
	call ZArray<CUICharacterSaleDlg::ASITEM>::RemoveAll
	add esi,4
	sub ebp,1
	jne Block1

 Block2:
	mov eax,dword ptr [edi+0x2FC]
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block10

 Block3:
	lea eax,[esp+0x14]
	push eax
	call ZList<CUICharacterSaleDlg::NEWEQUIP>::GetNext
	mov esi,eax
	mov eax,dword ptr [esi]
	add esp,4
	test eax,eax
	jne Block5

 Block4:
	mov ecx,dword ptr [esi+4]
	push ebx
	lea ecx,[edi+ecx*4+0x210]
	call ZArray<CUICharacterSaleDlg::ASITEM>::InsertBefore
	mov ebp,eax
	mov eax,dword ptr [esi+8]
	push eax
	mov dword ptr [ebp],eax
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [esi]
	push edx
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,edi
	call CUICharacterSaleDlg::GetNewCharItemName
	push eax
	lea ecx,[ebp+4]
	mov dword ptr [esp+0x2C],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	jmp Block7

 Block5:
	cmp eax,1
	jne Block9

 Block6:
	mov edx,dword ptr [esi+4]
	push ebx
	lea ecx,[edi+edx*4+0x234]
	call ZArray<CUICharacterSaleDlg::ASITEM>::InsertBefore
	mov ebp,eax
	mov eax,dword ptr [esi+8]
	push eax
	mov dword ptr [ebp],eax
	mov eax,dword ptr [esi+4]
	mov ecx,dword ptr [esi]
	push eax
	push ecx
	lea edx,[esp+0x28]
	push edx
	mov ecx,edi
	call CUICharacterSaleDlg::GetNewCharItemName
	push eax
	lea ecx,[ebp+4]
	mov dword ptr [esp+0x2C],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]

 Block7:
	mov dword ptr [esp+0x28],ebx
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	cmp dword ptr [esp+0x14],0
	jne Block3

 Block10:
	push ebx
	lea ecx,[edi+0x230]
	call ZArray<CUICharacterSaleDlg::ASITEM>::InsertBefore
	lea esi,[eax+4]
	push 0
	push 4
	mov ecx,esi
	mov dword ptr [eax],0
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_MALE]
	mov dword ptr [eax],ecx
	push 4
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	push ebx
	lea ecx,[edi+0x254]
	call ZArray<CUICharacterSaleDlg::ASITEM>::InsertBefore
	lea esi,[eax+4]
	push 0
	push 6
	mov ecx,esi
	mov dword ptr [eax],0
	call ZXString<char>::GetBuffer
	mov edx,dword ptr [_S_FEMALE]
	mov dword ptr [eax],edx
	mov cx,word ptr [_S_FEMALE+4]
	mov word ptr [eax+4],cx
	push 6
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	xor esi,esi
	lea ebp,[edi+0x234]

 Block11:
	cmp byte ptr [edi+0x20C],0
	jne Block13

 Block12:
	mov eax,dword ptr [ebp-0x24]
	jmp Block14

 Block13:
	mov eax,dword ptr [ebp]

 Block14:
	test eax,eax
	je Block17

 Block15:
	mov ebx,dword ptr [eax-4]
	cmp ebx,1
	jle Block17

 Block16:
	call _rand
	cdq
	idiv ebx
	mov ecx,edi
	push edx
	push esi
	call CUICharacterSaleDlg::ShiftNewCharEquip

 Block17:
	inc esi
	add ebp,4
	cmp esi,9
	jl Block11

 Block18:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret
}
}
// CUICharacterSaleDlg::SendRequest
__SUB_CLASS_THIS(003768F0, __thiscall, 67189,  CUICharacterSaleDlg, void, COutPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	push eax
	call CClientSocket::SendPacket
	mov dword ptr [esi+0x2E4],1
	pop esi
	ret 4
}
}
// CUICharacterSaleDlg::OnCreate
_SUB_EXCEPTION_HANDLER(37ADC0)
__SUB_CLASS_THIS(0037ADC0, __thiscall, 67181,  CUICharacterSaleDlg, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_37ADC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC0
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
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x70]
	xor ebx,ebx
	push eax
	mov dword ptr [edi+0x1D0],1
	mov dword ptr [edi+0x1CC],ebx
	mov dword ptr [edi+0x1D4],ebx
	call esi
	lea ecx,[ebp-0x70]
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
	lea edx,[ebp-0x60]
	push edx
	mov dword ptr [ebp-4],ebx
	call esi
	lea eax,[ebp-0x60]
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
	lea ecx,[ebp-0x70]
	push ecx
	lea edx,[ebp-0x60]
	push edx
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push offset _S_STRINGGLCLONECIM
	mov byte ptr [ebp-4],1
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[ebp-0x90]
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x10]
	mov dword ptr [ebp-0x10],ebx
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
	cmp word ptr [ebp-0x90],8
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],5
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x88]
	xor ecx,ecx
	mov word ptr [ebp-0x90],cx
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[ebp-0x90]
	push edx
	call esi

 Block13:
	cmp word ptr [ebp-0x60],8
	mov byte ptr [ebp-4],6
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[ebp-0x60]
	push ecx
	call esi

 Block17:
	cmp word ptr [ebp-0x70],8
	mov byte ptr [ebp-4],7
	jne Block20

 Block18:
	mov eax,dword ptr [ebp-0x68]
	xor edx,edx
	mov word ptr [ebp-0x70],dx
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp-0x70]
	push eax
	call esi

 Block21:
	push ebx
	push ebx
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push offset _S_CLASS
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x10]
	mov byte ptr [ebp-4],8
	cmp ecx,ebx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[ebp-0x80]
	push edx
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp]
	mov dword ptr [ebp],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block26

 Block24:
	cmp eax,0x80004002
	je Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	cmp word ptr [ebp-0x80],8
	mov byte ptr [ebp-4],0xB
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [ebp-0x80],ax
	mov eax,dword ptr [ebp-0x78]
	cmp eax,ebx
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[ebp-0x80]
	push ecx
	call esi

 Block30:
	mov dword ptr [ebp+0x2C],ebx
	add edi,0x26C
	mov bl,0x11

 Block31:
	push 0
	push 0
	mov dword ptr [ebp+0x54],0
	mov edx,dword ptr [ebp+0x2C]
	push edx
	lea eax,[ebp+0x54]
	push offset _S_D__1
	push eax
	mov byte ptr [ebp-4],0xC
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,8
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	cmp dword ptr [ebp],0
	mov byte ptr [ebp-4],0xD
	je Block5

 Block32:
	lea ecx,[ebp-0x30]
	push ecx
	mov ecx,dword ptr [ebp]
	mov byte ptr [ebp-4],0xC
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xE
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x58],esi
	test eax,eax
	je Block35

 Block33:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x28]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x28]
	mov esi,ecx
	mov dword ptr [ebp+0x58],esi
	test eax,eax
	jge Block35

 Block34:
	cmp eax,0x80004002
	jne Block1

 Block35:
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],0x10
	jne Block38

 Block36:
	mov eax,dword ptr [ebp-0x28]
	xor edx,edx
	mov word ptr [ebp-0x30],dx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea eax,[ebp-0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push offset _S_CLASS
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x12
	test esi,esi
	je Block5

 Block42:
	lea ecx,[ebp-0x40]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x13
	jne Block44

 Block43:
	mov eax,dword ptr [eax+8]
	jmp Block45

 Block44:
	mov eax,offset _S___3

 Block45:
	push 0xFFFFFFFF
	push eax
	lea ecx,[edi-0x14]
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x40],8
	mov byte ptr [ebp-4],bl
	jne Block48

 Block46:
	mov eax,dword ptr [ebp-0x38]
	xor edx,edx
	mov word ptr [ebp-0x40],dx
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea eax,[ebp-0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block49:
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push offset _S_DESC
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x44]
	push ecx
	mov byte ptr [ebp-4],0x14
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x15
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
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],bl
	jne Block55

 Block53:
	mov eax,dword ptr [ebp+0x4C]
	xor edx,edx
	mov word ptr [ebp+0x44],dx
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea eax,[ebp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block56:
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push offset _S_INITSTATDESC
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x60]
	push ecx
	mov byte ptr [ebp-4],0x16
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x17
	jne Block58

 Block57:
	mov eax,dword ptr [eax+8]
	jmp Block59

 Block58:
	mov eax,offset _S___3

 Block59:
	push 0xFFFFFFFF
	push eax
	lea ecx,[edi+0x14]
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],bl
	jne Block62

 Block60:
	mov eax,dword ptr [ebp+0x68]
	xor edx,edx
	mov word ptr [ebp+0x60],dx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block63:
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push offset _S_INITSPDESC
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x50]
	push ecx
	mov byte ptr [ebp-4],0x18
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x19
	jne Block65

 Block64:
	mov eax,dword ptr [eax+8]
	jmp Block66

 Block65:
	mov eax,offset _S___3

 Block66:
	push 0xFFFFFFFF
	push eax
	lea ecx,[edi+0x28]
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x50],8
	mov byte ptr [ebp-4],bl
	jne Block69

 Block67:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block70:
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push offset _S_STARTMAP
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+4]
	push ecx
	mov byte ptr [ebp-4],0x1A
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x1B
	jne Block72

 Block71:
	mov eax,dword ptr [eax+8]
	jmp Block73

 Block72:
	mov eax,offset _S___3

 Block73:
	push 0xFFFFFFFF
	push eax
	lea ecx,[edi+0x3C]
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp+4],8
	mov byte ptr [ebp-4],bl
	jne Block76

 Block74:
	mov eax,dword ptr [ebp+0xC]
	xor edx,edx
	mov word ptr [ebp+4],dx
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block77:
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push offset _S_EQUIP
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x20]
	push ecx
	mov byte ptr [ebp-4],0x1C
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x1D
	jne Block79

 Block78:
	mov eax,dword ptr [eax+8]
	jmp Block80

 Block79:
	mov eax,offset _S___3

 Block80:
	push 0xFFFFFFFF
	push eax
	lea ecx,[edi+0x50]
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],bl
	jne Block83

 Block81:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea eax,[ebp-0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block84:
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push offset _S_ITEM__2
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x30]
	push ecx
	mov byte ptr [ebp-4],0x1E
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x1F
	jne Block86

 Block85:
	mov eax,dword ptr [eax+8]
	jmp Block87

 Block86:
	mov eax,offset _S___3

 Block87:
	push 0xFFFFFFFF
	push eax
	lea ecx,[edi+0x64]
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],bl
	jne Block90

 Block88:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block91:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],0xB
	call edx
	mov eax,dword ptr [ebp+0x2C]
	inc eax
	add edi,4
	cmp eax,5
	mov dword ptr [ebp+0x2C],eax
	jl Block31

 Block92:
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push offset _S_STEP4WDESC
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [ebp]
	lea eax,[ebp+0x30]
	mov byte ptr [ebp-4],0x20
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	mov ebx,8
	mov byte ptr [ebp-4],0x21
	cmp word ptr [eax],bx
	jne Block94

 Block93:
	mov eax,dword ptr [eax+8]
	jmp Block95

 Block94:
	mov eax,offset _S___3

 Block95:
	mov edi,dword ptr [ebp+0x40]
	push 0xFFFFFFFF
	lea ecx,[edi+0x30C]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x30],bx
	jne Block98

 Block96:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	test eax,eax
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block99:
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push offset _S_STEP4MDESC
	call _xbstr_t::_ctor_1
	lea eax,[ebp+0x30]
	mov byte ptr [ebp-4],0x22
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0x23
	cmp word ptr [eax],bx
	jne Block101

 Block100:
	mov eax,dword ptr [eax+8]
	jmp Block102

 Block101:
	mov eax,offset _S___3

 Block102:
	push 0xFFFFFFFF
	lea ecx,[edi+0x310]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x30],bx
	jne Block105

 Block103:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push offset _S_FINISHDESC
	call _xbstr_t::_ctor_1
	lea eax,[ebp+0x30]
	mov byte ptr [ebp-4],0x24
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0x25
	cmp word ptr [eax],bx
	jne Block108

 Block107:
	mov eax,dword ptr [eax+8]
	jmp Block109

 Block108:
	mov eax,offset _S___3

 Block109:
	push 0xFFFFFFFF
	lea ecx,[edi+0x314]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x30],bx
	jne Block112

 Block110:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	test eax,eax
	je Block113

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block112:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block113:
	lea eax,[ebp+0x27]
	push eax
	add edi,0x304
	push 0xC
	mov ecx,edi
	call ZArray<_x_com_ptr<IWzFont>>::_Alloc
	xor esi,esi
	mov bl,0x26

 Block114:
	lea ecx,[ebp+0x58]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [edi]
	mov eax,dword ptr [eax]
	push 0
	add edx,esi
	push edx
	push eax
	mov byte ptr [ebp-4],bl
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x58]
	add esp,0xC
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block116

 Block115:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block116:
	add esi,4
	cmp esi,0x30
	jl Block114

 Block117:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x60]
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
	lea edx,[ebp+0x60]
	push edx
	push 0xFF000000
	push 0xA
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x27
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x28
	test ecx,ecx
	jne Block121

 Block120:
	push 0x80004003
	call _com_issue_error

 Block121:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0xB
	jne Block124

 Block122:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block125:
	lea eax,[ebp+0x58]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x29
	test eax,eax
	je Block127

 Block126:
	mov ebx,dword ptr [eax]
	jmp Block128

 Block127:
	xor ebx,ebx

 Block128:
	mov ecx,8
	mov word ptr [ebp+0x60],cx
	test ebx,ebx
	jne Block130

 Block129:
	xor esi,esi
	jmp Block134

 Block130:
	mov eax,ebx
	lea edx,[eax+2]
	mov edi,edi

 Block131:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block131

 Block132:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea edx,[edi+edi+6]
	push edx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block134

 Block133:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebx
	push esi
	call _memcpy
	add esp,0xC

 Block134:
	mov dword ptr [ebp+0x68],esi
	test esi,esi
	jne Block137

 Block135:
	test ebx,ebx
	je Block137

 Block136:
	push 0x8007000E
	call _com_issue_error

 Block137:
	lea eax,[ebp+0x60]
	push eax
	push 0xFF000000
	push 0xA
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x2A
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x40]
	mov eax,dword ptr [edi+0x304]
	add edi,0x304
	add eax,4
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x2B
	test eax,eax
	jne Block139

 Block138:
	push 0x80004003
	call _com_issue_error

 Block139:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0x29
	jne Block142

 Block140:
	mov eax,dword ptr [ebp+0x68]
	xor edx,edx
	mov word ptr [ebp+0x60],dx
	test eax,eax
	je Block143

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block142:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block143:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block151

 Block144:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block151

 Block145:
	test esi,esi
	je Block151

 Block146:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block148

 Block147:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block148:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block150

 Block149:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block150:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block151:
	lea ecx,[ebp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block153

 Block152:
	push eax
	call _com_issue_error

 Block153:
	lea eax,[ebp+0x60]
	push eax
	push 0xFFFF0000
	push 0xA
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	push ecx
	mov byte ptr [ebp-4],0x2C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,8
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x2D
	test eax,eax
	jne Block155

 Block154:
	push 0x80004003
	call _com_issue_error

 Block155:
	mov ecx,eax
	mov byte ptr [ebp-4],0x2C
	call IWzFont::Create
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0xB
	jne Block158

 Block156:
	mov eax,dword ptr [ebp+0x68]
	xor edx,edx
	mov word ptr [ebp+0x60],dx
	test eax,eax
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block159:
	lea ecx,[ebp+0x58]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x2E
	test eax,eax
	je Block161

 Block160:
	mov ebx,dword ptr [eax]
	jmp Block162

 Block161:
	xor ebx,ebx

 Block162:
	mov edx,8
	mov word ptr [ebp+0x60],dx
	test ebx,ebx
	jne Block164

 Block163:
	xor esi,esi
	jmp Block169

 Block164:
	mov eax,ebx
	lea edx,[eax+2]
	jmp Block166

 Block166:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block166

 Block167:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea eax,[edi+edi+6]
	push eax
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block169

 Block168:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebx
	push esi
	call _memcpy
	add esp,0xC

 Block169:
	mov dword ptr [ebp+0x68],esi
	test esi,esi
	jne Block172

 Block170:
	test ebx,ebx
	je Block172

 Block171:
	push 0x8007000E
	call _com_issue_error

 Block172:
	lea ecx,[ebp+0x60]
	push ecx
	push 0xFFFF0000
	push 0xA
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x2F
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x40]
	mov eax,dword ptr [edi+0x304]
	add edi,0x304
	add eax,0xC
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x30
	test eax,eax
	jne Block174

 Block173:
	push 0x80004003
	call _com_issue_error

 Block174:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0x2E
	jne Block177

 Block175:
	xor eax,eax
	mov word ptr [ebp+0x60],ax
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block178

 Block176:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block178

 Block177:
	lea ecx,[ebp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block178:
	mov esi,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB
	test esi,esi
	je Block186

 Block179:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block186

 Block180:
	test esi,esi
	je Block186

 Block181:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block183

 Block182:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block183:
	mov eax,dword ptr [esi+4]
	test eax,eax
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
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block188

 Block187:
	push eax
	call _com_issue_error

 Block188:
	lea edx,[ebp+0x60]
	push edx
	push 0xFF00FF00
	push 0xA
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x31
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,0x10
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x32
	test eax,eax
	jne Block190

 Block189:
	push 0x80004003
	call _com_issue_error

 Block190:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0xB
	jne Block193

 Block191:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block194

 Block192:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block194

 Block193:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block194:
	lea eax,[ebp+0x58]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x33
	test eax,eax
	je Block196

 Block195:
	mov ebx,dword ptr [eax]
	jmp Block197

 Block196:
	xor ebx,ebx

 Block197:
	mov ecx,8
	mov word ptr [ebp+0x60],cx
	test ebx,ebx
	jne Block199

 Block198:
	xor esi,esi
	jmp Block203

 Block199:
	mov eax,ebx
	lea edx,[eax+2]

 Block200:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block200

 Block201:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea edx,[edi+edi+6]
	push edx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block203

 Block202:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebx
	push esi
	call _memcpy
	add esp,0xC

 Block203:
	mov dword ptr [ebp+0x68],esi
	test esi,esi
	jne Block206

 Block204:
	test ebx,ebx
	je Block206

 Block205:
	push 0x8007000E
	call _com_issue_error

 Block206:
	lea eax,[ebp+0x60]
	push eax
	push 0xFF00FF00
	push 0xA
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x34
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x40]
	mov eax,dword ptr [edi+0x304]
	add edi,0x304
	add eax,0x14
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x35
	test eax,eax
	jne Block208

 Block207:
	push 0x80004003
	call _com_issue_error

 Block208:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0x33
	jne Block211

 Block209:
	mov eax,dword ptr [ebp+0x68]
	xor edx,edx
	mov word ptr [ebp+0x60],dx
	test eax,eax
	je Block212

 Block210:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block212

 Block211:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block212:
	mov esi,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB
	test esi,esi
	je Block220

 Block213:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block220

 Block214:
	test esi,esi
	je Block220

 Block215:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block217

 Block216:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block217:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block219

 Block218:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block219:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block220:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block222

 Block221:
	push eax
	call _com_issue_error

 Block222:
	lea ecx,[ebp+0x60]
	push ecx
	push 0xFF0000FF
	push 0xA
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x36
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,0x18
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x37
	test eax,eax
	jne Block224

 Block223:
	push 0x80004003
	call _com_issue_error

 Block224:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0xB
	jne Block227

 Block225:
	xor eax,eax
	mov word ptr [ebp+0x60],ax
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block228

 Block226:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block228

 Block227:
	lea ecx,[ebp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block228:
	lea edx,[ebp+0x58]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x38
	test eax,eax
	je Block230

 Block229:
	mov ebx,dword ptr [eax]
	jmp Block231

 Block230:
	xor ebx,ebx

 Block231:
	mov eax,8
	mov word ptr [ebp+0x60],ax
	test ebx,ebx
	jne Block233

 Block232:
	xor esi,esi
	jmp Block237

 Block233:
	mov eax,ebx
	lea edx,[eax+2]
	lea esp,[esp]

 Block234:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block234

 Block235:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea ecx,[edi+edi+6]
	push ecx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block237

 Block236:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebx
	push esi
	call _memcpy
	add esp,0xC

 Block237:
	mov dword ptr [ebp+0x68],esi
	test esi,esi
	jne Block240

 Block238:
	test ebx,ebx
	je Block240

 Block239:
	push 0x8007000E
	call _com_issue_error

 Block240:
	lea edx,[ebp+0x60]
	push edx
	push 0xFF0000FF
	push 0xA
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x39
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x40]
	mov eax,dword ptr [edi+0x304]
	add edi,0x304
	add eax,0x1C
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x3A
	test eax,eax
	jne Block242

 Block241:
	push 0x80004003
	call _com_issue_error

 Block242:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0x38
	jne Block245

 Block243:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block246

 Block244:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block246

 Block245:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block246:
	mov esi,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB
	test esi,esi
	je Block254

 Block247:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block254

 Block248:
	test esi,esi
	je Block254

 Block249:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block251

 Block250:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block251:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block253

 Block252:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block253:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block254:
	lea ecx,[ebp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block256

 Block255:
	push eax
	call _com_issue_error

 Block256:
	lea eax,[ebp+0x60]
	push eax
	push 0xFFFFFFFF
	push 0xA
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x3B
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,0x20
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x3C
	test eax,eax
	jne Block258

 Block257:
	push 0x80004003
	call _com_issue_error

 Block258:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0xB
	jne Block261

 Block259:
	mov eax,dword ptr [ebp+0x68]
	xor edx,edx
	mov word ptr [ebp+0x60],dx
	test eax,eax
	je Block262

 Block260:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block262

 Block261:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block262:
	lea ecx,[ebp+0x58]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x3D
	test eax,eax
	je Block264

 Block263:
	mov ebx,dword ptr [eax]
	jmp Block265

 Block264:
	xor ebx,ebx

 Block265:
	mov edx,8
	mov word ptr [ebp+0x60],dx
	test ebx,ebx
	jne Block267

 Block266:
	xor esi,esi
	jmp Block271

 Block267:
	mov eax,ebx
	lea edx,[eax+2]

 Block268:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block268

 Block269:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea eax,[edi+edi+6]
	push eax
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block271

 Block270:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebx
	push esi
	call _memcpy
	add esp,0xC

 Block271:
	mov dword ptr [ebp+0x68],esi
	test esi,esi
	jne Block274

 Block272:
	test ebx,ebx
	je Block274

 Block273:
	push 0x8007000E
	call _com_issue_error

 Block274:
	lea ecx,[ebp+0x60]
	push ecx
	push 0xFFFFFFFF
	push 0xA
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x3E
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x40]
	mov eax,dword ptr [edi+0x304]
	add edi,0x304
	add eax,0x24
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x3F
	test eax,eax
	jne Block276

 Block275:
	push 0x80004003
	call _com_issue_error

 Block276:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0x3D
	jne Block279

 Block277:
	xor eax,eax
	mov word ptr [ebp+0x60],ax
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block280

 Block278:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block280

 Block279:
	lea ecx,[ebp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block280:
	mov esi,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB
	test esi,esi
	je Block288

 Block281:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block288

 Block282:
	test esi,esi
	je Block288

 Block283:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block285

 Block284:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block285:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block287

 Block286:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block287:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block288:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block290

 Block289:
	push eax
	call _com_issue_error

 Block290:
	lea edx,[ebp+0x60]
	push edx
	push 0xFF51378C
	push 0xA
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x40
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,0x28
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x41
	test eax,eax
	jne Block292

 Block291:
	push 0x80004003
	call _com_issue_error

 Block292:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0xB
	jne Block295

 Block293:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block296

 Block294:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block296

 Block295:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block296:
	lea eax,[ebp+0x58]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x42
	test eax,eax
	je Block298

 Block297:
	mov ebx,dword ptr [eax]
	jmp Block299

 Block298:
	xor ebx,ebx

 Block299:
	mov ecx,8
	mov word ptr [ebp+0x60],cx
	test ebx,ebx
	jne Block301

 Block300:
	xor esi,esi
	jmp Block305

 Block301:
	mov eax,ebx
	lea edx,[eax+2]

 Block302:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block302

 Block303:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea edx,[edi+edi+6]
	push edx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block305

 Block304:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebx
	push esi
	call _memcpy
	add esp,0xC

 Block305:
	mov dword ptr [ebp+0x68],esi
	test esi,esi
	jne Block308

 Block306:
	test ebx,ebx
	je Block308

 Block307:
	push 0x8007000E
	call _com_issue_error

 Block308:
	lea eax,[ebp+0x60]
	push eax
	push 0xFF51378C
	push 0xA
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x43
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [ebp+0x40]
	add eax,0x304
	mov eax,dword ptr [eax]
	add eax,0x2C
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x44
	test eax,eax
	jne Block310

 Block309:
	push 0x80004003
	call _com_issue_error

 Block310:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0x42
	jne Block313

 Block311:
	mov eax,dword ptr [ebp+0x68]
	xor edx,edx
	mov word ptr [ebp+0x60],dx
	test eax,eax
	je Block314

 Block312:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block314

 Block313:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block314:
	mov esi,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB
	test esi,esi
	je Block322

 Block315:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block322

 Block316:
	test esi,esi
	je Block322

 Block317:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block319

 Block318:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block319:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block321

 Block320:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block321:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block322:
	mov edi,dword ptr [ebp+0x40]
	lea edx,[ebp+0x27]
	push edx
	add edi,0x308
	push 0xC
	mov ecx,edi
	call ZArray<_x_com_ptr<IWzFont>>::_Alloc
	xor esi,esi
	mov bl,0x45
	jmp Block324

 Block324:
	lea eax,[ebp+0x58]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [eax]
	push 0
	add ecx,esi
	push ecx
	push eax
	mov byte ptr [ebp-4],bl
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x58]
	add esp,0xC
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block326

 Block325:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block326:
	add esi,4
	cmp esi,0x30
	jl Block324

 Block327:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block329

 Block328:
	push eax
	call _com_issue_error

 Block329:
	lea ecx,[ebp+0x60]
	push ecx
	push 0xFF000000
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x46
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x47
	test ecx,ecx
	jne Block331

 Block330:
	push 0x80004003
	call _com_issue_error

 Block331:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0xB
	jne Block334

 Block332:
	xor eax,eax
	mov word ptr [ebp+0x60],ax
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block335

 Block333:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block335

 Block334:
	lea ecx,[ebp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block335:
	lea edx,[ebp+0x58]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x48
	test eax,eax
	je Block337

 Block336:
	mov esi,dword ptr [eax]
	jmp Block338

 Block337:
	xor esi,esi

 Block338:
	mov eax,8
	push esi
	mov word ptr [ebp+0x60],ax
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [ebp+0x68],eax
	test eax,eax
	jne Block341

 Block339:
	test esi,esi
	je Block341

 Block340:
	push 0x8007000E
	call _com_issue_error

 Block341:
	lea ecx,[ebp+0x60]
	push ecx
	push 0xFF000000
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x49
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,4
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x4A
	test eax,eax
	jne Block343

 Block342:
	push 0x80004003
	call _com_issue_error

 Block343:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0x48
	jne Block346

 Block344:
	xor eax,eax
	mov word ptr [ebp+0x60],ax
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block347

 Block345:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block347

 Block346:
	lea ecx,[ebp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block347:
	mov esi,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB
	test esi,esi
	je Block355

 Block348:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block355

 Block349:
	test esi,esi
	je Block355

 Block350:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block352

 Block351:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block352:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block354

 Block353:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block354:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block355:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block357

 Block356:
	push eax
	call _com_issue_error

 Block357:
	lea edx,[ebp+0x60]
	push edx
	push 0xFFFF0000
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x4B
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,8
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x4C
	test eax,eax
	jne Block359

 Block358:
	push 0x80004003
	call _com_issue_error

 Block359:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0xB
	jne Block362

 Block360:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block363

 Block361:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block363

 Block362:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block363:
	lea eax,[ebp+0x58]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x4D
	test eax,eax
	je Block365

 Block364:
	mov esi,dword ptr [eax]
	jmp Block366

 Block365:
	xor esi,esi

 Block366:
	mov ecx,8
	push esi
	mov word ptr [ebp+0x60],cx
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [ebp+0x68],eax
	test eax,eax
	jne Block369

 Block367:
	test esi,esi
	je Block369

 Block368:
	push 0x8007000E
	call _com_issue_error

 Block369:
	lea edx,[ebp+0x60]
	push edx
	push 0xFFFF0000
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x4E
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,0xC
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x4F
	test eax,eax
	jne Block371

 Block370:
	push 0x80004003
	call _com_issue_error

 Block371:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	mov esi,8
	mov byte ptr [ebp-4],0x4D
	cmp word ptr [ebp+0x60],si
	jne Block374

 Block372:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block375

 Block373:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block375

 Block374:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block375:
	mov ecx,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB
	test ecx,ecx
	je Block377

 Block376:
	call _xbstr_t::Data_t::Release

 Block377:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block379

 Block378:
	push eax
	call _com_issue_error

 Block379:
	lea edx,[ebp+0x60]
	push edx
	push 0xFF00FF00
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x50
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,0x10
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x51
	test eax,eax
	jne Block381

 Block380:
	push 0x80004003
	call _com_issue_error

 Block381:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x60],si
	jne Block384

 Block382:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block385

 Block383:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block385

 Block384:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block385:
	lea eax,[ebp+0x58]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x52
	test eax,eax
	je Block387

 Block386:
	mov esi,dword ptr [eax]
	jmp Block388

 Block387:
	xor esi,esi

 Block388:
	mov ecx,8
	push esi
	mov word ptr [ebp+0x60],cx
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [ebp+0x68],eax
	test eax,eax
	jne Block391

 Block389:
	test esi,esi
	je Block391

 Block390:
	push 0x8007000E
	call _com_issue_error

 Block391:
	lea edx,[ebp+0x60]
	push edx
	push 0xFF00FF00
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x53
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,0x14
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x54
	test eax,eax
	jne Block393

 Block392:
	push 0x80004003
	call _com_issue_error

 Block393:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	mov esi,8
	mov byte ptr [ebp-4],0x52
	cmp word ptr [ebp+0x60],si
	jne Block396

 Block394:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block397

 Block395:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block397

 Block396:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block397:
	mov ecx,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB
	test ecx,ecx
	je Block399

 Block398:
	call _xbstr_t::Data_t::Release

 Block399:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block401

 Block400:
	push eax
	call _com_issue_error

 Block401:
	lea edx,[ebp+0x60]
	push edx
	push 0xFF0000FF
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x55
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,0x18
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x56
	test eax,eax
	jne Block403

 Block402:
	push 0x80004003
	call _com_issue_error

 Block403:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x60],si
	jne Block406

 Block404:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block407

 Block405:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block407

 Block406:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block407:
	lea eax,[ebp+0x58]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x57
	test eax,eax
	je Block409

 Block408:
	mov esi,dword ptr [eax]
	jmp Block410

 Block409:
	xor esi,esi

 Block410:
	mov ecx,8
	push esi
	mov word ptr [ebp+0x60],cx
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [ebp+0x68],eax
	test eax,eax
	jne Block413

 Block411:
	test esi,esi
	je Block413

 Block412:
	push 0x8007000E
	call _com_issue_error

 Block413:
	lea edx,[ebp+0x60]
	push edx
	push 0xFF0000FF
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x58
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,0x1C
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x59
	test eax,eax
	jne Block415

 Block414:
	push 0x80004003
	call _com_issue_error

 Block415:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	mov esi,8
	mov byte ptr [ebp-4],0x57
	cmp word ptr [ebp+0x60],si
	jne Block418

 Block416:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block419

 Block417:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block419

 Block418:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block419:
	mov ecx,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB
	test ecx,ecx
	je Block421

 Block420:
	call _xbstr_t::Data_t::Release

 Block421:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block423

 Block422:
	push eax
	call _com_issue_error

 Block423:
	lea edx,[ebp+0x60]
	push edx
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x5A
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,0x20
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x5B
	test eax,eax
	jne Block425

 Block424:
	push 0x80004003
	call _com_issue_error

 Block425:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x60],si
	jne Block428

 Block426:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block429

 Block427:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block429

 Block428:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block429:
	lea eax,[ebp+0x58]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x5C
	test eax,eax
	je Block431

 Block430:
	mov esi,dword ptr [eax]
	jmp Block432

 Block431:
	xor esi,esi

 Block432:
	mov ecx,8
	push esi
	mov word ptr [ebp+0x60],cx
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [ebp+0x68],eax
	test eax,eax
	jne Block435

 Block433:
	test esi,esi
	je Block435

 Block434:
	push 0x8007000E
	call _com_issue_error

 Block435:
	lea edx,[ebp+0x60]
	push edx
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x5D
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,0x24
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x5E
	test eax,eax
	jne Block437

 Block436:
	push 0x80004003
	call _com_issue_error

 Block437:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	mov esi,8
	mov byte ptr [ebp-4],0x5C
	cmp word ptr [ebp+0x60],si
	jne Block440

 Block438:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block441

 Block439:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block441

 Block440:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block441:
	mov ecx,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB
	test ecx,ecx
	je Block443

 Block442:
	call _xbstr_t::Data_t::Release

 Block443:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block445

 Block444:
	push eax
	call _com_issue_error

 Block445:
	lea edx,[ebp+0x60]
	push edx
	push 0xFF51378C
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x5F
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,0x28
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x60
	test eax,eax
	jne Block447

 Block446:
	push 0x80004003
	call _com_issue_error

 Block447:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x60],si
	jne Block450

 Block448:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block451

 Block449:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block451

 Block450:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block451:
	lea eax,[ebp+0x58]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x61
	test eax,eax
	je Block453

 Block452:
	mov esi,dword ptr [eax]
	jmp Block454

 Block453:
	xor esi,esi

 Block454:
	mov ecx,8
	push esi
	mov word ptr [ebp+0x60],cx
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [ebp+0x68],eax
	test eax,eax
	jne Block457

 Block455:
	test esi,esi
	je Block457

 Block456:
	push 0x8007000E
	call _com_issue_error

 Block457:
	lea edx,[ebp+0x60]
	push edx
	push 0xFF51378C
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x62
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,0x2C
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x63
	test eax,eax
	jne Block459

 Block458:
	push 0x80004003
	call _com_issue_error

 Block459:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0x61
	jne Block462

 Block460:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block463

 Block461:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block463

 Block462:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block463:
	mov ecx,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB
	test ecx,ecx
	je Block465

 Block464:
	call _xbstr_t::Data_t::Release

 Block465:
	lea eax,[ebp+0x44]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block467

 Block466:
	push eax
	call _com_issue_error

 Block467:
	mov edx,3
	mov word ptr [ebp+0x60],dx
	mov dword ptr [ebp+0x68],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x65
	test ecx,ecx
	jne Block469

 Block468:
	push 0x80004003
	call _com_issue_error

 Block469:
	lea eax,[ebp+0x44]
	push eax
	lea edx,[ebp+0x60]
	push edx
	push 0
	push 0
	push 0
	push 0
	push 0
	lea eax,[ebp+0x58]
	push eax
	call IWzGr2D::CreateLayer
	mov edi,dword ptr [ebp+0x40]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x1DC]
	cmp esi,eax
	je Block474

 Block470:
	mov dword ptr [edi+0x1DC],eax
	test eax,eax
	je Block472

 Block471:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block472:
	test esi,esi
	je Block474

 Block473:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block474:
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block476

 Block475:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block476:
	mov ebx,8
	mov byte ptr [ebp-4],0x64
	cmp word ptr [ebp+0x60],bx
	jne Block479

 Block477:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block480

 Block478:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block480

 Block479:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block480:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x44],bx
	jne Block483

 Block481:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block484

 Block482:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block484

 Block483:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block484:
	lea edx,[ebp+0x58]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [ebp-4],0x66
	mov word ptr [ebp+0x60],cx
	mov dword ptr [ebp+0x68],eax
	test eax,eax
	je Block486

 Block485:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block486:
	mov esi,dword ptr [edi+0x1DC]
	mov byte ptr [ebp-4],0x67
	test esi,esi
	jne Block488

 Block487:
	push 0x80004003
	call _com_issue_error

 Block488:
	mov edx,dword ptr [ebp+0x60]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x64]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x68]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x6C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block490

 Block489:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block490:
	mov byte ptr [ebp-4],0x66
	cmp word ptr [ebp+0x60],bx
	jne Block493

 Block491:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block494

 Block492:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block494

 Block493:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block494:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block496

 Block495:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block496:
	lea eax,[ebp+0x58]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x68
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x60],cx
	mov dword ptr [ebp+0x68],eax
	test eax,eax
	je Block498

 Block497:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block498:
	mov esi,dword ptr [edi+0x1DC]
	mov byte ptr [ebp-4],0x69
	test esi,esi
	jne Block500

 Block499:
	push 0x80004003
	call _com_issue_error

 Block500:
	mov edx,dword ptr [ebp+0x60]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x64]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x68]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x6C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block502

 Block501:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block502:
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],bl
	jne Block505

 Block503:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block506

 Block504:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block506

 Block505:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block506:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block508

 Block507:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block508:
	mov esi,dword ptr [edi+0x1DC]
	test esi,esi
	jne Block510

 Block509:
	push 0x80004003
	call _com_issue_error

 Block510:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block512

 Block511:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block512:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x60]
	push edx
	call esi
	lea eax,[ebp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block514

 Block513:
	push eax
	call _com_issue_error

 Block514:
	lea ecx,[ebp+0x44]
	push ecx
	mov byte ptr [ebp-4],0x6A
	call esi
	lea edx,[ebp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block516

 Block515:
	push eax
	call _com_issue_error

 Block516:
	push 0
	push 0
	lea eax,[ebp+0x60]
	push eax
	lea ecx,[ebp+0x44]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x139D
	push edx
	mov byte ptr [ebp-4],0x6B
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x6C
	jne Block518

 Block517:
	push 0x80004003
	call _com_issue_error

 Block518:
	lea eax,[ebp+0x30]
	mov byte ptr [ebp-4],0x6B
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov bl,0x6D
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block521

 Block519:
	cmp eax,0x80004002
	je Block521

 Block520:
	push eax
	call _com_issue_error

 Block521:
	mov ecx,dword ptr [ebp+0x40]
	add ecx,0x1E4
	push 0xFFFFFFFF
	mov byte ptr [ebp-4],0x6E
	mov dword ptr [ebp+0x2C],ecx
	call ZArray<_x_com_ptr<IWzCanvas>>::InsertBefore
	mov edi,dword ptr [eax]
	mov esi,dword ptr [ebp+0x54]
	cmp edi,esi
	je Block526

 Block522:
	mov dword ptr [eax],esi
	test esi,esi
	je Block524

 Block523:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block524:
	test edi,edi
	je Block526

 Block525:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block526:
	mov byte ptr [ebp-4],bl
	test esi,esi
	je Block528

 Block527:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block528:
	mov esi,8
	mov byte ptr [ebp-4],0x6B
	cmp word ptr [ebp+0x30],si
	jne Block531

 Block529:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	test eax,eax
	je Block532

 Block530:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block532

 Block531:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block532:
	mov byte ptr [ebp-4],0x6A
	cmp word ptr [ebp+0x44],si
	jne Block535

 Block533:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block536

 Block534:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block536

 Block535:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block536:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x60],si
	jne Block539

 Block537:
	mov eax,dword ptr [ebp+0x68]
	xor edx,edx
	mov word ptr [ebp+0x60],dx
	test eax,eax
	je Block540

 Block538:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block540

 Block539:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block540:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x60]
	push ecx
	call esi
	lea edx,[ebp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block542

 Block541:
	push eax
	call _com_issue_error

 Block542:
	lea eax,[ebp+0x44]
	push eax
	mov byte ptr [ebp-4],0x6F
	call esi
	lea ecx,[ebp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block544

 Block543:
	push eax
	call _com_issue_error

 Block544:
	push 0
	push 0
	lea edx,[ebp+0x60]
	push edx
	lea eax,[ebp+0x44]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x139E
	push ecx
	mov byte ptr [ebp-4],0x70
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x71
	jne Block546

 Block545:
	push 0x80004003
	call _com_issue_error

 Block546:
	lea edx,[ebp+0x30]
	mov byte ptr [ebp-4],0x70
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov bl,0x72
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block549

 Block547:
	cmp eax,0x80004002
	je Block549

 Block548:
	push eax
	call _com_issue_error

 Block549:
	mov ecx,dword ptr [ebp+0x2C]
	push 0xFFFFFFFF
	mov byte ptr [ebp-4],0x73
	call ZArray<_x_com_ptr<IWzCanvas>>::InsertBefore
	mov edi,dword ptr [eax]
	mov esi,dword ptr [ebp+0x54]
	cmp edi,esi
	je Block554

 Block550:
	mov dword ptr [eax],esi
	test esi,esi
	je Block552

 Block551:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block552:
	test edi,edi
	je Block554

 Block553:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block554:
	mov byte ptr [ebp-4],bl
	test esi,esi
	je Block556

 Block555:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block556:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],0x70
	jne Block559

 Block557:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block560

 Block558:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block560

 Block559:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block560:
	mov esi,8
	mov byte ptr [ebp-4],0x6F
	cmp word ptr [ebp+0x44],si
	jne Block563

 Block561:
	mov eax,dword ptr [ebp+0x4C]
	xor edx,edx
	mov word ptr [ebp+0x44],dx
	test eax,eax
	je Block564

 Block562:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block564

 Block563:
	lea eax,[ebp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block564:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x60],si
	jne Block567

 Block565:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block568

 Block566:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block568

 Block567:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block568:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x60]
	push eax
	call esi
	lea ecx,[ebp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block570

 Block569:
	push eax
	call _com_issue_error

 Block570:
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],0x74
	call esi
	lea eax,[ebp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block572

 Block571:
	push eax
	call _com_issue_error

 Block572:
	push 0
	push 0
	lea ecx,[ebp+0x60]
	push ecx
	lea edx,[ebp+0x44]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x139F
	push eax
	mov byte ptr [ebp-4],0x75
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x76
	jne Block574

 Block573:
	push 0x80004003
	call _com_issue_error

 Block574:
	lea ecx,[ebp+0x30]
	push ecx
	mov byte ptr [ebp-4],0x75
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov bl,0x77
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block577

 Block575:
	cmp eax,0x80004002
	je Block577

 Block576:
	push eax
	call _com_issue_error

 Block577:
	mov ecx,dword ptr [ebp+0x2C]
	push 0xFFFFFFFF
	mov byte ptr [ebp-4],0x78
	call ZArray<_x_com_ptr<IWzCanvas>>::InsertBefore
	mov edi,dword ptr [eax]
	mov esi,dword ptr [ebp+0x54]
	cmp edi,esi
	je Block582

 Block578:
	mov dword ptr [eax],esi
	test esi,esi
	je Block580

 Block579:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block580:
	test edi,edi
	je Block582

 Block581:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block582:
	mov byte ptr [ebp-4],bl
	test esi,esi
	je Block584

 Block583:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block584:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],0x75
	jne Block587

 Block585:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block588

 Block586:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block588

 Block587:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block588:
	mov esi,8
	mov byte ptr [ebp-4],0x74
	cmp word ptr [ebp+0x44],si
	jne Block591

 Block589:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	test eax,eax
	je Block592

 Block590:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block592

 Block591:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block592:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x60],si
	jne Block595

 Block593:
	xor eax,eax
	mov word ptr [ebp+0x60],ax
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block596

 Block594:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block596

 Block595:
	lea ecx,[ebp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block596:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x60]
	push edx
	call esi
	lea eax,[ebp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block598

 Block597:
	push eax
	call _com_issue_error

 Block598:
	lea ecx,[ebp+0x44]
	push ecx
	mov byte ptr [ebp-4],0x79
	call esi
	lea edx,[ebp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block600

 Block599:
	push eax
	call _com_issue_error

 Block600:
	push 0
	push 0
	lea eax,[ebp+0x60]
	push eax
	lea ecx,[ebp+0x44]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x13A0
	push edx
	mov byte ptr [ebp-4],0x7A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x7B
	jne Block602

 Block601:
	push 0x80004003
	call _com_issue_error

 Block602:
	lea eax,[ebp+0x30]
	mov byte ptr [ebp-4],0x7A
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov bl,0x7C
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block605

 Block603:
	cmp eax,0x80004002
	je Block605

 Block604:
	push eax
	call _com_issue_error

 Block605:
	mov ecx,dword ptr [ebp+0x2C]
	push 0xFFFFFFFF
	mov byte ptr [ebp-4],0x7D
	call ZArray<_x_com_ptr<IWzCanvas>>::InsertBefore
	mov edi,dword ptr [eax]
	mov esi,dword ptr [ebp+0x54]
	cmp edi,esi
	je Block610

 Block606:
	mov dword ptr [eax],esi
	test esi,esi
	je Block608

 Block607:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block608:
	test edi,edi
	je Block610

 Block609:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block610:
	mov byte ptr [ebp-4],bl
	test esi,esi
	je Block612

 Block611:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block612:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],0x7A
	jne Block615

 Block613:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	test eax,eax
	je Block616

 Block614:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block616

 Block615:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block616:
	mov esi,8
	mov byte ptr [ebp-4],0x79
	cmp word ptr [ebp+0x44],si
	jne Block619

 Block617:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block620

 Block618:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block620

 Block619:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block620:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x60],si
	jne Block623

 Block621:
	mov eax,dword ptr [ebp+0x68]
	xor edx,edx
	mov word ptr [ebp+0x60],dx
	test eax,eax
	je Block624

 Block622:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block624

 Block623:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block624:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x60]
	push ecx
	call esi
	lea edx,[ebp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block626

 Block625:
	push eax
	call _com_issue_error

 Block626:
	lea eax,[ebp+0x44]
	push eax
	mov byte ptr [ebp-4],0x7E
	call esi
	lea ecx,[ebp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block628

 Block627:
	push eax
	call _com_issue_error

 Block628:
	push 0
	push 0
	lea edx,[ebp+0x60]
	push edx
	lea eax,[ebp+0x44]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x13A1
	push ecx
	mov byte ptr [ebp-4],0x7F
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x80
	jne Block630

 Block629:
	push 0x80004003
	call _com_issue_error

 Block630:
	lea edx,[ebp+0x30]
	mov byte ptr [ebp-4],0x7F
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov bl,0x81
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block633

 Block631:
	cmp eax,0x80004002
	je Block633

 Block632:
	push eax
	call _com_issue_error

 Block633:
	mov ecx,dword ptr [ebp+0x2C]
	push 0xFFFFFFFF
	mov byte ptr [ebp-4],0x82
	call ZArray<_x_com_ptr<IWzCanvas>>::InsertBefore
	mov edi,dword ptr [eax]
	mov esi,dword ptr [ebp+0x54]
	cmp edi,esi
	je Block638

 Block634:
	mov dword ptr [eax],esi
	test esi,esi
	je Block636

 Block635:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block636:
	test edi,edi
	je Block638

 Block637:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block638:
	mov byte ptr [ebp-4],bl
	test esi,esi
	je Block640

 Block639:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block640:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],0x7F
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
	mov esi,8
	mov byte ptr [ebp-4],0x7E
	cmp word ptr [ebp+0x44],si
	jne Block647

 Block645:
	mov eax,dword ptr [ebp+0x4C]
	xor edx,edx
	mov word ptr [ebp+0x44],dx
	test eax,eax
	je Block648

 Block646:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block648

 Block647:
	lea eax,[ebp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block648:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x60],si
	jne Block651

 Block649:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block652

 Block650:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block652

 Block651:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block652:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x60]
	push eax
	call esi
	lea ecx,[ebp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block654

 Block653:
	push eax
	call _com_issue_error

 Block654:
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],0x83
	call esi
	lea eax,[ebp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block656

 Block655:
	push eax
	call _com_issue_error

 Block656:
	push 0
	push 0
	lea ecx,[ebp+0x60]
	push ecx
	lea edx,[ebp+0x44]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x13A2
	push eax
	mov byte ptr [ebp-4],0x84
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x85
	jne Block658

 Block657:
	push 0x80004003
	call _com_issue_error

 Block658:
	lea ecx,[ebp+0x30]
	push ecx
	mov byte ptr [ebp-4],0x84
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov bl,0x86
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block661

 Block659:
	cmp eax,0x80004002
	je Block661

 Block660:
	push eax
	call _com_issue_error

 Block661:
	mov ecx,dword ptr [ebp+0x2C]
	push 0xFFFFFFFF
	mov byte ptr [ebp-4],0x87
	call ZArray<_x_com_ptr<IWzCanvas>>::InsertBefore
	mov edi,dword ptr [eax]
	mov esi,dword ptr [ebp+0x54]
	cmp edi,esi
	je Block666

 Block662:
	mov dword ptr [eax],esi
	test esi,esi
	je Block664

 Block663:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block664:
	test edi,edi
	je Block666

 Block665:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block666:
	mov byte ptr [ebp-4],bl
	test esi,esi
	je Block668

 Block667:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block668:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],0x84
	jne Block671

 Block669:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block672

 Block670:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block672

 Block671:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block672:
	mov esi,8
	mov byte ptr [ebp-4],0x83
	cmp word ptr [ebp+0x44],si
	jne Block675

 Block673:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	test eax,eax
	je Block676

 Block674:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block676

 Block675:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block676:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x60],si
	jne Block679

 Block677:
	xor eax,eax
	mov word ptr [ebp+0x60],ax
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block680

 Block678:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block680

 Block679:
	lea ecx,[ebp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block680:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x60]
	push edx
	call esi
	lea eax,[ebp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block682

 Block681:
	push eax
	call _com_issue_error

 Block682:
	lea ecx,[ebp+0x44]
	push ecx
	mov byte ptr [ebp-4],0x88
	call esi
	lea edx,[ebp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block684

 Block683:
	push eax
	call _com_issue_error

 Block684:
	push 0
	push 0
	lea eax,[ebp+0x60]
	push eax
	lea ecx,[ebp+0x44]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x13A3
	push edx
	mov byte ptr [ebp-4],0x89
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x8A
	jne Block686

 Block685:
	push 0x80004003
	call _com_issue_error

 Block686:
	lea eax,[ebp+0x30]
	mov byte ptr [ebp-4],0x89
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov bl,0x8B
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block689

 Block687:
	cmp eax,0x80004002
	je Block689

 Block688:
	push eax
	call _com_issue_error

 Block689:
	mov ecx,dword ptr [ebp+0x2C]
	push 0xFFFFFFFF
	mov byte ptr [ebp-4],0x8C
	call ZArray<_x_com_ptr<IWzCanvas>>::InsertBefore
	mov edi,dword ptr [eax]
	mov esi,dword ptr [ebp+0x54]
	cmp edi,esi
	je Block694

 Block690:
	mov dword ptr [eax],esi
	test esi,esi
	je Block692

 Block691:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block692:
	test edi,edi
	je Block694

 Block693:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block694:
	mov byte ptr [ebp-4],bl
	test esi,esi
	je Block696

 Block695:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block696:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],0x89
	jne Block699

 Block697:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	test eax,eax
	je Block700

 Block698:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block700

 Block699:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block700:
	mov esi,8
	mov byte ptr [ebp-4],0x88
	cmp word ptr [ebp+0x44],si
	jne Block703

 Block701:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block704

 Block702:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block704

 Block703:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block704:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x60],si
	jne Block707

 Block705:
	mov eax,dword ptr [ebp+0x68]
	xor edx,edx
	mov word ptr [ebp+0x60],dx
	test eax,eax
	je Block708

 Block706:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block708

 Block707:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block708:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x60]
	push ecx
	call esi
	lea edx,[ebp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block710

 Block709:
	push eax
	call _com_issue_error

 Block710:
	lea eax,[ebp+0x44]
	push eax
	mov byte ptr [ebp-4],0x8D
	call esi
	lea ecx,[ebp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block712

 Block711:
	push eax
	call _com_issue_error

 Block712:
	push 0
	push 0
	lea edx,[ebp+0x60]
	push edx
	lea eax,[ebp+0x44]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x13A4
	push ecx
	mov byte ptr [ebp-4],0x8E
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x8F
	jne Block714

 Block713:
	push 0x80004003
	call _com_issue_error

 Block714:
	lea edx,[ebp+0x30]
	mov byte ptr [ebp-4],0x8E
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov bl,0x90
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block717

 Block715:
	cmp eax,0x80004002
	je Block717

 Block716:
	push eax
	call _com_issue_error

 Block717:
	mov ecx,dword ptr [ebp+0x2C]
	push 0xFFFFFFFF
	mov byte ptr [ebp-4],0x91
	call ZArray<_x_com_ptr<IWzCanvas>>::InsertBefore
	mov edi,dword ptr [eax]
	mov esi,dword ptr [ebp+0x54]
	cmp edi,esi
	je Block722

 Block718:
	mov dword ptr [eax],esi
	test esi,esi
	je Block720

 Block719:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block720:
	test edi,edi
	je Block722

 Block721:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block722:
	mov byte ptr [ebp-4],bl
	test esi,esi
	je Block724

 Block723:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block724:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],0x8E
	jne Block727

 Block725:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block728

 Block726:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block728

 Block727:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block728:
	mov esi,8
	mov byte ptr [ebp-4],0x8D
	cmp word ptr [ebp+0x44],si
	jne Block731

 Block729:
	mov eax,dword ptr [ebp+0x4C]
	xor edx,edx
	mov word ptr [ebp+0x44],dx
	test eax,eax
	je Block732

 Block730:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block732

 Block731:
	lea eax,[ebp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block732:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x60],si
	jne Block735

 Block733:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block736

 Block734:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block736

 Block735:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block736:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x60]
	push eax
	call esi
	lea ecx,[ebp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block738

 Block737:
	push eax
	call _com_issue_error

 Block738:
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],0x92
	call esi
	lea eax,[ebp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block740

 Block739:
	push eax
	call _com_issue_error

 Block740:
	push 0
	push 0
	lea ecx,[ebp+0x60]
	push ecx
	lea edx,[ebp+0x44]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x13A5
	push eax
	mov byte ptr [ebp-4],0x93
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x94
	jne Block742

 Block741:
	push 0x80004003
	call _com_issue_error

 Block742:
	lea ecx,[ebp+0x30]
	push ecx
	mov byte ptr [ebp-4],0x93
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov bl,0x95
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block745

 Block743:
	cmp eax,0x80004002
	je Block745

 Block744:
	push eax
	call _com_issue_error

 Block745:
	mov ecx,dword ptr [ebp+0x2C]
	push 0xFFFFFFFF
	mov byte ptr [ebp-4],0x96
	call ZArray<_x_com_ptr<IWzCanvas>>::InsertBefore
	mov edi,dword ptr [eax]
	mov esi,dword ptr [ebp+0x54]
	cmp edi,esi
	je Block750

 Block746:
	mov dword ptr [eax],esi
	test esi,esi
	je Block748

 Block747:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block748:
	test edi,edi
	je Block750

 Block749:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block750:
	mov byte ptr [ebp-4],bl
	test esi,esi
	je Block752

 Block751:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block752:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],0x93
	jne Block755

 Block753:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block756

 Block754:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block756

 Block755:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block756:
	mov esi,8
	mov byte ptr [ebp-4],0x92
	cmp word ptr [ebp+0x44],si
	jne Block759

 Block757:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	test eax,eax
	je Block760

 Block758:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block760

 Block759:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block760:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x60],si
	jne Block763

 Block761:
	xor eax,eax
	mov word ptr [ebp+0x60],ax
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block764

 Block762:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block764

 Block763:
	lea ecx,[ebp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block764:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x60]
	push edx
	call esi
	lea eax,[ebp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block766

 Block765:
	push eax
	call _com_issue_error

 Block766:
	lea ecx,[ebp+0x44]
	push ecx
	mov byte ptr [ebp-4],0x97
	call esi
	lea edx,[ebp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block768

 Block767:
	push eax
	call _com_issue_error

 Block768:
	push 0
	push 0
	lea eax,[ebp+0x60]
	push eax
	lea ecx,[ebp+0x44]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x13A6
	push edx
	mov byte ptr [ebp-4],0x98
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x99
	jne Block770

 Block769:
	push 0x80004003
	call _com_issue_error

 Block770:
	lea eax,[ebp+0x30]
	mov byte ptr [ebp-4],0x98
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov bl,0x9A
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block773

 Block771:
	cmp eax,0x80004002
	je Block773

 Block772:
	push eax
	call _com_issue_error

 Block773:
	mov ecx,dword ptr [ebp+0x40]
	push 0xFFFFFFFF
	add ecx,0x1E4
	mov byte ptr [ebp-4],0x9B
	call ZArray<_x_com_ptr<IWzCanvas>>::InsertBefore
	mov edi,dword ptr [eax]
	mov esi,dword ptr [ebp+0x54]
	cmp edi,esi
	je Block778

 Block774:
	mov dword ptr [eax],esi
	test esi,esi
	je Block776

 Block775:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block776:
	test edi,edi
	je Block778

 Block777:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block778:
	mov byte ptr [ebp-4],bl
	test esi,esi
	je Block780

 Block779:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block780:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],0x98
	jne Block783

 Block781:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	test eax,eax
	je Block784

 Block782:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block784

 Block783:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block784:
	mov esi,8
	mov byte ptr [ebp-4],0x97
	cmp word ptr [ebp+0x44],si
	jne Block787

 Block785:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block788

 Block786:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block788

 Block787:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block788:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x60],si
	jne Block791

 Block789:
	mov eax,dword ptr [ebp+0x68]
	xor edx,edx
	mov word ptr [ebp+0x60],dx
	test eax,eax
	je Block792

 Block790:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block792

 Block791:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block792:
	mov esi,dword ptr [ebp+0x40]
	mov ecx,esi
	call CUICharacterSaleDlg::LoadNewCharInfo
	mov ecx,esi
	call CUICharacterSaleDlg::InitNewCharEquip
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x60]
	push ecx
	call esi
	lea edx,[ebp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block794

 Block793:
	push eax
	call _com_issue_error

 Block794:
	lea eax,[ebp+0x44]
	push eax
	mov byte ptr [ebp-4],0x9C
	call esi
	lea ecx,[ebp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block796

 Block795:
	push eax
	call _com_issue_error

 Block796:
	push 0
	push 0
	lea edx,[ebp+0x60]
	push edx
	lea eax,[ebp+0x44]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x564
	mov bl,0x9D
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x9E
	jne Block798

 Block797:
	push 0x80004003
	call _com_issue_error

 Block798:
	lea edx,[ebp+0x30]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x9F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x2C]
	mov dword ptr [ebp+0x2C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block801

 Block799:
	cmp eax,0x80004002
	je Block801

 Block800:
	push eax
	call _com_issue_error

 Block801:
	mov esi,8
	mov byte ptr [ebp-4],0xA1
	cmp word ptr [ebp+0x30],si
	jne Block804

 Block802:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block805

 Block803:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block805

 Block804:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block805:
	mov byte ptr [ebp-4],0xA2
	cmp word ptr [ebp+0x44],si
	jne Block808

 Block806:
	mov eax,dword ptr [ebp+0x4C]
	xor edx,edx
	mov word ptr [ebp+0x44],dx
	test eax,eax
	je Block809

 Block807:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block809

 Block808:
	lea eax,[ebp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block809:
	mov byte ptr [ebp-4],0xA3
	cmp word ptr [ebp+0x60],si
	jne Block812

 Block810:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block813

 Block811:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block813

 Block812:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block813:
	mov eax,dword ptr [ebp+0x40]
	mov edi,dword ptr [ebp+0x2C]
	xor ebx,ebx
	add eax,0x1E8
	mov dword ptr [ebp+0x54],eax

 Block814:
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
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0xA4
	test edi,edi
	je Block5

 Block815:
	lea ecx,[ebp-0x20]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0xA3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xA5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x28]
	mov dword ptr [ebp+0x28],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block817

 Block816:
	cmp eax,0x80004002
	jne Block1

 Block817:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],0xA7
	jne Block820

 Block818:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	test eax,eax
	je Block821

 Block819:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block821

 Block820:
	lea eax,[ebp-0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block821:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x5C6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0xA8
	test esi,esi
	je Block5

 Block822:
	lea edx,[ebp+4]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xA7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xA9
	call Ztl_variant_t::GetUnknown
	mov ecx,dword ptr [ebp+0x54]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block824

 Block823:
	cmp eax,0x80004002
	jne Block1

 Block824:
	cmp word ptr [ebp+4],8
	mov byte ptr [ebp-4],0xA7
	jne Block827

 Block825:
	xor eax,eax
	mov word ptr [ebp+4],ax
	mov eax,dword ptr [ebp+0xC]
	test eax,eax
	je Block828

 Block826:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block828

 Block827:
	lea ecx,[ebp+4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block828:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0xA3
	call eax
	add dword ptr [ebp+0x54],4
	inc ebx
	cmp ebx,4
	jl Block814

 Block829:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	mov esi,8
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x20]
	push ecx
	mov byte ptr [ebp-4],0xAA
	mov ecx,edi
	mov byte ptr [ebp-4],0xA3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xAB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block832

 Block830:
	cmp eax,0x80004002
	je Block832

 Block831:
	push eax
	call _com_issue_error

 Block832:
	mov byte ptr [ebp-4],0xAD
	cmp word ptr [ebp-0x20],si
	jne Block835

 Block833:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	test eax,eax
	je Block836

 Block834:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block836

 Block835:
	lea eax,[ebp-0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block836:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x5C6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0xAE
	test ecx,ecx
	jne Block838

 Block837:
	push 0x80004003
	call _com_issue_error

 Block838:
	lea edx,[ebp+4]
	push edx
	mov byte ptr [ebp-4],0xAD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xAF
	call Ztl_variant_t::GetUnknown
	mov ecx,dword ptr [ebp+0x40]
	lea ecx,[ecx+ebx*4+0x1E8]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block841

 Block839:
	cmp eax,0x80004002
	je Block841

 Block840:
	push eax
	call _com_issue_error

 Block841:
	mov byte ptr [ebp-4],0xAD
	cmp word ptr [ebp+4],si
	jne Block844

 Block842:
	mov eax,dword ptr [ebp+0xC]
	xor edx,edx
	mov word ptr [ebp+4],dx
	test eax,eax
	je Block845

 Block843:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block845

 Block844:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block845:
	xor edi,edi
	mov dword ptr [ebp+0x20],edi
	mov dword ptr [ebp+0x14],1
	mov dword ptr [ebp+0x18],edi
	mov dword ptr [ebp+0x1C],edi
	mov esi,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0xB0
	lea ebx,[edi+0x66]
	add esi,0x130
	lea ecx,[ecx]

 Block846:
	lea ecx,[ebp+0x58]
	push 0x139B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0xB1
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB0
	test eax,eax
	je Block848

 Block847:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block848:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x5C],eax
	mov byte ptr [ebp-4],0xB2
	test eax,eax
	je Block850

 Block849:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block851

 Block850:
	xor eax,eax

 Block851:
	push eax
	lea ecx,[esi-4]
	mov byte ptr [ebp-4],0xB0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	push 0
	push ebx
	push 0x116
	lea eax,[edi+0x3F0]
	push eax
	mov eax,dword ptr [ebp+0x40]
	push eax
	call edx
	mov eax,dword ptr [esi]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov eax,dword ptr [esi]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	lea eax,[ebp+0x28]
	push 0x139C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0xB3
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0xB0
	test eax,eax
	je Block853

 Block852:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block853:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x5C],eax
	mov byte ptr [ebp-4],0xB4
	test eax,eax
	je Block855

 Block854:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block856

 Block855:
	xor eax,eax

 Block856:
	push eax
	lea ecx,[esi+0x44]
	mov byte ptr [ebp-4],0xB0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x48]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	push 0
	push ebx
	push 0x191
	lea eax,[edi+0x3F9]
	push eax
	mov eax,dword ptr [ebp+0x40]
	push eax
	call edx
	mov eax,dword ptr [esi+0x48]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov eax,dword ptr [esi+0x48]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	add ebx,0x13
	inc edi
	add esi,8
	cmp ebx,0xB2
	jl Block846

 Block857:
	lea eax,[ebp+0x58]
	push 0x139B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0xB5
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB0
	test eax,eax
	je Block859

 Block858:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block859:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x5C],eax
	mov byte ptr [ebp-4],0xB6
	test eax,eax
	je Block861

 Block860:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block862

 Block861:
	xor eax,eax

 Block862:
	mov esi,dword ptr [ebp+0x40]
	push eax
	lea ecx,[esi+edi*8+0x12C]
	mov byte ptr [ebp-4],0xB0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+edi*8+0x130]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	mov edx,edi
	imul edx,0x13
	lea ebx,[edx+0x66]
	lea edx,[ebp+0x14]
	push edx
	push 0
	push ebx
	push 0x116
	lea edx,[edi+0x3F0]
	push edx
	push esi
	call eax
	mov eax,dword ptr [esi+edi*8+0x130]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov eax,dword ptr [esi+edi*8+0x130]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	lea ecx,[ebp+0x58]
	push 0x139C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0xB7
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB0
	test eax,eax
	je Block864

 Block863:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block864:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x5C],eax
	mov byte ptr [ebp-4],0xB8
	test eax,eax
	je Block866

 Block865:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block867

 Block866:
	xor eax,eax

 Block867:
	push eax
	lea ecx,[esi+edi*8+0x174]
	mov byte ptr [ebp-4],0xB0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+edi*8+0x178]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	push 0
	push ebx
	push 0x191
	lea eax,[edi+0x3F9]
	push eax
	push esi
	call edx
	mov ecx,dword ptr [esi+edi*8+0x178]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x1C]
	add ecx,4
	push 0
	call edx
	mov edi,dword ptr [esi+edi*8+0x178]
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x24]
	lea ecx,[edi+4]
	push 0
	call edx
	lea eax,[ebp+0x58]
	push 0x139B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0xB9
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB0
	test eax,eax
	je Block869

 Block868:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block869:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x5C],eax
	mov byte ptr [ebp-4],0xBA
	test eax,eax
	je Block871

 Block870:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block872

 Block871:
	xor eax,eax

 Block872:
	push eax
	lea ecx,[esi+0x11C]
	mov byte ptr [ebp-4],0xB0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	push 0
	push 0xF1
	push 0x20
	push 0x3EB
	push esi
	call edx
	mov ecx,dword ptr [esi+0x120]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x1C]
	add ecx,4
	push 0
	call edx
	mov ecx,dword ptr [esi+0x120]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x24]
	add ecx,4
	push 0
	call edx
	lea eax,[ebp+0x58]
	push 0x139C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0xBB
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB0
	test eax,eax
	je Block874

 Block873:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block874:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x5C],eax
	mov byte ptr [ebp-4],0xBC
	test eax,eax
	je Block876

 Block875:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block877

 Block876:
	xor eax,eax

 Block877:
	push eax
	lea ecx,[esi+0x124]
	mov byte ptr [ebp-4],0xB0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	push 0
	push 0xF1
	push 0xA5
	push 0x3EC
	push esi
	call edx
	mov ecx,dword ptr [esi+0x128]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x1C]
	add ecx,4
	push 0
	call edx
	mov ecx,dword ptr [esi+0x128]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x24]
	add ecx,4
	push 0
	call edx
	lea eax,[ebp+0x58]
	push 0x1399
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0xBD
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB0
	test eax,eax
	je Block879

 Block878:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block879:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x5C],eax
	mov byte ptr [ebp-4],0xBE
	test eax,eax
	je Block881

 Block880:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block882

 Block881:
	xor eax,eax

 Block882:
	push eax
	lea ecx,[esi+0x10C]
	mov byte ptr [ebp-4],0xB0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x110]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	push 0
	push 0xE9
	push 0xDE
	push 0x3E9
	push esi
	call edx
	mov eax,dword ptr [esi+0x110]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	mov eax,dword ptr [esi+0x110]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	lea eax,[ebp+0x58]
	push 0x139A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0xBF
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB0
	test eax,eax
	je Block884

 Block883:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block884:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x5C],eax
	mov byte ptr [ebp-4],0xC0
	test eax,eax
	je Block886

 Block885:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block887

 Block886:
	xor eax,eax

 Block887:
	push eax
	lea ecx,[esi+0x114]
	mov byte ptr [ebp-4],0xB0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x118]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	push 0
	push 0xE9
	push 0x136
	push 0x3EA
	push esi
	call edx
	mov eax,dword ptr [esi+0x118]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov eax,dword ptr [esi+0x118]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	lea eax,[ebp+0x58]
	push 0x1397
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0xC1
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB0
	test eax,eax
	je Block889

 Block888:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block889:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x5C],eax
	mov byte ptr [ebp-4],0xC2
	test eax,eax
	je Block891

 Block890:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block892

 Block891:
	xor eax,eax

 Block892:
	push eax
	lea ecx,[esi+0xFC]
	mov byte ptr [ebp-4],0xB0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x100]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	push 0
	push 0xE9
	push 0xDE
	push 2
	push esi
	call edx
	mov ecx,dword ptr [esi+0x100]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x1C]
	add ecx,4
	push 0
	call edx
	mov ecx,dword ptr [esi+0x100]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x24]
	add ecx,4
	push 0
	call edx
	lea eax,[ebp+0x58]
	push 0x1398
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0xC3
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB0
	test eax,eax
	je Block894

 Block893:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block894:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x5C],eax
	mov byte ptr [ebp-4],0xC4
	test eax,eax
	je Block896

 Block895:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block897

 Block896:
	xor eax,eax

 Block897:
	push eax
	lea ecx,[esi+0x104]
	mov byte ptr [ebp-4],0xB0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x108]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	push 0
	push 0xE9
	push 0x136
	push 0x3E8
	push esi
	call edx
	mov ecx,dword ptr [esi+0x108]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x1C]
	add ecx,4
	push 0
	call edx
	mov ecx,dword ptr [esi+0x108]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x24]
	add ecx,4
	push 0
	call edx
	lea ecx,[ebp-0xCC]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [ebp-4],0xC5
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x5C],eax
	mov byte ptr [ebp-4],0xC6
	test eax,eax
	je Block899

 Block898:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block900

 Block899:
	xor eax,eax

 Block900:
	push eax
	lea ecx,[esi+0xF4]
	mov byte ptr [ebp-4],0xC5
	call ZRef<CCtrlEdit>::op_assign_ptr
	mov ecx,dword ptr [esi+0xF8]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[ebp-0xCC]
	push edx
	push 0xD
	push 0xB4
	push 0x96
	push 0xE6
	push 0x3ED
	push esi
	call eax
	mov ecx,dword ptr [esi+0xF8]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x1C]
	add ecx,4
	push 0
	call eax
	mov ecx,dword ptr [esi+0xF8]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x24]
	add ecx,4
	push 0
	call eax
	lea ecx,[ebp+0x58]
	push 0x139B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0xC7
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xC5
	test eax,eax
	je Block902

 Block901:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block902:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x5C],eax
	mov byte ptr [ebp-4],0xC8
	test eax,eax
	je Block904

 Block903:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block905

 Block904:
	xor eax,eax

 Block905:
	push eax
	lea ecx,[esi+0x1BC]
	mov byte ptr [ebp-4],0xC5
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	push 0
	push 0xC5
	push 0xC5
	push 0x3EE
	push esi
	call edx
	mov eax,dword ptr [esi+0x1C0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov eax,dword ptr [esi+0x1C0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	lea eax,[ebp+0x58]
	push 0x139C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0xC9
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xC5
	test eax,eax
	je Block907

 Block906:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block907:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x5C],eax
	mov byte ptr [ebp-4],0xCA
	test eax,eax
	je Block909

 Block908:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block910

 Block909:
	xor eax,eax

 Block910:
	push eax
	lea ecx,[esi+0x1C4]
	mov byte ptr [ebp-4],0xC5
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	push 0
	push 0xC5
	push 0x19E
	push 0x3EF
	push esi
	call edx
	mov eax,dword ptr [esi+0x1C8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov eax,dword ptr [esi+0x1C8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	mov ecx,esi
	call CUICharacterSaleDlg::LoadSPInfo
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x30]
	push eax
	call edi
	lea ecx,[ebp-0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block912

 Block911:
	push eax
	call _com_issue_error

 Block912:
	lea edx,[ebp-0x40]
	push edx
	mov byte ptr [ebp-4],0xCB
	call edi
	lea eax,[ebp-0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block914

 Block913:
	push eax
	call _com_issue_error

 Block914:
	push 0
	push 0
	lea ecx,[ebp-0x30]
	push ecx
	lea edx,[ebp-0x40]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x564
	mov bl,0xCC
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xCD
	jne Block916

 Block915:
	push 0x80004003
	call _com_issue_error

 Block916:
	lea ecx,[ebp+4]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xCE
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x2C]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block919

 Block917:
	cmp eax,0x80004002
	je Block919

 Block918:
	push eax
	call _com_issue_error

 Block919:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+4],di
	jne Block922

 Block920:
	mov eax,dword ptr [ebp+0xC]
	xor edx,edx
	mov word ptr [ebp+4],dx
	test eax,eax
	je Block923

 Block921:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block923

 Block922:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block923:
	mov byte ptr [ebp-4],0xCB
	cmp word ptr [ebp-0x40],di
	jne Block926

 Block924:
	mov eax,dword ptr [ebp-0x38]
	xor ecx,ecx
	mov word ptr [ebp-0x40],cx
	test eax,eax
	je Block927

 Block925:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block927

 Block926:
	lea edx,[ebp-0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block927:
	mov byte ptr [ebp-4],0xC5
	cmp word ptr [ebp-0x30],di
	jne Block930

 Block928:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	test eax,eax
	je Block931

 Block929:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block931

 Block930:
	lea ecx,[ebp-0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block931:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push 0
	call __itow
	add esp,8
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ebx,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0xCF
	test ebx,ebx
	jne Block933

 Block932:
	push 0x80004003
	call _com_issue_error

 Block933:
	lea edx,[ebp+4]
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0xC5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xD0
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x28]
	mov dword ptr [ebp+0x28],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block936

 Block934:
	cmp eax,0x80004002
	je Block936

 Block935:
	push eax
	call _com_issue_error

 Block936:
	cmp word ptr [ebp+4],8
	mov byte ptr [ebp-4],0xD2
	jne Block939

 Block937:
	xor eax,eax
	mov word ptr [ebp+4],ax
	mov eax,dword ptr [ebp+0xC]
	test eax,eax
	je Block940

 Block938:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block940

 Block939:
	lea ecx,[ebp+4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block940:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x5C6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0xD3
	test edi,edi
	jne Block942

 Block941:
	push 0x80004003
	call _com_issue_error

 Block942:
	lea eax,[ebp-0x50]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xD2
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xD4
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x1D8]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block945

 Block943:
	cmp eax,0x80004002
	je Block945

 Block944:
	push eax
	call _com_issue_error

 Block945:
	cmp word ptr [ebp-0x50],8
	mov byte ptr [ebp-4],0xD2
	jne Block948

 Block946:
	mov eax,dword ptr [ebp-0x48]
	xor ecx,ecx
	mov word ptr [ebp-0x50],cx
	test eax,eax
	je Block949

 Block947:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block949

 Block948:
	lea edx,[ebp-0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block949:
	mov ecx,esi
	call CUICharacterSaleDlg::ClearWindow
	mov ecx,esi
	call CUICharacterSaleDlg::ShowWindow
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],0xC5
	call ecx
	lea ecx,[ebp-0xCC]
	mov byte ptr [ebp-4],0xB0
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0xAD
	test eax,eax
	je Block951

 Block950:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block951:
	mov eax,dword ptr [ebp+0x54]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0xA3
	call eax
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [ebp-4],0xB
	call edx
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],7
	call edx
	mov eax,dword ptr [ebp-0x10]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0xDC]
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
	ret 4
}
}
// CUICharacterSaleDlg::OnCheckDuplicatedIDResult
_SUB_EXCEPTION_HANDLER(377E40)
__SUB_CLASS_THIS(00377E40, __thiscall, 67203,  CUICharacterSaleDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_377E40
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
	mov esi,ecx
	mov edi,dword ptr [esp+0x30]
	lea eax,[esp+0x14]
	xor ebp,ebp
	push eax
	mov ecx,edi
	mov dword ptr [esi+0x2E4],ebp
	call CInPacket::DecodeStr
	mov ecx,edi
	mov dword ptr [esp+0x28],ebp
	call CInPacket::Decode1
	movsx edi,al
	mov dword ptr [esp+0x18],ebp
	cmp edi,ebp
	mov byte ptr [esp+0x28],1
	jle Block2

 Block1:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0x13C9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	add esp,0x14
	push 0x3E9
	mov ecx,esi
	call eax
	jmp Block8

 Block2:
	jne Block4

 Block3:
	mov eax,dword ptr [esi+0x108]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	push 0x3E8
	mov ecx,esi
	call eax
	jmp Block8

 Block4:
	mov dword ptr [esp+0x30],ebp
	lea ecx,[esp+0x10]
	push 0x1A86
	push ecx
	mov byte ptr [esp+0x30],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x34],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x1C]
	add esp,0xC
	mov byte ptr [esp+0x28],2
	cmp eax,ebp
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	lea eax,[esp+0x44]
	mov dword ptr [esp+0x30],esp
	push eax
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	add esp,0x14
	push 0x3E9
	mov ecx,esi
	call eax
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x28],1
	cmp eax,ebp
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebp
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
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
// CUICharacterSaleDlg::GetNewCharEquipName
__SUB_CLASS_THIS(00377310, __thiscall, 67184,  CUICharacterSaleDlg, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push ecx
	cmp byte ptr [ecx+0x20C],0
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	jne Block2

 Block1:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [ecx+eax*4+0x210]
	jmp Block3

 Block2:
	mov edx,dword ptr [esp+0x10]
	mov ecx,dword ptr [ecx+edx*4+0x234]

 Block3:
	add ecx,4
	push ecx
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,esi
	pop esi
	pop ecx
	ret 8
}
}
// CUICharacterSaleDlg::SetAvatar
_SUB_EXCEPTION_HANDLER(37A3C0)
__SUB_CLASS_THIS(0037A3C0, __thiscall, 67192,  CUICharacterSaleDlg, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_37A3C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x214
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x224]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	xor eax,eax
	cmp dword ptr [esp+0x234],ebx
	push 0xF0
	setne al
	lea ecx,[esp+0x39]
	push ebx
	push ecx
	mov dword ptr [esp+0x35],ebx
	mov dword ptr [esp+0x39],ebx
	mov dword ptr [esp+0x3D],ebx
	lea eax,[eax+eax-1]
	mov edi,eax
	xor eax,eax
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x30],eax
	int 3// TODO: 	mov dword ptr [esp+0x28],offset AvatarLook::`vftable'
	call _memset
	xor eax,eax
	add esp,0xC
	mov dword ptr [esp+0x215],eax
	mov dword ptr [esp+0x219],eax
	mov dword ptr [esp+0x21D],eax
	mov dl,byte ptr [esi+0x20C]
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x230],ebx
	mov byte ptr [esp+0x2C],dl
	call CUICharacterSaleDlg::GetSelectedAL_1
	mov cl,byte ptr [esp+0x28]
	mov byte ptr [esi+0x20C],cl
	lea ecx,[esi+0x2E8]
	call ZRef<CAvatar>::_Alloc
	push ebx
	push 0x64
	push 0xC8
	push 0x5F
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x248],1
	call CWnd::GetLayer
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [edi],ebx
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x24C],2
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov ecx,edi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	cmp eax,ebx
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov ecx,dword ptr [esi+0x2EC]
	push 4
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x250],3
	call CAvatar::Init_1
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x22C],bl
	cmp eax,ebx
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,1
	mov ecx,dword ptr [esp+0x224]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x220
	ret 4
}
}
// CUICharacterSaleDlg::GetNewCharItemName
_SUB_EXCEPTION_HANDLER(378980)
__SUB_CLASS_THIS(00378980, __thiscall, 67202,  CUICharacterSaleDlg, ZXString<char>*, ZXString<char>*, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_378980
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov edi,dword ptr [esp+0x5C]
	mov dword ptr [edi],ebp
	mov esi,dword ptr [esp+0x64]
	cmp esi,ebp
	mov eax,1
	mov dword ptr [esp+0x54],ebp
	mov dword ptr [esp+0x14],eax
	jle Block38

 Block1:
	cmp esi,3
	jg Block38

 Block2:
	mov dword ptr [esp+0x64],ebp
	mov dword ptr [esp+0x54],eax
	cmp dword ptr [esp+0x60],ebp
	jne Block8

 Block3:
	lea eax,[esp+0x60]
	push 0x5F7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x54],2
	cmp eax,ebp
	je Block5

 Block4:
	mov eax,dword ptr [eax]
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	mov ecx,dword ptr [esp+0x68]
	push ecx
	push esi
	push eax
	lea edx,[esp+0x70]
	push edx
	call ZXString16::Format
	mov ecx,dword ptr [esp+0x70]
	add esp,0x10
	mov byte ptr [esp+0x54],1
	cmp ecx,ebp
	je Block13

 Block7:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x60],ebp
	jmp Block13

 Block8:
	lea eax,[esp+0x10]
	push 0x5F8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x54],3
	cmp eax,ebp
	je Block10

 Block9:
	mov eax,dword ptr [eax]
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	mov ecx,dword ptr [esp+0x68]
	push ecx
	push esi
	push eax
	lea edx,[esp+0x70]
	push edx
	call ZXString16::Format
	mov ecx,dword ptr [esp+0x20]
	add esp,0x10
	mov byte ptr [esp+0x54],1
	cmp ecx,ebp
	je Block13

 Block12:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x10],ebp

 Block13:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x58],4
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov eax,dword ptr [esp+0x64]
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	push ecx
	mov dword ptr [esp+0x74],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x64],5
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x60],6
	cmp dword ptr [_D_G_RM],ebp
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x64],5
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov esi,8
	mov byte ptr [esp+0x54],7
	cmp word ptr [eax],si
	jne Block21

 Block20:
	mov eax,dword ptr [eax+8]
	jmp Block22

 Block21:
	mov eax,offset _S___3

 Block22:
	push 0xFFFFFFFF
	push eax
	mov ecx,edi
	call ZXString<char>::AssignWideStr
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x54],5
	cmp word ptr [esp+0x3C],si
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x3C]
	push eax
	call edi

 Block26:
	mov byte ptr [esp+0x54],4
	cmp word ptr [esp+0x1C],si
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x1C]
	push edx
	call edi

 Block30:
	mov byte ptr [esp+0x54],1
	cmp word ptr [esp+0x2C],si
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block34:
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x54],0
	cmp eax,ebp
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block36:
	mov edi,dword ptr [esp+0x5C]

 Block37:
	mov eax,edi
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x48
	ret 0x10

 Block38:
	mov edx,dword ptr [esp+0x68]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call CItemInfo::GetItemName
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x58],8
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x54],0
	cmp eax,ebp
	je Block37

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block37
}
}
// CUICharacterSaleDlg::LoadNewCharInfo
_SUB_EXCEPTION_HANDLER(377790)
__SUB_CLASS_THIS0(00377790, __thiscall, 67180,  CUICharacterSaleDlg, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x78]
	sub esp,0x78
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_377790
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
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
	xor esi,esi
	xor eax,eax
	mov dword ptr [ebp+0x70],esi
	xor ebx,ebx
	mov dword ptr [ebp-4],eax
	mov dword ptr [ebp+0x60],ebx
	mov byte ptr [ebp-4],1
	mov dword ptr [ebp+0x68],eax
	jmp Block4

 Block3:
	mov esi,dword ptr [ebp+0x70]

 Block4:
	mov edi,dword ptr [ZImports::_VariantInit]
	test eax,eax
	jne Block27

 Block5:
	lea eax,[ebp+0x20]
	push eax
	call edi
	lea ecx,[ebp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block79

 Block6:
	lea edx,[ebp+0x30]
	push edx
	mov byte ptr [ebp-4],2
	call edi
	lea eax,[ebp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block79

 Block7:
	push 0
	push 0
	lea ecx,[ebp+0x20]
	push ecx
	lea edx,[ebp+0x30]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x6C],esp
	push 0x5F5
	push eax
	mov byte ptr [ebp-4],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],4
	je Block80

 Block8:
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],3
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block16

 Block9:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x50]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	mov edi,eax
	xor eax,eax
	test edi,edi
	setl al
	dec eax
	and eax,dword ptr [ebp+0x50]
	mov esi,eax
	mov eax,dword ptr [ebp+0x70]
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov dword ptr [ebp+0x70],esi
	test edi,edi
	jge Block13

 Block12:
	cmp edi,0x80004002
	jne Block81

 Block13:
	mov esi,8
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp],si
	jne Block19

 Block14:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block20

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block16:
	test esi,esi
	je Block13

 Block17:
	mov eax,esi
	mov dword ptr [ebp+0x70],0
	test eax,eax
	je Block13

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block13

 Block19:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp+0x30],si
	jne Block23

 Block21:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
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
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp+0x20],si
	jne Block26

 Block25:
	mov eax,dword ptr [ebp+0x28]
	xor ecx,ecx
	mov word ptr [ebp+0x20],cx
	jmp Block48

 Block26:
	lea edx,[ebp+0x20]
	jmp Block51

 Block27:
	lea eax,[ebp+0x10]
	push eax
	call edi
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block79

 Block28:
	lea edx,[ebp+0x40]
	push edx
	mov byte ptr [ebp-4],6
	call edi
	lea eax,[ebp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block79

 Block29:
	push 0
	push 0
	lea ecx,[ebp+0x10]
	push ecx
	lea edx,[ebp+0x40]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x6C],esp
	push 0x5F6
	push eax
	mov byte ptr [ebp-4],7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],8
	je Block80

 Block30:
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],7
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block38

 Block31:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x54]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	mov edi,eax
	xor eax,eax
	test edi,edi
	setl al
	dec eax
	and eax,dword ptr [ebp+0x54]
	mov esi,eax
	mov eax,dword ptr [ebp+0x70]
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	mov dword ptr [ebp+0x70],esi
	test edi,edi
	jge Block35

 Block34:
	cmp edi,0x80004002
	jne Block81

 Block35:
	mov esi,8
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x2C],si
	jne Block41

 Block36:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block42

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block38:
	test esi,esi
	je Block35

 Block39:
	mov eax,esi
	mov dword ptr [ebp+0x70],0
	test eax,eax
	je Block35

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block35

 Block41:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp+0x40],si
	jne Block45

 Block43:
	mov eax,dword ptr [ebp+0x48]
	xor edx,edx
	mov word ptr [ebp+0x40],dx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[ebp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp+0x10],si
	jne Block50

 Block47:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx

 Block48:
	test eax,eax
	je Block52

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block50:
	lea edx,[ebp+0x10]

 Block51:
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	xor esi,esi
	mov dword ptr [ebp+0x64],esi

 Block53:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
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
	mov ecx,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0xA
	test ecx,ecx
	je Block80

 Block54:
	lea eax,[ebp-0x1C]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block62

 Block55:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x58]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov edi,eax
	test edi,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x58]
	mov esi,ecx
	test ebx,ebx
	je Block57

 Block56:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block57:
	mov ebx,esi
	mov dword ptr [ebp+0x60],ebx
	test edi,edi
	jge Block59

 Block58:
	cmp edi,0x80004002
	jne Block81

 Block59:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],1
	jne Block65

 Block60:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block66

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block62:
	test ebx,ebx
	je Block59

 Block63:
	mov eax,ebx
	xor ebx,ebx
	mov dword ptr [ebp+0x60],ebx
	test eax,eax
	je Block59

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block59

 Block65:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	xor edi,edi
	mov edi,edi

 Block67:
	test ebx,ebx
	je Block80

 Block68:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x6C]
	push eax
	push ebx
	mov dword ptr [ebp+0x6C],0
	call ecx
	test eax,eax
	jge Block70

 Block69:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block70:
	cmp edi,dword ptr [ebp+0x6C]
	jae Block76

 Block71:
	mov ecx,dword ptr [ebp+0x5C]
	add ecx,0x2F0
	call ZList<CUICharacterSaleDlg::NEWEQUIP>::AddTail_
	mov edx,dword ptr [ebp+0x68]
	mov esi,eax
	mov eax,dword ptr [ebp+0x64]
	mov dword ptr [esi+4],eax
	mov eax,0x20
	mov dword ptr [esi],edx
	call __chkstk
	mov eax,esp
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],0xC
	mov ecx,ebx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x3C],8
	mov dword ptr [esi+8],eax
	mov byte ptr [ebp-4],1
	jne Block74

 Block72:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc edi
	jmp Block67

 Block74:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block75:
	inc edi
	jmp Block67

 Block76:
	mov esi,dword ptr [ebp+0x64]
	inc esi
	cmp esi,4
	mov dword ptr [ebp+0x64],esi
	jl Block53

 Block77:
	mov eax,dword ptr [ebp+0x68]
	inc eax
	cmp eax,2
	mov dword ptr [ebp+0x68],eax
	jl Block3

 Block78:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp+0x70]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0x4C]
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

 Block79:
	push eax
	call _com_issue_error

 Block80:
	push 0x80004003
	call _com_issue_error

 Block81:
	push edi
	call _com_issue_error
}
}
// CUICharacterSaleDlg::SetStep1
__SUB_CLASS_THIS(00377360, __thiscall, 67192,  CUICharacterSaleDlg, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push edi
	mov edi,ecx
	test esi,esi
	je Block2

 Block1:
	push 0
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x1391
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,edi
	call CWnd::SetBackgrnd
	mov ecx,edi
	call CUICharacterSaleDlg::ShowClass

 Block2:
	mov eax,dword ptr [edi+0x100]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push esi
	call eax
	mov eax,dword ptr [edi+0x100]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push esi
	call eax
	mov eax,dword ptr [edi+0x108]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push esi
	call eax
	mov eax,dword ptr [edi+0x108]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push esi
	call eax
	mov eax,dword ptr [edi+0x120]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push esi
	call eax
	mov eax,dword ptr [edi+0x120]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push esi
	call eax
	mov eax,dword ptr [edi+0x128]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push esi
	call eax
	mov eax,dword ptr [edi+0x128]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push esi
	call eax
	mov ecx,dword ptr [edi+0x100]
	push 0
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	mov ecx,dword ptr [edi+0x108]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push 0
	call eax
	mov eax,1
	pop edi
	pop esi
	ret 4

 Block4:
	call CCtrlWnd::SetBelow
	mov ecx,dword ptr [edi+0x108]
	push 0
	call CCtrlWnd::SetBelow
	pop edi
	mov eax,1
	pop esi
	ret 4
}
}
// CUICharacterSaleDlg::SetStep3
__SUB_CLASS_THIS(0037A570, __thiscall, 67192,  CUICharacterSaleDlg, int32_t, int32_t) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,dword ptr [esp+0x10]
	push edi
	mov ebx,ecx
	test esi,esi
	je Block2

 Block1:
	push 0
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1393
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,ebx
	call CWnd::SetBackgrnd
	mov ecx,ebx
	call CUICharacterSaleDlg::ShowClass

 Block2:
	mov eax,dword ptr [ebx+0x110]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push esi
	call eax
	mov eax,dword ptr [ebx+0x110]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push esi
	call eax
	mov eax,dword ptr [ebx+0x108]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push esi
	call eax
	mov eax,dword ptr [ebx+0x108]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push esi
	call eax
	mov ecx,dword ptr [ebx+0x110]
	push 0
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	mov ecx,dword ptr [ebx+0x108]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push 0
	call eax
	jmp Block5

 Block4:
	call CCtrlWnd::SetBelow
	mov ecx,dword ptr [ebx+0x108]
	push 0
	call CCtrlWnd::SetBelow

 Block5:
	lea edi,[ebx+0x178]
	mov ebp,5
	jmp Block7

 Block7:
	mov eax,dword ptr [edi-0x48]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push esi
	call eax
	mov eax,dword ptr [edi-0x48]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push esi
	call eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push esi
	call eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push esi
	call eax
	mov ecx,dword ptr [edi-0x48]
	push 0
	test esi,esi
	je Block9

 Block8:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push 0
	call eax
	jmp Block10

 Block9:
	call CCtrlWnd::SetBelow
	mov ecx,dword ptr [edi]
	push 0
	call CCtrlWnd::SetBelow

 Block10:
	add edi,8
	sub ebp,1
	jne Block7

 Block11:
	push esi
	mov ecx,ebx
	call CUICharacterSaleDlg::SetAvatar
	pop edi
	pop esi
	lea eax,[ebp+1]
	pop ebp
	pop ebx
	ret 4
}
}
// CUICharacterSaleDlg::CUICharacterSaleDlg
_SUB_EXCEPTION_HANDLER(378270)
__SUB_CLASS_THIS(00378270, __thiscall, 67178,  CUICharacterSaleDlg, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_378270
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
	call CUniqueModeless::_ctor_default
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x24]
	xor ebx,ebx
	int 3// TODO: 	mov dword ptr [esi],offset CUICharacterSaleDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUICharacterSaleDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUICharacterSaleDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xEC],eax
	mov dword ptr [esi+0xF0],ecx
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esi+0xF8],ebx
	mov dword ptr [esi+0x100],ebx
	mov dword ptr [esi+0x108],ebx
	mov dword ptr [esi+0x110],ebx
	mov dword ptr [esi+0x118],ebx
	mov dword ptr [esi+0x120],ebx
	mov dword ptr [esi+0x128],ebx
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 9
	push 8
	lea edx,[esi+0x12C]
	push edx
	mov byte ptr [esp+0x2C],7
	call __eh_vector_ctor_iterator
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 9
	push 8
	lea eax,[esi+0x174]
	push eax
	mov byte ptr [esp+0x2C],8
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x1C0],ebx
	mov dword ptr [esi+0x1C8],ebx
	mov dword ptr [esi+0x1D8],ebx
	mov dword ptr [esi+0x1DC],ebx
	mov dword ptr [esi+0x1E0],ebx
	mov dword ptr [esi+0x1E4],ebx
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 9
	push 4
	lea ecx,[esi+0x1E8]
	push ecx
	mov byte ptr [esp+0x2C],0xF
	call __eh_vector_ctor_iterator
	push offset ZArray<CUICharacterSaleDlg::ASITEM>::~ZArray<CUICharacterSaleDlg::ASITEM>
	push offset ZArray<CUICharacterSaleDlg::ASITEM>::_ctor_default
	push 9
	push 4
	lea edx,[esi+0x210]
	push edx
	mov byte ptr [esp+0x2C],0x10
	mov byte ptr [esi+0x20C],bl
	call __eh_vector_ctor_iterator
	push offset ZArray<CUICharacterSaleDlg::ASITEM>::~ZArray<CUICharacterSaleDlg::ASITEM>
	push offset ZArray<CUICharacterSaleDlg::ASITEM>::_ctor_default
	push 9
	push 4
	lea eax,[esi+0x234]
	mov byte ptr [esp+0x28],0x11
	push eax
	call __eh_vector_ctor_iterator
	push offset ZXString<char>::~ZXString<char>
	push offset ZXString<char>::_ctor_default
	push 5
	push 4
	lea ecx,[esi+0x258]
	push ecx
	mov byte ptr [esp+0x2C],0x12
	call __eh_vector_ctor_iterator
	push offset ZXString<char>::~ZXString<char>
	push offset ZXString<char>::_ctor_default
	push 5
	push 4
	lea edx,[esi+0x26C]
	push edx
	mov byte ptr [esp+0x2C],0x13
	call __eh_vector_ctor_iterator
	push offset ZXString<char>::~ZXString<char>
	push offset ZXString<char>::_ctor_default
	push 5
	push 4
	lea eax,[esi+0x280]
	push eax
	mov byte ptr [esp+0x2C],0x14
	call __eh_vector_ctor_iterator
	push offset ZXString<char>::~ZXString<char>
	push offset ZXString<char>::_ctor_default
	push 5
	push 4
	lea ecx,[esi+0x294]
	push ecx
	mov byte ptr [esp+0x2C],0x15
	call __eh_vector_ctor_iterator
	push offset ZXString<char>::~ZXString<char>
	push offset ZXString<char>::_ctor_default
	push 5
	push 4
	lea edx,[esi+0x2A8]
	push edx
	mov byte ptr [esp+0x2C],0x16
	call __eh_vector_ctor_iterator
	push offset ZXString<char>::~ZXString<char>
	push offset ZXString<char>::_ctor_default
	push 5
	push 4
	lea eax,[esi+0x2BC]
	push eax
	mov byte ptr [esp+0x2C],0x17
	call __eh_vector_ctor_iterator
	push offset ZXString<char>::~ZXString<char>
	push offset ZXString<char>::_ctor_default
	push 5
	push 4
	lea ecx,[esi+0x2D0]
	push ecx
	mov byte ptr [esp+0x2C],0x18
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x2E4],ebx
	mov dword ptr [esi+0x2EC],ebx
	int 3// TODO: 	mov dword ptr [esi+0x2F0],offset ZList<CUICharacterSaleDlg::NEWEQUIP>::`vftable'
	mov dword ptr [esi+0x2F8],ebx
	mov dword ptr [esi+0x2FC],ebx
	mov dword ptr [esi+0x300],ebx
	mov dword ptr [esi+0x304],ebx
	mov dword ptr [esi+0x308],ebx
	mov dword ptr [esi+0x30C],ebx
	mov dword ptr [esi+0x310],ebx
	mov dword ptr [esi+0x314],ebx
	lea edx,[esp+0x20]
	push 0x1391
	push edx
	mov byte ptr [esp+0x20],0x20
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	push ebx
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x28],0x21
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x18],0x20
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret 8
}
}
// CUICharacterSaleDlg::SetStep4
__SUB_CLASS_THIS(0037A6C0, __thiscall, 67192,  CUICharacterSaleDlg, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	test edi,edi
	je Block2

 Block1:
	push 0
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x1394
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov ecx,esi
	call CUICharacterSaleDlg::ShowClass

 Block2:
	mov eax,dword ptr [esi+0x110]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push edi
	call eax
	mov eax,dword ptr [esi+0x110]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push edi
	call eax
	mov eax,dword ptr [esi+0x108]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push edi
	call eax
	mov eax,dword ptr [esi+0x108]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push edi
	call eax
	mov eax,dword ptr [esi+0x1C0]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push edi
	call eax
	mov eax,dword ptr [esi+0x1C0]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push edi
	call eax
	mov eax,dword ptr [esi+0x1C8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push edi
	call eax
	mov eax,dword ptr [esi+0x1C8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push edi
	call eax
	mov ecx,dword ptr [esi+0x110]
	push 0
	test edi,edi
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	mov ecx,dword ptr [esi+0x108]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push 0
	call eax
	push edi
	mov ecx,esi
	call CUICharacterSaleDlg::SetAvatar
	mov eax,1
	pop edi
	pop esi
	ret 4

 Block4:
	call CCtrlWnd::SetBelow
	mov ecx,dword ptr [esi+0x108]
	push 0
	call CCtrlWnd::SetBelow
	push edi
	mov ecx,esi
	call CUICharacterSaleDlg::SetAvatar
	pop edi
	mov eax,1
	pop esi
	ret 4
}
}
// CUICharacterSaleDlg::GetSelectedAL
_SUB_EXCEPTION_HANDLER(378CF0)
__SUB_CLASS_THIS(00378CF0, __thiscall, 67196,  CUICharacterSaleDlg, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_378CF0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	xor edx,edx
	mov dword ptr [esp+8],edx
	mov al,byte ptr [ecx+0x20C]
	mov dword ptr [esp+0x14],edx
	cmp al,dl
	jne Block2

 Block1:
	mov eax,dword ptr [esp+0x1C]
	lea ecx,[ecx+eax*4+0x210]
	push ecx
	jmp Block4

 Block2:
	cmp al,1
	jne Block5

 Block3:
	mov edx,dword ptr [esp+0x1C]
	lea eax,[ecx+edx*4+0x234]
	push eax

 Block4:
	lea ecx,[esp+0xC]
	call ZArray<CUICharacterSaleDlg::ASITEM>::operator=

 Block5:
	mov ecx,dword ptr [esp+8]
	mov esi,dword ptr [ecx]
	lea ecx,[esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZArray<CUICharacterSaleDlg::ASITEM>::RemoveAll
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CUICharacterSaleDlg::OnCreateNewCharacterResult
_SUB_EXCEPTION_HANDLER(377FC0)
__SUB_CLASS_THIS(00377FC0, __thiscall, 67203,  CUICharacterSaleDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_377FC0
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
	xor ebx,ebx
	mov ecx,edi
	mov dword ptr [esi+0x2E4],ebx
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,edi
	mov dword ptr [esp+0x2C],eax
	call CInPacket::Decode4
	mov edi,dword ptr [_D_G_PSTAGE+4]
	mov ebp,eax
	cmp edi,ebx
	je Block2

 Block1:
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[edi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	jne Block3

 Block2:
	xor edi,edi

 Block3:
	mov dword ptr [edi+0x244],ebx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	mov edi,1
	push edi
	mov ecx,esi
	call eax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,0x38
	jne Block10

 Block4:
	cmp ebp,ebx
	jne Block7

 Block5:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x13CA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [eax+0x20A4]
	add dword ptr [eax+0x2090],edi
	add dword ptr [eax+0x20A0],edi
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add esp,0x14
	cmp ecx,dword ptr [eax+0x20A0]
	jge Block17

 Block6:
	add dword ptr [eax+0x20A4],edi
	jmp Block17

 Block7:
	mov dword ptr [esp+0x2C],ebx
	lea edx,[esp+0x14]
	push 0x1A86
	push edx
	mov dword ptr [esp+0x2C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push eax
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x30],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	lea edx,[esp+0x40]
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	jmp Block15

 Block10:
	cmp eax,0x3A
	jne Block12

 Block11:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x13C8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block17

 Block12:
	mov dword ptr [esp+0x2C],ebx
	lea ecx,[esp+0x14]
	push 0x1A86
	push ecx
	mov dword ptr [esp+0x2C],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push eax
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x30],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x24],2
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	lea eax,[esp+0x40]
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax

 Block15:
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x40]
	add esp,0x14
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

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
// CUICharacterSaleDlg::LoadSPInfo
__SUB_CLASS_THIS0(00376D00, __thiscall, 67180,  CUICharacterSaleDlg, void) {
__asm {

 Block0:
	push ecx
	push esi
	lea eax,[esp+4]
	push 0x13AE
	push eax
	mov esi,ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [esp+4]
	mov dword ptr [esi+0x94],ecx
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea edx,[esp+4]
	push 0x13AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov dword ptr [esi+0x98],eax
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	lea ecx,[esp+4]
	push 0x13B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [eax]
	mov eax,dword ptr [esp+4]
	mov dword ptr [esi+0x9C],edx
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	lea eax,[esp+4]
	push 0x13B1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [esp+4]
	mov dword ptr [esi+0xA0],ecx
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	lea edx,[esp+4]
	push 0x13B2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov dword ptr [esi+0xA4],eax
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	lea ecx,[esp+4]
	push 0x13B3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [eax]
	mov eax,dword ptr [esp+4]
	mov dword ptr [esi+0xA8],edx
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	lea eax,[esp+4]
	push 0x13B4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [esp+4]
	mov dword ptr [esi+0xAC],ecx
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	lea edx,[esp+4]
	push 0x13B5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov dword ptr [esi+0xB0],eax
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	lea ecx,[esp+4]
	push 0x13B6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [eax]
	mov eax,dword ptr [esp+4]
	mov dword ptr [esi+0xB4],edx
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	lea eax,[esp+4]
	push 0x13B7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [esp+4]
	mov dword ptr [esi+0xB8],ecx
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	lea edx,[esp+4]
	push 0x13B8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov dword ptr [esi+0xBC],eax
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	lea ecx,[esp+4]
	push 0x13B9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [eax]
	mov eax,dword ptr [esp+4]
	mov dword ptr [esi+0xC0],edx
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	lea eax,[esp+4]
	push 0x13BA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [esp+4]
	mov dword ptr [esi+0xC4],ecx
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	lea edx,[esp+4]
	push 0x13BB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov dword ptr [esi+0xC8],eax
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	lea ecx,[esp+4]
	push 0x13BC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [eax]
	mov eax,dword ptr [esp+4]
	mov dword ptr [esi+0xCC],edx
	test eax,eax
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	lea eax,[esp+4]
	push 0x13BD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [esp+4]
	mov dword ptr [esi+0xD0],ecx
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	lea edx,[esp+4]
	push 0x13BE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov dword ptr [esi+0xD4],eax
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	lea ecx,[esp+4]
	push 0x13BF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [eax]
	mov eax,dword ptr [esp+4]
	mov dword ptr [esi+0xD8],edx
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	lea eax,[esp+4]
	push 0x13C0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [esp+4]
	mov dword ptr [esi+0xDC],ecx
	test eax,eax
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	lea edx,[esp+4]
	push 0x13C1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov dword ptr [esi+0xE0],eax
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block40:
	lea ecx,[esp+4]
	push 0x13C2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [eax]
	mov eax,dword ptr [esp+4]
	mov dword ptr [esi+0xE4],edx
	test eax,eax
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	lea eax,[esp+4]
	push 0x13C3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [esp+4]
	mov dword ptr [esi+0xE8],ecx
	pop esi
	test eax,eax
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
	pop ecx
	ret
}
}
// CUICharacterSaleDlg::GetRTTI
__SUB_CLASS_THIS0(00378540, __thiscall, 67171,  CUICharacterSaleDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUICharacterSaleDlg::ms_RTTI_CUICharacterSaleDlg
	ret
}
}
// CUICharacterSaleDlg::ASITEM::~ASITEM
__SUB_CLASS_THIS0(00376CE0, __thiscall, 70937,  CUICharacterSaleDlg::ASITEM, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+4]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	pop ecx

 Block2:
	ret
}
}
// CUICharacterSaleDlg::OnPacket
__SUB_CLASS_THIS(00378C50, __thiscall, 67190,  CUICharacterSaleDlg, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x19D
	je Block3

 Block1:
	sub eax,1
	jne Block4

 Block2:
	mov eax,dword ptr [esp+8]
	push eax
	call CUICharacterSaleDlg::OnCreateNewCharacterResult
	ret 8

 Block3:
	mov edx,dword ptr [esp+8]
	push edx
	call CUICharacterSaleDlg::OnCheckDuplicatedIDResult

 Block4:
	ret 8
}
}
// CUICharacterSaleDlg::SendCreateNewCharacter
_SUB_EXCEPTION_HANDLER(37A240)
__SUB_CLASS_THIS0(0037A240, __thiscall, 67180,  CUICharacterSaleDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_37A240
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
	xor esi,esi
	cmp dword ptr [edi+0x2E4],esi
	jne Block11

 Block1:
	mov ecx,dword ptr [edi+0xF8]
	lea eax,[esp+0x10]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	cmp eax,esi
	je Block3

 Block2:
	mov eax,dword ptr [eax-4]
	jmp Block4

 Block3:
	xor eax,eax

 Block4:
	cmp eax,esi
	mov eax,dword ptr [esp+0x10]
	sete bl
	cmp eax,esi
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	test bl,bl
	je Block8

 Block7:
	push esi
	push 0xA
	call CLoginUtilDlg::Error
	add esp,8
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret

 Block8:
	push 0x55
	lea ecx,[esp+0x1C]
	call COutPacket::_ctor_1
	mov dword ptr [esp+0x30],esi
	call get_update_time
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	movzx ecx,word ptr [edi+0xEC]
	push ecx
	lea ecx,[esp+0x1C]
	call COutPacket::Encode2
	mov edx,dword ptr [edi+0xF0]
	push edx
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	mov ecx,dword ptr [edi+0xF8]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push eax
	call CCtrlEdit::GetText
	lea ecx,[esp+0x1C]
	call COutPacket::EncodeStr
	lea esp,[esp]

 Block9:
	push esi
	mov ecx,edi
	call CUICharacterSaleDlg::GetSelectedAL_0
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	inc esi
	cmp esi,3
	jle Block9

 Block10:
	movzx ecx,byte ptr [edi+0x20C]
	push ecx
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	mov edx,dword ptr [edi+0x1CC]
	push edx
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	mov eax,dword ptr [edi+0x1D4]
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	call get_update_time
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	call CUICharacterSaleDlg::SendRequest
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block11:
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
// CUICharacterSaleDlg::SendCheckDuplicateIDPacket
_SUB_EXCEPTION_HANDLER(377D20)
__SUB_CLASS_THIS(00377D20, __thiscall, 67188,  CUICharacterSaleDlg, void, const ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_377D20
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
	cmp dword ptr [edi+0x2E4],0
	jne Block8

 Block1:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[esi+0x2038]
	call TSecType<unsigned char>::GetData
	test al,1
	jne Block4

 Block2:
	mov esi,dword ptr [esi+0x209C]
	test esi,esi
	jne Block4

 Block3:
	xor eax,eax
	jmp Block5

 Block4:
	mov eax,1

 Block5:
	mov esi,dword ptr [esp+0x2C]
	xor ecx,ecx
	test eax,eax
	sete cl
	push ecx
	push esi
	call is_valid_character_name
	add esp,8
	test eax,eax
	jne Block7

 Block6:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x13C8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	add esp,0x14
	push 0x3E9
	mov ecx,edi
	call edx
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4

 Block7:
	push 0x137
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push esi
	mov dword ptr [esp+0x2C],0
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x10]
	call COutPacket::EncodeStr
	lea eax,[esp+0xC]
	push eax
	mov ecx,edi
	call CUICharacterSaleDlg::SendRequest
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

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
// CUICharacterSaleDlg::~CUICharacterSaleDlg
_SUB_EXCEPTION_HANDLER(378590)
__SUB_CLASS_THIS0(00378590, __thiscall, 67180,  CUICharacterSaleDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_378590
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
	int 3// TODO: 	mov dword ptr [esi],offset CUICharacterSaleDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUICharacterSaleDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUICharacterSaleDlg::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x314]
	xor ebx,ebx
	mov dword ptr [esp+0x20],0x1F
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0x310]
	mov byte ptr [esp+0x20],0x1E
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esi+0x30C]
	mov byte ptr [esp+0x20],0x1D
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	lea ecx,[esi+0x308]
	mov byte ptr [esp+0x20],0x1C
	call ZArray<_x_com_ptr<IWzFont>>::RemoveAll
	lea ecx,[esi+0x304]
	mov byte ptr [esp+0x20],0x1B
	call ZArray<_x_com_ptr<IWzFont>>::RemoveAll
	lea ecx,[esi+0x2F0]
	mov byte ptr [esp+0x20],0x1A
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CUICharacterSaleDlg::NEWEQUIP>::`vftable'
	call ZList<CUICharacterSaleDlg::NEWEQUIP>::RemoveAll
	mov eax,dword ptr [esi+0x2EC]
	mov byte ptr [esp+0x20],0x19
	cmp eax,ebx
	je Block11

 Block7:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block10

 Block9:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block10:
	mov dword ptr [esi+0x2EC],ebx

 Block11:
	push offset ZXString<char>::~ZXString<char>
	push 5
	push 4
	lea eax,[esi+0x2D0]
	push eax
	mov byte ptr [esp+0x30],0x18
	call __eh_vector_dtor_iterator
	push offset ZXString<char>::~ZXString<char>
	push 5
	push 4
	lea ecx,[esi+0x2BC]
	push ecx
	mov byte ptr [esp+0x30],0x17
	call __eh_vector_dtor_iterator
	push offset ZXString<char>::~ZXString<char>
	push 5
	push 4
	lea edx,[esi+0x2A8]
	push edx
	mov byte ptr [esp+0x30],0x16
	call __eh_vector_dtor_iterator
	push offset ZXString<char>::~ZXString<char>
	push 5
	push 4
	lea eax,[esi+0x294]
	push eax
	mov byte ptr [esp+0x30],0x15
	call __eh_vector_dtor_iterator
	push offset ZXString<char>::~ZXString<char>
	push 5
	push 4
	lea ecx,[esi+0x280]
	push ecx
	mov byte ptr [esp+0x30],0x14
	call __eh_vector_dtor_iterator
	push offset ZXString<char>::~ZXString<char>
	push 5
	push 4
	lea edx,[esi+0x26C]
	push edx
	mov byte ptr [esp+0x30],0x13
	call __eh_vector_dtor_iterator
	push offset ZXString<char>::~ZXString<char>
	push 5
	push 4
	lea eax,[esi+0x258]
	push eax
	mov byte ptr [esp+0x30],0x12
	call __eh_vector_dtor_iterator
	push offset ZArray<CUICharacterSaleDlg::ASITEM>::~ZArray<CUICharacterSaleDlg::ASITEM>
	push 9
	push 4
	lea ecx,[esi+0x234]
	push ecx
	mov byte ptr [esp+0x30],0x11
	call __eh_vector_dtor_iterator
	push offset ZArray<CUICharacterSaleDlg::ASITEM>::~ZArray<CUICharacterSaleDlg::ASITEM>
	push 9
	push 4
	lea edx,[esi+0x210]
	push edx
	mov byte ptr [esp+0x30],0x10
	call __eh_vector_dtor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 9
	push 4
	lea eax,[esi+0x1E8]
	push eax
	mov byte ptr [esp+0x30],0xF
	call __eh_vector_dtor_iterator
	lea ecx,[esi+0x1E4]
	mov byte ptr [esp+0x20],0xE
	call ZArray<_x_com_ptr<IWzCanvas>>::RemoveAll
	mov eax,dword ptr [esi+0x1E0]
	mov byte ptr [esp+0x20],0xD
	cmp eax,ebx
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov eax,dword ptr [esi+0x1DC]
	mov byte ptr [esp+0x20],0xC
	cmp eax,ebx
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov eax,dword ptr [esi+0x1D8]
	mov byte ptr [esp+0x20],0xB
	cmp eax,ebx
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	lea edi,[esi+0x1C4]
	mov byte ptr [esp+0x20],0xA
	cmp dword ptr [edi+4],ebx
	je Block19

 Block18:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block19:
	lea edi,[esi+0x1BC]
	mov byte ptr [esp+0x20],9
	cmp dword ptr [edi+4],ebx
	je Block21

 Block20:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block21:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 9
	push 8
	lea eax,[esi+0x174]
	push eax
	mov byte ptr [esp+0x30],8
	call __eh_vector_dtor_iterator
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 9
	push 8
	lea ecx,[esi+0x12C]
	push ecx
	mov byte ptr [esp+0x30],7
	call __eh_vector_dtor_iterator
	lea edi,[esi+0x124]
	mov byte ptr [esp+0x20],6
	cmp dword ptr [edi+4],ebx
	je Block23

 Block22:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block23:
	lea edi,[esi+0x11C]
	mov byte ptr [esp+0x20],5
	cmp dword ptr [edi+4],ebx
	je Block25

 Block24:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block25:
	lea edi,[esi+0x114]
	mov byte ptr [esp+0x20],4
	cmp dword ptr [edi+4],ebx
	je Block27

 Block26:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block27:
	lea edi,[esi+0x10C]
	mov byte ptr [esp+0x20],3
	cmp dword ptr [edi+4],ebx
	je Block29

 Block28:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block29:
	lea edi,[esi+0x104]
	mov byte ptr [esp+0x20],2
	cmp dword ptr [edi+4],ebx
	je Block31

 Block30:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block31:
	lea edi,[esi+0xFC]
	mov byte ptr [esp+0x20],1
	cmp dword ptr [edi+4],ebx
	je Block33

 Block32:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block33:
	lea edi,[esi+0xF4]
	mov byte ptr [esp+0x20],bl
	cmp dword ptr [edi+4],ebx
	je Block35

 Block34:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block35:
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
// CUICharacterSaleDlg::OnAvatarChanged
__SUB_CLASS_THIS0(0037A540, __thiscall, 67180,  CUICharacterSaleDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x1D0],4
	jne Block3

 Block1:
	mov eax,dword ptr [esi+0x2EC]
	test eax,eax
	je Block3

 Block2:
	add eax,4
	push eax
	call CUICharacterSaleDlg::GetSelectedAL_1
	mov ecx,dword ptr [esi+0x2EC]
	push 0
	call CAvatar::NotifyAvatarModified

 Block3:
	pop esi
	ret
}
}
// CUICharacterSaleDlg::SetStep2
__SUB_CLASS_THIS(00377480, __thiscall, 67192,  CUICharacterSaleDlg, int32_t, int32_t) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	test edi,edi
	je Block2

 Block1:
	push 0
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x1392
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov ecx,esi
	call CUICharacterSaleDlg::ShowClass

 Block2:
	mov eax,dword ptr [esi+0x110]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push edi
	call eax
	mov eax,dword ptr [esi+0x110]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push edi
	call eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [esi+0xF8]
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	test eax,eax
	je Block4

 Block3:
	mov eax,dword ptr [eax-4]
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	test eax,eax
	mov eax,dword ptr [esp+0x10]
	setne bl
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov eax,dword ptr [esi+0x108]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	test bl,bl
	je Block9

 Block8:
	mov eax,dword ptr [edx+0x1C]
	push edi
	call eax
	jmp Block10

 Block9:
	mov edx,dword ptr [edx+0x1C]
	xor eax,eax
	test edi,edi
	sete al
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0x108]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push edi
	call edx
	mov eax,dword ptr [esi+0xF8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push edi
	call edx
	mov eax,dword ptr [esi+0xF8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push edi
	call edx
	mov ecx,dword ptr [esi+0x110]
	push 0
	test edi,edi
	je Block12

 Block11:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	call edx
	mov ecx,dword ptr [esi+0x108]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push 0
	call edx
	mov ecx,dword ptr [esi+0xF8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push 0
	call edx
	jmp Block13

 Block12:
	call CCtrlWnd::SetBelow
	mov ecx,dword ptr [esi+0x108]
	push 0
	call CCtrlWnd::SetBelow
	mov ecx,dword ptr [esi+0xF8]
	push 0
	call CCtrlWnd::SetBelow

 Block13:
	mov esi,dword ptr [esi+0xF8]
	test esi,esi
	je Block15

 Block14:
	lea eax,[esi+4]
	jmp Block16

 Block15:
	xor eax,eax

 Block16:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	pop edi
	pop esi
	mov eax,1
	pop ebx
	ret 4
}
}
// CUICharacterSaleDlg::ShiftNewCharEquip
_SUB_EXCEPTION_HANDLER(37A9F0)
__SUB_CLASS_THIS(0037A9F0, __thiscall, 67185,  CUICharacterSaleDlg, void, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_37A9F0
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
	mov esi,ecx
	mov dword ptr [esp+0x10],esi
	mov bl,byte ptr [esi+0x20C]
	mov ecx,dword ptr [ebp+8]
	test bl,bl
	jne Block2

 Block1:
	mov eax,dword ptr [esi+ecx*4+0x210]
	jmp Block3

 Block2:
	mov eax,dword ptr [esi+ecx*4+0x234]

 Block3:
	test eax,eax
	je Block5

 Block4:
	mov edi,dword ptr [eax-4]
	cmp edi,2
	jge Block6

 Block5:
	mov ecx,esi
	call CUICharacterSaleDlg::OnAvatarChanged
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 8

 Block6:
	mov eax,dword ptr [ebp+0xC]
	cdq
	xor eax,edx
	sub eax,edx
	cdq
	idiv edi
	cmp edx,1
	jl Block24

 Block7:
	mov dword ptr [esp+0x18],0
	mov dword ptr [esp+0x28],0
	test bl,bl
	jne Block15

 Block8:
	test edx,edx
	jle Block22

 Block9:
	lea esi,[esi+ecx*4+0x210]
	mov ebx,edx

 Block10:
	cmp dword ptr [ebp+0xC],0
	mov eax,dword ptr [esi]
	jle Block12

 Block11:
	mov ecx,dword ptr [eax]
	add eax,4
	mov dword ptr [esp+0x14],ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_assign
	mov edx,dword ptr [esi]
	push edx
	mov ecx,esi
	call ZArray<CUICharacterSaleDlg::ASITEM>::RemoveAt
	push 0xFFFFFFFF
	jmp Block13

 Block12:
	mov ecx,dword ptr [eax+edi*8-8]
	lea eax,[eax+edi*8-8]
	add eax,4
	mov dword ptr [esp+0x14],ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_assign
	mov edx,dword ptr [esi]
	lea eax,[edx+edi*8-8]
	push eax
	mov ecx,esi
	call ZArray<CUICharacterSaleDlg::ASITEM>::RemoveAt
	push 0

 Block13:
	mov ecx,esi
	call ZArray<CUICharacterSaleDlg::ASITEM>::InsertBefore
	mov ecx,dword ptr [esp+0x14]
	lea edx,[esp+0x18]
	mov dword ptr [eax],ecx
	push edx
	lea ecx,[eax+4]
	call ZXString<char>::op_assign
	sub ebx,1
	jne Block10

 Block14:
	jmp Block21

 Block15:
	test edx,edx
	jle Block22

 Block16:
	lea esi,[esi+ecx*4+0x234]
	mov ebx,edx

 Block17:
	cmp dword ptr [ebp+0xC],0
	mov eax,dword ptr [esi]
	jle Block19

 Block18:
	mov ecx,dword ptr [eax]
	add eax,4
	mov dword ptr [esp+0x14],ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_assign
	mov edx,dword ptr [esi]
	push edx
	mov ecx,esi
	call ZArray<CUICharacterSaleDlg::ASITEM>::RemoveAt
	push 0xFFFFFFFF
	jmp Block20

 Block19:
	mov ecx,dword ptr [eax+edi*8-8]
	lea eax,[eax+edi*8-8]
	add eax,4
	mov dword ptr [esp+0x14],ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_assign
	mov edx,dword ptr [esi]
	lea eax,[edx+edi*8-8]
	push eax
	mov ecx,esi
	call ZArray<CUICharacterSaleDlg::ASITEM>::RemoveAt
	push 0

 Block20:
	mov ecx,esi
	call ZArray<CUICharacterSaleDlg::ASITEM>::InsertBefore
	mov ecx,dword ptr [esp+0x14]
	lea edx,[esp+0x18]
	mov dword ptr [eax],ecx
	push edx
	lea ecx,[eax+4]
	call ZXString<char>::op_assign
	sub ebx,1
	jne Block17

 Block21:
	mov esi,dword ptr [esp+0x10]

 Block22:
	mov ecx,esi
	call CUICharacterSaleDlg::OnAvatarChanged
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov ecx,dword ptr [esp+0x20]
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
// CUICharacterSaleDlg::GetSelectedAL
__SUB_CLASS_THIS(00378D80, __thiscall, 67195,  CUICharacterSaleDlg, void, AvatarLook&) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	push 0
	mov esi,ecx
	call CUICharacterSaleDlg::GetSelectedAL_0
	mov edi,dword ptr [esp+0x10]
	push 1
	mov ecx,esi
	mov dword ptr [edi+0x11],eax
	call CUICharacterSaleDlg::GetSelectedAL_0
	push 2
	mov ecx,esi
	mov ebx,eax
	call CUICharacterSaleDlg::GetSelectedAL_0
	mov ecx,eax
	mov eax,0x66666667
	imul ebx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*4]
	lea eax,[ecx+edx*2]
	push 3
	mov ecx,esi
	mov dword ptr [edi+0x19],eax
	call CUICharacterSaleDlg::GetSelectedAL_0
	mov dword ptr [edi+0xD],eax
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CUICharacterSaleDlg::OnButtonClicked
_SUB_EXCEPTION_HANDLER(37EDC0)
__SUB_CLASS_THIS(0037EDC0, __thiscall, 67182,  CUICharacterSaleDlg, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_37EDC0
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0x1D0]
	push eax
	call CUICharacterSaleDlg::ClearCurrentStep
	mov edi,dword ptr [esp+0x1C]
	lea ecx,[edi-0x3F0]
	cmp ecx,0x11
	ja Block10

 Block1:
	mov ecx,1
	cmp edi,0x3F9
	jae Block3

 Block2:
	xor ecx,ecx
	lea eax,[edi-0x3F0]
	jmp Block4

 Block3:
	lea eax,[edi-0x3F9]

 Block4:
	cmp eax,4
	jne Block6

 Block5:
	cmp byte ptr [esi+0x20C],0
	sete dl
	mov byte ptr [esi+0x20C],dl
	jmp Block8

 Block6:
	test eax,eax
	jl Block9

 Block7:
	cmp eax,4
	jg Block9

 Block8:
	xor edx,edx
	test ecx,ecx
	setne dl
	mov ecx,esi
	lea edx,[edx+edx-1]
	push edx
	push eax
	call CUICharacterSaleDlg::ShiftNewCharEquip
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block9:
	mov ecx,esi
	call CUICharacterSaleDlg::ShowWindow
	jmp Block35

 Block10:
	lea eax,[edi-0x3E8]
	cmp eax,7
	ja Block35

 Block11:
	cmp EAX, 0
je Block27
cmp EAX, 1
je Block20
cmp EAX, 2
je Block34
cmp EAX, 3
je Block12
cmp EAX, 4
je Block15
cmp EAX, 5
je Block35
cmp EAX, 6
je Block16
cmp EAX, 7
je Block19


 Block12:
	mov eax,dword ptr [esi+0x1CC]
	test eax,eax
	jne Block14

 Block13:
	mov ecx,esi
	mov dword ptr [esi+0x1CC],4
	call CUICharacterSaleDlg::ShowWindow
	jmp Block35

 Block14:
	dec eax
	mov ecx,esi
	mov dword ptr [esi+0x1CC],eax
	call CUICharacterSaleDlg::ShowWindow
	jmp Block35

 Block15:
	mov eax,dword ptr [esi+0x1CC]
	inc eax
	cdq
	mov ecx,5
	idiv ecx
	mov ecx,esi
	mov dword ptr [esi+0x1CC],edx
	call CUICharacterSaleDlg::ShowWindow
	jmp Block35

 Block16:
	mov eax,dword ptr [esi+0x1D4]
	test eax,eax
	jne Block18

 Block17:
	mov ecx,esi
	mov dword ptr [esi+0x1D4],0xA
	call CUICharacterSaleDlg::ShowWindow
	jmp Block35

 Block18:
	dec eax
	mov ecx,esi
	mov dword ptr [esi+0x1D4],eax
	call CUICharacterSaleDlg::ShowWindow
	jmp Block35

 Block19:
	mov eax,dword ptr [esi+0x1D4]
	inc eax
	cdq
	mov ecx,0xB
	idiv ecx
	mov ecx,esi
	mov dword ptr [esi+0x1D4],edx
	call CUICharacterSaleDlg::ShowWindow
	jmp Block35

 Block20:
	cmp dword ptr [esi+0x1D0],6
	jne Block24

 Block21:
	mov eax,dword ptr [esi+0x1CC]
	test eax,eax
	je Block24

 Block22:
	cmp eax,1
	je Block24

 Block23:
	mov dword ptr [esi+0x1D0],5

 Block24:
	dec dword ptr [esi+0x1D0]
	cmp dword ptr [esi+0x1D0],3
	jne Block26

 Block25:
	mov eax,dword ptr [esi+0x108]
	lea ecx,[eax+4]
	mov dword ptr [esi+0x1D0],2
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax

 Block26:
	mov ecx,esi
	call CUICharacterSaleDlg::ShowWindow
	jmp Block35

 Block27:
	cmp dword ptr [esi+0x1D0],4
	jne Block31

 Block28:
	mov eax,dword ptr [esi+0x1CC]
	test eax,eax
	je Block31

 Block29:
	cmp eax,1
	je Block31

 Block30:
	mov dword ptr [esi+0x1D0],5

 Block31:
	inc dword ptr [esi+0x1D0]
	mov ecx,esi
	call CUICharacterSaleDlg::ShowWindow
	cmp dword ptr [esi+0x1D0],3
	jne Block35

 Block32:
	mov ecx,dword ptr [esi+0xF8]
	lea edx,[esp+0x1C]
	push edx
	call CCtrlEdit::GetText
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x18],0
	call CUICharacterSaleDlg::SendCheckDuplicateIDPacket
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block35

 Block34:
	mov ecx,esi
	call CUICharacterSaleDlg::ShowWindow
	mov ecx,esi
	call CUICharacterSaleDlg::SendCreateNewCharacter

 Block35:
	cmp edi,1
	jne Block37

 Block36:
	push edi
	jmp Block41

 Block37:
	cmp edi,2
	jne Block39

 Block38:
	push edi
	jmp Block41

 Block39:
	cmp edi,8
	jne Block42

 Block40:
	push edi

 Block41:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	mov ecx,esi
	call edx

 Block42:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC

 Block43:
	ret 4
}
}
// CUICharacterSaleDlg::ShowWindow
__SUB_CLASS_THIS0(0037A970, __thiscall, 67191,  CUICharacterSaleDlg, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x1D0]
	dec eax
	cmp eax,5
	ja Block8

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
cmp EAX, 5
je Block7


 Block2:
	push 1
	call CUICharacterSaleDlg::SetStep1
	mov eax,1
	ret

 Block3:
	push 1
	call CUICharacterSaleDlg::SetStep2
	mov eax,1
	ret

 Block4:
	push 1
	call CUICharacterSaleDlg::SetStep2_1
	mov eax,1
	ret

 Block5:
	push 1
	call CUICharacterSaleDlg::SetStep3
	mov eax,1
	ret

 Block6:
	push 1
	call CUICharacterSaleDlg::SetStep4
	mov eax,1
	ret

 Block7:
	push 1
	call CUICharacterSaleDlg::SetStep5

 Block8:
	mov eax,1
	ret
}
}
// CUICharacterSaleDlg::SetStep2_1
__SUB_CLASS_THIS(003775F0, __thiscall, 67192,  CUICharacterSaleDlg, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	test edi,edi
	je Block2

 Block1:
	push 0
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x1392
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov ecx,esi
	call CUICharacterSaleDlg::ShowClass

 Block2:
	mov eax,dword ptr [esi+0x110]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push edi
	call eax
	mov eax,dword ptr [esi+0x110]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push edi
	call eax
	mov eax,dword ptr [esi+0x108]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x1C]
	lea ecx,[eax+4]
	xor eax,eax
	test edi,edi
	sete al
	push eax
	call edx
	mov eax,dword ptr [esi+0x108]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push edi
	call edx
	mov eax,dword ptr [esi+0xF8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push edi
	call edx
	mov eax,dword ptr [esi+0xF8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push edi
	call edx
	mov ecx,dword ptr [esi+0x110]
	push 0
	test edi,edi
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	call edx
	mov ecx,dword ptr [esi+0x108]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push 0
	call edx
	mov ecx,dword ptr [esi+0xF8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push 0
	call edx
	mov eax,1
	pop edi
	pop esi
	ret 4

 Block4:
	call CCtrlWnd::SetBelow
	mov ecx,dword ptr [esi+0x108]
	push 0
	call CCtrlWnd::SetBelow
	mov ecx,dword ptr [esi+0xF8]
	push 0
	call CCtrlWnd::SetBelow
	pop edi
	mov eax,1
	pop esi
	ret 4
}
}
// CUICharacterSaleDlg::IsKindOf
__SUB_CLASS_THIS(00378560, __thiscall, 67172,  CUICharacterSaleDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUICharacterSaleDlg::ms_RTTI_CUICharacterSaleDlg
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
// CUICharacterSaleDlg::ShowClass
_SUB_EXCEPTION_HANDLER(3761B0)
__SUB_CLASS_THIS0(003761B0, __thiscall, 67191,  CUICharacterSaleDlg, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3761B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC0
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xD4]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	cmp dword ptr [edi+0x1D0],1
	mov esi,dword ptr [ZImports::_VariantInit]
	jne Block51

 Block1:
	lea eax,[esp+0x14]
	push eax
	call esi
	lea ecx,[esp+0x14]
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
	lea edx,[esp+0x34]
	push edx
	mov dword ptr [esp+0xE0],0
	call esi
	lea eax,[esp+0x34]
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
	mov ecx,dword ptr [edi+0x1DC]
	mov byte ptr [esp+0xDC],1
	test ecx,ecx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x38]
	push eax
	push 0x41
	push 0xC
	call IWzVector2D::RelMove
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	mov byte ptr [esp+0xDC],0
	cmp word ptr [esp+0x34],bp
	jne Block10

 Block8:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea edx,[esp+0x34]
	push edx
	call ebx

 Block11:
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	cmp word ptr [esp+0x14],bp
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x14]
	push ecx
	call ebx

 Block15:
	lea edx,[esp+0x44]
	push edx
	call esi
	lea eax,[esp+0x44]
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
	mov dword ptr [esp+0xE0],2
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
	lea eax,[esp+0x74]
	push eax
	mov byte ptr [esp+0xE0],3
	call esi
	lea ecx,[esp+0x74]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0xE0],4
	call esi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea ecx,[esp+0x14]
	mov bl,5
	push ecx
	mov byte ptr [esp+0xE0],bl
	call esi
	lea edx,[esp+0x14]
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
	mov ecx,dword ptr [edi+0x1E4]
	mov eax,dword ptr [edi+0x1CC]
	lea eax,[ecx+eax*4]
	mov ecx,dword ptr [edi+0x1DC]
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xDC],6
	test ecx,ecx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea edx,[esp+0x44]
	push edx
	lea edx,[esp+0x28]
	push edx
	lea edx,[esp+0x7C]
	push edx
	lea edx,[esp+0x40]
	push edx
	lea edx,[esp+0x24]
	push edx
	push eax
	lea eax,[esp+0xCC]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0xB4],bp
	jne Block34

 Block28:
	mov eax,dword ptr [esp+0xBC]
	xor ecx,ecx
	mov word ptr [esp+0xB4],cx
	test eax,eax
	je Block30

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block30:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block31:
	mov byte ptr [esp+0xDC],bl
	cmp word ptr [esp+0x14],bp
	jne Block35

 Block32:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block36

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block34:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0xB4]
	push edx
	call esi
	jmp Block31

 Block35:
	lea ecx,[esp+0x14]
	push ecx
	call esi

 Block36:
	mov byte ptr [esp+0xDC],4
	cmp word ptr [esp+0x34],bp
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[esp+0x34]
	push eax
	call esi

 Block40:
	mov byte ptr [esp+0xDC],3
	cmp word ptr [esp+0x74],bp
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0x7C]
	xor ecx,ecx
	mov word ptr [esp+0x74],cx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea edx,[esp+0x74]
	push edx
	call esi

 Block44:
	mov byte ptr [esp+0xDC],2
	cmp word ptr [esp+0x24],bp
	jne Block47

 Block45:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea ecx,[esp+0x24]
	push ecx
	call esi

 Block48:
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	cmp word ptr [esp+0x44],bp
	jne Block50

 Block49:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	jmp Block100

 Block50:
	lea eax,[esp+0x44]
	jmp Block103

 Block51:
	lea ecx,[esp+0x24]
	push ecx
	call esi
	lea edx,[esp+0x24]
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
	lea eax,[esp+0x44]
	mov ebx,7
	push eax
	mov dword ptr [esp+0xE0],ebx
	call esi
	lea ecx,[esp+0x44]
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
	mov ecx,dword ptr [edi+0x1DC]
	mov ebp,8
	mov byte ptr [esp+0xDC],8
	test ecx,ecx
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x48]
	push eax
	push 0x3F
	push 0xA
	call IWzVector2D::RelMove
	mov byte ptr [esp+0xDC],bl
	cmp word ptr [esp+0x44],bp
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	cmp word ptr [esp+0x24],bp
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	lea edx,[esp+0x84]
	push edx
	call esi
	lea eax,[esp+0x84]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	lea ecx,[esp+0x64]
	push ecx
	mov dword ptr [esp+0xE0],9
	call esi
	lea edx,[esp+0x64]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block69

 Block68:
	push eax
	call _com_issue_error

 Block69:
	lea eax,[esp+0x94]
	push eax
	mov byte ptr [esp+0xE0],0xA
	call esi
	lea ecx,[esp+0x94]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block71

 Block70:
	push eax
	call _com_issue_error

 Block71:
	lea edx,[esp+0xA4]
	push edx
	mov byte ptr [esp+0xE0],0xB
	call esi
	lea eax,[esp+0xA4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block73

 Block72:
	push eax
	call _com_issue_error

 Block73:
	lea ecx,[esp+0x54]
	mov bl,0xC
	push ecx
	mov byte ptr [esp+0xE0],bl
	call esi
	lea edx,[esp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	mov ecx,dword ptr [edi+0x1E4]
	mov eax,dword ptr [edi+0x1CC]
	lea eax,[ecx+eax*4+0x14]
	mov ecx,dword ptr [edi+0x1DC]
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xDC],0xD
	test ecx,ecx
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	lea edx,[esp+0x84]
	push edx
	lea edx,[esp+0x68]
	push edx
	lea edx,[esp+0x9C]
	push edx
	lea edx,[esp+0xB0]
	push edx
	lea edx,[esp+0x64]
	push edx
	push eax
	lea eax,[esp+0xDC]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0xC4],bp
	jne Block84

 Block78:
	mov eax,dword ptr [esp+0xCC]
	xor ecx,ecx
	mov word ptr [esp+0xC4],cx
	test eax,eax
	je Block80

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block80:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block81:
	mov byte ptr [esp+0xDC],bl
	cmp word ptr [esp+0x54],bp
	jne Block85

 Block82:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block86

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block84:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0xC4]
	push edx
	call esi
	jmp Block81

 Block85:
	lea ecx,[esp+0x54]
	push ecx
	call esi

 Block86:
	mov byte ptr [esp+0xDC],0xB
	cmp word ptr [esp+0xA4],bp
	jne Block89

 Block87:
	mov eax,dword ptr [esp+0xAC]
	xor edx,edx
	mov word ptr [esp+0xA4],dx
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea eax,[esp+0xA4]
	push eax
	call esi

 Block90:
	mov byte ptr [esp+0xDC],0xA
	cmp word ptr [esp+0x94],bp
	jne Block93

 Block91:
	mov eax,dword ptr [esp+0x9C]
	xor ecx,ecx
	mov word ptr [esp+0x94],cx
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea edx,[esp+0x94]
	push edx
	call esi

 Block94:
	mov byte ptr [esp+0xDC],9
	cmp word ptr [esp+0x64],bp
	jne Block97

 Block95:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea ecx,[esp+0x64]
	push ecx
	call esi

 Block98:
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	cmp word ptr [esp+0x84],bp
	jne Block102

 Block99:
	mov eax,dword ptr [esp+0x8C]
	xor edx,edx
	mov word ptr [esp+0x84],dx

 Block100:
	test eax,eax
	je Block104

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block102:
	lea eax,[esp+0x84]

 Block103:
	push eax
	call esi

 Block104:
	mov eax,1
	mov ecx,dword ptr [esp+0xD4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xCC
	ret
}
}
// CUICharacterSaleDlg::ClearCurrentStep
__SUB_CLASS_THIS(0037A8D0, __thiscall, 67193,  CUICharacterSaleDlg, int32_t, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CUICharacterSaleDlg::ClearWindow
	mov eax,dword ptr [esp+8]
	dec eax
	cmp eax,5
	ja Block8

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
cmp EAX, 5
je Block7


 Block2:
	push 0
	mov ecx,esi
	call CUICharacterSaleDlg::SetStep1
	mov eax,1
	pop esi
	ret 4

 Block3:
	push 0
	mov ecx,esi
	call CUICharacterSaleDlg::SetStep2
	mov eax,1
	pop esi
	ret 4

 Block4:
	push 0
	mov ecx,esi
	call CUICharacterSaleDlg::SetStep2_1
	mov eax,1
	pop esi
	ret 4

 Block5:
	push 0
	mov ecx,esi
	call CUICharacterSaleDlg::SetStep3
	mov eax,1
	pop esi
	ret 4

 Block6:
	push 0
	mov ecx,esi
	call CUICharacterSaleDlg::SetStep4
	mov eax,1
	pop esi
	ret 4

 Block7:
	push 0
	mov ecx,esi
	call CUICharacterSaleDlg::SetStep5

 Block8:
	mov eax,1
	pop esi
	ret 4
}
}
// CUICharacterSaleDlg::Draw
_SUB_EXCEPTION_HANDLER(378DE0)
__SUB_CLASS_THIS(00378DE0, __thiscall, 67183,  CUICharacterSaleDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_378DE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C0
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1D4]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [esp+0x1E4]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov eax,dword ptr [edi+0x1D0]
	dec eax
	mov dword ptr [esp+0x1DC],0
	cmp eax,5
	ja Block172

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block172
cmp EAX, 2
je Block172
cmp EAX, 3
je Block88
cmp EAX, 4
je Block118
cmp EAX, 5
je Block149


 Block2:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xAC]
	push edx
	call ebp
	lea eax,[esp+0xAC]
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
	lea ecx,[esp+0x17C]
	push ecx
	mov byte ptr [esp+0x1E0],1
	call ebp
	lea edx,[esp+0x17C]
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
	lea eax,[esp+0xAC]
	push eax
	lea ecx,[esp+0x180]
	push ecx
	lea edx,[esp+0x7C]
	push 1
	push edx
	mov byte ptr [esp+0x1EC],2
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [edi+0x1CC]
	mov eax,dword ptr [edi+eax*4+0x26C]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,3
	push eax
	mov byte ptr [esp+0x1F0],bl
	call _xbstr_t::_ctor_0
	mov esi,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x1EC],4
	test esi,esi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	push 0x46
	push 0xC8
	mov ecx,esi
	mov byte ptr [esp+0x1F4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x1DC],2
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov ebx,8
	mov byte ptr [esp+0x1DC],1
	cmp word ptr [esp+0x17C],bx
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x17C],ax
	mov eax,dword ptr [esp+0x184]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x17C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov byte ptr [esp+0x1DC],0
	cmp word ptr [esp+0xAC],bx
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0xB4]
	xor edx,edx
	mov word ptr [esp+0xAC],dx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[esp+0xAC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block18:
	lea ecx,[esp+0xDC]
	push ecx
	call ebp
	lea edx,[esp+0xDC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	lea eax,[esp+0x7C]
	push eax
	mov byte ptr [esp+0x1E0],5
	call ebp
	lea ecx,[esp+0x7C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	lea edx,[esp+0xDC]
	push edx
	lea eax,[esp+0x80]
	push eax
	lea ecx,[esp+0x60]
	push 1
	push ecx
	mov byte ptr [esp+0x1EC],6
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [edi+0x1CC]
	push eax
	mov eax,dword ptr [edi+edx*4+0x280]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,7
	push eax
	mov byte ptr [esp+0x1F0],bl
	call _xbstr_t::_ctor_0
	push 0x5A
	mov byte ptr [esp+0x1F0],8
	push 0xC8
	mov ecx,esi
	mov byte ptr [esp+0x1F4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x1DC],6
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	mov ebx,8
	mov byte ptr [esp+0x1DC],5
	cmp word ptr [esp+0x7C],bx
	jne Block27

 Block25:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea ecx,[esp+0x7C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov byte ptr [esp+0x1DC],0
	cmp word ptr [esp+0xDC],bx
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0xE4]
	xor edx,edx
	mov word ptr [esp+0xDC],dx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[esp+0xDC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block32:
	lea ecx,[esp+0xCC]
	push ecx
	call ebp
	lea edx,[esp+0xCC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	lea eax,[esp+0x14C]
	push eax
	mov byte ptr [esp+0x1E0],9
	call ebp
	lea ecx,[esp+0x14C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	lea edx,[esp+0xCC]
	push edx
	lea eax,[esp+0x150]
	push eax
	lea ecx,[esp+0x68]
	push 1
	push ecx
	mov byte ptr [esp+0x1EC],0xA
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [edi+0x1CC]
	push eax
	mov eax,dword ptr [edi+edx*4+0x294]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0xB
	push eax
	mov byte ptr [esp+0x1F0],bl
	call _xbstr_t::_ctor_0
	push 0x6E
	mov byte ptr [esp+0x1F0],0xC
	push 0xC8
	mov ecx,esi
	mov byte ptr [esp+0x1F4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x1DC],0xA
	test eax,eax
	je Block38

 Block37:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block38:
	mov ebx,8
	mov byte ptr [esp+0x1DC],9
	cmp word ptr [esp+0x14C],bx
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0x14C],ax
	mov eax,dword ptr [esp+0x154]
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0x14C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov byte ptr [esp+0x1DC],0
	cmp word ptr [esp+0xCC],bx
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0xD4]
	xor edx,edx
	mov word ptr [esp+0xCC],dx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[esp+0xCC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	lea ecx,[esp+0xEC]
	push ecx
	call ebp
	lea edx,[esp+0xEC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	lea eax,[esp+0x12C]
	push eax
	mov byte ptr [esp+0x1E0],0xD
	call ebp
	lea ecx,[esp+0x12C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	lea edx,[esp+0xEC]
	push edx
	lea eax,[esp+0x130]
	push eax
	lea ecx,[esp+0x70]
	push 1
	push ecx
	mov byte ptr [esp+0x1EC],0xE
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [edi+0x1CC]
	push eax
	mov eax,dword ptr [edi+edx*4+0x2A8]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0xF
	push eax
	mov byte ptr [esp+0x1F0],bl
	call _xbstr_t::_ctor_0
	push 0x82
	mov byte ptr [esp+0x1F0],0x10
	push 0xC8
	mov ecx,esi
	mov byte ptr [esp+0x1F4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0x1DC],0xE
	test eax,eax
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	mov ebx,8
	mov byte ptr [esp+0x1DC],0xD
	cmp word ptr [esp+0x12C],bx
	jne Block55

 Block53:
	xor eax,eax
	mov word ptr [esp+0x12C],ax
	mov eax,dword ptr [esp+0x134]
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea ecx,[esp+0x12C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov byte ptr [esp+0x1DC],0
	cmp word ptr [esp+0xEC],bx
	jne Block59

 Block57:
	mov eax,dword ptr [esp+0xF4]
	xor edx,edx
	mov word ptr [esp+0xEC],dx
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[esp+0xEC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block60:
	lea ecx,[esp+0x10C]
	push ecx
	call ebp
	lea edx,[esp+0x10C]
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
	lea eax,[esp+0x16C]
	push eax
	mov byte ptr [esp+0x1E0],0x11
	call ebp
	lea ecx,[esp+0x16C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block64

 Block63:
	push eax
	call _com_issue_error

 Block64:
	lea edx,[esp+0x10C]
	push edx
	lea eax,[esp+0x170]
	push eax
	lea ecx,[esp+0x78]
	push 1
	push ecx
	mov byte ptr [esp+0x1EC],0x12
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [edi+0x1CC]
	push eax
	mov eax,dword ptr [edi+edx*4+0x2BC]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0x13
	push eax
	mov byte ptr [esp+0x1F0],bl
	call _xbstr_t::_ctor_0
	push 0x96
	mov byte ptr [esp+0x1F0],0x14
	push 0xC8
	mov ecx,esi
	mov byte ptr [esp+0x1F4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0x1DC],0x12
	test eax,eax
	je Block66

 Block65:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block66:
	mov ebx,8
	mov byte ptr [esp+0x1DC],0x11
	cmp word ptr [esp+0x16C],bx
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [esp+0x16C],ax
	mov eax,dword ptr [esp+0x174]
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[esp+0x16C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov byte ptr [esp+0x1DC],0
	cmp word ptr [esp+0x10C],bx
	jne Block73

 Block71:
	mov eax,dword ptr [esp+0x114]
	xor edx,edx
	mov word ptr [esp+0x10C],dx
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea eax,[esp+0x10C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block74:
	lea ecx,[esp+0xBC]
	push ecx
	call ebp
	lea edx,[esp+0xBC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block76

 Block75:
	push eax
	call _com_issue_error

 Block76:
	lea eax,[esp+0x9C]
	push eax
	mov byte ptr [esp+0x1E0],0x15
	call ebp
	lea ecx,[esp+0x9C]
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
	lea edx,[esp+0xBC]
	push edx
	lea eax,[esp+0xA0]
	push eax
	lea ecx,[esp+0x80]
	push 1
	push ecx
	mov byte ptr [esp+0x1EC],0x16
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [edi+0x1CC]
	push eax
	mov eax,dword ptr [edi+edx*4+0x2D0]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0x17
	push eax
	mov byte ptr [esp+0x1F0],bl
	call _xbstr_t::_ctor_0
	push 0xAA
	mov byte ptr [esp+0x1F0],0x18
	push 0xC8
	mov ecx,esi
	mov byte ptr [esp+0x1F4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x1DC],0x16
	test eax,eax
	je Block80

 Block79:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block80:
	mov esi,8
	mov byte ptr [esp+0x1DC],0x15
	cmp word ptr [esp+0x9C],si
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [esp+0x9C],ax
	mov eax,dword ptr [esp+0xA4]
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea ecx,[esp+0x9C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov byte ptr [esp+0x1DC],0
	cmp word ptr [esp+0xBC],si
	jne Block87

 Block85:
	mov eax,dword ptr [esp+0xC4]
	xor edx,edx
	mov word ptr [esp+0xBC],dx
	test eax,eax
	je Block172

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block172

 Block87:
	lea eax,[esp+0xBC]
	push eax
	call dword ptr [ZImports::_VariantClear]
	jmp Block172

 Block88:
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov byte ptr [esp+0x1DC],0x19
	cmp ebp,4

 Block89:
	jne Block91

 Block90:
	push 8
	lea ecx,[esp+0x54]
	push ecx
	mov ecx,edi
	call CUICharacterSaleDlg::GetNewCharEquipName
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x1E0],0x1A
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x50]
	jmp Block92

 Block91:
	push ebp
	lea edx,[esp+0x60]
	push edx
	mov ecx,edi
	call CUICharacterSaleDlg::GetNewCharEquipName
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x1E0],0x1B
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x5C]

 Block92:
	mov byte ptr [esp+0x1DC],0x19
	test eax,eax
	je Block94

 Block93:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block94:
	lea eax,[esp+0x8C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x8C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block95:
	mov ebx,dword ptr [esp+0x14]
	lea edx,[esp+0x8C]
	push edx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push ebx
	mov byte ptr [esp+0x1E8],0x1C
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x74]
	push 1
	push eax
	mov byte ptr [esp+0x1EC],0x1D
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x1E4],0x1E
	test ecx,ecx
	je Block7

 Block96:
	mov byte ptr [esp+0x1E4],0x1F
	call IWzFont::CalcTextWidth
	mov esi,eax
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x1DC],0x1C
	test eax,eax
	je Block98

 Block97:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block98:
	cmp word ptr [esp+0x8C],8
	mov byte ptr [esp+0x1DC],0x19
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [esp+0x8C],ax
	mov eax,dword ptr [esp+0x94]
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[esp+0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	lea edx,[esp+0x11C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x11C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block103:
	lea ecx,[esp+0xFC]
	push ecx
	mov byte ptr [esp+0x1E0],0x20
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xFC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block104:
	lea eax,[esp+0x11C]
	push eax
	lea ecx,[esp+0x100]
	push ecx
	lea edx,[esp+0x6C]
	push 1
	push edx
	mov byte ptr [esp+0x1EC],0x21
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push ebx
	mov byte ptr [esp+0x1F0],0x22
	call _xbstr_t::_ctor_0
	cmp dword ptr [esp+0x2C],0
	mov byte ptr [esp+0x1EC],0x23
	je Block7

 Block105:
	mov eax,ebp
	imul eax,0x13
	add eax,0x64
	push eax
	mov eax,esi
	cdq
	sub eax,edx
	sar eax,1
	mov ecx,0x158
	sub ecx,eax
	push ecx
	mov ecx,dword ptr [esp+0x34]
	mov byte ptr [esp+0x1F4],0x22
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x1DC],0x21
	test eax,eax
	je Block107

 Block106:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block107:
	mov esi,8
	mov byte ptr [esp+0x1DC],0x20
	cmp word ptr [esp+0xFC],si
	jne Block110

 Block108:
	mov eax,dword ptr [esp+0x104]
	xor ecx,ecx
	mov word ptr [esp+0xFC],cx
	test eax,eax
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea edx,[esp+0xFC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block111:
	mov byte ptr [esp+0x1DC],0x19
	cmp word ptr [esp+0x11C],si
	jne Block114

 Block112:
	xor eax,eax
	mov word ptr [esp+0x11C],ax
	mov eax,dword ptr [esp+0x124]
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea ecx,[esp+0x11C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block115:
	inc ebp
	cmp ebp,4
	jle Block89

 Block116:
	mov byte ptr [esp+0x1DC],0
	test ebx,ebx
	je Block172

 Block117:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4
	jmp Block172

 Block118:
	xor ebp,ebp
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x14],ebp
	push 0x14
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x1E0],0x25
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebp
	je Block120

 Block119:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CTextAnalyzer::`vftable'
	mov dword ptr [eax+0x10],0xF0
	mov dword ptr [eax+0xC],0xF
	mov esi,eax
	jmp Block121

 Block120:
	xor esi,esi

 Block121:
	mov dword ptr [esp+0x4C],esi
	cmp esi,ebp
	je Block123

 Block122:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block123:
	push ebp
	push ebp
	push ebp
	lea eax,[edi+0x304]
	lea ecx,[esp+0x20]
	push eax
	push ecx
	push ecx
	mov byte ptr [esp+0x1F4],0x26
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	cmp dword ptr [edi+0x1CC],ebp
	jne Block129

 Block124:
	lea edx,[edi+0x30C]
	push edx
	call ZXString<char>::_ctor_copy
	mov ecx,esi
	call CTextAnalyzer::AnalyzeText
	push offset _D_VTMISSING
	lea ecx,[esp+0x198]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x1B8]
	mov byte ptr [esp+0x1E0],0x27
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x194]
	push eax
	lea ecx,[esp+0x1B8]
	push ecx
	lea edx,[esp+0x5C]
	push 1
	push edx
	mov byte ptr [esp+0x1EC],0x28
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [edi+0x1D4]
	mov eax,dword ptr [edi+eax*4+0x94]
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,0x29
	push eax
	mov byte ptr [esp+0x1F0],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x1EC],0x2A
	cmp ecx,ebp
	jne Block126

 Block125:
	push 0x80004003
	call _com_issue_error

 Block126:
	push 0xC3
	push 0xD4
	mov byte ptr [esp+0x1F4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x1DC],0x28
	cmp eax,ebp
	je Block128

 Block127:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block128:
	lea ecx,[esp+0x1B4]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x194]
	jmp Block134

 Block129:
	lea edx,[edi+0x310]
	push edx
	call ZXString<char>::_ctor_copy
	mov ecx,esi
	call CTextAnalyzer::AnalyzeText
	push offset _D_VTMISSING
	lea ecx,[esp+0x1C8]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x1A8]
	mov byte ptr [esp+0x1E0],0x2B
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x1C4]
	push eax
	lea ecx,[esp+0x1A8]
	push ecx
	lea edx,[esp+0x28]
	push 1
	push edx
	mov byte ptr [esp+0x1EC],0x2C
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [edi+0x1D4]
	mov eax,dword ptr [edi+eax*4+0xC0]
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,0x2D
	push eax
	mov byte ptr [esp+0x1F0],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x1EC],0x2E
	cmp ecx,ebp
	jne Block131

 Block130:
	push 0x80004003
	call _com_issue_error

 Block131:
	push 0xC3
	push 0xD4
	mov byte ptr [esp+0x1F4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x1DC],0x2C
	cmp eax,ebp
	je Block133

 Block132:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block133:
	lea ecx,[esp+0x1A4]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x1C4]

 Block134:
	mov byte ptr [esp+0x1DC],0x26
	call Ztl_variant_t::~Ztl_variant_t
	xor ebp,ebp
	xor esi,esi
	mov bl,0x30

 Block135:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block148

 Block136:
	cmp ebp,dword ptr [eax-4]
	jae Block148

 Block137:
	lea eax,[esp+0x15C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x15C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block138:
	lea edx,[esp+0x13C]
	push edx
	mov byte ptr [esp+0x1E0],0x2F
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x13C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block139:
	mov eax,dword ptr [esp+0x14]
	lea ecx,[esp+0x15C]
	push ecx
	mov ecx,dword ptr [esi+eax+0xC]
	mov eax,dword ptr [esi+eax+0x10]
	lea edx,[esp+0x140]
	push edx
	push ecx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x1F0],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [esi+ecx+8]
	lea eax,[eax+eax*2]
	lea edx,[eax*4+0x43]
	mov eax,dword ptr [esi+ecx+0x18]
	mov ecx,dword ptr [esp+0x2C]
	push edx
	add eax,0xC3
	mov byte ptr [esp+0x1F0],0x31
	push eax
	mov byte ptr [esp+0x1F4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x13C],8
	mov byte ptr [esp+0x1DC],0x2F
	jne Block142

 Block140:
	mov eax,dword ptr [esp+0x144]
	xor ecx,ecx
	mov word ptr [esp+0x13C],cx
	test eax,eax
	je Block143

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block142:
	lea edx,[esp+0x13C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block143:
	cmp word ptr [esp+0x15C],8
	mov byte ptr [esp+0x1DC],0x26
	jne Block146

 Block144:
	xor eax,eax
	mov word ptr [esp+0x15C],ax
	mov eax,dword ptr [esp+0x164]
	test eax,eax
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc ebp
	add esi,0x44
	jmp Block135

 Block146:
	lea ecx,[esp+0x15C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block147:
	inc ebp
	add esi,0x44
	jmp Block135

 Block148:
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0x1DC],0x25
	call ZRef<CTextAnalyzer>::~ZRef<CTextAnalyzer>
	mov byte ptr [esp+0x1DC],0x24
	jmp Block171

 Block149:
	xor ebx,ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x14],ebx
	push 0x14
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x1E0],0x33
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebx
	je Block151

 Block150:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CTextAnalyzer::`vftable'
	mov dword ptr [eax+0x10],0xF0
	mov dword ptr [eax+0xC],0xF
	mov esi,eax
	jmp Block152

 Block151:
	xor esi,esi

 Block152:
	mov dword ptr [esp+0x190],esi
	cmp esi,ebx
	je Block154

 Block153:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block154:
	push ebx
	push ebx
	push ebx
	lea eax,[edi+0x308]
	push eax
	lea ecx,[esp+0x24]
	push ecx
	push ecx
	mov ecx,esp
	lea edx,[edi+0x314]
	mov dword ptr [esp+0x30],esp
	push edx
	mov byte ptr [esp+0x1F8],0x34
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,esi
	call CTextAnalyzer::AnalyzeText
	mov ebp,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x18],ebx
	xor esi,esi
	mov bl,0x36
	jmp Block156

 Block156:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block170

 Block157:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,dword ptr [eax-4]
	jae Block170

 Block158:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block159:
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x1E0],0x35
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block160:
	lea eax,[esp+0x28]
	push eax
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,dword ptr [esi+eax+0xC]
	mov eax,dword ptr [esi+eax+0x10]
	push ecx
	push ecx
	mov dword ptr [esp+0x58],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x1F0],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1EC],0x37
	test ebp,ebp
	je Block7

 Block161:
	mov eax,dword ptr [esi+ecx+8]
	mov edx,eax
	shl edx,4
	sub edx,eax
	mov eax,dword ptr [esi+ecx+0x18]
	add edx,0x46
	push edx
	add eax,0xC3
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x1F4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x1DC],0x35
	jne Block164

 Block162:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block165

 Block163:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block165

 Block164:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block165:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x1DC],0x34
	jne Block168

 Block166:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block169

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [esp+0x18]
	add esi,0x44
	jmp Block156

 Block168:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block169:
	inc dword ptr [esp+0x18]
	add esi,0x44
	jmp Block156

 Block170:
	lea ecx,[esp+0x18C]
	mov byte ptr [esp+0x1DC],0x33
	call ZRef<CTextAnalyzer>::~ZRef<CTextAnalyzer>
	mov byte ptr [esp+0x1DC],0x32

 Block171:
	lea ecx,[esp+0x14]
	call ZArray<CT_INFO>::RemoveAll
	mov byte ptr [esp+0x1DC],0

 Block172:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push edx
	call ebp
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block174

 Block173:
	push eax
	call _com_issue_error

 Block174:
	mov edx,dword ptr [edi+0x1CC]
	mov eax,dword ptr [edi+edx*4+0x258]
	lea ecx,[esp+0x28]
	push ecx
	push ecx
	mov dword ptr [esp+0x50],esp
	mov ecx,esp
	mov bl,0x38
	push eax
	mov byte ptr [esp+0x1E8],bl
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x28]
	push 1
	push eax
	mov byte ptr [esp+0x1EC],0x39
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x1E4],0x3A
	test ecx,ecx
	jne Block176

 Block175:
	push 0x80004003
	call _com_issue_error

 Block176:
	mov byte ptr [esp+0x1E4],0x3B
	call IWzFont::CalcTextWidth
	mov esi,eax
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x1DC],bl
	test eax,eax
	je Block178

 Block177:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block178:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x1DC],0
	jne Block181

 Block179:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block182

 Block180:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block182

 Block181:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block182:
	lea edx,[esp+0x38]
	push edx
	call ebp
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block184

 Block183:
	push eax
	call _com_issue_error

 Block184:
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x1E0],0x3C
	call ebp
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block186

 Block185:
	push eax
	call _com_issue_error

 Block186:
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x28]
	push 1
	push edx
	mov byte ptr [esp+0x1EC],0x3D
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [edi+0x1CC]
	mov edi,dword ptr [edi+eax*4+0x258]
	push ecx
	mov dword ptr [esp+0x58],esp
	mov ecx,esp
	mov bl,0x3E
	push edi
	mov byte ptr [esp+0x1F0],bl
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x1EC],0x3F
	test edi,edi
	jne Block188

 Block187:
	push 0x80004003
	call _com_issue_error

 Block188:
	mov eax,esi
	cdq
	sub eax,edx
	sar eax,1
	mov ecx,0x64
	sub ecx,eax
	push 0xEF
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x1F4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x1DC],0x3D
	test eax,eax
	je Block190

 Block189:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block190:
	mov esi,8
	mov byte ptr [esp+0x1DC],0x3C
	cmp word ptr [esp+0x28],si
	jne Block193

 Block191:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block194

 Block192:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block194

 Block193:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block194:
	mov byte ptr [esp+0x1DC],0
	cmp word ptr [esp+0x38],si
	jne Block197

 Block195:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block198

 Block196:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block198

 Block197:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block198:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov dword ptr [esp+0x1E0],0xFFFFFFFF
	call eax
	mov ecx,dword ptr [esp+0x1D4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1CC
	ret 4
}
}
// CUICharacterSaleDlg::ClearWindow
_SUB_EXCEPTION_HANDLER(3769F0)
__SUB_CLASS_THIS0(003769F0, __thiscall, 67191,  CUICharacterSaleDlg, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3769F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,3
	mov word ptr [esp+0xC],ax
	mov dword ptr [esp+0x14],0xFFFFFFFE
	mov ecx,dword ptr [esi+0x1DC]
	mov dword ptr [esp+0x24],0
	test ecx,ecx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0xC]
	push edx
	lea eax,[esp+0xC]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	cmp word ptr [esp+0xC],8
	mov dword ptr [esp+0x24],0xFFFFFFFF
	jne Block7

 Block5:
	xor eax,eax
	mov word ptr [esp+0xC],ax
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea ecx,[esp+0xC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov eax,1
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret
}
}
// CUICharacterSaleDlg::OnKey
__SUB_CLASS_THIS(00377710, __thiscall, 67194,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x1CC],2
	jne Block9

 Block1:
	mov ecx,dword ptr [esi+0xF4]
	lea eax,[esp+4]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	test eax,eax
	je Block3

 Block2:
	mov eax,dword ptr [eax-4]
	jmp Block4

 Block3:
	xor eax,eax

 Block4:
	test eax,eax
	mov eax,dword ptr [esp+4]
	push ebx
	setne bl
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	test bl,bl
	pop ebx
	je Block8

 Block7:
	mov esi,dword ptr [esi+0x104]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	push 1
	call eax
	pop esi
	pop ecx
	ret 8

 Block8:
	mov eax,dword ptr [esi+0x104]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax

 Block9:
	pop esi
	pop ecx
	ret 8
}
}
