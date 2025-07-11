#include "regen.hpp"
// UIEventAlarm.ipp
#include "UIEventAlarm.hpp"

// CUIEventAlarm::CreateEventAlarm
__SUB_CLASS_THIS0(003AABA0, __thiscall, 87327,  CUIEventAlarm, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,dword ptr [ecx+0xA4]
	mov eax,esi
	cdq
	sub eax,edx
	mov edx,eax
	mov eax,dword ptr [_D_SRECTQUESTDLG__1]
	sar edx,1
	sub eax,edx
	push edi
	mov edi,0
	jns Block2

 Block1:
	xor eax,eax

 Block2:
	mov edx,0x320
	sub edx,esi
	cmp eax,edx
	jle Block4

 Block3:
	mov eax,edx

 Block4:
	mov edx,dword ptr [ecx+0xA8]
	mov ebx,0x258
	sub ebx,edx
	jns Block6

 Block5:
	mov edi,ebx

 Block6:
	push 0
	push 0
	push 1
	push 0xA
	push edx
	push esi
	push edi
	push eax
	call CDialog::CreateDlg_0
	pop edi
	pop esi
	pop ebx
	ret
}
}
// CUIEventAlarm::MakeUOLByUIType
__SUB_CLASS_THIS(003AAD40, __thiscall, 87331,  CUIEventAlarm, const wchar_t*, ZXString16&, const wchar_t*, const wchar_t*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push ebx
	push edi
	mov edi,dword ptr [esp+0xC]
	push eax
	mov ecx,edi
	call ZXString16::AssignCStr
	mov ebx,dword ptr [esp+0x14]
	test ebx,ebx
	je Block4

 Block1:
	push 1
	push offset _S___9
	mov ecx,edi
	call ZXString16::_Cat
	mov edx,ebx
	lea ecx,[edx+2]
	push esi
	mov edi,edi

 Block2:
	mov si,word ptr [edx]
	add edx,2
	test si,si
	jne Block2

 Block3:
	sub edx,ecx
	sar edx,1
	push edx
	push ebx
	mov ecx,eax
	call ZXString16::_Cat
	pop esi

 Block4:
	mov eax,dword ptr [edi]
	pop edi
	pop ebx
	ret 0xC
}
}
// CUIEventAlarm::Update
__SUB_CLASS_THIS0(003AAC00, __thiscall, 87327,  CUIEventAlarm, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call timeGetTime
	cmp eax,dword ptr [esi+0xDC]
	jle Block2

 Block1:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 2
	mov ecx,esi
	call edx

 Block2:
	pop esi
	ret
}
}
// CUIEventAlarm::Layout_GEN
__SUB_CLASS_THIS0(003AAB70, __thiscall, 87327,  CUIEventAlarm, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xA0]
	add eax,0x2C
	mov dword ptr [ecx+0x98],0x1E
	mov dword ptr [ecx+0x9C],0x16
	mov dword ptr [ecx+0xA4],0x10A
	mov dword ptr [ecx+0xA8],eax
	ret
}
}
// CUIEventAlarm::SetBackground
_SUB_EXCEPTION_HANDLER(3AB010)
__SUB_CLASS_THIS0(003AB010, __thiscall, 87327,  CUIEventAlarm, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3AB010
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xD0
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xE4]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x3C],edi
	xor ebp,ebp
	mov dword ptr [esp+0xE0],ebp
	lea eax,[esp+0x44]
	push 0x3D0
	push eax
	mov dword ptr [esp+0xF4],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[edi+0x78]
	push ebp
	push ecx
	push eax
	mov byte ptr [esp+0xF8],1
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x50]
	add esp,0xC
	mov byte ptr [esp+0xEC],0
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	lea edx,[esp+0x2C]
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
	lea eax,[esp+0x14]
	mov bl,2
	push eax
	mov byte ptr [esp+0xF0],bl
	call esi
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [edi+0x78]
	mov byte ptr [esp+0xEC],3
	cmp ecx,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[esp+0x2C]
	push edx
	mov edx,dword ptr [edi+0x28]
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [edi+0x24]
	push edx
	push eax
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0xEC],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x14],si
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebp
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x14]
	push edx
	call ebx

 Block12:
	mov byte ptr [esp+0xEC],0
	cmp word ptr [esp+0x2C],si
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x2C]
	push ecx
	call ebx

 Block16:
	mov esi,dword ptr [edi+0x78]
	cmp esi,ebp
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov eax,dword ptr [edi+0x28]
	mov ecx,dword ptr [edi+0x24]
	mov edx,dword ptr [esi]
	push 0xFFFFFF
	push eax
	mov eax,dword ptr [edx+0x8C]
	push ecx
	push ebp
	push ebp
	push esi
	call eax
	cmp eax,ebp
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x70]
	push ecx
	call esi
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	lea eax,[esp+0x50]
	push eax
	mov byte ptr [esp+0xF0],4
	call esi
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	push ebp
	push ebp
	lea edx,[esp+0x78]
	push edx
	lea eax,[esp+0x5C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x113A
	mov bl,5
	push ecx
	mov byte ptr [esp+0x108],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x100],6
	cmp dword ptr [_D_G_RM],ebp
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[esp+0xD4]
	mov byte ptr [esp+0x100],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xF4],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x50],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block29

 Block27:
	cmp eax,0x80004002
	je Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov esi,8
	mov byte ptr [esp+0xEC],9
	cmp word ptr [esp+0xC0],si
	jne Block36

 Block30:
	xor eax,eax
	mov word ptr [esp+0xC0],ax
	mov eax,dword ptr [esp+0xC8]
	cmp eax,ebp
	je Block32

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block32:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block33:
	mov byte ptr [esp+0xEC],0xA
	cmp word ptr [esp+0x50],si
	jne Block37

 Block34:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	cmp eax,ebp
	je Block38

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block36:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0xC0]
	push ecx
	call edi
	jmp Block33

 Block37:
	lea eax,[esp+0x50]
	push eax
	call edi

 Block38:
	mov byte ptr [esp+0xEC],0xB
	cmp word ptr [esp+0x70],si
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	cmp eax,ebp
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x70]
	push edx
	call edi

 Block42:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x80]
	push eax
	call esi
	lea ecx,[esp+0x80]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	lea edx,[esp+0xA0]
	push edx
	mov byte ptr [esp+0xF0],0xC
	call esi
	lea eax,[esp+0xA0]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	push ebp
	push ebp
	lea ecx,[esp+0x88]
	push ecx
	lea edx,[esp+0xAC]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push 0x113B
	mov bl,0xD
	push eax
	mov byte ptr [esp+0x108],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x100],0xE
	cmp dword ptr [_D_G_RM],ebp
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea ecx,[esp+0xE4]
	push ecx
	mov byte ptr [esp+0x104],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xF4],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x4C],ebp
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
	mov ebx,8
	mov byte ptr [esp+0xEC],0x11
	cmp word ptr [esp+0xD0],bx
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0xD8]
	xor edx,edx
	mov word ptr [esp+0xD0],dx
	cmp eax,ebp
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea eax,[esp+0xD0]
	push eax
	call edi

 Block55:
	mov byte ptr [esp+0xEC],0x12
	cmp word ptr [esp+0xA0],bx
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0xA8]
	xor ecx,ecx
	mov word ptr [esp+0xA0],cx
	cmp eax,ebp
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[esp+0xA0]
	push edx
	call edi

 Block59:
	mov byte ptr [esp+0xEC],0x13
	cmp word ptr [esp+0x80],bx
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	cmp eax,ebp
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[esp+0x80]
	push ecx
	call edi

 Block63:
	lea edx,[esp+0x90]
	push edx
	call esi
	lea eax,[esp+0x90]
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
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0xF0],0x14
	call esi
	lea edx,[esp+0x60]
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
	push ebp
	push ebp
	lea eax,[esp+0x98]
	push eax
	lea ecx,[esp+0x6C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x113C
	mov bl,0x15
	push edx
	mov byte ptr [esp+0x108],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x100],0x16
	cmp dword ptr [_D_G_RM],ebp
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea eax,[esp+0xC4]
	mov byte ptr [esp+0x100],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xF4],0x17
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x48],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block72

 Block70:
	cmp eax,0x80004002
	je Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	mov esi,8
	mov byte ptr [esp+0xEC],0x19
	cmp word ptr [esp+0xB0],si
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0xB8]
	xor ecx,ecx
	mov word ptr [esp+0xB0],cx
	cmp eax,ebp
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea edx,[esp+0xB0]
	push edx
	call edi

 Block76:
	mov byte ptr [esp+0xEC],0x1A
	cmp word ptr [esp+0x60],si
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	cmp eax,ebp
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea ecx,[esp+0x60]
	push ecx
	call edi

 Block80:
	mov byte ptr [esp+0xEC],0x1B
	cmp word ptr [esp+0x90],si
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0x98]
	xor edx,edx
	mov word ptr [esp+0x90],dx
	cmp eax,ebp
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea eax,[esp+0x90]
	push eax
	call edi

 Block84:
	mov dword ptr [esp+0x24],ebp
	mov dword ptr [esp+0x40],ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0xF16
	push ecx
	mov byte ptr [esp+0x100],0x1D
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x58]
	mov byte ptr [esp+0xF8],0x1E
	cmp edi,ebp
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	lea edx,[esp+0x20]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xFC],0x1D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xF4],0x1F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x28]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block89

 Block87:
	cmp eax,0x80004002
	je Block89

 Block88:
	push eax
	call _com_issue_error

 Block89:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xEC],0x1D
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	mov ebx,dword ptr [esp+0x3C]
	mov esi,dword ptr [ebx+0x78]
	mov byte ptr [esp+0xEC],0x20
	cmp esi,ebp
	jne Block97

 Block96:
	push 0x80004003
	call _com_issue_error

 Block97:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x34]
	push eax
	push ebp
	push ebp
	push esi
	call ecx
	cmp eax,ebp
	jge Block99

 Block98:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block99:
	mov esi,8
	mov byte ptr [esp+0xEC],0x1D
	cmp word ptr [esp+0x2C],si
	jne Block102

 Block100:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebp
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block103:
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0xF17
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x20]
	mov byte ptr [esp+0xF8],0x21
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xFC],0x1D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xF4],0x22
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x28]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block106

 Block104:
	cmp eax,0x80004002
	je Block106

 Block105:
	push eax
	call _com_issue_error

 Block106:
	mov byte ptr [esp+0xEC],0x1D
	cmp word ptr [esp+0x14],si
	jne Block109

 Block107:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block110:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block112

 Block111:
	push eax
	call _com_issue_error

 Block112:
	mov esi,dword ptr [ebx+0x78]
	mov byte ptr [esp+0xEC],0x23
	cmp esi,ebp
	jne Block114

 Block113:
	push 0x80004003
	call _com_issue_error

 Block114:
	mov edi,dword ptr [esp+0x2C]
	mov ecx,dword ptr [ebx+0x24]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x40]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x44]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [esp+0x34]
	push eax
	sub ecx,6
	push ebp
	push ecx
	mov ecx,dword ptr [edx+0x80]
	push esi
	call ecx
	cmp eax,ebp
	jge Block116

 Block115:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block116:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xEC],0x1D
	jne Block119

 Block117:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebp
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block120:
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0xF16
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x50]
	mov byte ptr [esp+0xF8],0x24
	cmp edi,ebp
	jne Block122

 Block121:
	push 0x80004003
	call _com_issue_error

 Block122:
	lea edx,[esp+0x20]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xFC],0x1D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xF4],0x25
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x28]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block125

 Block123:
	cmp eax,0x80004002
	je Block125

 Block124:
	push eax
	call _com_issue_error

 Block125:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xEC],0x1D
	jne Block128

 Block126:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block129:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block131

 Block130:
	push eax
	call _com_issue_error

 Block131:
	mov esi,dword ptr [ebx+0x78]
	mov byte ptr [esp+0xEC],0x26
	cmp esi,ebp
	jne Block133

 Block132:
	push 0x80004003
	call _com_issue_error

 Block133:
	mov ecx,dword ptr [ebx+0x28]
	mov ebx,dword ptr [esp+0x2C]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [esp+0x34]
	push eax
	sub ecx,6
	push ecx
	mov ecx,dword ptr [edx+0x80]
	push ebp
	push esi
	call ecx
	cmp eax,ebp
	jge Block135

 Block134:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block135:
	mov esi,8
	mov byte ptr [esp+0xEC],0x1D
	cmp word ptr [esp+0x2C],si
	jne Block138

 Block136:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebp
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block138:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block139:
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0xF17
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x20]
	mov byte ptr [esp+0xF8],0x27
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xFC],0x1D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xF4],0x28
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x28]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block142

 Block140:
	cmp eax,0x80004002
	je Block142

 Block141:
	push eax
	call _com_issue_error

 Block142:
	mov byte ptr [esp+0xEC],0x1D
	cmp word ptr [esp+0x14],si
	jne Block145

 Block143:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block146

 Block144:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block146

 Block145:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block146:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block148

 Block147:
	push eax
	call _com_issue_error

 Block148:
	mov eax,dword ptr [esp+0x3C]
	mov esi,dword ptr [eax+0x78]
	mov byte ptr [esp+0xEC],0x29
	cmp esi,ebp
	jne Block150

 Block149:
	push 0x80004003
	call _com_issue_error

 Block150:
	mov ecx,dword ptr [eax+0x28]
	mov edx,dword ptr [eax+0x24]
	mov ebp,dword ptr [esp+0x2C]
	mov ebx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x40]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x44]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0x34]
	push eax
	sub ecx,6
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	sub edx,6
	push edx
	push esi
	call ecx
	test eax,eax
	jge Block152

 Block151:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block152:
	mov esi,8
	mov byte ptr [esp+0xEC],0x1D
	cmp word ptr [esp+0x2C],si
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
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0x113D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x58]
	lea edx,[esp+0x20]
	mov byte ptr [esp+0xF8],0x2A
	push edx
	mov byte ptr [esp+0xFC],0x1D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xF4],0x2B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x28]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block159

 Block157:
	cmp eax,0x80004002
	je Block159

 Block158:
	push eax
	call _com_issue_error

 Block159:
	mov byte ptr [esp+0xEC],0x1D
	cmp word ptr [esp+0x14],si
	jne Block162

 Block160:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block163:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0x113D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x20]
	mov byte ptr [esp+0xF8],0x2C
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xFC],0x1D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xF4],0x2D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x44]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block166

 Block164:
	cmp eax,0x80004002
	je Block166

 Block165:
	push eax
	call _com_issue_error

 Block166:
	mov byte ptr [esp+0xEC],0x1D
	cmp word ptr [esp+0x14],si
	jne Block169

 Block167:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block170

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block169:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block170:
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [eax+0x24]
	mov ebp,dword ptr [esp+0x24]
	mov edi,6
	sub ecx,edi
	cmp ecx,edi
	jle Block189

 Block171:
	mov bl,0x2F
	mov edi,edi

 Block172:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block173:
	mov ecx,dword ptr [esp+0x3C]
	mov esi,dword ptr [ecx+0x78]
	mov byte ptr [esp+0xEC],0x2E
	test esi,esi
	je Block7

 Block174:
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x44]
	push ebp
	push 0
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x50]
	push edi
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block176

 Block175:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block176:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xEC],0x1D
	jne Block179

 Block177:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block180

 Block178:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block180

 Block179:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block180:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block181:
	mov eax,dword ptr [esp+0x3C]
	mov esi,dword ptr [eax+0x78]
	mov byte ptr [esp+0xEC],bl
	test esi,esi
	je Block7

 Block182:
	mov ecx,dword ptr [eax+0x28]
	mov ebp,dword ptr [esp+0x14]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x28]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x30]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0x50]
	push eax
	sub ecx,6
	push ecx
	mov ecx,dword ptr [edx+0x80]
	push edi
	push esi
	call ecx
	test eax,eax
	jge Block184

 Block183:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block184:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xEC],0x1D
	jne Block187

 Block185:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block188

 Block186:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block188

 Block187:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block188:
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [ecx+0x24]
	mov ebp,dword ptr [esp+0x24]
	inc edi
	sub edx,6
	cmp edi,edx
	jl Block172

 Block189:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0xF16
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0xF8],0x30
	test ecx,ecx
	jne Block191

 Block190:
	push 0x80004003
	call _com_issue_error

 Block191:
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0xFC],0x1D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xF4],0x31
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block197

 Block192:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x28]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x28]
	mov edi,ecx
	test ebp,ebp
	je Block194

 Block193:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block194:
	mov ebp,edi
	mov dword ptr [esp+0x24],ebp
	test esi,esi
	jge Block200

 Block195:
	cmp esi,0x80004002
	je Block200

 Block196:
	push esi
	call _com_issue_error

 Block197:
	test ebp,ebp
	je Block200

 Block198:
	mov eax,ebp
	xor ebp,ebp
	mov dword ptr [esp+0x24],ebp
	test eax,eax
	je Block200

 Block199:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block200:
	mov ebx,8
	mov byte ptr [esp+0xEC],0x1D
	cmp word ptr [esp+0x14],bx
	jne Block203

 Block201:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block204

 Block202:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block204

 Block203:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block204:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0xF17
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x54]
	lea eax,[esp+0x20]
	mov byte ptr [esp+0xF8],0x32
	push eax
	mov byte ptr [esp+0xFC],0x1D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xF4],0x33
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block210

 Block205:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x28]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [esp+0x40]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x28]
	mov edi,ecx
	test eax,eax
	je Block207

 Block206:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block207:
	mov dword ptr [esp+0x40],edi
	test esi,esi
	jge Block212

 Block208:
	cmp esi,0x80004002
	je Block212

 Block209:
	push esi
	call _com_issue_error

 Block210:
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block212

 Block211:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [esp+0x44],0
	call edx

 Block212:
	mov byte ptr [esp+0xEC],0x1D
	cmp word ptr [esp+0x14],bx
	jne Block215

 Block213:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block216

 Block214:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block216

 Block215:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block216:
	mov edx,dword ptr [esp+0x3C]
	mov eax,dword ptr [edx+0x28]
	mov edi,6
	sub eax,edi
	cmp eax,edi
	jle Block236

 Block217:
	mov bl,0x35
	nop

 Block218:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block219:
	mov eax,dword ptr [esp+0x3C]
	mov esi,dword ptr [eax+0x78]
	mov byte ptr [esp+0xEC],0x34
	test esi,esi
	je Block7

 Block220:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	push ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x34]
	push edi
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push esi
	call eax
	test eax,eax
	jge Block222

 Block221:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block222:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xEC],0x1D
	jne Block225

 Block223:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block226

 Block224:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block226

 Block225:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block226:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block227:
	mov eax,dword ptr [esp+0x3C]
	mov esi,dword ptr [eax+0x78]
	mov byte ptr [esp+0xEC],bl
	test esi,esi
	je Block7

 Block228:
	mov ecx,dword ptr [eax+0x24]
	mov ebp,dword ptr [esp+0x2C]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x40]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x44]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0x50]
	push eax
	sub ecx,6
	push edi
	push ecx
	mov ecx,dword ptr [edx+0x80]
	push esi
	call ecx
	test eax,eax
	jge Block230

 Block229:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block230:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xEC],0x1D
	jne Block233

 Block231:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block234

 Block232:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block234

 Block233:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block234:
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [ecx+0x28]
	mov ebp,dword ptr [esp+0x24]
	inc edi
	sub edx,6
	cmp edi,edx
	jl Block218

 Block235:
	mov ebx,8

 Block236:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0x113D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [esp+0x58]
	mov byte ptr [esp+0xFC],0x36
	mov byte ptr [esp+0xFC],0x1D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xF4],0x37
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block242

 Block237:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x28]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov esi,eax
	xor eax,eax
	test esi,esi
	setl al
	dec eax
	and eax,dword ptr [esp+0x28]
	mov edi,eax
	test ebp,ebp
	je Block239

 Block238:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block239:
	mov ebp,edi
	mov dword ptr [esp+0x24],ebp
	test esi,esi
	jge Block245

 Block240:
	cmp esi,0x80004002
	je Block245

 Block241:
	push esi
	call _com_issue_error

 Block242:
	test ebp,ebp
	je Block245

 Block243:
	mov eax,ebp
	xor ebp,ebp
	mov dword ptr [esp+0x24],ebp
	test eax,eax
	je Block245

 Block244:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block245:
	mov byte ptr [esp+0xEC],0x1D
	cmp word ptr [esp+0x14],bx
	jne Block248

 Block246:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block249

 Block247:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block249

 Block248:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block249:
	mov eax,dword ptr [esp+0x3C]
	mov edx,dword ptr [eax+0x24]
	mov ebx,6
	sub edx,ebx
	cmp edx,ebx
	jle Block262

 Block250:
	lea ecx,[ecx]

 Block251:
	mov ecx,dword ptr [eax+0x28]
	mov edi,6
	sub ecx,edi
	cmp ecx,edi
	jle Block261

 Block252:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block253:
	mov eax,dword ptr [esp+0x3C]
	mov esi,dword ptr [eax+0x78]
	add eax,0x78
	mov byte ptr [esp+0xEC],0x38
	test esi,esi
	je Block7

 Block254:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	push ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x34]
	push edi
	push ebx
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push esi
	call eax
	test eax,eax
	jge Block256

 Block255:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block256:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xEC],0x1D
	jne Block259

 Block257:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block260

 Block258:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block260

 Block259:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block260:
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [eax+0x28]
	inc edi
	sub ecx,6
	cmp edi,ecx
	jl Block252

 Block261:
	mov edx,dword ptr [eax+0x24]
	inc ebx
	sub edx,6
	cmp ebx,edx
	jl Block251

 Block262:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xEC],0x1C
	test eax,eax
	je Block264

 Block263:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block264:
	mov byte ptr [esp+0xEC],0x1B
	test ebp,ebp
	je Block266

 Block265:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block266:
	mov eax,dword ptr [esp+0x44]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0xF0],0x13
	call eax
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xF0],0xB
	call edx
	mov eax,dword ptr [esp+0x4C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xF0],0
	call edx
	mov ecx,dword ptr [esp+0xE4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xDC
	ret
}
}
// CUIEventAlarm::SetEventAlarm
_SUB_EXCEPTION_HANDLER(3AAC30)
__SUB_CLASS_THIS(003AAC30, __thiscall, 87328,  CUIEventAlarm, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3AAC30
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
	xor ebx,ebx
	push 0x14
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [edi+0xA0],ebx
	mov dword ptr [edi+0xAC],0xFFFFFFFF
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebx
	je Block2

 Block1:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CTextAnalyzer::`vftable'
	mov dword ptr [eax+0x10],0xC8
	mov dword ptr [eax+0xC],ebx
	mov esi,eax
	jmp Block3

 Block2:
	xor esi,esi

 Block3:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x1C],esi
	cmp esi,ebx
	je Block5

 Block4:
	lea eax,[esi+4]
	push eax
	call ebp

 Block5:
	push ebx
	push ebx
	push ebx
	lea ecx,[edi+0x94]
	push ecx
	lea edx,[edi+0xD8]
	push edx
	push ecx
	mov ecx,esp
	lea eax,[esp+0x48]
	mov dword ptr [esp+0x2C],esp
	push eax
	mov byte ptr [esp+0x44],1
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,esi
	call CTextAnalyzer::AnalyzeText
	mov dword ptr [edi+0xA0],eax
	mov byte ptr [esp+0x28],bl
	cmp esi,ebx
	je Block8

 Block6:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block7:
	push edi
	call ebp
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block8:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
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
	pop ebx
	add esp,0x18
	ret 4
}
}
// CUIEventAlarm::Draw
_SUB_EXCEPTION_HANDLER(3AAD90)
__SUB_CLASS_THIS(003AAD90, __thiscall, 87330,  CUIEventAlarm, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3AAD90
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
	mov eax,dword ptr [esp+0x6C]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	xor ebx,ebx
	mov edx,3
	mov dword ptr [esp+0x64],ebx
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],1
	mov esi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],1
	cmp esi,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [edi+0xA0]
	mov edx,dword ptr [edi+0x9C]
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [edi+0x98]
	sub ecx,2
	push ecx
	push 0xC6
	inc edx
	push edx
	inc eax
	push eax
	lea ecx,[esp+0x60]
	push ecx
	mov ecx,esi
	call IWzCanvas::SetClipRect
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x64],3
	jne Block5

 Block3:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,ebx
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block6:
	mov ebp,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esp+0x6C],ebx
	jmp Block8

 Block8:
	mov eax,dword ptr [edi+0xD8]
	test eax,eax
	je Block22

 Block9:
	mov ecx,dword ptr [esp+0x6C]
	cmp ecx,dword ptr [eax-4]
	jae Block22

 Block10:
	lea edx,[esp+0x3C]
	mov esi,eax
	push edx
	add esi,ebx
	call ebp
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block11:
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0x68],4
	call ebp
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block12:
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [esi+0xC]
	lea ecx,[esp+0x30]
	push ecx
	push eax
	mov eax,dword ptr [esi+0x10]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x78],5
	call _xbstr_t::_ctor_0
	mov edx,dword ptr [esi+0x1C]
	add edx,dword ptr [edi+0x9C]
	mov eax,dword ptr [esi+0x18]
	add eax,dword ptr [edi+0x98]
	mov ecx,dword ptr [esp+0x24]
	push edx
	mov byte ptr [esp+0x78],6
	push eax
	mov byte ptr [esp+0x7C],5
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x64],4
	cmp word ptr [esp+0x2C],si
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov byte ptr [esp+0x64],3
	cmp word ptr [esp+0x3C],si
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [esp+0x6C]
	mov esi,dword ptr [esp+0x14]
	add ebx,0x44
	jmp Block8

 Block19:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	inc dword ptr [esp+0x6C]
	mov esi,dword ptr [esp+0x14]
	add ebx,0x44
	jmp Block8

 Block21:
	push eax
	call _com_issue_error

 Block22:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x64],0
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0x68],0xFFFFFFFF
	call edx
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
// CUIEventAlarm::CUIEventAlarm
_SUB_EXCEPTION_HANDLER(3AC690)
__SUB_CLASS_THIS0(003AC690, __thiscall, 87325,  CUIEventAlarm, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3AC690
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
	mov ebx,ecx
	mov dword ptr [esp+0x18],ebx
	call CDialog::_ctor_default
	xor ebp,ebp
	lea eax,[ebx+0x91]
	mov dword ptr [esp+0x3C],ebp
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFF6F
	mov dword ptr [TSingleton<CUIEventAlarm>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIEventAlarm>::ms_pInstance],ebp

 Block3:
	lea edi,[ebx+0x94]
	int 3// TODO: 	mov dword ptr [ebx],offset CUIEventAlarm::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [ebx+4],offset CUIEventAlarm::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [ebx+8],offset CUIEventAlarm::`vftable'{for `ZRefCounted'}
	mov dword ptr [edi],ebp
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 5
	push 8
	lea eax,[ebx+0xB0]
	push eax
	mov byte ptr [esp+0x50],2
	call __eh_vector_ctor_iterator
	mov dword ptr [ebx+0xD8],ebp
	lea ecx,[esp+0x17]
	push ecx
	push 0xC
	mov ecx,edi
	mov byte ptr [esp+0x44],4
	call ZArray<_x_com_ptr<IWzFont>>::_Alloc
	xor esi,esi
	lea ebx,[ebx]

 Block4:
	lea edx,[esp+0x1C]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [eax]
	push ebp
	add ecx,esi
	push ecx
	push eax
	mov byte ptr [esp+0x48],5
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x3C],4
	cmp eax,ebp
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	add esi,4
	cmp esi,0x30
	jl Block4

 Block7:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	lea ecx,[esp+0x24]
	push ecx
	push 0xFF000000
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1A25
	push edx
	mov byte ptr [esp+0x54],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x4C],7
	cmp ecx,ebp
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov byte ptr [esp+0x4C],6
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],4
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	lea edx,[esp+0x1C]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x3C],8
	cmp eax,ebp
	je Block17

 Block16:
	mov ebp,dword ptr [eax]
	jmp Block18

 Block17:
	xor ebp,ebp

 Block18:
	mov eax,8
	mov word ptr [esp+0x24],ax
	test ebp,ebp
	jne Block20

 Block19:
	xor esi,esi
	jmp Block24

 Block20:
	mov eax,ebp
	lea edx,[eax+2]

 Block21:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block21

 Block22:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea ecx,[edi+edi+6]
	push ecx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block24

 Block23:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block24:
	mov dword ptr [esp+0x2C],esi
	test esi,esi
	jne Block27

 Block25:
	test ebp,ebp
	je Block27

 Block26:
	push 0x8007000E
	call _com_issue_error

 Block27:
	lea edx,[esp+0x24]
	push edx
	push 0xFF000000
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x1A25
	push eax
	mov byte ptr [esp+0x54],9
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [ebx+0x94]
	lea edi,[ebx+0x94]
	add eax,4
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0xA
	test eax,eax
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov ecx,eax
	mov byte ptr [esp+0x4C],9
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],8
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x3C],4
	test eax,eax
	je Block41

 Block34:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block41

 Block35:
	test esi,esi
	je Block41

 Block36:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block38

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block38:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block40

 Block39:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block40:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block41:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	lea edx,[esp+0x24]
	push edx
	push 0xFFFF0000
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x1A25
	mov bl,0xB
	push eax
	mov byte ptr [esp+0x54],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,8
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0xC
	test eax,eax
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],4
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	lea eax,[esp+0x1C]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x3C],0xD
	test eax,eax
	je Block51

 Block50:
	mov ebp,dword ptr [eax]
	jmp Block52

 Block51:
	xor ebp,ebp

 Block52:
	mov ecx,8
	mov word ptr [esp+0x24],cx
	test ebp,ebp
	jne Block54

 Block53:
	xor esi,esi
	jmp Block58

 Block54:
	mov eax,ebp
	lea edx,[eax+2]

 Block55:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block55

 Block56:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea edx,[edi+edi+6]
	push edx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block58

 Block57:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block58:
	mov dword ptr [esp+0x2C],esi
	test esi,esi
	jne Block61

 Block59:
	test ebp,ebp
	je Block61

 Block60:
	push 0x8007000E
	call _com_issue_error

 Block61:
	lea eax,[esp+0x24]
	push eax
	push 0xFFFF0000
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0x1A25
	mov bl,0xE
	push ecx
	mov byte ptr [esp+0x54],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x28]
	mov eax,dword ptr [edi+0x94]
	add edi,0x94
	add eax,0xC
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0xF
	test eax,eax
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call IWzFont::Create
	mov ebp,8
	mov byte ptr [esp+0x3C],0xD
	cmp word ptr [esp+0x24],bp
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov esi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x3C],4
	test esi,esi
	je Block75

 Block68:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block75

 Block69:
	test esi,esi
	je Block75

 Block70:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block72

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block72:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block74

 Block73:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block74:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block75:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	lea ecx,[esp+0x24]
	push ecx
	push 0xFF00FF00
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0x1A25
	mov ebx,0x10
	push edx
	mov byte ptr [esp+0x54],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,ebx
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0x11
	test eax,eax
	jne Block79

 Block78:
	push 0x80004003
	call _com_issue_error

 Block79:
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call IWzFont::Create
	mov byte ptr [esp+0x3C],4
	cmp word ptr [esp+0x24],bp
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	lea edx,[esp+0x1C]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x3C],0x12
	test eax,eax
	je Block85

 Block84:
	mov ebp,dword ptr [eax]
	jmp Block86

 Block85:
	xor ebp,ebp

 Block86:
	mov eax,8
	mov word ptr [esp+0x24],ax
	test ebp,ebp
	jne Block88

 Block87:
	xor esi,esi
	jmp Block92

 Block88:
	mov eax,ebp
	lea edx,[eax+2]
	lea esp,[esp]

 Block89:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block89

 Block90:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea ecx,[edi+edi+6]
	push ecx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block92

 Block91:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block92:
	mov dword ptr [esp+0x2C],esi
	test esi,esi
	jne Block95

 Block93:
	test ebp,ebp
	je Block95

 Block94:
	push 0x8007000E
	call _com_issue_error

 Block95:
	lea edx,[esp+0x24]
	push edx
	push 0xFF00FF00
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x1A25
	mov bl,0x13
	push eax
	mov byte ptr [esp+0x54],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x28]
	mov eax,dword ptr [edi+0x94]
	add edi,0x94
	add eax,0x14
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0x14
	test eax,eax
	jne Block97

 Block96:
	push 0x80004003
	call _com_issue_error

 Block97:
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],0x12
	jne Block100

 Block98:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block101:
	mov esi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x3C],4
	test esi,esi
	je Block109

 Block102:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block109

 Block103:
	test esi,esi
	je Block109

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
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block111

 Block110:
	push eax
	call _com_issue_error

 Block111:
	lea eax,[esp+0x24]
	push eax
	push 0xFF0000FF
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0x1A25
	mov bl,0x15
	push ecx
	mov byte ptr [esp+0x54],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,0x18
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0x16
	test eax,eax
	jne Block113

 Block112:
	push 0x80004003
	call _com_issue_error

 Block113:
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],4
	jne Block116

 Block114:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block117:
	lea ecx,[esp+0x1C]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov bl,0x17
	mov byte ptr [esp+0x3C],bl
	test eax,eax
	je Block119

 Block118:
	mov ebp,dword ptr [eax]
	jmp Block120

 Block119:
	xor ebp,ebp

 Block120:
	mov edx,8
	mov word ptr [esp+0x24],dx
	test ebp,ebp
	jne Block122

 Block121:
	xor esi,esi
	jmp Block126

 Block122:
	mov eax,ebp
	lea edx,[eax+2]

 Block123:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block123

 Block124:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea eax,[edi+edi+6]
	push eax
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block126

 Block125:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block126:
	mov dword ptr [esp+0x2C],esi
	test esi,esi
	jne Block129

 Block127:
	test ebp,ebp
	je Block129

 Block128:
	push 0x8007000E
	call _com_issue_error

 Block129:
	lea ecx,[esp+0x24]
	push ecx
	push 0xFF0000FF
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0x1A25
	push edx
	mov byte ptr [esp+0x54],0x18
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x28]
	mov eax,dword ptr [edi+0x94]
	add edi,0x94
	add eax,0x1C
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0x19
	test eax,eax
	jne Block131

 Block130:
	push 0x80004003
	call _com_issue_error

 Block131:
	mov ecx,eax
	mov byte ptr [esp+0x4C],0x18
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],bl
	jne Block134

 Block132:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block135:
	mov esi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x3C],4
	test esi,esi
	je Block143

 Block136:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block143

 Block137:
	test esi,esi
	je Block143

 Block138:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block140

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block140:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block142

 Block141:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block142:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block143:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block145

 Block144:
	push eax
	call _com_issue_error

 Block145:
	lea edx,[esp+0x24]
	push edx
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x1A25
	mov bl,0x1A
	push eax
	mov byte ptr [esp+0x54],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,0x20
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0x1B
	test eax,eax
	jne Block147

 Block146:
	push 0x80004003
	call _com_issue_error

 Block147:
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],4
	jne Block150

 Block148:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block151:
	lea eax,[esp+0x1C]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x3C],0x1C
	test eax,eax
	je Block153

 Block152:
	mov ebp,dword ptr [eax]
	jmp Block154

 Block153:
	xor ebp,ebp

 Block154:
	mov ecx,8
	mov word ptr [esp+0x24],cx
	test ebp,ebp
	jne Block156

 Block155:
	xor esi,esi
	jmp Block160

 Block156:
	mov eax,ebp
	lea edx,[eax+2]

 Block157:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block157

 Block158:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea edx,[edi+edi+6]
	push edx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block160

 Block159:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block160:
	mov dword ptr [esp+0x2C],esi
	test esi,esi
	jne Block163

 Block161:
	test ebp,ebp
	je Block163

 Block162:
	push 0x8007000E
	call _com_issue_error

 Block163:
	lea eax,[esp+0x24]
	push eax
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0x1A25
	mov bl,0x1D
	push ecx
	mov byte ptr [esp+0x54],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [esp+0x28]
	add eax,0x94
	mov eax,dword ptr [eax]
	add eax,0x24
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0x1E
	test eax,eax
	jne Block165

 Block164:
	push 0x80004003
	call _com_issue_error

 Block165:
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],0x1C
	jne Block168

 Block166:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block169

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block169

 Block168:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block169:
	mov esi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x3C],4
	test esi,esi
	je Block177

 Block170:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block177

 Block171:
	test esi,esi
	je Block177

 Block172:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block174

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block174:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block176

 Block175:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block176:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block177:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block179

 Block178:
	push eax
	call _com_issue_error

 Block179:
	lea ecx,[esp+0x24]
	push ecx
	push 0xFF51378C
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0x1A25
	mov bl,0x1F
	push edx
	mov byte ptr [esp+0x54],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [esp+0x28]
	add eax,0x94
	mov eax,dword ptr [eax]
	add eax,0x28
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0x20
	test eax,eax
	jne Block181

 Block180:
	push 0x80004003
	call _com_issue_error

 Block181:
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],4
	jne Block184

 Block182:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block185

 Block183:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block185

 Block184:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block185:
	lea edx,[esp+0x1C]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x3C],0x21
	test eax,eax
	je Block187

 Block186:
	mov ebp,dword ptr [eax]
	jmp Block188

 Block187:
	xor ebp,ebp

 Block188:
	mov eax,8
	mov word ptr [esp+0x24],ax
	test ebp,ebp
	jne Block190

 Block189:
	xor esi,esi
	jmp Block194

 Block190:
	mov eax,ebp
	lea edx,[eax+2]

 Block191:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block191

 Block192:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea ecx,[edi+edi+6]
	push ecx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block194

 Block193:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block194:
	mov dword ptr [esp+0x2C],esi
	test esi,esi
	jne Block197

 Block195:
	test ebp,ebp
	je Block197

 Block196:
	push 0x8007000E
	call _com_issue_error

 Block197:
	lea edx,[esp+0x24]
	push edx
	push 0xFF51378C
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x1A25
	mov bl,0x22
	push eax
	mov byte ptr [esp+0x54],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x28]
	mov eax,dword ptr [edi+0x94]
	add eax,0x2C
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0x23
	test eax,eax
	jne Block199

 Block198:
	push 0x80004003
	call _com_issue_error

 Block199:
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],0x21
	jne Block202

 Block200:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block203

 Block201:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block203

 Block202:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block203:
	mov esi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x3C],4
	test esi,esi
	je Block211

 Block204:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block211

 Block205:
	test esi,esi
	je Block211

 Block206:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block208

 Block207:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block208:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block210

 Block209:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block210:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block211:
	mov eax,edi
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
// CUIEventAlarm::~CUIEventAlarm
_SUB_EXCEPTION_HANDLER(3AD430)
__SUB_CLASS_THIS0(003AD430, __thiscall, 87327,  CUIEventAlarm, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3AD430
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIEventAlarm::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIEventAlarm::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIEventAlarm::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xD8]
	mov dword ptr [esp+0x14],3
	call ZArray<CT_INFO>::RemoveAll
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 5
	push 8
	lea eax,[esi+0xB0]
	push eax
	mov byte ptr [esp+0x24],2
	call __eh_vector_dtor_iterator
	lea ecx,[esi+0x94]
	mov byte ptr [esp+0x14],1
	call ZArray<_x_com_ptr<IWzFont>>::RemoveAll
	mov ecx,esi
	mov dword ptr [TSingleton<CUIEventAlarm>::ms_pInstance],0
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
// CUIEventAlarm::OnCreate
_SUB_EXCEPTION_HANDLER(3AC4F0)
__SUB_CLASS_THIS(003AC4F0, __thiscall, 87329,  CUIEventAlarm, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3AC4F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	call CUIEventAlarm::SetBackground
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	lea eax,[esp+0x14]
	push 0x8FF
	push eax
	mov dword ptr [esp+0x3C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edi,eax
	lea ecx,[esp+0x10]
	push 0x1139
	push ecx
	mov byte ptr [esp+0x3C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edi,dword ptr [edi]
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x30]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x40],2
	call CUIEventAlarm::MakeUOLByUIType
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x34],1
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],3
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block16

 Block8:
	add eax,8
	cmp eax,ebx
	je Block16

 Block9:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block11

 Block10:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov eax,dword ptr [esi+0xB4]
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block13

 Block12:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block13:
	mov ecx,dword ptr [esi+0xB4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [esi+0x24]
	push ebx
	push 0xA
	sub eax,0x16
	push eax
	push 2
	push esi
	call edx
	call timeGetTime
	add eax,0x1F40
	mov dword ptr [esi+0xDC],eax
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block15:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x28
	ret 4

 Block16:
	xor edi,edi
	jmp Block11
}
}
