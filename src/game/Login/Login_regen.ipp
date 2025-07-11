#include "regen.hpp"
// Login.ipp
#include "Login.hpp"

// CLogin::Init
_SUB_EXCEPTION_HANDLER(1D8010)
__SUB_CLASS_THIS(001D8010, __thiscall, 53035,  CLogin, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D8010
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
	mov eax,dword ptr [esp+0x9C]
	push eax
	call CMapLoadable::Init
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x5C]
	xor edi,edi
	push ecx
	mov dword ptr [ebp+0x114],edi
	mov dword ptr [ebp+0x118],edi
	call esi
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[esp+0x4C]
	push eax
	mov dword ptr [esp+0x98],edi
	call esi
	lea ecx,[esp+0x4C]
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
	push edi
	push edi
	lea edx,[esp+0x64]
	push edx
	lea eax,[esp+0x58]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x544
	push ecx
	mov byte ptr [esp+0xB0],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xA8],2
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x80]
	mov byte ptr [esp+0xA8],1
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x9C],3
	call Ztl_variant_t::GetUnknown
	lea esi,[ebp+0x30]
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [esp+0x6C],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x94],1
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x6C]
	push ecx
	call ebx

 Block13:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x94],0
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[esp+0x4C]
	push eax
	call ebx

 Block17:
	or ebx,0xFFFFFFFF
	cmp word ptr [esp+0x5C],8
	mov dword ptr [esp+0x94],ebx
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x3D5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov dword ptr [esp+0xA0],4
	cmp ecx,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[esp+0x78]
	push edx
	mov dword ptr [esp+0xA4],ebx
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [esp+0x9C],5
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x2C]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block26

 Block24:
	cmp eax,0x80004002
	je Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	cmp word ptr [esp+0x6C],8
	mov dword ptr [esp+0x94],ebx
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	cmp eax,edi
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0xC]
	mov ecx,ebp
	call eax
	mov eax,dword ptr [_D_G_RM]
	cmp eax,edi
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x24]
	push 0x2BF20
	push eax
	mov esi,eax
	call edx
	cmp eax,edi
	jge Block34

 Block33:
	push offset __GUID_57dfe40b_3e20_4dbc_97e8_805a50f381bf
	push esi
	push eax
	call _com_issue_errorex

 Block34:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x4C]
	push eax
	call esi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	lea edx,[esp+0x5C]
	push edx
	mov dword ptr [esp+0x98],6
	call esi
	lea eax,[esp+0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	push edi
	push edi
	lea ecx,[esp+0x54]
	push ecx
	lea edx,[esp+0x68]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x546
	push eax
	mov byte ptr [esp+0xB0],7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xA8],8
	cmp dword ptr [_D_G_RM],edi
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea ecx,[esp+0x80]
	push ecx
	mov byte ptr [esp+0xAC],7
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x9C],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block43

 Block41:
	cmp eax,0x80004002
	je Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	mov ebx,8
	mov byte ptr [esp+0x94],0xB
	cmp word ptr [esp+0x6C],bx
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x74]
	xor edx,edx
	mov word ptr [esp+0x6C],dx
	cmp eax,edi
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[esp+0x6C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block47:
	mov byte ptr [esp+0x94],0xC
	cmp word ptr [esp+0x5C],bx
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	cmp eax,edi
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov byte ptr [esp+0x94],0xD
	cmp word ptr [esp+0x4C],bx
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,edi
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov dword ptr [esp+0x1C],edi
	lea edx,[esp+0x24]
	push 0xB84
	push edx
	mov byte ptr [esp+0x9C],0xE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0x5F
	push edi
	push eax
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0xA4],0xF
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0x10
	mov byte ptr [esp+0x94],0xE
	cmp eax,edi
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block57:
	mov dword ptr [esp+0x18],edi
	lea ecx,[esp+0x24]
	push 0x5AF
	push ecx
	mov byte ptr [esp+0x9C],0x10
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea edx,[esp+0x1C]
	push edx
	push eax
	mov byte ptr [esp+0xA0],0x11
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x94],0x10
	cmp eax,edi
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block59:
	lea eax,[esp+0x24]
	push 0x5B1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x94],0x12
	cmp eax,edi
	je Block61

 Block60:
	mov esi,dword ptr [eax]
	jmp Block62

 Block61:
	xor esi,esi

 Block62:
	push esi
	mov word ptr [esp+0x40],bx
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [esp+0x44],eax
	cmp eax,edi
	jne Block65

 Block63:
	cmp esi,edi
	je Block65

 Block64:
	push 0x8007000E
	call _com_issue_error

 Block65:
	lea ecx,[esp+0x3C]
	push ecx
	push 0xFF8B8172
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 0x1A25
	mov bl,0x13
	push edx
	mov byte ptr [esp+0xAC],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0xA4],0x14
	cmp ecx,edi
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	mov byte ptr [esp+0xA4],bl
	call IWzFont::Create
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x94],0x12
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],0x10
	cmp ecx,edi
	je Block73

 Block72:
	call _xbstr_t::Data_t::Release

 Block73:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	mov edi,dword ptr [esp+0x1C]
	lea ecx,[esp+0x3C]
	push ecx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,0x15
	push edi
	mov byte ptr [esp+0xA0],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x9C],0x16
	test ecx,ecx
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	mov byte ptr [esp+0x9C],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x3C],8
	mov esi,eax
	mov byte ptr [esp+0x94],0x10
	jne Block80

 Block78:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block81:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block83

 Block82:
	push eax
	call _com_issue_error

 Block83:
	mov eax,3
	mov word ptr [esp+0x3C],ax
	mov dword ptr [esp+0x44],0xCC
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x40]
	push edx
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0x18
	push edi
	mov byte ptr [esp+0xA8],bl
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [esp+0x30]
	mov byte ptr [esp+0xA4],0x19
	test edi,edi
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	mov ecx,0x2DA
	sub ecx,esi
	push 7
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0xAC],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x94],0x17
	jne Block88

 Block86:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block89:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x94],0x10
	jne Block92

 Block90:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	mov edx,0xD
	mov word ptr [esp+0x3C],dx
	mov dword ptr [esp+0x44],edi
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	mov bl,0x1A
	push edi
	mov byte ptr [esp+0x98],bl
	call ecx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x94],0x1B
	test ecx,ecx
	jne Block97

 Block96:
	push 0x80004003
	call _com_issue_error

 Block97:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x40]
	push eax
	push 0x6E
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x40]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x198]
	cmp esi,eax
	je Block102

 Block98:
	mov dword ptr [ebp+0x198],eax
	test eax,eax
	je Block100

 Block99:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block100:
	test esi,esi
	je Block102

 Block101:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block102:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block104

 Block103:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block104:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x94],bl
	jne Block111

 Block105:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block107

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block107:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block108:
	mov ebx,8
	mov byte ptr [esp+0x94],0x10
	cmp word ptr [esp+0x2C],bx
	jne Block112

 Block109:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block113

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block111:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x3C]
	push edx
	call edi
	jmp Block108

 Block112:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block113:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block115

 Block114:
	push 0x80004003
	call _com_issue_error

 Block115:
	lea edx,[esp+0x24]
	push edx
	call IWzGr2D::Getcenter
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x94],0x1C
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],eax
	test eax,eax
	je Block117

 Block116:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block117:
	mov esi,dword ptr [ebp+0x198]
	mov byte ptr [esp+0x94],0x1D
	test esi,esi
	jne Block119

 Block118:
	push 0x80004003
	call _com_issue_error

 Block119:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block121

 Block120:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block121:
	mov byte ptr [esp+0x94],0x1C
	cmp word ptr [esp+0x2C],bx
	jne Block124

 Block122:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea edx,[esp+0x2C]
	push edx
	call edi

 Block125:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],0x10
	test eax,eax
	je Block127

 Block126:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block127:
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
	jge Block129

 Block128:
	push eax
	call _com_issue_error

 Block129:
	lea edx,[esp+0x3C]
	mov bl,0x1E
	push edx
	mov byte ptr [esp+0x98],bl
	call esi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block131

 Block130:
	push eax
	call _com_issue_error

 Block131:
	mov esi,dword ptr [ebp+0x198]
	mov byte ptr [esp+0x94],0x1F
	test esi,esi
	jne Block133

 Block132:
	push 0x80004003
	call _com_issue_error

 Block133:
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x40]
	push edx
	call get_adjust_cy
	mov ecx,0xFFFFFED4
	sub ecx,eax
	push ecx
	push 0xFFFFFE70
	mov ecx,esi
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x94],bl
	jne Block136

 Block134:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block137

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block137

 Block136:
	lea eax,[esp+0x3C]
	push eax
	call edi

 Block137:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x94],0x10
	jne Block140

 Block138:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea edx,[esp+0x2C]
	push edx
	call edi

 Block141:
	mov esi,dword ptr [ebp+0x198]
	test esi,esi
	jne Block143

 Block142:
	push 0x80004003
	call _com_issue_error

 Block143:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block145

 Block144:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block145:
	call TSingleton<CLoginGradeWnd>::CreateInstance
	mov edx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	xor esi,esi
	cmp dword ptr [edx+0x38],1
	lea edi,[ebp+0x248]
	jne Block151

 Block146:
	mov bl,0x20

 Block147:
	lea eax,[esi+4]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	call CWvsApp::GetCmdLine
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x98],bl
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],0x10
	test eax,eax
	je Block149

 Block148:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block149:
	inc esi
	add edi,4
	cmp esi,5
	jl Block147

 Block150:
	jmp Block155

 Block151:
	mov bl,0x21

 Block152:
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	lea edx,[esi+2]
	push edx
	lea eax,[esp+0x28]
	push eax
	call CWvsApp::GetCmdLine
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x98],bl
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],0x10
	test eax,eax
	je Block154

 Block153:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block154:
	inc esi
	add edi,4
	cmp esi,5
	jl Block152

 Block155:
	push 0x11C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x28],eax
	mov byte ptr [esp+0x94],0x22
	test eax,eax
	je Block157

 Block156:
	push ebp
	mov ecx,eax
	call CUILoginStart::_ctor_0
	jmp Block158

 Block157:
	xor eax,eax

 Block158:
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x94],0x10
	test eax,eax
	je Block166

 Block159:
	add eax,8
	je Block166

 Block160:
	lea esi,[eax-8]
	test esi,esi
	je Block162

 Block161:
	lea ecx,[esi+0xC]
	push ecx
	call edi

 Block162:
	mov eax,dword ptr [ebp+0x20C]
	mov dword ptr [ebp+0x20C],esi
	test eax,eax
	je Block167

 Block163:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block167

 Block164:
	lea eax,[esi+4]
	push eax
	call edi
	test esi,esi
	je Block167

 Block165:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	mov edi,1
	push edi
	mov ecx,esi
	call eax
	jmp Block168

 Block166:
	xor esi,esi
	jmp Block162

 Block167:
	mov edi,1

 Block168:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [ecx+0x202C],edi
	jne Block174

 Block169:
	mov dword ptr [ebp+0x1A4],edi
	mov dword ptr [ebp+0x1C0],edi
	mov edx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov eax,dword ptr [edx+0x2C]
	add eax,0x320
	jne Block171

 Block170:
	mov eax,edi

 Block171:
	mov dword ptr [ebp+0x1A8],eax
	lea eax,[esp+0x17]
	push eax
	push 0xF
	lea ecx,[ebp+0x1D4]
	mov dword ptr [ebp+0x1D0],0xFFFFFFFF
	call ZArray<AvatarData>::_Alloc
	lea ecx,[esp+0x17]
	push ecx
	push 0xF
	lea ecx,[ebp+0x1D8]
	call ZArray<CLogin::RANK>::_Alloc
	lea edx,[esp+0x17]
	push edx
	push 0xF
	lea ecx,[ebp+0x1DC]
	call ZArray<int>::_Alloc
	lea eax,[esp+0x17]
	push eax
	push 0x3C
	lea ecx,[ebp+0x16C]
	call ZArray<AvatarData>::_Alloc
	lea ecx,[esp+0x17]
	push ecx
	push 0x3C
	lea ecx,[ebp+0x170]
	call ZArray<CLogin::RANK>::_Alloc
	push 0
	mov ecx,ebp
	call CLogin::CloseLoginDescWnd
	push 0x1D8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x28],eax
	mov byte ptr [esp+0x94],0x23
	test eax,eax
	je Block173

 Block172:
	push ebp
	mov ecx,eax
	call CUIWorldSelect::_ctor_0

 Block173:
	push 4
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x98],0x10
	call COutPacket::_ctor_1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x98],0x24
	call CClientSocket::SendPacket
	mov ecx,dword ptr [ebp+0x20C]
	push 0x22
	call CUILoginStart::SetButton
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x94],0x10
	call ZArray<unsigned char>::RemoveAll
	jmp Block177

 Block174:
	push 0xBA4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x28],eax
	mov byte ptr [esp+0x94],0x25
	test eax,eax
	je Block176

 Block175:
	push ebp
	mov ecx,eax
	call CUITitle::_ctor_0

 Block176:
	mov byte ptr [esp+0x94],0x10

 Block177:
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
	jge Block179

 Block178:
	push eax
	call _com_issue_error

 Block179:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x98],0x26
	call esi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block181

 Block180:
	push eax
	call _com_issue_error

 Block181:
	mov ecx,dword ptr [_D_G_GR]
	mov bl,0x27
	mov byte ptr [esp+0x94],bl
	test ecx,ecx
	jne Block183

 Block182:
	push 0x80004003
	call _com_issue_error

 Block183:
	lea edx,[esp+0x24]
	push edx
	call IWzGr2D::Getcenter
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x94],0x28
	test esi,esi
	jne Block185

 Block184:
	push 0x80004003
	call _com_issue_error

 Block185:
	mov eax,dword ptr [ebp+0x1A4]
	push eax
	mov ecx,ebp
	call CLogin::GetStepHeight
	mov edi,dword ptr [esp+0x3C]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],edi
	mov edi,dword ptr [esp+0x50]
	mov dword ptr [ecx+4],edi
	mov edi,dword ptr [esp+0x54]
	mov dword ptr [ecx+8],edi
	mov edi,dword ptr [esp+0x58]
	mov dword ptr [ecx+0xC],edi
	mov edi,dword ptr [esp+0x3C]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],edi
	mov edi,dword ptr [esp+0x50]
	mov dword ptr [ecx+4],edi
	mov edi,dword ptr [esp+0x54]
	push eax
	mov eax,dword ptr [edx+0x90]
	mov dword ptr [ecx+8],edi
	mov edi,dword ptr [esp+0x5C]
	push 0x1C
	push esi
	mov dword ptr [ecx+0xC],edi
	call eax
	test eax,eax
	jge Block187

 Block186:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block187:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x94],bl
	test eax,eax
	je Block189

 Block188:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block189:
	mov esi,8
	mov byte ptr [esp+0x94],0x26
	cmp word ptr [esp+0x2C],si
	jne Block192

 Block190:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block193

 Block191:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block193

 Block192:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block193:
	mov byte ptr [esp+0x94],0x10
	cmp word ptr [esp+0x3C],si
	jne Block196

 Block194:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block197

 Block195:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block197

 Block196:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block197:
	mov ecx,ebp
	call CLogin::LoadNewCharInfo
	mov ecx,ebp
	call CMapLoadable::PlayBGMFromMapInfo
	mov ecx,ebp
	call CStage::FadeIn
	push 0x22
	lea ecx,[esp+0x80]
	call COutPacket::_ctor_1
	lea ecx,[esp+0x7C]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	mov byte ptr [esp+0x98],0x29
	call CClientSocket::SendPacket
	lea ecx,[esp+0x80]
	mov byte ptr [esp+0x94],0x10
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x94],0xE
	test eax,eax
	je Block199

 Block198:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block199:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x94],0xD
	test eax,eax
	je Block201

 Block200:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block201:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [esp+0x98],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret 4
}
}
// CLogin::ChangeStep
__SUB_CLASS_THIS(001DA140, __thiscall, 53038,  CLogin, void, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x1A0],0
	je Block2

 Block1:
	mov eax,dword ptr [esi+0x1A4]
	push eax
	call CLogin::ChangeStepImmediate

 Block2:
	mov edx,dword ptr [esp+8]
	mov eax,dword ptr [esi+0x1A4]
	mov dword ptr [esi+0x19C],eax
	test edx,edx
	jge Block4

 Block3:
	inc eax
	cdq
	mov ecx,6
	idiv ecx

 Block4:
	mov dword ptr [esi+0x1A4],edx
	cmp edx,5
	je Block15

 Block5:
	mov eax,dword ptr [esi+0x19C]
	cmp eax,5
	je Block15

 Block6:
	cmp edx,1
	jne Block9

 Block7:
	cmp eax,2
	jne Block9

 Block8:
	push edx
	mov ecx,esi
	call CLogin::ChangeStepImmediate

 Block9:
	mov edx,dword ptr [esi+0x19C]
	cmp edx,dword ptr [esi+0x1A4]
	je Block16

 Block10:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0xFF
	push 0x16
	push 0xC8
	push 0
	push 0xC8
	call CAnimationDisplayer::RegisterFadeInOutAnimation
	mov eax,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov eax,dword ptr [eax+0x2C]
	lea ecx,[eax+0x190]
	test ecx,ecx
	jne Block12

 Block11:
	mov ecx,1

 Block12:
	add eax,0xC8
	mov dword ptr [esi+0x1A8],ecx
	jne Block14

 Block13:
	mov eax,1

 Block14:
	mov dword ptr [esi+0x1A0],eax
	pop esi
	ret 4

 Block15:
	push edx
	mov ecx,esi
	call CLogin::ChangeStepImmediate

 Block16:
	pop esi
	ret 4
}
}
// CLogin::GetNewCharEquipName
__SUB_CLASS_THIS(001F4F90, __thiscall, 53077,  CLogin, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push ecx
	cmp byte ptr [ecx+0x264],0
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	jne Block2

 Block1:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [ecx+eax*4+0x274]
	jmp Block3

 Block2:
	mov edx,dword ptr [esp+0x10]
	mov ecx,dword ptr [ecx+edx*4+0x298]

 Block3:
	add ecx,4
	push ecx
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,esi
	pop esi
	pop ecx
	ret 8
}
}
// CLogin::IsStepChanging
_SUB_EXCEPTION_HANDLER(1DFB40)
// 5E00B0
static uint8_t _SUB_1DFB40_LOOKUP_TABLE_1[27] = {
0, 13, 13, 1, 1, 2, 3, 0, 4, 0, 0, 5, 6, 0, 7, 8, 
9, 10, 11, 13, 13, 13, 10, 13, 13, 13, 12, 
};
// 5E0050
static uint8_t _SUB_1DFB40_LOOKUP_TABLE_0[40] = {
0, 11, 1, 2, 11, 11, 3, 4, 5, 5, 5, 11, 11, 11, 11, 6, 
11, 11, 11, 11, 11, 0, 11, 11, 11, 7, 6, 8, 8, 11, 1, 5, 
9, 9, 11, 11, 8, 10, 139, 255, 
};
__SUB_CLASS_THIS0(001DFB40, __thiscall, 53057,  CLogin, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1DFB40
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x458
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x454],eax
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x468]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	cmp dword ptr [ebx+0x1A4],1
	mov dword ptr [esp+0x18],ebx
	je Block2

 Block1:
	push 0xC
	lea ecx,[esp+0x30]
	call COutPacket::_ctor_1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x2C]
	push eax
	mov dword ptr [esp+0x474],0
	call CClientSocket::SendPacket
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x470],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	push 0xD
	lea ecx,[esp+0x20]
	call COutPacket::_ctor_1
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov esi,dword ptr [ecx+0x38]
	mov dword ptr [esp+0x470],1
	cmp esi,1
	jne Block6

 Block3:
	call CNMCOClientObject::GetInstance
	mov ecx,eax
	call CNMCOClientObject::DetachAuth
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	push esi
	lea edx,[esp+0x14]
	push edx
	call CWvsApp::GetCmdLine
	mov eax,dword ptr [esp+0x10]
	push 0xC9
	push eax
	mov byte ptr [esp+0x478],2
	call CNMCOClientObject::GetInstance
	mov ecx,eax
	call CNMCOClientObject::AttachAuth
	mov edi,eax
	test edi,edi
	jne Block12

 Block4:
	lea ecx,[esp+0x64]
	push ecx
	call CNMCOClientObject::GetInstance
	mov ecx,eax
	call CNMCOClientObject::GetNexonPassport
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x470],1
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	push esi
	lea ecx,[esp+0x20]
	call COutPacket::Encode1
	cmp esi,1
	jne Block10

 Block7:
	lea ecx,[esp+0x40]
	call CSystemInfo::_ctor_default
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x470],6
	call CSystemInfo::Init
	push ecx
	mov edi,esp
	lea eax,[esp+0x68]
	mov dword ptr [esp+0x18],esp
	mov dword ptr [edi],0
	lea edx,[eax+1]
	lea ebx,[ebx]

 Block8:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block8

 Block9:
	sub eax,edx
	mov esi,eax
	push esi
	lea edx,[esp+0x6C]
	push edx
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
	lea ecx,[esp+0x20]
	call COutPacket::EncodeStr
	push 0x10
	lea ecx,[esp+0x44]
	call CSystemInfo::GetMachineId
	push eax
	lea ecx,[esp+0x24]
	call COutPacket::EncodeBuffer
	lea ecx,[esp+0x40]
	call CSystemInfo::GetGameRoomClient
	push eax
	lea ecx,[esp+0x20]
	call COutPacket::Encode4
	mov eax,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov eax,dword ptr [eax+0x38]
	push eax
	lea ecx,[esp+0x20]
	call COutPacket::Encode1
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x470],1
	call CSystemInfo::~CSystemInfo

 Block10:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	mov dword ptr [ebx+0x150],1
	mov edx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov eax,dword ptr [edx+0x2C]
	mov ecx,ebx
	mov dword ptr [ebx+0x158],eax
	call CLogin::DrawNoticeConnecting
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x470],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,1

 Block11:
	mov ecx,dword ptr [esp+0x468]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [esp+0x454]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x464
	ret

 Block12:
	cmp edi,0x7533
	jg Block26

 Block13:
	cmp edi,0x7532
	jge Block26

 Block14:
	lea eax,[edi-0x4E20]
	cmp eax,0x25
	ja Block26

 Block15:
	movzx edx,byte ptr [eax+_SUB_1DFB40_LOOKUP_TABLE_0]
	cmp EDX, 0
je Block16
cmp EDX, 1
je Block17
cmp EDX, 2
je Block18
cmp EDX, 3
je Block19
cmp EDX, 4
je Block20
cmp EDX, 5
je Block21
cmp EDX, 6
je Block22
cmp EDX, 7
je Block23
cmp EDX, 8
je Block24
cmp EDX, 9
je Block26
cmp EDX, 10
je Block25
cmp EDX, 11
je Block26


 Block16:
	mov esi,0xC
	jmp Block27

 Block17:
	mov esi,8
	jmp Block27

 Block18:
	mov esi,0x11
	jmp Block27

 Block19:
	mov esi,0xE
	jmp Block27

 Block20:
	mov esi,2
	jmp Block27

 Block21:
	mov esi,1
	jmp Block27

 Block22:
	mov esi,4
	jmp Block27

 Block23:
	mov esi,0xF
	jmp Block27

 Block24:
	mov esi,0x10
	jmp Block27

 Block25:
	mov esi,7
	jmp Block27

 Block26:
	mov esi,9

 Block27:
	push 0x23
	lea ecx,[esp+0x30]
	call COutPacket::_ctor_1
	mov ebx,3
	push 1
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x474],bl
	call COutPacket::Encode1
	push edi
	lea ecx,[esp+0x30]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x2C]
	push eax
	call CClientSocket::SendPacket
	lea eax,[esi+1]
	cmp eax,0x1A
	ja Block47

 Block28:
	movzx ecx,byte ptr [eax+_SUB_1DFB40_LOOKUP_TABLE_1]
	cmp ECX, 0
je Block29
cmp ECX, 1
je Block30
cmp ECX, 2
je Block33
cmp ECX, 3
je Block32
cmp ECX, 4
je Block34
cmp ECX, 5
je Block35
cmp ECX, 6
je Block36
cmp ECX, 7
je Block31
cmp ECX, 8
je Block37
cmp ECX, 9
je Block40
cmp ECX, 10
je Block43
cmp ECX, 11
je Block44
cmp ECX, 12
je Block45
cmp ECX, 13
je Block47


 Block29:
	push 0
	push 0xF
	jmp Block46

 Block30:
	push 0
	push 0x10
	jmp Block46

 Block31:
	push 0
	push 0x15
	jmp Block46

 Block32:
	push 0
	push 0x14
	jmp Block46

 Block33:
	push 0
	push ebx
	jmp Block46

 Block34:
	mov ecx,dword ptr [esp+0x18]
	push 0
	push 0
	call CLogin::GotoTitle
	push 0
	push 0x11
	jmp Block46

 Block35:
	push 0
	push 0x13
	jmp Block46

 Block36:
	push 0
	push 0xE
	jmp Block46

 Block37:
	push 0x1B
	call CLoginUtilDlg::YesNo2
	add esp,4
	test eax,eax
	je Block47

 Block38:
	lea edx,[esp+0x3C]
	push 0xB6C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push eax
	mov byte ptr [esp+0x478],4
	call open_web_site
	mov eax,dword ptr [esp+0x44]
	add esp,8
	mov byte ptr [esp+0x470],bl
	test eax,eax
	je Block47

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block47

 Block40:
	push 0x1A
	call CLoginUtilDlg::YesNo2
	add esp,4
	test eax,eax
	je Block47

 Block41:
	lea eax,[esp+0x14]
	push 0xB6C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push eax
	mov byte ptr [esp+0x478],5
	call open_web_site
	mov eax,dword ptr [esp+0x1C]
	add esp,8
	mov byte ptr [esp+0x470],bl
	test eax,eax
	je Block47

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block47

 Block43:
	push 0
	push 0x21
	jmp Block46

 Block44:
	push 0
	push 0x1B
	jmp Block46

 Block45:
	push 0
	push 0x28

 Block46:
	call CLoginUtilDlg::Error
	add esp,8

 Block47:
	test esi,esi
	je Block52

 Block48:
	cmp esi,0x17
	je Block52

 Block49:
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x470],2
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x470],1
	test eax,eax
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x470],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	xor eax,eax
	jmp Block11

 Block52:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [ecx+0x1AC],0
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x470],2
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x470],1
	test eax,eax
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block54:
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x470],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	xor eax,eax
	jmp Block11
}
}
// CLogin::ShiftNewCharEquip
_SUB_EXCEPTION_HANDLER(1D9280)
__SUB_CLASS_THIS(001D9280, __thiscall, 53078,  CLogin, void, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D9280
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
	mov dword ptr [esp+0x10],esi
	mov bl,byte ptr [esi+0x264]
	mov ecx,dword ptr [ebp+8]
	test bl,bl
	jne Block2

 Block1:
	mov eax,dword ptr [esi+ecx*4+0x274]
	jmp Block3

 Block2:
	mov eax,dword ptr [esi+ecx*4+0x298]

 Block3:
	test eax,eax
	je Block5

 Block4:
	mov edi,dword ptr [eax-4]
	cmp edi,2
	jge Block6

 Block5:
	mov ecx,esi
	call CLogin::OnAvatarChanged
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 8

 Block6:
	mov eax,dword ptr [ebp+0xC]
	cdq
	xor eax,edx
	sub eax,edx
	cdq
	idiv edi
	cmp edx,1
	jl Block24

 Block7:
	mov dword ptr [esp+0x18],0
	mov dword ptr [esp+0x28],0
	test bl,bl
	jne Block15

 Block8:
	test edx,edx
	jle Block22

 Block9:
	lea esi,[esi+ecx*4+0x274]
	mov ebx,edx

 Block10:
	cmp dword ptr [ebp+0xC],0
	mov eax,dword ptr [esi]
	jle Block12

 Block11:
	mov ecx,dword ptr [eax]
	add eax,4
	mov dword ptr [esp+0x14],ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_assign
	mov edx,dword ptr [esi]
	push edx
	mov ecx,esi
	call ZArray<CLogin::ASITEM>::RemoveAt
	push 0xFFFFFFFF
	jmp Block13

 Block12:
	mov ecx,dword ptr [eax+edi*8-8]
	lea eax,[eax+edi*8-8]
	add eax,4
	mov dword ptr [esp+0x14],ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_assign
	mov edx,dword ptr [esi]
	lea eax,[edx+edi*8-8]
	push eax
	mov ecx,esi
	call ZArray<CLogin::ASITEM>::RemoveAt
	push 0

 Block13:
	mov ecx,esi
	call ZArray<CLogin::ASITEM>::InsertBefore
	mov ecx,dword ptr [esp+0x14]
	lea edx,[esp+0x18]
	mov dword ptr [eax],ecx
	push edx
	lea ecx,[eax+4]
	call ZXString<char>::op_assign
	sub ebx,1
	jne Block10

 Block14:
	jmp Block21

 Block15:
	test edx,edx
	jle Block22

 Block16:
	lea esi,[esi+ecx*4+0x298]
	mov ebx,edx

 Block17:
	cmp dword ptr [ebp+0xC],0
	mov eax,dword ptr [esi]
	jle Block19

 Block18:
	mov ecx,dword ptr [eax]
	add eax,4
	mov dword ptr [esp+0x14],ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_assign
	mov edx,dword ptr [esi]
	push edx
	mov ecx,esi
	call ZArray<CLogin::ASITEM>::RemoveAt
	push 0xFFFFFFFF
	jmp Block20

 Block19:
	mov ecx,dword ptr [eax+edi*8-8]
	lea eax,[eax+edi*8-8]
	add eax,4
	mov dword ptr [esp+0x14],ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_assign
	mov edx,dword ptr [esi]
	lea eax,[edx+edi*8-8]
	push eax
	mov ecx,esi
	call ZArray<CLogin::ASITEM>::RemoveAt
	push 0

 Block20:
	mov ecx,esi
	call ZArray<CLogin::ASITEM>::InsertBefore
	mov ecx,dword ptr [esp+0x14]
	lea edx,[esp+0x18]
	mov dword ptr [eax],ecx
	push edx
	lea ecx,[eax+4]
	call ZXString<char>::op_assign
	sub ebx,1
	jne Block17

 Block21:
	mov esi,dword ptr [esp+0x10]

 Block22:
	mov ecx,esi
	call CLogin::OnAvatarChanged
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 8
}
}
// CLogin::OnGuestIDLoginResult
_SUB_EXCEPTION_HANDLER(1DD1A0)
// 5DD5D0
static uint8_t _SUB_1DD1A0_LOOKUP_TABLE_0[28] = {
0, 13, 13, 1, 1, 2, 3, 0, 4, 0, 0, 5, 6, 13, 7, 8, 
9, 10, 11, 13, 13, 13, 10, 13, 13, 13, 12, 144, 
};
__SUB_CLASS_THIS(001DD1A0, __thiscall, 53076,  CLogin, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1DD1A0
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
	mov edi,ecx
	mov dword ptr [esp+0x28],edi
	mov ecx,dword ptr [edi+0x14C]
	xor ebx,ebx
	mov dword ptr [edi+0x1AC],ebx
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	push 3
	call edx
	mov esi,dword ptr [esp+0x70]
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	movzx ebp,al
	call CInPacket::Decode1
	mov byte ptr [edi+0x1F4],al
	mov ecx,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	cmp ecx,ebx
	je Block2

 Block1:
	push 1
	call CUITitle::EnableLoginCtrl

 Block2:
	lea eax,[ebp+1]
	cmp eax,0x1A
	ja Block22

 Block3:
	movzx eax,byte ptr [eax+_SUB_1DD1A0_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block4
cmp EAX, 1
je Block5
cmp EAX, 2
je Block8
cmp EAX, 3
je Block7
cmp EAX, 4
je Block9
cmp EAX, 5
je Block10
cmp EAX, 6
je Block11
cmp EAX, 7
je Block6
cmp EAX, 8
je Block12
cmp EAX, 9
je Block15
cmp EAX, 10
je Block18
cmp EAX, 11
je Block19
cmp EAX, 12
je Block20
cmp EAX, 13
je Block22


 Block4:
	push ebx
	push 0xF
	jmp Block21

 Block5:
	push ebx
	push 0x10
	jmp Block21

 Block6:
	push ebx
	push 0x15
	jmp Block21

 Block7:
	push ebx
	push 0x14
	jmp Block21

 Block8:
	push ebx
	push 3
	jmp Block21

 Block9:
	push ebx
	push ebx
	mov ecx,edi
	call CLogin::GotoTitle
	push ebx
	push 0x11
	jmp Block21

 Block10:
	push ebx
	push 0x13
	jmp Block21

 Block11:
	push ebx
	push 0xE
	jmp Block21

 Block12:
	push 0x1B
	call CLoginUtilDlg::YesNo2
	add esp,4
	test eax,eax
	je Block22

 Block13:
	lea ecx,[esp+0x70]
	push 0xB6C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push eax
	mov dword ptr [esp+0x70],ebx
	call open_web_site
	mov eax,dword ptr [esp+0x78]
	add esp,8
	mov dword ptr [esp+0x68],0xFFFFFFFF
	cmp eax,ebx
	je Block22

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block22

 Block15:
	push 0x1A
	call CLoginUtilDlg::YesNo2
	add esp,4
	test eax,eax
	je Block22

 Block16:
	lea edx,[esp+0x1C]
	push 0xB6C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push eax
	mov dword ptr [esp+0x70],1
	call open_web_site
	mov eax,dword ptr [esp+0x24]
	add esp,8
	mov dword ptr [esp+0x68],0xFFFFFFFF
	cmp eax,ebx
	je Block22

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block22

 Block18:
	push ebx
	push 0x21
	jmp Block21

 Block19:
	push ebx
	push 0x1B
	jmp Block21

 Block20:
	push ebx
	push 0x28

 Block21:
	call CLoginUtilDlg::Error
	add esp,8

 Block22:
	cmp ebp,ebx
	je Block25

 Block23:
	cmp ebp,0xC
	je Block25

 Block24:
	cmp ebp,0x17
	jne Block40

 Block25:
	movzx eax,byte ptr [edi+0x1F4]
	cmp eax,3
	ja Block39

 Block26:
	cmp EAX, 0
je Block27
cmp EAX, 1
je Block27
cmp EAX, 2
je Block34
cmp EAX, 3
je Block34


 Block27:
	mov ecx,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	cmp ecx,ebx
	je Block29

 Block28:
	push ebx
	call CUITitle::EnableLoginCtrl

 Block29:
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov edi,eax
	call CInPacket::Decode1
	mov ecx,esi
	movzx ebp,al
	call CInPacket::Decode1
	mov ecx,esi
	mov byte ptr [esp+0x24],al
	call CInPacket::Decode1
	mov ecx,esi
	mov byte ptr [esp+0x20],al
	call CInPacket::Decode1
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ecx,esi
	mov dword ptr [esp+0x68],3
	call CInPacket::Decode1
	mov ecx,esi
	mov byte ptr [esp+0x1C],al
	call CInPacket::Decode1
	push 8
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x78],al
	call CInPacket::DecodeBuffer
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x34]
	push eax
	call FileTimeToSystemTime
	push 8
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,esi
	call CInPacket::DecodeBuffer
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x3C]
	push eax
	call FileTimeToSystemTime
	mov ecx,esi
	call CInPacket::Decode4
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	mov ebx,eax
	call CInPacket::DecodeStr
	push ecx
	mov ecx,esp
	lea edx,[esp+0x18]
	mov dword ptr [esp+0x30],esp
	push edx
	mov byte ptr [esp+0x70],4
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x44]
	mov edx,dword ptr [esp+0x48]
	push ebx
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x64]
	push 0
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x6C]
	push 0
	mov dword ptr [eax+0xC],edx
	sub esp,0x10
	mov eax,esp
	mov byte ptr [esp+0x98],5
	mov dword ptr [eax],ecx
	mov edx,dword ptr [esp+0x84]
	mov ecx,dword ptr [esp+0x88]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x8C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0xA0]
	push eax
	push ecx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x54]
	mov dword ptr [esp+0xAC],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x5C]
	mov ecx,dword ptr [esp+0x60]
	push eax
	push ecx
	push ebp
	mov byte ptr [esp+0xB0],4
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edi
	call CWvsContext::SetAccountInfo
	push 0xC0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x70],eax
	mov byte ptr [esp+0x68],6
	test eax,eax
	je Block31

 Block30:
	mov edx,dword ptr [esp+0x28]
	push edx
	mov ecx,eax
	call CLicenseDlg::_ctor_0

 Block31:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x68],3
	test eax,eax
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	jmp Block37

 Block34:
	push ebx
	push 0x1F
	call CLoginUtilDlg::YesNo
	add esp,8
	test eax,eax
	je Block40

 Block35:
	cmp dword ptr [edi+0x1A4],ebx
	jne Block40

 Block36:
	lea eax,[esp+0x2C]
	push 7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push eax
	mov dword ptr [esp+0x70],2
	call open_web_site
	mov eax,dword ptr [esp+0x34]
	add esp,8
	cmp eax,ebx

 Block37:
	mov dword ptr [esp+0x68],0xFFFFFFFF
	je Block40

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block40

 Block39:
	push ebx
	push 0xF
	call CLoginUtilDlg::Error
	add esp,8

 Block40:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx

 Block41:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 4
}
}
// CLogin::OnCheckDuplicatedIDResult
_SUB_EXCEPTION_HANDLER(1D5790)
__SUB_CLASS_THIS(001D5790, __thiscall, 53076,  CLogin, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D5790
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
	mov edi,dword ptr [esp+0x20]
	lea eax,[esp+0x20]
	push eax
	mov ecx,edi
	mov dword ptr [esi+0x1AC],0
	call CInPacket::DecodeStr
	mov ecx,edi
	mov dword ptr [esp+0x18],0
	call CInPacket::Decode1
	movsx eax,al
	mov dword ptr [esp+0xC],0
	mov byte ptr [esp+0x18],1
	cmp eax,1
	jne Block2

 Block1:
	push 0
	push 5
	jmp Block7

 Block2:
	cmp eax,2
	jne Block4

 Block3:
	push 0
	push 0xA
	jmp Block7

 Block4:
	test eax,eax
	jne Block6

 Block5:
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esi+0x270]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi+0x2BC]
	neg eax
	sbb eax,eax
	add eax,2
	mov dword ptr [esi+0x268],eax
	mov dword ptr [esi+0x26C],1
	jmp Block8

 Block6:
	push 0
	push 0x12

 Block7:
	call CLoginUtilDlg::Error
	add esp,8

 Block8:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CLogin::OnCheckUserLimitResult
__SUB_CLASS_THIS(001D2250, __thiscall, 53076,  CLogin, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	mov dword ptr [ecx+0x1AC],0
	push edi
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	movzx edi,al
	call CInPacket::Decode1
	mov ecx,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	movzx eax,al
	push eax
	push edi
	call CUIWorldSelect::UserLimitResult
	pop edi
	pop esi
	ret 4
}
}
// CLogin::OnNewCharJobSel
__SUB_CLASS_THIS0(001D1BF0, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	mov dword ptr [ecx+0x268],2
	mov dword ptr [ecx+0x26C],1
	ret
}
}
// CLogin::OnDeleteCharacterResult
__SUB_CLASS_THIS(001D9E10, __thiscall, 53076,  CLogin, void, CInPacket&) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x18]
	mov esi,ecx
	mov ecx,edi
	mov dword ptr [esi+0x1AC],0
	call CInPacket::Decode4
	mov ecx,edi
	mov ebp,eax
	call CInPacket::Decode1
	movsx edx,al
	cmp edx,0xA
	jne Block3

 Block1:
	push 0
	push 0x13
	call CLoginUtilDlg::Error
	add esp,8

 Block2:
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 4

 Block3:
	cmp edx,0x16
	jne Block5

 Block4:
	add esi,0x220
	push esi
	push 0x22
	call CLoginUtilDlg::Error
	add esp,8
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 4

 Block5:
	cmp edx,0x1D
	jne Block7

 Block6:
	add esi,0x220
	push esi
	push 0x36
	call CLoginUtilDlg::Error
	add esp,8
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 4

 Block7:
	cmp edx,0x12
	jne Block9

 Block8:
	push 0
	push 0xB
	call CLoginUtilDlg::Error
	add esp,8
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 4

 Block9:
	cmp edx,0x14
	jne Block11

 Block10:
	add esi,0x220
	push esi
	push 0x5D
	call CLoginUtilDlg::Error
	add esp,8
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 4

 Block11:
	cmp edx,0x18
	jne Block13

 Block12:
	add esi,0x220
	push esi
	push 0x27
	call CLoginUtilDlg::Error
	add esp,8
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 4

 Block13:
	cmp edx,9
	jne Block15

 Block14:
	add esi,0x220
	push esi
	push 0x12
	call CLoginUtilDlg::Error
	add esp,8
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 4

 Block15:
	cmp edx,0x1A
	jne Block17

 Block16:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0xFD4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 4

 Block17:
	cmp edx,6
	jne Block19

 Block18:
	add esi,0x220
	push esi
	push 0xF
	call CLoginUtilDlg::Error
	add esp,8
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 4

 Block19:
	cmp edx,0x23
	jne Block21

 Block20:
	add esi,0x220
	push esi
	push 0x32
	call CLoginUtilDlg::Error
	add esp,8
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 4

 Block21:
	cmp edx,0x24
	je Block20

 Block22:
	mov ecx,dword ptr [esi+0x1D4]
	or ebx,0xFFFFFFFF
	xor edi,edi
	xor eax,eax

 Block23:
	cmp ebp,dword ptr [ecx]
	je Block26

 Block24:
	inc eax
	add ecx,0x2FE
	cmp eax,0xF
	jl Block23

 Block25:
	jmp Block27

 Block26:
	mov ebx,eax

 Block27:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	dec dword ptr [eax+0x20A0]
	cmp edx,edi
	jne Block48

 Block28:
	cmp ebx,edi
	jl Block48

 Block29:
	cmp ebx,0xE
	jge Block33

 Block30:
	mov edi,ebx
	imul edi,0x2FE

 Block31:
	mov ecx,dword ptr [esi+0x1D4]
	add ecx,edi
	lea edx,[ecx+0x2FE]
	push edx
	call AvatarData::operator=
	add edi,0x2FE
	cmp edi,0x29E4
	jl Block31

 Block32:
	xor edi,edi

 Block33:
	mov eax,dword ptr [esi+0x1D4]
	mov dword ptr [eax+0x29E4],edi
	mov edx,dword ptr [esi+0x1D8]
	mov ecx,ebx
	shl ecx,4
	lea eax,[ecx+edx]
	mov ecx,0xE
	sub ecx,ebx
	shl ecx,4
	push ecx
	lea edx,[eax+0x10]
	push edx
	push eax
	call _memmove
	mov eax,dword ptr [esi+0x1D8]
	xor ecx,ecx
	add eax,0xE0
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax+0xC],ecx
	mov ecx,dword ptr [TSingleton<CUIAvatar>::ms_pInstance]
	add esp,0xC
	cmp ecx,edi
	je Block40

 Block34:
	call CUIAvatar::Refresh
	mov ecx,dword ptr [esi+0x1D4]
	mov eax,ebx
	imul eax,0x2FE
	cmp dword ptr [eax+ecx],edi
	je Block36

 Block35:
	push ebx
	jmp Block39

 Block36:
	cmp ebx,edi
	jle Block38

 Block37:
	dec ebx
	push ebx
	jmp Block39

 Block38:
	push 0xFFFFFFFF

 Block39:
	mov ecx,dword ptr [TSingleton<CUIAvatar>::ms_pInstance]
	call CUIAvatar::SelectCharacter

 Block40:
	cmp dword ptr [esi+0x1D0],0xFFFFFFFF
	jne Block45

 Block41:
	mov eax,dword ptr [esi+0x1F8]
	cmp eax,edi
	je Block43

 Block42:
	mov dword ptr [esi+0x1F8],edi
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block43:
	mov eax,dword ptr [esi+0x1FC]
	cmp eax,edi
	je Block45

 Block44:
	mov dword ptr [esi+0x1FC],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block45:
	mov ecx,dword ptr [TSingleton<CUICharDetail>::ms_pInstance]
	cmp ecx,edi
	je Block2

 Block46:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUICharDetail>::ms_pInstance]
	cmp eax,edi
	je Block2

 Block47:
	pop edi
	pop esi
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	pop ebp
	pop ebx
	add esp,4
	mov dword ptr [esp+4],1
	mov edx,dword ptr [eax]
	jmp edx

 Block48:
	push 0x22000008
	lea ecx,[esp+0x1C]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0x18]
	push offset CTerminateException::THROW_INFO
	lea ecx,[esp+0x14]
	push ecx
	mov dword ptr [esp+0x18],eax
	call _CxxThrowException
	int 3
}
}
// CLogin::RemoveNoticeConnecting
__SUB_CLASS_THIS0(001D1DF0, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x14C]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	push 3
	call edx
	ret
}
}
// CLogin::MakeVACDlg
_SUB_EXCEPTION_HANDLER(1D44A0)
__SUB_CLASS_THIS0(001D44A0, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D44A0
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
	mov eax,dword ptr [esi+0x164]
	push 0xF
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x160],eax
	mov dword ptr [esi+0x154],1
	mov dword ptr [esi+0x150],0
	call COutPacket::_ctor_1
	push 1
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	mov ecx,esi
	call CLogin::RemoveNoticeConnecting
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret
}
}
// CLogin::GetSelectedAL
__SUB_CLASS_THIS(001D7ED0, __thiscall, 53093,  CLogin, void, AvatarLook&) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	push 0
	mov esi,ecx
	call CLogin::GetSelectedAL_0
	mov edi,dword ptr [esp+0x10]
	push 1
	mov ecx,esi
	mov dword ptr [edi+0x11],eax
	call CLogin::GetSelectedAL_0
	push 2
	mov ecx,esi
	mov ebx,eax
	call CLogin::GetSelectedAL_0
	mov ecx,eax
	mov eax,0x66666667
	imul ebx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*4]
	lea eax,[ecx+edx*2]
	push 3
	mov ecx,esi
	mov dword ptr [edi+0x19],eax
	call CLogin::GetSelectedAL_0
	push 4
	mov ecx,esi
	mov dword ptr [edi+0xD],eax
	call CLogin::GetSelectedAL_0
	push 5
	mov ecx,esi
	mov dword ptr [edi+0x2D],eax
	call CLogin::GetSelectedAL_0
	push 6
	mov ecx,esi
	mov dword ptr [edi+0x31],eax
	call CLogin::GetSelectedAL_0
	push 7
	mov ecx,esi
	mov dword ptr [edi+0x35],eax
	call CLogin::GetSelectedAL_0
	mov dword ptr [edi+0x45],eax
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CLogin::OnMouseButton
__SUB_CLASS_THIS(001D21A0, __thiscall, 53036,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x201
	jne Block8

 Block1:
	mov eax,dword ptr [ecx+0x1A0]
	sub eax,1
	je Block5

 Block2:
	sub eax,1
	jne Block8

 Block3:
	mov eax,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test eax,eax
	je Block8

 Block4:
	mov ecx,dword ptr [ecx+0x1C4]
	push ecx
	mov ecx,eax
	call CWndMan::SetFocus
	ret 0x10

 Block5:
	mov eax,dword ptr [TSingleton<CUIRecommendWorld>::ms_pInstance]
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	add eax,4
	push eax
	call CWndMan::SetFocus
	ret 0x10

 Block7:
	add ecx,0xFFFFFFFC
	call CLogin::CloseChannelSelect

 Block8:
	ret 0x10
}
}
// CConnectionNoticeDlg::~CConnectionNoticeDlg
_SUB_EXCEPTION_HANDLER(1D4AD0)
__SUB_CLASS_THIS0(001D4AD0, __thiscall, 138793,  CConnectionNoticeDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D4AD0
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
	int 3// TODO: 	mov dword ptr [esi],offset CConnectionNoticeDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CConnectionNoticeDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CConnectionNoticeDlg::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esp+0x18],3
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [esi+0xA0],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xA0]
	mov byte ptr [esp+0x18],2
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	cmp dword ptr [esi+0x9C],0
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x18],1
	je Block6

 Block5:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block6:
	mov ecx,esi
	mov dword ptr [TSingleton<CConnectionNoticeDlg>::ms_pInstance],0
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
// CConnectionNoticeDlg::OnKey
__SUB_CLASS_THIS(001D4AB0, __thiscall, 138797,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	ret 8
}
}
// CLogin::SendCheckUserLimitPacket
_SUB_EXCEPTION_HANDLER(1D43D0)
__SUB_CLASS_THIS(001D43D0, __thiscall, 53038,  CLogin, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D43D0
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
	mov edi,ecx
	cmp dword ptr [edi+0x1AC],0
	jne Block4

 Block1:
	mov eax,dword ptr [edi+0x1CC]
	test eax,eax
	je Block4

 Block2:
	mov eax,dword ptr [eax-4]
	mov esi,dword ptr [esp+0x2C]
	cmp esi,eax
	jae Block4

 Block3:
	push 6
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	mov eax,dword ptr [edi+0x1CC]
	shl esi,5
	movzx ecx,word ptr [esi+eax]
	push ecx
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode2
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0xC]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x10]
	mov dword ptr [edi+0x1AC],1
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block4:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4
}
}
// CLogin::SendCancelGenderPacket
_SUB_EXCEPTION_HANDLER(1D46E0)
__SUB_CLASS_THIS0(001D46E0, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D46E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	push 8
	lea ecx,[esp+8]
	call COutPacket::_ctor_1
	push 0
	lea ecx,[esp+8]
	mov dword ptr [esp+0x20],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+4]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+8]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret
}
}
// CLogin::OnNewCharJobSelCanceled
__SUB_CLASS_THIS0(001D1C10, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	mov dword ptr [ecx+0x268],0
	mov dword ptr [ecx+0x26C],1
	ret
}
}
// CConnectionNoticeDlg::Draw
_SUB_EXCEPTION_HANDLER(1D6A30)
__SUB_CLASS_THIS(001D6A30, __thiscall, 138795,  CConnectionNoticeDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D6A30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x5C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x6C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [esp+0x7C]
	push eax
	call CWnd::Draw
	cmp dword ptr [edi+0xA0],0
	jne Block122

 Block1:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	mov eax,3
	mov dword ptr [esp+0x74],0
	mov word ptr [esp+0x1C],ax
	mov dword ptr [esp+0x24],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x74],1
	test ecx,ecx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x20]
	push eax
	push 1
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x98]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xA0]
	cmp esi,eax
	je Block10

 Block6:
	mov dword ptr [edi+0xA0],eax
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	test esi,esi
	je Block10

 Block9:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block10:
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block12:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x74],0
	cmp word ptr [esp+0x1C],si
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[esp+0x1C]
	push edx
	call ebx

 Block16:
	mov dword ptr [esp+0x74],0xFFFFFFFF
	cmp word ptr [esp+0x2C],si
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x2C]
	push ecx
	call ebx

 Block20:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C]
	push edx
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	lea ecx,[esp+0x2C]
	push ecx
	mov dword ptr [esp+0x78],2
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	push 0
	push 0xFF
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push 0
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0x58]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x4C],esp
	push 0x1785
	mov bl,5
	push edx
	mov byte ptr [esp+0xB0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xA8],6
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea eax,[esp+0x90]
	mov byte ptr [esp+0xA8],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x9C],7
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block29

 Block27:
	cmp eax,0x80004002
	je Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	lea ecx,[esp+0xA0]
	push ecx
	mov byte ptr [esp+0x9C],8
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xA0]
	add esp,0x28
	cmp esi,eax
	je Block34

 Block30:
	mov dword ptr [edi+0xA0],eax
	test eax,eax
	je Block32

 Block31:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block32:
	test esi,esi
	je Block34

 Block33:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block34:
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	mov esi,8
	mov byte ptr [esp+0x74],3
	cmp word ptr [esp+0x5C],si
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov byte ptr [esp+0x74],2
	cmp word ptr [esp+0x2C],si
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov dword ptr [esp+0x74],0xFFFFFFFF
	cmp word ptr [esp+0x1C],si
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	lea eax,[esp+0x7C]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,9
	mov ecx,0xD
	mov dword ptr [esp+0x74],ebx
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block50

 Block49:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block50:
	mov esi,dword ptr [edi+0xA0]
	mov byte ptr [esp+0x74],0xA
	test esi,esi
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
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
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block54

 Block53:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block54:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x74],bl
	jne Block57

 Block55:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov eax,dword ptr [esp+0x7C]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	test eax,eax
	je Block60

 Block59:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block60:
	lea eax,[esp+0x7C]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,0xB
	mov ecx,0xD
	mov dword ptr [esp+0x74],ebx
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block62

 Block61:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block62:
	mov esi,dword ptr [edi+0xA0]
	mov byte ptr [esp+0x74],0xC
	test esi,esi
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
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
	test eax,eax
	jge Block66

 Block65:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block66:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x74],bl
	jne Block69

 Block67:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov eax,dword ptr [esp+0x7C]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	test eax,eax
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block72:
	mov esi,dword ptr [edi+0xA0]
	test esi,esi
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block76

 Block75:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block76:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C]
	push edx
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block78

 Block77:
	push eax
	call _com_issue_error

 Block78:
	lea ecx,[esp+0x2C]
	push ecx
	mov dword ptr [esp+0x78],0xD
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block80

 Block79:
	push eax
	call _com_issue_error

 Block80:
	mov ecx,dword ptr [edi+0xA0]
	mov byte ptr [esp+0x74],0xE
	test ecx,ecx
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	lea eax,[esp+0x1C]
	push eax
	lea edx,[esp+0x30]
	push edx
	push 0x22
	push 0x57
	call IWzVector2D::RelMove
	mov ebx,8
	mov byte ptr [esp+0x74],0xD
	cmp word ptr [esp+0x2C],bx
	jne Block85

 Block83:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block86:
	mov dword ptr [esp+0x74],0xFFFFFFFF
	cmp word ptr [esp+0x1C],bx
	jne Block89

 Block87:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block90:
	lea ecx,[esp+0x1C]
	push ecx
	call esi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block92

 Block91:
	push eax
	call _com_issue_error

 Block92:
	lea eax,[esp+0x2C]
	push eax
	mov dword ptr [esp+0x78],0xF
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block94

 Block93:
	push eax
	call _com_issue_error

 Block94:
	mov ecx,dword ptr [edi+0xA0]
	mov bl,0x10
	mov byte ptr [esp+0x74],bl
	test ecx,ecx
	jne Block96

 Block95:
	push 0x80004003
	call _com_issue_error

 Block96:
	lea edx,[esp+0x7C]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x74],0x11
	test ecx,ecx
	jne Block98

 Block97:
	push 0x80004003
	call _com_issue_error

 Block98:
	lea eax,[esp+0x1C]
	push eax
	lea edx,[esp+0x30]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x74],bl
	test eax,eax
	je Block100

 Block99:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block100:
	mov esi,8
	mov byte ptr [esp+0x74],0xF
	cmp word ptr [esp+0x2C],si
	jne Block103

 Block101:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	mov dword ptr [esp+0x74],0xFFFFFFFF
	cmp word ptr [esp+0x1C],si
	jne Block107

 Block105:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block108:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x4C]
	push ecx
	call esi
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block110

 Block109:
	push eax
	call _com_issue_error

 Block110:
	lea eax,[esp+0x3C]
	mov ebx,0x12
	push eax
	mov dword ptr [esp+0x78],ebx
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block112

 Block111:
	push eax
	call _com_issue_error

 Block112:
	mov ecx,dword ptr [edi+0xA0]
	mov byte ptr [esp+0x74],0x13
	test ecx,ecx
	jne Block114

 Block113:
	push 0x80004003
	call _com_issue_error

 Block114:
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x40]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x74],bl
	cmp word ptr [esp+0x3C],si
	jne Block117

 Block115:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block118:
	mov dword ptr [esp+0x74],0xFFFFFFFF
	cmp word ptr [esp+0x4C],si
	jne Block121

 Block119:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x68
	ret 4

 Block121:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block122:
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x68
	ret 4
}
}
// CConnectionNoticeDlg::OnCreate
_SUB_EXCEPTION_HANDLER(1D4BC0)
__SUB_CLASS_THIS(001D4BC0, __thiscall, 138794,  CConnectionNoticeDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D4BC0
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
	mov edi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x10]
	push 0x58A
	push eax
	mov dword ptr [esp+0x38],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x34],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x30],bl
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
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x30],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block14

 Block6:
	add eax,8
	cmp eax,ebx
	je Block14

 Block7:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block9

 Block8:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [edi+0x9C]
	mov dword ptr [edi+0x9C],esi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [edi+0x9C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x6A
	push 0x64
	push 0x3E8
	push edi
	call edx
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret 4

 Block14:
	xor esi,esi
	jmp Block9
}
}
// CLogin::GetLocalMacAddress
_SUB_EXCEPTION_HANDLER(1D60F0)
__SUB_CLASS_THIS(001D60F0, __thiscall, 53089,  CLogin, void, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D60F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3A0
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x39C],eax
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3B0]
	mov dword ptr fs:[0],eax
	mov ebp,dword ptr [esp+0x3C0]
	xor edi,edi
	xor esi,esi
	mov dword ptr [esp+0x10],edi
	push 0x40
	lea eax,[esp+0x18]
	push esi
	push eax
	mov dword ptr [esp+0x3C4],esi
	call _memset
	add esp,0xC
	lea eax,[esp+0x14]
	lea ecx,[esp+0x54]
	mov edx,0x100
	push eax
	mov byte ptr [esp+0x18],0x37
	mov dword ptr [esp+0x1C],ecx
	mov word ptr [esp+0x20],dx
	call _Netbios
	cmp byte ptr [esp+0x54],0
	jbe Block10

 Block1:
	lea esp,[esp]

 Block2:
	push 0x40
	lea ecx,[esp+0x18]
	push 0
	push ecx
	call _memset
	movzx edx,byte ptr [esp+esi+0x61]
	add esp,0xC
	lea eax,[esp+0x14]
	push eax
	mov byte ptr [esp+0x18],0x32
	mov byte ptr [esp+0x48],dl
	call _Netbios
	push 0x40
	lea ecx,[esp+0x18]
	push 0
	push ecx
	call _memset
	movzx edx,byte ptr [esp+esi+0x61]
	mov cl,byte ptr [_S___44+2]
	mov ax,word ptr [_S___44]
	mov byte ptr [esp+0x2C],cl
	add esp,0xC
	mov byte ptr [esp+0x44],dl
	mov word ptr [esp+0x1E],ax
	lea ecx,[esp+0x14]
	lea edx,[esp+0x154]
	mov eax,0x258
	push ecx
	mov byte ptr [esp+0x18],0x33
	mov dword ptr [esp+0x1C],edx
	mov word ptr [esp+0x20],ax
	call _Netbios
	test al,al
	jne Block9

 Block3:
	movzx edx,byte ptr [esp+0x159]
	movzx eax,byte ptr [esp+0x158]
	movzx ecx,byte ptr [esp+0x157]
	push edx
	movzx edx,byte ptr [esp+0x15A]
	push eax
	movzx eax,byte ptr [esp+0x15D]
	push ecx
	movzx ecx,byte ptr [esp+0x160]
	push edx
	push eax
	push ecx
	lea edx,[esp+0x28]
	push offset _S_02X02X02X02X02X0
	push edx
	call ZXString<char>::Format
	add esp,0x20
	mov ecx,ebp
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block5

 Block4:
	push 2
	push offset _S___20
	mov ecx,ebp
	call ZXString<char>::_Cat

 Block5:
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	je Block7

 Block6:
	mov eax,dword ptr [edi-4]
	jmp Block8

 Block7:
	xor eax,eax

 Block8:
	push eax
	push edi
	mov ecx,ebp
	call ZXString<char>::_Cat

 Block9:
	movzx eax,byte ptr [esp+0x54]
	inc esi
	cmp esi,eax
	jl Block2

 Block10:
	mov dword ptr [esp+0x3B8],0xFFFFFFFF
	test edi,edi
	je Block12

 Block11:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov ecx,dword ptr [esp+0x3B0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	mov ecx,dword ptr [esp+0x39C]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x3AC
	ret 4
}
}
// CLogin::SendNewCharPacket
_SUB_EXCEPTION_HANDLER(1D7BD0)
__SUB_CLASS_THIS0(001D7BD0, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D7BD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0x1AC],0
	jne Block20

 Block1:
	mov eax,dword ptr [esi+0x1D4]
	cmp dword ptr [eax+0x29E4],0
	je Block3

 Block2:
	push 0
	push 9
	call CLoginUtilDlg::Error
	add esp,8
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x30
	ret

 Block3:
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,esi
	call CLogin::GetCheckedName
	mov eax,dword ptr [eax]
	test eax,eax
	je Block6

 Block4:
	cmp byte ptr [eax],0
	je Block6

 Block5:
	xor edi,edi
	jmp Block7

 Block6:
	mov edi,1

 Block7:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	test edi,edi
	je Block11

 Block10:
	push 0
	push 0xA
	call CLoginUtilDlg::Error
	add esp,8
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x30
	ret

 Block11:
	cmp dword ptr [esi+0x2BC],0
	je Block15

 Block12:
	push 0x17
	lea ecx,[esp+0x24]
	call COutPacket::_ctor_1
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x10],esp
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x40],0
	call CLogin::GetCheckedName
	lea ecx,[esp+0x24]
	call COutPacket::EncodeStr
	mov eax,dword ptr [esi+0x240]
	push eax
	lea ecx,[esp+0x24]
	call COutPacket::Encode4
	mov eax,dword ptr [esi+0x2C0]
	dec eax
	push eax
	lea ecx,[esp+0x24]
	call COutPacket::Encode4
	xor edi,edi
	mov edi,edi

 Block13:
	push edi
	mov ecx,esi
	call CLogin::GetSelectedAL_0
	push eax
	lea ecx,[esp+0x24]
	call COutPacket::Encode4
	inc edi
	cmp edi,9
	jl Block13

 Block14:
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	call CLogin::SendRequest
	lea ecx,[esp+0x24]
	jmp Block19

 Block15:
	push 0x16
	lea ecx,[esp+0x14]
	call COutPacket::_ctor_1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x40],1
	call CLogin::GetCheckedName
	lea ecx,[esp+0x14]
	call COutPacket::EncodeStr
	mov eax,dword ptr [esi+0x240]
	push eax
	lea ecx,[esp+0x14]
	call COutPacket::Encode4
	movzx eax,word ptr [esi+0x244]
	push eax
	lea ecx,[esp+0x14]
	call COutPacket::Encode2
	xor edi,edi
	jmp Block17

 Block17:
	push edi
	mov ecx,esi
	call CLogin::GetSelectedAL_0
	push eax
	lea ecx,[esp+0x14]
	call COutPacket::Encode4
	inc edi
	cmp edi,8
	jl Block17

 Block18:
	movzx edx,byte ptr [esi+0x264]
	push edx
	lea ecx,[esp+0x14]
	call COutPacket::Encode1
	lea eax,[esp+0x10]
	push eax
	mov ecx,esi
	call CLogin::SendRequest
	lea ecx,[esp+0x14]

 Block19:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block20:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x30
	ret
}
}
// CLogin::Close
__SUB_CLASS_THIS0(001D2DF0, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov ebx,ecx
	call CMapLoadable::Close
	mov ecx,dword ptr [TSingleton<CUIRecommendWorld>::ms_pInstance]
	xor edi,edi
	cmp ecx,edi
	je Block3

 Block1:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIRecommendWorld>::ms_pInstance]
	cmp eax,edi
	je Block3

 Block2:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block3:
	mov ecx,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	cmp ecx,edi
	je Block6

 Block4:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	cmp eax,edi
	je Block6

 Block5:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block6:
	mov ecx,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	cmp ecx,edi
	je Block9

 Block7:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	cmp eax,edi
	je Block9

 Block8:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block9:
	mov ecx,dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance]
	cmp ecx,edi
	je Block12

 Block10:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance]
	cmp eax,edi
	je Block12

 Block11:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block12:
	mov ecx,dword ptr [TSingleton<CUICharSelect>::ms_pInstance]
	cmp ecx,edi
	je Block15

 Block13:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUICharSelect>::ms_pInstance]
	cmp eax,edi
	je Block15

 Block14:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block15:
	mov ecx,dword ptr [TSingleton<CUICharDetail>::ms_pInstance]
	cmp ecx,edi
	je Block18

 Block16:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUICharDetail>::ms_pInstance]
	cmp eax,edi
	je Block18

 Block17:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block18:
	mov ecx,dword ptr [TSingleton<CUIAvatar>::ms_pInstance]
	cmp ecx,edi
	je Block21

 Block19:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIAvatar>::ms_pInstance]
	cmp eax,edi
	je Block21

 Block20:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block21:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectCygnus>::ms_pInstance]
	cmp ecx,edi
	je Block24

 Block22:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectCygnus>::ms_pInstance]
	cmp eax,edi
	je Block24

 Block23:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block24:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectNormal>::ms_pInstance]
	cmp ecx,edi
	je Block27

 Block25:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectNormal>::ms_pInstance]
	cmp eax,edi
	je Block27

 Block26:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block27:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectAran>::ms_pInstance]
	cmp ecx,edi
	je Block30

 Block28:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectAran>::ms_pInstance]
	cmp eax,edi
	je Block30

 Block29:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block30:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	cmp ecx,edi
	je Block35

 Block31:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	cmp eax,edi
	je Block35

 Block32:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	cmp ecx,edi
	je Block35

 Block33:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	cmp eax,edi
	je Block35

 Block34:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block35:
	mov ecx,dword ptr [TSingleton<CUICharDetailVAC>::ms_pInstance]
	cmp ecx,edi
	je Block38

 Block36:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUICharDetailVAC>::ms_pInstance]
	cmp eax,edi
	je Block38

 Block37:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block38:
	mov ecx,dword ptr [TSingleton<CUIAvatarVAC>::ms_pInstance]
	cmp ecx,edi
	je Block41

 Block39:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIAvatarVAC>::ms_pInstance]
	cmp eax,edi
	je Block41

 Block40:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block41:
	mov ecx,dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance]
	cmp ecx,edi
	je Block44

 Block42:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance]
	cmp eax,edi
	je Block44

 Block43:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block44:
	mov ecx,dword ptr [ebx+0x224]
	cmp ecx,edi
	je Block46

 Block45:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	push edi
	call edx

 Block46:
	mov ecx,dword ptr [ebx+0x20C]
	cmp ecx,edi
	je Block49

 Block47:
	call CWnd::Destroy
	cmp dword ptr [ebx+0x20C],edi
	lea esi,[ebx+0x208]
	je Block49

 Block48:
	push edi
	mov ecx,esi
	call ZRef<CUILoginStart>::_ReleaseRaw
	mov dword ptr [esi+4],edi

 Block49:
	push edi
	mov ecx,ebx
	call CLogin::CloseLoginDescWnd
	mov eax,dword ptr [ebx+0x198]
	cmp eax,edi
	je Block51

 Block50:
	mov dword ptr [ebx+0x198],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block51:
	mov eax,dword ptr [ebx+0x1FC]
	cmp eax,edi
	je Block53

 Block52:
	mov dword ptr [ebx+0x1FC],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	mov eax,dword ptr [ebx+0x1F8]
	cmp eax,edi
	je Block55

 Block54:
	mov dword ptr [ebx+0x1F8],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block55:
	mov eax,dword ptr [_D_G_RM]
	cmp eax,edi
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x24]
	push edi
	push eax
	mov esi,eax
	call edx
	cmp eax,edi
	jge Block59

 Block58:
	push offset __GUID_57dfe40b_3e20_4dbc_97e8_805a50f381bf
	push esi
	push eax
	call _com_issue_errorex

 Block59:
	pop edi
	pop esi
	pop ebx
	ret
}
}
// CLogin::OnCreateNewCharacterResult
_SUB_EXCEPTION_HANDLER(1DAB90)
__SUB_CLASS_THIS(001DAB90, __thiscall, 53076,  CLogin, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1DAB90
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
	mov esi,ecx
	mov ecx,dword ptr [esp+0x24]
	xor edi,edi
	mov dword ptr [esi+0x1AC],edi
	call CInPacket::Decode1
	movsx edx,al
	cmp edx,0xA
	jne Block2

 Block1:
	push edi
	push 0x13
	jmp Block31

 Block2:
	cmp edx,0x1A
	jne Block4

 Block3:
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0xFD9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block32

 Block4:
	cmp edx,0x1E
	jne Block6

 Block5:
	push edi
	push 0xA
	jmp Block31

 Block6:
	mov ecx,dword ptr [esi+0x1D4]
	or ebx,0xFFFFFFFF
	xor eax,eax
	mov edi,edi

 Block7:
	cmp dword ptr [ecx],edi
	je Block10

 Block8:
	inc eax
	add ecx,0x2FE
	cmp eax,0xF
	jl Block7

 Block9:
	jmp Block11

 Block10:
	mov ebx,eax

 Block11:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [eax+0x20A0]
	inc ecx
	mov dword ptr [eax+0x20A0],ecx
	cmp edx,edi
	jne Block30

 Block12:
	cmp ebx,edi
	jl Block30

 Block13:
	cmp dword ptr [esi+0x2BC],edi
	je Block17

 Block14:
	mov eax,dword ptr [esi+0x1BC]
	cmp eax,edi
	jle Block16

 Block15:
	dec eax
	mov dword ptr [esi+0x1BC],eax

 Block16:
	mov dword ptr [esi+0x2BC],edi

 Block17:
	mov edi,dword ptr [esi+0x1D4]
	mov ecx,dword ptr [esp+0x24]
	mov ebp,ebx
	imul ebp,0x2FE
	push 0
	add edi,ebp
	push ecx
	mov ecx,edi
	call GW_CharacterStat::Decode
	mov edx,dword ptr [esp+0x24]
	push edx
	lea ecx,[edi+0xF9]
	call AvatarLook::Decode
	mov eax,dword ptr [esi+0x1DC]
	mov dword ptr [eax+ebx*4],0
	mov eax,ebx
	shl eax,4
	add eax,dword ptr [esi+0x1D8]
	xor ecx,ecx
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	lea edi,[esi+0x228]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [edi]
	test eax,eax
	je Block21

 Block18:
	cmp byte ptr [eax],cl
	je Block21

 Block19:
	mov eax,dword ptr [esi+0x1D4]
	add eax,ebp
	add eax,4
	push eax
	mov ecx,edi
	call ZXString<char>::CompareNoCase
	test eax,eax
	jne Block21

 Block20:
	mov ecx,edi
	call ZXString<char>::Empty

 Block21:
	cmp dword ptr [TSingleton<CUIAvatar>::ms_pInstance],0
	jne Block25

 Block22:
	push 0x150
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x1C],0
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [esi+0x1D4]
	push ecx
	push esi
	mov ecx,eax
	call CUIAvatar::_ctor_0

 Block24:
	mov dword ptr [esp+0x1C],0xFFFFFFFF

 Block25:
	mov ecx,dword ptr [TSingleton<CUIAvatar>::ms_pInstance]
	call CUIAvatar::Refresh
	mov ecx,dword ptr [TSingleton<CUIAvatar>::ms_pInstance]
	push ebx
	call CUIAvatar::SelectCharacter
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test eax,eax
	je Block27

 Block26:
	mov dword ptr [eax+0x2094],1

 Block27:
	push 0xA4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x1C],1
	test eax,eax
	je Block29

 Block28:
	push esi
	mov ecx,eax
	call CUICharSelect::_ctor_0

 Block29:
	push 2
	mov ecx,esi
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call CLogin::ChangeStep
	jmp Block32

 Block30:
	push edi
	push 0x12

 Block31:
	call CLoginUtilDlg::Error
	add esp,8

 Block32:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 4
}
}
// CLogin::OnAccountInfoResult
_SUB_EXCEPTION_HANDLER(1DD600)
// 5DD9D8
static uint8_t _SUB_1DD600_LOOKUP_TABLE_0[27] = {
0, 13, 13, 1, 1, 2, 3, 0, 4, 0, 0, 5, 6, 13, 7, 8, 
9, 10, 11, 13, 13, 13, 10, 13, 13, 13, 12, 
};
__SUB_CLASS_THIS(001DD600, __thiscall, 53076,  CLogin, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1DD600
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x5C],eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x74]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x84]
	mov ebx,ecx
	mov ecx,esi
	call CInPacket::Decode1
	movzx edi,al
	mov eax,dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance]
	test eax,eax
	je Block4

 Block1:
	test edi,edi
	je Block4

 Block2:
	mov ecx,dword ptr [eax+0x12C]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	push 3
	call edx

 Block4:
	lea eax,[edi+1]
	cmp eax,0x1A
	ja Block24

 Block5:
	movzx eax,byte ptr [eax+_SUB_1DD600_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block6
cmp EAX, 1
je Block7
cmp EAX, 2
je Block10
cmp EAX, 3
je Block9
cmp EAX, 4
je Block11
cmp EAX, 5
je Block12
cmp EAX, 6
je Block13
cmp EAX, 7
je Block8
cmp EAX, 8
je Block14
cmp EAX, 9
je Block17
cmp EAX, 10
je Block20
cmp EAX, 11
je Block21
cmp EAX, 12
je Block22
cmp EAX, 13
je Block24


 Block6:
	push 0
	push 0xF
	jmp Block23

 Block7:
	push 0
	push 0x10
	jmp Block23

 Block8:
	push 0
	push 0x15
	jmp Block23

 Block9:
	push 0
	push 0x14
	jmp Block23

 Block10:
	push 0
	push 3
	jmp Block23

 Block11:
	push 0
	push 0
	mov ecx,ebx
	call CLogin::GotoTitle
	push 0
	push 0x11
	jmp Block23

 Block12:
	push 0
	push 0x13
	jmp Block23

 Block13:
	push 0
	push 0xE
	jmp Block23

 Block14:
	push 0x1B
	call CLoginUtilDlg::YesNo2
	add esp,4
	test eax,eax
	je Block24

 Block15:
	lea ecx,[esp+0x2C]
	push 0xB6C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push eax
	mov dword ptr [esp+0x84],0
	call open_web_site
	mov eax,dword ptr [esp+0x34]
	add esp,8
	mov dword ptr [esp+0x7C],0xFFFFFFFF
	test eax,eax
	je Block24

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block24

 Block17:
	push 0x1A
	call CLoginUtilDlg::YesNo2
	add esp,4
	test eax,eax
	je Block24

 Block18:
	lea edx,[esp+0x30]
	push 0xB6C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push eax
	mov dword ptr [esp+0x84],1
	call open_web_site
	mov eax,dword ptr [esp+0x38]
	add esp,8
	mov dword ptr [esp+0x7C],0xFFFFFFFF
	test eax,eax
	je Block24

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block24

 Block20:
	push 0
	push 0x21
	jmp Block23

 Block21:
	push 0
	push 0x1B
	jmp Block23

 Block22:
	push 0
	push 0x28

 Block23:
	call CLoginUtilDlg::Error
	add esp,8

 Block24:
	test edi,edi
	je Block28

 Block25:
	cmp edi,0xC
	je Block28

 Block26:
	cmp edi,0x17
	je Block28

 Block27:
	mov dword ptr [ebx+0x1C4],1
	jmp Block30

 Block28:
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov ebx,eax
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,esi
	mov dword ptr [esp+0x20],eax
	call CInPacket::Decode1
	mov ecx,esi
	mov byte ptr [esp+0x34],al
	call CInPacket::Decode2
	movzx ebp,ax
	mov edi,ebp
	shr edi,8
	mov ecx,esi
	and edi,1
	call CInPacket::Decode1
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x20],al
	call CInPacket::DecodeStr
	mov ecx,esi
	mov dword ptr [esp+0x7C],2
	call CInPacket::Decode1
	mov ecx,esi
	mov byte ptr [esp+0x18],al
	call CInPacket::Decode1
	push 8
	lea edx,[esp+0x5C]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x30],al
	call CInPacket::DecodeBuffer
	lea eax,[esp+0x48]
	push eax
	lea ecx,[esp+0x5C]
	push ecx
	call FileTimeToSystemTime
	push 8
	lea edx,[esp+0x64]
	push edx
	mov ecx,esi
	call CInPacket::DecodeBuffer
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x64]
	push ecx
	call FileTimeToSystemTime
	mov ecx,esi
	call CInPacket::Decode4
	push 8
	lea edx,[esp+0x6C]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x2C],eax
	call CInPacket::DecodeBuffer
	mov ecx,dword ptr [esp+0x68]
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edx,dword ptr [esp+0x6C]
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x6C],esp
	push 0
	push offset _S_
	add eax,0x20A8
	mov dword ptr [eax],ecx
	push 0
	mov dword ptr [eax+4],edx
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
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x40]
	push eax
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x5C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x60]
	push edi
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0x68]
	push ebp
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x80]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x84]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x58]
	push eax
	push ecx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x50]
	mov dword ptr [esp+0x54],esp
	push edx
	mov byte ptr [esp+0xBC],3
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x58]
	mov ecx,dword ptr [esp+0x70]
	mov edx,dword ptr [esp+0x5C]
	push eax
	push ecx
	push edx
	mov byte ptr [esp+0xC4],2
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebx
	call CWvsContext::SetAccountInfo
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x7C],0xFFFFFFFF
	test eax,eax
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	mov ecx,dword ptr [esp+0x74]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov ecx,dword ptr [esp+0x5C]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x6C
	ret 4
}
}
// CLogin::~CLogin
_SUB_EXCEPTION_HANDLER(1DB6F0)
__SUB_CLASS_THIS0(001DB6F0, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1DB6F0
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
	mov dword ptr [esp+0x14],esi
	int 3// TODO: 	mov dword ptr [esi],offset CLogin::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CLogin::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CLogin::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CLogin::`vftable'{for `ZRefCounted'}
	push offset ZArray<CLogin::ASITEM>::~ZArray<CLogin::ASITEM>
	push 9
	push 4
	lea eax,[esi+0x298]
	push eax
	mov dword ptr [esp+0x30],0x19
	call __eh_vector_dtor_iterator
	push offset ZArray<CLogin::ASITEM>::~ZArray<CLogin::ASITEM>
	push 9
	push 4
	lea ecx,[esi+0x274]
	push ecx
	mov byte ptr [esp+0x30],0x18
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0x270]
	xor ebx,ebx
	mov byte ptr [esp+0x20],0x17
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	push offset ZXString<char>::~ZXString<char>
	push 5
	push 4
	lea edx,[esi+0x248]
	push edx
	mov byte ptr [esp+0x30],0x16
	call __eh_vector_dtor_iterator
	lea ecx,[esi+0x23C]
	mov byte ptr [esp+0x20],0x15
	call ZArray<RECOMMENDWORLDMSG>::RemoveAll
	lea ecx,[esi+0x230]
	mov byte ptr [esp+0x20],0x14
	call ZArray<CLogin::BALLOON>::RemoveAll
	mov eax,dword ptr [esi+0x228]
	mov byte ptr [esp+0x20],0x13
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	lea edi,[esi+0x220]
	mov byte ptr [esp+0x20],0x12
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CDialog>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0x218]
	mov byte ptr [esp+0x20],0x11
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CFadeWnd>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0x210]
	mov byte ptr [esp+0x20],0x10
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CFadeWnd>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0x208]
	mov byte ptr [esp+0x20],0xF
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CUILoginStart>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	mov eax,dword ptr [esi+0x204]
	mov byte ptr [esp+0x20],0xE
	cmp eax,ebx
	je Block17

 Block13:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block16

 Block14:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block16

 Block15:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block16:
	mov dword ptr [esi+0x204],ebx

 Block17:
	mov eax,dword ptr [esi+0x1FC]
	mov byte ptr [esp+0x20],0xD
	cmp eax,ebx
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	mov eax,dword ptr [esi+0x1F8]
	mov byte ptr [esp+0x20],0xC
	cmp eax,ebx
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	lea ecx,[esi+0x1E0]
	mov byte ptr [esp+0x20],0xB
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CLogin::NEWEQUIP>::`vftable'
	call ZList<CLogin::NEWEQUIP>::RemoveAll
	lea ecx,[esi+0x1DC]
	mov byte ptr [esp+0x20],0xA
	call ZArray<int>::RemoveAll
	lea ecx,[esi+0x1D8]
	mov byte ptr [esp+0x20],9
	call ZArray<CLogin::RANK>::RemoveAll
	lea ecx,[esi+0x1D4]
	mov byte ptr [esp+0x20],8
	call ZArray<AvatarData>::RemoveAll
	lea ecx,[esi+0x1CC]
	mov byte ptr [esp+0x20],7
	call ZArray<CLogin::WORLDITEM>::RemoveAll
	mov eax,dword ptr [esi+0x198]
	mov byte ptr [esp+0x20],6
	cmp eax,ebx
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
	lea ecx,[esi+0x17C]
	mov byte ptr [esp+0x20],5
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0x178]
	mov byte ptr [esp+0x20],4
	call ZArray<ZXString<char>>::RemoveAll
	lea ecx,[esi+0x174]
	mov byte ptr [esp+0x20],3
	call ZArray<unsigned long>::RemoveAll
	lea ecx,[esi+0x170]
	mov byte ptr [esp+0x20],2
	call ZArray<CLogin::RANK>::RemoveAll
	lea ecx,[esi+0x16C]
	mov byte ptr [esp+0x20],1
	call ZArray<AvatarData>::RemoveAll
	lea edi,[esi+0x148]
	mov byte ptr [esp+0x20],bl
	cmp dword ptr [edi+4],ebx
	je Block25

 Block24:
	push ebx
	mov ecx,edi
	call ZRef<CConnectionNoticeDlg>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block25:
	mov ecx,esi
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call CMapLoadable::~CMapLoadable
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret
}
}
// CLogin::OnCheckPasswordResult
_SUB_EXCEPTION_HANDLER(1DC600)
// 5DD168
static uint8_t _SUB_1DC600_LOOKUP_TABLE_0[28] = {
0, 13, 13, 1, 1, 2, 3, 0, 4, 0, 0, 5, 6, 13, 7, 8, 
9, 10, 11, 13, 13, 13, 10, 13, 13, 13, 12, 144, 
};
__SUB_CLASS_THIS(001DC600, __thiscall, 53076,  CLogin, void, CInPacket&) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1DC600
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x70],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov eax,dword ptr [eax+0x38]
	mov esi,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x5C],ecx
	cmp eax,1
	jne Block2

 Block1:
	call CNMCOClientObject::GetInstance
	mov ecx,eax
	call CNMCOClientObject::DetachAuth
	jmp Block3

 Block2:
	call CNMCOClientObject::GetInstance
	mov ecx,eax
	call CNMCOClientObject::LogoutAuth

 Block3:
	mov ecx,dword ptr [ebp+0x5C]
	xor edi,edi
	mov dword ptr [ecx+0x1AC],edi
	mov ecx,esi
	call CInPacket::Decode1
	movzx ebx,al
	mov ecx,esi
	mov dword ptr [ebp+0x48],ebx
	call CInPacket::Decode1
	mov edx,dword ptr [ebp+0x5C]
	mov ecx,esi
	mov byte ptr [edx+0x1F4],al
	call CInPacket::Decode4
	mov ecx,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	cmp ecx,edi
	je Block5

 Block4:
	push 1
	call CUITitle::EnableLoginCtrl

 Block5:
	cmp ebx,2
	jne Block47

 Block6:
	mov ecx,esi
	call CInPacket::Decode1
	movzx ebx,al
	push 8
	lea eax,[ebp+0x3C]
	push eax
	mov ecx,esi
	call CInPacket::DecodeBuffer
	cmp ebx,edi
	je Block44

 Block7:
	lea ecx,[ebx-0x15]
	cmp ecx,0x13
	ja Block9

 Block8:
	mov ebx,0xC

 Block9:
	lea edx,[ebp+0x28]
	push edx
	lea eax,[ebp+0x3C]
	push eax
	call FileTimeToSystemTime
	lea ecx,[ebp-0x6C]
	push ecx
	call GetLocalTime
	call Util::FTGetNow
	mov dword ptr [ebp+0x6C],edx
	lea edx,[ebp+0x68]
	push 0x438
	push edx
	mov dword ptr [ebp+0x68],eax
	call Util::FTAddDay
	add esp,8
	mov dword ptr [ebp],eax
	lea eax,[ebp+0x3C]
	push eax
	lea ecx,[ebp]
	push ecx
	mov dword ptr [ebp+4],edx
	call CompareFileTime
	mov dword ptr [ebp+0x50],edi
	mov edx,0x81F
	mov dword ptr [ebp-4],edi
	cmp word ptr [ebp+0x28],dx
	jae Block23

 Block10:
	mov ax,word ptr [ebp+0x30]
	cmp ax,0xC
	jbe Block12

 Block11:
	movzx eax,ax
	cdq
	mov ecx,0xC
	idiv ecx
	mov edi,edx
	jmp Block13

 Block12:
	movzx edi,ax

 Block13:
	lea edx,[ebp+0x58]
	push 0xB43
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	mov ax,0xC
	cmp ax,word ptr [ebp+0x30]
	mov byte ptr [ebp-4],1
	sbb edx,edx
	neg edx
	mov eax,dword ptr [edx*4+_D_S_ASTIME]
	movzx edx,word ptr [ebp+0x32]
	push eax
	movzx eax,word ptr [ebp+0x28]
	push edx
	movzx edx,word ptr [ebp+0x2E]
	push edi
	push eax
	movzx eax,word ptr [ebp+0x2A]
	push edx
	dec eax
	cdq
	mov edi,0xC
	idiv edi
	mov eax,dword ptr [edx*4+_D_S_ASMONTH]
	push eax
	push ecx
	lea ecx,[ebp+0x50]
	push ecx
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x58]
	add esp,0x20
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	xor edi,edi

 Block16:
	cmp ebx,0x63
	jne Block25

 Block17:
	mov dword ptr [ebp+0x5C],edi
	mov esi,dword ptr [ebp+0x50]
	push esi
	push offset _S_YOUHAVEBEENBLOCK__2
	lea ecx,[ebp+0x5C]
	mov byte ptr [ebp-4],3
	push ecx

 Block18:
	call ZXString<char>::Format
	add esp,0xC
	push edi
	push 1
	push edi
	push edi
	push ecx
	mov ecx,esp
	lea edx,[ebp+0x5C]
	mov dword ptr [ebp+0x58],esp
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign

 Block19:
	call CUtilDlg::Notice
	mov eax,dword ptr [ebp+0x5C]
	add esp,0x14
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp esi,edi
	je Block105

 Block22:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4
	jmp Block105

 Block23:
	lea edx,[ebp+0x58]
	push 0xB70
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea eax,[ebp+0x50]
	push eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x58]
	add esp,8
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block16

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block16

 Block25:
	cmp ebx,0xC7
	jne Block27

 Block26:
	mov dword ptr [ebp+0x5C],edi
	mov esi,dword ptr [ebp+0x50]
	push esi
	push offset _S_YOUHAVEBEENBLOCK__1
	lea eax,[ebp+0x5C]
	mov byte ptr [ebp-4],4
	push eax
	jmp Block18

 Block27:
	cmp ebx,0x12B
	jne Block29

 Block28:
	mov dword ptr [ebp+0x5C],edi
	mov esi,dword ptr [ebp+0x50]
	push esi
	lea eax,[ebp+0x5C]
	push offset _S_YOUHAVEBEENBLOCK
	push eax
	mov byte ptr [ebp-4],5
	call ZXString<char>::Format
	add esp,0xC
	push edi
	push 1
	push edi
	push edi
	push ecx
	lea edx,[ebp+0x5C]
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push edx
	call ZXString<char>::_ctor_copy
	jmp Block19

 Block29:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp+0x60]
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::_ctor_1
	push edi
	push edi
	lea eax,[ebp-0x1C]
	push eax
	lea ecx,[ebp+0x60]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0xB42
	push edx
	mov byte ptr [ebp-4],7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],8
	cmp dword ptr [_D_G_RM],edi
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea eax,[ebp-0x3C]
	mov byte ptr [ebp-4],7
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp-0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp+0x60]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1C]
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::~Ztl_variant_t
	mov edi,dword ptr [ebp+0x58]
	test edi,edi
	je Block42

 Block32:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push eax
	push ebx
	call _Int2StrW
	add esp,4
	mov ecx,esp
	mov dword ptr [ebp+0x54],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	lea ecx,[ebp-0x5C]
	push ecx
	mov byte ptr [ebp-4],0xE
	mov ecx,edi
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp-0x5C]
	call Ztl_variant_t::~Ztl_variant_t
	mov dword ptr [ebp+0x5C],0
	mov esi,dword ptr [ebp+0x54]
	mov bl,0x12
	mov byte ptr [ebp-4],bl
	test esi,esi
	je Block34

 Block33:
	push offset _S___3
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x1AC3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x4C]
	mov byte ptr [ebp-4],0x13
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x14
	call get_string
	add esp,8
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x5C]
	call ZXString<char>::AssignWideStr
	lea ecx,[ebp-0x4C]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t

 Block34:
	push 0
	push 1
	push 0
	push 0
	push offset _S___4
	lea ecx,[ebp+0x4C]
	push ecx
	lea ecx,[ebp+0x5C]
	call ZXString<char>::op_add_0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x38],esp
	lea ecx,[ebp+0x50]
	push ecx
	push edx
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call ZXString<char>::op_add_1
	call CUtilDlg::Notice
	mov eax,dword ptr [ebp+0x4C]
	add esp,0x14
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	mov byte ptr [ebp-4],0xD
	test esi,esi
	je Block40

 Block39:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block40:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp+0x50]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block105

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block105

 Block42:
	mov eax,dword ptr [ebp+0x50]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
	mov ebx,dword ptr [ebp+0x48]
	xor edi,edi

 Block45:
	lea eax,[ebx+1]
	cmp eax,0x1A
	ja Block71

 Block46:
	movzx edx,byte ptr [eax+_SUB_1DC600_LOOKUP_TABLE_0]
	cmp EDX, 0
je Block53
cmp EDX, 1
je Block54
cmp EDX, 2
je Block57
cmp EDX, 3
je Block56
cmp EDX, 4
je Block58
cmp EDX, 5
je Block59
cmp EDX, 6
je Block60
cmp EDX, 7
je Block55
cmp EDX, 8
je Block61
cmp EDX, 9
je Block64
cmp EDX, 10
je Block67
cmp EDX, 11
je Block68
cmp EDX, 12
je Block69
cmp EDX, 13
je Block71


 Block47:
	cmp ebx,0x1B
	jne Block45

 Block48:
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0x12F5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block52

 Block49:
	lea ecx,[ebp+0x58]
	push 3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	mov dword ptr [ebp-4],0x16
	call open_web_site
	mov eax,dword ptr [ebp+0x58]
	add esp,8
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edi
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	push 0x2200000B
	lea ecx,[ebp+0x58]
	call CMSException::_ctor_0
	mov edx,dword ptr [ebp+0x58]
	push offset CTerminateException::THROW_INFO
	lea eax,[ebp+0x54]
	push eax
	mov dword ptr [ebp+0x54],edx
	call _CxxThrowException

 Block52:
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x12E7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block105

 Block53:
	push edi
	push 0xF
	jmp Block70

 Block54:
	push edi
	push 0x10
	jmp Block70

 Block55:
	push edi
	push 0x15
	jmp Block70

 Block56:
	push edi
	push 0x14
	jmp Block70

 Block57:
	push edi
	push 3
	jmp Block70

 Block58:
	mov ecx,dword ptr [ebp+0x5C]
	push edi
	push edi
	call CLogin::GotoTitle
	push edi
	push 0x11
	jmp Block70

 Block59:
	push edi
	push 0x13
	jmp Block70

 Block60:
	push edi
	push 0xE
	jmp Block70

 Block61:
	push 0x1B
	call CLoginUtilDlg::YesNo2
	add esp,4
	test eax,eax
	je Block71

 Block62:
	lea eax,[ebp+0x58]
	push 0xB6C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	mov dword ptr [ebp-4],0x17
	call open_web_site
	mov eax,dword ptr [ebp+0x58]
	add esp,8
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edi
	je Block71

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block71

 Block64:
	push 0x1A
	call CLoginUtilDlg::YesNo2
	add esp,4
	test eax,eax
	je Block71

 Block65:
	lea ecx,[ebp+0x54]
	push 0xB6C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	mov dword ptr [ebp-4],0x18
	call open_web_site
	mov eax,dword ptr [ebp+0x54]
	add esp,8
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edi
	je Block71

 Block66:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block71

 Block67:
	push edi
	push 0x21
	jmp Block70

 Block68:
	push edi
	push 0x1B
	jmp Block70

 Block69:
	push edi
	push 0x28

 Block70:
	call CLoginUtilDlg::Error
	add esp,8

 Block71:
	cmp ebx,edi
	je Block74

 Block72:
	cmp ebx,0xC
	je Block74

 Block73:
	cmp ebx,0x17
	jne Block105

 Block74:
	mov edx,dword ptr [ebp+0x5C]
	movzx eax,byte ptr [edx+0x1F4]
	cmp eax,3
	ja Block104

 Block75:
	cmp EAX, 0
je Block76
cmp EAX, 1
je Block76
cmp EAX, 2
je Block100
cmp EAX, 3
je Block100


 Block76:
	mov ecx,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	cmp ecx,edi
	je Block78

 Block77:
	push edi
	call CUITitle::EnableLoginCtrl

 Block78:
	cmp ebx,0x17
	jne Block81

 Block79:
	push 0xC0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x58],eax
	mov dword ptr [ebp-4],0x1A
	cmp eax,edi
	je Block105

 Block80:
	mov ecx,dword ptr [ebp+0x5C]
	push ecx
	mov ecx,eax
	call CLicenseDlg::_ctor_0
	jmp Block105

 Block81:
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [ebp+0x58],eax
	call CInPacket::Decode1
	movzx edx,al
	mov ecx,esi
	mov dword ptr [ebp+0x54],edx
	call CInPacket::Decode1
	mov ecx,esi
	mov byte ptr [ebp+0x4C],al
	call CInPacket::Decode2
	movzx ebx,ax
	mov edi,ebx
	shr edi,8
	mov ecx,esi
	and edi,1
	call CInPacket::Decode1
	mov byte ptr [ebp+0x38],al
	lea eax,[ebp+0x44]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ecx,esi
	mov dword ptr [ebp-4],0x1B
	call CInPacket::Decode1
	mov ecx,esi
	mov byte ptr [ebp+0x40],al
	call CInPacket::Decode1
	push 8
	lea ecx,[ebp-0x24]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp+0x50],al
	call CInPacket::DecodeBuffer
	lea edx,[ebp+8]
	push edx
	lea eax,[ebp-0x24]
	push eax
	call FileTimeToSystemTime
	push 8
	lea ecx,[ebp-0x2C]
	push ecx
	mov ecx,esi
	call CInPacket::DecodeBuffer
	lea edx,[ebp+0x18]
	push edx
	lea eax,[ebp-0x2C]
	push eax
	call FileTimeToSystemTime
	mov ecx,esi
	call CInPacket::Decode4
	cmp dword ptr [ebp+0x54],0xA
	mov dword ptr [ebp+0x48],eax
	jne Block91

 Block82:
	mov ecx,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	test ecx,ecx
	je Block84

 Block83:
	push 1
	call CUITitle::EnableLoginCtrl

 Block84:
	cmp dword ptr [TSingleton<CUIGetUserInfo>::ms_pInstance],0
	jne Block88

 Block85:
	push 0x188
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x54],eax
	mov byte ptr [ebp-4],0x1C
	test eax,eax
	je Block87

 Block86:
	mov ecx,dword ptr [ebp+0x5C]
	push ecx
	mov ecx,eax
	call CUIGetUserInfo::_ctor_0

 Block87:
	mov byte ptr [ebp-4],0x1B

 Block88:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x54],esp
	push 0xFFFFFFFF
	push offset _S_
	call ZXString<char>::CreateFromCharStr
	mov edx,dword ptr [ebp+0x48]
	mov ecx,dword ptr [ebp+0x18]
	push edx
	mov edx,dword ptr [ebp+0x1C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x20]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x24]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+8]
	push edi
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [ebp+0xC]
	push ebx
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x10]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x14]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x40]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x50]
	push eax
	push ecx
	push ecx
	lea edx,[ebp+0x44]
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push edx
	mov byte ptr [ebp-4],0x1D
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [ebp+0x38]
	mov ecx,dword ptr [ebp+0x4C]
	mov edx,dword ptr [ebp+0x58]
	push eax
	push ecx
	push 0xA
	mov byte ptr [ebp-4],0x1B
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edx
	call CWvsContext::SetAccountInfo

 Block89:
	mov eax,dword ptr [ebp+0x44]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block105

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block105

 Block91:
	mov ecx,dword ptr [TSingleton<CUIGetUserInfo>::ms_pInstance]
	test ecx,ecx
	je Block94

 Block92:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIGetUserInfo>::ms_pInstance]
	test eax,eax
	je Block94

 Block93:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block94:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x6C],esp
	push 0xFFFFFFFF
	push offset _S_
	call ZXString<char>::CreateFromCharStr
	mov eax,dword ptr [ebp+0x48]
	mov ecx,dword ptr [ebp+0x18]
	mov edx,dword ptr [ebp+0x1C]
	push eax
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x20]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x24]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+8]
	push edi
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [ebp+0xC]
	push ebx
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x10]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x14]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x40]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x50]
	push eax
	push ecx
	push ecx
	lea edx,[ebp+0x44]
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push edx
	mov byte ptr [ebp-4],0x1E
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [ebp+0x38]
	mov ecx,dword ptr [ebp+0x4C]
	mov edx,dword ptr [ebp+0x54]
	push eax
	mov eax,dword ptr [ebp+0x58]
	push ecx
	push edx
	mov byte ptr [ebp-4],0x1B
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::SetAccountInfo
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	movzx edi,al
	call CInPacket::Decode1
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ecx+0x1B0],al
	test edi,edi
	jne Block97

 Block95:
	mov edx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	cmp dword ptr [edx+0x38],1
	je Block99

 Block96:
	push 9
	lea ecx,[ebp+0x28]
	call COutPacket::_ctor_1
	push 1
	lea ecx,[ebp+0x28]
	mov byte ptr [ebp-4],0x1F
	call COutPacket::Encode1
	push 1
	lea ecx,[ebp+0x28]
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x6C],esp
	push 0xFFFFFFFF
	push offset _S_
	call ZXString<char>::CreateFromCharStr
	lea ecx,[ebp+0x28]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[ebp+0x28]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[ebp+0x2C]
	jmp Block98

 Block97:
	push 0xB
	lea ecx,[ebp-0x1C]
	call COutPacket::_ctor_1
	lea ecx,[ebp-0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	mov byte ptr [ebp-4],0x20
	call CClientSocket::SendPacket
	lea ecx,[ebp-0x18]

 Block98:
	mov byte ptr [ebp-4],0x1B
	call ZArray<unsigned char>::RemoveAll

 Block99:
	push 8
	lea edx,[ebp+0x68]
	push edx
	mov ecx,esi
	call CInPacket::DecodeBuffer
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	movzx ecx,byte ptr [ebp+0x68]
	movzx edx,byte ptr [ebp+0x69]
	mov byte ptr [eax+0x20A8],cl
	movzx ecx,byte ptr [ebp+0x6A]
	mov byte ptr [eax+0x20A9],dl
	movzx edx,byte ptr [ebp+0x6B]
	mov byte ptr [eax+0x20AA],cl
	movzx ecx,byte ptr [ebp+0x6C]
	mov byte ptr [eax+0x20AB],dl
	movzx edx,byte ptr [ebp+0x6D]
	mov byte ptr [eax+0x20AC],cl
	movzx ecx,byte ptr [ebp+0x6E]
	mov byte ptr [eax+0x20AD],dl
	movzx edx,byte ptr [ebp+0x6F]
	mov byte ptr [eax+0x20AE],cl
	mov byte ptr [eax+0x20AF],dl
	jmp Block89

 Block100:
	push edi
	push 0x1F
	call CLoginUtilDlg::YesNo
	add esp,8
	test eax,eax
	je Block105

 Block101:
	mov eax,dword ptr [ebp+0x5C]
	cmp dword ptr [eax+0x1A4],edi
	jne Block105

 Block102:
	lea ecx,[ebp+0x58]
	push 7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	mov dword ptr [ebp-4],0x19
	call open_web_site
	mov eax,dword ptr [ebp+0x58]
	add esp,8
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edi
	je Block105

 Block103:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block105

 Block104:
	push edi
	push 0xF
	call CLoginUtilDlg::Error
	add esp,8

 Block105:
	lea esp,[ebp-0x7C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x70]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x74
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CLogin::OnNewCharCanceled
__SUB_CLASS_THIS0(001DB9B0, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x2BC],0
	je Block2

 Block1:
	jmp  CLogin::OnCancleRaceSelect

 Block2:
	push 3
	call CLogin::ChangeStep
	ret
}
}
// CLogin::Update
_SUB_EXCEPTION_HANDLER(1DEE90)
__SUB_CLASS_THIS0(001DEE90, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1DEE90
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
	xor ebx,ebx
	cmp dword ptr [esi+0x1C4],ebx
	je Block2

 Block1:
	push ebx
	call PostQuitMessage

 Block2:
	mov eax,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov edi,dword ptr [eax+0x2C]
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push edi
	call CAnimationDisplayer::NonFieldUpdate
	mov eax,dword ptr [esi+0x1A0]
	cmp eax,ebx
	je Block5

 Block3:
	mov ecx,edi
	sub ecx,eax
	test ecx,ecx
	jle Block5

 Block4:
	mov edx,dword ptr [esi+0x1A4]
	push edx
	mov ecx,esi
	call CLogin::ChangeStepImmediate
	mov dword ptr [esi+0x19C],0xFFFFFFFF
	mov dword ptr [esi+0x1A0],ebx

 Block5:
	mov eax,dword ptr [esi+0x1A8]
	cmp eax,ebx
	je Block8

 Block6:
	mov ecx,edi
	sub ecx,eax
	test ecx,ecx
	jle Block8

 Block7:
	mov ecx,esi
	call CLogin::OnStepChanged
	mov dword ptr [esi+0x1A8],ebx

 Block8:
	mov eax,dword ptr [esi+0x1A4]
	mov ecx,esi
	cmp eax,1
	jne Block16

 Block9:
	mov edx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	cmp dword ptr [edx+0x38],eax
	jne Block13

 Block10:
	cmp dword ptr [esi+0x168],ebx
	je Block12

 Block11:
	push 2
	jmp Block19

 Block12:
	push 0x22
	jmp Block19

 Block13:
	cmp dword ptr [esi+0x168],ebx
	je Block15

 Block14:
	push 1
	jmp Block19

 Block15:
	push 0x21
	jmp Block19

 Block16:
	cmp eax,ebx
	je Block18

 Block17:
	push 1
	jmp Block19

 Block18:
	push ebx

 Block19:
	call CLogin::EnableLoginStartCtrl
	mov ecx,dword ptr [esi+0x20C]
	cmp ecx,ebx
	je Block21

 Block20:
	push ebx
	call CWnd::InvalidateRect

 Block21:
	cmp dword ptr [esi+0x150],ebx
	je Block34

 Block22:
	mov eax,dword ptr [esi+0x158]
	cmp eax,ebx
	je Block34

 Block23:
	sub edi,eax
	cmp edi,0x2710
	jle Block34

 Block24:
	mov eax,dword ptr [esi+0x164]
	mov dword ptr [esi+0x150],ebx
	mov dword ptr [esi+0x160],eax
	cmp eax,ebx
	jne Block28

 Block25:
	cmp dword ptr [esi+0x14C],ebx
	je Block27

 Block26:
	mov ecx,esi
	call CLogin::RemoveNoticeConnecting

 Block27:
	mov ecx,esi
	call CLogin::ResetVAC
	push ebx
	push ebx
	mov ecx,esi
	call CLogin::GotoTitle
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret

 Block28:
	mov ecx,esi
	call CLogin::MakeVACDlg
	push 5
	mov ecx,esi
	call CLogin::ChangeStep
	cmp dword ptr [TSingleton<CUIAvatarVAC>::ms_pInstance],ebx
	jne Block33

 Block29:
	lea eax,[esi+0x180]
	push eax
	lea ecx,[esp+0x14]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	push 0x405C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x24],ebx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x20],1
	cmp eax,ebx
	je Block31

 Block30:
	mov ecx,dword ptr [esi+0x16C]
	push ecx
	push esi
	mov ecx,eax
	call CUIAvatarVAC::_ctor_0

 Block31:
	mov eax,dword ptr [esp+0x10]
	or ecx,0xFFFFFFFF
	add dword ptr [eax+4],ecx
	mov dword ptr [esp+0x20],ecx
	jne Block34

 Block32:
	mov dword ptr [eax],ebx
	jmp Block34

 Block33:
	push ebx
	push ebx
	mov ecx,esi
	call CLogin::GotoTitle

 Block34:
	mov edi,4
	cmp dword ptr [esi+0x26C],ebx
	je Block142

 Block35:
	mov eax,dword ptr [esi+0x268]
	sub eax,ebx
	je Block105

 Block36:
	sub eax,1
	je Block80

 Block37:
	sub eax,1
	jne Block141

 Block38:
	mov ecx,dword ptr [TSingleton<CUINewCharRaceSelect>::ms_pInstance]
	cmp ecx,ebx
	je Block41

 Block39:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharRaceSelect>::ms_pInstance]
	cmp eax,ebx
	je Block41

 Block40:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block41:
	mov ecx,dword ptr [TSingleton<CUINewCharJobSelect>::ms_pInstance]
	cmp ecx,ebx
	je Block44

 Block42:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharJobSelect>::ms_pInstance]
	cmp eax,ebx
	je Block44

 Block43:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block44:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectCygnus>::ms_pInstance]
	cmp ecx,ebx
	je Block47

 Block45:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectCygnus>::ms_pInstance]
	cmp eax,ebx
	je Block47

 Block46:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block47:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectNormal>::ms_pInstance]
	cmp ecx,ebx
	je Block50

 Block48:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectNormal>::ms_pInstance]
	cmp eax,ebx
	je Block50

 Block49:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block50:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectAran>::ms_pInstance]
	cmp ecx,ebx
	je Block53

 Block51:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectAran>::ms_pInstance]
	cmp eax,ebx
	je Block53

 Block52:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block53:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	cmp ecx,ebx
	je Block58

 Block54:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	cmp eax,ebx
	je Block58

 Block55:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	cmp ecx,ebx
	je Block58

 Block56:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	cmp eax,ebx
	je Block58

 Block57:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block58:
	mov eax,dword ptr [esi+0x240]
	cmp eax,edi
	ja Block141

 Block59:
	cmp EAX, 0
je Block76
cmp EAX, 1
je Block64
cmp EAX, 2
je Block60
cmp EAX, 3
je Block68
cmp EAX, 4
je Block72


 Block60:
	cmp dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance],ebx
	je Block62

 Block61:
	call TSingleton<CUINewCharAvatarSelect>::DestroyInstance

 Block62:
	push 0x14C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x20],8
	cmp eax,ebx
	je Block140

 Block63:
	push esi
	mov ecx,eax
	call CUINewCharAvatarSelectCygnus::_ctor_0
	jmp Block140

 Block64:
	cmp dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance],ebx
	je Block66

 Block65:
	call TSingleton<CUINewCharAvatarSelect>::DestroyInstance

 Block66:
	push 0x14C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x20],9
	cmp eax,ebx
	je Block140

 Block67:
	push esi
	mov ecx,eax
	call CUINewCharAvatarSelectNormal::_ctor_0
	jmp Block140

 Block68:
	cmp dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance],ebx
	je Block70

 Block69:
	call TSingleton<CUINewCharAvatarSelect>::DestroyInstance

 Block70:
	push 0x14C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x20],0xA
	cmp eax,ebx
	je Block140

 Block71:
	push esi
	mov ecx,eax
	call CUINewCharAvatarSelectAran::_ctor_0
	jmp Block140

 Block72:
	cmp dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance],ebx
	je Block74

 Block73:
	call TSingleton<CUINewCharAvatarSelect>::DestroyInstance

 Block74:
	push 0x14C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x20],0xB
	cmp eax,ebx
	je Block140

 Block75:
	push esi
	mov ecx,eax
	call CUINewCharAvatarSelectEvan::_ctor_0
	jmp Block140

 Block76:
	cmp dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance],ebx
	je Block78

 Block77:
	call TSingleton<CUINewCharAvatarSelect>::DestroyInstance

 Block78:
	push 0x14C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x20],0xC
	cmp eax,ebx
	je Block140

 Block79:
	push esi
	mov ecx,eax
	call CUINewCharAvatarSelectRes::_ctor_0
	jmp Block140

 Block80:
	mov ecx,dword ptr [TSingleton<CUINewCharRaceSelect>::ms_pInstance]
	cmp ecx,ebx
	je Block83

 Block81:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharRaceSelect>::ms_pInstance]
	cmp eax,ebx
	je Block83

 Block82:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block83:
	mov ecx,dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance]
	cmp ecx,ebx
	je Block86

 Block84:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance]
	cmp eax,ebx
	je Block86

 Block85:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block86:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectCygnus>::ms_pInstance]
	cmp ecx,ebx
	je Block89

 Block87:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectCygnus>::ms_pInstance]
	cmp eax,ebx
	je Block89

 Block88:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block89:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectNormal>::ms_pInstance]
	cmp ecx,ebx
	je Block92

 Block90:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectNormal>::ms_pInstance]
	cmp eax,ebx
	je Block92

 Block91:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block92:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectAran>::ms_pInstance]
	cmp ecx,ebx
	je Block95

 Block93:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectAran>::ms_pInstance]
	cmp eax,ebx
	je Block95

 Block94:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block95:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	cmp ecx,ebx
	je Block100

 Block96:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	cmp eax,ebx
	je Block100

 Block97:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	cmp ecx,ebx
	je Block100

 Block98:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	cmp eax,ebx
	je Block100

 Block99:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block100:
	mov eax,dword ptr [esi+0x240]
	sub eax,1
	jne Block141

 Block101:
	cmp dword ptr [TSingleton<CUINewCharJobSelect>::ms_pInstance],ebx
	je Block103

 Block102:
	call TSingleton<CUINewCharJobSelect>::DestroyInstance

 Block103:
	push 0xB0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x20],7
	cmp eax,ebx
	je Block140

 Block104:
	push esi
	mov ecx,eax
	call CUINewCharJobSelectNormal::_ctor_0
	jmp Block140

 Block105:
	mov ecx,dword ptr [TSingleton<CUINewCharRaceSelect>::ms_pInstance]
	cmp ecx,ebx
	je Block108

 Block106:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharRaceSelect>::ms_pInstance]
	cmp eax,ebx
	je Block108

 Block107:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block108:
	mov ecx,dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance]
	cmp ecx,ebx
	je Block111

 Block109:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance]
	cmp eax,ebx
	je Block111

 Block110:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block111:
	mov ecx,dword ptr [TSingleton<CUINewCharJobSelect>::ms_pInstance]
	cmp ecx,ebx
	je Block114

 Block112:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharJobSelect>::ms_pInstance]
	cmp eax,ebx
	je Block114

 Block113:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block114:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectCygnus>::ms_pInstance]
	cmp ecx,ebx
	je Block117

 Block115:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectCygnus>::ms_pInstance]
	cmp eax,ebx
	je Block117

 Block116:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block117:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectNormal>::ms_pInstance]
	cmp ecx,ebx
	je Block120

 Block118:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectNormal>::ms_pInstance]
	cmp eax,ebx
	je Block120

 Block119:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block120:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectAran>::ms_pInstance]
	cmp ecx,ebx
	je Block123

 Block121:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectAran>::ms_pInstance]
	cmp eax,ebx
	je Block123

 Block122:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block123:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	cmp ecx,ebx
	je Block128

 Block124:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	cmp eax,ebx
	je Block128

 Block125:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	cmp ecx,ebx
	je Block128

 Block126:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	cmp eax,ebx
	je Block128

 Block127:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block128:
	mov eax,dword ptr [esi+0x240]
	cmp eax,edi
	ja Block141

 Block129:
	cmp EAX, 0
je Block138
cmp EAX, 1
je Block132
cmp EAX, 2
je Block130
cmp EAX, 3
je Block134
cmp EAX, 4
je Block136


 Block130:
	push 0xA0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x20],2
	cmp eax,ebx
	je Block140

 Block131:
	push esi
	mov ecx,eax
	call CUINewCharNameSelectCygnus::_ctor_0
	jmp Block140

 Block132:
	push 0xA0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x20],3
	cmp eax,ebx
	je Block140

 Block133:
	push esi
	mov ecx,eax
	call CUINewCharNameSelectNormal::_ctor_0
	jmp Block140

 Block134:
	push 0xA0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x20],edi
	cmp eax,ebx
	je Block140

 Block135:
	push esi
	mov ecx,eax
	call CUINewCharNameSelectAran::_ctor_0
	jmp Block140

 Block136:
	push 0xA0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x20],5
	cmp eax,ebx
	je Block140

 Block137:
	push esi
	mov ecx,eax
	call CUINewCharNameSelectEvan::_ctor_0
	jmp Block140

 Block138:
	push 0xA0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x20],6
	cmp eax,ebx
	je Block140

 Block139:
	push esi
	mov ecx,eax
	call CUINewCharNameSelectRes::_ctor_0

 Block140:
	mov dword ptr [esp+0x20],0xFFFFFFFF

 Block141:
	mov dword ptr [esi+0x26C],ebx

 Block142:
	mov eax,dword ptr [esi+0x1A4]
	cmp eax,2
	je Block144

 Block143:
	cmp eax,5
	jne Block146

 Block144:
	mov eax,dword ptr [esi+0x1D0]
	cmp eax,ebx
	jge Block150

 Block145:
	cmp eax,0xF
	jl Block150

 Block146:
	mov eax,dword ptr [esi+0x1F8]
	cmp eax,ebx
	je Block148

 Block147:
	mov dword ptr [esi+0x1F8],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block148:
	mov eax,dword ptr [esi+0x1FC]
	cmp eax,ebx
	je Block150

 Block149:
	mov dword ptr [esi+0x1FC],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block150:
	cmp dword ptr [esi+0x204],ebx
	je Block153

 Block151:
	cmp dword ptr [esi+0x1A4],edi
	je Block153

 Block152:
	push ebx
	lea ecx,[esi+0x200]
	call ZRef<CAvatar>::op_assign_zero

 Block153:
	cmp dword ptr [esi+0x1A4],2
	jne Block162

 Block154:
	mov eax,dword ptr [esi+0x1D0]
	cmp eax,ebx
	jl Block162

 Block155:
	cmp dword ptr [esi+0x224],ebx
	jne Block162

 Block156:
	cmp eax,0xF
	jge Block162

 Block157:
	mov ecx,dword ptr [TSingleton<CUICharDetail>::ms_pInstance]
	cmp ecx,ebx
	jne Block163

 Block158:
	mov ecx,dword ptr [esi+0x1D4]
	imul eax,0x2FE
	cmp dword ptr [eax+ecx],ebx
	je Block166

 Block159:
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x20],0xD
	cmp eax,ebx
	je Block161

 Block160:
	mov edx,dword ptr [esi+0x1D0]
	push edx
	push esi
	mov ecx,eax
	call CUICharDetail::_ctor_0

 Block161:
	mov dword ptr [esp+0x20],0xFFFFFFFF

 Block162:
	mov ecx,dword ptr [TSingleton<CUICharDetail>::ms_pInstance]
	cmp ecx,ebx
	je Block166

 Block163:
	cmp dword ptr [esi+0x224],ebx
	jne Block165

 Block164:
	mov eax,dword ptr [ecx+0xF8]
	cmp dword ptr [esi+0x1D0],eax
	je Block166

 Block165:
	push ebx
	call CFadeWnd::Close

 Block166:
	cmp dword ptr [esi+0x1A4],5
	jne Block175

 Block167:
	mov eax,dword ptr [esi+0x1D0]
	cmp eax,ebx
	jl Block175

 Block168:
	cmp dword ptr [esi+0x224],ebx
	jne Block175

 Block169:
	cmp eax,0x3C
	jge Block175

 Block170:
	mov ecx,dword ptr [TSingleton<CUICharDetailVAC>::ms_pInstance]
	cmp ecx,ebx
	jne Block176

 Block171:
	cmp dword ptr [esi+0x164],ebx
	je Block179

 Block172:
	push 0x10C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x20],0xE
	cmp eax,ebx
	je Block174

 Block173:
	mov ecx,dword ptr [esi+0x1D0]
	push ecx
	push esi
	mov ecx,eax
	call CUICharDetailVAC::_ctor_0

 Block174:
	mov dword ptr [esp+0x20],0xFFFFFFFF

 Block175:
	mov ecx,dword ptr [TSingleton<CUICharDetailVAC>::ms_pInstance]
	cmp ecx,ebx
	je Block179

 Block176:
	cmp dword ptr [esi+0x224],ebx
	jne Block178

 Block177:
	mov edx,dword ptr [esi+0x1D0]
	cmp edx,dword ptr [ecx+0xF8]
	je Block179

 Block178:
	push ebx
	call CFadeWnd::Close

 Block179:
	mov eax,dword ptr [esi+0x1A4]
	sub eax,ebx
	je Block194

 Block180:
	sub eax,1
	je Block187

 Block181:
	sub eax,1
	jne Block201

 Block182:
	mov eax,dword ptr [esi+0x258]
	cmp eax,ebx
	je Block201

 Block183:
	cmp byte ptr [eax],bl
	je Block201

 Block184:
	mov eax,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	cmp dword ptr [eax+0x3C],ebx
	je Block201

 Block185:
	cmp dword ptr [esi+0x1A8],ebx
	jne Block201

 Block186:
	mov dword ptr [eax+0x3C],ebx
	mov eax,dword ptr [esi+0x258]
	push eax
	call _atoi
	add esp,4
	mov ecx,esi
	mov dword ptr [esi+0x1D0],eax
	call CLogin::SendSelectCharPacket
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret

 Block187:
	mov eax,dword ptr [esi+0x250]
	cmp eax,ebx
	je Block201

 Block188:
	cmp byte ptr [eax],bl
	je Block201

 Block189:
	mov eax,dword ptr [esi+0x254]
	cmp eax,ebx
	je Block201

 Block190:
	cmp byte ptr [eax],bl
	je Block201

 Block191:
	mov eax,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	cmp dword ptr [eax+0x3C],ebx
	je Block201

 Block192:
	cmp dword ptr [esi+0x1A8],ebx
	jne Block201

 Block193:
	mov eax,dword ptr [esi+0x254]
	mov edi,dword ptr [esi+0x250]
	push eax
	call _atoi
	add esp,4
	push eax
	push edi
	call _atoi
	add esp,4
	push eax
	mov ecx,esi
	call CLogin::SendLoginPacket
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret

 Block194:
	mov eax,dword ptr [esi+0x248]
	cmp eax,ebx
	je Block201

 Block195:
	cmp byte ptr [eax],bl
	je Block201

 Block196:
	mov eax,dword ptr [esi+0x24C]
	cmp eax,ebx
	je Block201

 Block197:
	cmp byte ptr [eax],bl
	je Block201

 Block198:
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	cmp dword ptr [ecx+0x3C],ebx
	je Block201

 Block199:
	cmp dword ptr [TSingleton<CUITitle>::ms_pInstance],ebx
	je Block201

 Block200:
	mov edx,eax
	mov eax,dword ptr [esi+0x248]
	push edx
	push eax
	mov ecx,esi
	call CLogin::SendCheckPasswordPacket

 Block201:
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
// CLogin::ExitGame
__SUB_CLASS_THIS(001D1E20, __thiscall, 53069,  CLogin, void, int32_t, IUIMsgHandler*) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x1A4]
	cmp eax,dword ptr [ecx+0x1C0]
	jg Block8

 Block1:
	cmp dword ptr [ecx+0x1A8],0
	jne Block8

 Block2:
	cmp dword ptr [esp+4],0
	je Block4

 Block3:
	add ecx,0x220
	push ecx
	push 0x35
	call CLoginUtilDlg::YesNo
	add esp,8
	test eax,eax
	je Block5

 Block4:
	push 0
	call PostQuitMessage
	ret 8

 Block5:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block8

 Block6:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test ecx,ecx
	je Block8

 Block7:
	push eax
	call CWndMan::SetFocus

 Block8:
	ret 8
}
}
// CLogin::OnSetAccountResult
_SUB_EXCEPTION_HANDLER(1D5E80)
__SUB_CLASS_THIS(001D5E80, __thiscall, 53076,  CLogin, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D5E80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x2C]
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	mov bl,al
	call CInPacket::Decode1
	test al,al
	je Block5

 Block1:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	movzx eax,bl
	mov dword ptr [ecx+0x2034],eax
	mov ecx,dword ptr [TSingleton<CUIGetUserInfo>::ms_pInstance]
	test ecx,ecx
	je Block4

 Block2:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIGetUserInfo>::ms_pInstance]
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block4:
	push 9
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 1
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode1
	push 1
	lea ecx,[esp+0x10]
	call COutPacket::Encode1
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x30],esp
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
	lea ecx,[esp+0x10]
	call COutPacket::EncodeStr
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x1C
	ret 4

 Block5:
	mov ecx,dword ptr [TSingleton<CUIGetUserInfo>::ms_pInstance]
	test ecx,ecx
	je Block8

 Block6:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIGetUserInfo>::ms_pInstance]
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block8:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x40],esp
	push 0
	push 0xA
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_TRYAGAIN]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [_S_TRYAGAIN+4]
	mov dword ptr [eax+4],edx
	mov cx,word ptr [_S_TRYAGAIN+8]
	mov word ptr [eax+8],cx
	push 0xA
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x1C
	ret 4
}
}
// CLogin::ResetVAC
_SUB_EXCEPTION_HANDLER(1D7DC0)
__SUB_CLASS_THIS0(001D7DC0, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D7DC0
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
	mov esi,ecx
	lea eax,[esi+0x188]
	push eax
	lea ecx,[esp+0x14]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	mov eax,dword ptr [esp+0x10]
	xor edi,edi
	or ebx,0xFFFFFFFF
	mov dword ptr [esi+0x15C],edi
	add dword ptr [eax+4],ebx
	jne Block2

 Block1:
	mov dword ptr [eax],edi

 Block2:
	lea ecx,[esi+0x180]
	push ecx
	lea ecx,[esp+0x14]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	lea ecx,[esi+0x16C]
	mov dword ptr [esp+0x2C],edi
	call ZArray<AvatarData>::RemoveAll
	mov eax,dword ptr [esp+0x10]
	add dword ptr [eax+4],ebx
	mov dword ptr [esp+0x2C],ebx
	jne Block4

 Block3:
	mov dword ptr [eax],edi

 Block4:
	lea ecx,[esi+0x170]
	call ZArray<CLogin::RANK>::RemoveAll
	mov eax,dword ptr [esi+0x20C]
	mov dword ptr [esi+0x160],edi
	mov dword ptr [esi+0x164],edi
	mov dword ptr [esi+0x158],edi
	mov dword ptr [esi+0x150],edi
	mov dword ptr [esi+0x1AC],edi
	cmp eax,edi
	je Block6

 Block5:
	mov dword ptr [eax+0x118],edi

 Block6:
	push 0xF
	lea ecx,[esp+0x18]
	mov dword ptr [esi+0x154],edi
	call COutPacket::_ctor_1
	push edi
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x30],1
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x14]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x2C],ebx
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret
}
}
// CLogin::InitNewCharEquip
_SUB_EXCEPTION_HANDLER(1D9530)
__SUB_CLASS_THIS0(001D9530, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D9530
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
	lea esi,[edi+0x298]
	mov ebp,9

 Block1:
	lea ecx,[esi-0x24]
	call ZArray<CLogin::ASITEM>::RemoveAll
	mov ecx,esi
	call ZArray<CLogin::ASITEM>::RemoveAll
	add esi,4
	sub ebp,1
	jne Block1

 Block2:
	mov ecx,edi
	call CLogin::LoadNewCharInfo
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x2034]
	mov byte ptr [edi+0x264],al
	mov eax,dword ptr [edi+0x1EC]
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block12

 Block3:
	jmp Block5

 Block5:
	lea ecx,[esp+0x14]
	push ecx
	call ZList<CLogin::NEWEQUIP>::GetNext
	mov esi,eax
	mov eax,dword ptr [esi]
	add esp,4
	test eax,eax
	jne Block7

 Block6:
	mov edx,dword ptr [esi+4]
	push ebx
	lea ecx,[edi+edx*4+0x274]
	call ZArray<CLogin::ASITEM>::InsertBefore
	mov ebp,eax
	mov eax,dword ptr [esi+8]
	push eax
	mov dword ptr [ebp],eax
	mov eax,dword ptr [esi+4]
	mov ecx,dword ptr [esi]
	push eax
	push ecx
	lea edx,[esp+0x24]
	push edx
	mov ecx,edi
	call CLogin::GetNewCharItemName
	push eax
	lea ecx,[ebp+4]
	mov dword ptr [esp+0x2C],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	jmp Block9

 Block7:
	cmp eax,1
	jne Block11

 Block8:
	mov eax,dword ptr [esi+4]
	push ebx
	lea ecx,[edi+eax*4+0x298]
	call ZArray<CLogin::ASITEM>::InsertBefore
	mov ebp,eax
	mov eax,dword ptr [esi+8]
	mov dword ptr [ebp],eax
	mov ecx,dword ptr [esi+4]
	mov edx,dword ptr [esi]
	push eax
	push ecx
	push edx
	lea eax,[esp+0x28]
	push eax
	mov ecx,edi
	call CLogin::GetNewCharItemName
	push eax
	lea ecx,[ebp+4]
	mov dword ptr [esp+0x2C],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]

 Block9:
	mov dword ptr [esp+0x28],ebx
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	cmp dword ptr [esp+0x14],0
	jne Block5

 Block12:
	push ebx
	lea ecx,[edi+0x294]
	call ZArray<CLogin::ASITEM>::InsertBefore
	lea esi,[eax+4]
	push 0
	push 4
	mov ecx,esi
	mov dword ptr [eax],0
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_MALE]
	mov dword ptr [eax],ecx
	push 4
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	push ebx
	lea ecx,[edi+0x2B8]
	call ZArray<CLogin::ASITEM>::InsertBefore
	lea esi,[eax+4]
	push 0
	push 6
	mov ecx,esi
	mov dword ptr [eax],0
	call ZXString<char>::GetBuffer
	mov edx,dword ptr [_S_FEMALE]
	mov dword ptr [eax],edx
	mov cx,word ptr [_S_FEMALE+4]
	mov word ptr [eax+4],cx
	push 6
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	xor esi,esi
	lea ebp,[edi+0x298]

 Block13:
	cmp byte ptr [edi+0x264],0
	jne Block15

 Block14:
	mov eax,dword ptr [ebp-0x24]
	jmp Block16

 Block15:
	mov eax,dword ptr [ebp]

 Block16:
	test eax,eax
	je Block19

 Block17:
	mov ebx,dword ptr [eax-4]
	cmp ebx,1
	jle Block19

 Block18:
	call _rand
	cdq
	idiv ebx
	mov ecx,edi
	push edx
	push esi
	call CLogin::ShiftNewCharEquip

 Block19:
	inc esi
	add ebp,4
	cmp esi,9
	jl Block13

 Block20:
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
// CConnectionNoticeDlg::CConnectionNoticeDlg
_SUB_EXCEPTION_HANDLER(1D49B0)
__SUB_CLASS_THIS(001D49B0, __thiscall, 138791,  CConnectionNoticeDlg, void, CLogin*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D49B0
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
	mov dword ptr [TSingleton<CConnectionNoticeDlg>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CConnectionNoticeDlg>::ms_pInstance],edi

 Block3:
	mov eax,dword ptr [esp+0x20]
	int 3// TODO: 	mov dword ptr [esi],offset CConnectionNoticeDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CConnectionNoticeDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CConnectionNoticeDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x94],eax
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA0],edi
	lea ecx,[esp+0x20]
	push 0x589
	push ecx
	mov byte ptr [esp+0x20],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x28],4
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x18],3
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
// CLogin::SendSelectCharPacketByVAC
_SUB_EXCEPTION_HANDLER(1D7550)
__SUB_CLASS_THIS0(001D7550, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D7550
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
	mov esi,ecx
	xor ebx,ebx
	cmp dword ptr [esi+0x1AC],ebx
	jne Block60

 Block1:
	mov eax,dword ptr [esi+0x1D0]
	cmp eax,ebx
	jl Block59

 Block2:
	cmp eax,dword ptr [esi+0x160]
	jge Block59

 Block3:
	mov edx,dword ptr [esi+0x16C]
	mov ecx,eax
	imul ecx,0x2FE
	cmp dword ptr [ecx+edx],ebx
	je Block59

 Block4:
	mov ecx,dword ptr [esi+0x17C]
	mov edx,dword ptr [ecx+eax*4]
	cmp edx,ebx
	jl Block60

 Block5:
	mov eax,dword ptr [esi+0x1CC]
	cmp eax,ebx
	je Block60

 Block6:
	cmp edx,dword ptr [eax-4]
	jae Block60

 Block7:
	xor ebp,ebp
	xor ecx,ecx
	jmp Block9

 Block9:
	mov eax,dword ptr [esi+0x1CC]
	cmp eax,ebx
	je Block60

 Block10:
	cmp ebp,dword ptr [eax-4]
	jae Block60

 Block11:
	cmp dword ptr [ecx+eax],edx
	je Block13

 Block12:
	inc ebp
	add ecx,0x20
	jmp Block9

 Block13:
	cmp ebp,ebx
	jl Block60

 Block14:
	cmp eax,ebx
	je Block60

 Block15:
	cmp ebp,dword ptr [eax-4]
	jae Block60

 Block16:
	shl ebp,5
	add ebp,eax
	mov eax,dword ptr [ebp+0x1C]
	cmp eax,ebx
	jne Block18

 Block17:
	xor eax,eax
	jmp Block19

 Block18:
	mov eax,dword ptr [eax-4]

 Block19:
	lea ecx,[esp+0x17]
	push ecx
	push eax
	lea ecx,[esp+0x24]
	call ZArray<ZXString<char>>::_ctor_alloc
	mov eax,dword ptr [ebp+0x1C]
	mov dword ptr [esp+0x68],ebx
	cmp eax,ebx
	jne Block21

 Block20:
	xor eax,eax
	jmp Block22

 Block21:
	mov eax,dword ptr [eax-4]

 Block22:
	lea edx,[esp+0x17]
	push edx
	push eax
	lea ecx,[esp+0x20]
	call ZArray<int>::_ctor_alloc
	mov byte ptr [esp+0x68],1
	xor edi,edi

 Block23:
	mov eax,dword ptr [ebp+0x1C]
	test eax,eax
	je Block26

 Block24:
	cmp edi,dword ptr [eax-4]
	jae Block26

 Block25:
	mov ecx,dword ptr [esp+0x1C]
	add eax,ebx
	push eax
	lea ecx,[ecx+edi*4]
	call ZXString<char>::op_assign
	mov edx,dword ptr [ebp+0x1C]
	mov eax,dword ptr [ebx+edx+0x10]
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [ecx+edi*4],eax
	inc edi
	add ebx,0x14
	jmp Block23

 Block26:
	mov ecx,dword ptr [ebp]
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x20]
	push eax
	push 0xFFFFFFFF
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::SetWorldInfo
	mov edx,dword ptr [esi+0x1D0]
	mov eax,dword ptr [esi+0x16C]
	imul edx,0x2FE
	mov ebx,dword ptr [edx+eax]
	movzx eax,byte ptr [esi+0x1B0]
	cmp eax,3
	ja Block58

 Block27:
	cmp EAX, 0
je Block28
cmp EAX, 1
je Block38
cmp EAX, 2
je Block53
cmp EAX, 3
je Block53


 Block28:
	lea edi,[esi+0x220]
	push edi
	push 0x5F
	call CLoginUtilDlg::Notice
	mov dword ptr [esp+0x28],0
	lea ecx,[esp+0x28]
	push edi
	push ecx
	mov byte ptr [esp+0x78],2
	call CSoftKeyboardDlg::InitializeSecondaryPassword
	add esp,0x10
	test eax,eax
	jne Block32

 Block29:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x68],1
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x68],0
	call ZArray<int>::RemoveAll
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	call ZArray<ZXString<char>>::RemoveAll
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret

 Block32:
	push 0x1E
	lea ecx,[esp+0x34]
	call COutPacket::_ctor_1
	push 1
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x6C],3
	call COutPacket::Encode1
	push ebx
	lea ecx,[esp+0x34]
	call COutPacket::Encode4
	mov edx,dword ptr [esi+0x1D0]
	mov eax,dword ptr [esi+0x17C]
	mov ecx,dword ptr [eax+edx*4]
	push ecx
	lea ecx,[esp+0x34]
	call COutPacket::Encode4
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[esp+0x30]
	call ZXString<char>::CreateFromCharStr
	lea edx,[esp+0x28]
	mov bl,4
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x6C],bl
	call CLogin::GetLocalMacAddress
	push ecx
	lea eax,[esp+0x2C]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x34]
	call COutPacket::EncodeStr
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[esp+0x2C]
	call ZXString<char>::CreateFromCharStr
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x6C],5
	call CLogin::GetLocalMacAddressWithHDDSerialNo
	push ecx
	lea edx,[esp+0x28]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push edx
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x34]
	call COutPacket::EncodeStr
	push ecx
	lea eax,[esp+0x24]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push eax
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x34]
	call COutPacket::EncodeStr
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x68],bl
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x68],3
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x68],2
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x68],1
	test eax,eax
	je Block58

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block58

 Block38:
	push 0xC74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov byte ptr [esp+0x68],6
	test eax,eax
	je Block45

 Block39:
	push 0x10
	push 6
	mov ecx,eax
	call CSoftKeyboardDlg::_ctor_0
	test eax,eax
	je Block45

 Block40:
	lea edi,[eax+8]
	test edi,edi
	je Block45

 Block41:
	add edi,0xFFFFFFF8
	mov dword ptr [esp+0x34],edi
	test edi,edi
	je Block43

 Block42:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block43:
	lea ebp,[esi+0x220]
	push edi
	mov ecx,ebp
	mov byte ptr [esp+0x6C],7
	call ZRef<CDialog>::op_assign_ptr
	mov ecx,edi
	call CDialog::DoModal
	cmp eax,1
	je Block46

 Block44:
	push 0
	mov ecx,ebp
	call ZRef<CDialog>::op_assign_zero
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x68],1
	call ZRef<CSoftKeyboardDlg>::~ZRef<CSoftKeyboardDlg>
	jmp Block31

 Block45:
	xor edi,edi
	mov dword ptr [esp+0x34],edi
	jmp Block43

 Block46:
	lea eax,[esp+0x20]
	push eax
	mov ecx,edi
	call CSoftKeyboardDlg::GetResult
	push 0x1F
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0x6C],8
	call COutPacket::_ctor_1
	push ecx
	lea edx,[esp+0x24]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push edx
	mov byte ptr [esp+0x70],9
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x44]
	call COutPacket::EncodeStr
	push ebx
	lea ecx,[esp+0x44]
	call COutPacket::Encode4
	mov ecx,dword ptr [esi+0x17C]
	mov eax,dword ptr [esi+0x1D0]
	mov edx,dword ptr [ecx+eax*4]
	push edx
	lea ecx,[esp+0x44]
	call COutPacket::Encode4
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[esp+0x2C]
	call ZXString<char>::CreateFromCharStr
	lea eax,[esp+0x24]
	mov bl,0xA
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x6C],bl
	call CLogin::GetLocalMacAddress
	push ecx
	lea edx,[esp+0x28]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push edx
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x44]
	call COutPacket::EncodeStr
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[esp+0x30]
	call ZXString<char>::CreateFromCharStr
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x6C],0xB
	call CLogin::GetLocalMacAddressWithHDDSerialNo
	push ecx
	lea edx,[esp+0x2C]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push edx
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x44]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x40]
	push eax
	call CClientSocket::SendPacket
	push 0
	mov ecx,ebp
	call ZRef<CDialog>::op_assign_zero
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x68],bl
	test eax,eax
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x68],9
	test eax,eax
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block50:
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0x68],8
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x68],7
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block52:
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x68],1
	call ZRef<CSoftKeyboardDlg>::~ZRef<CSoftKeyboardDlg>
	jmp Block58

 Block53:
	push 0xE
	lea ecx,[esp+0x54]
	call COutPacket::_ctor_1
	push ebx
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x6C],0xC
	call COutPacket::Encode4
	mov ecx,dword ptr [esi+0x1D0]
	mov edx,dword ptr [esi+0x17C]
	mov eax,dword ptr [edx+ecx*4]
	push eax
	lea ecx,[esp+0x54]
	call COutPacket::Encode4
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[esp+0x2C]
	call ZXString<char>::CreateFromCharStr
	lea ecx,[esp+0x24]
	push ecx
	mov bl,0xD
	mov ecx,esi
	mov byte ptr [esp+0x6C],bl
	call CLogin::GetLocalMacAddress
	push ecx
	lea edx,[esp+0x28]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push edx
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x54]
	call COutPacket::EncodeStr
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[esp+0x30]
	call ZXString<char>::CreateFromCharStr
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x6C],0xE
	call CLogin::GetLocalMacAddressWithHDDSerialNo
	push ecx
	lea edx,[esp+0x2C]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push edx
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x54]
	call COutPacket::EncodeStr
	lea eax,[esp+0x50]
	push eax
	mov ecx,esi
	call CLogin::SendRequest
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x68],bl
	test eax,eax
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block55:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x68],0xC
	test eax,eax
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block57:
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x68],1
	call ZArray<unsigned char>::RemoveAll

 Block58:
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x68],0
	call ZArray<int>::RemoveAll
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	call ZArray<ZXString<char>>::RemoveAll

 Block59:
	mov dword ptr [esi+0x1AC],1

 Block60:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret
}
}
// CLoginGradeWnd::CLoginGradeWnd
_SUB_EXCEPTION_HANDLER(1D1D10)
__SUB_CLASS_THIS0(001D1D10, __thiscall, 78933,  CLoginGradeWnd, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D1D10
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
	xor ecx,ecx
	lea eax,[esi+0x80]
	mov dword ptr [esp+0x14],ecx
	cmp eax,ecx
	je Block2

 Block1:
	add eax,0xFFFFFF80
	mov dword ptr [TSingleton<CLoginGradeWnd>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CLoginGradeWnd>::ms_pInstance],ecx

 Block3:
	push ecx
	push ecx
	push ecx
	push 1
	push 0x6F
	push 0x4B
	push 0x41
	push ecx
	push 0x2DF
	mov ecx,esi
	mov byte ptr [esp+0x38],1
	int 3// TODO: 	mov dword ptr [esi],offset CLoginGradeWnd::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CLoginGradeWnd::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CLoginGradeWnd::`vftable'{for `ZRefCounted'}
	call CWnd::CreateWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CLogin::SendCheckDuplicateIDPacket
_SUB_EXCEPTION_HANDLER(1D5690)
__SUB_CLASS_THIS(001D5690, __thiscall, 53067,  CLogin, void, const ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D5690
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
	mov edi,ecx
	cmp dword ptr [edi+0x1AC],0
	jne Block8

 Block1:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[esi+0x2038]
	call TSecType<unsigned char>::GetData
	test al,1
	jne Block4

 Block2:
	mov esi,dword ptr [esi+0x209C]
	test esi,esi
	jne Block4

 Block3:
	xor eax,eax
	jmp Block5

 Block4:
	mov eax,1

 Block5:
	mov esi,dword ptr [esp+0x2C]
	xor ecx,ecx
	test eax,eax
	sete cl
	push ecx
	push esi
	call is_valid_character_name
	add esp,8
	test eax,eax
	jne Block7

 Block6:
	push eax
	push 0xA
	call CLoginUtilDlg::Error
	add esp,8
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4

 Block7:
	push 0x15
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push esi
	mov dword ptr [esp+0x2C],0
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x10]
	call COutPacket::EncodeStr
	lea edx,[esp+0xC]
	push edx
	mov ecx,edi
	call CLogin::SendRequest
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block8:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4
}
}
// CLogin::GetNewCharItemName
_SUB_EXCEPTION_HANDLER(1D6580)
__SUB_CLASS_THIS(001D6580, __thiscall, 53096,  CLogin, ZXString<char>*, ZXString<char>*, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D6580
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov edi,dword ptr [esp+0x5C]
	mov dword ptr [edi],ebp
	mov esi,dword ptr [esp+0x64]
	cmp esi,ebp
	mov eax,1
	mov dword ptr [esp+0x54],ebp
	mov dword ptr [esp+0x14],eax
	jle Block38

 Block1:
	cmp esi,3
	jg Block38

 Block2:
	mov dword ptr [esp+0x64],ebp
	mov dword ptr [esp+0x54],eax
	cmp dword ptr [esp+0x60],ebp
	jne Block8

 Block3:
	lea eax,[esp+0x60]
	push 0x5F7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x54],2
	cmp eax,ebp
	je Block5

 Block4:
	mov eax,dword ptr [eax]
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	mov ecx,dword ptr [esp+0x68]
	push ecx
	push esi
	push eax
	lea edx,[esp+0x70]
	push edx
	call ZXString16::Format
	mov ecx,dword ptr [esp+0x70]
	add esp,0x10
	mov byte ptr [esp+0x54],1
	cmp ecx,ebp
	je Block13

 Block7:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x60],ebp
	jmp Block13

 Block8:
	lea eax,[esp+0x10]
	push 0x5F8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x54],3
	cmp eax,ebp
	je Block10

 Block9:
	mov eax,dword ptr [eax]
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	mov ecx,dword ptr [esp+0x68]
	push ecx
	push esi
	push eax
	lea edx,[esp+0x70]
	push edx
	call ZXString16::Format
	mov ecx,dword ptr [esp+0x20]
	add esp,0x10
	mov byte ptr [esp+0x54],1
	cmp ecx,ebp
	je Block13

 Block12:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x10],ebp

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
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x58],4
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov eax,dword ptr [esp+0x64]
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	push ecx
	mov dword ptr [esp+0x74],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x64],5
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x60],6
	cmp dword ptr [_D_G_RM],ebp
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x64],5
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov esi,8
	mov byte ptr [esp+0x54],7
	cmp word ptr [eax],si
	jne Block21

 Block20:
	mov eax,dword ptr [eax+8]
	jmp Block22

 Block21:
	mov eax,offset _S___3

 Block22:
	push 0xFFFFFFFF
	push eax
	mov ecx,edi
	call ZXString<char>::AssignWideStr
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x54],5
	cmp word ptr [esp+0x3C],si
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x3C]
	push eax
	call edi

 Block26:
	mov byte ptr [esp+0x54],4
	cmp word ptr [esp+0x1C],si
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x1C]
	push edx
	call edi

 Block30:
	mov byte ptr [esp+0x54],1
	cmp word ptr [esp+0x2C],si
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block34:
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x54],0
	cmp eax,ebp
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block36:
	mov edi,dword ptr [esp+0x5C]

 Block37:
	mov eax,edi
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x48
	ret 0x10

 Block38:
	mov edx,dword ptr [esp+0x68]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call CItemInfo::GetItemName
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x58],8
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x54],0
	cmp eax,ebp
	je Block37

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block37
}
}
// CLogin::OnConfirmEULAResult
__SUB_CLASS_THIS(001D4D00, __thiscall, 53076,  CLogin, void, CInPacket&) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CLicenseDlg>::ms_pInstance]
	push esi
	test ecx,ecx
	je Block3

 Block1:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CLicenseDlg>::ms_pInstance]
	test eax,eax
	je Block3

 Block2:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block3:
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode1
	test al,al
	jne Block5

 Block4:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x1C],esp
	push 0
	push 0xA
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_TRYAGAIN]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [_S_TRYAGAIN+4]
	mov dword ptr [eax+4],edx
	mov cx,word ptr [_S_TRYAGAIN+8]
	mov word ptr [eax+8],cx
	push 0xA
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	call CUtilDlg::Notice
	add esp,0x14
	pop esi
	ret 4

 Block5:
	mov ecx,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x34]
	pop esi
	mov dword ptr [esp+4],1
	jmp eax
}
}
// CLogin::ResetRaceAndSubJob
__SUB_CLASS_THIS0(001D1CB0, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	xor eax,eax
	mov dword ptr [ecx+0x240],0
	mov word ptr [ecx+0x244],ax
	ret
}
}
// AvatarData::operator=
__SUB_CLASS_THIS(001D9500, __thiscall, 115882,  AvatarData, AvatarData&, const AvatarData&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	push edi
	mov esi,ecx
	call GW_CharacterStat::operator=
	add edi,0xF9
	push edi
	lea ecx,[esi+0xF9]
	call AvatarLook::operator=
	pop edi
	mov eax,esi
	pop esi
	ret 4
}
}
// CLogin::OnCancleRaceSelect
_SUB_EXCEPTION_HANDLER(1DAAD0)
__SUB_CLASS_THIS0(001DAAD0, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1DAAD0
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
	cmp dword ptr [TSingleton<CUICharSelect>::ms_pInstance],0
	jne Block4

 Block1:
	push 0xA4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block3

 Block2:
	push esi
	mov ecx,eax
	call CUICharSelect::_ctor_0

 Block3:
	mov dword ptr [esp+0x14],0xFFFFFFFF

 Block4:
	cmp dword ptr [TSingleton<CUIAvatar>::ms_pInstance],0
	jne Block8

 Block5:
	push 0x150
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+0x14],1
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [esi+0x1D4]
	push ecx
	push esi
	mov ecx,eax
	call CUIAvatar::_ctor_0

 Block7:
	mov dword ptr [esp+0x14],0xFFFFFFFF

 Block8:
	push 2
	mov ecx,esi
	call CLogin::ChangeStep
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CLogin::GotoWorldSelect
_SUB_EXCEPTION_HANDLER(1DAF20)
__SUB_CLASS_THIS(001DAF20, __thiscall, 53039,  CLogin, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1DAF20
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
	mov eax,dword ptr [esi+0x1A4]
	cmp eax,1
	jle Block8

 Block1:
	mov eax,dword ptr [_D_G_GR]
	test eax,eax
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x20]
	push eax
	mov edi,eax
	call edx
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_e576ea33_d465_4f08_aab1_e78df73ee6d9
	push edi
	push eax
	call _com_issue_errorex

 Block5:
	lea ecx,[esi+0x1CC]
	call ZArray<CLogin::WORLDITEM>::RemoveAll
	cmp dword ptr [esp+0x2C],0
	jne Block7

 Block6:
	push 0xC
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0xC]
	push eax
	mov dword ptr [esp+0x28],0
	call CClientSocket::SendPacket
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block7:
	push 1
	mov ecx,esi
	mov dword ptr [esi+0x1C0],1
	call CLogin::ChangeStep
	mov dword ptr [esi+0x1C0],0

 Block8:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4
}
}
// CLogin::OnStepChanged
_SUB_EXCEPTION_HANDLER(1D30D0)
__SUB_CLASS_THIS0(001D30D0, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D30D0
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
	mov edi,ecx
	mov eax,dword ptr [edi+0x1A4]
	cmp eax,5
	ja Block245

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block47
cmp EAX, 2
je Block87
cmp EAX, 3
je Block132
cmp EAX, 4
je Block188
cmp EAX, 5
je Block218


 Block2:
	mov ecx,dword ptr [TSingleton<CUIRecommendWorld>::ms_pInstance]
	test ecx,ecx
	je Block5

 Block3:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIRecommendWorld>::ms_pInstance]
	test eax,eax
	je Block5

 Block4:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block5:
	mov ecx,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	test ecx,ecx
	je Block8

 Block6:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	test eax,eax
	je Block8

 Block7:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block8:
	mov ecx,dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance]
	test ecx,ecx
	je Block11

 Block9:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance]
	test eax,eax
	je Block11

 Block10:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block11:
	mov ecx,dword ptr [TSingleton<CUICharSelect>::ms_pInstance]
	test ecx,ecx
	je Block14

 Block12:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUICharSelect>::ms_pInstance]
	test eax,eax
	je Block14

 Block13:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block14:
	mov ecx,dword ptr [TSingleton<CUIAvatar>::ms_pInstance]
	test ecx,ecx
	je Block17

 Block15:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIAvatar>::ms_pInstance]
	test eax,eax
	je Block17

 Block16:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block17:
	mov ecx,dword ptr [TSingleton<CUICharDetail>::ms_pInstance]
	test ecx,ecx
	je Block20

 Block18:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUICharDetail>::ms_pInstance]
	test eax,eax
	je Block20

 Block19:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block20:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectCygnus>::ms_pInstance]
	test ecx,ecx
	je Block23

 Block21:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectCygnus>::ms_pInstance]
	test eax,eax
	je Block23

 Block22:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block23:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectNormal>::ms_pInstance]
	test ecx,ecx
	je Block26

 Block24:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectNormal>::ms_pInstance]
	test eax,eax
	je Block26

 Block25:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block26:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectAran>::ms_pInstance]
	test ecx,ecx
	je Block29

 Block27:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectAran>::ms_pInstance]
	test eax,eax
	je Block29

 Block28:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block29:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	test ecx,ecx
	je Block34

 Block30:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	test eax,eax
	je Block34

 Block31:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	test ecx,ecx
	je Block34

 Block32:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	test eax,eax
	je Block34

 Block33:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block34:
	mov ecx,dword ptr [TSingleton<CUIAvatarVAC>::ms_pInstance]
	test ecx,ecx
	je Block37

 Block35:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIAvatarVAC>::ms_pInstance]
	test eax,eax
	je Block37

 Block36:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block37:
	mov ecx,dword ptr [TSingleton<CUICharDetailVAC>::ms_pInstance]
	test ecx,ecx
	je Block40

 Block38:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUICharDetailVAC>::ms_pInstance]
	test eax,eax
	je Block40

 Block39:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block40:
	mov ecx,dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance]
	test ecx,ecx
	je Block43

 Block41:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance]
	test eax,eax
	je Block43

 Block42:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block43:
	mov ecx,dword ptr [TSingleton<CUINewCharRaceSelect>::ms_pInstance]
	test ecx,ecx
	je Block46

 Block44:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharRaceSelect>::ms_pInstance]
	test eax,eax
	je Block46

 Block45:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block46:
	push 0
	mov ecx,edi
	call CLogin::CloseLoginDescWnd
	push 0
	lea ecx,[edi+0x200]
	call ZRef<CAvatar>::op_assign_zero
	mov ecx,edi
	call CLogin::ResetRaceAndSubJob
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret

 Block47:
	mov ecx,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	test ecx,ecx
	je Block50

 Block48:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	test eax,eax
	je Block50

 Block49:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block50:
	mov ecx,dword ptr [TSingleton<CUICharSelect>::ms_pInstance]
	test ecx,ecx
	je Block53

 Block51:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUICharSelect>::ms_pInstance]
	test eax,eax
	je Block53

 Block52:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block53:
	mov ecx,dword ptr [TSingleton<CUIAvatar>::ms_pInstance]
	test ecx,ecx
	je Block56

 Block54:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIAvatar>::ms_pInstance]
	test eax,eax
	je Block56

 Block55:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block56:
	mov ecx,dword ptr [TSingleton<CUICharDetail>::ms_pInstance]
	test ecx,ecx
	je Block59

 Block57:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUICharDetail>::ms_pInstance]
	test eax,eax
	je Block59

 Block58:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block59:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectCygnus>::ms_pInstance]
	test ecx,ecx
	je Block62

 Block60:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectCygnus>::ms_pInstance]
	test eax,eax
	je Block62

 Block61:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block62:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectNormal>::ms_pInstance]
	test ecx,ecx
	je Block65

 Block63:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectNormal>::ms_pInstance]
	test eax,eax
	je Block65

 Block64:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block65:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectAran>::ms_pInstance]
	test ecx,ecx
	je Block68

 Block66:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectAran>::ms_pInstance]
	test eax,eax
	je Block68

 Block67:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block68:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	test ecx,ecx
	je Block73

 Block69:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	test eax,eax
	je Block73

 Block70:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	test ecx,ecx
	je Block73

 Block71:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	test eax,eax
	je Block73

 Block72:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block73:
	mov ecx,dword ptr [TSingleton<CUIAvatarVAC>::ms_pInstance]
	test ecx,ecx
	je Block76

 Block74:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIAvatarVAC>::ms_pInstance]
	test eax,eax
	je Block76

 Block75:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block76:
	mov ecx,dword ptr [TSingleton<CUICharDetailVAC>::ms_pInstance]
	test ecx,ecx
	je Block79

 Block77:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUICharDetailVAC>::ms_pInstance]
	test eax,eax
	je Block79

 Block78:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block79:
	mov ecx,dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance]
	test ecx,ecx
	je Block82

 Block80:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance]
	test eax,eax
	je Block82

 Block81:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block82:
	mov ecx,dword ptr [TSingleton<CUINewCharRaceSelect>::ms_pInstance]
	test ecx,ecx
	je Block85

 Block83:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharRaceSelect>::ms_pInstance]
	test eax,eax
	je Block85

 Block84:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block85:
	push 0
	mov ecx,edi
	call CLogin::CloseLoginDescWnd
	push 0x100
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x18],0
	test eax,eax
	je Block241

 Block86:
	push 1
	push edi
	mov ecx,eax
	call CUILoginDesc::_ctor_0
	jmp Block242

 Block87:
	mov ecx,dword ptr [TSingleton<CUIRecommendWorld>::ms_pInstance]
	test ecx,ecx
	je Block90

 Block88:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIRecommendWorld>::ms_pInstance]
	test eax,eax
	je Block90

 Block89:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block90:
	mov ecx,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	test ecx,ecx
	je Block93

 Block91:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	test eax,eax
	je Block93

 Block92:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block93:
	mov ecx,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	test ecx,ecx
	je Block96

 Block94:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	test eax,eax
	je Block96

 Block95:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block96:
	mov ecx,dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance]
	test ecx,ecx
	je Block99

 Block97:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance]
	test eax,eax
	je Block99

 Block98:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block99:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectCygnus>::ms_pInstance]
	test ecx,ecx
	je Block102

 Block100:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectCygnus>::ms_pInstance]
	test eax,eax
	je Block102

 Block101:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block102:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectNormal>::ms_pInstance]
	test ecx,ecx
	je Block105

 Block103:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectNormal>::ms_pInstance]
	test eax,eax
	je Block105

 Block104:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block105:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectAran>::ms_pInstance]
	test ecx,ecx
	je Block108

 Block106:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectAran>::ms_pInstance]
	test eax,eax
	je Block108

 Block107:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block108:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	test ecx,ecx
	je Block113

 Block109:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	test eax,eax
	je Block113

 Block110:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	test ecx,ecx
	je Block113

 Block111:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	test eax,eax
	je Block113

 Block112:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block113:
	mov ecx,dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance]
	test ecx,ecx
	je Block116

 Block114:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance]
	test eax,eax
	je Block116

 Block115:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block116:
	mov ecx,dword ptr [TSingleton<CUINewCharRaceSelect>::ms_pInstance]
	test ecx,ecx
	je Block119

 Block117:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharRaceSelect>::ms_pInstance]
	test eax,eax
	je Block119

 Block118:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block119:
	mov ecx,dword ptr [TSingleton<CUIAvatarVAC>::ms_pInstance]
	test ecx,ecx
	je Block122

 Block120:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIAvatarVAC>::ms_pInstance]
	test eax,eax
	je Block122

 Block121:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block122:
	mov ecx,dword ptr [TSingleton<CUICharDetailVAC>::ms_pInstance]
	test ecx,ecx
	je Block125

 Block123:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUICharDetailVAC>::ms_pInstance]
	test eax,eax
	je Block125

 Block124:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block125:
	mov eax,dword ptr [edi+0x214]
	push eax
	mov ecx,edi
	call CLogin::CloseLoginDescWnd
	push 0x100
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x18],1
	test eax,eax
	je Block127

 Block126:
	push 2
	push edi
	mov ecx,eax
	call CUILoginDesc::_ctor_0
	jmp Block128

 Block127:
	xor eax,eax

 Block128:
	or esi,0xFFFFFFFF
	push eax
	lea ecx,[edi+0x210]
	mov dword ptr [esp+0x1C],esi
	call ZRef<CFadeWnd>::op_assign_ptr
	cmp dword ptr [edi+0x21C],0
	jne Block244

 Block129:
	push 0x100
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x18],2
	test eax,eax
	je Block131

 Block130:
	push esi
	push edi
	mov ecx,eax
	call CUILoginDesc::_ctor_0
	mov dword ptr [esp+0x18],esi
	lea ecx,[edi+0x218]
	jmp Block243

 Block131:
	xor eax,eax
	mov dword ptr [esp+0x18],esi
	lea ecx,[edi+0x218]
	jmp Block243

 Block132:
	mov ecx,dword ptr [TSingleton<CUIRecommendWorld>::ms_pInstance]
	test ecx,ecx
	je Block135

 Block133:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIRecommendWorld>::ms_pInstance]
	test eax,eax
	je Block135

 Block134:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block135:
	mov ecx,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	test ecx,ecx
	je Block138

 Block136:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	test eax,eax
	je Block138

 Block137:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block138:
	mov ecx,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	test ecx,ecx
	je Block141

 Block139:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	test eax,eax
	je Block141

 Block140:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block141:
	mov ecx,dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance]
	test ecx,ecx
	je Block144

 Block142:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance]
	test eax,eax
	je Block144

 Block143:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block144:
	mov ecx,dword ptr [TSingleton<CUICharSelect>::ms_pInstance]
	test ecx,ecx
	je Block147

 Block145:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUICharSelect>::ms_pInstance]
	test eax,eax
	je Block147

 Block146:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block147:
	mov ecx,dword ptr [TSingleton<CUIAvatar>::ms_pInstance]
	test ecx,ecx
	je Block150

 Block148:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIAvatar>::ms_pInstance]
	test eax,eax
	je Block150

 Block149:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block150:
	mov ecx,dword ptr [TSingleton<CUICharDetail>::ms_pInstance]
	test ecx,ecx
	je Block153

 Block151:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUICharDetail>::ms_pInstance]
	test eax,eax
	je Block153

 Block152:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block153:
	mov ecx,dword ptr [TSingleton<CUIAvatarVAC>::ms_pInstance]
	test ecx,ecx
	je Block156

 Block154:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIAvatarVAC>::ms_pInstance]
	test eax,eax
	je Block156

 Block155:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block156:
	mov ecx,dword ptr [TSingleton<CUICharDetailVAC>::ms_pInstance]
	test ecx,ecx
	je Block159

 Block157:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUICharDetailVAC>::ms_pInstance]
	test eax,eax
	je Block159

 Block158:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block159:
	mov eax,dword ptr [edi+0x214]
	push eax
	mov ecx,edi
	call CLogin::CloseLoginDescWnd
	or esi,0xFFFFFFFF
	cmp dword ptr [edi+0x214],0
	jne Block164

 Block160:
	push 0x100
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x18],3
	test eax,eax
	je Block162

 Block161:
	push 3
	push edi
	mov ecx,eax
	call CUILoginDesc::_ctor_0
	jmp Block163

 Block162:
	xor eax,eax

 Block163:
	push eax
	lea ecx,[edi+0x210]
	mov dword ptr [esp+0x1C],esi
	call ZRef<CFadeWnd>::op_assign_ptr

 Block164:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectCygnus>::ms_pInstance]
	test ecx,ecx
	je Block167

 Block165:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectCygnus>::ms_pInstance]
	test eax,eax
	je Block167

 Block166:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block167:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectNormal>::ms_pInstance]
	test ecx,ecx
	je Block170

 Block168:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectNormal>::ms_pInstance]
	test eax,eax
	je Block170

 Block169:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block170:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectAran>::ms_pInstance]
	test ecx,ecx
	je Block173

 Block171:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectAran>::ms_pInstance]
	test eax,eax
	je Block173

 Block172:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block173:
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	test ecx,ecx
	je Block178

 Block174:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	test eax,eax
	je Block178

 Block175:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx
	mov ecx,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	test ecx,ecx
	je Block178

 Block176:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance]
	test eax,eax
	je Block178

 Block177:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block178:
	cmp dword ptr [edi+0x214],0
	jne Block183

 Block179:
	push 0x100
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x18],4
	test eax,eax
	je Block181

 Block180:
	push 3
	push edi
	mov ecx,eax
	call CUILoginDesc::_ctor_0
	jmp Block182

 Block181:
	xor eax,eax

 Block182:
	push eax
	lea ecx,[edi+0x210]
	mov dword ptr [esp+0x1C],esi
	call ZRef<CFadeWnd>::op_assign_ptr

 Block183:
	cmp dword ptr [edi+0x21C],0
	jne Block245

 Block184:
	push 0x100
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x18],5
	test eax,eax
	je Block186

 Block185:
	push 4
	push edi
	mov ecx,eax
	call CUILoginDesc::_ctor_0
	jmp Block187

 Block186:
	xor eax,eax

 Block187:
	push eax
	lea ecx,[edi+0x218]
	mov dword ptr [esp+0x1C],esi
	call ZRef<CFadeWnd>::op_assign_ptr
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret

 Block188:
	mov ecx,dword ptr [TSingleton<CUIRecommendWorld>::ms_pInstance]
	test ecx,ecx
	je Block191

 Block189:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIRecommendWorld>::ms_pInstance]
	test eax,eax
	je Block191

 Block190:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block191:
	mov ecx,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	test ecx,ecx
	je Block194

 Block192:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	test eax,eax
	je Block194

 Block193:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block194:
	mov ecx,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	test ecx,ecx
	je Block197

 Block195:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	test eax,eax
	je Block197

 Block196:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block197:
	mov ecx,dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance]
	test ecx,ecx
	je Block200

 Block198:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance]
	test eax,eax
	je Block200

 Block199:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block200:
	mov ecx,dword ptr [TSingleton<CUICharSelect>::ms_pInstance]
	test ecx,ecx
	je Block203

 Block201:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUICharSelect>::ms_pInstance]
	test eax,eax
	je Block203

 Block202:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block203:
	mov ecx,dword ptr [TSingleton<CUIAvatar>::ms_pInstance]
	test ecx,ecx
	je Block206

 Block204:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIAvatar>::ms_pInstance]
	test eax,eax
	je Block206

 Block205:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block206:
	mov ecx,dword ptr [TSingleton<CUICharDetail>::ms_pInstance]
	test ecx,ecx
	je Block209

 Block207:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUICharDetail>::ms_pInstance]
	test eax,eax
	je Block209

 Block208:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block209:
	mov ecx,dword ptr [TSingleton<CUINewCharRaceSelect>::ms_pInstance]
	test ecx,ecx
	je Block212

 Block210:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharRaceSelect>::ms_pInstance]
	test eax,eax
	je Block212

 Block211:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block212:
	cmp dword ptr [edi+0x214],0
	jne Block217

 Block213:
	push 0x100
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x18],6
	test eax,eax
	je Block215

 Block214:
	push 3
	push edi
	mov ecx,eax
	call CUILoginDesc::_ctor_0
	jmp Block216

 Block215:
	xor eax,eax

 Block216:
	push eax
	lea ecx,[edi+0x210]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZRef<CFadeWnd>::op_assign_ptr

 Block217:
	mov dword ptr [edi+0x268],0
	mov dword ptr [edi+0x26C],1
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret

 Block218:
	mov ecx,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	test ecx,ecx
	je Block221

 Block219:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	test eax,eax
	je Block221

 Block220:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block221:
	mov ecx,dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance]
	test ecx,ecx
	je Block224

 Block222:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance]
	test eax,eax
	je Block224

 Block223:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block224:
	mov ecx,dword ptr [TSingleton<CUICharSelect>::ms_pInstance]
	test ecx,ecx
	je Block227

 Block225:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUICharSelect>::ms_pInstance]
	test eax,eax
	je Block227

 Block226:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block227:
	mov ecx,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	test ecx,ecx
	je Block230

 Block228:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	test eax,eax
	je Block230

 Block229:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block230:
	mov ecx,dword ptr [TSingleton<CUIAvatar>::ms_pInstance]
	test ecx,ecx
	je Block233

 Block231:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIAvatar>::ms_pInstance]
	test eax,eax
	je Block233

 Block232:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block233:
	mov ecx,dword ptr [TSingleton<CUICharDetail>::ms_pInstance]
	test ecx,ecx
	je Block236

 Block234:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUICharDetail>::ms_pInstance]
	test eax,eax
	je Block236

 Block235:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block236:
	mov ecx,dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance]
	test ecx,ecx
	je Block239

 Block237:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance]
	test eax,eax
	je Block239

 Block238:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block239:
	push 0
	mov ecx,edi
	call CLogin::CloseLoginDescWnd
	push 0x100
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x18],7
	test eax,eax
	je Block241

 Block240:
	push 5
	push edi
	mov ecx,eax
	call CUILoginDesc::_ctor_0
	jmp Block242

 Block241:
	xor eax,eax

 Block242:
	mov dword ptr [esp+0x18],0xFFFFFFFF
	lea ecx,[edi+0x210]

 Block243:
	push eax
	call ZRef<CFadeWnd>::op_assign_ptr

 Block244:
	push 0
	lea ecx,[edi+0x200]
	call ZRef<CAvatar>::op_assign_zero

 Block245:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CLogin::GotoTitle
_SUB_EXCEPTION_HANDLER(1DADC0)
__SUB_CLASS_THIS(001DADC0, __thiscall, 53069,  CLogin, void, int32_t, IUIMsgHandler*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1DADC0
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
	mov eax,dword ptr [esi+0x1A4]
	cmp eax,dword ptr [esi+0x1C0]
	jle Block21

 Block1:
	cmp dword ptr [esi+0x1A8],0
	jne Block21

 Block2:
	cmp dword ptr [esp+0x1C],0
	je Block4

 Block3:
	lea eax,[esi+0x220]
	push eax
	push 7
	call CLoginUtilDlg::YesNo
	add esp,8
	test eax,eax
	je Block18

 Block4:
	mov eax,dword ptr [_D_G_GR]
	test eax,eax
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x20]
	push eax
	mov edi,eax
	call edx
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_e576ea33_d465_4f08_aab1_e78df73ee6d9
	push edi
	push eax
	call _com_issue_errorex

 Block8:
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	call CWvsApp::ConnectLogin
	cmp dword ptr [TSingleton<CUITitle>::ms_pInstance],0
	jne Block13

 Block9:
	cmp dword ptr [esi+0x1C0],0
	jne Block13

 Block10:
	push 0xBA4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block12

 Block11:
	push esi
	mov ecx,eax
	call CUITitle::_ctor_0

 Block12:
	mov dword ptr [esp+0x14],0xFFFFFFFF
	jmp Block17

 Block13:
	cmp dword ptr [esi+0x1C0],1
	je Block16

 Block14:
	mov eax,dword ptr [esi+0x1CC]
	test eax,eax
	je Block17

 Block15:
	cmp dword ptr [eax-4],0
	je Block17

 Block16:
	lea ecx,[esi+0x1CC]
	call ZArray<CLogin::WORLDITEM>::RemoveAll

 Block17:
	mov eax,dword ptr [esi+0x1C0]
	push eax
	mov ecx,esi
	mov byte ptr [esi+0x1B0],0xFF
	call CLogin::ChangeStep
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 8

 Block18:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block21

 Block19:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test ecx,ecx
	je Block21

 Block20:
	push eax
	call CWndMan::SetFocus

 Block21:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 8
}
}
// CLogin::SendSelectCharPacket
_SUB_EXCEPTION_HANDLER(1DA2A0)
__SUB_CLASS_THIS0(001DA2A0, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1DA2A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x54]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebp,ebp
	cmp dword ptr [esi+0x1AC],ebp
	jne Block40

 Block1:
	cmp dword ptr [esi+0x224],ebp
	jne Block40

 Block2:
	mov eax,dword ptr [esi+0x1D0]
	cmp eax,ebp
	jl Block40

 Block3:
	cmp eax,0xF
	jge Block40

 Block4:
	cmp dword ptr [esi+0x1A8],ebp
	jne Block40

 Block5:
	mov ecx,dword ptr [esi+0x1D4]
	imul eax,0x2FE
	mov ebx,dword ptr [eax+ecx]
	cmp ebx,ebp
	jne Block8

 Block6:
	cmp dword ptr [esi+0x1BC],ebp
	jle Block40

 Block7:
	push 1
	mov ecx,esi
	call CLogin::OnNewCharStep
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret

 Block8:
	movzx eax,byte ptr [esi+0x1B0]
	cmp eax,3
	ja Block39

 Block9:
	cmp EAX, 0
je Block10
cmp EAX, 1
je Block19
cmp EAX, 2
je Block34
cmp EAX, 3
je Block34


 Block10:
	lea edi,[esi+0x220]
	push edi
	push 0x5F
	call CLoginUtilDlg::Notice
	mov dword ptr [esp+0x1C],ebp
	lea edx,[esp+0x1C]
	push edi
	push edx
	mov dword ptr [esp+0x6C],ebp
	call CSoftKeyboardDlg::InitializeSecondaryPassword
	add esp,0x10
	test eax,eax
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp eax,ebp
	je Block40

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret

 Block13:
	push 0x1C
	lea ecx,[esp+0x28]
	call COutPacket::_ctor_1
	push 1
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x60],1
	call COutPacket::Encode1
	push ebx
	lea ecx,[esp+0x28]
	call COutPacket::Encode4
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[esp+0x24]
	call ZXString<char>::CreateFromCharStr
	lea eax,[esp+0x1C]
	mov bl,2
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x60],bl
	call CLogin::GetLocalMacAddress
	push ecx
	lea edx,[esp+0x20]
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push edx
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x28]
	call COutPacket::EncodeStr
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[esp+0x20]
	call ZXString<char>::CreateFromCharStr
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x60],3
	call CLogin::GetLocalMacAddressWithHDDSerialNo
	push ecx
	lea edx,[esp+0x1C]
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push edx
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x28]
	call COutPacket::EncodeStr
	push ecx
	lea eax,[esp+0x18]
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push eax
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x28]
	call COutPacket::EncodeStr
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x5C],bl
	cmp eax,ebp
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x5C],1
	cmp eax,ebp
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x5C],0
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp eax,ebp
	je Block39

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block39

 Block19:
	push 0xC74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x5C],4
	cmp eax,ebp
	je Block26

 Block20:
	push 0x10
	push 6
	mov ecx,eax
	call CSoftKeyboardDlg::_ctor_0
	cmp eax,ebp
	je Block26

 Block21:
	lea edi,[eax+8]
	cmp edi,ebp
	je Block26

 Block22:
	add edi,0xFFFFFFF8
	mov dword ptr [esp+0x28],edi
	cmp edi,ebp
	je Block24

 Block23:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block24:
	lea ebp,[esi+0x220]
	push edi
	mov ecx,ebp
	mov dword ptr [esp+0x60],5
	call ZRef<CDialog>::op_assign_ptr
	mov ecx,edi
	call CDialog::DoModal
	cmp eax,1
	je Block27

 Block25:
	push 0
	mov ecx,ebp
	call ZRef<CDialog>::op_assign_zero
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call ZRef<CSoftKeyboardDlg>::~ZRef<CSoftKeyboardDlg>
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret

 Block26:
	xor edi,edi
	mov dword ptr [esp+0x28],edi
	jmp Block24

 Block27:
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call CSoftKeyboardDlg::GetResult
	push 0x1D
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x60],6
	call COutPacket::_ctor_1
	push ecx
	lea edx,[esp+0x18]
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push edx
	mov byte ptr [esp+0x64],7
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x38]
	call COutPacket::EncodeStr
	push ebx
	lea ecx,[esp+0x38]
	call COutPacket::Encode4
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[esp+0x20]
	call ZXString<char>::CreateFromCharStr
	lea eax,[esp+0x18]
	mov bl,8
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x60],bl
	call CLogin::GetLocalMacAddress
	push ecx
	lea edx,[esp+0x1C]
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push edx
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x38]
	call COutPacket::EncodeStr
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[esp+0x24]
	call ZXString<char>::CreateFromCharStr
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x60],9
	call CLogin::GetLocalMacAddressWithHDDSerialNo
	push ecx
	lea edx,[esp+0x20]
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push edx
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x38]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x34]
	push eax
	call CClientSocket::SendPacket
	push 0
	mov ecx,ebp
	call ZRef<CDialog>::op_assign_zero
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x5C],bl
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x5C],7
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x5C],6
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x5C],5
	test eax,eax
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call ZRef<CSoftKeyboardDlg>::~ZRef<CSoftKeyboardDlg>
	jmp Block39

 Block34:
	push 0x13
	lea ecx,[esp+0x48]
	call COutPacket::_ctor_1
	push ebx
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x60],0xA
	call COutPacket::Encode4
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[esp+0x20]
	call ZXString<char>::CreateFromCharStr
	lea ecx,[esp+0x18]
	push ecx
	mov bl,0xB
	mov ecx,esi
	mov byte ptr [esp+0x60],bl
	call CLogin::GetLocalMacAddress
	push ecx
	lea edx,[esp+0x1C]
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push edx
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x48]
	call COutPacket::EncodeStr
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[esp+0x24]
	call ZXString<char>::CreateFromCharStr
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x60],0xC
	call CLogin::GetLocalMacAddressWithHDDSerialNo
	push ecx
	lea edx,[esp+0x20]
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push edx
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x48]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x44]
	push eax
	call CClientSocket::SendPacket
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push ebp
	call CWndMan::SetFocus
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x5C],bl
	cmp eax,ebp
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x5C],0xA
	cmp eax,ebp
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block39:
	mov dword ptr [esi+0x1AC],1

 Block40:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret
}
}
// CLogin::CloseLoginDescWnd
__SUB_CLASS_THIS(001D2C70, __thiscall, 53072,  CLogin, void, CFadeWnd*) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	mov esi,ecx
	test ebx,ebx
	je Block2

 Block1:
	cmp ebx,dword ptr [esi+0x214]
	jne Block6

 Block2:
	mov ecx,dword ptr [esi+0x214]
	test ecx,ecx
	je Block6

 Block3:
	push edi
	call CWnd::Destroy
	cmp dword ptr [esi+0x214],0
	lea edi,[esi+0x210]
	je Block5

 Block4:
	push 0
	mov ecx,edi
	call ZRef<CFadeWnd>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block5:
	pop edi

 Block6:
	test ebx,ebx
	je Block8

 Block7:
	cmp ebx,dword ptr [esi+0x21C]
	jne Block11

 Block8:
	mov ecx,dword ptr [esi+0x21C]
	test ecx,ecx
	je Block11

 Block9:
	call CWnd::Destroy
	add esi,0x218
	cmp dword ptr [esi+4],0
	je Block11

 Block10:
	push 0
	mov ecx,esi
	call ZRef<CFadeWnd>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block11:
	pop esi
	pop ebx
	ret 4
}
}
// CLogin::OnLatestConnectedWorld
__SUB_CLASS_THIS(001D2200, __thiscall, 53076,  CLogin, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x1A4],1
	jne Block7

 Block1:
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode4
	cmp eax,0xFD
	je Block3

 Block2:
	mov dword ptr [esi+0x234],eax

 Block3:
	mov eax,dword ptr [esi+0x234]
	cmp eax,0xFE
	jl Block5

 Block4:
	cmp eax,0xFF
	jle Block7

 Block5:
	mov ecx,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	test ecx,ecx
	je Block7

 Block6:
	pop esi
	mov dword ptr [esp+4],eax
	jmp  CUIWorldSelect::SetFocusWorld

 Block7:
	pop esi
	ret 4
}
}
// CLogin::GetRTTI
__SUB_CLASS_THIS0(001DB6A0, __thiscall, 53090,  CLogin, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CLogin::ms_RTTI_CLogin
	ret
}
}
// CLogin::ChangeStepImmediate
_SUB_EXCEPTION_HANDLER(1D9730)
__SUB_CLASS_THIS(001D9730, __thiscall, 53038,  CLogin, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D9730
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x290
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2A4]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebp,dword ptr [esi+0x19C]
	mov ecx,dword ptr [esi+0x1A4]
	mov dword ptr [esp+0x28],ebp
	cmp ebp,ecx
	je Block98

 Block1:
	mov eax,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov edx,dword ptr [eax+0x2C]
	mov eax,ebp
	sub eax,ecx
	mov dword ptr [esp+0x20],edx
	cdq
	xor eax,edx
	sub eax,edx
	imul eax,0x12C
	add eax,0x1F4
	mov dword ptr [esp+0x1C],eax
	mov al,byte ptr [esi+0x1B0]
	cmp al,2
	jne Block3

 Block2:
	mov edi,4
	jmp Block4

 Block3:
	xor edx,edx
	cmp al,1
	setne dl
	dec edx
	and edx,8
	mov edi,edx

 Block4:
	cmp ecx,2
	jl Block6

 Block5:
	or edi,0x10

 Block6:
	cmp ecx,3
	jl Block8

 Block7:
	mov ecx,dword ptr [esi+0x20C]
	push 1
	call CUILoginStart::SetButton

 Block8:
	mov eax,dword ptr [esi+0x1A4]
	xor ebx,ebx
	cmp eax,1
	jne Block16

 Block9:
	mov eax,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	cmp dword ptr [eax+0x38],1
	mov ecx,dword ptr [esi+0x20C]
	jne Block13

 Block10:
	cmp dword ptr [esi+0x168],ebx
	je Block12

 Block11:
	push 2
	jmp Block23

 Block12:
	push 0x22
	jmp Block23

 Block13:
	cmp dword ptr [esi+0x168],ebx
	je Block15

 Block14:
	push 1
	jmp Block23

 Block15:
	push 0x21
	jmp Block23

 Block16:
	cmp eax,dword ptr [esi+0x1C0]
	jle Block19

 Block17:
	cmp eax,2
	jne Block19

 Block18:
	or edi,1
	push edi
	jmp Block22

 Block19:
	cmp eax,ebx
	je Block21

 Block20:
	push 1
	jmp Block22

 Block21:
	push ebx

 Block22:
	mov ecx,dword ptr [esi+0x20C]

 Block23:
	call CUILoginStart::SetButton
	cmp dword ptr [esi+0x1A4],1
	mov ecx,dword ptr [esi+0x20C]
	jne Block25

 Block24:
	push 1
	jmp Block26

 Block25:
	push 4

 Block26:
	call CUILoginStart::SetViewWorldButton
	mov ecx,dword ptr [esi+0x20C]
	push ebx
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esi+0x214]
	cmp ecx,ebx
	je Block33

 Block27:
	cmp ebp,3
	jne Block29

 Block28:
	cmp dword ptr [esi+0x1A4],4
	jmp Block31

 Block29:
	cmp ebp,4
	jne Block32

 Block30:
	cmp dword ptr [esi+0x1A4],3

 Block31:
	je Block33

 Block32:
	push ebx
	call CFadeWnd::Close

 Block33:
	mov eax,dword ptr [esi+0x1A4]
	or edi,0xFFFFFFFF
	cmp eax,5
	ja Block81

 Block34:
	cmp EAX, 0
je Block35
cmp EAX, 1
je Block39
cmp EAX, 2
je Block56
cmp EAX, 3
je Block61
cmp EAX, 4
je Block71
cmp EAX, 5
je Block80


 Block35:
	call TSingleton<CLoginGradeWnd>::CreateInstance
	mov ecx,dword ptr [esi+0x21C]
	mov dword ptr [esi+0x1AC],ebx
	cmp ecx,ebx
	je Block37

 Block36:
	push ebx
	call CFadeWnd::Close

 Block37:
	mov ecx,esi
	call CLogin::ResetRaceAndSubJob
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	cmp dword ptr [ecx+0x38],2
	jne Block82

 Block38:
	call CNMCOClientObject::GetInstance
	mov ecx,eax
	call CNMCOClientObject::LogoutAuth
	jmp Block82

 Block39:
	call TSingleton<CLoginGradeWnd>::CreateInstance
	lea edx,[esp+0x17]
	push edx
	push 0xF
	lea ecx,[esi+0x1D4]
	mov dword ptr [esi+0x1D0],edi
	call ZArray<AvatarData>::_Alloc
	lea eax,[esp+0x17]
	push eax
	push 0xF
	lea ecx,[esi+0x1D8]
	call ZArray<CLogin::RANK>::_Alloc
	lea ecx,[esp+0x17]
	push ecx
	push 0xF
	lea ecx,[esi+0x1DC]
	call ZArray<int>::_Alloc
	lea edx,[esp+0x17]
	push edx
	push 0x3C
	lea ecx,[esi+0x16C]
	call ZArray<AvatarData>::_Alloc
	lea eax,[esp+0x17]
	push eax
	push 0x3C
	lea ecx,[esi+0x170]
	call ZArray<CLogin::RANK>::_Alloc
	mov ecx,dword ptr [esi+0x21C]
	cmp ecx,ebx
	je Block41

 Block40:
	push ebx
	call CFadeWnd::Close

 Block41:
	cmp dword ptr [esi+0x1C0],1
	jne Block48

 Block42:
	mov ecx,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	cmp ecx,ebx
	je Block45

 Block43:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	cmp eax,ebx
	je Block45

 Block44:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block45:
	push 0x1D8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x2AC],ebx
	cmp eax,ebx
	je Block47

 Block46:
	push esi
	mov ecx,eax
	call CUIWorldSelect::_ctor_0

 Block47:
	push 4
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x2B0],edi
	call COutPacket::_ctor_1
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	mov dword ptr [esp+0x2B0],1
	call CClientSocket::SendPacket
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x2AC],edi
	call ZArray<unsigned char>::RemoveAll

 Block48:
	cmp ebp,5
	jne Block50

 Block49:
	mov ecx,esi
	call CLogin::ResetVAC

 Block50:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	cmp ecx,ebx
	je Block55

 Block51:
	mov eax,dword ptr [TSingleton<CUIRecommendWorld>::ms_pInstance]
	cmp eax,ebx
	jne Block54

 Block52:
	mov eax,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]

 Block53:
	cmp eax,ebx
	je Block55

 Block54:
	add eax,4
	push eax
	call CWndMan::SetFocus

 Block55:
	mov ecx,esi
	call CLogin::ResetRaceAndSubJob
	jmp Block82

 Block56:
	mov ecx,dword ptr [TSingleton<CLoginGradeWnd>::ms_pInstance]
	cmp ecx,ebx
	je Block59

 Block57:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CLoginGradeWnd>::ms_pInstance]
	cmp eax,ebx
	je Block59

 Block58:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block59:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	cmp ecx,ebx
	je Block55

 Block60:
	mov eax,dword ptr [TSingleton<CUIAvatar>::ms_pInstance]
	jmp Block53

 Block61:
	mov ecx,dword ptr [esi+0x21C]
	cmp ecx,ebx
	je Block64

 Block62:
	cmp ebp,2
	jg Block64

 Block63:
	push ebx
	call CFadeWnd::Close

 Block64:
	mov eax,dword ptr [TSingleton<CUINewCharRaceSelect>::ms_pInstance]
	cmp eax,ebx
	jne Block68

 Block65:
	push 0xC8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x2AC],2
	cmp eax,ebx
	je Block67

 Block66:
	push esi
	mov ecx,eax
	call CUINewCharRaceSelect::_ctor_0

 Block67:
	mov eax,dword ptr [TSingleton<CUINewCharRaceSelect>::ms_pInstance]
	mov dword ptr [esp+0x2AC],edi
	cmp eax,ebx
	je Block69

 Block68:
	add eax,4
	jmp Block70

 Block69:
	xor eax,eax

 Block70:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	xor ecx,ecx
	mov dword ptr [esi+0x240],ebx
	mov word ptr [esi+0x244],cx
	jmp Block82

 Block71:
	mov ecx,dword ptr [esi+0x21C]
	cmp ecx,ebx
	je Block73

 Block72:
	push ebx
	call CFadeWnd::Close

 Block73:
	push edi
	push offset _S_
	lea ecx,[esp+0x2C]
	call ZXString<char>::CreateFromCharStr
	lea edx,[esp+0x24]
	push edx
	lea ecx,[esi+0x270]
	mov dword ptr [esp+0x2B0],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x2AC],edi
	cmp eax,ebx
	je Block75

 Block74:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block75:
	mov ecx,esi
	call CLogin::InitNewCharEquip
	lea ecx,[esp+0x9C]
	call AvatarLook::_ctor_default
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x2034]
	mov byte ptr [esp+0xA8],al
	mov eax,dword ptr [esi+0x240]
	mov dword ptr [esp+0x2AC],4
	cmp eax,2
	jne Block77

 Block76:
	mov dword ptr [esp+0xA9],0xA
	jmp Block79

 Block77:
	cmp eax,3
	jne Block79

 Block78:
	mov dword ptr [esp+0xA9],0xB

 Block79:
	lea ecx,[esp+0x9C]
	push ecx
	mov ecx,esi
	call CLogin::GetSelectedAL_1
	lea ecx,[esi+0x200]
	call ZRef<CAvatar>::_Alloc
	mov ecx,esi
	call CLogin::ConvertSelectedRaceToUIRace
	imul eax,0x258
	push ebx
	push 0x64
	mov edx,0xFFFFF6BF
	sub edx,eax
	push edx
	push 0x16
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [eax],ebx
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ecx,dword ptr [esi+0x204]
	mov dword ptr [esp+0x34],esp
	push 4
	lea eax,[esp+0xBC]
	mov byte ptr [esp+0x2CC],5
	push eax
	mov byte ptr [esp+0x2D0],4
	call CAvatar::Init_1
	mov dword ptr [esp+0x2AC],edi
	jmp Block82

 Block80:
	mov eax,dword ptr [esi+0x20C]
	mov dword ptr [eax+0x118],ebx
	jmp Block82

 Block81:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea eax,[esi+4]
	push eax
	call CWndMan::SetFocus

 Block82:
	mov ebp,dword ptr [esi+0x1A4]
	push ebp
	mov ecx,esi
	call CLogin::GetStepHeight
	mov ecx,dword ptr [esp+0x28]
	mov ebx,eax
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x1C],ebx
	call CLogin::GetStepHeight
	cmp dword ptr [esp+0x28],5
	mov edi,eax
	mov dword ptr [esp+0x24],edi
	jne Block84

 Block83:
	push 1
	call CLogin::GetStepHeight
	mov edi,eax
	mov dword ptr [esp+0x24],eax

 Block84:
	cmp ebp,5
	jne Block86

 Block85:
	push 1
	mov ecx,esi
	call CLogin::GetStepHeight
	mov ebx,eax
	mov dword ptr [esp+0x18],eax

 Block86:
	mov eax,ebx
	fld qword ptr [__real_403c000000000000]
	sub eax,edi
	fst qword ptr [esp+0x44]
	imul eax,0x1B58
	fild dword ptr [esp+0x24]
	fstp qword ptr [esp+0x4C]
	fldz
	fst qword ptr [esp+0x54]
	cdq
	idiv dword ptr [esp+0x1C]
	mov ecx,dword ptr [_D_G_GR]
	xor edi,edi
	mov dword ptr [esp+0x3C],edi
	mov dword ptr [esp+0x6C],edi
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0x20]
	sar eax,1
	mov dword ptr [esp+0x1C],eax
	fild dword ptr [esp+0x1C]
	mov eax,dword ptr [esi+0x1A8]
	mov dword ptr [esp+0x64],edx
	mov dword ptr [esp+0x94],eax
	fstp qword ptr [esp+0x5C]
	fxch
	fstp qword ptr [esp+0x74]
	fild dword ptr [esp+0x18]
	fstp qword ptr [esp+0x7C]
	fst qword ptr [esp+0x84]
	fstp qword ptr [esp+0x8C]
	cmp ecx,edi
	jne Block88

 Block87:
	push 0x80004003
	call _com_issue_error

 Block88:
	lea edx,[esp+0x20]
	push edx
	call IWzGr2D::Getcenter
	mov eax,dword ptr [eax]
	lea ecx,[esp+0x3C]
	push ecx
	push 2
	push eax
	mov dword ptr [esp+0x2B8],6
	call raw_InvokeFly
	mov eax,dword ptr [esp+0x2C]
	or esi,0xFFFFFFFF
	add esp,0xC
	mov dword ptr [esp+0x2AC],esi
	cmp eax,edi
	je Block90

 Block89:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block90:
	mov ecx,dword ptr [_D_G_GR]
	cmp ecx,edi
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	lea edx,[esp+0x20]
	push edx
	call IWzGr2D::Getcenter
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x2AC],7
	cmp eax,edi
	jne Block94

 Block93:
	push 0x80004003
	call _com_issue_error

 Block94:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x2C]
	push ebx
	push eax
	call edx
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x2AC],esi
	cmp eax,edi
	je Block96

 Block95:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block96:
	lea eax,[esp+0x1C]
	push 0x4FC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x2B0],8
	call play_ui_sound
	mov eax,dword ptr [esp+0x20]
	add esp,4
	mov dword ptr [esp+0x2AC],esi
	cmp eax,edi
	je Block98

 Block97:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block98:
	mov ecx,dword ptr [esp+0x2A4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x29C
	ret 4
}
}
// CLogin::OnAvatarChanged
__SUB_CLASS_THIS0(001D9240, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x1A4],4
	jne Block4

 Block1:
	mov eax,dword ptr [esi+0x204]
	test eax,eax
	je Block4

 Block2:
	cmp dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance],0
	je Block4

 Block3:
	add eax,4
	push eax
	call CLogin::GetSelectedAL_1
	mov ecx,dword ptr [esi+0x204]
	push 0
	call CAvatar::NotifyAvatarModified

 Block4:
	pop esi
	ret
}
}
// CLogin::OnSelectWorldResult
_SUB_EXCEPTION_HANDLER(1DDA00)
// 5DDFBC
static uint8_t _SUB_1DDA00_LOOKUP_TABLE_0[28] = {
0, 13, 13, 1, 1, 2, 3, 0, 4, 0, 0, 5, 6, 13, 7, 8, 
9, 10, 11, 13, 13, 13, 10, 13, 13, 13, 12, 144, 
};
// 5DE010
static uint8_t _SUB_1DDA00_LOOKUP_TABLE_1[27] = {
0, 13, 13, 1, 1, 2, 3, 0, 4, 0, 0, 5, 6, 13, 7, 8, 
9, 10, 11, 13, 13, 13, 10, 13, 13, 13, 12, 
};
__SUB_CLASS_THIS(001DDA00, __thiscall, 53076,  CLogin, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1DDA00
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
	xor ebx,ebx
	mov dword ptr [edi+0x1AC],ebx
	mov ecx,dword ptr [TSingleton<CLicenseDlg>::ms_pInstance]
	cmp ecx,ebx
	je Block3

 Block1:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CLicenseDlg>::ms_pInstance]
	cmp eax,ebx
	je Block3

 Block2:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block3:
	mov ebp,dword ptr [esp+0x44]
	mov ecx,ebp
	call CInPacket::Decode1
	movzx esi,al
	mov eax,dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance]
	cmp eax,ebx
	je Block33

 Block4:
	mov ecx,dword ptr [eax+0x12C]
	cmp ecx,ebx
	je Block6

 Block5:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	push 3
	call edx

 Block6:
	lea eax,[esi+1]
	cmp eax,0x1A
	ja Block26

 Block7:
	movzx eax,byte ptr [eax+_SUB_1DDA00_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block8
cmp EAX, 1
je Block9
cmp EAX, 2
je Block12
cmp EAX, 3
je Block11
cmp EAX, 4
je Block13
cmp EAX, 5
je Block14
cmp EAX, 6
je Block15
cmp EAX, 7
je Block10
cmp EAX, 8
je Block16
cmp EAX, 9
je Block19
cmp EAX, 10
je Block22
cmp EAX, 11
je Block23
cmp EAX, 12
je Block24
cmp EAX, 13
je Block26


 Block8:
	push ebx
	push 0xF
	jmp Block25

 Block9:
	push ebx
	push 0x10
	jmp Block25

 Block10:
	push ebx
	push 0x15
	jmp Block25

 Block11:
	push ebx
	push 0x14
	jmp Block25

 Block12:
	push ebx
	push 3
	jmp Block25

 Block13:
	push ebx
	push ebx
	mov ecx,edi
	call CLogin::GotoTitle
	push ebx
	push 0x11
	jmp Block25

 Block14:
	push ebx
	push 0x13
	jmp Block25

 Block15:
	push ebx
	push 0xE
	jmp Block25

 Block16:
	push 0x1B
	call CLoginUtilDlg::YesNo2
	add esp,4
	test eax,eax
	je Block26

 Block17:
	lea ecx,[esp+0x14]
	push 0xB6C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push eax
	mov dword ptr [esp+0x44],ebx
	call open_web_site
	mov eax,dword ptr [esp+0x1C]
	add esp,8
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp eax,ebx
	je Block26

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block26

 Block19:
	push 0x1A
	call CLoginUtilDlg::YesNo2
	add esp,4
	test eax,eax
	je Block26

 Block20:
	lea edx,[esp+0x18]
	push 0xB6C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push eax
	mov dword ptr [esp+0x44],1
	call open_web_site
	mov eax,dword ptr [esp+0x20]
	add esp,8
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp eax,ebx
	je Block26

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block26

 Block22:
	push ebx
	push 0x21
	jmp Block25

 Block23:
	push ebx
	push 0x1B
	jmp Block25

 Block24:
	push ebx
	push 0x28

 Block25:
	call CLoginUtilDlg::Error
	add esp,8

 Block26:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	cmp ecx,ebx
	je Block31

 Block27:
	mov eax,dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance]
	cmp eax,ebx
	je Block29

 Block28:
	add eax,4
	jmp Block30

 Block29:
	xor eax,eax

 Block30:
	push eax
	call CWndMan::SetFocus

 Block31:
	cmp esi,ebx
	je Block57

 Block32:
	cmp esi,0xC
	jmp Block56

 Block33:
	lea eax,[esi+1]
	cmp eax,0x1A
	ja Block53

 Block34:
	movzx eax,byte ptr [eax+_SUB_1DDA00_LOOKUP_TABLE_1]
	cmp EAX, 0
je Block35
cmp EAX, 1
je Block36
cmp EAX, 2
je Block39
cmp EAX, 3
je Block38
cmp EAX, 4
je Block40
cmp EAX, 5
je Block41
cmp EAX, 6
je Block42
cmp EAX, 7
je Block37
cmp EAX, 8
je Block43
cmp EAX, 9
je Block46
cmp EAX, 10
je Block49
cmp EAX, 11
je Block50
cmp EAX, 12
je Block51
cmp EAX, 13
je Block53


 Block35:
	push ebx
	push 0xF
	jmp Block52

 Block36:
	push ebx
	push 0x10
	jmp Block52

 Block37:
	push ebx
	push 0x15
	jmp Block52

 Block38:
	push ebx
	push 0x14
	jmp Block52

 Block39:
	push ebx
	push 3
	jmp Block52

 Block40:
	push ebx
	push ebx
	mov ecx,edi
	call CLogin::GotoTitle
	push ebx
	push 0x11
	jmp Block52

 Block41:
	push ebx
	push 0x13
	jmp Block52

 Block42:
	push ebx
	push 0xE
	jmp Block52

 Block43:
	push 0x1B
	call CLoginUtilDlg::YesNo2
	add esp,4
	test eax,eax
	je Block53

 Block44:
	lea ecx,[esp+0x18]
	push 0xB6C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push eax
	mov dword ptr [esp+0x44],2
	call open_web_site
	mov eax,dword ptr [esp+0x20]
	add esp,8
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp eax,ebx
	je Block53

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block53

 Block46:
	push 0x1A
	call CLoginUtilDlg::YesNo2
	add esp,4
	test eax,eax
	je Block53

 Block47:
	lea edx,[esp+0x14]
	push 0xB6C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push eax
	mov dword ptr [esp+0x44],3
	call open_web_site
	mov eax,dword ptr [esp+0x1C]
	add esp,8
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp eax,ebx
	je Block53

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block53

 Block49:
	push ebx
	push 0x21
	jmp Block52

 Block50:
	push ebx
	push 0x1B
	jmp Block52

 Block51:
	push ebx
	push 0x28

 Block52:
	call CLoginUtilDlg::Error
	add esp,8

 Block53:
	cmp esi,ebx
	je Block57

 Block54:
	cmp esi,0xC
	je Block57

 Block55:
	cmp esi,0x17

 Block56:
	jne Block74

 Block57:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [eax+0x205C]
	mov dword ptr [edi+0x234],ecx
	mov ecx,dword ptr [eax+0x2030]
	mov eax,dword ptr [eax+0x205C]
	push ecx
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push eax
	call CConfig::LoadLastConnectedCharacterID
	mov ecx,ebp
	mov dword ptr [esp+0x20],eax
	call CInPacket::Decode1
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	movzx eax,al
	xor ebp,ebp
	mov dword ptr [esp+0x18],eax
	mov dword ptr [ecx+0x20A0],eax
	mov dword ptr [esp+0x14],ebp
	jmp Block59

 Block58:
	mov eax,dword ptr [esp+0x18]

 Block59:
	cmp ebp,eax
	jge Block65

 Block60:
	mov esi,dword ptr [edi+0x1D4]
	mov edx,dword ptr [esp+0x44]
	push 0
	add esi,ebx
	push edx
	mov ecx,esi
	call GW_CharacterStat::Decode
	mov eax,dword ptr [esp+0x44]
	push eax
	lea ecx,[esi+0xF9]
	call AvatarLook::Decode
	mov ecx,dword ptr [edi+0x1DC]
	mov esi,dword ptr [esp+0x44]
	lea edx,[ecx+ebp*4]
	mov ecx,esi
	mov dword ptr [esp+0x1C],edx
	call CInPacket::Decode1
	mov ecx,dword ptr [esp+0x1C]
	movzx eax,al
	mov dword ptr [ecx],eax
	mov ecx,esi
	call CInPacket::Decode1
	movzx eax,al
	test eax,eax
	je Block62

 Block61:
	mov edx,dword ptr [edi+0x1D8]
	add edx,dword ptr [esp+0x14]
	push 0x10
	push edx
	mov ecx,esi
	call CInPacket::DecodeBuffer
	jmp Block63

 Block62:
	mov eax,dword ptr [edi+0x1D8]
	xor ecx,ecx
	add eax,dword ptr [esp+0x14]
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax+0xC],ecx

 Block63:
	mov eax,dword ptr [edi+0x1D4]
	mov ecx,dword ptr [esp+0x20]
	cmp dword ptr [ebx+eax],ecx
	jne Block66

 Block64:
	mov dword ptr [edi+0x1D0],ebp
	jmp Block66

 Block65:
	mov edx,dword ptr [edi+0x1D4]
	mov dword ptr [ebx+edx],0

 Block66:
	add dword ptr [esp+0x14],0x10
	inc ebp
	add ebx,0x2FE
	cmp ebp,0xF
	jl Block58

 Block67:
	mov esi,dword ptr [esp+0x44]
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	mov byte ptr [edi+0x1B0],al
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [edi+0x1B8],eax
	call CInPacket::Decode4
	mov dword ptr [edi+0x1BC],eax
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [edi+0x1B8]
	mov dword ptr [ecx+0x20A4],eax
	push 0xA4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x44],eax
	mov dword ptr [esp+0x3C],4
	test eax,eax
	je Block69

 Block68:
	push edi
	mov ecx,eax
	call CUICharSelect::_ctor_0

 Block69:
	or esi,0xFFFFFFFF
	push 0x150
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x40],esi
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x44],eax
	mov dword ptr [esp+0x3C],5
	test eax,eax
	je Block71

 Block70:
	mov ecx,dword ptr [edi+0x1D4]
	push ecx
	push edi
	mov ecx,eax
	call CUIAvatar::_ctor_0

 Block71:
	push esi
	mov ecx,edi
	mov dword ptr [esp+0x40],esi
	call CLogin::ChangeStep
	mov edx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	cmp dword ptr [edx+0x38],1
	jne Block74

 Block72:
	cmp byte ptr [edi+0x1B0],0
	jne Block74

 Block73:
	push 9
	lea ecx,[esp+0x28]
	call COutPacket::_ctor_1
	push 1
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x40],6
	call COutPacket::Encode1
	push 1
	lea ecx,[esp+0x28]
	call COutPacket::Encode1
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x48],esp
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
	lea ecx,[esp+0x28]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x24]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block74:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 4
}
}
// CLogin::GetWorldIDfromCharIdx
__SUB_CLASS_THIS(001D1C80, __thiscall, 53080,  CLogin, long, long) {
__asm {

 Block0:
	call CLogin::ConvertSelectedRaceToUIRace
	xor edx,edx
	cmp dword ptr [ecx+0x1A4],4
	setne dl
	dec edx
	and edx,eax
	add edx,dword ptr [esp+4]
	mov eax,0xFFFFFFF8
	imul edx,0x258
	sub eax,edx
	ret 4
}
}
// CLogin::OnUpdatePinCodeResult
__SUB_CLASS_THIS(001D2420, __thiscall, 53076,  CLogin, void, CInPacket&) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	call CInPacket::Decode1
	test al,al
	je Block2

 Block1:
	push 0
	push 0xF
	call CLoginUtilDlg::Error
	mov ecx,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	add esp,8
	mov dword ptr [esp+4],1
	jmp  CUITitle::EnableLoginCtrl

 Block2:
	push 8
	call CPinCodeDlg::Notice
	mov ecx,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	add esp,4
	mov dword ptr [esp+4],1
	jmp  CUITitle::EnableLoginCtrl
}
}
// CLogin::OnAcceptLicense
_SUB_EXCEPTION_HANDLER(1D4540)
__SUB_CLASS_THIS0(001D4540, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D4540
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [ecx+0x1A4]
	test ecx,ecx
	jne Block2

 Block1:
	mov ecx,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	push 1
	call CUITitle::EnableLoginCtrl
	push 7
	lea ecx,[esp+8]
	call COutPacket::_ctor_1
	push 1
	lea ecx,[esp+8]
	mov dword ptr [esp+0x20],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+4]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+8]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret
}
}
// CLogin::OnNewCharStep
__SUB_CLASS_THIS(001DA210, __thiscall, 53039,  CLogin, void, int32_t) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x1A4],3
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0x2BC],eax
	mov dword ptr [ecx+0x2C0],1
	je Block3

 Block1:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [edx+0x205C]
	mov edx,dword ptr [ecx+0x1CC]
	shl eax,5
	cmp dword ptr [eax+edx+0x18],0
	je Block4

 Block2:
	push 0
	push 0x24
	call CLoginUtilDlg::Notice
	add esp,8

 Block3:
	ret 4

 Block4:
	mov eax,dword ptr [ecx+0x1B8]
	mov edx,dword ptr [ecx+0x1D4]
	imul eax,0x2FE
	cmp dword ptr [eax+edx-0x2FE],0
	je Block6

 Block5:
	add ecx,0x220
	push ecx
	push 9
	call CLoginUtilDlg::Error
	add esp,8
	ret 4

 Block6:
	mov dword ptr [esp+4],0xFFFFFFFF
	jmp  CLogin::ChangeStep
}
}
// CLogin::OnExtraCharInfoResult
__SUB_CLASS_THIS(001D25A0, __thiscall, 53076,  CLogin, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,dword ptr [esp+0xC]
	push edi
	mov edi,ecx
	mov ecx,esi
	mov dword ptr [edi+0x2C4],0
	call CInPacket::Decode4
	mov ecx,esi
	mov ebx,eax
	call CInPacket::Decode1
	movzx ax,al
	movzx ecx,ax
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test eax,eax
	je Block4

 Block1:
	cmp ebx,dword ptr [eax+0x2030]
	jne Block4

 Block2:
	test cx,cx
	jne Block4

 Block3:
	mov dword ptr [edi+0x2C4],1

 Block4:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CLogin::OnViewAllCharResult
_SUB_EXCEPTION_HANDLER(1DE120)
__SUB_CLASS_THIS(001DE120, __thiscall, 53076,  CLogin, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1DE120
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
	cmp dword ptr [esi+0x150],0
	je Block50

 Block1:
	mov ebp,dword ptr [esp+0x2C]
	mov ecx,ebp
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,7
	ja Block47

 Block2:
	cmp EAX, 0
je Block27
cmp EAX, 1
je Block3
cmp EAX, 2
je Block9
cmp EAX, 3
je Block10
cmp EAX, 4
je Block14
cmp EAX, 5
je Block14
cmp EAX, 6
je Block10
cmp EAX, 7
je Block10


 Block3:
	lea eax,[esi+0x188]
	push eax
	lea ecx,[esp+0x30]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	mov ecx,ebp
	mov dword ptr [esp+0x24],0
	call CInPacket::Decode4
	mov ecx,ebp
	mov dword ptr [esi+0x15C],eax
	call CInPacket::Decode4
	mov dword ptr [esi+0x160],eax
	mov eax,dword ptr [esp+0x2C]
	or edi,0xFFFFFFFF
	add dword ptr [eax+4],edi
	mov dword ptr [esp+0x24],edi
	jne Block5

 Block4:
	mov dword ptr [eax],0

 Block5:
	cmp dword ptr [esi+0x15C],0
	je Block8

 Block6:
	cmp dword ptr [esi+0x160],0
	je Block8

 Block7:
	lea ecx,[esp+0x2C]
	push ecx
	push 0x3C
	lea ecx,[esi+0x16C]
	call ZArray<AvatarData>::_Alloc
	lea edx,[esp+0x2C]
	push edx
	push 0x3C
	lea ecx,[esi+0x170]
	call ZArray<CLogin::RANK>::_Alloc
	lea eax,[esp+0x2C]
	push eax
	push 0x3C
	lea ecx,[esi+0x17C]
	call ZArray<long>::_Alloc
	jmp Block50

 Block8:
	mov ecx,esi
	call CLogin::RemoveNoticeConnecting
	mov ecx,esi
	call CLogin::ResetVAC
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0xFBD
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	push 1
	mov ecx,esi
	call CLogin::GotoWorldSelect
	jmp Block50

 Block9:
	mov ecx,esi
	call CLogin::RemoveNoticeConnecting
	mov ecx,esi
	call CLogin::ResetVAC
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0xFBE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	jmp Block48

 Block10:
	mov ecx,esi
	call CLogin::RemoveNoticeConnecting
	mov ecx,esi
	call CLogin::ResetVAC
	mov ecx,ebp
	call CInPacket::Decode1
	test al,al
	je Block13

 Block11:
	lea eax,[esp+0x2C]
	push eax
	mov ecx,ebp
	call CInPacket::DecodeStr
	push 0
	push 1
	push 0
	push 0
	push ecx
	lea edx,[esp+0x40]
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push edx
	mov dword ptr [esp+0x3C],1
	call ZXString<char>::_ctor_copy
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x40]
	add esp,0x14
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block49

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block49

 Block13:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0xFBF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	jmp Block48

 Block14:
	lea ecx,[esi+0x188]
	push ecx
	lea ecx,[esp+0x30]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	mov eax,dword ptr [esp+0x2C]
	or edi,0xFFFFFFFF
	add dword ptr [esi+0x15C],edi
	cmp dword ptr [esi+0x15C],0
	jg Block23

 Block15:
	add dword ptr [eax+4],edi
	jne Block17

 Block16:
	mov dword ptr [eax],0

 Block17:
	cmp dword ptr [esi+0x164],0
	mov ecx,esi
	jne Block19

 Block18:
	call CLogin::RemoveNoticeConnecting
	mov ecx,esi
	call CLogin::ResetVAC
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0xFBD
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	push 1
	mov ecx,esi
	call CLogin::GotoWorldSelect
	jmp Block50

 Block19:
	push 5
	call CLogin::ChangeStep
	cmp dword ptr [TSingleton<CUIAvatarVAC>::ms_pInstance],0
	jne Block25

 Block20:
	mov ecx,esi
	call CLogin::MakeVACDlg
	lea eax,[esi+0x180]
	push eax
	lea ecx,[esp+0x30]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	push 0x405C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x28],2
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x24],3
	test eax,eax
	je Block22

 Block21:
	mov ecx,dword ptr [esi+0x16C]
	push ecx
	push esi
	mov ecx,eax
	call CUIAvatarVAC::_ctor_0

 Block22:
	mov eax,dword ptr [esp+0x2C]

 Block23:
	add dword ptr [eax+4],edi
	jne Block50

 Block24:
	mov dword ptr [eax],0
	jmp Block50

 Block25:
	cmp dword ptr [esi+0x14C],0
	je Block50

 Block26:
	mov ecx,esi
	call CLogin::RemoveNoticeConnecting
	jmp Block50

 Block27:
	mov ecx,ebp
	call CInPacket::Decode1
	movzx edx,al
	mov ecx,ebp
	mov dword ptr [esp+0x14],edx
	call CInPacket::Decode1
	movzx edi,al
	lea eax,[esi+0x180]
	push eax
	lea ecx,[esp+0x1C]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	mov dword ptr [esp+0x24],4
	test edi,edi
	jle Block34

 Block28:
	mov dword ptr [esp+0x2C],edi
	jmp Block30

 Block30:
	mov edi,dword ptr [esi+0x164]
	mov ebx,edi
	imul ebx,0x2FE
	add ebx,dword ptr [esi+0x16C]
	push 0
	lea eax,[edi+1]
	push ebp
	mov ecx,ebx
	mov dword ptr [esi+0x164],eax
	call GW_CharacterStat::Decode
	push ebp
	lea ecx,[ebx+0xF9]
	call AvatarLook::Decode
	mov ecx,dword ptr [esi+0x17C]
	mov edx,dword ptr [esp+0x14]
	mov dword ptr [ecx+edi*4],edx
	mov ecx,ebp
	call CInPacket::Decode1
	movzx eax,al
	shl edi,4
	test eax,eax
	je Block32

 Block31:
	add edi,dword ptr [esi+0x170]
	push 0x10
	push edi
	mov ecx,ebp
	call CInPacket::DecodeBuffer
	jmp Block33

 Block32:
	xor eax,eax
	add edi,dword ptr [esi+0x170]
	mov dword ptr [edi],eax
	mov dword ptr [edi+4],eax
	mov dword ptr [edi+8],eax
	mov dword ptr [edi+0xC],eax

 Block33:
	sub dword ptr [esp+0x2C],1
	jne Block30

 Block34:
	mov eax,dword ptr [esp+0x18]
	or edi,0xFFFFFFFF
	add dword ptr [eax+4],edi
	mov dword ptr [esp+0x24],edi
	jne Block36

 Block35:
	mov dword ptr [eax],0

 Block36:
	lea eax,[esi+0x188]
	push eax
	lea ecx,[esp+0x30]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	add dword ptr [esi+0x15C],edi
	cmp dword ptr [esi+0x15C],0
	mov eax,dword ptr [esp+0x2C]
	jg Block23

 Block37:
	add dword ptr [eax+4],edi
	jne Block39

 Block38:
	mov dword ptr [eax],0

 Block39:
	mov ecx,ebp
	call CInPacket::Decode1
	mov ecx,esi
	mov byte ptr [esi+0x1B0],al
	call CLogin::MakeVACDlg
	push 5
	mov ecx,esi
	call CLogin::ChangeStep
	cmp dword ptr [TSingleton<CUIAvatarVAC>::ms_pInstance],0
	jne Block44

 Block40:
	lea eax,[esi+0x180]
	push eax
	lea ecx,[esp+0x30]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	push 0x405C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x28],5
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x24],6
	test eax,eax
	je Block42

 Block41:
	mov ecx,dword ptr [esi+0x16C]
	push ecx
	push esi
	mov ecx,eax
	call CUIAvatarVAC::_ctor_0

 Block42:
	mov eax,dword ptr [esp+0x2C]
	add dword ptr [eax+4],edi
	jne Block45

 Block43:
	mov dword ptr [eax],0
	jmp Block45

 Block44:
	push 0
	push 0
	mov ecx,esi
	call CLogin::GotoTitle

 Block45:
	mov esi,dword ptr [esi+0x20C]
	test esi,esi
	je Block50

 Block46:
	mov dword ptr [esi+0x118],0
	jmp Block50

 Block47:
	mov ecx,esi
	call CLogin::RemoveNoticeConnecting
	mov ecx,esi
	call CLogin::ResetVAC
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x40],esp
	push 0
	push 5
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString<char>::GetBuffer
	mov edx,dword ptr [_S_ERROR]
	mov dword ptr [eax],edx
	mov cl,byte ptr [_S_ERROR+4]
	mov byte ptr [eax+4],cl
	push 5
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer

 Block48:
	call CUtilDlg::Notice
	add esp,0x14

 Block49:
	push 0
	push 0
	mov ecx,esi
	call CLogin::GotoTitle

 Block50:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 4
}
}
// CLogin::DrawNoticeConnecting
_SUB_EXCEPTION_HANDLER(1DE030)
__SUB_CLASS_THIS0(001DE030, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1DE030
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
	mov ebx,ecx
	push 0xA4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x20],0
	test eax,eax
	je Block2

 Block1:
	push ebx
	mov ecx,eax
	call CConnectionNoticeDlg::_ctor_0
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	lea esi,[ebx+0x148]
	test eax,eax
	je Block14

 Block4:
	add eax,8
	je Block14

 Block5:
	lea edi,[eax-8]
	test edi,edi
	je Block7

 Block6:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+4]
	mov dword ptr [esi+4],edi
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block9

 Block8:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CConnectionNoticeDlg>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [ebx+0x14C]
	call CDialog::DoModal
	cmp dword ptr [esi+4],0
	mov edi,eax
	je Block11

 Block10:
	push 0
	mov ecx,esi
	call ZRef<CConnectionNoticeDlg>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block11:
	test edi,edi
	jne Block13

 Block12:
	mov ecx,ebx
	mov dword ptr [ebx+0x150],edi
	call CLogin::ResetVAC
	push edi
	push edi
	mov ecx,ebx
	call CLogin::GotoTitle

 Block13:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret

 Block14:
	xor edi,edi
	jmp Block7
}
}
// CLogin::EnableLoginStartCtrl
__SUB_CLASS_THIS(001D1E00, __thiscall, 53038,  CLogin, void, long) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x20C]
	test ecx,ecx
	je Block2

 Block1:
	jmp  CUILoginStart::EnableLoginStartCtrl

 Block2:
	ret 4
}
}
// CLogin::OnCheckPinCodeResult
_SUB_EXCEPTION_HANDLER(1DB000)
__SUB_CLASS_THIS(001DB000, __thiscall, 53076,  CLogin, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1DB000
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esp+0x58]
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,7
	ja Block29

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block4
cmp EAX, 2
je Block10
cmp EAX, 3
je Block26
cmp EAX, 4
je Block18
cmp EAX, 5
je Block29
cmp EAX, 6
je Block29
cmp EAX, 7
je Block27


 Block2:
	mov eax,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	cmp dword ptr [eax+0x38],1
	je Block29

 Block3:
	push 0xB
	lea ecx,[esp+0x2C]
	call COutPacket::_ctor_1
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	mov dword ptr [esp+0x54],0
	call CClientSocket::SendPacket
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x44
	ret 4

 Block4:
	add esi,0x220
	push esi
	call CPinCodeDlg::CreatePinCode
	add esp,4
	mov esi,eax
	mov dword ptr [esp+0x58],0
	push 0xA
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x54],1
	call COutPacket::_ctor_1
	mov bl,2
	mov byte ptr [esp+0x50],bl
	lea ecx,[esp+0x28]
	test esi,esi
	jge Block6

 Block5:
	push 0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	push 1
	call CUITitle::EnableLoginCtrl
	jmp Block8

 Block6:
	push 1
	call COutPacket::Encode1
	lea edx,[esp+0x14]
	push 0x1A14
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea eax,[esp+0x60]
	push eax
	mov byte ptr [esp+0x5C],3
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push eax
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x2C]
	call COutPacket::EncodeStr
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x50],bl
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x50],1
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test eax,eax
	je Block29

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x44
	ret 4

 Block10:
	mov dword ptr [esp+0x58],0
	mov ebx,4
	mov dword ptr [esp+0x50],ebx
	lea edi,[esi+0x220]

 Block11:
	lea edx,[esp+0x18]
	push edx
	push 5
	push edi
	call CPinCodeDlg::EnterPinCode
	mov esi,eax
	add esp,0xC
	cmp esi,0xFFFFFFFD
	je Block11

 Block12:
	push 9
	lea ecx,[esp+0x2C]
	call COutPacket::_ctor_1
	push esi
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x54],5
	call COutPacket::Encode1
	test esi,esi
	jne Block14

 Block13:
	mov ecx,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	push 1
	call CUITitle::EnableLoginCtrl
	jmp Block16

 Block14:
	push 0
	lea ecx,[esp+0x2C]
	call COutPacket::Encode1
	lea eax,[esp+0x1C]
	push 0x1A14
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x60]
	push edx
	mov byte ptr [esp+0x5C],6
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push eax
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x2C]
	call COutPacket::EncodeStr
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x50],5
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x28]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x50],bl
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test eax,eax
	je Block29

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x44
	ret 4

 Block18:
	mov eax,4
	mov dword ptr [esp+0x10],0
	mov dword ptr [esp+0x50],7
	lea edi,[esi+0x220]

 Block19:
	lea ecx,[esp+0x20]
	push ecx
	push eax
	push edi
	call CPinCodeDlg::EnterPinCode
	mov esi,eax
	add esp,0xC
	mov eax,5
	cmp esi,0xFFFFFFFD
	je Block19

 Block20:
	push 9
	lea ecx,[esp+0x3C]
	call COutPacket::_ctor_1
	mov bl,8
	push esi
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x54],bl
	call COutPacket::Encode1
	test esi,esi
	jne Block22

 Block21:
	mov ecx,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	push 1
	call CUITitle::EnableLoginCtrl
	jmp Block24

 Block22:
	push 0
	lea ecx,[esp+0x3C]
	call COutPacket::Encode1
	lea edx,[esp+0x24]
	push 0x1A14
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x20]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x5C],9
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x5C],esp
	push eax
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x3C]
	call COutPacket::EncodeStr
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x50],bl
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x38]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x50],7
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test eax,eax
	je Block29

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x44
	ret 4

 Block26:
	push 0
	push 0xF
	jmp Block28

 Block27:
	push 0
	push 0
	mov ecx,esi
	call CLogin::GotoTitle
	mov ecx,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	push 1
	call CUITitle::EnableLoginCtrl
	push 0
	push 0x11

 Block28:
	call CLoginUtilDlg::Error
	add esp,8

 Block29:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x44
	ret 4
}
}
// CLogin::OnRecommendWorldMessage
_SUB_EXCEPTION_HANDLER(1D7280)
__SUB_CLASS_THIS(001D7280, __thiscall, 53076,  CLogin, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D7280
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
	mov ebp,ecx
	mov dword ptr [esp+0x18],ebp
	cmp dword ptr [ebp+0x1A4],1
	jne Block8

 Block1:
	mov edi,dword ptr [esp+0x2C]
	mov ecx,edi
	call CInPacket::Decode1
	lea ebx,[ebp+0x23C]
	mov ecx,ebx
	movzx esi,al
	call ZArray<RECOMMENDWORLDMSG>::RemoveAll
	test esi,esi
	jle Block7

 Block2:
	mov dword ptr [esp+0x2C],esi
	or ebp,0xFFFFFFFF

 Block3:
	push ebp
	mov ecx,ebx
	call ZArray<RECOMMENDWORLDMSG>::InsertBefore
	mov ecx,edi
	mov esi,eax
	call CInPacket::Decode4
	mov dword ptr [esi],eax
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	push eax
	lea ecx,[esi+4]
	mov dword ptr [esp+0x28],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ebp
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	sub dword ptr [esp+0x2C],1
	jne Block3

 Block6:
	mov ebp,dword ptr [esp+0x18]

 Block7:
	xor ecx,ecx
	cmp dword ptr [ebp+0x234],0xFF
	mov dword ptr [ebp+0x238],1
	sete cl
	push ecx
	mov ecx,ebp
	call CLogin::ViewRecommendWorld

 Block8:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 4
}
}
// CLogin::OnWorldInformation
_SUB_EXCEPTION_HANDLER(1DA7F0)
__SUB_CLASS_THIS(001DA7F0, __thiscall, 53076,  CLogin, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1DA7F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x14],ebp
	mov esi,dword ptr [esp+0x38]
	mov ecx,esi
	call CInPacket::Decode1
	movsx ebx,al
	test ebx,ebx
	jge Block6

 Block1:
	mov ecx,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	test ecx,ecx
	jne Block5

 Block2:
	push 0x1D8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x38],eax
	mov dword ptr [esp+0x30],0
	test eax,eax
	je Block4

 Block3:
	push ebp
	mov ecx,eax
	call CUIWorldSelect::_ctor_0

 Block4:
	push 1
	mov ecx,ebp
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call CLogin::ChangeStep
	jmp Block24

 Block5:
	call CUIWorldSelect::DrawWorldItems
	push 1
	mov ecx,ebp
	call CLogin::ChangeStep
	jmp Block24

 Block6:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x1CC]
	call ZArray<CLogin::WORLDITEM>::InsertBefore
	mov edi,eax
	lea eax,[esp+0x38]
	push eax
	mov ecx,esi
	mov dword ptr [edi],ebx
	call CInPacket::DecodeStr
	push eax
	lea ecx,[edi+4]
	mov dword ptr [esp+0x34],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x38]
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x30],ebx
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov ecx,esi
	call CInPacket::Decode1
	movzx ecx,al
	lea edx,[esp+0x38]
	mov dword ptr [edi+8],ecx
	push edx
	mov ecx,esi
	call CInPacket::DecodeStr
	push eax
	lea ecx,[edi+0xC]
	mov dword ptr [esp+0x34],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x30],ebx
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov ecx,esi
	call CInPacket::Decode2
	movzx eax,ax
	mov ecx,esi
	mov dword ptr [edi+0x10],eax
	call CInPacket::Decode2
	movzx ecx,ax
	mov dword ptr [edi+0x14],ecx
	mov ecx,esi
	call CInPacket::Decode1
	movzx edx,al
	mov ecx,esi
	mov dword ptr [edi+0x18],edx
	call CInPacket::Decode1
	movzx ebx,al
	test ebx,ebx
	jle Block16

 Block11:
	lea ebp,[edi+0x1C]

 Block12:
	push 0xFFFFFFFF
	mov ecx,ebp
	call ZArray<CLogin::CHANNELITEM>::InsertBefore
	mov edi,eax
	lea eax,[esp+0x38]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x34],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [edi+4],eax
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [edi+8],ecx
	mov ecx,esi
	call CInPacket::Decode1
	movzx edx,al
	mov ecx,esi
	mov dword ptr [edi+0xC],edx
	call CInPacket::Decode1
	movzx eax,al
	dec ebx
	mov dword ptr [edi+0x10],eax
	test ebx,ebx
	jg Block12

 Block15:
	mov ebp,dword ptr [esp+0x14]

 Block16:
	mov ecx,esi
	call CInPacket::Decode2
	movzx ecx,ax
	mov dword ptr [ebp+0x22C],ecx
	lea edi,[ebp+0x230]
	mov ecx,edi
	call ZArray<CLogin::BALLOON>::RemoveAll
	mov eax,dword ptr [ebp+0x22C]
	test eax,eax
	je Block24

 Block17:
	mov dword ptr [esp+0x38],0
	jle Block24

 Block18:
	mov ebx,4

 Block19:
	mov dword ptr [esp+0x24],0
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	call CInPacket::Decode2
	movzx edx,ax
	mov ecx,esi
	mov dword ptr [esp+0x1C],edx
	call CInPacket::Decode2
	movzx eax,ax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x24],eax
	call CInPacket::DecodeStr
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x34],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x30],bl
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<CLogin::BALLOON>::InsertBefore
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [eax],edx
	lea edx,[esp+0x24]
	mov dword ptr [eax+4],ecx
	push edx
	lea ecx,[eax+8]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov eax,dword ptr [esp+0x38]
	inc eax
	cmp eax,dword ptr [ebp+0x22C]
	mov dword ptr [esp+0x38],eax
	jl Block19

 Block24:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 4
}
}
// CLogin::GetSelectedAL
_SUB_EXCEPTION_HANDLER(1D74C0)
__SUB_CLASS_THIS(001D74C0, __thiscall, 53094,  CLogin, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D74C0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	xor edx,edx
	mov dword ptr [esp+8],edx
	mov al,byte ptr [ecx+0x264]
	mov dword ptr [esp+0x14],edx
	cmp al,dl
	jne Block2

 Block1:
	mov eax,dword ptr [esp+0x1C]
	lea ecx,[ecx+eax*4+0x274]
	push ecx
	jmp Block4

 Block2:
	cmp al,1
	jne Block5

 Block3:
	mov edx,dword ptr [esp+0x1C]
	lea eax,[ecx+edx*4+0x298]
	push eax

 Block4:
	lea ecx,[esp+0xC]
	call ZArray<CLogin::ASITEM>::operator=

 Block5:
	mov ecx,dword ptr [esp+8]
	mov esi,dword ptr [ecx]
	lea ecx,[esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZArray<CLogin::ASITEM>::RemoveAll
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CLogin::ReSetExtraCharInfo
__SUB_CLASS_THIS0(001D1CD0, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	mov dword ptr [ecx+0x2C4],0
	ret
}
}
// CLoginGradeWnd::OnCreate
__SUB_CLASS_THIS(001EE690, __thiscall, 78936,  CLoginGradeWnd, void, void*) {
__asm {

 Block0:
	ret 4
}
}
// CLogin::OnSelectCharacterByVACResult
_SUB_EXCEPTION_HANDLER(1DE670)
// 5DEA20
static uint8_t _SUB_1DE670_LOOKUP_TABLE_0[28] = {
0, 13, 13, 1, 1, 2, 3, 0, 4, 0, 0, 5, 6, 13, 7, 8, 
9, 10, 11, 13, 13, 13, 10, 13, 13, 13, 12, 144, 
};
// 5DEA60
static uint8_t _SUB_1DE670_LOOKUP_TABLE_1[28] = {
0, 1, 2, 8, 8, 8, 8, 8, 8, 8, 3, 8, 3, 8, 8, 8, 
8, 8, 4, 8, 8, 8, 8, 8, 5, 8, 6, 7, 
};
__SUB_CLASS_THIS(001DE670, __thiscall, 53076,  CLogin, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1DE670
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x24],eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x4C]
	mov edi,ecx
	xor ebp,ebp
	mov ecx,esi
	mov dword ptr [edi+0x1AC],ebp
	call CInPacket::Decode1
	mov ecx,esi
	movzx ebx,al
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esp+0x18],eax
	lea eax,[ebx+1]
	cmp eax,0x1A
	ja Block20

 Block1:
	movzx ecx,byte ptr [eax+_SUB_1DE670_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block2
cmp ECX, 1
je Block3
cmp ECX, 2
je Block6
cmp ECX, 3
je Block5
cmp ECX, 4
je Block7
cmp ECX, 5
je Block8
cmp ECX, 6
je Block9
cmp ECX, 7
je Block4
cmp ECX, 8
je Block10
cmp ECX, 9
je Block13
cmp ECX, 10
je Block16
cmp ECX, 11
je Block17
cmp ECX, 12
je Block18
cmp ECX, 13
je Block20


 Block2:
	push ebp
	push 0xF
	jmp Block19

 Block3:
	push ebp
	push 0x10
	jmp Block19

 Block4:
	push ebp
	push 0x15
	jmp Block19

 Block5:
	push ebp
	push 0x14
	jmp Block19

 Block6:
	push ebp
	push 3
	jmp Block19

 Block7:
	push ebp
	push ebp
	mov ecx,edi
	call CLogin::GotoTitle
	push ebp
	push 0x11
	jmp Block19

 Block8:
	push ebp
	push 0x13
	jmp Block19

 Block9:
	push ebp
	push 0xE
	jmp Block19

 Block10:
	push 0x1B
	call CLoginUtilDlg::YesNo2
	add esp,4
	test eax,eax
	je Block20

 Block11:
	lea edx,[esp+0x24]
	push 0xB6C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push eax
	mov dword ptr [esp+0x4C],ebp
	call open_web_site
	mov eax,dword ptr [esp+0x2C]
	add esp,8
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp eax,ebp
	je Block20

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block20

 Block13:
	push 0x1A
	call CLoginUtilDlg::YesNo2
	add esp,4
	test eax,eax
	je Block20

 Block14:
	lea eax,[esp+0x1C]
	push 0xB6C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push eax
	mov dword ptr [esp+0x4C],1
	call open_web_site
	mov eax,dword ptr [esp+0x24]
	add esp,8
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp eax,ebp
	je Block20

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block20

 Block16:
	push ebp
	push 0x21
	jmp Block19

 Block17:
	push ebp
	push 0x1B
	jmp Block19

 Block18:
	push ebp
	push 0x28

 Block19:
	call CLoginUtilDlg::Error
	add esp,8

 Block20:
	cmp ebx,ebp
	je Block23

 Block21:
	cmp ebx,0xC
	je Block24

 Block22:
	cmp ebx,0x17
	jne Block36

 Block23:
	cmp ebx,0xC
	jne Block34

 Block24:
	mov eax,dword ptr [esp+0x18]
	dec eax
	cmp eax,0x1B
	ja Block33

 Block25:
	movzx ecx,byte ptr [eax+_SUB_1DE670_LOOKUP_TABLE_1]
	cmp ECX, 0
je Block26
cmp ECX, 1
je Block27
cmp ECX, 2
je Block28
cmp ECX, 3
je Block34
cmp ECX, 4
je Block29
cmp ECX, 5
je Block30
cmp ECX, 6
je Block31
cmp ECX, 7
je Block32
cmp ECX, 8
je Block33


 Block26:
	push ebp
	push ebp
	mov ecx,edi
	call CLogin::GotoTitle
	push ebp
	push 0x1C
	call CLoginUtilDlg::Error
	add esp,8
	jmp Block36

 Block27:
	push ebp
	push ebp
	mov ecx,edi
	call CLogin::GotoTitle
	push ebp
	push 0x1D
	call CLoginUtilDlg::Error
	add esp,8
	jmp Block36

 Block28:
	push ebp
	push ebp
	mov ecx,edi
	call CLogin::GotoTitle
	push ebp
	push 0x1E
	call CLoginUtilDlg::Error
	add esp,8
	jmp Block36

 Block29:
	push ebp
	push ebp
	mov ecx,edi
	call CLogin::GotoTitle
	push ebp
	push 0x19
	call CLoginUtilDlg::Error
	add esp,8
	jmp Block36

 Block30:
	push ebp
	push ebp
	mov ecx,edi
	call CLogin::GotoTitle
	push ebp
	push 0x1F
	call CLoginUtilDlg::Error
	add esp,8
	jmp Block36

 Block31:
	push ebp
	push ebp
	mov ecx,edi
	call CLogin::GotoTitle
	push ebp
	push 0x38
	call CLoginUtilDlg::Error
	add esp,8
	jmp Block36

 Block32:
	push ebp
	push ebp
	mov ecx,edi
	call CLogin::GotoTitle
	push ebp
	push 0x3E
	call CLoginUtilDlg::Error
	add esp,8
	jmp Block36

 Block33:
	push ebp
	push 0xF
	call CLoginUtilDlg::Error
	add esp,8
	jmp Block36

 Block34:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov ebp,eax
	call CInPacket::Decode2
	mov ecx,esi
	movzx ebx,ax
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [esp+0x18],eax
	call CInPacket::Decode1
	mov ecx,esi
	mov byte ptr [esp+0x17],al
	call CInPacket::Decode4
	push 0
	mov esi,eax
	call dword ptr [ZImports::_htonl]
	push ebx
	call dword ptr [ZImports::_htons]
	movzx ecx,ax
	xor eax,eax
	mov dword ptr [esp+0x28],eax
	mov word ptr [esp+0x2A],cx
	movzx ecx,byte ptr [esp+0x17]
	mov dword ptr [esp+0x2C],eax
	shr ecx,1
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x34],eax
	mov eax,dword ptr [esp+0x18]
	mov edx,2
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x2C],ebp
	and ecx,1
	lea edx,[esp+0x28]
	mov dword ptr [edi+0x2064],ecx
	push edx
	mov ecx,edi
	mov dword ptr [edi+0x20B4],eax
	mov dword ptr [edi+0x2068],esi
	call CWvsContext::IssueConnect
	lea eax,[esp+0x20]
	push 0x503
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [esp+0x4C],2
	call play_game_sound
	mov eax,dword ptr [esp+0x28]
	add esp,8
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block36:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov ecx,dword ptr [esp+0x24]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x34
	ret 4
}
}
// CLogin::SendRequest
__SUB_CLASS_THIS(001D1DC0, __thiscall, 53064,  CLogin, void, COutPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	push eax
	call CClientSocket::SendPacket
	mov dword ptr [esi+0x1AC],1
	pop esi
	ret 4
}
}
// CLogin::IsKindOf
__SUB_CLASS_THIS(001DB6C0, __thiscall, 53091,  CLogin, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CLogin::ms_RTTI_CLogin
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
// CLogin::WORLDITEM::~WORLDITEM
_SUB_EXCEPTION_HANDLER(1D7F70)
__SUB_CLASS_THIS0(001D7F70, __thiscall, 53127,  CLogin::WORLDITEM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D7F70
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
	lea ecx,[esi+0x1C]
	mov dword ptr [esp+0x14],1
	call ZArray<CLogin::CHANNELITEM>::RemoveAll
	mov eax,dword ptr [esi+0xC]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [esi+4]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block4

 Block3:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CLogin::BALLOON::~BALLOON
__SUB_CLASS_THIS0(001D4480, __thiscall, 53144,  CLogin::BALLOON, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+8]
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
// CLogin::SendDeleteCharPacket
_SUB_EXCEPTION_HANDLER(1D53A0)
__SUB_CLASS_THIS0(001D53A0, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D53A0
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
	cmp dword ptr [esi+0x1AC],0
	jne Block34

 Block1:
	mov eax,dword ptr [esi+0x1D0]
	test eax,eax
	jl Block34

 Block2:
	cmp eax,0xF
	jge Block34

 Block3:
	mov ecx,dword ptr [esi+0x1D4]
	imul eax,0x2FE
	cmp dword ptr [eax+ecx],0
	je Block34

 Block4:
	xor eax,eax
	cmp byte ptr [esi+0x1B0],1
	sete al
	test eax,eax
	jne Block6

 Block5:
	add esi,0x220
	push esi
	push 0x5E
	call CLoginUtilDlg::Notice
	add esp,8
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret

 Block6:
	push 0xC74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x3C],0
	test eax,eax
	je Block13

 Block7:
	push 0x10
	push 6
	mov ecx,eax
	call CSoftKeyboardDlg::_ctor_0
	test eax,eax
	je Block13

 Block8:
	lea edi,[eax+8]
	test edi,edi
	je Block13

 Block9:
	add edi,0xFFFFFFF8
	mov dword ptr [esp+0x20],edi
	test edi,edi
	je Block11

 Block10:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	lea ebx,[esi+0x220]
	push edi
	mov ecx,ebx
	mov dword ptr [esp+0x40],1
	call ZRef<CDialog>::op_assign_ptr
	mov ecx,edi
	call CDialog::DoModal
	cmp eax,1
	je Block14

 Block12:
	push 0
	mov ecx,ebx
	call ZRef<CDialog>::op_assign_zero
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	jmp Block33

 Block13:
	xor edi,edi
	mov dword ptr [esp+0x20],edi
	jmp Block11

 Block14:
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call CSoftKeyboardDlg::GetResult
	push 0
	mov ecx,ebx
	mov byte ptr [esp+0x40],2
	call ZRef<CDialog>::op_assign_zero
	mov ecx,dword ptr [esi+0x1D0]
	imul ecx,0x2FE
	add ecx,dword ptr [esi+0x1D4]
	call GW_CharacterStat::_ZtlSecureGet_nJob
	mov edi,dword ptr [esi+0x1D0]
	mov edx,dword ptr [esi+0x1D4]
	mov ecx,edi
	imul ecx,0x2FE
	movsx ebp,ax
	movzx eax,word ptr [ecx+edx+0xF7]
	push ebp
	mov dword ptr [esp+0x1C],eax
	call is_cygnus_job
	add esp,4
	test eax,eax
	jne Block19

 Block15:
	push ebp
	call is_third_job
	add esp,4
	test eax,eax
	jne Block19

 Block16:
	push ebp
	call is_resistance_job
	add esp,4
	test eax,eax
	jne Block19

 Block17:
	cmp word ptr [esp+0x18],ax
	jg Block19

 Block18:
	mov ecx,dword ptr [esi+0x1DC]
	mov eax,dword ptr [ecx+edi*4]
	neg eax
	sbb eax,eax
	and eax,0x2C
	add eax,0xD
	jmp Block20

 Block19:
	mov edx,dword ptr [esi+0x1DC]
	mov eax,dword ptr [edx+edi*4]
	neg eax
	sbb eax,eax
	and eax,3
	add eax,0x37

 Block20:
	push ebx
	push eax
	call CLoginUtilDlg::YesNo
	add esp,8
	test eax,eax
	jne Block24

 Block21:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x3C],1
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	jmp Block33

 Block24:
	push 0x18
	lea ecx,[esp+0x28]
	call COutPacket::_ctor_1
	push ecx
	lea eax,[esp+0x18]
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov byte ptr [esp+0x44],3
	call ZXString<char>::_ctor_copy
	lea ecx,[esp+0x28]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [esi+0x1D0]
	mov edx,dword ptr [esi+0x1D4]
	imul ecx,0x2FE
	mov eax,dword ptr [ecx+edx]
	push eax
	lea ecx,[esp+0x28]
	call COutPacket::Encode4
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,esi
	call CLogin::SendRequest
	xor ebx,ebx
	or edi,0xFFFFFFFF
	cmp dword ptr [TSingleton<CUIAvatar>::ms_pInstance],ebx
	je Block26

 Block25:
	mov dword ptr [esi+0x1D0],edi
	mov ecx,dword ptr [TSingleton<CUIAvatar>::ms_pInstance]
	push edi
	call CUIAvatar::SelectCharacter

 Block26:
	mov eax,dword ptr [esi+0x1F8]
	cmp eax,ebx
	je Block28

 Block27:
	mov dword ptr [esi+0x1F8],ebx
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block28:
	mov eax,dword ptr [esi+0x1FC]
	cmp eax,ebx
	je Block30

 Block29:
	mov dword ptr [esi+0x1FC],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x3C],2
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x3C],1
	cmp eax,ebx
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	mov dword ptr [esp+0x3C],edi

 Block33:
	lea ecx,[esp+0x1C]
	call ZRef<CSoftKeyboardDlg>::~ZRef<CSoftKeyboardDlg>

 Block34:
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
// CLogin::GetEventCharacterID
__SUB_CLASS_THIS0(001D5130, __thiscall, 53054,  CLogin, ZXString<char>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	add ecx,0x270
	push ecx
	mov ecx,esi
	mov dword ptr [esp+8],0
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CLogin::GetBalloonInfo
__SUB_CLASS_THIS0(00207370, __thiscall, 53056,  CLogin, ZArray<CLogin::BALLOON>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	add ecx,0x230
	push ecx
	mov ecx,esi
	mov dword ptr [esp+8],0
	mov dword ptr [esi],0
	call ZArray<CLogin::BALLOON>::operator=
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CLogin::GetCharSelected
__SUB_CLASS_THIS0(001D1C30, __thiscall, 53047,  CLogin, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x240]
	cmp eax,4
	ja Block7

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5
cmp EAX, 4
je Block6


 Block2:
	mov eax,4
	ret

 Block3:
	mov eax,1
	ret

 Block4:
	xor eax,eax
	ret

 Block5:
	mov eax,3
	ret

 Block6:
	mov eax,2

 Block7:
	ret
}
}
// CLogin::GetLocalMacAddressWithHDDSerialNo
_SUB_EXCEPTION_HANDLER(1D62D0)
__SUB_CLASS_THIS(001D62D0, __thiscall, 53089,  CLogin, void, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D62D0
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,0x2EB0
	call __chkstk
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x2EAC],eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2EC4]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x2ED4]
	mov dword ptr [esp+0x24],eax
	xor eax,eax
	mov byte ptr [esp+0x28B0],0
	mov dword ptr [esp+0x28B1],eax
	mov dword ptr [esp+0x28B5],eax
	mov dword ptr [esp+0x28B9],eax
	mov word ptr [esp+0x28BD],ax
	mov byte ptr [esp+0x28BF],al
	mov dword ptr [esp+0x1C],0x2880
	mov dword ptr [esp+0x18],eax
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x34]
	push edx
	mov dword ptr [esp+0x2ED4],eax
	call _GetAdaptersInfo
	lea eax,[esp+0x30]
	mov edi,edi

 Block1:
	cmp dword ptr [eax+0x1A0],6
	jne Block17

 Block2:
	mov cl,byte ptr [eax+0x194]
	lea esi,[eax+0x194]
	mov ebx,1
	mov byte ptr [esp+0x17],cl
	cmp cl,0x44
	jne Block9

 Block3:
	cmp byte ptr [eax+0x195],0x45
	jne Block9

 Block4:
	cmp byte ptr [eax+0x196],0x53
	jne Block9

 Block5:
	cmp byte ptr [eax+0x197],0x54
	jne Block9

 Block6:
	cmp byte ptr [eax+0x198],0
	jne Block9

 Block7:
	cmp byte ptr [eax+0x199],0
	jne Block9

 Block8:
	xor ebx,ebx

 Block9:
	mov ebp,0xFFFFFE6C
	lea edi,[esp+0x28B0]
	sub ebp,eax

 Block10:
	test ebx,ebx
	je Block17

 Block11:
	mov cl,byte ptr [esi]
	mov dl,byte ptr [edi]
	cmp cl,dl
	ja Block15

 Block12:
	jae Block14

 Block13:
	xor ebx,ebx

 Block14:
	inc esi
	lea ecx,[esi+ebp]
	inc edi
	cmp ecx,6
	jl Block10

 Block15:
	test ebx,ebx
	je Block17

 Block16:
	movzx edx,byte ptr [esp+0x17]
	movzx ecx,byte ptr [eax+0x195]
	mov byte ptr [esp+0x28B0],dl
	movzx edx,byte ptr [eax+0x196]
	mov byte ptr [esp+0x28B1],cl
	movzx ecx,byte ptr [eax+0x197]
	mov byte ptr [esp+0x28B2],dl
	movzx edx,byte ptr [eax+0x198]
	mov byte ptr [esp+0x28B3],cl
	movzx ecx,byte ptr [eax+0x199]
	mov byte ptr [esp+0x28B4],dl
	mov byte ptr [esp+0x28B5],cl

 Block17:
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block1

 Block18:
	push 0x200
	lea edx,[esp+0x28C4]
	push edx
	call dword ptr [ZImports::_GetWindowsDirectoryA]
	push 0x200
	lea eax,[esp+0x2CC4]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x30]
	push eax
	push 0x200
	lea ecx,[esp+0x2AD8]
	push ecx
	lea edx,[esp+0x28DC]
	push edx
	mov byte ptr [esp+0x28E3],0
	call dword ptr [ZImports::_GetVolumeInformationA]
	cmp eax,1
	jne Block20

 Block19:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x28B6],eax
	jmp Block21

 Block20:
	mov eax,dword ptr [esp+0x28B6]

 Block21:
	mov ecx,eax
	mov edx,eax
	shr ecx,0x18
	push ecx
	shr edx,0x10
	movzx ecx,dl
	push ecx
	movzx ecx,byte ptr [esp+0x28BD]
	shr eax,8
	movzx edx,al
	movzx eax,byte ptr [esp+0x28BE]
	push edx
	movzx edx,byte ptr [esp+0x28C0]
	push eax
	movzx eax,byte ptr [esp+0x28C3]
	push ecx
	movzx ecx,byte ptr [esp+0x28C6]
	push edx
	movzx edx,byte ptr [esp+0x28C9]
	push eax
	movzx eax,byte ptr [esp+0x28CC]
	push ecx
	push edx
	push eax
	lea ecx,[esp+0x40]
	push offset _S_02X02X02X02X02X0__1
	push ecx
	call ZXString<char>::Format
	mov ecx,dword ptr [esp+0x54]
	add esp,0x30
	lea edx,[esp+0x18]
	push edx
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x2ECC],0xFFFFFFFF
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov ecx,dword ptr [esp+0x2EC4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov ecx,dword ptr [esp+0x2EAC]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x2EBC
	ret 4
}
}
// CLogin::OnPacket
__SUB_CLASS_THIS(001DF940, __thiscall, 53037,  INetMsgHandler, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x1B
	ja Block24

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block4
cmp EAX, 2
je Block5
cmp EAX, 3
je Block6
cmp EAX, 4
je Block7
cmp EAX, 5
je Block8
cmp EAX, 6
je Block9
cmp EAX, 7
je Block10
cmp EAX, 8
je Block11
cmp EAX, 9
je Block12
cmp EAX, 10
je Block13
cmp EAX, 11
je Block14
cmp EAX, 12
je Block18
cmp EAX, 13
je Block15
cmp EAX, 14
je Block17
cmp EAX, 15
je Block16
cmp EAX, 16
je Block24
cmp EAX, 17
je Block24
cmp EAX, 18
je Block24
cmp EAX, 19
je Block24
cmp EAX, 20
je Block24
cmp EAX, 21
je Block19
cmp EAX, 22
je Block24
cmp EAX, 23
je Block24
cmp EAX, 24
je Block21
cmp EAX, 25
je Block22
cmp EAX, 26
je Block23
cmp EAX, 27
je Block20


 Block2:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CLogin::OnCheckPasswordResult

 Block3:
	ret 8

 Block4:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CLogin::OnGuestIDLoginResult
	ret 8

 Block5:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CLogin::OnAccountInfoResult
	ret 8

 Block6:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CLogin::OnCheckUserLimitResult
	ret 8

 Block7:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CLogin::OnSetAccountResult
	ret 8

 Block8:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CLogin::OnConfirmEULAResult
	ret 8

 Block9:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CLogin::OnCheckPinCodeResult
	ret 8

 Block10:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CLogin::OnUpdatePinCodeResult
	ret 8

 Block11:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CLogin::OnViewAllCharResult
	ret 8

 Block12:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CLogin::OnSelectCharacterByVACResult
	ret 8

 Block13:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CLogin::OnWorldInformation
	ret 8

 Block14:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CLogin::OnSelectWorldResult
	ret 8

 Block15:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CLogin::OnCheckDuplicatedIDResult
	ret 8

 Block16:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CLogin::OnDeleteCharacterResult
	ret 8

 Block17:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CLogin::OnCreateNewCharacterResult
	ret 8

 Block18:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CLogin::OnSelectCharacterResult
	ret 8

 Block19:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CLogin::OnEnableSPWResult
	ret 8

 Block20:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CLogin::OnCheckSPWResult
	ret 8

 Block21:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CLogin::OnLatestConnectedWorld
	ret 8

 Block22:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CLogin::OnRecommendWorldMessage
	ret 8

 Block23:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CLogin::OnExtraCharInfoResult
	ret 8

 Block24:
	lea edx,[eax-0x8D]
	cmp edx,2
	ja Block26

 Block25:
	mov dword ptr [esp+4],eax
	jmp  CStage::OnPacket

 Block26:
	lea edx,[eax-0x90]
	cmp edx,2
	ja Block3

 Block27:
	mov dword ptr [esp+4],eax
	jmp  CMapLoadable::OnPacket
}
}
// CLogin::CloseChannelSelect
__SUB_CLASS_THIS0(001D1E80, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance]
	test ecx,ecx
	je Block2

 Block1:
	push 0
	call CFadeWnd::Close

 Block2:
	mov ecx,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	test ecx,ecx
	je Block7

 Block3:
	push 0xFFFFFFFF
	call CUIWorldSelect::EnableButtons
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test ecx,ecx
	je Block7

 Block4:
	mov eax,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	test eax,eax
	je Block6

 Block5:
	add eax,4
	push eax
	call CWndMan::SetFocus
	ret

 Block6:
	xor eax,eax
	push eax
	call CWndMan::SetFocus

 Block7:
	ret
}
}
// CLogin::OnSelectCharacterResult
_SUB_EXCEPTION_HANDLER(1DEA80)
// 5DEE10
static uint8_t _SUB_1DEA80_LOOKUP_TABLE_0[28] = {
0, 13, 13, 1, 1, 2, 3, 0, 4, 0, 0, 5, 6, 13, 7, 8, 
9, 10, 11, 13, 13, 13, 10, 13, 13, 13, 12, 144, 
};
// 5DEE50
static uint8_t _SUB_1DEA80_LOOKUP_TABLE_1[28] = {
0, 1, 2, 8, 8, 8, 8, 8, 8, 8, 3, 8, 3, 8, 8, 8, 
8, 8, 4, 8, 8, 8, 8, 8, 5, 8, 6, 7, 
};
__SUB_CLASS_THIS(001DEA80, __thiscall, 53076,  CLogin, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1DEA80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x24],eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x4C]
	mov edi,ecx
	xor ebp,ebp
	mov ecx,esi
	mov dword ptr [edi+0x1AC],ebp
	call CInPacket::Decode1
	mov ecx,esi
	movzx ebx,al
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esp+0x18],eax
	lea eax,[ebx+1]
	cmp eax,0x1A
	ja Block20

 Block1:
	movzx ecx,byte ptr [eax+_SUB_1DEA80_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block2
cmp ECX, 1
je Block3
cmp ECX, 2
je Block6
cmp ECX, 3
je Block5
cmp ECX, 4
je Block7
cmp ECX, 5
je Block8
cmp ECX, 6
je Block9
cmp ECX, 7
je Block4
cmp ECX, 8
je Block10
cmp ECX, 9
je Block13
cmp ECX, 10
je Block16
cmp ECX, 11
je Block17
cmp ECX, 12
je Block18
cmp ECX, 13
je Block20


 Block2:
	push ebp
	push 0xF
	jmp Block19

 Block3:
	push ebp
	push 0x10
	jmp Block19

 Block4:
	push ebp
	push 0x15
	jmp Block19

 Block5:
	push ebp
	push 0x14
	jmp Block19

 Block6:
	push ebp
	push 3
	jmp Block19

 Block7:
	push ebp
	push ebp
	mov ecx,edi
	call CLogin::GotoTitle
	push ebp
	push 0x11
	jmp Block19

 Block8:
	push ebp
	push 0x13
	jmp Block19

 Block9:
	push ebp
	push 0xE
	jmp Block19

 Block10:
	push 0x1B
	call CLoginUtilDlg::YesNo2
	add esp,4
	test eax,eax
	je Block20

 Block11:
	lea edx,[esp+0x24]
	push 0xB6C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push eax
	mov dword ptr [esp+0x4C],ebp
	call open_web_site
	mov eax,dword ptr [esp+0x2C]
	add esp,8
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp eax,ebp
	je Block20

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block20

 Block13:
	push 0x1A
	call CLoginUtilDlg::YesNo2
	add esp,4
	test eax,eax
	je Block20

 Block14:
	lea eax,[esp+0x1C]
	push 0xB6C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push eax
	mov dword ptr [esp+0x4C],1
	call open_web_site
	mov eax,dword ptr [esp+0x24]
	add esp,8
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp eax,ebp
	je Block20

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block20

 Block16:
	push ebp
	push 0x21
	jmp Block19

 Block17:
	push ebp
	push 0x1B
	jmp Block19

 Block18:
	push ebp
	push 0x28

 Block19:
	call CLoginUtilDlg::Error
	add esp,8

 Block20:
	cmp ebx,ebp
	je Block23

 Block21:
	cmp ebx,0xC
	je Block24

 Block22:
	cmp ebx,0x17
	jne Block37

 Block23:
	cmp ebx,0xC
	jne Block34

 Block24:
	mov eax,dword ptr [esp+0x18]
	dec eax
	cmp eax,0x1B
	ja Block33

 Block25:
	movzx ecx,byte ptr [eax+_SUB_1DEA80_LOOKUP_TABLE_1]
	cmp ECX, 0
je Block26
cmp ECX, 1
je Block27
cmp ECX, 2
je Block28
cmp ECX, 3
je Block34
cmp ECX, 4
je Block29
cmp ECX, 5
je Block30
cmp ECX, 6
je Block31
cmp ECX, 7
je Block32
cmp ECX, 8
je Block33


 Block26:
	push ebp
	push ebp
	mov ecx,edi
	call CLogin::GotoTitle
	push ebp
	push 0x1C
	call CLoginUtilDlg::Error
	add esp,8
	jmp Block37

 Block27:
	push ebp
	push ebp
	mov ecx,edi
	call CLogin::GotoTitle
	push ebp
	push 0x1D
	call CLoginUtilDlg::Error
	add esp,8
	jmp Block37

 Block28:
	push ebp
	push ebp
	mov ecx,edi
	call CLogin::GotoTitle
	push ebp
	push 0x1E
	call CLoginUtilDlg::Error
	add esp,8
	jmp Block37

 Block29:
	push ebp
	push ebp
	mov ecx,edi
	call CLogin::GotoTitle
	push ebp
	push 0x19
	call CLoginUtilDlg::Error
	add esp,8
	jmp Block37

 Block30:
	push ebp
	push ebp
	mov ecx,edi
	call CLogin::GotoTitle
	push ebp
	push 0x1F
	call CLoginUtilDlg::Error
	add esp,8
	jmp Block37

 Block31:
	push ebp
	push ebp
	mov ecx,edi
	call CLogin::GotoTitle
	push ebp
	push 0x38
	call CLoginUtilDlg::Error
	add esp,8
	jmp Block37

 Block32:
	push ebp
	push ebp
	mov ecx,edi
	call CLogin::GotoTitle
	push ebp
	push 0x3E
	call CLoginUtilDlg::Error
	add esp,8
	jmp Block37

 Block33:
	push ebp
	push 0xF
	call CLoginUtilDlg::Error
	add esp,8
	jmp Block37

 Block34:
	cmp ebx,0x22
	je Block37

 Block35:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov ebp,eax
	call CInPacket::Decode2
	mov ecx,esi
	movzx ebx,ax
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [esp+0x18],eax
	call CInPacket::Decode1
	mov ecx,esi
	mov byte ptr [esp+0x17],al
	call CInPacket::Decode4
	movzx edx,bx
	push edx
	lea ecx,[esp+0x2C]
	mov esi,eax
	call ZInetAddr::_ctor_0
	movzx ecx,byte ptr [esp+0x17]
	mov eax,dword ptr [esp+0x18]
	shr ecx,1
	mov dword ptr [esp+0x2C],ebp
	and ecx,1
	lea edx,[esp+0x28]
	mov dword ptr [edi+0x2064],ecx
	push edx
	mov ecx,edi
	mov dword ptr [edi+0x20B4],eax
	mov dword ptr [edi+0x2068],esi
	call CWvsContext::IssueConnect
	lea eax,[esp+0x20]
	push 0x503
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [esp+0x4C],2
	call play_game_sound
	mov eax,dword ptr [esp+0x28]
	add esp,8
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block37:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov ecx,dword ptr [esp+0x24]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x34
	ret 4
}
}
// CLogin::OnEnableSPWResult
// 5D23D8
static uint8_t _SUB_1D2290_LOOKUP_TABLE_0[24] = {
0, 5, 5, 5, 5, 5, 1, 5, 5, 1, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 2, 5, 3, 4, 
};
__SUB_CLASS_THIS(001D2290, __thiscall, 53076,  CLogin, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	mov esi,ecx
	push edi
	mov ecx,ebx
	call CInPacket::Decode1
	mov ecx,ebx
	movzx edi,al
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,0x17
	ja Block19

 Block1:
	movzx eax,byte ptr [eax+_SUB_1D2290_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block17
cmp EAX, 2
je Block14
cmp EAX, 3
je Block15
cmp EAX, 4
je Block16
cmp EAX, 5
je Block19


 Block2:
	test edi,edi
	je Block4

 Block3:
	lea ecx,[esi+0x220]
	push ecx
	push 0x27
	jmp Block5

 Block4:
	lea edx,[esi+0x220]
	push edx
	push 0x28

 Block5:
	call CLoginUtilDlg::Notice
	add esp,8
	test edi,edi
	sete al
	inc al
	mov byte ptr [esi+0x1B0],al
	cmp al,2
	jne Block7

 Block6:
	mov eax,4
	jmp Block8

 Block7:
	xor ecx,ecx
	cmp al,1
	setne cl
	dec ecx
	and ecx,8
	mov eax,ecx

 Block8:
	mov edx,dword ptr [esi+0x1A4]
	mov ecx,dword ptr [esi+0x1C0]
	cmp edx,ecx
	jle Block10

 Block9:
	mov ecx,dword ptr [esi+0x20C]
	or eax,1
	push eax
	call CUILoginStart::SetButton
	pop edi
	mov dword ptr [esi+0x1AC],0
	pop esi
	pop ebx
	ret 4

 Block10:
	cmp ecx,1
	jne Block13

 Block11:
	cmp edx,ecx
	jne Block13

 Block12:
	mov ecx,dword ptr [esi+0x20C]
	or eax,2
	push eax
	call CUILoginStart::SetButton
	pop edi
	mov dword ptr [esi+0x1AC],0
	pop esi
	pop ebx
	ret 4

 Block13:
	mov ecx,dword ptr [esi+0x20C]
	push 0
	call CUILoginStart::SetButton
	pop edi
	mov dword ptr [esi+0x1AC],0
	pop esi
	pop ebx
	ret 4

 Block14:
	lea edx,[esi+0x220]
	push edx
	push 0x5D
	jmp Block18

 Block15:
	lea eax,[esi+0x220]
	push eax
	push 0x5B
	jmp Block18

 Block16:
	lea ecx,[esi+0x220]
	push ecx
	push 0x5C
	jmp Block18

 Block17:
	lea edx,[esi+0x220]
	push edx
	push 0x12

 Block18:
	call CLoginUtilDlg::Error
	add esp,8

 Block19:
	pop edi
	mov dword ptr [esi+0x1AC],0
	pop esi
	pop ebx
	ret 4
}
}
// AvatarData::AvatarData
__SUB_CLASS_THIS0(001D4870, __thiscall, 115879,  AvatarData, void) {
__asm {

 Block0:
	push ebx
	xor ebx,ebx
	push esi
	mov esi,ecx
	int 3// TODO: 	mov dword ptr [esi+0xCD],offset ZList<SPSet>::`vftable'
	mov dword ptr [esi+0xD5],ebx
	mov dword ptr [esi+0xD9],ebx
	mov dword ptr [esi+0xDD],ebx
	xor eax,eax
	mov dword ptr [esi+0xFD],eax
	mov dword ptr [esi+0x101],eax
	push 0xF0
	lea eax,[esi+0x112]
	push ebx
	push eax
	int 3// TODO: 	mov dword ptr [esi+0xF9],offset AvatarLook::`vftable'
	mov byte ptr [esi+0x105],bl
	mov dword ptr [esi+0x106],ebx
	mov dword ptr [esi+0x10A],ebx
	mov dword ptr [esi+0x10E],ebx
	call _memset
	xor eax,eax
	mov dword ptr [esi+0x2F2],eax
	mov dword ptr [esi+0x2F6],eax
	add esp,0xC
	mov dword ptr [esi+0x2FA],eax
	mov eax,esi
	pop esi
	pop ebx
	ret
}
}
// CLogin::OnCheckSPWResult
__SUB_CLASS_THIS(001D23F0, __thiscall, 53076,  CLogin, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode1
	lea eax,[esi+0x220]
	push eax
	push 0x5D
	call CLoginUtilDlg::Error
	add esp,8
	mov dword ptr [esi+0x1AC],0
	pop esi
	ret 4
}
}
// CLogin::ASITEM::~ASITEM
__SUB_CLASS_THIS0(001D4760, __thiscall, 53635,  CLogin::ASITEM, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+4]
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
// CLogin::CLogin
// CLogin::LoadNewCharInfo
_SUB_EXCEPTION_HANDLER(1D5880)
__SUB_CLASS_THIS0(001D5880, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D5880
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x70],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [ebp+0x58],edi
	xor ebx,ebx
	xor esi,esi
	mov dword ptr [ebp+0x64],ebx
	mov dword ptr [ebp-4],esi
	mov dword ptr [ebp+0x68],esi
	lea ecx,[edi+0x1E0]
	mov byte ptr [ebp-4],1
	call ZList<CLogin::NEWEQUIP>::RemoveAll
	xor ecx,ecx
	mov dword ptr [ebp+0x5C],ecx
	jmp Block4

 Block3:
	mov ebx,dword ptr [ebp+0x64]
	mov edi,dword ptr [ebp+0x58]
	mov ecx,dword ptr [ebp+0x5C]

 Block4:
	mov dword ptr [ebp+0x6C],0
	mov eax,dword ptr [edi+0x240]
	sub eax,0
	mov byte ptr [ebp-4],2
	je Block16

 Block5:
	sub eax,3
	je Block13

 Block6:
	sub eax,1
	je Block10

 Block7:
	test ecx,ecx
	jne Block9

 Block8:
	lea eax,[ebp+0x40]
	push 0x5F5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push offset _S___3
	push eax
	lea ecx,[ebp+0x6C]
	push ecx
	mov byte ptr [ebp-4],9
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x40]
	jmp Block19

 Block9:
	lea edx,[ebp+0x3C]
	push 0x5F6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push offset _S___3
	push eax
	lea eax,[ebp+0x6C]
	push eax
	mov byte ptr [ebp-4],0xA
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x3C]
	jmp Block19

 Block10:
	test ecx,ecx
	jne Block12

 Block11:
	lea ecx,[ebp+0x48]
	push 0x5F1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push offset _S_EVAN
	push eax
	lea edx,[ebp+0x6C]
	push edx
	mov byte ptr [ebp-4],5
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x48]
	jmp Block19

 Block12:
	lea eax,[ebp+0x38]
	push 0x5F2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push offset _S_EVAN
	push eax
	lea ecx,[ebp+0x6C]
	push ecx
	mov byte ptr [ebp-4],6
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x38]
	jmp Block19

 Block13:
	test ecx,ecx
	jne Block15

 Block14:
	lea edx,[ebp+0x54]
	push 0x5F1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push offset _S_ORIENT
	push eax
	lea eax,[ebp+0x6C]
	push eax
	mov byte ptr [ebp-4],3
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x54]
	jmp Block19

 Block15:
	lea ecx,[ebp+0x30]
	push 0x5F2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push offset _S_ORIENT
	push eax
	lea edx,[ebp+0x6C]
	push edx
	mov byte ptr [ebp-4],4
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x30]
	jmp Block19

 Block16:
	test ecx,ecx
	jne Block18

 Block17:
	lea eax,[ebp+0x34]
	push 0x5F1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push offset _S_RESISTANCE
	push eax
	lea ecx,[ebp+0x6C]
	push ecx
	mov byte ptr [ebp-4],7
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x34]
	jmp Block19

 Block18:
	lea edx,[ebp+0x50]
	push 0x5F2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push offset _S_RESISTANCE
	push eax
	lea eax,[ebp+0x6C]
	push eax
	mov byte ptr [ebp-4],8
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x50]

 Block19:
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block21:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x10]
	push ecx
	call edi
	lea edx,[ebp+0x10]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block74

 Block22:
	lea eax,[ebp+0x20]
	push eax
	mov byte ptr [ebp-4],0xB
	call edi
	lea ecx,[ebp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block74

 Block23:
	push 0
	push 0
	lea edx,[ebp+0x10]
	push edx
	mov edx,dword ptr [ebp+0x6C]
	lea eax,[ebp+0x20]
	push eax
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0xC
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xD
	je Block75

 Block24:
	lea eax,[ebp]
	mov byte ptr [ebp-4],0xC
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xE
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block32

 Block25:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x4C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [ebp+0x64]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x4C]
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block27:
	mov dword ptr [ebp+0x64],ebx
	test edi,edi
	jge Block29

 Block28:
	cmp edi,0x80004002
	jne Block76

 Block29:
	mov edi,8
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp],di
	jne Block35

 Block30:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block36

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block32:
	test ebx,ebx
	je Block29

 Block33:
	mov eax,ebx
	mov dword ptr [ebp+0x64],0
	test eax,eax
	je Block29

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block29

 Block35:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x20],di
	jne Block39

 Block37:
	mov eax,dword ptr [ebp+0x28]
	xor edx,edx
	mov word ptr [ebp+0x20],dx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[ebp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp+0x10],di
	jne Block43

 Block41:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	xor ebx,ebx

 Block45:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0xF
	test ecx,ecx
	je Block75

 Block46:
	lea eax,[ebp-0x1C]
	push eax
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block55

 Block47:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x44]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov edi,eax
	mov eax,dword ptr [ebp+0x68]
	test edi,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x44]
	mov esi,ecx
	test eax,eax
	je Block49

 Block48:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block49:
	mov dword ptr [ebp+0x68],esi
	test edi,edi
	jge Block51

 Block50:
	cmp edi,0x80004002
	jne Block76

 Block51:
	mov esi,dword ptr [ebp+0x68]

 Block52:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],2
	jne Block58

 Block53:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block59

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block55:
	test esi,esi
	je Block52

 Block56:
	mov eax,esi
	mov dword ptr [ebp+0x68],0
	test eax,eax
	je Block51

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block51

 Block58:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	xor edi,edi

 Block60:
	test esi,esi
	je Block75

 Block61:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x60]
	push eax
	push esi
	mov dword ptr [ebp+0x60],0
	call ecx
	test eax,eax
	jge Block63

 Block62:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block63:
	cmp edi,dword ptr [ebp+0x60]
	jae Block69

 Block64:
	mov ecx,dword ptr [ebp+0x58]
	add ecx,0x1E0
	call ZList<CLogin::NEWEQUIP>::AddTail_
	mov edx,dword ptr [ebp+0x5C]
	mov esi,eax
	mov eax,0x20
	mov dword ptr [esi],edx
	mov dword ptr [esi+4],ebx
	call __chkstk
	mov eax,esp
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x68]
	lea eax,[ebp-0x2C]
	mov byte ptr [ebp-4],0x11
	push eax
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x12
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x2C],8
	mov dword ptr [esi+8],eax
	mov byte ptr [ebp-4],2
	jne Block67

 Block65:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov esi,dword ptr [ebp+0x68]
	inc edi
	jmp Block60

 Block67:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov esi,dword ptr [ebp+0x68]
	inc edi
	jmp Block60

 Block69:
	inc ebx
	cmp ebx,8
	jl Block45

 Block70:
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block72:
	mov eax,dword ptr [ebp+0x5C]
	inc eax
	cmp eax,2
	mov dword ptr [ebp+0x5C],eax
	jl Block3

 Block73:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0
	call ecx
	mov eax,dword ptr [ebp+0x64]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call eax
	lea esp,[ebp-0x3C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x70]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x74
	mov esp,ebp
	pop ebp
	ret

 Block74:
	push eax
	call _com_issue_error

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	push edi
	call _com_issue_error
}
}
// CLogin::OnSelectedCharChanged
_SUB_EXCEPTION_HANDLER(1D3DA0)
__SUB_CLASS_THIS(001D3DA0, __thiscall, 53038,  CLogin, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D3DA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov esi,dword ptr [esp+0x50]
	xor ebx,ebx
	cmp esi,ebx
	jge Block5

 Block1:
	mov eax,dword ptr [edi+0x1FC]
	cmp eax,ebx
	je Block3

 Block2:
	mov dword ptr [edi+0x1FC],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	mov eax,dword ptr [edi+0x1F8]
	cmp eax,ebx
	je Block78

 Block4:
	mov dword ptr [edi+0x1F8],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block78

 Block5:
	cmp dword ptr [edi+0x1A4],5
	je Block54

 Block6:
	push ebx
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax],ebx
	mov dword ptr [esp+0x58],ebx
	call get_adjust_cy
	mov ecx,0xFFFFFED4
	sub ecx,eax
	mov eax,0x55555556
	imul esi
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*2]
	sub esi,edx
	imul esi,0x7D
	push ecx
	mov ecx,dword ptr [_D_G_GR]
	lea ebp,[esi-0x8C]
	push ebp
	cmp ecx,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push eax
	call IWzGr2D::Getcenter
	lea ecx,[esp+0x30]
	push 0x54C
	push ecx
	mov byte ptr [esp+0x6C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x64],2
	push ebx
	push eax
	lea edx,[esp+0x74]
	push edx
	mov byte ptr [esp+0x70],3
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x1FC]
	add esp,0x28
	cmp esi,eax
	je Block13

 Block9:
	mov dword ptr [edi+0x1FC],eax
	cmp eax,ebx
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block11:
	cmp esi,ebx
	je Block13

 Block12:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block13:
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebx
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block15:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block17:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push ecx
	call esi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	lea eax,[esp+0x20]
	mov ebx,4
	push eax
	mov dword ptr [esp+0x4C],ebx
	call esi
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	mov ecx,dword ptr [edi+0x1FC]
	mov byte ptr [esp+0x48],5
	test ecx,ecx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x20],si
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp word ptr [esp+0x30],si
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	push 0
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [eax],0
	mov dword ptr [esp+0x58],6
	call get_adjust_cy
	mov ecx,dword ptr [_D_G_GR]
	mov edx,0xFFFFFED4
	sub edx,eax
	push edx
	push ebp
	test ecx,ecx
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push eax
	call IWzGr2D::Getcenter
	lea ecx,[esp+0x30]
	push 0x54D
	push ecx
	mov byte ptr [esp+0x6C],7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x64],8
	push 0
	push eax
	lea edx,[esp+0x74]
	push edx
	mov byte ptr [esp+0x70],9
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x1F8]
	add esp,0x28
	cmp esi,eax
	je Block38

 Block34:
	mov dword ptr [edi+0x1F8],eax
	test eax,eax
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block36:
	test esi,esi
	je Block38

 Block37:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block38:
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block40:
	mov eax,dword ptr [esp+0x14]
	or ebp,0xFFFFFFFF
	mov dword ptr [esp+0x48],ebp
	test eax,eax
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block42:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x20]
	push ecx
	call esi
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	lea eax,[esp+0x30]
	mov ebx,0xA
	push eax
	mov dword ptr [esp+0x4C],ebx
	call esi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	mov ecx,dword ptr [edi+0x1F8]
	mov byte ptr [esp+0x48],0xB
	test ecx,ecx
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x34]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x30],si
	jne Block51

 Block49:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov dword ptr [esp+0x48],ebp
	cmp word ptr [esp+0x20],si
	je Block73

 Block53:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block76

 Block54:
	mov eax,0x55555556
	imul esi
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*2]
	imul eax,0x75
	sub esi,edx
	imul esi,0x75
	sub eax,0x8C
	mov ebx,eax
	mov eax,dword ptr [edi+0x1FC]
	sub esi,0xC7
	test eax,eax
	je Block56

 Block55:
	mov dword ptr [edi+0x1FC],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block56:
	push 0
	push 0xFF
	push 0xA
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [eax],0
	mov ecx,dword ptr [_D_G_GR]
	push ebx
	mov dword ptr [esp+0x5C],0xC
	push esi
	test ecx,ecx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push eax
	call IWzGr2D::Getcenter
	lea ecx,[esp+0x30]
	push 0xFB7
	push ecx
	mov byte ptr [esp+0x6C],0xD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x64],0xE
	push 0
	push eax
	lea edx,[esp+0x74]
	push edx
	mov byte ptr [esp+0x70],0xF
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	lea esi,[edi+0x1F8]
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block60

 Block59:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block60:
	mov eax,dword ptr [esp+0x14]
	or ebp,0xFFFFFFFF
	mov dword ptr [esp+0x48],ebp
	test eax,eax
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block62:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x20]
	push eax
	call edi
	lea ecx,[esp+0x20]
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
	lea edx,[esp+0x30]
	mov ebx,0x10
	push edx
	mov dword ptr [esp+0x4C],ebx
	call edi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block66

 Block65:
	push eax
	call _com_issue_error

 Block66:
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x48],0x11
	test ecx,ecx
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x34]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x30],si
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea edx,[esp+0x30]
	push edx
	call edi

 Block72:
	mov dword ptr [esp+0x48],ebp
	cmp word ptr [esp+0x20],si
	jne Block75

 Block73:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea ecx,[esp+0x20]
	push ecx
	call edi

 Block76:
	lea edx,[esp+0x18]
	push 0x4FD
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x4C],0x12
	call play_ui_sound
	mov eax,dword ptr [esp+0x1C]
	add esp,4
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block78

 Block77:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block78:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 4
}
}
// CLogin::SendLoginPacket
_SUB_EXCEPTION_HANDLER(1DBEF0)
// 5DC5E0
static uint8_t _SUB_1DBEF0_LOOKUP_TABLE_1[27] = {
0, 13, 13, 1, 1, 2, 3, 0, 4, 0, 0, 5, 6, 0, 7, 8, 
9, 10, 11, 13, 13, 13, 10, 13, 13, 13, 12, 
};
// 5DC580
static uint8_t _SUB_1DBEF0_LOOKUP_TABLE_0[40] = {
0, 11, 1, 2, 11, 11, 3, 4, 5, 5, 5, 11, 11, 11, 11, 6, 
11, 11, 11, 11, 11, 0, 11, 11, 11, 7, 6, 8, 8, 11, 1, 5, 
9, 9, 11, 11, 8, 10, 139, 255, 
};
__SUB_CLASS_THIS(001DBEF0, __thiscall, 53066,  CLogin, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1DBEF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x484
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x480],eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x498]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x34],esi
	cmp dword ptr [esi+0x1AC],ebx
	jne Block79

 Block1:
	jmp Block3

 Block3:
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x28],ebx
	push eax
	mov eax,0x2D9FB3D
	inc eax
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x34],4
	mov dword ptr [esp+0x2C],0x24210002
	pop eax
	jmp Block5

 Block5:
	mov edi,dword ptr [esp+0x4A8]
	xor eax,eax
	xor edx,edx
	jmp Block7

 Block7:
	mov ecx,dword ptr [esi+0x1CC]
	cmp ecx,ebx
	je Block79

 Block8:
	cmp eax,dword ptr [ecx-4]
	jae Block79

 Block9:
	cmp dword ptr [edx+ecx],edi
	je Block11

 Block10:
	inc eax
	add edx,0x20
	jmp Block7

 Block11:
	cmp eax,ebx
	jl Block79

 Block12:
	cmp ecx,ebx
	je Block79

 Block13:
	cmp eax,dword ptr [ecx-4]
	jae Block79

 Block14:
	mov ecx,dword ptr [esp+0x4AC]
	cmp ecx,ebx
	jl Block79

 Block15:
	mov edx,dword ptr [esi+0x1CC]
	shl eax,5
	lea edi,[eax+edx]
	mov eax,dword ptr [edi+0x1C]
	cmp eax,ebx
	je Block79

 Block16:
	cmp ecx,dword ptr [eax-4]
	jae Block79

 Block17:
	cmp eax,ebx
	jne Block19

 Block18:
	xor eax,eax
	jmp Block20

 Block19:
	mov eax,dword ptr [eax-4]

 Block20:
	lea ecx,[esp+0x1F]
	push ecx
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebx
	call ZArray<ZXString<char>>::_Alloc
	mov eax,dword ptr [edi+0x1C]
	mov dword ptr [esp+0x4A0],ebx
	cmp eax,ebx
	jne Block22

 Block21:
	xor eax,eax
	jmp Block23

 Block22:
	mov eax,dword ptr [eax-4]

 Block23:
	lea edx,[esp+0x1F]
	push edx
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZArray<int>::_Alloc
	xor esi,esi
	mov byte ptr [esp+0x4A0],1
	xor ebp,ebp
	lea esp,[esp]

 Block24:
	mov eax,dword ptr [edi+0x1C]
	cmp eax,ebx
	je Block27

 Block25:
	cmp esi,dword ptr [eax-4]
	jae Block27

 Block26:
	mov ecx,dword ptr [esp+0x18]
	add eax,ebp
	push eax
	lea ecx,[ecx+esi*4]
	call ZXString<char>::op_assign
	mov edx,dword ptr [edi+0x1C]
	mov eax,dword ptr [edx+ebp+0x10]
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [ecx+esi*4],eax
	inc esi
	add ebp,0x14
	jmp Block24

 Block27:
	mov ecx,dword ptr [esp+0x4AC]
	lea edx,[esp+0x14]
	push edx
	mov edx,dword ptr [edi]
	lea eax,[esp+0x1C]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edx
	call CWvsContext::SetWorldInfo
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov ebp,dword ptr [ecx+0x38]
	cmp ebp,1
	jne Block31

 Block28:
	push ebp
	lea eax,[esp+0x28]
	push eax
	call CWvsApp::GetCmdLine
	mov ecx,dword ptr [esp+0x24]
	push 0xC9
	push ecx
	mov byte ptr [esp+0x4A8],2
	call CNMCOClientObject::GetInstance
	mov ecx,eax
	call CNMCOClientObject::AttachAuth
	mov esi,eax
	cmp esi,ebx
	jne Block38

 Block29:
	lea edx,[esp+0x94]
	push edx
	call CNMCOClientObject::GetInstance
	mov ecx,eax
	call CNMCOClientObject::GetNexonPassport
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x4A0],1
	cmp eax,ebx
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	push 5
	lea ecx,[esp+0x3C]
	call COutPacket::_ctor_1
	mov bl,6
	push ebp
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x4A4],bl
	call COutPacket::Encode1
	cmp ebp,1
	jne Block35

 Block32:
	lea ecx,[esp+0x70]
	call CSystemInfo::_ctor_default
	lea ecx,[esp+0x70]
	mov byte ptr [esp+0x4A0],7
	call CSystemInfo::Init
	push ecx
	mov ebp,esp
	lea eax,[esp+0x98]
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [ebp],0
	lea edx,[eax+1]
	lea esp,[esp]

 Block33:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block33

 Block34:
	sub eax,edx
	mov esi,eax
	push esi
	lea eax,[esp+0x9C]
	push eax
	push 0
	push esi
	mov ecx,ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,ebp
	call ZXString<char>::ReleaseBuffer
	lea ecx,[esp+0x3C]
	call COutPacket::EncodeStr
	push 0x10
	lea ecx,[esp+0x74]
	call CSystemInfo::GetMachineId
	push eax
	lea ecx,[esp+0x40]
	call COutPacket::EncodeBuffer
	lea ecx,[esp+0x70]
	call CSystemInfo::GetGameRoomClient
	push eax
	lea ecx,[esp+0x3C]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov eax,dword ptr [ecx+0x38]
	push eax
	lea ecx,[esp+0x3C]
	call COutPacket::Encode1
	lea ecx,[esp+0x70]
	mov byte ptr [esp+0x4A0],bl
	call CSystemInfo::~CSystemInfo

 Block35:
	movzx edx,byte ptr [edi]
	push edx
	lea ecx,[esp+0x3C]
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x4AC]
	push eax
	lea ecx,[esp+0x3C]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	mov dword ptr [esp+0x20],0x10
	mov eax,dword ptr [ecx+8]
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x64]
	push ecx
	push eax
	xor esi,esi
	call dword ptr [ZImports::_getsockname]
	test eax,eax
	jne Block37

 Block36:
	mov esi,dword ptr [esp+0x64]

 Block37:
	push esi
	lea ecx,[esp+0x3C]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x38]
	push edx
	call CClientSocket::SendPacket
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [eax+0x1AC],1
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	add edi,4
	push edi
	add ecx,0xC
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::SaveGlobal
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x4A0],1
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x4A0],0
	call ZArray<int>::RemoveAll
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x4A0],0xFFFFFFFF
	call ZArray<ZXString<char>>::RemoveAll
	mov eax,1
	jmp Block80

 Block38:
	cmp esi,0x7533
	jg Block52

 Block39:
	cmp esi,0x7532
	jge Block52

 Block40:
	lea eax,[esi-0x4E20]
	cmp eax,0x25
	ja Block52

 Block41:
	movzx eax,byte ptr [eax+_SUB_1DBEF0_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block42
cmp EAX, 1
je Block43
cmp EAX, 2
je Block44
cmp EAX, 3
je Block45
cmp EAX, 4
je Block46
cmp EAX, 5
je Block47
cmp EAX, 6
je Block48
cmp EAX, 7
je Block49
cmp EAX, 8
je Block50
cmp EAX, 9
je Block52
cmp EAX, 10
je Block51
cmp EAX, 11
je Block52


 Block42:
	mov edi,0xC
	jmp Block53

 Block43:
	mov edi,8
	jmp Block53

 Block44:
	mov edi,0x11
	jmp Block53

 Block45:
	mov edi,0xE
	jmp Block53

 Block46:
	mov edi,2
	jmp Block53

 Block47:
	mov edi,1
	jmp Block53

 Block48:
	mov edi,4
	jmp Block53

 Block49:
	mov edi,0xF
	jmp Block53

 Block50:
	mov edi,0x10
	jmp Block53

 Block51:
	mov edi,7
	jmp Block53

 Block52:
	mov edi,9

 Block53:
	push 0x23
	lea ecx,[esp+0x54]
	call COutPacket::_ctor_1
	mov ebx,3
	push 1
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x4A4],bl
	call COutPacket::Encode1
	push esi
	lea ecx,[esp+0x54]
	call COutPacket::Encode4
	lea ecx,[esp+0x50]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea eax,[edi+1]
	cmp eax,0x1A
	ja Block73

 Block54:
	movzx edx,byte ptr [eax+_SUB_1DBEF0_LOOKUP_TABLE_1]
	cmp EDX, 0
je Block55
cmp EDX, 1
je Block56
cmp EDX, 2
je Block59
cmp EDX, 3
je Block58
cmp EDX, 4
je Block60
cmp EDX, 5
je Block61
cmp EDX, 6
je Block62
cmp EDX, 7
je Block57
cmp EDX, 8
je Block63
cmp EDX, 9
je Block66
cmp EDX, 10
je Block69
cmp EDX, 11
je Block70
cmp EDX, 12
je Block71
cmp EDX, 13
je Block73


 Block55:
	push 0
	push 0xF
	jmp Block72

 Block56:
	push 0
	push 0x10
	jmp Block72

 Block57:
	push 0
	push 0x15
	jmp Block72

 Block58:
	push 0
	push 0x14
	jmp Block72

 Block59:
	push 0
	push ebx
	jmp Block72

 Block60:
	mov ecx,dword ptr [esp+0x34]
	push 0
	push 0
	call CLogin::GotoTitle
	push 0
	push 0x11
	jmp Block72

 Block61:
	push 0
	push 0x13
	jmp Block72

 Block62:
	push 0
	push 0xE
	jmp Block72

 Block63:
	push 0x1B
	call CLoginUtilDlg::YesNo2
	add esp,4
	test eax,eax
	je Block73

 Block64:
	lea eax,[esp+0x4C]
	push 0xB6C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push eax
	mov byte ptr [esp+0x4A8],4
	call open_web_site
	mov eax,dword ptr [esp+0x54]
	add esp,8
	mov byte ptr [esp+0x4A0],bl
	test eax,eax
	je Block73

 Block65:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block73

 Block66:
	push 0x1A
	call CLoginUtilDlg::YesNo2
	add esp,4
	test eax,eax
	je Block73

 Block67:
	lea ecx,[esp+0x48]
	push 0xB6C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push eax
	mov byte ptr [esp+0x4A8],5
	call open_web_site
	mov eax,dword ptr [esp+0x50]
	add esp,8
	mov byte ptr [esp+0x4A0],bl
	test eax,eax
	je Block73

 Block68:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block73

 Block69:
	push 0
	push 0x21
	jmp Block72

 Block70:
	push 0
	push 0x1B
	jmp Block72

 Block71:
	push 0
	push 0x28

 Block72:
	call CLoginUtilDlg::Error
	add esp,8

 Block73:
	test edi,edi
	je Block75

 Block74:
	cmp edi,0x17
	jne Block76

 Block75:
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [edx+0x1AC],0

 Block76:
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x4A0],2
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x4A0],1
	test eax,eax
	je Block78

 Block77:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block78:
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x4A0],0
	call ZArray<int>::RemoveAll
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x4A0],0xFFFFFFFF
	call ZArray<ZXString<char>>::RemoveAll

 Block79:
	xor eax,eax

 Block80:
	mov ecx,dword ptr [esp+0x498]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov ecx,dword ptr [esp+0x480]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x490
	ret 8
}
}
// CLogin::SendCheckPasswordPacket
_SUB_EXCEPTION_HANDLER(1DB9D0)
// 5DBE6C
static uint8_t _SUB_1DB9D0_LOOKUP_TABLE_0[40] = {
0, 11, 1, 2, 11, 11, 3, 4, 5, 5, 5, 11, 11, 11, 11, 6, 
11, 11, 11, 11, 11, 0, 11, 11, 11, 7, 6, 8, 8, 11, 1, 5, 
9, 9, 11, 11, 8, 10, 139, 255, 
};
// 5DBECC
static uint8_t _SUB_1DB9D0_LOOKUP_TABLE_1[27] = {
0, 13, 13, 1, 1, 2, 3, 0, 4, 0, 0, 5, 6, 0, 7, 8, 
9, 10, 11, 13, 13, 13, 10, 13, 13, 13, 12, 
};
__SUB_CLASS_THIS(001DB9D0, __thiscall, 53065,  CLogin, int32_t, const char*, const char*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1DB9D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x458
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x454],eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x46C]
	mov dword ptr fs:[0],eax
	mov edi,dword ptr [esp+0x47C]
	mov ebp,dword ptr [esp+0x480]
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x28],edi
	mov dword ptr [esp+0x14],ebp
	cmp dword ptr [esi+0x1AC],ebx
	jne Block42

 Block1:
	lea ecx,[esi+0x1CC]
	mov dword ptr [esi+0x1AC],1
	call ZArray<CLogin::WORLDITEM>::RemoveAll
	lea ecx,[esi+0x230]
	call ZArray<CLogin::BALLOON>::RemoveAll
	jmp Block44

 Block42:
	xor eax,eax
	jmp Block53

 Block44:
	lea ecx,[esp+0x44]
	call CSystemInfo::_ctor_default
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0x474],3
	call CSystemInfo::Init
	push 1
	lea ecx,[esp+0x1C]
	call COutPacket::_ctor_1
	push ecx
	mov edi,esp
	mov byte ptr [esp+0x478],4
	mov ebp,dword ptr [esp+0x2C]
	mov dword ptr [edi],ebx
	cmp ebp,ebx
	je Block48

 Block45:
	mov eax,ebp
	lea edx,[eax+1]

 Block46:
	mov cl,byte ptr [eax]
	inc eax
	cmp cl,bl
	jne Block46

 Block47:
	sub eax,edx
	mov esi,eax
	push esi
	push ebp
	push ebx
	push esi
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer

 Block48:
	lea ecx,[esp+0x1C]
	call COutPacket::EncodeStr
	push ecx
	mov edi,esp
	mov eax,dword ptr [esp+0x18]
	nop
	nop
	nop
	nop
	mov dword ptr [edi],ebx
	lea edx,[eax+1]

 Block49:
	mov cl,byte ptr [eax]
	inc eax
	cmp cl,bl
	jne Block49

 Block50:
	sub eax,edx
	mov esi,eax
	push esi
	mov eax,dword ptr [esp+0x1C]
	push eax
	push ebx
	push esi
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	lea ecx,[esp+0x1C]
	call COutPacket::EncodeStr
	push 0x10
	lea ecx,[esp+0x48]
	call CSystemInfo::GetMachineId
	push eax
	lea ecx,[esp+0x20]
	call COutPacket::EncodeBuffer
	lea ecx,[esp+0x44]
	call CSystemInfo::GetGameRoomClient
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov eax,dword ptr [ecx+0x38]
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode1
	push ebx
	lea ecx,[esp+0x1C]
	call COutPacket::Encode1
	push ebx
	lea ecx,[esp+0x1C]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::GetPartnerCode
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x18]
	push edx
	call CClientSocket::SendPacket
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	add ecx,0x2050
	call ZXString<char>::AssignCStr
	mov eax,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	cmp eax,ebx
	je Block52

 Block51:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x34]
	call eax

 Block52:
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x474],3
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0x474],0xFFFFFFFF
	call CSystemInfo::~CSystemInfo
	mov eax,1

 Block53:
	mov ecx,dword ptr [esp+0x46C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov ecx,dword ptr [esp+0x454]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x464
	ret 8
}
}
// CLogin::SendSetGenderPacket
_SUB_EXCEPTION_HANDLER(1D4650)
__SUB_CLASS_THIS(001D4650, __thiscall, 53075,  CLogin, void, unsigned char) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D4650
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	push 8
	lea ecx,[esp+8]
	call COutPacket::_ctor_1
	push 1
	lea ecx,[esp+8]
	mov dword ptr [esp+0x20],0
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x24]
	push eax
	lea ecx,[esp+8]
	call COutPacket::Encode1
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
// CLogin::ViewRecommendWorld
_SUB_EXCEPTION_HANDLER(1D2470)
__SUB_CLASS_THIS(001D2470, __thiscall, 53039,  CLogin, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D2470
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esp+0x18],0
	je Block7

 Block1:
	cmp dword ptr [esi+0x238],0
	je Block17

 Block2:
	mov eax,dword ptr [esi+0x23C]
	test eax,eax
	je Block17

 Block3:
	cmp dword ptr [eax-4],0
	je Block17

 Block4:
	call CLogin::CloseChannelSelect
	push 0xCC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x10],0
	test eax,eax
	je Block6

 Block5:
	push esi
	mov ecx,eax
	call CUIRecommendWorld::_ctor_0

 Block6:
	mov ecx,dword ptr [esi+0x20C]
	push 0
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CUILoginStart::SetViewWorldButton
	mov dword ptr [esi+0x168],1
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4

 Block7:
	mov ecx,dword ptr [TSingleton<CUIRecommendWorld>::ms_pInstance]
	test ecx,ecx
	je Block10

 Block8:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIRecommendWorld>::ms_pInstance]
	test eax,eax
	je Block10

 Block9:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block10:
	mov eax,dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance]
	test eax,eax
	je Block12

 Block11:
	add eax,4
	jmp Block16

 Block12:
	mov eax,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	test eax,eax
	jne Block11

 Block13:
	test esi,esi
	je Block15

 Block14:
	lea eax,[esi+4]
	jmp Block16

 Block15:
	xor eax,eax

 Block16:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov ecx,dword ptr [esi+0x20C]
	push 1
	call CUILoginStart::SetViewWorldButton
	mov dword ptr [esi+0x168],0

 Block17:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4
}
}
// CLogin::OnDenyLicense
_SUB_EXCEPTION_HANDLER(1D45D0)
__SUB_CLASS_THIS0(001D45D0, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1D45D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	push 7
	lea ecx,[esp+8]
	call COutPacket::_ctor_1
	push 0
	lea ecx,[esp+8]
	mov dword ptr [esp+0x20],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+4]
	push eax
	call CClientSocket::SendPacket
	push 0
	call PostQuitMessage
	lea ecx,[esp+8]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret
}
}
// CConnectionNoticeDlg::OnButtonClicked
__SUB_CLASS_THIS(001D4A90, __thiscall, 138796,  CConnectionNoticeDlg, void, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x3E8
	jne Block2

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],3
	jmp edx

 Block2:
	ret 4
}
}
// CLogin::OnNewCharAvatarSelCanceled
__SUB_CLASS_THIS0(001D1BD0, __thiscall, 53034,  CLogin, void) {
__asm {

 Block0:
	xor eax,eax
	cmp dword ptr [ecx+0x2BC],eax
	mov dword ptr [ecx+0x26C],1
	setne al
	mov dword ptr [ecx+0x268],eax
	ret
}
}
