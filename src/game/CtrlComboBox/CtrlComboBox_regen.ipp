#include "regen.hpp"
// CtrlComboBox.ipp
#include "CtrlComboBox.hpp"

// CCtrlComboBox::Update
__SUB_CLASS_THIS0(000D8320, __thiscall, 6793,  CCtrlComboBox, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x64],1
	jne Block4

 Block1:
	cmp dword ptr [esi+0x4C],0
	jne Block4

 Block2:
	call get_update_time
	sub eax,dword ptr [esi+0x70]
	cmp eax,0x12C
	jle Block4

 Block3:
	mov dword ptr [esi+0x64],0
	mov ecx,esi
	pop esi
	jmp  CCtrlWnd::InvalidateRect

 Block4:
	pop esi
	ret
}
}
// CCtrlComboBoxSelect::GetRTTI
__SUB_CLASS_THIS0(000D84E0, __thiscall, 12507,  CCtrlComboBoxSelect, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CCtrlComboBoxSelect::ms_RTTI_CCtrlComboBoxSelect
	ret
}
}
// CCtrlComboBoxSelect::CCtrlComboBoxSelect
__SUB_CLASS_THIS(000D8480, __thiscall, 12496,  CCtrlComboBoxSelect, void, CCtrlComboBox*, long, long, FONT_TYPE, FONT_TYPE, long, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CCtrlWnd::_ctor_default
	mov eax,dword ptr [esp+8]
	mov ecx,dword ptr [esp+0xC]
	mov edx,dword ptr [esp+0x10]
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlComboBoxSelect::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlComboBoxSelect::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlComboBoxSelect::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x48],0
	mov dword ptr [esi+0x50],eax
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esi+0x40],eax
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esi+0x34],ecx
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esi+0x38],edx
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [esi+0x4C],eax
	mov dword ptr [esi+0x44],ecx
	mov dword ptr [esi+0x3C],edx
	mov eax,esi
	pop esi
	ret 0x1C
}
}
// CCtrlComboBox::OnMouseEnter
__SUB_CLASS_THIS(000D80E0, __thiscall, 6800,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	push edi
	mov esi,ecx
	call CCtrlWnd::OnMouseEnter
	test edi,edi
	je Block3

 Block1:
	mov eax,3
	cmp dword ptr [esi+0x60],eax
	je Block5

 Block2:
	lea ecx,[esi-4]
	mov dword ptr [esi+0x60],eax
	call CCtrlWnd::InvalidateRect
	pop edi
	pop esi
	ret 4

 Block3:
	cmp dword ptr [esi+0x60],3
	jne Block5

 Block4:
	mov dword ptr [esi+0x60],0

 Block5:
	lea ecx,[esi-4]
	call CCtrlWnd::InvalidateRect
	pop edi
	pop esi
	ret 4
}
}
// CCtrlComboBox::Delete
__SUB_CLASS_THIS(000D96D0, __thiscall, 6814,  CCtrlComboBox, void, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push edi
	mov dword ptr [esi+0x68],0
	call CCtrlComboBox::RemoveSelectWnd
	mov eax,dword ptr [esp+0xC]
	lea edi,[esi+0x34]
	push eax
	mov ecx,edi
	call ZList<CCtrlComboBox::ITEM_INFO>::FindIndex
	push eax
	mov ecx,edi
	call ZList<CCtrlComboBox::ITEM_INFO>::RemoveAt
	mov ecx,esi
	call CCtrlComboBox::MakeSelectWnd
	mov ecx,esi
	call CCtrlWnd::InvalidateRect
	pop edi
	pop esi
	ret 4
}
}
// CCtrlComboBox::Draw
_SUB_EXCEPTION_HANDLER(DD250)
__SUB_CLASS_THIS(000DD250, __thiscall, 6796,  CCtrlComboBox, void, long, long, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_DD250
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1A4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1B8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	push ebx
	lea eax,[esp+0x28]
	push eax
	mov dword ptr [esp+0x1C],ebx
	call CCtrlWnd::GetCanvas
	mov eax,dword ptr [esi+0x60]
	mov dword ptr [esp+0x1C0],ebx
	cmp eax,5
	ja Block210

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block136
cmp EAX, 2
je Block2
cmp EAX, 3
je Block2
cmp EAX, 4
je Block2
cmp EAX, 5
je Block2


 Block2:
	mov eax,dword ptr [esi+0xA8]
	sub eax,1
	je Block57

 Block3:
	sub eax,1
	jne Block210

 Block4:
	lea ecx,[esp+0x74]
	push ecx
	mov ecx,esi
	call CCtrlComboBox::GetStartCanvas
	mov edi,eax
	lea edx,[esp+0x34]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x1C4],0x15
	call CCtrlComboBox::GetButtonCanvas
	mov ebx,eax
	lea eax,[esp+0x80]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x1C4],0x16
	call CCtrlComboBox::GetLineCanvas
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x1C0],0x17
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov ebx,dword ptr [ebx]
	test ebx,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ebp,dword ptr [eax]
	test ebp,ebp
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	call IWzCanvas::Getwidth
	mov edi,dword ptr [esi+0x1C]
	mov ecx,ebx
	sub edi,eax
	call IWzCanvas::Getwidth
	sub edi,eax
	mov ecx,ebp
	dec edi
	call IWzCanvas::Getwidth
	mov ecx,eax
	xor edx,edx
	mov eax,edi
	div ecx
	mov byte ptr [esp+0x1C0],0x16
	mov dword ptr [esp+0x18],eax
	mov eax,dword ptr [esp+0x80]
	test eax,eax
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block12:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x1C0],0x15
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x1C0],0
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov eax,3
	mov word ptr [esp+0x128],ax
	mov dword ptr [esp+0x130],0xFF
	lea ecx,[esp+0x3C]
	push ecx
	mov bl,0x18
	mov ecx,esi
	mov byte ptr [esp+0x1C4],bl
	call CCtrlComboBox::GetStartCanvas
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x1C0],0x19
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov edi,dword ptr [esp+0x1C8]
	lea edx,[esp+0x128]
	push edx
	push eax
	mov eax,dword ptr [esp+0x1D4]
	push eax
	push edi
	call IWzCanvas::Copy
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x1C0],bl
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	lea ecx,[esp+0x128]
	mov byte ptr [esp+0x1C0],0
	call Ztl_variant_t::~Ztl_variant_t
	lea eax,[esp+0x7C]
	push eax
	mov ecx,esi
	call CCtrlComboBox::GetStartCanvas
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x1C0],0x1A
	test ecx,ecx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	call IWzCanvas::Getwidth
	mov ebp,eax
	mov eax,dword ptr [esp+0x7C]
	add ebp,edi
	mov byte ptr [esp+0x1C0],0
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x14],0
	jle Block39

 Block25:
	mov ebx,dword ptr [esp+0x1CC]
	jmp Block27

 Block27:
	mov eax,3
	mov word ptr [esp+0xA8],ax
	mov dword ptr [esp+0xB0],0xFF
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x1C4],0x1B
	call CCtrlComboBox::GetLineCanvas
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x24]
	lea edx,[esp+0xA8]
	push edx
	push eax
	push ebx
	push ebp
	mov byte ptr [esp+0x1D0],0x1C
	call IWzCanvas::Copy
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x1C0],0x1B
	test eax,eax
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block29:
	cmp word ptr [esp+0xA8],8
	mov byte ptr [esp+0x1C0],0
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0xA8],ax
	mov eax,dword ptr [esp+0xB0]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0xA8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	lea edx,[esp+0x84]
	push edx
	mov ecx,esi
	call CCtrlComboBox::GetLineCanvas
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x1C0],0x1D
	test edi,edi
	je Block5

 Block34:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x1C]
	push ecx
	push edi
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block36

 Block35:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block36:
	mov eax,dword ptr [esp+0x84]
	add ebp,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x1C0],0
	test eax,eax
	je Block38

 Block37:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block38:
	mov eax,dword ptr [esp+0x14]
	inc eax
	cmp eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x14],eax
	jl Block27

 Block39:
	mov ecx,dword ptr [esi+0x54]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push 0
	call edx
	cmp dword ptr [esi+0xBC],0
	je Block45

 Block40:
	cmp dword ptr [esi+0x4C],0
	jne Block45

 Block41:
	mov eax,dword ptr [esi+0x54]
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

 Block45:
	mov eax,dword ptr [esi+0x68]
	cmp eax,dword ptr [esi+0x6C]
	je Block51

 Block46:
	cmp dword ptr [esi+0x3C],0
	jbe Block51

 Block47:
	push eax
	lea ecx,[esi+0x34]
	call ZList<CCtrlComboBox::ITEM_INFO>::FindIndex
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x54]
	push eax
	call CCtrlEdit::SetText
	mov eax,dword ptr [esi+0x54]
	mov dword ptr [eax+0x5C],0
	mov ecx,dword ptr [eax+0x34]
	test ecx,ecx
	je Block49

 Block48:
	mov ecx,dword ptr [ecx-4]
	jmp Block50

 Block49:
	xor ecx,ecx

 Block50:
	mov dword ptr [eax+0x48],ecx
	mov eax,dword ptr [esi+0x68]
	mov dword ptr [esi+0x6C],eax

 Block51:
	mov ecx,3
	mov word ptr [esp+0xC8],cx
	mov dword ptr [esp+0xD0],0xFF
	lea edx,[esp+0x4C]
	mov bl,0x1E
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x1C4],bl
	call CCtrlComboBox::GetButtonCanvas
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x1CC]
	lea ecx,[esp+0xC8]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	push eax
	push edx
	push ebp
	mov byte ptr [esp+0x1D0],0x1F
	call IWzCanvas::Copy
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x1C0],bl
	test eax,eax
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	cmp word ptr [esp+0xC8],8
	mov byte ptr [esp+0x1C0],0
	jne Block56

 Block54:
	xor eax,eax
	mov word ptr [esp+0xC8],ax
	mov eax,dword ptr [esp+0xD0]
	test eax,eax
	je Block210

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block210

 Block56:
	lea ecx,[esp+0xC8]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block210

 Block57:
	lea edx,[esp+0x94]
	push edx
	mov ecx,esi
	call CCtrlComboBox::GetStartCanvas
	mov edi,eax
	lea eax,[esp+0x54]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x1C4],1
	call CCtrlComboBox::GetButtonCanvas
	mov ebx,eax
	lea ecx,[esp+0x8C]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x1C4],2
	call CCtrlComboBox::GetLineCanvas
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x1C0],3
	test ecx,ecx
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	mov ebx,dword ptr [ebx]
	test ebx,ebx
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	mov ebp,dword ptr [eax]
	test ebp,ebp
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	call IWzCanvas::Getwidth
	mov edi,dword ptr [esi+0x1C]
	mov ecx,ebx
	sub edi,eax
	call IWzCanvas::Getwidth
	sub edi,eax
	mov ecx,ebp
	dec edi
	call IWzCanvas::Getwidth
	mov ecx,eax
	xor edx,edx
	mov eax,edi
	div ecx
	mov byte ptr [esp+0x1C0],2
	mov dword ptr [esp+0x18],eax
	mov eax,dword ptr [esp+0x8C]
	test eax,eax
	je Block65

 Block64:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block65:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x1C0],1
	test eax,eax
	je Block67

 Block66:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block67:
	mov eax,dword ptr [esp+0x94]
	mov byte ptr [esp+0x1C0],0
	test eax,eax
	je Block69

 Block68:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block69:
	mov eax,3
	mov word ptr [esp+0x138],ax
	mov dword ptr [esp+0x140],0xFF
	lea ecx,[esp+0x5C]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x1C4],4
	call CCtrlComboBox::GetStartCanvas
	mov ebx,dword ptr [esp+0x24]
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x1C0],5
	test ebx,ebx
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	mov edi,dword ptr [esp+0x1C8]
	lea edx,[esp+0x138]
	push edx
	push eax
	mov eax,dword ptr [esp+0x1D4]
	push eax
	push edi
	mov ecx,ebx
	call IWzCanvas::Copy
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x1C0],4
	test eax,eax
	je Block73

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block73:
	lea ecx,[esp+0x138]
	mov byte ptr [esp+0x1C0],0
	call Ztl_variant_t::~Ztl_variant_t
	lea eax,[esp+0x9C]
	push eax
	mov ecx,esi
	call CCtrlComboBox::GetStartCanvas
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x1C0],6
	test ecx,ecx
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	call IWzCanvas::Getwidth
	mov ebp,eax
	mov eax,dword ptr [esp+0x9C]
	add ebp,edi
	mov byte ptr [esp+0x1C0],0
	test eax,eax
	je Block77

 Block76:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block77:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x14],0
	jle Block92

 Block78:
	jmp Block80

 Block80:
	mov eax,3
	mov word ptr [esp+0x108],ax
	mov dword ptr [esp+0x110],0xFF
	lea ecx,[esp+0x64]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x1C4],7
	call CCtrlComboBox::GetLineCanvas
	mov eax,dword ptr [eax]
	lea edx,[esp+0x108]
	push edx
	push eax
	mov eax,dword ptr [esp+0x1D4]
	push eax
	push ebp
	mov ecx,ebx
	mov byte ptr [esp+0x1D0],8
	call IWzCanvas::Copy
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x1C0],7
	test eax,eax
	je Block82

 Block81:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block82:
	cmp word ptr [esp+0x108],8
	mov byte ptr [esp+0x1C0],0
	jne Block85

 Block83:
	xor eax,eax
	mov word ptr [esp+0x108],ax
	mov eax,dword ptr [esp+0x110]
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea ecx,[esp+0x108]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block86:
	lea edx,[esp+0xA4]
	push edx
	mov ecx,esi
	call CCtrlComboBox::GetLineCanvas
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x1C0],9
	test edi,edi
	je Block5

 Block87:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x1C]
	push ecx
	push edi
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block89

 Block88:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block89:
	mov eax,dword ptr [esp+0xA4]
	add ebp,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x1C0],0
	test eax,eax
	je Block91

 Block90:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block91:
	mov eax,dword ptr [esp+0x14]
	inc eax
	cmp eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x14],eax
	jl Block80

 Block92:
	mov eax,3
	mov word ptr [esp+0xE8],ax
	mov dword ptr [esp+0xF0],0xFF
	lea ecx,[esp+0x88]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x1C4],0xA
	call CCtrlComboBox::GetButtonCanvas
	mov eax,dword ptr [eax]
	lea edx,[esp+0xE8]
	push edx
	push eax
	mov eax,dword ptr [esp+0x1D4]
	push eax
	push ebp
	mov ecx,ebx
	mov byte ptr [esp+0x1D0],0xB
	call IWzCanvas::Copy
	mov eax,dword ptr [esp+0x88]
	mov byte ptr [esp+0x1C0],0xA
	test eax,eax
	je Block94

 Block93:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block94:
	cmp word ptr [esp+0xE8],8
	mov byte ptr [esp+0x1C0],0
	jne Block97

 Block95:
	xor eax,eax
	mov word ptr [esp+0xE8],ax
	mov eax,dword ptr [esp+0xF0]
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea ecx,[esp+0xE8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	cmp dword ptr [esi+0x3C],0
	jbe Block210

 Block99:
	mov edx,dword ptr [esi+0x80]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [esi+0x68]
	push ecx
	lea ecx,[esi+0x34]
	mov byte ptr [esp+0x1C4],0xC
	call ZList<CCtrlComboBox::ITEM_INFO>::FindIndex
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],0
	call ZXString<char>::op_assign
	lea edx,[esp+0xB8]
	push edx
	mov byte ptr [esp+0x1C4],0xD
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0xB8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block101

 Block100:
	push eax
	call _com_issue_error

 Block101:
	mov edx,dword ptr [esp+0x14]
	lea ecx,[esp+0xB8]
	push ecx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov bl,0xE
	push edx
	mov byte ptr [esp+0x1CC],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x1C8],0xF
	test ecx,ecx
	jne Block103

 Block102:
	push 0x80004003
	call _com_issue_error

 Block103:
	mov byte ptr [esp+0x1C8],bl
	call IWzFont::CalcTextWidth
	mov ebp,eax
	lea eax,[esp+0x70]
	push eax
	mov ecx,esi
	call CCtrlComboBox::GetButtonCanvas
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x1C0],0x10
	test edi,edi
	jne Block105

 Block104:
	push 0x80004003
	call _com_issue_error

 Block105:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x1C]
	push edx
	push edi
	mov dword ptr [esp+0x24],0
	call eax
	test eax,eax
	jge Block107

 Block106:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block107:
	mov ecx,dword ptr [esi+0x1C]
	sub ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [esp+0x70]
	cmp ebp,ecx
	seta byte ptr [esp+0x2B]
	mov byte ptr [esp+0x1C0],bl
	test eax,eax
	je Block109

 Block108:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block109:
	mov edi,8
	mov byte ptr [esp+0x1C0],0xD
	cmp word ptr [esp+0xB8],di
	jne Block112

 Block110:
	mov eax,dword ptr [esp+0xC0]
	xor ecx,ecx
	mov word ptr [esp+0xB8],cx
	test eax,eax
	je Block113

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block112:
	lea edx,[esp+0xB8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block113:
	cmp byte ptr [esp+0x2B],0
	je Block120

 Block114:
	lea eax,[esp+0x98]
	push eax
	mov ecx,esi
	call CCtrlComboBox::GetButtonCanvas
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x1C0],0x11
	test ecx,ecx
	jne Block116

 Block115:
	push 0x80004003
	call _com_issue_error

 Block116:
	call IWzCanvas::Getwidth
	mov ecx,dword ptr [esi+0x1C]
	mov edx,dword ptr [esp+0x18]
	sub ecx,eax
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block118

 Block117:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block118:
	lea eax,[esp+0x1C]
	push eax
	call format_string_1
	mov eax,dword ptr [esp+0xA4]
	add esp,0xC
	mov byte ptr [esp+0x1C0],0xD
	test eax,eax
	je Block120

 Block119:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block120:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0xF8]
	push eax
	call esi
	lea ecx,[esp+0xF8]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block122

 Block121:
	push eax
	call _com_issue_error

 Block122:
	lea edx,[esp+0xD8]
	push edx
	mov byte ptr [esp+0x1C4],0x12
	call esi
	lea eax,[esp+0xD8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block124

 Block123:
	push eax
	call _com_issue_error

 Block124:
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0xF8]
	push ecx
	lea edx,[esp+0xDC]
	push edx
	mov edx,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,0x13
	push edx
	mov byte ptr [esp+0x1D4],bl
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x1DC]
	mov ecx,dword ptr [esp+0x1D8]
	add eax,3
	add ecx,3
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x1D8],0x14
	mov byte ptr [esp+0x1D8],bl
	call IWzCanvas::DrawTextA
	mov byte ptr [esp+0x1C0],0x12
	cmp word ptr [esp+0xD8],di
	jne Block127

 Block125:
	mov eax,dword ptr [esp+0xE0]
	xor edx,edx
	mov word ptr [esp+0xD8],dx
	test eax,eax
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea eax,[esp+0xD8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block128:
	mov byte ptr [esp+0x1C0],0xD
	cmp word ptr [esp+0xF8],di
	jne Block131

 Block129:
	mov eax,dword ptr [esp+0x100]
	xor ecx,ecx
	mov word ptr [esp+0xF8],cx
	test eax,eax
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea edx,[esp+0xF8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block132:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x1C0],0xC
	test eax,eax
	je Block134

 Block133:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block134:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x1C0],0
	test eax,eax
	je Block210

 Block135:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block210

 Block136:
	mov eax,3
	mov word ptr [esp+0x118],ax
	mov dword ptr [esp+0x120],0xFF
	cmp dword ptr [esi+0xB8],0
	mov byte ptr [esp+0x1C0],0x20
	je Block138

 Block137:
	xor edi,edi
	jmp Block141

 Block138:
	lea ecx,[esp+0x90]
	push ecx
	mov ecx,esi
	call CCtrlComboBox::GetButtonCanvas
	mov ecx,dword ptr [eax]
	mov ebx,1
	mov byte ptr [esp+0x1C0],0x21
	mov dword ptr [esp+0x14],ebx
	test ecx,ecx
	jne Block140

 Block139:
	push 0x80004003
	call _com_issue_error

 Block140:
	call IWzCanvas::Getwidth
	mov edi,dword ptr [esi+0x1C]
	sub edi,eax

 Block141:
	lea edx,[esp+0x78]
	push edx
	mov ecx,esi
	call CCtrlComboBox::GetButtonCanvas
	cmp dword ptr [esp+0x24],0
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x1C0],0x22
	jne Block143

 Block142:
	push 0x80004003
	call _com_issue_error

 Block143:
	mov edx,dword ptr [esp+0x1C8]
	mov ebp,dword ptr [esp+0x1CC]
	lea ecx,[esp+0x118]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	push eax
	push ebp
	add edi,edx
	push edi
	call IWzCanvas::Copy
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x1C0],0x21
	test eax,eax
	je Block145

 Block144:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block145:
	mov dword ptr [esp+0x1C0],0x20
	test bl,1
	je Block148

 Block146:
	mov eax,dword ptr [esp+0x90]
	test eax,eax
	je Block148

 Block147:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block148:
	cmp word ptr [esp+0x118],8
	mov byte ptr [esp+0x1C0],0
	jne Block151

 Block149:
	xor eax,eax
	mov word ptr [esp+0x118],ax
	mov eax,dword ptr [esp+0x120]
	test eax,eax
	je Block152

 Block150:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block152

 Block151:
	lea ecx,[esp+0x118]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block152:
	cmp dword ptr [esi+0x3C],0
	jbe Block210

 Block153:
	mov edx,dword ptr [esi+0x80]
	push edx
	lea eax,[esp+0x20]
	push eax
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [esi+0x68]
	push ecx
	lea ecx,[esi+0x34]
	mov byte ptr [esp+0x1C4],0x23
	call ZList<CCtrlComboBox::ITEM_INFO>::FindIndex
	xor ebx,ebx
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],ebx
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x18],ebx
	mov edi,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	mov eax,dword ptr [edi+0x1610]
	mov byte ptr [esp+0x1C0],0x25
	cmp eax,8
	ja Block187

 Block154:
	cmp EAX, 0
je Block190
cmp EAX, 1
je Block169
cmp EAX, 2
je Block189
cmp EAX, 3
je Block194
cmp EAX, 4
je Block191
cmp EAX, 5
je Block193
cmp EAX, 6
je Block192
cmp EAX, 7
je Block155
cmp EAX, 8
je Block184


 Block155:
	lea edx,[esp+0x2C]
	push edx
	mov ecx,edi
	call CUIStatusBar::GetWhisperTarget
	mov ecx,eax
	call ZXString<char>::IsEmpty
	mov ebx,eax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block157

 Block156:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block157:
	test ebx,ebx
	je Block159

 Block158:
	lea eax,[esp+0xA0]
	push 0x1A88
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x1C4],0x26
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xA0]
	jmp Block160

 Block159:
	lea ecx,[esp+0x68]
	push ecx
	mov ecx,edi
	call CUIStatusBar::GetWhisperTarget
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x1C4],0x27
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x68]

 Block160:
	mov byte ptr [esp+0x1C0],0x25
	test eax,eax
	je Block162

 Block161:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block162:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block187

 Block163:
	cmp dword ptr [eax-4],0xA
	jle Block187

 Block164:
	push 8
	lea edx,[esp+0x34]
	push edx
	lea ecx,[esp+0x28]
	call ZXString<char>::Left
	push offset _S___50
	lea ecx,[esp+0x70]
	push ecx
	mov bl,0x28
	mov ecx,eax
	mov byte ptr [esp+0x1C8],bl
	call ZXString<char>::op_add_0
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x1C4],0x29
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x1C0],bl
	test eax,eax
	je Block166

 Block165:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block166:
	mov eax,dword ptr [esp+0x30]
	test eax,eax

 Block167:
	mov byte ptr [esp+0x1C0],0x25
	je Block187

 Block168:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block187

 Block169:
	add edi,0x1760
	mov ecx,edi
	call ZXString<char>::IsEmpty
	test eax,eax
	je Block171

 Block170:
	lea edx,[esp+0x38]
	push 0x327
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x1C4],0x2A
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebx
	jmp Block167

 Block171:
	push edi
	lea ecx,[esp+0x18]
	call ZXString<char>::_ctor_copy
	mov edi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x1C0],0x2B
	cmp edi,ebx
	je Block178

 Block172:
	cmp dword ptr [edi-4],0xA
	jle Block178

 Block173:
	push 8
	lea eax,[esp+0x4C]
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::Left
	push offset _S___50
	lea ecx,[esp+0x44]
	push ecx
	mov bl,0x2C
	mov ecx,eax
	mov byte ptr [esp+0x1C8],bl
	call ZXString<char>::op_add_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x1C4],0x2D
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x1C0],bl
	test eax,eax
	je Block175

 Block174:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block175:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x1C0],0x2B
	test eax,eax
	je Block177

 Block176:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block177:
	mov edi,dword ptr [esp+0x14]

 Block178:
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x5C]
	push offset _S___34
	push eax
	call __op_add_char_char
	add esp,0xC
	push offset _S___33
	lea ecx,[esp+0x54]
	push ecx
	mov bl,0x2E
	mov ecx,eax
	mov byte ptr [esp+0x1C8],bl
	call ZXString<char>::op_add_0
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x1C4],0x2F
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x1C0],bl
	test eax,eax
	je Block180

 Block179:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block180:
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x1C0],0x2B
	test eax,eax
	je Block182

 Block181:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block182:
	mov byte ptr [esp+0x1C0],0x25
	test edi,edi
	je Block187

 Block183:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4
	jmp Block187

 Block184:
	push offset _S_UISTATUSBAR2IMGM__58

 Block185:
	lea ecx,[esp+0x1C]
	call ZXString16::AssignCStr
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	je Block187

 Block186:
	cmp word ptr [eax],bx
	jne Block196

 Block187:
	push offset _D_VTMISSING
	lea ecx,[esp+0x17C]
	call Ztl_variant_t::_ctor_1
	mov edi,dword ptr [esp+0x20]
	lea eax,[esp+0x178]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	mov bl,0x31
	push edi
	mov byte ptr [esp+0x1CC],bl
	call Ztl_bstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1C8],0x32
	test ecx,ecx
	jne Block195

 Block188:
	push 0x80004003
	call _com_issue_error

 Block189:
	push offset _S_UISTATUSBAR2IMGM__57
	jmp Block185

 Block190:
	push offset _S_UISTATUSBAR2IMGM__56
	jmp Block185

 Block191:
	push offset _S_UISTATUSBAR2IMGM__55
	jmp Block185

 Block192:
	lea edx,[esp+0x60]
	push 0x325
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x1C4],0x30
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x60]
	cmp eax,ebx
	jmp Block167

 Block193:
	push offset _S_TOALLIANCE
	lea ecx,[esp+0x24]
	call ZXString<char>::AssignCStr
	jmp Block187

 Block194:
	push offset _S_TOTHEEXPEDITION
	lea ecx,[esp+0x24]
	call ZXString<char>::AssignCStr
	jmp Block187

 Block195:
	mov byte ptr [esp+0x1C8],bl
	call IWzFont::CalcTextWidth
	lea ecx,[esp+0x178]
	mov byte ptr [esp+0x1C0],0x25
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x19C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x15C]
	mov byte ptr [esp+0x1C4],0x33
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esp+0x1C]
	lea ecx,[esp+0x198]
	push ecx
	lea edx,[esp+0x15C]
	push edx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov bl,0x34
	push edi
	mov byte ptr [esp+0x1D4],bl
	call Ztl_bstr_t::_ctor_1
	sub ebp,dword ptr [esi+0xA4]
	mov ecx,dword ptr [esp+0x1D8]
	add ebp,3
	add ecx,6
	push ebp
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x1D8],0x35
	mov byte ptr [esp+0x1D8],bl
	call IWzCanvas::DrawTextA
	lea ecx,[esp+0x158]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x198]
	call Ztl_variant_t::~Ztl_variant_t
	mov edi,dword ptr [esp+0x18]
	jmp Block204

 Block196:
	push offset _D_VTMISSING
	lea ecx,[esp+0x18C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x16C]
	mov byte ptr [esp+0x1C4],0x36
	call Ztl_variant_t::_ctor_1
	mov edi,dword ptr [esp+0x18]
	push 0
	push 0
	lea edx,[esp+0x190]
	push edx
	lea eax,[esp+0x174]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov bl,0x37
	push edi
	mov byte ptr [esp+0x1D8],bl
	call Ztl_bstr_t::_ctor_2
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x1D4],0x38
	jne Block198

 Block197:
	push 0x80004003
	call _com_issue_error

 Block198:
	lea ecx,[esp+0x1BC]
	push ecx
	mov byte ptr [esp+0x1D8],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x1C8],0x39
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	lea ecx,[esp+0x1A8]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x168]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x188]
	call Ztl_variant_t::~Ztl_variant_t
	mov esi,dword ptr [esp+0x14]
	test esi,esi
	sete al
	test al,al
	sete al
	test al,al
	je Block202

 Block199:
	mov edx,3
	mov word ptr [esp+0x148],dx
	mov dword ptr [esp+0x150],0xFF
	mov byte ptr [esp+0x1C0],0x3E
	test esi,esi
	jne Block201

 Block200:
	push 0x80004003
	call _com_issue_error

 Block201:
	lea eax,[esp+0x148]
	push eax
	push esi
	mov ecx,esi
	call IWzCanvas::Getcy
	mov ecx,0x242
	sub ecx,eax
	push ecx
	mov ecx,esi
	call IWzCanvas::Getcx
	mov ecx,dword ptr [esp+0x30]
	mov edx,0x200
	sub edx,eax
	push edx
	call IWzCanvas::Copy
	lea ecx,[esp+0x148]
	call Ztl_variant_t::~Ztl_variant_t

 Block202:
	mov byte ptr [esp+0x1C0],0x25
	test esi,esi
	je Block204

 Block203:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block204:
	mov byte ptr [esp+0x1C0],0x24
	test edi,edi
	je Block206

 Block205:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block206:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x1C0],0x23
	test eax,eax
	je Block208

 Block207:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block208:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x1C0],0
	test eax,eax
	je Block210

 Block209:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block210:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C0],0xFFFFFFFF
	test eax,eax
	je Block212

 Block211:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block212:
	mov ecx,dword ptr [esp+0x1B8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1B0
	ret 0xC
}
}
// CCtrlComboBox::GetLineCanvas
__SUB_CLASS_THIS0(000D8810, __thiscall, 6820,  CCtrlComboBox, _x_com_ptr<IWzCanvas>) {
__asm {

 Block0:
	push ecx
	cmp dword ptr [ecx+0x3C],0
	mov dword ptr [esp],0
	ja Block2

 Block1:
	mov dword ptr [ecx+0x64],2

 Block2:
	mov eax,dword ptr [ecx+0x60]
	test eax,eax
	je Block6

 Block3:
	cmp eax,1
	jle Block5

 Block4:
	cmp eax,5
	jle Block6

 Block5:
	mov eax,dword ptr [esp+8]
	mov dword ptr [eax],0
	pop ecx
	ret 4

 Block6:
	mov eax,dword ptr [ecx+0x64]
	push esi
	cmp eax,4
	ja Block13

 Block7:
	cmp EAX, 0
je Block8
cmp EAX, 1
je Block9
cmp EAX, 2
je Block10
cmp EAX, 3
je Block11
cmp EAX, 4
je Block12


 Block8:
	mov esi,dword ptr [esp+0xC]
	add ecx,0xF4
	push ecx
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block9:
	mov esi,dword ptr [esp+0xC]
	add ecx,0xF8
	push ecx
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block10:
	mov esi,dword ptr [esp+0xC]
	add ecx,0xFC
	push ecx
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block11:
	mov esi,dword ptr [esp+0xC]
	add ecx,0x100
	push ecx
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block12:
	mov esi,dword ptr [esp+0xC]
	add ecx,0x104
	push ecx
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block13:
	mov ecx,dword ptr [ecx+0xF4]
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esi],ecx
	test ecx,ecx
	je Block15

 Block14:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+4]
	call ecx

 Block15:
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CCtrlComboBox::GetRTTI
__SUB_CLASS_THIS0(000DA190, __thiscall, 6825,  CCtrlComboBox, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CCtrlComboBox::ms_RTTI_CCtrlComboBox
	ret
}
}
// CCtrlComboBox::SetAbove
__SUB_CLASS_THIS(000D83D0, __thiscall, 6803,  CCtrlComboBox, void, CCtrlWnd*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CCtrlWnd::SetAbove
	mov ecx,dword ptr [esi+0x54]
	mov eax,esi
	test ecx,ecx
	je Block2

 Block1:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push esi
	call eax
	mov eax,dword ptr [esi+0x54]

 Block2:
	mov ecx,dword ptr [esi+0x4C]
	test ecx,ecx
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax
	mov eax,dword ptr [esi+0x4C]

 Block4:
	mov ecx,dword ptr [esi+0x5C]
	pop esi
	test ecx,ecx
	je Block6

 Block5:
	mov edx,dword ptr [ecx]
	mov dword ptr [esp+4],eax
	mov eax,dword ptr [edx+0x20]
	jmp eax

 Block6:
	ret 4
}
}
// CCtrlComboBox::SetSelect
__SUB_CLASS_THIS(000D90E0, __thiscall, 6814,  CCtrlComboBox, void, long) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov esi,ecx
	call CCtrlComboBox::RemoveSelectWnd
	mov eax,dword ptr [esp+0x10]
	mov ecx,esi
	mov dword ptr [esi+0x68],eax
	call CCtrlWnd::InvalidateRect
	mov ecx,dword ptr [esi+0x68]
	mov edi,dword ptr [esi+0x24]
	mov ebx,dword ptr [edi]
	push ecx
	mov ecx,esi
	call CCtrlComboBox::GetItemParam
	mov edx,dword ptr [esi+0x14]
	push eax
	mov eax,dword ptr [ebx+0x1C]
	push 0x258
	push edx
	mov ecx,edi
	call eax
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CCtrlComboBox::IsKindOf
__SUB_CLASS_THIS(000DA1B0, __thiscall, 6826,  CCtrlComboBox, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CCtrlComboBox::ms_RTTI_CCtrlComboBox
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
// operator__char_char__144860
_SUB_EXCEPTION_HANDLER(D99A0)
__SUB(000D99A0, __cdecl, 144860,  ZXString<char>, const char*, const ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D99A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [esp+0xC],0
	mov dword ptr [esp+8],0
	test edx,edx
	je Block4

 Block1:
	mov eax,edx
	lea esi,[eax+1]

 Block2:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block2

 Block3:
	sub eax,esi
	mov esi,eax
	push esi
	push edx
	push 0
	push esi
	lea ecx,[esp+0x18]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0xC]
	call ZXString<char>::ReleaseBuffer

 Block4:
	mov eax,dword ptr [esp+0x28]
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x18],1
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax-4]
	jmp Block7

 Block6:
	xor ecx,ecx

 Block7:
	push ecx
	push eax
	lea ecx,[esp+0x10]
	call ZXString<char>::_Cat
	mov esi,dword ptr [esp+0x20]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0xC],1
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret
}
}
// CCtrlComboBox::OnSetFocus
__SUB_CLASS_THIS(000D8130, __thiscall, 6798,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	push esi
	je Block4

 Block1:
	mov esi,dword ptr [ecx+0x24]
	test esi,esi
	je Block3

 Block2:
	add ecx,0xFFFFFFFC
	call CCtrlWnd::InvalidateRect

 Block3:
	mov eax,esi
	pop esi
	ret 4

 Block4:
	add ecx,0xFFFFFFFC
	mov esi,1
	call CCtrlWnd::InvalidateRect
	mov eax,esi
	pop esi
	ret 4
}
}
// CCtrlComboBoxSelect::OnMouseMove
__SUB_CLASS_THIS(000D82B0, __thiscall, 12504,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	cdq
	and edx,0xF
	add eax,edx
	mov edx,dword ptr [ecx+0x4C]
	sar eax,4
	mov dword ptr [ecx+0x30],eax
	mov edx,dword ptr [edx+0x5C]
	test edx,edx
	je Block2

 Block1:
	mov edx,dword ptr [edx+0x38]
	add edx,eax
	mov dword ptr [ecx+0x30],edx

 Block2:
	mov eax,dword ptr [ecx+0x34]
	dec eax
	cmp dword ptr [ecx+0x30],eax
	jle Block4

 Block3:
	mov dword ptr [ecx+0x30],eax

 Block4:
	cmp dword ptr [ecx+0x30],0
	jge Block6

 Block5:
	mov dword ptr [ecx+0x30],0

 Block6:
	add ecx,0xFFFFFFFC
	call CCtrlWnd::InvalidateRect
	mov eax,1
	ret 8
}
}
// CCtrlComboBox::HitTest
__SUB_CLASS_THIS(000D8350, __thiscall, 6802,  CCtrlComboBox, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push edi
	mov edi,ecx
	mov ecx,dword ptr [esp+8]
	push eax
	push ecx
	mov ecx,edi
	call CCtrlWnd::HitTest
	test eax,eax
	jne Block4

 Block1:
	cmp dword ptr [edi+0x4C],eax
	je Block3

 Block2:
	push ebx
	mov ebx,dword ptr [edi+0x4C]
	mov edx,dword ptr [ebx+4]
	mov eax,dword ptr [edx+0x30]
	push ebp
	mov ebp,dword ptr [ebx]
	push esi
	lea esi,[ebx+4]
	mov ecx,esi
	add ebp,0x18
	call eax
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esi]
	sub ecx,eax
	mov eax,dword ptr [edx+0x2C]
	mov dword ptr [esp+0x18],ecx
	mov ecx,esi
	add edi,4
	call eax
	mov esi,dword ptr [esp+0x14]
	mov edx,dword ptr [edi]
	sub esi,eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,edi
	call eax
	add eax,dword ptr [esp+0x18]
	mov edx,dword ptr [edi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	mov edx,dword ptr [ebp]
	add eax,esi
	push eax
	mov ecx,ebx
	call edx
	pop esi
	pop ebp
	pop ebx
	pop edi
	ret 8

 Block3:
	xor eax,eax

 Block4:
	pop edi
	ret 8
}
}
// CCtrlComboBox::GetItemList
__SUB_CLASS_THIS0(0058EF80, __thiscall, 6811,  CCtrlComboBox, ZList<CCtrlComboBox::ITEM_INFO>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	xor eax,eax
	push edi
	mov edi,ecx
	mov ecx,esi
	mov dword ptr [esp+8],eax
	int 3// TODO: 	mov dword ptr [esi],offset ZList<CCtrlComboBox::ITEM_INFO>::`vftable'
	mov dword ptr [esi+8],eax
	mov dword ptr [esi+0xC],eax
	mov dword ptr [esi+0x10],eax
	call ZList<CCtrlComboBox::ITEM_INFO>::RemoveAll
	add edi,0x34
	push edi
	mov ecx,esi
	call ZList<CCtrlComboBox::ITEM_INFO>::AddTail_List
	pop edi
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CCtrlComboBox::BtClicked
__SUB_CLASS_THIS0(000D98D0, __thiscall, 6793,  CCtrlComboBox, void) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [eax+0x2C]
	mov dword ptr [esi+0x70],ecx
	mov ecx,esi
	mov dword ptr [esi+0x64],1
	call CCtrlWnd::InvalidateRect
	cmp dword ptr [esi+0x4C],0
	mov ecx,esi
	jne Block2

 Block1:
	pop esi
	jmp  CCtrlComboBox::MakeSelectWnd

 Block2:
	mov dword ptr [esi+0x64],4
	pop esi
	jmp  CCtrlComboBox::RemoveSelectWnd
}
}
// CCtrlComboBox::MakeScrollBar
_SUB_EXCEPTION_HANDLER(D9320)
__SUB_CLASS_THIS0(000D9320, __thiscall, 6793,  CCtrlComboBox, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D9320
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
	mov esi,ecx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x24],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block11

 Block4:
	add eax,8
	je Block11

 Block5:
	lea edi,[eax-8]
	test edi,edi
	je Block7

 Block6:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+0x5C]
	mov dword ptr [esi+0x5C],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block9

 Block8:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block9:
	mov eax,dword ptr [esi+0xAC]
	mov ecx,dword ptr [esi+0x5C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	push 0
	shl eax,4
	sub eax,2
	push eax
	mov eax,dword ptr [esi+0xB0]
	push 0
	push 0
	push eax
	mov eax,dword ptr [esi+0xB4]
	push 1
	push eax
	mov eax,dword ptr [esi+0x24]
	push eax
	call edx
	mov edi,dword ptr [esi+0x18]
	test edi,edi
	jne Block12

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	xor edi,edi
	jmp Block7

 Block12:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x70]
	lea ecx,[esp+0x10]
	push ecx
	push edi
	mov dword ptr [esp+0x18],0
	call edx
	test eax,eax
	jge Block14

 Block13:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block14:
	mov edi,dword ptr [esi+0x18]
	mov ebx,dword ptr [esp+0x10]
	test edi,edi
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x68]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block18

 Block17:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block18:
	mov eax,dword ptr [esi+0x20]
	mov ecx,dword ptr [esi+0x5C]
	mov edx,dword ptr [esi+0x1C]
	sub edx,dword ptr [ecx+0x1C]
	add eax,ebx
	push eax
	mov eax,dword ptr [esp+0x18]
	lea edx,[edx+eax-1]
	push edx
	call CCtrlWnd::Move
	mov eax,dword ptr [esi+0x5C]
	mov dword ptr [eax+0x34],0xF
	mov ecx,dword ptr [esi+0x3C]
	sub ecx,dword ptr [esi+0xAC]
	inc ecx
	push ecx
	mov ecx,dword ptr [esi+0x5C]
	call CCtrlScrollBar::SetScrollRange
	mov edx,dword ptr [esi+0x68]
	mov ecx,dword ptr [esi+0x5C]
	push edx
	call CCtrlScrollBar::SetCurPos
	mov ecx,dword ptr [esi+0x5C]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push 0
	call edx
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x18
	ret
}
}
// CCtrlComboBox::ITEM_INFO::~ITEM_INFO
__SUB_CLASS_THIS0(000D94C0, __thiscall, 12535,  CCtrlComboBox::ITEM_INFO, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
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
// CCtrlComboBoxSelect::OnSetFocus
__SUB_CLASS_THIS(000D91A0, __thiscall, 12502,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov esi,ecx
	test ebx,ebx
	je Block5

 Block1:
	mov edi,dword ptr [esi+0x24]
	test edi,edi
	je Block9

 Block2:
	lea ecx,[esi-4]
	call CCtrlWnd::InvalidateRect
	test ebx,ebx
	jne Block9

 Block3:
	mov ecx,dword ptr [esi+0x4C]
	test ecx,ecx
	je Block6

 Block4:
	lea eax,[ecx+4]
	jmp Block7

 Block5:
	mov edi,1
	jmp Block2

 Block6:
	xor eax,eax

 Block7:
	mov edx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	cmp dword ptr [edx+0xA0],eax
	je Block9

 Block8:
	call CCtrlComboBox::RemoveSelectWnd

 Block9:
	mov eax,edi
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CCtrlComboBox::GetComboBoxUOL
__SUB_CLASS_THIS(000DA6F0, __thiscall, 6808,  CCtrlComboBox, void, long, Ztl_bstr_t&) {
__asm {

 Block0:
	push ecx
	push esi
	push edi
	lea eax,[esp+8]
	push 0xB21
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [esp+0x14]
	mov edi,eax
	cmp esi,edi
	je Block5

 Block1:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block3

 Block2:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block3:
	mov eax,dword ptr [edi]
	mov dword ptr [esi],eax
	test eax,eax
	je Block5

 Block4:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,dword ptr [esp+8]
	test ecx,ecx
	je Block7

 Block6:
	call _xbstr_t::Data_t::Release

 Block7:
	mov eax,dword ptr [esp+0x10]
	dec eax
	cmp eax,4
	ja Block14

 Block8:
	cmp EAX, 0
je Block9
cmp EAX, 1
je Block10
cmp EAX, 2
je Block11
cmp EAX, 3
je Block12
cmp EAX, 4
je Block13


 Block9:
	push offset _S_2
	mov ecx,esi
	call Ztl_bstr_t::op_add_assign
	pop edi
	pop esi
	pop ecx
	ret 8

 Block10:
	push offset _S_3__1
	mov ecx,esi
	call Ztl_bstr_t::op_add_assign
	pop edi
	pop esi
	pop ecx
	ret 8

 Block11:
	push offset _S_4__1
	mov ecx,esi
	call Ztl_bstr_t::op_add_assign
	pop edi
	pop esi
	pop ecx
	ret 8

 Block12:
	push offset _S_5__1
	mov ecx,esi
	call Ztl_bstr_t::op_add_assign
	pop edi
	pop esi
	pop ecx
	ret 8

 Block13:
	push offset _S_6__1
	mov ecx,esi
	call Ztl_bstr_t::op_add_assign

 Block14:
	pop edi
	pop esi
	pop ecx
	ret 8
}
}
// CCtrlComboBox::RemoveSelectWnd
__SUB_CLASS_THIS0(000D9070, __thiscall, 6793,  CCtrlComboBox, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x5C]
	test ecx,ecx
	je Block4

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	push edi
	call edx
	cmp dword ptr [esi+0x5C],0
	lea edi,[esi+0x58]
	je Block3

 Block2:
	push 0
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block3:
	pop edi

 Block4:
	mov ecx,dword ptr [esi+0x4C]
	test ecx,ecx
	je Block6

 Block5:
	call CCtrlWnd::InvalidateRect

 Block6:
	mov ecx,dword ptr [esi+0x4C]
	test ecx,ecx
	je Block9

 Block7:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	add esi,0x48
	cmp dword ptr [esi+4],0
	je Block9

 Block8:
	push 0
	mov ecx,esi
	call ZRef<CCtrlComboBoxSelect>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block9:
	pop esi
	ret
}
}
// CCtrlComboBoxSelect::OnMouseButton
__SUB_CLASS_THIS(000D97F0, __thiscall, 12503,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x202
	push esi
	push edi
	mov esi,ecx
	je Block11

 Block1:
	sub eax,3
	jne Block21

 Block2:
	cmp dword ptr [esi+0x38],eax
	je Block21

 Block3:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi+0x34]
	cdq
	and edx,0xF
	add eax,edx
	sar eax,4
	dec ecx
	cmp eax,ecx
	mov dword ptr [esi+0x30],eax
	jle Block5

 Block4:
	mov dword ptr [esi+0x30],ecx

 Block5:
	cmp dword ptr [esi+0x30],0
	jge Block7

 Block6:
	mov dword ptr [esi+0x30],0

 Block7:
	mov edi,dword ptr [esi+0x4C]
	test edi,edi
	je Block9

 Block8:
	lea eax,[edi+4]
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov eax,dword ptr [esi+0x30]
	push eax
	mov ecx,edi
	call CCtrlComboBox::Delete
	pop edi
	pop esi
	ret 0x10

 Block11:
	mov eax,dword ptr [esp+0x18]
	mov edi,dword ptr [esi+0x4C]
	cdq
	and edx,0xF
	add eax,edx
	sar eax,4
	mov dword ptr [esi+0x30],eax
	mov ecx,dword ptr [edi+0x5C]
	test ecx,ecx
	je Block13

 Block12:
	mov ecx,dword ptr [ecx+0x38]
	add ecx,eax
	mov dword ptr [esi+0x30],ecx

 Block13:
	mov eax,dword ptr [esi+0x34]
	dec eax
	cmp dword ptr [esi+0x30],eax
	jle Block15

 Block14:
	mov dword ptr [esi+0x30],eax

 Block15:
	cmp dword ptr [esi+0x30],0
	jge Block17

 Block16:
	mov dword ptr [esi+0x30],0

 Block17:
	test edi,edi
	je Block19

 Block18:
	lea eax,[edi+4]
	jmp Block20

 Block19:
	xor eax,eax

 Block20:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov edx,dword ptr [esi+0x30]
	push edx
	mov ecx,edi
	call CCtrlComboBox::SetSelect

 Block21:
	pop edi
	pop esi
	ret 0x10
}
}
// CCtrlComboBoxSelect::OnMouseWheel
__SUB_CLASS_THIS(000D8300, __thiscall, 12505,  IUIMsgHandler, int32_t, long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x4C]
	cmp dword ptr [eax+0x5C],0
	je Block2

 Block1:
	mov ecx,eax
	mov ecx,dword ptr [ecx+0x5C]
	mov edx,dword ptr [ecx+0x38]
	add edx,dword ptr [esp+0xC]
	push edx
	call CCtrlScrollBar::SetCurPos

 Block2:
	xor eax,eax
	ret 0xC
}
}
// CCtrlComboBoxSelect::IsKindOf
__SUB_CLASS_THIS(000D8500, __thiscall, 12508,  CCtrlComboBoxSelect, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CCtrlComboBoxSelect::ms_RTTI_CCtrlComboBoxSelect
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
// CCtrlComboBox::OnDestroy
__SUB_CLASS_THIS0(000D9310, __thiscall, 6793,  CCtrlComboBox, void) {
__asm {

 Block0:
	jmp  CCtrlComboBox::RemoveSelectWnd
}
}
// CCtrlComboBox::GetButtonCanvas
__SUB_CLASS_THIS0(000D8560, __thiscall, 6820,  CCtrlComboBox, _x_com_ptr<IWzCanvas>) {
__asm {

 Block0:
	push ecx
	cmp dword ptr [ecx+0x3C],0
	mov dword ptr [esp],0
	ja Block2

 Block1:
	mov dword ptr [ecx+0x64],2

 Block2:
	mov eax,dword ptr [ecx+0x60]
	push esi
	cmp eax,5
	ja Block23

 Block3:
	cmp EAX, 0
je Block4
cmp EAX, 1
je Block15
cmp EAX, 2
je Block4
cmp EAX, 3
je Block4
cmp EAX, 4
je Block4
cmp EAX, 5
je Block4


 Block4:
	mov eax,dword ptr [ecx+0x64]
	cmp eax,4
	ja Block12

 Block5:
	cmp EAX, 0
je Block6
cmp EAX, 1
je Block8
cmp EAX, 2
je Block9
cmp EAX, 3
je Block10
cmp EAX, 4
je Block11


 Block6:
	mov esi,dword ptr [esp+0xC]
	add ecx,0xCC
	push ecx
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_ctor_copy

 Block7:
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block8:
	mov esi,dword ptr [esp+0xC]
	add ecx,0xD0
	push ecx
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block9:
	mov esi,dword ptr [esp+0xC]
	add ecx,0xD4
	push ecx
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block10:
	mov esi,dword ptr [esp+0xC]
	add ecx,0xD8
	push ecx
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block11:
	mov esi,dword ptr [esp+0xC]
	add ecx,0xDC
	push ecx
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block12:
	mov ecx,dword ptr [ecx+0xCC]
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esi],ecx
	test ecx,ecx
	je Block14

 Block13:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+4]
	call ecx

 Block14:
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block15:
	mov eax,dword ptr [ecx+0x64]
	cmp eax,4
	ja Block21

 Block16:
	cmp EAX, 0
je Block6
cmp EAX, 1
je Block17
cmp EAX, 2
je Block18
cmp EAX, 3
je Block19
cmp EAX, 4
je Block17


 Block17:
	mov esi,dword ptr [esp+0xC]
	add ecx,0xD0
	push ecx
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block18:
	mov esi,dword ptr [esp+0xC]
	add ecx,0xD4
	push ecx
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block19:
	mov esi,dword ptr [esp+0xC]
	add ecx,0xD8
	push ecx

 Block20:
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block21:
	mov ecx,dword ptr [ecx+0xCC]
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esi],ecx
	test ecx,ecx
	je Block7

 Block22:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	call eax
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block23:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [eax],0
	pop esi
	pop ecx
	ret 4
}
}
// CCtrlComboBox::GetItemParam
__SUB_CLASS_THIS(000D8E40, __thiscall, 6813,  CCtrlComboBox, unsigned long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push eax
	add ecx,0x34
	call ZList<CCtrlComboBox::ITEM_INFO>::FindIndex
	mov eax,dword ptr [eax+4]
	ret 4
}
}
// CCtrlComboBox::CCtrlComboBox
_SUB_EXCEPTION_HANDLER(DA090)
__SUB_CLASS_THIS0(000DA090, __thiscall, 6791,  CCtrlComboBox, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_DA090
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
	call CCtrlWnd::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlComboBox::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlComboBox::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlComboBox::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	int 3// TODO: 	mov dword ptr [esi+0x34],offset ZList<CCtrlComboBox::ITEM_INFO>::`vftable'
	mov dword ptr [esi+0x3C],edi
	mov dword ptr [esi+0x40],edi
	mov dword ptr [esi+0x44],edi
	mov dword ptr [esi+0x4C],edi
	mov dword ptr [esi+0x54],edi
	mov dword ptr [esi+0x5C],edi
	mov dword ptr [esi+0x68],edi
	mov dword ptr [esi+0x6C],0xFFFFFFFF
	mov dword ptr [esi+0xC4],edi
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 5
	push 4
	lea eax,[esi+0xCC]
	push eax
	mov byte ptr [esp+0x2C],5
	mov dword ptr [esi+0xC8],edi
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 5
	push 4
	lea ecx,[esi+0xE0]
	push ecx
	mov byte ptr [esp+0x2C],6
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 5
	push 4
	lea edx,[esi+0xF4]
	push edx
	mov byte ptr [esp+0x2C],7
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x108],edi
	mov dword ptr [esi+0x10C],edi
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
// CCtrlComboBox::OnMouseButton
__SUB_CLASS_THIS(000DA450, __thiscall, 6799,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x201
	je Block2

 Block1:
	cmp eax,0x203
	jne Block3

 Block2:
	add ecx,0xFFFFFFFC
	call CCtrlComboBox::BtClicked

 Block3:
	ret 0x10
}
}
// CCtrlComboBoxSelect::OnCreate
_SUB_EXCEPTION_HANDLER(D8B20)
__SUB_CLASS_THIS(000D8B20, __thiscall, 12500,  CCtrlComboBoxSelect, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D8B20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push eax
	call esi
	lea ecx,[esp+0x38]
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
	mov dword ptr [esp+0x54],0
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
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x50],1
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x38]
	push edx
	mov edx,dword ptr [edi+0x20]
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [edi+0x1C]
	push 1
	push edx
	push eax
	push 0
	push 0
	lea edx,[esp+0x2C]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x48]
	cmp esi,eax
	je Block11

 Block7:
	mov dword ptr [edi+0x48],eax
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
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block13:
	mov ebp,8
	mov byte ptr [esp+0x50],0
	cmp word ptr [esp+0x18],bp
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
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp word ptr [esp+0x38],bp
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov eax,dword ptr [edi+0x18]
	mov edx,0xD
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block23:
	mov esi,dword ptr [edi+0x48]
	mov dword ptr [esp+0x50],2
	test esi,esi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
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
	test eax,eax
	jge Block27

 Block26:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp word ptr [esp+0x18],bp
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov ecx,dword ptr [edi+0x24]
	lea eax,[esp+0x14]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x50],3
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block33:
	mov esi,dword ptr [edi+0x48]
	mov byte ptr [esp+0x50],4
	test esi,esi
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block37

 Block36:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block37:
	mov byte ptr [esp+0x50],3
	cmp word ptr [esp+0x28],bp
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
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
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test eax,eax
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block43:
	mov edi,dword ptr [edi+0x48]
	test edi,edi
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push edi
	call ecx
	test eax,eax
	jge Block47

 Block46:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block47:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x44
	ret 4
}
}
// CCtrlComboBox::~CCtrlComboBox
_SUB_EXCEPTION_HANDLER(DA1E0)
__SUB_CLASS_THIS0(000DA1E0, __thiscall, 6793,  CCtrlComboBox, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_DA1E0
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
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlComboBox::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlComboBox::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlComboBox::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x10C]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],7
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x108]
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 5
	push 4
	lea eax,[esi+0xF4]
	push eax
	call __eh_vector_dtor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 5
	push 4
	lea ecx,[esi+0xE0]
	push ecx
	mov byte ptr [esp+0x2C],6
	call __eh_vector_dtor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 5
	push 4
	lea edx,[esi+0xCC]
	push edx
	mov byte ptr [esp+0x2C],5
	call __eh_vector_dtor_iterator
	mov ecx,dword ptr [esi+0xC4]
	cmp ecx,ebx
	je Block6

 Block5:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0xC4],ebx

 Block6:
	lea edi,[esi+0x58]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0x50]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0x48]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlComboBoxSelect>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea ecx,[esi+0x34]
	mov byte ptr [esp+0x1C],bl
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CCtrlComboBox::ITEM_INFO>::`vftable'
	call ZList<CCtrlComboBox::ITEM_INFO>::RemoveAll
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CCtrlWnd::~CCtrlWnd
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
// CCtrlComboBox::CreateCtrl
__SUB_CLASS_THIS(000DA330, __thiscall, 6795,  CCtrlComboBox, void, CWnd*, uint32_t, long, long, long, long, long, void*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0xC]
	push ebx
	push ebp
	push esi
	mov esi,ecx
	mov dword ptr [esi+0x60],eax
	push edi
	mov edi,dword ptr [esp+0x30]
	mov ecx,dword ptr [edi]
	mov dword ptr [esi+0x74],ecx
	mov edx,dword ptr [edi+4]
	mov dword ptr [esi+0x78],edx
	mov eax,dword ptr [edi+8]
	mov dword ptr [esi+0x7C],eax
	mov ecx,dword ptr [edi+0x2C]
	mov dword ptr [esi+0x80],ecx
	mov edx,dword ptr [edi+0x30]
	mov dword ptr [esi+0x84],edx
	mov eax,dword ptr [edi+0x34]
	mov dword ptr [esi+0x88],eax
	mov ecx,dword ptr [edi+0x38]
	mov dword ptr [esi+0x8C],ecx
	mov edx,dword ptr [edi+0xC]
	mov dword ptr [esi+0x90],edx
	mov eax,dword ptr [edi+0x10]
	mov dword ptr [esi+0x94],eax
	mov ecx,dword ptr [edi+0x14]
	mov dword ptr [esi+0x98],ecx
	mov edx,dword ptr [edi+0x18]
	mov dword ptr [esi+0xA0],edx
	mov eax,dword ptr [edi+0x1C]
	mov dword ptr [esi+0xA8],eax
	mov ecx,dword ptr [edi+0x20]
	mov dword ptr [esi+0xAC],ecx
	mov edx,dword ptr [edi+0x28]
	mov dword ptr [esi+0xB4],edx
	mov eax,dword ptr [edi+0x24]
	mov dword ptr [edi+0x28],0
	mov dword ptr [esi+0xB0],eax
	mov ecx,dword ptr [edi+0x3C]
	mov dword ptr [esi+0xB8],ecx
	mov edx,dword ptr [edi+0x40]
	mov dword ptr [esi+0xBC],edx
	mov eax,dword ptr [edi+0x44]
	lea ebp,[edi+0x4C]
	lea ebx,[esi+0xC4]
	mov dword ptr [esi+0xC0],eax
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
	mov ecx,dword ptr [edi+0x48]
	mov eax,dword ptr [esp+0x2C]
	push edi
	mov dword ptr [esi+0xC8],ecx
	mov edx,dword ptr [edi+0x50]
	mov ecx,dword ptr [esp+0x2C]
	push eax
	mov eax,dword ptr [esp+0x28]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [esi+0xA4],edx
	mov edx,dword ptr [esp+0x30]
	push edx
	mov edx,dword ptr [esp+0x24]
	push eax
	push ecx
	push edx
	mov ecx,esi
	call CCtrlWnd::CreateCtrl
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0x20
}
}
// CCtrlComboBox::AddItem
__SUB_CLASS_THIS(000DE640, __thiscall, 6805,  CCtrlComboBox, void, const char*, unsigned long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push edi
	lea ecx,[esi+0x34]
	call ZList<CCtrlComboBox::ITEM_INFO>::AddTail_
	mov edi,eax
	mov eax,dword ptr [esp+0xC]
	push eax
	mov ecx,edi
	call ZXString<char>::AssignCStr
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [edi+4],ecx
	cmp dword ptr [esi+0x64],2
	jne Block2

 Block1:
	mov dword ptr [esi+0x64],0

 Block2:
	pop edi
	pop esi
	ret 8
}
}
// CCtrlComboBox::GetText
__SUB_CLASS_THIS0(000D9950, __thiscall, 6809,  CCtrlComboBox, ZXString<char>) {
__asm {

 Block0:
	push ecx
	cmp dword ptr [ecx+0xA8],2
	push esi
	mov dword ptr [esp+4],0
	jne Block2

 Block1:
	mov esi,dword ptr [esp+0xC]
	mov ecx,dword ptr [ecx+0x54]
	push esi
	call CCtrlEdit::GetText
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block2:
	mov eax,dword ptr [ecx+0x68]
	push eax
	add ecx,0x34
	call ZList<CCtrlComboBox::ITEM_INFO>::FindIndex
	mov esi,dword ptr [esp+0xC]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CCtrlComboBox::GetStartCanvas
__SUB_CLASS_THIS0(000D8710, __thiscall, 6820,  CCtrlComboBox, _x_com_ptr<IWzCanvas>) {
__asm {

 Block0:
	push ecx
	cmp dword ptr [ecx+0x3C],0
	mov dword ptr [esp],0
	ja Block2

 Block1:
	mov dword ptr [ecx+0x64],2

 Block2:
	mov eax,dword ptr [ecx+0x60]
	test eax,eax
	je Block6

 Block3:
	cmp eax,1
	jle Block5

 Block4:
	cmp eax,5
	jle Block6

 Block5:
	mov eax,dword ptr [esp+8]
	mov dword ptr [eax],0
	pop ecx
	ret 4

 Block6:
	mov eax,dword ptr [ecx+0x64]
	push esi
	cmp eax,4
	ja Block13

 Block7:
	cmp EAX, 0
je Block8
cmp EAX, 1
je Block9
cmp EAX, 2
je Block10
cmp EAX, 3
je Block11
cmp EAX, 4
je Block12


 Block8:
	mov esi,dword ptr [esp+0xC]
	add ecx,0xE0
	push ecx
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block9:
	mov esi,dword ptr [esp+0xC]
	add ecx,0xE4
	push ecx
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block10:
	mov esi,dword ptr [esp+0xC]
	add ecx,0xE8
	push ecx
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block11:
	mov esi,dword ptr [esp+0xC]
	add ecx,0xEC
	push ecx
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block12:
	mov esi,dword ptr [esp+0xC]
	add ecx,0xF0
	push ecx
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block13:
	mov ecx,dword ptr [ecx+0xE0]
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esi],ecx
	test ecx,ecx
	je Block15

 Block14:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+4]
	call ecx

 Block15:
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CCtrlComboBox::OnKey
__SUB_CLASS_THIS(000D9910, __thiscall, 6801,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [esp+0xC]
	test esi,esi
	js Block5

 Block1:
	cmp edx,0x25
	je Block4

 Block2:
	cmp edx,0x27
	je Block4

 Block3:
	cmp edx,0x28
	jne Block5

 Block4:
	add ecx,0xFFFFFFFC
	call CCtrlComboBox::BtClicked
	pop esi
	ret 8

 Block5:
	mov eax,dword ptr [ecx+0x20]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	push esi
	push edx
	mov edx,dword ptr [eax]
	call edx
	pop esi
	ret 8
}
}
// CCtrlComboBoxSelect::~CCtrlComboBoxSelect
__SUB_CLASS_THIS0(000D8530, __thiscall, 12498,  CCtrlComboBoxSelect, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlComboBoxSelect::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlComboBoxSelect::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlComboBoxSelect::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x48]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov ecx,esi
	pop esi
	jmp  CCtrlWnd::~CCtrlWnd
}
}
// CCtrlComboBoxSelect::Draw
_SUB_EXCEPTION_HANDLER(D9AC0)
__SUB_CLASS_THIS(000D9AC0, __thiscall, 12499,  CCtrlComboBoxSelect, void, long, long, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D9AC0
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
	mov ebp,ecx
	mov eax,3
	xor ebx,ebx
	mov word ptr [esp+0x34],ax
	mov dword ptr [esp+0x3C],ebx
	mov ecx,dword ptr [ebp+0x48]
	mov dword ptr [esp+0x6C],ebx
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x30]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x6C],2
	jne Block5

 Block3:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,ebx
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block6:
	mov eax,dword ptr [ebp+0x1C]
	mov ecx,dword ptr [ebp+0x50]
	mov edi,dword ptr [esp+0x2C]
	mov edx,dword ptr [ecx+0xA0]
	lea esi,[eax-2]
	mov dword ptr [esp+0x1C],esi
	mov dword ptr [esp+0x20],edx
	cmp edi,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [ebp+0x20]
	mov edx,dword ptr [edi]
	push 0xFF999999
	push ecx
	push eax
	mov eax,dword ptr [edx+0x8C]
	push ebx
	push ebx
	push edi
	call eax
	cmp eax,ebx
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block10:
	mov ecx,dword ptr [ebp+0x50]
	mov ecx,dword ptr [ecx+0x74]
	mov eax,dword ptr [ebp+0x20]
	mov edx,dword ptr [edi]
	push ecx
	sub eax,2
	push eax
	mov eax,dword ptr [edx+0x8C]
	push esi
	push 1
	push 1
	push edi
	call eax
	cmp eax,ebx
	jge Block12

 Block11:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block12:
	mov eax,dword ptr [ebp+0x50]
	cmp dword ptr [eax+0x5C],ebx
	je Block42

 Block13:
	mov edx,dword ptr [ebp+0x20]
	mov ecx,eax
	mov eax,dword ptr [ecx+0x5C]
	mov ecx,dword ptr [eax+0x1C]
	mov ebx,dword ptr [eax+0x38]
	mov eax,dword ptr [ebp+0x1C]
	push 0xFFFFFF
	sub edx,2
	push edx
	push ecx
	sub esi,ecx
	sub eax,ecx
	push 1
	dec eax
	mov dword ptr [esp+0x2C],esi
	mov esi,dword ptr [edi]
	mov edx,dword ptr [esi+0x8C]
	push eax
	push edi
	mov dword ptr [esp+0x3C],ebx
	call edx
	test eax,eax
	jge Block15

 Block14:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block15:
	mov ecx,dword ptr [ebp+0x50]
	push ebx
	add ecx,0x34
	call ZList<CCtrlComboBox::ITEM_INFO>::FindIndex
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block67

 Block16:
	mov ebx,dword ptr [ebp+0x50]
	push eax
	lea ecx,[ebx+0x34]
	call ZList<CCtrlComboBox::ITEM_INFO>::IndexOf
	mov ecx,dword ptr [esp+0x24]
	mov esi,eax
	mov eax,dword ptr [ebx+0xAC]
	lea edx,[eax+ecx-1]
	cmp esi,edx
	jg Block67

 Block17:
	lea eax,[esp+0x28]
	push eax
	call ZList<CCtrlComboBox::ITEM_INFO>::GetNext
	add esp,4
	mov dword ptr [esp+0x30],eax
	cmp dword ptr [ebp+0x34],esi
	jne Block20

 Block18:
	mov ebx,dword ptr [ebx+0x78]
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [edi]
	mov ecx,dword ptr [ecx+0x8C]
	push ebx
	mov eax,esi
	sub eax,dword ptr [esp+0x28]
	push 0xF
	push edx
	shl eax,4
	inc eax
	push eax
	push 1
	push edi
	call ecx
	test eax,eax
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block20:
	mov edx,dword ptr [esp+0x30]
	push edx
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],0
	call ZXString<char>::op_assign
	mov byte ptr [esp+0x6C],3
	cmp dword ptr [ebp+0x34],esi
	jne Block22

 Block21:
	mov eax,dword ptr [ebp+0x44]
	jmp Block23

 Block22:
	mov eax,dword ptr [ebp+0x40]

 Block23:
	push eax
	lea eax,[esp+0x18]
	push eax
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [esp+0x1C]
	sub ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x14]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x74],4
	mov dword ptr [esp+0x38],esp
	test eax,eax
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	lea eax,[esp+0x20]
	push eax
	call format_string_1
	mov ebx,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[esp+0x54]
	push ecx
	call ebx
	lea edx,[esp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block41

 Block26:
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0x70],5
	call ebx
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block41

 Block27:
	mov ecx,dword ptr [esp+0x14]
	lea edx,[esp+0x54]
	push edx
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x48]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x80],6
	call _xbstr_t::_ctor_0
	sub esi,dword ptr [esp+0x34]
	mov eax,dword ptr [esp+0x30]
	shl esi,4
	add esi,3
	push esi
	mov byte ptr [esp+0x80],7
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x84],6
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x6C],5
	cmp word ptr [esp+0x44],si
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov byte ptr [esp+0x6C],4
	cmp word ptr [esp+0x54],si
	jne Block34

 Block32:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x6C],3
	test eax,eax
	je Block37

 Block36:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block37:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x6C],2
	test eax,eax
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	jne Block16

 Block40:
	jmp Block67

 Block41:
	push eax
	call _com_issue_error

 Block42:
	mov eax,dword ptr [eax+0x40]
	mov dword ptr [esp+0x28],eax
	cmp eax,ebx
	je Block67

 Block43:
	sub esi,dword ptr [esp+0x20]
	mov dword ptr [esp+0x24],esi

 Block44:
	mov ebx,dword ptr [ebp+0x50]
	push eax
	lea ecx,[ebx+0x34]
	call ZList<CCtrlComboBox::ITEM_INFO>::IndexOf
	lea ecx,[esp+0x28]
	push ecx
	mov esi,eax
	call ZList<CCtrlComboBox::ITEM_INFO>::GetNext
	add esp,4
	mov dword ptr [esp+0x30],eax
	cmp dword ptr [ebp+0x34],esi
	jne Block47

 Block45:
	mov ebx,dword ptr [ebx+0x78]
	mov eax,dword ptr [esp+0x1C]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x8C]
	push ebx
	push 0xF
	mov ecx,esi
	push eax
	shl ecx,4
	inc ecx
	push ecx
	push 1
	push edi
	call edx
	test eax,eax
	jge Block47

 Block46:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block47:
	mov eax,dword ptr [esp+0x30]
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],0
	call ZXString<char>::op_assign
	mov byte ptr [esp+0x6C],8
	cmp dword ptr [ebp+0x34],esi
	jne Block49

 Block48:
	mov eax,dword ptr [ebp+0x44]
	jmp Block50

 Block49:
	mov eax,dword ptr [ebp+0x40]

 Block50:
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	call get_basic_font
	add esp,8
	mov edx,dword ptr [esp+0x24]
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x74],9
	mov dword ptr [esp+0x38],esp
	test eax,eax
	je Block52

 Block51:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block52:
	lea ecx,[esp+0x1C]
	push ecx
	call format_string_1
	mov ebx,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[esp+0x44]
	push edx
	call ebx
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block41

 Block53:
	lea ecx,[esp+0x54]
	push ecx
	mov byte ptr [esp+0x70],0xA
	call ebx
	lea edx,[esp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block41

 Block54:
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x44]
	push eax
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0x58]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x80],0xB
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x30]
	shl esi,4
	sub esi,dword ptr [ebp+0x4C]
	mov byte ptr [esp+0x7C],0xC
	inc esi
	push esi
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x84],0xB
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x6C],0xA
	cmp word ptr [esp+0x54],si
	jne Block57

 Block55:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov byte ptr [esp+0x6C],9
	cmp word ptr [esp+0x44],si
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x6C],8
	test eax,eax
	je Block64

 Block63:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block64:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x6C],2
	test eax,eax
	je Block66

 Block65:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block66:
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	jne Block44

 Block67:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [esp+0x70],0xFFFFFFFF
	call ecx
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
// CCtrlComboBox::DeleteByParam
_SUB_EXCEPTION_HANDLER(DA470)
__SUB_CLASS_THIS(000DA470, __thiscall, 6816,  CCtrlComboBox, void, unsigned long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_DA470
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
	mov ebp,ecx
	xor ebx,ebx
	mov dword ptr [ebp+0x68],ebx
	call CCtrlComboBox::RemoveSelectWnd
	mov eax,dword ptr [ebp+0x40]
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block7

 Block1:
	mov edi,edi

 Block2:
	mov edi,eax
	lea eax,[esp+0x14]
	push eax
	call ZList<CCtrlComboBox::ITEM_INFO>::GetNext
	add esp,4
	mov esi,eax
	push esi
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::op_assign
	mov esi,dword ptr [esi+4]
	mov dword ptr [esp+0x1C],esi
	mov dword ptr [esp+0x28],ebx
	cmp esi,dword ptr [esp+0x30]
	jne Block4

 Block3:
	push edi
	lea ecx,[ebp+0x34]
	call ZList<CCtrlComboBox::ITEM_INFO>::RemoveAt

 Block4:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	jne Block2

 Block7:
	cmp dword ptr [esp+0x34],ebx
	je Block9

 Block8:
	mov ecx,ebp
	call CCtrlComboBox::MakeSelectWnd

 Block9:
	mov ecx,ebp
	call CCtrlWnd::InvalidateRect
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
// CCtrlComboBox::OnCreate
_SUB_EXCEPTION_HANDLER(DA7D0)
__SUB_CLASS_THIS(000DA7D0, __thiscall, 6797,  CCtrlComboBox, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_DA7D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x47C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x490]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	mov eax,dword ptr [esi+0xC4]
	lea ecx,[esi+0xC4]
	test eax,eax
	je Block3

 Block1:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block3

 Block2:
	mov eax,dword ptr [eax-4]
	shr eax,1
	jne Block4

 Block3:
	mov eax,dword ptr [esi+0x60]
	push ecx
	push eax
	mov ecx,esi
	call CCtrlComboBox::GetComboBoxUOL

 Block4:
	mov eax,dword ptr [esi+0x60]
	cmp eax,5
	ja Block542

 Block5:
	cmp EAX, 0
je Block6
cmp EAX, 1
je Block434
cmp EAX, 2
je Block6
cmp EAX, 3
je Block6
cmp EAX, 4
je Block6
cmp EAX, 5
je Block6


 Block6:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xE4]
	push ecx
	call edi
	lea edx,[esp+0xE4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	xor esi,esi
	add esp,8
	cmp eax,esi
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	lea eax,[esp+0x254]
	push eax
	mov dword ptr [esp+0x49C],esi
	call edi
	lea ecx,[esp+0x254]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	push esi
	push esi
	lea edx,[esp+0xEC]
	push edx
	lea eax,[esp+0x260]
	push eax
	lea ecx,[esp+0xC0]
	push 0xAF6
	push ecx
	mov byte ptr [esp+0x4B0],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [esp+0x28]
	push eax
	lea edx,[esp+0x80]
	push edx
	lea ecx,[ebp+0xC4]
	mov byte ptr [esp+0x4B0],2
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block12

 Block11:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block12:
	mov byte ptr [esp+0x4AC],4
	cmp dword ptr [_D_G_RM],esi
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea eax,[esp+0x338]
	mov bl,3
	mov byte ptr [esp+0x4AC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x4A0],5
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xCC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block17

 Block15:
	cmp eax,0x80004002
	je Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	cmp word ptr [esp+0x324],8
	mov byte ptr [esp+0x498],bl
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x32C]
	xor ecx,ecx
	mov word ptr [esp+0x324],cx
	cmp eax,esi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x324]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov ecx,dword ptr [esp+0x6C]
	cmp ecx,esi
	je Block23

 Block22:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x6C],esi

 Block23:
	mov ecx,dword ptr [esp+0xB0]
	cmp ecx,esi
	je Block25

 Block24:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0xB0],esi

 Block25:
	mov ebx,8
	mov byte ptr [esp+0x498],0
	cmp word ptr [esp+0x254],bx
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x254],ax
	mov eax,dword ptr [esp+0x25C]
	cmp eax,esi
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x254]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov dword ptr [esp+0x498],0xFFFFFFFF
	cmp word ptr [esp+0xE4],bx
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0xEC]
	xor edx,edx
	mov word ptr [esp+0xE4],dx
	cmp eax,esi
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea eax,[esp+0xE4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block33:
	lea ecx,[esp+0x104]
	push ecx
	call edi
	lea edx,[esp+0x104]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	lea eax,[esp+0x214]
	push eax
	mov dword ptr [esp+0x49C],6
	call edi
	lea ecx,[esp+0x214]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	push esi
	push esi
	lea edx,[esp+0x10C]
	push edx
	lea eax,[esp+0x220]
	push eax
	lea ecx,[esp+0x84]
	push 0xAF7
	push ecx
	mov byte ptr [esp+0x4B0],7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea edx,[esp+0x38]
	push edx
	lea ecx,[ebp+0xC4]
	mov byte ptr [esp+0x4B0],8
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block39

 Block38:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block39:
	mov byte ptr [esp+0x4AC],0xA
	cmp dword ptr [_D_G_RM],esi
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	lea eax,[esp+0x358]
	mov bl,9
	mov byte ptr [esp+0x4AC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x4A0],0xB
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xD0]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block44

 Block42:
	cmp eax,0x80004002
	je Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	cmp word ptr [esp+0x344],8
	mov byte ptr [esp+0x498],bl
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x34C]
	xor ecx,ecx
	mov word ptr [esp+0x344],cx
	cmp eax,esi
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[esp+0x344]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov ecx,dword ptr [esp+0x24]
	cmp ecx,esi
	je Block50

 Block49:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x24],esi

 Block50:
	mov ecx,dword ptr [esp+0x74]
	cmp ecx,esi
	je Block52

 Block51:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x74],esi

 Block52:
	mov ebx,8
	mov byte ptr [esp+0x498],6
	cmp word ptr [esp+0x214],bx
	jne Block55

 Block53:
	xor eax,eax
	mov word ptr [esp+0x214],ax
	mov eax,dword ptr [esp+0x21C]
	cmp eax,esi
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea ecx,[esp+0x214]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov dword ptr [esp+0x498],0xFFFFFFFF
	cmp word ptr [esp+0x104],bx
	jne Block59

 Block57:
	mov eax,dword ptr [esp+0x10C]
	xor edx,edx
	mov word ptr [esp+0x104],dx
	cmp eax,esi
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[esp+0x104]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block60:
	lea ecx,[esp+0x124]
	push ecx
	call edi
	lea edx,[esp+0x124]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	lea eax,[esp+0x234]
	push eax
	mov dword ptr [esp+0x49C],0xC
	call edi
	lea ecx,[esp+0x234]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block64

 Block63:
	push eax
	call _com_issue_error

 Block64:
	push esi
	push esi
	lea edx,[esp+0x12C]
	push edx
	lea eax,[esp+0x240]
	push eax
	lea ecx,[esp+0xAC]
	push 0xAF8
	push ecx
	mov byte ptr [esp+0x4B0],0xD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea edx,[esp+0x40]
	push edx
	lea ecx,[ebp+0xC4]
	mov byte ptr [esp+0x4B0],0xE
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block66

 Block65:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block66:
	mov byte ptr [esp+0x4AC],0x10
	cmp dword ptr [_D_G_RM],esi
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	lea eax,[esp+0x458]
	mov bl,0xF
	mov byte ptr [esp+0x4AC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x4A0],0x11
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xD4]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block71

 Block69:
	cmp eax,0x80004002
	je Block71

 Block70:
	push eax
	call _com_issue_error

 Block71:
	cmp word ptr [esp+0x444],8
	mov byte ptr [esp+0x498],bl
	jne Block74

 Block72:
	mov eax,dword ptr [esp+0x44C]
	xor ecx,ecx
	mov word ptr [esp+0x444],cx
	cmp eax,esi
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea edx,[esp+0x444]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov ecx,dword ptr [esp+0x2C]
	cmp ecx,esi
	je Block77

 Block76:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x2C],esi

 Block77:
	mov ecx,dword ptr [esp+0x9C]
	cmp ecx,esi
	je Block79

 Block78:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x9C],esi

 Block79:
	mov ebx,8
	mov byte ptr [esp+0x498],0xC
	cmp word ptr [esp+0x234],bx
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [esp+0x234],ax
	mov eax,dword ptr [esp+0x23C]
	cmp eax,esi
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[esp+0x234]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	mov dword ptr [esp+0x498],0xFFFFFFFF
	cmp word ptr [esp+0x124],bx
	jne Block86

 Block84:
	mov eax,dword ptr [esp+0x12C]
	xor edx,edx
	mov word ptr [esp+0x124],dx
	cmp eax,esi
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea eax,[esp+0x124]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block87:
	lea ecx,[esp+0x144]
	push ecx
	call edi
	lea edx,[esp+0x144]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block89

 Block88:
	push eax
	call _com_issue_error

 Block89:
	lea eax,[esp+0xC4]
	push eax
	mov dword ptr [esp+0x49C],0x12
	call edi
	lea ecx,[esp+0xC4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block91

 Block90:
	push eax
	call _com_issue_error

 Block91:
	push esi
	push esi
	lea edx,[esp+0x14C]
	push edx
	lea eax,[esp+0xD0]
	push eax
	lea ecx,[esp+0x8C]
	push 0xAF9
	push ecx
	mov byte ptr [esp+0x4B0],0x13
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea edx,[esp+0x48]
	push edx
	lea ecx,[ebp+0xC4]
	mov byte ptr [esp+0x4B0],0x14
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block93

 Block92:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block93:
	mov byte ptr [esp+0x4AC],0x16
	cmp dword ptr [_D_G_RM],esi
	jne Block95

 Block94:
	push 0x80004003
	call _com_issue_error

 Block95:
	lea eax,[esp+0x378]
	mov bl,0x15
	mov byte ptr [esp+0x4AC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x4A0],0x17
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xD8]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block98

 Block96:
	cmp eax,0x80004002
	je Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	cmp word ptr [esp+0x364],8
	mov byte ptr [esp+0x498],bl
	jne Block101

 Block99:
	mov eax,dword ptr [esp+0x36C]
	xor ecx,ecx
	mov word ptr [esp+0x364],cx
	cmp eax,esi
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea edx,[esp+0x364]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	mov ecx,dword ptr [esp+0x34]
	cmp ecx,esi
	je Block104

 Block103:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x34],esi

 Block104:
	mov ecx,dword ptr [esp+0x7C]
	cmp ecx,esi
	je Block106

 Block105:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x7C],esi

 Block106:
	mov ebx,8
	mov byte ptr [esp+0x498],0x12
	cmp word ptr [esp+0xC4],bx
	jne Block109

 Block107:
	xor eax,eax
	mov word ptr [esp+0xC4],ax
	mov eax,dword ptr [esp+0xCC]
	cmp eax,esi
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea ecx,[esp+0xC4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block110:
	mov dword ptr [esp+0x498],0xFFFFFFFF
	cmp word ptr [esp+0x144],bx
	jne Block113

 Block111:
	mov eax,dword ptr [esp+0x14C]
	xor edx,edx
	mov word ptr [esp+0x144],dx
	cmp eax,esi
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea eax,[esp+0x144]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block114:
	lea ecx,[esp+0x164]
	push ecx
	call edi
	lea edx,[esp+0x164]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block116

 Block115:
	push eax
	call _com_issue_error

 Block116:
	lea eax,[esp+0x274]
	push eax
	mov dword ptr [esp+0x49C],0x18
	call edi
	lea ecx,[esp+0x274]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block118

 Block117:
	push eax
	call _com_issue_error

 Block118:
	push esi
	push esi
	lea edx,[esp+0x16C]
	push edx
	lea eax,[esp+0x280]
	push eax
	lea ecx,[esp+0xB8]
	push 0xAFA
	push ecx
	mov byte ptr [esp+0x4B0],0x19
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea edx,[esp+0x50]
	push edx
	lea ecx,[ebp+0xC4]
	mov byte ptr [esp+0x4B0],0x1A
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block120

 Block119:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block120:
	mov byte ptr [esp+0x4AC],0x1C
	cmp dword ptr [_D_G_RM],esi
	jne Block122

 Block121:
	push 0x80004003
	call _com_issue_error

 Block122:
	lea eax,[esp+0x3F8]
	mov bl,0x1B
	mov byte ptr [esp+0x4AC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x4A0],0x1D
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xDC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block125

 Block123:
	cmp eax,0x80004002
	je Block125

 Block124:
	push eax
	call _com_issue_error

 Block125:
	cmp word ptr [esp+0x3E4],8
	mov byte ptr [esp+0x498],bl
	jne Block128

 Block126:
	mov eax,dword ptr [esp+0x3EC]
	xor ecx,ecx
	mov word ptr [esp+0x3E4],cx
	cmp eax,esi
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea edx,[esp+0x3E4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block129:
	mov ecx,dword ptr [esp+0x3C]
	cmp ecx,esi
	je Block131

 Block130:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x3C],esi

 Block131:
	mov ecx,dword ptr [esp+0xA8]
	cmp ecx,esi
	je Block133

 Block132:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0xA8],esi

 Block133:
	mov ebx,8
	mov byte ptr [esp+0x498],0x18
	cmp word ptr [esp+0x274],bx
	jne Block136

 Block134:
	xor eax,eax
	mov word ptr [esp+0x274],ax
	mov eax,dword ptr [esp+0x27C]
	cmp eax,esi
	je Block137

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block137

 Block136:
	lea ecx,[esp+0x274]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block137:
	mov dword ptr [esp+0x498],0xFFFFFFFF
	cmp word ptr [esp+0x164],bx
	jne Block140

 Block138:
	mov eax,dword ptr [esp+0x16C]
	xor edx,edx
	mov word ptr [esp+0x164],dx
	cmp eax,esi
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea eax,[esp+0x164]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block141:
	lea ecx,[esp+0x184]
	push ecx
	call edi
	lea edx,[esp+0x184]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block143

 Block142:
	push eax
	call _com_issue_error

 Block143:
	lea eax,[esp+0x294]
	push eax
	mov dword ptr [esp+0x49C],0x1E
	call edi
	lea ecx,[esp+0x294]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block145

 Block144:
	push eax
	call _com_issue_error

 Block145:
	push esi
	push esi
	lea edx,[esp+0x18C]
	push edx
	lea eax,[esp+0x2A0]
	push eax
	lea ecx,[esp+0x94]
	push 0x5C7
	push ecx
	mov byte ptr [esp+0x4B0],0x1F
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea edx,[esp+0x58]
	push edx
	lea ecx,[ebp+0xC4]
	mov byte ptr [esp+0x4B0],0x20
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block147

 Block146:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block147:
	mov byte ptr [esp+0x4AC],0x22
	cmp dword ptr [_D_G_RM],esi
	jne Block149

 Block148:
	push 0x80004003
	call _com_issue_error

 Block149:
	lea eax,[esp+0x398]
	mov bl,0x21
	mov byte ptr [esp+0x4AC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x4A0],0x23
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xE0]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block152

 Block150:
	cmp eax,0x80004002
	je Block152

 Block151:
	push eax
	call _com_issue_error

 Block152:
	cmp word ptr [esp+0x384],8
	mov byte ptr [esp+0x498],bl
	jne Block155

 Block153:
	mov eax,dword ptr [esp+0x38C]
	xor ecx,ecx
	mov word ptr [esp+0x384],cx
	cmp eax,esi
	je Block156

 Block154:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block156

 Block155:
	lea edx,[esp+0x384]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block156:
	mov ecx,dword ptr [esp+0x44]
	cmp ecx,esi
	je Block158

 Block157:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x44],esi

 Block158:
	mov ecx,dword ptr [esp+0x84]
	cmp ecx,esi
	je Block160

 Block159:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x84],esi

 Block160:
	mov ebx,8
	mov byte ptr [esp+0x498],0x1E
	cmp word ptr [esp+0x294],bx
	jne Block163

 Block161:
	xor eax,eax
	mov word ptr [esp+0x294],ax
	mov eax,dword ptr [esp+0x29C]
	cmp eax,esi
	je Block164

 Block162:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block164

 Block163:
	lea ecx,[esp+0x294]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block164:
	mov dword ptr [esp+0x498],0xFFFFFFFF
	cmp word ptr [esp+0x184],bx
	jne Block167

 Block165:
	mov eax,dword ptr [esp+0x18C]
	xor edx,edx
	mov word ptr [esp+0x184],dx
	cmp eax,esi
	je Block168

 Block166:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block168

 Block167:
	lea eax,[esp+0x184]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block168:
	lea ecx,[esp+0x1A4]
	push ecx
	call edi
	lea edx,[esp+0x1A4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block170

 Block169:
	push eax
	call _com_issue_error

 Block170:
	lea eax,[esp+0x2B4]
	push eax
	mov dword ptr [esp+0x49C],0x24
	call edi
	lea ecx,[esp+0x2B4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block172

 Block171:
	push eax
	call _com_issue_error

 Block172:
	push esi
	push esi
	lea edx,[esp+0x1AC]
	push edx
	lea eax,[esp+0x2C0]
	push eax
	lea ecx,[esp+0xB4]
	push 0x5C9
	push ecx
	mov byte ptr [esp+0x4B0],0x25
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea edx,[esp+0x60]
	push edx
	lea ecx,[ebp+0xC4]
	mov byte ptr [esp+0x4B0],0x26
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block174

 Block173:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block174:
	mov byte ptr [esp+0x4AC],0x28
	cmp dword ptr [_D_G_RM],esi
	jne Block176

 Block175:
	push 0x80004003
	call _com_issue_error

 Block176:
	lea eax,[esp+0x438]
	mov bl,0x27
	mov byte ptr [esp+0x4AC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x4A0],0x29
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xE4]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block179

 Block177:
	cmp eax,0x80004002
	je Block179

 Block178:
	push eax
	call _com_issue_error

 Block179:
	cmp word ptr [esp+0x424],8
	mov byte ptr [esp+0x498],bl
	jne Block182

 Block180:
	mov eax,dword ptr [esp+0x42C]
	xor ecx,ecx
	mov word ptr [esp+0x424],cx
	cmp eax,esi
	je Block183

 Block181:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block183

 Block182:
	lea edx,[esp+0x424]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block183:
	mov ecx,dword ptr [esp+0x4C]
	cmp ecx,esi
	je Block185

 Block184:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x4C],esi

 Block185:
	mov ecx,dword ptr [esp+0xA4]
	cmp ecx,esi
	je Block187

 Block186:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0xA4],esi

 Block187:
	mov ebx,8
	mov byte ptr [esp+0x498],0x24
	cmp word ptr [esp+0x2B4],bx
	jne Block190

 Block188:
	xor eax,eax
	mov word ptr [esp+0x2B4],ax
	mov eax,dword ptr [esp+0x2BC]
	cmp eax,esi
	je Block191

 Block189:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block191

 Block190:
	lea ecx,[esp+0x2B4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block191:
	mov dword ptr [esp+0x498],0xFFFFFFFF
	cmp word ptr [esp+0x1A4],bx
	jne Block194

 Block192:
	mov eax,dword ptr [esp+0x1AC]
	xor edx,edx
	mov word ptr [esp+0x1A4],dx
	cmp eax,esi
	je Block195

 Block193:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block195

 Block194:
	lea eax,[esp+0x1A4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block195:
	lea ecx,[esp+0x1C4]
	push ecx
	call edi
	lea edx,[esp+0x1C4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block197

 Block196:
	push eax
	call _com_issue_error

 Block197:
	lea eax,[esp+0x2D4]
	push eax
	mov dword ptr [esp+0x49C],0x2A
	call edi
	lea ecx,[esp+0x2D4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block199

 Block198:
	push eax
	call _com_issue_error

 Block199:
	push esi
	push esi
	lea edx,[esp+0x1CC]
	push edx
	lea eax,[esp+0x2E0]
	push eax
	lea ecx,[esp+0x9C]
	push 0x5CB
	push ecx
	mov byte ptr [esp+0x4B0],0x2B
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea edx,[esp+0x68]
	push edx
	lea ecx,[ebp+0xC4]
	mov byte ptr [esp+0x4B0],0x2C
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block201

 Block200:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block201:
	mov byte ptr [esp+0x4AC],0x2E
	cmp dword ptr [_D_G_RM],esi
	jne Block203

 Block202:
	push 0x80004003
	call _com_issue_error

 Block203:
	lea eax,[esp+0x3B8]
	mov bl,0x2D
	mov byte ptr [esp+0x4AC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x4A0],0x2F
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xE8]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block206

 Block204:
	cmp eax,0x80004002
	je Block206

 Block205:
	push eax
	call _com_issue_error

 Block206:
	cmp word ptr [esp+0x3A4],8
	mov byte ptr [esp+0x498],bl
	jne Block209

 Block207:
	mov eax,dword ptr [esp+0x3AC]
	xor ecx,ecx
	mov word ptr [esp+0x3A4],cx
	cmp eax,esi
	je Block210

 Block208:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block210

 Block209:
	lea edx,[esp+0x3A4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block210:
	mov ecx,dword ptr [esp+0x54]
	cmp ecx,esi
	je Block212

 Block211:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x54],esi

 Block212:
	mov ecx,dword ptr [esp+0x8C]
	cmp ecx,esi
	je Block214

 Block213:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x8C],esi

 Block214:
	mov ebx,8
	mov byte ptr [esp+0x498],0x2A
	cmp word ptr [esp+0x2D4],bx
	jne Block217

 Block215:
	xor eax,eax
	mov word ptr [esp+0x2D4],ax
	mov eax,dword ptr [esp+0x2DC]
	cmp eax,esi
	je Block218

 Block216:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block218

 Block217:
	lea ecx,[esp+0x2D4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block218:
	mov dword ptr [esp+0x498],0xFFFFFFFF
	cmp word ptr [esp+0x1C4],bx
	jne Block221

 Block219:
	mov eax,dword ptr [esp+0x1CC]
	xor edx,edx
	mov word ptr [esp+0x1C4],dx
	cmp eax,esi
	je Block222

 Block220:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block222

 Block221:
	lea eax,[esp+0x1C4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block222:
	lea ecx,[esp+0x1E4]
	push ecx
	call edi
	lea edx,[esp+0x1E4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block224

 Block223:
	push eax
	call _com_issue_error

 Block224:
	lea eax,[esp+0x2F4]
	push eax
	mov dword ptr [esp+0x49C],0x30
	call edi
	lea ecx,[esp+0x2F4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block226

 Block225:
	push eax
	call _com_issue_error

 Block226:
	push esi
	push esi
	lea edx,[esp+0x1EC]
	push edx
	lea eax,[esp+0x300]
	push eax
	lea ecx,[esp+0xBC]
	push 0x5CD
	push ecx
	mov byte ptr [esp+0x4B0],0x31
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea edx,[esp+0x70]
	push edx
	lea ecx,[ebp+0xC4]
	mov byte ptr [esp+0x4B0],0x32
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block228

 Block227:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block228:
	mov byte ptr [esp+0x4AC],0x34
	cmp dword ptr [_D_G_RM],esi
	jne Block230

 Block229:
	push 0x80004003
	call _com_issue_error

 Block230:
	lea eax,[esp+0x418]
	mov bl,0x33
	mov byte ptr [esp+0x4AC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x4A0],0x35
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xEC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block233

 Block231:
	cmp eax,0x80004002
	je Block233

 Block232:
	push eax
	call _com_issue_error

 Block233:
	cmp word ptr [esp+0x404],8
	mov byte ptr [esp+0x498],bl
	jne Block236

 Block234:
	mov eax,dword ptr [esp+0x40C]
	xor ecx,ecx
	mov word ptr [esp+0x404],cx
	cmp eax,esi
	je Block237

 Block235:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block237

 Block236:
	lea edx,[esp+0x404]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block237:
	mov ecx,dword ptr [esp+0x5C]
	cmp ecx,esi
	je Block239

 Block238:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x5C],esi

 Block239:
	mov ecx,dword ptr [esp+0xAC]
	cmp ecx,esi
	je Block241

 Block240:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0xAC],esi

 Block241:
	mov ebx,8
	mov byte ptr [esp+0x498],0x30
	cmp word ptr [esp+0x2F4],bx
	jne Block244

 Block242:
	xor eax,eax
	mov word ptr [esp+0x2F4],ax
	mov eax,dword ptr [esp+0x2FC]
	cmp eax,esi
	je Block245

 Block243:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block245

 Block244:
	lea ecx,[esp+0x2F4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block245:
	mov dword ptr [esp+0x498],0xFFFFFFFF
	cmp word ptr [esp+0x1E4],bx
	jne Block248

 Block246:
	mov eax,dword ptr [esp+0x1EC]
	xor edx,edx
	mov word ptr [esp+0x1E4],dx
	cmp eax,esi
	je Block249

 Block247:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block249

 Block248:
	lea eax,[esp+0x1E4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block249:
	lea ecx,[esp+0x204]
	push ecx
	call edi
	lea edx,[esp+0x204]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block251

 Block250:
	push eax
	call _com_issue_error

 Block251:
	lea eax,[esp+0x314]
	push eax
	mov dword ptr [esp+0x49C],0x36
	call edi
	lea ecx,[esp+0x314]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block253

 Block252:
	push eax
	call _com_issue_error

 Block253:
	push esi
	push esi
	lea edx,[esp+0x20C]
	push edx
	lea eax,[esp+0x320]
	push eax
	lea ecx,[esp+0xA4]
	push 0xAF0
	push ecx
	mov byte ptr [esp+0x4B0],0x37
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea edx,[esp+0x78]
	push edx
	lea ecx,[ebp+0xC4]
	mov byte ptr [esp+0x4B0],0x38
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block255

 Block254:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block255:
	mov byte ptr [esp+0x4AC],0x3A
	cmp dword ptr [_D_G_RM],esi
	jne Block257

 Block256:
	push 0x80004003
	call _com_issue_error

 Block257:
	lea eax,[esp+0x3D8]
	mov bl,0x39
	mov byte ptr [esp+0x4AC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x4A0],0x3B
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xF0]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block260

 Block258:
	cmp eax,0x80004002
	je Block260

 Block259:
	push eax
	call _com_issue_error

 Block260:
	cmp word ptr [esp+0x3C4],8
	mov byte ptr [esp+0x498],bl
	jne Block263

 Block261:
	mov eax,dword ptr [esp+0x3CC]
	xor ecx,ecx
	mov word ptr [esp+0x3C4],cx
	cmp eax,esi
	je Block264

 Block262:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block264

 Block263:
	lea edx,[esp+0x3C4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block264:
	mov ecx,dword ptr [esp+0x64]
	cmp ecx,esi
	je Block266

 Block265:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x64],esi

 Block266:
	mov ecx,dword ptr [esp+0x94]
	cmp ecx,esi
	je Block268

 Block267:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x94],esi

 Block268:
	mov ebx,8
	mov byte ptr [esp+0x498],0x36
	cmp word ptr [esp+0x314],bx
	jne Block271

 Block269:
	xor eax,eax
	mov word ptr [esp+0x314],ax
	mov eax,dword ptr [esp+0x31C]
	cmp eax,esi
	je Block272

 Block270:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block272

 Block271:
	lea ecx,[esp+0x314]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block272:
	mov dword ptr [esp+0x498],0xFFFFFFFF
	cmp word ptr [esp+0x204],bx
	jne Block275

 Block273:
	mov eax,dword ptr [esp+0x20C]
	xor edx,edx
	mov word ptr [esp+0x204],dx
	cmp eax,esi
	je Block276

 Block274:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block276

 Block275:
	lea eax,[esp+0x204]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block276:
	lea ecx,[esp+0x224]
	push ecx
	call edi
	lea edx,[esp+0x224]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block278

 Block277:
	push eax
	call _com_issue_error

 Block278:
	lea eax,[esp+0x304]
	push eax
	mov dword ptr [esp+0x49C],0x3C
	call edi
	lea ecx,[esp+0x304]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block280

 Block279:
	push eax
	call _com_issue_error

 Block280:
	push esi
	push esi
	lea edx,[esp+0x22C]
	push edx
	lea eax,[esp+0x310]
	push eax
	lea ecx,[esp+0xC4]
	push 0xAF1
	push ecx
	mov byte ptr [esp+0x4B0],0x3D
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea edx,[esp+0x30]
	push edx
	lea ecx,[ebp+0xC4]
	mov byte ptr [esp+0x4B0],0x3E
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block282

 Block281:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block282:
	mov byte ptr [esp+0x4AC],0x40
	cmp dword ptr [_D_G_RM],esi
	jne Block284

 Block283:
	push 0x80004003
	call _com_issue_error

 Block284:
	lea eax,[esp+0x348]
	mov bl,0x3F
	mov byte ptr [esp+0x4AC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x4A0],0x41
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xF4]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block287

 Block285:
	cmp eax,0x80004002
	je Block287

 Block286:
	push eax
	call _com_issue_error

 Block287:
	cmp word ptr [esp+0x334],8
	mov byte ptr [esp+0x498],bl
	jne Block290

 Block288:
	mov eax,dword ptr [esp+0x33C]
	xor ecx,ecx
	mov word ptr [esp+0x334],cx
	cmp eax,esi
	je Block291

 Block289:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block291

 Block290:
	lea edx,[esp+0x334]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block291:
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,esi
	je Block293

 Block292:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x1C],esi

 Block293:
	mov ecx,dword ptr [esp+0xB4]
	cmp ecx,esi
	je Block295

 Block294:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0xB4],esi

 Block295:
	mov ebx,8
	mov byte ptr [esp+0x498],0x3C
	cmp word ptr [esp+0x304],bx
	jne Block298

 Block296:
	xor eax,eax
	mov word ptr [esp+0x304],ax
	mov eax,dword ptr [esp+0x30C]
	cmp eax,esi
	je Block299

 Block297:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block299

 Block298:
	lea ecx,[esp+0x304]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block299:
	mov dword ptr [esp+0x498],0xFFFFFFFF
	cmp word ptr [esp+0x224],bx
	jne Block302

 Block300:
	mov eax,dword ptr [esp+0x22C]
	xor edx,edx
	mov word ptr [esp+0x224],dx
	cmp eax,esi
	je Block303

 Block301:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block303

 Block302:
	lea eax,[esp+0x224]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block303:
	lea ecx,[esp+0x244]
	push ecx
	call edi
	lea edx,[esp+0x244]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block305

 Block304:
	push eax
	call _com_issue_error

 Block305:
	lea eax,[esp+0x2A4]
	push eax
	mov dword ptr [esp+0x49C],0x42
	call edi
	lea ecx,[esp+0x2A4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block307

 Block306:
	push eax
	call _com_issue_error

 Block307:
	push esi
	push esi
	lea edx,[esp+0x24C]
	push edx
	lea eax,[esp+0x2B0]
	push eax
	lea ecx,[esp+0x38]
	push 0xAF2
	push ecx
	mov byte ptr [esp+0x4B0],0x43
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea edx,[esp+0x34]
	push edx
	lea ecx,[ebp+0xC4]
	mov byte ptr [esp+0x4B0],0x44
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block309

 Block308:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block309:
	mov byte ptr [esp+0x4AC],0x46
	cmp dword ptr [_D_G_RM],esi
	jne Block311

 Block310:
	push 0x80004003
	call _com_issue_error

 Block311:
	lea eax,[esp+0x368]
	mov bl,0x45
	mov byte ptr [esp+0x4AC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x4A0],0x47
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xF8]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block314

 Block312:
	cmp eax,0x80004002
	je Block314

 Block313:
	push eax
	call _com_issue_error

 Block314:
	cmp word ptr [esp+0x354],8
	mov byte ptr [esp+0x498],bl
	jne Block317

 Block315:
	mov eax,dword ptr [esp+0x35C]
	xor ecx,ecx
	mov word ptr [esp+0x354],cx
	cmp eax,esi
	je Block318

 Block316:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block318

 Block317:
	lea edx,[esp+0x354]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block318:
	mov ecx,dword ptr [esp+0x20]
	cmp ecx,esi
	je Block320

 Block319:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x20],esi

 Block320:
	mov ecx,dword ptr [esp+0x28]
	cmp ecx,esi
	je Block322

 Block321:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x28],esi

 Block322:
	mov ebx,8
	mov byte ptr [esp+0x498],0x42
	cmp word ptr [esp+0x2A4],bx
	jne Block325

 Block323:
	xor eax,eax
	mov word ptr [esp+0x2A4],ax
	mov eax,dword ptr [esp+0x2AC]
	cmp eax,esi
	je Block326

 Block324:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block326

 Block325:
	lea ecx,[esp+0x2A4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block326:
	mov dword ptr [esp+0x498],0xFFFFFFFF
	cmp word ptr [esp+0x244],bx
	jne Block329

 Block327:
	mov eax,dword ptr [esp+0x24C]
	xor edx,edx
	mov word ptr [esp+0x244],dx
	cmp eax,esi
	je Block330

 Block328:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block330

 Block329:
	lea eax,[esp+0x244]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block330:
	lea ecx,[esp+0x264]
	push ecx
	call edi
	lea edx,[esp+0x264]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block332

 Block331:
	push eax
	call _com_issue_error

 Block332:
	lea eax,[esp+0x2E4]
	push eax
	mov dword ptr [esp+0x49C],0x48
	call edi
	lea ecx,[esp+0x2E4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block334

 Block333:
	push eax
	call _com_issue_error

 Block334:
	push esi
	push esi
	lea edx,[esp+0x26C]
	push edx
	lea eax,[esp+0x2F0]
	push eax
	lea ecx,[esp+0x48]
	push 0xAF3
	push ecx
	mov byte ptr [esp+0x4B0],0x49
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea edx,[esp+0x44]
	push edx
	lea ecx,[ebp+0xC4]
	mov byte ptr [esp+0x4B0],0x4A
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block336

 Block335:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block336:
	mov byte ptr [esp+0x4AC],0x4C
	cmp dword ptr [_D_G_RM],esi
	jne Block338

 Block337:
	push 0x80004003
	call _com_issue_error

 Block338:
	lea eax,[esp+0x388]
	mov bl,0x4B
	mov byte ptr [esp+0x4AC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x4A0],0x4D
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xFC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block341

 Block339:
	cmp eax,0x80004002
	je Block341

 Block340:
	push eax
	call _com_issue_error

 Block341:
	cmp word ptr [esp+0x374],8
	mov byte ptr [esp+0x498],bl
	jne Block344

 Block342:
	mov eax,dword ptr [esp+0x37C]
	xor ecx,ecx
	mov word ptr [esp+0x374],cx
	cmp eax,esi
	je Block345

 Block343:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block345

 Block344:
	lea edx,[esp+0x374]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block345:
	mov ecx,dword ptr [esp+0x30]
	cmp ecx,esi
	je Block347

 Block346:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x30],esi

 Block347:
	mov ecx,dword ptr [esp+0x38]
	cmp ecx,esi
	je Block349

 Block348:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x38],esi

 Block349:
	mov ebx,8
	mov byte ptr [esp+0x498],0x48
	cmp word ptr [esp+0x2E4],bx
	jne Block352

 Block350:
	xor eax,eax
	mov word ptr [esp+0x2E4],ax
	mov eax,dword ptr [esp+0x2EC]
	cmp eax,esi
	je Block353

 Block351:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block353

 Block352:
	lea ecx,[esp+0x2E4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block353:
	mov dword ptr [esp+0x498],0xFFFFFFFF
	cmp word ptr [esp+0x264],bx
	jne Block356

 Block354:
	mov eax,dword ptr [esp+0x26C]
	xor edx,edx
	mov word ptr [esp+0x264],dx
	cmp eax,esi
	je Block357

 Block355:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block357

 Block356:
	lea eax,[esp+0x264]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block357:
	lea ecx,[esp+0x284]
	push ecx
	call edi
	lea edx,[esp+0x284]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block359

 Block358:
	push eax
	call _com_issue_error

 Block359:
	lea eax,[esp+0x2C4]
	push eax
	mov dword ptr [esp+0x49C],0x4E
	call edi
	lea ecx,[esp+0x2C4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block361

 Block360:
	push eax
	call _com_issue_error

 Block361:
	push esi
	push esi
	lea edx,[esp+0x28C]
	push edx
	lea eax,[esp+0x2D0]
	push eax
	lea ecx,[esp+0x58]
	push 0xAF4
	push ecx
	mov byte ptr [esp+0x4B0],0x4F
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea edx,[esp+0x54]
	push edx
	lea ecx,[ebp+0xC4]
	mov byte ptr [esp+0x4B0],0x50
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block363

 Block362:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block363:
	mov byte ptr [esp+0x4AC],0x52
	cmp dword ptr [_D_G_RM],esi
	jne Block365

 Block364:
	push 0x80004003
	call _com_issue_error

 Block365:
	lea eax,[esp+0x3A8]
	mov bl,0x51
	mov byte ptr [esp+0x4AC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x4A0],0x53
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x100]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block368

 Block366:
	cmp eax,0x80004002
	je Block368

 Block367:
	push eax
	call _com_issue_error

 Block368:
	cmp word ptr [esp+0x394],8
	mov byte ptr [esp+0x498],bl
	jne Block371

 Block369:
	mov eax,dword ptr [esp+0x39C]
	xor ecx,ecx
	mov word ptr [esp+0x394],cx
	cmp eax,esi
	je Block372

 Block370:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block372

 Block371:
	lea edx,[esp+0x394]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block372:
	mov ecx,dword ptr [esp+0x40]
	cmp ecx,esi
	je Block374

 Block373:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x40],esi

 Block374:
	mov ecx,dword ptr [esp+0x48]
	cmp ecx,esi
	je Block376

 Block375:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x48],esi

 Block376:
	mov ebx,8
	mov byte ptr [esp+0x498],0x4E
	cmp word ptr [esp+0x2C4],bx
	jne Block379

 Block377:
	xor eax,eax
	mov word ptr [esp+0x2C4],ax
	mov eax,dword ptr [esp+0x2CC]
	cmp eax,esi
	je Block380

 Block378:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block380

 Block379:
	lea ecx,[esp+0x2C4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block380:
	mov dword ptr [esp+0x498],0xFFFFFFFF
	cmp word ptr [esp+0x284],bx
	jne Block383

 Block381:
	mov eax,dword ptr [esp+0x28C]
	xor edx,edx
	mov word ptr [esp+0x284],dx
	cmp eax,esi
	je Block384

 Block382:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block384

 Block383:
	lea eax,[esp+0x284]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block384:
	lea ecx,[esp+0xD4]
	push ecx
	call edi
	lea edx,[esp+0xD4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block386

 Block385:
	push eax
	call _com_issue_error

 Block386:
	lea eax,[esp+0x1F4]
	push eax
	mov dword ptr [esp+0x49C],0x54
	call edi
	lea ecx,[esp+0x1F4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block388

 Block387:
	push eax
	call _com_issue_error

 Block388:
	push esi
	push esi
	lea edx,[esp+0xDC]
	push edx
	lea eax,[esp+0x200]
	push eax
	lea ecx,[esp+0x68]
	push 0xAF5
	push ecx
	mov byte ptr [esp+0x4B0],0x55
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea edx,[esp+0x64]
	push edx
	lea ecx,[ebp+0xC4]
	mov byte ptr [esp+0x4B0],0x56
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block390

 Block389:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block390:
	mov byte ptr [esp+0x4AC],0x58
	cmp dword ptr [_D_G_RM],esi
	jne Block392

 Block391:
	push 0x80004003
	call _com_issue_error

 Block392:
	lea eax,[esp+0x3C8]
	mov bl,0x57
	mov byte ptr [esp+0x4AC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x4A0],0x59
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x104]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block395

 Block393:
	cmp eax,0x80004002
	je Block395

 Block394:
	push eax
	call _com_issue_error

 Block395:
	mov edi,8
	mov byte ptr [esp+0x498],bl
	cmp word ptr [esp+0x3B4],di
	jne Block398

 Block396:
	mov eax,dword ptr [esp+0x3BC]
	xor ecx,ecx
	mov word ptr [esp+0x3B4],cx
	cmp eax,esi
	je Block399

 Block397:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block399

 Block398:
	lea edx,[esp+0x3B4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block399:
	mov ecx,dword ptr [esp+0x50]
	cmp ecx,esi
	je Block401

 Block400:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x50],esi

 Block401:
	mov ecx,dword ptr [esp+0x58]
	cmp ecx,esi
	je Block403

 Block402:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x58],esi

 Block403:
	mov byte ptr [esp+0x498],0x54
	cmp word ptr [esp+0x1F4],di
	jne Block406

 Block404:
	xor eax,eax
	mov word ptr [esp+0x1F4],ax
	mov eax,dword ptr [esp+0x1FC]
	cmp eax,esi
	je Block407

 Block405:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block407

 Block406:
	lea ecx,[esp+0x1F4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block407:
	mov dword ptr [esp+0x498],0xFFFFFFFF
	cmp word ptr [esp+0xD4],di
	jne Block410

 Block408:
	mov eax,dword ptr [esp+0xDC]
	xor edx,edx
	mov word ptr [esp+0xD4],dx
	cmp eax,esi
	je Block411

 Block409:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block411

 Block410:
	lea eax,[esp+0xD4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block411:
	cmp dword ptr [ebp+0xA8],2
	jne Block542

 Block412:
	lea ecx,[esp+0x454]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea ecx,[esp+0x60]
	push 0x1A25
	push ecx
	mov dword ptr [esp+0x4A0],0x5A
	mov dword ptr [esp+0x478],0xFF000000
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x46C]
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [esp+0x60]
	test ecx,ecx
	je Block414

 Block413:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x60],0

 Block414:
	mov edi,dword ptr [esp+0x18]
	mov ecx,dword ptr [edi+0x18]
	test ecx,ecx
	jne Block416

 Block415:
	push 0x80004003
	call _com_issue_error

 Block416:
	call IWzVector2D::Getrx
	mov ecx,dword ptr [edi+0x18]
	mov ebx,eax
	test ecx,ecx
	jne Block418

 Block417:
	push 0x80004003
	call _com_issue_error

 Block418:
	call IWzVector2D::Getry
	lea edx,[esp+0xB8]
	push edx
	mov ecx,edi
	mov esi,eax
	call CCtrlComboBox::GetStartCanvas
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x498],0x5B
	test ecx,ecx
	jne Block420

 Block419:
	push 0x80004003
	call _com_issue_error

 Block420:
	call IWzCanvas::Getwidth
	mov ebp,eax
	mov eax,dword ptr [esp+0xB8]
	add ebp,ebx
	mov byte ptr [esp+0x498],0x5A
	test eax,eax
	je Block422

 Block421:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block422:
	lea eax,[esp+0xBC]
	push eax
	mov ecx,edi
	lea ebx,[esi+2]
	call CCtrlComboBox::GetStartCanvas
	mov esi,eax
	lea ecx,[esp+0xC0]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x49C],0x5C
	call CCtrlComboBox::GetButtonCanvas
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x498],0x5D
	test ecx,ecx
	jne Block424

 Block423:
	push 0x80004003
	call _com_issue_error

 Block424:
	mov edi,dword ptr [eax]
	test edi,edi
	jne Block426

 Block425:
	push 0x80004003
	call _com_issue_error

 Block426:
	call IWzCanvas::Getwidth
	mov edx,dword ptr [esp+0x18]
	mov esi,dword ptr [edx+0x1C]
	mov ecx,edi
	sub esi,eax
	call IWzCanvas::Getwidth
	sub esi,eax
	mov eax,dword ptr [esp+0xC0]
	dec esi
	mov byte ptr [esp+0x498],0x5C
	test eax,eax
	je Block428

 Block427:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block428:
	mov eax,dword ptr [esp+0xBC]
	mov byte ptr [esp+0x498],0x5A
	test eax,eax
	je Block430

 Block429:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block430:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x498],0x5E
	test eax,eax
	je Block432

 Block431:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block433

 Block432:
	xor eax,eax

 Block433:
	mov edi,dword ptr [esp+0x18]
	push eax
	lea ecx,[edi+0x50]
	mov byte ptr [esp+0x49C],0x5A
	call ZRef<CCtrlEdit>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [edi+0x24]
	mov edx,dword ptr [ecx]
	lea edi,[esp+0x454]
	push edi
	push 0xE
	push esi
	mov esi,dword ptr [esp+0x24]
	mov edi,dword ptr [esi+0x14]
	push ebx
	push ebp
	or edi,0xB0000000
	push edi
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	mov eax,dword ptr [esi+0x54]
	lea ecx,[esp+0x454]
	mov dword ptr [eax+0xB8],esi
	mov dword ptr [esp+0x498],0xFFFFFFFF
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	jmp Block542

 Block434:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x114]
	push ecx
	call esi
	lea edx,[esp+0x114]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block436

 Block435:
	push eax
	call _com_issue_error

 Block436:
	lea eax,[esp+0xF4]
	push eax
	mov dword ptr [esp+0x49C],0x5F
	call esi
	lea ecx,[esp+0xF4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block438

 Block437:
	push eax
	call _com_issue_error

 Block438:
	push 0
	push 0
	lea edx,[esp+0x11C]
	push edx
	lea eax,[esp+0x100]
	push eax
	lea ecx,[esp+0x80]
	push 0x5C7
	push ecx
	mov byte ptr [esp+0x4B0],0x60
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [esp+0x28]
	push eax
	lea edx,[esp+0x7C]
	push edx
	lea ecx,[ebp+0xC4]
	mov byte ptr [esp+0x4B0],0x61
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block440

 Block439:
	add eax,8
	push eax
	call edi

 Block440:
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x4AC],0x63
	jne Block442

 Block441:
	push 0x80004003
	call _com_issue_error

 Block442:
	lea eax,[esp+0x3E8]
	mov bl,0x62
	mov byte ptr [esp+0x4AC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x4A0],0x64
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xCC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block445

 Block443:
	cmp eax,0x80004002
	je Block445

 Block444:
	push eax
	call _com_issue_error

 Block445:
	mov ebp,8
	mov byte ptr [esp+0x498],bl
	cmp word ptr [esp+0x3D4],bp
	jne Block448

 Block446:
	mov eax,dword ptr [esp+0x3DC]
	xor ecx,ecx
	mov word ptr [esp+0x3D4],cx
	test eax,eax
	je Block449

 Block447:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block449

 Block448:
	lea edx,[esp+0x3D4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block449:
	mov ecx,dword ptr [esp+0x68]
	xor ebx,ebx
	cmp ecx,ebx
	je Block451

 Block450:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x68],ebx

 Block451:
	mov ecx,dword ptr [esp+0x70]
	cmp ecx,ebx
	je Block453

 Block452:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x70],ebx

 Block453:
	mov byte ptr [esp+0x498],0x5F
	cmp word ptr [esp+0xF4],bp
	jne Block456

 Block454:
	xor eax,eax
	mov word ptr [esp+0xF4],ax
	mov eax,dword ptr [esp+0xFC]
	cmp eax,ebx
	je Block457

 Block455:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block457

 Block456:
	lea ecx,[esp+0xF4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block457:
	mov dword ptr [esp+0x498],0xFFFFFFFF
	cmp word ptr [esp+0x114],bp
	jne Block460

 Block458:
	mov eax,dword ptr [esp+0x11C]
	xor edx,edx
	mov word ptr [esp+0x114],dx
	cmp eax,ebx
	je Block461

 Block459:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block461

 Block460:
	lea eax,[esp+0x114]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block461:
	lea ecx,[esp+0x154]
	push ecx
	call esi
	lea edx,[esp+0x154]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block463

 Block462:
	push eax
	call _com_issue_error

 Block463:
	lea eax,[esp+0x134]
	push eax
	mov dword ptr [esp+0x49C],0x65
	call esi
	lea ecx,[esp+0x134]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block465

 Block464:
	push eax
	call _com_issue_error

 Block465:
	push ebx
	push ebx
	lea edx,[esp+0x15C]
	push edx
	lea eax,[esp+0x140]
	push eax
	lea ecx,[esp+0x90]
	push 0x5C9
	push ecx
	mov byte ptr [esp+0x4B0],0x66
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x28]
	push eax
	lea edx,[esp+0x8C]
	push edx
	add ecx,0xC4
	mov byte ptr [esp+0x4B0],0x67
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block467

 Block466:
	add eax,8
	push eax
	call edi

 Block467:
	mov byte ptr [esp+0x4AC],0x69
	cmp dword ptr [_D_G_RM],ebx
	jne Block469

 Block468:
	push 0x80004003
	call _com_issue_error

 Block469:
	lea eax,[esp+0x408]
	mov bl,0x68
	mov byte ptr [esp+0x4AC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x4A0],0x6A
	call Ztl_variant_t::GetUnknown
	mov ecx,dword ptr [esp+0x18]
	add ecx,0xD0
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block472

 Block470:
	cmp eax,0x80004002
	je Block472

 Block471:
	push eax
	call _com_issue_error

 Block472:
	mov byte ptr [esp+0x498],bl
	cmp word ptr [esp+0x3F4],bp
	jne Block475

 Block473:
	mov eax,dword ptr [esp+0x3FC]
	xor ecx,ecx
	mov word ptr [esp+0x3F4],cx
	test eax,eax
	je Block476

 Block474:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block476

 Block475:
	lea edx,[esp+0x3F4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block476:
	mov ecx,dword ptr [esp+0x78]
	xor ebx,ebx
	cmp ecx,ebx
	je Block478

 Block477:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x78],ebx

 Block478:
	mov ecx,dword ptr [esp+0x80]
	cmp ecx,ebx
	je Block480

 Block479:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x80],ebx

 Block480:
	mov byte ptr [esp+0x498],0x65
	cmp word ptr [esp+0x134],bp
	jne Block483

 Block481:
	xor eax,eax
	mov word ptr [esp+0x134],ax
	mov eax,dword ptr [esp+0x13C]
	cmp eax,ebx
	je Block484

 Block482:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block484

 Block483:
	lea ecx,[esp+0x134]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block484:
	mov dword ptr [esp+0x498],0xFFFFFFFF
	cmp word ptr [esp+0x154],bp
	jne Block487

 Block485:
	mov eax,dword ptr [esp+0x15C]
	xor edx,edx
	mov word ptr [esp+0x154],dx
	cmp eax,ebx
	je Block488

 Block486:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block488

 Block487:
	lea eax,[esp+0x154]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block488:
	lea ecx,[esp+0x194]
	push ecx
	call esi
	lea edx,[esp+0x194]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block490

 Block489:
	push eax
	call _com_issue_error

 Block490:
	lea eax,[esp+0x174]
	push eax
	mov dword ptr [esp+0x49C],0x6B
	call esi
	lea ecx,[esp+0x174]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block492

 Block491:
	push eax
	call _com_issue_error

 Block492:
	push ebx
	push ebx
	lea edx,[esp+0x19C]
	push edx
	lea eax,[esp+0x180]
	push eax
	lea ecx,[esp+0xA0]
	push 0x5CB
	push ecx
	mov byte ptr [esp+0x4B0],0x6C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x28]
	push eax
	lea edx,[esp+0x9C]
	push edx
	add ecx,0xC4
	mov byte ptr [esp+0x4B0],0x6D
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block494

 Block493:
	add eax,8
	push eax
	call edi

 Block494:
	mov byte ptr [esp+0x4AC],0x6F
	cmp dword ptr [_D_G_RM],ebx
	jne Block496

 Block495:
	push 0x80004003
	call _com_issue_error

 Block496:
	lea eax,[esp+0x428]
	mov bl,0x6E
	mov byte ptr [esp+0x4AC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x4A0],0x70
	call Ztl_variant_t::GetUnknown
	mov ecx,dword ptr [esp+0x18]
	add ecx,0xD4
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block499

 Block497:
	cmp eax,0x80004002
	je Block499

 Block498:
	push eax
	call _com_issue_error

 Block499:
	mov byte ptr [esp+0x498],bl
	cmp word ptr [esp+0x414],bp
	jne Block502

 Block500:
	mov eax,dword ptr [esp+0x41C]
	xor ecx,ecx
	mov word ptr [esp+0x414],cx
	test eax,eax
	je Block503

 Block501:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block503

 Block502:
	lea edx,[esp+0x414]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block503:
	mov ecx,dword ptr [esp+0x88]
	xor ebx,ebx
	cmp ecx,ebx
	je Block505

 Block504:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x88],ebx

 Block505:
	mov ecx,dword ptr [esp+0x90]
	cmp ecx,ebx
	je Block507

 Block506:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x90],ebx

 Block507:
	mov byte ptr [esp+0x498],0x6B
	cmp word ptr [esp+0x174],bp
	jne Block510

 Block508:
	xor eax,eax
	mov word ptr [esp+0x174],ax
	mov eax,dword ptr [esp+0x17C]
	cmp eax,ebx
	je Block511

 Block509:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block511

 Block510:
	lea ecx,[esp+0x174]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block511:
	mov dword ptr [esp+0x498],0xFFFFFFFF
	cmp word ptr [esp+0x194],bp
	jne Block514

 Block512:
	mov eax,dword ptr [esp+0x19C]
	xor edx,edx
	mov word ptr [esp+0x194],dx
	cmp eax,ebx
	je Block515

 Block513:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block515

 Block514:
	lea eax,[esp+0x194]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block515:
	lea ecx,[esp+0x1D4]
	push ecx
	call esi
	lea edx,[esp+0x1D4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block517

 Block516:
	push eax
	call _com_issue_error

 Block517:
	lea eax,[esp+0x1B4]
	push eax
	mov dword ptr [esp+0x49C],0x71
	call esi
	lea ecx,[esp+0x1B4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block519

 Block518:
	push eax
	call _com_issue_error

 Block519:
	push ebx
	push ebx
	lea edx,[esp+0x1DC]
	push edx
	lea eax,[esp+0x1C0]
	push eax
	lea ecx,[esp+0xB0]
	push 0x5CD
	push ecx
	mov byte ptr [esp+0x4B0],0x72
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x28]
	push eax
	lea edx,[esp+0xAC]
	push edx
	add ecx,0xC4
	mov byte ptr [esp+0x4B0],0x73
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block521

 Block520:
	add eax,8
	push eax
	call edi

 Block521:
	mov byte ptr [esp+0x4AC],0x75
	cmp dword ptr [_D_G_RM],ebx
	jne Block523

 Block522:
	push 0x80004003
	call _com_issue_error

 Block523:
	lea eax,[esp+0x448]
	mov bl,0x74
	mov byte ptr [esp+0x4AC],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x4A0],0x76
	call Ztl_variant_t::GetUnknown
	mov ecx,dword ptr [esp+0x18]
	add ecx,0xD8
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	xor esi,esi
	cmp eax,esi
	jge Block526

 Block524:
	cmp eax,0x80004002
	je Block526

 Block525:
	push eax
	call _com_issue_error

 Block526:
	mov byte ptr [esp+0x498],bl
	cmp word ptr [esp+0x434],bp
	jne Block529

 Block527:
	mov eax,dword ptr [esp+0x43C]
	xor ecx,ecx
	mov word ptr [esp+0x434],cx
	cmp eax,esi
	je Block530

 Block528:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block530

 Block529:
	lea edx,[esp+0x434]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block530:
	mov ecx,dword ptr [esp+0x98]
	cmp ecx,esi
	je Block532

 Block531:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x98],esi

 Block532:
	mov ecx,dword ptr [esp+0xA0]
	cmp ecx,esi
	je Block534

 Block533:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0xA0],esi

 Block534:
	mov byte ptr [esp+0x498],0x71
	cmp word ptr [esp+0x1B4],bp
	jne Block537

 Block535:
	xor eax,eax
	mov word ptr [esp+0x1B4],ax
	mov eax,dword ptr [esp+0x1BC]
	cmp eax,esi
	je Block538

 Block536:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block538

 Block537:
	lea ecx,[esp+0x1B4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block538:
	mov dword ptr [esp+0x498],0xFFFFFFFF
	cmp word ptr [esp+0x1D4],bp
	jne Block541

 Block539:
	mov eax,dword ptr [esp+0x1DC]
	xor edx,edx
	mov word ptr [esp+0x1D4],dx
	cmp eax,esi
	je Block542

 Block540:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block542

 Block541:
	lea eax,[esp+0x1D4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block542:
	mov eax,dword ptr [esp+0x18]
	xor ecx,ecx
	mov dword ptr [eax+0x68],ecx
	mov dword ptr [eax+0x70],ecx
	mov dword ptr [eax+0x64],ecx
	mov ecx,dword ptr [esp+0x490]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x488
	ret 4
}
}
// CCtrlComboBox::RemoveAllItems
__SUB_CLASS_THIS0(000D8E30, __thiscall, 6793,  CCtrlComboBox, void) {
__asm {

 Block0:
	add ecx,0x34
	jmp  ZList<CCtrlComboBox::ITEM_INFO>::RemoveAll
}
}
// CCtrlComboBox::CREATEPARAM::~CREATEPARAM
__SUB_CLASS_THIS0(0008A920, __thiscall, 12522,  CCtrlComboBox::CREATEPARAM, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x4C]
	test ecx,ecx
	je Block2

 Block1:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x4C],0

 Block2:
	pop esi
	ret
}
}
// CCtrlComboBox::CREATEPARAM::CREATEPARAM
__SUB_CLASS_THIS0(000894F0, __thiscall, 12520,  CCtrlComboBox::CREATEPARAM, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,1
	push edi
	xor edi,edi
	push offset _S___3
	lea ecx,[esi+0x4C]
	mov dword ptr [esi],0xFFEEEEEE
	mov dword ptr [esi+4],0xFFA5A198
	mov dword ptr [esi+8],0xFF999999
	mov dword ptr [esi+0xC],edi
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esi+0x14],0xFFFFFFFF
	mov dword ptr [esi+0x18],7
	mov dword ptr [esi+0x1C],eax
	mov dword ptr [esi+0x20],edi
	mov dword ptr [esi+0x24],3
	mov dword ptr [esi+0x28],edi
	mov dword ptr [esi+0x2C],eax
	mov dword ptr [esi+0x30],edi
	mov dword ptr [esi+0x34],eax
	mov dword ptr [esi+0x38],edi
	mov dword ptr [esi+0x3C],edi
	mov dword ptr [esi+0x40],edi
	mov dword ptr [esi+0x44],edi
	mov dword ptr [esi+0x48],eax
	call _xbstr_t::_ctor_1
	mov dword ptr [esi+0x50],edi
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CCtrlComboBoxSelect::OnKey
__SUB_CLASS_THIS(000D91F0, __thiscall, 12501,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	test edx,edx
	js Block24

 Block1:
	mov eax,edi
	sub eax,0xD
	je Block20

 Block2:
	sub eax,0x19
	je Block12

 Block3:
	sub eax,2
	jne Block24

 Block4:
	inc dword ptr [esi+0x30]
	mov eax,dword ptr [esi+0x34]
	mov ecx,dword ptr [esi+0x30]
	dec eax
	cmp ecx,eax
	jle Block6

 Block5:
	mov dword ptr [esi+0x30],eax

 Block6:
	mov eax,dword ptr [esi+0x4C]
	mov ecx,dword ptr [eax+0x5C]
	test ecx,ecx
	je Block11

 Block7:
	mov edi,dword ptr [ecx+0x38]
	mov eax,dword ptr [esi+0x30]
	cmp eax,edi
	jge Block9

 Block8:
	push eax
	call CCtrlScrollBar::SetCurPos

 Block9:
	mov ecx,dword ptr [esi+0x4C]
	mov edx,dword ptr [ecx+0xAC]
	mov eax,dword ptr [esi+0x30]
	lea edi,[edx+edi-1]
	cmp eax,edi
	jle Block11

 Block10:
	mov ecx,dword ptr [ecx+0x5C]
	sub eax,edx
	inc eax
	push eax
	call CCtrlScrollBar::SetCurPos

 Block11:
	lea ecx,[esi-4]
	call CCtrlWnd::InvalidateRect
	pop edi
	pop esi
	ret 8

 Block12:
	add dword ptr [esi+0x30],0xFFFFFFFF
	jns Block14

 Block13:
	mov dword ptr [esi+0x30],0

 Block14:
	mov ecx,dword ptr [esi+0x4C]
	mov ecx,dword ptr [ecx+0x5C]
	test ecx,ecx
	je Block19

 Block15:
	mov edi,dword ptr [ecx+0x38]
	mov eax,dword ptr [esi+0x30]
	cmp eax,edi
	jge Block17

 Block16:
	push eax
	call CCtrlScrollBar::SetCurPos

 Block17:
	mov ecx,dword ptr [esi+0x4C]
	mov edx,dword ptr [ecx+0xAC]
	mov eax,dword ptr [esi+0x30]
	lea edi,[edx+edi-1]
	cmp eax,edi
	jle Block19

 Block18:
	mov ecx,dword ptr [ecx+0x5C]
	sub eax,edx
	inc eax
	push eax
	call CCtrlScrollBar::SetCurPos

 Block19:
	lea ecx,[esi-4]
	call CCtrlWnd::InvalidateRect
	pop edi
	pop esi
	ret 8

 Block20:
	mov edi,dword ptr [esi+0x4C]
	test edi,edi
	je Block22

 Block21:
	lea eax,[edi+4]
	jmp Block23

 Block22:
	xor eax,eax

 Block23:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov edx,dword ptr [esi+0x30]
	push edx
	mov ecx,edi
	call CCtrlComboBox::SetSelect
	pop edi
	pop esi
	ret 8

 Block24:
	mov esi,dword ptr [esi+0x20]
	mov eax,dword ptr [esi+4]
	lea ecx,[esi+4]
	push edx
	mov edx,dword ptr [eax]
	push edi
	call edx
	pop edi
	pop esi
	ret 8
}
}
// CCtrlComboBox::MakeSelectWnd
_SUB_EXCEPTION_HANDLER(D94E0)
__SUB_CLASS_THIS0(000D94E0, __thiscall, 6793,  CCtrlComboBox, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D94E0
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
	mov eax,dword ptr [esi+0x3C]
	xor ebx,ebx
	cmp eax,ebx
	jbe Block28

 Block1:
	cmp dword ptr [esi+0x4C],ebx
	jne Block28

 Block2:
	mov edi,dword ptr [esi+0x18]
	cmp edi,ebx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x68]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block6

 Block5:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block6:
	mov edi,dword ptr [esi+0x18]
	cmp edi,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x70]
	lea ecx,[esp+0x18]
	push ecx
	push edi
	mov dword ptr [esp+0x20],ebx
	call edx
	cmp eax,ebx
	jge Block10

 Block9:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block10:
	mov eax,dword ptr [esi+0x90]
	add eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x1C],eax
	cmp dword ptr [esi+0xC8],ebx
	jne Block12

 Block11:
	mov eax,dword ptr [esi+0x3C]
	neg eax
	shl eax,4
	jmp Block13

 Block12:
	mov eax,dword ptr [esi+0x20]

 Block13:
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [esp+0x18]
	add ecx,eax
	mov eax,dword ptr [esi+0x98]
	cmp eax,ebx
	lea ebp,[ecx+edx-1]
	mov ebx,eax
	jge Block15

 Block14:
	mov ebx,dword ptr [esi+0x1C]

 Block15:
	mov ecx,dword ptr [esi+0x3C]
	mov eax,dword ptr [esi+0xAC]
	mov edi,ecx
	shl edi,4
	inc edi
	test eax,eax
	je Block21

 Block16:
	cmp ecx,eax
	jle Block21

 Block17:
	cmp dword ptr [esi+0xB4],0
	je Block21

 Block18:
	shl eax,4
	mov dword ptr [esp+0x14],1
	mov edi,eax

 Block19:
	push 0x54
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x2C],0
	test eax,eax
	je Block22

 Block20:
	mov ecx,dword ptr [esi+0xC0]
	mov edx,dword ptr [esi+0x3C]
	push ecx
	mov ecx,dword ptr [esi+0xA4]
	push ecx
	mov ecx,dword ptr [esi+0x8C]
	push ecx
	mov ecx,dword ptr [esi+0x88]
	push ecx
	push edx
	mov edx,dword ptr [esi+0x68]
	push edx
	push esi
	mov ecx,eax
	call CCtrlComboBoxSelect::_ctor_0
	jmp Block23

 Block21:
	mov dword ptr [esp+0x14],0
	jmp Block19

 Block22:
	xor eax,eax

 Block23:
	push eax
	lea ecx,[esi+0x48]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZRef<CCtrlComboBoxSelect>::op_assign_ptr
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi+0x4C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	push 0
	push edi
	push ebx
	push ebp
	push edx
	mov edx,dword ptr [esi+0x14]
	or edx,0xA0000000
	push edx
	mov edx,dword ptr [esi+0x24]
	push edx
	call eax
	mov ecx,dword ptr [esi+0x4C]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push 0
	call eax
	mov ecx,dword ptr [esi+0x4C]
	call CCtrlWnd::InvalidateRect
	mov eax,dword ptr [esi+0x4C]
	test eax,eax
	je Block25

 Block24:
	add eax,4
	jmp Block26

 Block25:
	xor eax,eax

 Block26:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	cmp dword ptr [esp+0x14],0
	je Block28

 Block27:
	mov ecx,esi
	call CCtrlComboBox::MakeScrollBar

 Block28:
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
