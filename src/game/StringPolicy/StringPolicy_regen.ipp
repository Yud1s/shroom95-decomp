#include "regen.hpp"
// StringPolicy.ipp
#include "StringPolicy.hpp"

// CCurseProcess::SearchSubstring
__SUB(003469E0, __cdecl, 37697,  char*, char*, const char*) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov al,byte ptr [edi]
	test al,al
	je Block9

 Block1:
	mov ebp,dword ptr [ZImports::_IsDBCSLeadByte]

 Block2:
	cmp byte ptr [edi+1],0
	je Block9

 Block3:
	mov esi,edi
	test al,al
	je Block8

 Block4:
	mov ebx,dword ptr [esp+0x18]
	sub ebx,edi

 Block5:
	movzx eax,byte ptr [ebx+esi]
	movzx ecx,byte ptr [esi]
	push eax
	push ecx
	call CCurseProcess::IsCharEqual
	add esp,8
	test eax,eax
	je Block8

 Block6:
	inc esi
	cmp byte ptr [ebx+esi],0
	je Block10

 Block7:
	cmp byte ptr [esi],0
	jne Block5

 Block8:
	movzx edx,byte ptr [edi]
	push edx
	call ebp
	neg eax
	sbb eax,eax
	neg eax
	inc eax
	add edi,eax
	mov al,byte ptr [edi]
	test al,al
	jne Block2

 Block9:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret

 Block10:
	mov eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret
}
}
// CCurseProcess::Strchr
__SUB(003469B0, __cdecl, 37707,  const char*, const char*, char) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	cmp byte ptr [esi],0
	push edi
	je Block4

 Block1:
	mov edi,dword ptr [esp+0x10]
	nop

 Block2:
	movzx eax,byte ptr [esi]
	push edi
	push eax
	call CCurseProcess::IsCharEqual
	add esp,8
	test eax,eax
	jne Block5

 Block3:
	inc esi
	cmp byte ptr [esi],al
	jne Block2

 Block4:
	pop edi
	xor eax,eax
	pop esi
	ret

 Block5:
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CCurseProcess::GetSwindleWarning
_SUB_EXCEPTION_HANDLER(347BC0)
__SUB(00347BC0, __cdecl, 37694,  int32_t, char*, ZXString<char>&) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x404]
	sub esp,0x404
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_347BC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x98
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x400],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ebp+0x40C]
	mov ecx,dword ptr [ebp+0x410]
	mov esi,dword ptr [ZImports::_VariantInit]
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov dword ptr [ebp-0x1C],eax
	mov eax,dword ptr [_D_S_ALSWINDLE]
	xor edi,edi
	mov dword ptr [ebp-0x74],ecx
	cmp eax,edi
	je Block2

 Block1:
	cmp dword ptr [eax-4],edi
	jne Block79

 Block2:
	lea edx,[ebp-0x84]
	push edx
	call esi
	lea eax,[ebp-0x84]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea ecx,[ebp-0x94]
	push ecx
	mov dword ptr [ebp-4],edi
	call esi
	lea edx,[ebp-0x94]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	push edi
	push edi
	lea eax,[ebp-0x84]
	push eax
	lea ecx,[ebp-0x94]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x24],esp
	push 0x5C0
	push edx
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[ebp-0xA4]
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x28]
	mov dword ptr [ebp-0x28],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov esi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0xA4],si
	jne Block14

 Block12:
	mov eax,dword ptr [ebp-0x9C]
	xor ecx,ecx
	mov word ptr [ebp-0xA4],cx
	cmp eax,edi
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[ebp-0xA4]
	push edx
	call ebx

 Block15:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x94],si
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [ebp-0x94],ax
	mov eax,dword ptr [ebp-0x8C]
	cmp eax,edi
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[ebp-0x94]
	push ecx
	call ebx

 Block19:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x84],si
	jne Block22

 Block20:
	mov eax,dword ptr [ebp-0x7C]
	xor edx,edx
	mov word ptr [ebp-0x84],dx
	cmp eax,edi
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea eax,[ebp-0x84]
	push eax
	call ebx

 Block23:
	mov ebx,dword ptr [ebp-0x28]
	cmp ebx,edi
	sete al
	test al,al
	je Block26

 Block24:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp ebx,edi
	je Block138

 Block25:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx
	jmp Block138

 Block26:
	cmp ebx,edi
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp-0x18]
	push ecx
	push ebx
	mov dword ptr [ebp-0x18],edi
	call edx
	cmp eax,edi
	jge Block30

 Block29:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block30:
	mov ecx,dword ptr [ebp-0x18]
	lea eax,[ebp-0x2D]
	push eax
	push ecx
	mov ecx,offset _D_S_ALSWINDLE
	call ZArray<ZList<ZXString<char>>>::_Alloc
	xor esi,esi
	mov dword ptr [ebp-0x18],esi
	mov dword ptr [ebp-0x2C],edi
	nop

 Block31:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp-0x14]
	push eax
	push ebx
	mov dword ptr [ebp-0x14],edi
	call ecx
	cmp eax,edi
	jge Block33

 Block32:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block33:
	cmp esi,dword ptr [ebp-0x14]
	jae Block78

 Block34:
	mov dword ptr [ebp-0x20],edi
	lea edx,[ebp-0x24]
	push 0x5C1
	push edx
	mov byte ptr [ebp-4],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea eax,[ebp-0x20]
	push eax
	mov byte ptr [ebp-4],9
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x24]
	add esp,0xC
	mov byte ptr [ebp-4],8
	cmp eax,edi
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block36:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x50]
	push ecx
	call esi
	lea edx,[ebp-0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block3

 Block37:
	lea eax,[ebp-0x40]
	push eax
	mov byte ptr [ebp-4],0xA
	call esi
	lea ecx,[ebp-0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block3

 Block38:
	push edi
	push edi
	lea edx,[ebp-0x50]
	push edx
	mov edx,dword ptr [ebp-0x20]
	lea eax,[ebp-0x40]
	push eax
	push ecx
	mov dword ptr [ebp-0x10],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0xB
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0xC
	cmp dword ptr [_D_G_RM],edi
	je Block7

 Block39:
	lea eax,[ebp-0x70]
	mov byte ptr [ebp-4],0xB
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x10]
	mov dword ptr [ebp-0x10],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block41

 Block40:
	cmp eax,0x80004002
	jne Block3

 Block41:
	mov esi,8
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x70],si
	jne Block44

 Block42:
	mov eax,dword ptr [ebp-0x68]
	xor ecx,ecx
	mov word ptr [ebp-0x70],cx
	cmp eax,edi
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea edx,[ebp-0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x40],si
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	cmp eax,edi
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x50],si
	jne Block52

 Block50:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	cmp eax,edi
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov esi,dword ptr [ebp-0x10]
	cmp esi,edi
	sete al
	test al,al
	jne Block73

 Block54:
	xor ebx,ebx
	jmp Block56

 Block56:
	cmp esi,edi
	je Block7

 Block57:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp-0x14]
	push edx
	push esi
	mov dword ptr [ebp-0x14],edi
	call eax
	cmp eax,edi
	jge Block59

 Block58:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block59:
	cmp ebx,dword ptr [ebp-0x14]
	jae Block70

 Block60:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x60]
	push ecx
	mov byte ptr [ebp-4],0x12
	mov ecx,esi
	mov byte ptr [ebp-4],0x11
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x13
	jne Block62

 Block61:
	mov eax,dword ptr [eax+8]
	jmp Block63

 Block62:
	mov eax,offset _S___3

 Block63:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],edi
	call ZXString<char>::AssignWideStr
	mov edx,dword ptr [_D_S_ALSWINDLE]
	mov eax,dword ptr [ebp-0x2C]
	lea ecx,[eax+edx]
	mov byte ptr [ebp-4],0x14
	call ZList<ZXString<char>>::AddTail_
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0x13
	cmp eax,edi
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block65:
	cmp word ptr [ebp-0x60],8
	mov byte ptr [ebp-4],0x11
	jne Block68

 Block66:
	mov eax,dword ptr [ebp-0x58]
	xor edx,edx
	mov word ptr [ebp-0x60],dx
	cmp eax,edi
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc ebx
	jmp Block56

 Block68:
	lea eax,[ebp-0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block69:
	inc ebx
	jmp Block56

 Block70:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],8
	call edx
	mov eax,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],7
	cmp eax,edi
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block72:
	inc dword ptr [ebp-0x18]
	add dword ptr [ebp-0x2C],0x14
	mov ebx,dword ptr [ebp-0x28]
	mov esi,dword ptr [ebp-0x18]
	jmp Block31

 Block73:
	mov byte ptr [ebp-4],8
	cmp esi,edi
	je Block75

 Block74:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block75:
	mov byte ptr [ebp-4],7
	cmp dword ptr [ebp-0x20],edi
	je Block77

 Block76:
	mov edx,dword ptr [ebp-0x20]
	add edx,0xFFFFFFF4
	push edx
	call ZXString16::_Release
	add esp,4

 Block77:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ecx
	jmp Block138

 Block78:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call eax

 Block79:
	mov ecx,dword ptr [_D_S_FILTERCHARS]
	mov eax,dword ptr [ebp-0x1C]
	push 1
	push ecx
	lea edx,[ebp]
	push edx
	push eax
	call CCurseProcess::FilterChar
	mov ecx,dword ptr [_D_S_ALSWINDLE]
	add esp,0x10
	cmp ecx,edi
	jne Block81

 Block80:
	xor esi,esi
	jmp Block82

 Block81:
	mov esi,dword ptr [ecx-4]

 Block82:
	dec esi
	cmp esi,edi
	jl Block138

 Block83:
	lea ebx,[esi+esi*4]
	add ebx,ebx
	add ebx,ebx

 Block84:
	mov eax,dword ptr [ebx+ecx+0xC]
	mov dword ptr [ebp-0x10],eax
	cmp eax,edi
	je Block89

 Block85:
	lea esp,[esp]

 Block86:
	lea ecx,[ebp-0x10]
	push ecx
	call ZList<ZXString<char>>::GetNext
	mov eax,dword ptr [eax]
	push eax
	lea edx,[ebp]
	push edx
	call CCurseProcess::SearchSubstring
	add esp,0xC
	cmp eax,edi
	jne Block91

 Block87:
	cmp dword ptr [ebp-0x10],edi
	jne Block86

 Block88:
	mov ecx,dword ptr [_D_S_ALSWINDLE]

 Block89:
	dec esi
	sub ebx,0x14
	cmp esi,edi
	jge Block84

 Block90:
	jmp Block138

 Block91:
	call timeGetTime
	sub eax,dword ptr [CCurseProcess::s_dwLastWarn]
	cmp eax,0x2710
	jb Block138

 Block92:
	mov dword ptr [ebp-0x18],edi
	lea eax,[ebp-0x1C]
	push 0x5C2
	push eax
	mov dword ptr [ebp-4],0x15
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[ebp-0x18]
	push ecx
	mov byte ptr [ebp-4],0x16
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x1C]
	add esp,0xC
	mov byte ptr [ebp-4],0x15
	cmp eax,edi
	je Block94

 Block93:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block94:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x40]
	push edx
	call esi
	lea eax,[ebp-0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	lea ecx,[ebp-0x50]
	push ecx
	mov byte ptr [ebp-4],0x17
	call esi
	lea edx,[ebp-0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	mov edi,dword ptr [ebp-0x18]
	push 0
	push 0
	lea eax,[ebp-0x40]
	push eax
	lea ecx,[ebp-0x50]
	push ecx
	push ecx
	mov dword ptr [ebp-0x1C],esp
	mov ecx,esp
	mov bl,0x18
	push edi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x19
	jne Block100

 Block99:
	push 0x80004003
	call _com_issue_error

 Block100:
	lea edx,[ebp-0x60]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1A
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp-0x24],esi
	test eax,eax
	je Block104

 Block101:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x1C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x1C]
	mov esi,ecx
	mov dword ptr [ebp-0x24],esi
	test eax,eax
	jge Block104

 Block102:
	cmp eax,0x80004002
	je Block104

 Block103:
	push eax
	call _com_issue_error

 Block104:
	mov ebx,8
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp-0x60],bx
	jne Block107

 Block105:
	mov eax,dword ptr [ebp-0x58]
	xor edx,edx
	mov word ptr [ebp-0x60],dx
	test eax,eax
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea eax,[ebp-0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block108:
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp-0x50],bx
	jne Block111

 Block109:
	mov eax,dword ptr [ebp-0x48]
	xor ecx,ecx
	mov word ptr [ebp-0x50],cx
	test eax,eax
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea edx,[ebp-0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block112:
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0x40],bx
	jne Block115

 Block113:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block116:
	test esi,esi
	sete al
	test al,al
	jne Block134

 Block117:
	test esi,esi
	jne Block119

 Block118:
	push 0x80004003
	call _com_issue_error

 Block119:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp-0x10]
	push eax
	push esi
	mov dword ptr [ebp-0x10],0
	call ecx
	test eax,eax
	jge Block121

 Block120:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block121:
	cmp dword ptr [ebp-0x10],0
	je Block134

 Block122:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	mov ebx,esp
	lea eax,[ebp-0x10]
	push eax
	push esi
	mov dword ptr [ebp-0x10],0
	call ecx
	test eax,eax
	jge Block124

 Block123:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block124:
	mov edi,dword ptr [ebp-0x10]
	call _rand
	xor edx,edx
	div edi
	push 0xA
	push ebx
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x1C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x70]
	mov byte ptr [ebp-4],0x1F
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x1E
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x20
	jne Block126

 Block125:
	mov eax,dword ptr [eax+8]
	jmp Block127

 Block126:
	mov eax,offset _S___3

 Block127:
	mov ecx,dword ptr [ebp-0x74]
	push 0xFFFFFFFF
	push eax
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x70],8
	mov byte ptr [ebp-4],0x1E
	jne Block130

 Block128:
	xor eax,eax
	mov word ptr [ebp-0x70],ax
	mov eax,dword ptr [ebp-0x68]
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea ecx,[ebp-0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	call timeGetTime
	mov dword ptr [CCurseProcess::s_dwLastWarn],eax
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0x15
	call eax
	mov eax,dword ptr [ebp-0x18]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block133

 Block132:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block133:
	mov eax,1
	jmp Block139

 Block134:
	mov byte ptr [ebp-4],0x15
	test esi,esi
	je Block136

 Block135:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block136:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test edi,edi
	je Block138

 Block137:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block138:
	xor eax,eax

 Block139:
	lea esp,[ebp-0xB4]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x400]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x404
	mov esp,ebp
	pop ebp
	ret
}
}
// CCurseProcess::IsCharEqual
__SUB(00346980, __cdecl, 37705,  int32_t, char, char) {
__asm {

 Block0:
	movsx eax,byte ptr [esp+4]
	push esi
	push eax
	call __mbctolower
	movsx ecx,byte ptr [esp+0x10]
	push ecx
	mov esi,eax
	call __mbctolower
	xor edx,edx
	add esp,8
	cmp esi,eax
	sete dl
	pop esi
	mov eax,edx
	ret
}
}
// CCurseProcess::FilterChar
__SUB(00346A50, __cdecl, 37699,  void, const char*, char*, const char*, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	cmp byte ptr [esi],0
	push edi
	mov edi,dword ptr [esp+0x10]
	je Block10

 Block1:
	push ebx
	mov ebx,dword ptr [esp+0x1C]
	push ebp
	mov ebp,dword ptr [esp+0x1C]
	lea esp,[esp]

 Block2:
	mov al,byte ptr [esi]
	cmp al,0x20
	jae Block6

 Block3:
	test ebx,ebx
	jne Block8

 Block4:
	cmp al,0xD
	je Block6

 Block5:
	cmp al,0xA
	jne Block8

 Block6:
	push eax
	push ebp
	call CCurseProcess::Strchr
	add esp,8
	test eax,eax
	jne Block8

 Block7:
	mov al,byte ptr [esi]
	mov byte ptr [edi],al
	inc edi

 Block8:
	inc esi
	cmp byte ptr [esi],0
	jne Block2

 Block9:
	pop ebp
	pop ebx

 Block10:
	mov byte ptr [edi],0
	pop edi
	pop esi
	ret
}
}
// CCurseProcess::IsGood
__SUB(00346B80, __cdecl, 37702,  int32_t, char*, int32_t) {
__asm {

 Block0:
	sub esp,0x404
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x400],eax
	push esi
	mov esi,dword ptr [esp+0x40C]
	mov eax,esi
	lea edx,[eax+1]

 Block1:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block1

 Block2:
	sub eax,edx
	cmp eax,0x3FF
	jb Block4

 Block3:
	xor eax,eax
	pop esi
	mov ecx,dword ptr [esp+0x400]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x404
	ret

 Block4:
	mov al,byte ptr [esi]
	mov ecx,esi
	test al,al
	je Block9

 Block5:
	cmp al,0x1F
	ja Block8

 Block6:
	cmp al,0xD
	je Block8

 Block7:
	cmp al,0xA
	jne Block3

 Block8:
	mov al,byte ptr [ecx+1]
	inc ecx
	test al,al
	jne Block5

 Block9:
	mov eax,dword ptr [esp+0x410]
	mov ecx,dword ptr [_D_S_FILTERCHARS]
	push eax
	push ecx
	lea edx,[esp+0xC]
	push edx
	push esi
	call CCurseProcess::FilterChar
	add esp,0x10
	xor esi,esi

 Block10:
	mov eax,dword ptr [_D_S_ASCURSE1]
	test eax,eax
	je Block14

 Block11:
	cmp esi,dword ptr [eax-4]
	jae Block14

 Block12:
	mov eax,dword ptr [eax+esi*4]
	push eax
	lea eax,[esp+8]
	push eax
	call CCurseProcess::SearchSubstring
	add esp,8
	test eax,eax
	jne Block3

 Block13:
	inc esi
	jmp Block10

 Block14:
	mov ecx,dword ptr [esp+0x404]
	pop esi
	xor ecx,esp
	mov eax,1
	call __xsecurity_check_cookie
	add esp,0x404
	ret
}
}
// CCurseProcess::ConvertString
__SUB(00346C50, __cdecl, 37703,  char*, char*, int32_t) {
__asm {

 Block0:
	sub esp,0x80C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x808],eax
	push edi
	mov edi,dword ptr [esp+0x814]
	push 0x400
	lea eax,[esp+0x10]
	push 0
	push eax
	mov dword ptr [esp+0x14],edi
	call _memset
	push 0x400
	lea ecx,[esp+0x41C]
	push 0
	push ecx
	call _memset
	mov eax,edi
	add esp,0x18
	lea edx,[eax+1]
	lea ecx,[ecx]

 Block1:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block1

 Block2:
	sub eax,edx
	cmp eax,0x3FF
	jb Block4

 Block3:
	xor eax,eax
	pop edi
	mov ecx,dword ptr [esp+0x808]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x80C
	ret

 Block4:
	mov al,byte ptr [edi]
	mov ecx,edi
	test al,al
	je Block9

 Block5:
	cmp al,0x1F
	ja Block8

 Block6:
	cmp al,0xD
	je Block8

 Block7:
	cmp al,0xA
	jne Block3

 Block8:
	mov al,byte ptr [ecx+1]
	inc ecx
	test al,al
	jne Block5

 Block9:
	mov edx,dword ptr [esp+0x818]
	mov eax,dword ptr [_D_S_FILTERCHARS]
	push esi
	push edx
	push eax
	lea ecx,[esp+0x18]
	push ecx
	push edi
	call CCurseProcess::FilterChar
	add esp,0x10
	push ebx
	xor esi,esi
	push ebp

 Block10:
	mov eax,dword ptr [_D_S_ASCURSE1]
	mov dword ptr [esp+0x10],esi
	test eax,eax
	je Block27

 Block11:
	cmp esi,dword ptr [eax-4]
	jae Block27

 Block12:
	mov ebx,dword ptr [eax+esi*4]
	mov edx,dword ptr [_D_S_ASCURSE2]
	mov ebp,dword ptr [edx+esi*4]
	lea eax,[esp+0x18]
	push ebx
	push eax
	call CCurseProcess::SearchSubstring
	mov edi,eax
	add esp,8
	test edi,edi
	je Block25

 Block13:
	cmp byte ptr [ebp],0
	je Block26

 Block14:
	mov esi,edi
	lea ecx,[esp+0x18]
	sub esi,ecx
	cmp esi,0x400
	jge Block26

 Block15:
	push esi
	mov edx,ecx
	push edx
	lea eax,[esp+0x420]
	push eax
	call __mbsnbcpy
	mov ecx,0x3FF
	sub ecx,esi
	push ecx
	lea edx,[esp+esi+0x428]
	push ebp
	push edx
	call __mbsnbcpy
	mov eax,ebp
	add esp,0x18
	lea edx,[eax+1]

 Block16:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block16

 Block17:
	sub eax,edx
	add esi,eax
	cmp esi,0x400
	jge Block26

 Block18:
	mov eax,ebx
	lea edx,[eax+1]
	lea esp,[esp]

 Block19:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block19

 Block20:
	sub eax,edx
	lea ecx,[esp+0x18]
	sub eax,ecx
	add eax,edi
	cmp eax,0x400
	jae Block26

 Block21:
	mov eax,ebx
	lea edx,[eax+1]
	lea ecx,[ecx]

 Block22:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block22

 Block23:
	sub eax,edx
	mov edx,0x3FF
	sub edx,esi
	push edx
	add eax,edi
	push eax
	lea eax,[esp+esi+0x420]
	push eax
	call __mbsnbcpy
	push 0x3FF
	lea ecx,[esp+0x428]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	call __mbsnbcpy
	lea eax,[esp+0x30]
	push ebx
	push eax
	call CCurseProcess::SearchSubstring
	mov edi,eax
	add esp,0x20
	test edi,edi
	jne Block13

 Block24:
	mov esi,dword ptr [esp+0x10]

 Block25:
	mov edi,dword ptr [esp+0x14]
	inc esi
	jmp Block10

 Block26:
	xor eax,eax
	jmp Block28

 Block27:
	mov ecx,dword ptr [_D_S_FILTERCHARS]
	push ecx
	lea edx,[esp+0x1C]
	push edi
	push edx
	call CCurseProcess::MergeByInsertion
	add esp,0xC
	mov eax,edi

 Block28:
	mov ecx,dword ptr [esp+0x818]
	pop ebp
	pop ebx
	pop esi
	pop edi
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x80C
	ret
}
}
// CCurseProcess::MergeByInsertion
__SUB(00346AB0, __cdecl, 37701,  void, const char*, char*, const char*) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,dword ptr [esp+0x14]
	push edi
	mov edi,dword ptr [esp+0x14]
	xor ebp,ebp
	cmp byte ptr [edi],0
	je Block12

 Block1:
	mov bl,byte ptr [esp+0x14]

 Block2:
	movzx eax,byte ptr [esi]
	test al,al
	je Block12

 Block3:
	push eax
	mov eax,dword ptr [esp+0x20]
	push eax
	call CCurseProcess::Strchr
	add esp,8
	test eax,eax
	jne Block10

 Block4:
	movzx ecx,byte ptr [edi]
	push ecx
	call dword ptr [ZImports::_IsDBCSLeadByte]
	test eax,eax
	je Block9

 Block5:
	mov dl,byte ptr [edi]
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esi],dl
	movzx eax,byte ptr [esi+1]
	inc esi
	push eax
	push ecx
	inc edi
	call CCurseProcess::Strchr
	add esp,8
	test eax,eax
	je Block7

 Block6:
	mov bl,byte ptr [esi]
	mov ebp,1

 Block7:
	mov dl,byte ptr [edi]
	inc edi
	mov byte ptr [esi],dl
	test ebp,ebp
	je Block10

 Block8:
	inc esi
	mov byte ptr [esi],bl
	xor ebp,ebp
	jmp Block10

 Block9:
	mov al,byte ptr [edi]
	mov byte ptr [esi],al
	inc edi

 Block10:
	inc esi
	cmp byte ptr [edi],0
	jne Block2

 Block11:
	pop edi
	mov byte ptr [esi],0
	pop esi
	pop ebp
	pop ebx
	ret

 Block12:
	mov al,byte ptr [edi]
	test al,al
	je Block15

 Block13:
	lea ebx,[ebx]

 Block14:
	inc edi
	mov byte ptr [esi],al
	mov al,byte ptr [edi]
	inc esi
	test al,al
	jne Block14

 Block15:
	pop edi
	mov byte ptr [esi],0
	pop esi
	pop ebp
	pop ebx
	ret
}
}
// CCurseProcess::ProcessString
_SUB_EXCEPTION_HANDLER(3477F0)
__SUB(003477F0, __cdecl, 37692,  int32_t, char*, int32_t*, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3477F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [_D_S_ASCURSE1]
	xor edi,edi
	cmp eax,edi
	je Block2

 Block1:
	cmp dword ptr [eax-4],edi
	jne Block54

 Block2:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x40]
	push eax
	call esi
	lea ecx,[ebp-0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea edx,[ebp-0x30]
	push edx
	mov dword ptr [ebp-4],edi
	call esi
	lea eax,[ebp-0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	push edi
	push edi
	lea ecx,[ebp-0x40]
	push ecx
	lea edx,[ebp-0x30]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x5BF
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea ecx,[ebp-0x50]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x20]
	mov dword ptr [ebp-0x20],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov esi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x50],si
	jne Block14

 Block12:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	cmp eax,edi
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x30],si
	jne Block18

 Block16:
	mov eax,dword ptr [ebp-0x28]
	xor ecx,ecx
	mov word ptr [ebp-0x30],cx
	cmp eax,edi
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[ebp-0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x40],si
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	cmp eax,edi
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov ebx,dword ptr [ebp-0x20]
	cmp ebx,edi
	sete al
	test al,al
	je Block27

 Block24:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp ebx,edi
	je Block26

 Block25:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block26:
	mov eax,1
	jmp Block60

 Block27:
	cmp ebx,edi
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp-0x14]
	push edx
	push ebx
	mov dword ptr [ebp-0x14],edi
	call eax
	cmp eax,edi
	jge Block31

 Block30:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block31:
	mov edx,dword ptr [ebp-0x14]
	lea ecx,[ebp-0x15]
	push ecx
	push edx
	mov ecx,offset _D_S_ASCURSE1
	call ZArray<ZXString<char>>::_Alloc
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp-0x14]
	push ecx
	push ebx
	mov dword ptr [ebp-0x14],edi
	call edx
	cmp eax,edi
	jge Block33

 Block32:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block33:
	mov ecx,dword ptr [ebp-0x14]
	lea eax,[ebp-0x15]
	push eax
	push ecx
	mov ecx,offset _D_S_ASCURSE2
	call ZArray<ZXString<char>>::_Alloc
	mov dword ptr [ebp-0x1C],edi
	mov byte ptr [ebp-4],8
	xor esi,esi
	nop

 Block34:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp-0x14]
	push eax
	push ebx
	mov dword ptr [ebp-0x14],edi
	call ecx
	cmp eax,edi
	jge Block36

 Block35:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block36:
	cmp esi,dword ptr [ebp-0x14]
	jae Block51

 Block37:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x60]
	mov byte ptr [ebp-4],9
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0xA
	jne Block39

 Block38:
	mov eax,dword ptr [eax+8]
	jmp Block40

 Block39:
	mov eax,offset _S___3

 Block40:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp-0x1C]
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x60],8
	mov byte ptr [ebp-4],8
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	cmp eax,edi
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
	push edi
	push edi
	lea ecx,[ebp-0x1C]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov edx,dword ptr [_D_S_ASCURSE1]
	push eax
	lea ecx,[edx+esi*4]
	call ZXString<char>::op_assign
	mov eax,dword ptr [_D_S_ASCURSE2]
	push offset _S_
	lea ecx,[eax+esi*4]
	call ZXString<char>::AssignCStr
	lea ecx,[ecx]

 Block45:
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block47

 Block46:
	mov eax,dword ptr [eax-4]
	jmp Block48

 Block47:
	xor eax,eax

 Block48:
	cmp edi,eax
	jge Block50

 Block49:
	mov ecx,dword ptr [_D_S_ASCURSE2]
	push 1
	push offset _S___39
	lea ecx,[ecx+esi*4]
	call ZXString<char>::_Cat
	inc edi
	jmp Block45

 Block50:
	inc esi
	xor edi,edi
	jmp Block34

 Block51:
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],7
	cmp eax,edi
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call eax

 Block54:
	mov esi,dword ptr [ebp+0x10]
	mov ebx,dword ptr [ebp+8]
	push esi
	push ebx
	call CCurseProcess::IsGood
	add esp,8
	test eax,eax
	jne Block26

 Block55:
	push esi
	push ebx
	call CCurseProcess::ConvertString
	add esp,8
	test eax,eax
	je Block59

 Block56:
	mov eax,dword ptr [ebp+0xC]
	cmp eax,edi
	je Block58

 Block57:
	mov dword ptr [eax],1

 Block58:
	mov eax,1
	jmp Block60

 Block59:
	xor eax,eax

 Block60:
	lea esp,[ebp-0x70]
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
// is_valid_character_name
_SUB_EXCEPTION_HANDLER(346F20)
__SUB(00346F20, __cdecl, 88704,  int32_t, const ZXString<char>&, int32_t) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_346F20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	test byte ptr [_D__S3__6],1
	jne Block2

 Block1:
	or dword ptr [_D__S3__6],1
	push 0xB12D20
	mov dword ptr [_D_S_ASFORBIDDENNAM],ebx
	call _atexit
	add esp,4

 Block2:
	mov eax,dword ptr [_D_S_ASFORBIDDENNAM]
	cmp eax,ebx
	je Block5

 Block3:
	cmp dword ptr [eax-4],ebx
	jne Block96

 Block4:
	xor ebx,ebx

 Block5:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x10]
	push eax
	call esi
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea edx,[ebp+0x30]
	push edx
	mov dword ptr [ebp-4],ebx
	call esi
	lea eax,[ebp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	push ebx
	push ebx
	lea ecx,[ebp+0x10]
	push ecx
	lea edx,[ebp+0x30]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x50],esp
	push 0x8AE
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	mov dword ptr [ebp+0x58],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	cmp word ptr [ebp],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],5
	jne Block17

 Block15:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	cmp eax,ebx
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[ebp]
	push eax
	call edi

 Block18:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],6
	jne Block21

 Block19:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[ebp+0x30]
	push edx
	call edi

 Block22:
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],7
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	cmp eax,ebx
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[ebp+0x10]
	push ecx
	call edi

 Block26:
	mov edi,dword ptr [ebp+0x58]
	cmp edi,ebx
	je Block42

 Block27:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x64]
	push eax
	push edi
	mov dword ptr [ebp+0x64],ebx
	call ecx
	cmp eax,ebx
	jge Block29

 Block28:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block29:
	mov eax,dword ptr [ebp+0x64]
	lea edx,[ebp+0x57]
	push edx
	push eax
	mov ecx,offset _D_S_ASFORBIDDENNAM
	call ZArray<ZXString<char>>::_Alloc
	xor esi,esi
	lea ecx,[ecx]

 Block30:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x64]
	push edx
	push edi
	mov dword ptr [ebp+0x64],ebx
	call eax
	cmp eax,ebx
	jge Block32

 Block31:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block32:
	cmp esi,dword ptr [ebp+0x64]
	jae Block41

 Block33:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x50],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x40]
	push ecx
	mov byte ptr [ebp-4],8
	mov ecx,edi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],9
	jne Block35

 Block34:
	mov eax,dword ptr [eax+8]
	jmp Block36

 Block35:
	mov eax,offset _S___3

 Block36:
	mov edx,dword ptr [_D_S_ASFORBIDDENNAM]
	push 0xFFFFFFFF
	lea ecx,[edx+esi*4]
	push eax
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp+0x40],8
	mov byte ptr [ebp-4],7
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [ebp+0x40],ax
	mov eax,dword ptr [ebp+0x48]
	cmp eax,ebx
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc esi
	jmp Block30

 Block39:
	lea ecx,[ebp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	inc esi
	jmp Block30

 Block41:
	mov esi,dword ptr [ZImports::_VariantInit]

 Block42:
	lea edx,[ebp+0x40]
	push edx
	call esi
	lea eax,[ebp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	lea ecx,[ebp+0x20]
	push ecx
	mov byte ptr [ebp-4],0xA
	call esi
	lea edx,[ebp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	push 0
	push 0
	lea eax,[ebp+0x40]
	push eax
	lea ecx,[ebp+0x20]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x50],esp
	push 0x5BF
	mov bl,0xB
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xC
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea eax,[ebp-0x1C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block51

 Block49:
	cmp eax,0x80004002
	je Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	mov esi,8
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x1C],si
	jne Block54

 Block52:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp+0x20],si
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp+0x40],si
	jne Block62

 Block60:
	mov eax,dword ptr [ebp+0x48]
	xor edx,edx
	mov word ptr [ebp+0x40],dx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[ebp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block63:
	cmp dword ptr [ebp+0x60],0
	je Block92

 Block64:
	test edi,edi
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x64]
	push edx
	push edi
	mov dword ptr [ebp+0x64],0
	call eax
	test eax,eax
	jge Block68

 Block67:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block68:
	mov esi,dword ptr [ebp+0x60]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	mov ebx,dword ptr [ebp+0x64]
	lea edx,[ebp+0x5C]
	push edx
	push esi
	mov dword ptr [ebp+0x5C],0
	call eax
	test eax,eax
	jge Block70

 Block69:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block70:
	mov ecx,dword ptr [ebp+0x5C]
	lea eax,[ecx+ebx]
	lea edx,[ebp+0x57]
	push edx
	xor ebx,ebx
	push ebx
	push eax
	mov ecx,offset _D_S_ASFORBIDDENNAM
	call ZArray<ZXString<char>>::_Realloc
	mov dword ptr [ebp+0x64],ebx
	mov esi,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x12

 Block71:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x5C]
	push ecx
	push esi
	mov dword ptr [ebp+0x5C],0
	call edx
	test eax,eax
	jge Block73

 Block72:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block73:
	cmp ebx,dword ptr [ebp+0x5C]
	jae Block90

 Block74:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x2C]
	mov byte ptr [ebp-4],0x13
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x12
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x14
	jne Block76

 Block75:
	mov eax,dword ptr [eax+8]
	jmp Block77

 Block76:
	mov eax,offset _S___3

 Block77:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x64]
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x12
	jne Block80

 Block78:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	push 0
	push 0x2C
	lea ecx,[ebp+0x64]
	call ZXString<char>::Find__1
	test eax,eax
	jge Block85

 Block82:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x5C]
	push ecx
	push edi
	mov dword ptr [ebp+0x5C],0
	call edx
	test eax,eax
	jge Block84

 Block83:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block84:
	mov ecx,dword ptr [ebp+0x5C]
	mov edx,dword ptr [_D_S_ASFORBIDDENNAM]
	lea eax,[ebp+0x64]
	add ecx,ebx
	push eax
	lea ecx,[edx+ecx*4]
	call ZXString<char>::op_assign
	inc ebx
	jmp Block71

 Block85:
	push eax
	push 0
	lea eax,[ebp+0x50]
	push eax
	lea ecx,[ebp+0x64]
	call ZXString<char>::Mid
	push 0
	push 0
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov ecx,dword ptr [edi]
	lea edx,[ebp+0x5C]
	push edx
	mov esi,eax
	mov eax,dword ptr [ecx+0x20]
	push edi
	mov dword ptr [ebp+0x5C],0
	call eax
	test eax,eax
	jge Block87

 Block86:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block87:
	mov ecx,dword ptr [ebp+0x5C]
	mov edx,dword ptr [_D_S_ASFORBIDDENNAM]
	add ecx,ebx
	push esi
	lea ecx,[edx+ecx*4]
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x12
	test eax,eax
	je Block89

 Block88:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block89:
	mov esi,dword ptr [ebp+0x60]
	inc ebx
	jmp Block71

 Block90:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block92

 Block91:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block92:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block94

 Block93:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block94:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test edi,edi
	je Block96

 Block95:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block96:
	mov edi,dword ptr [ebp+0x74]
	mov eax,dword ptr [edi]
	test eax,eax
	je Block138

 Block97:
	mov eax,dword ptr [eax-4]
	cmp eax,4
	jl Block138

 Block98:
	cmp eax,0xC
	jg Block138

 Block99:
	push 0
	push 0
	push offset _S___2
	mov ecx,edi
	call ZXString<char>::Find__0
	cmp eax,0xFFFFFFFF
	jne Block138

 Block100:
	mov ecx,edi
	xor esi,esi
	call ZXString<char>::GetLength
	test eax,eax
	jle Block109

 Block101:
	mov ebx,dword ptr [edi]
	jmp Block103

 Block103:
	mov al,byte ptr [ebx+esi]
	cmp al,0x61
	jl Block105

 Block104:
	cmp al,0x7A
	jle Block108

 Block105:
	cmp al,0x41
	jl Block107

 Block106:
	cmp al,0x5A
	jle Block108

 Block107:
	sub al,0x30
	cmp al,9
	ja Block109

 Block108:
	mov ecx,edi
	inc esi
	call ZXString<char>::GetLength
	cmp esi,eax
	jl Block103

 Block109:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block111

 Block110:
	mov eax,dword ptr [eax-4]
	jmp Block112

 Block111:
	xor eax,eax

 Block112:
	cmp esi,eax
	jl Block138

 Block113:
	cmp dword ptr [ebp+0x78],0
	je Block141

 Block114:
	push edi
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],0
	call ZXString<char>::op_assign
	mov esi,dword ptr [ebp+0x60]
	mov dword ptr [ebp-4],0x16
	test esi,esi
	je Block120

 Block115:
	cmp byte ptr [esi],0
	je Block120

 Block116:
	push 1
	push 0
	lea ecx,[ebp+0x60]
	call ZXString<char>::GetBuffer
	push eax
	call __strlwr
	mov esi,dword ptr [ebp+0x60]
	add esp,4
	test esi,esi
	je Block118

 Block117:
	mov eax,dword ptr [esi-4]
	jmp Block119

 Block118:
	xor eax,eax

 Block119:
	push eax
	lea ecx,[ebp+0x60]
	call ZXString<char>::ReleaseBuffer

 Block120:
	xor ecx,ecx
	mov dword ptr [ebp+0x58],ecx
	jmp Block122

 Block122:
	mov eax,dword ptr [_D_S_ASFORBIDDENNAM]
	test eax,eax
	je Block139

 Block123:
	cmp ecx,dword ptr [eax-4]
	jae Block139

 Block124:
	lea eax,[eax+ecx*4]
	push eax
	lea ecx,[ebp+0x64]
	mov dword ptr [ebp+0x64],0
	call ZXString<char>::op_assign
	mov esi,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x17
	test esi,esi
	je Block130

 Block125:
	cmp byte ptr [esi],0
	je Block130

 Block126:
	push 1
	push 0
	lea ecx,[ebp+0x64]
	call ZXString<char>::GetBuffer
	push eax
	call __strlwr
	mov esi,dword ptr [ebp+0x64]
	add esp,4
	test esi,esi
	je Block128

 Block127:
	mov eax,dword ptr [esi-4]
	jmp Block129

 Block128:
	xor eax,eax

 Block129:
	push eax
	lea ecx,[ebp+0x64]
	call ZXString<char>::ReleaseBuffer

 Block130:
	push 0
	push 0
	push 0xFFFFFFFF
	push esi
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edx,dword ptr [ebp+0x60]
	mov edi,esp
	push 0
	push 0
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ebx,esp
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push esi
	push 0
	push 0
	call MultiByteToWideChar
	mov eax,dword ptr [ebp+0x60]
	push 0x3FFFFFFF
	push ebx
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push edi
	push ebx
	call _wcsstr
	add esp,8
	mov byte ptr [ebp-4],0x16
	test eax,eax
	jne Block134

 Block131:
	test esi,esi
	je Block133

 Block132:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block133:
	inc dword ptr [ebp+0x58]
	mov esi,dword ptr [ebp+0x60]
	mov edi,dword ptr [ebp+0x74]
	mov ecx,dword ptr [ebp+0x58]
	jmp Block122

 Block134:
	test esi,esi
	je Block136

 Block135:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block136:
	mov eax,dword ptr [ebp+0x60]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block138

 Block137:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block138:
	xor eax,eax
	jmp Block149

 Block139:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test esi,esi
	je Block141

 Block140:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block141:
	xor esi,esi
	mov ecx,edi
	mov dword ptr [ebp+0x58],esi
	call ZXString<char>::GetLength
	test eax,eax
	jle Block148

 Block142:
	mov ebx,dword ptr [edi]

 Block143:
	mov al,byte ptr [ebx+esi]
	cmp al,0x49
	je Block145

 Block144:
	cmp al,0x6C
	jne Block146

 Block145:
	inc dword ptr [ebp+0x58]

 Block146:
	mov ecx,edi
	inc esi
	call ZXString<char>::GetLength
	cmp esi,eax
	jl Block143

 Block147:
	cmp dword ptr [ebp+0x58],4
	jge Block138

 Block148:
	mov eax,1

 Block149:
	lea esp,[ebp-0x3C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x68]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x6C
	mov esp,ebp
	pop ebp
	ret
}
}
