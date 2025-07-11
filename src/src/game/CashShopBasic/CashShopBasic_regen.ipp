#include "regen.hpp"
// CashShopBasic.ipp
#include "CashShopBasic.hpp"

// read_commodity_entity
_SUB_EXCEPTION_HANDLER(9AC30)
__SUB(0009AC30, __cdecl, 145196,  long, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<ZRef<CS_COMMODITY>>, NakedParam<_x_com_ptr<IWzProperty>>, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9AC30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [ebp-0x28],ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x24],esp
	push 0xB0E
	push eax
	mov dword ptr [ebp-4],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],3
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x20]
	push edx
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov esi,dword ptr [ebp+0x10]
	push eax
	mov byte ptr [ebp-4],4
	call get_int32
	add esp,8
	lea ecx,[esi+0x10]
	push eax
	call TSecType<long>::SetData
	mov edi,8
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x20],di
	jne Block5

 Block3:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block6:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x24],esp
	push 0xB0F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],5
	cmp ecx,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[ebp-0x20]
	push eax
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov esi,dword ptr [ebp+0x10]
	push eax
	mov byte ptr [ebp-4],6
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1C],eax
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x20],di
	jne Block11

 Block9:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	cmp eax,ebx
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x24],esp
	push 0xB10
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],7
	cmp ecx,ebx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea edx,[ebp-0x20]
	push edx
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov esi,dword ptr [ebp+0x10]
	push eax
	mov byte ptr [ebp-4],8
	call get_int32
	add esp,8
	mov dword ptr [esi+0x20],eax
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x20],di
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	push ebx
	push ecx
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	push offset _S_BONUS__1
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],9
	cmp ecx,ebx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea edx,[ebp-0x20]
	push edx
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov esi,dword ptr [ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0xA
	call get_int32
	add esp,8
	mov dword ptr [esi+0x24],eax
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x20],di
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x24],esp
	push 0xB11
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0xB
	cmp ecx,ebx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea eax,[ebp-0x20]
	push eax
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov esi,dword ptr [ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0xC
	call get_int32
	add esp,8
	mov dword ptr [esi+0x28],eax
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x20],di
	jne Block29

 Block27:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	cmp eax,ebx
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x24],esp
	push 0xB14
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0xD
	cmp ecx,ebx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea edx,[ebp-0x20]
	push edx
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov esi,dword ptr [ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0xE
	call get_int32
	add esp,8
	mov dword ptr [esi+0x2C],eax
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x20],di
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x24],esp
	push 0xB12
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0xF
	cmp ecx,ebx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea eax,[ebp-0x20]
	push eax
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov esi,dword ptr [ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0x10
	call get_int32
	add esp,8
	mov dword ptr [esi+0x30],eax
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x20],di
	jne Block41

 Block39:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	cmp eax,ebx
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x24],esp
	push 0xB13
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0x11
	cmp ecx,ebx
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea edx,[ebp-0x20]
	push edx
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov esi,dword ptr [ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0x12
	call get_int32
	add esp,8
	mov dword ptr [esi+0x34],eax
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x20],di
	jne Block47

 Block45:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x24],esp
	push 0x1A4F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0x13
	cmp ecx,ebx
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea eax,[ebp-0x20]
	push eax
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov esi,dword ptr [ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0x14
	call get_int32
	add esp,8
	mov dword ptr [esi+0x38],eax
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x20],di
	jne Block53

 Block51:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	cmp eax,ebx
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x24],esp
	push 0x1A51
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0x15
	cmp ecx,ebx
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	lea edx,[ebp-0x20]
	push edx
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov esi,dword ptr [ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0x16
	call get_int32
	add esp,8
	mov dword ptr [esi+0x3C],eax
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x20],di
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x24],esp
	push 0xB15
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0x17
	cmp ecx,ebx
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	lea eax,[ebp-0x20]
	push eax
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov esi,dword ptr [ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0x18
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0x40],eax
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x20],di
	jne Block65

 Block63:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	cmp eax,ebx
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x24],esp
	push 0xB18
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0x19
	cmp ecx,ebx
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	lea edx,[ebp-0x20]
	push edx
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov esi,dword ptr [ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0x1A
	call get_int32
	add esp,8
	mov dword ptr [esi+0x48],eax
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x20],di
	jne Block71

 Block69:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x24],esp
	push 0xB19
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0x1B
	cmp ecx,ebx
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	lea eax,[ebp-0x20]
	push eax
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov esi,dword ptr [ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0x1C
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0x4C],eax
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x20],di
	jne Block77

 Block75:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	cmp eax,ebx
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block78:
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x24],esp
	push 0xC60
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0x1D
	cmp ecx,ebx
	jne Block80

 Block79:
	push 0x80004003
	call _com_issue_error

 Block80:
	lea edx,[ebp-0x20]
	push edx
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov esi,dword ptr [ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0x1E
	call get_int32
	add esp,8
	mov dword ptr [esi+0x50],eax
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x20],di
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x24],esp
	push 0xC61
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0x1F
	cmp ecx,ebx
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	lea eax,[ebp-0x20]
	push eax
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov esi,dword ptr [ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0x20
	call get_int32
	add esp,8
	mov dword ptr [esi+0x54],eax
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x20],di
	jne Block89

 Block87:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	cmp eax,ebx
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x24],esp
	push 0xC62
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0x21
	cmp ecx,ebx
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	lea edx,[ebp-0x20]
	push edx
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov esi,dword ptr [ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0x22
	call get_int32
	add esp,8
	mov dword ptr [esi+0x58],eax
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x20],di
	jne Block95

 Block93:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x24],esp
	push 0xC63
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0x23
	cmp ecx,ebx
	jne Block98

 Block97:
	push 0x80004003
	call _com_issue_error

 Block98:
	lea eax,[ebp-0x20]
	push eax
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov esi,dword ptr [ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0x24
	call get_int32
	add esp,8
	mov dword ptr [esi+0x5C],eax
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x20],di
	jne Block101

 Block99:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	cmp eax,ebx
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x24],esp
	push 0xC64
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0x25
	cmp ecx,ebx
	jne Block104

 Block103:
	push 0x80004003
	call _com_issue_error

 Block104:
	lea edx,[ebp-0x20]
	push edx
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov esi,dword ptr [ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0x26
	call get_int32
	add esp,8
	mov dword ptr [esi+0x60],eax
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x20],di
	jne Block107

 Block105:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block108:
	mov edx,dword ptr [ebp+0x10]
	mov dword ptr [edx+0x64],ebx
	mov eax,dword ptr [ebp+0x10]
	mov ecx,dword ptr [eax+0x20]
	mov dword ptr [eax+0x70],ecx
	mov ecx,dword ptr [ebp+0x10]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x38E
	jne Block144

 Block109:
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [ebp+0x10]
	mov esi,esp
	xor ebx,ebx
	push ebx
	push ebx
	add ecx,0x10
	call TSecType<long>::GetData
	push 0xA
	push esi
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0x27
	cmp ecx,ebx
	jne Block111

 Block110:
	push 0x80004003
	call _com_issue_error

 Block111:
	lea edx,[ebp-0x3C]
	push edx
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x28
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x2C]
	mov dword ptr [ebp-0x2C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block114

 Block112:
	cmp eax,0x80004002
	je Block114

 Block113:
	push eax
	call _com_issue_error

 Block114:
	mov edi,8
	mov byte ptr [ebp-4],0x2A
	cmp word ptr [ebp-0x3C],di
	jne Block117

 Block115:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	cmp eax,ebx
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block118:
	mov esi,dword ptr [ebp-0x2C]
	cmp esi,ebx
	sete al
	test al,al
	je Block126

 Block119:
	mov byte ptr [ebp-4],2
	cmp esi,ebx
	je Block121

 Block120:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block121:
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block123

 Block122:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block123:
	lea ecx,[ebp+0xC]
	mov byte ptr [ebp-4],0
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	mov eax,dword ptr [ebp+0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,ebx
	je Block125

 Block124:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block125:
	mov eax,0x64
	jmp Block245

 Block126:
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x24],esp
	push 0xB0D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x2B
	cmp esi,ebx
	jne Block128

 Block127:
	push 0x80004003
	call _com_issue_error

 Block128:
	lea ecx,[ebp-0x4C]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x2A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x2C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x24]
	mov dword ptr [ebp-0x24],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block131

 Block129:
	cmp eax,0x80004002
	je Block131

 Block130:
	push eax
	call _com_issue_error

 Block131:
	mov byte ptr [ebp-4],0x2E
	cmp word ptr [ebp-0x4C],di
	jne Block134

 Block132:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	cmp eax,ebx
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block135:
	mov esi,dword ptr [ebp-0x24]
	xor ebx,ebx

 Block136:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x2F
	test esi,esi
	je Block1

 Block137:
	lea ecx,[ebp-0x5C]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x2E
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x30
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x5C],8
	mov edi,eax
	mov byte ptr [ebp-4],0x2E
	jne Block140

 Block138:
	mov eax,dword ptr [ebp-0x54]
	xor edx,edx
	mov word ptr [ebp-0x5C],dx
	test eax,eax
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea eax,[ebp-0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block141:
	test edi,edi
	je Block143

 Block142:
	mov ecx,dword ptr [ebp+0x10]
	push 0xFFFFFFFF
	add ecx,0x68
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],edi
	inc ebx
	jmp Block136

 Block143:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],0x2A
	call edx
	mov eax,dword ptr [ebp-0x2C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],2
	call edx

 Block144:
	xor edi,edi
	cmp dword ptr [ebp+0x18],edi
	je Block234

 Block145:
	mov ecx,dword ptr [ebp+0x10]
	mov eax,dword ptr [ecx+0xC]
	lea edx,[eax-0x989680]
	cmp edx,0x42C1D7F
	ja Block179

 Block146:
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x38E
	je Block234

 Block147:
	mov ecx,dword ptr [ebp+0x10]
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x38F
	je Block234

 Block148:
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x1536
	je Block234

 Block149:
	cmp ecx,0x52DED8
	je Block234

 Block150:
	cmp ecx,0x52E2C0
	je Block234

 Block151:
	mov ecx,dword ptr [ebp+0x10]
	cmp dword ptr [ecx+0x3C],edi
	jne Block155

 Block152:
	cmp dword ptr [ecx+0x38],edi
	jne Block155

 Block153:
	add ecx,0x10
	call TSecType<long>::GetData
	push eax
	lea ecx,[ebp-0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemSlot
	mov ecx,dword ptr [ebp+0x10]
	mov dword ptr [ebp-0x28],1
	cmp dword ptr [eax+4],edi
	je Block155

 Block154:
	xor bl,bl
	jmp Block156

 Block155:
	mov bl,1

 Block156:
	test byte ptr [ebp-0x28],1
	je Block162

 Block157:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block162

 Block158:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block161

 Block159:
	mov edx,dword ptr [ebp-0x14]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp-0x14]
	test ecx,ecx
	je Block161

 Block160:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block161:
	mov ecx,dword ptr [ebp+0x10]

 Block162:
	test bl,bl
	je Block164

 Block163:
	mov edi,1
	jmp Block235

 Block164:
	mov eax,dword ptr [ecx+0x1C]
	test eax,eax
	jl Block178

 Block165:
	cmp eax,0x3E8
	jg Block178

 Block166:
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	mov ecx,dword ptr [ebp+0x10]
	test eax,eax
	jne Block168

 Block167:
	lea edi,[eax+4]
	jmp Block235

 Block168:
	mov eax,dword ptr [ecx+0x28]
	test eax,eax
	jl Block177

 Block169:
	cmp eax,0x80
	jg Block177

 Block170:
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,dword ptr [ebp+0x10]
	mov esi,eax
	mov eax,0x431BDE83
	imul esi
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	lea edx,[edx+eax-1]
	cmp edx,4
	ja Block175

 Block171:
	cmp EDX, 0
je Block175
cmp EDX, 1
je Block175
cmp EDX, 2
je Block175
cmp EDX, 3
je Block175
cmp EDX, 4
je Block172


 Block172:
	mov eax,0x68DB8BAD
	imul esi
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x1F4
	jne Block175

 Block173:
	cmp dword ptr [ecx+0x2C],0
	je Block175

 Block174:
	mov edi,7
	jmp Block235

 Block175:
	cmp dword ptr [ecx+0x5C],0x64
	jle Block235

 Block176:
	mov edi,0x12
	jmp Block235

 Block177:
	mov edi,5
	jmp Block235

 Block178:
	mov edi,2
	jmp Block235

 Block179:
	lea edx,[eax-0x4C4B400]
	cmp edx,0x98967F
	ja Block197

 Block180:
	cmp dword ptr [ecx+0x3C],0
	jne Block184

 Block181:
	cmp dword ptr [ecx+0x38],0
	jne Block184

 Block182:
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[ebp-0x18]
	push eax
	call CItemInfo::GetItemSlot
	cmp dword ptr [eax+4],0
	mov ecx,dword ptr [ebp+0x10]
	mov dword ptr [ebp-0x28],2
	je Block184

 Block183:
	xor bl,bl
	jmp Block185

 Block184:
	mov bl,1

 Block185:
	test byte ptr [ebp-0x28],2
	je Block191

 Block186:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block191

 Block187:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block190

 Block188:
	mov ecx,dword ptr [ebp-0x14]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp-0x14]
	test ecx,ecx
	je Block190

 Block189:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block190:
	mov ecx,dword ptr [ebp+0x10]
	mov dword ptr [ebp-0x14],0

 Block191:
	test bl,bl
	je Block193

 Block192:
	mov edi,8
	jmp Block235

 Block193:
	mov eax,dword ptr [ecx+0x1C]
	test eax,eax
	jl Block178

 Block194:
	cmp eax,0x3E8
	jg Block178

 Block195:
	cmp dword ptr [ecx+0x28],0
	je Block205

 Block196:
	mov edi,0xB
	jmp Block235

 Block197:
	lea edx,[eax-0x55D4A80]
	cmp edx,0xF423F
	ja Block209

 Block198:
	cmp dword ptr [ecx+0x3C],0
	jne Block208

 Block199:
	mov eax,dword ptr [ecx+0x38]
	test eax,eax
	jle Block208

 Block200:
	cmp eax,0x186A0
	jg Block208

 Block201:
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,dword ptr [ebp+0x10]
	test eax,eax
	jne Block208

 Block202:
	cmp dword ptr [ecx+0x1C],eax
	jne Block207

 Block203:
	cmp dword ptr [ecx+0x20],eax
	jne Block207

 Block204:
	cmp dword ptr [ecx+0x28],eax
	jne Block207

 Block205:
	cmp dword ptr [ecx+0x48],0xFFFFFFFF
	je Block235

 Block206:
	mov edi,0xC
	jmp Block235

 Block207:
	mov edi,0xE
	jmp Block235

 Block208:
	mov edi,0xD
	jmp Block235

 Block209:
	lea edx,[eax-0x56C8CC0]
	cmp edx,0xF423F
	ja Block221

 Block210:
	mov eax,dword ptr [ecx+0x3C]
	test eax,eax
	jle Block220

 Block211:
	cmp eax,0x989680
	jg Block220

 Block212:
	cmp dword ptr [ecx+0x38],0
	jne Block220

 Block213:
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,dword ptr [ebp+0x10]
	test eax,eax
	jne Block220

 Block214:
	cmp dword ptr [ecx+0x1C],eax
	jne Block219

 Block215:
	cmp dword ptr [ecx+0x20],eax
	jne Block219

 Block216:
	cmp dword ptr [ecx+0x28],eax
	jne Block219

 Block217:
	cmp dword ptr [ecx+0x48],0xFFFFFFFF
	je Block235

 Block218:
	lea edi,[eax+0xC]
	jmp Block235

 Block219:
	mov edi,0x11
	jmp Block235

 Block220:
	mov edi,0x10
	jmp Block235

 Block221:
	lea edx,[eax-0x57BCF00]
	cmp edx,0xF423F
	ja Block227

 Block222:
	cmp dword ptr [ecx+0x3C],0
	jne Block226

 Block223:
	cmp dword ptr [ecx+0x38],0
	jne Block226

 Block224:
	cmp dword ptr [ecx+0x1C],0
	jg Block235

 Block225:
	mov edi,0x14
	jmp Block235

 Block226:
	mov edi,0x13
	jmp Block235

 Block227:
	lea edx,[eax-0x58B1140]
	cmp edx,0xF423F
	ja Block247

 Block228:
	cmp dword ptr [ecx+0x3C],0
	jne Block246

 Block229:
	cmp dword ptr [ecx+0x38],0
	jne Block246

 Block230:
	cmp dword ptr [ecx+0x1C],0
	jg Block232

 Block231:
	mov edi,0x16
	jmp Block235

 Block232:
	add ecx,0x10
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	jne Block234

 Block233:
	lea edi,[eax+0x17]

 Block234:
	mov ecx,dword ptr [ebp+0x10]

 Block235:
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block237

 Block236:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [ebp+0x10]

 Block237:
	mov byte ptr [ebp-4],0
	test ecx,ecx
	je Block242

 Block238:
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block241

 Block239:
	mov eax,dword ptr [ebp+0x10]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x10]
	test ecx,ecx
	je Block241

 Block240:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block241:
	mov dword ptr [ebp+0x10],0

 Block242:
	mov eax,dword ptr [ebp+0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block244

 Block243:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block244:
	mov eax,edi

 Block245:
	lea esp,[ebp-0x6C]
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

 Block246:
	mov edi,0x15
	jmp Block235

 Block247:
	add eax,0xFF62FCB0
	cmp eax,0x270F
	ja Block250

 Block248:
	cmp dword ptr [ecx+0x4C],0
	je Block235

 Block249:
	mov edi,0x17
	jmp Block235

 Block250:
	mov edi,0x18
	jmp Block235
}
}
// load_category
_SUB_EXCEPTION_HANDLER(9C1C0)
__SUB(0009C1C0, __cdecl, 145200,  int32_t, NakedParam<_x_com_ptr<IWzProperty>>, ZArray<CS_CATEGORY>&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9C1C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp-0x20],ebx
	mov edi,dword ptr [ebp+0xC]
	mov ecx,edi
	mov byte ptr [ebp-4],1
	call ZArray<CS_CATEGORY>::RemoveAll
	mov eax,dword ptr [ebp+8]
	cmp eax,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x18]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x20]
	mov dword ptr [ebp-0x18],ebx
	call eax
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov edx,dword ptr [ebp-0x18]
	lea ecx,[ebp-0x19]
	push ecx
	push edx
	mov ecx,edi
	call ZArray<CS_CATEGORY>::_Alloc
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-0x18],0
	test eax,eax
	je Block39

 Block5:
	xor edi,edi

 Block6:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x14]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x20]
	mov dword ptr [ebp-0x14],0
	call eax
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov esi,dword ptr [ebp-0x18]
	cmp esi,dword ptr [ebp-0x14]
	jae Block41

 Block9:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],2
	test ecx,ecx
	je Block1

 Block10:
	lea edx,[ebp-0x54]
	push edx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block18

 Block11:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x24]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x24]
	mov dword ptr [ebp-0x14],ecx
	test ebx,ebx
	je Block13

 Block12:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block13:
	mov ebx,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x20],ebx
	test esi,esi
	jge Block15

 Block14:
	cmp esi,0x80004002
	jne Block40

 Block15:
	cmp word ptr [ebp-0x54],8
	mov byte ptr [ebp-4],1
	jne Block21

 Block16:
	xor eax,eax
	mov word ptr [ebp-0x54],ax
	mov eax,dword ptr [ebp-0x4C]
	test eax,eax
	je Block22

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block18:
	test ebx,ebx
	je Block15

 Block19:
	mov eax,ebx
	xor ebx,ebx
	mov dword ptr [ebp-0x20],ebx
	test eax,eax
	je Block15

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block15

 Block21:
	lea ecx,[ebp-0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x1A2E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],4
	test ebx,ebx
	je Block1

 Block23:
	lea eax,[ebp-0x34]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov ecx,dword ptr [ebp+0xC]
	mov esi,dword ptr [ecx]
	push eax
	mov byte ptr [ebp-4],5
	add esi,edi
	call get_int32
	add esp,8
	mov dword ptr [esi],eax
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],1
	jne Block26

 Block24:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block27:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x598
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x44]
	mov byte ptr [ebp-4],6
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov ecx,dword ptr [ebp+0xC]
	mov esi,dword ptr [ecx]
	push eax
	mov byte ptr [ebp-4],7
	add esi,edi
	call get_int32
	add esp,8
	mov dword ptr [esi+4],eax
	cmp word ptr [ebp-0x44],8
	mov byte ptr [ebp-4],1
	jne Block30

 Block28:
	mov eax,dword ptr [ebp-0x3C]
	xor edx,edx
	mov word ptr [ebp-0x44],dx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[ebp-0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block31:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x599
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x64]
	mov byte ptr [ebp-4],8
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],9
	jne Block33

 Block32:
	mov eax,dword ptr [eax+8]
	jmp Block34

 Block33:
	mov eax,offset _S___3

 Block34:
	mov esi,dword ptr [ebp+0xC]
	mov ecx,dword ptr [esi]
	push 0xFFFFFFFF
	lea ecx,[edi+ecx+8]
	push eax
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x64],8
	mov byte ptr [ebp-4],1
	jne Block37

 Block35:
	mov eax,dword ptr [ebp-0x5C]
	xor edx,edx
	mov word ptr [ebp-0x64],dx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[ebp-0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov ecx,dword ptr [esi]
	inc dword ptr [ebp-0x18]
	mov dword ptr [edi+ecx+0x10],0xFFFFFFFF
	mov edx,dword ptr [esi]
	xor ecx,ecx
	mov dword ptr [edi+edx+0x14],ecx
	mov eax,dword ptr [esi]
	mov dword ptr [edi+eax+0x18],ecx
	mov eax,dword ptr [ebp+8]
	add edi,0x1C
	cmp eax,ecx
	jne Block6

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	push esi
	call _com_issue_error

 Block41:
	mov byte ptr [ebp-4],0
	test ebx,ebx
	je Block43

 Block42:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block43:
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block45

 Block44:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block45:
	mov eax,1
	lea esp,[ebp-0x74]
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
// load_commodity
_SUB_EXCEPTION_HANDLER(9BCD0)
__SUB(0009BCD0, __cdecl, 145198,  int32_t, NakedParam<_x_com_ptr<IWzProperty>>, ZArray<ZRef<CS_COMMODITY> >&, NakedParam<_x_com_ptr<IWzProperty>>, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_9BCD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	xor edi,edi
	cmp dword ptr [ebp+0x10],edi
	mov dword ptr [ebp-4],1
	sete al
	test al,al
	je Block22

 Block1:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x34]
	push eax
	call esi
	lea ecx,[ebp-0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	lea edx,[ebp-0x44]
	push edx
	mov byte ptr [ebp-4],2
	call esi
	lea eax,[ebp-0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	push edi
	push edi
	lea ecx,[ebp-0x34]
	push ecx
	lea edx,[ebp-0x44]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x24],esp
	push 0xB66
	mov bl,3
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],4
	cmp dword ptr [_D_G_RM],edi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea ecx,[ebp-0x54]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x10]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block10

 Block8:
	cmp eax,0x80004002
	je Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x54],si
	jne Block13

 Block11:
	mov eax,dword ptr [ebp-0x4C]
	xor edx,edx
	mov word ptr [ebp-0x54],dx
	cmp eax,edi
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea eax,[ebp-0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x44],si
	jne Block17

 Block15:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	cmp eax,edi
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[ebp-0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x34],si
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	cmp eax,edi
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov eax,dword ptr [ebp+8]
	cmp eax,edi
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x20]
	lea ecx,[ebp-0x14]
	push ecx
	push eax
	mov esi,eax
	mov dword ptr [ebp-0x14],edi
	call edx
	cmp eax,edi
	jge Block26

 Block25:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block26:
	mov ecx,dword ptr [ebp-0x14]
	lea eax,[ebp-0x1D]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0xC]
	call ZArray<ZRef<CS_COMMODITY>>::_Alloc
	mov eax,dword ptr [ebp+8]
	xor ebx,ebx
	mov dword ptr [ebp-0x14],edi
	cmp eax,ebx
	je Block56

 Block27:
	jmp Block29

 Block28:
	mov edi,dword ptr [ebp-0x14]
	xor ebx,ebx

 Block29:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x20]
	lea ecx,[ebp-0x18]
	push ecx
	push eax
	mov esi,eax
	mov dword ptr [ebp-0x18],ebx
	call edx
	cmp eax,ebx
	jge Block31

 Block30:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block31:
	cmp edi,dword ptr [ebp-0x18]
	jae Block64

 Block32:
	mov dword ptr [ebp-0x38],ebx
	push ebx
	mov byte ptr [ebp-4],6
	call ZRefCounted_AllocHelper<CS_COMMODITY>::call
	mov esi,eax
	lea ebx,[esi+4]
	add esp,4
	mov eax,0x20
	mov dword ptr [ebx],1
	mov dword ptr [ebp-0x38],esi
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],7
	test ecx,ecx
	je Block6

 Block33:
	lea eax,[ebp-0x54]
	push eax
	mov byte ptr [ebp-4],6
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],8
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp-0x18],edi
	test eax,eax
	je Block36

 Block34:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x24]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x24]
	mov edi,ecx
	mov dword ptr [ebp-0x18],edi
	test eax,eax
	jge Block36

 Block35:
	cmp eax,0x80004002
	jne Block2

 Block36:
	cmp word ptr [ebp-0x54],8
	mov byte ptr [ebp-4],0xA
	jne Block39

 Block37:
	mov eax,dword ptr [ebp-0x4C]
	xor edx,edx
	mov word ptr [ebp-0x54],dx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[ebp-0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block40:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x1C],esp
	push 0xB0D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0xB
	test edi,edi
	je Block6

 Block41:
	lea edx,[ebp-0x34]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xC
	call get_int32
	add esp,8
	mov dword ptr [esi+0xC],eax
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],0xA
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov edx,dword ptr [ebp+0x14]
	push edx
	push ecx
	mov ecx,dword ptr [ebp+0x10]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp-0x1C],esp
	test eax,eax
	je Block47

 Block46:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block47:
	sub esp,8
	mov eax,esp
	mov dword ptr [ebp-0x1C],esp
	push ebx
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [eax+4],esi
	call ebx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [ebp-0x1C],esp
	push edi
	call edx
	call read_commodity_entity
	add esp,0x14
	test eax,eax
	jne Block57

 Block48:
	mov eax,dword ptr [ebp+0xC]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ebp-0x14]
	lea eax,[esi+4]
	push eax
	lea ebx,[ecx+edx*8]
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block53

 Block49:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block52

 Block50:
	mov eax,dword ptr [ebx+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebx+4]
	test ecx,ecx
	je Block52

 Block51:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block52:
	mov dword ptr [ebx+4],0

 Block53:
	mov dword ptr [ebx+4],esi
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],6
	call ecx
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block55

 Block54:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block55:
	mov eax,dword ptr [ebp+8]
	inc dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x38],0
	test eax,eax
	jne Block28

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],6
	call edx
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block59

 Block58:
	push edi
	call ebx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block59:
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block63

 Block62:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block63:
	xor eax,eax
	jmp Block69

 Block64:
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0
	cmp eax,ebx
	je Block66

 Block65:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block66:
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,ebx
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block68:
	mov eax,1

 Block69:
	lea esp,[ebp-0x64]
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
