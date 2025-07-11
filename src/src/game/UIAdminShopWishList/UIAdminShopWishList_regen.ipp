#include "regen.hpp"
// UIAdminShopWishList.ipp
#include "UIAdminShopWishList.hpp"

// CUIAdminShopWishListCategory::Draw
_SUB_EXCEPTION_HANDLER(36F8F0)
__SUB_CLASS_THIS(0036F8F0, __thiscall, 88015,  CUIAdminShopWishListCategory, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36F8F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x84
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x98]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x54],esi
	mov eax,dword ptr [esp+0xA8]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x60]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	xor ebx,ebx
	mov dword ptr [esp+0xA0],ebx
	mov dword ptr [esp+0x94],ebx
	mov eax,dword ptr [esi+0x9C]
	mov byte ptr [esp+0xA0],1
	lea edi,[ebx+0xB]
	cmp eax,1
	jne Block2

 Block1:
	mov dword ptr [esp+0x5C],edi
	jmp Block9

 Block2:
	cmp eax,2
	jne Block4

 Block3:
	mov dword ptr [esp+0x5C],5
	jmp Block9

 Block4:
	cmp eax,3
	jne Block6

 Block5:
	mov dword ptr [esp+0x5C],4
	jmp Block9

 Block6:
	cmp eax,4
	jne Block8

 Block7:
	mov dword ptr [esp+0x5C],7
	jmp Block9

 Block8:
	xor edx,edx
	cmp eax,5
	setne dl
	dec edx
	and edx,edi
	mov dword ptr [esp+0x5C],edx

 Block9:
	cmp eax,1
	jne Block11

 Block10:
	mov ebp,edi
	jmp Block16

 Block11:
	cmp eax,2
	jne Block13

 Block12:
	lea ebp,[eax+3]
	jmp Block16

 Block13:
	cmp eax,4
	jne Block15

 Block14:
	lea ebp,[eax+3]
	jmp Block16

 Block15:
	xor ecx,ecx
	cmp eax,5
	setne cl
	dec ecx
	and ecx,edi
	mov ebp,ecx

 Block16:
	cmp eax,1
	je Block20

 Block17:
	cmp eax,4
	jne Block19

 Block18:
	lea edi,[eax+3]
	jmp Block20

 Block19:
	xor edx,edx
	cmp eax,5
	setne dl
	dec edx
	and edi,edx

 Block20:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x74]
	push eax
	call esi
	lea ecx,[esp+0x74]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	lea edx,[esp+0x64]
	push edx
	mov byte ptr [esp+0xA4],2
	call esi
	lea eax,[esp+0x64]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	push ebx
	push ebx
	lea ecx,[esp+0x7C]
	push ecx
	lea edx,[esp+0x70]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0xE52
	push eax
	mov byte ptr [esp+0xBC],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xB4],4
	cmp dword ptr [_D_G_RM],ebx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea ecx,[esp+0x98]
	push ecx
	mov byte ptr [esp+0xB8],3
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA8],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x3C],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block29

 Block27:
	cmp eax,0x80004002
	je Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	cmp word ptr [esp+0x84],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0xA0],7
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x8C]
	xor edx,edx
	mov word ptr [esp+0x84],dx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea eax,[esp+0x84]
	push eax
	call ebx

 Block33:
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0xA0],8
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea edx,[esp+0x64]
	push edx
	call ebx

 Block37:
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xA0],9
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[esp+0x74]
	push ecx
	call ebx

 Block41:
	lea edx,[esp+0x18]
	push edx
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0xA4],0xA
	call esi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x1C]
	push 1
	push edx
	mov byte ptr [esp+0xB0],0xB
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	lea eax,[esp+0x64]
	push 0xA
	push eax
	mov byte ptr [esp+0xB4],0xC
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x58],0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x5C]
	mov bl,0xE
	push ecx
	mov byte ptr [esp+0xB4],bl
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov esi,dword ptr [esp+0x70]
	mov byte ptr [esp+0xB0],0xF
	test esi,esi
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	push 0x28
	push 0x1E
	mov ecx,esi
	mov byte ptr [esp+0xB8],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xA0],0xD
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block49:
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0xA0],0xC
	test eax,eax
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0xB
	test eax,eax
	je Block53

 Block52:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block53:
	mov ebx,8
	mov byte ptr [esp+0xA0],0xA
	cmp word ptr [esp+0x28],bx
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov byte ptr [esp+0xA0],9
	cmp word ptr [esp+0x18],bx
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],ecx
	mov ebx,dword ptr [esp+0x28]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push 0x28
	push 0xF
	push esi
	mov byte ptr [esp+0xC0],0x10
	call ecx
	test eax,eax
	jge Block63

 Block62:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block63:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xA0],9
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov ecx,dword ptr [esp+0x54]
	mov edx,dword ptr [ecx+0x9C]
	push edx
	call is_weapon_ti
	add esp,4
	test eax,eax
	jne Block86

 Block68:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	call ebx
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block70

 Block69:
	push eax
	call _com_issue_error

 Block70:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0xA4],0x11
	call ebx
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	lea ecx,[esp+0x28]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x60]
	push 1
	push eax
	mov byte ptr [esp+0xB0],0x12
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x20]
	push 0x1A87
	push ecx
	mov byte ptr [esp+0xB4],0x13
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x58],0
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x5C]
	mov bl,0x15
	push edx
	mov byte ptr [esp+0xB4],bl
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov eax,edi
	imul eax,0xD
	add eax,0x35
	push eax
	mov byte ptr [esp+0xB4],0x16
	push 0x1E
	mov ecx,esi
	mov byte ptr [esp+0xB8],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xA0],0x14
	test eax,eax
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block74:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x13
	test eax,eax
	je Block76

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block76:
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0xA0],0x12
	test eax,eax
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block78:
	mov ebx,8
	mov byte ptr [esp+0xA0],0x11
	cmp word ptr [esp+0x18],bx
	jne Block81

 Block79:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block82:
	mov byte ptr [esp+0xA0],9
	cmp word ptr [esp+0x28],bx
	jne Block85

 Block83:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block86:
	mov ebx,dword ptr [esp+0x54]
	mov ecx,dword ptr [ebx+0x9C]
	push ecx
	call is_weapon_ti
	add esp,4
	test eax,eax
	jne Block91

 Block87:
	mov edx,3
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],0xFF
	imul edi,0xD
	mov ecx,dword ptr [esp+0x38]
	lea eax,[esp+0x18]
	push eax
	push ecx
	add edi,0x35
	push edi
	push 0xF
	mov ecx,esi
	mov byte ptr [esp+0xB0],0x17
	call IWzCanvas::Copy
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xA0],9
	jne Block90

 Block88:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block91:
	mov ecx,dword ptr [ebx+0x9C]
	push ecx
	call is_weapon_ti
	add esp,4
	test eax,eax
	jne Block110

 Block92:
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
	jge Block94

 Block93:
	push eax
	call _com_issue_error

 Block94:
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0xA4],0x18
	call edi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x60]
	push 1
	push edx
	mov byte ptr [esp+0xB0],0x19
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	lea eax,[esp+0x20]
	push 0x1A38
	push eax
	mov byte ptr [esp+0xB4],0x1A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x58],0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x5C]
	mov bl,0x1C
	push ecx
	mov byte ptr [esp+0xB4],bl
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov edx,ebp
	imul edx,0xD
	add edx,0x42
	push edx
	mov byte ptr [esp+0xB4],0x1D
	push 0x1E
	mov ecx,esi
	mov byte ptr [esp+0xB8],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xA0],0x1B
	test eax,eax
	je Block98

 Block97:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block98:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x1A
	test eax,eax
	je Block100

 Block99:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block100:
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0xA0],0x19
	test eax,eax
	je Block102

 Block101:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block102:
	mov edi,8
	mov byte ptr [esp+0xA0],0x18
	cmp word ptr [esp+0x18],di
	jne Block105

 Block103:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	mov byte ptr [esp+0xA0],9
	cmp word ptr [esp+0x28],di
	jne Block109

 Block107:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block110:
	mov edi,dword ptr [esp+0x54]
	mov ecx,dword ptr [edi+0x9C]
	push ecx
	call is_weapon_ti
	add esp,4
	test eax,eax
	jne Block115

 Block111:
	mov edx,3
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],0xFF
	imul ebp,0xD
	mov ecx,dword ptr [esp+0x38]
	lea eax,[esp+0x18]
	push eax
	push ecx
	add ebp,0x42
	push ebp
	push 0xF
	mov ecx,esi
	mov byte ptr [esp+0xB0],0x1E
	call IWzCanvas::Copy
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xA0],9
	jne Block114

 Block112:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block115:
	mov ecx,dword ptr [edi+0x9C]
	push ecx
	call is_weapon_ti
	add esp,4
	test eax,eax
	jne Block134

 Block116:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push edx
	call ebx
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block118

 Block117:
	push eax
	call _com_issue_error

 Block118:
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0xA4],0x1F
	call ebx
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block120

 Block119:
	push eax
	call _com_issue_error

 Block120:
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x60]
	push 1
	push edx
	mov byte ptr [esp+0xB0],0x20
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	lea eax,[esp+0x20]
	push 0xB
	mov bl,0x21
	push eax
	mov byte ptr [esp+0xB4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x58],0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0xB4],0x23
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ebp,dword ptr [esp+0x6C]
	mov edx,ebp
	imul edx,0xD
	add edx,0x4F
	push edx
	mov byte ptr [esp+0xB4],0x24
	push 0x1E
	mov ecx,esi
	mov byte ptr [esp+0xB8],0x23
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xA0],0x22
	test eax,eax
	je Block122

 Block121:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block122:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],bl
	test eax,eax
	je Block124

 Block123:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block124:
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0xA0],0x20
	test eax,eax
	je Block126

 Block125:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block126:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xA0],0x1F
	jne Block129

 Block127:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block130:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xA0],9
	jne Block133

 Block131:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block135

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block133:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]
	jmp Block135

 Block134:
	mov ebp,dword ptr [esp+0x5C]

 Block135:
	mov ecx,dword ptr [edi+0x9C]
	push ecx
	call is_weapon_ti
	add esp,4
	test eax,eax
	jne Block140

 Block136:
	mov edx,3
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],0xFF
	imul ebp,0xD
	mov ecx,dword ptr [esp+0x38]
	lea eax,[esp+0x18]
	push eax
	push ecx
	add ebp,0x4F
	push ebp
	push 0xF
	mov ecx,esi
	mov byte ptr [esp+0xB0],0x25
	call IWzCanvas::Copy
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xA0],9
	jne Block139

 Block137:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block140:
	mov eax,dword ptr [edi+0x9C]
	cmp eax,1
	jne Block163

 Block141:
	xor ebx,ebx
	lea edi,[eax+0x34]
	jmp Block143

 Block143:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push ecx
	call ebp
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block144:
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0xA4],0x26
	call ebp
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block145:
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x1C]
	push 1
	push ecx
	mov byte ptr [esp+0xB0],0x27
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x5C]
	push eax
	mov eax,dword ptr [edx+0x88]
	push ecx
	add eax,ebx
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xB4],0x28
	call _xbstr_t::_ctor_0
	push edi
	mov byte ptr [esp+0xB4],0x29
	push 0x32
	mov ecx,esi
	mov byte ptr [esp+0xB8],0x28
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x27
	test eax,eax
	je Block147

 Block146:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block147:
	mov ebp,8
	mov byte ptr [esp+0xA0],0x26
	cmp word ptr [esp+0x18],bp
	jne Block150

 Block148:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block151:
	mov byte ptr [esp+0xA0],9
	cmp word ptr [esp+0x3C],bp
	jne Block154

 Block152:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block155

 Block154:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block155:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov ecx,0xFF
	mov dword ptr [esp+0x30],ecx
	mov ebp,dword ptr [esp+0x28]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push edi
	push 0x23
	push esi
	mov byte ptr [esp+0xC0],0x2A
	call ecx
	test eax,eax
	jge Block157

 Block156:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block157:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xA0],9
	jne Block160

 Block158:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block161

 Block159:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block161

 Block160:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block161:
	add edi,0xD
	add ebx,4
	cmp edi,0xC4
	jl Block143

 Block162:
	jmp Block248

 Block163:
	cmp eax,2
	jne Block185

 Block164:
	xor ebx,ebx
	lea edi,[eax+0x40]
	lea ecx,[ecx]

 Block165:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push ecx
	call ebp
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block166:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0xA4],0x2B
	call ebp
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block167:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x1C]
	push 1
	push ecx
	mov byte ptr [esp+0xB0],0x2C
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x5C]
	push eax
	mov eax,dword ptr [edx+0x8C]
	push ecx
	add eax,ebx
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xB4],0x2D
	call _xbstr_t::_ctor_0
	push edi
	mov byte ptr [esp+0xB4],0x2E
	push 0x32
	mov ecx,esi
	mov byte ptr [esp+0xB8],0x2D
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x2C
	test eax,eax
	je Block169

 Block168:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block169:
	mov ebp,8
	mov byte ptr [esp+0xA0],0x2B
	cmp word ptr [esp+0x3C],bp
	jne Block172

 Block170:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block173

 Block171:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block173

 Block172:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block173:
	mov byte ptr [esp+0xA0],9
	cmp word ptr [esp+0x18],bp
	jne Block176

 Block174:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block177

 Block175:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block177

 Block176:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block177:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov ecx,0xFF
	mov dword ptr [esp+0x30],ecx
	mov ebp,dword ptr [esp+0x28]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push edi
	push 0x23
	push esi
	mov byte ptr [esp+0xC0],0x2F
	call ecx
	test eax,eax
	jge Block179

 Block178:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block179:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xA0],9
	jne Block182

 Block180:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block183

 Block181:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block183

 Block182:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block183:
	add edi,0xD
	add ebx,4
	cmp edi,0x83
	jl Block165

 Block184:
	jmp Block248

 Block185:
	cmp eax,3
	jne Block205

 Block186:
	mov ebp,dword ptr [esp+0x54]
	xor ebx,ebx
	lea edi,[eax+0x4C]

 Block187:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block188:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0xA4],0x30
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block189:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x1C]
	push 1
	push ecx
	mov byte ptr [esp+0xB0],0x31
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [ebp+0x90]
	push ecx
	add eax,ebx
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xB4],0x32
	call _xbstr_t::_ctor_0
	push edi
	mov byte ptr [esp+0xB4],0x33
	push 0x32
	mov ecx,esi
	mov byte ptr [esp+0xB8],0x32
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x31
	test eax,eax
	je Block191

 Block190:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block191:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xA0],0x30
	jne Block194

 Block192:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block195

 Block193:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block195

 Block194:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block195:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xA0],9
	jne Block198

 Block196:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block199

 Block197:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block199

 Block198:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block199:
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],0xFF
	mov ecx,dword ptr [esp+0x38]
	lea eax,[esp+0x28]
	push eax
	push ecx
	push edi
	push 0x23
	mov ecx,esi
	mov byte ptr [esp+0xB0],0x34
	call IWzCanvas::Copy
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xA0],9
	jne Block202

 Block200:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block203

 Block201:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block203

 Block202:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block203:
	add edi,0xD
	add ebx,4
	cmp edi,0x83
	jl Block187

 Block204:
	jmp Block248

 Block205:
	cmp eax,4
	jne Block227

 Block206:
	push offset _D_VTMISSING
	lea ecx,[esp+0x1C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0xA4],0x35
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x1C]
	push 1
	push eax
	mov byte ptr [esp+0xB0],0x36
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [edi+0x88]
	push ecx
	add eax,0x24
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	mov bl,0x37
	push eax
	mov byte ptr [esp+0xB4],bl
	call _xbstr_t::_ctor_0
	push 0x35
	mov byte ptr [esp+0xB4],0x38
	push 0x32
	mov ecx,esi
	mov byte ptr [esp+0xB8],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x36
	test eax,eax
	je Block208

 Block207:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block208:
	lea ecx,[esp+0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x18]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,3
	mov word ptr [esp+0x3C],ax
	mov dword ptr [esp+0x44],0xFF
	mov edx,dword ptr [esp+0x38]
	lea ecx,[esp+0x3C]
	push ecx
	push edx
	push 0x35
	push 0x23
	mov ecx,esi
	mov byte ptr [esp+0xB0],0x39
	call IWzCanvas::Copy
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0xA0],9
	call Ztl_variant_t::~Ztl_variant_t
	mov ebp,dword ptr [esp+0x54]
	xor ebx,ebx
	lea edi,[ebx+0x35]
	mov edi,edi

 Block209:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block210:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0xA4],0x3A
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block211:
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x1C]
	push 1
	push eax
	mov byte ptr [esp+0xB0],0x3B
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [ebp+0x94]
	push ecx
	add eax,ebx
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xB4],0x3C
	call _xbstr_t::_ctor_0
	push edi
	mov byte ptr [esp+0xB4],0x3D
	push 0x7D
	mov ecx,esi
	mov byte ptr [esp+0xB8],0x3C
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x3B
	test eax,eax
	je Block213

 Block212:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block213:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xA0],0x3A
	jne Block216

 Block214:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block217

 Block215:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block217

 Block216:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block217:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xA0],9
	jne Block220

 Block218:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block221

 Block219:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block221

 Block220:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block221:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],0xFF
	mov eax,dword ptr [esp+0x38]
	lea edx,[esp+0x28]
	push edx
	push eax
	push edi
	push 0x6E
	mov ecx,esi
	mov byte ptr [esp+0xB0],0x3E
	call IWzCanvas::Copy
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xA0],9
	jne Block224

 Block222:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block225

 Block223:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block225

 Block224:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block225:
	add edi,0xD
	add ebx,4
	cmp edi,0x83
	jl Block209

 Block226:
	jmp Block248

 Block227:
	cmp eax,5
	jne Block248

 Block228:
	push offset _D_VTMISSING
	lea ecx,[esp+0x1C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0xA4],0x3F
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x1C]
	push 1
	push edx
	mov byte ptr [esp+0xB0],0x40
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [edi+0x88]
	push ecx
	add eax,0x28
	mov eax,dword ptr [eax]
	mov ecx,esp
	mov dword ptr [esp+0x60],esp
	mov bl,0x41
	push eax
	mov byte ptr [esp+0xB4],bl
	call Ztl_bstr_t::_ctor_1
	push 0x35
	mov byte ptr [esp+0xB4],0x42
	push 0x32
	mov ecx,esi
	mov byte ptr [esp+0xB8],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x40
	test eax,eax
	je Block230

 Block229:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block230:
	lea ecx,[esp+0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x18]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,3
	mov word ptr [esp+0x3C],ax
	mov dword ptr [esp+0x44],0xFF
	mov edx,dword ptr [esp+0x38]
	lea ecx,[esp+0x3C]
	push ecx
	push edx
	push 0x35
	push 0x23
	mov ecx,esi
	mov byte ptr [esp+0xB0],0x43
	call IWzCanvas::Copy
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0xA0],9
	call Ztl_variant_t::~Ztl_variant_t
	mov ebp,dword ptr [esp+0x54]
	xor ebx,ebx
	lea edi,[ebx+0x35]
	lea ecx,[ecx]

 Block231:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block232:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0xA4],0x44
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block233:
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x1C]
	push 1
	push eax
	mov byte ptr [esp+0xB0],0x45
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [ebp+0x98]
	push ecx
	add eax,ebx
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xB4],0x46
	call _xbstr_t::_ctor_0
	push edi
	mov byte ptr [esp+0xB4],0x47
	push 0x7D
	mov ecx,esi
	mov byte ptr [esp+0xB8],0x46
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x45
	test eax,eax
	je Block235

 Block234:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block235:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xA0],0x44
	jne Block238

 Block236:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block239

 Block237:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block239

 Block238:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block239:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xA0],9
	jne Block242

 Block240:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block243

 Block241:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block243

 Block242:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block243:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],0xFF
	mov eax,dword ptr [esp+0x38]
	lea edx,[esp+0x28]
	push edx
	push eax
	push edi
	push 0x6E
	mov ecx,esi
	mov byte ptr [esp+0xB0],0x48
	call IWzCanvas::Copy
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xA0],9
	jne Block246

 Block244:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block247

 Block245:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block247

 Block246:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block247:
	add edi,0xD
	add ebx,4
	cmp edi,0xB7
	jl Block231

 Block248:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0xA0],1
	test eax,eax
	je Block250

 Block249:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block250:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0xA4],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0x98]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x90
	ret 4
}
}
// CUIAdminShopWishList::OnKey
_SUB_EXCEPTION_HANDLER(372770)
__SUB_CLASS_THIS(00372770, __thiscall, 88050,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_372770
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	test dword ptr [esp+0x1C],0x80000000
	jne Block6

 Block1:
	mov eax,dword ptr [esp+0x18]
	cmp eax,0xD
	je Block4

 Block2:
	cmp eax,0x1B
	jne Block6

 Block3:
	lea ecx,[esi-4]
	call CUIAdminShopWishList::CloseAdminShopWishList
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 8

 Block4:
	mov ecx,dword ptr [esi+0xB8]
	lea eax,[esp+0x1C]
	push eax
	call CCtrlEdit::GetText
	push 0
	push 0
	mov ecx,eax
	mov dword ptr [esp+0x18],0
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esi-4]
	call CUIAdminShopWishList::SearchItemName
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 8
}
}
// CUIAdminShopWishListSearchResult::CUIAdminShopWishListSearchResult
_SUB_EXCEPTION_HANDLER(36D8C0)
__SUB_CLASS_THIS(0036D8C0, __thiscall, 87978,  CUIAdminShopWishListSearchResult, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36D8C0
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
	call CWnd::_ctor_default
	xor edi,edi
	lea eax,[esi+0x80]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0x80]
	mov dword ptr [TSingleton<CUIAdminShopWishListSearchResult>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIAdminShopWishListSearchResult>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIAdminShopWishListSearchResult::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIAdminShopWishListSearchResult::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIAdminShopWishListSearchResult::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],edi
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA0],edi
	int 3// TODO: 	mov eax,offset ZList<long>::`vftable'
	mov dword ptr [esi+0xAC],eax
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC0],eax
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD0],edi
	mov dword ptr [esi+0xD4],eax
	mov dword ptr [esi+0xDC],edi
	mov dword ptr [esi+0xE0],edi
	mov dword ptr [esi+0xE4],edi
	lea ecx,[esi+0xF8]
	mov byte ptr [esp+0x18],9
	call CUIToolTip::_ctor_default
	int 3// TODO: 	mov dword ptr [esi+0xB40],offset ZList<ZRef<ITEMNAME>>::`vftable'
	mov dword ptr [esi+0xB48],edi
	mov dword ptr [esi+0xB4C],edi
	mov dword ptr [esi+0xB50],edi
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x20]
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0x10F
	push 0xCD
	push edx
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x3C],0xB
	call CWnd::CreateWnd
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
// CUIAdminShopWishList::Update
__SUB_CLASS_THIS0(0036DD30, __thiscall, 88046,  CUIAdminShopWishList, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CWnd::Update
	add dword ptr [esi+0xE8],0xFFFFFFE2
	jns Block10

 Block1:
	cmp dword ptr [esi+0xE0],0
	jne Block6

 Block2:
	mov ecx,dword ptr [esi+0xC4]
	test ecx,ecx
	je Block6

 Block3:
	push edi
	call CWnd::Destroy
	cmp dword ptr [esi+0xC4],0
	lea edi,[esi+0xC0]
	je Block5

 Block4:
	push 0
	mov ecx,edi
	call ZRef<CUIAdminShopWishListCategory>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block5:
	pop edi

 Block6:
	cmp dword ptr [esi+0xE4],0
	jne Block10

 Block7:
	mov ecx,dword ptr [esi+0xCC]
	test ecx,ecx
	je Block10

 Block8:
	call CWnd::Destroy
	add esi,0xC8
	cmp dword ptr [esi+4],0
	je Block10

 Block9:
	push 0
	mov ecx,esi
	call ZRef<CUIAdminShopWishListSearchResult>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block10:
	pop esi
	ret
}
}
// CUIAdminShopWishList::SendRegisterPacket
_SUB_EXCEPTION_HANDLER(36E200)
__SUB_CLASS_THIS(0036E200, __thiscall, 88055,  CUIAdminShopWishList, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36E200
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	push 0x4A
	lea ecx,[esp+8]
	call COutPacket::_ctor_1
	push 3
	lea ecx,[esp+8]
	mov dword ptr [esp+0x20],0
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x24]
	push eax
	lea ecx,[esp+8]
	call COutPacket::Encode4
	lea ecx,[esp+4]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+8]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret 4
}
}
// CUIAdminShopWishListCategory::OnSetFocus
__SUB_CLASS_THIS(0036E680, __thiscall, 88014,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIAdminShopWishListCategory::OnChildNotify
__SUB_CLASS_THIS(0036CF30, __thiscall, 88016,  CUIAdminShopWishListCategory, void, uint32_t, uint32_t, uint32_t) {
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
// CUIAdminShopWishList::OnToggleDetail
_SUB_EXCEPTION_HANDLER(36D1C0)
__SUB_CLASS_THIS(0036D1C0, __thiscall, 88056,  CUIAdminShopWishList, void, NakedParam<_x_com_ptr<IWzGr2DLayer>>, int32_t&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36D1C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x58]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],ecx
	mov ecx,dword ptr [esp+0x68]
	xor edi,edi
	cmp ecx,edi
	sete al
	mov dword ptr [esp+0x60],edi
	test al,al
	je Block3

 Block1:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp ecx,edi
	je Block81

 Block2:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx
	jmp Block81

 Block3:
	cmp ecx,edi
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x60],1
	cmp esi,edi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x68]
	lea ecx,[esp+0x1C]
	push ecx
	push esi
	mov dword ptr [esp+0x24],edi
	call edx
	cmp eax,edi
	jge Block9

 Block8:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block9:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x60],0
	cmp eax,edi
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov ecx,dword ptr [esp+0x68]
	cmp ecx,edi
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x60],2
	cmp esi,edi
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],edi
	call eax
	cmp eax,edi
	jge Block17

 Block16:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block17:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x60],0
	cmp eax,edi
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	mov ecx,dword ptr [esp+0x68]
	cmp ecx,edi
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x60],3
	cmp ecx,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[esp+0x28]
	push edx
	call IWzVector2D::Getorigin
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x60],5
	cmp eax,edi
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block25:
	mov ecx,dword ptr [esp+0x68]
	cmp ecx,edi
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x60],6
	cmp esi,edi
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov edx,dword ptr [_D_VTEMPTY]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [_D_VTEMPTY+4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [_D_VTEMPTY+8]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [_D_VTEMPTY+12]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,edi
	jge Block31

 Block30:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block31:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x60],5
	cmp eax,edi
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	mov ecx,dword ptr [esp+0x68]
	cmp ecx,edi
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x60],7
	cmp esi,edi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
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
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,edi
	jge Block39

 Block38:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block39:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x60],5
	cmp eax,edi
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x48]
	push eax
	call ebx
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x64],8
	call ebx
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	mov ecx,dword ptr [esp+0x68]
	mov byte ptr [esp+0x60],9
	cmp ecx,edi
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea edx,[esp+0x24]
	push edx
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x60],0xA
	cmp ecx,edi
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	mov ebp,dword ptr [esp+0x1C]
	lea eax,[esp+0x48]
	push eax
	mov eax,dword ptr [esp+0x1C]
	lea edx,[esp+0x3C]
	push edx
	push eax
	push ebp
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x60],9
	cmp eax,edi
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block51:
	mov esi,8
	mov byte ptr [esp+0x60],8
	cmp word ptr [esp+0x38],si
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,edi
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov byte ptr [esp+0x60],5
	cmp word ptr [esp+0x48],si
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,edi
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov edi,dword ptr [esp+0x14]
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x2C]
	add edi,4
	mov ecx,edi
	call eax
	mov ecx,dword ptr [esp+0x6C]
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [esp+0x14]
	neg edx
	sbb edx,edx
	mov esi,eax
	and edx,0xFFFFFF0D
	add edx,0xF3
	add esi,edx
	mov eax,ebp
	sub eax,esi
	cdq
	xor eax,edx
	sub eax,edx
	lea edx,[esp+0x38]
	push edx
	mov dword ptr [ecx+0xE8],eax
	call ebx
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	mov eax,dword ptr [esp+0x68]
	mov bl,0xB
	mov byte ptr [esp+0x60],bl
	test eax,eax
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x1C]
	push edx
	mov ebp,eax
	push eax
	mov eax,dword ptr [ecx+0x58]
	mov dword ptr [esp+0x24],0
	call eax
	test eax,eax
	jge Block65

 Block64:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push ebp
	push eax
	call _com_issue_errorex

 Block65:
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [ecx+0xE8]
	add eax,dword ptr [esp+0x1C]
	mov edx,3
	mov word ptr [esp+0x48],dx
	mov dword ptr [esp+0x50],eax
	mov ebp,dword ptr [esp+0x68]
	mov byte ptr [esp+0x60],0xC
	test ebp,ebp
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	mov edx,dword ptr [edi]
	lea eax,[esp+0x38]
	push eax
	mov eax,dword ptr [edx+0x30]
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,edi
	call eax
	push eax
	push esi
	mov ecx,ebp
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x48],si
	jne Block70

 Block68:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov byte ptr [esp+0x60],5
	cmp word ptr [esp+0x38],si
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	cmp dword ptr [eax],edx
	mov byte ptr [esp+0x60],0
	sete dl
	mov dword ptr [eax],edx
	cmp word ptr [esp+0x28],si
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	test eax,eax
	je Block81

 Block80:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block81:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 8
}
}
// CUIAdminShopWishList::OnDestroy
__SUB_CLASS_THIS0(0036DCD0, __thiscall, 88046,  CUIAdminShopWishList, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xC4]
	test ecx,ecx
	je Block4

 Block1:
	push edi
	call CWnd::Destroy
	cmp dword ptr [esi+0xC4],0
	lea edi,[esi+0xC0]
	je Block3

 Block2:
	push 0
	mov ecx,edi
	call ZRef<CUIAdminShopWishListCategory>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block3:
	pop edi

 Block4:
	mov ecx,dword ptr [esi+0xCC]
	test ecx,ecx
	je Block7

 Block5:
	call CWnd::Destroy
	add esi,0xC8
	cmp dword ptr [esi+4],0
	je Block7

 Block6:
	push 0
	mov ecx,esi
	call ZRef<CUIAdminShopWishListSearchResult>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block7:
	pop esi
	ret
}
}
// CUIAdminShopWishList::SearchItemName
_SUB_EXCEPTION_HANDLER(371B50)
__SUB_CLASS_THIS(00371B50, __thiscall, 88057,  CUIAdminShopWishList, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_371B50
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
	mov edi,ecx
	mov eax,dword ptr [esp+0x28]
	xor ebx,ebx
	mov dword ptr [esp+0x20],ebx
	cmp eax,ebx
	je Block13

 Block1:
	cmp byte ptr [eax],bl
	je Block12

 Block2:
	push ebx
	push offset _S_
	push ebx
	push ebx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x20],1
	xor esi,esi
	call ZXString<char>::GetLength
	test eax,eax
	jle Block7

 Block3:
	mov edi,edi

 Block4:
	mov eax,dword ptr [esp+0x28]
	mov al,byte ptr [esi+eax]
	cmp al,0x20
	je Block6

 Block5:
	push 1
	lea ecx,[esp+0x14]
	push ecx
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x18],al
	call ZXString<char>::_Cat

 Block6:
	lea ecx,[esp+0x28]
	inc esi
	call ZXString<char>::GetLength
	cmp esi,eax
	jl Block4

 Block7:
	lea edx,[esp+0x14]
	push edx
	lea ecx,[edi+0x9C]
	call ZXString<char>::op_assign
	cmp dword ptr [edi+0xE4],ebx
	jne Block9

 Block8:
	push 2
	mov ecx,edi
	call CUIAdminShopWishList::ToggleAddOn

 Block9:
	mov ecx,dword ptr [edi+0xCC]
	mov dword ptr [edi+0x84],ebx
	call CUIAdminShopWishListSearchResult::Reset
	mov ecx,dword ptr [edi+0xCC]
	push ebx
	call CWnd::InvalidateRect
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
	mov eax,dword ptr [esp+0x28]

 Block12:
	cmp eax,ebx

 Block13:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
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
// CUIAdminShopWishList::CUIAdminShopWishList
_SUB_EXCEPTION_HANDLER(36DE50)
__SUB_CLASS_THIS0(0036DE50, __thiscall, 88044,  CUIAdminShopWishList, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36DE50
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
	call CWnd::_ctor_default
	xor edi,edi
	lea eax,[esi+0x80]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0x80]
	mov dword ptr [TSingleton<CUIAdminShopWishList>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIAdminShopWishList>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIAdminShopWishList::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIAdminShopWishList::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIAdminShopWishList::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xCC],edi
	lea ecx,[esi+0xD0]
	mov byte ptr [esp+0x18],9
	call COutPacket::_ctor_default
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0x10F
	push 0xF8
	push edi
	push edi
	mov ecx,esi
	mov byte ptr [esp+0x3C],0xA
	mov dword ptr [esi+0xE0],edi
	mov dword ptr [esi+0xE4],edi
	call CWnd::CreateWnd
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
// CUIAdminShopWishList::SetLayer
_SUB_EXCEPTION_HANDLER(370FB0)
__SUB_CLASS_THIS0(00370FB0, __thiscall, 88046,  CUIAdminShopWishList, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_370FB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x6C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x7C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,3
	mov word ptr [esp+0x1C],ax
	mov dword ptr [esp+0x24],0xFFFFFFFE
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x88],0
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x84],1
	test ecx,ecx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x84],0
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0x84],0xFFFFFFFF
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
	push 0
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0xE53
	push edx
	mov dword ptr [edi+0x24],0xF8
	mov dword ptr [edi+0x28],0x10F
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,edi
	call CWnd::SetBackgrnd
	mov dword ptr [esp+0x10],0
	lea eax,[esp+0x18]
	push 0x3D0
	push eax
	mov dword ptr [esp+0x8C],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[esp+0x14]
	push ecx
	push eax
	mov byte ptr [esp+0x90],3
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x84],2
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block12:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push edx
	call esi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	lea ecx,[esp+0x1C]
	mov bl,4
	push ecx
	mov byte ptr [esp+0x88],bl
	call esi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov ecx,dword ptr [esp+0x10]
	mov byte ptr [esp+0x84],5
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea eax,[esp+0x2C]
	push eax
	mov eax,dword ptr [edi+0x28]
	lea edx,[esp+0x20]
	push edx
	mov edx,dword ptr [edi+0x24]
	push eax
	push edx
	call IWzCanvas::Create
	mov byte ptr [esp+0x84],bl
	mov ebx,8
	cmp word ptr [esp+0x1C],bx
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov byte ptr [esp+0x84],2
	cmp word ptr [esp+0x2C],bx
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	lea ecx,[esp+0x5C]
	push ecx
	call esi
	lea edx,[esp+0x5C]
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
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x88],6
	call esi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x88],7
	call esi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x88],8
	call esi
	lea edx,[esp+0x1C]
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
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x88],9
	call esi
	lea ecx,[esp+0x2C]
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
	lea edx,[esp+0x18]
	mov bl,0xA
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x88],bl
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x84],0xB
	test ecx,ecx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea eax,[esp+0x5C]
	push eax
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x44]
	push eax
	lea edx,[esp+0x28]
	push edx
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x3C]
	push eax
	push edx
	lea eax,[esp+0x84]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x6C],8
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x74]
	xor ecx,ecx
	mov word ptr [esp+0x6C],cx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x6C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x84],bl
	test eax,eax
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x84],9
	jne Block51

 Block45:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block47:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block48:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x84],8
	jne Block52

 Block49:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block53

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block51:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x2C]
	push ecx
	call ebx
	jmp Block48

 Block52:
	lea eax,[esp+0x1C]
	push eax
	call ebx

 Block53:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x84],7
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
	call ebx

 Block57:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x84],6
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[esp+0x4C]
	push ecx
	call ebx

 Block61:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0x84],2
	jne Block64

 Block62:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea eax,[esp+0x5C]
	push eax
	call ebx

 Block65:
	lea ecx,[esp+0x4C]
	push ecx
	call esi
	lea edx,[esp+0x4C]
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
	lea eax,[esp+0x5C]
	push eax
	mov byte ptr [esp+0x88],0xC
	call esi
	lea ecx,[esp+0x5C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block69

 Block68:
	push eax
	call _com_issue_error

 Block69:
	lea edx,[esp+0x14]
	mov bl,0xD
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x88],bl
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x84],0xE
	test ecx,ecx
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea eax,[esp+0x4C]
	push eax
	mov eax,0x258
	sub eax,dword ptr [edi+0x28]
	lea edx,[esp+0x60]
	push edx
	cdq
	sub eax,edx
	sar eax,1
	push eax
	mov eax,0x320
	sub eax,dword ptr [edi+0x24]
	cdq
	sub eax,edx
	sar eax,1
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x84],bl
	test eax,eax
	je Block73

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block73:
	mov esi,8
	mov byte ptr [esp+0x84],0xC
	cmp word ptr [esp+0x5C],si
	jne Block76

 Block74:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block77:
	mov byte ptr [esp+0x84],2
	cmp word ptr [esp+0x4C],si
	jne Block80

 Block78:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	test eax,eax
	je Block83

 Block82:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block83:
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x78
	ret
}
}
// CUIAdminShopWishList::~CUIAdminShopWishList
_SUB_EXCEPTION_HANDLER(36DF70)
__SUB_CLASS_THIS0(0036DF70, __thiscall, 88046,  CUIAdminShopWishList, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36DF70
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIAdminShopWishList::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIAdminShopWishList::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIAdminShopWishList::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xD4]
	mov dword ptr [esp+0x1C],9
	call ZArray<unsigned char>::RemoveAll
	lea edi,[esi+0xC8]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],8
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CUIAdminShopWishListSearchResult>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xC0]
	mov byte ptr [esp+0x1C],7
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CUIAdminShopWishListCategory>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xB8]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xB0]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xA8]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	mov eax,dword ptr [esi+0x9C]
	mov byte ptr [esp+0x1C],2
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	lea ecx,[esi+0x80]
	mov byte ptr [esp+0x1C],1
	call ZArray<long>::RemoveAll
	mov ecx,esi
	mov dword ptr [TSingleton<CUIAdminShopWishList>::ms_pInstance],ebx
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CWnd::~CWnd
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
// CUIAdminShopWishList::OnMoveWnd
__SUB_CLASS_THIS(0036D720, __thiscall, 88048,  CUIAdminShopWishList, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0xC]
	push eax
	push ecx
	mov ecx,esi
	call CWnd::OnMoveWnd
	mov edi,dword ptr [esi+0xC4]
	test edi,edi
	jne Block2

 Block1:
	mov edi,dword ptr [esi+0xCC]
	test edi,edi
	je Block3

 Block2:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	add esi,4
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,0xF3
	push eax
	mov ecx,edi
	call CWnd::MoveWnd

 Block3:
	pop edi
	pop esi
	ret 8
}
}
// CUIAdminShopWishList::CanAddList
_SUB_EXCEPTION_HANDLER(36E0C0)
__SUB_CLASS_THIS(0036E0C0, __thiscall, 88058,  CUIAdminShopWishList, int32_t, long, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36E0C0
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+4]
	mov dword ptr fs:[0],eax
	cmp dword ptr [ecx+0x84],0
	mov dword ptr [esp+0xC],0
	je Block9

 Block1:
	mov eax,dword ptr [esp+0x14]
	cmp eax,dword ptr [ecx+0x8C]
	jl Block3

 Block2:
	cmp dword ptr [ecx+0x90],eax
	jge Block5

 Block3:
	cmp eax,dword ptr [ecx+0x94]
	jl Block13

 Block4:
	cmp dword ptr [ecx+0x98],eax
	jl Block13

 Block5:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push 0
	push eax
	call CItemInfo::IsScannableItem
	test eax,eax
	je Block13

 Block6:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0xC],0xFFFFFFFF
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,1
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 8

 Block9:
	mov ecx,dword ptr [ecx+0x9C]
	push 1
	push 0
	push ecx
	lea ecx,[esp+0x24]
	call ZXString<char>::Find__0
	test eax,eax
	jl Block13

 Block10:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push 0
	push eax
	call CItemInfo::IsScannableItem
	test eax,eax
	je Block13

 Block11:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0xC],0xFFFFFFFF
	test eax,eax
	je Block8

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov eax,1
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 8

 Block13:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0xC],0xFFFFFFFF
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	xor eax,eax
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 8
}
}
// CUIAdminShopWishList::IsMyAddon
__SUB_CLASS_THIS(0036DF40, __thiscall, 88052,  CUIAdminShopWishList, int32_t, CWnd*) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUIAdminShopWishListCategory>::ms_pInstance]
	mov ecx,dword ptr [esp+4]
	test eax,eax
	je Block2

 Block1:
	cmp eax,ecx
	je Block4

 Block2:
	mov eax,dword ptr [TSingleton<CUIAdminShopWishListSearchResult>::ms_pInstance]
	test eax,eax
	je Block5

 Block3:
	cmp eax,ecx
	jne Block5

 Block4:
	mov eax,1
	ret 4

 Block5:
	xor eax,eax
	ret 4
}
}
// CUIAdminShopWishListCategory::OnMouseButton
__SUB_CLASS_THIS(003721D0, __thiscall, 88017,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	sub esp,8
	cmp dword ptr [esp+0xC],0x201
	mov eax,dword ptr [TSingleton<CUIAdminShopWishList>::ms_pInstance]
	push ebx
	mov ebx,ecx
	mov dword ptr [esp+8],eax
	jne Block92

 Block1:
	mov eax,dword ptr [ebx+0x98]
	push ebp
	push esi
	push edi
	mov ebp,7
	cmp eax,1
	jne Block3

 Block2:
	mov dword ptr [esp+0x1C],0xB
	jmp Block10

 Block3:
	cmp eax,2
	jne Block5

 Block4:
	mov dword ptr [esp+0x1C],5
	jmp Block10

 Block5:
	cmp eax,3
	jne Block7

 Block6:
	mov dword ptr [esp+0x1C],4
	jmp Block10

 Block7:
	cmp eax,4
	jne Block9

 Block8:
	mov dword ptr [esp+0x1C],ebp
	jmp Block10

 Block9:
	xor ecx,ecx
	cmp eax,5
	setne cl
	dec ecx
	and ecx,0xB
	mov dword ptr [esp+0x1C],ecx

 Block10:
	cmp eax,1
	jne Block12

 Block11:
	mov dword ptr [esp+0x10],0xB
	jmp Block17

 Block12:
	cmp eax,2
	jne Block14

 Block13:
	mov dword ptr [esp+0x10],5
	jmp Block17

 Block14:
	cmp eax,4
	jne Block16

 Block15:
	mov dword ptr [esp+0x10],ebp
	jmp Block17

 Block16:
	xor edx,edx
	cmp eax,5
	setne dl
	dec edx
	and edx,0xB
	mov dword ptr [esp+0x10],edx

 Block17:
	cmp eax,1
	jne Block19

 Block18:
	lea ebp,[eax+0xA]
	jmp Block21

 Block19:
	cmp eax,4
	je Block21

 Block20:
	xor ecx,ecx
	cmp eax,5
	setne cl
	dec ecx
	and ecx,0xB
	mov ebp,ecx

 Block21:
	mov ecx,dword ptr [esp+0x28]
	add ecx,0xFFFFFFD8
	mov eax,0x4EC4EC4F
	imul ecx
	sar edx,2
	mov edi,edx
	lea esi,[ebx-4]
	shr edi,0x1F
	mov ecx,esi
	add edi,edx
	call CUIAdminShopWishListCategory::ClearList
	xor edx,edx
	cmp edi,edx
	jne Block23

 Block22:
	mov dword ptr [ebx+0x98],1

 Block23:
	inc ebp
	cmp edi,ebp
	jne Block25

 Block24:
	mov dword ptr [ebx+0x98],2

 Block25:
	mov eax,dword ptr [esp+0x10]
	add eax,2
	cmp edi,eax
	jne Block27

 Block26:
	mov dword ptr [ebx+0x98],3

 Block27:
	mov ecx,dword ptr [esp+0x1C]
	add ecx,3
	cmp edi,ecx
	jne Block29

 Block28:
	push 0x12D
	mov ecx,esi
	mov dword ptr [ebx+0x98],edx
	call CUIAdminShopWishListCategory::AddtoList_0
	push 0x18F
	mov ecx,esi
	call CUIAdminShopWishListCategory::AddtoList_0

 Block29:
	mov eax,dword ptr [ebx+0x98]
	cmp eax,1
	jne Block35

 Block30:
	cmp edi,0xA
	jne Block32

 Block31:
	push edx
	mov ecx,esi
	mov dword ptr [ebx+0x98],4
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10

 Block32:
	cmp eax,1
	jne Block35

 Block33:
	cmp edi,0xB
	jne Block35

 Block34:
	push edx
	mov ecx,esi
	mov dword ptr [ebx+0x98],5
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10

 Block35:
	cmp eax,4
	jne Block38

 Block36:
	cmp edi,edx
	jne Block38

 Block37:
	mov dword ptr [ebx+0x98],edx

 Block38:
	push edx
	mov ecx,esi
	call CWnd::InvalidateRect
	mov eax,dword ptr [ebx+0x98]
	cmp eax,1
	jne Block50

 Block39:
	dec edi
	cmp edi,8
	ja Block88

 Block40:
	cmp EDI, 0
je Block41
cmp EDI, 1
je Block42
cmp EDI, 2
je Block43
cmp EDI, 3
je Block44
cmp EDI, 4
je Block45
cmp EDI, 5
je Block46
cmp EDI, 6
je Block47
cmp EDI, 7
je Block48
cmp EDI, 8
je Block49


 Block41:
	push 0x64
	jmp Block87

 Block42:
	push 0x67
	jmp Block87

 Block43:
	push 0x68
	jmp Block87

 Block44:
	push 0x6A
	jmp Block87

 Block45:
	push 0x69
	jmp Block87

 Block46:
	push 0x6C
	jmp Block87

 Block47:
	push 0x6B
	jmp Block87

 Block48:
	push 0x6D
	jmp Block87

 Block49:
	push 0x6E
	jmp Block87

 Block50:
	cmp eax,2
	jne Block58

 Block51:
	lea eax,[edi-2]
	cmp eax,4
	ja Block88

 Block52:
	cmp EAX, 0
je Block53
cmp EAX, 1
je Block54
cmp EAX, 2
je Block55
cmp EAX, 3
je Block56
cmp EAX, 4
je Block57


 Block53:
	push 0x1EF9AF
	push 0x1E8480
	mov ecx,esi
	call CUIAdminShopWishListCategory::AddtoList_1
	push 0xCD
	mov ecx,esi
	call CUIAdminShopWishListCategory::AddtoList2
	jmp Block88

 Block54:
	push 0xCB
	jmp Block87

 Block55:
	push 0xCC
	jmp Block87

 Block56:
	push 0x1FBCFF
	push 0x1F6EE0
	mov ecx,esi
	call CUIAdminShopWishListCategory::AddtoList_1
	push 0xE9
	mov ecx,esi
	call CUIAdminShopWishListCategory::AddtoList2
	jmp Block88

 Block57:
	push 0x200B20
	push 0x200B20
	mov ecx,esi
	call CUIAdminShopWishListCategory::AddtoList_1
	jmp Block88

 Block58:
	cmp eax,3
	jne Block65

 Block59:
	lea eax,[edi-3]
	cmp eax,3
	ja Block88

 Block60:
	cmp EAX, 0
je Block61
cmp EAX, 1
je Block62
cmp EAX, 2
je Block63
cmp EAX, 3
je Block64


 Block61:
	push 0x3D189F
	push 0x3D0900
	mov ecx,esi
	call CUIAdminShopWishListCategory::AddtoList_1
	jmp Block88

 Block62:
	push 0x3D571F
	push 0x3D1C88
	mov ecx,esi
	call CUIAdminShopWishListCategory::AddtoList_1
	jmp Block88

 Block63:
	push 0x198
	jmp Block87

 Block64:
	push 0x19D
	jmp Block87

 Block65:
	cmp eax,4
	jne Block74

 Block66:
	lea eax,[edi-1]
	cmp eax,5
	ja Block88

 Block67:
	cmp EAX, 0
je Block68
cmp EAX, 1
je Block69
cmp EAX, 2
je Block70
cmp EAX, 3
je Block71
cmp EAX, 4
je Block72
cmp EAX, 5
je Block73


 Block68:
	push 0x82
	jmp Block87

 Block69:
	push 0x83
	jmp Block87

 Block70:
	push 0x84
	jmp Block87

 Block71:
	push 0x85
	jmp Block87

 Block72:
	push 0x89
	jmp Block87

 Block73:
	push 0x8A
	jmp Block87

 Block74:
	cmp eax,5
	jne Block88

 Block75:
	dec edi
	cmp edi,9
	ja Block88

 Block76:
	cmp EDI, 0
je Block77
cmp EDI, 1
je Block78
cmp EDI, 2
je Block79
cmp EDI, 3
je Block80
cmp EDI, 4
je Block81
cmp EDI, 5
je Block82
cmp EDI, 6
je Block83
cmp EDI, 7
je Block84
cmp EDI, 8
je Block85
cmp EDI, 9
je Block86


 Block77:
	push 0x8C
	jmp Block87

 Block78:
	push 0x8D
	jmp Block87

 Block79:
	push 0x8E
	jmp Block87

 Block80:
	push 0x8F
	jmp Block87

 Block81:
	push 0x90
	jmp Block87

 Block82:
	push 0x91
	jmp Block87

 Block83:
	push 0x92
	jmp Block87

 Block84:
	push 0x93
	jmp Block87

 Block85:
	push 0x94
	jmp Block87

 Block86:
	push 0x95

 Block87:
	mov ecx,esi
	call CUIAdminShopWishListCategory::AddtoList_0

 Block88:
	mov ecx,dword ptr [esp+0x14]
	cmp dword ptr [ecx+0x88],0
	je Block91

 Block89:
	cmp dword ptr [ecx+0xE4],0
	mov dword ptr [ecx+0x84],1
	jne Block91

 Block90:
	push 2
	call CUIAdminShopWishList::ToggleAddOn

 Block91:
	pop edi
	pop esi
	pop ebp

 Block92:
	pop ebx
	add esp,8
	ret 0x10
}
}
// CUIAdminShopWishListCategory::CUIAdminShopWishListCategory
_SUB_EXCEPTION_HANDLER(36E5B0)
__SUB_CLASS_THIS(0036E5B0, __thiscall, 88010,  CUIAdminShopWishListCategory, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36E5B0
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
	call CWnd::_ctor_default
	lea eax,[esi+0x80]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	lea ecx,[eax-0x80]
	mov dword ptr [TSingleton<CUIAdminShopWishListCategory>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIAdminShopWishListCategory>::ms_pInstance],0

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIAdminShopWishListCategory::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIAdminShopWishListCategory::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIAdminShopWishListCategory::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],0
	push offset ZArray<ZXString<char>>::~ZArray<ZXString<char>>
	push offset ZArray<ZXString<char>>::_ctor_default
	push 5
	push 4
	lea edx,[esi+0x88]
	push edx
	mov byte ptr [esp+0x28],2
	call __eh_vector_ctor_iterator
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x1C]
	push 0
	push 1
	push 0
	push 1
	push 0xA
	push 0x10F
	push 0xCD
	push eax
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x38],3
	call CWnd::CreateWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 8
}
}
// CUIAdminShopWishList::HitTest
__SUB_CLASS_THIS(0036CF50, __thiscall, 88051,  CUIAdminShopWishList, int32_t, long, long, CCtrlWnd**) {
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
	xor eax,eax
	test edi,edi
	setl al
	inc eax

 Block4:
	pop edi
	pop esi
	ret 0xC
}
}
// CUIAdminShopWishListSearchResult::OnCreate
_SUB_EXCEPTION_HANDLER(372840)
__SUB_CLASS_THIS(00372840, __thiscall, 87981,  CUIAdminShopWishListSearchResult, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_372840
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
	xor ebx,ebx
	push ebx
	push ebx
	push ebx
	push ebx
	or eax,0xFFFFFFFF
	push ebx
	push ecx
	mov dword ptr [esi+0xA8],eax
	mov dword ptr [esi+0xA4],eax
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0xE4E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x28],ebx
	lea ecx,[esp+0x14]
	push 0xA27
	push ecx
	mov dword ptr [esp+0xA4],ebx
	mov dword ptr [esp+0x28],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0xA0],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x9C],bl
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x9C],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x9C],bl
	cmp eax,ebx
	je Block15

 Block6:
	add eax,8
	cmp eax,ebx
	je Block15

 Block7:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block9

 Block8:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block9:
	mov eax,dword ptr [esi+0x84]
	mov dword ptr [esi+0x84],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x84]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x20]
	push edx
	push 1
	push 6
	push 0xB8
	push 0x3E8
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x1A81
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0xA0],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x9C],bl
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x9C],4
	cmp eax,ebx
	je Block16

 Block14:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block17

 Block15:
	xor edi,edi
	jmp Block9

 Block16:
	xor eax,eax

 Block17:
	mov byte ptr [esp+0x9C],bl
	cmp eax,ebx
	je Block27

 Block18:
	lea edi,[eax+8]
	cmp edi,ebx
	je Block27

 Block19:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block21

 Block20:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block21:
	mov eax,dword ptr [esi+0x8C]
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block23

 Block22:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [esi+0x8C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x20]
	push edx
	push 1
	push 0x15
	push 0xA7
	push 0x3E9
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x1A82
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0xA0],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x9C],bl
	cmp eax,ebx
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x9C],6
	cmp eax,ebx
	je Block28

 Block26:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block29

 Block27:
	xor edi,edi
	jmp Block21

 Block28:
	xor eax,eax

 Block29:
	mov byte ptr [esp+0x9C],bl
	cmp eax,ebx
	je Block39

 Block30:
	lea edi,[eax+8]
	cmp edi,ebx
	je Block39

 Block31:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block33

 Block32:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block33:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block35

 Block34:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block35:
	mov ecx,dword ptr [esi+0x94]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x20]
	push edx
	push 1
	push 0x15
	push 0xB8
	push 0x3EA
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0xE68
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0xA0],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x9C],bl
	cmp eax,ebx
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block37:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x9C],8
	cmp eax,ebx
	je Block40

 Block38:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block41

 Block39:
	xor edi,edi
	jmp Block33

 Block40:
	xor eax,eax

 Block41:
	mov byte ptr [esp+0x9C],bl
	cmp eax,ebx
	je Block49

 Block42:
	lea edi,[eax+8]
	cmp edi,ebx
	je Block49

 Block43:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block45

 Block44:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block45:
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block47

 Block46:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block47:
	mov ecx,dword ptr [esi+0x9C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x20]
	push edx
	push 1
	push 0xF8
	push 0x91
	push 0x3EB
	push esi
	call eax
	lea ecx,[esp+0x60]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0xA0],9
	mov dword ptr [esp+0x68],ebx
	mov dword ptr [esp+0x80],0x6E
	mov dword ptr [esp+0x84],0xE
	call edi
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block50

 Block48:
	push eax
	call _com_issue_error

 Block49:
	xor edi,edi
	jmp Block45

 Block50:
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0xA0],0xA
	call edi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block52

 Block51:
	push eax
	call _com_issue_error

 Block52:
	push ebx
	push ebx
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0xE6D
	push ecx
	mov byte ptr [esp+0xB8],0xB
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xB0],0xC
	cmp dword ptr [_D_G_RM],ebx
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	lea edx,[esp+0x64]
	mov byte ptr [esp+0xB0],0xB
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA4],0xD
	call Ztl_variant_t::GetUnknown
	mov edi,dword ptr [esi+0xA0]
	cmp edi,eax
	je Block59

 Block55:
	mov dword ptr [esi+0xA0],eax
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
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0x9C],0xB
	cmp word ptr [esp+0x50],di
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	cmp eax,ebx
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[esp+0x50]
	push eax
	call ebp

 Block63:
	mov byte ptr [esp+0x9C],0xA
	cmp word ptr [esp+0x30],di
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebx
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea edx,[esp+0x30]
	push edx
	call ebp

 Block67:
	mov byte ptr [esp+0x9C],9
	cmp word ptr [esp+0x40],di
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,ebx
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea ecx,[esp+0x40]
	push ecx
	call ebp

 Block71:
	mov ecx,dword ptr [TSingleton<CUIAdminShopWishList>::ms_pInstance]
	lea edx,[esp+0x18]
	push edx
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x9C],0xE
	mov word ptr [esp+0x30],cx
	mov dword ptr [esp+0x38],eax
	cmp eax,ebx
	je Block73

 Block72:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block73:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0xA0],0xF
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x9C],0x10
	cmp edi,ebx
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0xFC]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x4C]
	push edi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,ebx
	jge Block77

 Block76:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block77:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x9C],0xF
	cmp eax,ebx
	je Block79

 Block78:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block79:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x9C],0xE
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebx
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[esp+0x30]
	push ecx
	call ebp

 Block83:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x9C],9
	cmp eax,ebx
	je Block85

 Block84:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block85:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x9C],0x11
	cmp edi,ebx
	jne Block87

 Block86:
	push 0x80004003
	call _com_issue_error

 Block87:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xB4]
	push 0xFFFFFFFE
	push edi
	call eax
	cmp eax,ebx
	jge Block89

 Block88:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block89:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x9C],9
	cmp eax,ebx
	je Block91

 Block90:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block91:
	mov ebp,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edi,[esi+0xB40]
	mov ecx,edi
	add ebp,0x23C
	call ZList<ZRef<ITEMNAME>>::RemoveAll
	push ebp
	mov ecx,edi
	call ZList<ZRef<ITEMNAME>>::AddTail_List
	mov esi,dword ptr [esi+0x9C]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x1C]
	lea ecx,[esi+4]
	push ebx
	call edx
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x9C],bl
	cmp ecx,ebx
	je Block93

 Block92:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x6C],ebx

 Block93:
	mov eax,dword ptr [esp+0x68]
	cmp eax,ebx
	je Block95

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block95:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	cmp eax,ebx
	je Block97

 Block96:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block97:
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
// CUIAdminShopWishListCategory::OnCreate
_SUB_EXCEPTION_HANDLER(36EC90)
__SUB_CLASS_THIS(0036EC90, __thiscall, 88013,  CUIAdminShopWishListCategory, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36EC90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	xor ebx,ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0xE4E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,edi
	call CWnd::SetBackgrnd
	mov dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x34],ebx
	lea ecx,[esp+0x10]
	push 0xA27
	push ecx
	mov dword ptr [esp+0x4C],ebx
	mov dword ptr [esp+0x34],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x48],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x44],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block15

 Block6:
	add eax,8
	cmp eax,ebx
	je Block15

 Block7:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block9

 Block8:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [edi+0x84]
	mov dword ptr [edi+0x84],esi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [edi+0x84]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x2C]
	push edx
	push 1
	push 7
	push 0xB4
	push 0x3E8
	push edi
	call eax
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CUIAdminShopWishList>::ms_pInstance]
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov byte ptr [esp+0x44],3
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],eax
	cmp eax,ebx
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block13:
	lea eax,[esp+0x10]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x48],4
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x44],5
	cmp esi,ebx
	jne Block16

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	xor esi,esi
	jmp Block9

 Block16:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,ebx
	jge Block18

 Block17:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x44],4
	cmp eax,ebx
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x44],3
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block26

 Block25:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block26:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x44],6
	cmp esi,ebx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xB4]
	push 0xFFFFFFFE
	push esi
	call eax
	cmp eax,ebx
	jge Block30

 Block29:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block30:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block32:
	lea eax,[esp+0x14]
	push 0x27A
	push eax
	mov dword ptr [edi+0x9C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea esi,[edi+0x88]
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],7
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	lea ecx,[esp+0x14]
	push 0x27D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],8
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	lea edx,[esp+0x14]
	push 0x27F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],9
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	lea eax,[esp+0x14]
	push 0x280
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0xA
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block40:
	lea ecx,[esp+0x14]
	push 0x289
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0xB
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	lea edx,[esp+0x14]
	push 0x282
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0xC
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
	lea eax,[esp+0x14]
	push 0x281
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0xD
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	lea ecx,[esp+0x14]
	push 0x284
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0xE
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	lea edx,[esp+0x14]
	push 0x283
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0xF
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block50:
	lea eax,[esp+0x14]
	push 0x28B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x10
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block52:
	lea ecx,[esp+0x14]
	push 0x28C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x11
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block54:
	lea edx,[esp+0x14]
	push 0x28D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea esi,[edi+0x8C]
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x12
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block56:
	lea eax,[esp+0x14]
	push 0x28E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x13
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block58:
	lea ecx,[esp+0x14]
	push 0x28F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x14
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block60:
	lea edx,[esp+0x14]
	push 0x290
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x15
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block62:
	lea eax,[esp+0x14]
	push 0x1A63
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x16
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block64:
	lea ecx,[esp+0x14]
	push 0x291
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea esi,[edi+0x90]
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x17
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block66

 Block65:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block66:
	lea edx,[esp+0x14]
	push 0x292
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x18
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block68:
	lea eax,[esp+0x14]
	push 0x293
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x19
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block70

 Block69:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block70:
	lea ecx,[esp+0x14]
	push 0x294
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x1A
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block72:
	lea edx,[esp+0x14]
	push 0x26A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea esi,[edi+0x94]
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x1B
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block74:
	lea eax,[esp+0x14]
	push 0x26B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x1C
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block76

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block76:
	lea ecx,[esp+0x14]
	push 0x26C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x1D
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block78

 Block77:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block78:
	lea edx,[esp+0x14]
	push 0x26D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x1E
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block80

 Block79:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block80:
	lea eax,[esp+0x14]
	push 0x26E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x1F
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block82

 Block81:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block82:
	lea ecx,[esp+0x14]
	push 0x26F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x20
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block84

 Block83:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block84:
	lea edx,[esp+0x14]
	push 0x270
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea esi,[edi+0x98]
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x21
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block86

 Block85:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block86:
	lea eax,[esp+0x14]
	push 0x271
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x22
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block88

 Block87:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block88:
	lea ecx,[esp+0x14]
	push 0x272
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x23
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block90

 Block89:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block90:
	lea edx,[esp+0x14]
	push 0x273
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x24
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block92

 Block91:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block92:
	lea eax,[esp+0x14]
	push 0x274
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x25
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block94

 Block93:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block94:
	lea ecx,[esp+0x14]
	push 0x275
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x26
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block96

 Block95:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block96:
	lea edx,[esp+0x14]
	push 0x276
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x27
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block98

 Block97:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block98:
	lea eax,[esp+0x14]
	push 0x277
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x28
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block100

 Block99:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block100:
	lea ecx,[esp+0x14]
	push 0x278
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x29
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block102

 Block101:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block102:
	lea edx,[esp+0x14]
	push 0x279
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x4C],0x2A
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block104

 Block103:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block104:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp eax,ebx
	je Block106

 Block105:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block106:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x38
	ret 4
}
}
// CUIAdminShopWishListCategory::AddtoList2
__SUB_CLASS_THIS(0036D0D0, __thiscall, 88020,  CUIAdminShopWishListCategory, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [TSingleton<CUIAdminShopWishList>::ms_pInstance]
	imul eax,0x2710
	mov dword ptr [ecx+0x94],eax
	add eax,0x270F
	mov dword ptr [ecx+0x98],eax
	mov dword ptr [ecx+0x88],1
	ret 4
}
}
// CUIAdminShopWishListCategory::OnButtonClicked
__SUB_CLASS_THIS(00372620, __thiscall, 88018,  CUIAdminShopWishListCategory, void, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x3E8
	jne Block2

 Block1:
	mov ecx,dword ptr [TSingleton<CUIAdminShopWishList>::ms_pInstance]
	mov dword ptr [esp+4],0
	jmp  CUIAdminShopWishList::ToggleAddOn

 Block2:
	ret 4
}
}
// CUIAdminShopWishListSearchResult::OnSetFocus
__SUB_CLASS_THIS(0036DA00, __thiscall, 87982,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIAdminShopWishListSearchResult::OnMouseButton
_SUB_EXCEPTION_HANDLER(36E3A0)
__SUB_CLASS_THIS(0036E3A0, __thiscall, 87986,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36E3A0
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
	cmp edi,0x202
	je Block2

 Block1:
	cmp edi,0x203
	jne Block24

 Block2:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x34]
	push eax
	lea ebp,[esi-4]
	push ecx
	mov ecx,ebp
	call CUIAdminShopWishListSearchResult::GetIndexFromPoint
	cmp edi,0x202
	jne Block9

 Block3:
	cmp dword ptr [esi+0xA0],eax
	je Block24

 Block4:
	xor ebx,ebx
	cmp eax,ebx
	mov dword ptr [esi+0xA0],eax
	jl Block7

 Block5:
	cmp eax,0xA
	jge Block7

 Block6:
	push 1
	jmp Block8

 Block7:
	push ebx

 Block8:
	mov esi,dword ptr [esi+0x98]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	call eax
	push ebx
	mov ecx,ebp
	call CWnd::InvalidateRect
	jmp Block25

 Block9:
	cmp edi,0x203
	jne Block24

 Block10:
	xor ebx,ebx
	cmp eax,ebx
	jl Block24

 Block11:
	push eax
	lea ecx,[esi+0xBC]
	call ZList<long>::FindIndex
	mov edi,dword ptr [eax]
	push edi
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	lea edx,[esp+0x14]
	push 0xE54
	push edx
	mov dword ptr [esp+0x2C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x34],ebx
	mov ecx,dword ptr [esp+0x38]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x30],2
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x30],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x24],4
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],5
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea eax,[esp+0x40]
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block20

 Block16:
	mov ecx,dword ptr [TSingleton<CUIAdminShopWishList>::ms_pInstance]
	push edi
	call CUIAdminShopWishList::SendRegisterPacket
	mov ecx,dword ptr [TSingleton<CUIAdminShopWishList>::ms_pInstance]
	call CUIAdminShopWishList::CloseAdminShopWishList
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,ebx
	je Block25

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block25

 Block20:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,ebx
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	lea ecx,[esi+0xF4]
	call CUIToolTip::ClearToolTip

 Block25:
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
// CUIAdminShopWishList::SetCtrl
_SUB_EXCEPTION_HANDLER(3715E0)
__SUB_CLASS_THIS0(003715E0, __thiscall, 88046,  CUIAdminShopWishList, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3715E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x68]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x70],ebx
	mov dword ptr [esp+0x1C],ebx
	cmp dword ptr [esi+0xA4],ebx
	jne Block7

 Block1:
	lea eax,[esp+0x14]
	push 0xE63
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],2
	cmp eax,ebx
	je Block5

 Block4:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	push eax
	lea ecx,[esi+0xA0]
	mov byte ptr [esp+0x74],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0x7A
	push 0xB9
	push 0x7D0
	push esi
	call edx

 Block7:
	cmp dword ptr [esi+0xAC],ebx
	jne Block14

 Block8:
	lea eax,[esp+0x14]
	push 0xE69
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],4
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block13

 Block12:
	xor eax,eax

 Block13:
	push eax
	lea ecx,[esi+0xA8]
	mov byte ptr [esp+0x74],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0x4C
	push 0xAF
	push 0x7D1
	push esi
	call edx

 Block14:
	cmp dword ptr [esi+0xB4],ebx
	jne Block21

 Block15:
	lea eax,[esp+0x14]
	push 0x1A71
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block17:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],6
	cmp eax,ebx
	je Block19

 Block18:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block20

 Block19:
	xor eax,eax

 Block20:
	push eax
	lea ecx,[esi+0xB0]
	mov byte ptr [esp+0x74],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 8
	push 0xE5
	push 0x7D3
	push esi
	call edx

 Block21:
	lea ecx,[esp+0x2C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea eax,[esp+0x14]
	push 0x1A25
	push eax
	mov byte ptr [esp+0x78],7
	mov dword ptr [esp+0x58],0xFFFFFFFF
	mov dword ptr [esp+0x50],0xFF000000
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov edi,eax
	lea ecx,[esp+0x40]
	cmp ecx,edi
	je Block26

 Block22:
	mov ecx,dword ptr [esp+0x40]
	cmp ecx,ebx
	je Block24

 Block23:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x40],ebx

 Block24:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x40],edi
	cmp edi,ebx
	je Block26

 Block25:
	add edi,8
	push edi
	call ebp

 Block26:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	je Block28

 Block27:
	call _xbstr_t::Data_t::Release

 Block28:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x60],0x100
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],8
	cmp eax,ebx
	je Block30

 Block29:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block31

 Block30:
	xor eax,eax

 Block31:
	mov byte ptr [esp+0x70],7
	cmp eax,ebx
	je Block40

 Block32:
	add eax,8
	cmp eax,ebx
	je Block40

 Block33:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block35

 Block34:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block35:
	mov eax,dword ptr [esi+0xBC]
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block37

 Block36:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block37:
	mov ecx,dword ptr [esi+0xBC]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x2C]
	push edx
	push 0xD
	push 0x96
	push 0x4E
	push 0x12
	push 0x7D2
	push esi
	call eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x70],bl
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp eax,ebx
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block39:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret

 Block40:
	xor edi,edi
	jmp Block35
}
}
// CUIAdminShopWishListSearchResult::OnMouseMove
_SUB_EXCEPTION_HANDLER(36DBA0)
__SUB_CLASS_THIS(0036DBA0, __thiscall, 87985,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36DBA0
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
	mov ebp,dword ptr [esp+0x30]
	push ebx
	lea ecx,[esi-4]
	push ebp
	mov dword ptr [esp+0x1C],ecx
	call CUIAdminShopWishListSearchResult::GetIndexFromPoint
	mov edi,eax
	test edi,edi
	jge Block2

 Block1:
	lea ecx,[esi+0xF4]
	call CUIToolTip::ClearToolTip
	jmp Block9

 Block2:
	push edi
	lea ecx,[esi+0xBC]
	call ZList<long>::FindIndex
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0x1C]
	push eax
	call CItemInfo::GetItemSlot
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x28],0
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+ebx+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	lea ecx,[eax+ebp+0x14]
	push ecx
	lea ecx,[esi+0xF4]
	call CUIToolTip::ShowItemToolTip
	mov eax,dword ptr [esp+0x1C]

 Block4:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block9

 Block5:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	mov edx,dword ptr [esp+0x1C]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x1C]
	test ecx,ecx
	je Block8

 Block7:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block8:
	mov dword ptr [esp+0x1C],0

 Block9:
	cmp dword ptr [esi+0xA4],edi
	je Block11

 Block10:
	mov ecx,dword ptr [esp+0x14]
	push 0
	mov dword ptr [esi+0xA4],edi
	call CWnd::InvalidateRect

 Block11:
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
// CUIAdminShopWishListSearchResult::~CUIAdminShopWishListSearchResult
_SUB_EXCEPTION_HANDLER(36DA20)
__SUB_CLASS_THIS0(0036DA20, __thiscall, 87980,  CUIAdminShopWishListSearchResult, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36DA20
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIAdminShopWishListSearchResult::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIAdminShopWishListSearchResult::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIAdminShopWishListSearchResult::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB40]
	mov dword ptr [esp+0x1C],0xA
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<ITEMNAME>>::`vftable'
	call ZList<ZRef<ITEMNAME>>::RemoveAll
	lea ecx,[esi+0xF8]
	mov byte ptr [esp+0x1C],9
	call CUIToolTip::~CUIToolTip
	lea ecx,[esi+0xD4]
	mov byte ptr [esp+0x1C],8
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	lea ecx,[esi+0xC0]
	mov byte ptr [esp+0x1C],7
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	lea ecx,[esi+0xAC]
	mov byte ptr [esp+0x1C],6
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	mov eax,dword ptr [esi+0xA0]
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
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0x88]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0x80]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIAdminShopWishListSearchResult>::ms_pInstance],ebx
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CWnd::~CWnd
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
// CUIAdminShopWishList::ToggleAddOn
_SUB_EXCEPTION_HANDLER(371950)
__SUB_CLASS_THIS(00371950, __thiscall, 88055,  CUIAdminShopWishList, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_371950
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x20]
	and eax,3
	sub eax,0
	je Block21

 Block1:
	sub eax,1
	je Block12

 Block2:
	sub eax,1
	jne Block29

 Block3:
	cmp dword ptr [esi+0xE0],0
	lea eax,[esi+0xE0]
	je Block6

 Block4:
	mov ecx,dword ptr [esi+0xC4]
	test ecx,ecx
	je Block6

 Block5:
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push eax
	call CWnd::GetLayer
	mov ecx,esi
	call CUIAdminShopWishList::OnToggleDetail

 Block6:
	cmp dword ptr [esi+0xCC],0
	jne Block11

 Block7:
	push 0xB54
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,eax
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x18],1
	test ebx,ebx
	je Block9

 Block8:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	lea edi,[esi+4]
	mov ecx,edi
	call eax
	mov edx,dword ptr [edi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	push eax
	mov ecx,ebx
	call CUIAdminShopWishListSearchResult::_ctor_0
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	push eax
	lea ecx,[esi+0xC8]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZRef<CUIAdminShopWishListSearchResult>::op_assign_ptr

 Block11:
	mov ecx,dword ptr [esi+0xCC]
	call CUIAdminShopWishListSearchResult::Reset
	lea ecx,[esi+0xE4]
	push ecx
	mov ecx,dword ptr [esi+0xCC]
	jmp Block27

 Block12:
	cmp dword ptr [esi+0xE4],0
	lea eax,[esi+0xE4]
	je Block15

 Block13:
	mov ecx,dword ptr [esi+0xCC]
	test ecx,ecx
	je Block15

 Block14:
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push eax
	call CWnd::GetLayer
	mov ecx,esi
	call CUIAdminShopWishList::OnToggleDetail

 Block15:
	cmp dword ptr [esi+0xC4],0
	jne Block20

 Block16:
	push 0xA0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,eax
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x18],0
	test ebx,ebx
	je Block18

 Block17:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	lea edi,[esi+4]
	mov ecx,edi
	call eax
	mov edx,dword ptr [edi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	push eax
	mov ecx,ebx
	call CUIAdminShopWishListCategory::_ctor_0
	jmp Block19

 Block18:
	xor eax,eax

 Block19:
	push eax
	lea ecx,[esi+0xC0]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZRef<CUIAdminShopWishListCategory>::op_assign_ptr

 Block20:
	lea ecx,[esi+0xE0]
	push ecx
	mov ecx,dword ptr [esi+0xC4]
	jmp Block27

 Block21:
	cmp dword ptr [esi+0xE0],0
	lea eax,[esi+0xE0]
	je Block24

 Block22:
	mov ecx,dword ptr [esi+0xC4]
	test ecx,ecx
	je Block24

 Block23:
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push eax
	jmp Block28

 Block24:
	cmp dword ptr [esi+0xE4],0
	lea eax,[esi+0xE4]
	je Block29

 Block25:
	mov ecx,dword ptr [esi+0xCC]
	test ecx,ecx
	je Block29

 Block26:
	push eax

 Block27:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push edx

 Block28:
	call CWnd::GetLayer
	mov ecx,esi
	call CUIAdminShopWishList::OnToggleDetail

 Block29:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 4
}
}
// CUIAdminShopWishListCategory::~CUIAdminShopWishListCategory
_SUB_EXCEPTION_HANDLER(36E6A0)
__SUB_CLASS_THIS0(0036E6A0, __thiscall, 88012,  CUIAdminShopWishListCategory, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36E6A0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIAdminShopWishListCategory::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIAdminShopWishListCategory::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIAdminShopWishListCategory::`vftable'{for `ZRefCounted'}
	push offset ZArray<ZXString<char>>::~ZArray<ZXString<char>>
	push 5
	push 4
	lea eax,[esi+0x88]
	push eax
	mov dword ptr [esp+0x28],2
	call __eh_vector_dtor_iterator
	cmp dword ptr [esi+0x84],0
	lea edi,[esi+0x80]
	mov byte ptr [esp+0x18],1
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIAdminShopWishListCategory>::ms_pInstance],0
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CWnd::~CWnd
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CUIAdminShopWishListCategory::AddtoList
__SUB_CLASS_THIS(0036D070, __thiscall, 88020,  CUIAdminShopWishListCategory, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [TSingleton<CUIAdminShopWishList>::ms_pInstance]
	imul eax,0x2710
	mov dword ptr [ecx+0x8C],eax
	add eax,0x270F
	mov dword ptr [ecx+0x90],eax
	mov dword ptr [ecx+0x88],1
	ret 4
}
}
// CUIAdminShopWishListCategory::ClearList
__SUB_CLASS_THIS0(0036D040, __thiscall, 88012,  CUIAdminShopWishListCategory, void) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUIAdminShopWishList>::ms_pInstance]
	xor ecx,ecx
	mov dword ptr [eax+0x8C],ecx
	mov dword ptr [eax+0x90],ecx
	mov dword ptr [eax+0x94],ecx
	mov dword ptr [eax+0x98],ecx
	mov dword ptr [eax+0x88],ecx
	ret
}
}
// CUIAdminShopWishList::OnCreate
__SUB_CLASS_THIS(00372640, __thiscall, 88047,  CUIAdminShopWishList, void, void*) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CUIAdminShopWishList::SetLayer
	mov ecx,esi
	call CUIAdminShopWishList::SetCtrl
	mov eax,dword ptr [esi+0xBC]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	pop esi
	ret 4
}
}
// CUIAdminShopWishList::CloseAdminShopWishList
_SUB_EXCEPTION_HANDLER(36E300)
__SUB_CLASS_THIS0(0036E300, __thiscall, 88046,  CUIAdminShopWishList, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36E300
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	lea eax,[esp+4]
	push 0x924
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x14],0
	call play_ui_sound
	mov eax,dword ptr [esp+8]
	add esp,4
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [TSingleton<CUIAdminShopWishList>::ms_pInstance]
	test ecx,ecx
	je Block5

 Block3:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIAdminShopWishList>::ms_pInstance]
	test eax,eax
	je Block5

 Block4:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block5:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x10
	ret
}
}
// CUIAdminShopWishListCategory::AddtoList
__SUB_CLASS_THIS(0036D0A0, __thiscall, 88019,  CUIAdminShopWishListCategory, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUIAdminShopWishList>::ms_pInstance]
	mov ecx,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	mov dword ptr [eax+0x8C],ecx
	mov dword ptr [eax+0x90],edx
	mov dword ptr [eax+0x88],1
	ret 8
}
}
// CUIAdminShopWishListSearchResult::GetIndexFromPoint
__SUB_CLASS_THIS(0036CFB0, __thiscall, 87987,  CUIAdminShopWishListSearchResult, long, long, long) {
__asm {

 Block0:
	sub esp,0x14
	push ebx
	mov ebx,dword ptr [esp+0x1C]
	push ebp
	mov ebp,dword ptr [esp+0x24]
	push esi
	push edi
	xor edi,edi
	mov dword ptr [esp+0x10],ecx
	lea esi,[edi+0x3F]
	jmp Block2

 Block2:
	mov eax,dword ptr [esp+0x10]
	mov eax,dword ptr [eax+0xC8]
	cmp eax,0xA
	jl Block4

 Block3:
	mov eax,0xA

 Block4:
	cmp edi,eax
	jge Block8

 Block5:
	push ebp
	push ebx
	lea edx,[esp+0x1C]
	lea ecx,[esi-0x14]
	push edx
	mov dword ptr [esp+0x20],0x14
	mov dword ptr [esp+0x24],ecx
	mov dword ptr [esp+0x28],0xBE
	mov dword ptr [esp+0x2C],esi
	call PtInRect
	test eax,eax
	jne Block7

 Block6:
	inc edi
	add esi,0x14
	jmp Block2

 Block7:
	mov eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 8

 Block8:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	add esp,0x14
	ret 8
}
}
// CUIAdminShopWishListSearchResult::Draw
_SUB_EXCEPTION_HANDLER(36E770)
__SUB_CLASS_THIS(0036E770, __thiscall, 87983,  CUIAdminShopWishListSearchResult, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36E770
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
	mov ebx,ecx
	mov dword ptr [esp+0x20],ebx
	mov eax,dword ptr [esp+0x70]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebx
	call CWnd::GetCanvas
	xor ebp,ebp
	xor ecx,ecx
	mov dword ptr [esp+0x68],ebp
	mov dword ptr [esp+0x70],ecx
	mov eax,dword ptr [ebx+0xCC]
	mov esi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x68],1
	mov dword ptr [esp+0x14],ebp
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block34

 Block1:
	lea edi,[ebp+0x2B]
	jmp Block3

 Block2:
	mov ebx,dword ptr [esp+0x20]

 Block3:
	cmp ebp,dword ptr [ebx+0xA8]
	jne Block7

 Block4:
	test esi,esi
	je Block39

 Block5:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x8C]
	push 0xFFBBC9D9
	push 0x14
	push 0xAA
	push edi
	push 0x14
	push esi
	call eax
	test eax,eax
	jge Block7

 Block6:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block7:
	cmp ebp,dword ptr [ebx+0xA4]
	jne Block11

 Block8:
	test esi,esi
	je Block39

 Block9:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFF5B7B9E
	push 0x14
	push 0xAA
	push edi
	push 0x14
	push esi
	call edx
	test eax,eax
	jge Block11

 Block10:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block11:
	mov eax,3
	mov ecx,0xFF
	mov word ptr [esp+0x30],ax
	mov dword ptr [esp+0x38],ecx
	mov edx,dword ptr [ebx+0xA0]
	mov byte ptr [esp+0x68],2
	test esi,esi
	je Block39

 Block12:
	mov ebp,dword ptr [esp+0x30]
	mov ebx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x44]
	push edx
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x50]
	lea edx,[edi+5]
	push edx
	push 0x14
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebx+0x80]
	push esi
	call eax
	test eax,eax
	jge Block14

 Block13:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x68],1
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	lea eax,[esp+0x18]
	push eax
	call ZList<long>::GetNext
	mov ecx,dword ptr [eax]
	add esp,4
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esp+0x28]
	push edx
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0x6C],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x68],1
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	push 0x99
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 1
	push eax
	call get_basic_font
	lea ecx,[esp+0x80]
	add esp,8
	push ecx
	call format_string_1
	mov ebp,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[esp+0x50]
	push edx
	call ebp
	lea eax,[esp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block40

 Block21:
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x6C],4
	call ebp
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block40

 Block22:
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x30]
	push 1
	push edx
	mov byte ptr [esp+0x78],5
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x7C]
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	mov bl,6
	push eax
	mov byte ptr [esp+0x7C],bl
	call _xbstr_t::_ctor_0
	lea ecx,[edi+4]
	push ecx
	mov byte ptr [esp+0x7C],7
	push 0x20
	mov ecx,esi
	mov byte ptr [esp+0x80],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x68],5
	test eax,eax
	je Block24

 Block23:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block24:
	mov ebx,8
	mov byte ptr [esp+0x68],4
	cmp word ptr [esp+0x40],bx
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov byte ptr [esp+0x68],1
	cmp word ptr [esp+0x50],bx
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov ebp,dword ptr [esp+0x14]
	inc ebp
	add edi,0x14
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x14],ebp
	jne Block2

 Block33:
	mov ecx,dword ptr [esp+0x70]

 Block34:
	mov byte ptr [esp+0x68],0
	test ecx,ecx
	je Block36

 Block35:
	add ecx,0xFFFFFFF4
	push ecx
	call ZXString<char>::_Release
	add esp,4

 Block36:
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test esi,esi
	je Block38

 Block37:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block38:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 4

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	push eax
	call _com_issue_error
}
}
// CUIAdminShopWishList::OnButtonClicked
_SUB_EXCEPTION_HANDLER(372670)
__SUB_CLASS_THIS(00372670, __thiscall, 88049,  CUIAdminShopWishList, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_372670
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
	mov eax,dword ptr [esp+0x1C]
	sub eax,0x7D0
	je Block6

 Block1:
	sub eax,1
	je Block4

 Block2:
	sub eax,2
	jne Block10

 Block3:
	call CUIAdminShopWishList::CloseAdminShopWishList
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4

 Block4:
	mov ecx,dword ptr [esi+0xBC]
	lea eax,[esp+0x1C]
	push eax
	call CCtrlEdit::GetText
	push 0
	push 0
	mov ecx,eax
	mov dword ptr [esp+0x1C],0
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xC],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call CUIAdminShopWishList::SearchItemName
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block10

 Block5:
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

 Block6:
	cmp dword ptr [esi+0xC4],0
	je Block8

 Block7:
	push 0
	jmp Block9

 Block8:
	push 1

 Block9:
	call CUIAdminShopWishList::ToggleAddOn

 Block10:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CUIAdminShopWishListSearchResult::Reset
_SUB_EXCEPTION_HANDLER(36EAF0)
__SUB_CLASS_THIS0(0036EAF0, __thiscall, 87980,  CUIAdminShopWishListSearchResult, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_36EAF0
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
	mov eax,dword ptr [esi+0x8C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	xor ebp,ebp
	push ebp
	call edx
	mov eax,dword ptr [esi+0xB4C]
	lea ecx,[esi+0xC0]
	mov dword ptr [esi+0xE8],ebp
	mov dword ptr [esi+0xEC],eax
	call ZList<long>::RemoveAll
	lea ecx,[esi+0xD4]
	call ZList<long>::RemoveAll
	mov eax,dword ptr [esi+0xEC]
	mov dword ptr [esp+0x14],eax
	cmp eax,ebp
	je Block14

 Block1:
	cmp ebp,0x14
	jge Block14

 Block2:
	mov ebx,eax
	lea eax,[esp+0x14]
	push eax
	mov dword ptr [esp+0x30],0
	call ZList<ZRef<ITEMNAME>>::GetNext
	mov edi,eax
	mov eax,dword ptr [edi+4]
	add esp,4
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov edi,dword ptr [edi+4]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push edi
	mov dword ptr [esp+0x28],edi
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [edi+4]
	push ecx
	mov ecx,dword ptr [TSingleton<CUIAdminShopWishList>::ms_pInstance]
	call CUIAdminShopWishList::CanAddList
	test eax,eax
	je Block10

 Block5:
	cmp ebp,0xA
	jge Block7

 Block6:
	lea ecx,[esi+0xC0]
	call ZList<long>::AddTail_
	mov edx,dword ptr [edi+4]
	mov dword ptr [eax],edx
	jmp Block8

 Block7:
	lea ecx,[esi+0xD4]
	call ZList<long>::AddTail_
	mov ecx,dword ptr [edi+4]
	mov dword ptr [eax],ecx

 Block8:
	inc ebp
	cmp ebp,0xB
	jne Block10

 Block9:
	mov dword ptr [esi+0xF0],ebx

 Block10:
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block13

 Block12:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block13:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0
	test eax,eax
	jne Block1

 Block14:
	cmp dword ptr [esi+0xDC],0
	mov dword ptr [esi+0xF4],eax
	mov eax,dword ptr [esi+0x94]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	je Block16

 Block15:
	push 1
	jmp Block17

 Block16:
	push 0

 Block17:
	call eax
	mov esi,dword ptr [esi+0x9C]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	push 0
	call eax
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
// CUIAdminShopWishListSearchResult::OnButtonClicked
_SUB_EXCEPTION_HANDLER(371D30)
__SUB_CLASS_THIS(00371D30, __thiscall, 87984,  CUIAdminShopWishListSearchResult, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_371D30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x40]
	mov ecx,dword ptr [TSingleton<CUIAdminShopWishList>::ms_pInstance]
	mov dword ptr [esp+0x18],ecx
	cmp eax,0x3E8
	jne Block2

 Block1:
	push 0
	call CUIAdminShopWishList::ToggleAddOn
	jmp Block39

 Block2:
	cmp eax,0x3E9
	jne Block16

 Block3:
	lea ebx,[esi+0xD4]
	mov ecx,ebx
	call ZList<long>::RemoveAll
	lea edi,[esi+0xC0]
	push edi
	mov ecx,ebx
	call ZList<long>::AddTail_List
	mov ecx,edi
	call ZList<long>::RemoveAll
	lea ebp,[esi+0xAC]
	push ebp
	mov ecx,edi
	call ZList<long>::AddTail_List
	mov ecx,dword ptr [esi+0xEC]
	mov eax,dword ptr [esi+0xF0]
	mov edx,dword ptr [esi+0xE8]
	mov dword ptr [esi+0xF0],ecx
	mov ecx,ebp
	mov dword ptr [esi+0xF4],eax
	mov dword ptr [esi+0xEC],edx
	call ZList<long>::RemoveAll
	mov eax,dword ptr [esi+0xEC]
	lea ecx,[esp+0x40]
	push ecx
	mov dword ptr [esp+0x44],eax
	call ZList<ZRef<ITEMNAME>>::GetPrev
	mov eax,dword ptr [esp+0x44]
	add esp,4
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block13

 Block4:
	cmp dword ptr [esp+0x14],0xA
	jge Block13

 Block5:
	lea edx,[esp+0x40]
	push edx
	mov dword ptr [esp+0x3C],0
	mov dword ptr [esp+0x20],eax
	call ZList<ZRef<ITEMNAME>>::GetPrev
	mov edi,eax
	mov eax,dword ptr [edi+4]
	add esp,4
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov edi,dword ptr [edi+4]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edi
	mov dword ptr [esp+0x34],edi
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [edi+4]
	mov ecx,dword ptr [esp+0x1C]
	push eax
	call CUIAdminShopWishList::CanAddList
	test eax,eax
	je Block9

 Block8:
	mov ecx,ebp
	call ZList<long>::AddHead_
	mov ecx,dword ptr [edi+4]
	inc dword ptr [esp+0x14]
	mov dword ptr [eax],ecx

 Block9:
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block10:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block12

 Block11:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block12:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x2C],0
	test eax,eax
	jne Block4

 Block13:
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0xE8],ecx
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	mov ecx,dword ptr [esi+0x8C]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x1C]
	add ecx,4
	cmp dword ptr [esi+0xB4],0
	jne Block15

 Block14:
	push 0
	call eax
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	jmp Block39

 Block15:
	push 1
	call eax
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	jmp Block39

 Block16:
	cmp eax,0x3EA
	jne Block27

 Block17:
	lea ebx,[esi+0xAC]
	mov ecx,ebx
	call ZList<long>::RemoveAll
	lea edi,[esi+0xC0]
	push edi
	mov ecx,ebx
	call ZList<long>::AddTail_List
	mov ecx,edi
	call ZList<long>::RemoveAll
	lea ebp,[esi+0xD4]
	push ebp
	mov ecx,edi
	call ZList<long>::AddTail_List
	mov ecx,dword ptr [esi+0xEC]
	mov edx,dword ptr [esi+0xF0]
	mov eax,dword ptr [esi+0xF4]
	mov dword ptr [esi+0xE8],ecx
	mov ecx,ebp
	mov dword ptr [esi+0xEC],edx
	mov dword ptr [esi+0xF0],eax
	call ZList<long>::RemoveAll
	mov eax,dword ptr [esi+0xF0]
	mov dword ptr [esp+0x40],0
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block25

 Block18:
	cmp dword ptr [esp+0x40],0xA
	jge Block25

 Block19:
	mov dword ptr [esp+0x20],0
	lea ecx,[esp+0x14]
	mov ebx,1
	push ecx
	mov dword ptr [esp+0x3C],ebx
	call ZList<ZRef<ITEMNAME>>::GetNext
	add esp,4
	push eax
	lea ecx,[esp+0x20]
	call ZRef<ITEMNAME>::op_assign_copy
	mov edi,dword ptr [esp+0x20]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edi
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov edx,dword ptr [edi+4]
	mov ecx,dword ptr [esp+0x1C]
	push edx
	call CUIAdminShopWishList::CanAddList
	test eax,eax
	je Block21

 Block20:
	mov ecx,ebp
	call ZList<long>::AddTail_
	mov ecx,dword ptr [edi+4]
	add dword ptr [esp+0x40],ebx
	mov dword ptr [eax],ecx

 Block21:
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block24

 Block22:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block24

 Block23:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block24:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0
	test eax,eax
	jne Block18

 Block25:
	mov dword ptr [esi+0xF4],eax
	mov eax,dword ptr [esi+0x8C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x1C]
	add ecx,4
	cmp dword ptr [esi+0xDC],0
	jne Block15

 Block26:
	push 0
	call eax
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	jmp Block39

 Block27:
	cmp eax,0x3EB
	jne Block39

 Block28:
	mov eax,dword ptr [esi+0xA4]
	test eax,eax
	jl Block39

 Block29:
	push eax
	lea ecx,[esi+0xC0]
	call ZList<long>::FindIndex
	mov esi,dword ptr [eax]
	push esi
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	lea edx,[esp+0x1C]
	push 0xE54
	mov ebx,2
	push edx
	mov dword ptr [esp+0x40],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x18],0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x44],4
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x44]
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],6
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x38],7
	test eax,eax
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	push 0
	push 0
	push 0
	push 0
	push ecx
	lea eax,[esp+0x54]
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push eax
	call ZXString<char>::_ctor_copy
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block35

 Block34:
	mov ecx,dword ptr [TSingleton<CUIAdminShopWishList>::ms_pInstance]
	push esi
	call CUIAdminShopWishList::SendRegisterPacket
	mov ecx,dword ptr [TSingleton<CUIAdminShopWishList>::ms_pInstance]
	call CUIAdminShopWishList::CloseAdminShopWishList

 Block35:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x38],bl
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 4
}
}
