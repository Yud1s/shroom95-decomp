#include "regen.hpp"
// Life.ipp
#include "Life.hpp"

// IVecCtrlOwner::GetRTTI
__SUB_CLASS_THIS0(001CF3A0, __thiscall, 23439,  IVecCtrlOwner, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset IVecCtrlOwner::ms_RTTI_IVecCtrlOwner
	ret
}
}
// CLife::GetRTTI
__SUB_CLASS_THIS0(001CF4B0, __thiscall, 23502,  CLife, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CLife::ms_RTTI_CLife
	ret
}
}
// CLife::MakeNameTag
_SUB_EXCEPTION_HANDLER(1CF5E0)
__SUB_CLASS_THIS(001CF5E0, __thiscall, 23498,  CLife, long, const char*, NakedParam<_x_com_ptr<IWzGr2DLayer>>, NakedParam<_x_com_ptr<IWzVector2D>>, long, long, uint16_t, unsigned char, uint16_t, unsigned char) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1CF5E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xBC
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xD0]
	mov dword ptr fs:[0],eax
	mov edx,ecx
	mov dword ptr [esp+0x88],edx
	mov eax,dword ptr [esp+0xEC]
	mov ebx,dword ptr [esp+0xE0]
	xor ebp,ebp
	add eax,0xFFFFFC16
	mov esi,1
	mov dword ptr [esp+0xD8],esi
	mov dword ptr [esp+0x8C],ebp
	cmp eax,5
	ja Block14

 Block1:
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block14
cmp EAX, 2
je Block3
cmp EAX, 3
je Block3
cmp EAX, 4
je Block2
cmp EAX, 5
je Block3


 Block2:
	mov esi,2

 Block3:
	mov dword ptr [esp+0x8C],esi
	cmp ebx,ebp
	je Block7

 Block4:
	mov eax,ebx
	lea edi,[eax+1]
	nop

 Block5:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block5

 Block6:
	sub eax,edi
	jne Block14

 Block7:
	mov eax,dword ptr [edx+esi*4+0x7C]
	cmp eax,ebp
	je Block9

 Block8:
	mov dword ptr [edx+esi*4+0x7C],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov eax,dword ptr [esp+0xE4]
	mov byte ptr [esp+0xD8],0
	cmp eax,ebp
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov eax,dword ptr [esp+0xE8]
	mov dword ptr [esp+0xD8],0xFFFFFFFF
	cmp eax,ebp
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	xor eax,eax
	jmp Block496

 Block14:
	cmp dword ptr [esp+0xEC],0x3E8
	mov edi,dword ptr [esp+0xF0]
	jne Block16

 Block15:
	mov dword ptr [esp+0x5C],1
	cmp edi,1
	je Block17

 Block16:
	mov dword ptr [esp+0x5C],ebp

 Block17:
	mov dword ptr [esp+0x78],ebp
	cmp ebx,ebp
	je Block21

 Block18:
	mov eax,ebx
	lea edx,[eax+1]

 Block19:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block19

 Block20:
	sub eax,edx
	mov esi,eax
	push esi
	push ebx
	push ebp
	push esi
	lea ecx,[esp+0x88]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x7C]
	call ZXString<char>::ReleaseBuffer

 Block21:
	cmp dword ptr [esp+0xEC],0x3EE
	mov byte ptr [esp+0xD8],2
	jne Block27

 Block22:
	lea eax,[esp+0x4C]
	push 0x11CE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push offset _S_
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	lea ecx,[esp+0x84]
	mov byte ptr [esp+0xE4],3
	call ZXString<char>::Replace
	push eax
	lea ecx,[esp+0x7C]
	mov byte ptr [esp+0xDC],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD8],3
	cmp eax,ebp
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xD8],2
	cmp eax,ebp
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov edx,dword ptr [esp+0x78]
	mov dword ptr [esp+0xE0],edx

 Block27:
	mov dword ptr [esp+0x44],ebp
	lea eax,[esp+0x14]
	push 0x5AF
	push eax
	mov byte ptr [esp+0xE0],5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea ecx,[esp+0x48]
	push ecx
	push eax
	mov byte ptr [esp+0xE4],6
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0xD8],5
	cmp eax,ebp
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block29:
	mov dword ptr [esp+0x3C],ebp
	lea edx,[esp+0x14]
	push 0x3D0
	push edx
	mov byte ptr [esp+0xE0],7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea ecx,[esp+0x40]
	push ecx
	push eax
	mov byte ptr [esp+0xE4],8
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0xD8],7
	cmp eax,ebp
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block31:
	mov dword ptr [esp+0x74],ebp
	mov dword ptr [esp+0x7C],ebp
	mov eax,dword ptr [esp+0xEC]
	mov byte ptr [esp+0xD8],9
	cmp eax,0x3E8
	jne Block33

 Block32:
	lea edx,[esp+0x14]
	push 0x541
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea eax,[esp+0x84]
	mov byte ptr [esp+0xE0],0xA
	push eax
	jmp Block37

 Block33:
	cmp eax,0x3EB
	jne Block35

 Block34:
	lea ecx,[esp+0x14]
	push 0x542
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x84]
	mov byte ptr [esp+0xE0],0xB
	push edx
	jmp Block37

 Block35:
	cmp eax,0x3EE
	jne Block39

 Block36:
	lea eax,[esp+0x14]
	push 0x543
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea ecx,[esp+0x84]
	mov byte ptr [esp+0xE0],0xC
	push ecx

 Block37:
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0xD8],9
	cmp eax,ebp
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	xor esi,esi
	mov dword ptr [esp+0x80],esi
	mov edi,dword ptr [esp+0x7C]
	mov byte ptr [esp+0xD8],0xD
	cmp edi,ebp
	je Block63

 Block40:
	cmp byte ptr [edi],0
	je Block63

 Block41:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x18]
	push edx
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0xDC],0xE
	call esi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	push ebp
	push ebp
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	push ecx
	mov dword ptr [esp+0x4C],esp
	mov ecx,esp
	mov bl,0xF
	push edi
	mov byte ptr [esp+0xF0],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xEC],0x10
	cmp dword ptr [_D_G_RM],ebp
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea edx,[esp+0x78]
	mov byte ptr [esp+0xEC],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xE0],0x11
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x84]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block50

 Block48:
	cmp eax,0x80004002
	je Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	mov esi,8
	mov byte ptr [esp+0xD8],bl
	cmp word ptr [esp+0x64],si
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	cmp eax,ebp
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [esp+0xD8],0xE
	cmp word ptr [esp+0x28],si
	jne Block57

 Block55:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov byte ptr [esp+0xD8],0xD
	cmp word ptr [esp+0x18],si
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov esi,dword ptr [esp+0x80]

 Block63:
	cmp esi,ebp
	sete al
	test al,al
	sete al
	test al,al
	je Block221

 Block64:
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push 0x5A4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xE4],0x12
	cmp esi,ebp
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	lea ecx,[esp+0x70]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0xE8],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xE0],0x13
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x58]
	mov dword ptr [esp+0x58],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block69

 Block67:
	cmp eax,0x80004002
	je Block69

 Block68:
	push eax
	call _com_issue_error

 Block69:
	mov ebx,8
	mov byte ptr [esp+0xD8],0x15
	cmp word ptr [esp+0x64],bx
	jne Block76

 Block70:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	cmp eax,ebp
	je Block72

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block72:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block73:
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0x5A5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0xBC]
	mov byte ptr [esp+0xE4],0x16
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xE8],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xE0],0x17
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x88]
	mov dword ptr [esp+0x88],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block77

 Block74:
	cmp eax,0x80004002
	je Block77

 Block75:
	push eax
	call _com_issue_error

 Block76:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x64]
	push eax
	call edi
	jmp Block73

 Block77:
	mov byte ptr [esp+0xD8],0x19
	cmp word ptr [esp+0xB0],bx
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [esp+0xB0],ax
	mov eax,dword ptr [esp+0xB8]
	cmp eax,ebp
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[esp+0xB0]
	push ecx
	call edi

 Block81:
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x44],esp
	push 0x5A3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0xAC]
	mov byte ptr [esp+0xE4],0x1A
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xE8],0x19
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xE0],0x1B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x54],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block84

 Block82:
	cmp eax,0x80004002
	je Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	mov byte ptr [esp+0xD8],0x1D
	cmp word ptr [esp+0xA0],bx
	jne Block87

 Block85:
	mov eax,dword ptr [esp+0xA8]
	xor ecx,ecx
	mov word ptr [esp+0xA0],cx
	cmp eax,ebp
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea edx,[esp+0xA0]
	push edx
	call edi

 Block88:
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x5AE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0xE4],0x1E
	mov ecx,esi
	mov byte ptr [esp+0xE4],0x1D
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xE0],0x1F
	call get_int32
	add esp,8
	mov esi,eax
	mov byte ptr [esp+0xD8],0x1D
	cmp word ptr [esp+0x28],bx
	jne Block91

 Block89:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea eax,[esp+0x28]
	push eax
	call edi

 Block92:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push ecx
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp dword ptr [esp+0xEC],0x3EE
	jne Block96

 Block93:
	cmp eax,ebp
	jge Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	lea eax,[esp+0x28]
	push eax
	push esi
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push 0x6A8
	mov bl,0x20
	push ecx
	mov byte ptr [esp+0xF0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xE8],0x21
	jmp Block99

 Block96:
	cmp eax,ebp
	jge Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	lea eax,[esp+0x28]
	push eax
	push esi
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push 0x1A25
	mov bl,0x22
	push ecx
	mov byte ptr [esp+0xF0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xE8],0x23

 Block99:
	mov ecx,dword ptr [esp+0x54]
	cmp ecx,ebp
	jne Block101

 Block100:
	push 0x80004003
	call _com_issue_error

 Block101:
	mov byte ptr [esp+0xE8],bl
	call IWzFont::Create
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xD8],0x1D
	jne Block104

 Block102:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block105:
	lea ecx,[esp+0x28]
	push ecx
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block107

 Block106:
	push eax
	call _com_issue_error

 Block107:
	mov edx,dword ptr [esp+0xE0]
	lea eax,[esp+0x28]
	push eax
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov bl,0x24
	push edx
	mov byte ptr [esp+0xE4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xE0],0x25
	cmp ecx,ebp
	jne Block109

 Block108:
	push 0x80004003
	call _com_issue_error

 Block109:
	mov byte ptr [esp+0xE0],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x28],8
	mov ebx,eax
	mov dword ptr [esp+0x38],ebx
	mov byte ptr [esp+0xD8],0x1D
	jne Block112

 Block110:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block113

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block112:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block113:
	mov edi,dword ptr [esp+0x84]
	cmp edi,ebp
	jne Block115

 Block114:
	push 0x80004003
	call _com_issue_error

 Block115:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x58]
	push eax
	push edi
	mov dword ptr [esp+0x60],ebp
	call ecx
	cmp eax,ebp
	jge Block117

 Block116:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block117:
	mov esi,dword ptr [esp+0x54]
	cmp esi,ebp
	jne Block119

 Block118:
	push 0x80004003
	call _com_issue_error

 Block119:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x6C]
	lea eax,[esp+0x5C]
	push eax
	push esi
	mov dword ptr [esp+0x64],ebp
	call ecx
	cmp eax,ebp
	jge Block121

 Block120:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block121:
	mov ecx,dword ptr [esp+0x58]
	lea eax,[ecx+ebx-1]
	cdq
	idiv ecx
	mov ebp,dword ptr [esp+0x50]
	xor ebx,ebx
	imul eax,ecx
	mov dword ptr [esp+0x58],eax
	cmp ebp,ebx
	jne Block123

 Block122:
	push 0x80004003
	call _com_issue_error

 Block123:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x40]
	push eax
	push ebp
	mov dword ptr [esp+0x48],ebx
	call ecx
	cmp eax,ebx
	jge Block125

 Block124:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block125:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x6C]
	mov esi,dword ptr [esp+0x40]
	lea eax,[esp+0x48]
	push eax
	push ebp
	mov dword ptr [esp+0x50],ebx
	call ecx
	cmp eax,ebx
	jge Block127

 Block126:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block127:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x74]
	sub esi,dword ptr [esp+0x48]
	lea eax,[esp+0x40]
	push eax
	push ebp
	mov dword ptr [esp+0x48],ebx
	call ecx
	cmp eax,ebx
	jge Block129

 Block128:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block129:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x74]
	mov ebx,dword ptr [esp+0x40]
	lea eax,[esp+0x48]
	push eax
	push edi
	mov dword ptr [esp+0x50],0
	call ecx
	test eax,eax
	jge Block131

 Block130:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block131:
	mov eax,dword ptr [esp+0x54]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x74]
	mov edi,dword ptr [esp+0x48]
	lea ecx,[esp+0x60]
	push ecx
	push eax
	mov dword ptr [esp+0x68],0
	call edx
	test eax,eax
	jge Block133

 Block132:
	mov ecx,dword ptr [esp+0x54]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block133:
	mov eax,dword ptr [esp+0x60]
	cmp edi,eax
	jl Block135

 Block134:
	mov eax,edi

 Block135:
	cmp ebx,eax
	mov dword ptr [esp+0x40],eax
	jl Block137

 Block136:
	mov dword ptr [esp+0x40],ebx

 Block137:
	mov edx,dword ptr [esp+0x5C]
	mov eax,dword ptr [ebp]
	add esi,edx
	add esi,dword ptr [esp+0x58]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x60]
	push ecx
	push ebp
	mov dword ptr [esp+0x50],esi
	mov dword ptr [esp+0x68],0
	call edx
	test eax,eax
	jge Block139

 Block138:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block139:
	mov edi,dword ptr [esp+0x50]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x74]
	mov ebp,dword ptr [esp+0x60]
	lea ecx,[esp+0x98]
	push ecx
	xor esi,esi
	push edi
	mov dword ptr [esp+0xA0],esi
	call edx
	cmp eax,esi
	jge Block141

 Block140:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block141:
	mov eax,dword ptr [esp+0x98]
	mov ebx,dword ptr [esp+0x84]
	mov ecx,dword ptr [ebx]
	lea edx,[esp+0x9C]
	push edx
	mov dword ptr [esp+0x98],eax
	mov eax,dword ptr [ecx+0x48]
	push ebx
	mov dword ptr [esp+0xA4],esi
	call eax
	cmp eax,esi
	jge Block143

 Block142:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block143:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x74]
	mov edi,dword ptr [esp+0x9C]
	lea edx,[esp+0x90]
	push edx
	push ebx
	mov dword ptr [esp+0x98],esi
	call eax
	cmp eax,esi
	jge Block145

 Block144:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block145:
	mov ebx,dword ptr [esp+0x90]
	mov dword ptr [esp+0x4C],esi
	mov esi,dword ptr [esp+0x54]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x4C]
	push edx
	push esi
	call eax
	test eax,eax
	jge Block147

 Block146:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block147:
	mov eax,dword ptr [esp+0x54]
	mov ecx,dword ptr [eax]
	mov esi,dword ptr [esp+0x4C]
	lea edx,[esp+0x14]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x74]
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block149

 Block148:
	mov ecx,dword ptr [esp+0x54]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block149:
	sub esi,dword ptr [esp+0x14]
	sub edi,ebx
	mov eax,edi
	cmp eax,esi
	jae Block151

 Block150:
	mov eax,esi

 Block151:
	sub ebp,dword ptr [esp+0x94]
	mov ecx,ebp
	cmp ecx,eax
	jb Block153

 Block152:
	mov eax,ecx

 Block153:
	mov edx,dword ptr [esp+0x40]
	mov edi,dword ptr [ZImports::_VariantInit]
	lea esi,[eax+edx]
	lea eax,[esp+0x18]
	push eax
	call edi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block155

 Block154:
	push eax
	call _com_issue_error

 Block155:
	lea edx,[esp+0x28]
	mov bl,0x26
	push edx
	mov byte ptr [esp+0xDC],bl
	call edi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block157

 Block156:
	push eax
	call _com_issue_error

 Block157:
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0xD8],0x27
	test ecx,ecx
	jne Block159

 Block158:
	push 0x80004003
	call _com_issue_error

 Block159:
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [esp+0x4C]
	lea eax,[esp+0x2C]
	push eax
	push esi
	push edx
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0xD8],bl
	cmp word ptr [esp+0x28],si
	jne Block162

 Block160:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block163:
	mov byte ptr [esp+0xD8],0x1D
	cmp word ptr [esp+0x18],si
	jne Block166

 Block164:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block167

 Block165:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block167

 Block166:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block167:
	mov ebp,dword ptr [esp+0x84]
	xor edi,edi
	cmp dword ptr [esp+0x58],edi
	jle Block182

 Block168:
	xor ebx,ebx

 Block169:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block42

 Block170:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x14]
	push ecx
	push ebp
	mov byte ptr [esp+0xE0],0x28
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block172

 Block171:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block172:
	mov ecx,dword ptr [esp+0x3C]
	cmp ecx,ebx
	je Block46

 Block173:
	mov ebx,dword ptr [esp+0x18]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x34]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [esp+0x50]
	sub eax,dword ptr [esp+0x24]
	push ebp
	push eax
	mov eax,dword ptr [esp+0x74]
	add eax,edi
	push eax
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	xor ebx,ebx
	cmp eax,ebx
	jge Block175

 Block174:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block175:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xD8],0x1D
	jne Block178

 Block176:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	cmp eax,ebx
	je Block179

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block179

 Block178:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block179:
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x14]
	push edx
	push ebp
	mov dword ptr [esp+0x1C],ebx
	call eax
	cmp eax,ebx
	jge Block181

 Block180:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block181:
	add edi,dword ptr [esp+0x14]
	cmp edi,dword ptr [esp+0x58]
	jl Block169

 Block182:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block184

 Block183:
	push eax
	call _com_issue_error

 Block184:
	mov edi,dword ptr [esp+0x54]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov byte ptr [esp+0xE0],0x29
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block186

 Block185:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block186:
	mov ecx,dword ptr [esp+0x3C]
	test ecx,ecx
	jne Block188

 Block187:
	push 0x80004003
	call _com_issue_error

 Block188:
	mov ebx,dword ptr [esp+0x18]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x34]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [esp+0x50]
	sub eax,dword ptr [esp+0x24]
	push edi
	push eax
	push 0
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block190

 Block189:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block190:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xD8],0x1D
	jne Block193

 Block191:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block194

 Block192:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block194

 Block193:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block194:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block196

 Block195:
	push eax
	call _com_issue_error

 Block196:
	mov edi,dword ptr [esp+0x50]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov byte ptr [esp+0xE0],0x2A
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block198

 Block197:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block198:
	mov ecx,dword ptr [esp+0x3C]
	test ecx,ecx
	jne Block200

 Block199:
	push 0x80004003
	call _com_issue_error

 Block200:
	mov ebx,dword ptr [esp+0x18]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x34]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [esp+0x58]
	sub eax,dword ptr [esp+0x24]
	push edi
	push 0
	push eax
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block202

 Block201:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block202:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xD8],0x1D
	jne Block205

 Block203:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block206

 Block204:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block206

 Block205:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block206:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push ecx
	call esi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block208

 Block207:
	push eax
	call _com_issue_error

 Block208:
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0xDC],0x2B
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block210

 Block209:
	push eax
	call _com_issue_error

 Block210:
	mov ecx,dword ptr [esp+0x44]
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [esp+0xE4]
	lea eax,[esp+0x2C]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0xA4],esp
	mov ecx,esp
	mov bl,0x2C
	push edx
	mov byte ptr [esp+0xEC],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xE8],0x2D
	test ecx,ecx
	jne Block212

 Block211:
	push 0x80004003
	call _com_issue_error

 Block212:
	mov eax,dword ptr [esp+0x50]
	add eax,0xFFFFFFFE
	push eax
	mov eax,dword ptr [esp+0x6C]
	sub eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xEC],bl
	cdq
	sub eax,edx
	sar eax,1
	add eax,dword ptr [esp+0x70]
	push eax
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0xD8],0x2B
	cmp word ptr [esp+0x28],si
	jne Block215

 Block213:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block216

 Block214:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block216

 Block215:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block216:
	mov byte ptr [esp+0xD8],0x1D
	cmp word ptr [esp+0x18],si
	jne Block219

 Block217:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block220

 Block218:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block220

 Block219:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block220:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0xDC],0x19
	call eax
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0xDC],0x15
	call edx
	mov eax,dword ptr [esp+0x54]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xDC],0xD
	call edx
	mov ebx,dword ptr [esp+0x74]
	mov edi,dword ptr [ZImports::_VariantInit]
	jmp Block341

 Block221:
	mov eax,dword ptr [esp+0xEC]
	add eax,0xFFFFFC17
	mov dword ptr [esp+0x4C],0xA0000000
	cmp eax,6
	ja Block241

 Block222:
	cmp EAX, 0
je Block223
cmp EAX, 1
je Block226
cmp EAX, 2
je Block241
cmp EAX, 3
je Block229
cmp EAX, 4
je Block229
cmp EAX, 5
je Block241
cmp EAX, 6
je Block232


 Block223:
	lea eax,[esp+0x38]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0xC4]
	mov byte ptr [esp+0xDC],0x2E
	call Ztl_variant_t::_ctor_3
	lea ecx,[esp+0xC0]
	push ecx
	push 0xFFFFFF00
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x60],esp
	push 0x1A25
	mov bl,0x2F
	push edx
	mov byte ptr [esp+0xF0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0xE8],0x30
	cmp ecx,ebp
	jne Block225

 Block224:
	push 0x80004003
	call _com_issue_error

 Block225:
	mov byte ptr [esp+0xE8],bl
	call IWzFont::Create
	lea ecx,[esp+0xC0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0xD8],0xD
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block254

 Block226:
	lea eax,[esp+0x94]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0xB4]
	mov byte ptr [esp+0xDC],0x31
	call Ztl_variant_t::_ctor_3
	lea ecx,[esp+0xB0]
	push ecx
	push 0xFFFFFF00
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x60],esp
	push 0x1A25
	mov bl,0x32
	push edx
	mov byte ptr [esp+0xF0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0xE8],0x33
	cmp ecx,ebp
	jne Block228

 Block227:
	push 0x80004003
	call _com_issue_error

 Block228:
	mov byte ptr [esp+0xE8],bl
	call IWzFont::Create
	lea ecx,[esp+0xB0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x94]
	mov byte ptr [esp+0xD8],0xD
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block254

 Block229:
	lea eax,[esp+0x14]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0xA4]
	mov byte ptr [esp+0xDC],0x34
	call Ztl_variant_t::_ctor_3
	lea ecx,[esp+0xA0]
	push ecx
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x60],esp
	push 0x1A25
	mov bl,0x35
	push edx
	mov byte ptr [esp+0xF0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0xE8],0x36
	cmp ecx,ebp
	jne Block231

 Block230:
	push 0x80004003
	call _com_issue_error

 Block231:
	mov byte ptr [esp+0xE8],bl
	call IWzFont::Create
	lea ecx,[esp+0xA0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xD8],0xD
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block254

 Block232:
	mov eax,dword ptr [esp+0xF0]
	cmp eax,ebp
	jne Block236

 Block233:
	lea eax,[esp+0x90]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xDC],0x37
	call Ztl_variant_t::_ctor_3
	lea ecx,[esp+0x28]
	push ecx
	push 0xFFFF5533
	push 0xD
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x60],esp
	push 0x1A25
	mov bl,0x38
	push edx
	mov byte ptr [esp+0xF0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0xE8],0x39
	cmp ecx,ebp
	jne Block235

 Block234:
	push 0x80004003
	call _com_issue_error

 Block235:
	mov byte ptr [esp+0xE8],bl
	call IWzFont::Create
	lea ecx,[esp+0x28]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x90]
	mov byte ptr [esp+0xD8],0xD
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block254

 Block236:
	cmp eax,1
	jne Block240

 Block237:
	lea eax,[esp+0x9C]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xDC],0x3A
	call Ztl_variant_t::_ctor_3
	lea ecx,[esp+0x18]
	push ecx
	push 0xFF4488FF
	push 0xD
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x60],esp
	push 0x1A25
	mov bl,0x3B
	push edx
	mov byte ptr [esp+0xF0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0xE8],0x3C
	cmp ecx,ebp
	jne Block239

 Block238:
	push 0x80004003
	call _com_issue_error

 Block239:
	mov byte ptr [esp+0xE8],bl
	call IWzFont::Create
	lea ecx,[esp+0x18]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x9C]
	mov byte ptr [esp+0xD8],0xD
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block254

 Block240:
	lea eax,[esp+0x98]
	push ebp
	push eax
	call get_basic_font
	add esp,8
	push eax
	lea ecx,[esp+0x48]
	call _x_com_ptr<IWzFont>::op_assign_copy
	mov eax,dword ptr [esp+0x98]
	jmp Block252

 Block241:
	cmp dword ptr [esp+0x5C],ebp
	je Block251

 Block242:
	lea eax,[esp+0x60]
	push 0x5B1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x68]
	mov byte ptr [esp+0xDC],0x3D
	call Ztl_variant_t::_ctor_3
	lea ecx,[esp+0x64]
	push ecx
	push 0xFF000000
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push 0x1A25
	mov bl,0x3E
	push edx
	mov byte ptr [esp+0xF0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0xE8],0x3F
	cmp ecx,ebp
	jne Block244

 Block243:
	push 0x80004003
	call _com_issue_error

 Block244:
	mov byte ptr [esp+0xE8],bl
	call IWzFont::Create
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0xD8],0x3D
	jne Block247

 Block245:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	cmp eax,ebp
	je Block248

 Block246:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block248

 Block247:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block248:
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0xD8],0xD
	cmp ecx,ebp
	je Block250

 Block249:
	call _xbstr_t::Data_t::Release

 Block250:
	mov dword ptr [esp+0x4C],0xFF2C80AD
	jmp Block254

 Block251:
	lea edx,[esp+0x58]
	push ebp
	push edx
	call get_basic_font
	add esp,8
	push eax
	lea ecx,[esp+0x48]
	call _x_com_ptr<IWzFont>::op_assign_copy
	mov eax,dword ptr [esp+0x58]

 Block252:
	cmp eax,ebp
	je Block254

 Block253:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block254:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block256

 Block255:
	push eax
	call _com_issue_error

 Block256:
	mov eax,dword ptr [esp+0xE0]
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov bl,0x40
	push eax
	mov byte ptr [esp+0xE4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xE0],0x41
	cmp ecx,ebp
	jne Block258

 Block257:
	push 0x80004003
	call _com_issue_error

 Block258:
	mov byte ptr [esp+0xE0],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x28],8
	mov edi,eax
	mov byte ptr [esp+0xD8],0xD
	jne Block261

 Block259:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block262

 Block260:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block262

 Block261:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block262:
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	jne Block264

 Block263:
	push 0x80004003
	call _com_issue_error

 Block264:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x14]
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block266

 Block265:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push esi
	push eax
	call _com_issue_errorex

 Block266:
	mov dword ptr [esp+0x40],ebp
	mov edx,dword ptr [esp+0xEC]
	mov eax,dword ptr [esp+0xFC]
	mov ecx,dword ptr [esp+0xF4]
	mov byte ptr [esp+0xD8],0x42
	cmp edx,0x3EC
	jne Block271

 Block267:
	cmp cx,bp
	jne Block269

 Block268:
	cmp ax,bp
	je Block277

 Block269:
	mov edx,dword ptr [esp+0xF8]
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x108]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	lea edx,[esp+0x48]
	push edx
	call CWvsContext::GetGuildMarkCanvas
	push eax
	lea ecx,[esp+0x44]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebp
	je Block275

 Block270:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block275

 Block271:
	cmp edx,0x3ED
	je Block273

 Block272:
	cmp edx,0x3EF
	jne Block277

 Block273:
	mov eax,dword ptr [esp+0xF0]
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetBattleTeamMarkCanvas
	push eax
	lea ecx,[esp+0x44]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebp
	je Block275

 Block274:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block275:
	cmp dword ptr [esp+0x40],ebp
	je Block277

 Block276:
	mov dword ptr [esp+0x74],0x12

 Block277:
	mov ecx,dword ptr [esp+0x74]
	mov ebp,dword ptr [esp+0x14]
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x18]
	lea edi,[edi+ecx+5]
	add ebp,4
	push edx
	mov dword ptr [esp+0x4C],edi
	mov dword ptr [esp+0x3C],ebp
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block279

 Block278:
	push eax
	call _com_issue_error

 Block279:
	lea ecx,[esp+0x28]
	mov bl,0x43
	push ecx
	mov byte ptr [esp+0xDC],bl
	call esi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block281

 Block280:
	push eax
	call _com_issue_error

 Block281:
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0xD8],0x44
	test ecx,ecx
	jne Block283

 Block282:
	push 0x80004003
	call _com_issue_error

 Block283:
	lea eax,[esp+0x18]
	push eax
	lea edx,[esp+0x2C]
	push edx
	push ebp
	push edi
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0xD8],bl
	cmp word ptr [esp+0x28],si
	jne Block286

 Block284:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block287

 Block285:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block287

 Block286:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block287:
	mov byte ptr [esp+0xD8],0x42
	cmp word ptr [esp+0x18],si
	jne Block290

 Block288:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block291

 Block289:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block291

 Block290:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block291:
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	jne Block293

 Block292:
	push 0x80004003
	call _com_issue_error

 Block293:
	mov edx,dword ptr [esp+0x4C]
	mov ebx,dword ptr [esp+0x74]
	mov ecx,dword ptr [eax]
	push edx
	push ebp
	push edi
	push 0
	push ebx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x8C]
	call eax
	test eax,eax
	jge Block295

 Block294:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block295:
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block302

 Block296:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],0xFF
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0xD8],0x45
	test ecx,ecx
	jne Block298

 Block297:
	push 0x80004003
	call _com_issue_error

 Block298:
	lea edx,[esp+0x28]
	push edx
	push eax
	push 0
	push 0
	call IWzCanvas::Copy
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xD8],0x42
	jne Block301

 Block299:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block302

 Block300:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block302

 Block301:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block302:
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	jne Block304

 Block303:
	push 0x80004003
	call _com_issue_error

 Block304:
	mov edx,dword ptr [eax]
	push 0xFFFFFF
	push 1
	push 1
	push 0
	push ebx
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+0x8C]
	call eax
	test eax,eax
	jge Block306

 Block305:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block306:
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	jne Block308

 Block307:
	push 0x80004003
	call _com_issue_error

 Block308:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push 1
	push 1
	lea edi,[ebp-1]
	push edi
	push ebx
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block310

 Block309:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block310:
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	jne Block312

 Block311:
	push 0x80004003
	call _com_issue_error

 Block312:
	mov esi,dword ptr [esp+0x48]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push 1
	push 1
	push 0
	dec esi
	push esi
	push eax
	mov ebp,eax
	call edx
	test eax,eax
	jge Block314

 Block313:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block314:
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	jne Block316

 Block315:
	push 0x80004003
	call _com_issue_error

 Block316:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push 1
	push 1
	push edi
	push esi
	push eax
	mov ebp,eax
	call edx
	test eax,eax
	jge Block318

 Block317:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block318:
	cmp dword ptr [esp+0x5C],0
	je Block324

 Block319:
	mov ecx,dword ptr [esp+0x3C]
	test ecx,ecx
	jne Block321

 Block320:
	push 0x80004003
	call _com_issue_error

 Block321:
	mov esi,dword ptr [esp+0x38]
	mov edi,dword ptr [esp+0x48]
	mov ebx,dword ptr [esp+0x74]
	push 0xFFFFFF
	add esi,0xFFFFFFFE
	push esi
	add edi,0xFFFFFFFE
	push edi
	push 1
	lea ebp,[ebx+1]
	push ebp
	call IWzCanvas::DrawRectangle
	mov ecx,dword ptr [esp+0x3C]
	test ecx,ecx
	jne Block323

 Block322:
	push 0x80004003
	call _com_issue_error

 Block323:
	push 0xB2FFFFFF
	push esi
	push edi
	push 1
	push ebp
	call IWzCanvas::DrawRectangle
	jmp Block325

 Block324:
	mov ebx,dword ptr [esp+0x74]

 Block325:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x18]
	push eax
	call edi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block327

 Block326:
	push eax
	call _com_issue_error

 Block327:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0xDC],0x46
	call edi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block329

 Block328:
	push eax
	call _com_issue_error

 Block329:
	mov eax,dword ptr [esp+0x44]
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	mov edx,dword ptr [esp+0xE8]
	push eax
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xEC],0x47
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xE8],0x48
	test ecx,ecx
	jne Block331

 Block330:
	push 0x80004003
	call _com_issue_error

 Block331:
	push 0
	lea eax,[ebx+2]
	push eax
	mov byte ptr [esp+0xF0],0x47
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0xD8],0x46
	cmp word ptr [esp+0x28],si
	jne Block334

 Block332:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block335

 Block333:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block335

 Block334:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block335:
	mov byte ptr [esp+0xD8],0x42
	cmp word ptr [esp+0x18],si
	jne Block338

 Block336:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block339

 Block337:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block339

 Block338:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block339:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xD8],0xD
	test eax,eax
	je Block341

 Block340:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block341:
	mov ecx,dword ptr [esp+0x3C]
	test ecx,ecx
	jne Block343

 Block342:
	push 0x80004003
	call _com_issue_error

 Block343:
	mov eax,dword ptr [esp+0x48]
	mov ebp,dword ptr [ecx]
	sub eax,ebx
	cdq
	sub eax,edx
	sar eax,1
	add eax,ebx
	push eax
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [ebp+0x70]
	call ecx
	test eax,eax
	jge Block345

 Block344:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block345:
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	jne Block347

 Block346:
	push 0x80004003
	call _com_issue_error

 Block347:
	mov edx,dword ptr [eax]
	push 0xFFFFFFFE
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+0x78]
	call eax
	test eax,eax
	jge Block349

 Block348:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block349:
	lea ecx,[esp+0x18]
	push ecx
	call edi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block351

 Block350:
	push eax
	call _com_issue_error

 Block351:
	mov eax,3
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xD8],0x4A
	test ecx,ecx
	jne Block353

 Block352:
	push 0x80004003
	call _com_issue_error

 Block353:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push 0
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x54]
	push edx
	call IWzGr2D::CreateLayer
	mov edi,dword ptr [esp+0x88]
	mov ebp,dword ptr [esp+0x8C]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+ebp*4+0x7C]
	cmp esi,eax
	je Block358

 Block354:
	mov dword ptr [edi+ebp*4+0x7C],eax
	test eax,eax
	je Block356

 Block355:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block356:
	test esi,esi
	je Block358

 Block357:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block358:
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block360

 Block359:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block360:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xD8],0x49
	jne Block367

 Block361:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block363

 Block362:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block363:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block364:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xD8],0xD
	jne Block368

 Block365:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block369

 Block366:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block369

 Block367:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x28]
	push edx
	call ebx
	jmp Block364

 Block368:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block369:
	mov eax,dword ptr [esp+0xE4]
	mov edx,0xD
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block371

 Block370:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block371:
	mov esi,dword ptr [edi+ebp*4+0x7C]
	mov byte ptr [esp+0xD8],0x4B
	test esi,esi
	jne Block373

 Block372:
	push 0x80004003
	call _com_issue_error

 Block373:
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
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block375

 Block374:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block375:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xD8],0xD
	jne Block378

 Block376:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block379

 Block377:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block379

 Block378:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block379:
	mov esi,dword ptr [edi+ebp*4+0x7C]
	test esi,esi
	jne Block381

 Block380:
	push 0x80004003
	call _com_issue_error

 Block381:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 2
	push esi
	call ecx
	test eax,eax
	jge Block383

 Block382:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block383:
	mov eax,dword ptr [esp+0xE8]
	mov edx,0xD
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block385

 Block384:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block385:
	mov esi,dword ptr [edi+ebp*4+0x7C]
	mov byte ptr [esp+0xD8],0x4C
	test esi,esi
	jne Block387

 Block386:
	push 0x80004003
	call _com_issue_error

 Block387:
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
	jge Block389

 Block388:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block389:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xD8],0xD
	jne Block392

 Block390:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block393

 Block391:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block393

 Block392:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block393:
	mov esi,dword ptr [edi+ebp*4+0x7C]
	test esi,esi
	jne Block395

 Block394:
	push 0x80004003
	call _com_issue_error

 Block395:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block397

 Block396:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block397:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x64]
	push edx
	call esi
	lea eax,[esp+0x64]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block399

 Block398:
	push eax
	call _com_issue_error

 Block399:
	lea ecx,[esp+0xB0]
	push ecx
	mov byte ptr [esp+0xDC],0x4D
	call esi
	lea edx,[esp+0xB0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block401

 Block400:
	push eax
	call _com_issue_error

 Block401:
	lea eax,[esp+0xA0]
	push eax
	mov byte ptr [esp+0xDC],0x4E
	call esi
	lea ecx,[esp+0xA0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block403

 Block402:
	push eax
	call _com_issue_error

 Block403:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0xDC],0x4F
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block405

 Block404:
	push eax
	call _com_issue_error

 Block405:
	lea ecx,[esp+0x28]
	mov bl,0x50
	push ecx
	mov byte ptr [esp+0xDC],bl
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block407

 Block406:
	push eax
	call _com_issue_error

 Block407:
	mov ecx,dword ptr [edi+ebp*4+0x7C]
	mov byte ptr [esp+0xD8],0x51
	test ecx,ecx
	jne Block409

 Block408:
	push 0x80004003
	call _com_issue_error

 Block409:
	lea eax,[esp+0x64]
	push eax
	lea edx,[esp+0xB4]
	push edx
	lea eax,[esp+0xA8]
	push eax
	lea edx,[esp+0x24]
	push edx
	mov edx,dword ptr [esp+0x4C]
	lea eax,[esp+0x38]
	push eax
	push edx
	lea eax,[esp+0xD8]
	push eax
	call IWzGr2DLayer::InsertCanvas
	mov edi,8
	cmp word ptr [esp+0xC0],di
	jne Block416

 Block410:
	mov eax,dword ptr [esp+0xC8]
	xor ecx,ecx
	mov word ptr [esp+0xC0],cx
	test eax,eax
	je Block412

 Block411:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block412:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block413:
	mov byte ptr [esp+0xD8],bl
	cmp word ptr [esp+0x28],di
	jne Block417

 Block414:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block418

 Block415:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block418

 Block416:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0xC0]
	push edx
	call esi
	jmp Block413

 Block417:
	lea ecx,[esp+0x28]
	push ecx
	call esi

 Block418:
	mov byte ptr [esp+0xD8],0x4F
	cmp word ptr [esp+0x18],di
	jne Block421

 Block419:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block422

 Block420:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block422

 Block421:
	lea eax,[esp+0x18]
	push eax
	call esi

 Block422:
	mov byte ptr [esp+0xD8],0x4E
	cmp word ptr [esp+0xA0],di
	jne Block425

 Block423:
	mov eax,dword ptr [esp+0xA8]
	xor ecx,ecx
	mov word ptr [esp+0xA0],cx
	test eax,eax
	je Block426

 Block424:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block426

 Block425:
	lea edx,[esp+0xA0]
	push edx
	call esi

 Block426:
	mov byte ptr [esp+0xD8],0x4D
	cmp word ptr [esp+0xB0],di
	jne Block429

 Block427:
	xor eax,eax
	mov word ptr [esp+0xB0],ax
	mov eax,dword ptr [esp+0xB8]
	test eax,eax
	je Block430

 Block428:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block430

 Block429:
	lea ecx,[esp+0xB0]
	push ecx
	call esi

 Block430:
	mov byte ptr [esp+0xD8],0xD
	cmp word ptr [esp+0x64],di
	jne Block433

 Block431:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	test eax,eax
	je Block434

 Block432:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block434

 Block433:
	lea eax,[esp+0x64]
	push eax
	call esi

 Block434:
	lea esi,[ebp-1]
	test esi,esi
	jl Block477

 Block435:
	mov edx,dword ptr [esp+0x88]
	lea eax,[edx+esi*4+0x7C]
	xor edi,edi
	lea esp,[esp]

 Block436:
	cmp dword ptr [eax],edi
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	jne Block439

 Block437:
	dec esi
	sub eax,4
	cmp esi,edi
	jge Block436

 Block438:
	jmp Block477

 Block439:
	mov ecx,3
	mov word ptr [esp+0x64],cx
	mov dword ptr [esp+0x6C],edi
	mov ecx,dword ptr [edx+esi*4+0x7C]
	mov bl,0x52
	mov byte ptr [esp+0xD8],bl
	cmp ecx,edi
	jne Block441

 Block440:
	push 0x80004003
	call _com_issue_error

 Block441:
	lea edx,[esp+0x64]
	push edx
	lea eax,[esp+0x3C]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov ebp,eax
	mov ecx,dword ptr [esp+0x88]
	mov esi,dword ptr [ecx+esi*4+0x7C]
	mov byte ptr [esp+0xD8],0x53
	cmp esi,edi
	jne Block443

 Block442:
	push 0x80004003
	call _com_issue_error

 Block443:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x70]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],edi
	call ecx
	cmp eax,edi
	jge Block445

 Block444:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block445:
	mov esi,dword ptr [ebp]
	mov edi,dword ptr [esp+0x14]
	test esi,esi
	jne Block447

 Block446:
	push 0x80004003
	call _com_issue_error

 Block447:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x4C]
	push eax
	push esi
	mov dword ptr [esp+0x54],0
	call ecx
	test eax,eax
	jge Block449

 Block448:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block449:
	mov eax,dword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x4C]
	lea edi,[edx+edi+1]
	mov byte ptr [esp+0xD8],bl
	test eax,eax
	je Block451

 Block450:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block451:
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0xD8],0xD
	jne Block454

 Block452:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block455

 Block453:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block455

 Block454:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block455:
	cmp dword ptr [esp+0xF0],0x9B
	jne Block457

 Block456:
	sub edi,0xD

 Block457:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push edx
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block459

 Block458:
	push eax
	call _com_issue_error

 Block459:
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0xDC],0x54
	call esi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block461

 Block460:
	push eax
	call _com_issue_error

 Block461:
	mov ebp,dword ptr [esp+0x8C]
	mov ebx,dword ptr [esp+0x88]
	mov esi,dword ptr [ebx+ebp*4+0x7C]
	mov byte ptr [esp+0xD8],0x55
	test esi,esi
	jne Block463

 Block462:
	push 0x80004003
	call _com_issue_error

 Block463:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x68]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block465

 Block464:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block465:
	mov esi,dword ptr [ebx+ebp*4+0x7C]
	test esi,esi
	jne Block467

 Block466:
	push 0x80004003
	call _com_issue_error

 Block467:
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
	mov ecx,dword ptr [ecx+0x90]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0x28]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x34]
	push edi
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block469

 Block468:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block469:
	mov esi,8
	mov byte ptr [esp+0xD8],0x54
	cmp word ptr [esp+0x18],si
	jne Block472

 Block470:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block473

 Block471:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block473

 Block472:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block473:
	mov byte ptr [esp+0xD8],0xD
	cmp word ptr [esp+0x28],si
	jne Block476

 Block474:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block477

 Block475:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block477

 Block476:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block477:
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	jne Block479

 Block478:
	push 0x80004003
	call _com_issue_error

 Block479:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x48]
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block481

 Block480:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block481:
	mov eax,dword ptr [esp+0x80]
	mov byte ptr [esp+0xD8],9
	test eax,eax
	je Block483

 Block482:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block483:
	mov eax,dword ptr [esp+0x7C]
	mov byte ptr [esp+0xD8],7
	test eax,eax
	je Block485

 Block484:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block485:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0xD8],5
	test eax,eax
	je Block487

 Block486:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block487:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0xD8],2
	test eax,eax
	je Block489

 Block488:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block489:
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0xD8],1
	test eax,eax
	je Block491

 Block490:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block491:
	mov eax,dword ptr [esp+0xE4]
	mov byte ptr [esp+0xD8],0
	test eax,eax
	je Block493

 Block492:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block493:
	mov eax,dword ptr [esp+0xE8]
	mov dword ptr [esp+0xD8],0xFFFFFFFF
	test eax,eax
	je Block495

 Block494:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block495:
	mov eax,dword ptr [esp+0x14]

 Block496:
	mov ecx,dword ptr [esp+0xD0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC8
	ret 0x24
}
}
// CLife::IsKindOf
__SUB_CLASS_THIS(001CF4D0, __thiscall, 23503,  CLife, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CLife::ms_RTTI_CLife
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
// CLife::~CLife
_SUB_EXCEPTION_HANDLER(1CF430)
__SUB_CLASS_THIS0(001CF430, __thiscall, 23496,  CLife, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1CF430
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
	int 3// TODO: 	mov dword ptr [esi],offset CLife::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CLife::`vftable'{for `IVecCtrlOwner'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CLife::`vftable'{for `ZRefCounted'}
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push 3
	push 4
	lea eax,[esi+0x7C]
	push eax
	mov dword ptr [esp+0x24],1
	call __eh_vector_dtor_iterator
	lea ecx,[esi+0x14]
	mov byte ptr [esp+0x14],0
	call CChatBalloon::~CChatBalloon
	int 3// TODO: 	mov dword ptr [esi+8],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CLife::CLife
_SUB_EXCEPTION_HANDLER(1CF500)
__SUB_CLASS_THIS0(001CF500, __thiscall, 23494,  CLife, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1CF500
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
	int 3// TODO: 	mov dword ptr [esi+4],offset IVecCtrlOwner::`vftable'
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi+8],offset ZRefCounted::`vftable'
	mov dword ptr [esi+0xC],eax
	mov dword ptr [esi+0x10],eax
	lea ecx,[esi+0x14]
	mov dword ptr [esp+0x1C],eax
	int 3// TODO: 	mov dword ptr [esi],offset CLife::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CLife::`vftable'{for `IVecCtrlOwner'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CLife::`vftable'{for `ZRefCounted'}
	call CChatBalloon::_ctor_default
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push offset _x_com_ptr<IWzGr2DLayer>::_ctor_default
	push 3
	push 4
	lea edi,[esi+0x7C]
	push edi
	mov byte ptr [esp+0x30],1
	call __eh_vector_ctor_iterator
	mov byte ptr [esp+0x1C],2
	mov ebx,3

 Block1:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block3

 Block2:
	mov dword ptr [edi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	add edi,4
	sub ebx,1
	jne Block1

 Block4:
	mov eax,esi
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
// CLife::ShowNameTag
__SUB_CLASS_THIS(001CF3E0, __thiscall, 23499,  CLife, void, int32_t) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0xC]
	push esi
	push edi
	xor edi,edi
	lea ebx,[ecx+0x7C]
	lea ecx,[ecx]

 Block1:
	mov esi,dword ptr [ebx]
	test esi,esi
	je Block4

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xE0]
	mov ecx,ebp
	neg ecx
	sbb ecx,ecx
	push ecx
	push esi
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	inc edi
	add ebx,4
	cmp edi,3
	jl Block1

 Block5:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// IVecCtrlOwner::IsKindOf
__SUB_CLASS_THIS(001CF3B0, __thiscall, 23440,  IVecCtrlOwner, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset IVecCtrlOwner::ms_RTTI_IVecCtrlOwner
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
