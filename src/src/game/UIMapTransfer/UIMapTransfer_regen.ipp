#include "regen.hpp"
// UIMapTransfer.ipp
#include "UIMapTransfer.hpp"

// CUIMapTransfer::HitTest
__SUB_CLASS_THIS(003DF060, __thiscall, 61756,  CUIMapTransfer, int32_t, long, long, CCtrlWnd**) {
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
	dec edi
	mov ecx,0x12
	cmp ecx,edi
	sbb eax,eax
	neg eax
	inc eax

 Block4:
	pop edi
	pop esi
	ret 0xC
}
}
// CUIMapTransfer::Draw
_SUB_EXCEPTION_HANDLER(3DF5C0)
__SUB_CLASS_THIS(003DF5C0, __thiscall, 61750,  CUIMapTransfer, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DF5C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x6C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x80]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [esp+0x90]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	xor ebp,ebp
	mov dword ptr [esp+0x88],ebp
	mov dword ptr [esp+0x20],ebp
	mov esi,dword ptr [edi+0x108]
	neg esi
	sbb esi,esi
	lea edx,[esp+0x90]
	push 0x84A
	and esi,5
	push edx
	mov byte ptr [esp+0x90],1
	add esi,5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi+0xC8]
	mov eax,dword ptr [eax]
	push esi
	push ecx
	push eax
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x98],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0xA0]
	add esp,0x10
	mov byte ptr [esp+0x88],1
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	call ebx
	lea ecx,[esp+0x30]
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
	mov eax,dword ptr [esp+0x20]
	lea edx,[esp+0x30]
	push edx
	push ecx
	mov dword ptr [esp+0x98],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x94],3
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0xFC]
	mov byte ptr [esp+0x90],4
	cmp ecx,ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov byte ptr [esp+0x90],3
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x30],8
	mov esi,eax
	mov byte ptr [esp+0x88],1
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebp
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	lea eax,[esp+0x40]
	push eax
	call ebx
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x8C],5
	call ebx
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov eax,dword ptr [edi+0x100]
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push eax
	mov eax,dword ptr [esp+0x2C]
	push ecx
	mov dword ptr [esp+0xA0],esp
	mov ecx,esp
	mov bl,6
	push eax
	mov byte ptr [esp+0x9C],bl
	call _xbstr_t::_ctor_0
	mov ebp,dword ptr [esp+0x34]
	mov byte ptr [esp+0x98],7
	test ebp,ebp
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov ecx,0x97
	sub ecx,esi
	push 0x26
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0xA0],bl
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x88],5
	cmp word ptr [esp+0x30],si
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov byte ptr [esp+0x88],1
	cmp word ptr [esp+0x40],si
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov eax,dword ptr [edi+0xC0]
	test eax,eax
	je Block26

 Block25:
	mov eax,dword ptr [eax+0x38]
	jmp Block27

 Block26:
	xor eax,eax

 Block27:
	mov ebx,eax
	lea eax,[ebx+5]
	cmp ebx,eax
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x2C],eax
	jge Block70

 Block28:
	lea eax,[edi+ebx*4+0xCC]
	mov dword ptr [esp+0x90],0x52
	mov dword ptr [esp+0x1C],eax
	jmp Block30

 Block30:
	mov ecx,dword ptr [esp+0x1C]
	cmp dword ptr [ecx],0x3B9AC9FF
	je Block69

 Block31:
	cmp ebx,dword ptr [edi+0xC4]
	jne Block39

 Block32:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],ecx
	mov edx,dword ptr [edi+0xF4]
	mov ebx,dword ptr [esp+0x30]
	mov esi,dword ptr [ebp]
	sub esp,0x10
	mov eax,esp
	push edx
	mov edx,dword ptr [esp+0xA4]
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x48]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x50]
	add edx,0xFFFFFFFC
	push edx
	push 0xD
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esi+0x80]
	push ebp
	mov byte ptr [esp+0xA8],8
	call eax
	test eax,eax
	jge Block34

 Block33:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block34:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x88],1
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov ebx,dword ptr [esp+0x18]

 Block39:
	lea eax,[esp+0x28]
	push 0x6EC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x94],9
	call CItemInfo::GetMapString
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x88],0xB
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	mov eax,dword ptr [edi+0xF8]
	push 0x9E
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block43:
	lea eax,[esp+0x1C]
	push eax
	call format_string_1
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	cmp ebx,dword ptr [edi+0xC4]
	jne Block54

 Block44:
	lea ecx,[esp+0x50]
	push ecx
	call esi
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block45:
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x8C],0xC
	call esi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block46:
	lea edx,[esp+0x50]
	push edx
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x44]
	push eax
	push ebp
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x9C],0xD
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0x100]
	mov byte ptr [esp+0x98],0xE
	test ecx,ecx
	je Block5

 Block47:
	mov eax,dword ptr [esp+0xA0]
	push eax
	push 0x11
	mov byte ptr [esp+0xA0],0xD
	call IWzFont::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x88],0xC
	cmp word ptr [esp+0x40],si
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov byte ptr [esp+0x88],0xB
	cmp word ptr [esp+0x50],si
	jne Block53

 Block52:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	jmp Block63

 Block53:
	lea ecx,[esp+0x50]
	jmp Block66

 Block54:
	lea edx,[esp+0x70]
	push edx
	call esi
	lea eax,[esp+0x70]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block55:
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0x8C],0xF
	call esi
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block56:
	mov edx,dword ptr [esp+0x14]
	lea eax,[esp+0x70]
	push eax
	lea ecx,[esp+0x64]
	push ecx
	push ebp
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x9C],0x10
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0x104]
	mov byte ptr [esp+0x98],0x11
	test ecx,ecx
	je Block5

 Block57:
	mov eax,dword ptr [esp+0xA0]
	push eax
	push 0x11
	mov byte ptr [esp+0xA0],0x10
	call IWzFont::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x88],0xF
	cmp word ptr [esp+0x60],si
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea edx,[esp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov byte ptr [esp+0x88],0xB
	cmp word ptr [esp+0x70],si
	jne Block65

 Block62:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]

 Block63:
	test eax,eax
	je Block67

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block65:
	lea ecx,[esp+0x70]

 Block66:
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x88],1
	test eax,eax
	je Block69

 Block68:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block69:
	add dword ptr [esp+0x1C],4
	add dword ptr [esp+0x90],0x12
	inc ebx
	cmp ebx,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x18],ebx
	jl Block30

 Block70:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x88],0
	test eax,eax
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block72:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	call eax
	mov ecx,dword ptr [esp+0x80]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x78
	ret 4
}
}
// CUIMapTransfer::GetResult
_SUB_EXCEPTION_HANDLER(3E0590)
__SUB_CLASS_THIS(003E0590, __thiscall, 61758,  CUIMapTransfer, void, ZXString<char>&, unsigned long&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E0590
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
	mov ecx,dword ptr [esi+0xB8]
	lea eax,[esp+8]
	push eax
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esp+0x1C]
	push eax
	mov dword ptr [esp+0x18],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0xC4]
	test eax,eax
	jge Block4

 Block3:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [ecx],0x3B9AC9FF
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 8

 Block4:
	mov edx,dword ptr [esi+eax*4+0xCC]
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [eax],edx
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 8
}
}
// CUIMapTransfer::SetRet
_SUB_EXCEPTION_HANDLER(3E0250)
__SUB_CLASS_THIS(003E0250, __thiscall, 61753,  CUIMapTransfer, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E0250
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
	mov edi,dword ptr [esp+0x30]
	xor ebx,ebx
	cmp edi,1
	jne Block28

 Block1:
	mov eax,dword ptr [esi+0xC4]
	cmp eax,ebx
	jge Block12

 Block2:
	mov dword ptr [esp+0x30],ebx
	mov ecx,dword ptr [esi+0xB8]
	lea eax,[esp+0x10]
	push eax
	mov dword ptr [esp+0x2C],ebx
	call CCtrlEdit::GetText
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x2C],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x28],bl
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	push ebx
	push ebx
	lea ecx,[esp+0x38]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	lea ecx,[esp+0x30]
	push ebx
	push ecx
	call is_valid_character_name
	add esp,8
	test eax,eax
	jne Block6

 Block5:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x337
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	cmp eax,ebx
	jne Block22

 Block6:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x20CC]
	cmp eax,ebx
	je Block8

 Block7:
	add eax,4
	jmp Block9

 Block8:
	xor eax,eax

 Block9:
	push eax
	lea ecx,[esp+0x34]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jne Block11

 Block10:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0xBB2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	cmp eax,ebx
	jne Block22

 Block11:
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [esi+0xB8]
	push edx
	call CCtrlEdit::SetText
	jmp Block26

 Block12:
	mov ecx,dword ptr [esi+0x108]
	neg ecx
	sbb ecx,ecx
	and ecx,5
	add ecx,5
	cmp eax,ecx
	jge Block31

 Block13:
	call get_field
	lea ecx,[eax+0x16C]
	call TSecType<unsigned long>::GetData
	mov edx,dword ptr [esi+0xC4]
	cmp dword ptr [esi+edx*4+0xCC],eax
	jne Block15

 Block14:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push 0xBB6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	cmp eax,ebx
	jne Block31

 Block15:
	mov dword ptr [esp+0x30],ebx
	lea ecx,[esp+0x14]
	push 0x6EC
	push ecx
	mov dword ptr [esp+0x30],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esi+0xC4]
	push eax
	mov eax,dword ptr [esi+edx*4+0xCC]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov byte ptr [esp+0x34],3
	call CItemInfo::GetMapString
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x28],5
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	lea edx,[esp+0x18]
	push 0xBBA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x10]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x34],6
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x28],5
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea eax,[esp+0x44]
	mov dword ptr [esp+0x30],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	je Block24

 Block20:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x28],2
	cmp eax,ebx
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block31

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4

 Block24:
	mov ecx,dword ptr [esi+0xB8]
	push offset _S_
	call CCtrlEdit::SetText
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x28],2
	cmp eax,ebx
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	cmp dword ptr [esi+0x84],ebx
	jne Block31

 Block29:
	mov dword ptr [esi+0x80],edi
	mov dword ptr [esi+0x84],1
	cmp dword ptr [esi+0x14],ebx
	je Block31

 Block30:
	mov ecx,esi
	call CWnd::Destroy

 Block31:
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
// CUIMapTransfer::OnRegister
_SUB_EXCEPTION_HANDLER(3DFE30)
__SUB_CLASS_THIS0(003DFE30, __thiscall, 61749,  CUIMapTransfer, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DFE30
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
	mov ebp,ecx
	mov dword ptr [esp+0x24],ebp
	mov esi,dword ptr [ebp+0x108]
	neg esi
	sbb esi,esi
	and esi,5
	add esi,5
	xor eax,eax
	mov dword ptr [esp+0x14],0
	test esi,esi
	jle Block4

 Block1:
	lea ecx,[ebp+0xCC]

 Block2:
	cmp dword ptr [ecx],0x3B9AC9FF
	je Block27

 Block3:
	inc eax
	add ecx,4
	cmp eax,esi
	jl Block2

 Block4:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push 0xBB4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	test eax,eax
	jne Block26

 Block5:
	mov edi,dword ptr [_D_G_PSTAGE+4]
	test edi,edi
	je Block26

 Block6:
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[edi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block26

 Block7:
	lea ecx,[edi+0x16C]
	call TSecType<unsigned long>::GetData
	xor edi,edi
	mov ebx,eax
	test esi,esi
	jle Block12

 Block8:
	add ebp,0xCC

 Block9:
	cmp ebx,dword ptr [ebp]
	jne Block11

 Block10:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0xBB5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	test eax,eax
	jne Block26

 Block11:
	inc edi
	add ebp,4
	cmp edi,esi
	jl Block9

 Block12:
	mov eax,0x55E63B89
	mul ebx
	shr edx,0x19
	test edx,edx
	je Block15

 Block13:
	mov eax,0x431BDE83
	mul ebx
	mov eax,edx
	shr eax,0x12
	xor edx,edx
	mov ecx,0x64
	div ecx
	cmp edx,9
	je Block15

 Block14:
	cmp dword ptr [esp+0x14],0
	jne Block16

 Block15:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push 0xBB3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	test eax,eax
	jne Block26

 Block16:
	xor eax,eax
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x34],eax
	lea eax,[esp+0x20]
	push 0x6EC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	push ebx
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov byte ptr [esp+0x40],1
	call CItemInfo::GetMapString
	mov esi,eax
	lea edx,[esp+0x18]
	push 0xBB8
	mov bl,2
	push edx
	mov byte ptr [esp+0x3C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x40],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x34],bl
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x34],0
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea eax,[esp+0x28]
	mov dword ptr [esp+0x3C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block24

 Block23:
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [ecx+0x108]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edx
	push 0
	push 1
	call CWvsContext::SendMapTransferRequest

 Block24:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret

 Block27:
	mov dword ptr [esp+0x14],1
	jmp Block5
}
}
// CUIMapTransfer::UpdateFieldList
__SUB_CLASS_THIS(003DF0D0, __thiscall, 61760,  CUIMapTransfer, void, unsigned long*, int32_t) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,ecx
	mov esi,dword ptr [edi+0x108]
	mov ecx,dword ptr [esp+0x10]
	neg esi
	sbb esi,esi
	and esi,5
	add esi,5
	lea eax,[esi*4]
	push eax
	push ecx
	lea ebx,[edi+0xCC]
	push ebx
	call _memcpy
	add esp,0xC
	mov dword ptr [edi+0xC8],0
	test esi,esi
	jle Block5

 Block1:
	mov eax,1

 Block2:
	cmp dword ptr [ebx],0x3B9AC9FF
	je Block4

 Block3:
	add dword ptr [edi+0xC8],eax

 Block4:
	add ebx,4
	sub esi,eax
	jne Block2

 Block5:
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CUIMapTransfer::Update
__SUB_CLASS_THIS0(003DFC70, __thiscall, 61749,  CUIMapTransfer, void) {
__asm {

 Block0:
	sub esp,8
	push ebx
	xor ebx,ebx
	push esi
	mov esi,ecx
	mov dword ptr [esp+0xC],ebx
	cmp dword ptr [esi+0xC4],ebx
	jl Block8

 Block1:
	mov ecx,dword ptr [esi+0xB8]
	call CCtrlWnd::IsFocused
	test eax,eax
	je Block3

 Block2:
	push ebx
	mov ecx,esi
	mov dword ptr [esi+0xC4],0xFFFFFFFF
	call CWnd::InvalidateRect

 Block3:
	cmp dword ptr [esi+0xC4],ebx
	jl Block8

 Block4:
	mov eax,dword ptr [esi+0xA8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	call edx
	test eax,eax
	jne Block6

 Block5:
	mov eax,dword ptr [esi+0xA8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx

 Block6:
	mov eax,dword ptr [esi+0xA0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	call edx
	test eax,eax
	jne Block29

 Block7:
	mov eax,dword ptr [esi+0xA0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	mov ecx,esi
	pop esi
	pop ebx
	add esp,8
	jmp  CWnd::Update

 Block8:
	mov eax,dword ptr [esi+0xA8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	call edx
	test eax,eax
	je Block12

 Block9:
	mov ecx,dword ptr [esi+0xB8]
	lea eax,[esp+0xC]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	mov ebx,1
	test eax,eax
	je Block11

 Block10:
	cmp byte ptr [eax],0
	jne Block12

 Block11:
	mov byte ptr [esp+0xB],bl
	jmp Block13

 Block12:
	mov byte ptr [esp+0xB],0

 Block13:
	test bl,1
	je Block16

 Block14:
	mov eax,dword ptr [esp+0xC]
	and ebx,0xFFFFFFFE
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	cmp byte ptr [esp+0xB],0
	je Block18

 Block17:
	mov eax,dword ptr [esi+0xA8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax

 Block18:
	mov eax,dword ptr [esi+0xA8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x20]
	call eax
	test eax,eax
	jne Block21

 Block19:
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,dword ptr [esi+0xB8]
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	or ebx,2
	test eax,eax
	je Block21

 Block20:
	cmp byte ptr [eax],0
	mov byte ptr [esp+0xB],1
	jne Block22

 Block21:
	mov byte ptr [esp+0xB],0

 Block22:
	test bl,2
	je Block25

 Block23:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	cmp byte ptr [esp+0xB],0
	je Block27

 Block26:
	mov eax,dword ptr [esi+0xA8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax

 Block27:
	mov eax,dword ptr [esi+0xA0]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x20]
	call eax
	test eax,eax
	je Block29

 Block28:
	mov eax,dword ptr [esi+0xA0]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax

 Block29:
	mov ecx,esi
	pop esi
	pop ebx
	add esp,8
	jmp  CWnd::Update
}
}
// CUIMapTransfer::OnChildNotify
__SUB_CLASS_THIS(003DF0A0, __thiscall, 61755,  CUIMapTransfer, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push esi
	push 0
	mov esi,ecx
	call CWnd::InvalidateRect
	cmp dword ptr [esp+0xC],0x64
	jne Block2

 Block1:
	mov ecx,dword ptr [esp+8]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push ecx
	mov ecx,esi
	call edx

 Block2:
	pop esi
	ret 0xC
}
}
// CUIMapTransfer::DeleteSelectedField
__SUB_CLASS_THIS0(003DF230, __thiscall, 61749,  CUIMapTransfer, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xC4]
	test eax,eax
	jl Block2

 Block1:
	mov ecx,dword ptr [esi+0x108]
	mov edx,dword ptr [esi+eax*4+0xCC]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edx
	push 0
	call CWvsContext::SendMapTransferRequest
	mov dword ptr [esi+0xC4],0xFFFFFFFF

 Block2:
	pop esi
	ret
}
}
// CUIMapTransfer::OnCreate
_SUB_EXCEPTION_HANDLER(3E0640)
__SUB_CLASS_THIS(003E0640, __thiscall, 61751,  CUIMapTransfer, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E0640
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
	mov esi,ecx
	xor ebx,ebx
	push ebx
	push ebx
	lea edi,[esi+0x10C]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	lea eax,[esp+0x14]
	push 0x19B9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	push ebx
	push ebx
	push 0x7D0
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0xAC],ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov byte ptr [esp+0x94],1
	cmp eax,ebx
	je Block70

 Block1:
	add eax,8
	cmp eax,ebx
	je Block70

 Block2:
	lea ebp,[eax-8]
	cmp ebp,ebx
	je Block4

 Block3:
	lea edx,[ebp+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],ebp
	mov dword ptr [esp+0x2C],eax
	cmp eax,ebx
	je Block6

 Block5:
	push ebx
	lea ecx,[esp+0x2C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block6:
	mov byte ptr [esp+0x94],0
	cmp dword ptr [esp+0x1C],ebx
	je Block8

 Block7:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],ebx

 Block8:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	lea eax,[esp+0x14]
	push 0x19BA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	push ebx
	push ebx
	push 0x7D1
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0xAC],2
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov byte ptr [esp+0x94],3
	cmp eax,ebx
	je Block71

 Block11:
	add eax,8
	cmp eax,ebx
	je Block71

 Block12:
	lea ebp,[eax-8]
	cmp ebp,ebx
	je Block14

 Block13:
	lea edx,[ebp+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],ebp
	mov dword ptr [esp+0x2C],eax
	cmp eax,ebx
	je Block16

 Block15:
	push ebx
	lea ecx,[esp+0x2C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block16:
	mov byte ptr [esp+0x94],2
	cmp dword ptr [esp+0x1C],ebx
	je Block18

 Block17:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],ebx

 Block18:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block20:
	lea eax,[esp+0x14]
	push 0x19BB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	push ebx
	push ebx
	push 1
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0xAC],4
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov byte ptr [esp+0x94],5
	cmp eax,ebx
	je Block72

 Block21:
	add eax,8
	cmp eax,ebx
	je Block72

 Block22:
	lea ebp,[eax-8]
	cmp ebp,ebx
	je Block24

 Block23:
	lea edx,[ebp+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block24:
	mov eax,dword ptr [esi+0xA8]
	mov dword ptr [esi+0xA8],ebp
	mov dword ptr [esp+0x2C],eax
	cmp eax,ebx
	je Block26

 Block25:
	push ebx
	lea ecx,[esp+0x2C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block26:
	mov byte ptr [esp+0x94],4
	cmp dword ptr [esp+0x1C],ebx
	je Block28

 Block27:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],ebx

 Block28:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp eax,ebx
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block30:
	lea eax,[esp+0x14]
	push 0x1962
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	push 6
	push 0x8B
	push 2
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0xAC],6
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov byte ptr [esp+0x94],7
	cmp eax,ebx
	je Block73

 Block31:
	add eax,8
	cmp eax,ebx
	je Block73

 Block32:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block34

 Block33:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block34:
	mov eax,dword ptr [esi+0xB0]
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esp+0x2C],eax
	cmp eax,ebx
	je Block36

 Block35:
	push ebx
	lea ecx,[esp+0x2C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block36:
	mov byte ptr [esp+0x94],6
	cmp dword ptr [esp+0x1C],ebx
	je Block38

 Block37:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],ebx

 Block38:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp eax,ebx
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block40:
	lea eax,[esp+0x14]
	push 1
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xF8]
	add esp,8
	cmp edi,eax
	je Block45

 Block41:
	mov dword ptr [esi+0xF8],eax
	cmp eax,ebx
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block43:
	cmp edi,ebx
	je Block45

 Block44:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block45:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block47

 Block46:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block47:
	lea ecx,[esp+0x14]
	push 0x16
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x100]
	add esp,8
	cmp edi,eax
	je Block52

 Block48:
	mov dword ptr [esi+0x100],eax
	cmp eax,ebx
	je Block50

 Block49:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block50:
	cmp edi,ebx
	je Block52

 Block51:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block52:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	lea eax,[esp+0x14]
	push ebx
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xFC]
	add esp,8
	cmp edi,eax
	je Block59

 Block55:
	mov dword ptr [esi+0xFC],eax
	cmp eax,ebx
	je Block57

 Block56:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block57:
	cmp edi,ebx
	je Block59

 Block58:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block59:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block61

 Block60:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block61:
	lea ecx,[esp+0x14]
	push 0x14
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x104]
	add esp,8
	cmp edi,eax
	je Block66

 Block62:
	mov dword ptr [esi+0x104],eax
	cmp eax,ebx
	je Block64

 Block63:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block64:
	cmp edi,ebx
	je Block66

 Block65:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block66:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block68:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	call edi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block74

 Block69:
	push eax
	call _com_issue_error

 Block70:
	xor ebp,ebp
	jmp Block4

 Block71:
	xor ebp,ebp
	jmp Block14

 Block72:
	xor ebp,ebp
	jmp Block24

 Block73:
	xor edi,edi
	jmp Block34

 Block74:
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x98],8
	call edi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block76

 Block75:
	push eax
	call _com_issue_error

 Block76:
	push 0
	push 0
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x19B8
	mov bl,9
	push eax
	mov byte ptr [esp+0xB0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xA8],0xA
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
	lea ecx,[esp+0x54]
	push ecx
	mov byte ptr [esp+0xAC],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x9C],0xB
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xF4]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block81

 Block79:
	cmp eax,0x80004002
	je Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	mov ebp,8
	mov byte ptr [esp+0x94],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x40],bp
	jne Block84

 Block82:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea eax,[esp+0x40]
	push eax
	call ebx

 Block85:
	mov byte ptr [esp+0x94],8
	cmp word ptr [esp+0x18],bp
	jne Block88

 Block86:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block89:
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0x94],edi
	cmp word ptr [esp+0x30],bp
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea ecx,[esp+0x30]
	push ecx
	call ebx

 Block93:
	cmp dword ptr [esi+0x108],0
	mov ebx,0xC
	je Block98

 Block94:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x94],ebx
	test eax,eax
	je Block96

 Block95:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block97

 Block96:
	xor eax,eax

 Block97:
	push eax
	lea ecx,[esi+0xBC]
	mov dword ptr [esp+0x98],edi
	call ZRef<CCtrlScrollBar>::op_assign_ptr
	mov ecx,dword ptr [esi+0xC0]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0x5D
	push 0x4C
	push 0x8B
	push ebp
	push 1
	push 0xBB8
	push esi
	call eax
	mov eax,dword ptr [esi+0xC0]
	mov dword ptr [eax+0x34],0xA5
	mov ecx,dword ptr [esi+0xC0]
	push 6
	call CCtrlScrollBar::SetScrollRange

 Block98:
	lea ecx,[esp+0x50]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	xor ecx,ecx
	mov dword ptr [esp+0x58],ecx
	lea ecx,[esp+0x14]
	xor eax,eax
	push 0x1A25
	push ecx
	mov dword ptr [esp+0x9C],0xD
	mov dword ptr [esp+0x5C],eax
	mov dword ptr [esp+0x7C],edi
	mov dword ptr [esp+0x74],0xFF000000
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea edx,[esp+0x64]
	cmp edx,edi
	je Block103

 Block99:
	mov ecx,dword ptr [esp+0x64]
	test ecx,ecx
	je Block101

 Block100:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x64],0

 Block101:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x64],edi
	test edi,edi
	je Block103

 Block102:
	add edi,8
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block103:
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block105

 Block104:
	call _xbstr_t::Data_t::Release

 Block105:
	push offset _S_
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x6C],0xB
	mov dword ptr [esp+0x84],ebx
	call ZXString<char>::AssignCStr
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x94],0xE
	test eax,eax
	je Block107

 Block106:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block108

 Block107:
	xor eax,eax

 Block108:
	mov byte ptr [esp+0x94],0xD
	test eax,eax
	je Block127

 Block109:
	add eax,8
	je Block127

 Block110:
	lea edi,[eax-8]
	test edi,edi
	je Block112

 Block111:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block112:
	mov eax,dword ptr [esi+0xB8]
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block114

 Block113:
	push 0
	lea ecx,[esp+0x2C]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block114:
	mov ecx,dword ptr [esi+0xB8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x50]
	push eax
	push 0xD
	push 0x78
	push 0xE7
	push 0xE
	push 0x3E8
	push esi
	call edx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x28]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block119

 Block115:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block118

 Block116:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block118

 Block117:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block118:
	mov dword ptr [esp+0x2C],0

 Block119:
	mov eax,dword ptr [esi+0x108]
	lea ecx,[ebx+0x665]
	test eax,eax
	jne Block121

 Block120:
	lea ecx,[ebx+0x651]

 Block121:
	neg eax
	sbb eax,eax
	and eax,5
	add eax,5
	mov edi,eax
	lea edx,[edi*4]
	push edx
	push ecx
	lea ebp,[esi+0xCC]
	push ebp
	call _memcpy
	add esp,0xC
	test edi,edi
	jle Block126

 Block122:
	mov eax,1
	nop

 Block123:
	cmp dword ptr [ebp],0x3B9AC9FF
	je Block125

 Block124:
	add dword ptr [esi+0xC8],eax

 Block125:
	add ebp,4
	sub edi,eax
	jne Block123

 Block126:
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret 4

 Block127:
	xor edi,edi
	jmp Block112
}
}
// CUIMapTransfer::CUIMapTransfer
_SUB_EXCEPTION_HANDLER(3DF480)
__SUB_CLASS_THIS(003DF480, __thiscall, 61747,  CUIMapTransfer, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DF480
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
	xor edi,edi
	lea eax,[esi+0x91]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFF6F
	mov dword ptr [TSingleton<CUIMapTransfer>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIMapTransfer>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIMapTransfer::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIMapTransfer::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIMapTransfer::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0xC4],0xFFFFFFFF
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esi+0xF4],edi
	mov dword ptr [esi+0xF8],edi
	mov dword ptr [esi+0xFC],edi
	mov dword ptr [esi+0x100],edi
	mov dword ptr [esi+0x104],edi
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esi+0x108],eax
	mov dword ptr [esi+0x10C],edi
	mov dword ptr [esi+0x110],edi
	mov dword ptr [esi+0x114],edi
	mov dword ptr [esi+0x118],edi
	mov dword ptr [esi+0x11C],edi
	lea ecx,[esp+0x20]
	push 0x19B7
	push ecx
	mov byte ptr [esp+0x20],0xD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 1
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x28],0xE
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x18],0xD
	cmp eax,edi
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
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
// CUIMapTransfer::OnDelete
_SUB_EXCEPTION_HANDLER(3E00E0)
__SUB_CLASS_THIS0(003E00E0, __thiscall, 61749,  CUIMapTransfer, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E00E0
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
	mov esi,ecx
	cmp dword ptr [esi+0xC4],0
	jl Block11

 Block1:
	mov dword ptr [esp+0xC],0
	lea eax,[esp+0x18]
	push 0x6EC
	push eax
	mov dword ptr [esp+0x30],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xC4]
	mov edx,dword ptr [esi+ecx*4+0xCC]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x34],1
	call CItemInfo::GetMapString
	mov edi,eax
	lea ecx,[esp+0x10]
	push 0xBB9
	push ecx
	mov byte ptr [esp+0x30],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [edi]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x14]
	push eax
	mov byte ptr [esp+0x34],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x1C]
	add esp,0xC
	mov byte ptr [esp+0x28],2
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x28],1
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x28],0
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea edx,[esp+0x20]
	mov dword ptr [esp+0x30],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block9

 Block8:
	mov ecx,esi
	call CUIMapTransfer::DeleteSelectedField

 Block9:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
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
	add esp,0x20
	ret
}
}
// CUIMapTransfer::~CUIMapTransfer
_SUB_EXCEPTION_HANDLER(3DF2C0)
__SUB_CLASS_THIS0(003DF2C0, __thiscall, 61749,  CUIMapTransfer, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DF2C0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIMapTransfer::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIMapTransfer::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIMapTransfer::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0x10C]
	mov dword ptr [esp+0x1C],0xC
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0x104]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],0xB
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x100]
	mov byte ptr [esp+0x1C],0xA
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xFC]
	mov byte ptr [esp+0x1C],9
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xF8]
	mov byte ptr [esp+0x1C],8
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0xF4]
	mov byte ptr [esp+0x1C],7
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	lea edi,[esi+0xBC]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0xB4]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	lea edi,[esi+0xAC]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block16

 Block15:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block16:
	lea edi,[esi+0xA4]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block18

 Block17:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block18:
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block20

 Block19:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block20:
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block22

 Block21:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block22:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIMapTransfer>::ms_pInstance],ebx
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
// CUIMapTransfer::OnButtonClicked
__SUB_CLASS_THIS(003E0ED0, __thiscall, 61752,  CUIMapTransfer, void, uint32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,edx
	sub eax,0x7D0
	je Block4

 Block1:
	sub eax,1
	jne Block5

 Block2:
	call CUIMapTransfer::OnDelete

 Block3:
	ret 4

 Block4:
	call CUIMapTransfer::OnRegister
	ret 4

 Block5:
	cmp edx,1
	jne Block7

 Block6:
	mov eax,dword ptr [ecx]
	mov dword ptr [esp+4],edx
	mov edx,dword ptr [eax+0x34]
	jmp edx

 Block7:
	cmp edx,2
	jne Block9

 Block8:
	mov eax,dword ptr [ecx]
	mov dword ptr [esp+4],edx
	mov edx,dword ptr [eax+0x34]
	jmp edx

 Block9:
	cmp edx,8
	jne Block3

 Block10:
	mov eax,dword ptr [ecx]
	mov dword ptr [esp+4],edx
	mov edx,dword ptr [eax+0x34]
	jmp edx
}
}
// CUIMapTransfer::OnMouseButton
__SUB_CLASS_THIS(003DF270, __thiscall, 61754,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test ecx,ecx
	je Block2

 Block1:
	lea eax,[ecx+4]
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	push eax
	call CWndMan::SetFocus
	cmp dword ptr [esp+8],0x201
	jne Block6

 Block4:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x10]
	push eax
	add esi,0xFFFFFFFC
	push ecx
	mov ecx,esi
	call CUIMapTransfer::GetMapIndexFromPoint
	test eax,eax
	je Block6

 Block5:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block6:
	pop esi
	ret 0x10
}
}
// CUIMapTransfer::GetMapIndexFromPoint
__SUB_CLASS_THIS(003DF150, __thiscall, 61761,  CUIMapTransfer, int32_t, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,dword ptr [esp+0x18]
	push ebp
	mov ebp,dword ptr [esp+0x20]
	push esi
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0x108]
	xor esi,esi
	neg eax
	sbb eax,eax
	and eax,5
	add eax,5
	test eax,eax
	jle Block9

 Block1:
	lea ecx,[edi+0xCC]
	mov dword ptr [esp+0x24],ecx

 Block2:
	mov eax,dword ptr [edi+0xC0]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax+0x38]
	jmp Block5

 Block4:
	xor ecx,ecx

 Block5:
	mov eax,esi
	sub eax,ecx
	lea eax,[eax+eax*8]
	lea eax,[eax+eax+0x4E]
	lea edx,[eax+0x11]
	push edx
	push 0x87
	push eax
	push 0xD
	lea eax,[esp+0x20]
	push eax
	call SetRect
	push ebp
	push ebx
	lea ecx,[esp+0x18]
	push ecx
	call PtInRect
	test eax,eax
	je Block8

 Block6:
	mov edx,dword ptr [esp+0x24]
	cmp dword ptr [edx],0x3B9AC9FF
	je Block8

 Block7:
	cmp dword ptr [edi+0xC4],esi
	jne Block10

 Block8:
	add dword ptr [esp+0x24],4
	mov eax,dword ptr [edi+0x108]
	inc esi
	neg eax
	sbb eax,eax
	and eax,5
	add eax,5
	cmp esi,eax
	jl Block2

 Block9:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 8

 Block10:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test ecx,ecx
	je Block12

 Block11:
	lea eax,[ecx+4]
	jmp Block13

 Block12:
	xor eax,eax

 Block13:
	push eax
	call CWndMan::SetFocus
	mov dword ptr [edi+0xC4],esi
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,0x10
	ret 8
}
}
