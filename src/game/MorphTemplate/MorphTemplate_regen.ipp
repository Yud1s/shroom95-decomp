#include "regen.hpp"
// MorphTemplate.ipp
#include "MorphTemplate.hpp"

static void* CMORPHTEMPLATE_VTABLE = get_vtable<CMorphTemplate>();

// CMorphTemplate::IsAttackableMorphed
_SUB_EXCEPTION_HANDLER(265220)
__SUB(00265220, __cdecl, 21065,  int32_t, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_265220
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
	mov eax,dword ptr [esp+0x2C]
	push eax
	call CMorphTemplate::GetMorphTemplate
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov esi,eax
	add esp,4
	test esi,esi
	je Block2

 Block1:
	lea ecx,[esi+4]
	push ecx
	call ebp

 Block2:
	test esi,esi
	je Block6

 Block3:
	mov ebx,dword ptr [esi+0x3C]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block4:
	push edi
	call ebp
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block5:
	mov eax,ebx
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret

 Block6:
	xor eax,eax
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret
}
}
// CMorphTemplate::RegisterMorph
_SUB_EXCEPTION_HANDLER(265440)
__SUB(00265440, __cdecl, 21067,  int32_t, unsigned long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_265440
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
	xor esi,esi
	push esi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x3D5
	push eax
	mov dword ptr [esp+0x94],esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x98]
	mov byte ptr [esp+0x8C],1
	cmp ecx,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x54]
	push edx
	mov byte ptr [esp+0x90],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x88],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov ebp,8
	mov byte ptr [esp+0x80],4
	cmp word ptr [esp+0x48],bp
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,esi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov eax,dword ptr [esp+0x8C]
	mov edi,eax
	mov dword ptr [esp+0x18],edi
	cmp eax,esi
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block11:
	push 0x40
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x84],5
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,esi
	je Block13

 Block12:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax],offset CMORPHTEMPLATE_VTABLE
	mov dword ptr [eax+0x10],esi
	mov esi,eax

 Block13:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x24],esi
	test esi,esi
	je Block15

 Block14:
	lea ecx,[esi+4]
	push ecx
	call ebx

 Block15:
	mov edx,dword ptr [esp+0x88]
	push 0
	lea eax,[esp+0x8C]
	push eax
	mov ecx,offset CMorphTemplate::ms_mMorphTemplate
	mov byte ptr [esp+0x88],6
	mov dword ptr [esi+0xC],edx
	call ZMap<unsigned long, ZRef<CMorphTemplate>, unsigned long>::GetAt
	test eax,eax
	je Block20

 Block16:
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x84],5
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block18

 Block17:
	push edi
	call ebx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block18:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x80],4
	test eax,eax
	je Block99

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block99

 Block20:
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x8C]
	push ecx
	mov ecx,offset CMorphTemplate::ms_mMorphTemplate
	call ZMap<unsigned long, ZRef<CMorphTemplate>, unsigned long>::Insert
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1ABC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x84],7
	test edi,edi
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea eax,[esp+0x2C]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x88],6
	call IWzProperty::Getitem
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1AB1
	push ecx
	mov byte ptr [esp+0x8C],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x3C]
	mov byte ptr [esp+0x84],9
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x88],8
	call IWzProperty::Getitem
	mov dx,word ptr [esp+0x38]
	xor ecx,ecx
	cmp word ptr [esp+0x28],cx
	setne cl
	xor eax,eax
	test dx,dx
	setne al
	test eax,eax
	je Block25

 Block23:
	test ecx,ecx
	je Block27

 Block24:
	mov dword ptr [esi+0x2C],2
	jmp Block28

 Block25:
	test ecx,ecx
	je Block90

 Block26:
	mov dword ptr [esi+0x2C],0
	jmp Block28

 Block27:
	mov dword ptr [esi+0x2C],1

 Block28:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantInit]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x671
	mov bl,0xB
	push ecx
	mov byte ptr [esp+0x8C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x18]
	mov byte ptr [esp+0x84],0xC
	test edi,edi
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea edx,[esp+0x5C]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x88],bl
	call IWzProperty::Getitem
	mov byte ptr [esp+0x80],0xD
	cmp word ptr [eax],bp
	jne Block32

 Block31:
	mov eax,dword ptr [eax+8]
	jmp Block33

 Block32:
	mov eax,offset _S___3

 Block33:
	push 0xFFFFFFFF
	lea ecx,[esi+0x10]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],bp
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	push 0x64
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x67A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x60]
	mov byte ptr [esp+0x88],0xE
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x8C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x88],0xF
	call get_int32
	add esp,8
	cmp eax,0x50
	jge Block39

 Block38:
	mov eax,0x50
	jmp Block41

 Block39:
	cmp eax,0x8C
	jl Block41

 Block40:
	mov eax,0x8C

 Block41:
	mov dword ptr [esi+0x14],eax
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],bp
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	push 0x64
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x1ABC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0x8C],0x10
	mov ecx,edi
	mov byte ptr [esp+0x8C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x88],0x11
	call get_int32
	add esp,8
	cmp eax,0x7B
	jl Block47

 Block46:
	mov eax,0x7B

 Block47:
	mov dword ptr [esi+0x18],eax
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],bp
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block51:
	fld1
	sub esp,0xC
	mov ecx,esp
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x28],esp
	push 0x68D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x64]
	mov byte ptr [esp+0x8C],0x12
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x90],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x8C],0x13
	call get_double
	fstp qword ptr [esi+0x20]
	add esp,0xC
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],bp
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	push 0x64
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0xD0C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x60]
	mov byte ptr [esp+0x88],0x14
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x8C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x88],0x15
	call get_int32
	add esp,8
	mov dword ptr [esi+0x28],eax
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],bp
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0xFEC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0x8C],0x16
	mov ecx,edi
	mov byte ptr [esp+0x8C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x88],0x17
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0x30],eax
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],bp
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block63:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x105A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x60]
	mov byte ptr [esp+0x88],0x18
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x8C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x88],0x19
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0x34],eax
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],bp
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0xC45
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x60]
	mov byte ptr [esp+0x88],0x1A
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x8C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x88],0x1B
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0x38],eax
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],bp
	jne Block70

 Block68:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x17C3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0x8C],0x1C
	mov ecx,edi
	mov byte ptr [esp+0x8C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x88],0x1D
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0x3C],eax
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],bp
	jne Block74

 Block72:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov byte ptr [esp+0x80],0xA
	cmp word ptr [esp+0x68],bp
	jne Block78

 Block76:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea edx,[esp+0x68]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov byte ptr [esp+0x80],8
	cmp word ptr [esp+0x38],bp
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	mov byte ptr [esp+0x80],6
	cmp word ptr [esp+0x28],bp
	jne Block86

 Block84:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block87:
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x80],5
	call ZRef<CMorphTemplate>::~ZRef<CMorphTemplate>
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x84],4
	call edx
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0x84],0
	call ecx
	mov eax,dword ptr [esp+0x8C]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test eax,eax
	je Block89

 Block88:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block89:
	mov eax,1
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret

 Block90:
	mov byte ptr [esp+0x80],8
	cmp dx,bp
	jne Block93

 Block91:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	mov byte ptr [esp+0x80],6
	cmp word ptr [esp+0x28],bp
	jne Block97

 Block95:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x80],5
	call ZRef<CMorphTemplate>::~ZRef<CMorphTemplate>
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0x84],4
	call eax

 Block99:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block101

 Block100:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block101:
	mov eax,dword ptr [esp+0x8C]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test eax,eax
	je Block103

 Block102:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block103:
	xor eax,eax
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
// CMorphTemplate::IsSuperMan
_SUB_EXCEPTION_HANDLER(2650E0)
__SUB(002650E0, __cdecl, 21065,  int32_t, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2650E0
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
	mov eax,dword ptr [esp+0x2C]
	push eax
	call CMorphTemplate::GetMorphTemplate
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov esi,eax
	add esp,4
	test esi,esi
	je Block2

 Block1:
	lea ecx,[esi+4]
	push ecx
	call ebp

 Block2:
	test esi,esi
	je Block6

 Block3:
	mov ebx,dword ptr [esi+0x34]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block4:
	push edi
	call ebp
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block5:
	mov eax,ebx
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret

 Block6:
	xor eax,eax
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret
}
}
// CMorphTemplate::~CMorphTemplate
_SUB_EXCEPTION_HANDLER(2652C0)
__SUB_CLASS_THIS0(002652C0, __thiscall, 21075,  CMorphTemplate, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2652C0
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
// CMorphTemplate::Load
_SUB_EXCEPTION_HANDLER(265D80)
__SUB0(00265D80, __cdecl, 21060,  void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_265D80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x90
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xA4]
	mov dword ptr fs:[0],eax
	xor edi,edi
	push edi
	push edi
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push offset _S_MORPH__2
	call _xbstr_t::_ctor_1
	mov dword ptr [esp+0xB8],edi
	cmp dword ptr [_D_G_ROOT],edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+0x7C]
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	mov ecx,dword ptr [_D_G_ROOT]
	push eax
	call IWzNameSpace::Getitem
	mov ecx,eax
	mov dword ptr [esp+0xB4],1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],edi
	call _x_com_ptr<IWzNameSpace>::_QueryUnknown
	cmp eax,edi
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0xAC],3
	jne Block8

 Block6:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	cmp eax,edi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea edx,[esp+0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov ebx,dword ptr [esp+0x18]
	cmp ebx,edi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[esp+0x48]
	push eax
	mov ecx,ebx
	call IWzNameSpace::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xB0],4
	mov dword ptr [esp+0x44],edi
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block13:
	lea ecx,[esp+0x44]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block16

 Block14:
	cmp eax,0x80004002
	je Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0xAC],6
	cmp eax,edi
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0xAC],7
	mov dword ptr [esp+0x44],edi

 Block19:
	mov esi,dword ptr [esp+0x40]
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push esi
	call enum_next_in_directory
	add esp,0xC
	test eax,eax
	je Block80

 Block20:
	cmp word ptr [esp+0x30],8
	mov edx,dword ptr [esp+0x38]
	je Block22

 Block21:
	mov edx,offset _S___3

 Block22:
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	cmp edx,edi
	je Block26

 Block23:
	mov eax,edx
	lea esi,[eax+2]

 Block24:
	mov cx,word ptr [eax]
	add eax,2
	cmp cx,di
	jne Block24

 Block25:
	sub eax,esi
	sar eax,1
	mov esi,eax
	lea eax,[esi+esi]
	push eax
	push edx
	push edi
	push esi
	lea ecx,[esp+0x24]
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x18]
	call ZXString16::ReleaseBuffer
	mov ebp,dword ptr [esp+0x14]

 Block26:
	push edi
	push edi
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0xBC],8
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0x9C]
	push ecx
	mov byte ptr [esp+0xBC],9
	mov ecx,ebx
	mov byte ptr [esp+0xBC],8
	call IWzNameSpace::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xB4],0xA
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x2C],esi
	cmp eax,edi
	je Block30

 Block27:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x4C]
	push ecx
	push offset __GUID_3c39b9aa_18cc_408c_8716_c4fb2117266e
	push eax
	call edx
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x4C]
	cmp eax,edi
	mov dword ptr [esp+0x2C],ecx
	jge Block29

 Block28:
	cmp eax,0x80004002
	jne Block4

 Block29:
	mov esi,dword ptr [esp+0x2C]

 Block30:
	cmp word ptr [esp+0x90],8
	mov byte ptr [esp+0xAC],0xC
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x98]
	xor edx,edx
	mov word ptr [esp+0x90],dx
	cmp eax,edi
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[esp+0x90]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	cmp esi,edi
	sete al
	test al,al
	je Block39

 Block35:
	mov byte ptr [esp+0xAC],8
	cmp esi,edi
	je Block37

 Block36:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block37:
	mov byte ptr [esp+0xAC],7
	cmp ebp,edi
	je Block74

 Block38:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4
	jmp Block74

 Block39:
	push edi
	push 6
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],edi
	call ZXString16::GetBuffer
	mov ecx,dword ptr [_S_MORPH__1]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [_S_MORPH__1+4]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [_S_MORPH__1+8]
	mov dword ptr [eax+8],ecx
	push 6
	lea ecx,[esp+0x20]
	call ZXString16::ReleaseBuffer
	mov byte ptr [esp+0xAC],0xD
	cmp ebp,edi
	je Block41

 Block40:
	mov eax,dword ptr [ebp-4]
	shr eax,1
	jmp Block42

 Block41:
	xor eax,eax

 Block42:
	push eax
	push ebp
	lea ecx,[esp+0x24]
	call ZXString16::_Cat
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x60]
	push edx
	call esi
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block4

 Block43:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0xB0],0xE
	call esi
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block4

 Block44:
	mov ebx,dword ptr [esp+0x1C]
	push edi
	push edi
	lea eax,[esp+0x68]
	push eax
	lea ecx,[esp+0x5C]
	push ecx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push ebx
	mov byte ptr [esp+0xC4],0xF
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xC0],0x10
	cmp dword ptr [_D_G_RM],edi
	je Block1

 Block45:
	lea edx,[esp+0x94]
	mov byte ptr [esp+0xC0],0xF
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xB4],0x11
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x24],esi
	cmp eax,edi
	je Block48

 Block46:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x28]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x28]
	cmp eax,edi
	mov esi,ecx
	mov dword ptr [esp+0x24],esi
	jge Block48

 Block47:
	cmp eax,0x80004002
	jne Block4

 Block48:
	cmp word ptr [esp+0x80],8
	mov byte ptr [esp+0xAC],0x13
	jne Block51

 Block49:
	mov eax,dword ptr [esp+0x88]
	xor edx,edx
	mov word ptr [esp+0x80],dx
	cmp eax,edi
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea eax,[esp+0x80]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block52:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0xAC],0x14
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,edi
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0xAC],0x15
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	cmp eax,edi
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	push edi
	push 0x2E
	lea ecx,[esp+0x1C]
	call ZXString16::Find_
	push eax
	lea edx,[esp+0x24]
	push edx
	lea ecx,[esp+0x1C]
	call ZXString16::Left
	mov eax,dword ptr [eax]
	push eax
	call __wtoi
	mov edi,eax
	mov eax,dword ptr [esp+0x24]
	add esp,4
	test eax,eax
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block62:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0xA4],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block64

 Block63:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block64:
	push edi
	call CMorphTemplate::RegisterMorph
	add esp,8
	test eax,eax
	je Block79

 Block65:
	mov byte ptr [esp+0xAC],0xD
	test esi,esi
	je Block67

 Block66:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block67:
	mov byte ptr [esp+0xAC],0xC
	test ebx,ebx
	je Block69

 Block68:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString16::_Release
	add esp,4

 Block69:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xAC],8
	test eax,eax
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block71:
	mov byte ptr [esp+0xAC],7
	test ebp,ebp
	je Block73

 Block72:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block73:
	mov ebx,dword ptr [esp+0x18]
	xor edi,edi

 Block74:
	cmp word ptr [esp+0x30],8
	jne Block77

 Block75:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,edi
	je Block19

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block77:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	cmp eax,edi
	jge Block19

 Block78:
	jmp Block4

 Block79:
	push 0x22000006
	lea ecx,[esp+0x24]
	call CMSException::_ctor_0
	mov edx,dword ptr [esp+0x20]
	push offset CTerminateException::THROW_INFO
	lea eax,[esp+0x2C]
	push eax
	mov dword ptr [esp+0x30],edx
	call _CxxThrowException

 Block80:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xAC],6
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,edi
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov byte ptr [esp+0xAC],3
	cmp esi,edi
	je Block86

 Block85:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block86:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov dword ptr [esp+0xB0],0xFFFFFFFF
	call eax
	mov ecx,dword ptr [esp+0xA4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x9C
	ret
}
}
// CMorphTemplate::GetMorphTemplate
_SUB_EXCEPTION_HANDLER(265050)
__SUB(00265050, __cdecl, 21062,  CMorphTemplate*, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_265050
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
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,offset CMorphTemplate::ms_mMorphTemplate
	mov dword ptr [esp+0x24],edi
	call ZMap<unsigned long, ZRef<CMorphTemplate>, unsigned long>::GetAt
	mov esi,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	cmp esi,edi
	je Block3

 Block1:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block3

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block3:
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret
}
}
// CMorphTemplate::IsHideMorphed
_SUB_EXCEPTION_HANDLER(265180)
__SUB(00265180, __cdecl, 21065,  int32_t, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_265180
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
	mov eax,dword ptr [esp+0x2C]
	push eax
	call CMorphTemplate::GetMorphTemplate
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov esi,eax
	add esp,4
	test esi,esi
	je Block2

 Block1:
	lea ecx,[esi+4]
	push ecx
	call ebp

 Block2:
	test esi,esi
	je Block6

 Block3:
	mov ebx,dword ptr [esi+0x38]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block4:
	push edi
	call ebp
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block5:
	mov eax,ebx
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret

 Block6:
	xor eax,eax
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret
}
}
