#include "regen.hpp"
// Tips.ipp
#include "Tips.hpp"

// CTips::Init
_SUB_EXCEPTION_HANDLER(3609A0)
__SUB_CLASS_THIS0(003609A0, __thiscall, 11589,  CTips, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3609A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x70],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x68],ecx
	lea ebx,[ecx+4]
	mov ecx,ebx
	call ZArray<CTips::TIPS_INFO>::RemoveAll
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x30]
	push eax
	call esi
	lea ecx,[ebp+0x30]
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
	lea edx,[ebp+0x40]
	push edx
	mov dword ptr [ebp-4],edi
	call esi
	lea eax,[ebp+0x40]
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
	lea ecx,[ebp+0x30]
	push ecx
	lea edx,[ebp+0x40]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x50],esp
	push 0x73A
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],edi
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
	mov esi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x2C],si
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp+0x40],si
	jne Block16

 Block14:
	mov eax,dword ptr [ebp+0x48]
	xor ecx,ecx
	mov word ptr [ebp+0x40],cx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x30],si
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov esi,dword ptr [ebp+0x54]
	cmp esi,edi
	sete al
	test al,al
	je Block24

 Block22:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp esi,edi
	je Block69

 Block23:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax
	jmp Block69

 Block24:
	cmp esi,edi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x64]
	push edx
	push esi
	mov dword ptr [ebp+0x64],edi
	call eax
	cmp eax,edi
	jge Block28

 Block27:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block28:
	mov edx,dword ptr [ebp+0x64]
	lea ecx,[ebp+0x5B]
	push ecx
	push edx
	mov ecx,ebx
	call ZArray<CTips::TIPS_INFO>::_Alloc
	mov dword ptr [ebp+0x64],edi
	mov dword ptr [ebp+0x6C],edi
	mov bl,0xB
	lea esp,[esp]

 Block29:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x60]
	push ecx
	push esi
	mov dword ptr [ebp+0x60],0
	call edx
	test eax,eax
	jge Block31

 Block30:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block31:
	cmp edi,dword ptr [ebp+0x60]
	jae Block68

 Block32:
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
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp]
	mov byte ptr [ebp-4],8
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x60],esi
	test eax,eax
	je Block35

 Block33:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x50]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x50]
	mov esi,ecx
	mov dword ptr [ebp+0x60],esi
	test eax,eax
	jge Block35

 Block34:
	cmp eax,0x80004002
	jne Block1

 Block35:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],bl
	jne Block38

 Block36:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block39:
	push 0x1F
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0xCAA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0xC
	test esi,esi
	je Block5

 Block40:
	lea edx,[ebp-0x4C]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,dword ptr [ebp+0x68]
	mov edi,dword ptr [ecx+4]
	add edi,dword ptr [ebp+0x6C]
	add ecx,4
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	add esp,8
	mov dword ptr [edi+0xC],eax
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[ebp-0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x73B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x20]
	mov byte ptr [ebp-4],0xE
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,dword ptr [ebp+0x68]
	mov edi,dword ptr [ecx+4]
	add edi,dword ptr [ebp+0x6C]
	add ecx,4
	push eax
	mov byte ptr [ebp-4],0xF
	call get_int32
	add esp,8
	mov dword ptr [edi],eax
	cmp word ptr [ebp+0x20],8
	mov byte ptr [ebp-4],bl
	jne Block47

 Block45:
	mov eax,dword ptr [ebp+0x28]
	xor ecx,ecx
	mov word ptr [ebp+0x20],cx
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[ebp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x73C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x10]
	push ecx
	mov byte ptr [ebp-4],0x10
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,dword ptr [ebp+0x68]
	mov edi,dword ptr [ecx+4]
	add edi,dword ptr [ebp+0x6C]
	add ecx,4
	push eax
	mov byte ptr [ebp-4],0x11
	call get_int32
	add esp,8
	mov dword ptr [edi+4],eax
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],bl
	jne Block51

 Block49:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block52:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1ABA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x1C]
	mov byte ptr [ebp-4],0x12
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,dword ptr [ebp+0x68]
	mov edi,dword ptr [ecx+4]
	add edi,dword ptr [ebp+0x6C]
	add ecx,4
	push eax
	mov byte ptr [ebp-4],0x13
	call get_int32
	add esp,8
	mov dword ptr [edi+8],eax
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],bl
	jne Block55

 Block53:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x73E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x3C]
	mov byte ptr [ebp-4],0x14
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,dword ptr [ebp+0x68]
	mov edi,dword ptr [ecx+4]
	add edi,dword ptr [ebp+0x6C]
	add ecx,4
	push eax
	mov byte ptr [ebp-4],0x15
	call get_int32
	mov dword ptr [edi+0x10],eax
	mov edi,8
	add esp,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x3C],di
	jne Block59

 Block57:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea edx,[ebp-0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x73F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x5C]
	push ecx
	mov byte ptr [ebp-4],0x16
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0x17
	cmp word ptr [eax],di
	jne Block62

 Block61:
	mov eax,dword ptr [eax+8]
	jmp Block63

 Block62:
	mov eax,offset _S___3

 Block63:
	push eax
	mov eax,dword ptr [ebp+0x68]
	mov edx,dword ptr [eax+4]
	add eax,4
	mov eax,dword ptr [ebp+0x6C]
	lea ecx,[eax+edx+0x14]
	call ZXString16::AssignCStr
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x5C],di
	jne Block66

 Block64:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],7
	call ecx
	inc dword ptr [ebp+0x64]
	add dword ptr [ebp+0x6C],0x18
	mov edi,dword ptr [ebp+0x64]
	mov esi,dword ptr [ebp+0x54]
	jmp Block29

 Block68:
	call timeGetTime
	mov edx,dword ptr [ebp+0x68]
	mov dword ptr [edx+8],eax
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ecx

 Block69:
	lea esp,[ebp-0x6C]
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
}
}
// CTips::~CTips
__SUB_CLASS_THIS0(00360990, __thiscall, 11589,  CTips, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CTips::`vftable'
	add ecx,4
	jmp  ZArray<CTips::TIPS_INFO>::RemoveAll
}
}
// CTips::CTips
__SUB_CLASS_THIS0(00360980, __thiscall, 11587,  CTips, void) {
__asm {

 Block0:
	mov eax,ecx
	int 3// TODO: 	mov dword ptr [eax],offset CTips::`vftable'
	mov dword ptr [eax+4],0
	ret
}
}
// CTips::GetTip
_SUB_EXCEPTION_HANDLER(360560)
__SUB_CLASS_THIS(00360560, __thiscall, 11591,  CTips, int32_t, long, long, ZXString<char>&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_360560
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
	mov edi,ecx
	mov esi,dword ptr [ebp+0x10]
	mov eax,dword ptr [esi]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esi],0

 Block2:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block64

 Block3:
	cmp dword ptr [eax-4],0
	jbe Block64

 Block4:
	mov ecx,dword ptr [ebp+0xC]
	xor esi,esi
	xor edx,edx

 Block5:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block64

 Block6:
	cmp esi,dword ptr [eax-4]
	jae Block64

 Block7:
	add eax,edx
	cmp dword ptr [eax],ecx
	jg Block11

 Block8:
	cmp ecx,dword ptr [eax+4]
	jg Block11

 Block9:
	mov ecx,dword ptr [ebp+8]
	dec ecx
	mov ebx,1
	shl ebx,cl
	test dword ptr [eax+0xC],ebx
	jne Block12

 Block10:
	mov ecx,dword ptr [ebp+0xC]

 Block11:
	inc esi
	add edx,0x18
	jmp Block5

 Block12:
	test esi,esi
	jl Block64

 Block13:
	mov ebx,dword ptr [edi+4]
	lea esi,[esi+esi*2]
	add esi,esi
	add esi,esi
	add esi,esi
	add ebx,esi
	call timeGetTime
	sub eax,dword ptr [edi+8]
	cmp eax,dword ptr [ebx+8]
	jb Block64

 Block14:
	call timeGetTime
	mov dword ptr [edi+8],eax
	xor eax,eax
	mov dword ptr [ebp-0x18],eax
	mov ebx,dword ptr [edi+4]
	mov dword ptr [ebp-4],eax
	add ebx,esi
	call _rand
	cdq
	mov ecx,0x64
	idiv ecx
	cmp edx,dword ptr [ebx+0x10]
	jge Block16

 Block15:
	lea edx,[ebp-0x14]
	push 0x740
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp-0x18]
	mov byte ptr [ebp-4],1
	call ZXString16::op_assign
	jmp Block17

 Block16:
	lea eax,[ebp-0x14]
	push 0x741
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [edi+4]
	mov edx,dword ptr [esi+ecx+0x14]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp-0x18]
	push eax
	mov byte ptr [ebp-4],2
	call ZXString16::Format
	add esp,0xC

 Block17:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x3C]
	push ecx
	call esi
	lea edx,[ebp-0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	lea eax,[ebp-0x2C]
	push eax
	mov byte ptr [ebp-4],3
	call esi
	lea ecx,[ebp-0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov edi,dword ptr [ebp-0x18]
	push 0
	push 0
	lea edx,[ebp-0x3C]
	push edx
	lea eax,[ebp-0x2C]
	push eax
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	mov bl,4
	push edi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],5
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea ecx,[ebp-0x4C]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x1C]
	mov dword ptr [ebp-0x1C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x4C],bx
	jne Block31

 Block29:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[ebp-0x4C]
	push eax
	call esi

 Block32:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x2C],bx
	jne Block35

 Block33:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[ebp-0x2C]
	push edx
	call esi

 Block36:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x3C],bx
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[ebp-0x3C]
	push ecx
	call esi

 Block40:
	mov esi,dword ptr [ebp-0x1C]
	test esi,esi
	sete al
	test al,al
	jne Block60

 Block41:
	test esi,esi
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp-0x14]
	push eax
	push esi
	mov dword ptr [ebp-0x14],0
	call ecx
	test eax,eax
	jge Block45

 Block44:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block45:
	cmp dword ptr [ebp-0x14],0
	jbe Block60

 Block46:
	mov eax,0x20
	call __chkstk
	mov ecx,esi
	mov edi,esp
	call IWzProperty::Getcount
	mov ebx,eax
	call _rand
	xor edx,edx
	div ebx
	mov ebx,0xA
	push ebx
	push edi
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x5C]
	mov byte ptr [ebp-4],0xB
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0xC
	jne Block48

 Block47:
	mov eax,dword ptr [eax+8]
	jmp Block49

 Block48:
	mov eax,offset _S___3

 Block49:
	mov edi,dword ptr [ebp+0x10]
	push 0xFFFFFFFF
	push eax
	mov ecx,edi
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],bl
	jne Block52

 Block50:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block56

 Block54:
	cmp byte ptr [eax],0
	je Block56

 Block55:
	xor eax,eax
	jmp Block57

 Block56:
	mov eax,1

 Block57:
	xor edx,edx
	test eax,eax
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	sete dl
	push esi
	mov byte ptr [ebp-4],0
	mov edi,edx
	call ecx
	mov eax,dword ptr [ebp-0x18]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block59:
	mov eax,edi
	jmp Block65

 Block60:
	mov byte ptr [ebp-4],0
	test esi,esi
	je Block62

 Block61:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block62:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test edi,edi
	je Block64

 Block63:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block64:
	xor eax,eax

 Block65:
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
	ret 0xC
}
}
