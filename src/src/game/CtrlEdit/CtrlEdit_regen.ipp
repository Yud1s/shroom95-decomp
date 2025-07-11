#include "regen.hpp"
// CtrlEdit.ipp
#include "CtrlEdit.hpp"

// CCtrlEdit::CIMECandWnd::CIMECandWnd
__SUB_CLASS_THIS0(000DF680, __thiscall, 6642,  CCtrlEdit::CIMECandWnd, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CWnd::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlEdit::CIMECandWnd::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlEdit::CIMECandWnd::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlEdit::CIMECandWnd::`vftable'{for `ZRefCounted'}
	xor eax,eax
	mov dword ptr [esi+0x8C],eax
	mov dword ptr [esi+0x90],eax
	mov dword ptr [esi+0x94],eax
	int 3// TODO: 	mov dword ptr [esi+0x84],offset ZList<ZXString<char>>::`vftable'
	mov dword ptr [esi+0xA4],eax
	mov dword ptr [esi+0xA8],eax
	mov eax,esi
	pop esi
	ret
}
}
// CCtrlEdit::OnMouseButton
__SUB_CLASS_THIS(000E26F0, __thiscall, 6576,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x201
	je Block4

 Block1:
	sub eax,1
	je Block5

 Block2:
	sub eax,1
	jne Block5

 Block3:
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]
	push eax
	push edx
	add ecx,0xFFFFFFFC
	call CCtrlEdit::MouseDblClk
	ret 0x10

 Block4:
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]
	push eax
	push edx
	add ecx,0xFFFFFFFC
	call CCtrlEdit::MouseDown

 Block5:
	ret 0x10
}
}
// CCtrlEdit::OnMouseEnter
__SUB_CLASS_THIS(000DE680, __thiscall, 6578,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	jmp  CCtrlWnd::OnMouseEnter
}
}
// CCtrlEdit::OnDragDrop
__SUB_CLASS_THIS(000DF8D0, __thiscall, 6579,  CCtrlEdit, int32_t, long, DRAGCTX&, long, long) {
__asm {

 Block0:
	xor eax,eax
	ret 0x10
}
}
// CCtrlEdit::DrawTextLine
_SUB_EXCEPTION_HANDLER(E0B80)
__SUB_CLASS_THIS(000E0B80, __thiscall, 6606,  CCtrlEdit, void, NakedParam<_x_com_ptr<IWzCanvas>>, long, NakedParam<ZXString<char>>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E0B80
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
	push ecx
	mov ecx,esp
	lea eax,[esp+0x68]
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [esp+0x5C],1
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	mov ecx,edi
	call edx
	mov esi,dword ptr [edi+0x18]
	mov byte ptr [esp+0x54],2
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x68]
	lea ecx,[esp+0x1C]
	push ecx
	push esi
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [edi+0x38]
	sub eax,dword ptr [edi+0x60]
	xor ebp,ebp
	add eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x1C],eax
	mov ecx,edi
	mov byte ptr [esp+0x54],3
	call CCtrlWnd::IsFocused
	or ecx,0xFFFFFFFF
	test eax,eax
	je Block76

 Block5:
	cmp dword ptr [esp+0x68],ecx
	je Block76

 Block6:
	cmp dword ptr [esp+0x6C],ecx
	je Block76

 Block7:
	lea eax,[edi+0x68]
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzFont>::op_assign_copy
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push eax
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x58],7
	call esi
	lea eax,[esp+0x2C]
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
	mov esi,dword ptr [esp+0x18]
	mov ebp,dword ptr [esp+0x68]
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x30]
	push edx
	push esi
	push ebp
	push 0
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x6C],8
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,9
	push eax
	mov byte ptr [esp+0x68],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x64],0xA
	test ecx,ecx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	mov edx,dword ptr [esp+0x70]
	mov eax,dword ptr [esp+0x2C]
	push edx
	push eax
	mov byte ptr [esp+0x6C],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x54],8
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	cmp word ptr [esp+0x2C],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x54],7
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[esp+0x2C]
	push edx
	call ebx

 Block19:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x54],3
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x3C]
	push ecx
	call ebx

 Block23:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	lea ecx,[esp+0x3C]
	push ecx
	push ebp
	push 0
	lea edx,[esp+0x2C]
	push edx
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x64],0xB
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,0xC
	push eax
	mov byte ptr [esp+0x60],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x5C],0xD
	test esi,esi
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov ecx,esi
	mov byte ptr [esp+0x5C],bl
	call IWzFont::CalcTextWidth
	mov esi,eax
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x54],0xB
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x54],3
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	add dword ptr [esp+0x1C],esi
	lea edx,[edi+0x70]
	push edx
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzFont>::op_assign_copy
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
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
	mov eax,dword ptr [esp+0x6C]
	lea edx,[esp+0x3C]
	push edx
	push eax
	push ebp
	lea ecx,[esp+0x2C]
	push ecx
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x64],0xE
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,0xF
	push eax
	mov byte ptr [esp+0x60],bl
	call _xbstr_t::_ctor_0
	mov esi,dword ptr [esp+0x20]
	mov byte ptr [esp+0x5C],0x10
	test esi,esi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	mov ecx,esi
	mov byte ptr [esp+0x5C],bl
	call IWzFont::CalcTextWidth
	mov ebp,eax
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x54],0xE
	test eax,eax
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x54],3
	jne Block42

 Block40:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov ecx,dword ptr [esp+0x5C]
	test ecx,ecx
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	mov eax,dword ptr [edi+0x44]
	mov edx,dword ptr [edi+0x7C]
	sub eax,dword ptr [edi+0x3C]
	push 0xFF00007F
	add eax,dword ptr [esp+0x64]
	push edx
	mov edx,dword ptr [esp+0x24]
	push ebp
	push eax
	push edx
	call IWzCanvas::DrawRectangle
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
	jge Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x58],0x11
	call ebx
	lea eax,[esp+0x3C]
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
	mov eax,dword ptr [esp+0x6C]
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x6C]
	lea edx,[esp+0x40]
	push edx
	push esi
	push eax
	push ecx
	lea edx,[esp+0x34]
	push edx
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x6C],0x12
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x78],esp
	mov ecx,esp
	mov bl,0x13
	push eax
	mov byte ptr [esp+0x68],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x64],0x14
	test ecx,ecx
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	mov eax,dword ptr [esp+0x70]
	mov esi,dword ptr [esp+0x2C]
	push eax
	push esi
	mov byte ptr [esp+0x6C],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x54],0x12
	test eax,eax
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	mov ebx,8
	mov byte ptr [esp+0x54],0x11
	cmp word ptr [esp+0x3C],bx
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov byte ptr [esp+0x54],3
	cmp word ptr [esp+0x2C],bx
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	lea eax,[edi+0x68]
	push eax
	lea ecx,[esp+0x1C]
	add esi,ebp
	call _x_com_ptr<IWzFont>::op_assign_copy
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push edx
	call ebx
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block63

 Block62:
	push eax
	call _com_issue_error

 Block63:
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0x58],0x15
	call ebx
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x2C]
	push eax
	mov eax,dword ptr [esp+0x70]
	lea ecx,[esp+0x40]
	push ecx
	push edx
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x7C]
	push ecx
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x6C],0x16
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x7C],esp
	mov ecx,esp
	mov bl,0x17
	push eax
	mov byte ptr [esp+0x68],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x64],0x18
	test ecx,ecx
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	mov edx,dword ptr [esp+0x70]
	push edx
	push esi
	mov byte ptr [esp+0x6C],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0x54],0x16
	test eax,eax
	je Block69

 Block68:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block69:
	mov esi,8
	mov byte ptr [esp+0x54],0x15
	cmp word ptr [esp+0x3C],si
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov byte ptr [esp+0x54],3
	cmp word ptr [esp+0x2C],si
	jne Block75

 Block74:
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	jmp Block92

 Block75:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]
	jmp Block95

 Block76:
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x20]
	lea ecx,[edi+4]
	call eax
	test eax,eax
	lea eax,[edi+0x68]
	jne Block78

 Block77:
	lea eax,[edi+0x6C]

 Block78:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block80

 Block79:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov ebp,eax
	push eax
	mov dword ptr [esp+0x1C],ebp
	call edx

 Block80:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block82

 Block81:
	push eax
	call _com_issue_error

 Block82:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x58],4
	call esi
	lea eax,[esp+0x3C]
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
	mov eax,dword ptr [esp+0x14]
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x40]
	push edx
	push ebp
	push ecx
	mov dword ptr [esp+0x7C],esp
	mov ecx,esp
	mov bl,5
	push eax
	mov byte ptr [esp+0x68],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x64],6
	test ecx,ecx
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	mov edx,dword ptr [esp+0x70]
	mov eax,dword ptr [esp+0x2C]
	push edx
	push eax
	mov byte ptr [esp+0x6C],bl
	call IWzCanvas::DrawTextA
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x54],4
	cmp word ptr [esp+0x3C],si
	jne Block89

 Block87:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea edx,[esp+0x3C]
	push edx
	call ebx

 Block90:
	mov byte ptr [esp+0x54],3
	cmp word ptr [esp+0x2C],si
	jne Block94

 Block91:
	xor eax,eax
	mov word ptr [esp+0x2C],ax

 Block92:
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea ecx,[esp+0x2C]
	push ecx
	call ebx

 Block95:
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x20]
	lea ecx,[edi+4]
	call eax
	test eax,eax
	je Block130

 Block96:
	mov eax,dword ptr [edi+0x50]
	test eax,eax
	je Block130

 Block97:
	cmp dword ptr [eax-4],0
	je Block130

 Block98:
	mov esi,dword ptr [edi+0x18]
	test esi,esi
	jne Block100

 Block99:
	push 0x80004003
	call _com_issue_error

 Block100:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x68]
	lea edx,[esp+0x6C]
	push edx
	push esi
	mov dword ptr [esp+0x74],0
	call eax
	test eax,eax
	jge Block102

 Block101:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block102:
	mov eax,dword ptr [esp+0x6C]
	sub eax,dword ptr [edi+0x60]
	lea ecx,[esp+0x3C]
	add eax,dword ptr [edi+0x38]
	push ecx
	mov dword ptr [esp+0x2C],eax
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block104

 Block103:
	push eax
	call _com_issue_error

 Block104:
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [edi+0x50]
	mov ecx,dword ptr [eax]
	add ecx,dword ptr [edi+0x48]
	lea edx,[esp+0x70]
	push ecx
	push edx
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x60],0x19
	call ZXString<char>::Left
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x70],esp
	mov ecx,esp
	mov bl,0x1A
	push eax
	mov byte ptr [esp+0x60],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0x68]
	mov byte ptr [esp+0x5C],0x1B
	test ecx,ecx
	jne Block106

 Block105:
	push 0x80004003
	call _com_issue_error

 Block106:
	mov byte ptr [esp+0x5C],bl
	call IWzFont::CalcTextWidth
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x54],0x19
	test eax,eax
	je Block108

 Block107:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block108:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x54],3
	jne Block111

 Block109:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block112:
	mov ebp,1

 Block113:
	mov eax,dword ptr [edi+0x50]
	mov bl,0x1C
	mov dword ptr [esp+0x20],ebp
	test eax,eax
	je Block130

 Block114:
	cmp ebp,dword ptr [eax-4]
	jae Block130

 Block115:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block8

 Block116:
	mov edx,dword ptr [edi+0x50]
	lea eax,[edx+ebp*4]
	mov eax,dword ptr [eax]
	add eax,dword ptr [edi+0x48]
	lea ecx,[esp+0x3C]
	push ecx
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x60],bl
	call ZXString<char>::Left
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x74],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x60],0x1D
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0x68]
	mov byte ptr [esp+0x5C],0x1E
	test ecx,ecx
	je Block1

 Block117:
	mov byte ptr [esp+0x5C],0x1D
	call IWzFont::CalcTextWidth
	mov dword ptr [esp+0x68],eax
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x54],bl
	test eax,eax
	je Block119

 Block118:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block119:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x54],3
	jne Block122

 Block120:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block123:
	mov esi,dword ptr [edi+0x54]
	inc esi
	sub esi,ebp
	mov ebp,dword ptr [edi+0x68]
	neg esi
	sbb esi,esi
	add esi,2
	test ebp,ebp
	je Block1

 Block124:
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+0x10]
	lea edx,[esp+0x6C]
	push edx
	push ebp
	mov dword ptr [esp+0x74],0
	call eax
	test eax,eax
	jge Block126

 Block125:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push ebp
	push eax
	call _com_issue_errorex

 Block126:
	mov ecx,dword ptr [esp+0x5C]
	test ecx,ecx
	je Block1

 Block127:
	mov edx,dword ptr [esp+0x6C]
	mov eax,dword ptr [edi+0x7C]
	mov ebx,dword ptr [ecx]
	push edx
	mov edx,dword ptr [esp+0x20]
	push esi
	sub eax,esi
	mov esi,dword ptr [esp+0x70]
	add eax,dword ptr [esp+0x68]
	sub esi,edx
	sub esi,2
	push esi
	push eax
	mov eax,dword ptr [esp+0x38]
	lea edx,[edx+eax+1]
	mov eax,dword ptr [ebx+0x8C]
	push edx
	push ecx
	mov ebp,ecx
	call eax
	test eax,eax
	jge Block129

 Block128:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block129:
	mov ecx,dword ptr [esp+0x68]
	mov ebp,dword ptr [esp+0x20]
	mov dword ptr [esp+0x1C],ecx
	inc ebp
	jmp Block113

 Block130:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x54],2
	test eax,eax
	je Block132

 Block131:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block132:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x54],1
	test eax,eax
	je Block134

 Block133:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block134:
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x54],0
	test eax,eax
	je Block136

 Block135:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block136:
	mov eax,dword ptr [esp+0x64]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	test eax,eax
	je Block138

 Block137:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block138:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 0x14
}
}
// CCtrlEdit::GetRTTI
__SUB_CLASS_THIS0(000DF8F0, __thiscall, 6612,  CCtrlEdit, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CCtrlEdit::ms_RTTI_CCtrlEdit
	ret
}
}
// CCtrlEdit::CREATEPARAM::~CREATEPARAM
_SUB_EXCEPTION_HANDLER(84890)
__SUB_CLASS_THIS0(00084890, __thiscall, 6774,  CCtrlEdit::CREATEPARAM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_84890
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
	mov dword ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esi+0x14]
	test ecx,ecx
	je Block4

 Block3:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x14],0

 Block4:
	mov esi,dword ptr [esi]
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
// CCtrlEdit::OnMouseMove
__SUB_CLASS_THIS(000E2730, __thiscall, 6577,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	push eax
	push edx
	add ecx,0xFFFFFFFC
	call CCtrlEdit::MouseMove
	mov eax,1
	ret 8
}
}
// CCtrlEdit::CEditCaret::HideCaret
__SUB_CLASS_THIS0(000DE6B0, __thiscall, 6626,  CCtrlEdit::CEditCaret, void) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [ecx+0x14]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	pop esi
	ret
}
}
// CCtrlEdit::CIMECandWnd::OnCreate
__SUB_CLASS_THIS(000DF570, __thiscall, 6645,  CCtrlEdit::CIMECandWnd, void, void*) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov eax,dword ptr [edi]
	push 0
	mov esi,ecx
	push 0
	push 0
	lea ecx,[edi+4]
	push ecx
	lea ecx,[esi+0x84]
	mov dword ptr [esi+0x80],eax
	call ZList<ZXString<char>>::MoveAfter
	mov edx,dword ptr [edi+0x18]
	mov dword ptr [esi+0x98],edx
	mov eax,dword ptr [edi+0x1C]
	mov dword ptr [esi+0x9C],eax
	mov ecx,dword ptr [edi+0x20]
	mov dword ptr [esi+0xA0],ecx
	mov eax,dword ptr [edi+0x24]
	mov ebx,dword ptr [esi+0xA4]
	cmp ebx,eax
	je Block5

 Block1:
	mov dword ptr [esi+0xA4],eax
	test eax,eax
	je Block3

 Block2:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block3:
	test ebx,ebx
	je Block5

 Block4:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block5:
	mov edi,dword ptr [edi+0x28]
	mov ebx,dword ptr [esi+0xA8]
	cmp ebx,edi
	je Block10

 Block6:
	mov dword ptr [esi+0xA8],edi
	test edi,edi
	je Block8

 Block7:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block8:
	test ebx,ebx
	je Block10

 Block9:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block10:
	pop edi
	lea eax,[esi+4]
	pop esi
	pop ebx
	mov dword ptr [esp+4],eax
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	jmp  CWndMan::SetCaptureWnd
}
}
// CCtrlEdit::CIMECandWnd::OnMouseButton
__SUB_CLASS_THIS(000DE7A0, __thiscall, 6648,  CCtrlEdit::CIMECandWnd, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	sub esp,0x14
	push esi
	push edi
	mov edi,ecx
	mov esi,dword ptr [edi+0xA0]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	lea ecx,[esp+8]
	push ecx
	push esi
	mov dword ptr [esp+0x10],0
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	cmp dword ptr [edi+0x7C],0
	je Block6

 Block5:
	mov eax,dword ptr [esp+8]
	lea esi,[eax+1]
	mov eax,dword ptr [esp+0x2C]
	add eax,0xFFFFFFFE
	cdq
	idiv esi
	mov esi,eax
	jmp Block7

 Block6:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push ebp
	mov ebp,dword ptr [esp+0x30]
	lea ecx,[ebx+4]
	lea eax,[ebp-3]
	cdq
	lea esi,[ecx+ecx]
	idiv esi
	mov edx,ecx
	mov dword ptr [esp+0x18],3
	mov dword ptr [esp+0x20],ecx
	mov esi,eax
	imul edx,esi
	lea eax,[edx+edx+3]
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [esp+0x34]
	push eax
	push ebp
	lea eax,[esp+0x1C]
	lea edx,[ebx+ebx+6]
	push eax
	mov dword ptr [esp+0x28],edx
	call PtInRect
	pop ebp
	pop ebx
	test eax,eax
	je Block14

 Block7:
	mov ecx,dword ptr [edi+0x94]
	add esi,ecx
	test esi,esi
	jl Block14

 Block8:
	mov edx,dword ptr [edi+0x88]
	add edx,ecx
	cmp esi,edx
	jae Block14

 Block9:
	mov eax,dword ptr [esp+0x20]
	sub eax,0x201
	je Block13

 Block10:
	sub eax,1
	jne Block14

 Block11:
	cmp dword ptr [edi+0x9C],esi
	jne Block14

 Block12:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push esi
	push eax
	push 0x11
	call CWndMan::NotifyIME
	pop edi
	pop esi
	add esp,0x14
	ret 0x10

 Block13:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push esi
	push 0
	push 0x12
	call CWndMan::NotifyIME

 Block14:
	pop edi
	pop esi
	add esp,0x14
	ret 0x10
}
}
// CCtrlEdit::GetNextCount
__SUB_CLASS_THIS(000DE690, __thiscall, 6603,  CCtrlEdit, long, const char*) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	test esi,esi
	jne Block2

 Block1:
	xor eax,eax
	pop esi
	ret 4

 Block2:
	push esi
	call CharNextA
	sub eax,esi
	pop esi
	ret 4
}
}
// CCtrlEdit::OnKey
// 4E3BF8
static uint8_t _SUB_E3A20_LOOKUP_TABLE_0[116] = {
0, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 
12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 1, 2, 3, 12, 4, 
5, 12, 12, 12, 12, 6, 7, 12, 12, 12, 12, 12, 12, 12, 12, 12, 
12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 8, 12, 12, 12, 12, 
12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 9, 12, 
10, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 
12, 12, 12, 12, 12, 12, 12, 12, 11, 11, 11, 11, 11, 11, 11, 11, 
11, 11, 11, 11, 
};
__SUB_CLASS_THIS(000E3A20, __thiscall, 6574,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	mov eax,edi
	shr eax,4
	mov ecx,edi
	and eax,1
	and ecx,1
	test edi,edi
	js Block18

 Block1:
	lea edx,[ebx-8]
	cmp edx,0x73
	ja Block18

 Block2:
	movzx edx,byte ptr [edx+_SUB_E3A20_LOOKUP_TABLE_0]
	cmp EDX, 0
je Block8
cmp EDX, 1
je Block25
cmp EDX, 2
je Block23
cmp EDX, 3
je Block16
cmp EDX, 4
je Block19
cmp EDX, 5
je Block20
cmp EDX, 6
je Block5
cmp EDX, 7
je Block3
cmp EDX, 8
je Block10
cmp EDX, 9
je Block14
cmp EDX, 10
je Block12
cmp EDX, 11
je Block22
cmp EDX, 12
je Block18


 Block3:
	push 1
	test ecx,ecx
	je Block9

 Block4:
	add esi,0xFFFFFFFC
	mov ecx,esi
	call CCtrlEdit::ExtractSelection
	push 0
	push 1
	push 0
	mov ecx,esi
	call CCtrlEdit::AdjustHorz
	mov ecx,esi
	call CCtrlWnd::InvalidateRect
	pop edi
	pop esi
	pop ebx
	ret 8

 Block5:
	test ecx,ecx
	je Block18

 Block6:
	add esi,0xFFFFFFFC
	push 0
	mov ecx,esi
	call CCtrlEdit::ExtractSelection
	push 0xFFFFFFFF
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push eax

 Block7:
	mov ecx,esi
	call CCtrlEdit::GetClipboard
	mov ecx,esi
	call CCtrlEdit::InsertString
	mov ecx,esi
	call CCtrlWnd::InvalidateRect
	pop edi
	pop esi
	pop ebx
	ret 8

 Block8:
	push 0

 Block9:
	lea ecx,[esi-4]
	call CCtrlEdit::DeleteString
	pop edi
	pop esi
	pop ebx
	ret 8

 Block10:
	test eax,eax
	je Block18

 Block11:
	lea ecx,[esi-4]
	call CCtrlEdit::SetClipboard
	pop edi
	pop esi
	pop ebx
	ret 8

 Block12:
	test eax,eax
	je Block18

 Block13:
	add esi,0xFFFFFFFC
	push 1
	mov ecx,esi
	call CCtrlEdit::ExtractSelection
	push 0
	push 1
	push 0
	mov ecx,esi
	call CCtrlEdit::AdjustHorz
	mov ecx,esi
	call CCtrlWnd::InvalidateRect
	pop edi
	pop esi
	pop ebx
	ret 8

 Block14:
	test eax,eax
	je Block18

 Block15:
	add esi,0xFFFFFFFC
	push 0
	mov ecx,esi
	call CCtrlEdit::ExtractSelection
	push 0xFFFFFFFF
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push ecx
	jmp Block7

 Block16:
	push 0

 Block17:
	lea ecx,[esi-4]
	call CCtrlEdit::MoveCaret

 Block18:
	mov esi,dword ptr [esi+0x20]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx]
	lea ecx,[esi+4]
	push edi
	push ebx
	call eax
	pop edi
	pop esi
	pop ebx
	ret 8

 Block19:
	push 1
	jmp Block17

 Block20:
	cmp dword ptr [esi+0xB4],0
	je Block18

 Block21:
	mov eax,dword ptr [esi+0xB4]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx]
	push edi
	push ebx
	call eax
	mov esi,dword ptr [esi+0x20]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx]
	lea ecx,[esi+4]
	push edi
	push ebx
	call eax
	pop edi
	pop esi
	pop ebx
	ret 8

 Block22:
	mov ecx,dword ptr [_D_G_PSTAGE+4]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx]
	add ecx,4
	push edi
	push ebx
	call eax
	pop edi
	pop esi
	pop ebx
	ret 8

 Block23:
	test eax,eax
	jne Block18

 Block24:
	push 2
	lea ecx,[esi-4]
	call CCtrlEdit::MoveCaret
	pop edi
	pop esi
	pop ebx
	ret 8

 Block25:
	test eax,eax
	jne Block18

 Block26:
	push 3
	lea ecx,[esi-4]
	call CCtrlEdit::MoveCaret
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CCtrlEdit::SetEnable
__SUB_CLASS_THIS(000DE970, __thiscall, 6578,  IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	cmp dword ptr [esi+0x28],edi
	je Block3

 Block1:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x3C]
	push offset _S_
	call edx
	test edi,edi
	jne Block3

 Block2:
	lea ecx,[esi+0x94]
	call CCtrlEdit::CEditCaret::HideCaret

 Block3:
	push edi
	mov ecx,esi
	call CCtrlWnd::SetEnable
	pop edi
	pop esi
	ret 4
}
}
// CCtrlEdit::OnIMEModeChange
__SUB_CLASS_THIS(000DF8E0, __thiscall, 6581,  IUIMsgHandler, void, char) {
__asm {

 Block0:
	ret 4
}
}
// CCtrlEdit::ExtractSelection
_SUB_EXCEPTION_HANDLER(E2D30)
__SUB_CLASS_THIS(000E2D30, __thiscall, 6573,  CCtrlEdit, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E2D30
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
	mov ecx,dword ptr [esi+0x5C]
	cmp ecx,0xFFFFFFFF
	jle Block22

 Block1:
	mov edx,dword ptr [esi+0x48]
	cmp ecx,edx
	je Block22

 Block2:
	xor ebx,ebx
	cmp ecx,ebx
	jl Block22

 Block3:
	mov eax,dword ptr [esi+0x34]
	lea edi,[esi+0x34]
	cmp eax,ebx
	je Block5

 Block4:
	mov eax,dword ptr [eax-4]
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	cmp ecx,eax
	jg Block22

 Block7:
	cmp edx,ebx
	jl Block22

 Block8:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block10

 Block9:
	mov eax,dword ptr [eax-4]
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	cmp edx,eax
	jg Block22

 Block12:
	cmp dword ptr [esp+0x24],ebx
	je Block14

 Block13:
	mov ecx,esi
	call CCtrlEdit::SetClipboard

 Block14:
	mov eax,dword ptr [esi+0x5C]
	cmp eax,dword ptr [esi+0x48]
	jle Block16

 Block15:
	mov ecx,dword ptr [esi+0x48]
	mov dword ptr [esi+0x5C],ecx
	mov dword ptr [esi+0x48],eax

 Block16:
	mov dword ptr [esp+0x24],ebx
	mov edx,dword ptr [esi+0x5C]
	push edx
	push ebx
	lea eax,[esp+0x18]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x28],ebx
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x20],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov ecx,dword ptr [esi+0x48]
	push 0xFFFFFFFF
	push ecx
	lea edx,[esp+0x18]
	push edx
	mov ecx,edi
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x20],2
	call ZXString<char>::op_add_assign_other_0
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	lea eax,[esp+0x24]
	push eax
	mov ecx,edi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esi+0x5C]
	mov dword ptr [esi+0x48],ecx
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	cmp eax,ebx
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov edx,dword ptr [esi+0x48]
	mov dword ptr [esi+0x5C],edx
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 4
}
}
// CCtrlEdit::OnDestroy
_SUB_EXCEPTION_HANDLER(DFA80)
__SUB_CLASS_THIS0(000DFA80, __thiscall, 6566,  CCtrlEdit, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_DFA80
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
	call CCtrlEdit::DestroyIMECandWnd
	xor ebp,ebp
	push ebp
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	call CCtrlWnd::GetCanvas
	mov ebx,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x28],ebp
	cmp dword ptr [esi+0x80],ebp
	je Block14

 Block1:
	mov edi,dword ptr [esi+0x18]
	cmp edi,ebp
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block5

 Block4:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block5:
	mov edi,dword ptr [esi+0x18]
	mov ebp,dword ptr [esp+0x14]
	test edi,edi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x68]
	lea edx,[esp+0x18]
	push edx
	push edi
	mov dword ptr [esp+0x20],0
	call eax
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block9:
	test ebx,ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov eax,dword ptr [esi+0x80]
	mov ecx,dword ptr [esi+0x20]
	mov edx,dword ptr [esi+0x1C]
	mov edi,dword ptr [ebx]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x20]
	push edx
	mov edx,dword ptr [edi+0x8C]
	push ebp
	push ecx
	push ebx
	call edx
	test eax,eax
	jge Block13

 Block12:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block13:
	xor ebp,ebp

 Block14:
	mov dword ptr [esi+0xA4],ebp
	mov eax,dword ptr [esi+0xAC]
	cmp eax,ebp
	je Block16

 Block15:
	mov dword ptr [esi+0xAC],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp ebx,ebp
	je Block18

 Block17:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

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
// CCtrlEdit::SetClipboard
_SUB_EXCEPTION_HANDLER(E0AC0)
__SUB_CLASS_THIS0(000E0AC0, __thiscall, 6566,  CCtrlEdit, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E0AC0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ecx+0x5C]
	cmp eax,0xFFFFFFFF
	jle Block16

 Block1:
	mov edx,dword ptr [ecx+0x48]
	cmp eax,edx
	je Block16

 Block2:
	test eax,eax
	jl Block16

 Block3:
	mov esi,dword ptr [ecx+0x34]
	add ecx,0x34
	test esi,esi
	je Block5

 Block4:
	mov esi,dword ptr [esi-4]
	jmp Block6

 Block5:
	xor esi,esi

 Block6:
	cmp eax,esi
	jg Block16

 Block7:
	test edx,edx
	jl Block16

 Block8:
	mov esi,dword ptr [ecx]
	test esi,esi
	je Block10

 Block9:
	mov esi,dword ptr [esi-4]
	jmp Block11

 Block10:
	xor esi,esi

 Block11:
	cmp edx,esi
	jg Block16

 Block12:
	cmp eax,edx
	jle Block14

 Block13:
	mov esi,eax
	mov eax,edx
	mov edx,esi

 Block14:
	push edx
	push eax
	lea eax,[esp+0x10]
	push eax
	call ZXString<char>::Mid
	mov ecx,dword ptr [esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov dword ptr [esp+0x18],0
	call CWvsApp::SetClipboardText
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CCtrlEdit::Update
__SUB_CLASS_THIS0(000DE930, __thiscall, 6566,  CCtrlEdit, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[esi+4]
	call edx
	test eax,eax
	je Block3

 Block1:
	mov ecx,esi
	call CCtrlWnd::IsFocused
	test eax,eax
	je Block3

 Block2:
	mov eax,1
	push eax
	lea ecx,[esi+0x98]
	call CCtrlEdit::CEditCaret::Update
	pop esi
	ret

 Block3:
	xor eax,eax
	push eax
	lea ecx,[esi+0x98]
	call CCtrlEdit::CEditCaret::Update
	pop esi
	ret
}
}
// CCtrlEdit::InsertString
_SUB_EXCEPTION_HANDLER(E2A10)
__SUB_CLASS_THIS(000E2A10, __thiscall, 6597,  CCtrlEdit, long, NakedParam<ZXString<char>>, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E2A10
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
	xor ebp,ebp
	mov dword ptr [esp+0x28],ebp
	cmp dword ptr [esi+0x88],ebp
	je Block3

 Block1:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebp
	je Block14

 Block2:
	add eax,0xFFFFFFF4
	push eax
	jmp Block13

 Block3:
	mov ebx,dword ptr [esp+0x30]
	cmp ebx,ebp
	je Block6

 Block4:
	push offset _S___49
	lea ecx,[esp+0x34]
	call ZXString<char>::Compare
	test eax,eax
	jne Block6

 Block5:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	jmp Block12

 Block6:
	cmp dword ptr [esi+0x90],ebp
	je Block16

 Block7:
	mov al,byte ptr [ebx]
	cmp al,0x30
	jl Block9

 Block8:
	cmp al,0x39
	jle Block16

 Block9:
	cmp dword ptr [esi+0x34],ebp
	lea ecx,[esi+0x34]
	jne Block11

 Block10:
	push offset _S_
	call ZXString<char>::AssignCStr
	mov ebx,dword ptr [esp+0x30]

 Block11:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp ebx,ebp
	je Block14

 Block12:
	add ebx,0xFFFFFFF4
	push ebx

 Block13:
	call ZXString<char>::_Release
	add esp,4

 Block14:
	xor eax,eax

 Block15:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 0xC

 Block16:
	mov eax,dword ptr [esi+0x48]
	cmp eax,ebp
	mov dword ptr [esi+0x5C],eax
	jl Block11

 Block17:
	mov ecx,dword ptr [esi+0x34]
	lea edi,[esi+0x34]
	cmp ecx,ebp
	je Block19

 Block18:
	mov ecx,dword ptr [ecx-4]
	jmp Block20

 Block19:
	xor ecx,ecx

 Block20:
	cmp eax,ecx
	jg Block11

 Block21:
	push eax
	push ebp
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call ZXString<char>::Mid
	mov ecx,dword ptr [esi+0x48]
	add ecx,dword ptr [esi+0x4C]
	push 0xFFFFFFFF
	push ecx
	lea edx,[esp+0x20]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x34],1
	call ZXString<char>::Mid
	mov byte ptr [esp+0x28],2
	cmp dword ptr [esp+0x34],ebp
	je Block30

 Block22:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	je Block24

 Block23:
	mov ebx,dword ptr [eax-4]
	jmp Block25

 Block24:
	xor ebx,ebx

 Block25:
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block27

 Block26:
	mov edi,dword ptr [eax-4]
	jmp Block28

 Block27:
	xor edi,edi

 Block28:
	mov eax,dword ptr [esp+0x30]
	push eax
	mov ecx,esi
	call CCtrlEdit::GetNextCount_0
	add eax,edi
	add eax,ebx
	cmp eax,dword ptr [esi+0x8C]
	jle Block53

 Block29:
	lea ecx,[esp+0x30]
	call ZXString<char>::Empty
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	xor ebx,ebx
	mov dword ptr [esp+0x34],ebp
	call CWndMan::ClearComposition
	jmp Block54

 Block30:
	mov ebx,dword ptr [esp+0x14]
	cmp ebx,ebp
	je Block32

 Block31:
	mov edi,dword ptr [ebx-4]
	jmp Block33

 Block32:
	xor edi,edi

 Block33:
	mov ebp,dword ptr [esp+0x18]
	test ebp,ebp
	je Block35

 Block34:
	mov ecx,dword ptr [ebp-4]
	jmp Block36

 Block35:
	xor ecx,ecx

 Block36:
	mov edx,dword ptr [esp+0x30]
	test edx,edx
	je Block38

 Block37:
	mov eax,dword ptr [edx-4]
	jmp Block39

 Block38:
	xor eax,eax

 Block39:
	add eax,ecx
	add eax,edi
	cmp eax,dword ptr [esi+0x8C]
	jle Block53

 Block40:
	xor edi,edi

 Block41:
	test ebx,ebx
	je Block43

 Block42:
	mov ebx,dword ptr [ebx-4]
	jmp Block44

 Block43:
	xor ebx,ebx

 Block44:
	test ebp,ebp
	je Block46

 Block45:
	mov ebp,dword ptr [ebp-4]
	jmp Block47

 Block46:
	xor ebp,ebp

 Block47:
	lea ecx,[edi+edx]
	push ecx
	mov ecx,esi
	call CCtrlEdit::GetNextCount_0
	add eax,ebp
	add eax,ebx
	add eax,edi
	cmp eax,dword ptr [esi+0x8C]
	jg Block49

 Block48:
	mov edx,dword ptr [esp+0x30]
	lea eax,[edi+edx]
	push eax
	mov ecx,esi
	call CCtrlEdit::GetNextCount_0
	mov edx,dword ptr [esp+0x30]
	mov ebx,dword ptr [esp+0x14]
	mov ebp,dword ptr [esp+0x18]
	add edi,eax
	jmp Block41

 Block49:
	push edi
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x38]
	call ZXString<char>::Left
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x2C],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x28],2
	test eax,eax
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	mov ebx,dword ptr [esp+0x38]
	cmp ebx,edi
	jle Block54

 Block52:
	mov ebx,edi
	jmp Block54

 Block53:
	mov ebx,dword ptr [esp+0x38]

 Block54:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_add_assign_other_0
	mov ecx,eax
	call ZXString<char>::op_add_assign_other_0
	lea ecx,[esp+0x14]
	push ecx
	lea ecx,[esi+0x34]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block56

 Block55:
	mov eax,dword ptr [eax-4]
	jmp Block57

 Block56:
	xor eax,eax

 Block57:
	mov ecx,dword ptr [esi+0x48]
	lea edi,[ecx+eax]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block59

 Block58:
	mov edx,dword ptr [eax-4]
	jmp Block60

 Block59:
	xor edx,edx

 Block60:
	cmp edi,edx
	jle Block64

 Block61:
	test eax,eax
	je Block63

 Block62:
	mov edi,dword ptr [eax-4]
	jmp Block64

 Block63:
	xor edi,edi

 Block64:
	cmp dword ptr [esp+0x34],0
	je Block66

 Block65:
	mov edx,edi
	sub edx,ecx
	mov dword ptr [esi+0x4C],edx
	jmp Block67

 Block66:
	mov dword ptr [esi+0x48],edi
	mov dword ptr [esi+0x4C],0

 Block67:
	push 0
	push 1
	push ebx
	mov ecx,esi
	call CCtrlEdit::AdjustHorz
	mov eax,dword ptr [esp+0x18]
	sub edi,dword ptr [esi+0x48]
	mov byte ptr [esp+0x28],1
	test eax,eax
	je Block69

 Block68:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block69:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x28],0
	test eax,eax
	je Block71

 Block70:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block71:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block73

 Block72:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block73:
	mov eax,edi
	jmp Block15
}
}
// CCtrlEdit::DeleteString
_SUB_EXCEPTION_HANDLER(E3820)
__SUB_CLASS_THIS(000E3820, __thiscall, 6598,  CCtrlEdit, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E3820
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
	mov eax,dword ptr [esi+0x5C]
	cmp eax,0xFFFFFFFF
	jle Block3

 Block1:
	cmp eax,dword ptr [esi+0x48]
	je Block3

 Block2:
	xor ebx,ebx
	push ebx
	call CCtrlEdit::ExtractSelection
	push ebx
	push 1
	push ebx
	mov ecx,esi
	call CCtrlEdit::AdjustHorz
	mov ecx,esi
	call CCtrlWnd::InvalidateRect
	xor eax,eax
	jmp Block23

 Block3:
	xor ebx,ebx
	cmp dword ptr [esp+0x28],ebx
	je Block12

 Block4:
	call CCtrlEdit::GetNextCount_1
	mov ebp,eax
	mov dword ptr [esp+0x28],ebx
	mov eax,dword ptr [esi+0x48]
	push eax
	push ebx
	lea ecx,[esp+0x1C]
	lea edi,[esi+0x34]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x2C],ebx
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x24],1
	call ZXString<char>::op_assign
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
	mov edx,dword ptr [esi+0x48]
	push 0xFFFFFFFF
	add edx,ebp
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x20],2
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax-4]
	jmp Block9

 Block8:
	xor ecx,ecx

 Block9:
	push ecx
	push eax
	lea ecx,[esp+0x30]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	call ZXString<char>::op_assign
	jmp Block20

 Block12:
	call CCtrlEdit::GetPrevCount
	mov ebp,eax
	mov dword ptr [esp+0x28],ebx
	mov edx,dword ptr [esi+0x48]
	sub edx,ebp
	push edx
	push ebx
	lea eax,[esp+0x1C]
	lea edi,[esi+0x34]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x2C],3
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x24],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x20],3
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov ecx,dword ptr [esi+0x48]
	push 0xFFFFFFFF
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,edi
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x20],5
	cmp eax,ebx
	je Block16

 Block15:
	mov ecx,dword ptr [eax-4]
	jmp Block17

 Block16:
	xor ecx,ecx

 Block17:
	push ecx
	push eax
	lea ecx,[esp+0x30]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x20],3
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	lea eax,[esp+0x28]
	push eax
	mov ecx,edi
	call ZXString<char>::op_assign
	sub dword ptr [esi+0x48],ebp

 Block20:
	push ebx
	push 1
	push ebx
	mov ecx,esi
	call CCtrlEdit::AdjustHorz
	mov ecx,esi
	call CCtrlWnd::InvalidateRect
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp eax,ebx
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov eax,ebp

 Block23:
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
// CCtrlEdit::FilterString
_SUB_EXCEPTION_HANDLER(DFBF0)
__SUB_CLASS_THIS(000DFBF0, __thiscall, 6591,  CCtrlEdit, ZXString<char>*, ZXString<char>*, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_DFBF0
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
	cmp dword ptr [ecx+0x84],0
	mov ebx,1
	mov dword ptr [esp+0x20],ebx
	je Block10

 Block1:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block10

 Block2:
	cmp byte ptr [eax],0
	je Block10

 Block3:
	xor edi,edi
	mov dword ptr [esp+0x10],edi
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x20],2
	xor esi,esi
	call ZXString<char>::GetLength
	test eax,eax
	jle Block8

 Block4:
	jmp Block6

 Block6:
	push ebx
	push offset _S___39
	lea ecx,[esp+0x18]
	call ZXString<char>::_Cat
	lea ecx,[esp+0x2C]
	add esi,ebx
	call ZXString<char>::GetLength
	cmp esi,eax
	jl Block6

 Block7:
	mov edi,dword ptr [esp+0x10]

 Block8:
	mov esi,dword ptr [esp+0x28]
	lea eax,[esp+0x10]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x14],ebx
	mov byte ptr [esp+0x20],bl
	test edi,edi
	je Block11

 Block9:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4
	jmp Block11

 Block10:
	mov esi,dword ptr [esp+0x28]
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x14],ebx

 Block11:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 8
}
}
// CCtrlEdit::MoveCaret
__SUB_CLASS_THIS(000E2E90, __thiscall, 6573,  CCtrlEdit, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	cmp eax,3
	ja Block10

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5


 Block2:
	call CCtrlEdit::GetPrevCount
	sub dword ptr [esi+0x48],eax
	mov ecx,esi
	jmp Block9

 Block3:
	call CCtrlEdit::GetNextCount_1
	add dword ptr [esi+0x48],eax
	mov ecx,esi
	jmp Block9

 Block4:
	mov dword ptr [esi+0x48],0
	jmp Block9

 Block5:
	mov eax,dword ptr [esi+0x34]
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax-4]
	jmp Block8

 Block7:
	xor eax,eax

 Block8:
	mov dword ptr [esi+0x48],eax

 Block9:
	push 0
	push 0
	push 0
	call CCtrlEdit::AdjustHorz

 Block10:
	mov ecx,esi
	call CCtrlWnd::InvalidateRect
	pop esi
	ret 4
}
}
// CCtrlEdit::OnCreate
_SUB_EXCEPTION_HANDLER(E30C0)
__SUB_CLASS_THIS(000E30C0, __thiscall, 6589,  CCtrlEdit, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E30C0
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
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov edi,dword ptr [esp+0x6C]
	mov eax,dword ptr [edi+0x18]
	mov dword ptr [esi+0x7C],eax
	mov ecx,dword ptr [edi+0x24]
	mov dword ptr [esi+0x80],ecx
	mov edx,dword ptr [edi+0x28]
	mov dword ptr [esi+0x84],edx
	mov eax,dword ptr [edi+0x2C]
	mov dword ptr [esi+0x88],eax
	mov eax,dword ptr [edi+0x30]
	cmp eax,ebx
	jne Block2

 Block1:
	mov eax,0xFFFF

 Block2:
	mov dword ptr [esi+0x8C],eax
	mov ecx,dword ptr [edi+4]
	mov dword ptr [esi+0x38],ecx
	mov edx,dword ptr [edi+8]
	mov dword ptr [esi+0x3C],edx
	mov eax,dword ptr [edi+0x34]
	mov dword ptr [esi+0x90],eax
	mov ecx,dword ptr [edi+0xC]
	mov dword ptr [esi+0x40],ecx
	mov edx,dword ptr [edi+0x10]
	lea ebp,[esi+0x94]
	mov dword ptr [esi+0x44],edx
	mov eax,dword ptr [ebp]
	cmp eax,ebx
	je Block4

 Block3:
	mov dword ptr [ebp],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [edi+0x38]
	cmp eax,ebx
	je Block27

 Block5:
	cmp word ptr [eax],bx
	je Block27

 Block6:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	lea edx,[esp+0x2C]
	push edx
	mov dword ptr [esp+0x68],ebx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov eax,dword ptr [edi+0x38]
	push ebx
	push ebx
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov dword ptr [esp+0x80],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x7C],1
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x78],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea eax,[esp+0x60]
	mov byte ptr [esp+0x78],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],3
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block15

 Block13:
	cmp eax,0x80004002
	je Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov ebp,8
	mov byte ptr [esp+0x64],1
	cmp word ptr [esp+0x4C],bp
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	cmp eax,ebx
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov byte ptr [esp+0x64],0
	cmp word ptr [esp+0x2C],bp
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebx
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov dword ptr [esp+0x64],0xFFFFFFFF
	cmp word ptr [esp+0x3C],bp
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
	mov ecx,dword ptr [esi+0x38]
	mov edx,dword ptr [esi+0x1C]
	add ecx,ecx
	sub edx,ecx
	mov dword ptr [esi+0x4C],ebx
	mov dword ptr [esi+0x48],ebx
	mov dword ptr [esi+0x5C],0xFFFFFFFF
	mov dword ptr [esi+0x60],ebx
	mov dword ptr [esi+0x64],edx
	mov dword ptr [esi+0x58],ebx
	mov ebp,dword ptr [edi+0x20]
	cmp ebp,ebx
	je Block32

 Block28:
	mov eax,8
	push ebp
	mov word ptr [esp+0x40],ax
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [esp+0x44],eax
	cmp eax,ebx
	jne Block31

 Block29:
	cmp ebp,ebx
	je Block31

 Block30:
	push 0x8007000E
	call _com_issue_error

 Block31:
	lea ebp,[esp+0x3C]
	mov dword ptr [esp+0x64],4
	mov dword ptr [esp+0x14],1
	jmp Block33

 Block32:
	mov ebp,offset _D_VTEMPTY

 Block33:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C]
	push ebp
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	test byte ptr [esp+0x14],1
	mov dword ptr [esp+0x64],6
	je Block40

 Block36:
	cmp word ptr [esp+0x3C],8
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebx
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	lea edx,[esp+0x6C]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ebx,[esi+0x68]
	push ebx
	push eax
	mov byte ptr [esp+0x70],7
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x78]
	add esp,0xC
	mov byte ptr [esp+0x64],6
	test eax,eax
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block42:
	mov ecx,dword ptr [edi+0x1C]
	mov edx,dword ptr [edi+0x18]
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [edi+0x14]
	push ecx
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x7C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block44

 Block43:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block44:
	mov ecx,dword ptr [ebx]
	mov byte ptr [esp+0x74],8
	test ecx,ecx
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	mov byte ptr [esp+0x74],6
	call IWzFont::Create
	lea eax,[esp+0x6C]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ebp,[esi+0x70]
	push ebp
	push eax
	mov byte ptr [esp+0x70],9
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x78]
	add esp,0xC
	mov byte ptr [esp+0x64],6
	test eax,eax
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block48:
	mov edx,dword ptr [edi+0x18]
	mov eax,dword ptr [edi+0x14]
	lea ecx,[esp+0x1C]
	push ecx
	push 0xFFFFFFFF
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x7C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block50

 Block49:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block50:
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x74],0xA
	test ecx,ecx
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	mov byte ptr [esp+0x74],6
	call IWzFont::Create
	test dword ptr [esi+0x80],0xFF000000
	jne Block58

 Block53:
	mov eax,dword ptr [ebx]
	mov ebp,dword ptr [esi+0x6C]
	cmp ebp,eax
	je Block65

 Block54:
	mov dword ptr [esi+0x6C],eax
	test eax,eax
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block56:
	test ebp,ebp
	je Block65

 Block57:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx
	jmp Block65

 Block58:
	lea edx,[esp+0x6C]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ebp,[esi+0x6C]
	push ebp
	push eax
	mov byte ptr [esp+0x70],0xB
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x78]
	add esp,0xC
	mov byte ptr [esp+0x64],6
	test eax,eax
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block60:
	mov ecx,dword ptr [edi+0x18]
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [edi+0x14]
	push 0xFF404040
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x7C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block62

 Block61:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block62:
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x74],0xC
	test ecx,ecx
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	mov byte ptr [esp+0x74],6
	call IWzFont::Create

 Block65:
	lea edx,[esp+0x6C]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	xor ebx,ebx
	push ebx
	lea ebp,[esi+0x74]
	push ebp
	push eax
	mov byte ptr [esp+0x70],0xD
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x78]
	add esp,0xC
	mov byte ptr [esp+0x64],6
	cmp eax,ebx
	je Block67

 Block66:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block67:
	mov ecx,dword ptr [edi+0x18]
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [edi+0x14]
	push 0xFF000000
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x7C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block69

 Block68:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block69:
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x74],0xE
	cmp ecx,ebx
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	mov byte ptr [esp+0x74],6
	call IWzFont::Create
	lea edx,[esp+0x6C]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ebp,[esi+0x78]
	push ebp
	push eax
	mov byte ptr [esp+0x70],0xF
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x78]
	add esp,0xC
	mov byte ptr [esp+0x64],6
	cmp eax,ebx
	je Block73

 Block72:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block73:
	mov ecx,dword ptr [edi+0x18]
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [edi+0x14]
	push 0xFFFFFFFF
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x7C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block75

 Block74:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block75:
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x74],0x10
	cmp ecx,ebx
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	mov byte ptr [esp+0x74],6
	call IWzFont::Create
	push 0xFFFFFFFF
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x78],esp
	push edi
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,esi
	call CCtrlEdit::InsertString
	mov ecx,dword ptr [esi+0x24]
	lea edx,[esp+0x14]
	push edx
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x64],0x11
	cmp edi,ebx
	jne Block79

 Block78:
	push 0x80004003
	call _com_issue_error

 Block79:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xB0]
	lea ecx,[esp+0x6C]
	push ecx
	push edi
	mov dword ptr [esp+0x74],ebx
	call edx
	cmp eax,ebx
	jge Block81

 Block80:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block81:
	mov eax,dword ptr [esp+0x6C]
	mov edi,dword ptr [esi+0x18]
	mov ecx,dword ptr [esi+0x7C]
	inc eax
	push eax
	push ecx
	cmp edi,ebx
	jne Block83

 Block82:
	push 0x80004003
	call _com_issue_error

 Block83:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x70]
	lea eax,[esp+0x74]
	push eax
	push edi
	mov dword ptr [esp+0x7C],ebx
	call ecx
	cmp eax,ebx
	jge Block85

 Block84:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block85:
	mov edx,dword ptr [esi+0x44]
	add edx,dword ptr [esp+0x74]
	mov edi,dword ptr [esi+0x18]
	push edx
	cmp edi,ebx
	jne Block87

 Block86:
	push 0x80004003
	call _com_issue_error

 Block87:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x68]
	lea ecx,[esp+0x78]
	push ecx
	push edi
	mov dword ptr [esp+0x80],ebx
	call edx
	cmp eax,ebx
	jge Block89

 Block88:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block89:
	mov eax,dword ptr [esi+0x40]
	add eax,dword ptr [esp+0x78]
	mov ecx,dword ptr [esi+0x24]
	push eax
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push edx
	call CWnd::GetLayer
	lea ecx,[esi+0x98]
	call CCtrlEdit::CEditCaret::MakeCaret
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],6
	cmp eax,ebx
	je Block91

 Block90:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block91:
	mov dword ptr [esi+0x5C],ebx
	mov eax,dword ptr [esi+0x34]
	cmp eax,ebx
	je Block93

 Block92:
	mov eax,dword ptr [eax-4]
	jmp Block94

 Block93:
	xor eax,eax

 Block94:
	push 1
	push ebx
	push ebx
	mov ecx,esi
	mov dword ptr [esi+0x48],eax
	call CCtrlEdit::AdjustHorz
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0x64],0xFFFFFFFF
	jne Block97

 Block95:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret 4
}
}
// CCtrlEdit::WordSelect
_SUB_EXCEPTION_HANDLER(E0900)
__SUB_CLASS_THIS0(000E0900, __thiscall, 6566,  CCtrlEdit, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E0900
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
	lea eax,[esi+0x34]
	push eax
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x14],0
	call ZXString<char>::op_assign
	mov edx,dword ptr [esp+0x10]
	test edx,edx
	je Block2

 Block1:
	mov ebx,dword ptr [edx-4]
	jmp Block3

 Block2:
	xor ebx,ebx

 Block3:
	mov edi,dword ptr [esi+0x48]
	mov dword ptr [esi+0x5C],edi
	mov al,byte ptr [edi+edx]
	cmp al,0x20
	je Block20

 Block4:
	cmp al,9
	je Block20

 Block5:
	cmp al,0xD
	je Block20

 Block6:
	cmp al,0xA
	je Block20

 Block7:
	test edi,edi
	jle Block13

 Block8:
	mov ecx,dword ptr [esi+0x5C]
	mov al,byte ptr [ecx+edx-1]
	cmp al,0x20
	je Block13

 Block9:
	cmp al,9
	je Block13

 Block10:
	cmp al,0xD
	je Block13

 Block11:
	cmp al,0xA
	je Block13

 Block12:
	dec ecx
	mov dword ptr [esi+0x5C],ecx
	test ecx,ecx
	jg Block8

 Block13:
	cmp edi,ebx
	jge Block20

 Block14:
	lea ebx,[ebx]

 Block15:
	mov ecx,dword ptr [esi+0x48]
	mov al,byte ptr [ecx+edx]
	cmp al,0x20
	je Block20

 Block16:
	cmp al,9
	je Block20

 Block17:
	cmp al,0xD
	je Block20

 Block18:
	cmp al,0xA
	je Block20

 Block19:
	inc ecx
	cmp ecx,ebx
	mov dword ptr [esi+0x48],ecx
	jl Block15

 Block20:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test edx,edx
	je Block22

 Block21:
	add edx,0xFFFFFFF4
	push edx
	call ZXString<char>::_Release
	add esp,4

 Block22:
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
// CCtrlEdit::CCtrlEdit
__SUB_CLASS_THIS0(000DF870, __thiscall, 6564,  CCtrlEdit, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CCtrlWnd::_ctor_default
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlEdit::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlEdit::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlEdit::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x34],eax
	mov dword ptr [esi+0x50],eax
	mov dword ptr [esi+0x68],eax
	mov dword ptr [esi+0x6C],eax
	mov dword ptr [esi+0x70],eax
	mov dword ptr [esi+0x74],eax
	mov dword ptr [esi+0x78],eax
	mov dword ptr [esi+0x94],eax
	mov dword ptr [esi+0xAC],eax
	mov dword ptr [esi+0xA4],eax
	mov dword ptr [esi+0xB4],eax
	mov dword ptr [esi+0xB8],eax
	mov eax,esi
	pop esi
	ret
}
}
// CCtrlEdit::GetPrevCount
__SUB_CLASS_THIS0(000DE9B0, __thiscall, 6602,  CCtrlEdit, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x34]
	test eax,eax
	je Block2

 Block1:
	cmp byte ptr [eax],0
	jne Block3

 Block2:
	xor eax,eax
	ret

 Block3:
	push esi
	mov esi,dword ptr [ecx+0x48]
	add esi,eax
	push esi
	push eax
	call CharPrevA
	sub esi,eax
	mov eax,esi
	pop esi
	ret
}
}
// CCtrlEdit::GetNextCount
__SUB_CLASS_THIS0(000DE9E0, __thiscall, 6602,  CCtrlEdit, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x34]
	test eax,eax
	je Block2

 Block1:
	cmp byte ptr [eax],0
	jne Block3

 Block2:
	xor eax,eax
	ret

 Block3:
	push esi
	mov esi,dword ptr [ecx+0x48]
	add esi,eax
	push esi
	call CharNextA
	sub eax,esi
	pop esi
	ret
}
}
// CCtrlEdit::GetText
_SUB_EXCEPTION_HANDLER(E0750)
__SUB_CLASS_THIS(000E0750, __thiscall, 6567,  CCtrlEdit, ZXString<char>*, ZXString<char>*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E0750
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
	lea eax,[esp+0x18]
	mov dword ptr [esp+0x20],ebx
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	push eax
	call CWvsApp::GetClipboardText
	lea ecx,[esp+0x18]
	push ecx
	mov edi,1
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x30],edi
	mov dword ptr [esp+0x20],ebx
	call ZXString<char>::op_assign
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	mov byte ptr [esp+0x2C],3

 Block1:
	mov ebp,dword ptr [esp+0x1C]
	push ebp
	call CharNextA
	cmp eax,ebx
	je Block11

 Block2:
	mov ecx,eax
	lea esi,[ecx+1]

 Block3:
	mov dl,byte ptr [ecx]
	inc ecx
	cmp dl,bl
	jne Block3

 Block4:
	sub ecx,esi
	mov esi,ecx
	push esi
	push eax
	push ebx
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [esp+0x14]
	cmp esi,ebx
	je Block13

 Block5:
	mov ecx,dword ptr [esi-4]
	cmp ecx,ebx
	je Block13

 Block6:
	cmp ebp,ebx
	je Block8

 Block7:
	mov eax,dword ptr [ebp-4]
	jmp Block9

 Block8:
	xor eax,eax

 Block9:
	sub eax,ecx
	cmp eax,edi
	jg Block20

 Block10:
	lea edx,[esp+0x14]
	push edx
	lea ecx,[esp+0x20]
	call ZXString<char>::op_assign
	jmp Block1

 Block11:
	cmp esi,ebx
	je Block13

 Block12:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4
	xor esi,esi
	mov dword ptr [esp+0x14],esi

 Block13:
	cmp ebp,ebx
	je Block18

 Block14:
	cmp dword ptr [ebp-4],edi
	jle Block18

 Block15:
	mov edi,dword ptr [esp+0x34]
	mov dword ptr [edi],ebx
	mov dword ptr [esp+0x20],1
	mov byte ptr [esp+0x2C],2
	cmp esi,ebx
	je Block17

 Block16:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov byte ptr [esp+0x2C],1
	jmp Block23

 Block18:
	mov edi,dword ptr [esp+0x34]
	lea eax,[esp+0x18]
	push eax
	mov ecx,edi
	mov dword ptr [edi],ebx
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x20],1
	mov byte ptr [esp+0x2C],2
	cmp esi,ebx
	je Block22

 Block19:
	jmp Block21

 Block20:
	mov edi,dword ptr [esp+0x34]
	mov dword ptr [edi],ebx
	mov dword ptr [esp+0x20],1
	mov byte ptr [esp+0x2C],2

 Block21:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov byte ptr [esp+0x2C],1
	cmp ebp,ebx
	je Block24

 Block23:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x2C],bl
	cmp eax,ebx
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov eax,edi
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
// CCtrlEdit::MouseDblClk
__SUB_CLASS_THIS(000E2090, __thiscall, 6593,  CCtrlEdit, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CCtrlEdit::CalcCaretPos
	mov ecx,esi
	mov dword ptr [esi+0x48],eax
	call CCtrlEdit::WordSelect
	push 0
	push 0
	push 0
	mov ecx,esi
	call CCtrlEdit::AdjustHorz
	mov ecx,esi
	call CCtrlWnd::InvalidateRect
	pop esi
	ret 8
}
}
// CCtrlEdit::CREATEPARAM::CREATEPARAM
_SUB_EXCEPTION_HANDLER(E09E0)
__SUB_CLASS_THIS0(000E09E0, __thiscall, 6772,  CCtrlEdit::CREATEPARAM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E09E0
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
	mov dword ptr [esp+0x18],esi
	xor ebx,ebx
	mov dword ptr [esi],ebx
	lea edi,[esi+0x14]
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [edi],ebx
	mov dword ptr [esi+0x38],ebx
	push offset _S_
	mov byte ptr [esp+0x28],2
	call ZXString<char>::AssignCStr
	lea eax,[esp+0x14]
	push 0x1A25
	push eax
	mov dword ptr [esi+4],ebx
	mov dword ptr [esi+8],0xFFFFFFFE
	mov dword ptr [esi+0x10],ebx
	mov dword ptr [esi+0xC],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,eax
	cmp edi,ebp
	je Block5

 Block1:
	mov ecx,dword ptr [edi]
	cmp ecx,ebx
	je Block3

 Block2:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],ebx

 Block3:
	mov eax,dword ptr [ebp]
	mov dword ptr [edi],eax
	cmp eax,ebx
	je Block5

 Block4:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	je Block7

 Block6:
	call _xbstr_t::Data_t::Release

 Block7:
	mov dword ptr [esi+0x18],0xC
	mov dword ptr [esi+0x1C],0xFF000000
	mov dword ptr [esi+0x20],ebx
	mov dword ptr [esi+0x24],ebx
	mov dword ptr [esi+0x28],ebx
	mov dword ptr [esi+0x2C],ebx
	mov dword ptr [esi+0x30],ebx
	mov dword ptr [esi+0x34],ebx
	mov eax,esi
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
// CCtrlEdit::CEditCaret::MakeCaret
_SUB_EXCEPTION_HANDLER(DF080)
__SUB_CLASS_THIS(000DF080, __thiscall, 6628,  CCtrlEdit::CEditCaret, void, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_DF080
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
	mov edi,ecx
	mov dword ptr [esp+0x38],0
	call timeGetTime
	mov ecx,dword ptr [esp+0x48]
	mov edx,dword ptr [esp+0x4C]
	mov esi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [edi+8],eax
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [edi],eax
	lea eax,[esp+0x20]
	push eax
	mov dword ptr [edi+4],ecx
	mov dword ptr [edi+0x10],edx
	call esi
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
	mov byte ptr [esp+0x3C],1
	call esi
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
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x38],2
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x20]
	push edx
	mov edx,dword ptr [esp+0x54]
	lea eax,[esp+0x14]
	push eax
	mov eax,dword ptr [edi+0x10]
	push edx
	push eax
	push 1
	push 0
	push 0
	lea edx,[esp+0x60]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x14]
	cmp esi,eax
	je Block11

 Block7:
	mov dword ptr [edi+0x14],eax
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block9:
	test esi,esi
	je Block11

 Block10:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block11:
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block13:
	mov esi,8
	mov byte ptr [esp+0x38],1
	cmp word ptr [esp+0x10],si
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x18]
	xor ecx,ecx
	mov word ptr [esp+0x10],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [esp+0x38],0
	cmp word ptr [esp+0x20],si
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov ebx,3
	mov edx,ebx
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],0
	mov ecx,dword ptr [edi+0x14]
	mov byte ptr [esp+0x38],bl
	test ecx,ecx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea eax,[esp+0x20]
	push eax
	lea edx,[esp+0x48]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x38],4
	test esi,esi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov eax,dword ptr [edi+0x10]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFFFF
	push eax
	push 1
	push 0
	push 0
	push esi
	call edx
	test eax,eax
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x38],bl
	test eax,eax
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block29:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x38],0
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov ecx,dword ptr [esp+0x40]
	test ecx,ecx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea edx,[esp+0x48]
	push edx
	call IWzGr2DLayer::Getlt
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x38],5
	mov word ptr [esp+0x10],cx
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block37

 Block36:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block37:
	mov ecx,dword ptr [edi+0x14]
	mov bl,6
	mov byte ptr [esp+0x38],bl
	test ecx,ecx
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea edx,[esp+0x44]
	push edx
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x38],7
	test esi,esi
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	mov edx,dword ptr [esp+0x10]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block43

 Block42:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block43:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x38],bl
	test eax,eax
	je Block45

 Block44:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block45:
	mov esi,8
	mov byte ptr [esp+0x38],5
	cmp word ptr [esp+0x10],si
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [esp+0x10],ax
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[esp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x38],0
	test eax,eax
	je Block51

 Block50:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block51:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x10]
	push ecx
	call ebx
	lea edx,[esp+0x10]
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
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x3C],8
	call ebx
	lea ecx,[esp+0x20]
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
	mov ecx,dword ptr [edi+0x14]
	mov bl,9
	mov byte ptr [esp+0x38],bl
	test ecx,ecx
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	lea edx,[esp+0x44]
	push edx
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x38],0xA
	test ecx,ecx
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	lea eax,[esp+0x10]
	push eax
	mov eax,dword ptr [edi+4]
	lea edx,[esp+0x24]
	push edx
	mov edx,dword ptr [edi]
	push eax
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x38],bl
	test eax,eax
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov byte ptr [esp+0x38],8
	cmp word ptr [esp+0x20],si
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov byte ptr [esp+0x38],0
	cmp word ptr [esp+0x10],si
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x18]
	xor edx,edx
	mov word ptr [esp+0x10],dx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea eax,[esp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov esi,dword ptr [edi+0x14]
	test esi,esi
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xF4]
	push 2
	push esi
	call edx
	test eax,eax
	jge Block73

 Block72:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block73:
	mov esi,dword ptr [edi+0x14]
	test esi,esi
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block77

 Block76:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block77:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [edi+0xC],1
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block79

 Block78:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block79:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x2C
	ret 0x14
}
}
// CCtrlEdit::CEditCaret::Update
__SUB_CLASS_THIS(000DE6F0, __thiscall, 6630,  CCtrlEdit::CEditCaret, void, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	push esi
	mov esi,ecx
	je Block5

 Block1:
	call timeGetTime
	mov ecx,eax
	sub ecx,dword ptr [esi+8]
	mov eax,0x1B4E81B5
	mul ecx
	shr edx,5
	test dl,1
	jne Block5

 Block2:
	mov esi,dword ptr [esi+0x14]
	test esi,esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	jmp Block8

 Block5:
	mov esi,dword ptr [esi+0x14]
	test esi,esi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFF
	push esi
	call edx

 Block8:
	test eax,eax
	jge Block10

 Block9:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	pop esi
	ret 4
}
}
// CCtrlEdit::CIMECandWnd::OnDestroy
__SUB_CLASS_THIS0(000DE770, __thiscall, 6644,  CCtrlEdit::CIMECandWnd, void) {
__asm {

 Block0:
	test ecx,ecx
	je Block2

 Block1:
	lea eax,[ecx+4]
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::ReleaseCaptureWnd
	ret

 Block2:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	xor eax,eax
	push eax
	call CWndMan::ReleaseCaptureWnd
	ret
}
}
// CCtrlEdit::CIMECandWnd::OnActivate
__SUB_CLASS_THIS(000DF6D0, __thiscall, 6646,  CCtrlEdit::CIMECandWnd, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CCtrlEdit::OnIMEComp
__SUB_CLASS_THIS(000E2FA0, __thiscall, 6588,  IUIMsgHandler, void, const char*, ZArray<unsigned long>&, uint32_t, long, ZList<ZXString<char> >&, long, long, long) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	mov ebx,ecx
	push esi
	lea ebp,[ebx+0x4C]
	push edi
	mov ecx,ebp
	mov dword ptr [esp+0x10],ebx
	call ZArray<unsigned long>::RemoveAll
	mov edi,dword ptr [esp+0x1C]
	mov ecx,edi
	xor esi,esi
	call ZArray<unsigned long>::GetCount
	test eax,eax
	jbe Block3

 Block1:
	mov eax,dword ptr [edi]
	push 0xFFFFFFFF
	mov ecx,ebp
	lea ebx,[eax+esi*4]
	call ZArray<unsigned long>::InsertBefore
	mov ecx,dword ptr [ebx]
	mov dword ptr [eax],ecx
	mov ecx,edi
	inc esi
	call ZArray<unsigned long>::GetCount
	cmp esi,eax
	jb Block1

 Block2:
	mov ebx,dword ptr [esp+0x10]

 Block3:
	mov edx,dword ptr [esp+0x20]
	mov esi,dword ptr [esp+0x28]
	mov edi,dword ptr [esp+0x24]
	mov dword ptr [ebx+0x50],edx
	cmp dword ptr [esi+8],0
	jne Block5

 Block4:
	lea esi,[ebx-4]
	mov ecx,esi
	mov dword ptr [esp+0x1C],esi
	call CCtrlEdit::DestroyIMECandWnd
	jmp Block6

 Block5:
	mov edx,dword ptr [esp+0x34]
	xor eax,eax
	test edi,edi
	setge al
	lea ecx,[ebx-4]
	mov dword ptr [esp+0x1C],ecx
	push eax
	mov eax,dword ptr [esp+0x34]
	push edx
	mov edx,dword ptr [esp+0x34]
	push eax
	push edx
	push esi
	call CCtrlEdit::CreateIMECandWnd
	mov esi,dword ptr [esp+0x1C]

 Block6:
	mov ebp,dword ptr [esp+0x18]
	test ebp,ebp
	je Block8

 Block7:
	cmp byte ptr [ebp],0
	jne Block9

 Block8:
	cmp dword ptr [ebx+0x48],0
	je Block15

 Block9:
	push 0
	mov ecx,esi
	call CCtrlEdit::ExtractSelection
	push edi
	push 1
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [edi],0
	test ebp,ebp
	je Block14

 Block10:
	mov eax,ebp
	lea edx,[eax+1]
	jmp Block12

 Block12:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block12

 Block13:
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
	mov esi,dword ptr [esp+0x28]

 Block14:
	mov ecx,esi
	call CCtrlEdit::InsertString
	mov ecx,esi
	call CCtrlWnd::InvalidateRect

 Block15:
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 0x20
}
}
// CCtrlEdit::CreateIMECandWnd
_SUB_EXCEPTION_HANDLER(E2100)
__SUB_CLASS_THIS(000E2100, __thiscall, 6610,  CCtrlEdit, void, ZList<ZXString<char> >&, long, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E2100
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
	mov ecx,dword ptr [esp+0x8C]
	xor edi,edi
	cmp dword ptr [ecx+8],edi
	je Block66

 Block1:
	mov eax,dword ptr [esi+0x7C]
	cmp dword ptr [esp+0x9C],edi
	je Block28

 Block2:
	inc eax
	imul eax,dword ptr [esp+0x94]
	add eax,3
	xor ebx,ebx
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x14],edi
	mov dword ptr [esp+0x1C],ebx
	mov eax,dword ptr [ecx+0xC]
	mov dword ptr [esp+0x84],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,edi
	je Block25

 Block3:
	jmp Block6

 Block5:
	mov edi,dword ptr [esp+0x24]

 Block6:
	lea eax,[esp+0x20]
	push eax
	call ZList<ZXString<char>>::GetNext
	add esp,4
	lea ecx,[esp+0x28]
	push 0x1A15
	inc edi
	push ecx
	mov ebp,eax
	mov dword ptr [esp+0x2C],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x90],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x84],0
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x40]
	push eax
	call edi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block27

 Block9:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x88],2
	call edi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block27

 Block10:
	mov ebx,dword ptr [esp+0x1C]
	lea ecx,[esp+0x40]
	push ecx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push ebx
	mov byte ptr [esp+0x90],3
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x74]
	mov byte ptr [esp+0x8C],4
	test ecx,ecx
	je Block37

 Block11:
	mov byte ptr [esp+0x8C],3
	call IWzFont::CalcTextWidth
	lea edx,[esp+0x30]
	push edx
	push ecx
	mov edi,eax
	mov eax,dword ptr [ebp]
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x74]
	mov byte ptr [esp+0x8C],5
	test ecx,ecx
	je Block37

 Block12:
	mov byte ptr [esp+0x8C],3
	call IWzFont::CalcTextWidth
	mov ebp,8
	lea edi,[eax+edi+2]
	mov byte ptr [esp+0x84],2
	cmp word ptr [esp+0x30],bp
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov byte ptr [esp+0x84],0
	cmp word ptr [esp+0x40],bp
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block20:
	cmp edi,dword ptr [esp+0x14]
	jle Block22

 Block21:
	mov dword ptr [esp+0x14],edi

 Block22:
	cmp dword ptr [esp+0x20],0
	jne Block5

 Block23:
	cmp dword ptr [esp+0x14],0x10A
	jle Block25

 Block24:
	mov dword ptr [esp+0x14],0x320

 Block25:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0x7C]
	xor edi,edi
	lea eax,[edx+ecx+7]
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x84],0xFFFFFFFF
	cmp ebx,edi
	je Block29

 Block26:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4
	jmp Block29

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea ecx,[eax+0xA]
	add eax,4
	imul eax,dword ptr [esp+0x94]
	lea edx,[eax+eax+4]
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x14],edx

 Block29:
	mov eax,dword ptr [esi+0x50]
	cmp eax,edi
	je Block41

 Block30:
	cmp dword ptr [eax-4],edi
	je Block41

 Block31:
	mov ecx,dword ptr [esi+0x54]
	cmp ecx,edi
	jl Block41

 Block32:
	cmp eax,edi
	jne Block34

 Block33:
	xor eax,eax
	jmp Block35

 Block34:
	mov eax,dword ptr [eax-4]

 Block35:
	cmp ecx,eax
	jae Block41

 Block36:
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esi+0x54]
	mov edx,dword ptr [esi+0x50]
	lea eax,[esp+0x40]
	push eax
	lea eax,[edx+ecx*4]
	mov ecx,dword ptr [esi+0x48]
	add ecx,dword ptr [eax]
	lea edx,[esp+0x2C]
	push ecx
	push edx
	lea ecx,[esi+0x34]
	mov dword ptr [esp+0x90],6
	call ZXString<char>::Left
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,7
	push eax
	mov byte ptr [esp+0x90],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x68]
	mov byte ptr [esp+0x8C],8
	test ecx,ecx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	mov byte ptr [esp+0x8C],bl
	call IWzFont::CalcTextWidth
	lea edi,[esi+4]
	mov ebp,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	sub ebp,dword ptr [esi+0x60]
	mov byte ptr [esp+0x84],6
	sub ebp,dword ptr [esi+0x7C]
	lea ebp,[eax+ebp-4]
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block40:
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,edi
	call edx
	jmp Block42

 Block41:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x2C]
	lea edi,[esi+4]
	mov ecx,edi
	call eax
	mov ecx,dword ptr [esi+0x58]
	sub ecx,dword ptr [esi+0x60]
	mov edx,dword ptr [edi]
	mov ebp,eax
	mov eax,dword ptr [edx+0x30]
	add ebp,ecx
	mov ecx,edi
	call eax

 Block42:
	mov ecx,dword ptr [esi+0x7C]
	lea ebx,[eax+ecx+1]
	test ebp,ebp
	jge Block44

 Block43:
	xor ebp,ebp

 Block44:
	mov eax,dword ptr [esp+0x14]
	lea edx,[eax+ebp]
	cmp edx,0x320
	jle Block46

 Block45:
	mov ebp,0x320
	sub ebp,eax

 Block46:
	mov eax,dword ptr [esp+0x18]
	lea ecx,[ebx+eax]
	cmp ecx,0x258
	jle Block48

 Block47:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x30]
	mov ecx,edi
	call eax
	mov ebx,eax
	sub ebx,dword ptr [esp+0x18]
	dec ebx

 Block48:
	mov ecx,esi
	call CCtrlEdit::DestroyIMECandWnd
	push 0xAC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	xor edi,edi
	mov dword ptr [esp+0x84],9
	cmp eax,edi
	je Block50

 Block49:
	mov ecx,eax
	call CCtrlEdit::CIMECandWnd::_ctor_default
	jmp Block51

 Block50:
	xor eax,eax

 Block51:
	push eax
	lea ecx,[esi+0xB0]
	mov dword ptr [esp+0x88],0xFFFFFFFF
	call ZRef<CWnd>::op_assign_ptr
	int 3// TODO: 	mov dword ptr [esp+0x54],offset ZList<ZXString<char>>::`vftable'
	mov dword ptr [esp+0x5C],edi
	mov dword ptr [esp+0x60],edi
	mov dword ptr [esp+0x64],edi
	mov dword ptr [esp+0x74],edi
	mov dword ptr [esp+0x78],edi
	mov ecx,dword ptr [esp+0x9C]
	mov edx,dword ptr [esp+0x8C]
	push edi
	push edi
	push edi
	mov dword ptr [esp+0x5C],ecx
	push edx
	lea ecx,[esp+0x64]
	mov dword ptr [esp+0x94],0xA
	call ZList<ZXString<char>>::MoveAfter
	mov eax,dword ptr [esp+0x90]
	mov ecx,dword ptr [esp+0x94]
	mov edx,dword ptr [esp+0x98]
	mov dword ptr [esp+0x68],eax
	mov eax,dword ptr [esi+0x74]
	mov dword ptr [esp+0x6C],ecx
	mov ecx,dword ptr [esp+0x74]
	mov dword ptr [esp+0x70],edx
	cmp ecx,eax
	je Block56

 Block52:
	mov dword ptr [esp+0x94],ecx
	mov dword ptr [esp+0x74],eax
	cmp eax,edi
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x94]

 Block54:
	cmp ecx,edi
	je Block56

 Block55:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block56:
	mov eax,dword ptr [esi+0x78]
	mov ecx,dword ptr [esp+0x78]
	cmp ecx,eax
	je Block61

 Block57:
	mov dword ptr [esp+0x94],ecx
	mov dword ptr [esp+0x78],eax
	cmp eax,edi
	je Block59

 Block58:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax
	mov ecx,dword ptr [esp+0x94]

 Block59:
	cmp ecx,edi
	je Block61

 Block60:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax

 Block61:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi+0xB4]
	push edi
	push 1
	lea edx,[esp+0x58]
	push edx
	mov edx,dword ptr [esp+0x20]
	push 1
	push 0x7FFFFFFE
	push eax
	push edx
	push ebx
	push ebp
	call CWnd::CreateWnd
	mov eax,dword ptr [esp+0x78]
	mov dword ptr [esp+0x84],0xC
	cmp eax,edi
	je Block63

 Block62:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block63:
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x84],0xB
	cmp eax,edi
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block65:
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x54],offset ZList<ZXString<char>>::`vftable'
	call ZList<ZXString<char>>::RemoveAll

 Block66:
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x74
	ret 0x14
}
}
// CCtrlEdit::CIMECandWnd::Draw
_SUB_EXCEPTION_HANDLER(DFD00)
__SUB_CLASS_THIS(000DFD00, __thiscall, 6649,  CCtrlEdit::CIMECandWnd, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_DFD00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xBC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x2C],ebx
	lea eax,[esp+0x78]
	push eax
	call CWnd::GetCanvas
	mov esi,dword ptr [esp+0x78]
	xor ebp,ebp
	mov dword ptr [esp+0xC4],ebp
	cmp esi,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x24],ebp
	call eax
	cmp eax,ebp
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block6

 Block5:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov edi,dword ptr [ebx+0xA4]
	cmp edi,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x14]
	lea edx,[esp+0x18]
	push edx
	push edi
	mov dword ptr [esp+0x20],ebp
	call eax
	cmp eax,ebp
	jge Block10

 Block9:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push edi
	push eax
	call _com_issue_errorex

 Block10:
	mov edi,dword ptr [esp+0x14]
	mov ebp,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFF639FD2
	push edi
	push ebp
	push 0
	push 0
	push esi
	call edx
	test eax,eax
	jge Block12

 Block11:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block12:
	mov eax,dword ptr [esi]
	add edi,0xFFFFFFFE
	cmp dword ptr [ebx+0x80],0
	je Block70

 Block13:
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [eax+0x8C]
	push 0xFF6DAFE7
	push edi
	add ecx,2
	push ecx
	push 1
	push 1
	push esi
	call edx
	test eax,eax
	jge Block15

 Block14:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block15:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFFFF
	sub ebp,eax
	push edi
	mov dword ptr [esp+0x38],ebp
	add ebp,0xFFFFFFFB
	push ebp
	push 1
	add eax,4
	push eax
	push esi
	call edx
	test eax,eax
	jge Block17

 Block16:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block17:
	xor ecx,ecx
	mov dword ptr [esp+0x14],ecx
	mov eax,dword ptr [ebx+0x90]
	xor edi,edi
	mov byte ptr [esp+0xC4],1
	lea ebp,[ecx+2]
	mov dword ptr [esp+0x24],eax
	test eax,eax
	jne Block21

 Block18:
	mov byte ptr [esp+0xC4],0
	test ecx,ecx
	je Block105

 Block19:
	add ecx,0xFFFFFFF4
	push ecx
	jmp Block104

 Block20:
	mov edi,dword ptr [esp+0x28]

 Block21:
	lea eax,[esp+0x24]
	push eax
	call ZList<ZXString<char>>::GetNext
	add esp,4
	lea ecx,[esp+0x2C]
	push 0x1A15
	inc edi
	push ecx
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x30],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xD0],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x38]
	add esp,0xC
	mov byte ptr [esp+0xC4],1
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov eax,dword ptr [ebx+0x98]
	lea ecx,[eax+edi-1]
	mov edi,dword ptr [ZImports::_VariantInit]
	cmp dword ptr [ebx+0xA0],ecx
	jne Block45

 Block24:
	lea edx,[esp+0xAC]
	push edx
	call edi
	lea eax,[esp+0xAC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block25:
	lea ecx,[esp+0x7C]
	push ecx
	mov byte ptr [esp+0xC8],3
	call edi
	lea edx,[esp+0x7C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block26:
	mov edx,dword ptr [esp+0x14]
	lea eax,[esp+0xAC]
	push eax
	mov eax,dword ptr [ebx+0xA4]
	lea ecx,[esp+0x80]
	push ecx
	push eax
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xD8],4
	call _xbstr_t::_ctor_0
	push ebp
	mov byte ptr [esp+0xD8],5
	push 2
	mov ecx,esi
	mov byte ptr [esp+0xDC],4
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0xC4],3
	cmp word ptr [esp+0x7C],di
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x7C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov byte ptr [esp+0xC4],1
	cmp word ptr [esp+0xAC],di
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0xB4]
	xor edx,edx
	mov word ptr [esp+0xAC],dx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[esp+0xAC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov eax,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [esi]
	push 0xFF000000
	push eax
	add edx,0xFFFFFFF9
	push edx
	lea edi,[eax+5]
	mov eax,dword ptr [ecx+0x8C]
	push ebp
	push edi
	push esi
	call eax
	test eax,eax
	jge Block36

 Block35:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block36:
	lea ecx,[esp+0x8C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x8C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block37:
	lea eax,[esp+0x9C]
	push eax
	mov byte ptr [esp+0xC8],6
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x9C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block38:
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0x8C]
	push edx
	lea eax,[esp+0xA0]
	push eax
	mov eax,dword ptr [ebx+0xA8]
	push eax
	mov eax,dword ptr [ecx]
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xD8],7
	call _xbstr_t::_ctor_0
	push ebp
	mov byte ptr [esp+0xD8],8
	push edi
	mov ecx,esi
	mov byte ptr [esp+0xDC],7
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x9C],8
	mov byte ptr [esp+0xC4],6
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0xA4]
	xor edx,edx
	mov word ptr [esp+0x9C],dx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea eax,[esp+0x9C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block42:
	cmp word ptr [esp+0x8C],8
	mov byte ptr [esp+0xC4],1
	jne Block44

 Block43:
	mov eax,dword ptr [esp+0x94]
	xor ecx,ecx
	mov word ptr [esp+0x8C],cx
	jmp Block63

 Block44:
	lea edx,[esp+0x8C]
	push edx
	jmp Block66

 Block45:
	lea eax,[esp+0x64]
	push eax
	call edi
	lea ecx,[esp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block46:
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0xC8],9
	call edi
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block47:
	mov eax,dword ptr [ebx+0xA4]
	lea ecx,[esp+0x64]
	push ecx
	lea edx,[esp+0x48]
	push edx
	push eax
	mov eax,dword ptr [esp+0x20]
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xD8],0xA
	call _xbstr_t::_ctor_0
	push ebp
	mov byte ptr [esp+0xD8],0xB
	push 2
	mov ecx,esi
	mov byte ptr [esp+0xDC],0xA
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0xC4],9
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0xC4],1
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	lea edx,[esp+0x54]
	push edx
	call edi
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block56:
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0xC8],0xC
	call edi
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block57:
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x54]
	push eax
	mov eax,dword ptr [ebx+0xA4]
	lea ecx,[esp+0x38]
	push ecx
	push eax
	mov eax,dword ptr [edx]
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xD8],0xD
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x28]
	push ebp
	add eax,5
	mov byte ptr [esp+0xD8],0xE
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xDC],0xD
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0xC4],0xC
	cmp word ptr [esp+0x34],di
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov byte ptr [esp+0xC4],1
	cmp word ptr [esp+0x54],di
	jne Block65

 Block62:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]

 Block63:
	test eax,eax
	je Block67

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block65:
	lea ecx,[esp+0x54]
	push ecx

 Block66:
	call dword ptr [ZImports::_VariantClear]

 Block67:
	cmp dword ptr [esp+0x24],0
	mov edx,dword ptr [esp+0x18]
	lea ebp,[edx+ebp+1]
	jne Block20

 Block68:
	mov ecx,dword ptr [esp+0x14]
	jmp Block18

 Block69:
	push eax
	call _com_issue_error

 Block70:
	mov ecx,dword ptr [eax+0x8C]
	push 0xFFFFFFFF
	push edi
	add ebp,0xFFFFFFFE
	push ebp
	push 1
	push 1
	push esi
	call ecx
	test eax,eax
	jge Block72

 Block71:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block72:
	xor ebp,ebp
	mov dword ptr [esp+0x1C],ebp
	mov eax,dword ptr [ebx+0x90]
	mov byte ptr [esp+0xC4],0xF
	mov dword ptr [esp+0x24],ebp
	lea edi,[ebp+3]
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block102

 Block73:
	mov eax,dword ptr [esp+0x18]
	lea edx,[eax+eax+6]
	lea ecx,[eax+2]
	add eax,4
	mov dword ptr [esp+0x18],edx
	mov dword ptr [esp+0x20],ecx
	mov dword ptr [esp+0x14],eax
	jmp Block75

 Block75:
	lea edx,[esp+0x28]
	push edx
	call ZList<ZXString<char>>::GetNext
	mov ebp,dword ptr [esp+0x28]
	add esp,4
	mov ebx,eax
	lea eax,[esp+0x30]
	push 0x1A15
	inc ebp
	push eax
	mov dword ptr [esp+0x2C],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov byte ptr [esp+0xD0],0x10
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov byte ptr [esp+0xC4],0xF
	test eax,eax
	je Block77

 Block76:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block77:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x8C]
	push 0xFF639FD2
	push eax
	push ecx
	push 3
	push edi
	push esi
	call edx
	test eax,eax
	jge Block79

 Block78:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block79:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esi]
	push 0xFFFFFFFF
	push eax
	add eax,eax
	push eax
	mov eax,dword ptr [ecx+0x8C]
	push 4
	lea edx,[edi+1]
	push edx
	push esi
	call eax
	test eax,eax
	jge Block81

 Block80:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block81:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x34]
	push ecx
	call ebp
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block82:
	lea eax,[esp+0x54]
	push eax
	mov byte ptr [esp+0xC8],0x11
	call ebp
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block83:
	mov ecx,dword ptr [esp+0x2C]
	mov ebp,dword ptr [esp+0x1C]
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x58]
	push eax
	mov eax,dword ptr [ecx+0xA4]
	push eax
	push ecx
	mov dword ptr [esp+0x84],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0xD8],0x12
	call _xbstr_t::_ctor_0
	push 5
	lea edx,[edi+2]
	mov byte ptr [esp+0xD8],0x13
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xDC],0x12
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0xC4],0x11
	jne Block86

 Block84:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block87:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0xC4],0xF
	jne Block90

 Block88:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block91:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block92:
	lea eax,[esp+0x64]
	push eax
	mov byte ptr [esp+0xC8],0x14
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block93:
	mov ecx,dword ptr [esp+0x2C]
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x68]
	push eax
	mov eax,dword ptr [ecx+0xA4]
	push eax
	mov eax,dword ptr [ebx]
	push ecx
	mov dword ptr [esp+0x84],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xD8],0x15
	call _xbstr_t::_ctor_0
	mov edx,dword ptr [esp+0x24]
	push 5
	add edx,edi
	mov byte ptr [esp+0xD8],0x16
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xDC],0x15
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0xC4],0x14
	jne Block96

 Block94:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block97:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0xC4],0xF
	jne Block100

 Block98:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block101:
	cmp dword ptr [esp+0x28],0
	mov ecx,dword ptr [esp+0x14]
	lea edi,[edi+ecx*2]
	jne Block75

 Block102:
	mov byte ptr [esp+0xC4],0
	test ebp,ebp
	je Block105

 Block103:
	add ebp,0xFFFFFFF4
	push ebp

 Block104:
	call ZXString<char>::_Release
	add esp,4

 Block105:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [esp+0xC8],0xFFFFFFFF
	call eax
	mov ecx,dword ptr [esp+0xBC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xB4
	ret 4
}
}
// CCtrlEdit::OnSetFocus
__SUB_CLASS_THIS(000DE8B0, __thiscall, 6575,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	push esi
	mov esi,ecx
	je Block6

 Block1:
	cmp dword ptr [esi+0x24],0
	je Block7

 Block2:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test ecx,ecx
	je Block5

 Block3:
	cmp dword ptr [ecx+0x4690],0
	je Block5

 Block4:
	call CUserLocal::OnKeyDownSkillEnd

 Block5:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::ClearComposition
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 0
	call CWndMan::EnableIME
	mov ecx,dword ptr [esi+0x20]
	push 0
	call CWnd::InvalidateRect
	mov eax,1
	pop esi
	ret 4

 Block6:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x3C]
	push offset _S_
	call edx
	mov ecx,dword ptr [esi+0x20]
	push 0
	call CWnd::InvalidateRect

 Block7:
	mov eax,1
	pop esi
	ret 4
}
}
// CCtrlEdit::IsKindOf
__SUB_CLASS_THIS(000DF910, __thiscall, 6613,  CCtrlEdit, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CCtrlEdit::ms_RTTI_CCtrlEdit
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
// CCtrlEdit::Draw
_SUB_EXCEPTION_HANDLER(E2750)
__SUB_CLASS_THIS(000E2750, __thiscall, 6590,  CCtrlEdit, void, long, long, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E2750
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
	push 0
	lea eax,[esp+0x18]
	push eax
	call CCtrlWnd::GetCanvas
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x20]
	lea ecx,[esi+4]
	mov dword ptr [esp+0x54],0
	call eax
	mov ebp,dword ptr [esp+0x60]
	mov ebx,dword ptr [esp+0x5C]
	mov edi,dword ptr [esp+0x14]
	test eax,eax
	jne Block5

 Block1:
	test dword ptr [esi+0x80],0xFF000000
	je Block5

 Block2:
	test edi,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov eax,dword ptr [esi+0x20]
	mov ecx,dword ptr [esi+0x1C]
	push 0xFFFFFFFF
	push eax
	push ecx
	jmp Block9

 Block5:
	mov ecx,dword ptr [esi+0x80]
	test ecx,ecx
	je Block11

 Block6:
	test edi,edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov eax,dword ptr [esi+0x20]
	push ecx
	push eax
	mov eax,dword ptr [esi+0x1C]
	push eax

 Block9:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x8C]
	push ebp
	push ebx
	push edi
	call eax
	test eax,eax
	jge Block11

 Block10:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block11:
	mov eax,dword ptr [esi+0x38]
	lea ecx,[eax+ebx]
	mov dword ptr [esp+0x2C],ecx
	mov ecx,dword ptr [esi+0x3C]
	lea edx,[ecx+ebp]
	mov dword ptr [esp+0x30],edx
	mov edx,ebx
	sub edx,eax
	add edx,dword ptr [esi+0x1C]
	mov eax,dword ptr [esi+0x20]
	sub eax,ecx
	mov ecx,dword ptr [esi+0x24]
	add eax,ebp
	mov dword ptr [esp+0x34],edx
	lea edx,[esp+0x2C]
	mov dword ptr [esp+0x38],eax
	push edx
	lea eax,[esp+0x40]
	push eax
	call CWnd::ClipRect
	push 0x7FFFFFFF
	push 0
	push ecx
	mov eax,esp
	mov byte ptr [esp+0x60],1
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block13

 Block12:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block13:
	mov ecx,esi
	call CCtrlEdit::DrawTextLineRange
	cmp dword ptr [esi+0x94],0
	sete al
	test al,al
	sete al
	test al,al
	je Block30

 Block14:
	mov eax,dword ptr [esi+0x34]
	test eax,eax
	je Block16

 Block15:
	cmp byte ptr [eax],0
	jne Block30

 Block16:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esp+0x5C],eax
	test eax,eax
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x60]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [esp+0x68],0
	call eax
	test eax,eax
	jge Block20

 Block19:
	mov ecx,dword ptr [esp+0x5C]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block20:
	mov eax,dword ptr [esi+0x1C]
	sub eax,dword ptr [esp+0x60]
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [esp+0x18],eax
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esp+0x5C],eax
	test eax,eax
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x48]
	lea ecx,[esp+0x60]
	push ecx
	push eax
	mov dword ptr [esp+0x68],0
	call edx
	test eax,eax
	jge Block24

 Block23:
	mov ecx,dword ptr [esp+0x5C]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block24:
	mov eax,dword ptr [esi+0x20]
	sub eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x24],0xFF
	cdq
	sub eax,edx
	mov edx,3
	sar eax,1
	mov word ptr [esp+0x1C],dx
	mov esi,dword ptr [esi+0x94]
	mov byte ptr [esp+0x54],2
	test edi,edi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov edx,dword ptr [esp+0x18]
	lea ecx,[esp+0x1C]
	push ecx
	push esi
	add eax,ebp
	push eax
	add edx,ebx
	push edx
	mov ecx,edi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x54],1
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x54],0
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov dword ptr [esp+0x54],0xFFFFFFFF
	test edi,edi
	je Block36

 Block35:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block36:
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
// CCtrlEdit::DestroyIMECandWnd
__SUB_CLASS_THIS0(000DF7F0, __thiscall, 6566,  CCtrlEdit, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xB4]
	test ecx,ecx
	je Block3

 Block1:
	call CWnd::Destroy
	add esi,0xB0
	cmp dword ptr [esi+4],0
	je Block3

 Block2:
	push 0
	mov ecx,esi
	call ZRef<CWnd>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block3:
	pop esi
	ret
}
}
// CCtrlEdit::AdjustHorz
_SUB_EXCEPTION_HANDLER(E1750)
__SUB_CLASS_THIS(000E1750, __thiscall, 6600,  CCtrlEdit, void, long, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E1750
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
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0x10
	call CInputSystem::IsKeyPressed
	test eax,eax
	jne Block3

 Block1:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 1
	call CInputSystem::IsKeyPressed
	test eax,eax
	jne Block3

 Block2:
	mov dword ptr [esp+0x1C],ebx
	cmp dword ptr [esp+0x4C],ebx
	je Block4

 Block3:
	mov dword ptr [esp+0x1C],1

 Block4:
	cmp dword ptr [esp+0x48],ebx
	je Block6

 Block5:
	mov dword ptr [esp+0x1C],ebx

 Block6:
	push ecx
	mov ecx,esp
	lea eax,[esi+0x34]
	mov dword ptr [esp+0x50],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	call edx
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push eax
	mov dword ptr [esp+0x40],ebx
	call ebp
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	mov eax,dword ptr [esp+0x14]
	lea edx,[esp+0x24]
	push edx
	push ecx
	mov dword ptr [esp+0x54],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x48],1
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x68]
	mov byte ptr [esp+0x44],2
	cmp ecx,ebx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov byte ptr [esp+0x44],1
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x3C],0
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
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov edi,dword ptr [esp+0x44]
	cmp edi,ebx
	jge Block41

 Block15:
	lea eax,[esp+0x24]
	push eax
	call ebp
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov eax,dword ptr [esi+0x48]
	lea edx,[esp+0x24]
	push edx
	push eax
	push ebx
	lea ecx,[esp+0x58]
	push ecx
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x4C],3
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x50],esp
	mov ecx,esp
	mov bl,4
	push eax
	mov byte ptr [esp+0x48],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x68]
	mov byte ptr [esp+0x44],5
	test ecx,ecx
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	mov byte ptr [esp+0x44],bl
	call IWzFont::CalcTextWidth
	mov dword ptr [esi+0x58],eax
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x3C],3
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov edi,8
	mov byte ptr [esp+0x3C],0
	cmp word ptr [esp+0x24],di
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block25:
	cmp dword ptr [esi+0x4C],0
	je Block31

 Block26:
	lea ecx,[esp+0x24]
	push ecx
	call ebp
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov ecx,dword ptr [esi+0x4C]
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [esi+0x48]
	add ecx,eax
	push ecx
	push eax
	lea edx,[esp+0x58]
	push edx
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x4C],6
	mov dword ptr [esp+0x28],1
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x50],esp
	mov ecx,esp
	mov ebx,7
	push eax
	mov dword ptr [esp+0x48],ebx
	mov dword ptr [esp+0x24],3
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x68]
	mov dword ptr [esp+0x44],edi
	test ecx,ecx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov byte ptr [esp+0x44],bl
	call IWzFont::CalcTextWidth
	mov ebp,eax
	jmp Block32

 Block31:
	mov dword ptr [esp+0x4C],1
	mov ebp,dword ptr [esp+0x4C]

 Block32:
	mov ebx,dword ptr [esp+0x18]
	mov dword ptr [esp+0x3C],6
	test bl,2
	je Block35

 Block33:
	mov eax,dword ptr [esp+0x4C]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x18],ebx
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	mov dword ptr [esp+0x3C],0
	test bl,1
	je Block40

 Block36:
	cmp word ptr [esp+0x24],di
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ebx,dword ptr [esi+0x58]
	lea edi,[ebx+ebp]
	jmp Block74

 Block39:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov ebx,dword ptr [esi+0x58]
	lea edi,[ebx+ebp]
	jmp Block74

 Block41:
	lea edx,[esp+0x24]
	push edx
	call ebp
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	mov edx,dword ptr [esi+0x48]
	lea ecx,[esp+0x24]
	push ecx
	add edx,edi
	push edx
	push ebx
	lea eax,[esp+0x58]
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x4C],9
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x50],esp
	mov ecx,esp
	mov bl,0xA
	push eax
	mov byte ptr [esp+0x48],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x68]
	mov byte ptr [esp+0x44],0xB
	test ecx,ecx
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	mov byte ptr [esp+0x44],bl
	call IWzFont::CalcTextWidth
	mov dword ptr [esi+0x58],eax
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x3C],9
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	mov edi,8
	mov byte ptr [esp+0x3C],0
	cmp word ptr [esp+0x24],di
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	lea eax,[esp+0x24]
	push eax
	mov dword ptr [esp+0x50],1
	call ebp
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	mov eax,dword ptr [esi+0x48]
	lea edx,[esp+0x24]
	push edx
	push eax
	push 0
	lea ecx,[esp+0x54]
	push ecx
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x4C],0xC
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x4C],esp
	mov ecx,esp
	mov bl,0xD
	push eax
	mov byte ptr [esp+0x48],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x68]
	mov byte ptr [esp+0x44],0xE
	test ecx,ecx
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	mov byte ptr [esp+0x44],bl
	call IWzFont::CalcTextWidth
	mov ebx,eax
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0xC
	test eax,eax
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block57:
	mov byte ptr [esp+0x3C],0
	cmp word ptr [esp+0x24],di
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block61:
	lea ecx,[esp+0x24]
	push ecx
	call ebp
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block63

 Block62:
	push eax
	call _com_issue_error

 Block63:
	mov ecx,dword ptr [esi+0x4C]
	add ecx,dword ptr [esi+0x48]
	mov edi,dword ptr [esi+0x58]
	lea eax,[esp+0x24]
	push eax
	push ecx
	push 0
	lea edx,[esp+0x54]
	push edx
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x4C],0xF
	inc edi
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x4C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x48],0x10
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x68]
	mov byte ptr [esp+0x44],0x11
	test ecx,ecx
	jne Block65

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	mov byte ptr [esp+0x44],0x10
	call IWzFont::CalcTextWidth
	cmp edi,eax
	jge Block67

 Block66:
	mov edi,eax

 Block67:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0xF
	test eax,eax
	je Block69

 Block68:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block69:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],0
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov ebp,dword ptr [esp+0x4C]

 Block74:
	mov ecx,dword ptr [esi+0x64]
	mov edx,dword ptr [esi+0x60]
	add edx,ecx
	cmp edi,edx
	jle Block79

 Block75:
	cmp edi,dword ptr [esp+0x20]
	jge Block77

 Block76:
	mov eax,dword ptr [esi+0x7C]
	add eax,eax
	add eax,eax
	jmp Block78

 Block77:
	xor eax,eax

 Block78:
	sub eax,ecx
	add eax,edi
	mov dword ptr [esi+0x60],eax

 Block79:
	cmp ebx,dword ptr [esi+0x60]
	jge Block81

 Block80:
	mov eax,dword ptr [esi+0x7C]
	add eax,eax
	add eax,eax
	sub ebx,eax
	xor edx,edx
	mov eax,ebx
	test eax,eax
	setle dl
	dec edx
	and eax,edx
	mov dword ptr [esi+0x60],eax

 Block81:
	mov eax,dword ptr [esi+0x58]
	mov edi,dword ptr [esi+0x60]
	lea edx,[eax+ebp]
	add edi,ecx
	cmp edx,edi
	jle Block83

 Block82:
	mov edx,eax
	sub edx,ecx
	add edx,ebp
	mov dword ptr [esi+0x60],edx

 Block83:
	cmp eax,dword ptr [esi+0x60]
	jge Block85

 Block84:
	mov dword ptr [esi+0x60],eax

 Block85:
	sub eax,dword ptr [esi+0x60]
	push ebp
	push 0
	push eax
	lea ecx,[esi+0x98]
	call CCtrlEdit::CEditCaret::SetCaret
	cmp dword ptr [esp+0x1C],0
	jne Block87

 Block86:
	mov eax,dword ptr [esi+0x48]
	mov dword ptr [esi+0x5C],eax

 Block87:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block89

 Block88:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block89:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 0xC
}
}
// CCtrlEdit::~CCtrlEdit
_SUB_EXCEPTION_HANDLER(DF940)
__SUB_CLASS_THIS0(000DF940, __thiscall, 6566,  CCtrlEdit, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_DF940
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
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlEdit::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlEdit::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlEdit::`vftable'{for `ZRefCounted'}
	cmp dword ptr [esi+0xB4],0
	lea edi,[esi+0xB0]
	mov dword ptr [esp+0x18],9
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CWnd>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	lea ecx,[esi+0x98]
	mov byte ptr [esp+0x18],8
	call CCtrlEdit::CEditCaret::~CEditCaret
	mov eax,dword ptr [esi+0x94]
	mov byte ptr [esp+0x18],7
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x78]
	mov byte ptr [esp+0x18],6
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x74]
	mov byte ptr [esp+0x18],5
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x70]
	mov byte ptr [esp+0x18],4
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0x6C]
	mov byte ptr [esp+0x18],3
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi+0x68]
	mov byte ptr [esp+0x18],2
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	lea ecx,[esi+0x50]
	mov byte ptr [esp+0x18],1
	call ZArray<unsigned long>::RemoveAll
	mov eax,dword ptr [esi+0x34]
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov ecx,esi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CCtrlWnd::~CCtrlWnd
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CCtrlEdit::CIMECandWnd::~CIMECandWnd
_SUB_EXCEPTION_HANDLER(DF700)
__SUB_CLASS_THIS0(000DF700, __thiscall, 6644,  CCtrlEdit::CIMECandWnd, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_DF700
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
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlEdit::CIMECandWnd::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlEdit::CIMECandWnd::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlEdit::CIMECandWnd::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xA8]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xA4]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea ecx,[esi+0x84]
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZXString<char>>::`vftable'
	call ZList<ZXString<char>>::RemoveAll
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CWnd::~CWnd
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CCtrlEdit::OnIMEResult
__SUB_CLASS_THIS(000E2F00, __thiscall, 6582,  IUIMsgHandler, void, const char*) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,ecx
	push edi
	lea ecx,[esi+0x4C]
	call ZArray<unsigned long>::RemoveAll
	lea ebp,[esi-4]
	mov ecx,ebp
	call CCtrlEdit::DestroyIMECandWnd
	mov edi,dword ptr [esp+0x14]
	test edi,edi
	je Block2

 Block1:
	cmp byte ptr [edi],0
	jne Block3

 Block2:
	cmp dword ptr [esi+0x48],0
	je Block10

 Block3:
	push offset _S___49
	push edi
	call dword ptr [ZImports::_lstrcmpA]
	test eax,eax
	je Block5

 Block4:
	push 1
	mov ecx,ebp
	call CCtrlEdit::ExtractSelection

 Block5:
	push 0xFFFFFFFF
	push 0
	push ecx
	mov ebx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ebx],0
	test edi,edi
	je Block9

 Block6:
	mov eax,edi
	lea edx,[eax+1]
	mov edi,edi

 Block7:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block7

 Block8:
	sub eax,edx
	mov esi,eax
	push esi
	push edi
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
	mov ecx,ebp
	call CCtrlEdit::InsertString
	mov ecx,ebp
	call CCtrlWnd::InvalidateRect

 Block10:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// CCtrlEdit::MouseDown
__SUB_CLASS_THIS(000E2060, __thiscall, 6593,  CCtrlEdit, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CCtrlEdit::CalcCaretPos
	push 0
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esi+0x48],eax
	mov dword ptr [esi+0x5C],eax
	call CCtrlEdit::AdjustHorz
	mov ecx,esi
	call CCtrlWnd::InvalidateRect
	pop esi
	ret 8
}
}
// CCtrlEdit::MouseMove
__SUB_CLASS_THIS(000E20C0, __thiscall, 6593,  CCtrlEdit, void, long, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 1
	call CInputSystem::IsKeyPressed
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [esp+8]
	push eax
	mov ecx,esi
	call CCtrlEdit::CalcCaretPos
	push 0
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esi+0x48],eax
	call CCtrlEdit::AdjustHorz
	mov ecx,esi
	call CCtrlWnd::InvalidateRect

 Block2:
	pop esi
	ret 8
}
}
// CCtrlEdit::CIMECandWnd::CREATEPARAM::~CREATEPARAM
__SUB_CLASS_THIS0(000DF7C0, __thiscall, 6662,  CCtrlEdit::CIMECandWnd::CREATEPARAM, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x28]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x24]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea ecx,[esi+4]
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZXString<char>>::`vftable'
	pop esi
	jmp  ZList<ZXString<char>>::RemoveAll
}
}
// CCtrlEdit::CEditCaret::SetCaret
_SUB_EXCEPTION_HANDLER(DEA60)
__SUB_CLASS_THIS(000DEA60, __thiscall, 6629,  CCtrlEdit::CEditCaret, void, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_DEA60
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
	cmp dword ptr [edi+0xC],0
	je Block41

 Block1:
	call timeGetTime
	mov dword ptr [edi+8],eax
	mov esi,dword ptr [edi+0x14]
	test esi,esi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block5:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x24]
	push edx
	call esi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea ecx,[esp+0x14]
	push ecx
	mov dword ptr [esp+0x60],0
	call esi
	lea edx,[esp+0x14]
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
	mov ecx,dword ptr [edi+0x14]
	mov byte ptr [esp+0x5C],1
	test ecx,ecx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[esp+0x10]
	push eax
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x5C],2
	test ecx,ecx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea edx,[esp+0x24]
	push edx
	mov edx,dword ptr [edi+4]
	add edx,dword ptr [esp+0x6C]
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [edi]
	add eax,dword ptr [esp+0x6C]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x5C],1
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov ebp,8
	mov byte ptr [esp+0x5C],0
	cmp word ptr [esp+0x14],bp
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x24],bp
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block23:
	lea ecx,[esp+0x44]
	push ecx
	call esi
	lea edx,[esp+0x44]
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
	lea eax,[esp+0x34]
	push eax
	mov dword ptr [esp+0x60],3
	call esi
	lea ecx,[esp+0x34]
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
	mov ecx,dword ptr [edi+0x14]
	mov byte ptr [esp+0x5C],4
	test ecx,ecx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea edx,[esp+0x68]
	push edx
	call IWzGr2DLayer::Getrb
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x5C],5
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea eax,[esp+0x44]
	push eax
	mov eax,dword ptr [edi+0x10]
	lea edx,[esp+0x38]
	push edx
	mov edx,dword ptr [esp+0x74]
	push eax
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0x5C],4
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	mov byte ptr [esp+0x5C],3
	cmp word ptr [esp+0x34],bp
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x44],bp
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x50
	ret 0xC

 Block40:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x50
	ret 0xC
}
}
// CCtrlEdit::SetText
__SUB_CLASS_THIS(000E26A0, __thiscall, 6568,  CCtrlEdit, void, const char*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push edi
	mov edi,ecx
	test eax,eax
	jne Block2

 Block1:
	mov eax,offset _S_

 Block2:
	lea esi,[edi+0x34]
	push eax
	mov ecx,esi
	call ZXString<char>::AssignCStr
	mov esi,dword ptr [esi]
	test esi,esi
	je Block4

 Block3:
	mov esi,dword ptr [esi-4]
	jmp Block5

 Block4:
	xor esi,esi

 Block5:
	push 0
	push 1
	push 0
	mov ecx,edi
	mov dword ptr [edi+0x48],esi
	call CCtrlEdit::AdjustHorz
	mov ecx,edi
	call CCtrlWnd::InvalidateRect
	pop edi
	pop esi
	ret 4
}
}
// CCtrlEdit::CalcCaretPos
_SUB_EXCEPTION_HANDLER(E1D90)
__SUB_CLASS_THIS(000E1D90, __thiscall, 6601,  CCtrlEdit, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E1D90
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
	mov eax,dword ptr [ebp+0x60]
	add eax,dword ptr [esp+0x5C]
	push ecx
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	lea eax,[ebp+0x34]
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov edx,dword ptr [ebp]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x60]
	push eax
	mov ecx,ebp
	call edx
	mov edi,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x54],0
	test edi,edi
	je Block2

 Block1:
	cmp byte ptr [edi],0
	jne Block5

 Block2:
	mov dword ptr [esp+0x54],0xFFFFFFFF
	test edi,edi
	je Block4

 Block3:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block4:
	xor eax,eax
	jmp Block37

 Block5:
	mov ebx,edi
	push edi
	mov dword ptr [esp+0x1C],ebx
	call CharNextA
	mov dword ptr [esp+0x14],eax
	cmp edi,eax
	jb Block9

 Block6:
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block33

 Block7:
	mov esi,dword ptr [eax-4]
	jmp Block34

 Block8:
	mov ebx,dword ptr [esp+0x18]

 Block9:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block28

 Block10:
	lea edx,[esp+0x2C]
	push edx
	mov esi,edi
	push edi
	mov byte ptr [esp+0x5C],1
	sub esi,ebx
	call CharNextA
	sub eax,ebx
	push eax
	push esi
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x6C]
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x60],2
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x68]
	mov byte ptr [esp+0x5C],3
	test ecx,ecx
	je Block29

 Block11:
	mov byte ptr [esp+0x5C],2
	call IWzFont::CalcTextWidth
	shr eax,1
	mov ebx,eax
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x54],1
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x54],0
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block28

 Block18:
	lea edx,[esp+0x3C]
	push edx
	push esi
	push 0
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0x64],4
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x60],5
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x68]
	mov byte ptr [esp+0x5C],6
	test ecx,ecx
	je Block29

 Block19:
	mov byte ptr [esp+0x5C],5
	call IWzFont::CalcTextWidth
	add eax,ebx
	cmp eax,dword ptr [esp+0x20]
	mov eax,dword ptr [esp+0x24]
	seta bl
	mov byte ptr [esp+0x54],4
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x54],0
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	test bl,bl
	jne Block30

 Block26:
	mov edi,dword ptr [esp+0x14]
	push edi
	call CharNextA
	mov dword ptr [esp+0x14],eax
	cmp edi,eax
	jb Block8

 Block27:
	jmp Block6

 Block28:
	push eax
	call _com_issue_error

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov eax,dword ptr [esp+0x5C]
	sub edi,dword ptr [esp+0x18]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	mov eax,edi
	jmp Block37

 Block33:
	xor esi,esi

 Block34:
	mov dword ptr [esp+0x54],0xFFFFFFFF
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	mov eax,esi

 Block37:
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
// CCtrlEdit::DrawTextLineRange
_SUB_EXCEPTION_HANDLER(E1640)
__SUB_CLASS_THIS(000E1640, __thiscall, 6608,  CCtrlEdit, void, NakedParam<_x_com_ptr<IWzCanvas>>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E1640
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
	mov eax,dword ptr [esp+0x24]
	cmp eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x18],0
	jge Block13

 Block1:
	mov eax,dword ptr [esi+0x5C]
	or ecx,0xFFFFFFFF
	or edx,ecx
	cmp eax,ecx
	jle Block6

 Block2:
	mov edi,dword ptr [esi+0x48]
	cmp eax,edi
	je Block6

 Block3:
	jge Block5

 Block4:
	mov ecx,eax
	mov edx,edi
	jmp Block6

 Block5:
	mov ecx,edi
	mov edx,eax

 Block6:
	push edx
	push ecx
	push ecx
	mov ecx,esp
	lea eax,[esi+0x34]
	mov dword ptr [esp+0x34],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov edi,dword ptr [esi+0x18]
	mov byte ptr [esp+0x24],1
	test edi,edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x30]
	push edx
	push edi
	mov dword ptr [esp+0x38],0
	call eax
	test eax,eax
	jge Block10

 Block9:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block10:
	mov ecx,dword ptr [esi+0x3C]
	add ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [esp+0x2C]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x20],esp
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block12:
	mov ecx,esi
	mov byte ptr [esp+0x2C],0
	call CCtrlEdit::DrawTextLine

 Block13:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 0xC
}
}
// CCtrlEdit::CEditCaret::~CEditCaret
_SUB_EXCEPTION_HANDLER(DF010)
__SUB_CLASS_THIS0(000DF010, __thiscall, 6626,  CCtrlEdit::CEditCaret, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_DF010
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
	mov eax,dword ptr [esi+0x14]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [esi+0x14],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov esi,dword ptr [esi+0x14]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CCtrlEdit::CIMECandWnd::OnSetFocus
__SUB_CLASS_THIS(000DF6E0, __thiscall, 6647,  CCtrlEdit::CIMECandWnd, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
