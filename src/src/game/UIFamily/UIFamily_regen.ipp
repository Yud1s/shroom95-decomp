#include "regen.hpp"
// UIFamily.ipp
#include "UIFamily.hpp"

// CUIFamilyChart::_DrawChartItem
_SUB_EXCEPTION_HANDLER(3B5EF0)
__SUB_CLASS_THIS(003B5EF0, __thiscall, 45575,  CUIFamilyChart, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B5EF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x70
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x84]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x24],ebx
	mov esi,dword ptr [esp+0x94]
	xor ebp,ebp
	mov dword ptr [esp+0x18],ebp
	mov edi,dword ptr [ebx+esi*8+0xB0C]
	mov dword ptr [esp+0x40],edi
	cmp edi,ebp
	je Block2

 Block1:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov eax,dword ptr [esi*8+_D_APTNODE_+4]
	mov ecx,dword ptr [esi*8+_D_APTNODE_]
	mov dword ptr [esp+0x8C],ebp
	mov dword ptr [esp+0x34],ecx
	mov dword ptr [esp+0x38],eax
	mov dword ptr [esp+0x14],eax
	cmp esi,ebp
	jne Block4

 Block3:
	inc eax
	mov dword ptr [esp+0x14],eax

 Block4:
	lea edx,[esp+0x28]
	push edx
	mov ecx,ebx
	call CWnd::GetCanvas
	cmp edi,ebp
	mov edi,dword ptr [esp+0x28]
	mov byte ptr [esp+0x8C],1
	jne Block14

 Block5:
	cmp esi,3
	je Block71

 Block6:
	mov eax,dword ptr [esp+0x94]
	cmp eax,5
	je Block9

 Block7:
	cmp eax,6
	je Block9

 Block8:
	push 1
	lea eax,[esp+0x24]
	push 0x11FD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x38]
	push eax
	push 0x85
	add ecx,0xB
	push ecx
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	mov byte ptr [esp+0xA4],3
	push 0x11
	jmp Block10

 Block9:
	push 1
	lea eax,[esp+0x24]
	push 0x1201
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x38]
	push eax
	push 0x85
	add ecx,0xB
	push ecx
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	mov byte ptr [esp+0xA4],2
	push 0x10

 Block10:
	push eax
	call get_basic_font
	add esp,4
	mov eax,esp
	mov dword ptr [eax],edi
	mov dword ptr [esp+0x4C],esp
	test edi,edi
	je Block12

 Block11:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block12:
	call _anon_DrawTextAlign_
	mov eax,dword ptr [esp+0x3C]
	add esp,0x1C
	mov byte ptr [esp+0x8C],1
	test eax,eax
	je Block71

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block71

 Block14:
	cmp esi,3
	je Block55

 Block15:
	xor esi,esi
	mov dword ptr [esp+0x20],esi
	mov byte ptr [esp+0x8C],4
	cmp dword ptr [esp+0x94],esi
	jne Block17

 Block16:
	lea eax,[esp+0x30]
	push 0x11F4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x8C],5
	lea ebx,[esi+1]
	jmp Block18

 Block17:
	lea ecx,[esp+0x2C]
	push 0x11F5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x8C],6
	mov ebx,2

 Block18:
	mov ecx,dword ptr [esp+0x40]
	mov eax,dword ptr [eax]
	xor edx,edx
	cmp dword ptr [ecx+0x14],esi
	mov dword ptr [esp+0x18],ebx
	setne dl
	push edx
	push eax
	lea edx,[esp+0x28]
	push edx
	call ZXString16::Format
	add esp,0xC
	mov dword ptr [esp+0x8C],5
	test bl,2
	je Block21

 Block19:
	mov eax,dword ptr [esp+0x2C]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x18],ebx
	cmp eax,esi
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block21:
	mov dword ptr [esp+0x8C],4
	test bl,1
	je Block24

 Block22:
	mov eax,dword ptr [esp+0x30]
	cmp eax,esi
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block24:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x54]
	push eax
	call ebx
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0x90],7
	call ebx
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov ebp,dword ptr [esp+0x20]
	push esi
	push esi
	lea ecx,[esp+0x5C]
	push ecx
	lea edx,[esp+0x50]
	push edx
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0xA4],8
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xA0],9
	cmp dword ptr [_D_G_RM],esi
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea eax,[esp+0x88]
	mov byte ptr [esp+0xA0],8
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x94],0xA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block33

 Block31:
	cmp eax,0x80004002
	je Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	mov esi,8
	mov byte ptr [esp+0x8C],0xC
	cmp word ptr [esp+0x74],si
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x7C]
	xor ecx,ecx
	mov word ptr [esp+0x74],cx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea edx,[esp+0x74]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov byte ptr [esp+0x8C],0xD
	cmp word ptr [esp+0x44],si
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov bl,0xE
	mov byte ptr [esp+0x8C],bl
	cmp word ptr [esp+0x54],si
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov ecx,3
	mov word ptr [esp+0x64],cx
	mov dword ptr [esp+0x6C],0xFF
	mov byte ptr [esp+0x8C],0xF
	test edi,edi
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	mov esi,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x34]
	lea edx,[esp+0x64]
	push edx
	push esi
	push eax
	push ecx
	mov ecx,edi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0x8C],bl
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea eax,[esp+0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov byte ptr [esp+0x8C],4
	test esi,esi
	je Block53

 Block52:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block53:
	mov byte ptr [esp+0x8C],1
	test ebp,ebp
	je Block55

 Block54:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block55:
	mov ecx,dword ptr [esp+0x24]
	cmp dword ptr [ecx+0xB90],0
	je Block60

 Block56:
	mov eax,dword ptr [esp+0x94]
	push eax
	call CUIFamilyChart::_IsChildNode
	test eax,eax
	je Block60

 Block57:
	mov ecx,dword ptr [esp+0x40]
	mov eax,dword ptr [ecx+0x38]
	test eax,eax
	je Block60

 Block58:
	mov cl,byte ptr [ecx+0x12]
	cmp cl,byte ptr [eax+0x12]
	jbe Block60

 Block59:
	mov eax,6
	jmp Block61

 Block60:
	xor eax,eax

 Block61:
	push eax
	lea edx,[esp+0x20]
	push edx
	call get_basic_font
	add esp,8
	mov esi,dword ptr [esp+0x40]
	mov eax,dword ptr [esi+0x30]
	mov ebp,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x1C]
	push 1
	push eax
	push 0x85
	lea eax,[ebp+5]
	push eax
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x34]
	mov bl,0x10
	mov byte ptr [esp+0xA4],bl
	mov dword ptr [esp+0x48],esp
	test eax,eax
	je Block63

 Block62:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block63:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block65

 Block64:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block65:
	call _anon_DrawTextAlign_
	mov dword ptr [esp+0x3C],0
	movsx edx,word ptr [esi+0x10]
	push edx
	mov byte ptr [esp+0xAC],0x11
	call get_job_name
	push eax
	movzx eax,byte ptr [esi+0x12]
	push eax
	lea ecx,[esp+0x48]
	push offset _S_LVDS
	push ecx
	call ZXString<char>::Format
	mov esi,dword ptr [esp+0x50]
	mov edx,dword ptr [esp+0x64]
	add esp,0x30
	push 1
	push esi
	push 0x99
	add ebp,0x14
	push ebp
	add edx,0xFFFFFFF6
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push 0x16
	push eax
	call get_basic_font
	add esp,4
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block67

 Block66:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block67:
	call _anon_DrawTextAlign_
	add esp,0x1C
	mov byte ptr [esp+0x8C],bl
	test esi,esi
	je Block69

 Block68:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block69:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x8C],1
	test eax,eax
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block71:
	mov ecx,dword ptr [esp+0x94]
	mov eax,dword ptr [esp+0x24]
	cmp ecx,dword ptr [eax+0xB94]
	je Block73

 Block72:
	cmp ecx,dword ptr [eax+0xB98]
	jne Block103

 Block73:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x54]
	push eax
	call esi
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	lea edx,[esp+0x64]
	push edx
	mov byte ptr [esp+0x90],0x12
	call esi
	lea eax,[esp+0x64]
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
	push 0
	push 0
	lea ecx,[esp+0x5C]
	push ecx
	lea edx,[esp+0x70]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push 0x11F8
	mov bl,0x13
	push eax
	mov byte ptr [esp+0xA8],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xA0],0x14
	jne Block79

 Block78:
	push 0x80004003
	call _com_issue_error

 Block79:
	lea ecx,[esp+0x88]
	push ecx
	mov byte ptr [esp+0xA4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x94],0x15
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block82

 Block80:
	cmp eax,0x80004002
	je Block82

 Block81:
	push eax
	call _com_issue_error

 Block82:
	mov esi,8
	mov byte ptr [esp+0x8C],0x17
	cmp word ptr [esp+0x74],si
	jne Block89

 Block83:
	mov eax,dword ptr [esp+0x7C]
	xor edx,edx
	mov word ptr [esp+0x74],dx
	test eax,eax
	je Block85

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block85:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block86:
	mov byte ptr [esp+0x8C],0x18
	cmp word ptr [esp+0x64],si
	jne Block90

 Block87:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	test eax,eax
	je Block91

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block89:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x74]
	push eax
	call ebp
	jmp Block86

 Block90:
	lea edx,[esp+0x64]
	push edx
	call ebp

 Block91:
	mov bl,0x19
	mov byte ptr [esp+0x8C],bl
	cmp word ptr [esp+0x54],si
	jne Block94

 Block92:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea ecx,[esp+0x54]
	push ecx
	call ebp

 Block95:
	mov edx,3
	mov word ptr [esp+0x44],dx
	mov dword ptr [esp+0x4C],0xFF
	mov byte ptr [esp+0x8C],0x1A
	test edi,edi
	jne Block97

 Block96:
	push 0x80004003
	call _com_issue_error

 Block97:
	mov esi,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x34]
	lea eax,[esp+0x44]
	push eax
	push esi
	add ecx,0xFFFFFFFD
	push ecx
	add edx,0xFFFFFFFD
	push edx
	mov ecx,edi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x8C],bl
	jne Block100

 Block98:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea ecx,[esp+0x44]
	push ecx
	call ebp

 Block101:
	mov byte ptr [esp+0x8C],1
	test esi,esi
	je Block103

 Block102:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block103:
	mov byte ptr [esp+0x8C],0
	test edi,edi
	je Block105

 Block104:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block105:
	mov edi,dword ptr [esp+0x40]
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	test edi,edi
	je Block108

 Block106:
	lea esi,[edi+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block108

 Block107:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block108:
	mov ecx,dword ptr [esp+0x84]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x7C
	ret 4
}
}
// CUIFamilyChart::_GetOtherToolTip
_SUB_EXCEPTION_HANDLER(3B4610)
__SUB_CLASS_THIS(003B4610, __thiscall, 45578,  CUIFamilyChart, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B4610
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
	mov edi,ecx
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	mov ebp,dword ptr [esp+0x48]
	mov ebx,dword ptr [edi+ebp*8+0xB0C]
	mov dword ptr [esp+0x30],ebx
	cmp ebx,esi
	je Block2

 Block1:
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov dword ptr [esp+0x3C],1
	cmp ebx,esi
	jne Block4

 Block3:
	mov esi,dword ptr [esp+0x44]
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	mov eax,esi
	jmp Block75

 Block4:
	mov dword ptr [esp+0x14],esi
	mov dword ptr [esp+0x48],esi
	lea ecx,[esp+0x20]
	push 0x1236
	push ecx
	mov byte ptr [esp+0x44],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	cmp ebp,4
	mov byte ptr [esp+0x3C],4
	jle Block16

 Block5:
	cmp ebp,6
	jle Block7

 Block6:
	mov eax,dword ptr [ebx+0x24]
	jmp Block8

 Block7:
	mov eax,dword ptr [ebx+0x20]

 Block8:
	push eax
	lea edx,[esp+0x28]
	push edx
	call format_comma_integer
	add esp,8
	mov esi,eax
	lea eax,[esp+0x1C]
	push 0x1232
	mov bl,5
	push eax
	mov byte ptr [esp+0x44],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],6
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x3C],bl
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x3C],4
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block14

 Block13:
	mov eax,dword ptr [ecx-4]
	jmp Block15

 Block14:
	xor eax,eax

 Block15:
	push eax
	push ecx
	lea ecx,[esp+0x50]
	call ZXString<char>::_Cat
	mov ebx,dword ptr [esp+0x30]
	xor esi,esi

 Block16:
	push ebp
	mov ecx,edi
	call CUIFamilyChart::_IsChildNode
	test eax,eax
	je Block21

 Block17:
	mov eax,dword ptr [ebx+0x38]
	cmp eax,esi
	je Block21

 Block18:
	mov al,byte ptr [eax+0x12]
	cmp al,byte ptr [ebx+0x12]
	jae Block21

 Block19:
	lea ecx,[esp+0x24]
	push 0x122D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x40],7
	call ZXString<char>::op_add_assign_other_0
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x3C],4
	cmp eax,esi
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	cmp ebp,4
	jle Block26

 Block22:
	mov ecx,dword ptr [esp+0x20]
	cmp ecx,esi
	je Block24

 Block23:
	mov eax,dword ptr [ecx-4]
	jmp Block25

 Block24:
	xor eax,eax

 Block25:
	push eax
	push ecx
	lea ecx,[esp+0x50]
	call ZXString<char>::_Cat

 Block26:
	cmp dword ptr [ebx+0x14],esi
	je Block54

 Block27:
	lea edx,[esp+0x24]
	push 0x1233
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [ebx+0x2C]
	cdq
	mov edi,0x3C
	idiv edi
	mov byte ptr [esp+0x3C],8
	push edx
	push eax
	push ecx
	lea eax,[esp+0x20]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0x10
	mov byte ptr [esp+0x3C],4
	cmp eax,esi
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,esi
	je Block31

 Block30:
	mov eax,dword ptr [ecx-4]
	jmp Block32

 Block31:
	xor eax,eax

 Block32:
	push eax
	push ecx
	lea ecx,[esp+0x50]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebx+0x28]
	cmp eax,esi
	jge Block34

 Block33:
	lea ecx,[esp+0x28]
	push 0x1A2D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,dword ptr [eax]
	mov edi,dword ptr [esp+0x1C]
	mov ebx,2
	mov byte ptr [esp+0x3C],9
	mov dword ptr [esp+0x18],ebx
	jmp Block39

 Block34:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetChannelName
	xor edi,edi
	mov dword ptr [esp+0x1C],edi
	cmp eax,esi
	je Block38

 Block35:
	mov ecx,eax
	lea esi,[ecx+1]
	lea ebx,[ebx]

 Block36:
	mov dl,byte ptr [ecx]
	inc ecx
	test dl,dl
	jne Block36

 Block37:
	sub ecx,esi
	mov esi,ecx
	push esi
	push eax
	push 0
	push esi
	lea ecx,[esp+0x2C]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x20]
	call ZXString<char>::ReleaseBuffer
	mov edi,dword ptr [esp+0x1C]

 Block38:
	mov dword ptr [esp+0x18],4
	mov ebx,dword ptr [esp+0x18]
	mov dword ptr [esp+0x3C],0xA
	mov esi,edi

 Block39:
	lea edx,[esp+0x24]
	push 0x1234
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov dword ptr [esp+0x48],0xB
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x3C],0xA
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	mov dword ptr [esp+0x3C],9
	test bl,4
	je Block44

 Block42:
	and ebx,0xFFFFFFFB
	mov dword ptr [esp+0x18],ebx
	test edi,edi
	je Block44

 Block43:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block44:
	mov dword ptr [esp+0x3C],4
	test bl,2
	je Block47

 Block45:
	mov eax,dword ptr [esp+0x28]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x18],ebx
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block49

 Block48:
	mov eax,dword ptr [ecx-4]
	jmp Block50

 Block49:
	xor eax,eax

 Block50:
	push eax
	push ecx
	lea ecx,[esp+0x50]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block52

 Block51:
	mov ecx,dword ptr [eax-4]
	jmp Block53

 Block52:
	xor ecx,ecx

 Block53:
	push ecx
	push eax
	lea ecx,[esp+0x50]
	call ZXString<char>::_Cat
	mov ebx,dword ptr [esp+0x30]

 Block54:
	mov ecx,dword ptr [ebx+0x1C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	call format_comma_integer
	mov esi,eax
	mov eax,dword ptr [ebx+0x18]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0x4C],0xC
	call format_comma_integer
	add esp,0x10
	mov edi,eax
	lea edx,[esp+0x28]
	push 0x1235
	mov bl,0xD
	push edx
	mov byte ptr [esp+0x44],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x4C],0xE
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x38]
	add esp,0x10
	mov byte ptr [esp+0x3C],bl
	test eax,eax
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block56:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x3C],0xC
	test eax,eax
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block58:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x3C],4
	test eax,eax
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block60:
	mov esi,dword ptr [esp+0x14]
	test esi,esi
	je Block62

 Block61:
	mov eax,dword ptr [esi-4]
	jmp Block63

 Block62:
	xor eax,eax

 Block63:
	push eax
	push esi
	lea ecx,[esp+0x50]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block65

 Block64:
	mov ecx,dword ptr [eax-4]
	jmp Block66

 Block65:
	xor ecx,ecx

 Block66:
	push ecx
	push eax
	lea ecx,[esp+0x50]
	call ZXString<char>::_Cat
	mov edi,dword ptr [esp+0x44]
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	or dword ptr [esp+0x18],1
	mov byte ptr [esp+0x3C],3
	test eax,eax
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block68:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],2
	test eax,eax
	je Block70

 Block69:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block70:
	mov byte ptr [esp+0x3C],1
	test esi,esi
	je Block72

 Block71:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block72:
	mov ebx,dword ptr [esp+0x30]
	lea esi,[ebx+4]
	push esi
	mov byte ptr [esp+0x40],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block74

 Block73:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block74:
	mov eax,edi

 Block75:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 8
}
}
// CUIFamilyChart::~CUIFamilyChart
_SUB_EXCEPTION_HANDLER(3B1A60)
__SUB_CLASS_THIS0(003B1A60, __thiscall, 45564,  CUIFamilyChart, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B1A60
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIFamilyChart::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIFamilyChart::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIFamilyChart::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0x15F4]
	mov dword ptr [esp+0x18],7
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0xBAC]
	mov byte ptr [esp+0x18],6
	call CUIToolTip::~CUIToolTip
	cmp dword ptr [esi+0xBA8],0
	lea edi,[esi+0xBA4]
	mov byte ptr [esp+0x18],5
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	cmp dword ptr [esi+0xBA0],0
	lea edi,[esi+0xB9C]
	mov byte ptr [esp+0x18],4
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	lea ecx,[esi+0xB78]
	mov byte ptr [esp+0x18],3
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, long, long>::`vftable'
	call ZMap<long, long, long>::RemoveAll
	lea ecx,[esi+0xB60]
	mov byte ptr [esp+0x18],2
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, unsigned long, unsigned long>::`vftable'
	call ZMap<unsigned long, unsigned long, unsigned long>::RemoveAll
	push offset ZRef<CUIFamilyChart::FamilyItem>::~ZRef<CUIFamilyChart::FamilyItem>
	push 0xB
	push 8
	lea eax,[esi+0xB08]
	push eax
	mov byte ptr [esp+0x28],1
	call __eh_vector_dtor_iterator
	mov ecx,esi
	mov dword ptr [TSingleton<CUIFamilyChart>::ms_pInstance],0
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CUIWnd::~CUIWnd
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CUIFamilyChart::_IsChildNode
__SUB_CLASS_THIS(003B0C90, __thiscall, 45576,  CUIFamilyChart, int32_t, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFFFFB
	mov ecx,5
	cmp ecx,eax
	sbb eax,eax
	inc eax
	ret 4
}
}
// CUIFamily::CUIFamily
_SUB_EXCEPTION_HANDLER(3B2720)
__SUB_CLASS_THIS(003B2720, __thiscall, 45523,  CUIFamily, void, ZArray<ZRef<PrivilegeItem> >&, FamilyInfo&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B2720
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
	push edi
	push edi
	push 1
	push 6
	push 0xC0
	push 5
	push 0x1A
	call CUIWnd::_ctor_0
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUIFamily>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIFamily>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIFamily::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIFamily::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIFamily::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],edi
	mov dword ptr [esi+0xB14],edi
	mov dword ptr [esi+0xB1C],edi
	lea ecx,[esi+0xB20]
	mov byte ptr [esp+0x18],4
	call CUIToolTip::_ctor_default
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esi+0x1568],edx
	mov dword ptr [esi+0x156C],eax
	mov dword ptr [esi+0x1570],edi
	mov dword ptr [esi+0x1574],edi
	mov dword ptr [esi+0x1578],edi
	mov dword ptr [esi+0x157C],edi
	mov dword ptr [esi+0x1580],edi
	mov dword ptr [esi+0x1584],edi
	mov dword ptr [esi+0x1588],edi
	mov dword ptr [esi+0x158C],edi
	push 0xA
	push 0x188
	push 0xD6
	mov ecx,esi
	mov byte ptr [esp+0x24],7
	call CUIWnd::CreateUIWndPosSaved
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 8
}
}
// _anon_UnregisterChild_
_SUB_EXCEPTION_HANDLER(3B3A60)
__SUB(003B3A60, __cdecl, 87267,  void, NakedParam<ZRef<CUIFamilyChart::FamilyItem>>, NakedParam<ZRef<CUIFamilyChart::FamilyItem>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B3A60
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
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x10],ebx
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x28],2
	lea ecx,[esp+0x14]
	cmp dword ptr [eax+0x38],ebx
	je Block2

 Block1:
	push 0x1487
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,dword ptr [eax]
	mov edx,dword ptr [esp+0x3C]
	movzx ecx,byte ptr [edx+0x12]
	mov eax,0x66666667
	imul ecx
	sar edx,3
	mov eax,edx
	shr eax,0x1F
	lea edx,[edx+eax+0xA]
	imul edx,ecx
	push edx
	mov eax,0x66666667
	imul ecx
	sar edx,3
	mov eax,edx
	shr eax,0x1F
	lea edx,[edx+eax+0xA]
	imul edx,ecx
	add edx,edx
	push edx
	lea eax,[esp+0x18]
	push esi
	push eax
	mov byte ptr [esp+0x38],3
	call ZXString<char>::Format
	add esp,0x10
	jmp Block3

 Block2:
	push 0x1488
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,dword ptr [eax]
	mov edx,dword ptr [esp+0x3C]
	movzx ecx,byte ptr [edx+0x12]
	mov eax,0x66666667
	imul ecx
	sar edx,3
	mov eax,edx
	shr eax,0x1F
	lea edx,[edx+eax+0xA]
	imul edx,ecx
	add edx,edx
	push edx
	lea eax,[esp+0x14]
	push esi
	push eax
	mov byte ptr [esp+0x34],4
	call ZXString<char>::Format
	add esp,0xC

 Block3:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x28],2
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x34]
	movzx ecx,byte ptr [ecx+0x12]
	movzx eax,byte ptr [edx+0x12]
	cmp eax,ecx
	jle Block7

 Block6:
	sub eax,ecx
	jmp Block8

 Block7:
	xor eax,eax

 Block8:
	lea ecx,[eax+0x9C4]
	imul ecx,eax
	test ecx,ecx
	jle Block19

 Block9:
	lea edx,[esp+0x18]
	push 0x1486
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x14],ebx
	mov ecx,dword ptr [esp+0x3C]
	movzx edx,byte ptr [ecx+0x12]
	mov ecx,dword ptr [esp+0x34]
	movzx ecx,byte ptr [ecx+0x12]
	cmp ecx,edx
	mov byte ptr [esp+0x28],6
	jle Block11

 Block10:
	sub ecx,edx
	jmp Block12

 Block11:
	xor ecx,ecx

 Block12:
	mov eax,dword ptr [eax]
	lea edx,[ecx+0x9C4]
	imul edx,ecx
	push edx
	push eax
	lea eax,[esp+0x1C]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,0xC
	cmp eax,ebx
	je Block14

 Block13:
	mov ecx,dword ptr [eax-4]
	jmp Block15

 Block14:
	xor ecx,ecx

 Block15:
	push ecx
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::_Cat
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
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x28],2
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	push ebx
	push 1
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x24]
	mov dword ptr [esp+0x30],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block21

 Block20:
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [ecx+0xC]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edx
	call CWvsContext::SendUnregisterJunior
	mov eax,dword ptr [esp+0x3C]
	push ecx
	mov ecx,esp
	add eax,0x30
	mov dword ptr [esp+0x20],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::SetUnregisterCharacterName

 Block21:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x28],1
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov eax,dword ptr [esp+0x34]
	mov esi,dword ptr [ZImports::_InterlockedIncrement]
	mov edi,dword ptr [ZImports::_InterlockedDecrement]
	mov byte ptr [esp+0x28],bl
	cmp eax,ebx
	je Block28

 Block24:
	add eax,4
	push eax
	call edi
	test eax,eax
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x34]
	add eax,4
	push eax
	call esi
	mov ecx,dword ptr [esp+0x34]
	cmp ecx,ebx
	je Block27

 Block26:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block27:
	mov dword ptr [esp+0x34],ebx

 Block28:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block32

 Block29:
	add eax,4
	push eax
	call edi
	test eax,eax
	jne Block32

 Block30:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,4
	push ecx
	call esi
	mov ecx,dword ptr [esp+0x3C]
	cmp ecx,ebx
	je Block32

 Block31:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block32:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret
}
}
// CUIFamilyChart::OnCreate
_SUB_EXCEPTION_HANDLER(3B37C0)
__SUB_CLASS_THIS(003B37C0, __thiscall, 45565,  CUIFamilyChart, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B37C0
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
	push 1
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x1C],esp
	push 0x48
	push offset _S_UIUIWINDOW2IMGFA__11
	push 0
	push 0x24
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x24
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	mov eax,dword ptr [esp+0x3C]
	push eax
	mov ecx,esi
	call CUIWnd::OnCreate_1
	push 0
	push 0
	lea edi,[esi+0x15F4]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	add ecx,0x40A0
	call ZArray<CUIWnd *>::InsertBefore
	push 0
	push 0
	push 0
	push 0x7D0
	push offset _S_UIUIWINDOW2IMGFA__10
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	mov dword ptr [eax],esi
	call CLayoutMan::AddButton
	mov ebx,eax
	mov eax,dword ptr [ebx+4]
	mov dword ptr [esp+0x2C],0
	lea ebp,[esi+0xB9C]
	test eax,eax
	je Block2

 Block1:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	cmp dword ptr [ebp+4],0
	je Block4

 Block3:
	push 0
	mov ecx,ebp
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+4],0

 Block4:
	cmp dword ptr [esp+0x18],0
	mov edx,dword ptr [ebx+4]
	mov dword ptr [ebp+4],edx
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	je Block6

 Block5:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block6:
	mov ecx,dword ptr [esi+0xBA0]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x1C]
	add ecx,4
	push 0
	call edx
	push 0
	push 0
	push 0
	push 0x7D1
	push offset _S_UIUIWINDOW2IMGFA__9
	lea eax,[esp+0x28]
	push eax
	mov ecx,edi
	call CLayoutMan::AddButton
	mov ebx,eax
	mov eax,dword ptr [ebx+4]
	mov dword ptr [esp+0x2C],1
	lea ebp,[esi+0xBA4]
	test eax,eax
	je Block8

 Block7:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	cmp dword ptr [ebp+4],0
	je Block10

 Block9:
	push 0
	mov ecx,ebp
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+4],0

 Block10:
	cmp dword ptr [esp+0x18],0
	mov ecx,dword ptr [ebx+4]
	mov dword ptr [ebp+4],ecx
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	je Block12

 Block11:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block12:
	mov esi,dword ptr [esi+0xBA8]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	push 0
	call eax
	push 0
	push 0
	push 0
	push 0x3E8
	push offset _S_UIUIWINDOW2IMGFA__8
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x20],0
	je Block14

 Block13:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block14:
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
// CUIFamilyChart::GetRTTI
__SUB_CLASS_THIS0(003B1B80, __thiscall, 45580,  CUIFamilyChart, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIFamilyChart::ms_RTTI_CUIFamilyChart
	ret
}
}
// CUIFamilyChart::Draw
_SUB_EXCEPTION_HANDLER(3B6760)
__SUB_CLASS_THIS(003B6760, __thiscall, 45566,  CUIFamilyChart, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B6760
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
	mov ebx,ecx
	mov eax,dword ptr [esp+0x5C]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,ebx
	call CWnd::GetCanvas
	mov eax,dword ptr [ebx+0xB0C]
	xor esi,esi
	mov dword ptr [esp+0x54],esi
	mov dword ptr [esp+0x5C],esi
	cmp eax,esi
	je Block2

 Block1:
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x20]
	push eax
	lea ecx,[ebx+0xB60]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZMap<unsigned long, unsigned long, unsigned long>::GetAt

 Block2:
	mov ecx,dword ptr [esp+0x5C]
	push 2
	push ecx
	lea edx,[esp+0x64]
	push edx
	call format_comma_integer
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push 0x48
	push 0x29
	push 0x1D
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 1
	push eax
	mov byte ptr [esp+0x74],1
	call get_basic_font
	mov edi,dword ptr [esp+0x40]
	add esp,4
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [eax],edi
	cmp edi,esi
	je Block4

 Block3:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block4:
	call _anon_DrawTextAlign_
	mov eax,dword ptr [esp+0x78]
	add esp,0x1C
	mov byte ptr [esp+0x54],0
	cmp eax,esi
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov dword ptr [esp+0x5C],esi
	mov byte ptr [esp+0x54],2
	lea eax,[esp+0x1C]
	cmp dword ptr [ebx+0xB0C],esi
	je Block8

 Block7:
	push 0x1202
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebx+0xB0C]
	mov ecx,dword ptr [ecx+0x30]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x64]
	push edx
	mov byte ptr [esp+0x60],3
	call ZXString<char>::Format
	add esp,0xC
	jmp Block9

 Block8:
	push 0x1200
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0x58],4
	call ZXString<char>::op_assign

 Block9:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x54],2
	cmp eax,esi
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov ecx,dword ptr [esp+0x5C]
	push 1
	push ecx
	push 0xA7
	push 0xA
	push 0xCD
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push esi
	push edx
	call get_basic_font
	add esp,4
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [eax],edi
	cmp edi,esi
	je Block13

 Block12:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block13:
	call _anon_DrawTextAlign_
	add esp,0x1C
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x20]
	lea ecx,[ebx+0xB60]
	push eax
	mov dword ptr [esp+0x1C],esi
	mov dword ptr [esp+0x24],esi
	mov dword ptr [esp+0x2C],ecx
	call ZMap<unsigned long, unsigned long, unsigned long>::GetAt
	mov ebp,dword ptr [esp+0x14]
	cmp dword ptr [ebx+0xB1C],esi
	je Block15

 Block14:
	dec ebp

 Block15:
	cmp dword ptr [ebx+0xB14],esi
	je Block17

 Block16:
	dec ebp

 Block17:
	mov dword ptr [esp+0x14],esi
	lea ecx,[esp+0x1C]
	push 0x1203
	push ecx
	mov byte ptr [esp+0x5C],5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x60],6
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x54],5
	cmp eax,esi
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push eax
	call ebp
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x58],7
	call ebp
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push esi
	push eax
	mov byte ptr [esp+0x64],8
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x68],9
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x64],0xA
	cmp edi,esi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	push 0x50
	push 0x127
	mov ecx,edi
	mov byte ptr [esp+0x6C],9
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x54],8
	cmp eax,esi
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block27:
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x54],7
	cmp word ptr [esp+0x2C],si
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x2C]
	push ecx
	call ebp

 Block31:
	mov byte ptr [esp+0x54],5
	cmp word ptr [esp+0x3C],si
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea eax,[esp+0x3C]
	push eax
	call ebp

 Block35:
	xor esi,esi
	nop

 Block36:
	push esi
	mov ecx,ebx
	call CUIFamilyChart::_DrawChartItem
	inc esi
	cmp esi,0xB
	jl Block36

 Block37:
	mov ebp,offset _D_APTNODE_+56
	add ebx,0xB44
	lea esp,[esp]

 Block38:
	mov eax,dword ptr [ebx]
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	cmp eax,esi
	je Block40

 Block39:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	add eax,0xC
	push eax
	call ZMap<unsigned long, unsigned long, unsigned long>::GetAt

 Block40:
	mov dword ptr [esp+0x1C],esi
	lea edx,[esp+0x28]
	push 0x1204
	push edx
	mov byte ptr [esp+0x5C],0xB
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x60],0xC
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x54],0xB
	cmp eax,esi
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	mov esi,dword ptr [esp+0x1C]
	mov eax,dword ptr [ebp+4]
	mov ecx,dword ptr [ebp]
	push 1
	push esi
	push 0x85
	add eax,0x3A
	push eax
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0
	push edx
	call get_basic_font
	add esp,4
	mov eax,esp
	mov dword ptr [eax],edi
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x34],esp
	push edi
	call ecx
	call _anon_DrawTextAlign_
	add esp,0x1C
	mov byte ptr [esp+0x54],5
	test esi,esi
	je Block44

 Block43:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block44:
	add ebp,8
	add ebx,8
	cmp ebp,offset CUIFamily::ms_RTTI_CUIFamily
	jl Block38

 Block45:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x54],2
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x54],0
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block49:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call eax
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
// CUIFamilyChart::OnMouseButton
_SUB_EXCEPTION_HANDLER(3B5480)
__SUB_CLASS_THIS(003B5480, __thiscall, 45569,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B5480
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
	mov edi,ecx
	cmp dword ptr [edi+0xB8C],0
	je Block20

 Block1:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x34]
	push eax
	lea ebp,[edi-4]
	push ecx
	mov ecx,ebp
	call CUIFamilyChart::_FindItemByPoint
	mov esi,eax
	test esi,esi
	jl Block18

 Block2:
	cmp esi,2
	je Block5

 Block3:
	cmp esi,5
	je Block5

 Block4:
	cmp esi,6
	jne Block18

 Block5:
	mov ebx,dword ptr [edi+esi*8+0xB08]
	mov dword ptr [esp+0x18],ebx
	test ebx,ebx
	je Block7

 Block6:
	lea edx,[ebx+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov dword ptr [esp+0x24],0
	test ebx,ebx
	je Block9

 Block8:
	mov dword ptr [edi+0xB90],esi
	jmp Block10

 Block9:
	mov dword ptr [edi+0xB90],0xFFFFFFFF

 Block10:
	mov eax,dword ptr [esp+0x2C]
	cmp eax,0x201
	jne Block14

 Block11:
	cmp esi,2
	je Block17

 Block12:
	cmp dword ptr [edi+esi*8+0xB08],0
	jne Block17

 Block13:
	call _anon_RegisterJunior_
	jmp Block17

 Block14:
	cmp eax,0x203
	jne Block17

 Block15:
	cmp dword ptr [edi+0xB90],0
	jl Block17

 Block16:
	mov ecx,ebp
	call CUIFamilyChart::_UnregisterCharacter

 Block17:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZRef<CUIFamilyChart::FamilyItem>::~ZRef<CUIFamilyChart::FamilyItem>
	jmp Block19

 Block18:
	mov dword ptr [edi+0xB90],0xFFFFFFFF

 Block19:
	push 0
	mov ecx,ebp
	call CWnd::InvalidateRect

 Block20:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 0x10
}
}
// CUIFamilyChart::_FindItemByPoint
__SUB_CLASS_THIS(003B0C10, __thiscall, 45574,  CUIFamilyChart, long, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,dword ptr [esp+0x1C]
	push ebp
	mov ebp,dword ptr [ZImports::_PtInRect]
	push esi
	push edi
	mov edi,dword ptr [esp+0x24]
	xor esi,esi
	jmp Block2

 Block2:
	mov eax,dword ptr [esi*8+_D_APTNODE_]
	mov ecx,dword ptr [esi*8+_D_APTNODE_+4]
	mov dword ptr [esp+0x10],eax
	add eax,0x85
	push ebx
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x18],ecx
	push edi
	lea eax,[esp+0x18]
	add ecx,0x22
	push eax
	mov dword ptr [esp+0x28],ecx
	call ebp
	test eax,eax
	jne Block5

 Block3:
	inc esi
	cmp esi,0xB
	jl Block2

 Block4:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	add esp,0x10
	ret 8

 Block5:
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8
}
}
// CUIFamilyChart::DecodeLocalChart
_SUB_EXCEPTION_HANDLER(3B55A0)
__SUB_CLASS_THIS(003B55A0, __thiscall, 45572,  CUIFamilyChart, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B55A0
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
	mov ebp,ecx
	mov dword ptr [esp+0x18],ebp
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	xor edi,edi
	mov dword ptr [esp+0x14],eax
	cmp eax,edi
	je Block137

 Block1:
	mov ebx,dword ptr [esp+0x70]
	mov ecx,ebx
	call CInPacket::Decode4
	mov esi,eax
	mov eax,dword ptr [esp+0x14]
	mov eax,dword ptr [eax+0x20B4]
	xor ecx,ecx
	cmp esi,eax
	sete cl
	mov dword ptr [esp+0x20],esi
	mov dword ptr [esp+0x34],edi
	mov dword ptr [ebp+0xB90],ecx
	mov dword ptr [esp+0x68],edi
	lea esi,[ebp+0xB0C]
	mov dword ptr [esp+0x70],0xB
	mov edi,edi

 Block2:
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block7

 Block3:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	mov eax,dword ptr [esi]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi]
	cmp ecx,edi
	je Block6

 Block5:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block6:
	mov dword ptr [esi],edi

 Block7:
	add esi,8
	sub dword ptr [esp+0x70],1
	jne Block2

 Block8:
	lea ecx,[ebp+0xB78]
	call ZMap<long, long, long>::RemoveAll
	push 0x64
	lea ecx,[esp+0x4C]
	int 3// TODO: 	mov dword ptr [esp+0x4C],offset ZMap<unsigned long, ZRef<CUIFamilyChart::FamilyItem>, unsigned long>::`vftable'
	mov dword ptr [esp+0x50],edi
	mov dword ptr [esp+0x54],0x1F
	mov dword ptr [esp+0x58],edi
	call ZMap<unsigned long, ZRef<CUIFamilyChart::FamilyItem>, unsigned long>::_CalcAutoGrow
	mov ecx,ebx
	mov byte ptr [esp+0x68],1
	call CInPacket::Decode4
	cmp eax,edi
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x70],edi
	jle Block50

 Block9:
	push 0x40
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,edi
	je Block11

 Block10:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CUIFamilyChart::FamilyItem::`vftable'
	mov dword ptr [eax+0x30],edi
	mov dword ptr [eax+0x38],edi
	mov dword ptr [eax+0x3C],edi
	mov esi,eax
	jmp Block12

 Block11:
	xor esi,esi

 Block12:
	mov dword ptr [esp+0x44],esi
	cmp esi,edi
	je Block14

 Block13:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov ecx,ebx
	mov byte ptr [esp+0x68],2
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esi+0xC],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esp+0x24],eax
	call CInPacket::Decode2
	mov ecx,ebx
	mov word ptr [esi+0x10],ax
	call CInPacket::Decode1
	mov ecx,ebx
	mov byte ptr [esi+0x12],al
	call CInPacket::Decode1
	movzx edx,al
	mov ecx,ebx
	mov dword ptr [esi+0x14],edx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esi+0x18],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esi+0x1C],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esi+0x20],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esi+0x24],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esi+0x28],eax
	call CInPacket::Decode4
	mov dword ptr [esi+0x2C],eax
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	call CInPacket::DecodeStr
	push eax
	lea ecx,[esi+0x30]
	mov byte ptr [esp+0x6C],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x68],2
	cmp eax,edi
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	cmp dword ptr [esp+0x70],edi
	jne Block23

 Block17:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebp+0xB0C]
	cmp eax,edi
	je Block22

 Block18:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block21

 Block19:
	mov eax,dword ptr [ebp+0xB0C]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0xB0C]
	cmp ecx,edi
	je Block21

 Block20:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block21:
	mov dword ptr [ebp+0xB0C],edi

 Block22:
	mov dword ptr [ebp+0xB0C],esi
	jmp Block47

 Block23:
	mov ecx,dword ptr [esp+0x20]
	cmp ecx,dword ptr [esi+0xC]
	jne Block28

 Block24:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp dword ptr [esp+0x34],edi
	je Block27

 Block25:
	mov ebp,dword ptr [esp+0x34]
	lea edi,[ebp+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block27

 Block26:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebp
	call edx

 Block27:
	mov dword ptr [esp+0x34],esi
	mov dword ptr [esi+0x14],0

 Block28:
	xor edi,edi
	mov dword ptr [esp+0x3C],edi
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0x70],4
	call ZMap<unsigned long, ZRef<CUIFamilyChart::FamilyItem>, unsigned long>::GetAt
	mov ebp,dword ptr [esp+0x3C]
	test eax,eax
	je Block42

 Block29:
	cmp ebp,edi
	je Block31

 Block30:
	lea edx,[ebp+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block31:
	mov eax,dword ptr [esi+0x38]
	cmp eax,edi
	je Block36

 Block32:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block35

 Block33:
	mov eax,dword ptr [esi+0x38]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0x38]
	cmp ecx,edi
	je Block35

 Block34:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block35:
	mov dword ptr [esi+0x38],edi

 Block36:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x3C]
	mov dword ptr [esi+0x38],ebp
	call ZArray<ZRef<CUIFamilyChart::FamilyItem>>::InsertBefore
	mov edi,eax
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block41

 Block37:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block40

 Block38:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	test ecx,ecx
	je Block40

 Block39:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block40:
	mov dword ptr [edi+4],0

 Block41:
	mov dword ptr [edi+4],esi

 Block42:
	lea ecx,[esp+0x40]
	push ecx
	lea eax,[esi+0xC]
	push eax
	lea ecx,[esp+0x50]
	call ZMap<unsigned long, ZRef<CUIFamilyChart::FamilyItem>, unsigned long>::Insert
	mov byte ptr [esp+0x68],2
	test ebp,ebp
	je Block46

 Block43:
	lea edi,[ebp+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block45

 Block44:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block45:
	mov dword ptr [esp+0x3C],0

 Block46:
	mov ebp,dword ptr [esp+0x18]

 Block47:
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x6C],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block49

 Block48:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block49:
	mov ecx,dword ptr [esp+0x70]
	mov eax,dword ptr [esp+0x28]
	inc ecx
	xor edi,edi
	cmp ecx,eax
	mov dword ptr [esp+0x44],edi
	mov dword ptr [esp+0x70],ecx
	jl Block9

 Block50:
	cmp dword ptr [ebp+0xB0C],edi
	je Block57

 Block51:
	cmp eax,2
	jg Block57

 Block52:
	mov eax,dword ptr [ebp+0xB0C]
	cmp eax,edi
	je Block57

 Block53:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block56

 Block54:
	mov eax,dword ptr [ebp+0xB0C]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0xB0C]
	cmp ecx,edi
	je Block56

 Block55:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block56:
	mov dword ptr [ebp+0xB0C],edi

 Block57:
	cmp dword ptr [esp+0x34],edi
	jne Block61

 Block58:
	push 0x40
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,edi
	je Block69

 Block59:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CUIFamilyChart::FamilyItem::`vftable'
	mov dword ptr [eax+0x30],edi
	mov dword ptr [eax+0x38],edi
	mov dword ptr [eax+0x3C],edi
	mov esi,eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block60:
	mov dword ptr [esi+0x1C],edi
	mov dword ptr [esi+0x20],edi
	mov dword ptr [esi+0x24],edi
	mov dword ptr [esi+0x28],edi
	mov dword ptr [esp+0x34],esi
	mov dword ptr [esi+0x2C],edi

 Block61:
	cmp dword ptr [ebp+0xB90],edi
	je Block77

 Block62:
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block67

 Block63:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block66

 Block64:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block66

 Block65:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block66:
	mov ebp,dword ptr [esp+0x18]
	mov dword ptr [esp+0x44],0

 Block67:
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [ecx+0x20B4]
	mov edi,dword ptr [esp+0x34]
	mov dword ptr [edi+0xC],eax
	mov edx,dword ptr [esi+0x3D]
	push edx
	lea eax,[esi+0x39]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	mov word ptr [edi+0x10],ax
	mov ecx,dword ptr [esi+0x35]
	push ecx
	add esi,0x33
	push esi
	call _ZtlSecureFuseHelper<unsigned char>::call
	mov edx,dword ptr [esp+0x24]
	mov byte ptr [edi+0x12],al
	mov dword ptr [edi+0x14],1
	mov eax,dword ptr [edx+0x20CC]
	add esp,0x10
	test eax,eax
	je Block70

 Block68:
	lea ecx,[eax+4]
	jmp Block71

 Block69:
	xor esi,esi
	jmp Block60

 Block70:
	xor ecx,ecx

 Block71:
	mov edi,dword ptr [esp+0x34]
	add edi,0x30
	test ecx,ecx
	jne Block74

 Block72:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block77

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [edi],0
	jmp Block77

 Block74:
	mov eax,ecx
	lea esi,[eax+1]

 Block75:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block75

 Block76:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
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

 Block77:
	mov esi,dword ptr [esp+0x34]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block79

 Block78:
	lea eax,[esi+4]
	push eax
	call edi

 Block79:
	mov eax,dword ptr [ebp+0xB24]
	test eax,eax
	je Block84

 Block80:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block83

 Block81:
	mov eax,dword ptr [ebp+0xB24]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [ebp+0xB24]
	test ecx,ecx
	je Block83

 Block82:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block83:
	mov dword ptr [ebp+0xB24],0

 Block84:
	mov dword ptr [ebp+0xB24],esi
	mov esi,dword ptr [esi+0x38]
	mov dword ptr [esp+0x2C],esi
	test esi,esi
	je Block86

 Block85:
	lea ecx,[esi+4]
	push ecx
	call edi

 Block86:
	mov byte ptr [esp+0x68],5
	test esi,esi
	je Block111

 Block87:
	lea edx,[esi+4]
	push edx
	call edi
	mov eax,dword ptr [ebp+0xB1C]
	test eax,eax
	je Block92

 Block88:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block91

 Block89:
	mov eax,dword ptr [ebp+0xB1C]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [ebp+0xB1C]
	test ecx,ecx
	je Block91

 Block90:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block91:
	mov dword ptr [ebp+0xB1C],0

 Block92:
	mov dword ptr [ebp+0xB1C],esi
	mov eax,dword ptr [esi+0x3C]
	test eax,eax
	je Block102

 Block93:
	cmp dword ptr [eax-4],2
	jb Block102

 Block94:
	mov eax,dword ptr [esp+0x2C]
	mov esi,dword ptr [eax+0x3C]
	mov eax,dword ptr [esi+0xC]
	add esi,8
	test eax,eax
	je Block96

 Block95:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block96:
	mov eax,dword ptr [ebp+0xB2C]
	test eax,eax
	je Block101

 Block97:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block100

 Block98:
	mov eax,dword ptr [ebp+0xB2C]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0xB2C]
	test ecx,ecx
	je Block100

 Block99:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block100:
	mov dword ptr [ebp+0xB2C],0

 Block101:
	mov ecx,dword ptr [esi+4]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov esi,dword ptr [esp+0x2C]
	mov dword ptr [ebp+0xB2C],ecx

 Block102:
	cmp dword ptr [esi+0x38],0
	je Block111

 Block103:
	mov eax,dword ptr [esi+0x38]
	test eax,eax
	je Block105

 Block104:
	add eax,4
	push eax
	call edi

 Block105:
	mov eax,dword ptr [ebp+0xB14]
	test eax,eax
	je Block110

 Block106:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block109

 Block107:
	mov eax,dword ptr [ebp+0xB14]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [ebp+0xB14]
	test ecx,ecx
	je Block109

 Block108:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block109:
	mov dword ptr [ebp+0xB14],0

 Block110:
	mov ecx,dword ptr [esi+0x38]
	mov dword ptr [ebp+0xB14],ecx

 Block111:
	mov eax,dword ptr [esp+0x34]
	add eax,0x3C
	push 2
	push eax
	lea edx,[ebp+0xB30]
	push edx
	call _anon_CopyChild_
	add esp,0xC
	xor esi,esi
	lea edi,[ebp+0xB40]
	jmp Block113

 Block113:
	mov ecx,dword ptr [esp+0x34]
	mov eax,dword ptr [ecx+0x3C]
	add ecx,0x3C
	test eax,eax
	je Block120

 Block114:
	cmp esi,dword ptr [eax-4]
	jae Block120

 Block115:
	cmp esi,2
	jge Block120

 Block116:
	mov eax,dword ptr [eax+esi*8+4]
	lea ecx,[eax+0x3C]
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block119

 Block117:
	cmp dword ptr [eax-4],0
	je Block119

 Block118:
	push 2
	push ecx
	push edi
	call _anon_CopyChild_
	add esp,0xC

 Block119:
	inc esi
	add edi,0x10
	jmp Block113

 Block120:
	cmp dword ptr [esp+0x2C],0
	mov byte ptr [esp+0x68],1
	je Block123

 Block121:
	mov edi,dword ptr [esp+0x2C]
	lea esi,[edi+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block123

 Block122:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block123:
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0x68],0
	int 3// TODO: 	mov dword ptr [esp+0x48],offset ZMap<unsigned long, ZRef<CUIFamilyChart::FamilyItem>, unsigned long>::`vftable'
	call ZMap<unsigned long, ZRef<CUIFamilyChart::FamilyItem>, unsigned long>::RemoveAll
	xor eax,eax
	int 3// TODO: 	mov edi,offset ZMap<unsigned long, unsigned long, unsigned long>::`vftable'
	push 0x64
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x4C],edi
	mov dword ptr [esp+0x50],eax
	mov dword ptr [esp+0x54],0x1F
	mov dword ptr [esp+0x58],eax
	call ZMap<unsigned long, unsigned long, unsigned long>::_CalcAutoGrow
	mov ecx,ebx
	mov byte ptr [esp+0x68],6
	call CInPacket::Decode4
	mov esi,eax
	test esi,esi
	je Block126

 Block124:
	lea ebx,[ebx]

 Block125:
	mov ecx,ebx
	dec esi
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esp+0x28],eax
	call CInPacket::Decode4
	lea ecx,[esp+0x70]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x78],eax
	call ZMap<unsigned long, unsigned long, unsigned long>::Insert
	test esi,esi
	jne Block125

 Block126:
	lea eax,[esp+0x48]
	push eax
	lea ecx,[ebp+0xB60]
	call ZMap<unsigned long, unsigned long, unsigned long>::operator=
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0x68],0
	mov dword ptr [esp+0x48],edi
	call ZMap<unsigned long, unsigned long, unsigned long>::RemoveAll
	mov ecx,ebx
	call CInPacket::Decode4
	mov esi,eax
	test esi,esi
	je Block129

 Block127:
	lea ecx,[ecx]

 Block128:
	mov ecx,ebx
	dec esi
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esp+0x28],eax
	call CInPacket::Decode4
	lea ecx,[esp+0x70]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	lea ecx,[ebp+0xB78]
	mov dword ptr [esp+0x78],eax
	call ZMap<long, long, long>::Insert
	test esi,esi
	jne Block128

 Block129:
	mov ecx,ebx
	call CInPacket::Decode2
	cmp dword ptr [ebp+0xB90],0
	mov ebx,dword ptr [esp+0x34]
	movzx ecx,ax
	je Block134

 Block130:
	mov eax,dword ptr [ebx+0x3C]
	test eax,eax
	je Block132

 Block131:
	mov eax,dword ptr [eax-4]

 Block132:
	movzx ecx,cx
	cmp eax,ecx
	jae Block134

 Block133:
	mov edx,1
	jmp Block135

 Block134:
	xor edx,edx

 Block135:
	mov eax,dword ptr [ebp+0xBA0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x1C]
	call edx
	mov eax,dword ptr [ebp+0xBA8]
	mov edx,dword ptr [ebp+0xB90]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	push edx
	call eax
	push 0
	mov ecx,ebp
	call CWnd::InvalidateRect
	lea esi,[ebx+4]
	push esi
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block137

 Block136:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block137:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 4
}
}
// CUIFamilyChart::_GetMineToolTip
_SUB_EXCEPTION_HANDLER(3B6C00)
__SUB_CLASS_THIS0(003B6C00, __thiscall, 45577,  CUIFamilyChart, ZXString<char>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B6C00
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
	mov dword ptr [esp+0x24],ecx
	xor ebp,ebp
	mov dword ptr [esp+0x2C],ebp
	mov edi,dword ptr [ecx+0xB24]
	mov dword ptr [esp+0x34],edi
	cmp edi,ebp
	je Block2

 Block1:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov dword ptr [esp+0x40],1
	cmp edi,ebp
	jne Block4

 Block3:
	mov esi,dword ptr [esp+0x48]
	push ebp
	push offset _S_
	push ebp
	push ebp
	mov ecx,esi
	mov dword ptr [esi],ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebp
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	mov eax,esi
	jmp Block58

 Block4:
	mov dword ptr [esp+0x14],ebp
	mov ecx,dword ptr [edi+0x20]
	push ecx
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x48],2
	call format_comma_integer
	add esp,8
	mov esi,eax
	lea eax,[esp+0x20]
	push 0x122E
	mov bl,3
	push eax
	mov byte ptr [esp+0x48],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x4C],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x40],bl
	cmp eax,ebp
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x40],2
	cmp eax,ebp
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [edi+0x38]
	cmp eax,ebp
	je Block15

 Block9:
	mov al,byte ptr [eax+0x12]
	cmp al,byte ptr [edi+0x12]
	jae Block15

 Block10:
	lea ecx,[esp+0x20]
	push 0x122C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x40],5
	cmp eax,ebp
	je Block12

 Block11:
	mov ecx,dword ptr [eax-4]
	jmp Block13

 Block12:
	xor ecx,ecx

 Block13:
	push ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x40],2
	cmp eax,ebp
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	lea edx,[esp+0x20]
	push 0x1236
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x40],6
	cmp eax,ebp
	je Block17

 Block16:
	mov ecx,dword ptr [eax-4]
	jmp Block18

 Block17:
	xor ecx,ecx

 Block18:
	push ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x40],2
	cmp eax,ebp
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCurrentPrivilege
	mov esi,eax
	cmp esi,ebp
	jl Block35

 Block21:
	lea eax,[esp+0x20]
	push 0x122F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x40],7
	cmp eax,ebp
	je Block23

 Block22:
	mov ecx,dword ptr [eax-4]
	jmp Block24

 Block23:
	xor ecx,ecx

 Block24:
	push ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x40],2
	cmp eax,ebp
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	push esi
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetPrivilegeName
	push eax
	lea edx,[esp+0x20]
	push offset _S___7
	push edx
	mov byte ptr [esp+0x4C],8
	call __op_add_char_char
	add esp,0xC
	push offset _S___36
	lea ecx,[esp+0x24]
	push ecx
	mov bl,9
	mov ecx,eax
	mov byte ptr [esp+0x48],bl
	call ZXString<char>::op_add_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x40],0xA
	cmp eax,ebp
	je Block28

 Block27:
	mov ecx,dword ptr [eax-4]
	jmp Block29

 Block28:
	xor ecx,ecx

 Block29:
	push ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x40],bl
	cmp eax,ebp
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x40],8
	cmp eax,ebp
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x40],2
	cmp eax,ebp
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	mov edi,dword ptr [esp+0x24]
	cmp dword ptr [edi+0xB84],ebp
	je Block53

 Block36:
	lea edx,[esp+0x24]
	push 0x1230
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x40],0xB
	cmp eax,ebp
	je Block38

 Block37:
	mov ecx,dword ptr [eax-4]
	jmp Block39

 Block38:
	xor ecx,ecx

 Block39:
	push ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x40],2
	cmp eax,ebp
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	lea eax,[esp+0x20]
	push 0x1231
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	add edi,0xB78
	mov ecx,edi
	call ZMap<long, long, long>::GetHeadPosition
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebp
	je Block51

 Block42:
	mov bl,0xD
	nop

 Block43:
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x20]
	push edx
	mov ecx,edi
	call ZMap<long, long, long>::GetNext
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x18],ebp
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x48],bl
	call CWvsContext::GetPrivilegeName
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [eax]
	mov eax,dword ptr [esp+0x20]
	push ecx
	push edx
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov byte ptr [esp+0x50],0xE
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x38]
	add esp,0x10
	mov byte ptr [esp+0x40],bl
	cmp eax,ebp
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block45:
	mov esi,dword ptr [esp+0x18]
	cmp esi,ebp
	je Block47

 Block46:
	mov eax,dword ptr [esi-4]
	jmp Block48

 Block47:
	xor eax,eax

 Block48:
	push eax
	push esi
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov byte ptr [esp+0x40],0xC
	cmp esi,ebp
	je Block50

 Block49:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block50:
	cmp dword ptr [esp+0x1C],ebp
	jne Block43

 Block51:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x40],2
	cmp eax,ebp
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	mov edi,dword ptr [esp+0x48]
	lea edx,[esp+0x14]
	push edx
	mov ecx,edi
	mov dword ptr [edi],ebp
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x2C],1
	mov byte ptr [esp+0x40],1
	cmp eax,ebp
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block55:
	mov ebx,dword ptr [esp+0x34]
	lea esi,[ebx+4]
	push esi
	mov byte ptr [esp+0x44],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block57

 Block56:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block57:
	mov eax,edi

 Block58:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 4
}
}
// CUIFamily::_MakePreceptLayer
_SUB_EXCEPTION_HANDLER(3B1270)
__SUB_CLASS_THIS0(003B1270, __thiscall, 45525,  CUIFamily, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B1270
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [edi+0x1574]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [edi+0x1574],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov edx,3
	mov dword ptr [esp+0x50],0
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x50],1
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x1C]
	push edx
	push 0
	push 0xF
	push 0xAF
	push 0x3B
	push 0xD
	lea eax,[esp+0x28]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x1574]
	cmp esi,eax
	je Block11

 Block7:
	mov dword ptr [edi+0x1574],eax
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
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block13:
	mov esi,8
	mov byte ptr [esp+0x50],0
	cmp word ptr [esp+0x18],si
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
	cmp word ptr [esp+0x38],si
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
	mov esi,dword ptr [edi+0x1574]
	test esi,esi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block25

 Block24:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x50],2
	test ecx,ecx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea edx,[esp+0xC]
	push edx
	call IWzGr2DLayer::Getlt
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x50],3
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block29:
	mov esi,dword ptr [edi+0x1574]
	mov byte ptr [esp+0x50],4
	test esi,esi
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
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
	jge Block33

 Block32:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block33:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x50],3
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x50],2
	test eax,eax
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x50],5
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block43

 Block42:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block43:
	mov esi,dword ptr [edi+0x1574]
	mov byte ptr [esp+0x50],6
	test esi,esi
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
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
	jge Block47

 Block46:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block47:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x50],5
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test eax,eax
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	mov esi,dword ptr [edi+0x1574]
	test esi,esi
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push esi
	call ecx
	test eax,eax
	jge Block57

 Block56:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block57:
	mov dword ptr [edi+0x1578],0xAF
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x48
	ret
}
}
// CUIFamily::Update
_SUB_EXCEPTION_HANDLER(3B3060)
__SUB_CLASS_THIS0(003B3060, __thiscall, 45525,  CUIFamily, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B3060
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
	mov edi,ecx
	call CWnd::Update
	xor ebx,ebx
	cmp dword ptr [edi+0x1574],ebx
	sete al
	test al,al
	sete al
	test al,al
	je Block90

 Block1:
	mov eax,dword ptr [edi+0x1568]
	add eax,0x1C
	mov eax,dword ptr [eax]
	cmp eax,ebx
	je Block90

 Block2:
	cmp byte ptr [eax],bl
	je Block90

 Block3:
	mov eax,3
	mov word ptr [ebp-0x20],ax
	mov dword ptr [ebp-0x18],0xFFFFFFFE
	mov ecx,dword ptr [edi+0x1574]
	mov dword ptr [ebp-4],ebx
	cmp ecx,ebx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea edx,[ebp-0x20]
	push edx
	lea eax,[ebp-0x24]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [ebp-0x24]
	cmp eax,ebx
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	cmp word ptr [ebp-0x20],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block10

 Block8:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block11:
	mov dword ptr [ebp-0x28],ebx
	lea edx,[ebp-0x3C]
	push 0x18
	push edx
	mov dword ptr [ebp-4],1
	call get_basic_font
	add esp,8
	lea eax,[ebp-0x24]
	push 0x3D0
	push eax
	mov byte ptr [ebp-4],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[ebp-0x28]
	push ecx
	push eax
	mov byte ptr [ebp-4],3
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp-0x24]
	add esp,0xC
	mov byte ptr [ebp-4],2
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x38]
	push edx
	call esi
	lea eax,[ebp-0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	lea ecx,[ebp-0x20]
	mov bl,4
	push ecx
	mov byte ptr [ebp-4],bl
	call esi
	lea edx,[ebp-0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov ecx,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],5
	test ecx,ecx
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea eax,[ebp-0x38]
	push eax
	lea edx,[ebp-0x20]
	push edx
	push 0xF
	push 0xAF
	call IWzCanvas::Create
	mov byte ptr [ebp-4],bl
	mov ebx,8
	cmp word ptr [ebp-0x20],bx
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x38],bx
	jne Block26

 Block24:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[ebp-0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block27:
	lea ecx,[ebp-0x20]
	push ecx
	call esi
	lea edx,[ebp-0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov eax,3
	mov word ptr [ebp-0x38],ax
	mov dword ptr [ebp-0x30],0xFF
	mov ecx,dword ptr [edi+0x1568]
	mov eax,dword ptr [ecx+0x1C]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	mov bl,7
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp-0x3C]
	mov esi,esp
	lea edx,[ebp-0x20]
	push edx
	mov edx,dword ptr [edi+0x1568]
	lea eax,[ebp-0x38]
	push eax
	mov eax,dword ptr [edx+0x1C]
	push ecx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],8
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	mov eax,dword ptr [edi+0x1578]
	push 0
	push eax
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x38],si
	jne Block34

 Block32:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[ebp-0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x20],si
	jne Block38

 Block36:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x4C]
	push edx
	call esi
	lea eax,[ebp-0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	lea ecx,[ebp-0x5C]
	push ecx
	mov byte ptr [ebp-4],9
	call esi
	lea edx,[ebp-0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	lea eax,[ebp-0x6C]
	push eax
	mov byte ptr [ebp-4],0xA
	call esi
	lea ecx,[ebp-0x6C]
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
	lea edx,[ebp-0x20]
	push edx
	mov byte ptr [ebp-4],0xB
	call esi
	lea eax,[ebp-0x20]
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
	lea ecx,[ebp-0x38]
	mov bl,0xC
	push ecx
	mov byte ptr [ebp-4],bl
	call esi
	lea edx,[ebp-0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block49

 Block48:
	push eax
	call _com_issue_error

 Block49:
	mov ecx,dword ptr [edi+0x1574]
	mov byte ptr [ebp-4],0xD
	test ecx,ecx
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	lea eax,[ebp-0x4C]
	push eax
	lea edx,[ebp-0x5C]
	push edx
	lea eax,[ebp-0x6C]
	push eax
	lea edx,[ebp-0x20]
	push edx
	mov edx,dword ptr [ebp-0x28]
	lea eax,[ebp-0x38]
	push eax
	push edx
	lea eax,[ebp-0x7C]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x7C],8
	jne Block54

 Block52:
	mov eax,dword ptr [ebp-0x74]
	xor ecx,ecx
	mov word ptr [ebp-0x7C],cx
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea edx,[ebp-0x7C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],bl
	jne Block62

 Block56:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block58

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block58:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block59:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],0xB
	jne Block63

 Block60:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	test eax,eax
	je Block64

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block62:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x38]
	push ecx
	call ebx
	jmp Block59

 Block63:
	lea eax,[ebp-0x20]
	push eax
	call ebx

 Block64:
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0xA
	jne Block67

 Block65:
	mov eax,dword ptr [ebp-0x64]
	xor ecx,ecx
	mov word ptr [ebp-0x6C],cx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea edx,[ebp-0x6C]
	push edx
	call ebx

 Block68:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],9
	jne Block71

 Block69:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea ecx,[ebp-0x5C]
	push ecx
	call ebx

 Block72:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],2
	jne Block75

 Block73:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea eax,[ebp-0x4C]
	push eax
	call ebx

 Block76:
	lea ecx,[ebp-0x4C]
	push ecx
	call esi
	lea edx,[ebp-0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block78

 Block77:
	push eax
	call _com_issue_error

 Block78:
	mov ecx,dword ptr [edi+0x1568]
	dec dword ptr [edi+0x1578]
	lea eax,[ebp-0x4C]
	push eax
	mov eax,dword ptr [ecx+0x1C]
	push ecx
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	mov bl,0xE
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x3C]
	mov byte ptr [ebp-4],0xF
	test ecx,ecx
	jne Block80

 Block79:
	push 0x80004003
	call _com_issue_error

 Block80:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	mov esi,dword ptr [edi+0x1578]
	add esi,eax
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],2
	jne Block83

 Block81:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block84:
	test esi,esi
	jge Block86

 Block85:
	mov dword ptr [edi+0x1578],0xAF

 Block86:
	mov eax,dword ptr [ebp-0x3C]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block88

 Block87:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block88:
	mov eax,dword ptr [ebp-0x28]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block90

 Block89:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block90:
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
	ret
}
}
// CUIFamilyChart::CUIFamilyChart
_SUB_EXCEPTION_HANDLER(3B3670)
__SUB_CLASS_THIS0(003B3670, __thiscall, 45562,  CUIFamilyChart, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B3670
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
	push edi
	push edi
	push 1
	push edi
	push edi
	push edi
	push 0x1B
	call CUIWnd::_ctor_0
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUIFamilyChart>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIFamilyChart>::ms_pInstance],edi

 Block3:
	push offset ZRef<CUIFamilyChart::FamilyItem>::~ZRef<CUIFamilyChart::FamilyItem>
	push offset ZRef<CUIFamilyChart::FamilyItem>::_ctor_default
	push 0xB
	push 8
	push eax
	mov byte ptr [esp+0x2C],1
	int 3// TODO: 	mov dword ptr [esi],offset CUIFamilyChart::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIFamilyChart::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIFamilyChart::`vftable'{for `ZRefCounted'}
	call __eh_vector_ctor_iterator
	lea ecx,[esi+0xB60]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, unsigned long, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, unsigned long, unsigned long>::_CalcAutoGrow
	lea ecx,[esi+0xB78]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, long, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, long, long>::_CalcAutoGrow
	or eax,0xFFFFFFFF
	mov dword ptr [esi+0xB90],edi
	mov dword ptr [esi+0xB94],eax
	mov dword ptr [esi+0xB98],eax
	mov dword ptr [esi+0xBA0],edi
	mov dword ptr [esi+0xBA8],edi
	lea ecx,[esi+0xBAC]
	mov byte ptr [esp+0x18],6
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0x15F4],edi
	mov dword ptr [esi+0x15F8],edi
	mov dword ptr [esi+0x15FC],edi
	mov dword ptr [esi+0x1600],edi
	mov dword ptr [esi+0x1604],edi
	push 0xA
	push 0x182
	push 0x242
	mov ecx,esi
	mov byte ptr [esp+0x24],8
	call CUIWnd::CreateUIWndPosSaved
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
// CUIFamily::~CUIFamily
_SUB_EXCEPTION_HANDLER(3B1910)
__SUB_CLASS_THIS0(003B1910, __thiscall, 45525,  CUIFamily, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B1910
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIFamily::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIFamily::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIFamily::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0x157C]
	mov dword ptr [esp+0x1C],6
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0x1574]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],5
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	lea ecx,[esi+0xB20]
	mov byte ptr [esp+0x1C],4
	call CUIToolTip::~CUIToolTip
	lea edi,[esi+0xB18]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xB10]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xB08]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIFamily>::ms_pInstance],ebx
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CUIWnd::~CUIWnd
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
// CUIFamily::OnCreate
_SUB_EXCEPTION_HANDLER(3B2830)
__SUB_CLASS_THIS(003B2830, __thiscall, 45526,  CUIFamily, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B2830
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
	push 1
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x1C],esp
	push 0x40
	push offset _S_UIUIWINDOW2IMGFA__7
	push 0
	push 0x20
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x20
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	mov eax,dword ptr [esp+0x3C]
	push eax
	mov ecx,esi
	call CUIWnd::OnCreate_1
	push 0
	push 0
	lea edi,[esi+0x157C]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	add ecx,0x40A0
	call ZArray<CUIWnd *>::InsertBefore
	push 0
	push 0
	push 0
	push 0x7D5
	push offset _S_UIUIWINDOW2IMGFA__6
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	mov dword ptr [eax],esi
	call CLayoutMan::AddButton
	mov ebx,eax
	mov eax,dword ptr [ebx+4]
	mov dword ptr [esp+0x2C],0
	lea ebp,[esi+0xB08]
	test eax,eax
	je Block2

 Block1:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	cmp dword ptr [ebp+4],0
	je Block4

 Block3:
	push 0
	mov ecx,ebp
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+4],0

 Block4:
	cmp dword ptr [esp+0x18],0
	mov edx,dword ptr [ebx+4]
	mov dword ptr [ebp+4],edx
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	je Block6

 Block5:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block6:
	mov ecx,dword ptr [esi+0xB0C]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x1C]
	add ecx,4
	push 0
	call edx
	push 0
	push 0
	push 0
	push 0x7D3
	push offset _S_UIUIWINDOW2IMGFA__5
	lea eax,[esp+0x28]
	push eax
	mov ecx,edi
	call CLayoutMan::AddButton
	mov ebx,eax
	mov eax,dword ptr [ebx+4]
	mov dword ptr [esp+0x2C],1
	lea ebp,[esi+0xB10]
	test eax,eax
	je Block8

 Block7:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	cmp dword ptr [ebp+4],0
	je Block10

 Block9:
	push 0
	mov ecx,ebp
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+4],0

 Block10:
	cmp dword ptr [esp+0x18],0
	mov ecx,dword ptr [ebx+4]
	mov dword ptr [ebp+4],ecx
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	je Block12

 Block11:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block12:
	mov ecx,dword ptr [esi+0xB14]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x1C]
	add ecx,4
	push 0
	call eax
	push 0
	push 0
	push 0
	push 0x7D4
	push offset _S_UIUIWINDOW2IMGFA__4
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov ebx,eax
	mov eax,dword ptr [ebx+4]
	mov dword ptr [esp+0x2C],2
	lea ebp,[esi+0xB18]
	test eax,eax
	je Block14

 Block13:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	cmp dword ptr [ebp+4],0
	je Block16

 Block15:
	push 0
	mov ecx,ebp
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+4],0

 Block16:
	cmp dword ptr [esp+0x18],0
	mov edx,dword ptr [ebx+4]
	mov dword ptr [ebp+4],edx
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	je Block18

 Block17:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block18:
	mov esi,dword ptr [esi+0xB1C]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x1C]
	lea ecx,[esi+4]
	push 0
	call edx
	push 0
	push 0
	push 0
	push 0x7D0
	push offset _S_UIUIWINDOW2IMGFA__3
	lea eax,[esp+0x28]
	push eax
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],0
	je Block20

 Block19:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block20:
	push 0
	push 0
	push 0
	push 0x7D1
	push offset _S_UIUIWINDOW2IMGFA__2
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],0
	je Block22

 Block21:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block22:
	push 0
	push 0
	push 0
	push 0x7D2
	push offset _S_UIUIWINDOW2IMGFA__1
	lea edx,[esp+0x28]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],0
	je Block24

 Block23:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block24:
	push 0
	push 0
	push 0
	push 0x3E8
	push offset _S_UIUIWINDOW2IMGFA
	lea eax,[esp+0x30]
	push eax
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x20],0
	je Block26

 Block25:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x20],0

 Block26:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::SendFamilyInfoRequest
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
// CUIFamily::OnDestroy
__SUB_CLASS_THIS0(003B0E20, __thiscall, 45525,  CUIFamily, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	call CWvsContext::RemoveFromStackForTab
	mov ecx,esi
	pop esi
	jmp  CUIWnd::OnDestroy
}
}
// CUIFamily::ResetFamilyInfo
__SUB_CLASS_THIS0(003B0D70, __thiscall, 45525,  CUIFamily, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov edx,dword ptr [esi+0x1568]
	mov edx,dword ptr [edx+0x14]
	mov eax,dword ptr [esi+0xB14]
	push edi
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	xor ebx,ebx
	cmp edx,dword ptr [edi+0x20B4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	sete bl
	push ebx
	call eax
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebx
	ret
}
}
// CUIFamilyChart::IsKindOf
__SUB_CLASS_THIS(003B1BA0, __thiscall, 45581,  CUIFamilyChart, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIFamilyChart::ms_RTTI_CUIFamilyChart
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
// CUIFamilyChart::OnChildNotify
_SUB_EXCEPTION_HANDLER(3B21D0)
__SUB_CLASS_THIS(003B21D0, __thiscall, 45570,  CUIFamilyChart, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B21D0
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x1C]
	cmp eax,0x65
	jne Block14

 Block1:
	mov eax,dword ptr [esp+0x18]
	sub eax,0x7D0
	je Block10

 Block2:
	sub eax,1
	jne Block16

 Block3:
	cmp dword ptr [esp+0x20],eax
	jne Block5

 Block4:
	mov ecx,dword ptr [esi+0xBA8]
	push eax
	push eax
	push eax
	call CCtrlButton::SetToolTip
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 0xC

 Block5:
	cmp dword ptr [esi+0xB94],2
	je Block8

 Block6:
	lea eax,[esp+0x20]
	push 0x1228
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xBA8]
	push 0
	push eax
	push 0
	mov dword ptr [esp+0x1C],1
	call CCtrlButton::SetToolTip
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block16

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 0xC

 Block8:
	lea ecx,[esp+0x18]
	push 0x1227
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xBA8]
	push 0
	push eax
	push 0
	mov dword ptr [esp+0x1C],2
	call CCtrlButton::SetToolTip
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block16

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
	ret 0xC

 Block10:
	cmp dword ptr [esp+0x20],0
	jne Block12

 Block11:
	mov ecx,dword ptr [esi+0xBA0]
	push 0
	push 0
	push 0
	call CCtrlButton::SetToolTip
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 0xC

 Block12:
	lea edx,[esp+0x1C]
	push 0x1226
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xBA0]
	push 0
	push eax
	push 0
	mov dword ptr [esp+0x1C],0
	call CCtrlButton::SetToolTip
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block16

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 0xC

 Block14:
	cmp eax,0x64
	jne Block16

 Block15:
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push ecx
	mov ecx,esi
	call edx

 Block16:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 0xC
}
}
// CUIFamilyChart::SetLoginOrLogout
_SUB_EXCEPTION_HANDLER(3B2080)
__SUB_CLASS_THIS(003B2080, __thiscall, 45573,  CUIFamilyChart, void, NakedParam<ZXString<char>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B2080
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
	mov ebp,ecx
	mov dword ptr [esp+0x1C],0
	lea edi,[ebp+0xB0C]
	mov ebx,0xB

 Block1:
	mov esi,dword ptr [edi]
	test esi,esi
	je Block4

 Block2:
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esi+0x30]
	call ZXString<char>::op_eq_0
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [esi+0x14],ecx

 Block4:
	add edi,8
	sub ebx,1
	jne Block1

 Block5:
	push ebx
	mov ecx,ebp
	call CWnd::InvalidateRect
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 8
}
}
// CUIFamily::OnMouseMove
_SUB_EXCEPTION_HANDLER(3B2B40)
__SUB_CLASS_THIS(003B2B40, __thiscall, 45528,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B2B40
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
	mov ebx,dword ptr [esp+0x34]
	mov edi,dword ptr [esp+0x30]
	mov ebp,dword ptr [ZImports::_PtInRect]
	push ebx
	push edi
	push offset _D_S_RTFAMOUSPOINT
	call ebp
	test eax,eax
	je Block3

 Block1:
	push 1
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x1224
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x34],0

 Block2:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+ebx+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	add eax,edi
	push eax
	lea ecx,[esi+0xB1C]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call CUIToolTip::SetToolTip_String_MultiLine
	jmp Block19

 Block3:
	push ebx
	push edi
	push offset _D_S_RTJUNIOR
	call ebp
	test eax,eax
	je Block5

 Block4:
	push 1
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1225
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x34],1
	jmp Block2

 Block5:
	push ebx
	push edi
	push offset _D_S_RTPRIVILEGE
	call ebp
	test eax,eax
	je Block18

 Block6:
	mov eax,dword ptr [esi+0x156C]
	lea edx,[esi+0x156C]
	xor ebx,ebx
	cmp eax,ebx
	jl Block18

 Block7:
	mov ecx,dword ptr [esi+0x1568]
	mov edi,dword ptr [ecx]
	cmp edi,ebx
	jne Block9

 Block8:
	xor edi,edi
	jmp Block10

 Block9:
	mov edi,dword ptr [edi-4]

 Block10:
	cmp eax,edi
	jae Block18

 Block11:
	mov ecx,dword ptr [ecx]
	mov eax,dword ptr [ecx+eax*8+4]
	mov edi,dword ptr [eax+0x14]
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x14],ebx
	mov ecx,dword ptr [esi+0x1564]
	lea eax,[esp+0x18]
	push eax
	mov ebx,2
	push edx
	add ecx,0x20
	mov dword ptr [esp+0x30],ebx
	call ZMap<long, long, long>::GetAt
	mov ebp,dword ptr [esp+0x18]
	cmp ebp,edi
	jl Block13

 Block12:
	lea ecx,[esp+0x18]
	push 0x122B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],3
	call ZXString<char>::op_assign
	jmp Block14

 Block13:
	lea edx,[esp+0x18]
	push 0x122A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push ebp
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x38],4
	call ZXString<char>::Format
	add esp,0x10

 Block14:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x28],bl
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	push 1
	push 0
	push ecx
	lea edx,[esp+0x20]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	mov byte ptr [esp+0x34],5
	call edx
	mov ecx,dword ptr [esp+0x40]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	add eax,dword ptr [esp+0x40]
	lea ecx,[esi+0xB1C]
	push eax
	mov byte ptr [esp+0x3C],bl
	call CUIToolTip::SetToolTip_String_MultiLine
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block19

 Block18:
	lea ecx,[esi+0xB1C]
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
// CUIFamily::GetRTTI
__SUB_CLASS_THIS0(003B1A10, __thiscall, 45531,  CUIFamily, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIFamily::ms_RTTI_CUIFamily
	ret
}
}
// _anon_DrawTextAlign_
_SUB_EXCEPTION_HANDLER(3B23C0)
__SUB(003B23C0, __cdecl, 87265,  void, NakedParam<_x_com_ptr<IWzCanvas>>, NakedParam<_x_com_ptr<IWzFont>>, long, long, long, const char*, _anon_Align) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B23C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push eax
	mov dword ptr [esp+0x40],1
	call ebp
	lea ecx,[esp+0x14]
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
	mov eax,dword ptr [esp+0x58]
	lea edx,[esp+0x14]
	push edx
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x48],2
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],3
	test ecx,ecx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov byte ptr [esp+0x44],2
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x14],8
	mov edi,eax
	mov byte ptr [esp+0x3C],1
	jne Block7

 Block5:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov eax,dword ptr [esp+0x5C]
	sub eax,0
	je Block13

 Block9:
	sub eax,1
	je Block12

 Block10:
	sub eax,1
	jne Block14

 Block11:
	mov esi,dword ptr [esp+0x4C]
	sub esi,edi
	add esi,dword ptr [esp+0x54]
	jmp Block15

 Block12:
	mov esi,dword ptr [esp+0x54]
	sub esi,edi
	shr esi,1
	add esi,dword ptr [esp+0x4C]
	jmp Block15

 Block13:
	mov esi,dword ptr [esp+0x4C]
	jmp Block15

 Block14:
	mov esi,dword ptr [esp+0x10]

 Block15:
	lea eax,[esp+0x24]
	push eax
	call ebp
	lea ecx,[esp+0x24]
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
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0x40],4
	call ebp
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	mov eax,dword ptr [esp+0x48]
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [esp+0x60]
	push eax
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x50],5
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0x4C],6
	test ecx,ecx
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	mov eax,dword ptr [esp+0x60]
	push eax
	push esi
	mov byte ptr [esp+0x54],5
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x3C],4
	cmp word ptr [esp+0x14],si
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov byte ptr [esp+0x3C],1
	cmp word ptr [esp+0x24],si
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x3C],0
	test eax,eax
	je Block31

 Block30:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block31:
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x30
	ret
}
}
// CUIFamily::IsKindOf
__SUB_CLASS_THIS(003B1A30, __thiscall, 45532,  CUIFamily, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIFamily::ms_RTTI_CUIFamily
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
// CUIFamilyChart::OnDestroy
__SUB_CLASS_THIS0(003B0E40, __thiscall, 45564,  CUIFamilyChart, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	call CWvsContext::RemoveFromStackForTab
	mov ecx,esi
	pop esi
	jmp  CUIWnd::OnDestroy
}
}
// CUIFamilyChart::OnMouseMove
_SUB_EXCEPTION_HANDLER(3B7070)
__SUB_CLASS_THIS(003B7070, __thiscall, 45568,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B7070
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
	cmp dword ptr [esi+0xB8C],0
	je Block24

 Block1:
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x2C]
	push eax
	lea ebx,[esi-4]
	push ecx
	mov ecx,ebx
	call CUIFamilyChart::_FindItemByPoint
	mov edi,eax
	test edi,edi
	jl Block10

 Block2:
	cmp edi,2
	je Block5

 Block3:
	cmp edi,5
	je Block5

 Block4:
	cmp edi,6
	jne Block10

 Block5:
	mov eax,dword ptr [esi+edi*8+0xB08]
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block8

 Block6:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	lea ecx,[esp+0x14]
	mov ebp,edi
	call ZRef<CUIFamilyChart::FamilyItem>::~ZRef<CUIFamilyChart::FamilyItem>
	jmp Block11

 Block8:
	cmp edi,2
	jne Block7

 Block9:
	lea ecx,[esp+0x14]
	or ebp,0xFFFFFFFF
	call ZRef<CUIFamilyChart::FamilyItem>::~ZRef<CUIFamilyChart::FamilyItem>
	jmp Block11

 Block10:
	or ebp,0xFFFFFFFF

 Block11:
	cmp dword ptr [esi+0xB94],ebp
	je Block13

 Block12:
	push 0
	mov ecx,ebx
	mov dword ptr [esi+0xB94],ebp
	call CWnd::InvalidateRect

 Block13:
	mov edx,dword ptr [esp+0x30]
	mov ebp,dword ptr [esp+0x2C]
	push edx
	push ebp
	push offset _D_S_RTFAMILYCOUNT
	call dword ptr [ZImports::_PtInRect]
	test eax,eax
	je Block15

 Block14:
	push 1
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x1229
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x30],0
	jmp Block22

 Block15:
	test edi,edi
	jl Block23

 Block16:
	cmp dword ptr [esi+edi*8+0xB08],0
	je Block23

 Block17:
	cmp edi,3
	je Block21

 Block18:
	test edi,edi
	jne Block20

 Block19:
	mov eax,dword ptr [esi+0xB08]
	mov ecx,dword ptr [esi+0xB20]
	mov eax,dword ptr [eax+0xC]
	cmp eax,dword ptr [ecx+0xC]
	je Block21

 Block20:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push edi
	push ecx
	mov ecx,ebx
	call CUIFamilyChart::_GetOtherToolTip
	mov dword ptr [esp+0x30],2
	jmp Block22

 Block21:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push eax
	mov ecx,ebx
	call CUIFamilyChart::_GetMineToolTip
	mov dword ptr [esp+0x30],1

 Block22:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x3C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	add eax,ebp
	push eax
	lea ecx,[esi+0xBA8]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call CUIToolTip::SetToolTip_String_MultiLine
	jmp Block24

 Block23:
	lea ecx,[esi+0xBA8]
	call CUIToolTip::ClearToolTip

 Block24:
	xor eax,eax
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
// CUIFamilyChart::FamilyItem::~FamilyItem
_SUB_EXCEPTION_HANDLER(3B39B0)
__SUB_CLASS_THIS0(003B39B0, __thiscall, 45656,  CUIFamilyChart::FamilyItem, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B39B0
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
	mov dword ptr [esp+0x14],2
	call ZArray<ZRef<CUIFamilyChart::FamilyItem>>::RemoveAll
	mov eax,dword ptr [esi+0x38]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0x38]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0x38]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0x38],0

 Block5:
	mov eax,dword ptr [esi+0x30]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIFamily::OnButtonClicked
_SUB_EXCEPTION_HANDLER(3B2D80)
__SUB_CLASS_THIS(003B2D80, __thiscall, 45529,  CUIFamily, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B2D80
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
	mov ecx,dword ptr [esp+0x24]
	lea eax,[ecx-0x7D0]
	cmp eax,5
	ja Block35

 Block1:
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block11
cmp EAX, 2
je Block18
cmp EAX, 3
je Block25
cmp EAX, 4
je Block20
cmp EAX, 5
je Block2


 Block2:
	call _anon_RegisterJunior_
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4

 Block3:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	push 0x1B
	call CWvsContext::UI_Open
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x20CC]
	test eax,eax
	je Block5

 Block4:
	lea ecx,[eax+4]
	jmp Block6

 Block5:
	xor ecx,ecx

 Block6:
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [edi],0
	test ecx,ecx
	je Block10

 Block7:
	mov eax,ecx
	lea esi,[eax+1]

 Block8:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block8

 Block9:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
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

 Block10:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::SendFamilyChartRequest
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4

 Block11:
	mov edi,dword ptr [esi+0x156C]
	mov ecx,edi
	call ZArray<ZRef<PrivilegeItem>>::IsEmpty
	test eax,eax
	jne Block36

 Block12:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block14

 Block13:
	mov eax,dword ptr [eax-4]

 Block14:
	dec eax
	add dword ptr [esi+0x1570],eax

 Block15:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [esi+0x1570]
	test ecx,ecx
	je Block17

 Block16:
	mov ecx,dword ptr [ecx-4]

 Block17:
	xor edx,edx
	div ecx
	push 0
	mov ecx,esi
	mov dword ptr [esi+0x1570],edx
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4

 Block18:
	mov edi,dword ptr [esi+0x156C]
	mov ecx,edi
	call ZArray<ZRef<PrivilegeItem>>::IsEmpty
	test eax,eax
	jne Block36

 Block19:
	inc dword ptr [esi+0x1570]
	jmp Block15

 Block20:
	mov edi,dword ptr [esi+0x156C]
	mov ecx,edi
	call ZArray<ZRef<PrivilegeItem>>::IsEmpty
	test eax,eax
	jne Block36

 Block21:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block23

 Block22:
	mov eax,dword ptr [eax-4]

 Block23:
	mov esi,dword ptr [esi+0x1570]
	cmp esi,eax
	jae Block36

 Block24:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	call CWvsContext::SendUseFamilyPrivilege
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4

 Block25:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x1C],0
	test eax,eax
	je Block34

 Block26:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block34

 Block27:
	add eax,8
	je Block34

 Block28:
	lea edi,[eax-8]
	mov dword ptr [esp+0x10],edi
	test edi,edi
	je Block30

 Block29:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block30:
	push 0
	push 1
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0x11FC
	push edx
	mov dword ptr [esp+0x30],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0
	push 3
	mov ecx,edi
	call CUtilDlgEx::SetUtilDlgEx_1
	mov eax,dword ptr [esi+0x1568]
	mov eax,dword ptr [eax+0x1C]
	push 0
	push 0
	push 0xC8
	push 1
	push eax
	mov ecx,edi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_STR
	mov ecx,edi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,edi
	call CDialog::DoModal
	cmp eax,1
	jne Block32

 Block31:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push ecx
	mov ecx,edi
	call CUtilDlgEx::GetInputStr_Result
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::SendSetFamilyPrecept

 Block32:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test edi,edi
	je Block36

 Block33:
	push 0
	lea ecx,[esp+0x10]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4

 Block34:
	xor edi,edi
	mov dword ptr [esp+0x10],edi
	jmp Block30

 Block35:
	push ecx
	mov ecx,esi
	call CUIWnd::OnButtonClicked

 Block36:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4
}
}
// CUIFamilyChart::OnButtonClicked
__SUB_CLASS_THIS(003B5450, __thiscall, 45567,  CUIFamilyChart, void, uint32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,edx
	sub eax,0x7D0
	je Block4

 Block1:
	sub eax,1
	je Block3

 Block2:
	mov dword ptr [esp+4],edx
	jmp  CUIWnd::OnButtonClicked

 Block3:
	call CUIFamilyChart::_UnregisterCharacter
	ret 4

 Block4:
	call _anon_RegisterJunior_
	ret 4
}
}
// _anon_CopyChild_
__SUB(003B1BD0, __cdecl, 87263,  void, ZRef<CUIFamilyChart::FamilyItem>*, ZArray<ZRef<CUIFamilyChart::FamilyItem> >&, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov eax,dword ptr [eax]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	mov ecx,dword ptr [esp+0xC]
	cmp ecx,eax
	jge Block4

 Block3:
	mov eax,ecx

 Block4:
	test eax,eax
	jle Block15

 Block5:
	mov ecx,dword ptr [esp+4]
	push ebx
	push ebp
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	push esi
	mov ebx,0xFFFFFFFC
	push edi
	lea esi,[ecx+4]
	sub ebx,ecx
	mov dword ptr [esp+0x1C],eax

 Block6:
	mov ecx,dword ptr [esp+0x18]
	lea edi,[ebx+esi]
	add edi,dword ptr [ecx]
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block8

 Block7:
	add eax,4
	push eax
	call ebp

 Block8:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block13

 Block9:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block10:
	mov edx,dword ptr [esi]
	add edx,4
	push edx
	call ebp
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block12

 Block11:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block12:
	mov dword ptr [esi],0

 Block13:
	mov eax,dword ptr [edi+4]
	mov dword ptr [esi],eax
	add esi,8
	sub dword ptr [esp+0x1C],1
	jne Block6

 Block14:
	pop edi
	pop esi
	pop ebp
	pop ebx

 Block15:
	ret
}
}
// CUIFamily::Draw
_SUB_EXCEPTION_HANDLER(3B4B50)
__SUB_CLASS_THIS(003B4B50, __thiscall, 45527,  CUIFamily, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B4B50
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
	mov esi,ecx
	mov eax,dword ptr [esp+0x54]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	lea edx,[esp+0x54]
	push 0x18
	xor ebx,ebx
	push edx
	mov dword ptr [esp+0x54],ebx
	call get_basic_font
	add esp,8
	mov dword ptr [esp+0x20],ebx
	mov eax,dword ptr [esi+0x1568]
	add eax,0x18
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],2
	cmp eax,ebx
	je Block3

 Block1:
	cmp byte ptr [eax],bl
	je Block3

 Block2:
	lea eax,[esp+0x28]
	push 0x1202
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x1568]
	mov edx,dword ptr [ecx+0x18]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x58],3
	call ZXString<char>::Format
	add esp,0xC
	jmp Block4

 Block3:
	lea ecx,[esp+0x28]
	push 0x1200
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x50],4
	call ZXString<char>::op_assign

 Block4:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x4C],2
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov edx,dword ptr [esp+0x20]
	push 1
	push edx
	push 0xD1
	push 0x22
	push 7
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push ebx
	push eax
	call get_basic_font
	mov ebp,dword ptr [esp+0x4C]
	add esp,4
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [eax],ebp
	cmp ebp,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+4]
	push ebp
	call edx

 Block8:
	call _anon_DrawTextAlign_
	mov dword ptr [esp+0x44],ebx
	mov eax,dword ptr [esi+0x1568]
	movzx ecx,word ptr [eax+0xE]
	movzx edx,word ptr [eax+0xC]
	push ecx
	push edx
	lea eax,[esp+0x4C]
	push offset _S_DD__3
	push eax
	mov byte ptr [esp+0x78],5
	call ZXString<char>::Format
	mov ecx,dword ptr [esp+0x54]
	mov edx,dword ptr [esp+0x80]
	add esp,0x2C
	push 2
	push ecx
	push 0x1F
	push 0x4E
	push 0x2F
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x48],esp
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block10:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [eax],ebp
	cmp ebp,ebx
	je Block12

 Block11:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	push ebp
	call ecx

 Block12:
	call _anon_DrawTextAlign_
	mov eax,dword ptr [esi+0xB0C]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x1C]
	lea ecx,[eax+4]
	mov eax,dword ptr [esi+0x1568]
	mov di,word ptr [eax+0xC]
	add esp,0x1C
	cmp di,word ptr [eax+0xE]
	sbb eax,eax
	neg eax
	push eax
	call edx
	mov dword ptr [esp+0x24],ebx
	mov eax,dword ptr [esi+0x1568]
	mov ecx,dword ptr [eax+4]
	push ecx
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x54],6
	call format_comma_integer
	mov edi,eax
	mov eax,dword ptr [esi+0x1568]
	mov ecx,dword ptr [eax]
	push ecx
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x5C],7
	call format_comma_integer
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [eax]
	push ecx
	push edx
	lea eax,[esp+0x3C]
	push offset _S_SS__2
	push eax
	mov byte ptr [esp+0x6C],8
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x38]
	add esp,0x20
	mov byte ptr [esp+0x4C],7
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x4C],6
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x54]
	push 2
	push ecx
	push 0x99
	push 0x64
	push 0x2F
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x48],esp
	cmp eax,ebx
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block18:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [eax],ebp
	cmp ebp,ebx
	je Block20

 Block19:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	push ebp
	call ecx

 Block20:
	call _anon_DrawTextAlign_
	mov edx,dword ptr [esi+0x1568]
	mov eax,dword ptr [edx+8]
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	call format_comma_integer
	add esp,0x24
	mov edx,dword ptr [esi+0x1568]
	cmp dword ptr [edx+8],ebx
	mov byte ptr [esp+0x4C],9
	jl Block23

 Block21:
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x1C]
	push offset _S___35
	push ecx
	call __op_add_char_char
	add esp,0xC
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x50],0xA
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],9
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov edx,dword ptr [esp+0x1C]
	push 2
	push edx
	push 0x5C
	push 0x77
	push 0x6B
	push ecx
	mov ecx,dword ptr [esp+0x6C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x48],esp
	cmp eax,ebx
	je Block25

 Block24:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block25:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [eax],ebp
	cmp ebp,ebx
	je Block27

 Block26:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+4]
	push ebp
	call edx

 Block27:
	call _anon_DrawTextAlign_
	add esp,0x1C
	cmp dword ptr [esi+0x1574],ebx
	sete al
	cmp al,bl
	je Block29

 Block28:
	mov ecx,esi
	call CUIFamily::_MakePreceptLayer

 Block29:
	mov ecx,dword ptr [esi+0x156C]
	mov eax,dword ptr [ecx]
	cmp eax,ebx
	je Block89

 Block30:
	cmp dword ptr [eax-4],ebx
	je Block89

 Block31:
	cmp eax,ebx
	jne Block33

 Block32:
	xor edx,edx
	jmp Block34

 Block33:
	mov edx,dword ptr [eax-4]

 Block34:
	mov eax,dword ptr [esi+0x1570]
	lea edi,[esi+0x1570]
	cmp eax,edx
	jae Block89

 Block35:
	mov ecx,dword ptr [ecx]
	mov eax,dword ptr [ecx+eax*8+4]
	mov eax,dword ptr [eax+0x18]
	mov edx,dword ptr [esp+0x54]
	push 1
	push eax
	push 0xBF
	push 0xB6
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x48],esp
	cmp eax,ebx
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block37:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [eax],ebp
	cmp ebp,ebx
	je Block39

 Block38:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	push ebp
	call ecx

 Block39:
	call _anon_DrawTextAlign_
	mov dword ptr [esp+0x30],ebx
	mov eax,dword ptr [esi+0x156C]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [eax]
	lea eax,[eax+edx*8]
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x10]
	push ecx
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x70],0xB
	call format_comma_integer
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x3C]
	push offset _S_S__1
	push ecx
	mov byte ptr [esp+0x7C],0xC
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x48]
	add esp,0x30
	mov byte ptr [esp+0x4C],0xB
	cmp eax,ebx
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	mov edx,dword ptr [esp+0x14]
	push 2
	push edx
	push 0x29
	push 0xC9
	push 0x45
	push ecx
	mov ecx,dword ptr [esp+0x6C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x48],esp
	cmp eax,ebx
	je Block43

 Block42:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block43:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [eax],ebp
	cmp ebp,ebx
	je Block45

 Block44:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+4]
	push ebp
	call edx

 Block45:
	call _anon_DrawTextAlign_
	mov ecx,dword ptr [esi+0x1568]
	add esp,0x1C
	lea eax,[esp+0x18]
	push eax
	push edi
	add ecx,0x20
	mov dword ptr [esp+0x20],ebx
	call ZMap<long, long, long>::GetAt
	mov eax,dword ptr [esi+0x156C]
	mov edx,dword ptr [eax]
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [edx+ecx*8+4]
	mov eax,dword ptr [eax+0x14]
	mov ecx,dword ptr [esp+0x18]
	push eax
	push ecx
	lea edx,[esp+0x1C]
	push offset _S_DD__4
	push edx
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0x10
	push 2
	push eax
	push 0x21
	push 0xC9
	push 0xA6
	push ecx
	mov ecx,dword ptr [esp+0x6C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x48],esp
	cmp eax,ebx
	je Block47

 Block46:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block47:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [eax],ebp
	cmp ebp,ebx
	je Block49

 Block48:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+4]
	push ebp
	call edx

 Block49:
	call _anon_DrawTextAlign_
	mov eax,dword ptr [esi+0x156C]
	mov eax,dword ptr [eax]
	add esp,0x1C
	cmp eax,ebx
	jne Block51

 Block50:
	xor eax,eax
	jmp Block52

 Block51:
	mov eax,dword ptr [eax-4]

 Block52:
	push eax
	mov eax,dword ptr [edi]
	inc eax
	push eax
	lea ecx,[esp+0x1C]
	push offset _S_02D02D__1
	push ecx
	call ZXString<char>::Format
	mov edx,dword ptr [esp+0x24]
	add esp,0x10
	push ebx
	push edx
	push 0x28
	push 0x99
	push 0xA3
	push ecx
	mov ecx,dword ptr [esp+0x6C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x48],esp
	cmp eax,ebx
	je Block54

 Block53:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block54:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [eax],ebp
	cmp ebp,ebx
	je Block56

 Block55:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+4]
	push ebp
	call edx

 Block56:
	call _anon_DrawTextAlign_
	mov edx,dword ptr [esi+0x1568]
	mov eax,dword ptr [edx+0x18]
	add esp,0x1C
	cmp eax,ebx
	je Block62

 Block57:
	cmp byte ptr [eax],bl
	je Block62

 Block58:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [esi+0x156C]
	mov ebx,dword ptr [ecx]
	mov edx,dword ptr [edx]
	add eax,eax
	add eax,eax
	add eax,eax
	mov ebx,dword ptr [ebx+eax+4]
	cmp edx,dword ptr [ebx+0x10]
	jl Block61

 Block59:
	mov ecx,dword ptr [ecx]
	mov eax,dword ptr [ecx+eax+4]
	mov edx,dword ptr [esp+0x18]
	cmp edx,dword ptr [eax+0x14]
	jae Block61

 Block60:
	mov edx,1
	xor ebx,ebx
	jmp Block63

 Block61:
	xor ebx,ebx

 Block62:
	xor edx,edx

 Block63:
	mov eax,dword ptr [esi+0xB1C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x1C]
	call edx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push 6
	push eax
	call get_basic_font
	mov ecx,dword ptr [esp+0x68]
	add esp,4
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x5C],0xD
	mov dword ptr [esp+0x28],esp
	cmp eax,ebx
	je Block65

 Block64:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block65:
	mov eax,dword ptr [esi+0x156C]
	mov edx,dword ptr [eax]
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [edx+ecx*8+4]
	mov eax,dword ptr [eax+0x1C]
	push eax
	push 1
	push 0xDC
	push 0xBE
	push 0xD
	push ecx
	mov eax,esp
	mov byte ptr [esp+0x74],0xE
	mov dword ptr [eax],ebx
	mov dword ptr [esp+0x58],esp
	mov byte ptr [esp+0x74],0xB
	call DrawTextSepartedLine
	add esp,0x28
	cmp eax,0x41
	jge Block71

 Block66:
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push 6
	push eax
	call get_basic_font
	mov ecx,dword ptr [esp+0x68]
	add esp,4
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x64]
	mov dword ptr [esp+0x40],esp
	cmp eax,ebx
	je Block68

 Block67:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block68:
	mov esi,dword ptr [esi+0x156C]
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+ecx*8+4]
	mov eax,dword ptr [eax+0x1C]
	push eax
	push 1
	push 0xDC
	push 0xBE
	push 0xD
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x58],esp
	mov dword ptr [eax],ebp
	cmp ebp,ebx
	je Block70

 Block69:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	push ebp
	call ecx

 Block70:
	call DrawTextSepartedLine
	add esp,0x28
	jmp Block87

 Block71:
	mov dword ptr [esp+0x18],ebx
	lea edx,[esp+0x30]
	push 0x5AF
	push edx
	mov byte ptr [esp+0x54],0xF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x1C]
	push ecx
	push eax
	mov byte ptr [esp+0x58],0x10
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov byte ptr [esp+0x4C],0xF
	cmp eax,ebx
	je Block73

 Block72:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block73:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	lea ecx,[esp+0x34]
	push ecx
	push 0xFF555555
	push 9
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	push edx
	mov byte ptr [esp+0x64],0x11
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0x5C],0x12
	cmp ecx,ebx
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	mov byte ptr [esp+0x5C],0x11
	call IWzFont::Create
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x4C],0xF
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebx
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push 6
	push edx
	call get_basic_font
	mov ecx,dword ptr [esp+0x2C]
	add esp,4
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x40],esp
	cmp eax,ebx
	je Block83

 Block82:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block83:
	mov esi,dword ptr [esi+0x156C]
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+ecx*8+4]
	mov eax,dword ptr [eax+0x1C]
	push eax
	push 1
	push 0xDC
	push 0xBE
	push 0xD
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x58],esp
	mov dword ptr [eax],ebp
	cmp ebp,ebx
	je Block85

 Block84:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	push ebp
	call ecx

 Block85:
	call DrawTextSepartedLine
	mov eax,dword ptr [esp+0x40]
	add esp,0x28
	mov byte ptr [esp+0x4C],0xB
	cmp eax,ebx
	je Block87

 Block86:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block87:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x4C],9
	cmp eax,ebx
	je Block89

 Block88:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block89:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x4C],6
	cmp eax,ebx
	je Block91

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block91:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x4C],5
	cmp eax,ebx
	je Block93

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block93:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x4C],2
	cmp eax,ebx
	je Block95

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block95:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x4C],1
	cmp eax,ebx
	je Block97

 Block96:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block97:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block99

 Block98:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block99:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp ebp,ebx
	je Block101

 Block100:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block101:
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
// CUIFamilyChart::_UnregisterCharacter
_SUB_EXCEPTION_HANDLER(3B4040)
__SUB_CLASS_THIS0(003B4040, __thiscall, 45564,  CUIFamilyChart, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B4040
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
	mov dword ptr [esp+0x14],esi
	mov eax,dword ptr [esi+0xB94]
	xor edi,edi
	cmp eax,edi
	jge Block44

 Block1:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x40],edi
	cmp eax,edi
	je Block14

 Block2:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	cmp eax,edi
	je Block14

 Block3:
	add eax,8
	cmp eax,edi
	je Block14

 Block4:
	lea ebx,[eax-8]
	mov dword ptr [esp+0x20],ebx
	cmp ebx,edi
	je Block6

 Block5:
	lea eax,[ebx+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	push edi
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x11FB
	push ecx
	mov dword ptr [esp+0x54],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push edi
	push 3
	mov ecx,ebx
	call CUtilDlgEx::SetUtilDlgEx_1
	push edi
	push edi
	push 0xC
	push 4
	push offset _S_
	mov ecx,ebx
	call CUtilDlgEx::SetUtilDlgEx_INPUT_STR
	mov ecx,ebx
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,ebx
	call CDialog::DoModal
	cmp eax,1
	jne Block12

 Block7:
	lea edx,[esp+0x14]
	push edx
	mov ecx,ebx
	call CUtilDlgEx::GetInputStr_Result
	mov esi,dword ptr [esi+0xB24]
	mov dword ptr [esp+0x28],esi
	cmp esi,edi
	je Block9

 Block8:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	cmp esi,edi
	jne Block15

 Block10:
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x40],2
	call ZRef<CUIFamilyChart::FamilyItem>::~ZRef<CUIFamilyChart::FamilyItem>
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x40],1
	cmp eax,edi
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov dword ptr [esp+0x40],0xFFFFFFFF
	cmp ebx,edi
	je Block77

 Block13:
	push edi
	lea ecx,[esp+0x20]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block14:
	mov dword ptr [esp+0x20],edi
	mov ebx,edi
	jmp Block6

 Block15:
	mov ebp,dword ptr [esi+0x38]
	mov dword ptr [esp+0x30],ebp
	cmp ebp,edi
	je Block17

 Block16:
	lea ecx,[ebp+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	mov byte ptr [esp+0x40],4
	cmp ebp,edi
	je Block24

 Block18:
	lea edx,[esp+0x14]
	push edx
	lea ecx,[ebp+0x30]
	call ZXString<char>::op_eq_0
	test eax,eax
	je Block24

 Block19:
	sub esp,8
	lea eax,[esp+0x34]
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	call ZRef<CUIFamilyChart::FamilyItem>::_ctor_copy
	sub esp,8
	lea edx,[esp+0x34]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	call ZRef<CUIFamilyChart::FamilyItem>::_ctor_copy
	call _anon_UnregisterParent_
	add esp,0x10
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x40],3
	call ZRef<CUIFamilyChart::FamilyItem>::~ZRef<CUIFamilyChart::FamilyItem>
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x40],2
	call ZRef<CUIFamilyChart::FamilyItem>::~ZRef<CUIFamilyChart::FamilyItem>
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x40],1
	cmp eax,edi
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block24:
	mov eax,dword ptr [esi+0x3C]
	test eax,eax
	je Block34

 Block25:
	cmp edi,dword ptr [eax-4]
	jae Block34

 Block26:
	mov eax,dword ptr [eax+edi*8+4]
	test eax,eax
	je Block28

 Block27:
	lea ecx,[esp+0x14]
	push ecx
	lea ecx,[eax+0x30]
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block29

 Block28:
	inc edi
	jmp Block24

 Block29:
	mov edx,dword ptr [esi+0x3C]
	lea eax,[edx+edi*8]
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block31

 Block30:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block31:
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],esi
	mov dword ptr [esp+0x28],esp
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	call _anon_UnregisterChild_
	add esp,0x10
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x40],3
	call ZRef<CUIFamilyChart::FamilyItem>::~ZRef<CUIFamilyChart::FamilyItem>
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x40],2
	call ZRef<CUIFamilyChart::FamilyItem>::~ZRef<CUIFamilyChart::FamilyItem>
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x40],1
	test eax,eax
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	test ebx,ebx
	jmp Block42

 Block34:
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	mov byte ptr [esp+0x40],3
	test ebp,ebp
	je Block37

 Block35:
	lea edi,[ebp+4]
	push edi
	call ebx
	test eax,eax
	jne Block37

 Block36:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebp
	call edx

 Block37:
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x44],2
	call ebx
	test eax,eax
	jne Block39

 Block38:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block39:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x40],1
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	cmp dword ptr [esp+0x20],0

 Block42:
	mov dword ptr [esp+0x40],0xFFFFFFFF
	je Block77

 Block43:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block44:
	mov ebp,dword ptr [esi+eax*8+0xB0C]
	mov dword ptr [esp+0x28],ebp
	cmp ebp,edi
	je Block46

 Block45:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block46:
	mov esi,dword ptr [esi+0xB24]
	mov dword ptr [esp+0x40],5
	mov dword ptr [esp+0x20],esi
	cmp esi,edi
	je Block48

 Block47:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block48:
	cmp ebp,edi
	je Block71

 Block49:
	cmp esi,edi
	je Block71

 Block50:
	mov edi,dword ptr [esi+0x38]
	mov ebx,dword ptr [ebp+0xC]
	mov dword ptr [esp+0x30],edi
	test edi,edi
	je Block52

 Block51:
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block52:
	mov byte ptr [esp+0x40],7
	test edi,edi
	je Block55

 Block53:
	cmp dword ptr [edi+0xC],ebx
	jne Block55

 Block54:
	sub esp,8
	lea eax,[esp+0x34]
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	call ZRef<CUIFamilyChart::FamilyItem>::_ctor_copy
	sub esp,8
	lea edx,[esp+0x2C]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	call ZRef<CUIFamilyChart::FamilyItem>::_ctor_copy
	call _anon_UnregisterParent_
	mov eax,dword ptr [esp+0x24]
	or esi,0xFFFFFFFF
	add esp,0x10
	lea ecx,[esp+0x2C]
	mov dword ptr [eax+0xB94],esi
	mov byte ptr [esp+0x40],6
	call ZRef<CUIFamilyChart::FamilyItem>::~ZRef<CUIFamilyChart::FamilyItem>
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x40],5
	call ZRef<CUIFamilyChart::FamilyItem>::~ZRef<CUIFamilyChart::FamilyItem>
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x40],esi
	call ZRef<CUIFamilyChart::FamilyItem>::~ZRef<CUIFamilyChart::FamilyItem>
	mov ecx,dword ptr [esp+0x38]
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
	xor eax,eax
	lea esp,[esp]

 Block56:
	mov ecx,dword ptr [esi+0x3C]
	test ecx,ecx
	je Block64

 Block57:
	cmp eax,dword ptr [ecx-4]
	jae Block64

 Block58:
	mov ecx,dword ptr [ecx+eax*8+4]
	test ecx,ecx
	je Block60

 Block59:
	cmp dword ptr [ecx+0xC],ebx
	je Block61

 Block60:
	inc eax
	jmp Block56

 Block61:
	mov edx,dword ptr [esi+0x3C]
	sub esp,8
	lea eax,[edx+eax*8]
	mov eax,dword ptr [eax+4]
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block63

 Block62:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block63:
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],esi
	mov dword ptr [esp+0x28],esp
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	call _anon_UnregisterChild_
	mov eax,dword ptr [esp+0x24]
	or esi,0xFFFFFFFF
	add esp,0x10
	lea ecx,[esp+0x2C]
	mov dword ptr [eax+0xB94],esi
	mov byte ptr [esp+0x40],6
	call ZRef<CUIFamilyChart::FamilyItem>::~ZRef<CUIFamilyChart::FamilyItem>
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x40],5
	call ZRef<CUIFamilyChart::FamilyItem>::~ZRef<CUIFamilyChart::FamilyItem>
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x40],esi
	call ZRef<CUIFamilyChart::FamilyItem>::~ZRef<CUIFamilyChart::FamilyItem>
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block64:
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	mov byte ptr [esp+0x40],6
	test edi,edi
	je Block68

 Block65:
	lea ebp,[edi+4]
	push ebp
	call ebx
	test eax,eax
	jne Block67

 Block66:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block67:
	mov ebp,dword ptr [esp+0x28]

 Block68:
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x44],5
	call ebx
	test eax,eax
	jne Block70

 Block69:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block70:
	mov dword ptr [esp+0x40],0xFFFFFFFF
	jmp Block75

 Block71:
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	mov byte ptr [esp+0x40],5
	cmp esi,edi
	je Block74

 Block72:
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block74

 Block73:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block74:
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test ebp,ebp
	je Block77

 Block75:
	lea esi,[ebp+4]
	push esi
	call ebx
	test eax,eax
	jne Block77

 Block76:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block77:
	mov ecx,dword ptr [esp+0x38]
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
