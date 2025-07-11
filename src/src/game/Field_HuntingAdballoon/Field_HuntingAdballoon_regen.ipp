#include "regen.hpp"
// Field_HuntingAdballoon.ipp
#include "Field_HuntingAdballoon.hpp"

// CField_HuntingAdballoon::OnFieldSetVariable
_SUB_EXCEPTION_HANDLER(152050)
__SUB_CLASS_THIS(00152050, __thiscall, 143670,  CField_HuntingAdballoon, void, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_152050
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
	mov edi,ecx
	mov dword ptr [esp+0x1C],edi
	xor ebp,ebp
	mov dword ptr [esp+0x18],ebp
	lea eax,[esp+0x24]
	push 0x1ACE
	mov esi,1
	push eax
	mov dword ptr [esp+0x94],esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,esi
	push eax
	lea ecx,[esp+0x98]
	mov byte ptr [esp+0x90],2
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block2

 Block1:
	lea ecx,[esp+0x28]
	push 0x1AA3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x98]
	mov dword ptr [esp+0x1C],3
	call ZXString<char>::op_eq_0
	mov ebx,dword ptr [esp+0x18]
	mov byte ptr [esp+0x17],0
	test eax,eax
	je Block3

 Block2:
	mov byte ptr [esp+0x17],1

 Block3:
	test bl,2
	je Block6

 Block4:
	mov eax,dword ptr [esp+0x28]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x18],ebx
	cmp eax,ebp
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov dword ptr [esp+0x8C],esi
	test bl,1
	je Block9

 Block7:
	mov eax,dword ptr [esp+0x24]
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x18],ebx
	cmp eax,ebp
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	cmp byte ptr [esp+0x17],0
	je Block79

 Block10:
	lea edx,[esp+0x28]
	push 0x1ACE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x98]
	call ZXString<char>::op_eq_0
	mov esi,eax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	cmp esi,ebp
	je Block14

 Block13:
	mov eax,dword ptr [esp+0x98]
	push eax
	call _atoi
	mov dword ptr [edi+0xDA0],eax
	jmp Block18

 Block14:
	lea ecx,[esp+0x28]
	push 0x1AA3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x98]
	call ZXString<char>::op_eq_0
	mov esi,eax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	cmp esi,ebp
	je Block19

 Block17:
	mov edx,dword ptr [esp+0x98]
	push edx
	call _atoi
	mov dword ptr [edi+0xDA4],eax

 Block18:
	add esp,4

 Block19:
	push 0x90F6F1
	call CMobTemplate::GetMobTemplate
	mov ecx,dword ptr [eax+0x84]
	push ecx
	add eax,0x7C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,dword ptr [esp+0x28]
	cdq
	sub eax,edx
	mov ecx,eax
	sar ecx,1
	xor edx,edx
	add esp,0xC
	mov eax,ecx
	sub eax,dword ptr [ebx+0xDA0]
	test eax,eax
	setle dl
	dec edx
	and edx,eax
	mov esi,edx
	xor edx,edx
	mov eax,ecx
	sub eax,dword ptr [ebx+0xDA4]
	test eax,eax
	setle dl
	dec edx
	and edx,eax
	mov eax,esi
	imul eax,0x142
	mov edi,edx
	cdq
	idiv ecx
	mov ebp,eax
	mov eax,edi
	imul eax,0x142
	cdq
	idiv ecx
	mov dword ptr [esp+0x20],eax
	test esi,esi
	jle Block22

 Block20:
	test ebp,ebp
	jne Block22

 Block21:
	mov ebp,1

 Block22:
	test edi,edi
	jle Block25

 Block23:
	test eax,eax
	jne Block25

 Block24:
	mov dword ptr [esp+0x20],1

 Block25:
	cmp dword ptr [ebx+0xDA8],0
	sete al
	test al,al
	je Block29

 Block26:
	mov eax,dword ptr [esp+0x94]
	mov byte ptr [esp+0x8C],0
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov eax,dword ptr [esp+0x98]
	test eax,eax
	jmp Block162

 Block29:
	mov eax,3
	mov word ptr [esp+0x54],ax
	mov dword ptr [esp+0x5C],0
	mov ecx,dword ptr [ebx+0xDA8]
	mov byte ptr [esp+0x8C],al
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x2C]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov edi,8
	mov byte ptr [esp+0x8C],5
	cmp word ptr [esp+0x54],di
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov esi,dword ptr [esp+0x28]
	test esi,esi
	sete al
	test al,al
	je Block40

 Block36:
	mov byte ptr [esp+0x8C],1
	test esi,esi
	je Block38

 Block37:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block38:
	mov eax,dword ptr [esp+0x94]
	mov byte ptr [esp+0x8C],0
	test eax,eax
	je Block28

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	mov eax,dword ptr [esp+0x9C]
	add esp,4
	test eax,eax
	jmp Block162

 Block40:
	test esi,esi
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	push 0xFFFFFF
	mov ecx,esi
	call IWzCanvas::Getheight
	push eax
	mov ecx,esi
	call IWzCanvas::Getwidth
	push eax
	push 0
	push 0
	mov ecx,esi
	call IWzCanvas::DrawRectangle
	mov edx,3
	mov word ptr [esp+0x64],dx
	mov dword ptr [esp+0x6C],0xFF
	mov eax,dword ptr [ebx+0xDAC]
	lea ecx,[esp+0x64]
	push ecx
	push eax
	push 0
	push 0x36
	mov ecx,esi
	mov byte ptr [esp+0x9C],6
	call IWzCanvas::Copy
	mov byte ptr [esp+0x8C],5
	cmp word ptr [esp+0x64],di
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[esp+0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov ebx,0x142
	sub ebx,ebp
	xor edi,edi
	test ebx,ebx
	jle Block53

 Block47:
	mov ebp,dword ptr [esp+0x1C]
	lea esp,[esp]

 Block48:
	mov ecx,3
	mov word ptr [esp+0x64],cx
	mov dword ptr [esp+0x6C],0xFF
	mov eax,dword ptr [ebp+0xDB8]
	lea edx,[esp+0x64]
	push edx
	push eax
	push 0x10
	lea eax,[edi+0x36]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x9C],7
	call IWzCanvas::Copy
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0x8C],5
	jne Block51

 Block49:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea edx,[esp+0x64]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	inc edi
	cmp edi,ebx
	jl Block48

 Block53:
	mov eax,0x142
	sub eax,dword ptr [esp+0x20]
	xor ebx,ebx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	jle Block64

 Block54:
	mov eax,3
	mov word ptr [esp+0x34],ax
	mov dword ptr [esp+0x3C],0xFF
	mov eax,dword ptr [esp+0x1C]
	mov edi,dword ptr [eax+0xDAC]
	mov ebp,dword ptr [eax+0xDB8]
	mov byte ptr [esp+0x8C],8
	test edi,edi
	je Block30

 Block55:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x20]
	push edx
	push edi
	mov dword ptr [esp+0x28],0
	call eax
	test eax,eax
	jge Block57

 Block56:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block57:
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x30]
	push ebp
	sub eax,ebx
	push 0x10
	add eax,0x35
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block59

 Block58:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block59:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x8C],5
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block63:
	inc ebx
	cmp ebx,dword ptr [esp+0x24]
	jl Block54

 Block64:
	mov edi,dword ptr [esp+0x1C]
	mov edx,dword ptr [edi+0xDB0]
	test edx,edx
	je Block71

 Block65:
	mov ecx,3
	mov word ptr [esp+0x64],cx
	mov ecx,0xFF
	mov dword ptr [esp+0x6C],ecx
	mov ebp,dword ptr [esp+0x64]
	mov ebx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x78]
	push edx
	mov edx,dword ptr [ebx+0x80]
	push 7
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x88]
	push 0
	push esi
	mov byte ptr [esp+0xAC],9
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block67

 Block66:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block67:
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0x8C],5
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov edx,dword ptr [edi+0xDB4]
	test edx,edx
	je Block78

 Block72:
	mov eax,3
	mov ecx,0xFF
	mov word ptr [esp+0x64],ax
	mov dword ptr [esp+0x6C],ecx
	mov ebx,dword ptr [esp+0x64]
	mov edi,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x78]
	push edx
	mov edx,dword ptr [edi+0x80]
	push 9
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x88]
	push 0x17E
	push esi
	mov byte ptr [esp+0xAC],0xA
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block74

 Block73:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block74:
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0x8C],5
	jne Block77

 Block75:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block78:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x90],1
	call eax
	mov ebx,dword ptr [esp+0x18]
	mov edi,dword ptr [esp+0x1C]
	xor ebp,ebp
	lea esi,[ebp+1]

 Block79:
	lea ecx,[esp+0x24]
	push 0x174D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	or ebx,4
	push eax
	lea ecx,[esp+0x98]
	mov byte ptr [esp+0x90],0xB
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block81

 Block80:
	lea edx,[esp+0x28]
	push 0x174E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x98]
	or ebx,8
	call ZXString<char>::op_eq_0
	mov byte ptr [esp+0x17],0
	test eax,eax
	je Block82

 Block81:
	mov byte ptr [esp+0x17],1

 Block82:
	test bl,8
	je Block85

 Block83:
	mov eax,dword ptr [esp+0x28]
	and ebx,0xFFFFFFF7
	mov dword ptr [esp+0x18],ebx
	cmp eax,ebp
	je Block85

 Block84:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block85:
	mov dword ptr [esp+0x8C],esi
	test bl,4
	je Block88

 Block86:
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block88

 Block87:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block88:
	cmp byte ptr [esp+0x17],0
	je Block159

 Block89:
	lea eax,[esp+0x28]
	push 0x174D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x98]
	call ZXString<char>::op_eq_0
	mov esi,eax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block91

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block91:
	cmp esi,ebp
	je Block93

 Block92:
	mov ecx,dword ptr [esp+0x98]
	push ecx
	call _atoi
	mov dword ptr [edi+0xDC4],eax
	jmp Block97

 Block93:
	lea edx,[esp+0x28]
	push 0x174E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x98]
	call ZXString<char>::op_eq_0
	mov esi,eax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block95

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block95:
	cmp esi,ebp
	je Block98

 Block96:
	mov eax,dword ptr [esp+0x98]
	push eax
	call _atoi
	mov dword ptr [edi+0xDC8],eax

 Block97:
	add esp,4

 Block98:
	mov ebx,dword ptr [esp+0x1C]
	lea edi,[ebx+0xDBC]
	mov dword ptr [esp+0x24],ebp
	mov dword ptr [esp+0x28],edi

 Block99:
	mov ecx,dword ptr [edi+8]
	mov dword ptr [esp+0x30],ecx
	mov ecx,dword ptr [edi]
	cmp ecx,ebp
	sete al
	test al,al
	jne Block158

 Block100:
	mov edx,3
	mov word ptr [esp+0x74],dx
	mov dword ptr [esp+0x7C],ebp
	mov byte ptr [esp+0x8C],0xC
	cmp ecx,ebp
	je Block30

 Block101:
	lea eax,[esp+0x74]
	push eax
	lea edx,[esp+0x30]
	push edx
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0x8C],0xE
	jne Block104

 Block102:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebp
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block105:
	mov esi,dword ptr [esp+0x2C]
	cmp esi,ebp
	sete al
	test al,al
	je Block108

 Block106:
	mov byte ptr [esp+0x8C],1
	cmp esi,ebp
	je Block158

 Block107:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax
	jmp Block158

 Block108:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block165

 Block109:
	mov ecx,dword ptr [ebx+0xDCC]
	mov byte ptr [esp+0x8C],0xF
	cmp esi,ebp
	je Block30

 Block110:
	mov edi,dword ptr [esp+0x34]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x48]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x4C]
	push ecx
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x54]
	push ebp
	push ebp
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x80]
	push esi
	call eax
	cmp eax,ebp
	jge Block112

 Block111:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block112:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x8C],0xE
	jne Block115

 Block113:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,ebp
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block116:
	mov edi,dword ptr [ebx+0xDCC]
	cmp edi,ebp
	je Block30

 Block117:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x20]
	push ecx
	push edi
	mov dword ptr [esp+0x28],ebp
	call edx
	cmp eax,ebp
	jge Block119

 Block118:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block119:
	mov ebp,dword ptr [esp+0x20]
	mov ebx,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x18],0

 Block120:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block165

 Block121:
	mov edi,dword ptr [esp+0x44]
	mov ecx,dword ptr [ebx+0xDD0]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x58]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x5C]
	push ecx
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x64]
	push 0
	push ebp
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x80]
	push esi
	mov byte ptr [esp+0xAC],0x10
	call eax
	test eax,eax
	jge Block123

 Block122:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block123:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x8C],0xE
	jne Block126

 Block124:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block127:
	mov edi,dword ptr [ebx+0xDD0]
	test edi,edi
	je Block30

 Block128:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x20]
	push ecx
	push edi
	mov dword ptr [esp+0x28],0
	call edx
	test eax,eax
	jge Block130

 Block129:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block130:
	mov eax,dword ptr [esp+0x18]
	add ebp,dword ptr [esp+0x20]
	inc eax
	cmp eax,8
	mov dword ptr [esp+0x18],eax
	jl Block120

 Block131:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block165

 Block132:
	mov edi,dword ptr [esp+0x54]
	mov ecx,dword ptr [ebx+0xDD4]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x68]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x6C]
	push ecx
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x74]
	push 0
	push ebp
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x80]
	push esi
	mov byte ptr [esp+0xAC],0x11
	call eax
	test eax,eax
	jge Block134

 Block133:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block134:
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0x8C],0xE
	jne Block137

 Block135:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	test eax,eax
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block138:
	mov edi,dword ptr [ebx+0xDCC]
	test edi,edi
	je Block30

 Block139:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x20]
	push ecx
	push edi
	mov dword ptr [esp+0x28],0
	call edx
	test eax,eax
	jge Block141

 Block140:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block141:
	mov edi,dword ptr [ebx+0xDD8]
	mov ebp,dword ptr [esp+0x20]
	test edi,edi
	je Block30

 Block142:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x18]
	push ecx
	push edi
	mov dword ptr [esp+0x20],0
	call edx
	test eax,eax
	jge Block144

 Block143:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block144:
	sub ebp,dword ptr [esp+0x18]
	xor eax,eax
	mov dword ptr [esp+0x18],eax

 Block145:
	cmp eax,dword ptr [esp+0x30]
	jge Block153

 Block146:
	lea eax,[esp+0x64]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block165

 Block147:
	mov edi,dword ptr [esp+0x64]
	mov ecx,dword ptr [ebx+0xDD8]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x78]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x7C]
	push ecx
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x84]
	push 8
	push ebp
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x80]
	push esi
	mov byte ptr [esp+0xAC],0x12
	call eax
	test eax,eax
	jge Block149

 Block148:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block149:
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0x8C],0xE
	jne Block152

 Block150:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	test eax,eax
	je Block153

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block153

 Block152:
	lea edx,[esp+0x64]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block153:
	mov edi,dword ptr [ebx+0xDD0]
	test edi,edi
	je Block30

 Block154:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x20]
	push ecx
	push edi
	mov dword ptr [esp+0x28],0
	call edx
	test eax,eax
	jge Block156

 Block155:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block156:
	mov eax,dword ptr [esp+0x18]
	add ebp,dword ptr [esp+0x20]
	inc eax
	cmp eax,0xA
	mov dword ptr [esp+0x18],eax
	jl Block145

 Block157:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0x90],1
	call ecx
	mov edi,dword ptr [esp+0x28]
	mov ebx,dword ptr [esp+0x1C]
	xor ebp,ebp

 Block158:
	mov eax,dword ptr [esp+0x24]
	inc eax
	add edi,4
	cmp eax,2
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x28],edi
	jl Block99

 Block159:
	mov eax,dword ptr [esp+0x94]
	mov byte ptr [esp+0x8C],0
	cmp eax,ebp
	je Block161

 Block160:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block161:
	mov eax,dword ptr [esp+0x98]
	cmp eax,ebp

 Block162:
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	je Block164

 Block163:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block164:
	mov ecx,dword ptr [esp+0x84]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x7C
	ret 8

 Block165:
	push eax
	call _com_issue_error
}
}
// CField_HuntingAdballoon::~CField_HuntingAdballoon
_SUB_EXCEPTION_HANDLER(151EB0)
__SUB_CLASS_THIS0(00151EB0, __thiscall, 143666,  CField_HuntingAdballoon, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_151EB0
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
	int 3// TODO: 	mov dword ptr [esi],offset CField_HuntingAdballoon::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_HuntingAdballoon::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_HuntingAdballoon::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_HuntingAdballoon::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xDD8]
	mov dword ptr [esp+0x14],6
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 3
	push 4
	lea eax,[esi+0xDCC]
	push eax
	call __eh_vector_dtor_iterator
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push 2
	push 4
	lea ecx,[esi+0xDBC]
	push ecx
	mov byte ptr [esp+0x24],5
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0xDB8]
	mov byte ptr [esp+0x14],4
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block4:
	mov eax,dword ptr [esi+0xDB4]
	mov byte ptr [esp+0x14],3
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xDB0]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0xDAC]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0xDA8]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CField::~CField
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CField_HuntingAdballoon::CField_HuntingAdballoon
_SUB_EXCEPTION_HANDLER(151DB0)
__SUB_CLASS_THIS0(00151DB0, __thiscall, 143664,  CField_HuntingAdballoon, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_151DB0
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
	call CField::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CField_HuntingAdballoon::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_HuntingAdballoon::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_HuntingAdballoon::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_HuntingAdballoon::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xDA0],edi
	mov dword ptr [esi+0xDA4],edi
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0xDA8],edi
	mov dword ptr [esi+0xDAC],edi
	mov dword ptr [esi+0xDB0],edi
	mov dword ptr [esi+0xDB4],edi
	mov dword ptr [esi+0xDB8],edi
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push offset _x_com_ptr<IWzGr2DLayer>::_ctor_default
	push 2
	push 4
	lea eax,[esi+0xDBC]
	push eax
	mov byte ptr [esp+0x2C],5
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 3
	push 4
	lea ecx,[esi+0xDCC]
	push ecx
	mov byte ptr [esp+0x2C],6
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xDD8],edi
	mov dword ptr [esi+0xDC8],edi
	mov dword ptr [esi+0xDC4],edi
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
// CField_HuntingAdballoon::GetFieldType
__SUB_CLASS_THIS0(00151E90, __thiscall, 143667,  CField_HuntingAdballoon, long) {
__asm {

 Block0:
	mov eax,0x20
	ret
}
}
// CField_HuntingAdballoon::Init
_SUB_EXCEPTION_HANDLER(152DA0)
__SUB_CLASS_THIS(00152DA0, __thiscall, 143668,  CField_HuntingAdballoon, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_152DA0
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
	mov dword ptr [esp+0x1C],ebp
	mov eax,dword ptr [esp+0x74]
	push eax
	call CField::Init
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x44]
	push ecx
	call edi
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[esp+0x24]
	push eax
	mov dword ptr [esp+0x70],0
	call edi
	lea ecx,[esp+0x24]
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
	push 0
	push 0
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push ecx
	mov dword ptr [esp+0x88],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMGDUA__3
	mov byte ptr [esp+0x84],1
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x80],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x68]
	push ecx
	mov byte ptr [esp+0x84],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x74],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xDAC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x6C],1
	cmp word ptr [esp+0x54],si
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x54]
	push eax
	call ebx

 Block13:
	mov byte ptr [esp+0x6C],0
	cmp word ptr [esp+0x24],si
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x24]
	push edx
	call ebx

 Block17:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp word ptr [esp+0x44],si
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x44]
	push ecx
	call ebx

 Block21:
	lea edx,[esp+0x24]
	push edx
	call edi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea ecx,[esp+0x44]
	push ecx
	mov dword ptr [esp+0x70],4
	call edi
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
	push 0
	push 0
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x50]
	push ecx
	push ecx
	mov dword ptr [esp+0x88],esp
	mov ecx,esp
	mov bl,5
	push offset _S_UIUIWINDOWIMGDUA__2
	mov byte ptr [esp+0x84],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x80],6
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea edx,[esp+0x68]
	mov byte ptr [esp+0x80],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x74],7
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xDB0]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block30

 Block28:
	cmp eax,0x80004002
	je Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x54],si
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [esp+0x6C],4
	cmp word ptr [esp+0x44],si
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp word ptr [esp+0x24],si
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	lea eax,[esp+0x24]
	push eax
	call edi
	lea ecx,[esp+0x24]
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
	lea edx,[esp+0x44]
	push edx
	mov dword ptr [esp+0x70],esi
	call edi
	lea eax,[esp+0x44]
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
	push 0
	push 0
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x50]
	push edx
	push ecx
	mov dword ptr [esp+0x88],esp
	mov ecx,esp
	mov bl,9
	push offset _S_UIUIWINDOWIMGDUA__1
	mov byte ptr [esp+0x84],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x80],0xA
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea eax,[esp+0x68]
	mov byte ptr [esp+0x80],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x74],0xB
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xDB8]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block51

 Block49:
	cmp eax,0x80004002
	je Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x54],si
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov byte ptr [esp+0x6C],8
	cmp word ptr [esp+0x44],si
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp word ptr [esp+0x24],si
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block63:
	lea ecx,[esp+0x24]
	push ecx
	call edi
	lea edx,[esp+0x24]
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
	lea eax,[esp+0x44]
	mov ebx,0xC
	push eax
	mov dword ptr [esp+0x70],ebx
	call edi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	push 0
	push 0
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x50]
	push eax
	push ecx
	mov dword ptr [esp+0x88],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMGDUA__4
	mov byte ptr [esp+0x84],0xD
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x80],0xE
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea ecx,[esp+0x68]
	push ecx
	mov byte ptr [esp+0x84],0xD
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x74],0xF
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xDB4]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block72

 Block70:
	cmp eax,0x80004002
	je Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	mov byte ptr [esp+0x6C],0xD
	cmp word ptr [esp+0x54],si
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x44],si
	jne Block79

 Block77:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp word ptr [esp+0x24],si
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	lea edx,[esp+0x24]
	push edx
	call edi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	lea ecx,[esp+0x44]
	mov ebx,0x10
	push ecx
	mov dword ptr [esp+0x70],ebx
	call edi
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x6C],0x11
	test ecx,ecx
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	lea eax,[esp+0x24]
	push eax
	lea edx,[esp+0x48]
	push edx
	push 0xC00616FC
	push 0x64
	push 0x320
	push 0x3E
	push 6
	lea eax,[esp+0x90]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0xDA8]
	cmp esi,eax
	je Block95

 Block91:
	mov dword ptr [ebp+0xDA8],eax
	test eax,eax
	je Block93

 Block92:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block93:
	test esi,esi
	je Block95

 Block94:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block95:
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block97

 Block96:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block97:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x6C],bl
	jne Block100

 Block98:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block101:
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	jne Block104

 Block102:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block105:
	cmp dword ptr [ebp+0xDA8],0
	je Block122

 Block106:
	mov esi,dword ptr [ebp+0xDA8]
	test esi,esi
	jne Block108

 Block107:
	push 0x80004003
	call _com_issue_error

 Block108:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block110

 Block109:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block110:
	push 0
	lea ecx,[esp+0x78]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov ebx,0x12
	mov edx,0xD
	mov dword ptr [esp+0x6C],ebx
	mov word ptr [esp+0x24],dx
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block112

 Block111:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block112:
	mov esi,dword ptr [ebp+0xDA8]
	mov byte ptr [esp+0x6C],0x13
	test esi,esi
	jne Block114

 Block113:
	push 0x80004003
	call _com_issue_error

 Block114:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block116

 Block115:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block116:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x6C],bl
	jne Block119

 Block117:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block120:
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	test eax,eax
	je Block122

 Block121:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block122:
	lea eax,[esp+0x24]
	push eax
	call edi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block124

 Block123:
	push eax
	call _com_issue_error

 Block124:
	lea edx,[esp+0x44]
	push edx
	mov dword ptr [esp+0x70],0x14
	call edi
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block126

 Block125:
	push eax
	call _com_issue_error

 Block126:
	push 0
	push 0
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x50]
	push edx
	push ecx
	mov dword ptr [esp+0x88],esp
	mov ecx,esp
	mov bl,0x15
	push offset _S_UIUIWINDOWIMGPAR__19
	mov byte ptr [esp+0x84],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x80],0x16
	jne Block128

 Block127:
	push 0x80004003
	call _com_issue_error

 Block128:
	lea eax,[esp+0x68]
	mov byte ptr [esp+0x80],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x74],0x17
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xDD8]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block131

 Block129:
	cmp eax,0x80004002
	je Block131

 Block130:
	push eax
	call _com_issue_error

 Block131:
	mov esi,8
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x54],si
	jne Block134

 Block132:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	test eax,eax
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block135:
	mov byte ptr [esp+0x6C],0x14
	cmp word ptr [esp+0x44],si
	jne Block138

 Block136:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block138:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block139:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp word ptr [esp+0x24],si
	jne Block142

 Block140:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block143

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block142:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block143:
	lea ecx,[esp+0x24]
	push ecx
	call edi
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block145

 Block144:
	push eax
	call _com_issue_error

 Block145:
	lea eax,[esp+0x44]
	push eax
	mov dword ptr [esp+0x70],0x18
	call edi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block147

 Block146:
	push eax
	call _com_issue_error

 Block147:
	push 0
	push 0
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x50]
	push eax
	push ecx
	mov dword ptr [esp+0x88],esp
	mov ecx,esp
	mov bl,0x19
	push offset _S_UIUIWINDOWIMGPAR__18
	mov byte ptr [esp+0x84],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x80],0x1A
	jne Block149

 Block148:
	push 0x80004003
	call _com_issue_error

 Block149:
	lea ecx,[esp+0x68]
	push ecx
	mov byte ptr [esp+0x84],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x74],0x1B
	call Ztl_variant_t::GetUnknown
	lea esi,[ebp+0xDCC]
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block152

 Block150:
	cmp eax,0x80004002
	je Block152

 Block151:
	push eax
	call _com_issue_error

 Block152:
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0x6C],bl
	jne Block155

 Block153:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	test eax,eax
	je Block156

 Block154:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block156

 Block155:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block156:
	mov ebx,8
	mov byte ptr [esp+0x6C],0x18
	cmp word ptr [esp+0x44],bx
	jne Block159

 Block157:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block160

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block160

 Block159:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block160:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp word ptr [esp+0x24],bx
	jne Block163

 Block161:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block164

 Block162:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block164

 Block163:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block164:
	lea edx,[esp+0x24]
	push edx
	call edi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block166

 Block165:
	push eax
	call _com_issue_error

 Block166:
	lea ecx,[esp+0x44]
	push ecx
	mov dword ptr [esp+0x70],0x1C
	call edi
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block168

 Block167:
	push eax
	call _com_issue_error

 Block168:
	push 0
	push 0
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x50]
	push ecx
	push ecx
	mov dword ptr [esp+0x88],esp
	mov ecx,esp
	mov bl,0x1D
	push offset _S_UIUIWINDOWIMGPAR__17
	mov byte ptr [esp+0x84],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x80],0x1E
	jne Block170

 Block169:
	push 0x80004003
	call _com_issue_error

 Block170:
	lea edx,[esp+0x68]
	mov byte ptr [esp+0x80],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x74],0x1F
	call Ztl_variant_t::GetUnknown
	lea edi,[ebp+0xDD0]
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block173

 Block171:
	cmp eax,0x80004002
	je Block173

 Block172:
	push eax
	call _com_issue_error

 Block173:
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0x6C],bl
	jne Block176

 Block174:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block177

 Block175:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block177

 Block176:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block177:
	mov ebx,8
	mov byte ptr [esp+0x6C],0x1C
	cmp word ptr [esp+0x44],bx
	jne Block180

 Block178:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block181

 Block179:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block181

 Block180:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block181:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp word ptr [esp+0x24],bx
	jne Block184

 Block182:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block185

 Block183:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block185

 Block184:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block185:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push eax
	call ebx
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block187

 Block186:
	push eax
	call _com_issue_error

 Block187:
	lea edx,[esp+0x44]
	push edx
	mov dword ptr [esp+0x70],0x20
	call ebx
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block189

 Block188:
	push eax
	call _com_issue_error

 Block189:
	push 0
	push 0
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x50]
	push edx
	push ecx
	mov dword ptr [esp+0x88],esp
	mov ecx,esp
	mov bl,0x21
	push offset _S_UIUIWINDOWIMGPAR__16
	mov byte ptr [esp+0x84],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x80],0x22
	jne Block191

 Block190:
	push 0x80004003
	call _com_issue_error

 Block191:
	lea eax,[esp+0x68]
	mov byte ptr [esp+0x80],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x74],0x23
	call Ztl_variant_t::GetUnknown
	add ebp,0xDD4
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block194

 Block192:
	cmp eax,0x80004002
	je Block194

 Block193:
	push eax
	call _com_issue_error

 Block194:
	mov byte ptr [esp+0x6C],bl
	mov ebx,8
	cmp word ptr [esp+0x54],bx
	jne Block197

 Block195:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	test eax,eax
	je Block198

 Block196:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block198

 Block197:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block198:
	mov byte ptr [esp+0x6C],0x20
	cmp word ptr [esp+0x44],bx
	jne Block201

 Block199:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block202

 Block200:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block202

 Block201:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block202:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp word ptr [esp+0x24],bx
	jne Block205

 Block203:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block206

 Block204:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block206

 Block205:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block206:
	mov esi,dword ptr [esi]
	test esi,esi
	jne Block208

 Block207:
	push 0x80004003
	call _com_issue_error

 Block208:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x74]
	push edx
	push esi
	mov dword ptr [esp+0x7C],0
	call eax
	test eax,eax
	jge Block210

 Block209:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block210:
	mov esi,dword ptr [edi]
	mov ebx,dword ptr [esp+0x74]
	test esi,esi
	jne Block212

 Block211:
	push 0x80004003
	call _com_issue_error

 Block212:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block214

 Block213:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block214:
	mov esi,dword ptr [ebp]
	mov edi,dword ptr [esp+0x14]
	test esi,esi
	jne Block216

 Block215:
	push 0x80004003
	call _com_issue_error

 Block216:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],0
	call eax
	test eax,eax
	jge Block218

 Block217:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block218:
	mov ecx,dword ptr [esp+0x18]
	lea esi,[ecx+edi*8]
	lea edx,[esp+0x24]
	add esi,ebx
	mov ebx,dword ptr [ZImports::_VariantInit]
	push edx
	call ebx
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block220

 Block219:
	push eax
	call _com_issue_error

 Block220:
	lea ecx,[esp+0x44]
	push ecx
	mov dword ptr [esp+0x70],0x24
	call ebx
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block222

 Block221:
	push eax
	call _com_issue_error

 Block222:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x6C],0x25
	test ecx,ecx
	jne Block224

 Block223:
	push 0x80004003
	call _com_issue_error

 Block224:
	lea eax,[esp+0x24]
	push eax
	lea edx,[esp+0x48]
	push edx
	push 0xC00616FC
	push 0x1E
	push esi
	push 0x64
	push 0
	lea eax,[esp+0x34]
	push eax
	call IWzGr2D::CreateLayer
	mov ebp,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax]
	mov edi,dword ptr [ebp+0xDBC]
	lea ecx,[ebp+0xDBC]
	mov dword ptr [esp+0x74],ecx
	cmp edi,eax
	je Block229

 Block225:
	mov dword ptr [ecx],eax
	test eax,eax
	je Block227

 Block226:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block227:
	test edi,edi
	je Block229

 Block228:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block229:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block231

 Block230:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block231:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x6C],0x24
	jne Block234

 Block232:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block235

 Block233:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block235

 Block234:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block235:
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	jne Block238

 Block236:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block239

 Block237:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block239

 Block238:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block239:
	lea ecx,[esp+0x24]
	push ecx
	call ebx
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block241

 Block240:
	push eax
	call _com_issue_error

 Block241:
	lea eax,[esp+0x44]
	push eax
	mov dword ptr [esp+0x70],0x26
	call ebx
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block243

 Block242:
	push eax
	call _com_issue_error

 Block243:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x6C],0x27
	test ecx,ecx
	jne Block245

 Block244:
	push 0x80004003
	call _com_issue_error

 Block245:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x48]
	push eax
	push 0xC00616FC
	push 0x1E
	push esi
	push 0x64
	mov edx,0x320
	sub edx,esi
	push edx
	lea eax,[esp+0x38]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0xDC0]
	cmp esi,eax
	je Block250

 Block246:
	mov dword ptr [ebp+0xDC0],eax
	test eax,eax
	je Block248

 Block247:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block248:
	test esi,esi
	je Block250

 Block249:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block250:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block252

 Block251:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block252:
	mov esi,8
	mov byte ptr [esp+0x6C],0x26
	cmp word ptr [esp+0x44],si
	jne Block255

 Block253:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block256

 Block254:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block256

 Block255:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block256:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp word ptr [esp+0x24],si
	jne Block259

 Block257:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block260

 Block258:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block260

 Block259:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block260:
	mov esi,dword ptr [ebp+0xDC0]
	test esi,esi
	jne Block262

 Block261:
	push 0x80004003
	call _com_issue_error

 Block262:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xD8]
	push 1
	push esi
	call eax
	test eax,eax
	jge Block264

 Block263:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block264:
	mov edi,dword ptr [esp+0x74]
	xor ebp,ebp
	xor ebx,ebx

 Block265:
	cmp dword ptr [edi],ebp
	je Block281

 Block266:
	mov esi,dword ptr [edi]
	cmp esi,ebp
	je Block5

 Block267:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push esi
	call edx
	cmp eax,ebp
	jge Block269

 Block268:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block269:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push ebp
	lea eax,[esp+0x24]
	push eax
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x6C],0x28
	mov word ptr [esp+0x34],cx
	mov dword ptr [esp+0x3C],eax
	cmp eax,ebp
	je Block271

 Block270:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block271:
	mov esi,dword ptr [edi]
	mov byte ptr [esp+0x6C],0x29
	cmp esi,ebp
	je Block5

 Block272:
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebp
	jge Block274

 Block273:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block274:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x6C],0x28
	jne Block277

 Block275:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,ebp
	je Block278

 Block276:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block278

 Block277:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block278:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp eax,ebp
	je Block280

 Block279:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block280:
	mov dword ptr [edi+8],ebp

 Block281:
	inc ebx
	add edi,4
	cmp ebx,2
	jl Block265

 Block282:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret 4
}
}
// CField_HuntingAdballoon::OnMakeTimerParam
__SUB_CLASS_THIS(00151FF0, __thiscall, 143669,  CField_HuntingAdballoon, void, CClock::INITPARAM&, long&, long&) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push offset _S_MAPOBJETCIMGKILL__1
	lea ecx,[esi+0x18]
	call ZXString<char>::AssignCStr
	push offset _S_MAPOBJETCIMGKILL
	lea ecx,[esi+0x14]
	call ZXString<char>::AssignCStr
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [esi+0x1C],0x1A
	mov dword ptr [esi+0x20],0x32
	mov dword ptr [esi+0x24],0x6E
	mov dword ptr [esi+0x28],0x8C
	mov dword ptr [eax],0xFFFFFFA0
	mov dword ptr [ecx],5
	pop esi
	ret 0xC
}
}
