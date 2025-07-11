#include "regen.hpp"
// MessageBoxDlg.ipp
#include "MessageBoxDlg.hpp"

// CMessageBoxDlg::~CMessageBoxDlg
_SUB_EXCEPTION_HANDLER(234140)
__SUB_CLASS_THIS0(00234140, __thiscall, 81833,  CMessageBoxDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_234140
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
	int 3// TODO: 	mov dword ptr [esi],offset CMessageBoxDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CMessageBoxDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CMessageBoxDlg::`vftable'{for `ZRefCounted'}
	cmp dword ptr [esi+0xAC],0
	lea edi,[esi+0xA8]
	mov dword ptr [esp+0x18],5
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	mov eax,dword ptr [esi+0xA4]
	mov byte ptr [esp+0x18],4
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xA0]
	mov byte ptr [esp+0x18],3
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x9C]
	mov byte ptr [esp+0x18],2
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x98]
	mov byte ptr [esp+0x18],1
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov eax,dword ptr [esi+0x94]
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
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
// CMessageBoxDlg::Draw
_SUB_EXCEPTION_HANDLER(2347E0)
__SUB_CLASS_THIS(002347E0, __thiscall, 81835,  CMessageBoxDlg, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2347E0
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
	mov edi,ecx
	mov eax,dword ptr [ebp+8]
	push eax
	call CWnd::Draw
	lea ecx,[ebp-0x40]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	xor ebx,ebx
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp-0x44],ebx
	mov dword ptr [ebp-0x50],ebx
	mov dword ptr [ebp-0x64],ebx
	lea edx,[edi+0x94]
	push edx
	lea ecx,[ebp-0x14]
	mov byte ptr [ebp-4],3
	mov dword ptr [ebp-0x14],ebx
	call ZXString<char>::op_assign
	push ebx
	push 0xA
	lea ecx,[ebp-0x14]
	mov byte ptr [ebp-4],4
	mov dword ptr [ebp-0x48],ebx
	call ZXString<char>::Find__1
	mov esi,eax
	cmp esi,ebx
	jl Block10

 Block1:
	mov eax,dword ptr [ebp-0x48]
	cmp eax,ebx
	jne Block3

 Block2:
	push esi
	lea eax,[ebp-0x68]
	push eax
	lea ecx,[ebp-0x14]
	call ZXString<char>::Left
	push eax
	lea ecx,[ebp-0x44]
	mov byte ptr [ebp-4],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x68]
	jmp Block5

 Block3:
	cmp eax,1
	jne Block7

 Block4:
	push esi
	lea ecx,[ebp-0x3C]
	push ecx
	lea ecx,[ebp-0x14]
	call ZXString<char>::Left
	push eax
	lea ecx,[ebp-0x50]
	mov byte ptr [ebp-4],6
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x3C]

 Block5:
	mov byte ptr [ebp-4],4
	cmp eax,ebx
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	push 0xFFFFFFFF
	inc esi
	push esi
	lea edx,[ebp-0x38]
	push edx
	lea ecx,[ebp-0x14]
	call ZXString<char>::Mid
	push eax
	lea ecx,[ebp-0x14]
	mov byte ptr [ebp-4],7
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],4
	cmp eax,ebx
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	inc dword ptr [ebp-0x48]
	push ebx
	push 0xA
	lea ecx,[ebp-0x14]
	call ZXString<char>::Find__1
	mov esi,eax
	cmp esi,ebx
	jge Block1

 Block10:
	push 0xFFFFFFFF
	inc esi
	push esi
	lea eax,[ebp-0x38]
	push eax
	lea ecx,[ebp-0x14]
	call ZXString<char>::Mid
	push eax
	lea ecx,[ebp-0x64]
	mov byte ptr [ebp-4],8
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],4
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x24]
	push ecx
	call ebx
	lea edx,[ebp-0x24]
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
	lea eax,[ebp-0x60]
	push eax
	mov byte ptr [ebp-4],9
	call ebx
	lea ecx,[ebp-0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	lea edx,[ebp-0x24]
	push edx
	lea eax,[ebp-0x60]
	push eax
	mov eax,dword ptr [edi+0xA0]
	push eax
	mov eax,dword ptr [edi+0x98]
	push ecx
	mov dword ptr [ebp-0x38],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0xA
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x40]
	mov byte ptr [ebp-4],0xB
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	push 0xD
	push 0x1E
	mov byte ptr [ebp-4],0xA
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x60],8
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],9
	jne Block21

 Block19:
	mov eax,dword ptr [ebp-0x58]
	xor ecx,ecx
	mov word ptr [ebp-0x60],cx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[ebp-0x60]
	push edx
	call esi

 Block22:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],4
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[ebp-0x24]
	push ecx
	call esi

 Block26:
	lea edx,[ebp-0x38]
	push 0x1AC3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [edi+0x90]
	push eax
	lea ecx,[ebp-0x4C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov byte ptr [ebp-4],0xC
	call CItemInfo::GetItemString
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0xE
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	lea edx,[ebp-0x34]
	push edx
	call ebx
	lea eax,[ebp-0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea ecx,[ebp-0x60]
	push ecx
	mov byte ptr [ebp-4],0xF
	call ebx
	lea edx,[ebp-0x60]
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
	mov eax,dword ptr [ebp-0x4C]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x10
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	lea ecx,[ebp-0x24]
	mov esi,esp
	push ecx
	call ebx
	lea edx,[ebp-0x24]
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
	mov edx,dword ptr [ebp-0x4C]
	lea eax,[ebp-0x34]
	push eax
	mov eax,dword ptr [edi+0xA4]
	lea ecx,[ebp-0x60]
	push ecx
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	mov byte ptr [ebp-4],0x11
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x3C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	push 0xD
	lea eax,[ebp-0x24]
	push eax
	mov eax,dword ptr [edi+0x98]
	push ecx
	mov dword ptr [ebp-0x68],esp
	mov ecx,esp
	mov bl,0x12
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0xA0]
	mov byte ptr [ebp-4],0x13
	test ecx,ecx
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	mov ecx,dword ptr [ebp-0x40]
	add eax,0x23
	push eax
	mov byte ptr [ebp-4],0x11
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x24],si
	jne Block39

 Block37:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x60],si
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[ebp-0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x34],si
	jne Block47

 Block45:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x24]
	push ecx
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
	lea eax,[ebp-0x34]
	push eax
	mov byte ptr [ebp-4],0x14
	call esi
	lea ecx,[ebp-0x34]
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
	lea edx,[ebp-0x24]
	push edx
	mov edx,dword ptr [ebp-0x44]
	lea eax,[ebp-0x34]
	push eax
	mov eax,dword ptr [edi+0x9C]
	push eax
	push ecx
	mov dword ptr [ebp-0x3C],esp
	mov ecx,esp
	mov bl,0x15
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x40]
	push 0x2F
	mov byte ptr [ebp-4],0x16
	push 0x16
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],0x14
	jne Block55

 Block53:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0xE
	jne Block59

 Block57:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block60:
	lea ecx,[ebp-0x24]
	push ecx
	call esi
	lea edx,[ebp-0x24]
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
	lea eax,[ebp-0x34]
	push eax
	mov byte ptr [ebp-4],0x17
	call esi
	lea ecx,[ebp-0x34]
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
	lea edx,[ebp-0x24]
	push edx
	mov edx,dword ptr [ebp-0x50]
	lea eax,[ebp-0x34]
	push eax
	mov eax,dword ptr [edi+0x9C]
	push eax
	push ecx
	mov dword ptr [ebp-0x3C],esp
	mov ecx,esp
	mov bl,0x18
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x40]
	push 0x43
	mov byte ptr [ebp-4],0x19
	push 0x16
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],0x17
	jne Block67

 Block65:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0xE
	jne Block71

 Block69:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block72:
	lea ecx,[ebp-0x24]
	push ecx
	call esi
	lea edx,[ebp-0x24]
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
	lea eax,[ebp-0x34]
	push eax
	mov byte ptr [ebp-4],0x1A
	call esi
	lea ecx,[ebp-0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block76

 Block75:
	push eax
	call _com_issue_error

 Block76:
	mov edi,dword ptr [edi+0x9C]
	mov esi,dword ptr [ebp-0x64]
	lea edx,[ebp-0x24]
	push edx
	lea eax,[ebp-0x34]
	push eax
	push edi
	push ecx
	mov dword ptr [ebp-0x3C],esp
	mov ecx,esp
	mov bl,0x1B
	push esi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x1C
	mov byte ptr [ebp-4],bl
	mov ebx,dword ptr [ebp-0x40]
	push 0x57
	push 0x16
	mov ecx,ebx
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp-0x34],di
	jne Block79

 Block77:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea edx,[ebp-0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x24],di
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov eax,dword ptr [ebp-0x4C]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block86

 Block85:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block86:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block88

 Block87:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block88:
	mov byte ptr [ebp-4],2
	test esi,esi
	je Block90

 Block89:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block90:
	mov eax,dword ptr [ebp-0x50]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block92

 Block91:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block92:
	mov eax,dword ptr [ebp-0x44]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block94

 Block93:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block94:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call eax
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
	ret 4
}
}
// CMessageBoxDlg::OnButtonClicked
__SUB_CLASS_THIS(002340E0, __thiscall, 81836,  CMessageBoxDlg, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	jne Block2

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],8
	jmp edx

 Block2:
	cmp eax,1
	jne Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block4:
	cmp eax,2
	jne Block6

 Block5:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx

 Block6:
	cmp eax,8
	jne Block8

 Block7:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],8
	jmp edx

 Block8:
	ret 4
}
}
// CMessageBoxDlg::CMessageBoxDlg
_SUB_EXCEPTION_HANDLER(234390)
__SUB_CLASS_THIS(00234390, __thiscall, 81831,  CMessageBoxDlg, void, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_234390
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
	mov dword ptr [esp+0x14],esi
	mov dword ptr [esp+0x34],1
	call CDialog::_ctor_default
	mov eax,dword ptr [esp+0x44]
	lea edx,[esp+0x3C]
	lea ecx,[esi+0x94]
	int 3// TODO: 	mov dword ptr [esi],offset CMessageBoxDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CMessageBoxDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CMessageBoxDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x90],eax
	push edx
	mov byte ptr [esp+0x38],2
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea eax,[esp+0x40]
	lea ecx,[esi+0x98]
	push eax
	mov byte ptr [esp+0x38],3
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea edi,[esi+0x9C]
	mov dword ptr [edi],0
	lea ebp,[esi+0xA0]
	mov dword ptr [ebp],0
	mov dword ptr [esi+0xA4],0
	mov dword ptr [esi+0xAC],0
	push 0
	push 0
	push 1
	push offset _S_UIUIWINDOW2IMGMU__3
	mov ecx,esi
	mov byte ptr [esp+0x44],8
	call CDialog::CreateDlg_2
	lea ecx,[esp+0x44]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	mov byte ptr [esp+0x40],9
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x50]
	add esp,0xC
	mov byte ptr [esp+0x34],8
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
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
	lea ecx,[esp+0x1C]
	push ecx
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x54],esp
	push 0x1A25
	mov bl,0xA
	push edx
	mov byte ptr [esp+0x4C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x44],0xB
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov byte ptr [esp+0x44],bl
	call IWzFont::Create
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],8
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	lea edx,[esp+0x44]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push ebp
	push eax
	mov byte ptr [esp+0x40],0xC
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x50]
	add esp,0xC
	mov byte ptr [esp+0x34],8
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block12:
	lea eax,[esp+0x44]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x34],0xD
	test eax,eax
	je Block14

 Block13:
	mov edi,dword ptr [eax]
	jmp Block15

 Block14:
	xor edi,edi

 Block15:
	mov ecx,8
	push edi
	mov word ptr [esp+0x20],cx
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [esp+0x24],eax
	test eax,eax
	jne Block18

 Block16:
	test edi,edi
	je Block18

 Block17:
	push 0x8007000E
	call _com_issue_error

 Block18:
	lea edx,[esp+0x1C]
	push edx
	push 0xFFFF9900
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x1A25
	mov bl,0xE
	push eax
	mov byte ptr [esp+0x4C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x44],0xF
	test ecx,ecx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov byte ptr [esp+0x44],bl
	call IWzFont::Create
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],0xD
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov ecx,dword ptr [esp+0x44]
	mov byte ptr [esp+0x34],8
	test ecx,ecx
	je Block26

 Block25:
	call _xbstr_t::Data_t::Release

 Block26:
	lea eax,[esp+0x44]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ebp,[esi+0xA4]
	push ebp
	push eax
	mov byte ptr [esp+0x40],0x10
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x50]
	add esp,0xC
	mov byte ptr [esp+0x34],8
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block28:
	lea ecx,[esp+0x44]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x34],0x11
	test eax,eax
	je Block30

 Block29:
	mov edi,dword ptr [eax]
	jmp Block31

 Block30:
	xor edi,edi

 Block31:
	mov edx,8
	push edi
	mov word ptr [esp+0x20],dx
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [esp+0x24],eax
	test eax,eax
	jne Block34

 Block32:
	test edi,edi
	je Block34

 Block33:
	push 0x8007000E
	call _com_issue_error

 Block34:
	lea eax,[esp+0x1C]
	push eax
	push 0xFFCCCC99
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1A25
	mov bl,0x12
	push ecx
	mov byte ptr [esp+0x4C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x44],0x13
	test ecx,ecx
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	mov byte ptr [esp+0x44],bl
	call IWzFont::Create
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],0x11
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov ecx,dword ptr [esp+0x44]
	test ecx,ecx
	je Block42

 Block41:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x44],0

 Block42:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],0
	test eax,eax
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	mov eax,esi
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
// CMessageBoxDlg::OnCreate
_SUB_EXCEPTION_HANDLER(234270)
__SUB_CLASS_THIS(00234270, __thiscall, 81834,  CMessageBoxDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_234270
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
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	push offset _S_UIBASICIMGBTCLOS__1
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x34],ebx
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x30],1
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block12

 Block4:
	add eax,8
	cmp eax,ebx
	je Block12

 Block5:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block7

 Block6:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0xAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0xE
	push 0x183
	push ebx
	push esi
	call edx
	mov eax,dword ptr [esi+0xAC]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret 4

 Block12:
	xor edi,edi
	jmp Block7
}
}
