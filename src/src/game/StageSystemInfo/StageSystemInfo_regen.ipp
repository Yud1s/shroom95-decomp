#include "regen.hpp"
// StageSystemInfo.ipp
#include "StageSystemInfo.hpp"

// CStageSystem::IterateStageSystemClient
_SUB_EXCEPTION_HANDLER(31EE40)
__SUB_CLASS_THIS0(0031EE40, __thiscall, 62487,  CStageSystem, int32_t) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x78]
	sub esp,0x78
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_31EE40
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x160
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x74],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x38],ecx
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x54]
	push eax
	call ebx
	lea ecx,[ebp-0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor esi,esi
	add esp,8
	cmp eax,esi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x34]
	push edx
	mov dword ptr [ebp-4],esi
	call ebx
	lea eax,[ebp-0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push esi
	push esi
	lea ecx,[ebp-0x54]
	push ecx
	lea edx,[ebp-0x34]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x34],esp
	push 0x17BF
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x74]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [ebp-0x74],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],5
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x6C]
	xor edx,edx
	mov word ptr [ebp-0x74],dx
	cmp eax,esi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x74]
	push eax
	call edi

 Block13:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],6
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	cmp eax,esi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x34]
	push edx
	call edi

 Block17:
	cmp word ptr [ebp-0x54],8
	mov byte ptr [ebp-4],7
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp-0x54],ax
	mov eax,dword ptr [ebp-0x4C]
	cmp eax,esi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp-0x54]
	push ecx
	call edi

 Block21:
	mov edi,dword ptr [ebp+0x4C]
	cmp edi,esi
	sete al
	test al,al
	jne Block46

 Block22:
	lea ecx,[ebp-0x64]
	push ecx
	call ebx
	lea edx,[ebp-0x64]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	lea eax,[ebp-0x44]
	push eax
	mov byte ptr [ebp-4],8
	call ebx
	lea ecx,[ebp-0x44]
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
	push esi
	push esi
	lea edx,[ebp-0x64]
	push edx
	lea eax,[ebp-0x44]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x34],esp
	push 0x17C0
	mov bl,9
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0xA
	cmp dword ptr [_D_G_RM],esi
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea edx,[ebp-0xA4]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0x44],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block31

 Block29:
	cmp eax,0x80004002
	je Block31

 Block30:
	push eax
	call _com_issue_error

 Block31:
	mov ebx,8
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0xA4],bx
	jne Block34

 Block32:
	xor eax,eax
	mov word ptr [ebp-0xA4],ax
	mov eax,dword ptr [ebp-0x9C]
	cmp eax,esi
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea ecx,[ebp-0xA4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x44],bx
	jne Block38

 Block36:
	mov eax,dword ptr [ebp-0x3C]
	xor edx,edx
	mov word ptr [ebp-0x44],dx
	cmp eax,esi
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea eax,[ebp-0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x64],bx
	jne Block42

 Block40:
	mov eax,dword ptr [ebp-0x5C]
	xor ecx,ecx
	mov word ptr [ebp-0x64],cx
	cmp eax,esi
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea edx,[ebp-0x64]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov ecx,dword ptr [ebp+0x44]
	cmp ecx,esi
	sete al
	test al,al
	je Block49

 Block44:
	mov byte ptr [ebp-4],7
	cmp ecx,esi
	je Block46

 Block45:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block46:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp edi,esi
	je Block48

 Block47:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block48:
	xor eax,eax
	jmp Block259

 Block49:
	cmp edi,esi
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	lea ecx,[ebp-0x1C]
	push ecx
	mov ecx,edi
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x10
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],0x12
	cmp eax,esi
	je Block53

 Block52:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block53:
	lea ecx,[ebp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0x13
	mov dword ptr [ebp-0x18],esi
	jmp Block55

 Block54:
	mov edi,dword ptr [ebp+0x4C]

 Block55:
	mov esi,dword ptr [ebp+0x40]
	test esi,esi
	je Block5

 Block56:
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0xC]
	lea eax,[ebp-0x18]
	push eax
	lea ecx,[ebp+0x10]
	push ecx
	push 1
	push esi
	call edx
	test eax,eax
	jne Block252

 Block57:
	lea eax,[ebp+0x10]
	push eax
	lea ecx,[ebp+0x48]
	push ecx
	call DetachBSTR
	add esp,8
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [ebp+0x48]
	mov eax,esp
	mov dword ptr [ebp+0x70],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block59

 Block58:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block59:
	lea edx,[ebp-0x104]
	mov byte ptr [ebp-4],0x15
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x14
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x16
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	mov dword ptr [ebp+0x58],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block61

 Block60:
	cmp eax,0x80004002
	jne Block1

 Block61:
	cmp word ptr [ebp-0x104],8
	mov byte ptr [ebp-4],0x18
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [ebp-0x104],ax
	mov eax,dword ptr [ebp-0xFC]
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[ebp-0x104]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	cmp dword ptr [ebp+0x58],0
	je Block236

 Block66:
	xor ebx,ebx
	lea ecx,[ebp+0x20]
	mov dword ptr [ebp+0x24],ebx
	call ZRef<StageTheme>::_Alloc
	mov edi,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x19
	cmp edi,ebx
	je Block68

 Block67:
	mov eax,dword ptr [edi]
	jmp Block69

 Block68:
	xor eax,eax

 Block69:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x6C]
	mov dword ptr [ebp+0x6C],ebx
	call ZXString<char>::AssignWideStr
	mov esi,dword ptr [ebp+0x38]
	lea edx,[ebp+0x20]
	push edx
	lea eax,[ebp+0x6C]
	push eax
	lea ecx,[esi+0xC]
	mov byte ptr [ebp-4],0x1A
	call ZMap<ZXString<char>, ZRef<StageTheme>, ZXString<char>>::Insert
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0x19
	cmp eax,ebx
	je Block71

 Block70:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block71:
	mov dword ptr [ebp+0x70],0xFFFFFFFF
	cmp edi,ebx
	je Block73

 Block72:
	mov eax,dword ptr [edi]
	jmp Block74

 Block73:
	xor eax,eax

 Block74:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x6C]
	mov dword ptr [ebp+0x6C],ebx
	call ZXString<char>::AssignWideStr
	lea ecx,[ebp+0x70]
	push ecx
	lea edx,[ebp+0x6C]
	push edx
	lea ecx,[esi+0x24]
	mov byte ptr [ebp-4],0x1B
	call ZMap<ZXString<char>, long, ZXString<char>>::Insert
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0x19
	cmp eax,ebx
	je Block76

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block76:
	push ebx
	push ebx
	push ecx
	mov dword ptr [ebp+0x70],esp
	mov ecx,esp
	push offset _S_STAGE
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x58]
	lea eax,[ebp-0xC4]
	mov byte ptr [ebp-4],0x1C
	push eax
	mov byte ptr [ebp-4],0x19
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x3C]
	mov dword ptr [ebp+0x3C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block78

 Block77:
	cmp eax,0x80004002
	jne Block1

 Block78:
	cmp word ptr [ebp-0xC4],8
	mov byte ptr [ebp-4],0x1F
	jne Block81

 Block79:
	mov eax,dword ptr [ebp-0xBC]
	xor ecx,ecx
	mov word ptr [ebp-0xC4],cx
	cmp eax,ebx
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea edx,[ebp-0xC4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block82:
	mov esi,dword ptr [ebp+0x3C]
	mov edi,dword ptr [ebp+0x24]
	cmp esi,ebx
	je Block230

 Block83:
	xor ebx,ebx

 Block84:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x64]
	push ecx
	push esi
	mov dword ptr [ebp+0x30],ebx
	mov dword ptr [ebp+0x64],0
	call edx
	test eax,eax
	jge Block86

 Block85:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block86:
	cmp ebx,dword ptr [ebp+0x64]
	jae Block230

 Block87:
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
	mov dword ptr [ebp+0x70],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x154]
	mov byte ptr [ebp-4],0x20
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x1F
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x21
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block89

 Block88:
	cmp eax,0x80004002
	jne Block1

 Block89:
	cmp word ptr [ebp-0x154],8
	mov byte ptr [ebp-4],0x23
	jne Block92

 Block90:
	mov eax,dword ptr [ebp-0x14C]
	xor ecx,ecx
	mov word ptr [ebp-0x154],cx
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea edx,[ebp-0x154]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	mov edi,dword ptr [ebp+0x54]
	test edi,edi
	je Block227

 Block94:
	xor esi,esi
	lea ecx,[ebp+0x28]
	mov dword ptr [ebp+0x2C],esi
	call ZRef<StagePeriodInfo>::_Alloc
	lea eax,[ebp+0x28]
	push eax
	lea ecx,[ebp+0x30]
	push ecx
	mov ecx,dword ptr [ebp+0x24]
	add ecx,0x10
	mov byte ptr [ebp-4],0x24
	call ZMap<long, ZRef<StagePeriodInfo>, long>::Insert
	push esi
	push esi
	push ecx
	mov dword ptr [ebp+0x70],esp
	mov ecx,esp
	push offset _S_ENABLEDKEY
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0xE4]
	mov byte ptr [ebp-4],0x25
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x24
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x26
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x6C]
	mov dword ptr [ebp+0x6C],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block96

 Block95:
	cmp eax,0x80004002
	jne Block1

 Block96:
	cmp word ptr [ebp-0xE4],8
	mov byte ptr [ebp-4],0x28
	jne Block99

 Block97:
	xor eax,eax
	mov word ptr [ebp-0xE4],ax
	mov eax,dword ptr [ebp-0xDC]
	cmp eax,esi
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea ecx,[ebp-0xE4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block100:
	mov ebx,dword ptr [ebp+0x6C]
	cmp ebx,esi
	je Block152

 Block101:
	xor esi,esi
	mov dword ptr [ebp+0x64],esi

 Block102:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x68]
	push eax
	push ebx
	mov dword ptr [ebp+0x68],0
	call ecx
	test eax,eax
	jge Block104

 Block103:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block104:
	cmp esi,dword ptr [ebp+0x68]
	jae Block152

 Block105:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x70],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x134]
	mov byte ptr [ebp-4],0x29
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x2A
	jne Block107

 Block106:
	mov eax,dword ptr [eax+8]
	jmp Block108

 Block107:
	mov eax,offset _S___3

 Block108:
	push 0xFFFFFFFF
	xor edi,edi
	push eax
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp+0x5C],edi
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x134],8
	mov byte ptr [ebp-4],0x2C
	jne Block111

 Block109:
	xor eax,eax
	mov word ptr [ebp-0x134],ax
	mov eax,dword ptr [ebp-0x12C]
	cmp eax,edi
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea ecx,[ebp-0x134]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block112:
	mov ecx,dword ptr [ebp+0x2C]
	lea edx,[ebp+0x5C]
	push edx
	push 0xFFFFFFFF
	add ecx,0xC
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov esi,dword ptr [ebp+0x38]
	push edi
	lea eax,[ebp+0x5C]
	add esi,0x3C
	push eax
	mov ecx,esi
	call ZMap<ZXString<char>, ZRef<StageUnitEnable>, ZXString<char>>::GetAt
	test eax,eax
	jne Block116

 Block113:
	lea ecx,[ebp+8]
	mov dword ptr [ebp+0xC],edi
	call ZRef<StageUnitEnable>::_Alloc
	lea ecx,[ebp+8]
	push ecx
	lea edx,[ebp+0x5C]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x2D
	call ZMap<ZXString<char>, ZRef<StageUnitEnable>, ZXString<char>>::Insert
	mov esi,dword ptr [ebp+0xC]
	push offset _S_
	lea ecx,[esi+0x10]
	call ZXString<char>::AssignCStr
	lea ebx,[esi+4]
	push ebx
	mov dword ptr [esi+0xC],edi
	mov byte ptr [ebp-4],0x2C
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block115

 Block114:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block115:
	mov dword ptr [ebp+0xC],edi

 Block116:
	mov eax,dword ptr [ebp+0x5C]
	push edi
	push edi
	push ecx
	mov dword ptr [ebp+0x70],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x2E
	cmp ecx,edi
	je Block5

 Block117:
	lea edx,[ebp-0x84]
	push edx
	mov byte ptr [ebp-4],0x2C
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x2F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x68]
	mov dword ptr [ebp+0x68],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block119

 Block118:
	cmp eax,0x80004002
	jne Block1

 Block119:
	cmp word ptr [ebp-0x84],8
	mov byte ptr [ebp-4],0x31
	jne Block122

 Block120:
	xor eax,eax
	mov word ptr [ebp-0x84],ax
	mov eax,dword ptr [ebp-0x7C]
	cmp eax,edi
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea ecx,[ebp-0x84]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block123:
	cmp dword ptr [ebp+0x68],edi
	je Block147

 Block124:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x70],esp
	mov ecx,esp
	push offset _S_QUEST__1
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x68]
	lea edx,[ebp-0x94]
	mov byte ptr [ebp-4],0x32
	push edx
	mov byte ptr [ebp-4],0x31
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x33
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x50],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block126

 Block125:
	cmp eax,0x80004002
	jne Block1

 Block126:
	cmp word ptr [ebp-0x94],8
	mov byte ptr [ebp-4],0x35
	jne Block129

 Block127:
	xor eax,eax
	mov word ptr [ebp-0x94],ax
	mov eax,dword ptr [ebp-0x8C]
	test eax,eax
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea ecx,[ebp-0x94]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block130:
	mov ebx,dword ptr [ebp+0x50]
	test ebx,ebx
	je Block145

 Block131:
	xor edi,edi

 Block132:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x60]
	push eax
	push ebx
	mov dword ptr [ebp+0x70],edi
	mov dword ptr [ebp+0x60],0
	call ecx
	test eax,eax
	jge Block134

 Block133:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block134:
	cmp edi,dword ptr [ebp+0x60]
	jae Block145

 Block135:
	mov eax,0x20
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
	lea edx,[ebp-0xB4]
	mov byte ptr [ebp-4],0x36
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x35
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x37
	call get_int32
	add esp,8
	cmp word ptr [ebp-0xB4],8
	mov esi,eax
	mov dword ptr [ebp+0x60],esi
	mov byte ptr [ebp-4],0x35
	jne Block138

 Block136:
	xor eax,eax
	mov word ptr [ebp-0xB4],ax
	mov eax,dword ptr [ebp-0xAC]
	test eax,eax
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block138:
	lea ecx,[ebp-0xB4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block139:
	test esi,esi
	je Block144

 Block140:
	mov ecx,dword ptr [ebp+0x2C]
	push 0xFFFFFFFF
	add ecx,0x10
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],esi
	mov esi,dword ptr [ebp+0x38]
	push 0
	lea edx,[ebp+0x60]
	add esi,0x54
	push edx
	mov ecx,esi
	call ZMap<long, ZRef<StageUnitEnable>, long>::GetAt
	test eax,eax
	jne Block144

 Block141:
	xor edi,edi
	lea ecx,[ebp]
	mov dword ptr [ebp+4],edi
	call ZRef<StageUnitEnable>::_Alloc
	lea eax,[ebp]
	push eax
	lea ecx,[ebp+0x60]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x38
	call ZMap<long, ZRef<StageUnitEnable>, long>::Insert
	mov esi,dword ptr [ebp+4]
	push offset _S_
	lea ecx,[esi+0x10]
	call ZXString<char>::AssignCStr
	mov dword ptr [esi+0xC],edi
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],0x35
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block143

 Block142:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block143:
	mov edi,dword ptr [ebp+0x70]
	mov dword ptr [ebp+4],0

 Block144:
	inc edi
	jmp Block132

 Block145:
	mov byte ptr [ebp-4],0x31
	test ebx,ebx
	je Block147

 Block146:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block147:
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0x2C
	test eax,eax
	je Block149

 Block148:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block149:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x28
	test eax,eax
	je Block151

 Block150:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block151:
	inc dword ptr [ebp+0x64]
	mov esi,dword ptr [ebp+0x64]
	mov ebx,dword ptr [ebp+0x6C]
	mov edi,dword ptr [ebp+0x54]
	jmp Block102

 Block152:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x70],esp
	mov ecx,esp
	push offset _S_BACKIMAGE
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0xD4]
	mov byte ptr [ebp-4],0x39
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x3A
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x64],esi
	test eax,eax
	je Block155

 Block153:
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
	mov esi,ecx
	mov dword ptr [ebp+0x64],esi
	test eax,eax
	jge Block155

 Block154:
	cmp eax,0x80004002
	jne Block1

 Block155:
	cmp word ptr [ebp-0xD4],8
	mov byte ptr [ebp-4],0x3C
	jne Block158

 Block156:
	mov eax,dword ptr [ebp-0xCC]
	xor edx,edx
	mov word ptr [ebp-0xD4],dx
	test eax,eax
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea eax,[ebp-0xD4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block159:
	test esi,esi
	je Block216

 Block160:
	xor edi,edi

 Block161:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x70]
	push edx
	push esi
	mov dword ptr [ebp+0x68],edi
	mov dword ptr [ebp+0x70],0
	call eax
	test eax,eax
	jge Block163

 Block162:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block163:
	cmp edi,dword ptr [ebp+0x70]
	jae Block216

 Block164:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x70],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0xF4]
	push ecx
	mov byte ptr [ebp-4],0x3D
	mov ecx,esi
	mov byte ptr [ebp-4],0x3C
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x3E
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x50],ebx
	test eax,eax
	je Block167

 Block165:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x20]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp-0x20]
	mov dword ptr [ebp+0x50],ebx
	test eax,eax
	jge Block167

 Block166:
	cmp eax,0x80004002
	jne Block1

 Block167:
	cmp word ptr [ebp-0xF4],8
	mov byte ptr [ebp-4],0x40
	jne Block170

 Block168:
	xor eax,eax
	mov word ptr [ebp-0xF4],ax
	mov eax,dword ptr [ebp-0xEC]
	test eax,eax
	je Block171

 Block169:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block171

 Block170:
	lea ecx,[ebp-0xF4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block171:
	test ebx,ebx
	je Block213

 Block172:
	push 0
	call ZRefCounted_AllocHelper<StageBackImg>::call
	mov edi,eax
	add esp,4
	mov dword ptr [edi+4],1
	mov dword ptr [ebp-0x168],edi
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x70],esp
	mov ecx,esp
	push offset _S_BACK
	mov byte ptr [ebp-4],0x41
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x124]
	mov byte ptr [ebp-4],0x42
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x41
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x43
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x60],esi
	test eax,eax
	je Block175

 Block173:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x14]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x14]
	mov esi,ecx
	mov dword ptr [ebp+0x60],esi
	test eax,eax
	jge Block175

 Block174:
	cmp eax,0x80004002
	jne Block1

 Block175:
	cmp word ptr [ebp-0x124],8
	mov byte ptr [ebp-4],0x45
	jne Block178

 Block176:
	mov eax,dword ptr [ebp-0x11C]
	xor edx,edx
	mov word ptr [ebp-0x124],dx
	test eax,eax
	je Block179

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block179

 Block178:
	lea eax,[ebp-0x124]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block179:
	test esi,esi
	je Block181

 Block180:
	lea ecx,[edi+0x10]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp+0x70],esp
	push esi
	call eax
	call LoadStageBackImgInfo
	add esp,8

 Block181:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x70],esp
	mov ecx,esp
	push offset _S_FRONT
	call _xbstr_t::_ctor_0
	lea ecx,[ebp-0x144]
	push ecx
	mov byte ptr [ebp-4],0x46
	mov ecx,ebx
	mov byte ptr [ebp-4],0x45
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x47
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x70],esi
	test eax,eax
	je Block184

 Block182:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x10]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x10]
	mov esi,ecx
	mov dword ptr [ebp+0x70],esi
	test eax,eax
	jge Block184

 Block183:
	cmp eax,0x80004002
	jne Block1

 Block184:
	cmp word ptr [ebp-0x144],8
	mov byte ptr [ebp-4],0x49
	jne Block187

 Block185:
	mov eax,dword ptr [ebp-0x13C]
	xor edx,edx
	mov word ptr [ebp-0x144],dx
	test eax,eax
	je Block188

 Block186:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block188

 Block187:
	lea eax,[ebp-0x144]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block188:
	test esi,esi
	je Block190

 Block189:
	lea ecx,[edi+0x28]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp+0x5C],esp
	push esi
	call eax
	call LoadStageBackImgInfo
	add esp,8

 Block190:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push offset _S_BACKIMGINFO
	call _xbstr_t::_ctor_0
	lea ecx,[ebp-0x164]
	push ecx
	mov byte ptr [ebp-4],0x4A
	mov ecx,ebx
	mov byte ptr [ebp-4],0x49
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x4B
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block198

 Block191:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x34]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ebx,ebx
	mov esi,eax
	mov eax,dword ptr [edi+0xC]
	test esi,esi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x34]
	test eax,eax
	je Block193

 Block192:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block193:
	mov dword ptr [edi+0xC],ebx
	test esi,esi
	jge Block195

 Block194:
	cmp esi,0x80004002
	jne Block251

 Block195:
	cmp word ptr [ebp-0x164],8
	mov byte ptr [ebp-4],0x49
	jne Block200

 Block196:
	xor eax,eax
	mov word ptr [ebp-0x164],ax
	mov eax,dword ptr [ebp-0x15C]
	test eax,eax
	je Block201

 Block197:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block201

 Block198:
	mov eax,dword ptr [edi+0xC]
	test eax,eax
	je Block195

 Block199:
	mov dword ptr [edi+0xC],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block195

 Block200:
	lea ecx,[ebp-0x164]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block201:
	mov ecx,dword ptr [ebp+0x2C]
	push 0xFFFFFFFF
	add ecx,0x14
	call ZArray<ZRef<StageBackImg>>::InsertBefore
	mov esi,eax
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi+4]
	xor ebx,ebx
	cmp eax,ebx
	je Block206

 Block202:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block205

 Block203:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	cmp ecx,ebx
	je Block205

 Block204:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block205:
	mov dword ptr [esi+4],ebx

 Block206:
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [esi+4],edi
	mov byte ptr [ebp-4],0x45
	cmp eax,ebx
	je Block208

 Block207:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block208:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x41
	cmp eax,ebx
	je Block210

 Block209:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block210:
	lea esi,[edi+4]
	push esi
	mov byte ptr [ebp-4],0x40
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block212

 Block211:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block212:
	mov edi,dword ptr [ebp+0x68]
	mov esi,dword ptr [ebp+0x64]
	mov dword ptr [ebp-0x168],ebx
	mov ebx,dword ptr [ebp+0x50]

 Block213:
	mov byte ptr [ebp-4],0x3C
	test ebx,ebx
	je Block215

 Block214:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block215:
	inc edi
	jmp Block161

 Block216:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x70],esp
	mov ecx,esp
	push offset _S_BACKCOLOR
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x54]
	lea edx,[ebp-0x114]
	mov byte ptr [ebp-4],0x4C
	push edx
	mov byte ptr [ebp-4],0x3C
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x4D
	call get_int32
	mov edi,dword ptr [ebp+0x2C]
	add esp,8
	mov dword ptr [edi+0x18],eax
	cmp word ptr [ebp-0x114],8
	mov byte ptr [ebp-4],0x3C
	jne Block219

 Block217:
	xor eax,eax
	mov word ptr [ebp-0x114],ax
	mov eax,dword ptr [ebp-0x10C]
	test eax,eax
	je Block220

 Block218:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block220

 Block219:
	lea ecx,[ebp-0x114]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block220:
	mov byte ptr [ebp-4],0x28
	test esi,esi
	je Block222

 Block221:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block222:
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0x24
	test eax,eax
	je Block224

 Block223:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block224:
	lea esi,[edi+4]
	push esi
	mov byte ptr [ebp-4],0x23
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block226

 Block225:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block226:
	mov ebx,dword ptr [ebp+0x30]
	mov edi,dword ptr [ebp+0x54]
	mov esi,dword ptr [ebp+0x3C]
	mov dword ptr [ebp+0x2C],0

 Block227:
	mov byte ptr [ebp-4],0x1F
	test edi,edi
	je Block229

 Block228:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block229:
	mov edi,dword ptr [ebp+0x24]
	inc ebx
	jmp Block84

 Block230:
	mov byte ptr [ebp-4],0x19
	test esi,esi
	je Block232

 Block231:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block232:
	mov byte ptr [ebp-4],0x18
	test edi,edi
	je Block236

 Block233:
	lea esi,[edi+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block235

 Block234:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block235:
	mov dword ptr [ebp+0x24],0

 Block236:
	cmp dword ptr [ebp+0x58],0
	mov byte ptr [ebp-4],0x14
	je Block238

 Block237:
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block238:
	cmp dword ptr [ebp+0x48],0
	mov byte ptr [ebp-4],0x13
	je Block246

 Block239:
	mov esi,dword ptr [ebp+0x48]
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block245

 Block240:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block242

 Block241:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block242:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block244

 Block243:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block244:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block245:
	mov dword ptr [ebp+0x48],0

 Block246:
	cmp word ptr [ebp+0x10],8
	jne Block249

 Block247:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	test eax,eax
	je Block54

 Block248:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block249:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jl Block1

 Block250:
	jmp Block54

 Block251:
	push esi
	call _com_issue_error

 Block252:
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],0x12
	jne Block255

 Block253:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	test eax,eax
	je Block256

 Block254:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block256

 Block255:
	lea ecx,[ebp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block256:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0xF
	call eax
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block258

 Block257:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block258:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ecx
	mov eax,1

 Block259:
	lea esp,[ebp-0x17C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x74]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x78
	mov esp,ebp
	pop ebp
	ret
}
}
// StagePeriodInfo::~StagePeriodInfo
_SUB_EXCEPTION_HANDLER(31DD50)
__SUB_CLASS_THIS0(0031DD50, __thiscall, 63915,  StagePeriodInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_31DD50
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
	lea ecx,[esi+0x14]
	mov dword ptr [esp+0x14],2
	call ZArray<ZRef<StageBackImg>>::RemoveAll
	lea ecx,[esi+0x10]
	mov byte ptr [esp+0x14],1
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0xC]
	mov byte ptr [esp+0x14],0
	call ZArray<ZXString<char>>::RemoveAll
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CStageSystem::SetStagePeriod
_SUB_EXCEPTION_HANDLER(31EC40)
__SUB_CLASS_THIS(0031EC40, __thiscall, 62489,  CStageSystem, int32_t, NakedParam<ZXString<char>>, long, int32_t&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_31EC40
	mov eax,dword ptr fs:[0]
	push eax
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebp,dword ptr [esp+0x28]
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x24]
	push ecx
	lea ecx,[esi+0x24]
	mov dword ptr [esp+0x20],0
	mov dword ptr [ebp],0
	mov dword ptr [esp+0x30],0
	call ZMap<ZXString<char>, long, ZXString<char>>::GetAt
	mov edi,dword ptr [esp+0x24]
	test eax,eax
	mov eax,dword ptr [esp+0x28]
	je Block5

 Block1:
	cmp eax,edi
	jne Block5

 Block2:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	xor eax,eax
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0xC
	ret 0xC

 Block5:
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x28]
	mov dword ptr [esp+0x30],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call CStageSystem::CleanStage
	push 0
	push edi
	push ecx
	mov ecx,esp
	lea eax,[esp+0x2C]
	mov dword ptr [esp+0x34],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call CStageSystem::BuildCacheData
	test eax,eax
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	jne Block8

 Block6:
	mov dword ptr [ebp],1
	test eax,eax
	je Block4

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0xC
	ret 0xC

 Block8:
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov eax,1
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0xC
	ret 0xC
}
}
// CStageSystem::CleanStage
__SUB_CLASS_THIS(0031D370, __thiscall, 62491,  CStageSystem, void, NakedParam<ZXString<char>>, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	pop ecx

 Block2:
	ret 8
}
}
// StageTheme::~StageTheme
_SUB_EXCEPTION_HANDLER(31DCE0)
__SUB_CLASS_THIS0(0031DCE0, __thiscall, 63999,  StageTheme, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_31DCE0
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
	lea ecx,[esi+0x10]
	mov dword ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<StagePeriodInfo>, long>::`vftable'
	call ZMap<long, ZRef<StagePeriodInfo>, long>::RemoveAll
	lea ecx,[esi+0xC]
	mov byte ptr [esp+0x14],0
	call ZArray<ZXString<char>>::RemoveAll
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CStageSystem::CStageSystem
__SUB_CLASS_THIS0(0031CAF0, __thiscall, 62484,  CStageSystem, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	push edi
	lea eax,[esi+4]
	xor edi,edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-4]
	mov dword ptr [TSingleton<CStageSystem>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CStageSystem>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CStageSystem::`vftable'
	lea ecx,[esi+0xC]
	mov dword ptr [eax],edi
	mov ebx,0x1F
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, ZRef<StageTheme>, ZXString<char>>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<ZXString<char>, ZRef<StageTheme>, ZXString<char>>::_CalcAutoGrow
	lea ecx,[esi+0x24]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, long, ZXString<char>>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<ZXString<char>, long, ZXString<char>>::_CalcAutoGrow
	lea ecx,[esi+0x3C]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, ZRef<StageUnitEnable>, ZXString<char>>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<ZXString<char>, ZRef<StageUnitEnable>, ZXString<char>>::_CalcAutoGrow
	lea ecx,[esi+0x54]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<StageUnitEnable>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<StageUnitEnable>, long>::_CalcAutoGrow
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	ret
}
}
// StageBackImg::StageBackImg
__SUB_CLASS_THIS0(0031C7A0, __thiscall, 132165,  StageBackImg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	int 3// TODO: 	mov dword ptr [esi],offset StageBackImg::`vftable'
	push edi
	lea ecx,[esi+0x10]
	xor edi,edi
	mov dword ptr [esi+0xC],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, ZRef<ZMap<long, StageBackImg::StageBackObj, long>>, ZXString<char>>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<ZXString<char>, ZRef<ZMap<long, StageBackImg::StageBackObj, long>>, ZXString<char>>::_CalcAutoGrow
	lea ecx,[esi+0x28]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, ZRef<ZMap<long, StageBackImg::StageBackObj, long>>, ZXString<char>>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<ZXString<char>, ZRef<ZMap<long, StageBackImg::StageBackObj, long>>, ZXString<char>>::_CalcAutoGrow
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CStageSystem::BuildCacheData
_SUB_EXCEPTION_HANDLER(31E740)
__SUB_CLASS_THIS(0031E740, __thiscall, 62493,  CStageSystem, int32_t, NakedParam<ZXString<char>>, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_31E740
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
	mov dword ptr [esp+0x18],ebx
	xor ebp,ebp
	xor eax,eax
	cmp dword ptr [esp+0x60],ebp
	mov dword ptr [esp+0x54],ebp
	setg al
	mov dword ptr [esp+0x40],ebp
	mov esi,eax
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x60]
	push edx
	lea ecx,[ebx+0xC]
	mov byte ptr [esp+0x5C],1
	call ZMap<ZXString<char>, ZRef<StageTheme>, ZXString<char>>::GetAt
	test eax,eax
	jne Block7

 Block1:
	mov esi,dword ptr [esp+0x40]
	mov byte ptr [esp+0x54],al
	cmp esi,ebp
	je Block4

 Block2:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block3:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block4:
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp eax,ebp
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	xor eax,eax
	jmp Block64

 Block7:
	mov dword ptr [esp+0x38],ebp
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x64]
	push ecx
	mov ecx,dword ptr [esp+0x48]
	add ecx,0x10
	mov byte ptr [esp+0x5C],2
	call ZMap<long, ZRef<StagePeriodInfo>, long>::GetAt
	test eax,eax
	jne Block9

 Block8:
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x54],1
	call ZRef<StagePeriodInfo>::~ZRef<StagePeriodInfo>
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x54],0
	call ZRef<StageTheme>::~ZRef<StageTheme>
	jmp Block4

 Block9:
	lea edx,[ebx+4]
	push edx
	lea ecx,[esp+0x2C]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	mov dword ptr [ebx+0x70],ebp
	cmp esi,ebp
	mov ebp,dword ptr [esp+0x38]
	mov dword ptr [ebx+0x6C],0xFFFFFFFF
	je Block11

 Block10:
	mov eax,dword ptr [ebp+0x18]
	lea ecx,[ebp+0x14]
	mov dword ptr [ebx+0x6C],eax
	mov dword ptr [ebx+0x70],ecx

 Block11:
	xor esi,esi
	mov dword ptr [esp+0x30],esi
	lea edi,[ebx+0x3C]
	mov ecx,edi
	mov byte ptr [esp+0x54],4
	call ZMap<ZXString<char>, ZRef<StageUnitEnable>, ZXString<char>>::GetHeadPosition
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block16

 Block12:
	add eax,0xC
	push eax
	lea ecx,[esp+0x30]
	call ZRef<StageUnitEnable>::op_assign_copy
	mov esi,dword ptr [esp+0x30]
	test esi,esi
	je Block15

 Block13:
	lea edx,[esp+0x5C]
	push edx
	lea ecx,[esi+0x10]
	call ZXString<char>::op_eq_0
	test eax,eax
	je Block15

 Block14:
	mov dword ptr [esi+0xC],0

 Block15:
	push 0
	lea eax,[esp+0x18]
	push eax
	mov ecx,edi
	call ZMap<ZXString<char>, ZRef<StageUnitEnable>, ZXString<char>>::GetNext
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	jne Block12

 Block16:
	mov dword ptr [esp+0x1C],0
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [esp+0x54],5
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block26

 Block17:
	push eax
	call ZArray<ZXString<char>>::GetAt
	add esp,4
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::op_assign
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	lea ecx,[ebx+0x3C]
	call ZMap<ZXString<char>, ZRef<StageUnitEnable>, ZXString<char>>::GetAt
	test eax,eax
	jne Block24

 Block18:
	push eax
	call ZRefCounted_AllocHelper<StageUnitEnable>::call
	mov esi,eax
	lea edi,[esi+4]
	add esp,4
	mov dword ptr [edi],1
	mov dword ptr [esp+0x24],esi
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	push edi
	mov byte ptr [esp+0x58],6
	call ebx
	mov ebp,dword ptr [esp+0x30]
	test ebp,ebp
	je Block21

 Block19:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block21

 Block20:
	lea eax,[ebp+4]
	push eax
	call ebx
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebp
	call edx

 Block21:
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	add ecx,0x3C
	mov dword ptr [esp+0x38],esi
	call ZMap<ZXString<char>, ZRef<StageUnitEnable>, ZXString<char>>::Insert
	push edi
	mov byte ptr [esp+0x58],5
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block23

 Block22:
	push edi
	call ebx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block23:
	mov ebx,dword ptr [esp+0x18]
	mov ebp,dword ptr [esp+0x38]
	mov dword ptr [esp+0x24],0
	jmp Block25

 Block24:
	mov esi,dword ptr [esp+0x30]

 Block25:
	lea ecx,[esp+0x5C]
	push ecx
	lea ecx,[esi+0x10]
	call ZXString<char>::op_assign
	lea edx,[esp+0x14]
	push edx
	lea ecx,[ebp+0xC]
	mov dword ptr [esi+0xC],1
	call ZArray<ZXString<char>>::GetPrev
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	jne Block17

 Block26:
	add ebx,0x54
	mov ecx,ebx
	call ZMap<long, ZRef<StageUnitEnable>, long>::GetHeadPosition
	mov ebp,eax
	mov dword ptr [esp+0x14],ebp
	test ebp,ebp
	je Block38

 Block27:
	jmp Block29

 Block29:
	mov eax,dword ptr [ebp+0x10]
	test eax,eax
	je Block31

 Block30:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block31:
	test esi,esi
	je Block34

 Block32:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block34

 Block33:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block34:
	mov esi,dword ptr [ebp+0x10]
	mov dword ptr [esp+0x30],esi
	test esi,esi
	je Block37

 Block35:
	lea eax,[esp+0x5C]
	push eax
	lea ecx,[esi+0x10]
	call ZXString<char>::op_eq_0
	test eax,eax
	je Block37

 Block36:
	mov dword ptr [esi+0xC],0

 Block37:
	push 0
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebx
	call ZMap<long, ZRef<StageUnitEnable>, long>::GetNext
	mov ebp,dword ptr [esp+0x14]
	test ebp,ebp
	jne Block29

 Block38:
	mov ebp,dword ptr [esp+0x38]
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block48

 Block39:
	push eax
	call ZArray<long>::GetAt
	mov edx,dword ptr [eax]
	add esp,4
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,ebx
	mov dword ptr [esp+0x28],edx
	call ZMap<long, ZRef<StageUnitEnable>, long>::GetAt
	test eax,eax
	jne Block46

 Block40:
	push eax
	call ZRefCounted_AllocHelper<StageUnitEnable>::call
	mov esi,eax
	lea edi,[esi+4]
	add esp,4
	mov dword ptr [edi],1
	mov dword ptr [esp+0x48],esi
	push edi
	mov byte ptr [esp+0x58],7
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ebp,dword ptr [esp+0x30]
	test ebp,ebp
	je Block43

 Block41:
	lea ebx,[ebp+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block43

 Block42:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block43:
	mov ebx,dword ptr [esp+0x18]
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x24]
	add ebx,0x54
	push edx
	mov ecx,ebx
	mov dword ptr [esp+0x38],esi
	call ZMap<long, ZRef<StageUnitEnable>, long>::Insert
	push edi
	mov byte ptr [esp+0x58],5
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block45

 Block44:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block45:
	mov ebp,dword ptr [esp+0x38]
	mov dword ptr [esp+0x48],0
	jmp Block47

 Block46:
	mov esi,dword ptr [esp+0x30]

 Block47:
	lea eax,[esp+0x5C]
	push eax
	lea ecx,[esi+0x10]
	call ZXString<char>::op_assign
	lea ecx,[esp+0x14]
	push ecx
	lea ecx,[ebp+0x10]
	mov dword ptr [esi+0xC],1
	call ZArray<long>::GetPrev
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	jne Block39

 Block48:
	mov ecx,dword ptr [esp+0x18]
	lea edx,[esp+0x60]
	push edx
	lea eax,[esp+0x60]
	push eax
	add ecx,0x24
	call ZMap<ZXString<char>, long, ZXString<char>>::Insert
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x54],4
	test eax,eax
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block50:
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	mov byte ptr [esp+0x54],3
	test esi,esi
	je Block53

 Block51:
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block53

 Block52:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block53:
	mov eax,dword ptr [esp+0x28]
	add dword ptr [eax+4],0xFFFFFFFF
	jne Block55

 Block54:
	mov dword ptr [eax],0

 Block55:
	mov byte ptr [esp+0x54],1
	test ebp,ebp
	je Block58

 Block56:
	lea esi,[ebp+4]
	push esi
	call ebx
	test eax,eax
	jne Block58

 Block57:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block58:
	mov edi,dword ptr [esp+0x40]
	mov byte ptr [esp+0x54],0
	test edi,edi
	je Block61

 Block59:
	lea esi,[edi+4]
	push esi
	call ebx
	test eax,eax
	jne Block61

 Block60:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block61:
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	test eax,eax
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block63:
	mov eax,1

 Block64:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 0xC
}
}
// CStageSystem::IterateStageSystem
_SUB_EXCEPTION_HANDLER(320090)
__SUB_CLASS_THIS0(00320090, __thiscall, 62487,  CStageSystem, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_320090
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
	lea eax,[esi+4]
	push eax
	lea ecx,[esp+0xC]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	mov ecx,esi
	mov dword ptr [esp+0x14],0
	call CStageSystem::CleanUp
	lea ecx,[esi+0xC]
	call ZMap<ZXString<char>, ZRef<StageTheme>, ZXString<char>>::RemoveAll
	mov ecx,esi
	call CStageSystem::IterateStageSystemClient
	test eax,eax
	mov eax,dword ptr [esp+8]
	jne Block4

 Block1:
	add dword ptr [eax+4],0xFFFFFFFF
	jne Block3

 Block2:
	mov dword ptr [eax],0

 Block3:
	xor eax,eax
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret

 Block4:
	or ecx,0xFFFFFFFF
	add dword ptr [eax+4],ecx
	mov dword ptr [esp+0x14],ecx
	jne Block6

 Block5:
	mov dword ptr [eax],0

 Block6:
	mov eax,dword ptr [_D_G_RM]
	test eax,eax
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x24]
	push 0
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block10

 Block9:
	push offset __GUID_57dfe40b_3e20_4dbc_97e8_805a50f381bf
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov eax,1
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// StageUnitEnable::~StageUnitEnable
_SUB_EXCEPTION_HANDLER(31D4A0)
__SUB_CLASS_THIS0(0031D4A0, __thiscall, 64083,  StageUnitEnable, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_31D4A0
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
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CStageSystem::CleanUp
__SUB_CLASS_THIS0(0031C1A0, __thiscall, 62487,  CStageSystem, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea ecx,[esi+0x3C]
	mov dword ptr [esi+0x6C],0xFFFFFFFF
	mov dword ptr [esi+0x70],0
	call ZMap<ZXString<char>, ZRef<StageUnitEnable>, ZXString<char>>::RemoveAll
	lea ecx,[esi+0x54]
	call ZMap<long, ZRef<StageUnitEnable>, long>::RemoveAll
	mov eax,1
	pop esi
	ret
}
}
// StageBackImg::~StageBackImg
_SUB_EXCEPTION_HANDLER(31C860)
__SUB_CLASS_THIS0(0031C860, __thiscall, 132167,  StageBackImg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_31C860
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
	lea ecx,[esi+0x28]
	mov dword ptr [esp+0x14],2
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, ZRef<ZMap<long, StageBackImg::StageBackObj, long>>, ZXString<char>>::`vftable'
	call ZMap<ZXString<char>, ZRef<ZMap<long, StageBackImg::StageBackObj, long>>, ZXString<char>>::RemoveAll
	lea ecx,[esi+0x10]
	mov byte ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, ZRef<ZMap<long, StageBackImg::StageBackObj, long>>, ZXString<char>>::`vftable'
	call ZMap<ZXString<char>, ZRef<ZMap<long, StageBackImg::StageBackObj, long>>, ZXString<char>>::RemoveAll
	mov eax,dword ptr [esi+0xC]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CStageSystem::CheckQuestEnable
_SUB_EXCEPTION_HANDLER(31CC70)
__SUB_CLASS_THIS(0031CC70, __thiscall, 62499,  CStageSystem, int32_t, long, int32_t&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_31CC70
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
	xor edi,edi
	mov dword ptr [esp+0x10],edi
	lea eax,[esp+0xC]
	push eax
	lea edx,[esp+0x28]
	push edx
	add ecx,0x54
	mov dword ptr [esp+0x24],edi
	call ZMap<long, ZRef<StageUnitEnable>, long>::GetAt
	mov esi,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	jne Block5

 Block1:
	cmp esi,edi
	je Block4

 Block2:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block3:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block4:
	xor eax,eax
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 8

 Block5:
	mov eax,dword ptr [esi+0xC]
	mov ecx,dword ptr [esp+0x28]
	lea edi,[esi+4]
	push edi
	mov dword ptr [ecx],eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block6:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block7:
	mov eax,1
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 8
}
}
// CStageSystem::~CStageSystem
_SUB_EXCEPTION_HANDLER(31CB90)
__SUB_CLASS_THIS0(0031CB90, __thiscall, 62486,  CStageSystem, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_31CB90
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
	mov dword ptr [esp+0x10],esi
	int 3// TODO: 	mov dword ptr [esi],offset CStageSystem::`vftable'
	lea eax,[esi+4]
	push eax
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x20],4
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	mov ecx,esi
	mov byte ptr [esp+0x1C],5
	call CStageSystem::CleanUp
	lea edi,[esi+0xC]
	mov ecx,edi
	call ZMap<ZXString<char>, ZRef<StageTheme>, ZXString<char>>::RemoveAll
	mov eax,dword ptr [esp+0xC]
	add dword ptr [eax+4],0xFFFFFFFF
	jne Block2

 Block1:
	mov dword ptr [eax],0

 Block2:
	lea ecx,[esi+0x54]
	mov byte ptr [esp+0x1C],3
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<StageUnitEnable>, long>::`vftable'
	call ZMap<long, ZRef<StageUnitEnable>, long>::RemoveAll
	lea ecx,[esi+0x3C]
	mov byte ptr [esp+0x1C],2
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, ZRef<StageUnitEnable>, ZXString<char>>::`vftable'
	call ZMap<ZXString<char>, ZRef<StageUnitEnable>, ZXString<char>>::RemoveAll
	lea ecx,[esi+0x24]
	mov byte ptr [esp+0x1C],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, long, ZXString<char>>::`vftable'
	call ZMap<ZXString<char>, long, ZXString<char>>::RemoveAll
	mov ecx,edi
	mov byte ptr [esp+0x1C],0
	int 3// TODO: 	mov dword ptr [edi],offset ZMap<ZXString<char>, ZRef<StageTheme>, ZXString<char>>::`vftable'
	call ZMap<ZXString<char>, ZRef<StageTheme>, ZXString<char>>::RemoveAll
	mov dword ptr [TSingleton<CStageSystem>::ms_pInstance],0
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret
}
}
// CStageSystem::CheckKeywordEnable
_SUB_EXCEPTION_HANDLER(31D390)
__SUB_CLASS_THIS(0031D390, __thiscall, 62496,  CStageSystem, int32_t, NakedParam<ZXString<char>>, int32_t&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_31D390
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x20]
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	cmp eax,ebx
	je Block2

 Block1:
	cmp byte ptr [eax],bl
	jne Block5

 Block2:
	mov dword ptr [esp+0x18],0xFFFFFFFF
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	xor eax,eax
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop ebx
	add esp,0x14
	ret 8

 Block5:
	mov dword ptr [esp+0xC],ebx
	lea eax,[esp+8]
	push eax
	lea edx,[esp+0x24]
	push edx
	add ecx,0x3C
	mov byte ptr [esp+0x20],1
	call ZMap<ZXString<char>, ZRef<StageUnitEnable>, ZXString<char>>::GetAt
	mov byte ptr [esp+0x18],bl
	test eax,eax
	jne Block8

 Block6:
	lea ecx,[esp+8]
	call ZRef<StageUnitEnable>::~ZRef<StageUnitEnable>
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	cmp eax,ebx
	je Block4

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop ebx
	add esp,0x14
	ret 8

 Block8:
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [eax+0xC]
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [edx],ecx
	lea ecx,[esp+8]
	call ZRef<StageUnitEnable>::~ZRef<StageUnitEnable>
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov eax,1
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop ebx
	add esp,0x14
	ret 8
}
}
// LoadStageBackImgInfo
_SUB_EXCEPTION_HANDLER(31DE80)
__SUB(0031DE80, __cdecl, 132760,  void, NakedParam<_x_com_ptr<IWzProperty>>, ZMap<ZXString<char>,ZRef<ZMap<long,StageBackImg::StageBackObj,long> >,ZXString<char> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_31DE80
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
	mov ecx,dword ptr [esp+0xF4]
	xor ebx,ebx
	mov dword ptr [esp+0xEC],ebx
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+0x5C]
	push eax
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xF0],1
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	lea ecx,[esp+0x2C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block7

 Block5:
	cmp eax,0x80004002
	je Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0xEC],3
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0xEC],4
	mov dword ptr [esp+0x58],ebx

 Block10:
	mov esi,dword ptr [esp+0x28]
	cmp esi,ebx
	je Block1

 Block11:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x34]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block106

 Block12:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	call DetachBSTR
	add esp,8
	mov esi,dword ptr [esp+0x20]
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],esi
	cmp esi,ebx
	je Block14

 Block13:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov ecx,dword ptr [esp+0x100]
	mov byte ptr [esp+0xF8],6
	cmp ecx,ebx
	je Block1

 Block15:
	lea edx,[esp+0x80]
	push edx
	mov byte ptr [esp+0xFC],5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xF4],7
	call Ztl_variant_t::GetUnknown
	xor ebp,ebp
	mov dword ptr [esp+0x18],ebp
	cmp eax,ebx
	je Block18

 Block16:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x68]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x68]
	cmp eax,ebx
	mov ebp,ecx
	mov dword ptr [esp+0x18],ebp
	jge Block18

 Block17:
	cmp eax,0x80004002
	jne Block6

 Block18:
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xEC],9
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x7C]
	xor edx,edx
	mov word ptr [esp+0x74],dx
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[esp+0x74]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block22:
	cmp esi,ebx
	je Block24

 Block23:
	mov edi,dword ptr [esi]
	jmp Block25

 Block24:
	xor edi,edi

 Block25:
	mov dword ptr [esp+0x1C],ebx
	cmp edi,ebx
	je Block27

 Block26:
	push ebx
	push ebx
	push ebx
	push ebx
	push 0xFFFFFFFF
	push edi
	push ebx
	push ebx
	call WideCharToMultiByte
	mov esi,eax
	push ebx
	dec esi
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push ebx
	push ebx
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push edi
	push ebx
	push ebx
	call WideCharToMultiByte
	push esi
	lea ecx,[esp+0x20]
	call ZXString<char>::ReleaseBuffer

 Block27:
	mov byte ptr [esp+0xEC],0xA
	cmp ebp,ebx
	je Block89

 Block28:
	push ebx
	call ZRefCounted_AllocHelper<ZRefCountedDummy<ZMap<long, StageBackImg::StageBackObj, long>>>::call
	lea ebp,[eax+0x10]
	add esp,4
	mov dword ptr [eax+4],1
	mov dword ptr [esp+0x70],ebp
	lea ecx,[esp+0x54]
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xF0],0xB
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xF0],0xC
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block30

 Block29:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block30:
	lea ecx,[esp+0x28]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block32

 Block31:
	cmp eax,0x80004002
	jne Block6

 Block32:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0xEC],0xE
	cmp eax,ebx
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0xEC],0xF
	mov dword ptr [esp+0x64],ebx
	jmp Block36

 Block36:
	mov esi,dword ptr [esp+0x24]
	cmp esi,ebx
	je Block1

 Block37:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x64]
	push edx
	lea eax,[esp+0x44]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block80

 Block38:
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x30]
	push eax
	call DetachBSTR
	add esp,8
	mov edi,dword ptr [esp+0x2C]
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],edi
	cmp edi,ebx
	je Block40

 Block39:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block40:
	mov ecx,dword ptr [esp+0x24]
	lea edx,[esp+0xD0]
	mov byte ptr [esp+0xF8],0x11
	push edx
	mov byte ptr [esp+0xFC],0x10
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xF4],0x12
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x60],esi
	cmp eax,ebx
	je Block43

 Block41:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x50]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x50]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [esp+0x60],esi
	jge Block43

 Block42:
	cmp eax,0x80004002
	jne Block6

 Block43:
	cmp word ptr [esp+0xC4],8
	mov byte ptr [esp+0xEC],0x14
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0xCC]
	xor edx,edx
	mov word ptr [esp+0xC4],dx
	cmp eax,ebx
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[esp+0xC4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block47:
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x3E5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xF4],0x15
	cmp esi,ebx
	je Block1

 Block48:
	lea edx,[esp+0xAC]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xF8],0x14
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xF4],0x16
	call get_int32
	add esp,8
	cmp word ptr [esp+0xA4],8
	mov dword ptr [esp+0xD4],eax
	mov byte ptr [esp+0xEC],0x14
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0xA4],ax
	mov eax,dword ptr [esp+0xAC]
	cmp eax,ebx
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[esp+0xA4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x3E6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x8C]
	mov byte ptr [esp+0xF4],0x17
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xF8],0x14
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xF4],0x18
	call get_int32
	add esp,8
	cmp word ptr [esp+0x84],8
	mov dword ptr [esp+0xD8],eax
	mov byte ptr [esp+0xEC],0x14
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x8C]
	xor ecx,ecx
	mov word ptr [esp+0x84],cx
	cmp eax,ebx
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea edx,[esp+0x84]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x17F1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x9C]
	push ecx
	mov byte ptr [esp+0xF8],0x19
	mov ecx,esi
	mov byte ptr [esp+0xF8],0x14
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xF4],0x1A
	call get_int32
	add esp,8
	cmp word ptr [esp+0x94],8
	mov dword ptr [esp+0xDC],eax
	mov byte ptr [esp+0xEC],0x14
	jne Block59

 Block57:
	mov eax,dword ptr [esp+0x9C]
	xor edx,edx
	mov word ptr [esp+0x94],dx
	cmp eax,ebx
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[esp+0x94]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block60:
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x17F2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0xBC]
	mov byte ptr [esp+0xF4],0x1B
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xF8],0x14
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xF4],0x1C
	call get_int32
	add esp,8
	cmp word ptr [esp+0xB4],8
	mov dword ptr [esp+0xE0],eax
	mov byte ptr [esp+0xEC],0x14
	jne Block63

 Block61:
	xor eax,eax
	mov word ptr [esp+0xB4],ax
	mov eax,dword ptr [esp+0xBC]
	cmp eax,ebx
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea ecx,[esp+0xB4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	cmp edi,ebx
	je Block66

 Block65:
	mov eax,dword ptr [edi]
	jmp Block67

 Block66:
	xor eax,eax

 Block67:
	push eax
	call __wtoi
	add esp,4
	lea edx,[esp+0xD4]
	mov dword ptr [esp+0x14],eax
	push edx
	lea eax,[esp+0x18]
	push eax
	mov ecx,ebp
	call ZMap<long, StageBackImg::StageBackObj, long>::Insert
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0xF0],0x10
	call edx
	mov byte ptr [esp+0xEC],0xF
	cmp edi,ebx
	je Block75

 Block68:
	lea eax,[edi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block74

 Block69:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block71

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block71:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block73

 Block72:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block73:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block74:
	mov dword ptr [esp+0x2C],ebx

 Block75:
	cmp word ptr [esp+0x40],8
	jne Block78

 Block76:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	cmp eax,ebx
	je Block36

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block78:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]
	cmp eax,ebx
	jge Block36

 Block79:
	jmp Block6

 Block80:
	lea eax,[esp+0x6C]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [esp+0x100]
	call ZMap<ZXString<char>, ZRef<ZMap<long, StageBackImg::StageBackObj, long>>, ZXString<char>>::Insert
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0xEC],0xE
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	cmp eax,ebx
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0xF0],0xB
	call edx
	mov byte ptr [esp+0xEC],0xA
	cmp ebp,ebx
	je Block89

 Block85:
	lea esi,[ebp-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block88

 Block86:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block88

 Block87:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block88:
	mov dword ptr [esp+0x70],ebx

 Block89:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xEC],9
	cmp eax,ebx
	je Block91

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block91:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xEC],5
	cmp eax,ebx
	je Block93

 Block92:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block93:
	mov esi,dword ptr [esp+0x20]
	mov byte ptr [esp+0xEC],4
	cmp esi,ebx
	je Block101

 Block94:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block100

 Block95:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block97

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block97:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block99

 Block98:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block99:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block100:
	mov dword ptr [esp+0x20],ebx

 Block101:
	cmp word ptr [esp+0x30],8
	jne Block104

 Block102:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebx
	je Block10

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block104:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]
	cmp eax,ebx
	jge Block10

 Block105:
	jmp Block6

 Block106:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xEC],3
	jne Block109

 Block107:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebx
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block110:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0xF0],bl
	call eax
	mov eax,dword ptr [esp+0xF4]
	mov dword ptr [esp+0xEC],0xFFFFFFFF
	cmp eax,ebx
	je Block112

 Block111:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block112:
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
