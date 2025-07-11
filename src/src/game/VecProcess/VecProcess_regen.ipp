#include "regen.hpp"
// VecProcess.ipp
#include "VecProcess.hpp"

// CVecProcess::CreateVector
_SUB_EXCEPTION_HANDLER(5A2A90)
__SUB_CLASS_THIS(005A2A90, __thiscall, 77814,  CVecProcess, _x_com_ptr<IWzVector2D>*, _x_com_ptr<IWzVector2D>*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A2A90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+8],0
	mov esi,dword ptr [esp+0x20]
	mov dword ptr [esi],0
	lea eax,[esp+0xC]
	push 0x3D2
	push eax
	mov dword ptr [esp+0x20],0
	mov dword ptr [esp+0x10],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x24],1
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x18]
	add esp,0xC
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret 4
}
}
// CVecProcess::MakeElipticalMove
_SUB_EXCEPTION_HANDLER(5A2B30)
__SUB_CLASS_THIS(005A2B30, __thiscall, 77809,  CVecProcess, _x_com_ptr<IWzVector2D>*, _x_com_ptr<IWzVector2D>*, NakedParam<_x_com_ptr<IWzVector2D>>, long, long, long, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A2B30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x24],ebp
	mov dword ptr [esp+0x50],ebp
	cmp dword ptr [esp+0x60],ebp
	jne Block4

 Block1:
	cmp dword ptr [esp+0x64],ebp
	jne Block4

 Block2:
	mov eax,dword ptr [esp+0x5C]
	mov esi,dword ptr [esp+0x58]
	mov dword ptr [esi],eax
	cmp eax,ebp
	je Block174

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	jmp Block173

 Block4:
	cmp dword ptr [esp+0x5C],ebp
	sete al
	test al,al
	je Block12

 Block5:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	call CVecProcess::CreateVector
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x5C]
	cmp ecx,eax
	je Block10

 Block6:
	mov edi,ecx
	mov dword ptr [esp+0x5C],eax
	cmp eax,ebp
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	cmp edi,ebp
	je Block10

 Block9:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block10:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block12:
	xor ebx,ebx
	mov dword ptr [esp+0x1C],ebx
	xor edi,edi
	mov dword ptr [esp+0x24],edi
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x14],ebp
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x54],4
	call CVecProcess::CreateVector
	mov eax,dword ptr [eax]
	cmp eax,ebp
	je Block14

 Block13:
	mov edx,dword ptr [eax]
	mov ebx,eax
	push eax
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x20],ebx
	call eax

 Block14:
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	call CVecProcess::CreateVector
	mov eax,dword ptr [eax]
	cmp eax,ebp
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [esp+0x28],edi
	call edx

 Block18:
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	call CVecProcess::CreateVector
	mov eax,dword ptr [eax]
	cmp eax,ebp
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	mov dword ptr [esp+0x1C],eax
	call edx

 Block22:
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	call CVecProcess::CreateVector
	mov eax,dword ptr [eax]
	cmp eax,ebp
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov esi,eax
	push eax
	mov dword ptr [esp+0x18],esi
	call edx
	jmp Block27

 Block26:
	mov esi,dword ptr [esp+0x14]

 Block27:
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block29:
	mov eax,0xD
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x30],eax
	cmp eax,ebp
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block31:
	mov byte ptr [esp+0x50],5
	cmp ebx,ebp
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [ebx]
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
	push ebx
	call eax
	cmp eax,ebp
	jge Block35

 Block34:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push ebx
	push eax
	call _com_issue_errorex

 Block35:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x50],4
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov eax,0xD
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],ebx
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	push ebx
	call edx
	mov byte ptr [esp+0x50],6
	cmp edi,ebp
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [edi]
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
	push edi
	call eax
	cmp eax,ebp
	jge Block43

 Block42:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block43:
	mov ebx,8
	mov byte ptr [esp+0x50],4
	cmp word ptr [esp+0x28],bx
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	mov eax,0xD
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x30],eax
	cmp eax,ebp
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block49:
	mov byte ptr [esp+0x50],7
	cmp esi,ebp
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
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
	cmp eax,ebp
	jge Block53

 Block52:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block53:
	mov byte ptr [esp+0x50],4
	cmp word ptr [esp+0x28],bx
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
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
	mov esi,dword ptr [ZImports::_VariantInit]
	cmp dword ptr [esp+0x60],ebp
	je Block109

 Block58:
	cmp dword ptr [esp+0x70],ebp
	je Block82

 Block59:
	lea eax,[esp+0x38]
	push eax
	call esi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x54],8
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block63

 Block62:
	push eax
	call _com_issue_error

 Block63:
	mov eax,dword ptr [esp+0x60]
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	lea edx,[esp+0x2C]
	push edx
	neg eax
	push eax
	push ebp
	mov byte ptr [esp+0x60],9
	call IWzVector2D::RelMove
	mov ebx,8
	mov byte ptr [esp+0x50],8
	cmp word ptr [esp+0x28],bx
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov byte ptr [esp+0x50],4
	cmp word ptr [esp+0x38],bx
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	lea edx,[esp+0x28]
	push edx
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block73

 Block72:
	push eax
	call _com_issue_error

 Block73:
	lea ecx,[esp+0x38]
	mov bl,0xA
	push ecx
	mov byte ptr [esp+0x54],bl
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	push ebp
	push ebp
	mov ecx,edi
	mov byte ptr [esp+0x60],0xB
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x38],si
	jne Block78

 Block76:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebp
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov byte ptr [esp+0x50],4
	cmp word ptr [esp+0x28],si
	jne Block81

 Block80:
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	jmp Block104

 Block81:
	lea edx,[esp+0x28]
	push edx
	jmp Block107

 Block82:
	lea eax,[esp+0x28]
	push eax
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	lea edx,[esp+0x38]
	mov bl,0xC
	push edx
	mov byte ptr [esp+0x54],bl
	call esi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	mov eax,dword ptr [esp+0x60]
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	lea edx,[esp+0x3C]
	push edx
	push ebp
	push eax
	mov byte ptr [esp+0x60],0xD
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x50],bl
	jne Block89

 Block87:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebp
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x50],4
	jne Block93

 Block91:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	lea edx,[esp+0x28]
	push edx
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	lea ecx,[esp+0x38]
	mov bl,0xE
	push ecx
	mov byte ptr [esp+0x54],bl
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	mov edx,dword ptr [esp+0x60]
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	push ebp
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x60],0xF
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x38],si
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	mov byte ptr [esp+0x50],4
	cmp word ptr [esp+0x28],si
	jne Block106

 Block103:
	xor edx,edx
	mov word ptr [esp+0x28],dx

 Block104:
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block108

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block106:
	lea eax,[esp+0x28]
	push eax

 Block107:
	call dword ptr [ZImports::_VariantClear]

 Block108:
	mov edx,dword ptr [esp+0x64]
	mov eax,dword ptr [esp+0x60]
	mov ecx,dword ptr [edi]
	push edx
	mov edx,dword ptr [esp+0x18]
	push 1
	push eax
	mov eax,dword ptr [ecx+0x98]
	push 1
	push edx
	push edi
	call eax
	jmp Block160

 Block109:
	lea ecx,[esp+0x28]
	push ecx
	call esi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp dword ptr [esp+0x70],ebp
	je Block133

 Block110:
	cmp eax,ebp
	jge Block112

 Block111:
	push eax
	call _com_issue_error

 Block112:
	lea eax,[esp+0x38]
	mov bl,0x10
	push eax
	mov byte ptr [esp+0x54],bl
	call esi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block114

 Block113:
	push eax
	call _com_issue_error

 Block114:
	mov ecx,dword ptr [esp+0x64]
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	neg ecx
	push ebp
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x60],0x11
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x50],bl
	jne Block117

 Block115:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebp
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block118:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x50],4
	jne Block121

 Block119:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block122:
	lea eax,[esp+0x28]
	push eax
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block124

 Block123:
	push eax
	call _com_issue_error

 Block124:
	lea edx,[esp+0x38]
	mov bl,0x12
	push edx
	mov byte ptr [esp+0x54],bl
	call esi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block126

 Block125:
	push eax
	call _com_issue_error

 Block126:
	lea ecx,[esp+0x28]
	push ecx
	lea edx,[esp+0x3C]
	push edx
	push ebp
	push ebp
	mov ecx,edi
	mov byte ptr [esp+0x60],0x13
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x38],si
	jne Block129

 Block127:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block130:
	mov byte ptr [esp+0x50],4
	cmp word ptr [esp+0x28],si
	jne Block132

 Block131:
	xor edx,edx
	mov word ptr [esp+0x28],dx
	jmp Block155

 Block132:
	lea eax,[esp+0x28]
	push eax
	jmp Block158

 Block133:
	cmp eax,ebp
	jge Block135

 Block134:
	push eax
	call _com_issue_error

 Block135:
	lea eax,[esp+0x38]
	mov bl,0x14
	push eax
	mov byte ptr [esp+0x54],bl
	call esi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block137

 Block136:
	push eax
	call _com_issue_error

 Block137:
	mov ecx,dword ptr [esp+0x64]
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x20]
	push ebp
	mov byte ptr [esp+0x60],0x15
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x50],bl
	jne Block140

 Block138:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebp
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block141:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x50],4
	jne Block144

 Block142:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block145

 Block143:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block144:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block145:
	lea eax,[esp+0x28]
	push eax
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block147

 Block146:
	push eax
	call _com_issue_error

 Block147:
	lea edx,[esp+0x38]
	mov bl,0x16
	push edx
	mov byte ptr [esp+0x54],bl
	call esi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block149

 Block148:
	push eax
	call _com_issue_error

 Block149:
	mov eax,dword ptr [esp+0x64]
	lea ecx,[esp+0x28]
	push ecx
	lea edx,[esp+0x3C]
	push edx
	push eax
	push ebp
	mov ecx,edi
	mov byte ptr [esp+0x60],0x17
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x38],si
	jne Block152

 Block150:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebp
	je Block153

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block153

 Block152:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block153:
	mov byte ptr [esp+0x50],4
	cmp word ptr [esp+0x28],si
	jne Block157

 Block154:
	xor eax,eax
	mov word ptr [esp+0x28],ax

 Block155:
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block159

 Block156:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block157:
	lea ecx,[esp+0x28]
	push ecx

 Block158:
	call dword ptr [ZImports::_VariantClear]

 Block159:
	mov eax,dword ptr [esp+0x64]
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x98]
	push 1
	push ebp
	push 1
	push eax
	push ecx
	push edi
	call edx

 Block160:
	cmp eax,ebp
	jge Block162

 Block161:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block162:
	mov ecx,dword ptr [esp+0x68]
	cmp dword ptr [esp+0x6C],ebp
	jne Block164

 Block163:
	neg ecx

 Block164:
	mov eax,3
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],ecx
	mov esi,dword ptr [esp+0x18]
	mov byte ptr [esp+0x50],0x18
	cmp esi,ebp
	jne Block166

 Block165:
	push 0x80004003
	call _com_issue_error

 Block166:
	mov ebx,dword ptr [esp+0x28]
	fldz
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0xA0]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x44]
	sub esp,8
	mov dword ptr [eax+0xC],ecx
	fstp qword ptr [esp]
	push esi
	call edx
	cmp eax,ebp
	jge Block168

 Block167:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block168:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x50],4
	jne Block171

 Block169:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block172

 Block170:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block172

 Block171:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block172:
	mov edx,dword ptr [edi]
	mov esi,dword ptr [esp+0x58]
	mov eax,dword ptr [edx+4]
	push edi
	mov dword ptr [esi],edi
	call eax
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x54],3
	call edx
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x54],2
	call edx
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0x54],1
	call ecx
	mov eax,dword ptr [esp+0x1C]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0x54],0
	call eax

 Block173:
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebp

 Block174:
	mov dword ptr [esp+0x50],0xFFFFFFFF
	je Block176

 Block175:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block176:
	mov eax,esi
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 0x1C
}
}
// CVecProcess::~CVecProcess
__SUB_CLASS_THIS0(005A2A50, __thiscall, 77821,  CVecProcess, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CVecProcess::`vftable'
	mov dword ptr [TSingleton<CVecProcess>::ms_pInstance],0
	ret
}
}
// CVecProcess::CVecProcess
__SUB_CLASS_THIS0(005A2A20, __thiscall, 77819,  CVecProcess, void) {
__asm {

 Block0:
	mov eax,ecx
	lea ecx,[eax+4]
	test ecx,ecx
	je Block2

 Block1:
	add ecx,0xFFFFFFFC
	mov dword ptr [TSingleton<CVecProcess>::ms_pInstance],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CVecProcess::`vftable'
	ret

 Block2:
	mov dword ptr [TSingleton<CVecProcess>::ms_pInstance],0
	int 3// TODO: 	mov dword ptr [eax],offset CVecProcess::`vftable'
	ret
}
}
// CVecProcess::MakeRotate
_SUB_EXCEPTION_HANDLER(5A3660)
__SUB_CLASS_THIS(005A3660, __thiscall, 77811,  CVecProcess, _x_com_ptr<IWzVector2D>*, _x_com_ptr<IWzVector2D>*, NakedParam<_x_com_ptr<IWzVector2D>>, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A3660
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x24],edi
	mov dword ptr [esp+0x1C],0
	cmp dword ptr [esp+0x5C],0
	mov ebp,1
	sete al
	mov dword ptr [esp+0x50],ebp
	test al,al
	je Block8

 Block1:
	lea eax,[esp+0x18]
	push eax
	call CVecProcess::CreateVector
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x5C]
	cmp ecx,eax
	je Block6

 Block2:
	mov esi,ecx
	mov dword ptr [esp+0x5C],eax
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	test esi,esi
	je Block6

 Block5:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block6:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block8:
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov esi,dword ptr [esp+0x58]
	mov dword ptr [esi],ebx
	mov dword ptr [esp+0x1C],ebp
	mov dword ptr [esp+0x18],ebx
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x54],3
	call CVecProcess::CreateVector
	mov eax,dword ptr [eax]
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	mov dword ptr [esp+0x14],eax
	push eax
	mov eax,dword ptr [edx+4]
	call eax
	mov ebx,dword ptr [esp+0x14]

 Block10:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	lea eax,[esp+0x20]
	push eax
	mov ecx,edi
	call CVecProcess::CreateVector
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esi]
	cmp esi,eax
	je Block17

 Block13:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr [ecx],eax
	test eax,eax
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block15:
	test esi,esi
	je Block17

 Block16:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block17:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	mov eax,0xD
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block21:
	mov byte ptr [esp+0x50],4
	test ebx,ebx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [ebx]
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
	push ebx
	call eax
	test eax,eax
	jge Block25

 Block24:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push ebx
	push eax
	call _com_issue_errorex

 Block25:
	mov ebp,8
	mov byte ptr [esp+0x50],3
	cmp word ptr [esp+0x28],bp
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov esi,dword ptr [esp+0x64]
	mov edi,dword ptr [esp+0x68]
	test esi,esi
	jne Block43

 Block30:
	test edi,edi
	jne Block43

 Block31:
	mov eax,0xD
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],ebx
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	push ebx
	call edx
	mov esi,dword ptr [esp+0x58]
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x50],0xA
	test ecx,ecx
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	lea eax,[esp+0x28]
	push eax
	call IWzVector2D::Putorigin
	mov byte ptr [esp+0x50],3
	cmp word ptr [esp+0x28],bp
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov ecx,dword ptr [esp+0x60]
	mov eax,3
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],ecx
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x50],0xB
	test ecx,ecx
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	fldz
	lea edx,[esp+0x28]
	push edx
	sub esp,8
	fstp qword ptr [esp]
	call IWzVector2D::Rotate
	mov byte ptr [esp+0x50],3
	cmp word ptr [esp+0x28],bp
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block86

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block42:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block86

 Block43:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push edx
	call ebp
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	lea ecx,[esp+0x28]
	mov bl,5
	push ecx
	mov byte ptr [esp+0x54],bl
	call ebp
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	neg edi
	push edi
	mov edi,dword ptr [esp+0x20]
	neg esi
	push esi
	mov ecx,edi
	mov byte ptr [esp+0x60],6
	call IWzVector2D::RelMove
	mov ebp,8
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x28],bp
	jne Block54

 Block48:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block50

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block50:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block51:
	mov byte ptr [esp+0x50],3
	cmp word ptr [esp+0x38],bp
	jne Block55

 Block52:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block56

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block54:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x28]
	push eax
	call ebx
	jmp Block51

 Block55:
	lea edx,[esp+0x38]
	push edx
	call ebx

 Block56:
	mov ecx,dword ptr [esp+0x24]
	lea eax,[esp+0x64]
	push eax
	call CVecProcess::CreateVector
	mov eax,dword ptr [eax]
	test eax,eax
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov esi,eax
	push eax
	mov dword ptr [esp+0x1C],esi
	call edx
	jmp Block59

 Block58:
	mov esi,dword ptr [esp+0x18]

 Block59:
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov eax,0xD
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],edi
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx
	mov byte ptr [esp+0x50],7
	test esi,esi
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
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
	test eax,eax
	jge Block65

 Block64:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block65:
	mov byte ptr [esp+0x50],3
	cmp word ptr [esp+0x28],bp
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[esp+0x28]
	push edx
	call ebx

 Block69:
	mov eax,0xD
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx
	mov edi,dword ptr [esp+0x58]
	mov esi,dword ptr [edi]
	mov byte ptr [esp+0x50],8
	test esi,esi
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
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
	test eax,eax
	jge Block73

 Block72:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block73:
	mov byte ptr [esp+0x50],3
	cmp word ptr [esp+0x28],bp
	jne Block76

 Block74:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea edx,[esp+0x28]
	push edx
	call ebx

 Block77:
	mov ecx,dword ptr [esp+0x60]
	mov eax,3
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],ecx
	mov esi,dword ptr [edi]
	mov byte ptr [esp+0x50],9
	test esi,esi
	jne Block79

 Block78:
	push 0x80004003
	call _com_issue_error

 Block79:
	mov edi,dword ptr [esp+0x28]
	fldz
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0xA0]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x44]
	sub esp,8
	mov dword ptr [eax+0xC],ecx
	fstp qword ptr [esp]
	push esi
	call edx
	test eax,eax
	jge Block81

 Block80:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block81:
	mov byte ptr [esp+0x50],3
	cmp word ptr [esp+0x28],bp
	jne Block84

 Block82:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea ecx,[esp+0x28]
	push ecx
	call ebx

 Block85:
	mov ebx,dword ptr [esp+0x14]

 Block86:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x50],2
	test eax,eax
	je Block88

 Block87:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block88:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [esp+0x54],1
	call edx
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x50],0
	test eax,eax
	je Block90

 Block89:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block90:
	mov eax,dword ptr [esp+0x58]
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 0x14
}
}
// CVecProcess::MakeOscilate
_SUB_EXCEPTION_HANDLER(5A3C40)
__SUB_CLASS_THIS(005A3C40, __thiscall, 77813,  CVecProcess, _x_com_ptr<IWzVector2D>*, _x_com_ptr<IWzVector2D>*, NakedParam<_x_com_ptr<IWzVector2D>>, long, long, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A3C40
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
	mov dword ptr [esp+0xC],0
	cmp dword ptr [esp+0x30],0
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x28]
	push eax
	push 1
	mov dword ptr [esp+0x20],0
	push ecx
	je Block2

 Block1:
	push edx
	push 0
	jmp Block3

 Block2:
	push 0
	push edx

 Block3:
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x4C],esp
	test eax,eax
	je Block5

 Block4:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block5:
	mov edi,dword ptr [esp+0x38]
	push edi
	mov ecx,esi
	call CVecProcess::MakeElipticalMove
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,edi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 0x18
}
}
