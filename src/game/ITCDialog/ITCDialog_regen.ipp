#include "regen.hpp"
// ITCDialog.ipp
#include "ITCDialog.hpp"

// CRegisterWishEntrySearchDlg::SetScrollBar
__SUB_CLASS_THIS0(00177760, __thiscall, 141571,  CRegisterWishEntrySearchDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xA0]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	mov ecx,dword ptr [esi+0xA0]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x28]
	push 0
	push 0xA8
	push 0x47
	push 0xE5
	push 3
	push 1
	push 0x3E8
	push esi
	call edx
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [eax+0x34],0x9A
	mov eax,dword ptr [esi+0xC4]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	imul eax,0x15
	sub eax,0x95
	mov ecx,eax
	test ecx,ecx
	jg Block4

 Block3:
	mov ecx,dword ptr [esi+0xA0]
	push 0
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret

 Block4:
	mov eax,0x30C30C31
	imul ecx
	sar edx,2
	mov ecx,edx
	shr ecx,0x1F
	lea edx,[edx+ecx+2]
	mov ecx,dword ptr [esi+0xA0]
	push edx
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret
}
}
// CRegisterSaleEntryDlg::CRegisterSaleEntryDlg
_SUB_EXCEPTION_HANDLER(1786B0)
__SUB_CLASS_THIS(001786B0, __thiscall, 141607,  CRegisterSaleEntryDlg, void, long, GW_ItemSlotBase*, void*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1786B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
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
	mov dword ptr [ebp-0x14],esi
	call CDialog::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CRegisterSaleEntryDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CRegisterSaleEntryDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CRegisterSaleEntryDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [ebp-4],edi
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xBC],edi
	mov eax,dword ptr [ebp+0x10]
	mov ebx,dword ptr [ebp+0xC]
	push edi
	push 1
	push edi
	push edi
	mov ecx,esi
	mov byte ptr [ebp-4],4
	mov dword ptr [esi+0xC0],eax
	mov dword ptr [esi+0xC4],ebx
	call CDialog::CreateDlg_1
	push ebx
	call is_treat_singly_1
	add esp,4
	test eax,eax
	je Block2

 Block1:
	lea eax,[edi+0x20]
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push 1
	call _itoa
	mov ecx,dword ptr [esi+0xBC]
	add esp,0xC
	push eax
	call CCtrlEdit::SetText
	mov eax,dword ptr [esi+0xBC]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push edi
	call eax

 Block2:
	mov eax,dword ptr [esi+0xC0]
	mov ecx,dword ptr [eax+0x345C]
	mov dword ptr [esi+0x90],ecx
	mov dword ptr [esi+0x94],edi
	mov edx,dword ptr [eax+0x3460]
	mov dword ptr [esi+0x98],edx
	mov eax,dword ptr [eax+0x3464]
	mov dword ptr [esi+0x9C],eax
	mov eax,esi
	lea esp,[ebp-0x24]
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
// CSelectLoadWishSaleListDlg::CSelectLoadWishSaleListDlg
_SUB_EXCEPTION_HANDLER(177D30)
__SUB_CLASS_THIS(00177D30, __thiscall, 141708,  CSelectLoadWishSaleListDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_177D30
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
	call CDialog::_ctor_default
	or eax,0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esi],offset CSelectLoadWishSaleListDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CSelectLoadWishSaleListDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CSelectLoadWishSaleListDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x94],eax
	mov dword ptr [esi+0x98],eax
	mov dword ptr [esp+0x14],0
	mov dword ptr [esi+0xA0],0
	mov dword ptr [esi+0xA8],0
	lea ecx,[esi+0xAC]
	mov byte ptr [esp+0x14],2
	call CUIToolTip::_ctor_default
	mov eax,dword ptr [esp+0x1C]
	push 0
	push 1
	push 0
	push 0
	mov ecx,esi
	mov byte ptr [esp+0x24],3
	mov dword ptr [esi+0x90],eax
	call CDialog::CreateDlg_1
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CRegisterWishEntrySearchDlg::OnCreate
_SUB_EXCEPTION_HANDLER(17F0C0)
__SUB_CLASS_THIS(0017F0C0, __thiscall, 141572,  CRegisterWishEntrySearchDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_17F0C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x108
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x11C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x24],ebp
	lea eax,[esp+0x28]
	push 0x3D0
	push eax
	mov dword ptr [esp+0x12C],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea ecx,[esp+0x28]
	push ecx
	push eax
	mov byte ptr [esp+0x130],1
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x124],0
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x3C]
	push edx
	mov dword ptr [esi+0x24],0x10A
	mov dword ptr [esi+0x28],0x10C
	call ebx
	lea eax,[esp+0x3C]
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
	lea ecx,[esp+0x14]
	push ecx
	mov byte ptr [esp+0x128],2
	call ebx
	lea edx,[esp+0x14]
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
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x124],3
	cmp ecx,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [esi+0x28]
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [esi+0x24]
	push eax
	push edx
	call IWzCanvas::Create
	mov edi,8
	mov byte ptr [esp+0x124],2
	cmp word ptr [esp+0x14],di
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov byte ptr [esp+0x124],0
	cmp word ptr [esp+0x3C],di
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x70]
	push ebp
	push eax
	mov edi,eax
	call edx
	cmp eax,ebp
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block20:
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	push ebp
	push eax
	mov edi,eax
	call edx
	cmp eax,ebp
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block24:
	lea eax,[esp+0x2C]
	push eax
	call ebx
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	lea edx,[esp+0x4C]
	push edx
	mov byte ptr [esp+0x128],4
	call ebx
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0x128],5
	call ebx
	lea edx,[esp+0x6C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea eax,[esp+0x14]
	push eax
	mov byte ptr [esp+0x128],6
	call ebx
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x128],7
	call ebx
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x128],8
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x124],9
	cmp ecx,ebp
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x50]
	push eax
	lea edx,[esp+0x74]
	push edx
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [esp+0x34]
	lea edx,[esp+0x4C]
	push edx
	push eax
	lea edx,[esp+0x94]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x7C],8
	jne Block45

 Block37:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	cmp eax,ebp
	je Block39

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block39:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block40:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x124],8
	cmp eax,ebp
	je Block42

 Block41:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block42:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x124],7
	jne Block46

 Block43:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	je Block47

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block45:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x7C]
	push ecx
	call edi
	jmp Block40

 Block46:
	lea edx,[esp+0x3C]
	push edx
	call edi

 Block47:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x124],6
	jne Block50

 Block48:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block51:
	cmp word ptr [esp+0x6C],8
	mov byte ptr [esp+0x124],5
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x74]
	xor edx,edx
	mov word ptr [esp+0x6C],dx
	cmp eax,ebp
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea eax,[esp+0x6C]
	push eax
	call edi

 Block55:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x124],4
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	cmp eax,ebp
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[esp+0x4C]
	push edx
	call edi

 Block59:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x124],0
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block63:
	lea edx,[esp+0x4C]
	push edx
	call ebx
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0x128],0xA
	call ebx
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	lea eax,[esp+0x14]
	mov bl,0xB
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x128],bl
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x124],0xC
	cmp ecx,ebp
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea edx,[esp+0x28]
	push edx
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x124],0xD
	cmp ecx,ebp
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea eax,[esp+0x4C]
	push eax
	mov eax,dword ptr [esi+0x28]
	lea edx,[esp+0x30]
	push edx
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	mov eax,dword ptr [esi+0x24]
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x124],0xC
	cmp eax,ebp
	je Block73

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block73:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x124],bl
	cmp eax,ebp
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block75:
	mov ebx,8
	mov byte ptr [esp+0x124],0xA
	cmp word ptr [esp+0x2C],bx
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block79:
	mov byte ptr [esp+0x124],0
	cmp word ptr [esp+0x4C],bx
	jne Block82

 Block80:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,ebp
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea eax,[esp+0x4C]
	push eax
	call edi

 Block83:
	lea ecx,[esp+0xC8]
	call CCtrlComboBox::CREATEPARAM::_ctor_default
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x128],0xE
	mov dword ptr [esp+0xCC],0xFFEEEEEE
	mov dword ptr [esp+0xD0],0xFFA5A198
	mov dword ptr [esp+0xD4],0xFF999999
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x124],0xF
	cmp eax,ebp
	je Block85

 Block84:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block86

 Block85:
	xor eax,eax

 Block86:
	mov byte ptr [esp+0x124],0xE
	cmp eax,ebp
	je Block111

 Block87:
	add eax,8
	cmp eax,ebp
	je Block111

 Block88:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block90

 Block89:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block90:
	mov eax,dword ptr [esi+0xC0]
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block92

 Block91:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlComboBox>::_ReleaseRaw

 Block92:
	mov ecx,dword ptr [esi+0xC0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0xC8]
	push eax
	push 0x12
	push 0x39
	push 0x2E
	push 0x13
	push 4
	push 0x3EB
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x12B7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xC0]
	push 1
	push eax
	mov byte ptr [esp+0x12C],0x10
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x124],0xE
	cmp eax,ebp
	je Block94

 Block93:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block94:
	lea ecx,[esp+0x14]
	push 0x1289
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xC0]
	push 2
	push eax
	mov byte ptr [esp+0x12C],0x11
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x124],0xE
	cmp eax,ebp
	je Block96

 Block95:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block96:
	lea edx,[esp+0x14]
	push 0x128A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xC0]
	push 3
	push eax
	mov byte ptr [esp+0x12C],0x12
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x124],0xE
	cmp eax,ebp
	je Block98

 Block97:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block98:
	lea eax,[esp+0x14]
	push 0x128B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xC0]
	push 4
	push eax
	mov byte ptr [esp+0x12C],0x13
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x124],0xE
	cmp eax,ebp
	je Block100

 Block99:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block100:
	lea ecx,[esp+0x14]
	push 0x128C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xC0]
	push 5
	mov ebx,0x14
	push eax
	mov byte ptr [esp+0x12C],bl
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x124],0xE
	cmp eax,ebp
	je Block102

 Block101:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block102:
	lea ecx,[esp+0x8C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea edx,[esp+0x14]
	push 0x1A25
	push edx
	mov byte ptr [esp+0x12C],0x15
	mov dword ptr [esp+0xB8],0xFFA4C4E6
	mov dword ptr [esp+0xB0],0xFF0900DE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea eax,[esp+0xA0]
	cmp eax,edi
	je Block107

 Block103:
	mov ecx,dword ptr [esp+0xA0]
	cmp ecx,ebp
	je Block105

 Block104:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0xA0],ebp

 Block105:
	mov eax,dword ptr [edi]
	mov dword ptr [esp+0xA0],eax
	cmp eax,ebp
	je Block107

 Block106:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block107:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	je Block109

 Block108:
	call _xbstr_t::Data_t::Release

 Block109:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0xC0],ebx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x124],0x16
	cmp eax,ebp
	je Block112

 Block110:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block113

 Block111:
	xor edi,edi
	jmp Block90

 Block112:
	xor eax,eax

 Block113:
	mov byte ptr [esp+0x124],0x15
	cmp eax,ebp
	je Block123

 Block114:
	add eax,8
	cmp eax,ebp
	je Block123

 Block115:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block117

 Block116:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block117:
	mov eax,dword ptr [esi+0xB8]
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block119

 Block118:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block119:
	mov ecx,dword ptr [esi+0xB8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x8C]
	push eax
	push 0xF
	push 0x87
	push 0x2F
	push 0x4A
	push 0x3EA
	push esi
	call edx
	mov dword ptr [esp+0x68],ebp
	mov dword ptr [esp+0x5C],1
	mov dword ptr [esp+0x60],ebp
	mov dword ptr [esp+0x64],ebp
	lea eax,[esp+0x14]
	push 0x127F
	mov bl,0x17
	push eax
	mov byte ptr [esp+0x12C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0x128],0x18
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x124],bl
	cmp eax,ebp
	je Block121

 Block120:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block121:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x124],0x19
	cmp eax,ebp
	je Block124

 Block122:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block125

 Block123:
	xor edi,edi
	jmp Block117

 Block124:
	xor eax,eax

 Block125:
	mov byte ptr [esp+0x124],bl
	cmp eax,ebp
	je Block135

 Block126:
	add eax,8
	cmp eax,ebp
	je Block135

 Block127:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block129

 Block128:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block129:
	mov eax,dword ptr [esi+0xA8]
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block131

 Block130:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block131:
	mov ecx,dword ptr [esi+0xA8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x5C]
	push eax
	push ebp
	push 0x2E
	push 0xD4
	push 0x3E9
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x1A71
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0x128],0x1A
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x124],bl
	cmp eax,ebp
	je Block133

 Block132:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block133:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x124],0x1B
	cmp eax,ebp
	je Block136

 Block134:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block137

 Block135:
	xor edi,edi
	jmp Block129

 Block136:
	xor eax,eax

 Block137:
	mov byte ptr [esp+0x124],bl
	cmp eax,ebp
	je Block145

 Block138:
	add eax,8
	cmp eax,ebp
	je Block145

 Block139:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block141

 Block140:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block141:
	mov eax,dword ptr [esi+0xB0]
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block143

 Block142:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block143:
	mov ecx,dword ptr [esi+0xB0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x5C]
	push eax
	push ebp
	push 0xC
	push 0xF3
	push 2
	push esi
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x124],0x1C
	cmp eax,ebp
	je Block146

 Block144:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block147

 Block145:
	xor edi,edi
	jmp Block141

 Block146:
	xor eax,eax

 Block147:
	mov byte ptr [esp+0x124],bl
	cmp eax,ebp
	je Block160

 Block148:
	add eax,8
	cmp eax,ebp
	je Block160

 Block149:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block151

 Block150:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block151:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block153

 Block152:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block153:
	mov ecx,esi
	call CRegisterWishEntrySearchDlg::SetScrollBar
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0x124],0x15
	cmp eax,ebp
	je Block155

 Block154:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block155:
	lea ecx,[esp+0x8C]
	mov byte ptr [esp+0x124],0xE
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0x114]
	cmp ecx,ebp
	je Block157

 Block156:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x114],ebp

 Block157:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x124],0xFFFFFFFF
	cmp eax,ebp
	je Block159

 Block158:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block159:
	mov ecx,dword ptr [esp+0x11C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x114
	ret 4

 Block160:
	xor edi,edi
	jmp Block151
}
}
// CRegisterAuctionEntryDlg::OnCreate
_SUB_EXCEPTION_HANDLER(17C9C0)
__SUB_CLASS_THIS(0017C9C0, __thiscall, 141790,  CRegisterAuctionEntryDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_17C9C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x108
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x11C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x24],ebp
	lea eax,[esp+0x28]
	push 0x3D0
	push eax
	mov dword ptr [esp+0x12C],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea ecx,[esp+0x28]
	push ecx
	push eax
	mov byte ptr [esp+0x130],1
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x124],0
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x3C]
	push edx
	mov dword ptr [esi+0x24],0x116
	mov dword ptr [esi+0x28],0xF7
	call ebx
	lea eax,[esp+0x3C]
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
	lea ecx,[esp+0x14]
	push ecx
	mov byte ptr [esp+0x128],2
	call ebx
	lea edx,[esp+0x14]
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
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x124],3
	cmp ecx,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [esi+0x28]
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [esi+0x24]
	push eax
	push edx
	call IWzCanvas::Create
	mov edi,8
	mov byte ptr [esp+0x124],2
	cmp word ptr [esp+0x14],di
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov byte ptr [esp+0x124],0
	cmp word ptr [esp+0x3C],di
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x70]
	push ebp
	push eax
	mov edi,eax
	call edx
	cmp eax,ebp
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block20:
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	push ebp
	push eax
	mov edi,eax
	call edx
	cmp eax,ebp
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block24:
	lea eax,[esp+0x2C]
	push eax
	call ebx
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	lea edx,[esp+0x4C]
	push edx
	mov byte ptr [esp+0x128],4
	call ebx
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0x128],5
	call ebx
	lea edx,[esp+0x6C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea eax,[esp+0x14]
	push eax
	mov byte ptr [esp+0x128],6
	call ebx
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x128],7
	call ebx
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x128],8
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x124],9
	cmp ecx,ebp
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x50]
	push eax
	lea edx,[esp+0x74]
	push edx
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [esp+0x34]
	lea edx,[esp+0x4C]
	push edx
	push eax
	lea edx,[esp+0x94]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x7C],8
	jne Block45

 Block37:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	cmp eax,ebp
	je Block39

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block39:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block40:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x124],8
	cmp eax,ebp
	je Block42

 Block41:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block42:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x124],7
	jne Block46

 Block43:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	je Block47

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block45:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x7C]
	push ecx
	call edi
	jmp Block40

 Block46:
	lea edx,[esp+0x3C]
	push edx
	call edi

 Block47:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x124],6
	jne Block50

 Block48:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block51:
	cmp word ptr [esp+0x6C],8
	mov byte ptr [esp+0x124],5
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x74]
	xor edx,edx
	mov word ptr [esp+0x6C],dx
	cmp eax,ebp
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea eax,[esp+0x6C]
	push eax
	call edi

 Block55:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x124],4
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	cmp eax,ebp
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[esp+0x4C]
	push edx
	call edi

 Block59:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x124],0
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block63:
	lea edx,[esp+0x4C]
	push edx
	call ebx
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0x128],0xA
	call ebx
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x128],0xB
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov bl,0xC
	mov byte ptr [esp+0x124],bl
	cmp ecx,ebp
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea edx,[esp+0x28]
	push edx
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x124],0xD
	cmp ecx,ebp
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea eax,[esp+0x4C]
	push eax
	mov eax,dword ptr [esi+0x28]
	lea edx,[esp+0x30]
	push edx
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	mov eax,dword ptr [esi+0x24]
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x124],bl
	cmp eax,ebp
	je Block73

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block73:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x124],0xB
	cmp eax,ebp
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block75:
	mov ebx,8
	mov byte ptr [esp+0x124],0xA
	cmp word ptr [esp+0x2C],bx
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block79:
	mov byte ptr [esp+0x124],0
	cmp word ptr [esp+0x4C],bx
	jne Block82

 Block80:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,ebp
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea eax,[esp+0x4C]
	push eax
	call edi

 Block83:
	lea ecx,[esp+0x8C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea ecx,[esp+0x14]
	push 0x1A25
	mov bl,0xE
	push ecx
	mov byte ptr [esp+0x12C],bl
	mov dword ptr [esp+0xB8],0xFFA4C4E6
	mov dword ptr [esp+0xB0],0xFF0900DE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea edx,[esp+0xA0]
	cmp edx,edi
	je Block88

 Block84:
	mov ecx,dword ptr [esp+0xA0]
	cmp ecx,ebp
	je Block86

 Block85:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0xA0],ebp

 Block86:
	mov eax,dword ptr [edi]
	mov dword ptr [esp+0xA0],eax
	cmp eax,ebp
	je Block88

 Block87:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block88:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	je Block90

 Block89:
	call _xbstr_t::Data_t::Release

 Block90:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0xC0],7
	mov dword ptr [esp+0xC4],1
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x124],0xF
	cmp eax,ebp
	je Block92

 Block91:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block93

 Block92:
	xor eax,eax

 Block93:
	mov byte ptr [esp+0x124],bl
	cmp eax,ebp
	je Block101

 Block94:
	add eax,8
	cmp eax,ebp
	je Block101

 Block95:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block97

 Block96:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block97:
	mov eax,dword ptr [esi+0xD0]
	mov dword ptr [esi+0xD0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block99

 Block98:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block99:
	mov ecx,dword ptr [esi+0xD0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x8C]
	push eax
	push 0x10
	push 0x56
	push 0x29
	push 0xA3
	push 0x3EB
	push esi
	call edx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x124],0x10
	cmp eax,ebp
	je Block102

 Block100:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block103

 Block101:
	xor edi,edi
	jmp Block97

 Block102:
	xor eax,eax

 Block103:
	mov byte ptr [esp+0x124],bl
	cmp eax,ebp
	je Block111

 Block104:
	add eax,8
	cmp eax,ebp
	je Block111

 Block105:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block107

 Block106:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block107:
	mov eax,dword ptr [esi+0xC0]
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block109

 Block108:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block109:
	mov ecx,dword ptr [esi+0xC0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x8C]
	push eax
	push 0x10
	push 0x56
	push 0x3B
	push 0xA3
	push 0x3EA
	push esi
	call edx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x124],0x11
	cmp eax,ebp
	je Block112

 Block110:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block113

 Block111:
	xor edi,edi
	jmp Block107

 Block112:
	xor eax,eax

 Block113:
	mov byte ptr [esp+0x124],bl
	cmp eax,ebp
	je Block121

 Block114:
	add eax,8
	cmp eax,ebp
	je Block121

 Block115:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block117

 Block116:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block117:
	mov eax,dword ptr [esi+0xC8]
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block119

 Block118:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block119:
	mov ecx,dword ptr [esi+0xC8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x8C]
	push eax
	push 0x10
	push 0x56
	push 0x5F
	push 0xA3
	push 0x3EB
	push esi
	call edx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x124],0x12
	cmp eax,ebp
	je Block122

 Block120:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block123

 Block121:
	xor edi,edi
	jmp Block117

 Block122:
	xor eax,eax

 Block123:
	mov byte ptr [esp+0x124],bl
	cmp eax,ebp
	je Block131

 Block124:
	add eax,8
	cmp eax,ebp
	je Block131

 Block125:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block127

 Block126:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block127:
	mov eax,dword ptr [esi+0xD8]
	mov dword ptr [esi+0xD8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block129

 Block128:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block129:
	mov ecx,dword ptr [esi+0xD8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x8C]
	push eax
	push 0x10
	push 0x56
	push 0x72
	push 0xA3
	push 0x3EC
	push esi
	call edx
	lea ecx,[esp+0xC8]
	call CCtrlComboBox::CREATEPARAM::_ctor_default
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x128],0x13
	mov dword ptr [esp+0xCC],0xFFEEEEEE
	mov dword ptr [esp+0xD0],0xFFA5A198
	mov dword ptr [esp+0xD4],0xFF999999
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x124],0x14
	cmp eax,ebp
	je Block132

 Block130:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block133

 Block131:
	xor edi,edi
	jmp Block127

 Block132:
	xor eax,eax

 Block133:
	mov byte ptr [esp+0x124],0x13
	cmp eax,ebp
	je Block151

 Block134:
	add eax,8
	cmp eax,ebp
	je Block151

 Block135:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block137

 Block136:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block137:
	mov eax,dword ptr [esi+0xE0]
	mov dword ptr [esi+0xE0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block139

 Block138:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlComboBox>::_ReleaseRaw

 Block139:
	mov ecx,dword ptr [esi+0xE0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0xC8]
	push eax
	push 0x10
	push 0x57
	push 0x4D
	push 0xA4
	push 4
	push 0x3ED
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x1268
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xE0]
	push 0xA
	push eax
	mov byte ptr [esp+0x12C],0x15
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x124],0x13
	cmp eax,ebp
	je Block141

 Block140:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block141:
	lea ecx,[esp+0x14]
	push 0x1269
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xE0]
	push 0x64
	push eax
	mov byte ptr [esp+0x12C],0x16
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x124],0x13
	cmp eax,ebp
	je Block143

 Block142:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block143:
	lea edx,[esp+0x14]
	push 0x126A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xE0]
	push 0x1F4
	push eax
	mov byte ptr [esp+0x12C],0x17
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x124],0x13
	cmp eax,ebp
	je Block145

 Block144:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block145:
	lea eax,[esp+0x14]
	push 0x126B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xE0]
	push 0x3E8
	push eax
	mov byte ptr [esp+0x12C],0x18
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x124],0x13
	cmp eax,ebp
	je Block147

 Block146:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block147:
	mov dword ptr [esp+0x68],ebp
	mov dword ptr [esp+0x5C],1
	mov dword ptr [esp+0x60],ebp
	mov dword ptr [esp+0x64],ebp
	lea ecx,[esp+0x14]
	push 0x512
	mov bl,0x19
	push ecx
	mov byte ptr [esp+0x12C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0x128],0x1A
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x124],bl
	cmp eax,ebp
	je Block149

 Block148:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block149:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x124],0x1B
	cmp eax,ebp
	je Block152

 Block150:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block153

 Block151:
	xor edi,edi
	jmp Block137

 Block152:
	xor eax,eax

 Block153:
	mov byte ptr [esp+0x124],bl
	cmp eax,ebp
	je Block163

 Block154:
	add eax,8
	cmp eax,ebp
	je Block163

 Block155:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block157

 Block156:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block157:
	mov eax,dword ptr [esi+0xB0]
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block159

 Block158:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block159:
	mov ecx,dword ptr [esi+0xB0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x5C]
	push edx
	push ebp
	push 0xDD
	push 0x9F
	push 1
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x513
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0x128],0x1C
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x124],bl
	cmp eax,ebp
	je Block161

 Block160:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block161:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x124],0x1D
	cmp eax,ebp
	je Block164

 Block162:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block165

 Block163:
	xor edi,edi
	jmp Block157

 Block164:
	xor eax,eax

 Block165:
	mov byte ptr [esp+0x124],bl
	cmp eax,ebp
	je Block178

 Block166:
	add eax,8
	cmp eax,ebp
	je Block178

 Block167:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block169

 Block168:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block169:
	mov eax,dword ptr [esi+0xB8]
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block171

 Block170:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block171:
	mov ecx,dword ptr [esi+0xB8]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x5C]
	push edx
	push ebp
	push 0xDD
	push 0xD1
	push 2
	push esi
	call eax
	mov eax,dword ptr [esi+0xD0]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0x124],0x13
	cmp eax,ebp
	je Block173

 Block172:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block173:
	mov ecx,dword ptr [esp+0x114]
	cmp ecx,ebp
	je Block175

 Block174:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x114],ebp

 Block175:
	lea ecx,[esp+0x8C]
	mov byte ptr [esp+0x124],0
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x124],0xFFFFFFFF
	cmp eax,ebp
	je Block177

 Block176:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block177:
	mov ecx,dword ptr [esp+0x11C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x114
	ret 4

 Block178:
	xor edi,edi
	jmp Block169
}
}
// CRegisterAuctionEntryDlg::Draw
_SUB_EXCEPTION_HANDLER(17D6E0)
__SUB_CLASS_THIS(0017D6E0, __thiscall, 141792,  CRegisterAuctionEntryDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_17D6E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x94]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x20],esi
	mov eax,dword ptr [esp+0xA4]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x54]
	xor edi,edi
	push edx
	mov dword ptr [esp+0xA0],edi
	call ebp
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea ecx,[esp+0x44]
	push ecx
	mov byte ptr [esp+0xA0],1
	call ebp
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
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
	lea eax,[esp+0x5C]
	push eax
	lea ecx,[esp+0x50]
	push ecx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov ebx,2
	push offset _S_UIITCIMGAUCTIONB__2
	mov byte ptr [esp+0xB4],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xB0],3
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x98]
	mov byte ptr [esp+0xB0],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [esp+0x84],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x9C],6
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x84],ax
	mov eax,dword ptr [esp+0x8C]
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x84]
	push ecx
	call edi

 Block13:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x9C],7
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[esp+0x44]
	push eax
	call edi

 Block17:
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0x9C],8
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x54]
	push edx
	call edi

 Block21:
	lea eax,[esp+0x34]
	push eax
	call ebp
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov edi,dword ptr [esp+0x28]
	mov byte ptr [esp+0x9C],9
	test edi,edi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push 0
	push 0
	push edi
	call ecx
	test eax,eax
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block27:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x9C],8
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov ecx,dword ptr [esi+0xE8]
	push ebx
	push 0
	push 0
	push 1
	push 0
	push 1
	push 0
	push 0x7B
	push 0x16
	add ecx,0xC
	call TSecType<long>::GetData
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x58],esp
	push edi
	call edx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov ecx,dword ptr [esi+0xE8]
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0x28]
	push eax
	call CItemInfo::GetItemName
	lea ecx,[esp+0x64]
	push ecx
	mov byte ptr [esp+0xA0],0xA
	call ebp
	lea edx,[esp+0x64]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0xA0],0xB
	call ebp
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	lea edx,[esp+0x64]
	push edx
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x1C]
	push 0
	push ecx
	mov byte ptr [esp+0xAC],0xC
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x2C]
	push eax
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	mov bl,0xD
	push edx
	mov byte ptr [esp+0xB0],bl
	call _xbstr_t::_ctor_0
	push 0x16
	mov byte ptr [esp+0xB0],0xE
	push 0x5D
	mov ecx,edi
	mov byte ptr [esp+0xB4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x9C],0xC
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	mov ebx,8
	mov byte ptr [esp+0x9C],0xB
	cmp word ptr [esp+0x34],bx
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov byte ptr [esp+0x9C],0xA
	cmp word ptr [esp+0x64],bx
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[esp+0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov dword ptr [esp+0x14],0
	lea ecx,[esp+0x2C]
	push 0x1A15
	push ecx
	mov byte ptr [esp+0xA4],0xF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0x90]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xA8],0x10
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x38]
	add esp,0xC
	mov byte ptr [esp+0x9C],0xF
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	lea ecx,[esp+0x2C]
	push 0x1A10
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x9C],0x11
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
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x9C],0xF
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block52:
	lea edx,[esp+0x18]
	push 4
	push edx
	call get_basic_font
	add esp,8
	lea eax,[esp+0x74]
	push eax
	mov byte ptr [esp+0xA0],0x12
	call ebp
	lea ecx,[esp+0x74]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0xA0],0x13
	call ebp
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	lea ecx,[esp+0x64]
	push ecx
	mov byte ptr [esp+0xA0],0x14
	call ebp
	lea edx,[esp+0x64]
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
	mov edx,dword ptr [esp+0x18]
	mov esi,dword ptr [esp+0x14]
	lea eax,[esp+0x74]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	mov bl,0x15
	push esi
	mov byte ptr [esp+0xB0],bl
	call _xbstr_t::_ctor_0
	push 0x87
	lea eax,[esp+0x78]
	push eax
	push ecx
	mov dword ptr [esp+0x4C],esp
	mov ecx,esp
	push esi
	mov byte ptr [esp+0xBC],0x16
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x34]
	mov byte ptr [esp+0xB8],0x17
	test ecx,ecx
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	mov byte ptr [esp+0xB8],0x16
	call IWzFont::CalcTextWidth
	mov ecx,0xF5
	sub ecx,eax
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0xB4],bl
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x9C],0x14
	cmp word ptr [esp+0x64],si
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea eax,[esp+0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov byte ptr [esp+0x9C],0x13
	cmp word ptr [esp+0x34],si
	jne Block67

 Block65:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov byte ptr [esp+0x9C],0x12
	cmp word ptr [esp+0x74],si
	jne Block71

 Block69:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	lea edx,[esp+0x2C]
	push 0x47
	push edx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x20]
	add esp,8
	cmp esi,eax
	je Block77

 Block73:
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block75:
	test esi,esi
	je Block77

 Block76:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block77:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block79

 Block78:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block79:
	lea ecx,[esp+0x2C]
	push 0x1A15
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x20]
	mov ecx,dword ptr [edx+0x94]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xA8],0x18
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x38]
	add esp,0xC
	mov byte ptr [esp+0x9C],0x12
	test eax,eax
	je Block81

 Block80:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block81:
	lea eax,[esp+0x64]
	push eax
	call ebp
	lea ecx,[esp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block83

 Block82:
	push eax
	call _com_issue_error

 Block83:
	lea edx,[esp+0x74]
	push edx
	mov byte ptr [esp+0xA0],0x19
	call ebp
	lea eax,[esp+0x74]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block85

 Block84:
	push eax
	call _com_issue_error

 Block85:
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0x64]
	push ecx
	lea edx,[esp+0x78]
	push edx
	mov edx,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov bl,0x1A
	push edx
	mov byte ptr [esp+0xB0],bl
	call _xbstr_t::_ctor_0
	push 0xA8
	mov byte ptr [esp+0xB0],0x1B
	push 0xA4
	mov ecx,edi
	mov byte ptr [esp+0xB4],bl
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x9C],0x19
	cmp word ptr [esp+0x74],si
	jne Block88

 Block86:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block89:
	mov byte ptr [esp+0x9C],0x12
	cmp word ptr [esp+0x64],si
	jne Block92

 Block90:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea eax,[esp+0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block93:
	lea ecx,[esp+0x2C]
	push 0x1A15
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x20]
	mov ecx,dword ptr [edx+0x98]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xA8],0x1C
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x38]
	add esp,0xC
	mov byte ptr [esp+0x9C],0x12
	test eax,eax
	je Block95

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block95:
	lea eax,[esp+0x64]
	push eax
	call ebp
	lea ecx,[esp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block97

 Block96:
	push eax
	call _com_issue_error

 Block97:
	lea edx,[esp+0x74]
	push edx
	mov byte ptr [esp+0xA0],0x1D
	call ebp
	lea eax,[esp+0x74]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block99

 Block98:
	push eax
	call _com_issue_error

 Block99:
	mov eax,dword ptr [esp+0x18]
	mov esi,dword ptr [esp+0x14]
	lea ecx,[esp+0x64]
	push ecx
	lea edx,[esp+0x78]
	push edx
	push eax
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov bl,0x1E
	push esi
	mov byte ptr [esp+0xB0],bl
	call _xbstr_t::_ctor_0
	push 0xBC
	mov byte ptr [esp+0xB0],0x1F
	push 0xA4
	mov ecx,edi
	mov byte ptr [esp+0xB4],bl
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [esp+0x9C],0x1D
	cmp word ptr [esp+0x74],bx
	jne Block102

 Block100:
	mov eax,dword ptr [esp+0x7C]
	xor ecx,ecx
	mov word ptr [esp+0x74],cx
	test eax,eax
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea edx,[esp+0x74]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block103:
	mov byte ptr [esp+0x9C],0x12
	cmp word ptr [esp+0x64],bx
	jne Block106

 Block104:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block107:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x9C],0xF
	test eax,eax
	je Block109

 Block108:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block109:
	mov byte ptr [esp+0x9C],0xA
	test esi,esi
	je Block111

 Block110:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block111:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x9C],bl
	test eax,eax
	je Block113

 Block112:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block113:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x9C],0
	test eax,eax
	je Block115

 Block114:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block115:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [esp+0xA0],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0x94]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x8C
	ret 4
}
}
// CRegisterWishEntryDlg::Draw
_SUB_EXCEPTION_HANDLER(17C0A0)
__SUB_CLASS_THIS(0017C0A0, __thiscall, 141693,  CRegisterWishEntryDlg, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_17C0A0
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
	mov ebx,ecx
	mov eax,dword ptr [ebp+8]
	push eax
	call CWnd::Draw
	lea ecx,[ebp-0x28]
	push ecx
	mov ecx,ebx
	call CWnd::GetCanvas
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x74]
	xor edi,edi
	push edx
	mov dword ptr [ebp-4],edi
	call esi
	lea eax,[ebp-0x74]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea ecx,[ebp-0x54]
	push ecx
	mov byte ptr [ebp-4],1
	call esi
	lea edx,[ebp-0x54]
	push offset _D_VTMISSING
	push edx
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
	lea eax,[ebp-0x74]
	push eax
	lea ecx,[ebp-0x54]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x2C],esp
	push 0x1282
	push edx
	mov byte ptr [ebp-4],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],3
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[ebp-0x84]
	mov byte ptr [ebp-4],2
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x2C]
	mov dword ptr [ebp-0x2C],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [ebp-0x84],8
	mov byte ptr [ebp-4],6
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x7C]
	xor ecx,ecx
	mov word ptr [ebp-0x84],cx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[ebp-0x84]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	cmp word ptr [ebp-0x54],8
	mov byte ptr [ebp-4],7
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [ebp-0x54],ax
	mov eax,dword ptr [ebp-0x4C]
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[ebp-0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	cmp word ptr [ebp-0x74],8
	mov byte ptr [ebp-4],8
	jne Block20

 Block18:
	mov eax,dword ptr [ebp-0x6C]
	xor edx,edx
	mov word ptr [ebp-0x74],dx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp-0x74]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea ecx,[ebp-0x24]
	push ecx
	call esi
	lea edx,[ebp-0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov edi,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],9
	test edi,edi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov edx,dword ptr [ebp-0x24]
	mov ecx,dword ptr [edi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x20]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x1C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x18]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp-0x2C]
	push eax
	push 0
	push 0
	push edi
	call ecx
	test eax,eax
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block27:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],8
	jne Block30

 Block28:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov ecx,dword ptr [ebx+0xCC]
	push 2
	push 0
	push 0
	push 1
	push 0
	push 1
	push 0
	push 0x55
	push 0x14
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp-0x14],esp
	push edi
	call eax
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov ecx,dword ptr [ebx+0xCC]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[ebp-0x40]
	push edx
	call CItemInfo::GetItemName
	lea eax,[ebp-0x3C]
	push eax
	mov byte ptr [ebp-4],0xA
	call esi
	lea ecx,[ebp-0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],0xB
	call esi
	lea eax,[ebp-0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	lea ecx,[ebp-0x3C]
	push ecx
	lea edx,[ebp-0x24]
	push edx
	lea eax,[ebp-0x14]
	push 0
	push eax
	mov byte ptr [ebp-4],0xC
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [ebp-0x40]
	push eax
	push ecx
	mov dword ptr [ebp-0x44],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0xD
	call _xbstr_t::_ctor_0
	push 0x1A
	mov byte ptr [ebp-4],0xE
	push 0x5D
	mov ecx,edi
	mov byte ptr [ebp-4],0xD
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0xB
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0xA
	jne Block44

 Block42:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block45:
	cmp dword ptr [ebx+0x94],0
	jle Block69

 Block46:
	lea ecx,[ebp-0x14]
	push 0x47
	push ecx
	call get_basic_font
	add esp,8
	lea edx,[ebp-0x64]
	push edx
	mov byte ptr [ebp-4],0xF
	call esi
	lea eax,[ebp-0x64]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	lea ecx,[ebp-0x24]
	push ecx
	mov byte ptr [ebp-4],0x10
	call esi
	lea edx,[ebp-0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	mov eax,0x20
	mov byte ptr [ebp-4],0x11
	call __chkstk
	lea eax,[ebp-0x3C]
	mov edi,esp
	push eax
	call esi
	lea ecx,[ebp-0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block52

 Block51:
	push eax
	call _com_issue_error

 Block52:
	mov eax,0x20
	mov byte ptr [ebp-4],0x12
	call __chkstk
	mov ecx,dword ptr [ebp-0x14]
	mov esi,esp
	lea edx,[ebp-0x64]
	push edx
	lea eax,[ebp-0x24]
	push eax
	mov eax,dword ptr [ebx+0x94]
	push ecx
	push 0xA
	push edi
	push eax
	call _itoa
	add esp,8
	mov dword ptr [ebp-0x44],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebx+0x94]
	push 0x4E
	lea edx,[ebp-0x3C]
	push edx
	push 0xA
	push esi
	push eax
	mov byte ptr [ebp-4],0x13
	call _itoa
	add esp,8
	mov dword ptr [ebp-0x88],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0x14
	test ecx,ecx
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	mov byte ptr [ebp-4],0x13
	call IWzFont::CalcTextWidth
	mov ecx,0xF3
	sub ecx,eax
	push ecx
	mov ecx,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],0x12
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x3C],si
	jne Block57

 Block55:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x24],si
	jne Block61

 Block59:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x64],si
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [ebp-0x64],ax
	mov eax,dword ptr [ebp-0x5C]
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea ecx,[ebp-0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block68

 Block67:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block68:
	mov edi,dword ptr [ebp-0x28]

 Block69:
	mov eax,dword ptr [ebp-0x40]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block71

 Block70:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block71:
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block73

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block73:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ecx
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
// CRegisterWishEntrySearchDlg::OnButtonClicked
_SUB_EXCEPTION_HANDLER(17A380)
__SUB_CLASS_THIS(0017A380, __thiscall, 141576,  CRegisterWishEntrySearchDlg, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_17A380
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
	lea ecx,[esi+0xC8]
	call CUIToolTip::ClearToolTip
	mov eax,dword ptr [esp+0x1C]
	cmp eax,0x3E9
	jne Block21

 Block1:
	mov ecx,dword ptr [esi+0xB8]
	lea eax,[esp+0x1C]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block9

 Block2:
	cmp byte ptr [eax],0
	je Block7

 Block3:
	push 1
	push 0
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call __strlwr
	mov eax,dword ptr [esp+0x20]
	add esp,4
	test eax,eax
	je Block5

 Block4:
	mov eax,dword ptr [eax-4]
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::ReleaseBuffer
	mov eax,dword ptr [esp+0x1C]

 Block7:
	test eax,eax
	je Block9

 Block8:
	cmp dword ptr [eax-4],2
	jge Block15

 Block9:
	push 0
	push 0
	lea ecx,[esi+0x88]
	push ecx
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x12D2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov esi,dword ptr [esi+0xB8]
	add esp,0x14
	test esi,esi
	je Block11

 Block10:
	lea eax,[esi+4]
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus

 Block13:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block28

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4

 Block15:
	mov eax,dword ptr [esi+0xC0]
	mov eax,dword ptr [eax+0x68]
	lea ecx,[esi+0xC4]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esp+0x20]
	push edx
	push eax
	call CItemInfo::GetItemIDArrayByName
	test eax,eax
	jne Block20

 Block16:
	push eax
	push eax
	lea eax,[esi+0x88]
	push eax
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x12D3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esi+0xB8]
	add esp,0x14
	test eax,eax
	je Block18

 Block17:
	add eax,4
	jmp Block19

 Block18:
	xor eax,eax

 Block19:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus

 Block20:
	mov ecx,esi
	mov dword ptr [esi+0x94],0xFFFFFFFF
	mov dword ptr [esi+0x98],0xFFFFFFFF
	call CRegisterWishEntrySearchDlg::SetScrollBar
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	jmp Block13

 Block21:
	cmp eax,1
	jne Block23

 Block22:
	push eax
	jmp Block27

 Block23:
	cmp eax,2
	jne Block25

 Block24:
	push eax
	jmp Block27

 Block25:
	cmp eax,8
	jne Block28

 Block26:
	push eax

 Block27:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	mov ecx,esi
	call eax

 Block28:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CRegisterWishEntrySearchDlg::OnMouseMove
_SUB_EXCEPTION_HANDLER(177BB0)
__SUB_CLASS_THIS(00177BB0, __thiscall, 141578,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_177BB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebp,dword ptr [esp+0x2C]
	lea eax,[ebp-0xF]
	mov dword ptr [esp+0x10],0
	cmp eax,0xCF
	ja Block17

 Block1:
	mov edi,dword ptr [esp+0x30]
	lea ecx,[edi-0x43]
	cmp ecx,0xAE
	ja Block17

 Block2:
	mov eax,dword ptr [esi+0x9C]
	mov eax,dword ptr [eax+0x38]
	imul eax,0x15
	lea ecx,[eax+edi-0x43]
	mov eax,0x30C30C31
	imul ecx
	mov ecx,dword ptr [esi+0xC0]
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	test ecx,ecx
	je Block5

 Block3:
	cmp eax,dword ptr [ecx-4]
	jae Block5

 Block4:
	mov dword ptr [esi+0x94],eax

 Block5:
	mov eax,dword ptr [esi+0x94]
	cmp eax,0xFFFFFFFF
	je Block17

 Block6:
	mov ecx,dword ptr [esi+0xC0]
	test ecx,ecx
	je Block8

 Block7:
	mov ecx,dword ptr [ecx-4]

 Block8:
	cmp eax,ecx
	jae Block17

 Block9:
	mov edx,dword ptr [esi+0xC0]
	mov eax,dword ptr [edx+eax*4]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0x18]
	push eax
	call CItemInfo::GetItemSlot
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x24],0
	test eax,eax
	je Block11

 Block10:
	mov edx,dword ptr [esi]
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	mov dword ptr [esp+0x28],1
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+edi+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	add eax,ebp
	push eax
	lea ecx,[esi+0xC4]
	call CUIToolTip::ShowItemToolTip
	mov eax,dword ptr [esp+0x18]

 Block11:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block16

 Block12:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block15

 Block13:
	mov ecx,dword ptr [esp+0x18]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x18]
	test ecx,ecx
	je Block15

 Block14:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block15:
	mov dword ptr [esp+0x18],0

 Block16:
	cmp dword ptr [esp+0x10],0
	jne Block18

 Block17:
	lea ecx,[esi+0xC4]
	call CUIToolTip::ClearToolTip

 Block18:
	xor eax,eax
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x18
	ret 8
}
}
// CRegisterWishEntryDlg::Confirm
_SUB_EXCEPTION_HANDLER(17C730)
__SUB(0017C730, __cdecl, 141696,  int32_t, long, void*, long&, long&, unsigned char&, unsigned char&, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_17C730
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	push 0xD0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x24],0
	test eax,eax
	je Block16

 Block1:
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [esp+0x2C]
	push ecx
	push edx
	mov ecx,eax
	call CRegisterWishEntryDlg::_ctor_0
	test eax,eax
	je Block16

 Block2:
	add eax,8
	je Block16

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,esi
	mov dword ptr [esp+0x24],1
	call CDialog::DoModal
	mov ebp,eax
	cmp ebp,1
	jne Block13

 Block6:
	mov ecx,dword ptr [esi+0xB4]
	lea edx,[esp+0x10]
	push edx
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr [ecx],eax
	mov eax,dword ptr [esp+0x14]
	add esp,4
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov ecx,dword ptr [esi+0xBC]
	lea edx,[esp+0x10]
	push edx
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [ecx],eax
	mov eax,dword ptr [esp+0x14]
	add esp,4
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov edx,dword ptr [esp+0x40]
	lea eax,[esp+0x10]
	mov byte ptr [edx],1
	mov ecx,dword ptr [esi+0xC4]
	push eax
	call CCtrlEdit::GetText
	mov edi,dword ptr [esp+0x44]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x28],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x24],1
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	push 1
	push 0
	push 1
	push 0x400
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer

 Block13:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test esi,esi
	je Block15

 Block14:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CRegisterWishEntryDlg>::_ReleaseRaw

 Block15:
	mov eax,ebp
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x18
	ret

 Block16:
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	jmp Block5
}
}
// IsNumber
_SUB_EXCEPTION_HANDLER(1789D0)
__SUB(001789D0, __cdecl, 141860,  int32_t, NakedParam<ZRef<CCtrlEdit>>, long, long, NakedParam<ZRef<CDialog>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1789D0
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
	mov ecx,dword ptr [esp+0x38]
	lea eax,[esp+0x18]
	push eax
	mov dword ptr [esp+0x30],1
	call CCtrlEdit::GetText
	mov ebp,dword ptr [esp+0x18]
	xor ebx,ebx
	mov byte ptr [esp+0x2C],2
	xor ecx,ecx
	lea ebx,[ebx]

 Block1:
	cmp ebp,ebx
	je Block3

 Block2:
	mov eax,dword ptr [ebp-4]
	jmp Block4

 Block3:
	xor eax,eax

 Block4:
	cmp ecx,eax
	jge Block29

 Block5:
	mov al,byte ptr [ecx+ebp]
	cmp al,0x30
	jl Block8

 Block6:
	cmp al,0x39
	jg Block8

 Block7:
	inc ecx
	jmp Block1

 Block8:
	push ebx
	push ebx
	lea ecx,[esp+0x4C]
	push ecx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0x341
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x4C]
	add esp,0x14
	cmp eax,ebx
	je Block10

 Block9:
	add eax,4
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov byte ptr [esp+0x2C],1
	cmp ebp,ebx
	je Block13

 Block12:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x38]
	mov edi,dword ptr [ZImports::_InterlockedDecrement]
	mov esi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x2C],bl
	cmp eax,ebx
	je Block22

 Block14:
	add eax,0xC
	push eax
	call edi
	test eax,eax
	jne Block21

 Block15:
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebx
	je Block17

 Block16:
	add eax,8
	jmp Block18

 Block17:
	xor eax,eax

 Block18:
	add eax,4
	push eax
	call esi
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebx
	je Block21

 Block19:
	lea ecx,[eax+8]
	cmp ecx,ebx
	je Block21

 Block20:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block21:
	mov dword ptr [esp+0x38],ebx

 Block22:
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block90

 Block23:
	add eax,0xC
	push eax
	call edi
	test eax,eax
	jne Block90

 Block24:
	mov eax,dword ptr [esp+0x48]
	cmp eax,ebx
	je Block26

 Block25:
	add eax,8
	jmp Block27

 Block26:
	xor eax,eax

 Block27:
	add eax,4
	push eax
	call esi
	mov eax,dword ptr [esp+0x48]
	cmp eax,ebx
	je Block90

 Block28:
	lea ecx,[eax+8]
	cmp ecx,ebx
	jmp Block88

 Block29:
	push ebp
	call __atoi64
	push ebp
	mov edi,eax
	mov esi,edx
	call _atoi
	add esp,8
	mov dword ptr [esp+0x14],ebx
	mov bl,3
	test esi,esi
	mov esi,dword ptr [esp+0x40]
	mov byte ptr [esp+0x2C],bl
	jne Block59

 Block30:
	test edi,edi
	jl Block59

 Block31:
	test esi,esi
	jl Block33

 Block32:
	cmp eax,esi
	jg Block59

 Block33:
	mov esi,dword ptr [esp+0x3C]
	test esi,esi
	jl Block52

 Block34:
	cmp eax,esi
	jge Block52

 Block35:
	lea eax,[esp+0x1C]
	push 0x342
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x38],5
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x2C],bl
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	mov ebp,dword ptr [esp+0x14]
	push 0
	push 0
	lea edx,[esp+0x4C]
	push edx
	push 0
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [edi],0
	test ebp,ebp
	je Block41

 Block38:
	mov eax,ebp
	lea edx,[eax+1]

 Block39:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block39

 Block40:
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

 Block41:
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x4C]
	add esp,0x14
	test eax,eax
	je Block43

 Block42:
	add eax,4
	jmp Block44

 Block43:
	xor eax,eax

 Block44:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov byte ptr [esp+0x2C],2
	test ebp,ebp
	je Block46

 Block45:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block46:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x2C],1
	test eax,eax
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	cmp dword ptr [esp+0x38],0
	mov byte ptr [esp+0x2C],0
	je Block50

 Block49:
	push 0
	lea ecx,[esp+0x38]
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [esp+0x38],0

 Block50:
	cmp dword ptr [esp+0x48],0
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	je Block90

 Block51:
	push 0
	lea ecx,[esp+0x48]
	call ZRef<CDialog>::_ReleaseRaw
	jmp Block90

 Block52:
	mov byte ptr [esp+0x2C],1
	test ebp,ebp
	je Block54

 Block53:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block54:
	cmp dword ptr [esp+0x38],0
	mov byte ptr [esp+0x2C],0
	je Block56

 Block55:
	push 0
	lea ecx,[esp+0x38]
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [esp+0x38],0

 Block56:
	cmp dword ptr [esp+0x48],0
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	je Block58

 Block57:
	push 0
	lea ecx,[esp+0x48]
	call ZRef<CDialog>::_ReleaseRaw

 Block58:
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

 Block59:
	lea eax,[esp+0x1C]
	push 0x343
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x38],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x2C],bl
	test eax,eax
	je Block61

 Block60:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block61:
	mov ebp,dword ptr [esp+0x14]
	push 0
	push 0
	lea edx,[esp+0x4C]
	push edx
	push 0
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [edi],0
	test ebp,ebp
	je Block65

 Block62:
	mov eax,ebp
	lea edx,[eax+1]
	mov edi,edi

 Block63:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block63

 Block64:
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

 Block65:
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x4C]
	add esp,0x14
	test eax,eax
	je Block67

 Block66:
	add eax,4
	jmp Block68

 Block67:
	xor eax,eax

 Block68:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov byte ptr [esp+0x2C],2
	test ebp,ebp
	je Block70

 Block69:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block70:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x2C],1
	test eax,eax
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block72:
	mov eax,dword ptr [esp+0x38]
	mov edi,dword ptr [ZImports::_InterlockedDecrement]
	mov esi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x2C],0
	test eax,eax
	je Block81

 Block73:
	add eax,0xC
	push eax
	call edi
	test eax,eax
	jne Block80

 Block74:
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block76

 Block75:
	add eax,8
	jmp Block77

 Block76:
	xor eax,eax

 Block77:
	add eax,4
	push eax
	call esi
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block80

 Block78:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block80

 Block79:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block80:
	mov dword ptr [esp+0x38],0

 Block81:
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block90

 Block82:
	add eax,0xC
	push eax
	call edi
	test eax,eax
	jne Block90

 Block83:
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block85

 Block84:
	add eax,8
	jmp Block86

 Block85:
	xor eax,eax

 Block86:
	add eax,4
	push eax
	call esi
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block90

 Block87:
	lea ecx,[eax+8]
	test ecx,ecx

 Block88:
	je Block90

 Block89:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block90:
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
// CRegisterSaleEntryDlg::~CRegisterSaleEntryDlg
_SUB_EXCEPTION_HANDLER(1778F0)
__SUB_CLASS_THIS0(001778F0, __thiscall, 141609,  CRegisterSaleEntryDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1778F0
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
	int 3// TODO: 	mov dword ptr [esi],offset CRegisterSaleEntryDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CRegisterSaleEntryDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CRegisterSaleEntryDlg::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0xB8]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xB0]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xA8]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CDialog::~CDialog
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
// CRegisterSaleEntryDlg::Confirm
_SUB_EXCEPTION_HANDLER(1797A0)
__SUB(001797A0, __cdecl, 141616,  int32_t, long, GW_ItemSlotBase*, void*, long&, long&, unsigned char&, unsigned char&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1797A0
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
	push 0xC8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x28],0
	test eax,eax
	je Block14

 Block1:
	mov ecx,dword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x34]
	push ecx
	mov ecx,dword ptr [esp+0x34]
	push edx
	push ecx
	mov ecx,eax
	call CRegisterSaleEntryDlg::_ctor_0
	test eax,eax
	je Block14

 Block2:
	add eax,8
	je Block14

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x1C],esi
	test esi,esi
	je Block5

 Block4:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,esi
	mov dword ptr [esp+0x28],1
	call CDialog::DoModal
	mov ebp,eax
	cmp ebp,1
	jne Block11

 Block6:
	mov ecx,dword ptr [esi+0xBC]
	lea eax,[esp+0x14]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov ebx,eax
	mov eax,dword ptr [esp+0x18]
	add esp,4
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov ecx,dword ptr [esi+0xB4]
	lea edx,[esp+0x14]
	push edx
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov edi,eax
	mov eax,dword ptr [esp+0x18]
	add esp,4
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax],edi
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [ecx],ebx
	mov byte ptr [edx],7
	mov byte ptr [eax],1

 Block11:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test esi,esi
	je Block13

 Block12:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CRegisterSaleEntryDlg>::_ReleaseRaw

 Block13:
	mov eax,ebp
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret

 Block14:
	xor esi,esi
	mov dword ptr [esp+0x1C],esi
	jmp Block5
}
}
// CRegisterWishEntryDlg::CRegisterWishEntryDlg
_SUB_EXCEPTION_HANDLER(178020)
__SUB_CLASS_THIS(00178020, __thiscall, 141687,  CRegisterWishEntryDlg, void, long, void*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_178020
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp-0x14],esi
	call CDialog::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CRegisterWishEntryDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CRegisterWishEntryDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CRegisterWishEntryDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [ebp-4],edi
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC4],edi
	mov ecx,dword ptr [ebp+8]
	mov eax,dword ptr [ebp+0xC]
	push edi
	push 1
	push edi
	mov dword ptr [esi+0xCC],ecx
	push edi
	mov ecx,esi
	mov byte ptr [ebp-4],5
	mov dword ptr [esi+0xC8],eax
	call CDialog::CreateDlg_1
	mov ecx,dword ptr [esi+0xCC]
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	je Block3

 Block1:
	cmp eax,3
	je Block3

 Block2:
	cmp eax,4
	jne Block5

 Block3:
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xCF
	je Block5

 Block4:
	cmp eax,0xE9
	jne Block6

 Block5:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push 1
	call _itoa
	mov ecx,dword ptr [esi+0xBC]
	add esp,0xC
	push eax
	call CCtrlEdit::SetText
	mov eax,dword ptr [esi+0xBC]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push edi
	call eax

 Block6:
	mov eax,dword ptr [esi+0xC8]
	mov ecx,dword ptr [eax+0x345C]
	mov dword ptr [esi+0x90],ecx
	mov edx,dword ptr [eax+0x3460]
	mov dword ptr [esi+0x98],edx
	mov eax,dword ptr [eax+0x3464]
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esi+0x94],edi
	mov eax,esi
	lea esp,[ebp-0x20]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	mov ecx,dword ptr [ebp-0x10]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret 8
}
}
// CRegisterAuctionEntryDlg::CRegisterAuctionEntryDlg
_SUB_EXCEPTION_HANDLER(178540)
__SUB_CLASS_THIS(00178540, __thiscall, 141786,  CRegisterAuctionEntryDlg, void, long, GW_ItemSlotBase*, void*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_178540
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
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
	mov dword ptr [ebp-0x14],esi
	call CDialog::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CRegisterAuctionEntryDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CRegisterAuctionEntryDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CRegisterAuctionEntryDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [ebp-4],edi
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esi+0xD0],edi
	mov dword ptr [esi+0xD8],edi
	mov dword ptr [esi+0xE0],edi
	mov eax,dword ptr [ebp+0x10]
	mov ebx,dword ptr [ebp+0xC]
	push edi
	push 1
	push edi
	push edi
	mov ecx,esi
	mov byte ptr [ebp-4],7
	mov dword ptr [esi+0xE4],eax
	mov dword ptr [esi+0xE8],ebx
	call CDialog::CreateDlg_1
	push ebx
	call is_treat_singly_1
	add esp,4
	test eax,eax
	je Block2

 Block1:
	lea eax,[edi+0x20]
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push 1
	call _itoa
	mov ecx,dword ptr [esi+0xD8]
	add esp,0xC
	push eax
	call CCtrlEdit::SetText
	mov eax,dword ptr [esi+0xD8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push edi
	call eax

 Block2:
	mov eax,dword ptr [esi+0xE4]
	mov ecx,dword ptr [eax+0x345C]
	mov dword ptr [esi+0x90],ecx
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x98],edi
	mov edx,dword ptr [eax+0x3460]
	mov dword ptr [esi+0x9C],edx
	mov ecx,dword ptr [eax+0x3464]
	mov dword ptr [esi+0xA0],ecx
	mov edx,dword ptr [eax+0x346C]
	mov dword ptr [esi+0xA8],edx
	mov eax,dword ptr [eax+0x3468]
	mov dword ptr [esi+0xA4],eax
	mov eax,esi
	lea esp,[ebp-0x24]
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
// CRegisterAuctionEntryDlg::SetRet
_SUB_EXCEPTION_HANDLER(17E4D0)
__SUB_CLASS_THIS(0017E4D0, __thiscall, 141789,  CRegisterAuctionEntryDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_17E4D0
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
	mov ebx,1
	cmp dword ptr [esp+0x28],ebx
	jne Block19

 Block1:
	mov eax,dword ptr [esi+0x8C]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block3

 Block2:
	add eax,0xC
	push eax
	call edi

 Block3:
	mov ecx,dword ptr [esi+0xE8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	mov dword ptr [esp+0x28],0
	call edx
	push eax
	mov eax,dword ptr [esi+0xD8]
	push ebx
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block5

 Block4:
	add eax,0xC
	push eax
	call edi

 Block5:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call IsNumber
	add esp,0x18
	test eax,eax
	je Block22

 Block6:
	mov eax,dword ptr [esi+0x8C]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block8

 Block7:
	add eax,0xC
	push eax
	call edi

 Block8:
	mov eax,dword ptr [esi+0xC0]
	push 0x98967F
	push ebx
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block10

 Block9:
	add eax,0xC
	push eax
	call edi

 Block10:
	call IsNumber
	add esp,0x18
	test eax,eax
	je Block22

 Block11:
	mov eax,dword ptr [esi+0x8C]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block13

 Block12:
	add eax,0xC
	push eax
	call edi

 Block13:
	mov eax,dword ptr [esi+0xC8]
	push 0x98967F
	push ebx
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block15

 Block14:
	add eax,0xC
	push eax
	call edi

 Block15:
	call IsNumber
	add esp,0x18
	test eax,eax
	je Block22

 Block16:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0xBD]
	push ecx
	add eax,0xB5
	push eax
	mov dword ptr [esp+0x28],ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,dword ptr [esi+0x90]
	lea ecx,[esp+0x10]
	setl bl
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZRef<CharacterData>::~ZRef<CharacterData>
	test bl,bl
	je Block18

 Block17:
	push 0
	push 0
	add esi,0x88
	push esi
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
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4

 Block18:
	mov ebx,1

 Block19:
	cmp dword ptr [esi+0x84],0
	jne Block22

 Block20:
	cmp dword ptr [esi+0x14],0
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esi+0x80],eax
	mov dword ptr [esi+0x84],ebx
	je Block22

 Block21:
	mov ecx,esi
	call CWnd::Destroy

 Block22:
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
// CSelectLoadWishSaleListDlg::OnChildNotify
__SUB_CLASS_THIS(001775B0, __thiscall, 141713,  CSelectLoadWishSaleListDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	cmp edi,0x3E8
	jne Block4

 Block1:
	cmp ebx,0x12C
	jb Block4

 Block2:
	cmp ebx,0x130
	ja Block4

 Block3:
	lea ecx,[esi+0xAC]
	call CUIToolTip::ClearToolTip
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block4:
	cmp ebx,0x64
	jne Block6

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push edi
	mov ecx,esi
	call edx

 Block6:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CSelectLoadWishSaleListDlg::SetScrollBar
__SUB_CLASS_THIS0(001777F0, __thiscall, 141710,  CSelectLoadWishSaleListDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xA0]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	mov ecx,dword ptr [esi+0xA0]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x28]
	push 0
	push 0xA8
	push 0x47
	push 0xE5
	push 3
	push 1
	push 0x3E8
	push esi
	call edx
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [eax+0x34],0x9A
	mov eax,dword ptr [esi+0x90]
	add eax,0x50
	mov eax,dword ptr [eax]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	imul eax,0x15
	sub eax,0x95
	mov ecx,eax
	test ecx,ecx
	jg Block4

 Block3:
	mov ecx,dword ptr [esi+0xA0]
	push 0
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret

 Block4:
	mov eax,0x30C30C31
	imul ecx
	sar edx,2
	mov ecx,edx
	shr ecx,0x1F
	lea edx,[edx+ecx+2]
	mov ecx,dword ptr [esi+0xA0]
	push edx
	call CCtrlScrollBar::SetScrollRange
	pop esi
	ret
}
}
// CRegisterWishEntrySearchDlg::OnMouseButton
_SUB_EXCEPTION_HANDLER(17FCB0)
__SUB_CLASS_THIS(0017FCB0, __thiscall, 141577,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_17FCB0
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
	mov esi,ecx
	lea edi,[esi+0xC4]
	mov ecx,edi
	call CUIToolTip::ClearToolTip
	mov eax,dword ptr [esp+0x2C]
	cmp eax,0x202
	jne Block4

 Block1:
	mov eax,dword ptr [esi+0x94]
	push 0
	lea ecx,[esi-4]
	mov dword ptr [esi+0x90],eax
	call CWnd::InvalidateRect

 Block2:
	mov ecx,edi
	call CUIToolTip::ClearToolTip

 Block3:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 0x10

 Block4:
	cmp eax,0x203
	jne Block2

 Block5:
	mov eax,dword ptr [esi+0x94]
	xor edi,edi
	cmp eax,edi
	jl Block3

 Block6:
	mov dword ptr [esp+0x2C],edi
	mov ecx,dword ptr [esi+0xC0]
	lea eax,[ecx+eax*4]
	lea edx,[esp+0x2C]
	push edx
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x34]
	push edx
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esi+0x8C]
	lea edx,[esp+0x24]
	push edx
	mov edx,dword ptr [eax]
	push ecx
	push edx
	mov dword ptr [esp+0x40],edi
	call CRegisterWishEntryDlg::Confirm
	add esp,0x1C
	cmp eax,1
	jne Block8

 Block7:
	push ecx
	mov ecx,esp
	lea eax,[esp+0x30]
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [esi+0xC0]
	lea eax,[edx+ecx*4]
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	push edx
	mov edx,dword ptr [esp+0x20]
	push ecx
	mov ecx,dword ptr [esi+0x8C]
	push edx
	push eax
	call CITC::OnRegisterWishEntry
	mov edx,dword ptr [esi-4]
	mov eax,dword ptr [edx+0x34]
	lea ecx,[esi-4]
	push 1
	call eax

 Block8:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,edi
	je Block3

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 0x10
}
}
// CRegisterSaleEntryDlg::SetRet
_SUB_EXCEPTION_HANDLER(1798F0)
__SUB_CLASS_THIS(001798F0, __thiscall, 141610,  CRegisterSaleEntryDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1798F0
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
	mov ebx,1
	cmp dword ptr [esp+0x28],ebx
	jne Block14

 Block1:
	mov eax,dword ptr [esi+0x8C]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block3

 Block2:
	add eax,0xC
	push eax
	call edi

 Block3:
	mov ecx,dword ptr [esi+0xC4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	mov dword ptr [esp+0x28],0
	call edx
	push eax
	mov eax,dword ptr [esi+0xBC]
	push ebx
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block5

 Block4:
	add eax,0xC
	push eax
	call edi

 Block5:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call IsNumber
	add esp,0x18
	test eax,eax
	je Block17

 Block6:
	mov eax,dword ptr [esi+0x8C]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block8

 Block7:
	add eax,0xC
	push eax
	call edi

 Block8:
	mov eax,dword ptr [esi+0xB4]
	push 0x7FFFFFFF
	push ebx
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block10

 Block9:
	add eax,0xC
	push eax
	call edi

 Block10:
	call IsNumber
	add esp,0x18
	test eax,eax
	je Block17

 Block11:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0xBD]
	push ecx
	add eax,0xB5
	push eax
	mov dword ptr [esp+0x28],ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,dword ptr [esi+0x90]
	lea ecx,[esp+0x10]
	setl bl
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZRef<CharacterData>::~ZRef<CharacterData>
	test bl,bl
	je Block13

 Block12:
	push 0
	push 0
	add esi,0x88
	push esi
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
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4

 Block13:
	mov ebx,1

 Block14:
	cmp dword ptr [esi+0x84],0
	jne Block17

 Block15:
	cmp dword ptr [esi+0x14],0
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esi+0x80],eax
	mov dword ptr [esi+0x84],ebx
	je Block17

 Block16:
	mov ecx,esi
	call CWnd::Destroy

 Block17:
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
// CRegisterWishEntryDlg::SetRet
__SUB_CLASS_THIS(0017C8D0, __thiscall, 141690,  CRegisterWishEntryDlg, void, long) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov esi,ecx
	cmp ebx,1
	jne Block11

 Block1:
	mov eax,dword ptr [esi+0x8C]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block3

 Block2:
	add eax,0xC
	push eax
	call edi

 Block3:
	mov eax,dword ptr [esi+0xCC]
	push eax
	call is_treat_singly_0
	add esp,4
	neg eax
	sbb eax,eax
	and eax,0xFFFFFF9D
	add eax,0x64
	push eax
	mov eax,dword ptr [esi+0xBC]
	push 1
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block5

 Block4:
	add eax,0xC
	push eax
	call edi

 Block5:
	call IsNumber
	add esp,0x18
	test eax,eax
	je Block14

 Block6:
	mov eax,dword ptr [esi+0x8C]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block8

 Block7:
	add eax,0xC
	push eax
	call edi

 Block8:
	mov eax,dword ptr [esi+0xB4]
	push 0x7FFFFFFF
	push 1
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block10

 Block9:
	add eax,0xC
	push eax
	call edi

 Block10:
	call IsNumber
	add esp,0x18
	test eax,eax
	je Block14

 Block11:
	cmp dword ptr [esi+0x84],0
	jne Block14

 Block12:
	cmp dword ptr [esi+0x14],0
	mov dword ptr [esi+0x80],ebx
	mov dword ptr [esi+0x84],1
	je Block14

 Block13:
	mov ecx,esi
	call CWnd::Destroy

 Block14:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CRegisterWishEntryDlg::OnChildNotify
__SUB_CLASS_THIS(00177600, __thiscall, 141692,  CRegisterWishEntryDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+8],0x64
	jne Block2

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [eax+0x20]
	push edx
	call eax

 Block2:
	ret 0xC
}
}
// CRegisterWishEntrySearchDlg::~CRegisterWishEntrySearchDlg
_SUB_EXCEPTION_HANDLER(177AA0)
__SUB_CLASS_THIS0(00177AA0, __thiscall, 141571,  CRegisterWishEntrySearchDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_177AA0
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
	int 3// TODO: 	mov dword ptr [esi],offset CRegisterWishEntrySearchDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CRegisterWishEntrySearchDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CRegisterWishEntrySearchDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xC8]
	mov dword ptr [esp+0x1C],6
	call CUIToolTip::~CUIToolTip
	lea ecx,[esi+0xC4]
	mov byte ptr [esp+0x1C],5
	call ZArray<long>::RemoveAll
	lea edi,[esi+0xBC]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xB4]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xAC]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xA4]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CDialog::~CDialog
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
// CSelectLoadWishSaleListDlg::OnMouseButton
__SUB_CLASS_THIS(00178420, __thiscall, 141714,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push edi
	lea edi,[esi+0xA8]
	mov ecx,edi
	call CUIToolTip::ClearToolTip
	mov eax,dword ptr [esp+0xC]
	cmp eax,0x202
	jne Block4

 Block1:
	mov eax,dword ptr [esi+0x94]
	push 0
	lea ecx,[esi-4]
	mov dword ptr [esi+0x90],eax
	call CWnd::InvalidateRect

 Block2:
	mov ecx,edi
	call CUIToolTip::ClearToolTip

 Block3:
	pop edi
	pop esi
	ret 0x10

 Block4:
	cmp eax,0x203
	jne Block2

 Block5:
	mov eax,dword ptr [esi+0x90]
	test eax,eax
	jl Block3

 Block6:
	mov edx,dword ptr [esi+0x8C]
	mov edx,dword ptr [edx+0x50]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [ecx+0x2054]
	lea eax,[edx+eax*8]
	mov eax,dword ptr [eax+4]
	push ecx
	add eax,0x34
	push eax
	call lstrcmpiA
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x20],esp
	test eax,eax
	jne Block8

 Block7:
	mov eax,esp
	push 0x1298
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	pop edi
	pop esi
	ret 0x10

 Block8:
	mov ecx,esp
	push 0x12D4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block3

 Block9:
	mov ecx,dword ptr [esi+0x8C]
	mov edx,dword ptr [esi+0x90]
	mov eax,dword ptr [ecx+0x50]
	lea edx,[eax+edx*8]
	push edx
	call CITC::OnBuyWish
	mov eax,dword ptr [esi-4]
	mov edx,dword ptr [eax+0x34]
	lea ecx,[esi-4]
	push 1
	call edx
	pop edi
	pop esi
	ret 0x10
}
}
// CRegisterSaleEntryDlg::Draw
_SUB_EXCEPTION_HANDLER(178EB0)
__SUB_CLASS_THIS(00178EB0, __thiscall, 141613,  CRegisterSaleEntryDlg, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_178EB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x84
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
	mov dword ptr [ebp-0x44],edi
	mov eax,dword ptr [ebp+8]
	push eax
	call CWnd::Draw
	lea ecx,[ebp-0x40]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x70]
	xor esi,esi
	push edx
	mov dword ptr [ebp-4],esi
	call ebx
	lea eax,[ebp-0x70]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea ecx,[ebp-0x80]
	push ecx
	mov byte ptr [ebp-4],1
	call ebx
	lea edx,[ebp-0x80]
	push offset _D_VTMISSING
	push edx
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
	lea eax,[ebp-0x70]
	push eax
	lea ecx,[ebp-0x80]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x1280
	push edx
	mov byte ptr [ebp-4],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],3
	cmp dword ptr [_D_G_RM],esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[ebp-0x90]
	mov byte ptr [ebp-4],2
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x48]
	mov dword ptr [ebp-0x48],esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
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
	mov byte ptr [ebp-4],6
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x88]
	xor ecx,ecx
	mov word ptr [ebp-0x90],cx
	test eax,eax
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
	cmp word ptr [ebp-0x80],8
	mov byte ptr [ebp-4],7
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [ebp-0x80],ax
	mov eax,dword ptr [ebp-0x78]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[ebp-0x80]
	push ecx
	call esi

 Block17:
	cmp word ptr [ebp-0x70],8
	mov byte ptr [ebp-4],8
	jne Block20

 Block18:
	mov eax,dword ptr [ebp-0x68]
	xor edx,edx
	mov word ptr [ebp-0x70],dx
	test eax,eax
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
	lea ecx,[ebp-0x28]
	push ecx
	call ebx
	lea edx,[ebp-0x28]
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
	mov esi,dword ptr [ebp-0x40]
	mov byte ptr [ebp-4],9
	test esi,esi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov edx,dword ptr [ebp-0x28]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x24]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x20]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x1C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp-0x48]
	push eax
	push 0
	push 0
	push esi
	call ecx
	test eax,eax
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	cmp word ptr [ebp-0x28],8
	mov byte ptr [ebp-4],8
	jne Block30

 Block28:
	mov eax,dword ptr [ebp-0x20]
	xor edx,edx
	mov word ptr [ebp-0x28],dx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[ebp-0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov ecx,dword ptr [edi+0xC4]
	push 2
	push 0
	push 0
	push 1
	push 0
	push 1
	push 0
	push 0x55
	push 0x14
	add ecx,0xC
	call TSecType<long>::GetData
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [ebp-0x14],esp
	push esi
	call edx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov ecx,dword ptr [edi+0xC4]
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[ebp-0x5C]
	push eax
	call CItemInfo::GetItemName
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],0xA
	call ebx
	lea edx,[ebp-0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea eax,[ebp-0x28]
	push eax
	mov byte ptr [ebp-4],0xB
	call ebx
	lea ecx,[ebp-0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	lea edx,[ebp-0x3C]
	push edx
	lea eax,[ebp-0x28]
	push eax
	lea ecx,[ebp-0x2C]
	push 0
	push ecx
	mov byte ptr [ebp-4],0xC
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [ebp-0x5C]
	push eax
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	mov bl,0xD
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	push 0x1A
	mov byte ptr [ebp-4],0xE
	push 0x5D
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	mov ebx,8
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x28],bx
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[ebp-0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x3C],bx
	jne Block44

 Block42:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov dword ptr [ebp-0x2C],0
	lea ecx,[ebp-0x14]
	push 0x1A15
	push ecx
	mov byte ptr [ebp-4],0xF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [edi+0x90]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp-0x2C]
	push eax
	mov byte ptr [ebp-4],0x10
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x14]
	add esp,0xC
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	lea ecx,[ebp-0x18]
	push 4
	push ecx
	call get_basic_font
	add esp,8
	lea edx,[ebp-0x14]
	push 0x1A10
	push edx
	mov byte ptr [ebp-4],0x11
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x12
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
	lea ecx,[ebp-0x2C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block52:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x58]
	push eax
	call edi
	lea ecx,[ebp-0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	lea edx,[ebp-0x28]
	push edx
	mov byte ptr [ebp-4],0x13
	call edi
	lea eax,[ebp-0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],0x14
	call edi
	lea edx,[ebp-0x3C]
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
	mov edx,dword ptr [ebp-0x18]
	mov edi,dword ptr [ebp-0x2C]
	lea eax,[ebp-0x58]
	push eax
	lea ecx,[ebp-0x28]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push edi
	mov byte ptr [ebp-4],0x15
	call _xbstr_t::_ctor_0
	push 0x4E
	lea eax,[ebp-0x3C]
	push eax
	push ecx
	mov dword ptr [ebp-0x60],esp
	mov ecx,esp
	mov bl,0x16
	push edi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0x17
	test ecx,ecx
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	mov ecx,0xF5
	sub ecx,eax
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x15
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [ebp-4],0x14
	cmp word ptr [ebp-0x3C],si
	jne Block63

 Block61:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x28],si
	jne Block67

 Block65:
	mov eax,dword ptr [ebp-0x20]
	xor ecx,ecx
	mov word ptr [ebp-0x28],cx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea edx,[ebp-0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x58],si
	jne Block71

 Block69:
	xor eax,eax
	mov word ptr [ebp-0x58],ax
	mov eax,dword ptr [ebp-0x50]
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea ecx,[ebp-0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov edx,dword ptr [ebp-0x44]
	cmp dword ptr [edx+0x94],0
	jle Block100

 Block73:
	lea eax,[ebp-0x14]
	push 0x47
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp-0x18]
	add esp,8
	cmp esi,eax
	je Block78

 Block74:
	mov dword ptr [ebp-0x18],eax
	test eax,eax
	je Block76

 Block75:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block76:
	test esi,esi
	je Block78

 Block77:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block78:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block80

 Block79:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block80:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x28]
	push ecx
	call esi
	lea edx,[ebp-0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block82

 Block81:
	push eax
	call _com_issue_error

 Block82:
	lea eax,[ebp-0x3C]
	push eax
	mov byte ptr [ebp-4],0x18
	call esi
	lea ecx,[ebp-0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	mov eax,0x20
	mov byte ptr [ebp-4],0x19
	call __chkstk
	lea edx,[ebp-0x58]
	mov edi,esp
	push edx
	call esi
	lea eax,[ebp-0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	mov eax,0x20
	mov byte ptr [ebp-4],0x1A
	call __chkstk
	mov eax,dword ptr [ebp-0x18]
	mov esi,esp
	lea ecx,[ebp-0x28]
	push ecx
	mov ecx,dword ptr [ebp-0x44]
	lea edx,[ebp-0x3C]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x94]
	push 0xA
	push edi
	push eax
	call _itoa
	add esp,8
	mov dword ptr [ebp-0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp-0x44]
	mov eax,dword ptr [eax+0x94]
	push 0x60
	lea edx,[ebp-0x58]
	push edx
	push 0xA
	push esi
	mov bl,0x1B
	push eax
	mov byte ptr [ebp-4],bl
	call _itoa
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0x1C
	test ecx,ecx
	jne Block88

 Block87:
	push 0x80004003
	call _com_issue_error

 Block88:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	mov ecx,0xF3
	sub ecx,eax
	push ecx
	mov ecx,dword ptr [ebp-0x40]
	mov byte ptr [ebp-4],0x1A
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp-0x58],si
	jne Block91

 Block89:
	mov eax,dword ptr [ebp-0x50]
	xor edx,edx
	mov word ptr [ebp-0x58],dx
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea eax,[ebp-0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block92:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp-0x3C],si
	jne Block95

 Block93:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea edx,[ebp-0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x28],si
	jne Block99

 Block97:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea ecx,[ebp-0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block100:
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block102

 Block101:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block102:
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block104

 Block103:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block104:
	mov eax,dword ptr [ebp-0x5C]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block106

 Block105:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block106:
	mov eax,dword ptr [ebp-0x48]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block108

 Block107:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block108:
	mov eax,dword ptr [ebp-0x40]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0xA0]
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
// CheckNumber
_SUB_EXCEPTION_HANDLER(1787D0)
__SUB(001787D0, __cdecl, 141858,  int32_t, NakedParam<ZRef<CCtrlEdit>>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1787D0
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
	mov ecx,dword ptr [esp+0x30]
	lea eax,[esp+0x18]
	xor ebx,ebx
	push eax
	mov dword ptr [esp+0x28],ebx
	call CCtrlEdit::GetText
	lea ecx,[esp+0x18]
	xor esi,esi
	call ZXString<char>::GetLength
	cmp eax,ebx
	mov edi,dword ptr [esp+0x18]
	jle Block5

 Block1:
	mov edi,edi

 Block2:
	mov cl,byte ptr [esi+edi]
	cmp cl,0x30
	jl Block15

 Block3:
	cmp cl,0x39
	jg Block15

 Block4:
	inc esi
	cmp esi,eax
	jl Block2

 Block5:
	push edi
	call __atoi64
	push edi
	mov ebp,eax
	mov esi,edx
	call _atoi
	add esp,8
	cmp esi,ebx
	jne Block26

 Block6:
	cmp ebp,ebx
	jl Block26

 Block7:
	mov ecx,dword ptr [esp+0x38]
	cmp ecx,ebx
	jl Block9

 Block8:
	cmp eax,ecx
	jg Block26

 Block9:
	mov ecx,dword ptr [esp+0x34]
	cmp ecx,ebx
	jl Block21

 Block10:
	cmp eax,ecx
	jg Block21

 Block11:
	mov byte ptr [esp+0x24],bl
	cmp edi,ebx
	je Block13

 Block12:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp dword ptr [esp+0x30],ebx
	je Block36

 Block14:
	push ebx
	lea ecx,[esp+0x30]
	call ZRef<CCtrlEdit>::_ReleaseRaw
	jmp Block36

 Block15:
	mov byte ptr [esp+0x24],bl
	cmp edi,ebx
	je Block17

 Block16:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,ebx
	je Block36

 Block18:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block36

 Block19:
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebx
	je Block32

 Block20:
	add eax,8
	jmp Block33

 Block21:
	mov byte ptr [esp+0x24],bl
	cmp edi,ebx
	je Block23

 Block22:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp dword ptr [esp+0x30],ebx
	je Block25

 Block24:
	push ebx
	lea ecx,[esp+0x30]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block25:
	mov eax,1
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret

 Block26:
	mov byte ptr [esp+0x24],bl
	cmp edi,ebx
	je Block28

 Block27:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,ebx
	je Block36

 Block29:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block36

 Block30:
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebx
	je Block32

 Block31:
	add eax,8
	jmp Block33

 Block32:
	xor eax,eax

 Block33:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebx
	je Block36

 Block34:
	lea ecx,[eax+8]
	cmp ecx,ebx
	je Block36

 Block35:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block36:
	xor eax,eax
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret
}
}
// CSelectLoadWishSaleListDlg::OnCreate
_SUB_EXCEPTION_HANDLER(17A570)
__SUB_CLASS_THIS(0017A570, __thiscall, 141711,  CSelectLoadWishSaleListDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_17A570
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
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	lea eax,[esp+0x18]
	push 0x3D0
	push eax
	mov dword ptr [esp+0x9C],esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	lea ecx,[esp+0x18]
	push ecx
	push eax
	mov byte ptr [esp+0xA0],1
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x94],0
	cmp eax,esi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push edx
	mov dword ptr [ebp+0x24],0x10A
	mov dword ptr [ebp+0x28],0x10C
	call edi
	lea eax,[esp+0x2C]
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
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x98],2
	call edi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x94],3
	cmp ecx,esi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x2C]
	push eax
	mov eax,dword ptr [ebp+0x28]
	lea edx,[esp+0x20]
	push edx
	mov edx,dword ptr [ebp+0x24]
	push eax
	push edx
	call IWzCanvas::Create
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x94],2
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
	call ebx

 Block12:
	mov byte ptr [esp+0x94],0
	cmp word ptr [esp+0x2C],si
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea eax,[esp+0x2C]
	push eax
	call ebx

 Block16:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x70]
	push 0
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	push 0
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block24:
	lea eax,[esp+0x5C]
	push eax
	call edi
	lea ecx,[esp+0x5C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	lea edx,[esp+0x4C]
	push edx
	mov byte ptr [esp+0x98],4
	call edi
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0x98],5
	call edi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x98],6
	call edi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	lea edx,[esp+0x2C]
	mov bl,7
	push edx
	mov byte ptr [esp+0x98],bl
	call edi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x98],8
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x94],9
	test ecx,ecx
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x50]
	push eax
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x28]
	push eax
	mov eax,dword ptr [esp+0x24]
	lea edx,[esp+0x3C]
	push edx
	push eax
	lea edx,[esp+0x94]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x7C],8
	jne Block45

 Block37:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	test eax,eax
	je Block39

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block39:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block40:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x94],8
	test eax,eax
	je Block42

 Block41:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block42:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x94],bl
	jne Block46

 Block43:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block47

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block45:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x7C]
	push ecx
	call esi
	jmp Block40

 Block46:
	lea edx,[esp+0x2C]
	push edx
	call esi

 Block47:
	mov ebx,8
	mov byte ptr [esp+0x94],6
	cmp word ptr [esp+0x1C],bx
	jne Block50

 Block48:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea ecx,[esp+0x1C]
	push ecx
	call esi

 Block51:
	mov byte ptr [esp+0x94],5
	cmp word ptr [esp+0x3C],bx
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea eax,[esp+0x3C]
	push eax
	call esi

 Block55:
	mov byte ptr [esp+0x94],4
	cmp word ptr [esp+0x4C],bx
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[esp+0x4C]
	push edx
	call esi

 Block59:
	mov byte ptr [esp+0x94],0
	cmp word ptr [esp+0x5C],bx
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[esp+0x5C]
	push ecx
	call esi

 Block63:
	lea edx,[esp+0x4C]
	push edx
	call edi
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x98],0xA
	call edi
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	lea eax,[esp+0x1C]
	mov bl,0xB
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x98],bl
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x94],0xC
	test ecx,ecx
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x94],0xD
	test ecx,ecx
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea eax,[esp+0x4C]
	push eax
	mov eax,dword ptr [ebp+0x28]
	lea edx,[esp+0x60]
	push edx
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	mov eax,dword ptr [ebp+0x24]
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x94],0xC
	test eax,eax
	je Block73

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block73:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block75:
	mov edi,8
	mov byte ptr [esp+0x94],0xA
	cmp word ptr [esp+0x5C],di
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[esp+0x5C]
	push ecx
	call esi

 Block79:
	mov byte ptr [esp+0x94],0
	cmp word ptr [esp+0x4C],di
	jne Block82

 Block80:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea eax,[esp+0x4C]
	push eax
	call esi

 Block83:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x94],0xE
	test eax,eax
	je Block85

 Block84:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block86

 Block85:
	xor eax,eax

 Block86:
	mov byte ptr [esp+0x94],0
	test eax,eax
	je Block96

 Block87:
	add eax,8
	je Block96

 Block88:
	lea esi,[eax-8]
	xor edi,edi
	cmp esi,edi
	je Block90

 Block89:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block90:
	mov eax,dword ptr [ebp+0xA0]
	mov dword ptr [ebp+0xA0],esi
	mov dword ptr [esp+0x20],eax
	cmp eax,edi
	je Block92

 Block91:
	push edi
	lea ecx,[esp+0x20]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block92:
	mov ecx,ebp
	call CSelectLoadWishSaleListDlg::SetScrollBar
	mov dword ptr [esp+0x78],edi
	mov dword ptr [esp+0x6C],1
	mov dword ptr [esp+0x70],edi
	mov dword ptr [esp+0x74],edi
	lea edx,[esp+0x1C]
	push 0x1A71
	mov bl,0xF
	push edx
	mov byte ptr [esp+0x9C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x7C]
	mov byte ptr [esp+0x98],0x10
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x94],bl
	cmp eax,edi
	je Block94

 Block93:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block94:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x94],0x11
	cmp eax,edi
	je Block97

 Block95:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block98

 Block96:
	xor esi,esi
	xor edi,edi
	jmp Block90

 Block97:
	xor eax,eax

 Block98:
	mov byte ptr [esp+0x94],bl
	cmp eax,edi
	je Block109

 Block99:
	add eax,8
	cmp eax,edi
	je Block109

 Block100:
	lea esi,[eax-8]
	cmp esi,edi
	je Block102

 Block101:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block102:
	mov eax,dword ptr [ebp+0xA8]
	mov dword ptr [ebp+0xA8],esi
	mov dword ptr [esp+0x20],eax
	cmp eax,edi
	je Block104

 Block103:
	push edi
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block104:
	mov ecx,dword ptr [ebp+0xA8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x6C]
	push eax
	push edi
	push 0xC
	push 0xF3
	push 2
	push ebp
	call edx
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x94],0
	cmp eax,edi
	je Block106

 Block105:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block106:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp eax,edi
	je Block108

 Block107:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block108:
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret 4

 Block109:
	xor esi,esi
	jmp Block102
}
}
// CRegisterSaleEntryDlg::OnCreate
_SUB_EXCEPTION_HANDLER(17E6E0)
__SUB_CLASS_THIS(0017E6E0, __thiscall, 141611,  CRegisterSaleEntryDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_17E6E0
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
	mov esi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x24],ebp
	lea eax,[esp+0x28]
	push 0x3D0
	push eax
	mov dword ptr [esp+0xD8],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea ecx,[esp+0x28]
	push ecx
	push eax
	mov byte ptr [esp+0xDC],1
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0xD0],0
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push edx
	mov dword ptr [esi+0x24],0x10A
	mov dword ptr [esi+0x28],0xAF
	call ebx
	lea eax,[esp+0x2C]
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
	lea ecx,[esp+0x14]
	push ecx
	mov byte ptr [esp+0xD4],2
	call ebx
	lea edx,[esp+0x14]
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
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0xD0],3
	cmp ecx,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x2C]
	push eax
	mov eax,dword ptr [esi+0x28]
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [esi+0x24]
	push eax
	push edx
	call IWzCanvas::Create
	mov edi,8
	mov byte ptr [esp+0xD0],2
	cmp word ptr [esp+0x14],di
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov byte ptr [esp+0xD0],0
	cmp word ptr [esp+0x2C],di
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebp
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x70]
	push ebp
	push eax
	mov edi,eax
	call edx
	cmp eax,ebp
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block20:
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	push ebp
	push eax
	mov edi,eax
	call edx
	cmp eax,ebp
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block24:
	lea eax,[esp+0x4C]
	push eax
	call ebx
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0xD4],4
	call ebx
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0xD4],5
	call ebx
	lea edx,[esp+0x6C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea eax,[esp+0x14]
	push eax
	mov byte ptr [esp+0xD4],6
	call ebx
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0xD4],7
	call ebx
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0xD4],8
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xD0],9
	cmp ecx,ebp
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x40]
	push eax
	lea edx,[esp+0x74]
	push edx
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [esp+0x34]
	lea edx,[esp+0x3C]
	push edx
	push eax
	lea edx,[esp+0x94]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x7C],8
	jne Block45

 Block37:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	cmp eax,ebp
	je Block39

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block39:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block40:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xD0],8
	cmp eax,ebp
	je Block42

 Block41:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block42:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xD0],7
	jne Block46

 Block43:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block47

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block45:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x7C]
	push ecx
	call edi
	jmp Block40

 Block46:
	lea edx,[esp+0x2C]
	push edx
	call edi

 Block47:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xD0],6
	jne Block50

 Block48:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block51:
	cmp word ptr [esp+0x6C],8
	mov byte ptr [esp+0xD0],5
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x74]
	xor edx,edx
	mov word ptr [esp+0x6C],dx
	cmp eax,ebp
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea eax,[esp+0x6C]
	push eax
	call edi

 Block55:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xD0],4
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[esp+0x3C]
	push edx
	call edi

 Block59:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0xD0],0
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebp
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[esp+0x4C]
	push ecx
	call edi

 Block63:
	lea edx,[esp+0x3C]
	push edx
	call ebx
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	lea ecx,[esp+0x4C]
	push ecx
	mov byte ptr [esp+0xD4],0xA
	call ebx
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xD4],0xB
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov bl,0xC
	mov byte ptr [esp+0xD0],bl
	cmp ecx,ebp
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea edx,[esp+0x28]
	push edx
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xD0],0xD
	cmp ecx,ebp
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [esi+0x28]
	lea edx,[esp+0x50]
	push edx
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	mov eax,dword ptr [esi+0x24]
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebp
	je Block73

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block73:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD0],0xB
	cmp eax,ebp
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block75:
	mov ebx,8
	mov byte ptr [esp+0xD0],0xA
	cmp word ptr [esp+0x4C],bx
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebp
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[esp+0x4C]
	push ecx
	call edi

 Block79:
	mov byte ptr [esp+0xD0],0
	cmp word ptr [esp+0x3C],bx
	jne Block82

 Block80:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea eax,[esp+0x3C]
	push eax
	call edi

 Block83:
	lea ecx,[esp+0x8C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea ecx,[esp+0x14]
	push 0x1A25
	push ecx
	mov byte ptr [esp+0xD8],0xE
	mov dword ptr [esp+0xB8],0xFFA4C4E6
	mov dword ptr [esp+0xB0],0xFF0900DE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov edi,eax
	lea edx,[esp+0xA0]
	cmp edx,edi
	je Block88

 Block84:
	mov ecx,dword ptr [esp+0xA0]
	cmp ecx,ebp
	je Block86

 Block85:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0xA0],ebp

 Block86:
	mov eax,dword ptr [edi]
	mov dword ptr [esp+0xA0],eax
	cmp eax,ebp
	je Block88

 Block87:
	add eax,8
	push eax
	call ebx

 Block88:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	je Block90

 Block89:
	call _xbstr_t::Data_t::Release

 Block90:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0xC0],7
	mov dword ptr [esp+0xC4],1
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD0],0xF
	cmp eax,ebp
	je Block92

 Block91:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block93

 Block92:
	xor eax,eax

 Block93:
	mov byte ptr [esp+0xD0],0xE
	cmp eax,ebp
	je Block101

 Block94:
	add eax,8
	cmp eax,ebp
	je Block101

 Block95:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block97

 Block96:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block97:
	mov eax,dword ptr [esi+0xB4]
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block99

 Block98:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block99:
	mov ecx,dword ptr [esi+0xB4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x8C]
	push eax
	push 0x10
	push 0x55
	push 0x29
	push 0xA0
	push 0x3EA
	push esi
	call edx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0xC0],3
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD0],0x10
	cmp eax,ebp
	je Block102

 Block100:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block103

 Block101:
	xor edi,edi
	jmp Block97

 Block102:
	xor eax,eax

 Block103:
	mov byte ptr [esp+0xD0],0xE
	cmp eax,ebp
	je Block113

 Block104:
	add eax,8
	cmp eax,ebp
	je Block113

 Block105:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block107

 Block106:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block107:
	mov eax,dword ptr [esi+0xBC]
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block109

 Block108:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block109:
	mov ecx,dword ptr [esi+0xBC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x8C]
	push eax
	push 0x10
	push 0x55
	push 0x3A
	push 0xA0
	push 0x3EB
	push esi
	call edx
	mov dword ptr [esp+0x68],ebp
	mov dword ptr [esp+0x5C],1
	mov dword ptr [esp+0x60],ebp
	mov dword ptr [esp+0x64],ebp
	lea eax,[esp+0x14]
	push 0x512
	mov bl,0x11
	push eax
	mov byte ptr [esp+0xD8],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0xD4],0x12
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebp
	je Block111

 Block110:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block111:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD0],0x13
	cmp eax,ebp
	je Block114

 Block112:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block115

 Block113:
	xor edi,edi
	jmp Block107

 Block114:
	xor eax,eax

 Block115:
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebp
	je Block125

 Block116:
	add eax,8
	cmp eax,ebp
	je Block125

 Block117:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block119

 Block118:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block119:
	mov eax,dword ptr [esi+0xA4]
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block121

 Block120:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block121:
	mov ecx,dword ptr [esi+0xA4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x5C]
	push eax
	mov eax,dword ptr [esi+0x28]
	push ebp
	sub eax,0x29
	push eax
	push 0x9F
	push 1
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x513
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0xD4],0x14
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebp
	je Block123

 Block122:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block123:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD0],0x15
	cmp eax,ebp
	je Block126

 Block124:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block127

 Block125:
	xor edi,edi
	jmp Block119

 Block126:
	xor eax,eax

 Block127:
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebp
	je Block138

 Block128:
	add eax,8
	cmp eax,ebp
	je Block138

 Block129:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block131

 Block130:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block131:
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block133

 Block132:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block133:
	mov ecx,dword ptr [esi+0xAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x5C]
	push eax
	mov eax,dword ptr [esi+0x28]
	push ebp
	sub eax,0x29
	push eax
	push 0xD1
	push 2
	push esi
	call edx
	mov eax,dword ptr [esi+0xB4]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0xD0],0xE
	cmp eax,ebp
	je Block135

 Block134:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block135:
	lea ecx,[esp+0x8C]
	mov byte ptr [esp+0xD0],0
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0xD0],0xFFFFFFFF
	cmp eax,ebp
	je Block137

 Block136:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block137:
	mov ecx,dword ptr [esp+0xC8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC0
	ret 4

 Block138:
	xor edi,edi
	jmp Block131
}
}
// CRegisterAuctionEntryDlg::OnKey
__SUB_CLASS_THIS(0017E100, __thiscall, 141793,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	push esi
	push edi
	push 0x98967F
	mov esi,ecx
	mov eax,dword ptr [esi+0xBC]
	push 0x6D
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block2

 Block1:
	add eax,0xC
	push eax
	call ebx

 Block2:
	call CheckNumber
	add esp,0x10
	test eax,eax
	je Block6

 Block3:
	mov ecx,dword ptr [esi+0xBC]
	lea eax,[esp+0xC]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov edi,eax
	mov eax,dword ptr [esp+0x10]
	add esp,4
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov ecx,dword ptr [esi+0x98]
	imul ecx,edi
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add eax,dword ptr [esi+0x9C]
	add eax,edi
	mov dword ptr [esi+0x90],eax

 Block6:
	mov eax,dword ptr [esi+0xC4]
	push 0x98967F
	push 0x6D
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block8

 Block7:
	add eax,0xC
	push eax
	call ebx

 Block8:
	call CheckNumber
	add esp,0x10
	test eax,eax
	je Block12

 Block9:
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,dword ptr [esi+0xC4]
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov edi,eax
	mov eax,dword ptr [esp+0x10]
	add esp,4
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov ecx,dword ptr [esi+0x98]
	imul ecx,edi
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add eax,dword ptr [esi+0x9C]
	add eax,edi
	mov dword ptr [esi+0x94],eax

 Block12:
	push 0
	lea ecx,[esi-4]
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret 8
}
}
// CRegisterWishEntryDlg::OnCreate
_SUB_EXCEPTION_HANDLER(17B5F0)
__SUB_CLASS_THIS(0017B5F0, __thiscall, 141691,  CRegisterWishEntryDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_17B5F0
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
	mov esi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x24],ebp
	lea eax,[esp+0x28]
	push 0x3D0
	push eax
	mov dword ptr [esp+0xD8],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea ecx,[esp+0x28]
	push ecx
	push eax
	mov byte ptr [esp+0xDC],1
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0xD0],0
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push edx
	mov dword ptr [esi+0x24],0x10A
	mov dword ptr [esi+0x28],0xE1
	call ebx
	lea eax,[esp+0x2C]
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
	lea ecx,[esp+0x14]
	push ecx
	mov byte ptr [esp+0xD4],2
	call ebx
	lea edx,[esp+0x14]
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
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0xD0],3
	cmp ecx,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x2C]
	push eax
	mov eax,dword ptr [esi+0x28]
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [esi+0x24]
	push eax
	push edx
	call IWzCanvas::Create
	mov edi,8
	mov byte ptr [esp+0xD0],2
	cmp word ptr [esp+0x14],di
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov byte ptr [esp+0xD0],0
	cmp word ptr [esp+0x2C],di
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebp
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x70]
	push ebp
	push eax
	mov edi,eax
	call edx
	cmp eax,ebp
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block20:
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	push ebp
	push eax
	mov edi,eax
	call edx
	cmp eax,ebp
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block24:
	lea eax,[esp+0x4C]
	push eax
	call ebx
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0xD4],4
	call ebx
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0xD4],5
	call ebx
	lea edx,[esp+0x6C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea eax,[esp+0x14]
	push eax
	mov byte ptr [esp+0xD4],6
	call ebx
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0xD4],7
	call ebx
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0xD4],8
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xD0],9
	cmp ecx,ebp
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x40]
	push eax
	lea edx,[esp+0x74]
	push edx
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [esp+0x34]
	lea edx,[esp+0x3C]
	push edx
	push eax
	lea edx,[esp+0x94]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x7C],8
	jne Block45

 Block37:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	cmp eax,ebp
	je Block39

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block39:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block40:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xD0],8
	cmp eax,ebp
	je Block42

 Block41:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block42:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xD0],7
	jne Block46

 Block43:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block47

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block45:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x7C]
	push ecx
	call edi
	jmp Block40

 Block46:
	lea edx,[esp+0x2C]
	push edx
	call edi

 Block47:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xD0],6
	jne Block50

 Block48:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block51:
	cmp word ptr [esp+0x6C],8
	mov byte ptr [esp+0xD0],5
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x74]
	xor edx,edx
	mov word ptr [esp+0x6C],dx
	cmp eax,ebp
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea eax,[esp+0x6C]
	push eax
	call edi

 Block55:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xD0],4
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[esp+0x3C]
	push edx
	call edi

 Block59:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0xD0],0
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebp
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[esp+0x4C]
	push ecx
	call edi

 Block63:
	lea edx,[esp+0x3C]
	push edx
	call ebx
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	lea ecx,[esp+0x4C]
	push ecx
	mov byte ptr [esp+0xD4],0xA
	call ebx
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xD4],0xB
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov bl,0xC
	mov byte ptr [esp+0xD0],bl
	cmp ecx,ebp
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea edx,[esp+0x28]
	push edx
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xD0],0xD
	cmp ecx,ebp
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [esi+0x28]
	lea edx,[esp+0x50]
	push edx
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	mov eax,dword ptr [esi+0x24]
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebp
	je Block73

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block73:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD0],0xB
	cmp eax,ebp
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block75:
	mov ebx,8
	mov byte ptr [esp+0xD0],0xA
	cmp word ptr [esp+0x4C],bx
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebp
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[esp+0x4C]
	push ecx
	call edi

 Block79:
	mov byte ptr [esp+0xD0],0
	cmp word ptr [esp+0x3C],bx
	jne Block82

 Block80:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea eax,[esp+0x3C]
	push eax
	call edi

 Block83:
	lea ecx,[esp+0x8C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea ecx,[esp+0x14]
	push 0x1A25
	push ecx
	mov byte ptr [esp+0xD8],0xE
	mov dword ptr [esp+0xB8],0xFFA4C4E6
	mov dword ptr [esp+0xB0],0xFF0900DE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov edi,eax
	lea edx,[esp+0xA0]
	cmp edx,edi
	je Block88

 Block84:
	mov ecx,dword ptr [esp+0xA0]
	cmp ecx,ebp
	je Block86

 Block85:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0xA0],ebp

 Block86:
	mov eax,dword ptr [edi]
	mov dword ptr [esp+0xA0],eax
	cmp eax,ebp
	je Block88

 Block87:
	add eax,8
	push eax
	call ebx

 Block88:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	je Block90

 Block89:
	call _xbstr_t::Data_t::Release

 Block90:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0xC0],7
	mov dword ptr [esp+0xC4],1
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD0],0xF
	cmp eax,ebp
	je Block92

 Block91:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block93

 Block92:
	xor eax,eax

 Block93:
	mov byte ptr [esp+0xD0],0xE
	cmp eax,ebp
	je Block101

 Block94:
	add eax,8
	cmp eax,ebp
	je Block101

 Block95:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block97

 Block96:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block97:
	mov eax,dword ptr [esi+0xB4]
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block99

 Block98:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block99:
	mov ecx,dword ptr [esi+0xB4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x8C]
	push eax
	push 0x10
	push 0x55
	push 0x29
	push 0xA0
	push 0x3EA
	push esi
	call edx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0xC0],3
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD0],0x10
	cmp eax,ebp
	je Block102

 Block100:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block103

 Block101:
	xor edi,edi
	jmp Block97

 Block102:
	xor eax,eax

 Block103:
	mov byte ptr [esp+0xD0],0xE
	cmp eax,ebp
	je Block111

 Block104:
	add eax,8
	cmp eax,ebp
	je Block111

 Block105:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block107

 Block106:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block107:
	mov eax,dword ptr [esi+0xBC]
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block109

 Block108:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block109:
	mov ecx,dword ptr [esi+0xBC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x8C]
	push eax
	push 0x10
	push 0x55
	push 0x3A
	push 0xA0
	push 0x3EB
	push esi
	call edx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	mov dword ptr [esp+0xAC],0xFF000000
	mov dword ptr [esp+0xC0],0x63
	mov dword ptr [esp+0xC4],ebp
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD0],0x11
	cmp eax,ebp
	je Block112

 Block110:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block113

 Block111:
	xor edi,edi
	jmp Block107

 Block112:
	xor eax,eax

 Block113:
	mov byte ptr [esp+0xD0],0xE
	cmp eax,ebp
	je Block123

 Block114:
	add eax,8
	cmp eax,ebp
	je Block123

 Block115:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block117

 Block116:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block117:
	mov eax,dword ptr [esi+0xC4]
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block119

 Block118:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block119:
	mov ecx,dword ptr [esi+0xC4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x8C]
	push eax
	push 0xF
	push 0xD6
	push 0x80
	push 0x1B
	push 0x3EC
	push esi
	call edx
	mov dword ptr [esp+0x68],ebp
	mov dword ptr [esp+0x5C],1
	mov dword ptr [esp+0x60],ebp
	mov dword ptr [esp+0x64],ebp
	lea eax,[esp+0x14]
	push 0x512
	mov bl,0x12
	push eax
	mov byte ptr [esp+0xD8],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0xD4],0x13
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebp
	je Block121

 Block120:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block121:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD0],0x14
	cmp eax,ebp
	je Block124

 Block122:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block125

 Block123:
	xor edi,edi
	jmp Block117

 Block124:
	xor eax,eax

 Block125:
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebp
	je Block135

 Block126:
	add eax,8
	cmp eax,ebp
	je Block135

 Block127:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block129

 Block128:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block129:
	mov eax,dword ptr [esi+0xA4]
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block131

 Block130:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block131:
	mov ecx,dword ptr [esi+0xA4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x5C]
	push eax
	mov eax,dword ptr [esi+0x28]
	push ebp
	sub eax,0x3C
	push eax
	push 0x9F
	push 1
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x513
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0xD4],0x15
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebp
	je Block133

 Block132:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block133:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD0],0x16
	cmp eax,ebp
	je Block136

 Block134:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block137

 Block135:
	xor edi,edi
	jmp Block129

 Block136:
	xor eax,eax

 Block137:
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebp
	je Block148

 Block138:
	add eax,8
	cmp eax,ebp
	je Block148

 Block139:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block141

 Block140:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block141:
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block143

 Block142:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block143:
	mov ecx,dword ptr [esi+0xAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x5C]
	push eax
	mov eax,dword ptr [esi+0x28]
	push ebp
	sub eax,0x3C
	push eax
	push 0xD1
	push 2
	push esi
	call edx
	mov eax,dword ptr [esi+0xB4]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0xD0],0xE
	cmp eax,ebp
	je Block145

 Block144:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block145:
	lea ecx,[esp+0x8C]
	mov byte ptr [esp+0xD0],0
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0xD0],0xFFFFFFFF
	cmp eax,ebp
	je Block147

 Block146:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block147:
	mov ecx,dword ptr [esp+0xC8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC0
	ret 4

 Block148:
	xor edi,edi
	jmp Block141
}
}
// CRegisterWishEntryDlg::~CRegisterWishEntryDlg
_SUB_EXCEPTION_HANDLER(178190)
__SUB_CLASS_THIS0(00178190, __thiscall, 141689,  CRegisterWishEntryDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_178190
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
	int 3// TODO: 	mov dword ptr [esi],offset CRegisterWishEntryDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CRegisterWishEntryDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CRegisterWishEntryDlg::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0xC0]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xB8]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xB0]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xA8]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CDialog::~CDialog
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
// CRegisterWishEntrySearchDlg::CRegisterWishEntrySearchDlg
_SUB_EXCEPTION_HANDLER(1779D0)
__SUB_CLASS_THIS(001779D0, __thiscall, 141569,  CRegisterWishEntrySearchDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1779D0
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
	call CDialog::_ctor_default
	or eax,0xFFFFFFFF
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CRegisterWishEntrySearchDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CRegisterWishEntrySearchDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CRegisterWishEntrySearchDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x94],eax
	mov dword ptr [esi+0x98],eax
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0xC4],edi
	lea ecx,[esi+0xC8]
	mov byte ptr [esp+0x18],6
	call CUIToolTip::_ctor_default
	mov eax,dword ptr [esp+0x20]
	push edi
	push 1
	push edi
	push edi
	mov ecx,esi
	mov byte ptr [esp+0x28],7
	mov dword ptr [esi+0x90],eax
	call CDialog::CreateDlg_1
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CRegisterSaleEntryDlg::OnChildNotify
__SUB_CLASS_THIS(001774C0, __thiscall, 141612,  CRegisterSaleEntryDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+8],0x64
	jne Block2

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [eax+0x20]
	push edx
	call eax

 Block2:
	ret 0xC
}
}
// CSelectLoadWishSaleListDlg::OnDestroy
__SUB_CLASS_THIS0(001775A0, __thiscall, 141710,  CSelectLoadWishSaleListDlg, void) {
__asm {

 Block0:
	add ecx,0xAC
	jmp  CUIToolTip::ClearToolTip
}
}
// CRegisterAuctionEntryDlg::Confirm
_SUB_EXCEPTION_HANDLER(17E230)
__SUB(0017E230, __cdecl, 141795,  int32_t, long, GW_ItemSlotBase*, void*, long&, long&, long&, unsigned char&, unsigned char&, long&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_17E230
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
	push 0xEC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x2C],0
	test eax,eax
	je Block20

 Block1:
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x38]
	push ecx
	mov ecx,dword ptr [esp+0x38]
	push edx
	push ecx
	mov ecx,eax
	call CRegisterAuctionEntryDlg::_ctor_0
	test eax,eax
	je Block20

 Block2:
	add eax,8
	je Block20

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x20],esi
	test esi,esi
	je Block5

 Block4:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,esi
	mov dword ptr [esp+0x2C],1
	call CDialog::DoModal
	mov ebp,eax
	cmp ebp,1
	jne Block22

 Block6:
	mov ecx,dword ptr [esi+0xD8]
	lea eax,[esp+0x14]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr [ecx],eax
	mov eax,dword ptr [esp+0x18]
	add esp,4
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov ecx,dword ptr [esi+0xC0]
	lea edx,[esp+0x14]
	push edx
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov edi,dword ptr [esp+0x44]
	mov dword ptr [edi],eax
	mov eax,dword ptr [esp+0x18]
	add esp,4
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov ecx,dword ptr [esi+0xC8]
	lea eax,[esp+0x14]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov ebx,dword ptr [esp+0x48]
	mov dword ptr [ebx],eax
	mov eax,dword ptr [esp+0x18]
	add esp,4
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov ecx,dword ptr [esi+0xD0]
	lea edx,[esp+0x14]
	push edx
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [ecx],al
	mov eax,dword ptr [esp+0x18]
	add esp,4
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov edx,dword ptr [esp+0x50]
	mov byte ptr [edx],1
	mov ecx,dword ptr [esi+0xE0]
	mov eax,dword ptr [ecx+0x68]
	push eax
	call CCtrlComboBox::GetItemParam
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr [ecx],eax
	mov ecx,dword ptr [edi]
	cmp ecx,0x98967F
	jg Block21

 Block15:
	cmp ecx,0x6D
	jle Block21

 Block16:
	mov edx,dword ptr [ebx]
	cmp edx,0x98967F
	jg Block21

 Block17:
	cmp edx,0x6D
	jle Block21

 Block18:
	add ecx,eax
	cmp ecx,edx
	jle Block22

 Block19:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x12AE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZRef<CRegisterAuctionEntryDlg>::~ZRef<CRegisterAuctionEntryDlg>
	mov eax,4
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret

 Block20:
	xor esi,esi
	mov dword ptr [esp+0x20],esi
	jmp Block5

 Block21:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1A5C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	push 0
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZRef<CRegisterAuctionEntryDlg>::_ReleaseRaw
	mov eax,4
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret

 Block22:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test esi,esi
	je Block24

 Block23:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CRegisterAuctionEntryDlg>::_ReleaseRaw

 Block24:
	mov eax,ebp
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
// CSelectLoadWishSaleListDlg::OnButtonClicked
__SUB_CLASS_THIS(00177550, __thiscall, 141716,  CSelectLoadWishSaleListDlg, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,1
	jne Block2

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block2:
	cmp eax,2
	jne Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx

 Block4:
	cmp eax,8
	jne Block6

 Block5:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],8
	jmp edx

 Block6:
	ret 4
}
}
// CRegisterAuctionEntryDlg::~CRegisterAuctionEntryDlg
_SUB_EXCEPTION_HANDLER(178280)
__SUB_CLASS_THIS0(00178280, __thiscall, 141788,  CRegisterAuctionEntryDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_178280
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
	int 3// TODO: 	mov dword ptr [esi],offset CRegisterAuctionEntryDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CRegisterAuctionEntryDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CRegisterAuctionEntryDlg::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0xDC]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xD4]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xCC]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xC4]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xBC]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0xB4]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0xAC]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CDialog::~CDialog
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
// CRegisterWishEntryDlg::OnKey
__SUB_CLASS_THIS(0017C660, __thiscall, 141694,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ecx
	push ebx
	push esi
	push edi
	push 0x98967F
	mov esi,ecx
	mov eax,dword ptr [esi+0xB0]
	push 0x6D
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block2

 Block1:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	call CheckNumber
	add esp,0x10
	test eax,eax
	je Block6

 Block3:
	mov ecx,dword ptr [esi+0xB0]
	lea eax,[esp+0xC]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov edi,eax
	mov eax,dword ptr [esp+0x10]
	add esp,4
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov ebx,dword ptr [esi+0x98]
	mov ecx,edi
	sub ecx,ebx
	imul ecx,dword ptr [esi+0x94]
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	sub edi,ecx
	sub edi,ebx
	push 0
	lea ecx,[esi-4]
	mov dword ptr [esi+0x90],edi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret 8

 Block6:
	push 0
	lea ecx,[esi-4]
	mov dword ptr [esi+0x90],0
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret 8
}
}
// CRegisterWishEntrySearchDlg::OnDestroy
__SUB_CLASS_THIS0(001774F0, __thiscall, 141571,  CRegisterWishEntrySearchDlg, void) {
__asm {

 Block0:
	add ecx,0xC8
	jmp  CUIToolTip::ClearToolTip
}
}
// CSelectLoadWishSaleListDlg::~CSelectLoadWishSaleListDlg
_SUB_EXCEPTION_HANDLER(177DF0)
__SUB_CLASS_THIS0(00177DF0, __thiscall, 141710,  CSelectLoadWishSaleListDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_177DF0
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
	int 3// TODO: 	mov dword ptr [esi],offset CSelectLoadWishSaleListDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CSelectLoadWishSaleListDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CSelectLoadWishSaleListDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xAC]
	mov dword ptr [esp+0x18],2
	call CUIToolTip::~CUIToolTip
	cmp dword ptr [esi+0xA8],0
	lea edi,[esi+0xA4]
	mov byte ptr [esp+0x18],1
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	cmp dword ptr [esi+0xA0],0
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x18],0
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	mov ecx,esi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CSelectLoadWishSaleListDlg::Draw
_SUB_EXCEPTION_HANDLER(17ACF0)
__SUB_CLASS_THIS(0017ACF0, __thiscall, 141712,  CSelectLoadWishSaleListDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_17ACF0
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
	mov dword ptr [esp+0x20],ebp
	mov eax,dword ptr [esp+0x88]
	push eax
	call CWnd::Draw
	xor edi,edi
	mov dword ptr [esp+0x1C],edi
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x84],edi
	call CWnd::GetCanvas
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x84],1
	call esi
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x84],2
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
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
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esp+0x44]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x9C],esp
	push 0x1281
	mov bl,3
	push edx
	mov byte ptr [esp+0x9C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x94],4
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x7C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0x80],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x68]
	push edx
	call ebx

 Block13:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x80],2
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x38]
	push ecx
	call ebx

 Block17:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x80],1
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x48]
	push eax
	call ebx

 Block21:
	lea ecx,[esp+0x38]
	push ecx
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov esi,dword ptr [esp+0x18]
	mov byte ptr [esp+0x80],6
	cmp esi,edi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov edx,dword ptr [esp+0x38]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x54]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x2C]
	push eax
	push edi
	push edi
	push esi
	call ecx
	cmp eax,edi
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x80],1
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,edi
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[esp+0x38]
	push eax
	call ebx

 Block31:
	mov ebp,dword ptr [ebp+0x90]
	mov eax,dword ptr [ebp+0x50]
	add ebp,0x50
	cmp eax,edi
	je Block104

 Block32:
	mov eax,dword ptr [eax-4]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block104

 Block33:
	mov dword ptr [esp+0x88],0
	lea ecx,[esp+0x2C]
	push 0x3D0
	push ecx
	mov byte ptr [esp+0x88],7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edx,[esp+0x8C]
	push edx
	push eax
	mov byte ptr [esp+0x8C],8
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x38]
	add esp,0xC
	mov byte ptr [esp+0x80],7
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block35:
	lea eax,[esp+0x28]
	push 1
	push eax
	call get_basic_font
	lea ecx,[esp+0x2C]
	push 0
	push ecx
	mov byte ptr [esp+0x90],9
	call get_basic_font
	add esp,0x10
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x84],0xA
	call esi
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
	mov bl,0xB
	push ecx
	mov byte ptr [esp+0x84],bl
	call esi
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
	mov ecx,dword ptr [esp+0x88]
	mov byte ptr [esp+0x80],0xC
	test ecx,ecx
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	lea eax,[esp+0x38]
	push eax
	mov eax,dword ptr [esp+0x18]
	imul eax,0x15
	lea edx,[esp+0x4C]
	push edx
	add eax,5
	push eax
	push 0xCF
	call IWzCanvas::Create
	mov edi,8
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x48],di
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
	mov byte ptr [esp+0x80],0xA
	cmp word ptr [esp+0x38],di
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	xor edi,edi
	cmp dword ptr [esp+0x14],edi
	jle Block86

 Block50:
	lea ebx,[edi+0xA]
	jmp Block54

 Block53:
	mov esi,dword ptr [ZImports::_VariantInit]

 Block54:
	mov edx,dword ptr [esp+0x20]
	cmp edi,dword ptr [edx+0x94]
	jne Block70

 Block55:
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block5

 Block56:
	mov ecx,dword ptr [eax]
	push 0xFF244768
	push 0x15
	push 0xCF
	lea edx,[ebx-6]
	push edx
	push 5
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x8C]
	call eax
	test eax,eax
	jge Block58

 Block57:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block58:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push ecx
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block59:
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x84],0xD
	call esi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block60:
	mov ecx,dword ptr [esp+0x24]
	lea edx,[esp+0x38]
	push edx
	mov edx,dword ptr [ebp]
	lea eax,[esp+0x4C]
	push eax
	lea eax,[edx+edi*8]
	mov eax,dword ptr [eax+4]
	mov eax,dword ptr [eax+0x18]
	push ecx
	lea ecx,[eax+0xC]
	mov byte ptr [esp+0x8C],0xE
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0x3C]
	push eax
	call CItemInfo::GetItemName
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x94],0xF
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x98]
	mov byte ptr [esp+0x90],0x10
	test ecx,ecx
	je Block5

 Block61:
	push ebx
	push 0xA
	mov byte ptr [esp+0x98],0xF
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x80],0xE
	test eax,eax
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block63:
	mov esi,8
	mov byte ptr [esp+0x80],0xD
	cmp word ptr [esp+0x48],si
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov byte ptr [esp+0x80],0xA
	cmp word ptr [esp+0x38],si
	jne Block69

 Block68:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	jmp Block81

 Block69:
	lea ecx,[esp+0x38]
	push ecx
	jmp Block84

 Block70:
	lea edx,[esp+0x68]
	push edx
	call esi
	lea eax,[esp+0x68]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block71:
	lea ecx,[esp+0x58]
	push ecx
	mov byte ptr [esp+0x84],0x11
	call esi
	lea edx,[esp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block72:
	mov edx,dword ptr [esp+0x28]
	lea eax,[esp+0x68]
	push eax
	mov eax,dword ptr [ebp]
	lea eax,[eax+edi*8]
	mov eax,dword ptr [eax+4]
	mov eax,dword ptr [eax+0x18]
	lea ecx,[esp+0x5C]
	push ecx
	push edx
	lea ecx,[eax+0xC]
	mov byte ptr [esp+0x8C],0x12
	call TSecType<long>::GetData
	push eax
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x94],0x13
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x98]
	mov byte ptr [esp+0x90],0x14
	test ecx,ecx
	je Block5

 Block73:
	push ebx
	push 0xA
	mov byte ptr [esp+0x98],0x13
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x80],0x12
	test eax,eax
	je Block75

 Block74:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block75:
	mov esi,8
	mov byte ptr [esp+0x80],0x11
	cmp word ptr [esp+0x58],si
	jne Block78

 Block76:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov byte ptr [esp+0x80],0xA
	cmp word ptr [esp+0x68],si
	jne Block83

 Block80:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx

 Block81:
	test eax,eax
	je Block85

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block83:
	lea edx,[esp+0x68]
	push edx

 Block84:
	call dword ptr [ZImports::_VariantClear]

 Block85:
	inc edi
	add ebx,0x15
	cmp edi,dword ptr [esp+0x14]
	jl Block53

 Block86:
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	jne Block88

 Block87:
	push 0x80004003
	call _com_issue_error

 Block88:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x30]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x48]
	mov dword ptr [esp+0x38],0
	call eax
	test eax,eax
	jge Block90

 Block89:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block90:
	mov ecx,dword ptr [esp+0x20]
	mov eax,dword ptr [ecx+0xA0]
	mov esi,dword ptr [eax+0x38]
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
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
	imul esi,0x15
	mov edx,dword ptr [esp+0x38]
	mov edi,dword ptr [esp+0x18]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov ecx,dword ptr [ecx+0x84]
	push 0xAE
	push 0xCF
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x54]
	push esi
	push 0
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x60]
	push 0xAE
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x68]
	push 0xCF
	push 0xFF
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0xB4]
	push eax
	push 0x43
	push 0xF
	push edi
	mov byte ptr [esp+0xBC],0x15
	call ecx
	test eax,eax
	jge Block94

 Block93:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block94:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x80],0xA
	jne Block97

 Block95:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block98:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],9
	test eax,eax
	je Block100

 Block99:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block100:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x80],7
	test eax,eax
	je Block102

 Block101:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block102:
	mov eax,dword ptr [esp+0x88]
	mov byte ptr [esp+0x80],1
	test eax,eax
	je Block104

 Block103:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block104:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x84],0
	call edx
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test eax,eax
	je Block106

 Block105:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block106:
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
// CSelectLoadWishSaleListDlg::OnMouseMove
_SUB_EXCEPTION_HANDLER(177EB0)
__SUB_CLASS_THIS(00177EB0, __thiscall, 141715,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_177EB0
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
	mov esi,ecx
	mov eax,dword ptr [esp+0x30]
	add eax,0xFFFFFFF1
	mov dword ptr [esp+0x14],0
	cmp eax,0xCF
	ja Block18

 Block1:
	mov ebx,dword ptr [esp+0x34]
	lea ecx,[ebx-0x43]
	cmp ecx,0xAE
	ja Block18

 Block2:
	mov eax,dword ptr [esi+0x9C]
	mov eax,dword ptr [eax+0x38]
	imul eax,0x15
	mov ecx,dword ptr [esi+0x8C]
	lea edx,[eax+ebx-0x43]
	mov eax,0x30C30C31
	imul edx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add ecx,0x50
	add eax,edx
	mov edx,dword ptr [ecx]
	test edx,edx
	je Block5

 Block3:
	cmp eax,dword ptr [edx-4]
	jae Block5

 Block4:
	mov dword ptr [esi+0x94],eax

 Block5:
	mov eax,dword ptr [esi+0x94]
	cmp eax,0xFFFFFFFF
	je Block18

 Block6:
	mov ecx,dword ptr [ecx]
	test ecx,ecx
	jne Block8

 Block7:
	xor edx,edx
	jmp Block9

 Block8:
	mov edx,dword ptr [ecx-4]

 Block9:
	cmp eax,edx
	jae Block18

 Block10:
	mov eax,dword ptr [ecx+eax*8+4]
	mov edi,dword ptr [eax+0x18]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x1C],edi
	test edi,edi
	je Block12

 Block11:
	lea edx,[edi+4]
	push edx
	call ebp

 Block12:
	mov dword ptr [esp+0x28],0
	test edi,edi
	je Block14

 Block13:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	push 0
	push 0
	push 0
	push 0
	push 0
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x2C],1
	call edx
	mov edx,dword ptr [esi]
	lea eax,[eax+ebx+0x14]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,dword ptr [esp+0x4C]
	lea ecx,[esi+0xA8]
	push eax
	call CUIToolTip::ShowItemToolTip

 Block14:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test edi,edi
	je Block17

 Block15:
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block17

 Block16:
	push ebx
	call ebp
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block17:
	cmp dword ptr [esp+0x14],0
	jne Block19

 Block18:
	lea ecx,[esi+0xA8]
	call CUIToolTip::ClearToolTip

 Block19:
	xor eax,eax
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
// CRegisterWishEntrySearchDlg::Draw
_SUB_EXCEPTION_HANDLER(179AB0)
__SUB_CLASS_THIS(00179AB0, __thiscall, 141573,  CRegisterWishEntrySearchDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_179AB0
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
	mov edi,ecx
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [esp+0x88]
	push eax
	call CWnd::Draw
	xor ebp,ebp
	mov dword ptr [esp+0x1C],ebp
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x84],ebp
	call CWnd::GetCanvas
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x84],1
	call esi
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x84],2
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
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
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esp+0x44]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x9C],esp
	push 0x1281
	mov bl,3
	push edx
	mov byte ptr [esp+0x9C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x94],4
	cmp dword ptr [_D_G_RM],ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x7C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0x80],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	cmp eax,ebp
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x68]
	push edx
	call ebx

 Block13:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x80],2
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x38]
	push ecx
	call ebx

 Block17:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x80],1
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x48]
	push eax
	call ebx

 Block21:
	lea ecx,[esp+0x38]
	push ecx
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov esi,dword ptr [esp+0x18]
	mov byte ptr [esp+0x80],6
	cmp esi,ebp
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov edx,dword ptr [esp+0x38]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x54]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x2C]
	push eax
	push ebp
	push ebp
	push esi
	call ecx
	cmp eax,ebp
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x80],1
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebp
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[esp+0x38]
	push eax
	call ebx

 Block31:
	mov eax,dword ptr [edi+0xC4]
	cmp eax,ebp
	je Block101

 Block32:
	mov eax,dword ptr [eax-4]
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block101

 Block33:
	mov dword ptr [esp+0x88],ebp
	lea ecx,[esp+0x2C]
	push 0x3D0
	push ecx
	mov byte ptr [esp+0x88],7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea edx,[esp+0x8C]
	push edx
	push eax
	mov byte ptr [esp+0x8C],8
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x38]
	add esp,0xC
	mov byte ptr [esp+0x80],7
	cmp eax,ebp
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block35:
	lea eax,[esp+0x28]
	push 1
	push eax
	call get_basic_font
	lea ecx,[esp+0x2C]
	push ebp
	push ecx
	mov byte ptr [esp+0x90],9
	call get_basic_font
	add esp,0x10
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x84],0xA
	call esi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	lea ecx,[esp+0x48]
	mov bl,0xB
	push ecx
	mov byte ptr [esp+0x84],bl
	call esi
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block39

 Block38:
	push eax
	call _com_issue_error

 Block39:
	mov ecx,dword ptr [esp+0x88]
	mov byte ptr [esp+0x80],0xC
	cmp ecx,ebp
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	mov esi,dword ptr [esp+0x20]
	lea eax,[esp+0x38]
	push eax
	mov eax,esi
	imul eax,0x15
	lea edx,[esp+0x4C]
	push edx
	add eax,5
	push eax
	push 0xCF
	call IWzCanvas::Create
	mov edi,8
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x48],di
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	cmp eax,ebp
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
	mov byte ptr [esp+0x80],0xA
	cmp word ptr [esp+0x38],di
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	xor edi,edi
	cmp esi,ebp
	jle Block83

 Block50:
	lea ebx,[edi+0xA]

 Block51:
	mov esi,dword ptr [esp+0x14]
	cmp edi,dword ptr [esi+0x94]
	jne Block67

 Block52:
	mov eax,dword ptr [esp+0x88]
	cmp eax,ebp
	je Block5

 Block53:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x8C]
	push 0xFF244768
	push 0x15
	push 0xCF
	lea ecx,[ebx-6]
	push ecx
	push 5
	push eax
	mov esi,eax
	call edx
	cmp eax,ebp
	jge Block55

 Block54:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block55:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push eax
	call esi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block1

 Block56:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x84],0xD
	call esi
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block1

 Block57:
	mov eax,dword ptr [esp+0x24]
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	lea edx,[esp+0x4C]
	push edx
	mov edx,dword ptr [ecx+0xC4]
	push eax
	lea eax,[edx+edi*4]
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov byte ptr [esp+0x94],0xE
	call CItemInfo::GetItemName
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x94],0xF
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x98]
	mov byte ptr [esp+0x90],0x10
	cmp ecx,ebp
	je Block5

 Block58:
	push ebx
	push 0xA
	mov byte ptr [esp+0x98],0xF
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x80],0xE
	cmp eax,ebp
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block60:
	mov esi,8
	mov byte ptr [esp+0x80],0xD
	cmp word ptr [esp+0x48],si
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,ebp
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov byte ptr [esp+0x80],0xA
	cmp word ptr [esp+0x38],si
	jne Block66

 Block65:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	jmp Block78

 Block66:
	lea edx,[esp+0x38]
	push edx
	jmp Block81

 Block67:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x68]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block1

 Block68:
	lea edx,[esp+0x58]
	push edx
	mov byte ptr [esp+0x84],0x11
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block1

 Block69:
	mov eax,dword ptr [esp+0x28]
	lea ecx,[esp+0x68]
	push ecx
	mov ecx,dword ptr [esi+0xC4]
	lea edx,[esp+0x5C]
	push edx
	mov edx,dword ptr [ecx+edi*4]
	push eax
	lea eax,[ecx+edi*4]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edx
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x94],0x12
	call CItemInfo::GetItemName
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x94],0x13
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x98]
	mov byte ptr [esp+0x90],0x14
	cmp ecx,ebp
	je Block5

 Block70:
	push ebx
	push 0xA
	mov byte ptr [esp+0x98],0x13
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x80],0x12
	cmp eax,ebp
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block72:
	mov esi,8
	mov byte ptr [esp+0x80],0x11
	cmp word ptr [esp+0x58],si
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,ebp
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov byte ptr [esp+0x80],0xA
	cmp word ptr [esp+0x68],si
	jne Block80

 Block77:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]

 Block78:
	cmp eax,ebp
	je Block82

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block80:
	lea ecx,[esp+0x68]
	push ecx

 Block81:
	call dword ptr [ZImports::_VariantClear]

 Block82:
	inc edi
	add ebx,0x15
	cmp edi,dword ptr [esp+0x20]
	jl Block51

 Block83:
	mov eax,dword ptr [esp+0x88]
	cmp eax,ebp
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x48]
	lea ecx,[esp+0x30]
	push ecx
	push eax
	mov esi,eax
	mov dword ptr [esp+0x38],ebp
	call edx
	cmp eax,ebp
	jge Block87

 Block86:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block87:
	mov eax,dword ptr [esp+0x14]
	mov eax,dword ptr [eax+0xA0]
	mov esi,dword ptr [eax+0x38]
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block89

 Block88:
	push eax
	call _com_issue_error

 Block89:
	imul esi,0x15
	mov edx,dword ptr [esp+0x38]
	mov edi,dword ptr [esp+0x18]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov ecx,dword ptr [ecx+0x84]
	push 0xAE
	push 0xCF
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x54]
	push esi
	push ebp
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x60]
	push 0xAE
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x68]
	push 0xCF
	push 0xFF
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0xB4]
	push eax
	push 0x43
	push 0xF
	push edi
	mov byte ptr [esp+0xBC],0x15
	call ecx
	cmp eax,ebp
	jge Block91

 Block90:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block91:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x80],0xA
	jne Block94

 Block92:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebp
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block95:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],9
	cmp eax,ebp
	je Block97

 Block96:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block97:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x80],7
	cmp eax,ebp
	je Block99

 Block98:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block99:
	mov eax,dword ptr [esp+0x88]
	mov byte ptr [esp+0x80],1
	cmp eax,ebp
	je Block101

 Block100:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block101:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x84],0
	call edx
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp eax,ebp
	je Block103

 Block102:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block103:
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
// CRegisterAuctionEntryDlg::OnChildNotify
__SUB_CLASS_THIS(00177620, __thiscall, 141791,  CRegisterAuctionEntryDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+8],0x64
	jne Block2

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [eax+0x20]
	push edx
	call eax

 Block2:
	ret 0xC
}
}
// CRegisterWishEntrySearchDlg::OnKey
__SUB_CLASS_THIS(001774E0, __thiscall, 141574,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	ret 8
}
}
// CRegisterWishEntrySearchDlg::OnChildNotify
__SUB_CLASS_THIS(00177500, __thiscall, 141575,  CRegisterWishEntrySearchDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	cmp edi,0x3E8
	jne Block4

 Block1:
	cmp ebx,0x12C
	jb Block4

 Block2:
	cmp ebx,0x130
	ja Block4

 Block3:
	lea ecx,[esi+0xC8]
	call CUIToolTip::ClearToolTip
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block4:
	cmp ebx,0x64
	jne Block6

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push edi
	mov ecx,esi
	call edx

 Block6:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CRegisterSaleEntryDlg::OnKey
__SUB_CLASS_THIS(001796E0, __thiscall, 141614,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ecx
	push esi
	push edi
	push 0x98967F
	mov esi,ecx
	mov eax,dword ptr [esi+0xB0]
	push 0x6D
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block2

 Block1:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	call CheckNumber
	add esp,0x10
	test eax,eax
	je Block6

 Block3:
	mov ecx,dword ptr [esi+0xB0]
	lea eax,[esp+8]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov edi,eax
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
	mov ecx,dword ptr [esi+0x94]
	imul ecx,edi
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	add ecx,dword ptr [esi+0x98]
	push 0
	add ecx,edi
	mov dword ptr [esi+0x90],ecx
	lea ecx,[esi-4]
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ecx
	ret 8

 Block6:
	push 0
	lea ecx,[esi-4]
	mov dword ptr [esi+0x90],0
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ecx
	ret 8
}
}
