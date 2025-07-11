#include "regen.hpp"
// EmployeeTemplate.ipp
#include "EmployeeTemplate.hpp"

// CEmployeeTemplate::GetEmployeeTemplate
_SUB_EXCEPTION_HANDLER(1195D0)
__SUB(001195D0, __cdecl, 67986,  CEmployeeTemplate*, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1195D0
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
	mov dword ptr [esp+0x14],0
	mov eax,dword ptr [esp+0x28]
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	mov ecx,offset CEmployeeTemplate::ms_mEmployeeTemplate
	mov dword ptr [esp+0x28],0
	mov dword ptr [esp+0x30],eax
	call ZMap<long, ZRef<CEmployeeTemplate>, long>::GetAt
	mov ebx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test ebx,ebx
	je Block4

 Block1:
	lea esi,[ebx-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block4:
	mov eax,ebx
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
// CEmployeeTemplate::RegisterEmployee
_SUB_EXCEPTION_HANDLER(119AC0)
__SUB(00119AC0, __cdecl, 67988,  int32_t, unsigned long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_119AC0
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
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x54],esi
	mov dword ptr [esp+0x38],esi
	call ZRef<CEmployeeTemplate>::_Alloc
	mov eax,dword ptr [esp+0x60]
	mov edi,eax
	mov byte ptr [esp+0x54],1
	mov dword ptr [esp+0x20],edi
	cmp eax,esi
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x54],2
	mov dword ptr [eax],ecx
	cmp edi,esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[esp+0x24]
	push edx
	mov ecx,edi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x58],3
	mov dword ptr [esp+0x1C],esi
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x54],5
	cmp eax,esi
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov ebp,dword ptr [esp+0x18]
	mov byte ptr [esp+0x54],6
	mov dword ptr [esp+0x28],esi

 Block12:
	test ebp,ebp
	je Block3

 Block13:
	mov ecx,dword ptr [ebp]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x40]
	push eax
	push 1
	push ebp
	call ecx
	test eax,eax
	jne Block45

 Block14:
	mov esi,dword ptr [esp+0x44]
	lea edx,[esp+0x30]
	push 0x3D5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	or dword ptr [esp+0x14],1
	push eax
	push esi
	mov byte ptr [esp+0x5C],7
	call __wcsicmp
	add esp,8
	test eax,eax
	je Block17

 Block15:
	lea eax,[esp+0x2C]
	push 0x42B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	or dword ptr [esp+0x14],2
	push eax
	push esi
	call __wcsicmp
	add esp,8
	test eax,eax
	je Block17

 Block16:
	xor bl,bl
	jmp Block18

 Block17:
	mov bl,1

 Block18:
	test byte ptr [esp+0x14],2
	je Block21

 Block19:
	mov eax,dword ptr [esp+0x2C]
	and dword ptr [esp+0x14],0xFFFFFFFD
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block21:
	test byte ptr [esp+0x14],1
	mov dword ptr [esp+0x54],6
	je Block24

 Block22:
	mov eax,dword ptr [esp+0x30]
	and dword ptr [esp+0x14],0xFFFFFFFE
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block24:
	test bl,bl
	jne Block40

 Block25:
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	call DetachBSTR
	add esp,8
	mov edi,eax
	mov ecx,dword ptr [esp+0x38]
	push 0xFFFFFFFF
	add ecx,4
	mov byte ptr [esp+0x58],8
	call ZArray<Ztl_bstr_t>::InsertBefore
	mov esi,eax
	cmp esi,edi
	je Block30

 Block26:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block28

 Block27:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block28:
	mov eax,dword ptr [edi]
	mov dword ptr [esi],eax
	test eax,eax
	je Block30

 Block29:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block30:
	mov esi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x54],6
	test esi,esi
	je Block39

 Block31:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block38

 Block32:
	test esi,esi
	je Block38

 Block33:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block35:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block37

 Block36:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block37:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block38:
	mov dword ptr [esp+0x1C],0

 Block39:
	mov edi,dword ptr [esp+0x20]

 Block40:
	cmp word ptr [esp+0x3C],8
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block12

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block43:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block12

 Block44:
	jmp Block8

 Block45:
	mov esi,dword ptr [esp+0x5C]
	push 0
	lea eax,[esp+0x60]
	push eax
	mov ecx,offset CEmployeeTemplate::ms_mEmployeeTemplate
	mov dword ptr [esp+0x64],esi
	call ZMap<long, ZRef<CEmployeeTemplate>, long>::GetAt
	test eax,eax
	je Block56

 Block46:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x54],5
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0x58],2
	call ecx
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0x58],1
	call eax
	mov esi,dword ptr [esp+0x38]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x58],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block53

 Block51:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block53

 Block52:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block53:
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block55:
	xor eax,eax
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret

 Block56:
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x60]
	push ecx
	mov ecx,offset CEmployeeTemplate::ms_mEmployeeTemplate
	mov dword ptr [esp+0x64],esi
	call ZMap<long, ZRef<CEmployeeTemplate>, long>::Insert
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x54],5
	jne Block59

 Block57:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0x58],2
	call edx
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0x58],1
	call ecx
	mov esi,dword ptr [esp+0x38]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x58],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block63

 Block61:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block63

 Block62:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block63:
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	test eax,eax
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block65:
	mov eax,1
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret
}
}
// CEmployeeTemplate::Load
_SUB_EXCEPTION_HANDLER(119F00)
__SUB0(00119F00, __cdecl, 67985,  void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_119F00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC8]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x64]
	push eax
	call esi
	lea ecx,[esp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor edi,edi
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x54]
	push edx
	mov dword ptr [esp+0xD4],edi
	call esi
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
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
	lea ecx,[esp+0x6C]
	push ecx
	lea edx,[esp+0x60]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0xD9E
	push eax
	mov byte ptr [esp+0xEC],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xE4],2
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x88]
	push ecx
	mov byte ptr [esp+0xE8],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xD8],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],edi
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
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	mov byte ptr [esp+0xD0],5
	cmp word ptr [esp+0x74],bp
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x7C]
	xor edx,edx
	mov word ptr [esp+0x74],dx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x74]
	push eax
	call ebx

 Block13:
	mov byte ptr [esp+0xD0],6
	cmp word ptr [esp+0x54],bp
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x54]
	push edx
	call ebx

 Block17:
	mov byte ptr [esp+0xD0],7
	cmp word ptr [esp+0x64],bp
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x64]
	push ecx
	call ebx

 Block21:
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[esp+0x48]
	push edx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xD4],8
	mov dword ptr [esp+0x2C],edi
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	lea ecx,[esp+0x2C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0xD0],0xA
	cmp eax,edi
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	lea eax,[esp+0x2C]
	push eax
	call esi
	mov byte ptr [esp+0xD0],0xB
	mov dword ptr [esp+0x4C],edi

 Block31:
	mov esi,dword ptr [esp+0x28]
	test esi,esi
	je Block5

 Block32:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block84

 Block33:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x28]
	push eax
	call DetachBSTR
	add esp,8
	mov ebx,dword ptr [esp+0x24]
	test ebx,ebx
	je Block35

 Block34:
	mov eax,dword ptr [ebx]
	jmp Block36

 Block35:
	xor eax,eax

 Block36:
	push eax
	call __wtoi
	add esp,4
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x24],eax
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block38

 Block37:
	lea ecx,[ebx+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block38:
	mov ecx,dword ptr [esp+0x28]
	lea edx,[esp+0x90]
	mov byte ptr [esp+0xDC],0xD
	push edx
	mov byte ptr [esp+0xE0],0xC
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xD8],0xE
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [esp+0x44],edi
	test eax,eax
	je Block41

 Block39:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x3C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x3C]
	mov edi,ecx
	mov dword ptr [esp+0x44],edi
	test eax,eax
	jge Block41

 Block40:
	cmp eax,0x80004002
	jne Block1

 Block41:
	cmp word ptr [esp+0x84],8
	mov byte ptr [esp+0xD0],0x10
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x8C]
	xor edx,edx
	mov word ptr [esp+0x84],dx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[esp+0x84]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block45:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x3D5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xDC],0x11
	test edi,edi
	je Block5

 Block46:
	lea edx,[esp+0xA0]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xE0],0x10
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xD8],0x12
	call Ztl_variant_t::GetUnknown
	xor ebp,ebp
	mov dword ptr [esp+0x50],ebp
	test eax,eax
	je Block49

 Block47:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x40]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x40]
	mov ebp,ecx
	mov dword ptr [esp+0x50],ebp
	test eax,eax
	jge Block49

 Block48:
	cmp eax,0x80004002
	jne Block1

 Block49:
	mov esi,8
	mov byte ptr [esp+0xD0],0x14
	cmp word ptr [esp+0x94],si
	jne Block52

 Block50:
	mov eax,dword ptr [esp+0x9C]
	xor edx,edx
	mov word ptr [esp+0x94],dx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea eax,[esp+0x94]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block53:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x968
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xD8],0x15
	test ebp,ebp
	je Block5

 Block54:
	lea edx,[esp+0xBC]
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0xDC],0x14
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xD8],0x16
	call get_int32
	add esp,8
	mov byte ptr [esp+0xD0],0x14
	cmp word ptr [esp+0xB4],si
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0xB4],ax
	mov eax,dword ptr [esp+0xBC]
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[esp+0xB4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0xD9C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0xB0]
	mov byte ptr [esp+0xDC],0x17
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xE0],0x14
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xD8],0x18
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	test eax,eax
	je Block61

 Block59:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x20]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x20]
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	test eax,eax
	jge Block61

 Block60:
	cmp eax,0x80004002
	jne Block1

 Block61:
	cmp word ptr [esp+0xA4],8
	mov byte ptr [esp+0xD0],0x1A
	jne Block64

 Block62:
	mov eax,dword ptr [esp+0xAC]
	xor edx,edx
	mov word ptr [esp+0xA4],dx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea eax,[esp+0xA4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block65:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0xC8],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block67

 Block66:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block67:
	mov eax,dword ptr [esp+0x1C]
	push eax
	call CEmployeeTemplate::RegisterEmployee
	add esp,8
	test eax,eax
	je Block83

 Block68:
	mov byte ptr [esp+0xD0],0x14
	test esi,esi
	je Block70

 Block69:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block70:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0xD4],0x10
	call ecx
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0xD4],0xC
	call eax
	mov byte ptr [esp+0xD0],0xB
	test ebx,ebx
	je Block78

 Block71:
	lea ecx,[ebx+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block77

 Block72:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block74

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block74:
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block76

 Block75:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block76:
	push ebx
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block77:
	mov dword ptr [esp+0x24],0

 Block78:
	cmp word ptr [esp+0x2C],8
	jne Block81

 Block79:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block31

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block81:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block31

 Block82:
	jmp Block1

 Block83:
	push 0x22000006
	lea ecx,[esp+0x1C]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x18]
	push offset CTerminateException::THROW_INFO
	lea edx,[esp+0x24]
	push edx
	mov dword ptr [esp+0x28],ecx
	call _CxxThrowException

 Block84:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xD0],0xA
	jne Block87

 Block85:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0xD4],7
	call eax
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [esp+0xD4],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0xC8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC0
	ret
}
}
// CEmployeeTemplate::Unload
__SUB0(001193F0, __cdecl, 67985,  void) {
__asm {

 Block0:
	mov ecx,offset CEmployeeTemplate::ms_mEmployeeTemplate
	jmp  ZMap<long, ZRef<CEmployeeTemplate>, long>::RemoveAll
}
}
