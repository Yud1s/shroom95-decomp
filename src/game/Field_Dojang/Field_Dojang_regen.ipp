#include "regen.hpp"
// Field_Dojang.ipp
#include "Field_Dojang.hpp"

// CField_Dojang::Update
_SUB_EXCEPTION_HANDLER(14EF10)
__SUB_CLASS_THIS0(0014EF10, __thiscall, 143776,  CField_Dojang, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14EF10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x64
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x78]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	xor ebx,ebx
	mov dword ptr [esp+0x20],ebx
	call CField::Update
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	call CMobPool::FindBossMob
	mov edi,dword ptr [ZImports::_VariantInit]
	mov ebp,eax
	cmp ebp,ebx
	je Block25

 Block1:
	lea eax,[esp+0x38]
	push eax
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	lea edx,[esp+0x28]
	push edx
	mov dword ptr [esp+0x84],ebx
	call edi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov ecx,dword ptr [esi+0xDB8]
	mov byte ptr [esp+0x80],1
	cmp ecx,ebx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x80],2
	cmp ecx,ebx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x2C]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x80],1
	cmp eax,ebx
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0x80],0
	cmp word ptr [esp+0x28],di
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x28]
	push ecx
	call ebx

 Block15:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x38],di
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[esp+0x38]
	push eax
	call ebx

 Block19:
	mov eax,dword ptr [ebp+0x568]
	cmp dword ptr [esi+0xDC8],eax
	je Block43

 Block20:
	cmp eax,0x64
	mov dword ptr [esi+0xDC8],eax
	jle Block22

 Block21:
	mov dword ptr [esi+0xDC8],0x64

 Block22:
	mov ecx,dword ptr [esi+0xDC8]
	imul ecx,0x131
	mov eax,0x51EB851F
	imul ecx
	mov ecx,dword ptr [esi+0xDB8]
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0xBC]
	push ecx
	call eax
	jmp Block43

 Block25:
	lea ecx,[esp+0x28]
	push ecx
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	lea eax,[esp+0x38]
	push eax
	mov dword ptr [esp+0x84],3
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov ecx,dword ptr [esi+0xDB8]
	mov bl,4
	mov byte ptr [esp+0x80],bl
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x80],5
	test ecx,ecx
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x3C]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x80],bl
	test eax,eax
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x80],3
	cmp word ptr [esp+0x38],si
	jne Block38

 Block36:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea ecx,[esp+0x38]
	push ecx
	call edi

 Block39:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x28],si
	jne Block42

 Block40:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea eax,[esp+0x28]
	push eax
	call edi

 Block43:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [esp+0x1C],ecx
	test ecx,ecx
	je Block45

 Block44:
	lea edx,[esp+0x28]
	push edx
	call CWvsContext::GetCharacterData
	cmp dword ptr [eax+4],0
	mov dword ptr [esp+0x20],1
	mov byte ptr [esp+0x17],1
	jne Block46

 Block45:
	mov byte ptr [esp+0x17],0

 Block46:
	test byte ptr [esp+0x20],1
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	je Block51

 Block47:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block51

 Block48:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block51

 Block49:
	push edi
	call ebp
	test esi,esi
	je Block51

 Block50:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block51:
	cmp byte ptr [esp+0x17],0
	je Block83

 Block52:
	mov esi,dword ptr [esp+0x1C]
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x20],ecx
	test eax,eax
	je Block57

 Block53:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block56

 Block54:
	push edi
	call ebp
	test esi,esi
	je Block56

 Block55:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block56:
	mov esi,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x2C],0

 Block57:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x48]
	push ecx
	call edi
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block59

 Block58:
	push eax
	call _com_issue_error

 Block59:
	lea eax,[esp+0x38]
	push eax
	mov dword ptr [esp+0x84],6
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [edx+0xDB4]
	mov bl,7
	mov byte ptr [esp+0x80],bl
	test ecx,ecx
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x80],8
	test ecx,ecx
	jne Block65

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],bl
	test eax,eax
	je Block67

 Block66:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block67:
	mov edi,8
	mov byte ptr [esp+0x80],6
	cmp word ptr [esp+0x38],di
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
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
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x48],di
	jne Block74

 Block72:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov ecx,dword ptr [esi+0x2138]
	push ecx
	lea edi,[esi+0x2130]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block101

 Block76:
	mov ebp,dword ptr [esp+0x20]
	mov edx,dword ptr [ebp+0x69]
	push edx
	lea esi,[ebp+0x61]
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,dword ptr [esp+0x20]
	add esp,8
	cmp dword ptr [ebx+0xDC0],eax
	jne Block78

 Block77:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax+0x2138]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp dword ptr [ebx+0xDC4],eax
	je Block101

 Block78:
	mov edx,dword ptr [ebp+0x69]
	push edx
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebx+0xDC0],eax
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [eax+0x2138]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	mov eax,dword ptr [ebx+0xDC0]
	imul eax,0x131
	cdq
	idiv ecx
	mov dword ptr [ebx+0xDC4],ecx
	add esp,0x10
	mov esi,eax
	mov eax,dword ptr [ebx+0xDB4]
	test eax,eax
	jne Block80

 Block79:
	push 0x80004003
	call _com_issue_error

 Block80:
	mov edx,dword ptr [eax]
	push esi
	push eax
	mov eax,dword ptr [edx+0xBC]
	call eax
	mov eax,dword ptr [ebx+0xDB4]
	test eax,eax
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	mov ecx,dword ptr [eax]
	mov edx,0xFFFFFFAE
	sub edx,esi
	push edx
	push eax
	mov eax,dword ptr [ecx+0x6C]
	call eax
	jmp Block101

 Block83:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push ecx
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block85

 Block84:
	push eax
	call _com_issue_error

 Block85:
	lea eax,[esp+0x48]
	push eax
	mov dword ptr [esp+0x84],9
	call esi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block87

 Block86:
	push eax
	call _com_issue_error

 Block87:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [edx+0xDB4]
	mov bl,0xA
	mov byte ptr [esp+0x80],bl
	test ecx,ecx
	jne Block89

 Block88:
	push 0x80004003
	call _com_issue_error

 Block89:
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x80],0xB
	test ecx,ecx
	jne Block91

 Block90:
	push 0x80004003
	call _com_issue_error

 Block91:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],bl
	test eax,eax
	je Block93

 Block92:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block93:
	mov esi,8
	mov byte ptr [esp+0x80],9
	cmp word ptr [esp+0x48],si
	jne Block96

 Block94:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block97:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x38],si
	jne Block100

 Block98:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block101:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block245

 Block102:
	mov eax,dword ptr [eax+0x40D0]
	mov edi,dword ptr [esp+0x18]
	cmp dword ptr [edi+0xDCC],eax
	je Block245

 Block103:
	cmp eax,0x2710
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	mov dword ptr [edi+0xDCC],eax
	push ecx
	jge Block176

 Block104:
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block106

 Block105:
	push eax
	call _com_issue_error

 Block106:
	lea eax,[esp+0x48]
	push eax
	mov dword ptr [esp+0x84],0xC
	call esi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block108

 Block107:
	push eax
	call _com_issue_error

 Block108:
	mov ecx,dword ptr [edi+0xDAC]
	mov bl,0xD
	mov byte ptr [esp+0x80],bl
	test ecx,ecx
	jne Block110

 Block109:
	push 0x80004003
	call _com_issue_error

 Block110:
	lea edx,[esp+0x24]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x80],0xE
	test ecx,ecx
	jne Block112

 Block111:
	push 0x80004003
	call _com_issue_error

 Block112:
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x4C]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],bl
	test eax,eax
	je Block114

 Block113:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block114:
	mov ebp,8
	mov byte ptr [esp+0x80],0xC
	cmp word ptr [esp+0x48],bp
	jne Block121

 Block115:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block117

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block117:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block118:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x38],bp
	jne Block122

 Block119:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block123

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block121:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x48]
	push ecx
	call edi
	jmp Block118

 Block122:
	lea eax,[esp+0x38]
	push eax
	call edi

 Block123:
	lea ecx,[esp+0x38]
	push ecx
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block125

 Block124:
	push eax
	call _com_issue_error

 Block125:
	lea eax,[esp+0x48]
	push eax
	mov dword ptr [esp+0x84],0xF
	call esi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block127

 Block126:
	push eax
	call _com_issue_error

 Block127:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [edx+0xDBC]
	mov bl,0x10
	mov byte ptr [esp+0x80],bl
	test ecx,ecx
	jne Block129

 Block128:
	push 0x80004003
	call _com_issue_error

 Block129:
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x80],0x11
	test ecx,ecx
	jne Block131

 Block130:
	push 0x80004003
	call _com_issue_error

 Block131:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],bl
	test eax,eax
	je Block133

 Block132:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block133:
	mov byte ptr [esp+0x80],0xF
	cmp word ptr [esp+0x48],bp
	jne Block136

 Block134:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block137

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block137

 Block136:
	lea ecx,[esp+0x48]
	push ecx
	call edi

 Block137:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x38],bp
	jne Block140

 Block138:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea eax,[esp+0x38]
	push eax
	call edi

 Block141:
	lea ecx,[esp+0x38]
	push ecx
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block143

 Block142:
	push eax
	call _com_issue_error

 Block143:
	lea eax,[esp+0x48]
	push eax
	mov dword ptr [esp+0x84],0x12
	call esi
	lea ecx,[esp+0x48]
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
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [edx+0xDB0]
	mov bl,0x13
	mov byte ptr [esp+0x80],bl
	test ecx,ecx
	jne Block147

 Block146:
	push 0x80004003
	call _com_issue_error

 Block147:
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x80],0x14
	test ecx,ecx
	jne Block149

 Block148:
	push 0x80004003
	call _com_issue_error

 Block149:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],bl
	test eax,eax
	je Block151

 Block150:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block151:
	mov byte ptr [esp+0x80],0x12
	cmp word ptr [esp+0x48],bp
	jne Block154

 Block152:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block155

 Block154:
	lea ecx,[esp+0x48]
	push ecx
	call edi

 Block155:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x38],bp
	jne Block158

 Block156:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea eax,[esp+0x38]
	push eax
	call edi

 Block159:
	lea ecx,[esp+0x38]
	push ecx
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block161

 Block160:
	push eax
	call _com_issue_error

 Block161:
	lea eax,[esp+0x48]
	mov ebx,0x15
	push eax
	mov dword ptr [esp+0x84],ebx
	call esi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block163

 Block162:
	push eax
	call _com_issue_error

 Block163:
	mov esi,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi+0xDB0]
	mov byte ptr [esp+0x80],0x16
	test ecx,ecx
	jne Block165

 Block164:
	push 0x80004003
	call _com_issue_error

 Block165:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x48],bp
	jne Block168

 Block166:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block169

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block169

 Block168:
	lea edx,[esp+0x48]
	push edx
	call edi

 Block169:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x38],bp
	jne Block172

 Block170:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block173

 Block171:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block173

 Block172:
	lea ecx,[esp+0x38]
	push ecx
	call edi

 Block173:
	mov ecx,dword ptr [esi+0xDCC]
	imul ecx,0x4D
	mov eax,0x68DB8BAD
	imul ecx
	mov ecx,dword ptr [esi+0xDBC]
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	test ecx,ecx
	jne Block175

 Block174:
	push 0x80004003
	call _com_issue_error

 Block175:
	mov edx,dword ptr [ecx]
	mov esi,0x4D
	sub esi,eax
	mov eax,dword ptr [edx+0xC4]
	push esi
	push ecx
	call eax
	jmp Block245

 Block176:
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block178

 Block177:
	push eax
	call _com_issue_error

 Block178:
	lea eax,[esp+0x48]
	push eax
	mov dword ptr [esp+0x84],0x17
	call esi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block180

 Block179:
	push eax
	call _com_issue_error

 Block180:
	mov ecx,dword ptr [edi+0xDAC]
	mov bl,0x18
	mov byte ptr [esp+0x80],bl
	test ecx,ecx
	jne Block182

 Block181:
	push 0x80004003
	call _com_issue_error

 Block182:
	lea edx,[esp+0x24]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x80],0x19
	test ecx,ecx
	jne Block184

 Block183:
	push 0x80004003
	call _com_issue_error

 Block184:
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x4C]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],bl
	test eax,eax
	je Block186

 Block185:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block186:
	mov ebx,8
	mov byte ptr [esp+0x80],0x17
	cmp word ptr [esp+0x48],bx
	jne Block193

 Block187:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block189

 Block188:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block189:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block190:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x38],bx
	jne Block194

 Block191:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block195

 Block192:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block195

 Block193:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x48]
	push ecx
	call edi
	jmp Block190

 Block194:
	lea eax,[esp+0x38]
	push eax
	call edi

 Block195:
	lea ecx,[esp+0x38]
	push ecx
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block197

 Block196:
	push eax
	call _com_issue_error

 Block197:
	lea eax,[esp+0x48]
	push eax
	mov dword ptr [esp+0x84],0x1A
	call esi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block199

 Block198:
	push eax
	call _com_issue_error

 Block199:
	mov ebp,dword ptr [esp+0x18]
	mov ecx,dword ptr [ebp+0xDBC]
	mov bl,0x1B
	mov byte ptr [esp+0x80],bl
	test ecx,ecx
	jne Block201

 Block200:
	push 0x80004003
	call _com_issue_error

 Block201:
	lea edx,[esp+0x24]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x80],0x1C
	test ecx,ecx
	jne Block203

 Block202:
	push 0x80004003
	call _com_issue_error

 Block203:
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x4C]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],bl
	test eax,eax
	je Block205

 Block204:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block205:
	mov ebx,8
	mov byte ptr [esp+0x80],0x1A
	cmp word ptr [esp+0x48],bx
	jne Block208

 Block206:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block209

 Block207:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block209

 Block208:
	lea ecx,[esp+0x48]
	push ecx
	call edi

 Block209:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x38],bx
	jne Block212

 Block210:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block213

 Block211:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block213

 Block212:
	lea eax,[esp+0x38]
	push eax
	call edi

 Block213:
	lea ecx,[esp+0x38]
	push ecx
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block215

 Block214:
	push eax
	call _com_issue_error

 Block215:
	lea eax,[esp+0x48]
	push eax
	mov dword ptr [esp+0x84],0x1D
	call esi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block217

 Block216:
	push eax
	call _com_issue_error

 Block217:
	mov ecx,dword ptr [ebp+0xDB0]
	mov bl,0x1E
	mov byte ptr [esp+0x80],bl
	test ecx,ecx
	jne Block219

 Block218:
	push 0x80004003
	call _com_issue_error

 Block219:
	lea edx,[esp+0x24]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x80],0x1F
	test ecx,ecx
	jne Block221

 Block220:
	push 0x80004003
	call _com_issue_error

 Block221:
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x4C]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],bl
	test eax,eax
	je Block223

 Block222:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block223:
	mov ebx,8
	mov byte ptr [esp+0x80],0x1D
	cmp word ptr [esp+0x48],bx
	jne Block226

 Block224:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block227

 Block225:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block227

 Block226:
	lea ecx,[esp+0x48]
	push ecx
	call edi

 Block227:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x38],bx
	jne Block230

 Block228:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block231

 Block229:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block231

 Block230:
	lea eax,[esp+0x38]
	push eax
	call edi

 Block231:
	lea ecx,[esp+0x68]
	push ecx
	call esi
	lea edx,[esp+0x68]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block233

 Block232:
	push eax
	call _com_issue_error

 Block233:
	lea eax,[esp+0x58]
	mov ebx,0x20
	push eax
	mov dword ptr [esp+0x84],ebx
	call esi
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block235

 Block234:
	push eax
	call _com_issue_error

 Block235:
	mov ecx,dword ptr [ebp+0xDB0]
	mov byte ptr [esp+0x80],0x21
	test ecx,ecx
	jne Block237

 Block236:
	push 0x80004003
	call _com_issue_error

 Block237:
	lea edx,[esp+0x68]
	push edx
	lea eax,[esp+0x5C]
	push eax
	push ebx
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],si
	jne Block240

 Block238:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	test eax,eax
	je Block241

 Block239:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block241

 Block240:
	lea edx,[esp+0x58]
	push edx
	call edi

 Block241:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x68],si
	jne Block244

 Block242:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block245

 Block243:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block245

 Block244:
	lea ecx,[esp+0x68]
	push ecx
	call edi

 Block245:
	mov ecx,dword ptr [esp+0x18]
	call CField_Dojang::UpdateTimer
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret
}
}
// CField_Dojang::Init
_SUB_EXCEPTION_HANDLER(14FFA0)
__SUB_CLASS_THIS(0014FFA0, __thiscall, 143777,  CField_Dojang, void, void*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14FFA0
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
	mov esi,ecx
	mov eax,dword ptr [ebp+8]
	push eax
	call CField::Init
	push 0
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x20],esp
	mov dword ptr [eax],0
	push 0x32
	push 0xFFFFFF19
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x1C],esp
	push 1
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov dword ptr [ebp-4],0
	call CWndMan::GetOrgWindow
	lea edx,[ebp-0x18]
	push 0x11D0
	push edx
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],2
	push 0
	push eax
	lea eax,[ebp-0x14]
	push eax
	mov byte ptr [ebp-4],3
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xDA0]
	add esp,0x28
	cmp edi,eax
	je Block5

 Block1:
	mov dword ptr [esi+0xDA0],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	test edi,edi
	je Block5

 Block4:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block5:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block7:
	mov eax,dword ptr [ebp-0x18]
	or ebx,0xFFFFFFFF
	mov dword ptr [ebp-4],ebx
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block9:
	push 0
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x1C],esp
	mov dword ptr [eax],0
	push 0x1A
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x20],esp
	push 1
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov dword ptr [ebp-4],4
	call CWndMan::GetOrgWindow
	lea edx,[ebp-0x14]
	push 0x11D2
	push edx
	mov byte ptr [ebp-4],5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],6
	push 0
	push eax
	lea eax,[ebp-0x18]
	push eax
	mov byte ptr [ebp-4],7
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xDA4]
	add esp,0x28
	cmp edi,eax
	je Block14

 Block10:
	mov dword ptr [esi+0xDA4],eax
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block12:
	test edi,edi
	je Block14

 Block13:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block14:
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block16:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],ebx
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block18:
	push 0
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x1C],esp
	mov dword ptr [eax],0
	push 0x32
	push 0xE7
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x20],esp
	push 1
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov dword ptr [ebp-4],8
	call CWndMan::GetOrgWindow
	lea edx,[ebp-0x14]
	push 0x11D1
	push edx
	mov byte ptr [ebp-4],9
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0xA
	push 0
	push eax
	lea eax,[ebp-0x18]
	push eax
	mov byte ptr [ebp-4],0xB
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xDA8]
	add esp,0x28
	cmp edi,eax
	je Block23

 Block19:
	mov dword ptr [esi+0xDA8],eax
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block21:
	test edi,edi
	je Block23

 Block22:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block23:
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block25

 Block24:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block25:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],ebx
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block27:
	push 0
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x1C],esp
	mov dword ptr [eax],0
	push 0x82
	push 0x14
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x20],esp
	push 0
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov dword ptr [ebp-4],0xC
	call CWndMan::GetOrgWindow
	lea edx,[ebp-0x14]
	push 0x11D3
	push edx
	mov byte ptr [ebp-4],0xD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0xE
	push 0
	push eax
	lea eax,[ebp-0x18]
	push eax
	mov byte ptr [ebp-4],0xF
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xDAC]
	add esp,0x28
	cmp edi,eax
	je Block32

 Block28:
	mov dword ptr [esi+0xDAC],eax
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block30:
	test edi,edi
	je Block32

 Block31:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block32:
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block34

 Block33:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block34:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],ebx
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block36:
	push 0
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x1C],esp
	mov dword ptr [eax],0
	push 0x50
	push 9
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x20],esp
	push 0
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov dword ptr [ebp-4],0x10
	call CWndMan::GetOrgWindow
	lea edx,[ebp-0x14]
	push 0x11D4
	push edx
	mov byte ptr [ebp-4],0x11
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x12
	push 0
	push eax
	lea eax,[ebp-0x18]
	push eax
	mov byte ptr [ebp-4],0x13
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xDB0]
	add esp,0x28
	cmp edi,eax
	je Block41

 Block37:
	mov dword ptr [esi+0xDB0],eax
	test eax,eax
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block39:
	test edi,edi
	je Block41

 Block40:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block41:
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block43

 Block42:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block43:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],ebx
	test eax,eax
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block45:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x30]
	push ecx
	call edi
	lea edx,[ebp-0x30]
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
	lea eax,[ebp-0x40]
	push eax
	mov dword ptr [ebp-4],0x14
	call edi
	lea ecx,[ebp-0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block49

 Block48:
	push eax
	call _com_issue_error

 Block49:
	mov ecx,dword ptr [esi+0xDB0]
	mov bl,0x15
	mov byte ptr [ebp-4],bl
	test ecx,ecx
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	lea edx,[ebp-0x18]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x16
	test ecx,ecx
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	lea eax,[ebp-0x30]
	push eax
	lea edx,[ebp-0x40]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block55:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [ebp-4],0x14
	cmp word ptr [ebp-0x40],bx
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[ebp-0x40]
	push ecx
	call edi

 Block59:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp word ptr [ebp-0x30],bx
	jne Block62

 Block60:
	mov eax,dword ptr [ebp-0x28]
	xor edx,edx
	mov word ptr [ebp-0x30],dx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[ebp-0x30]
	push eax
	call edi

 Block63:
	push 0
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x1C],esp
	mov dword ptr [eax],0
	push 0x20
	push 0xFFFFFFAD
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x20],esp
	push 1
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov dword ptr [ebp-4],0x17
	call CWndMan::GetOrgWindow
	lea edx,[ebp-0x14]
	push 0x11D5
	push edx
	mov byte ptr [ebp-4],0x18
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x19
	push 0
	push eax
	lea eax,[ebp-0x18]
	push eax
	mov byte ptr [ebp-4],0x1A
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xDB4]
	add esp,0x28
	cmp edi,eax
	je Block68

 Block64:
	mov dword ptr [esi+0xDB4],eax
	test eax,eax
	je Block66

 Block65:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block66:
	test edi,edi
	je Block68

 Block67:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block68:
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block70

 Block69:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block70:
	mov eax,dword ptr [ebp-0x14]
	or ebx,0xFFFFFFFF
	mov dword ptr [ebp-4],ebx
	test eax,eax
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block72:
	push 0
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x1C],esp
	mov dword ptr [eax],0
	push 0x20
	push 0x52
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x20],esp
	push 1
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov dword ptr [ebp-4],0x1B
	call CWndMan::GetOrgWindow
	lea edx,[ebp-0x14]
	push 0x11D5
	push edx
	mov byte ptr [ebp-4],0x1C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x1D
	push 0
	push eax
	lea eax,[ebp-0x18]
	push eax
	mov byte ptr [ebp-4],0x1E
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xDB8]
	add esp,0x28
	cmp edi,eax
	je Block77

 Block73:
	mov dword ptr [esi+0xDB8],eax
	test eax,eax
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block75:
	test edi,edi
	je Block77

 Block76:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block77:
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block79

 Block78:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block79:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],ebx
	test eax,eax
	je Block81

 Block80:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block81:
	push 0
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x1C],esp
	mov dword ptr [eax],0
	push 0x56
	push 0x11
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x20],esp
	push 0
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov dword ptr [ebp-4],0x1F
	call CWndMan::GetOrgWindow
	lea edx,[ebp-0x14]
	push 0x11D6
	push edx
	mov byte ptr [ebp-4],0x20
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x21
	push 0
	push eax
	lea eax,[ebp-0x18]
	push eax
	mov byte ptr [ebp-4],0x22
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xDBC]
	add esp,0x28
	cmp edi,eax
	je Block86

 Block82:
	mov dword ptr [esi+0xDBC],eax
	test eax,eax
	je Block84

 Block83:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block84:
	test edi,edi
	je Block86

 Block85:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block86:
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block88

 Block87:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block88:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],ebx
	test eax,eax
	je Block90

 Block89:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block90:
	mov eax,dword ptr [esi+0xDBC]
	test eax,eax
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0xC4]
	push 0x4D
	push eax
	call edx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x40]
	push eax
	call edi
	lea ecx,[ebp-0x40]
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
	lea edx,[ebp-0x30]
	push edx
	mov dword ptr [ebp-4],0x23
	call edi
	lea eax,[ebp-0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	push 0
	push 0
	lea ecx,[ebp-0x40]
	push ecx
	lea edx,[ebp-0x30]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x1C],esp
	push 0x11D7
	mov bl,0x24
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x25
	jne Block98

 Block97:
	push 0x80004003
	call _com_issue_error

 Block98:
	lea ecx,[ebp-0x50]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x26
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block101

 Block99:
	cmp eax,0x80004002
	je Block101

 Block100:
	push eax
	call _com_issue_error

 Block101:
	mov edi,8
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp-0x50],di
	jne Block104

 Block102:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block105:
	mov byte ptr [ebp-4],0x29
	cmp word ptr [ebp-0x30],di
	jne Block108

 Block106:
	mov eax,dword ptr [ebp-0x28]
	xor ecx,ecx
	mov word ptr [ebp-0x30],cx
	test eax,eax
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea edx,[ebp-0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block109:
	mov byte ptr [ebp-4],0x2A
	cmp word ptr [ebp-0x40],di
	jne Block112

 Block110:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block113

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block112:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block113:
	mov ebx,dword ptr [ebp-0x14]
	test ebx,ebx
	je Block126

 Block114:
	xor edi,edi
	add esi,0xDD4
	lea ebx,[ebx]

 Block115:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x1C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x60]
	mov byte ptr [ebp-4],0x2B
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x2A
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp-0x20]
	push eax
	mov byte ptr [ebp-4],0x2C
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x2D
	mov dword ptr [ebp-0x1C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block117

 Block116:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block117:
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	test eax,eax
	jge Block119

 Block118:
	cmp eax,0x80004002
	jne Block46

 Block119:
	mov eax,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],0x2C
	test eax,eax
	je Block121

 Block120:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block121:
	cmp word ptr [ebp-0x60],8
	mov byte ptr [ebp-4],0x2A
	jne Block124

 Block122:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea ecx,[ebp-0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block125:
	inc edi
	add esi,4
	cmp edi,0xA
	jl Block115

 Block126:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test ebx,ebx
	je Block128

 Block127:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block128:
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
	ret 4
}
}
// CField_Dojang::DrawDigit
_SUB_EXCEPTION_HANDLER(14EBB0)
__SUB_CLASS_THIS(0014EBB0, __thiscall, 143781,  CField_Dojang, void, long, long, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14EBB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x18],ebx
	xor esi,esi
	cmp dword ptr [ebx+0xDD0],esi
	sete al
	test al,al
	jne Block26

 Block1:
	mov eax,3
	mov word ptr [esp+0x1C],ax
	mov dword ptr [esp+0x24],esi
	mov ecx,dword ptr [ebx+0xDD0]
	mov dword ptr [esp+0x44],esi
	cmp ecx,esi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x44],2
	jne Block6

 Block4:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,esi
	je Block7

 Block5:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block7

 Block6:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block7:
	mov ebp,dword ptr [esp+0x14]
	cmp ebp,esi
	sete al
	test al,al
	je Block10

 Block8:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp ebp,esi
	je Block26

 Block9:
	jmp Block25

 Block10:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	mov edi,dword ptr [esp+0x54]
	mov eax,0xCCCCCCCD
	mul edi
	mov esi,edx
	shr esi,3
	xor edx,edx
	mov eax,esi
	mov ecx,0xA
	div ecx
	mov byte ptr [esp+0x44],3
	mov edx,dword ptr [ebx+edx*4+0xDD4]
	test ebp,ebp
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov ebx,dword ptr [esp+0x50]
	mov ecx,dword ptr [esp+0x4C]
	lea eax,[esp+0x2C]
	push eax
	push edx
	push ebx
	push ecx
	mov ecx,ebp
	call IWzCanvas::Copy
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x44],2
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block18:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	mov ecx,dword ptr [esp+0x18]
	lea eax,[esi+esi*4]
	add eax,eax
	sub edi,eax
	mov edi,dword ptr [ecx+edi*4+0xDD4]
	mov eax,dword ptr [esp+0x4C]
	lea edx,[esp+0x2C]
	push edx
	push edi
	push ebx
	add eax,0x17
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x54],4
	call IWzCanvas::Copy
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x44],2
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov dword ptr [esp+0x44],0xFFFFFFFF

 Block25:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block26:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret 0xC
}
}
// CField_Dojang::UpdateTimer
_SUB_EXCEPTION_HANDLER(14EDF0)
__SUB_CLASS_THIS0(0014EDF0, __thiscall, 143776,  CField_Dojang, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14EDF0
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
	mov edi,ecx
	cmp dword ptr [edi+0xDFC],0
	je Block6

 Block1:
	call dword ptr [ZImports::_timeGetTime]
	mov ecx,dword ptr [edi+0xDFC]
	sub ecx,eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	test esi,esi
	jg Block4

 Block2:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x14],esp
	push 0x9EE
	xor esi,esi
	push eax
	mov dword ptr [edi+0xDFC],esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,edi
	call CField::ShowScreenEffect
	lea ecx,[esp+0xC]
	push 0xA24
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [esp+0x24],esi
	call play_field_sound
	mov eax,dword ptr [esp+0x14]
	add esp,8
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	cmp dword ptr [edi+0xE00],esi
	je Block6

 Block5:
	mov eax,0x88888889
	imul esi
	add edx,esi
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	push eax
	push 0
	push 0
	mov ecx,edi
	mov dword ptr [edi+0xE00],esi
	call CField_Dojang::DrawDigit
	mov eax,dword ptr [edi+0xE00]
	cdq
	mov ecx,0x3C
	idiv ecx
	mov ecx,edi
	push edx
	push 0
	push 0x44
	call CField_Dojang::DrawDigit

 Block6:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret
}
}
// CField_Dojang::~CField_Dojang
_SUB_EXCEPTION_HANDLER(14EA60)
__SUB_CLASS_THIS0(0014EA60, __thiscall, 143776,  CField_Dojang, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14EA60
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
	int 3// TODO: 	mov dword ptr [esi],offset CField_Dojang::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_Dojang::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_Dojang::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_Dojang::`vftable'{for `ZRefCounted'}
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 0xA
	push 4
	lea eax,[esi+0xDD4]
	push eax
	mov dword ptr [esp+0x24],9
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0xDD0]
	mov byte ptr [esp+0x14],8
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xDBC]
	mov byte ptr [esp+0x14],7
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xDB8]
	mov byte ptr [esp+0x14],6
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xDB4]
	mov byte ptr [esp+0x14],5
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0xDB0]
	mov byte ptr [esp+0x14],4
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0xDAC]
	mov byte ptr [esp+0x14],3
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi+0xDA8]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov eax,dword ptr [esi+0xDA4]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov eax,dword ptr [esi+0xDA0]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
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
// CField_Dojang::GetFieldType
__SUB_CLASS_THIS0(0014EA30, __thiscall, 143778,  CField_Dojang, long) {
__asm {

 Block0:
	mov eax,0xE
	ret
}
}
// CField_Dojang::CField_Dojang
_SUB_EXCEPTION_HANDLER(14E950)
__SUB_CLASS_THIS0(0014E950, __thiscall, 143774,  CField_Dojang, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14E950
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
	int 3// TODO: 	mov dword ptr [esi],offset CField_Dojang::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_Dojang::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_Dojang::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_Dojang::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0xDA0],edi
	mov dword ptr [esi+0xDA4],edi
	mov dword ptr [esi+0xDA8],edi
	mov dword ptr [esi+0xDAC],edi
	mov dword ptr [esi+0xDB0],edi
	mov dword ptr [esi+0xDB4],edi
	mov dword ptr [esi+0xDB8],edi
	mov dword ptr [esi+0xDBC],edi
	mov dword ptr [esi+0xDC0],edi
	mov dword ptr [esi+0xDC4],edi
	mov dword ptr [esi+0xDC8],edi
	mov dword ptr [esi+0xDCC],edi
	mov dword ptr [esi+0xDD0],edi
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 0xA
	push 4
	lea eax,[esi+0xDD4]
	push eax
	mov byte ptr [esp+0x2C],9
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xDFC],edi
	mov dword ptr [esi+0xE00],edi
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
// CField_Dojang::OnClock
_SUB_EXCEPTION_HANDLER(150940)
__SUB_CLASS_THIS(00150940, __thiscall, 143780,  CField_Dojang, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_150940
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
	mov dword ptr [esp+0x14],edi
	mov esi,dword ptr [esp+0x7C]
	mov ecx,esi
	call CInPacket::Decode1
	movzx eax,al
	mov ebx,2
	cmp eax,ebx
	jne Block101

 Block1:
	mov ecx,esi
	call CInPacket::Decode4
	mov dword ptr [edi+0xE00],eax
	call dword ptr [ZImports::_timeGetTime]
	mov ecx,dword ptr [edi+0xE00]
	imul ecx,0x3E8
	add eax,ecx
	mov dword ptr [edi+0xDFC],eax
	mov dword ptr [esp+0x7C],0
	lea edx,[esp+0x10]
	push 0x3D0
	push edx
	mov dword ptr [esp+0x7C],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[esp+0x80]
	push ecx
	push eax
	mov byte ptr [esp+0x80],1
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x1C]
	add esp,0xC
	mov byte ptr [esp+0x74],0
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	sete cl
	test cl,cl
	je Block6

 Block4:
	mov dword ptr [esp+0x74],0xFFFFFFFF
	test eax,eax
	je Block101

 Block5:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x68
	ret 4

 Block6:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x78],bl
	call edi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov ecx,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x74],3
	test ecx,ecx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x20]
	push eax
	push 0x1C
	push 0x70
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0x74],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
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
	mov byte ptr [esp+0x74],0
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
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov edx,dword ptr [eax]
	push 0
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+0x70]
	call eax
	test eax,eax
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block24:
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	push 0
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block28

 Block27:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block28:
	lea eax,[esp+0x1C]
	push eax
	call edi
	lea ecx,[esp+0x1C]
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
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x78],4
	call edi
	lea eax,[esp+0x2C]
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
	push 0
	push 0
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x11D8
	mov bl,5
	push eax
	mov byte ptr [esp+0x90],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x88],6
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea ecx,[esp+0x70]
	push ecx
	mov byte ptr [esp+0x8C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x7C],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block37

 Block35:
	cmp eax,0x80004002
	je Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	mov esi,8
	mov byte ptr [esp+0x74],9
	cmp word ptr [esp+0x5C],si
	jne Block44

 Block38:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block40

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block40:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block41:
	mov byte ptr [esp+0x74],0xA
	cmp word ptr [esp+0x2C],si
	jne Block45

 Block42:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block46

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block44:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x5C]
	push eax
	call ebx
	jmp Block41

 Block45:
	lea edx,[esp+0x2C]
	push edx
	call ebx

 Block46:
	mov byte ptr [esp+0x74],0xB
	cmp word ptr [esp+0x1C],si
	jne Block49

 Block47:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea ecx,[esp+0x1C]
	push ecx
	call ebx

 Block50:
	mov esi,dword ptr [esp+0x10]
	test esi,esi
	je Block59

 Block51:
	lea edx,[esp+0x3C]
	push edx
	call edi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	mov ecx,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x74],0xC
	test ecx,ecx
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	lea edx,[esp+0x3C]
	push edx
	push esi
	push 4
	push 0x33
	call IWzCanvas::Copy
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x74],0xB
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[esp+0x3C]
	push ecx
	call ebx

 Block59:
	lea edx,[esp+0x4C]
	push edx
	call edi
	lea eax,[esp+0x4C]
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
	mov eax,dword ptr [esp+0x7C]
	mov ecx,0xD
	mov byte ptr [esp+0x74],0xD
	mov word ptr [esp+0x3C],cx
	mov dword ptr [esp+0x44],eax
	test eax,eax
	je Block63

 Block62:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block63:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x74],0xE
	test ecx,ecx
	jne Block65

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x40]
	push eax
	push 0xC00614A4
	push 0
	push 0
	push 0x10
	push 0xFFFFFFC9
	lea edx,[esp+0x34]
	push edx
	call IWzGr2D::CreateLayer
	mov edi,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xDD0]
	cmp esi,eax
	je Block70

 Block66:
	mov dword ptr [edi+0xDD0],eax
	test eax,eax
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block68:
	test esi,esi
	je Block70

 Block69:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block70:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block72

 Block71:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block72:
	mov esi,8
	mov byte ptr [esp+0x74],0xD
	cmp word ptr [esp+0x3C],si
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov byte ptr [esp+0x74],0xB
	cmp word ptr [esp+0x4C],si
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	cmp dword ptr [edi+0xDD0],0
	sete al
	test al,al
	je Block83

 Block81:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x74],0
	test eax,eax
	je Block99

 Block82:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block99

 Block83:
	mov esi,dword ptr [edi+0xDD0]
	test esi,esi
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block87

 Block86:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block87:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 1
	lea edx,[esp+0x1C]
	push edx
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov bl,0xF
	mov ecx,0xD
	mov byte ptr [esp+0x74],bl
	mov word ptr [esp+0x4C],cx
	mov dword ptr [esp+0x54],eax
	test eax,eax
	je Block89

 Block88:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block89:
	mov ecx,dword ptr [edi+0xDD0]
	mov byte ptr [esp+0x74],0x10
	test ecx,ecx
	jne Block91

 Block90:
	push 0x80004003
	call _com_issue_error

 Block91:
	lea edx,[esp+0x4C]
	push edx
	call IWzVector2D::Putorigin
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x74],bl
	jne Block94

 Block92:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block95:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x74],0xB
	test eax,eax
	je Block97

 Block96:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block97:
	mov ecx,edi
	call CField_Dojang::UpdateTimer
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x74],0
	test eax,eax
	je Block99

 Block98:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block99:
	mov eax,dword ptr [esp+0x7C]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	test eax,eax
	je Block101

 Block100:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block101:
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
// CField_Dojang::CanUseSpecialArts
__SUB_CLASS_THIS0(0014EA40, __thiscall, 143779,  CField_Dojang, int32_t) {
__asm {

 Block0:
	mov eax,1
	ret
}
}
