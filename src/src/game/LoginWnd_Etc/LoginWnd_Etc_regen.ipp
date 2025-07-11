#include "regen.hpp"
// LoginWnd_Etc.ipp
#include "LoginWnd_Etc.hpp"

// CUILoginDesc::OnSetFocus
__SUB_CLASS_THIS(001F01B0, __thiscall, 78879,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUILoginDesc::HitTest
__SUB_CLASS_THIS(001F01D0, __thiscall, 78881,  CUILoginDesc, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	xor eax,eax
	ret 0xC
}
}
// CUILoginStart::~CUILoginStart
_SUB_EXCEPTION_HANDLER(1EF480)
__SUB_CLASS_THIS0(001EF480, __thiscall, 78852,  CUILoginStart, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1EF480
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
	int 3// TODO: 	mov dword ptr [esi],offset CUILoginStart::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUILoginStart::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUILoginStart::`vftable'{for `ZRefCounted'}
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 5
	push 8
	lea eax,[esi+0xEC]
	push eax
	mov dword ptr [esp+0x24],3
	call __eh_vector_dtor_iterator
	push offset CCtrlButton::CREATEPARAM::~CREATEPARAM
	push 5
	push 0x10
	lea ecx,[esi+0x9C]
	push ecx
	mov byte ptr [esp+0x24],2
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0x98]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block2:
	mov eax,dword ptr [esi+0x94]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUILoginStart::Draw
_SUB_EXCEPTION_HANDLER(1F19A0)
__SUB_CLASS_THIS(001F19A0, __thiscall, 78859,  CUILoginStart, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F19A0
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
	mov edi,ecx
	lea eax,[esp+0x20]
	push eax
	call CWnd::GetCanvas
	mov esi,dword ptr [eax]
	xor ebp,ebp
	mov dword ptr [esp+0x64],ebp
	cmp esi,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push 0x258
	push 0x7D
	push ebp
	push ebp
	push esi
	call edx
	cmp eax,ebp
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [esp+0x20]
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x64],ebx
	cmp eax,ebp
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	lea eax,[esp+0x20]
	push eax
	mov ecx,edi
	call CWnd::GetCanvas
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x64],1
	cmp esi,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push 0x258
	push 0x320
	push ebp
	push 0x2A3
	push esi
	call edx
	cmp eax,ebp
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x64],ebx
	cmp eax,ebp
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	cmp dword ptr [edi+0x98],ebp
	sete al
	test al,al
	sete al
	test al,al
	je Block95

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
	lea edx,[esp+0x20]
	mov ebx,2
	push edx
	mov ecx,edi
	mov dword ptr [esp+0x68],ebx
	call CWnd::GetCanvas
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [edi+0x98]
	mov byte ptr [esp+0x64],3
	cmp ecx,ebp
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea eax,[esp+0x2C]
	push eax
	push edx
	push 0x26
	push 0x2C3
	call IWzCanvas::Copy
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x64],bl
	cmp eax,ebp
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	mov ebx,8
	mov dword ptr [esp+0x64],0xFFFFFFFF
	cmp word ptr [esp+0x2C],bx
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
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
	mov dword ptr [esp+0x20],ebp
	mov dword ptr [esp+0x64],4
	mov dword ptr [esp+0x1C],ebp
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x14],ebp
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edx,dword ptr [eax+0x2060]
	mov eax,dword ptr [eax+0x3F74]
	mov eax,dword ptr [eax+edx*4]
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x68],7
	call ZXString<char>::AssignCStr
	push ebp
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push ecx
	mov ecx,esp
	lea eax,[esp+0x30]
	mov dword ptr [esp+0x34],esp
	push eax
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	call separate_channelName
	mov ecx,dword ptr [esp+0x2C]
	add esp,0x10
	push 0xFFFFFFFF
	push ecx
	lea ecx,[esp+0x1C]
	call ZXString16::AssignCharStr
	lea edx,[esp+0x2C]
	push edx
	call esi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	mov edx,dword ptr [esp+0x14]
	lea ecx,[esp+0x2C]
	push ecx
	push 0x32
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x74],8
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi+0x94]
	mov byte ptr [esp+0x70],9
	cmp ecx,ebp
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov byte ptr [esp+0x70],8
	call IWzFont::CalcLongestText
	mov esi,eax
	mov byte ptr [esp+0x64],7
	cmp word ptr [esp+0x2C],bx
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	push esi
	lea edx,[esp+0x28]
	push edx
	lea ecx,[esp+0x1C]
	call ZXString16::Left
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x6C],0xA
	call ZXString<char>::AssignWideStr
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x64],7
	cmp eax,ebp
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block33:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	mov eax,dword ptr [esp+0x1C]
	lea edx,[esp+0x2C]
	push edx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,0xB
	push eax
	mov byte ptr [esp+0x70],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0x94]
	mov byte ptr [esp+0x6C],0xC
	cmp ecx,ebp
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	mov byte ptr [esp+0x6C],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x2C],8
	mov esi,eax
	mov byte ptr [esp+0x64],7
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	mov edx,3
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],0x99
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [edi+0x94]
	lea ecx,[esp+0x30]
	push ecx
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0xE
	push edx
	mov byte ptr [esp+0x78],bl
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x34]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x78],0xF
	call CWnd::GetCanvas
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x74],0x10
	cmp ecx,ebp
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	mov eax,0x32
	sub eax,esi
	cdq
	sub eax,edx
	sar eax,1
	push 0x2F
	add eax,0x2CA
	push eax
	mov byte ptr [esp+0x7C],0x11
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x64],bl
	cmp eax,ebp
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block47:
	mov esi,8
	mov byte ptr [esp+0x64],0xD
	cmp word ptr [esp+0x2C],si
	jne Block50

 Block48:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov byte ptr [esp+0x64],7
	cmp word ptr [esp+0x3C],si
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov ecx,dword ptr [esp+0x18]
	push 0xFFFFFFFF
	push ecx
	lea ecx,[esp+0x1C]
	call ZXString16::AssignCharStr
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block57

 Block56:
	push eax
	call _com_issue_error

 Block57:
	mov edx,dword ptr [esp+0x14]
	lea ecx,[esp+0x3C]
	push ecx
	push 0x18
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,0x12
	push edx
	mov byte ptr [esp+0x74],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi+0x94]
	mov byte ptr [esp+0x70],0x13
	cmp ecx,ebp
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	mov byte ptr [esp+0x70],bl
	call IWzFont::CalcLongestText
	cmp word ptr [esp+0x3C],8
	mov esi,eax
	mov byte ptr [esp+0x64],7
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	push esi
	lea edx,[esp+0x28]
	push edx
	lea ecx,[esp+0x1C]
	call ZXString16::Left
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x6C],0x14
	call ZXString<char>::AssignWideStr
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x64],7
	cmp eax,ebp
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block65:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push eax
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	mov eax,dword ptr [esp+0x18]
	lea edx,[esp+0x3C]
	push edx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,0x15
	push eax
	mov byte ptr [esp+0x70],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0x94]
	mov byte ptr [esp+0x6C],0x16
	cmp ecx,ebp
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	mov byte ptr [esp+0x6C],bl
	call IWzFont::CalcTextWidth
	mov ebx,8
	mov byte ptr [esp+0x64],7
	cmp word ptr [esp+0x3C],bx
	jne Block72

 Block70:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	lea eax,[esp+0x4C]
	push eax
	call esi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	mov edx,3
	mov word ptr [esp+0x3C],dx
	mov dword ptr [esp+0x44],0x99
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x4C]
	push eax
	mov eax,dword ptr [edi+0x94]
	lea ecx,[esp+0x40]
	push ecx
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x78],0x18
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x34]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x78],0x19
	call CWnd::GetCanvas
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x74],0x1A
	cmp ecx,ebp
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	push 0x2F
	push 0x309
	mov byte ptr [esp+0x7C],0x1B
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x64],0x18
	cmp eax,ebp
	je Block79

 Block78:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block79:
	mov byte ptr [esp+0x64],0x17
	cmp word ptr [esp+0x3C],bx
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	mov byte ptr [esp+0x64],7
	cmp word ptr [esp+0x4C],bx
	jne Block86

 Block84:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,ebp
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],6
	cmp eax,ebp
	je Block89

 Block88:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block89:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x64],5
	cmp eax,ebp
	je Block91

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block91:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x64],4
	cmp eax,ebp
	je Block93

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block93:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	cmp eax,ebp
	je Block95

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block95:
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
// CUILoginDesc::OnCreate
_SUB_EXCEPTION_HANDLER(1F0280)
__SUB_CLASS_THIS(001F0280, __thiscall, 78877,  CUILoginDesc, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F0280
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
	lea eax,[esp+8]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	add esi,0xFC
	push esi
	push eax
	mov dword ptr [esp+0x30],0
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x14]
	add esp,0xC
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0xC]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea eax,[esp+0xC]
	push eax
	push 0xFFD3CCBD
	push 9
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 8
	push ecx
	mov dword ptr [esp+0x3C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x34],2
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov byte ptr [esp+0x34],1
	call IWzFont::Create
	cmp word ptr [esp+0xC],8
	mov dword ptr [esp+0x24],0xFFFFFFFF
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x14]
	xor edx,edx
	mov word ptr [esp+0xC],dx
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret 4

 Block9:
	lea eax,[esp+0xC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret 4
}
}
// CUILoginStart::CUILoginStart
_SUB_EXCEPTION_HANDLER(1EF130)
__SUB_CLASS_THIS(001EF130, __thiscall, 78850,  CUILoginStart, void, CLogin*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1EF130
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
	mov eax,dword ptr [esp+0x20]
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CUILoginStart::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUILoginStart::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUILoginStart::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x90],eax
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x98],edi
	push offset CCtrlButton::CREATEPARAM::~CREATEPARAM
	push offset CCtrlButton::CREATEPARAM::_ctor_default
	push 5
	push 0x10
	lea ecx,[esi+0x9C]
	push ecx
	mov byte ptr [esp+0x2C],2
	call __eh_vector_ctor_iterator
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 5
	push 8
	lea edx,[esi+0xEC]
	push edx
	mov byte ptr [esp+0x2C],3
	call __eh_vector_ctor_iterator
	push edi
	push edi
	push 1
	push 0xD2
	push 0x258
	push 0x320
	mov eax,4
	push edi
	push edi
	mov ecx,esi
	mov byte ptr [esp+0x38],al
	mov dword ptr [esi+0x114],eax
	mov dword ptr [esi+0x118],edi
	call CDialog::CreateDlg_0
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
// CLoginUtilDlg::CLoginUtilDlg
__SUB_CLASS_THIS0(001EEFB0, __thiscall, 78907,  CLoginUtilDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CFadeWnd::_ctor_default
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CLoginUtilDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CLoginUtilDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CLoginUtilDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x104],eax
	mov dword ptr [esi+0x10C],eax
	mov dword ptr [esi+0x114],eax
	mov dword ptr [esi+0x11C],eax
	mov dword ptr [esi+0x124],eax
	mov dword ptr [esi+0x128],eax
	mov dword ptr [esi+0xF8],eax
	mov eax,esi
	pop esi
	ret
}
}
// CLoginUtilDlg::DoModal
_SUB_EXCEPTION_HANDLER(1EEDF0)
__SUB_CLASS_THIS0(001EEDF0, __thiscall, 78915,  CLoginUtilDlg, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1EEDF0
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
	lea edi,[esp+0xC]
	call CLoginUtilDlg::MODAL_OWNER::_ctor_0
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	lea eax,[esi+0xF8]
	push eax
	mov dword ptr [esp+0x1C],0
	call CWvsApp::Run
	mov esi,dword ptr [esi+0xF4]
	mov eax,edi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CLoginUtilDlg::MODAL_OWNER::~MODAL_OWNER
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
// CLoginUtilDlg::OnButtonClicked
_SUB_EXCEPTION_HANDLER(1EFD80)
__SUB_CLASS_THIS(001EFD80, __thiscall, 78917,  CLoginUtilDlg, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1EFD80
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x18]
	sub eax,0x3E8
	je Block3

 Block1:
	sub eax,1
	jne Block12

 Block2:
	push eax
	jmp Block11

 Block3:
	cmp dword ptr [esi+0xFC],0x3EA
	jne Block10

 Block4:
	mov ecx,dword ptr [esi+0x11C]
	lea eax,[esp+0x18]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x10],0
	test eax,eax
	je Block7

 Block5:
	cmp byte ptr [eax],0
	je Block7

 Block6:
	xor eax,eax
	jmp Block8

 Block7:
	mov eax,1

 Block8:
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x34]
	xor ecx,ecx
	test eax,eax
	sete cl
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block12

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4

 Block10:
	push 1

 Block11:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	call edx

 Block12:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4
}
}
// CLoginUtilDlg::HitTest
__SUB_CLASS_THIS(001EE670, __thiscall, 78920,  CLoginUtilDlg, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jne Block2

 Block1:
	ret 0xC

 Block2:
	mov dword ptr [esp+0xC],eax
	jmp  CFadeWnd::HitTest
}
}
// CLoginUtilDlg::Notice
_SUB_EXCEPTION_HANDLER(1EF820)
__SUB(001EF820, __cdecl, 78898,  void, long, ZRef<CDialog>*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1EF820
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
	push 0x12C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x1C],0
	test eax,eax
	je Block17

 Block1:
	mov ecx,eax
	call CLoginUtilDlg::_ctor_default
	test eax,eax
	je Block17

 Block2:
	add eax,8
	je Block17

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x10],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov edi,dword ptr [esp+0x28]
	mov dword ptr [esp+0x1C],1
	test edi,edi
	je Block8

 Block6:
	cmp dword ptr [edi+4],0
	jne Block14

 Block7:
	push esi
	mov ecx,edi
	call ZRef<CDialog>::op_assign_ptr

 Block8:
	mov ecx,dword ptr [esp+0x24]
	push ecx
	push 4
	mov ecx,esi
	call CLoginUtilDlg::Init
	lea edx,[esp+0x28]
	push 0x55A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 0
	push 1
	push 0xA
	push eax
	push 0x8E
	push 0xF9
	mov ecx,esi
	mov byte ptr [esp+0x3C],2
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x1C],1
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	mov ecx,esi
	call CLoginUtilDlg::DoModal
	test edi,edi
	je Block14

 Block11:
	mov eax,dword ptr [edi+4]
	cmp eax,esi
	jne Block14

 Block12:
	test eax,eax
	je Block14

 Block13:
	push 0
	mov ecx,edi
	call ZRef<CDialog>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block14:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test esi,esi
	je Block16

 Block15:
	push 0
	lea ecx,[esp+0x10]
	call ZRef<CLoginUtilDlg>::_ReleaseRaw

 Block16:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret

 Block17:
	xor esi,esi
	mov dword ptr [esp+0x10],esi
	jmp Block5
}
}
// CLoginUtilDlg::SetRet
_SUB_EXCEPTION_HANDLER(1EE940)
__SUB_CLASS_THIS(001EE940, __thiscall, 78914,  CLoginUtilDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1EE940
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
	mov esi,ecx
	xor ebp,ebp
	cmp dword ptr [esi+0xF8],ebp
	jne Block57

 Block1:
	mov eax,dword ptr [esp+0xA0]
	mov ebx,1
	mov dword ptr [esi+0xF4],eax
	mov dword ptr [esi+0xF8],ebx
	cmp dword ptr [esi+0x14],ebp
	je Block57

 Block2:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov edx,3
	mov dword ptr [esp+0x98],ebp
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],ebp
	mov edi,dword ptr [esp+0x18]
	mov byte ptr [esp+0x98],bl
	cmp edi,ebp
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	call IWzGr2DLayer::Getcanvas
	mov ebx,8
	mov byte ptr [esp+0x98],3
	cmp word ptr [esp+0x20],bx
	jne Block7

 Block5:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	cmp eax,ebp
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov ecx,3
	mov word ptr [esp+0x30],cx
	mov dword ptr [esp+0x38],0xFFFFFFFE
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x20]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xA0],4
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov byte ptr [esp+0x98],3
	cmp word ptr [esp+0x30],bx
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebp
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x70]
	push edx
	call ebp
	lea eax,[esp+0x70]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	lea ecx,[esp+0x60]
	mov bl,5
	push ecx
	mov byte ptr [esp+0x9C],bl
	call ebp
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	mov eax,dword ptr [esi+0x98]
	mov ecx,3
	mov word ptr [esp+0x50],cx
	mov dword ptr [esp+0x58],eax
	mov eax,dword ptr [esi+0x94]
	mov edx,ecx
	mov word ptr [esp+0x40],dx
	mov dword ptr [esp+0x48],eax
	mov eax,dword ptr [esi+0xA4]
	mov word ptr [esp+0x30],cx
	mov dword ptr [esp+0x38],eax
	lea edx,[esp+0x70]
	push edx
	lea eax,[esp+0x64]
	push eax
	lea ecx,[esp+0x58]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x40]
	push eax
	push ecx
	lea edx,[esp+0x98]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xB4],9
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x80],8
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x80]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x98],8
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x98],7
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x98],6
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x98],bl
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0x98],3
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	lea eax,[esp+0x60]
	push eax
	call ebp
	lea ecx,[esp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	lea edx,[esp+0x70]
	mov bl,0xA
	push edx
	mov byte ptr [esp+0x9C],bl
	call ebp
	lea eax,[esp+0x70]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	lea ecx,[esp+0x60]
	push ecx
	lea edx,[esp+0x74]
	push edx
	push 0
	mov ecx,edi
	mov byte ptr [esp+0xA4],0xB
	call IWzGr2DLayer::Animate
	mov byte ptr [esp+0x98],bl
	mov ebx,8
	cmp word ptr [esp+0x70],bx
	jne Block49

 Block47:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea ecx,[esp+0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov byte ptr [esp+0x98],3
	cmp word ptr [esp+0x60],bx
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0
	push ecx
	mov dword ptr [eax],0
	mov eax,esp
	mov dword ptr [eax],edi
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x28],esp
	push edi
	call edx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov ecx,esi
	call CWnd::Destroy
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x98],0
	test eax,eax
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block56:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	call ecx

 Block57:
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
// CLoginUtilDlg::~CLoginUtilDlg
_SUB_EXCEPTION_HANDLER(1EF010)
__SUB_CLASS_THIS0(001EF010, __thiscall, 78909,  CLoginUtilDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1EF010
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
	int 3// TODO: 	mov dword ptr [esi],offset CLoginUtilDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CLoginUtilDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CLoginUtilDlg::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x128]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],5
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0x124]
	mov byte ptr [esp+0x1C],4
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea edi,[esi+0x118]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0x110]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0x108]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	mov eax,dword ptr [esi+0x104]
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CFadeWnd::~CFadeWnd
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
// CLoginUtilDlg::Init
__SUB_CLASS_THIS(001EE600, __thiscall, 78912,  CLoginUtilDlg, void, long, long) {
__asm {

 Block0:
	push esi
	push edi
	push 0x96
	push 0
	push 0x96
	mov eax,0x113
	mov esi,ecx
	lea ecx,[eax-0x42]
	push ecx
	push eax
	push ecx
	push eax
	lea edi,[eax-0x56]
	push edi
	lea edx,[eax+0x14]
	push edx
	push 0
	push 0xFF
	push 0
	mov ecx,esi
	call CFadeWnd::SetOption
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [esp+0x10]
	pop edi
	mov dword ptr [esi+0xFC],eax
	mov dword ptr [esi+0x100],ecx
	pop esi
	ret 8
}
}
// CUILoginDesc::OnActivate
__SUB_CLASS_THIS(001F01C0, __thiscall, 78880,  CUILoginDesc, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUILoginStart::OnSetFocus
__SUB_CLASS_THIS(001EF230, __thiscall, 78856,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUILoginDesc::Draw
__SUB_CLASS_THIS(001EE530, __thiscall, 78878,  CUILoginDesc, void, const tagRECT*) {
__asm {

 Block0:
	jmp  CWnd::Draw
}
}
// CUILoginStart::SendViewAllCharacterPacket
__SUB_CLASS_THIS0(001EE5A0, __thiscall, 78862,  CUILoginStart, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x90]
	test ecx,ecx
	je Block5

 Block1:
	cmp dword ptr [ecx+0x1A4],1
	jne Block5

 Block2:
	cmp dword ptr [esi+0x118],0
	jne Block5

 Block3:
	mov dword ptr [esi+0x118],1
	call CLogin::SendViewAllCharPacket
	test eax,eax
	jne Block6

 Block4:
	mov dword ptr [esi+0x118],eax

 Block5:
	xor eax,eax
	pop esi
	ret

 Block6:
	mov eax,1
	pop esi
	ret
}
}
// CUILoginDesc::Update
__SUB_CLASS_THIS0(001EE540, __thiscall, 78876,  CUILoginDesc, void) {
__asm {

 Block0:
	jmp  CFadeWnd::Update
}
}
// CUILoginStart::EnableLoginStartCtrl
__SUB_CLASS_THIS(001EE6A0, __thiscall, 78860,  CUILoginStart, void, long) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0xF0]
	test eax,eax
	je Block2

 Block1:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	mov edx,esi
	and edx,1
	push edx
	call eax

 Block2:
	mov eax,dword ptr [edi+0xF8]
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x1C]
	lea ecx,[eax+4]
	mov eax,esi
	and eax,2
	push eax
	call edx

 Block4:
	mov edi,dword ptr [edi+0x110]
	test edi,edi
	je Block6

 Block5:
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x1C]
	lea ecx,[edi+4]
	and esi,0x20
	push esi
	call edx

 Block6:
	pop edi
	pop esi
	ret 4
}
}
// CLoginUtilDlg::Draw
_SUB_EXCEPTION_HANDLER(1EEE70)
__SUB_CLASS_THIS(001EEE70, __thiscall, 78919,  CLoginUtilDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1EEE70
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
	mov eax,dword ptr [esp+0x28]
	push eax
	call CWnd::Draw
	cmp dword ptr [esi+0xFC],7
	je Block9

 Block1:
	mov ecx,3
	mov word ptr [esp+8],cx
	mov dword ptr [esp+0x10],0xFF
	lea edx,[esp+0x28]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x24],0
	call CWnd::GetCanvas
	mov ecx,dword ptr [eax]
	mov esi,dword ptr [esi+0x104]
	mov byte ptr [esp+0x20],1
	test ecx,ecx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea eax,[esp+8]
	push eax
	push esi
	push 0xD
	push 0x11
	call IWzCanvas::Copy
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block5:
	cmp word ptr [esp+8],8
	mov dword ptr [esp+0x20],0xFFFFFFFF
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+8],ax
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4

 Block8:
	lea ecx,[esp+8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
// CLoginUtilDlg_MODAL_OWNER::~MODAL_OWNER
__SUB_CLASS_THIS0(001EE5F0, __thiscall, 139757,  CLoginUtilDlg_MODAL_OWNER, void) {
__asm {

 Block0:
	mov ecx,dword ptr [eax]
	cmp dword ptr [ecx+0x14],0
	je Block2

 Block1:
	jmp  CWnd::Destroy

 Block2:
	ret
}
}
// CUILoginStart::OnActivate
__SUB_CLASS_THIS(001EF220, __thiscall, 78855,  CUILoginStart, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CLoginUtilDlg::OnCreate
_SUB_EXCEPTION_HANDLER(1F0CE0)
__SUB_CLASS_THIS(001F0CE0, __thiscall, 78916,  CLoginUtilDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F0CE0
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
	mov esi,ecx
	xor ebx,ebx
	cmp dword ptr [esi+0xFC],7
	je Block26

 Block1:
	mov dword ptr [esp+0x38],ebx
	lea eax,[esp+0x3C]
	push 0x561
	push eax
	mov dword ptr [esp+0xC8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x100]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0xCC],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x48]
	add esp,0xC
	mov byte ptr [esp+0xC0],bl
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	call edi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0xC4],2
	call edi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	mov ebp,dword ptr [esp+0x38]
	push ebx
	push ebx
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push ecx
	mov dword ptr [esp+0x54],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0xD8],3
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xD4],4
	cmp dword ptr [_D_G_RM],ebx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea eax,[esp+0x58]
	mov byte ptr [esp+0xD4],3
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC8],5
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x104]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block12

 Block10:
	cmp eax,0x80004002
	je Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	cmp word ptr [esp+0x44],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0xC0],3
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,ebx
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[esp+0x44]
	push edx
	call edi

 Block16:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xC0],2
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebx
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x18]
	push ecx
	call edi

 Block20:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xC0],bl
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebx
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[esp+0x28]
	push eax
	call edi

 Block24:
	mov dword ptr [esp+0xC0],0xFFFFFFFF
	cmp ebp,ebx
	je Block26

 Block25:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov eax,dword ptr [esi+0xFC]
	cmp eax,7
	ja Block106

 Block27:
	cmp EAX, 0
je Block28
cmp EAX, 1
je Block39
cmp EAX, 2
je Block50
cmp EAX, 3
je Block61
cmp EAX, 4
je Block72
cmp EAX, 5
je Block78
cmp EAX, 6
je Block84
cmp EAX, 7
je Block98


 Block28:
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	lea ecx,[esp+0x3C]
	push 0x55D
	push ecx
	mov dword ptr [esp+0xC8],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0xC4],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0xC0],6
	cmp eax,ebx
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block30:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],8
	cmp eax,ebx
	je Block32

 Block31:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block33

 Block32:
	xor eax,eax

 Block33:
	push eax
	lea ecx,[esi+0x108]
	mov byte ptr [esp+0xC4],6
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x10C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x6A
	push 0x46
	push 0x3E8
	push esi
	call edx
	lea eax,[esp+0x38]
	push 0x55E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0xC4],9
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0xC0],6
	cmp eax,ebx
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block35:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0xA
	cmp eax,ebx
	je Block37

 Block36:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block38

 Block37:
	xor eax,eax

 Block38:
	push eax
	lea ecx,[esi+0x110]
	mov byte ptr [esp+0xC4],6
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x114]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x6A
	push 0x81
	push 0x3E9
	push esi
	call edx
	mov eax,dword ptr [esp+0x24]
	jmp Block104

 Block39:
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x78]
	push 0x55D
	push eax
	mov dword ptr [esp+0xC8],0xB
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0xC4],0xC
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0xC0],0xB
	cmp eax,ebx
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block41:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0xD
	cmp eax,ebx
	je Block43

 Block42:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block44

 Block43:
	xor eax,eax

 Block44:
	push eax
	lea ecx,[esi+0x108]
	mov byte ptr [esp+0xC4],0xB
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x10C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x6A
	push 0x41
	push 0x3E8
	push esi
	call edx
	lea eax,[esp+0x58]
	push 0x55E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0xC4],0xE
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0xC0],0xB
	cmp eax,ebx
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block46:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0xF
	cmp eax,ebx
	je Block48

 Block47:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block49

 Block48:
	xor eax,eax

 Block49:
	push eax
	lea ecx,[esi+0x110]
	mov byte ptr [esp+0xC4],0xB
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x114]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x6A
	push 0x81
	push 0x3E9
	push esi
	call edx
	mov eax,dword ptr [esp+0x24]
	jmp Block104

 Block50:
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x5C]
	push 0xE26
	push eax
	mov dword ptr [esp+0xC8],0x10
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0xC4],0x11
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0xC0],0x10
	cmp eax,ebx
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block52:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0x12
	cmp eax,ebx
	je Block54

 Block53:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block55

 Block54:
	xor eax,eax

 Block55:
	push eax
	lea ecx,[esi+0x108]
	mov byte ptr [esp+0xC4],0x10
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x10C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x6A
	push 0x3B
	push 0x3E8
	push esi
	call edx
	lea eax,[esp+0x64]
	push 0xE27
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0xC4],0x13
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0xC0],0x10
	cmp eax,ebx
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block57:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0x14
	cmp eax,ebx
	je Block59

 Block58:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block60

 Block59:
	xor eax,eax

 Block60:
	push eax
	lea ecx,[esi+0x110]
	mov byte ptr [esp+0xC4],0x10
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x114]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x6A
	push 0x81
	push 0x3E9
	push esi
	call edx
	mov eax,dword ptr [esp+0x24]
	jmp Block104

 Block61:
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x6C]
	push 0xE28
	push eax
	mov dword ptr [esp+0xC8],0x15
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0xC4],0x16
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0xC0],0x15
	cmp eax,ebx
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block63:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0x17
	cmp eax,ebx
	je Block65

 Block64:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block66

 Block65:
	xor eax,eax

 Block66:
	push eax
	lea ecx,[esi+0x108]
	mov byte ptr [esp+0xC4],0x15
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x10C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x6A
	push 0x46
	push 0x3E8
	push esi
	call edx
	lea eax,[esp+0x74]
	push 0xE29
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0xC4],0x18
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0xC0],0x15
	cmp eax,ebx
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block68:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0x19
	cmp eax,ebx
	je Block70

 Block69:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block71

 Block70:
	xor eax,eax

 Block71:
	push eax
	lea ecx,[esi+0x110]
	mov byte ptr [esp+0xC4],0x15
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x114]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x6A
	push 0x81
	push 0x3E9
	push esi
	call edx
	mov eax,dword ptr [esp+0x24]
	jmp Block104

 Block72:
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x28],1
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x30],ebx
	lea eax,[esp+0x54]
	push 0x55D
	push eax
	mov dword ptr [esp+0xC8],0x1A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0xC4],0x1B
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0xC0],0x1A
	cmp eax,ebx
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block74:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0x1C
	cmp eax,ebx
	je Block76

 Block75:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block77

 Block76:
	xor eax,eax

 Block77:
	push eax
	lea ecx,[esi+0x108]
	mov byte ptr [esp+0xC4],0x1A
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x10C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push ebx
	push 0x6A
	push 0x64
	push 0x3E8
	push esi
	call edx
	mov eax,dword ptr [esp+0x34]
	jmp Block104

 Block78:
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x28],1
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x30],ebx
	lea eax,[esp+0x60]
	push 0x55D
	push eax
	mov dword ptr [esp+0xC8],0x1D
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0xC4],0x1E
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0xC0],0x1D
	cmp eax,ebx
	je Block80

 Block79:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block80:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0x1F
	cmp eax,ebx
	je Block82

 Block81:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block83

 Block82:
	xor eax,eax

 Block83:
	push eax
	lea ecx,[esi+0x108]
	mov byte ptr [esp+0xC4],0x1D
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x10C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push ebx
	push 0x6A
	push 0x64
	push 0x3E8
	push esi
	call edx
	mov eax,dword ptr [esp+0x34]
	jmp Block104

 Block84:
	mov edi,1
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x70]
	push 0x55D
	push eax
	mov dword ptr [esp+0xC8],0x20
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0xC4],0x21
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0xC0],0x20
	cmp eax,ebx
	je Block86

 Block85:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block86:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0x22
	cmp eax,ebx
	je Block88

 Block87:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block89

 Block88:
	xor eax,eax

 Block89:
	push eax
	lea ecx,[esi+0x108]
	mov byte ptr [esp+0xC4],0x20
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x10C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x6A
	push 0x46
	push 0x3E8
	push esi
	call edx
	lea eax,[esp+0x68]
	push 0x55E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0xC4],0x23
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0xC0],0x20
	cmp eax,ebx
	je Block91

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block91:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0x24
	cmp eax,ebx
	je Block93

 Block92:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block94

 Block93:
	xor eax,eax

 Block94:
	push eax
	lea ecx,[esi+0x110]
	mov byte ptr [esp+0xC4],0x20
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x114]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x6A
	push 0x81
	push 0x3E9
	push esi
	call edx
	lea ecx,[esp+0x7C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0xC4],0x25
	mov dword ptr [esp+0xA4],ebx
	mov dword ptr [esp+0x9C],0xFF000000
	mov dword ptr [esp+0xB0],8
	mov dword ptr [esp+0xA8],edi
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0x26
	cmp eax,ebx
	je Block96

 Block95:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block97

 Block96:
	xor eax,eax

 Block97:
	push eax
	lea ecx,[esi+0x118]
	mov byte ptr [esp+0xC4],0x25
	call ZRef<CCtrlEdit>::op_assign_ptr
	mov ecx,dword ptr [esi+0x11C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x7C]
	push edx
	push 0xF
	push 0x96
	push 0x67
	push 0x82
	push 0x3EA
	push esi
	call eax
	mov eax,dword ptr [esi+0x11C]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	lea ecx,[esp+0x7C]
	mov byte ptr [esp+0xC0],0x20
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x24]
	jmp Block104

 Block98:
	mov dword ptr [esi+0x120],ebx
	mov dword ptr [esp+0x50],ebx
	mov dword ptr [esp+0x44],1
	mov dword ptr [esp+0x48],ebx
	mov dword ptr [esp+0x4C],ebx
	lea ecx,[esp+0x40]
	push 0xBDB
	push ecx
	mov dword ptr [esp+0xC8],0x27
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0xC4],0x28
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xC0],0x27
	cmp eax,ebx
	je Block100

 Block99:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block100:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0x29
	cmp eax,ebx
	je Block102

 Block101:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block103

 Block102:
	xor eax,eax

 Block103:
	push eax
	lea ecx,[esi+0x108]
	mov byte ptr [esp+0xC4],0x27
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x10C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x44]
	push eax
	push ebx
	push 0xAC
	push 0x156
	push 0x3E8
	push esi
	call edx
	mov eax,dword ptr [esp+0x50]

 Block104:
	mov dword ptr [esp+0xC0],0xFFFFFFFF
	cmp eax,ebx
	je Block106

 Block105:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block106:
	mov ecx,dword ptr [esp+0xB8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xB0
	ret 4
}
}
// CUILoginStart::OnCreate
_SUB_EXCEPTION_HANDLER(1F03C0)
__SUB_CLASS_THIS(001F03C0, __thiscall, 78853,  CUILoginStart, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F03C0
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
	mov esi,ecx
	lea eax,[esp+0x10]
	push 0x549
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esi+0xA8]
	mov dword ptr [esp+0x54],0
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	or ebp,0xFFFFFFFF
	mov dword ptr [esp+0x50],ebp
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0x10]
	push 0x54B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esi+0xB8]
	mov dword ptr [esp+0x54],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x50],ebp
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	lea edx,[esp+0x10]
	push 0xFBA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esi+0xE8]
	mov dword ptr [esp+0x54],2
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x50],ebp
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	lea eax,[esp+0x10]
	push 0x150A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esi+0xC8]
	mov dword ptr [esp+0x54],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x50],ebp
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	lea ecx,[esp+0x10]
	push 0x150B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esi+0xD8]
	mov dword ptr [esp+0x54],4
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x50],ebp
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push edx
	call edi
	lea eax,[esp+0x28]
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
	lea ecx,[esp+0x18]
	push ecx
	mov dword ptr [esp+0x54],5
	call edi
	lea edx,[esp+0x18]
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
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x54],6
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x50],7
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[esp+0x10]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x50],8
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x1C]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x50],7
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x50],6
	test eax,eax
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block22:
	mov edi,8
	mov byte ptr [esp+0x50],5
	cmp word ptr [esp+0x18],di
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov dword ptr [esp+0x50],ebp
	cmp word ptr [esp+0x28],di
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block30:
	lea ecx,[esp+0x14]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x94]
	push edi
	push eax
	mov dword ptr [esp+0x5C],9
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0x50],ebp
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block32:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
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
	lea ecx,[esp+0x38]
	push ecx
	push ebp
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	push edx
	mov dword ptr [esp+0x68],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x60],0xB
	test ecx,ecx
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	mov byte ptr [esp+0x60],0xA
	call IWzFont::Create
	cmp word ptr [esp+0x38],8
	mov dword ptr [esp+0x50],ebp
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov eax,dword ptr [esi+0x98]
	test eax,eax
	je Block42

 Block41:
	mov dword ptr [esi+0x98],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block42:
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
// CUILoginDesc::CUILoginDesc
_SUB_EXCEPTION_HANDLER(1F0040)
__SUB_CLASS_THIS(001F0040, __thiscall, 78874,  CUILoginDesc, void, CLogin*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F0040
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
	call CFadeWnd::_ctor_default
	mov ecx,dword ptr [esp+0x2C]
	mov edi,dword ptr [esp+0x30]
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CUILoginDesc::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUILoginDesc::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUILoginDesc::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xF4],ecx
	mov dword ptr [esi+0xF8],edi
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esi+0xFC],eax
	mov edx,0x28
	xor ecx,ecx
	lea ebx,[eax+0x7F]
	lea ebp,[eax-0x2A]
	mov byte ptr [esp+0x24],1
	mov dword ptr [esp+0x30],0x2A
	mov eax,edx
	cmp edi,5
	jne Block2

 Block1:
	lea ebx,[edx+0x6E]
	mov ecx,0x21
	lea edx,[ebp-0x6B]
	mov dword ptr [esp+0x30],0x39
	xor eax,eax
	mov ebp,ecx

 Block2:
	push 0x12C
	push 0
	push 0x64
	push ecx
	push eax
	push ecx
	push eax
	push ebp
	push edx
	push 0
	push 0xFF
	push 0xFF
	mov ecx,esi
	call CFadeWnd::SetOption
	mov dword ptr [esp+0x2C],0
	lea edx,[esp+0x14]
	push 0x548
	push edx
	mov byte ptr [esp+0x2C],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x30],3
	call ZXString16::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x24],2
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov edx,dword ptr [esp+0x30]
	push 0
	push 0
	push 0
	push 1
	mov ecx,0xD2
	sub ecx,edi
	mov edi,dword ptr [esp+0x3C]
	push ecx
	push edi
	push edx
	push ebx
	mov ecx,esi
	call CFadeWnd::CreateFadeWnd
	mov byte ptr [esp+0x24],1
	test edi,edi
	je Block6

 Block5:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block6:
	mov eax,esi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 8
}
}
// CUILoginDesc::Delete
__SUB_CLASS_THIS0(001EE550, __thiscall, 78876,  CUILoginDesc, void) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [ecx+0xF4]
	call CLogin::CloseLoginDescWnd
	ret
}
}
// CLoginUtilDlg::OnPreFadeIn
_SUB_EXCEPTION_HANDLER(1EFAE0)
__SUB_CLASS_THIS0(001EFAE0, __thiscall, 78909,  CLoginUtilDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1EFAE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0xFC],7
	je Block2

 Block1:
	push 0
	call CFadeWnd::Fade
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret

 Block2:
	cmp dword ptr [esi+0x120],0
	jne Block28

 Block3:
	push 0
	push 0xFF
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	call CWnd::GetLayer
	push 0
	push 0
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x64],0
	call CWnd::GetLayer
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push eax
	mov byte ptr [esp+0x68],1
	call _x_com_ptr<IWzVector2D>::CreateFromWzGr2DLayerComPtr
	mov eax,dword ptr [esi+0x128]
	push 0
	push eax
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x70],2
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x124]
	add esp,0x28
	cmp edi,eax
	je Block8

 Block4:
	mov dword ptr [esi+0x124],eax
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	test edi,edi
	je Block8

 Block7:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block8:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block10:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	call edi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	lea edx,[esp+0x20]
	mov ebx,3
	push edx
	mov dword ptr [esp+0x4C],ebx
	call edi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov ecx,dword ptr [esi+0x124]
	mov byte ptr [esp+0x48],4
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov edi,8
	mov byte ptr [esp+0x48],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x20],di
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x20]
	push edx
	call ebx

 Block22:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp word ptr [esp+0x30],di
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[esp+0x30]
	push ecx
	call ebx

 Block26:
	lea edx,[esp+0x18]
	push 0x4FF
	push edx
	mov dword ptr [esi+0x120],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x4C],5
	call play_ui_sound
	mov eax,dword ptr [esp+0x1C]
	add esp,4
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block33

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret

 Block28:
	cmp dword ptr [esi+0x124],0
	je Block33

 Block29:
	mov ecx,dword ptr [esi+0x124]
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	call IWzGr2DLayer::GetanimationState
	test eax,eax
	jne Block33

 Block32:
	push eax
	mov ecx,esi
	call CFadeWnd::Fade
	mov dword ptr [esi+0x120],0

 Block33:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret
}
}
// CUILoginStart::SetButton
_SUB_EXCEPTION_HANDLER(1F0790)
__SUB_CLASS_THIS(001F0790, __thiscall, 78860,  CUILoginStart, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F0790
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
	mov esi,ecx
	mov ebx,dword ptr [esp+0x7C]
	test bl,1
	je Block6

 Block1:
	cmp dword ptr [esi+0xF0],0
	jne Block9

 Block2:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x74],0
	test eax,eax
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	push eax
	lea ecx,[esi+0xEC]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xF0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esi+0x9C]
	push edx
	push 0
	push 0x222
	push 0
	push 0x3E8
	push esi
	call eax
	jmp Block9

 Block6:
	mov ecx,dword ptr [esi+0xF0]
	test ecx,ecx
	je Block9

 Block7:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	cmp dword ptr [esi+0xF0],0
	lea edi,[esi+0xEC]
	je Block9

 Block8:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block9:
	test bl,2
	je Block15

 Block10:
	cmp dword ptr [esi+0xF8],0
	jne Block18

 Block11:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x74],1
	test eax,eax
	je Block13

 Block12:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block14

 Block13:
	xor eax,eax

 Block14:
	push eax
	lea ecx,[esi+0xF4]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xF8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esi+0xAC]
	push eax
	push 0
	push 0x222
	push 0
	push 0x3E9
	push esi
	call edx
	jmp Block18

 Block15:
	mov ecx,dword ptr [esi+0xF8]
	test ecx,ecx
	je Block18

 Block16:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0xF8],0
	lea edi,[esi+0xF4]
	je Block18

 Block17:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block18:
	test bl,0x20
	je Block23

 Block19:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x74],2
	test eax,eax
	je Block21

 Block20:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block22

 Block21:
	xor eax,eax

 Block22:
	push eax
	lea ecx,[esi+0x10C]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x110]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esi+0xDC]
	push edx
	push 0
	push 0x10E
	push 0
	push 0x3EC
	push esi
	call eax
	jmp Block27

 Block23:
	mov ecx,dword ptr [esi+0x110]
	test ecx,ecx
	je Block27

 Block24:
	test ebx,ebx
	jne Block27

 Block25:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	cmp dword ptr [esi+0x110],ebx
	lea edi,[esi+0x10C]
	je Block27

 Block26:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block27:
	mov ebp,dword ptr [ZImports::_VariantInit]
	test bl,0x10
	je Block50

 Block28:
	cmp dword ptr [esi+0x98],0
	lea edi,[esi+0x98]
	sete al
	test al,al
	je Block53

 Block29:
	lea ecx,[esp+0x2C]
	push ecx
	call ebp
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block31

 Block30:
	push eax
	call _com_issue_error

 Block31:
	lea eax,[esp+0x1C]
	push eax
	mov dword ptr [esp+0x78],3
	call ebp
	lea ecx,[esp+0x1C]
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
	push 0
	push 0
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x547
	mov bl,4
	push ecx
	mov byte ptr [esp+0x90],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x88],5
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea edx,[esp+0x70]
	mov byte ptr [esp+0x88],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x7C],6
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block38

 Block36:
	cmp eax,0x80004002
	je Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	mov edi,8
	mov byte ptr [esp+0x74],bl
	cmp word ptr [esp+0x5C],di
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov byte ptr [esp+0x74],3
	cmp word ptr [esp+0x1C],di
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov dword ptr [esp+0x74],0xFFFFFFFF
	cmp word ptr [esp+0x2C],di
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block54

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block49:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block54

 Block50:
	cmp dword ptr [esi+0x98],0
	sete al
	test al,al
	sete al
	test al,al
	je Block53

 Block51:
	mov eax,dword ptr [esi+0x98]
	test eax,eax
	je Block53

 Block52:
	mov dword ptr [esi+0x98],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	mov edi,8

 Block54:
	lea eax,[esp+0x4C]
	push eax
	call ebp
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	lea edx,[esp+0x3C]
	push edx
	mov dword ptr [esp+0x78],7
	call ebp
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x78],8
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov bl,9
	mov byte ptr [esp+0x74],bl
	test ecx,ecx
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	lea edx,[esp+0x14]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x74],0xA
	test ecx,ecx
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	lea eax,[esp+0x4C]
	push eax
	mov eax,dword ptr [esp+0x80]
	neg eax
	lea edx,[esp+0x40]
	push edx
	sbb eax,eax
	push 0
	and eax,0xFF
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x74],bl
	test eax,eax
	je Block64

 Block63:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block64:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x74],8
	test eax,eax
	je Block66

 Block65:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block66:
	mov byte ptr [esp+0x74],7
	cmp word ptr [esp+0x3C],di
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov dword ptr [esp+0x74],0xFFFFFFFF
	cmp word ptr [esp+0x4C],di
	jne Block73

 Block71:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block74:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x64
	ret 4
}
}
// CUILoginStart::OnKey
__SUB_CLASS_THIS(001EE560, __thiscall, 78857,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	ret 8
}
}
// CLoginUtilDlg::YesNo2
_SUB_EXCEPTION_HANDLER(1EF6F0)
__SUB(001EF6F0, __cdecl, 78897,  int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1EF6F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	push 0x12C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x20],0
	test eax,eax
	je Block10

 Block1:
	mov ecx,eax
	call CLoginUtilDlg::_ctor_default
	test eax,eax
	je Block10

 Block2:
	add eax,8
	je Block10

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,dword ptr [esp+0x28]
	push ecx
	push 1
	mov ecx,esi
	mov dword ptr [esp+0x28],1
	call CLoginUtilDlg::Init
	lea edx,[esp+0xC]
	push 0x55A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 0
	push 1
	push 0xA
	push eax
	push 0x8E
	push 0xF9
	mov ecx,esi
	mov byte ptr [esp+0x40],2
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x20],1
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	mov ecx,esi
	call CLoginUtilDlg::DoModal
	mov edi,eax
	neg edi
	sbb edi,edi
	neg edi
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test esi,esi
	je Block9

 Block8:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CLoginUtilDlg>::_ReleaseRaw

 Block9:
	mov eax,edi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret

 Block10:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	jmp Block5
}
}
// CLoginUtilDlg_MODAL_OWNER::MODAL_OWNER
__SUB_CLASS_THIS(001EE700, __thiscall, 139758,  CLoginUtilDlg_MODAL_OWNER, void, CLoginUtilDlg*) {
__asm {

 Block0:
	mov dword ptr [edi],esi
	test esi,esi
	je Block2

 Block1:
	lea eax,[esi+4]
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetCaptureWnd
	test esi,esi
	je Block5

 Block4:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea eax,[esi+4]
	push eax
	call CWndMan::SetFocus
	mov eax,edi
	ret

 Block5:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	xor eax,eax
	push eax
	call CWndMan::SetFocus
	mov eax,edi
	ret
}
}
// CLoginUtilDlg::Delete
__SUB_CLASS_THIS0(001EE650, __thiscall, 78909,  CLoginUtilDlg, void) {
__asm {

 Block0:
	test ecx,ecx
	je Block2

 Block1:
	mov eax,dword ptr [ecx+8]
	mov edx,dword ptr [eax]
	add ecx,8
	push 1
	call edx

 Block2:
	ret
}
}
// CUILoginStart::HitTest
__SUB_CLASS_THIS(001EE570, __thiscall, 78858,  CUILoginStart, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [esp+0x10]
	push esi
	push eax
	push edx
	call CWnd::HitTest
	test eax,eax
	je Block4

 Block1:
	test esi,esi
	je Block4

 Block2:
	cmp dword ptr [esi],0
	jne Block4

 Block3:
	xor eax,eax

 Block4:
	pop esi
	ret 0xC
}
}
// CUILoginStart::SetViewWorldButton
_SUB_EXCEPTION_HANDLER(1EF250)
__SUB_CLASS_THIS(001EF250, __thiscall, 78860,  CUILoginStart, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1EF250
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
	mov edi,dword ptr [esp+0x1C]
	cmp edi,4
	je Block2

 Block1:
	mov eax,dword ptr [esi+0x90]
	cmp dword ptr [eax+0x1A4],1
	jne Block33

 Block2:
	cmp edi,1
	jne Block7

 Block3:
	mov eax,dword ptr [esi+0x90]
	cmp dword ptr [eax+0x238],0
	je Block6

 Block4:
	mov eax,dword ptr [eax+0x23C]
	test eax,eax
	je Block6

 Block5:
	cmp dword ptr [eax-4],0
	mov edi,3
	jne Block7

 Block6:
	mov edi,2

 Block7:
	cmp dword ptr [esi+0x114],edi
	je Block33

 Block8:
	mov dword ptr [esi+0x114],edi
	cmp edi,4
	ja Block32

 Block9:
	cmp EDI, 0
je Block10
cmp EDI, 1
je Block32
cmp EDI, 2
je Block17
cmp EDI, 3
je Block17
cmp EDI, 4
je Block27


 Block10:
	cmp dword ptr [esi+0x100],0
	jne Block15

 Block11:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block13

 Block12:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block14

 Block13:
	xor eax,eax

 Block14:
	push eax
	lea ecx,[esi+0xFC]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x100]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esi+0xBC]
	push eax
	push 0
	push 0x35
	push 0
	push 0x3EA
	push esi
	call edx

 Block15:
	mov ecx,dword ptr [esi+0x108]
	test ecx,ecx
	je Block32

 Block16:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	lea ecx,[esi+0x104]
	jmp Block31

 Block17:
	cmp dword ptr [esi+0x108],0
	jne Block22

 Block18:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x14],1
	test eax,eax
	je Block20

 Block19:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block21

 Block20:
	xor eax,eax

 Block21:
	push eax
	lea ecx,[esi+0x104]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x108]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esi+0xCC]
	push edx
	push 0
	push 0x35
	push 0
	push 0x3EB
	push esi
	call eax

 Block22:
	mov ecx,dword ptr [esi+0x100]
	test ecx,ecx
	je Block24

 Block23:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	push 0
	lea ecx,[esi+0xFC]
	call ZRef<CCtrlButton>::op_assign_zero

 Block24:
	mov eax,dword ptr [esi+0x108]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	cmp edi,3
	jne Block26

 Block25:
	push 1
	call eax
	jmp Block32

 Block26:
	push 0
	call eax
	jmp Block32

 Block27:
	mov ecx,dword ptr [esi+0x108]
	test ecx,ecx
	je Block29

 Block28:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	push 0
	lea ecx,[esi+0x104]
	call ZRef<CCtrlButton>::op_assign_zero

 Block29:
	mov ecx,dword ptr [esi+0x100]
	test ecx,ecx
	je Block32

 Block30:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	lea ecx,[esi+0xFC]

 Block31:
	push 0
	call ZRef<CCtrlButton>::op_assign_zero

 Block32:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block33:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 4
}
}
// CLoginUtilDlg::OnKey
_SUB_EXCEPTION_HANDLER(1EFE50)
__SUB_CLASS_THIS(001EFE50, __thiscall, 78918,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1EFE50
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
	mov edi,ecx
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x34]
	test eax,eax
	js Block21

 Block1:
	cmp ecx,0xD
	je Block13

 Block2:
	cmp ecx,0x1B
	je Block12

 Block3:
	cmp dword ptr [edi+0xF8],6
	jne Block21

 Block4:
	push 0x308
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x2C],1
	test eax,eax
	je Block11

 Block5:
	mov ecx,eax
	call CUISoftKeyboard::_ctor_default
	test eax,eax
	je Block11

 Block6:
	add eax,8
	je Block11

 Block7:
	lea esi,[eax-8]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block9

 Block8:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov edi,dword ptr [edi+0x118]
	mov eax,2
	lea ecx,[esp+0x18]
	push ecx
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x24],eax
	mov eax,8
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	call CUISoftKeyboard::SetSoftKeyboard
	mov ecx,esi
	call CDialog::DoModal
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test esi,esi
	je Block22

 Block10:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CUISoftKeyboard>::_ReleaseRaw
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 8

 Block11:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	jmp Block9

 Block12:
	mov edx,dword ptr [edi-4]
	mov eax,dword ptr [edx+0x34]
	lea ecx,[edi-4]
	push 0
	call eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 8

 Block13:
	cmp dword ptr [edi+0xF8],0x3EA
	jne Block20

 Block14:
	mov ecx,dword ptr [edi+0x118]
	lea edx,[esp+0x38]
	push edx
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x2C],0
	test eax,eax
	je Block17

 Block15:
	cmp byte ptr [eax],0
	je Block17

 Block16:
	xor eax,eax
	jmp Block18

 Block17:
	mov eax,1

 Block18:
	mov edx,dword ptr [edi-4]
	xor ebx,ebx
	test eax,eax
	mov eax,dword ptr [edx+0x34]
	sete bl
	lea ecx,[edi-4]
	push ebx
	call eax
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block22

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 8

 Block20:
	mov edx,dword ptr [edi-4]
	mov eax,dword ptr [edx+0x34]
	lea ecx,[edi-4]
	push 1
	call eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 8

 Block21:
	push eax
	push ecx
	mov ecx,edi
	call CDialog::OnKey

 Block22:
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
// CUILoginStart::OnButtonClicked
__SUB_CLASS_THIS(001EE800, __thiscall, 78854,  CUILoginStart, void, uint32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x118],0
	jne Block24

 Block1:
	mov ecx,dword ptr [esi+0x90]
	cmp dword ptr [ecx+0x1A8],0
	jne Block24

 Block2:
	mov eax,dword ptr [esp+8]
	add eax,0xFFFFFC18
	cmp eax,4
	ja Block21

 Block3:
	cmp EAX, 0
je Block4
cmp EAX, 1
je Block15
cmp EAX, 2
je Block18
cmp EAX, 3
je Block19
cmp EAX, 4
je Block16


 Block4:
	push 0
	call CLogin::ViewRecommendWorld
	mov ecx,dword ptr [esi+0x90]
	mov eax,dword ptr [ecx+0x1A4]
	cmp eax,2
	jne Block6

 Block5:
	push 0
	call CLogin::GotoWorldSelect
	jmp Block21

 Block6:
	cmp eax,5
	jne Block14

 Block7:
	mov ecx,dword ptr [TSingleton<CUICharDetailVAC>::ms_pInstance]
	test ecx,ecx
	je Block10

 Block8:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUICharDetailVAC>::ms_pInstance]
	test eax,eax
	je Block10

 Block9:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block10:
	mov ecx,dword ptr [TSingleton<CUIAvatarVAC>::ms_pInstance]
	test ecx,ecx
	je Block13

 Block11:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIAvatarVAC>::ms_pInstance]
	test eax,eax
	je Block13

 Block12:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block13:
	mov ecx,dword ptr [esi+0x90]
	push 1
	call CLogin::GotoWorldSelect
	jmp Block21

 Block14:
	push 0
	push 1
	call CLogin::GotoTitle
	jmp Block21

 Block15:
	push 0
	call CLogin::ViewRecommendWorld
	push 0
	call PostQuitMessage
	jmp Block21

 Block16:
	mov ecx,esi
	call CUILoginStart::SendViewAllCharacterPacket
	test eax,eax
	je Block21

 Block17:
	push 1
	mov ecx,esi
	call CUILoginStart::EnableLoginStartCtrl
	jmp Block21

 Block18:
	push 0
	jmp Block20

 Block19:
	push 1

 Block20:
	call CLogin::ViewRecommendWorld

 Block21:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test ecx,ecx
	je Block24

 Block22:
	mov eax,dword ptr [esi+0x90]
	mov edx,dword ptr [eax+0x1A4]
	dec edx
	cmp edx,1
	ja Block24

 Block23:
	mov eax,dword ptr [eax+0x1C8]
	pop esi
	mov dword ptr [esp+4],eax
	jmp  CWndMan::SetFocus

 Block24:
	pop esi
	ret 4
}
}
// CLoginUtilDlg::Error
_SUB_EXCEPTION_HANDLER(1EF980)
__SUB(001EF980, __cdecl, 78898,  void, long, ZRef<CDialog>*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1EF980
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
	push 0x12C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x1C],0
	test eax,eax
	je Block17

 Block1:
	mov ecx,eax
	call CLoginUtilDlg::_ctor_default
	test eax,eax
	je Block17

 Block2:
	add eax,8
	je Block17

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x10],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov edi,dword ptr [esp+0x28]
	mov dword ptr [esp+0x1C],1
	test edi,edi
	je Block8

 Block6:
	cmp dword ptr [edi+4],0
	jne Block14

 Block7:
	push esi
	mov ecx,edi
	call ZRef<CDialog>::op_assign_ptr

 Block8:
	mov ecx,dword ptr [esp+0x24]
	push ecx
	push 5
	mov ecx,esi
	call CLoginUtilDlg::Init
	lea edx,[esp+0x28]
	push 0x55B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 0
	push 1
	push 0xA
	push eax
	push 0x8E
	push 0xF9
	mov ecx,esi
	mov byte ptr [esp+0x3C],2
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x1C],1
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	mov ecx,esi
	call CLoginUtilDlg::DoModal
	test edi,edi
	je Block14

 Block11:
	mov eax,dword ptr [edi+4]
	cmp eax,esi
	jne Block14

 Block12:
	test eax,eax
	je Block14

 Block13:
	push 0
	mov ecx,edi
	call ZRef<CDialog>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block14:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test esi,esi
	je Block16

 Block15:
	push 0
	lea ecx,[esp+0x10]
	call ZRef<CLoginUtilDlg>::_ReleaseRaw

 Block16:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret

 Block17:
	xor esi,esi
	mov dword ptr [esp+0x10],esi
	jmp Block5
}
}
// CLoginUtilDlg::YesNo
_SUB_EXCEPTION_HANDLER(1EF570)
__SUB(001EF570, __cdecl, 78896,  int32_t, long, ZRef<CDialog>*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1EF570
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
	push 0x12C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x20],0
	test eax,eax
	je Block10

 Block1:
	mov ecx,eax
	call CLoginUtilDlg::_ctor_default
	test eax,eax
	je Block10

 Block2:
	add eax,8
	je Block10

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov edi,dword ptr [esp+0x2C]
	mov ebx,1
	mov dword ptr [esp+0x20],ebx
	test edi,edi
	je Block12

 Block6:
	cmp dword ptr [edi+4],0
	je Block11

 Block7:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test esi,esi
	je Block9

 Block8:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CLoginUtilDlg>::_ReleaseRaw

 Block9:
	mov eax,3
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret

 Block10:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	jmp Block5

 Block11:
	push esi
	mov ecx,edi
	call ZRef<CDialog>::op_assign_ptr

 Block12:
	mov ecx,dword ptr [esp+0x28]
	push ecx
	push 0
	mov ecx,esi
	call CLoginUtilDlg::Init
	lea edx,[esp+0x2C]
	push 0x55A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 0
	push ebx
	push 0xA
	push eax
	push 0x8E
	push 0xF9
	mov ecx,esi
	mov byte ptr [esp+0x40],2
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x20],bl
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block14:
	mov ecx,esi
	call CLoginUtilDlg::DoModal
	mov ebx,eax
	test edi,edi
	je Block18

 Block15:
	mov eax,dword ptr [edi+4]
	cmp eax,esi
	jne Block18

 Block16:
	test eax,eax
	je Block18

 Block17:
	push 0
	mov ecx,edi
	call ZRef<CDialog>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block18:
	xor eax,eax
	test ebx,ebx
	setne al
	mov dword ptr [esp+0x20],0xFFFFFFFF
	mov edi,eax
	test esi,esi
	je Block20

 Block19:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CLoginUtilDlg>::_ReleaseRaw

 Block20:
	mov eax,edi
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
