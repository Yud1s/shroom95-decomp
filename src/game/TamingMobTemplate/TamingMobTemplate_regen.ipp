#include "regen.hpp"
// TamingMobTemplate.ipp
#include "TamingMobTemplate.hpp"

// CTamingMobTemplate::GetTamingMobTemplate
_SUB_EXCEPTION_HANDLER(35B150)
__SUB(0035B150, __cdecl, 77854,  CTamingMobTemplate*, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_35B150
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
	mov ecx,offset CTamingMobTemplate::ms_mTamingMobTemplate
	mov dword ptr [esp+0x24],edi
	call ZMap<unsigned long, ZRef<CTamingMobTemplate>, unsigned long>::GetAt
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
// CTamingMobTemplate::~CTamingMobTemplate
_SUB_EXCEPTION_HANDLER(35B2B0)
__SUB_CLASS_THIS0(0035B2B0, __thiscall, 77864,  CTamingMobTemplate, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_35B2B0
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
// CTamingMobTemplate::RegisterTamingMob
_SUB_EXCEPTION_HANDLER(35B3F0)
__SUB(0035B3F0, __cdecl, 77855,  int32_t, unsigned long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_35B3F0
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
	xor ebx,ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x3D5
	push eax
	mov dword ptr [esp+0x70],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x74]
	mov byte ptr [esp+0x68],1
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x6C],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x64],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov edi,8
	mov byte ptr [esp+0x5C],4
	cmp word ptr [esp+0x24],di
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebx
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x20],ebx
	call ZRef<CTamingMobTemplate>::_Alloc
	mov edx,dword ptr [esp+0x64]
	mov esi,dword ptr [esp+0x20]
	push ebx
	lea eax,[esp+0x68]
	push eax
	mov ecx,offset CTamingMobTemplate::ms_mTamingMobTemplate
	mov byte ptr [esp+0x64],5
	mov dword ptr [esi+0xC],edx
	call ZMap<unsigned long, ZRef<CTamingMobTemplate>, unsigned long>::GetAt
	test eax,eax
	je Block17

 Block10:
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x60],4
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block11:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block12:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x5C],0
	cmp eax,ebx
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp eax,ebx
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	xor eax,eax
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret

 Block17:
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x68]
	push ecx
	mov ecx,offset CTamingMobTemplate::ms_mTamingMobTemplate
	call ZMap<unsigned long, ZRef<CTamingMobTemplate>, unsigned long>::Insert
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantInit]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x671
	mov bl,6
	push eax
	mov byte ptr [esp+0x68],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [esp+0x18]
	mov byte ptr [esp+0x60],7
	test ebp,ebp
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x64],bl
	call IWzProperty::Getitem
	mov byte ptr [esp+0x5C],8
	cmp word ptr [eax],di
	jne Block21

 Block20:
	mov eax,dword ptr [eax+8]
	jmp Block22

 Block21:
	mov eax,offset _S___3

 Block22:
	push 0xFFFFFFFF
	lea ecx,[esi+0x10]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x34],di
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	push 0x64
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x67A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x3C]
	mov byte ptr [esp+0x64],9
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x68],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x64],0xA
	call get_int32
	add esp,8
	cmp eax,0x50
	jge Block28

 Block27:
	mov eax,0x50
	jmp Block30

 Block28:
	cmp eax,0xBE
	jl Block30

 Block29:
	mov eax,0xBE

 Block30:
	mov dword ptr [esi+0x14],eax
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x34],di
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	push 0x64
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1ABC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x3C]
	mov byte ptr [esp+0x64],0xB
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x68],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x64],0xC
	call get_int32
	add esp,8
	cmp eax,0x7B
	jl Block36

 Block35:
	mov eax,0x7B

 Block36:
	mov dword ptr [esi+0x18],eax
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x34],di
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	fld1
	sub esp,0xC
	mov eax,esp
	fstp qword ptr [esp+4]
	mov dword ptr [esp+0x24],esp
	push 0x68D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x6C],0xD
	mov ecx,ebp
	mov byte ptr [esp+0x6C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x68],0xE
	call get_double
	fstp qword ptr [esi+0x20]
	add esp,0xC
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x34],di
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block44:
	push 0x64
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0xD0C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x3C]
	mov byte ptr [esp+0x64],0xF
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x68],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x64],0x10
	call get_int32
	add esp,8
	mov dword ptr [esi+0x28],eax
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x34],di
	jne Block47

 Block45:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0xD0E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x3C]
	mov byte ptr [esp+0x64],0x11
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x68],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x64],0x12
	call get_int32
	add esp,8
	mov dword ptr [esi+0x2C],eax
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x34],di
	jne Block51

 Block49:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov byte ptr [esp+0x5C],5
	cmp word ptr [esp+0x44],di
	jne Block55

 Block53:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x60],4
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block58

 Block57:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block58:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0x60],0
	call edx
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	test eax,eax
	je Block60

 Block59:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block60:
	mov eax,1
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
// CTamingMobTemplate::Load
_SUB_EXCEPTION_HANDLER(35B910)
__SUB0(0035B910, __cdecl, 77852,  void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_35B910
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
	push offset _S_TAMINGMOB__2
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
	push 0xA
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],edi
	call ZXString16::GetBuffer
	mov ecx,dword ptr [_S_TAMINGMOB__1]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [_S_TAMINGMOB__1+4]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [_S_TAMINGMOB__1+8]
	mov dword ptr [eax+8],ecx
	mov edx,dword ptr [_S_TAMINGMOB__1+12]
	mov dword ptr [eax+0xC],edx
	mov ecx,dword ptr [_S_TAMINGMOB__1+16]
	mov dword ptr [eax+0x10],ecx
	push 0xA
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
	call CTamingMobTemplate::RegisterTamingMob
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
