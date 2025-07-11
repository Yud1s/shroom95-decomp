#include "regen.hpp"
// Util.ipp
#include "Util.hpp"

// msgbox_ZException
_SUB_EXCEPTION_HANDLER(55D0A0)
__SUB(0055D0A0, __cdecl, 80856,  void, const ZException&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55D0A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x24]
	mov eax,dword ptr [eax]
	int 3// TODO: 	mov dword ptr [esp+4],offset _com_error::`vftable'
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+0xC],0
	mov dword ptr [esp+0x10],0
	lea ecx,[esp+4]
	push ecx
	mov dword ptr [esp+0x20],0
	call msgbox_com_error
	mov eax,dword ptr [esp+0x10]
	add esp,4
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+4],offset _com_error::`vftable'
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block2:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block4

 Block3:
	push eax
	call dword ptr [ZImports::_LocalFree]

 Block4:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret
}
}
// play_skill_sound
_SUB_EXCEPTION_HANDLER(566B60)
__SUB(00566B60, __cdecl, 80904,  uint32_t, long, SE_TYPE, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_566B60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA0
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB4]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [esp+0xC8]
	add eax,0xFFFFFFD6
	mov dword ptr [esp+0xBC],ebx
	cmp eax,0xC
	ja Block88

 Block1:
	lea edi,[ebx+8]
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5
cmp EAX, 4
je Block6
cmp EAX, 5
je Block7
cmp EAX, 6
je Block8
cmp EAX, 7
je Block9
cmp EAX, 8
je Block10
cmp EAX, 9
je Block11
cmp EAX, 10
je Block12
cmp EAX, 11
je Block13
cmp EAX, 12
je Block14


 Block2:
	lea eax,[esp+0x2C]
	push 0x1A87
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0xC0],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x2C]
	jmp Block15

 Block3:
	lea ecx,[esp+0x28]
	push 0x8BA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0xC0],2
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x28]
	jmp Block15

 Block4:
	lea edx,[esp+0x24]
	push 0xF3A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0xC0],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x24]
	jmp Block15

 Block5:
	lea eax,[esp+0x1C]
	push 0xF3B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0xC0],4
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x1C]
	jmp Block15

 Block6:
	lea ecx,[esp+0x50]
	push 0xF3C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0xC0],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x50]
	jmp Block15

 Block7:
	lea edx,[esp+0x48]
	push 0xEA8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0xC0],6
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x48]
	jmp Block15

 Block8:
	lea eax,[esp+0x3C]
	push 0xB32
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0xC0],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x3C]
	jmp Block15

 Block9:
	lea ecx,[esp+0x38]
	push 0x1A26
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0xC0],8
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x38]
	jmp Block15

 Block10:
	lea edx,[esp+0x44]
	push 0x1A34
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0xC0],9
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x44]
	jmp Block15

 Block11:
	lea eax,[esp+0x4C]
	push 0x1A32
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0xC0],0xA
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x4C]
	jmp Block15

 Block12:
	lea ecx,[esp+0x40]
	push 0x1A41
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0xC0],0xB
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x40]
	jmp Block15

 Block13:
	lea edx,[esp+0x34]
	push 0xB39
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0xC0],0xC
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x34]
	jmp Block15

 Block14:
	lea eax,[esp+0x18]
	push 0x1AB3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0xC0],0xD
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]

 Block15:
	mov byte ptr [esp+0xBC],bl
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block17:
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x30],ebx
	lea ecx,[esp+0x18]
	push 0x1789
	push ecx
	mov byte ptr [esp+0xC4],0xF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esp+0xC4]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0xC8],0x10
	call ZXString16::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x34]
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xBC],0xF
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x74]
	push ecx
	call esi
	lea edx,[esp+0x74]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	lea eax,[esp+0x54]
	push eax
	mov byte ptr [esp+0xC0],0x11
	call esi
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	push ebx
	push ebx
	lea edx,[esp+0x7C]
	push edx
	mov edx,dword ptr [esp+0x3C]
	lea eax,[esp+0x60]
	push eax
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xD4],0x12
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xD0],0x13
	cmp dword ptr [_D_G_RM],ebx
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea eax,[esp+0xA8]
	mov byte ptr [esp+0xD0],0x12
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x14
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0xBC],0x16
	cmp word ptr [esp+0x94],di
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x9C]
	xor ecx,ecx
	mov word ptr [esp+0x94],cx
	cmp eax,ebx
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea edx,[esp+0x94]
	push edx
	call esi

 Block32:
	mov byte ptr [esp+0xBC],0x17
	cmp word ptr [esp+0x54],di
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebx
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[esp+0x54]
	push ecx
	call esi

 Block36:
	mov byte ptr [esp+0xBC],0x18
	cmp word ptr [esp+0x74],di
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x7C]
	xor edx,edx
	mov word ptr [esp+0x74],dx
	cmp eax,ebx
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[esp+0x74]
	push eax
	call esi

 Block40:
	mov eax,dword ptr [esp+0xCC]
	cmp eax,ebx
	mov ebp,eax
	jle Block75

 Block41:
	cmp dword ptr [esp+0x28],ebx
	sete al
	cmp al,bl
	sete byte ptr [esp+0x23]

 Block42:
	cmp byte ptr [esp+0x23],bl
	je Block75

 Block43:
	mov dword ptr [esp+0x24],ebx
	lea ecx,[esp+0x18]
	push 0x178A
	push ecx
	mov byte ptr [esp+0xC4],0x19
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0xC4]
	mov eax,dword ptr [eax]
	push edx
	push ebp
	push ecx
	push eax
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0xD0],0x1A
	call ZXString16::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0x14
	mov byte ptr [esp+0xBC],0x19
	cmp eax,ebx
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block45:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x64]
	push eax
	call esi
	lea ecx,[esp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block20

 Block46:
	lea edx,[esp+0x84]
	push edx
	mov byte ptr [esp+0xC0],0x1B
	call esi
	lea eax,[esp+0x84]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block20

 Block47:
	mov edi,dword ptr [esp+0x24]
	push ebx
	push ebx
	lea ecx,[esp+0x6C]
	push ecx
	lea edx,[esp+0x90]
	push edx
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push edi
	mov byte ptr [esp+0xD4],0x1C
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xD0],0x1D
	cmp dword ptr [_D_G_RM],ebx
	je Block24

 Block48:
	lea eax,[esp+0xB8]
	mov byte ptr [esp+0xD0],0x1C
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x1E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x30],ebx
	call _x_com_ptr<IWzSound>::_QueryUnknown
	cmp eax,ebx
	jge Block50

 Block49:
	cmp eax,0x80004002
	jne Block20

 Block50:
	mov esi,8
	mov byte ptr [esp+0xBC],0x20
	cmp word ptr [esp+0xA4],si
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0xAC]
	xor ecx,ecx
	mov word ptr [esp+0xA4],cx
	cmp eax,ebx
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[esp+0xA4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [esp+0xBC],0x21
	cmp word ptr [esp+0x84],si
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x84],ax
	mov eax,dword ptr [esp+0x8C]
	cmp eax,ebx
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[esp+0x84]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov byte ptr [esp+0xBC],0x22
	cmp word ptr [esp+0x64],si
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	cmp eax,ebx
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea eax,[esp+0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov esi,dword ptr [esp+0x2C]
	cmp esi,ebx
	sete al
	cmp al,bl
	sete al
	cmp al,bl
	jne Block69

 Block63:
	mov byte ptr [esp+0xBC],0x19
	cmp esi,ebx
	je Block65

 Block64:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block65:
	mov byte ptr [esp+0xBC],0x18
	cmp edi,ebx
	je Block67

 Block66:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block67:
	dec ebp
	cmp ebp,ebx
	jg Block42

 Block68:
	jmp Block75

 Block69:
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x20]
	call ZXString16::op_assign
	mov byte ptr [esp+0xBC],0x19
	cmp esi,ebx
	je Block71

 Block70:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block71:
	mov byte ptr [esp+0xBC],0x18
	cmp edi,ebx
	je Block73

 Block72:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block73:
	mov esi,dword ptr [esp+0x1C]
	cmp esi,ebx
	je Block75

 Block74:
	cmp word ptr [esi],bx
	jne Block78

 Block75:
	lea eax,[esp+0x18]
	push 0x8BC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ebp,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0xC4]
	mov eax,dword ptr [eax]
	push ebp
	push ecx
	push eax
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0xCC],0x23
	call ZXString16::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0x10
	mov byte ptr [esp+0xBC],0x18
	cmp eax,ebx
	je Block77

 Block76:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block77:
	mov esi,dword ptr [esp+0x1C]
	jmp Block79

 Block78:
	mov ebp,dword ptr [esp+0x14]

 Block79:
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	xor eax,eax
	cmp dword ptr [esp+0xC8],0x2F
	sete al
	push eax
	push 0x64
	push esi
	call CSoundMan::PlaySE
	mov edi,eax
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xBC],0xF
	cmp eax,ebx
	je Block81

 Block80:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block81:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xBC],0xE
	cmp eax,ebx
	je Block83

 Block82:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block83:
	mov byte ptr [esp+0xBC],bl
	cmp esi,ebx
	je Block85

 Block84:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block85:
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	cmp ebp,ebx
	je Block87

 Block86:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block87:
	mov eax,edi
	jmp Block89

 Block88:
	xor eax,eax

 Block89:
	mov ecx,dword ptr [esp+0xB4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xAC
	ret
}
}
// get_labeled_sub
_SUB_EXCEPTION_HANDLER(55D770)
__SUB(0055D770, __cdecl, 80859,  _x_com_ptr<IWzProperty>, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55D770
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push esi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x14],0
	mov eax,dword ptr [ebp+0x10]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov dword ptr [ebp-4],2
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp+0x10]
	mov esi,esp
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x28],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],3
	test ecx,ecx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	mov esi,dword ptr [ebp+8]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [ebp-0x24],8
	mov dword ptr [ebp-0x14],1
	mov byte ptr [ebp-4],2
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block11:
	mov eax,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,esi
	lea esp,[ebp-0x30]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	mov ecx,dword ptr [ebp-0x10]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// play_mob_sound
_SUB_EXCEPTION_HANDLER(567760)
__SUB(00567760, __cdecl, 80910,  void, unsigned long, SE_TYPE, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_567760
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x88
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x98]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0x10],ebx
	mov eax,dword ptr [esp+0xAC]
	mov dword ptr [esp+0xA0],ebx
	cmp eax,0x26
	ja Block46

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5
cmp EAX, 4
je Block6
cmp EAX, 5
je Block7
cmp EAX, 6
je Block8
cmp EAX, 7
je Block9
cmp EAX, 8
je Block10
cmp EAX, 9
je Block11
cmp EAX, 10
je Block12
cmp EAX, 11
je Block13
cmp EAX, 12
je Block14
cmp EAX, 13
je Block46
cmp EAX, 14
je Block46
cmp EAX, 15
je Block46
cmp EAX, 16
je Block46
cmp EAX, 17
je Block46
cmp EAX, 18
je Block46
cmp EAX, 19
je Block15
cmp EAX, 20
je Block16
cmp EAX, 21
je Block17
cmp EAX, 22
je Block18
cmp EAX, 23
je Block19
cmp EAX, 24
je Block20
cmp EAX, 25
je Block21
cmp EAX, 26
je Block22
cmp EAX, 27
je Block23
cmp EAX, 28
je Block24
cmp EAX, 29
je Block25
cmp EAX, 30
je Block26
cmp EAX, 31
je Block27
cmp EAX, 32
je Block28
cmp EAX, 33
je Block29
cmp EAX, 34
je Block30
cmp EAX, 35
je Block31
cmp EAX, 36
je Block32
cmp EAX, 37
je Block33
cmp EAX, 38
je Block34


 Block2:
	lea eax,[esp+0x14]
	push 0x1A32
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	jmp Block35

 Block3:
	lea ecx,[esp+0x90]
	push 0x1A34
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],2
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x90]
	jmp Block35

 Block4:
	lea edx,[esp+0x94]
	push 0x1A26
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x94]
	jmp Block35

 Block5:
	lea eax,[esp+0x78]
	push 0x1A27
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],4
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x78]
	jmp Block35

 Block6:
	lea ecx,[esp+0x28]
	push 0x9FB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x28]
	jmp Block35

 Block7:
	lea edx,[esp+0x60]
	push 0x9FC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],6
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x60]
	jmp Block35

 Block8:
	lea eax,[esp+0x30]
	push 0x9FD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x30]
	jmp Block35

 Block9:
	lea ecx,[esp+0x88]
	push 0x9FE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],8
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x88]
	jmp Block35

 Block10:
	lea edx,[esp+0x38]
	push 0x9FF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],9
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x38]
	jmp Block35

 Block11:
	lea eax,[esp+0x68]
	push 0xA00
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0xA
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x68]
	jmp Block35

 Block12:
	lea ecx,[esp+0x40]
	push 0xA01
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0xB
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x40]
	jmp Block35

 Block13:
	lea edx,[esp+0x80]
	push 0xA13
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0xC
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x80]
	jmp Block35

 Block14:
	lea eax,[esp+0x48]
	push 0xA14
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0xD
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x48]
	jmp Block35

 Block15:
	lea ecx,[esp+0x70]
	push 0xA15
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0xE
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x70]
	jmp Block35

 Block16:
	lea edx,[esp+0x50]
	push 0xA02
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0xF
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x50]
	jmp Block35

 Block17:
	lea eax,[esp+0x1C]
	push 0xA03
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0x10
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x1C]
	jmp Block35

 Block18:
	lea ecx,[esp+0x58]
	push 0xA04
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0x11
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x58]
	jmp Block35

 Block19:
	lea edx,[esp+0x20]
	push 0xA05
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0x12
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x20]
	jmp Block35

 Block20:
	lea eax,[esp+0x24]
	push 0xA06
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0x13
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x24]
	jmp Block35

 Block21:
	lea ecx,[esp+0x2C]
	push 0xA07
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0x14
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x2C]
	jmp Block35

 Block22:
	lea edx,[esp+0x34]
	push 0xA08
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0x15
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x34]
	jmp Block35

 Block23:
	lea eax,[esp+0x3C]
	push 0xA09
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0x16
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x3C]
	jmp Block35

 Block24:
	lea ecx,[esp+0x44]
	push 0xA0A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0x17
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x44]
	jmp Block35

 Block25:
	lea edx,[esp+0x4C]
	push 0xA0B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0x18
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x4C]
	jmp Block35

 Block26:
	lea eax,[esp+0x54]
	push 0xA0C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0x19
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x54]
	jmp Block35

 Block27:
	lea ecx,[esp+0x5C]
	push 0xA0D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0x1A
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x5C]
	jmp Block35

 Block28:
	lea edx,[esp+0x64]
	push 0xA0E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0x1B
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x64]
	jmp Block35

 Block29:
	lea eax,[esp+0x6C]
	push 0xA0F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0x1C
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x6C]
	jmp Block35

 Block30:
	lea ecx,[esp+0x74]
	push 0xA10
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0x1D
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x74]
	jmp Block35

 Block31:
	lea edx,[esp+0x7C]
	push 0xA11
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0x1E
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x7C]
	jmp Block35

 Block32:
	lea eax,[esp+0x84]
	push 0xA12
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0x1F
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x84]
	jmp Block35

 Block33:
	lea ecx,[esp+0x8C]
	push 0xA16
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0x20
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x8C]
	jmp Block35

 Block34:
	lea edx,[esp+0x18]
	push 0xA17
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0xA4],0x21
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]

 Block35:
	mov byte ptr [esp+0xA0],bl
	cmp eax,ebx
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block37:
	mov dword ptr [esp+0x14],ebx
	lea eax,[esp+0x18]
	push 0x8BD
	push eax
	mov byte ptr [esp+0xA8],0x22
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,dword ptr [esp+0x10]
	mov ecx,dword ptr [esp+0xA8]
	mov eax,dword ptr [eax]
	push esi
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0xB0],0x23
	call ZXString16::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0x10
	mov byte ptr [esp+0xA0],0x22
	cmp eax,ebx
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block39:
	mov eax,dword ptr [esp+0xB0]
	mov edi,dword ptr [esp+0x14]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]

 Block40:
	push ebx
	push eax
	push edi
	call CSoundMan::PlaySE

 Block41:
	mov byte ptr [esp+0xA0],bl
	cmp edi,ebx
	je Block43

 Block42:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block43:
	mov dword ptr [esp+0xA0],0xFFFFFFFF
	cmp esi,ebx

 Block44:
	je Block46

 Block45:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block46:
	mov ecx,dword ptr [esp+0x98]
	mov dword ptr fs:[0],ecx

 Block47:
	pop ecx
	pop edi
	pop esi
	pop ebx

 Block48:
	add esp,0x94
	ret
}
}
// get_stringByKey
_SUB_EXCEPTION_HANDLER(55D8C0)
__SUB(0055D8C0, __cdecl, 80861,  ZXString<char>, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<Ztl_bstr_t>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55D8C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+8],0
	mov dword ptr [esp+0x24],0
	push ecx
	mov ecx,dword ptr [esp+0x38]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0xC],esp
	test eax,eax
	je Block2

 Block1:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov ecx,dword ptr [esp+0x34]
	mov byte ptr [esp+0x28],2
	test ecx,ecx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[esp+0x10]
	push edx
	mov byte ptr [esp+0x2C],1
	call IWzProperty::Getitem
	cmp word ptr [esp+0xC],8
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],3
	je Block6

 Block5:
	mov eax,offset _S___3

 Block6:
	mov esi,dword ptr [esp+0x2C]
	push 0xFFFFFFFF
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::AssignWideStr
	cmp word ptr [esp+0xC],8
	mov byte ptr [esp+0x24],1
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0xC],ax
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0xC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block12:
	mov ecx,dword ptr [esp+0x34]
	test ecx,ecx
	je Block14

 Block13:
	call _xbstr_t::Data_t::Release

 Block14:
	mov eax,esi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret
}
}
// format_string
_SUB_EXCEPTION_HANDLER(566380)
__SUB(00566380, __cdecl, 80898,  int32_t, ZXString<char>&, NakedParam<_x_com_ptr<IWzFont>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_566380
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x3C]
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	xor esi,esi
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x3C],esi
	mov dword ptr [esp+0x1C],esi
	call ZXString16::AssignCharStr
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x38],1
	call ebp
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	mov edi,dword ptr [esp+0x44]
	mov esi,dword ptr [esp+0x14]
	lea eax,[esp+0x1C]
	push eax
	push edi
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov bl,2
	push esi
	mov byte ptr [esp+0x44],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x40],3
	test ecx,ecx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov byte ptr [esp+0x40],bl
	call IWzFont::CalcLongestText
	test esi,esi
	je Block6

 Block5:
	mov ecx,dword ptr [esi-4]
	shr ecx,1
	jmp Block7

 Block6:
	xor ecx,ecx

 Block7:
	cmp eax,ecx
	sete bl
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],1
	jne Block10

 Block8:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block11:
	test bl,bl
	je Block17

 Block12:
	mov byte ptr [esp+0x34],0
	test esi,esi
	je Block14

 Block13:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block14:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	xor eax,eax
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret

 Block17:
	lea eax,[esp+0x1C]
	push eax
	call ebp
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	lea edx,[esp+0x1C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x8B8
	mov bl,4
	push eax
	mov byte ptr [esp+0x44],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],5
	test ecx,ecx
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	mov byte ptr [esp+0x3C],bl
	call IWzFont::CalcTextWidth
	sub edi,eax
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],1
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	lea eax,[esp+0x1C]
	push eax
	call ebp
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	lea edx,[esp+0x1C]
	push edx
	push edi
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov bl,6
	push esi
	mov byte ptr [esp+0x44],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x40],7
	test ecx,ecx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov byte ptr [esp+0x40],bl
	call IWzFont::CalcLongestText
	cmp word ptr [esp+0x1C],8
	mov esi,eax
	mov byte ptr [esp+0x34],1
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	push esi
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[esp+0x1C]
	call ZXString16::Left
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x38],8
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block35:
	push 0
	lea ecx,[esp+0x18]
	call ZXString16::TrimRight
	lea eax,[esp+0x18]
	push 0x8B8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x34],9
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax-4]
	shr ecx,1
	jmp Block38

 Block37:
	xor ecx,ecx

 Block38:
	push ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString16::_Cat
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block40:
	mov esi,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x3C]
	push 0xFFFFFFFF
	push esi
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x34],0
	test esi,esi
	je Block42

 Block41:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block42:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	mov eax,1
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret
}
}
// string_newline_by_width
_SUB_EXCEPTION_HANDLER(5652A0)
__SUB(005652A0, __cdecl, 80884,  void, ZXString<char>&, long, NakedParam<_x_com_ptr<IWzFont>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5652A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	xor esi,esi
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x14],esi
	mov byte ptr [esp+0x2C],1
	cmp dword ptr [esp+0x3C],esi
	je Block2

 Block1:
	lea eax,[esp+0x3C]
	jmp Block3

 Block2:
	lea eax,[esp+0x1C]
	push 0x31
	push eax
	call get_basic_font
	add esp,8
	mov ebx,1
	mov byte ptr [esp+0x2C],2
	mov dword ptr [esp+0x18],ebx

 Block3:
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block5:
	mov eax,dword ptr [esp+0x3C]
	mov ebp,dword ptr [esp+0x38]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push ebp
	mov dword ptr [esp+0x3C],3
	mov dword ptr [ecx],esi
	call ZXString<char>::op_assign
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0x3C],2
	call separate_string_by_width
	add esp,0x10
	mov edi,1
	mov dword ptr [esp+0x2C],edi
	test bl,1
	je Block8

 Block6:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,esi
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block8:
	mov ebx,dword ptr [esp+0x14]
	cmp ebx,esi
	je Block18

 Block9:
	cmp dword ptr [ebx-4],esi
	jbe Block18

 Block10:
	push ebx
	mov ecx,ebp
	call ZXString<char>::op_assign
	lea esi,[ebx+4]

 Block11:
	cmp edi,dword ptr [ebx-4]
	jae Block18

 Block12:
	push esi
	lea ecx,[esp+0x3C]
	push offset _S___4
	push ecx
	call __op_add_char_char
	add esp,0xC
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x2C],4
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax-4]
	jmp Block15

 Block14:
	xor ecx,ecx

 Block15:
	push ecx
	push eax
	mov ecx,ebp
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x2C],1
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	inc edi
	add esi,4
	jmp Block11

 Block18:
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x2C],0
	call ZArray<ZXString<char>>::RemoveAll
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block20

 Block19:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block20:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret
}
}
// DrawImage
_SUB_EXCEPTION_HANDLER(55EE20)
__SUB(0055EE20, __cdecl, 80869,  void, NakedParam<_x_com_ptr<IWzCanvas>>, NakedParam<ZXString16>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55EE20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x54]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push eax
	mov dword ptr [esp+0x60],1
	call esi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0x60],2
	call esi
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov eax,dword ptr [esp+0x68]
	push 0
	push 0
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x74],3
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x70],4
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x58]
	push ecx
	mov byte ptr [esp+0x74],3
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x64],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x14],0
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
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0x5C],7
	cmp word ptr [esp+0x44],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x44]
	push eax
	call ebp

 Block13:
	mov byte ptr [esp+0x5C],8
	cmp word ptr [esp+0x14],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x14]
	push edx
	call ebp

 Block17:
	mov byte ptr [esp+0x5C],9
	cmp word ptr [esp+0x24],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x24]
	push ecx
	call ebp

 Block21:
	mov esi,dword ptr [esp+0x10]
	test esi,esi
	je Block28

 Block22:
	mov edx,3
	mov word ptr [esp+0x34],dx
	mov dword ptr [esp+0x3C],0xFF
	mov ecx,dword ptr [esp+0x64]
	mov byte ptr [esp+0x5C],0xA
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov edx,dword ptr [esp+0x70]
	lea eax,[esp+0x34]
	push eax
	mov eax,dword ptr [esp+0x70]
	push esi
	push edx
	push eax
	call IWzCanvas::Copy
	mov byte ptr [esp+0x5C],9
	cmp word ptr [esp+0x34],di
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x34]
	push edx
	call ebp

 Block28:
	mov byte ptr [esp+0x5C],1
	test esi,esi
	je Block30

 Block29:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block30:
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x5C],0
	test eax,eax
	je Block32

 Block31:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block32:
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block34:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x50
	ret
}
}
// DrawTextA
_SUB_EXCEPTION_HANDLER(55F5A0)
__SUB(0055F5A0, __cdecl, 80873,  void, NakedParam<_x_com_ptr<IWzCanvas>>, long, long, NakedParam<ZXString<char>>, IWzFont*, ENUM_TEXT_ALIGN) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55F5A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	cmp dword ptr [esp+0x48],0
	mov dword ptr [esp+0x40],1
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ebp,dword ptr [esp+0x58]
	test ebp,ebp
	je Block27

 Block3:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x18]
	push eax
	call ebx
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov eax,dword ptr [esp+0x54]
	lea edx,[esp+0x18]
	push edx
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x4C],2
	call _xbstr_t::_ctor_0
	mov ecx,ebp
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x18],8
	mov edi,eax
	mov byte ptr [esp+0x40],1
	jne Block8

 Block6:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov eax,dword ptr [esp+0x5C]
	xor esi,esi
	sub eax,1
	je Block12

 Block10:
	sub eax,1
	jne Block13

 Block11:
	neg edi
	mov esi,edi
	jmp Block13

 Block12:
	mov eax,edi
	cdq
	sub eax,edx
	sar eax,1
	mov esi,eax
	neg esi

 Block13:
	lea eax,[esp+0x28]
	push eax
	call ebx
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x44],3
	call ebx
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov eax,dword ptr [esp+0x54]
	lea ecx,[esp+0x28]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	push ebp
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov bl,4
	push eax
	mov byte ptr [esp+0x54],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x58]
	mov byte ptr [esp+0x50],5
	test ecx,ecx
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	mov edx,dword ptr [esp+0x60]
	mov eax,dword ptr [esp+0x5C]
	push edx
	add esi,eax
	push esi
	mov byte ptr [esp+0x58],bl
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x40],3
	cmp word ptr [esp+0x18],si
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x28],si
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block29:
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret
}
}
// draw_number_by_image
_SUB_EXCEPTION_HANDLER(565780)
__SUB(00565780, __cdecl, 80888,  long, NakedParam<_x_com_ptr<IWzCanvas>>, long, long, long, NakedParam<_x_com_ptr<IWzProperty>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_565780
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x1C],0
	mov dword ptr [esp+8],0
	lea eax,[esp+0xC]
	push 0x1A15
	push eax
	mov byte ptr [esp+0x24],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x30]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x10]
	push edx
	mov byte ptr [esp+0x28],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x18]
	add esp,0xC
	mov byte ptr [esp+0x1C],2
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x38]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x40],esp
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block4:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x14]
	mov dword ptr [esp+0x1C],esp
	push edx
	mov byte ptr [esp+0x2C],4
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x30]
	push eax
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x44],esp
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	mov byte ptr [esp+0x34],2
	call draw_text_by_image
	mov esi,eax
	mov eax,dword ptr [esp+0x20]
	add esp,0x18
	mov byte ptr [esp+0x1C],1
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x18
	ret
}
}
// format_integer
_SUB_EXCEPTION_HANDLER(5658D0)
__SUB(005658D0, __cdecl, 80890,  void, ZXString<char>&, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5658D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	lea eax,[esp+0x20]
	push 0x1A15
	push eax
	mov dword ptr [esp+0x3C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x40]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x40],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	cmp dword ptr [esp+0x44],ebx
	jne Block5

 Block3:
	mov ecx,dword ptr [esp+0x3C]
	lea eax,[esp+0x18]
	push eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block28

 Block4:
	add eax,0xFFFFFFF4
	push eax
	jmp Block27

 Block5:
	mov edi,dword ptr [esp+0x3C]
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [edi],ebx

 Block7:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esp+0x20],ebx
	cmp ecx,ebx
	je Block9

 Block8:
	mov eax,dword ptr [ecx-4]
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	lea ebp,[eax-1]
	cmp ebp,ebx
	jl Block25

 Block11:
	mov byte ptr [esp+0x45],bl

 Block12:
	mov al,byte ptr [ecx+ebp]
	mov byte ptr [esp+0x44],al
	lea eax,[esp+0x44]
	mov dword ptr [esp+0x1C],ebx
	lea edx,[eax+1]

 Block13:
	mov cl,byte ptr [eax]
	inc eax
	cmp cl,bl
	jne Block13

 Block14:
	sub eax,edx
	mov esi,eax
	push esi
	lea ecx,[esp+0x48]
	push ecx
	push ebx
	push esi
	lea ecx,[esp+0x2C]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x20]
	call ZXString<char>::ReleaseBuffer
	push edi
	lea edx,[esp+0x28]
	push edx
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x3C],2
	call ZXString<char>::op_add_1
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x38],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x34],2
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	cmp ebp,ebx
	jle Block24

 Block19:
	mov ecx,dword ptr [esp+0x20]
	mov eax,0x55555556
	imul ecx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea eax,[eax+eax*2]
	sub ecx,eax
	cmp ecx,2
	jne Block24

 Block20:
	lea ecx,[esp+0x14]
	push ecx
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebx
	mov byte ptr [esp+0x18],0x2C
	mov byte ptr [esp+0x19],bl
	call ZXString<char>::AssignCStr
	push edi
	lea edx,[esp+0x2C]
	push edx
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x3C],4
	call ZXString<char>::op_add_1
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x38],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x34],4
	cmp eax,ebx
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	inc dword ptr [esp+0x20]
	sub ebp,1
	mov ecx,dword ptr [esp+0x18]
	jns Block12

 Block25:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp ecx,ebx
	je Block28

 Block26:
	add ecx,0xFFFFFFF4
	push ecx

 Block27:
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret
}
}
// _anon__CopyDibToRawCanvas
_SUB_EXCEPTION_HANDLER(55C010)
__SUB(0055C010, __cdecl, 80840,  void, unsigned char*, NakedParam<_x_com_ptr<IWzRawCanvas>>, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55C010
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x48],0
	test eax,eax
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x18]
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_312126f0_c399_4111_8eab_0f96a30b6b7c
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov ecx,dword ptr [esp+0x54]
	mov edi,dword ptr [esp+0x14]
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x34]
	push eax
	call IWzRawCanvas::_LockAddress
	mov ecx,dword ptr [esp+0x38]
	mov byte ptr [esp+0x48],1
	test edi,edi
	je Block13

 Block7:
	mov edx,dword ptr [esp+0x60]
	lea eax,[edx+edx*2]
	mov dword ptr [esp+0x2C],eax
	mov eax,dword ptr [esp+0x5C]
	imul eax,edx
	add eax,dword ptr [esp+0x58]
	mov edx,dword ptr [esp+0x50]
	lea eax,[eax+eax*2]
	mov dword ptr [esp+0x18],eax
	nop

 Block8:
	mov esi,ecx
	add ecx,dword ptr [esp+0x1C]
	dec edi
	mov dword ptr [esp+0x28],edi
	mov dword ptr [esp+0x24],ecx
	cmp esi,ecx
	jae Block12

 Block9:
	lea ecx,[edx+1]
	mov edi,edx
	sub edx,ecx
	add eax,ecx
	sub edi,ecx
	add edx,2
	mov dword ptr [esp+0x20],edx

 Block10:
	mov dl,byte ptr [edi+eax]
	mov bl,byte ptr [eax]
	mov ecx,dword ptr [esp+0x20]
	mov cl,byte ptr [ecx+eax]
	movzx dx,dl
	mov ebp,0xFFF0
	and dx,bp
	shl dx,4
	movzx bx,bl
	or dx,bx
	shr cl,4
	movzx cx,cl
	mov ebx,ebp
	and dx,bx
	or dx,cx
	mov ecx,0xF000
	or dx,cx
	mov ecx,dword ptr [esp+0x24]
	mov word ptr [esi],dx
	add esi,2
	add eax,3
	cmp esi,ecx
	jb Block10

 Block11:
	mov edx,dword ptr [esp+0x50]
	mov edi,dword ptr [esp+0x28]

 Block12:
	mov eax,dword ptr [esp+0x18]
	add eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x18],eax
	test edi,edi
	jne Block8

 Block13:
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	mov edx,dword ptr [eax]
	push 0
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax
	test eax,eax
	jge Block17

 Block16:
	push offset __GUID_312126f0_c399_4111_8eab_0f96a30b6b7c
	push esi
	push eax
	call _com_issue_errorex

 Block17:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x48],0
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret
}
}
// get_sound_volume_by_pos
__SUB(0055B2A0, __cdecl, 80828,  uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	sub esp,0x10
	test eax,eax
	je Block5

 Block1:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	lea edx,[esp+8]
	push edx
	call eax
	mov eax,dword ptr [eax]
	sub eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov dword ptr [esp],eax
	fild dword ptr [esp]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x10]
	add ecx,4
	fstp qword ptr [esp+8]
	lea eax,[esp]
	push eax
	call edx
	mov eax,dword ptr [eax+4]
	sub eax,dword ptr [esp+0x18]
	mov dword ptr [esp],eax
	fild dword ptr [esp]
	fmul st(0),st
	fld qword ptr [esp+8]
	fmul st(0),st
	faddp st(1),st(0)
	fadd qword ptr [__real_3f50624dd2f1a9fc]
	call __CIsqrt
	fld qword ptr [__real_406f400000000000]
	fcomp
	fnstsw ax
	test ah,0x41
	jne Block3

 Block2:
	fstp st(0)
	mov eax,0x64
	add esp,0x10
	ret

 Block3:
	fld qword ptr [__real_408f400000000000]
	fcomp
	fnstsw ax
	test ah,5
	jp Block6

 Block4:
	fstp st(0)

 Block5:
	mov eax,0x28
	add esp,0x10
	ret

 Block6:
	fmul qword ptr [__real_3fb47ae147ae147b]
	fnstcw word ptr [esp]
	movzx eax,word ptr [esp]
	fsubr qword ptr [__real_405e000000000000]
	or eax,0xC00
	mov dword ptr [esp+8],eax
	fldcw word ptr [esp+8]
	fistp qword ptr [esp+8]
	mov eax,dword ptr [esp+8]
	fldcw word ptr [esp]
	add esp,0x10
	ret
}
}
// play_summon_sound
_SUB_EXCEPTION_HANDLER(567FA0)
// 9681B0
static uint8_t _SUB_567FA0_LOOKUP_TABLE_0[27] = {
0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 
};
__SUB(00567FA0, __cdecl, 80911,  void, long, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_567FA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	lea eax,[esp+0x18]
	push 0x8BE
	push eax
	mov dword ptr [esp+0x3C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,dword ptr [esp+0x3C]
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x40],1
	call ZXString16::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	cmp esi,0x1A
	ja Block4

 Block3:
	movzx edx,byte ptr [esi+_SUB_567FA0_LOOKUP_TABLE_0]
	cmp EDX, 0
je Block17
cmp EDX, 1
je Block4


 Block4:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov ecx,dword ptr [esp+0x14]
	push ecx
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x38],2
	call _xbstr_t::_ctor_1
	mov ebp,dword ptr [_D_G_RM]
	mov byte ptr [esp+0x34],3
	cmp ebp,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebx
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	mov dword ptr [esp+0x18],edx
	jmp Block9

 Block8:
	mov dword ptr [esp+0x18],ebx

 Block9:
	mov ecx,dword ptr [_D_VTEMPTY]
	mov edx,dword ptr [_D_VTEMPTY+4]
	mov esi,dword ptr [_D_VTEMPTY+8]
	mov edi,dword ptr [_D_VTEMPTY+12]
	mov ebx,dword ptr [ebp]
	lea eax,[esp+0x1C]
	push eax
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],edx
	mov dword ptr [eax+8],esi
	mov dword ptr [eax+0xC],edi
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebx+0x1C]
	push ecx
	mov dword ptr [eax+8],esi
	push ebp
	mov dword ptr [eax+0xC],edi
	call edx
	xor ebx,ebx
	cmp eax,ebx
	jl Block19

 Block10:
	cmp word ptr [esp+0x1C],bx
	je Block19

 Block11:
	mov ecx,dword ptr [esp+0x3C]
	cmp ecx,ebx
	je Block13

 Block12:
	call _xbstr_t::Data_t::Release

 Block13:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],bl
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov edx,dword ptr [esp+0x40]
	mov esi,dword ptr [esp+0x14]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push ebx
	push edx
	push esi
	call CSoundMan::PlaySE
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp esi,ebx
	je Block28

 Block18:
	add esi,0xFFFFFFF4
	push esi
	jmp Block27

 Block19:
	mov ecx,dword ptr [esp+0x3C]
	cmp ecx,ebx
	je Block21

 Block20:
	call _xbstr_t::Data_t::Release

 Block21:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],bl
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block28

 Block26:
	add eax,0xFFFFFFF4
	push eax

 Block27:
	call ZXString16::_Release
	add esp,4

 Block28:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret
}
}
// activate_web_site
__SUB(0055B150, __cdecl, 80824,  int32_t, const char*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	push 0
	call dword ptr [ZImports::_FindWindowA]
	mov esi,eax
	test esi,esi
	je Block3

 Block1:
	push esi
	call dword ptr [ZImports::_IsWindowEnabled]
	test eax,eax
	je Block3

 Block2:
	push ebx
	push ebp
	push edi
	push 0
	push esi
	call dword ptr [ZImports::_GetWindowThreadProcessId]
	mov ebx,dword ptr [ZImports::_GetCurrentThreadId]
	push 1
	mov edi,eax
	call ebx
	mov ebp,dword ptr [ZImports::_AttachThreadInput]
	push eax
	push edi
	call ebp
	push esi
	call dword ptr [ZImports::_BringWindowToTop]
	push 0
	call ebx
	push eax
	push edi
	call ebp
	push 9
	push esi
	call ShowWindow
	pop edi
	pop ebp
	pop ebx
	mov eax,1
	pop esi
	ret

 Block3:
	xor eax,eax
	pop esi
	ret
}
}
// play_game_sound
_SUB_EXCEPTION_HANDLER(567420)
__SUB(00567420, __cdecl, 80906,  void, const wchar_t*, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_567420
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	lea eax,[esp+8]
	push 0x8C3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esp+0x1C]
	mov eax,edx
	mov dword ptr [esp+0x14],0
	lea esi,[eax+2]
	lea esp,[esp]

 Block1:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block1

 Block2:
	sub eax,esi
	sar eax,1
	push eax
	push edx
	lea ecx,[esp+0x10]
	call ZXString16::_Cat
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+8]
	push 0
	push ecx
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push edx
	call CSoundMan::PlaySE
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// msgbox_com_error
_SUB_EXCEPTION_HANDLER(55CFC0)
__SUB(0055CFC0, __cdecl, 80852,  void, const _com_error&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55CFC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	call TSingleton<CMsgbox>::CreateInstance
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x10],esp
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,esi
	mov edi,eax
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x18],esp
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x38],0
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	push ecx
	mov ecx,dword ptr [esp+0x34]
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push ecx
	push eax
	mov byte ptr [esp+0x34],1
	call format_com_error
	add esp,8
	mov ecx,edi
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call CMsgbox::Init
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret
}
}
// DecodeFromJPEGBuffer
_SUB_EXCEPTION_HANDLER(55BE60)
__SUB(0055BE60, __cdecl, 80838,  int32_t, unsigned char*, unsigned long, unsigned char**, unsigned long*, unsigned long*, unsigned long*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x4E6C]
	mov eax,0x4E6C
	call __chkstk
	push 0xFFFFFFFE
	push 0xC3FD40
	push offset __except_handler4
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor dword ptr [ebp-8],eax
	xor eax,ebp
	mov dword ptr [ebp+0x4E68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0x10]
	mov dword ptr fs:[0],eax
	mov edi,dword ptr [ebp+0x4E74]
	mov eax,dword ptr [ebp+0x4E7C]
	mov dword ptr [ebp-0x28],eax
	mov ecx,dword ptr [ebp+0x4E80]
	mov dword ptr [ebp-0x30],ecx
	mov edx,dword ptr [ebp+0x4E84]
	mov dword ptr [ebp-0x24],edx
	mov eax,dword ptr [ebp+0x4E88]
	mov dword ptr [ebp-0x2C],eax
	xor esi,esi
	mov dword ptr [ebp-0x20],esi
	mov ebx,1
	mov dword ptr [ebp-0x1C],ebx
	mov dword ptr [ebp-4],esi
	lea ecx,[ebp]
	push ecx
	call ZImports::__ijlInit
	xor ecx,ecx
	cmp eax,ecx
	je Block2

 Block1:
	mov dword ptr [ebp-0x1C],ecx
	jmp Block12

 Block2:
	mov dword ptr [ebp+0x20],ecx
	mov dword ptr [ebp+0x24],edi
	mov edx,dword ptr [ebp+0x4E78]
	mov dword ptr [ebp+0x28],edx
	push ebx
	lea eax,[ebp]
	push eax
	call ZImports::__ijlRead
	xor edi,edi
	cmp eax,edi
	jne Block11

 Block3:
	mov ecx,dword ptr [ebp+0x34]
	mov eax,ecx
	sub eax,ebx
	je Block7

 Block4:
	sub eax,2
	je Block6

 Block5:
	mov eax,0xFF
	mov dword ptr [ebp+0x38],eax
	mov dword ptr [ebp+0x18],eax
	jmp Block9

 Block6:
	mov ecx,3
	mov dword ptr [ebp+0x38],ecx
	jmp Block8

 Block7:
	mov dword ptr [ebp+0x38],4
	mov ecx,3

 Block8:
	mov dword ptr [ebp+0x18],ebx

 Block9:
	mov dword ptr [ebp+0x14],ecx
	mov eax,dword ptr [ebp+0x30]
	imul eax,dword ptr [ebp+0x2C]
	imul eax,ecx
	push eax
	call _operator_new_array
	add esp,4
	mov esi,eax
	mov dword ptr [ebp-0x20],esi
	cmp eax,edi
	je Block11

 Block10:
	mov ecx,dword ptr [ebp+0x2C]
	mov dword ptr [ebp+8],ecx
	mov edx,dword ptr [ebp+0x30]
	mov dword ptr [ebp+0xC],edx
	mov dword ptr [ebp+0x10],edi
	mov dword ptr [ebp+4],eax
	push 3
	lea eax,[ebp]
	push eax
	call ZImports::__ijlRead
	cmp eax,edi
	je Block12

 Block11:
	mov dword ptr [ebp-0x1C],edi

 Block12:
	mov dword ptr [ebp-4],0xFFFFFFFE
	call __IJL_Uninitialize
	mov eax,edi
	mov ecx,dword ptr [ebp-0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x4E68]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x4E6C
	mov esp,ebp
	pop ebp
	ret
}
}
// CreateCanvasFromJpeg
_SUB_EXCEPTION_HANDLER(55C290)
__SUB(0055C290, __cdecl, 80842,  _x_com_ptr<IWzCanvas>, unsigned char*, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55C290
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x5C]
	mov dword ptr fs:[0],eax
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [esp+0x7C]
	lea edx,[esp+0x30]
	push edx
	mov edx,dword ptr [esp+0x7C]
	lea eax,[esp+0x24]
	push eax
	xor esi,esi
	push ecx
	mov dword ptr [esp+0x48],esi
	push edx
	mov dword ptr [esp+0x30],esi
	call DecodeFromJPEGBuffer
	add esp,0x18
	test eax,eax
	jne Block4

 Block1:
	mov eax,dword ptr [esp+0x18]
	cmp eax,esi
	je Block3

 Block2:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block3:
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret

 Block4:
	mov dword ptr [esp+0x14],esi
	lea eax,[esp+0x2C]
	push 0x3D0
	push eax
	mov dword ptr [esp+0x6C],esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	lea ecx,[esp+0x18]
	push ecx
	push eax
	mov byte ptr [esp+0x70],1
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x38]
	add esp,0xC
	mov byte ptr [esp+0x64],0
	cmp eax,esi
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x4C]
	push edx
	call edi
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	lea ecx,[esp+0x3C]
	mov bl,2
	push ecx
	mov byte ptr [esp+0x68],bl
	call edi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],3
	cmp ecx,esi
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea eax,[esp+0x4C]
	push eax
	mov eax,dword ptr [esp+0x28]
	lea edx,[esp+0x40]
	push edx
	mov edx,dword ptr [esp+0x30]
	push eax
	push edx
	call IWzCanvas::Create
	mov edi,8
	mov byte ptr [esp+0x64],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x3C],di
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,esi
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x3C]
	push ecx
	call ebx

 Block16:
	mov byte ptr [esp+0x64],0
	cmp word ptr [esp+0x4C],di
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,esi
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[esp+0x4C]
	push eax
	call ebx

 Block20:
	mov eax,dword ptr [esp+0x14]
	cmp eax,esi
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x1C]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x38]
	mov dword ptr [esp+0x24],esi
	call eax
	cmp eax,esi
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block24:
	mov eax,dword ptr [esp+0x14]
	cmp eax,esi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x20]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x3C]
	mov dword ptr [esp+0x28],esi
	call eax
	cmp eax,esi
	jge Block28

 Block27:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block28:
	mov eax,dword ptr [esp+0x14]
	cmp eax,esi
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x24]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [esp+0x2C],esi
	call eax
	cmp eax,esi
	jge Block32

 Block31:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block32:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x1C]
	lea eax,[edx+ecx-1]
	xor edx,edx
	div ecx
	mov dword ptr [esp+0x2C],eax
	mov eax,dword ptr [esp+0x14]
	cmp eax,esi
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x24]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x48]
	mov dword ptr [esp+0x2C],esi
	call eax
	cmp eax,esi
	jge Block36

 Block35:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block36:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x20]
	lea eax,[edx+ecx-1]
	xor edx,edx
	div ecx
	mov dword ptr [esp+0x24],esi
	cmp eax,esi
	mov dword ptr [esp+0x34],eax
	jle Block48

 Block37:
	xor ebp,ebp

 Block38:
	xor ebx,ebx
	cmp dword ptr [esp+0x2C],esi
	jle Block47

 Block39:
	xor edi,edi

 Block40:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,esi
	je Block11

 Block41:
	push ebp
	push edi
	lea eax,[esp+0x38]
	push eax
	call IWzCanvas::GetrawCanvas
	mov ecx,dword ptr [esp+0x28]
	mov esi,dword ptr [esp+0x30]
	push ecx
	push ebp
	push edi
	push ecx
	mov eax,esp
	mov byte ptr [esp+0x74],4
	mov dword ptr [esp+0x48],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block43

 Block42:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block43:
	mov ecx,dword ptr [esp+0x28]
	push ecx
	call _anon__CopyDibToRawCanvas
	add esp,0x14
	mov byte ptr [esp+0x64],0
	test esi,esi
	je Block45

 Block44:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block45:
	add edi,dword ptr [esp+0x1C]
	inc ebx
	xor esi,esi
	cmp ebx,dword ptr [esp+0x2C]
	jl Block40

 Block46:
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x20]

 Block47:
	mov edx,dword ptr [esp+0x24]
	inc edx
	add ebp,ecx
	cmp edx,eax
	mov dword ptr [esp+0x24],edx
	jl Block38

 Block48:
	mov ecx,dword ptr [esp+0x18]
	push ecx
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free
	mov eax,dword ptr [esp+0x14]
	mov edi,dword ptr [esp+0x6C]
	mov dword ptr [edi],eax
	cmp eax,esi
	je Block50

 Block49:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax
	mov eax,dword ptr [esp+0x14]

 Block50:
	mov dword ptr [esp+0x64],0xFFFFFFFF
	cmp eax,esi
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	mov eax,edi
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret
}
}
// play_quest_sound
_SUB_EXCEPTION_HANDLER(568330)
__SUB(00568330, __cdecl, 80912,  void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_568330
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
	lea eax,[esp+0xC]
	push 0x8C0
	push eax
	mov dword ptr [esp+0x20],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x20]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x10]
	push edx
	mov byte ptr [esp+0x24],1
	call ZXString16::Format
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
	mov esi,dword ptr [esp+8]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	push 0x64
	push esi
	call CSoundMan::PlaySE
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test esi,esi
	je Block4

 Block3:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret
}
}
// DrawGrayImage
_SUB_EXCEPTION_HANDLER(55F080)
__SUB(0055F080, __cdecl, 80871,  void, NakedParam<_x_com_ptr<IWzCanvas>>, NakedParam<ZXString16>, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55F080
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x74]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x44]
	push eax
	mov dword ptr [esp+0x80],1
	call esi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebp,ebp
	add esp,8
	cmp eax,ebp
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x80],2
	call esi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov eax,dword ptr [esp+0x88]
	push ebp
	push ebp
	lea ecx,[esp+0x4C]
	push ecx
	lea edx,[esp+0x40]
	push edx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x94],3
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x90],4
	cmp dword ptr [_D_G_RM],ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x78]
	push ecx
	mov byte ptr [esp+0x94],3
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x84],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edi,8
	mov byte ptr [esp+0x7C],7
	cmp word ptr [esp+0x64],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	cmp eax,ebp
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0x7C],8
	cmp word ptr [esp+0x34],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [esp+0x7C],9
	cmp word ptr [esp+0x44],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov dword ptr [esp+0x14],ebp
	lea edx,[esp+0x20]
	push 0x3D0
	push edx
	mov byte ptr [esp+0x84],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea ecx,[esp+0x18]
	push ecx
	push eax
	mov byte ptr [esp+0x88],0xB
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x7C],0xA
	cmp eax,ebp
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	lea edx,[esp+0x54]
	push edx
	call esi
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	lea ecx,[esp+0x24]
	mov bl,0xC
	push ecx
	mov byte ptr [esp+0x80],bl
	call esi
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	mov edi,dword ptr [esp+0x18]
	mov byte ptr [esp+0x7C],0xD
	cmp edi,ebp
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x1C]
	push ecx
	push edi
	mov dword ptr [esp+0x24],ebp
	call edx
	cmp eax,ebp
	jge Block31

 Block30:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block31:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	mov esi,dword ptr [esp+0x1C]
	lea ecx,[esp+0x20]
	push ecx
	push edi
	mov dword ptr [esp+0x28],ebp
	call edx
	cmp eax,ebp
	jge Block33

 Block32:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block33:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea eax,[esp+0x54]
	push eax
	mov eax,dword ptr [esp+0x24]
	lea edx,[esp+0x28]
	push edx
	push esi
	push eax
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0x7C],bl
	cmp word ptr [esp+0x24],si
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebp
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov byte ptr [esp+0x7C],0xA
	cmp word ptr [esp+0x54],si
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebp
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov edx,3
	mov word ptr [esp+0x24],dx
	mov edx,0xFF
	mov dword ptr [esp+0x2C],edx
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x7C],0xE
	cmp ecx,ebp
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	mov ebp,dword ptr [esp+0x24]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x38]
	push edi
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	push 0
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebx+0x80]
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block47

 Block46:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block47:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x7C],0xA
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	push ecx
	mov ecx,dword ptr [esp+0x18]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block53

 Block52:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block53:
	call make_gray_canvas
	mov edx,dword ptr [esp+0x98]
	mov ecx,3
	add esp,4
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],edx
	mov ecx,dword ptr [esp+0x84]
	mov byte ptr [esp+0x7C],0xF
	test ecx,ecx
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	mov ebp,dword ptr [esp+0x24]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x38]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0xA0]
	push eax
	mov eax,dword ptr [esp+0xA0]
	push edx
	push eax
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	call ecx
	test eax,eax
	jge Block57

 Block56:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block57:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x7C],0xA
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x7C],9
	test eax,eax
	je Block63

 Block62:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block63:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0x80],1
	call ecx
	mov eax,dword ptr [esp+0x84]
	mov byte ptr [esp+0x7C],0
	test eax,eax
	je Block65

 Block64:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block65:
	mov eax,dword ptr [esp+0x88]
	mov dword ptr [esp+0x7C],0xFFFFFFFF
	test eax,eax
	je Block67

 Block66:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block67:
	mov ecx,dword ptr [esp+0x74]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x6C
	ret
}
}
// UOL_Index
_SUB_EXCEPTION_HANDLER(565FB0)
__SUB(00565FB0, __cdecl, 80894,  ZXString16, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_565FB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x28]
	push eax
	lea ecx,[esp+0x14]
	push ecx
	mov dword ptr [esp+0x14],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+8],0
	mov edx,dword ptr [esp+0x2C]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea ecx,[esp+0x10]
	push offset _S_SD
	push ecx
	mov byte ptr [esp+0x2C],2
	call ZXString16::Format
	mov esi,dword ptr [esp+0x34]
	add esp,0x10
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString16::op_assign
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0xC],1
	mov byte ptr [esp+0x1C],1
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x18
	ret
}
}
// separate_string_by_line
_SUB_EXCEPTION_HANDLER(564BC0)
__SUB(00564BC0, __cdecl, 80879,  void, ZArray<ZXString<char> >&, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_564BC0
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
	mov edi,dword ptr [esp+0x20]
	mov ecx,edi
	mov dword ptr [esp+0x18],0
	call ZArray<ZXString<char>>::RemoveAll
	lea eax,[esp+0x24]
	push eax
	push 1
	mov ecx,edi
	call ZArray<ZXString<char>>::_Alloc
	xor esi,esi

 Block1:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax-4]
	jmp Block4

 Block3:
	xor ecx,ecx

 Block4:
	cmp esi,ecx
	jge Block13

 Block5:
	mov cl,byte ptr [esi+eax]
	cmp cl,0xD
	jne Block8

 Block6:
	cmp byte ptr [esi+eax+1],0xA
	jne Block8

 Block7:
	lea ecx,[esp+0x24]
	push ecx
	jmp Block11

 Block8:
	cmp cl,0x5C
	jne Block12

 Block9:
	cmp byte ptr [esi+eax+1],0x6E
	jne Block12

 Block10:
	lea edx,[esp+0x24]
	push edx

 Block11:
	push 0
	mov ecx,edi
	call ZArray<ZXString<char>>::GetCount
	inc eax
	push eax
	mov ecx,edi
	call ZArray<ZXString<char>>::_Realloc
	inc esi
	inc esi
	jmp Block1

 Block12:
	push 1
	lea eax,[esp+0x10]
	mov byte ptr [esp+0x10],cl
	push eax
	mov ecx,edi
	call ZArray<ZXString<char>>::GetCount
	mov ecx,dword ptr [edi]
	lea ecx,[ecx+eax*4-4]
	call ZXString<char>::_Cat
	inc esi
	jmp Block1

 Block13:
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// get_labeled_string
_SUB_EXCEPTION_HANDLER(55D9D0)
__SUB(0055D9D0, __cdecl, 80863,  ZXString<char>, NakedParam<_x_com_ptr<IWzProperty>>, long, NakedParam<Ztl_bstr_t>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55D9D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
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
	mov dword ptr [ebp-0x18],edi
	mov dword ptr [ebp-4],1
	mov dword ptr [ebp-0x1C],edi
	lea eax,[edi+0x20]
	mov byte ptr [ebp-4],3
	call __chkstk
	mov eax,esp
	push edi
	push edi
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x10]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],4
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x3C]
	push edx
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov ebx,8
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x3C],bx
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	cmp eax,edi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov esi,dword ptr [ebp-0x14]
	cmp esi,edi
	sete al
	test al,al
	je Block14

 Block10:
	mov edi,dword ptr [ebp+8]
	lea edx,[ebp-0x1C]
	push edx
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString<char>::op_assign
	mov dword ptr [ebp-0x18],1
	mov byte ptr [ebp-4],3
	test esi,esi
	je Block12

 Block11:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block12:
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block26

 Block13:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block26

 Block14:
	push ecx
	mov ecx,dword ptr [ebp+0x14]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x14]
	mov dword ptr [ebp-0x40],esp
	cmp eax,edi
	je Block16

 Block15:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block16:
	mov byte ptr [ebp-4],bl
	cmp esi,edi
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea edx,[ebp-0x2C]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x2C],bx
	je Block20

 Block19:
	mov eax,offset _S___3

 Block20:
	mov edi,dword ptr [ebp+8]
	push 0xFFFFFFFF
	push eax
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString<char>::AssignWideStr
	mov dword ptr [ebp-0x18],1
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x2C],bx
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],3
	call eax
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov ecx,dword ptr [ebp+0x14]
	test ecx,ecx
	je Block28

 Block27:
	call _xbstr_t::Data_t::Release

 Block28:
	mov eax,edi
	lea esp,[ebp-0x50]
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
// play_item_sound
_SUB_EXCEPTION_HANDLER(566840)
__SUB(00566840, __cdecl, 80902,  void, long, SE_TYPE) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_566840
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	xor ebp,ebp
	mov dword ptr [esp+0x10],ebp
	cmp dword ptr [esp+0x60],0x29
	mov dword ptr [esp+0x54],ebp
	jne Block37

 Block1:
	lea eax,[esp+0x60]
	push 0x1A87
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x58],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x54],0
	cmp eax,ebp
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	mov dword ptr [esp+0x60],ebp
	lea ecx,[esp+0x14]
	push 0x8BB
	push ecx
	mov byte ptr [esp+0x5C],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esp+0x5C]
	push edx
	push edi
	push eax
	lea eax,[esp+0x6C]
	push eax
	mov byte ptr [esp+0x64],3
	call ZXString16::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0x10
	mov byte ptr [esp+0x54],2
	cmp eax,ebp
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x58],4
	call esi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	push ebp
	push ebp
	lea edx,[esp+0x34]
	push edx
	mov edx,dword ptr [esp+0x6C]
	lea eax,[esp+0x28]
	push eax
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x6C],5
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x68],6
	cmp dword ptr [_D_G_RM],ebp
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[esp+0x50]
	mov byte ptr [esp+0x68],5
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
	call _x_com_ptr<IWzSound>::_QueryUnknown
	cmp eax,ebp
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	mov byte ptr [esp+0x54],9
	cmp word ptr [esp+0x3C],bp
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[esp+0x3C]
	push edx
	call esi

 Block18:
	mov byte ptr [esp+0x54],0xA
	cmp word ptr [esp+0x1C],bp
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x1C]
	push ecx
	call esi

 Block22:
	mov byte ptr [esp+0x54],0xB
	cmp word ptr [esp+0x2C],bp
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x2C]
	push eax
	call esi

 Block26:
	mov esi,dword ptr [esp+0x14]
	test esi,esi
	sete al
	test al,al
	je Block30

 Block27:
	mov eax,0x431BDE83
	imul edi
	sar edx,0x12
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,2
	jne Block30

 Block28:
	lea edx,[esp+0x18]
	push 0x8BB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	mov ebp,dword ptr [esp+0x10]
	mov eax,0x68DB8BAD
	imul edi
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x2710
	push ebp
	push eax
	push ecx
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0x64],0xC
	call ZXString16::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0x10
	mov byte ptr [esp+0x54],0xB
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block31

 Block30:
	mov ebp,dword ptr [esp+0x10]

 Block31:
	mov edi,dword ptr [esp+0x60]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	push 0x64
	push edi
	call CSoundMan::PlaySE
	mov byte ptr [esp+0x54],2
	test esi,esi
	je Block33

 Block32:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block33:
	mov byte ptr [esp+0x54],0
	test edi,edi
	je Block35

 Block34:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block35:
	mov dword ptr [esp+0x54],0xFFFFFFFF
	test ebp,ebp
	je Block37

 Block36:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block37:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x48
	ret
}
}
// separate_channelName
_SUB_EXCEPTION_HANDLER(55F7E0)
__SUB(0055F7E0, __cdecl, 80875,  int32_t, NakedParam<ZXString<char>>, ZXString<char>&, ZXString<char>&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55F7E0
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
	push 0
	push 0x2D
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x20],0
	call ZXString<char>::Find__1
	mov esi,eax
	push esi
	push 0
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x2C]
	call ZXString<char>::Substring
	mov edi,dword ptr [esp+0x24]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x1C],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	test esi,esi
	jg Block4

 Block3:
	lea ecx,[esp+0x24]
	push 0x8B6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x28]
	push offset _S_1__1
	push eax
	push esi
	mov byte ptr [esp+0x24],2
	call ZXString<char>::Format
	add esp,0xC
	jmp Block9

 Block4:
	inc esi
	cmp dword ptr [esp+0x2C],0
	push 0xFFFFFFFF
	lea ecx,[esp+0x24]
	push esi
	je Block8

 Block5:
	lea edx,[esp+0x14]
	push edx
	call ZXString<char>::Substring
	mov esi,eax
	lea eax,[esp+0x24]
	push 0x8B6
	push eax
	mov byte ptr [esp+0x20],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x28]
	push ecx
	push eax
	push esi
	mov byte ptr [esp+0x24],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x18],3
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov eax,dword ptr [esp+0xC]
	jmp Block10

 Block8:
	lea edx,[esp+0x2C]
	push edx
	call ZXString<char>::Substring
	mov esi,dword ptr [esp+0x28]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x1C],5
	call ZXString<char>::op_assign

 Block9:
	mov eax,dword ptr [esp+0x24]

 Block10:
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block18

 Block13:
	cmp byte ptr [eax],0
	je Block18

 Block14:
	push 1
	push 0
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push eax
	call __strupr
	mov eax,dword ptr [edi]
	add esp,4
	test eax,eax
	je Block16

 Block15:
	mov eax,dword ptr [eax-4]
	jmp Block17

 Block16:
	xor eax,eax

 Block17:
	push eax
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer

 Block18:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block24

 Block19:
	cmp byte ptr [eax],0
	je Block24

 Block20:
	push 1
	push 0
	mov ecx,esi
	call ZXString<char>::GetBuffer
	push eax
	call __strupr
	mov eax,dword ptr [esi]
	add esp,4
	test eax,eax
	je Block22

 Block21:
	mov eax,dword ptr [eax-4]
	jmp Block23

 Block22:
	xor eax,eax

 Block23:
	push eax
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer

 Block24:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov eax,1
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// play_ui_sound
_SUB_EXCEPTION_HANDLER(5666E0)
__SUB(005666E0, __cdecl, 80899,  void, const wchar_t*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5666E0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	lea eax,[esp+8]
	push 0x8B9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esp+0x1C]
	mov eax,edx
	mov dword ptr [esp+0x14],0
	lea esi,[eax+2]
	lea esp,[esp]

 Block1:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block1

 Block2:
	sub eax,esi
	sar eax,1
	push eax
	push edx
	lea ecx,[esp+0x10]
	call ZXString16::_Cat
	mov ecx,dword ptr [esp+8]
	push 0
	push 0x64
	push ecx
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	call CSoundMan::PlaySE
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// save_error_log
_SUB_EXCEPTION_HANDLER(55C800)
__SUB(0055C800, __cdecl, 80843,  void, const ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55C800
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x8F4
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x8F0],eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x908]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x918]
	xor ebx,ebx
	push ebx
	push 0x80000000
	push 4
	push ebx
	push ebx
	push 0x40000000
	mov dword ptr [esp+0x38],eax
	call CWvsApp::GetExceptionFileName
	push eax
	call CreateFileA
	mov edi,eax
	cmp edi,0xFFFFFFFF
	je Block11

 Block1:
	push 2
	push ebx
	push ebx
	push edi
	call SetFilePointer
	mov esi,dword ptr [TSingleton<CConfig>::ms_pInstance]
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_GlobalMemoryStatus]
	call dword ptr [ZImports::_GetCurrentProcessId]
	push eax
	push ebx
	push 0x410
	call dword ptr [ZImports::_OpenProcess]
	push 0x28
	lea edx,[esp+0x4C]
	mov ebp,eax
	push edx
	push ebp
	call GetProcessMemoryInfo
	push ebp
	call dword ptr [ZImports::_CloseHandle]
	mov dword ptr [esp+0x14],ebx
	lea eax,[esp+0x70]
	push eax
	mov dword ptr [esp+0x914],ebx
	mov dword ptr [esp+0x74],0x94
	call GetVersionExA
	lea ecx,[esp+0x84]
	push ecx
	lea ecx,[esp+0x18]
	call ZXString<char>::AssignCStr
	push offset _S_ISWOW64PROCESS
	push offset _S_KERNEL32DLL
	call dword ptr [ZImports::_GetModuleHandleA]
	push eax
	call MyGetProcAddress
	mov ebp,eax
	mov dword ptr [esp+0x18],ebx
	cmp ebp,ebx
	je Block3

 Block2:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_GetCurrentProcess]
	push eax
	call ebp

 Block3:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block5

 Block4:
	cmp byte ptr [eax],0
	jne Block6

 Block5:
	mov ebx,offset _S_NONE
	jmp Block7

 Block6:
	mov ebx,eax

 Block7:
	lea eax,[esp+0x24]
	push eax
	mov ecx,esi
	call CConfig::GetSessionCharacterName
	mov ebp,eax
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [ecx]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x914],1
	call CConfig::GetSessionFieldID
	push eax
	mov ecx,esi
	call CConfig::GetSessionChannelID
	push eax
	mov ecx,esi
	call CConfig::GetSessionWorldID
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x88]
	push eax
	mov eax,dword ptr [ebp]
	mov ebp,dword ptr [ZImports::_wsprintfA]
	push eax
	mov eax,dword ptr [esp+0x8C]
	push 0x5F
	push ecx
	mov ecx,dword ptr [esp+0x90]
	push ebx
	push edx
	push eax
	push ecx
	lea edx,[esp+0x130]
	push offset _S_OSDDDSX64DVERDCH
	push edx
	call ebp
	mov eax,dword ptr [esp+0x58]
	add esp,0x34
	mov byte ptr [esp+0x910],0
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	call dword ptr [ZImports::_timeGetTime]
	mov ecx,eax
	sub ecx,dword ptr [esi+0x634]
	mov eax,0x45E7B273
	mul ecx
	mov eax,dword ptr [esp+0x44]
	mov ecx,dword ptr [esp+0x30]
	shr edx,0xE
	push edx
	mov edx,dword ptr [esp+0x44]
	push edx
	mov edx,dword ptr [esp+0x3C]
	push eax
	mov eax,dword ptr [esp+0x60]
	push ecx
	push edx
	push eax
	lea ecx,[esp+0x51C]
	push offset _S_LULULULULUPLAYTI
	push ecx
	call ebp
	add esp,0x20
	push 0
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x10C]
	push eax
	call lstrlenA
	push eax
	lea ecx,[esp+0x110]
	push ecx
	push edi
	call WriteFile
	push 0
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x50C]
	push eax
	call lstrlenA
	push eax
	lea ecx,[esp+0x510]
	push ecx
	push edi
	call WriteFile
	push edi
	call CloseHandle
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x910],0xFFFFFFFF
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov ecx,dword ptr [esp+0x908]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov ecx,dword ptr [esp+0x8F0]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x900
	ret
}
}
// make_gray_raw_canvas
_SUB_EXCEPTION_HANDLER(55B400)
__SUB(0055B400, __cdecl, 80831,  void, NakedParam<_x_com_ptr<IWzRawCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55B400
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],0
	test eax,eax
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x18]
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_312126f0_c399_4111_8eab_0f96a30b6b7c
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov ecx,dword ptr [esp+0x3C]
	mov esi,dword ptr [esp+0x14]
	mov ebp,esi
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x20]
	push eax
	call IWzRawCanvas::_LockAddress
	mov edi,dword ptr [esp+0x24]
	mov byte ptr [esp+0x34],1
	test esi,esi
	je Block10

 Block7:
	mov esi,edi
	add edi,dword ptr [esp+0x18]
	dec ebp
	cmp esi,edi
	jae Block9

 Block8:
	movzx ecx,word ptr [esi]
	movzx eax,cx
	mov edx,eax
	shr edx,4
	mov ebx,eax
	and edx,0xF
	imul edx,0x35
	shr ebx,8
	and ebx,0xF
	imul ebx,0x25
	add edx,ebx
	and eax,0xF
	lea eax,[eax+eax*4]
	lea edx,[edx+eax*2]
	mov eax,0x51EB851F
	imul edx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	movzx ax,al
	and ecx,0xF000
	add esi,2
	mov edx,eax
	shl edx,4
	or edx,eax
	shl edx,4
	or edx,ecx
	or edx,eax
	mov word ptr [esi-2],dx
	cmp esi,edi
	jb Block8

 Block9:
	test ebp,ebp
	jne Block7

 Block10:
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x20]
	push 0
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block14

 Block13:
	push offset __GUID_312126f0_c399_4111_8eab_0f96a30b6b7c
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],0
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block20

 Block19:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block20:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret
}
}
// get_basic_font
_SUB_EXCEPTION_HANDLER(55F9D0)
__SUB(0055F9D0, __cdecl, 80877,  _x_com_ptr<IWzFont>, FONT_TYPE) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55F9D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x810
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x81C]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [esp+0x830]
	lea esi,[ecx*4+_D_SPFONTBASIC]
	mov dword ptr [esp+0x10],0
	mov eax,dword ptr [esi]
	test eax,eax
	je Block2

 Block1:
	mov esi,dword ptr [esp+0x82C]
	mov dword ptr [esi],eax
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	mov eax,esi
	mov ecx,dword ptr [esp+0x81C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x81C
	ret

 Block2:
	cmp ecx,0x61
	ja Block300

 Block3:
	cmp ECX, 0
je Block4
cmp ECX, 1
je Block9
cmp ECX, 2
je Block15
cmp ECX, 3
je Block18
cmp ECX, 4
je Block21
cmp ECX, 5
je Block24
cmp ECX, 6
je Block27
cmp ECX, 7
je Block30
cmp ECX, 8
je Block33
cmp ECX, 9
je Block36
cmp ECX, 10
je Block39
cmp ECX, 11
je Block42
cmp ECX, 12
je Block45
cmp ECX, 13
je Block48
cmp ECX, 14
je Block12
cmp ECX, 15
je Block51
cmp ECX, 16
je Block54
cmp ECX, 17
je Block57
cmp ECX, 18
je Block60
cmp ECX, 19
je Block63
cmp ECX, 20
je Block66
cmp ECX, 21
je Block69
cmp ECX, 22
je Block72
cmp ECX, 23
je Block75
cmp ECX, 24
je Block78
cmp ECX, 25
je Block81
cmp ECX, 26
je Block84
cmp ECX, 27
je Block87
cmp ECX, 28
je Block90
cmp ECX, 29
je Block93
cmp ECX, 30
je Block96
cmp ECX, 31
je Block99
cmp ECX, 32
je Block102
cmp ECX, 33
je Block105
cmp ECX, 34
je Block108
cmp ECX, 35
je Block111
cmp ECX, 36
je Block114
cmp ECX, 37
je Block117
cmp ECX, 38
je Block120
cmp ECX, 39
je Block123
cmp ECX, 40
je Block126
cmp ECX, 41
je Block129
cmp ECX, 42
je Block132
cmp ECX, 43
je Block135
cmp ECX, 44
je Block138
cmp ECX, 45
je Block141
cmp ECX, 46
je Block144
cmp ECX, 47
je Block147
cmp ECX, 48
je Block150
cmp ECX, 49
je Block153
cmp ECX, 50
je Block156
cmp ECX, 51
je Block159
cmp ECX, 52
je Block162
cmp ECX, 53
je Block165
cmp ECX, 54
je Block168
cmp ECX, 55
je Block171
cmp ECX, 56
je Block174
cmp ECX, 57
je Block177
cmp ECX, 58
je Block180
cmp ECX, 59
je Block183
cmp ECX, 60
je Block186
cmp ECX, 61
je Block189
cmp ECX, 62
je Block192
cmp ECX, 63
je Block195
cmp ECX, 64
je Block198
cmp ECX, 65
je Block201
cmp ECX, 66
je Block204
cmp ECX, 67
je Block207
cmp ECX, 68
je Block210
cmp ECX, 69
je Block213
cmp ECX, 70
je Block219
cmp ECX, 71
je Block222
cmp ECX, 72
je Block216
cmp ECX, 73
je Block246
cmp ECX, 74
je Block249
cmp ECX, 75
je Block225
cmp ECX, 76
je Block228
cmp ECX, 77
je Block231
cmp ECX, 78
je Block234
cmp ECX, 79
je Block237
cmp ECX, 80
je Block240
cmp ECX, 81
je Block243
cmp ECX, 82
je Block252
cmp ECX, 83
je Block255
cmp ECX, 84
je Block258
cmp ECX, 85
je Block261
cmp ECX, 86
je Block264
cmp ECX, 87
je Block267
cmp ECX, 88
je Block270
cmp ECX, 89
je Block273
cmp ECX, 90
je Block276
cmp ECX, 91
je Block279
cmp ECX, 92
je Block282
cmp ECX, 93
je Block285
cmp ECX, 94
je Block288
cmp ECX, 95
je Block291
cmp ECX, 96
je Block294
cmp ECX, 97
je Block297


 Block4:
	lea eax,[esp+0x190]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x19C]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	push offset _D_VTMISSING
	lea ecx,[esp+0x200]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x1FC]
	push ecx
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,1
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],2
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x1FC]

 Block7:
	call Ztl_variant_t::~Ztl_variant_t

 Block8:
	push esi
	mov esi,dword ptr [esp+0x830]
	mov ecx,esi
	call _x_com_ptr<IWzFont>::_ctor_copy
	mov eax,esi
	mov ecx,dword ptr [esp+0x81C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x81C
	ret

 Block9:
	lea eax,[esp+0x68]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],3
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x74]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	push offset _D_VTMISSING
	lea ecx,[esp+0x220]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x21C]
	push ecx
	push 0xFF000000
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,4
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],5
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x21C]
	jmp Block7

 Block12:
	lea eax,[esp+0x70]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],6
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x7C]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block14:
	push offset _D_VTMISSING
	lea ecx,[esp+0x520]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x51C]
	push ecx
	push 0xFF674B36
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,7
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],8
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x51C]
	jmp Block7

 Block15:
	lea eax,[esp+0x1C]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],9
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block17:
	push offset _D_VTMISSING
	lea ecx,[esp+0x240]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x23C]
	push ecx
	push 0xFF404040
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0xA
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xB
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x23C]
	jmp Block7

 Block18:
	lea eax,[esp+0x1A0]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xC
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1AC]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block20:
	push offset _D_VTMISSING
	lea ecx,[esp+0x6A0]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x69C]
	push ecx
	push 0xFFFFFF20
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0xD
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xE
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x69C]
	jmp Block7

 Block21:
	lea eax,[esp+0x24]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xF
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	push offset _D_VTMISSING
	lea ecx,[esp+0x260]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x25C]
	push ecx
	push 0xFF2000FF
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x10
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x11
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x25C]
	jmp Block7

 Block24:
	lea eax,[esp+0x1A8]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x12
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1B4]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block26:
	push offset _D_VTMISSING
	lea ecx,[esp+0x540]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x53C]
	push ecx
	push 0xFF64B4F0
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x13
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x14
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x53C]
	jmp Block7

 Block27:
	lea eax,[esp+0x2C]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x15
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x38]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block29:
	push offset _D_VTMISSING
	lea ecx,[esp+0x280]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x27C]
	push ecx
	push 0xFFFF2020
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x16
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x17
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x27C]
	jmp Block7

 Block30:
	lea eax,[esp+0x1B0]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x18
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1BC]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block32:
	push offset _D_VTMISSING
	lea ecx,[esp+0x760]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x75C]
	push ecx
	push 0xFF28C99B
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x19
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x1A
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x75C]
	jmp Block7

 Block33:
	lea eax,[esp+0x34]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x1B
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x40]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block35:
	push offset _D_VTMISSING
	lea ecx,[esp+0x2A0]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x29C]
	push ecx
	push 0xFFFF99CC
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x1C
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x1D
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x29C]
	jmp Block7

 Block36:
	lea eax,[esp+0x1B8]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x1E
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1C4]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block38:
	push offset _D_VTMISSING
	lea ecx,[esp+0x560]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x55C]
	push ecx
	push 0xFFFF9900
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x1F
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x20
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x55C]
	jmp Block7

 Block39:
	lea eax,[esp+0x3C]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x21
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x48]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block41:
	push offset _D_VTMISSING
	lea ecx,[esp+0x2C0]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x2BC]
	push ecx
	push 0xFFFF3399
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x22
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x23
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x2BC]
	jmp Block7

 Block42:
	lea eax,[esp+0x1C0]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x24
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1CC]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block44:
	push offset _D_VTMISSING
	lea ecx,[esp+0x6C0]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x6BC]
	push ecx
	push 0xFF006699
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x25
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x26
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x6BC]
	jmp Block7

 Block45:
	lea eax,[esp+0x44]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x27
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x50]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block47:
	push offset _D_VTMISSING
	lea ecx,[esp+0x2E0]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x2DC]
	push ecx
	push 0xFFCC0066
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x28
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x29
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x2DC]
	jmp Block7

 Block48:
	lea eax,[esp+0x1C8]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x2A
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1D4]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block50:
	push offset _D_VTMISSING
	lea ecx,[esp+0x580]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x57C]
	push ecx
	push 0xFF336600
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x2B
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x2C
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x57C]
	jmp Block7

 Block51:
	lea eax,[esp+0x4C]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x2D
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x58]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block53:
	push offset _D_VTMISSING
	lea ecx,[esp+0x300]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x2FC]
	push ecx
	push 0xFFE9C4FF
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x2E
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x2F
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x2FC]
	jmp Block7

 Block54:
	lea eax,[esp+0x1D0]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x30
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1DC]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block56:
	push offset _D_VTMISSING
	lea ecx,[esp+0x7C0]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x7BC]
	push ecx
	push 0xFFA4F0FF
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x31
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x32
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x7BC]
	jmp Block7

 Block57:
	lea eax,[esp+0x54]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x33
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x60]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block59:
	push offset _D_VTMISSING
	lea ecx,[esp+0x320]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x31C]
	push ecx
	push 0xFFBBBBBB
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x34
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x35
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x31C]
	jmp Block7

 Block60:
	lea eax,[esp+0x1D8]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x36
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1E4]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block62:
	push offset _D_VTMISSING
	lea ecx,[esp+0x5A0]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x59C]
	push ecx
	push 0xFF333333
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x37
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x38
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x59C]
	jmp Block7

 Block63:
	lea eax,[esp+0x5C]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x39
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x68]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block65:
	push offset _D_VTMISSING
	lea ecx,[esp+0x340]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x33C]
	push ecx
	push 0xFF555555
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x3A
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x3B
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x33C]
	jmp Block7

 Block66:
	lea eax,[esp+0x1E0]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x3C
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1EC]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block68:
	push offset _D_VTMISSING
	lea ecx,[esp+0x6E0]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x6DC]
	push ecx
	push 0xFF000000
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x3D
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x3E
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x6DC]
	jmp Block7

 Block69:
	lea eax,[esp+0x64]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x3F
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x70]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block71

 Block70:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block71:
	lea ecx,[esp+0x1E8]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x360]
	mov dword ptr [esp+0x828],0x40
	call Ztl_variant_t::_ctor_3
	lea edx,[esp+0x35C]
	push edx
	push 0xFF000000
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0x41
	push eax
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x42
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x35C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x1E8]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block72:
	lea ecx,[esp+0x6C]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x43
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x78]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block74:
	push offset _D_VTMISSING
	lea ecx,[esp+0x5C0]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x5BC]
	push edx
	push 0xFFFFFFFF
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x44
	push eax
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x45
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x5BC]
	jmp Block7

 Block75:
	lea ecx,[esp+0x1F0]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x46
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1FC]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block77

 Block76:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block77:
	lea edx,[esp+0x74]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x380]
	mov dword ptr [esp+0x828],0x47
	call Ztl_variant_t::_ctor_3
	lea eax,[esp+0x37C]
	push eax
	push 0xFFFFFFFF
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0x48
	push ecx
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x49
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x37C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x74]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block78:
	lea edx,[esp+0x1F8]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x4A
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x204]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block80

 Block79:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block80:
	push offset _D_VTMISSING
	lea ecx,[esp+0x780]
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x77C]
	push eax
	push 0xFF555555
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x4B
	push ecx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x4C
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x77C]
	jmp Block7

 Block81:
	lea edx,[esp+0x7C]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x4D
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x88]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block83

 Block82:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block83:
	lea eax,[esp+0x13C]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x3A0]
	mov dword ptr [esp+0x828],0x4E
	call Ztl_variant_t::_ctor_3
	lea ecx,[esp+0x39C]
	push ecx
	push 0xFF555555
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0x4F
	push edx
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x50
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x39C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x13C]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block84:
	lea eax,[esp+0x84]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x51
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x90]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block86

 Block85:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block86:
	push offset _D_VTMISSING
	lea ecx,[esp+0x5E0]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x5DC]
	push ecx
	push 0xFF777777
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x52
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x53
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x5DC]
	jmp Block7

 Block87:
	lea eax,[esp+0x19C]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x54
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1A8]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block89

 Block88:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block89:
	lea ecx,[esp+0x8C]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x3C0]
	mov dword ptr [esp+0x828],0x55
	call Ztl_variant_t::_ctor_3
	lea edx,[esp+0x3BC]
	push edx
	push 0xFF777777
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0x56
	push eax
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x57
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x3BC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x8C]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block90:
	lea ecx,[esp+0x144]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x58
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x150]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block92

 Block91:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block92:
	push offset _D_VTMISSING
	lea ecx,[esp+0x700]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x6FC]
	push edx
	push 0xFF2000FF
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x59
	push eax
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x5A
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x6FC]
	jmp Block7

 Block93:
	lea ecx,[esp+0x94]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x5B
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0xA0]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block95

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block95:
	lea edx,[esp+0x1CC]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x3E0]
	mov dword ptr [esp+0x828],0x5C
	call Ztl_variant_t::_ctor_3
	lea eax,[esp+0x3DC]
	push eax
	push 0xFF2000FF
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0x5D
	push ecx
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x5E
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x3DC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x1CC]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block96:
	lea edx,[esp+0x9C]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x5F
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0xA8]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block98

 Block97:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block98:
	push offset _D_VTMISSING
	lea ecx,[esp+0x600]
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x5FC]
	push eax
	push 0xFF77CCFF
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x60
	push ecx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x61
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x5FC]
	jmp Block7

 Block99:
	lea edx,[esp+0x14C]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x62
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x158]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block101

 Block100:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block101:
	lea eax,[esp+0xA4]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x400]
	mov dword ptr [esp+0x828],0x63
	call Ztl_variant_t::_ctor_3
	lea ecx,[esp+0x3FC]
	push ecx
	push 0xFF77CCFF
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0x64
	push edx
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x65
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x3FC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xA4]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block102:
	lea eax,[esp+0x1A4]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x66
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1B0]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block104

 Block103:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block104:
	push offset _D_VTMISSING
	lea ecx,[esp+0x800]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x7FC]
	push ecx
	push 0xFF006699
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x67
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x68
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x7FC]
	jmp Block7

 Block105:
	lea eax,[esp+0xAC]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x69
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0xB8]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block107

 Block106:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block107:
	lea ecx,[esp+0x154]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x420]
	mov dword ptr [esp+0x828],0x6A
	call Ztl_variant_t::_ctor_3
	lea edx,[esp+0x41C]
	push edx
	push 0xFF006699
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0x6B
	push eax
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x6C
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x41C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x154]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block108:
	lea ecx,[esp+0xB4]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x6D
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0xC0]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block110

 Block109:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block110:
	push offset _D_VTMISSING
	lea ecx,[esp+0x620]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x61C]
	push edx
	push 0xFFFF2020
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x6E
	push eax
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x6F
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x61C]
	jmp Block7

 Block111:
	lea ecx,[esp+0x1E4]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x70
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1F0]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block113

 Block112:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block113:
	lea edx,[esp+0xBC]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x440]
	mov dword ptr [esp+0x828],0x71
	call Ztl_variant_t::_ctor_3
	lea eax,[esp+0x43C]
	push eax
	push 0xFFFF2020
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0x72
	push ecx
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x73
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x43C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xBC]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block114:
	lea edx,[esp+0x15C]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x74
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x168]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block116

 Block115:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block116:
	push offset _D_VTMISSING
	lea ecx,[esp+0x720]
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x71C]
	push eax
	push 0xFFCC0066
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x75
	push ecx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x76
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x71C]
	jmp Block7

 Block117:
	lea edx,[esp+0xC4]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x77
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0xD0]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block119

 Block118:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block119:
	lea eax,[esp+0x1AC]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x460]
	mov dword ptr [esp+0x828],0x78
	call Ztl_variant_t::_ctor_3
	lea ecx,[esp+0x45C]
	push ecx
	push 0xFFCC0066
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0x79
	push edx
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x7A
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x45C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x1AC]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block120:
	lea eax,[esp+0xCC]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x7B
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0xD8]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block122

 Block121:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block122:
	push offset _D_VTMISSING
	lea ecx,[esp+0x640]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x63C]
	push ecx
	push 0xFFFF3399
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x7C
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x7D
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x63C]
	jmp Block7

 Block123:
	lea eax,[esp+0x164]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x7E
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x170]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block125

 Block124:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block125:
	lea ecx,[esp+0xD4]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x480]
	mov dword ptr [esp+0x828],0x7F
	call Ztl_variant_t::_ctor_3
	lea edx,[esp+0x47C]
	push edx
	push 0xFFFF3399
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0x80
	push eax
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x81
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x47C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xD4]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block126:
	lea ecx,[esp+0x1D4]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x82
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1E0]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block128

 Block127:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block128:
	push offset _D_VTMISSING
	lea ecx,[esp+0x7A0]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x79C]
	push edx
	push 0xFFFF9900
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x83
	push eax
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x84
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x79C]
	jmp Block7

 Block129:
	lea ecx,[esp+0xDC]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x85
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0xE8]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block131

 Block130:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block131:
	lea edx,[esp+0x16C]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x4A0]
	mov dword ptr [esp+0x828],0x86
	call Ztl_variant_t::_ctor_3
	lea eax,[esp+0x49C]
	push eax
	push 0xFFFF9900
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0x87
	push ecx
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x88
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x49C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x16C]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block132:
	lea edx,[esp+0xE4]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x89
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0xF0]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block134

 Block133:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block134:
	push offset _D_VTMISSING
	lea ecx,[esp+0x660]
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x65C]
	push eax
	push 0xFF336600
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x8A
	push ecx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x8B
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x65C]
	jmp Block7

 Block135:
	lea edx,[esp+0x1B4]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x8C
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1C0]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block137

 Block136:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block137:
	lea eax,[esp+0xEC]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x4C0]
	mov dword ptr [esp+0x828],0x8D
	call Ztl_variant_t::_ctor_3
	lea ecx,[esp+0x4BC]
	push ecx
	push 0xFF336600
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0x8E
	push edx
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x8F
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x4BC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xEC]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block138:
	lea eax,[esp+0x174]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x90
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x180]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block140

 Block139:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block140:
	push offset _D_VTMISSING
	lea ecx,[esp+0x740]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x73C]
	push ecx
	push 0xFFFFFF20
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x91
	push edx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x92
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x73C]
	jmp Block7

 Block141:
	lea eax,[esp+0xF4]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x93
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x100]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block143

 Block142:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block143:
	lea ecx,[esp+0x1F4]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x4E0]
	mov dword ptr [esp+0x828],0x94
	call Ztl_variant_t::_ctor_3
	lea edx,[esp+0x4DC]
	push edx
	push 0xFFFFFF20
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0x95
	push eax
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x96
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x4DC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x1F4]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block144:
	lea ecx,[esp+0xFC]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x97
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x108]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block146

 Block145:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block146:
	push offset _D_VTMISSING
	lea ecx,[esp+0x680]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x67C]
	push edx
	push 0xFF28C99B
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x98
	push eax
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x99
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x67C]
	jmp Block7

 Block147:
	lea ecx,[esp+0x17C]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x9A
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x188]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block149

 Block148:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block149:
	lea edx,[esp+0x104]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x500]
	mov dword ptr [esp+0x828],0x9B
	call Ztl_variant_t::_ctor_3
	lea eax,[esp+0x4FC]
	push eax
	push 0xFF28C99B
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0x9C
	push ecx
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x9D
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x4FC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x104]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block150:
	lea edx,[esp+0x1BC]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x9E
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1C8]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block152

 Block151:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block152:
	push offset _D_VTMISSING
	lea ecx,[esp+0x7E0]
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x7DC]
	push eax
	push 0xFF333333
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0x9F
	push ecx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xA0
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x7DC]
	jmp Block7

 Block153:
	lea edx,[esp+0x10C]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xA1
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x118]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block155

 Block154:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block155:
	push offset _D_VTMISSING
	lea ecx,[esp+0x210]
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x20C]
	push eax
	push 0xFF000000
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0xA2
	push ecx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xA3
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x20C]
	jmp Block7

 Block156:
	lea edx,[esp+0x184]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xA4
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x190]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block158

 Block157:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block158:
	push offset _D_VTMISSING
	lea ecx,[esp+0x230]
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x22C]
	push eax
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0xA5
	push ecx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xA6
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x22C]
	jmp Block7

 Block159:
	lea edx,[esp+0x114]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xA7
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x120]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block161

 Block160:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block161:
	push offset _D_VTMISSING
	lea ecx,[esp+0x250]
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x24C]
	push eax
	push 0xFF355A84
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0xA8
	push ecx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xA9
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x24C]
	jmp Block7

 Block162:
	lea edx,[esp+0x1DC]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xAA
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1E8]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block164

 Block163:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block164:
	push offset _D_VTMISSING
	lea ecx,[esp+0x270]
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x26C]
	push eax
	push 0xFF000000
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0xAB
	push ecx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xAC
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x26C]
	jmp Block7

 Block165:
	lea edx,[esp+0x11C]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xAD
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x128]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block167

 Block166:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block167:
	push offset _D_VTMISSING
	lea ecx,[esp+0x290]
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x28C]
	push eax
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0xAE
	push ecx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xAF
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x28C]
	jmp Block7

 Block168:
	lea edx,[esp+0x18C]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xB0
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x198]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block170

 Block169:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block170:
	push offset _D_VTMISSING
	lea ecx,[esp+0x2B0]
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x2AC]
	push eax
	push 0xFF355A84
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0xB1
	push ecx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xB2
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x2AC]
	jmp Block7

 Block171:
	lea edx,[esp+0x124]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xB3
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x130]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block173

 Block172:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block173:
	push offset _D_VTMISSING
	lea ecx,[esp+0x2D0]
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x2CC]
	push eax
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0xB4
	push ecx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xB5
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x2CC]
	jmp Block7

 Block174:
	lea edx,[esp+0x1C4]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xB6
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1D0]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block176

 Block175:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block176:
	push offset _D_VTMISSING
	lea ecx,[esp+0x2F0]
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x2EC]
	push eax
	push 0xFF000000
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0xB7
	push ecx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xB8
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x2EC]
	jmp Block7

 Block177:
	lea edx,[esp+0x12C]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xB9
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x138]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block179

 Block178:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block179:
	push offset _D_VTMISSING
	lea ecx,[esp+0x310]
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x30C]
	push eax
	push 0xFF000000
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 8
	mov ebx,0xBA
	push ecx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xBB
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x30C]
	jmp Block7

 Block180:
	lea edx,[esp+0x194]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xBC
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1A0]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block182

 Block181:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block182:
	push offset _D_VTMISSING
	lea ecx,[esp+0x330]
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x32C]
	push eax
	push 0xFF505050
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0xBD
	push ecx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xBE
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x32C]
	jmp Block7

 Block183:
	lea edx,[esp+0x134]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xBF
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x140]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block185

 Block184:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block185:
	push offset _D_VTMISSING
	lea ecx,[esp+0x350]
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x34C]
	push eax
	push 0xFFFFFF20
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0xC0
	push ecx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xC1
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x34C]
	jmp Block7

 Block186:
	lea edx,[esp+0x1EC]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xC2
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1F8]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block188

 Block187:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block188:
	lea eax,[esp+0x78]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x370]
	mov dword ptr [esp+0x828],0xC3
	call Ztl_variant_t::_ctor_3
	lea ecx,[esp+0x36C]
	push ecx
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0xC4
	push edx
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xC5
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x36C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x78]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block189:
	lea eax,[esp+0x80]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xC6
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x8C]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block191

 Block190:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block191:
	lea ecx,[esp+0x88]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x390]
	mov dword ptr [esp+0x828],0xC7
	call Ztl_variant_t::_ctor_3
	lea edx,[esp+0x38C]
	push edx
	push 0xFF000000
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0xC8
	push eax
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xC9
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x38C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x88]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block192:
	lea ecx,[esp+0x90]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xCA
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x9C]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block194

 Block193:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block194:
	push offset _D_VTMISSING
	lea ecx,[esp+0x3B0]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x3AC]
	push edx
	push 0xFF2000FF
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0xCB
	push eax
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xCC
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x3AC]
	jmp Block7

 Block195:
	lea ecx,[esp+0x98]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xCD
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0xA4]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block197

 Block196:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block197:
	push offset _D_VTMISSING
	lea ecx,[esp+0x3D0]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x3CC]
	push edx
	push 0xFFFF2020
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0xCE
	push eax
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xCF
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x3CC]
	jmp Block7

 Block198:
	lea ecx,[esp+0xA0]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xD0
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0xAC]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block200

 Block199:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block200:
	lea edx,[esp+0xA8]
	push 0x5B1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x3F0]
	mov dword ptr [esp+0x828],0xD1
	call Ztl_variant_t::_ctor_3
	lea eax,[esp+0x3EC]
	push eax
	push 0xFF2000FF
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0xD2
	push ecx
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xD3
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x3EC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xA8]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block201:
	lea edx,[esp+0xB0]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xD4
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0xBC]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block203

 Block202:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block203:
	lea eax,[esp+0xB8]
	push 0x5B1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x410]
	mov dword ptr [esp+0x828],0xD5
	call Ztl_variant_t::_ctor_3
	lea ecx,[esp+0x40C]
	push ecx
	push 0xFFFF2020
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0xD6
	push edx
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xD7
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x40C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xB8]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block204:
	lea eax,[esp+0xC0]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xD8
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0xCC]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block206

 Block205:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block206:
	lea ecx,[esp+0xC8]
	push 0x5B1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x430]
	mov dword ptr [esp+0x828],0xD9
	call Ztl_variant_t::_ctor_3
	lea edx,[esp+0x42C]
	push edx
	push 0xFFFFFFFF
	push 0xF
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0xDA
	push eax
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xDB
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x42C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xC8]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block207:
	lea ecx,[esp+0xD0]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xDC
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0xDC]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block209

 Block208:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block209:
	push offset _D_VTMISSING
	lea ecx,[esp+0x450]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x44C]
	push edx
	push 0xFFB2B2B2
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0xDD
	push eax
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xDE
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x44C]
	jmp Block7

 Block210:
	lea ecx,[esp+0xD8]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xDF
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0xE4]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block212

 Block211:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block212:
	push offset _D_VTMISSING
	lea ecx,[esp+0x470]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x46C]
	push edx
	push 0xFFB2B2B2
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov ebx,0xE0
	push eax
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xE1
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x46C]
	jmp Block7

 Block213:
	lea ecx,[esp+0xE0]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xE2
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0xEC]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block215

 Block214:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block215:
	lea edx,[esp+0xE8]
	push 0x5B1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x490]
	mov dword ptr [esp+0x828],0xE3
	call Ztl_variant_t::_ctor_3
	lea eax,[esp+0x48C]
	push eax
	push 0xFF000000
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0xE4
	push ecx
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xE5
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x48C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xE8]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block216:
	lea edx,[esp+0xF0]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xE6
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0xFC]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block218

 Block217:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block218:
	lea eax,[esp+0xF8]
	push 0x5B1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x4B0]
	mov dword ptr [esp+0x828],0xE7
	call Ztl_variant_t::_ctor_3
	lea ecx,[esp+0x4AC]
	push ecx
	push 0xFF674B36
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0xE8
	push edx
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xE9
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x4AC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xF8]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block219:
	lea eax,[esp+0x100]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xEA
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x10C]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block221

 Block220:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block221:
	lea ecx,[esp+0x108]
	push 0x5B1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x4D0]
	mov dword ptr [esp+0x828],0xEB
	call Ztl_variant_t::_ctor_3
	lea edx,[esp+0x4CC]
	push edx
	push 0xFF2000FF
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0xEC
	push eax
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xED
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x4CC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x108]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block222:
	lea ecx,[esp+0x110]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xEE
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x11C]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block224

 Block223:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block224:
	lea edx,[esp+0x118]
	push 0x5B1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x4F0]
	mov dword ptr [esp+0x828],0xEF
	call Ztl_variant_t::_ctor_3
	lea eax,[esp+0x4EC]
	push eax
	push 0xFFFF2020
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	mov bl,0xF0
	push ecx
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xF1
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x4EC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x118]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block225:
	lea edx,[esp+0x120]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xF2
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x12C]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block227

 Block226:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block227:
	push offset _D_VTMISSING
	lea ecx,[esp+0x510]
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x50C]
	push eax
	push 0xFFFFFFFF
	push 9
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 8
	mov ebx,0xF3
	push ecx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xF4
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x50C]
	jmp Block7

 Block228:
	lea edx,[esp+0x128]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xF5
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x134]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block230

 Block229:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block230:
	push offset _D_VTMISSING
	lea ecx,[esp+0x530]
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x52C]
	push eax
	push 0xFF000000
	push 9
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 8
	mov ebx,0xF6
	push ecx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xF7
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x52C]
	jmp Block7

 Block231:
	lea edx,[esp+0x130]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xF8
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x13C]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block233

 Block232:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block233:
	push offset _D_VTMISSING
	lea ecx,[esp+0x550]
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x54C]
	push eax
	push 0xFF2000FF
	push 9
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 8
	mov ebx,0xF9
	push ecx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xFA
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x54C]
	jmp Block7

 Block234:
	lea edx,[esp+0x138]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xFB
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x144]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block236

 Block235:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block236:
	push offset _D_VTMISSING
	lea ecx,[esp+0x570]
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x56C]
	push eax
	push 0xFFFF2020
	push 9
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 8
	mov ebx,0xFC
	push ecx
	mov dword ptr [esp+0x83C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xFD
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x56C]
	jmp Block7

 Block237:
	lea edx,[esp+0x140]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0xFE
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x14C]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block239

 Block238:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block239:
	push offset _D_VTMISSING
	lea ecx,[esp+0x590]
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x58C]
	push eax
	push 0xFFFAE8CB
	push 9
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 8
	push ecx
	mov dword ptr [esp+0x83C],0xFF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov dword ptr [esp+0x834],0x100
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov dword ptr [esp+0x834],0xFF
	call IWzFont::Create
	lea ecx,[esp+0x58C]
	jmp Block7

 Block240:
	lea edx,[esp+0x148]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x101
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x154]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block242

 Block241:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block242:
	lea eax,[esp+0x150]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x5B0]
	mov dword ptr [esp+0x828],0x102
	call Ztl_variant_t::_ctor_3
	lea ecx,[esp+0x5AC]
	push ecx
	push 0xFFFFFFFF
	push 9
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 8
	mov bl,3
	push edx
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],4
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x5AC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x150]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block243:
	lea eax,[esp+0x158]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x105
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x164]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block245

 Block244:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block245:
	lea ecx,[esp+0x160]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esp+0x5D0]
	mov dword ptr [esp+0x828],0x106
	call Ztl_variant_t::_ctor_3
	lea edx,[esp+0x5CC]
	push edx
	push 0xFF000000
	push 9
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 8
	mov ebx,7
	push eax
	mov byte ptr [esp+0x83C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],8
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],bl
	call IWzFont::Create
	lea ecx,[esp+0x5CC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x160]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block8

 Block246:
	lea ecx,[esp+0x168]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x109
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x174]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block248

 Block247:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block248:
	push offset _D_VTMISSING
	lea ecx,[esp+0x5F0]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x5EC]
	push edx
	push 0xFFFF7E00
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	push eax
	mov dword ptr [esp+0x83C],0x10A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xB
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],0xA
	call IWzFont::Create
	lea ecx,[esp+0x5EC]
	jmp Block7

 Block249:
	lea ecx,[esp+0x170]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x10C
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x17C]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block251

 Block250:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block251:
	push offset _D_VTMISSING
	lea ecx,[esp+0x610]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x60C]
	push edx
	push 0xFFBE3C03
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	push eax
	mov dword ptr [esp+0x83C],0x10D
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0xE
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],0xD
	call IWzFont::Create
	lea ecx,[esp+0x60C]
	jmp Block7

 Block252:
	lea ecx,[esp+0x178]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x10F
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x184]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block254

 Block253:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block254:
	push offset _D_VTMISSING
	lea ecx,[esp+0x630]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x62C]
	push edx
	push 0xFF007AF4
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	push eax
	mov dword ptr [esp+0x83C],0x110
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x11
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],0x10
	call IWzFont::Create
	lea ecx,[esp+0x62C]
	jmp Block7

 Block255:
	lea ecx,[esp+0x180]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x112
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x18C]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block257

 Block256:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block257:
	push offset _D_VTMISSING
	lea ecx,[esp+0x650]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x64C]
	push edx
	push 0xFF00BDC4
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	push eax
	mov dword ptr [esp+0x83C],0x113
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x14
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],0x13
	call IWzFont::Create
	lea ecx,[esp+0x64C]
	jmp Block7

 Block258:
	lea ecx,[esp+0x188]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x115
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x194]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block260

 Block259:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block260:
	push offset _D_VTMISSING
	lea ecx,[esp+0x670]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x66C]
	push edx
	push 0xFF629A00
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	push eax
	mov dword ptr [esp+0x83C],0x116
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x17
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],0x16
	call IWzFont::Create
	lea ecx,[esp+0x66C]
	jmp Block7

 Block261:
	lea ecx,[esp+0x14]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x118
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block263

 Block262:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block263:
	push offset _D_VTMISSING
	lea ecx,[esp+0x690]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x68C]
	push edx
	push 0xFFFF5400
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	push eax
	mov dword ptr [esp+0x83C],0x119
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x1A
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],0x19
	call IWzFont::Create
	lea ecx,[esp+0x68C]
	jmp Block7

 Block264:
	lea ecx,[esp+0x198]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x11B
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1A4]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block266

 Block265:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block266:
	push offset _D_VTMISSING
	lea ecx,[esp+0x6B0]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x6AC]
	push edx
	push 0xFFD022C2
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	push eax
	mov dword ptr [esp+0x83C],0x11C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x1D
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],0x1C
	call IWzFont::Create
	lea ecx,[esp+0x6AC]
	jmp Block7

 Block267:
	lea ecx,[esp+0x18]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x11E
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block269

 Block268:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block269:
	push offset _D_VTMISSING
	lea ecx,[esp+0x6D0]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x6CC]
	push edx
	push 0xFFA6006E
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	push eax
	mov dword ptr [esp+0x83C],0x11F
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x20
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],0x1F
	call IWzFont::Create
	lea ecx,[esp+0x6CC]
	jmp Block7

 Block270:
	lea ecx,[esp+0x20]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x121
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block272

 Block271:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block272:
	push offset _D_VTMISSING
	lea ecx,[esp+0x6F0]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x6EC]
	push edx
	push 0xFF007AF4
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	push eax
	mov dword ptr [esp+0x83C],0x122
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x23
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],0x22
	call IWzFont::Create
	lea ecx,[esp+0x6EC]
	jmp Block7

 Block273:
	lea ecx,[esp+0x28]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x124
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block275

 Block274:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block275:
	push offset _D_VTMISSING
	lea ecx,[esp+0x710]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x70C]
	push edx
	push 0xFF00BDC4
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	push eax
	mov dword ptr [esp+0x83C],0x125
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x26
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],0x25
	call IWzFont::Create
	lea ecx,[esp+0x70C]
	jmp Block7

 Block276:
	lea ecx,[esp+0x30]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x127
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block278

 Block277:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block278:
	push offset _D_VTMISSING
	lea ecx,[esp+0x730]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x72C]
	push edx
	push 0xFF629A00
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	push eax
	mov dword ptr [esp+0x83C],0x128
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x29
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],0x28
	call IWzFont::Create
	lea ecx,[esp+0x72C]
	jmp Block7

 Block279:
	lea ecx,[esp+0x38]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x12A
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x44]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block281

 Block280:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block281:
	push offset _D_VTMISSING
	lea ecx,[esp+0x750]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x74C]
	push edx
	push 0xFFFF5400
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	push eax
	mov dword ptr [esp+0x83C],0x12B
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x2C
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],0x2B
	call IWzFont::Create
	lea ecx,[esp+0x74C]
	jmp Block7

 Block282:
	lea ecx,[esp+0x40]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x12D
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x4C]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block284

 Block283:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block284:
	push offset _D_VTMISSING
	lea ecx,[esp+0x770]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x76C]
	push edx
	push 0xFFD022C2
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	push eax
	mov dword ptr [esp+0x83C],0x12E
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x2F
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],0x2E
	call IWzFont::Create
	lea ecx,[esp+0x76C]
	jmp Block7

 Block285:
	lea ecx,[esp+0x48]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x130
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x54]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block287

 Block286:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block287:
	push offset _D_VTMISSING
	lea ecx,[esp+0x790]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x78C]
	push edx
	push 0xFFA6006E
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	push eax
	mov dword ptr [esp+0x83C],0x131
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x32
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],0x31
	call IWzFont::Create
	lea ecx,[esp+0x78C]
	jmp Block7

 Block288:
	lea ecx,[esp+0x50]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x133
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x5C]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block290

 Block289:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block290:
	push offset _D_VTMISSING
	lea ecx,[esp+0x7B0]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x7AC]
	push edx
	push 0xFFFFFFFF
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	push eax
	mov dword ptr [esp+0x83C],0x134
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x35
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],0x34
	call IWzFont::Create
	lea ecx,[esp+0x7AC]
	jmp Block7

 Block291:
	lea ecx,[esp+0x58]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x136
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x64]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block293

 Block292:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block293:
	push offset _D_VTMISSING
	lea ecx,[esp+0x7D0]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x7CC]
	push edx
	push 0xFF000000
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	push eax
	mov dword ptr [esp+0x83C],0x137
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x38
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],0x37
	call IWzFont::Create
	lea ecx,[esp+0x7CC]
	jmp Block7

 Block294:
	lea ecx,[esp+0x60]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x139
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x6C]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block296

 Block295:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block296:
	push offset _D_VTMISSING
	lea ecx,[esp+0x7F0]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x7EC]
	push edx
	push 0xFF909090
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	push eax
	mov dword ptr [esp+0x83C],0x13A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x3B
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],0x3A
	call IWzFont::Create
	lea ecx,[esp+0x7EC]
	jmp Block7

 Block297:
	lea ecx,[esp+0x10]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x830],0x13C
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x1C]
	add esp,0xC
	mov dword ptr [esp+0x824],0xFFFFFFFF
	test eax,eax
	je Block299

 Block298:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block299:
	push offset _D_VTMISSING
	lea ecx,[esp+0x810]
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x80C]
	push edx
	push 0xFF000000
	push 0x18
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A25
	push eax
	mov dword ptr [esp+0x83C],0x13D
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	mov byte ptr [esp+0x834],0x3E
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x834],0x3D
	call IWzFont::Create
	lea ecx,[esp+0x80C]
	jmp Block7

 Block300:
	mov eax,dword ptr [esp+0x82C]
	mov dword ptr [eax],0
	mov ecx,dword ptr [esp+0x81C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x81C
	ret
}
}
// make_balloon
_SUB_EXCEPTION_HANDLER(55DE30)
__SUB(0055DE30, __cdecl, 80867,  void, NakedParam<_x_com_ptr<IWzCanvas>>, long, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55DE30
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
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x64]
	xor esi,esi
	push eax
	mov dword ptr [esp+0x90],esi
	call edi
	lea ecx,[esp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x54]
	push edx
	mov byte ptr [esp+0x90],1
	call edi
	lea eax,[esp+0x54]
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
	lea ecx,[esp+0x6C]
	push ecx
	lea edx,[esp+0x60]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push 0xC9D
	mov bl,2
	push eax
	mov byte ptr [esp+0xA8],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xA0],3
	cmp dword ptr [_D_G_RM],esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x88]
	push ecx
	mov byte ptr [esp+0xA4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x94],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],esi
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
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0x8C],6
	cmp word ptr [esp+0x74],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x7C]
	xor edx,edx
	mov word ptr [esp+0x74],dx
	cmp eax,esi
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
	mov byte ptr [esp+0x8C],7
	cmp word ptr [esp+0x54],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	cmp eax,esi
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
	mov byte ptr [esp+0x8C],8
	cmp word ptr [esp+0x64],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	cmp eax,esi
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
	mov dword ptr [esp+0x14],esi
	mov dword ptr [esp+0x1C],esi
	push esi
	push esi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x5A0
	push edx
	mov byte ptr [esp+0xA0],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [esp+0x24]
	mov byte ptr [esp+0x98],0xB
	cmp ebp,esi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea eax,[esp+0x50]
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x9C],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x94],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block26

 Block24:
	cmp eax,0x80004002
	je Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	mov byte ptr [esp+0x8C],0xA
	cmp word ptr [esp+0x44],di
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,esi
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x44]
	push edx
	call ebx

 Block30:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov ecx,dword ptr [esp+0x94]
	mov byte ptr [esp+0x8C],0xD
	cmp ecx,esi
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	mov edi,dword ptr [esp+0x34]
	mov ebx,dword ptr [esp+0x98]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x48]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x50]
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [esp+0x24]
	mov edi,dword ptr [esp+0xAC]
	push eax
	push edi
	push ebx
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block36

 Block35:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block36:
	mov esi,8
	mov byte ptr [esp+0x8C],0xA
	cmp word ptr [esp+0x34],si
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block40:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x5A2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x50]
	mov byte ptr [esp+0x98],0xE
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x9C],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x94],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block43

 Block41:
	cmp eax,0x80004002
	je Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	mov byte ptr [esp+0x8C],0xA
	cmp word ptr [esp+0x44],si
	jne Block46

 Block44:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block49

 Block48:
	push eax
	call _com_issue_error

 Block49:
	mov ecx,dword ptr [esp+0x94]
	mov byte ptr [esp+0x8C],0x10
	test ecx,ecx
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	mov ebp,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0xA0]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x48]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x50]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0x24]
	push eax
	lea ebx,[ebx+edx-9]
	mov edx,dword ptr [ecx]
	push edi
	push ebx
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [edx+0x80]
	mov dword ptr [esp+0x44],ebx
	call ecx
	test eax,eax
	jge Block53

 Block52:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block53:
	mov esi,8
	mov byte ptr [esp+0x8C],0xA
	cmp word ptr [esp+0x34],si
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block57:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x5A6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x24]
	lea edx,[esp+0x50]
	mov byte ptr [esp+0x98],0x11
	push edx
	mov byte ptr [esp+0x9C],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x94],0x12
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block60

 Block58:
	cmp eax,0x80004002
	je Block60

 Block59:
	push eax
	call _com_issue_error

 Block60:
	mov byte ptr [esp+0x8C],0xA
	cmp word ptr [esp+0x44],si
	jne Block63

 Block61:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block66

 Block65:
	push eax
	call _com_issue_error

 Block66:
	mov ecx,dword ptr [esp+0x94]
	mov byte ptr [esp+0x8C],0x13
	test ecx,ecx
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	mov ebp,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0xA4]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x48]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x50]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0x24]
	push eax
	mov eax,dword ptr [esp+0xAC]
	lea edi,[edi+edx-9]
	mov edx,dword ptr [ecx]
	push edi
	push eax
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [edx+0x80]
	mov dword ptr [esp+0x40],edi
	call ecx
	test eax,eax
	jge Block70

 Block69:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block70:
	mov esi,8
	mov byte ptr [esp+0x8C],0xA
	cmp word ptr [esp+0x34],si
	jne Block73

 Block71:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block74:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x1AD4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x24]
	lea edx,[esp+0x50]
	mov byte ptr [esp+0x98],0x14
	push edx
	mov byte ptr [esp+0x9C],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x94],0x15
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block77

 Block75:
	cmp eax,0x80004002
	je Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	mov byte ptr [esp+0x8C],0xA
	cmp word ptr [esp+0x44],si
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block83

 Block82:
	push eax
	call _com_issue_error

 Block83:
	mov ecx,dword ptr [esp+0x94]
	mov byte ptr [esp+0x8C],0x16
	test ecx,ecx
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	mov ebp,dword ptr [esp+0x34]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x48]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x50]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0x24]
	push eax
	push edi
	push ebx
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block87

 Block86:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block87:
	mov edi,8
	mov byte ptr [esp+0x8C],0xA
	cmp word ptr [esp+0x34],di
	jne Block90

 Block88:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block91:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x5A1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [esp+0x24]
	lea edx,[esp+0x50]
	mov byte ptr [esp+0x98],0x17
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x9C],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x94],0x18
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block94

 Block92:
	cmp eax,0x80004002
	je Block94

 Block93:
	push eax
	call _com_issue_error

 Block94:
	mov byte ptr [esp+0x8C],0xA
	cmp word ptr [esp+0x44],di
	jne Block97

 Block95:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x5A7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x50]
	mov byte ptr [esp+0x98],0x19
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x9C],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x94],0x1A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block101

 Block99:
	cmp eax,0x80004002
	je Block101

 Block100:
	push eax
	call _com_issue_error

 Block101:
	mov byte ptr [esp+0x8C],0xA
	cmp word ptr [esp+0x44],di
	jne Block104

 Block102:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block105:
	mov edi,dword ptr [esp+0x98]
	mov ebp,dword ptr [esp+0x1C]
	add edi,9
	cmp edi,ebx
	mov ebx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x2C],edi
	jge Block123

 Block106:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block107:
	mov ecx,dword ptr [esp+0x94]
	mov byte ptr [esp+0x8C],0x1B
	test ecx,ecx
	je Block5

 Block108:
	mov ebp,dword ptr [esp+0x34]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x48]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x50]
	push ebx
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0xB0]
	push eax
	push edi
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block110

 Block109:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block110:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x8C],0xA
	jne Block113

 Block111:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block114:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block115:
	mov ecx,dword ptr [esp+0x94]
	mov byte ptr [esp+0x8C],0x1C
	test ecx,ecx
	je Block5

 Block116:
	mov ebp,dword ptr [esp+0x44]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x58]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x5C]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x60]
	mov dword ptr [eax+0xC],ebp
	mov ebp,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x30]
	push ebp
	push eax
	push edi
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block118

 Block117:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block118:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x8C],0xA
	jne Block121

 Block119:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block122:
	inc edi
	cmp edi,dword ptr [esp+0x24]
	jl Block106

 Block123:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x5A4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x24]
	lea edx,[esp+0x50]
	mov byte ptr [esp+0x98],0x1D
	push edx
	mov byte ptr [esp+0x9C],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x94],0x1E
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block129

 Block124:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x28]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x28]
	mov edi,ecx
	test ebx,ebx
	je Block126

 Block125:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block126:
	mov ebx,edi
	mov dword ptr [esp+0x14],ebx
	test esi,esi
	jge Block132

 Block127:
	cmp esi,0x80004002
	je Block132

 Block128:
	push esi
	call _com_issue_error

 Block129:
	test ebx,ebx
	je Block132

 Block130:
	mov eax,ebx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block132

 Block131:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block132:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x8C],0xA
	jne Block135

 Block133:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block136

 Block134:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block136

 Block135:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block136:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x5A3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x24]
	lea eax,[esp+0x50]
	mov byte ptr [esp+0x98],0x1F
	push eax
	mov byte ptr [esp+0x9C],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x94],0x20
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block142

 Block137:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x28]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x28]
	mov edi,ecx
	test ebp,ebp
	je Block139

 Block138:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block139:
	mov dword ptr [esp+0x1C],edi
	test esi,esi
	jge Block145

 Block140:
	cmp esi,0x80004002
	je Block145

 Block141:
	push esi
	call _com_issue_error

 Block142:
	test ebp,ebp
	je Block145

 Block143:
	mov eax,ebp
	mov dword ptr [esp+0x1C],0
	test eax,eax
	je Block145

 Block144:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block145:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x8C],0xA
	jne Block148

 Block146:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block149

 Block147:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block149

 Block148:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block149:
	mov edi,dword ptr [esp+0x9C]
	add edi,9
	cmp edi,dword ptr [esp+0x20]
	mov dword ptr [esp+0x30],edi
	jge Block169

 Block150:
	mov bl,0x22

 Block151:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block152:
	mov ecx,dword ptr [esp+0x94]
	mov byte ptr [esp+0x8C],0x21
	test ecx,ecx
	je Block5

 Block153:
	mov ebp,dword ptr [esp+0x44]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x58]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x5C]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x60]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0x24]
	push eax
	mov eax,dword ptr [esp+0xAC]
	push edi
	push eax
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block155

 Block154:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block155:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x8C],0xA
	jne Block158

 Block156:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block159:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block160:
	mov ecx,dword ptr [esp+0x94]
	mov byte ptr [esp+0x8C],bl
	test ecx,ecx
	je Block5

 Block161:
	mov ebp,dword ptr [esp+0x34]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x48]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x50]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0x2C]
	push eax
	mov eax,dword ptr [esp+0x38]
	push edi
	push eax
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block163

 Block162:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block163:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x8C],0xA
	jne Block166

 Block164:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block167

 Block165:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block167

 Block166:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block167:
	inc edi
	cmp edi,dword ptr [esp+0x20]
	jl Block151

 Block168:
	mov ebx,dword ptr [esp+0x14]

 Block169:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0x5A5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x24]
	lea edx,[esp+0x50]
	mov byte ptr [esp+0x98],0x23
	push edx
	mov byte ptr [esp+0x9C],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x94],0x24
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block175

 Block170:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x28]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x28]
	mov edi,ecx
	test ebx,ebx
	je Block172

 Block171:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block172:
	mov dword ptr [esp+0x14],edi
	test esi,esi
	jge Block178

 Block173:
	cmp esi,0x80004002
	je Block178

 Block174:
	push esi
	call _com_issue_error

 Block175:
	test ebx,ebx
	je Block178

 Block176:
	mov eax,ebx
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block178

 Block177:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block178:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x8C],0xA
	jne Block181

 Block179:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block182

 Block180:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block182

 Block181:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block182:
	mov ebp,dword ptr [esp+0x2C]
	cmp ebp,dword ptr [esp+0x24]
	jge Block194

 Block183:
	mov edi,dword ptr [esp+0x30]
	cmp edi,dword ptr [esp+0x20]
	jge Block193

 Block184:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block185:
	mov ecx,dword ptr [esp+0x94]
	mov byte ptr [esp+0x8C],0x25
	test ecx,ecx
	je Block5

 Block186:
	mov ebx,dword ptr [esp+0x44]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x58]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x5C]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x60]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [esp+0x24]
	push eax
	push edi
	push ebp
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block188

 Block187:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block188:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x8C],0xA
	jne Block191

 Block189:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block192

 Block190:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block192

 Block191:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block192:
	inc edi
	cmp edi,dword ptr [esp+0x20]
	jl Block184

 Block193:
	inc ebp
	cmp ebp,dword ptr [esp+0x24]
	jl Block183

 Block194:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x8C],9
	test eax,eax
	je Block196

 Block195:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block196:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x8C],8
	test eax,eax
	je Block198

 Block197:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block198:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x90],0
	call edx
	mov eax,dword ptr [esp+0x94]
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	test eax,eax
	je Block200

 Block199:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block200:
	mov ecx,dword ptr [esp+0x84]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x7C
	ret
}
}
// play_reactor_sound
_SUB_EXCEPTION_HANDLER(567630)
__SUB(00567630, __cdecl, 80908,  void, const wchar_t*, SE_TYPE, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_567630
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
	mov dword ptr [esp+0xC],0
	cmp dword ptr [esp+0x28],0x37
	mov dword ptr [esp+0x1C],0
	jne Block9

 Block1:
	lea eax,[esp+0x28]
	push 0x1A41
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x20],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	mov dword ptr [esp+0x28],0
	lea ecx,[esp+0x10]
	push 0xC2D
	push ecx
	mov byte ptr [esp+0x24],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,dword ptr [esp+0xC]
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [eax]
	push esi
	push edx
	push eax
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x2C],3
	call ZXString16::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0x10
	mov byte ptr [esp+0x1C],2
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov ecx,dword ptr [esp+0x2C]
	mov edi,dword ptr [esp+0x28]
	push 0
	push ecx
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push edi
	call CSoundMan::PlaySE
	mov byte ptr [esp+0x1C],0
	test edi,edi
	je Block7

 Block6:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block7:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test esi,esi
	je Block9

 Block8:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block9:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret
}
}
// get_labeled_string
_SUB_EXCEPTION_HANDLER(55DBF0)
__SUB(0055DBF0, __cdecl, 80865,  ZXString<char>, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<ZXString<char>>, NakedParam<Ztl_bstr_t>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55DBF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
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
	mov dword ptr [ebp-0x18],edi
	mov dword ptr [ebp-4],1
	mov dword ptr [ebp-0x1C],edi
	mov eax,dword ptr [ebp+0x10]
	push edi
	push edi
	push 0xFFFFFFFF
	push eax
	push edi
	push edi
	mov byte ptr [ebp-4],4
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp+0x10]
	mov esi,esp
	push edi
	push edi
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push ecx
	push edi
	push edi
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],5
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x3C]
	push edx
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov ebx,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x3C],bx
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	cmp eax,edi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov esi,dword ptr [ebp-0x14]
	cmp esi,edi
	sete al
	test al,al
	je Block14

 Block10:
	mov edi,dword ptr [ebp+8]
	lea edx,[ebp-0x1C]
	push edx
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString<char>::op_assign
	mov dword ptr [ebp-0x18],1
	mov byte ptr [ebp-4],4
	test esi,esi
	je Block12

 Block11:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block12:
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block26

 Block13:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block26

 Block14:
	push ecx
	mov ecx,dword ptr [ebp+0x14]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x14]
	mov dword ptr [ebp-0x40],esp
	cmp eax,edi
	je Block16

 Block15:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block16:
	mov byte ptr [ebp-4],9
	cmp esi,edi
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea edx,[ebp-0x2C]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x2C],bx
	je Block20

 Block19:
	mov eax,offset _S___3

 Block20:
	mov edi,dword ptr [ebp+8]
	push 0xFFFFFFFF
	push eax
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString<char>::AssignWideStr
	mov dword ptr [ebp-0x18],1
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x2C],bx
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],4
	call eax
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov eax,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov ecx,dword ptr [ebp+0x14]
	test ecx,ecx
	je Block30

 Block29:
	call _xbstr_t::Data_t::Release

 Block30:
	mov eax,edi
	lea esp,[ebp-0x50]
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
// format_largeinteger
_SUB_EXCEPTION_HANDLER(565D50)
__SUB(00565D50, __cdecl, 80893,  void, ZXString<char>&, _LARGE_INTEGER, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_565D50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	lea eax,[esp+0x20]
	push 0x8B7
	push eax
	mov dword ptr [esp+0x3C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x44]
	mov edx,dword ptr [esp+0x40]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push eax
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x44],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0x10
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	cmp dword ptr [esp+0x48],ebx
	jne Block5

 Block3:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [esp+0x40]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block28

 Block4:
	add eax,0xFFFFFFF4
	push eax
	jmp Block27

 Block5:
	mov edi,dword ptr [esp+0x3C]
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [edi],ebx

 Block7:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esp+0x20],ebx
	cmp ecx,ebx
	je Block9

 Block8:
	mov eax,dword ptr [ecx-4]
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	lea ebp,[eax-1]
	cmp ebp,ebx
	jl Block25

 Block11:
	mov byte ptr [esp+0x49],bl
	lea esp,[esp]

 Block12:
	mov al,byte ptr [ecx+ebp]
	mov byte ptr [esp+0x48],al
	lea eax,[esp+0x48]
	mov dword ptr [esp+0x1C],ebx
	lea edx,[eax+1]

 Block13:
	mov cl,byte ptr [eax]
	inc eax
	cmp cl,bl
	jne Block13

 Block14:
	sub eax,edx
	mov esi,eax
	push esi
	lea edx,[esp+0x4C]
	push edx
	push ebx
	push esi
	lea ecx,[esp+0x2C]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x20]
	call ZXString<char>::ReleaseBuffer
	push edi
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x3C],2
	call ZXString<char>::op_add_1
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x38],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x34],2
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	cmp ebp,ebx
	jle Block24

 Block19:
	mov ecx,dword ptr [esp+0x20]
	mov eax,0x55555556
	imul ecx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*2]
	sub ecx,edx
	cmp ecx,2
	jne Block24

 Block20:
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebx
	mov byte ptr [esp+0x18],0x2C
	mov byte ptr [esp+0x19],bl
	call ZXString<char>::AssignCStr
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x3C],4
	call ZXString<char>::op_add_1
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x38],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x34],4
	cmp eax,ebx
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	inc dword ptr [esp+0x20]
	sub ebp,1
	mov ecx,dword ptr [esp+0x18]
	jns Block12

 Block25:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp ecx,ebx
	je Block28

 Block26:
	add ecx,0xFFFFFFF4
	push ecx

 Block27:
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret
}
}
// format_com_error
_SUB_EXCEPTION_HANDLER(55CD50)
__SUB(0055CD50, __cdecl, 80849,  ZXString<char>, const _com_error&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55CD50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	xor ebp,ebp
	mov dword ptr [esp+0x20],ebp
	mov edi,dword ptr [esp+0x38]
	mov ecx,edi
	mov dword ptr [esp+0x2C],ebp
	call _com_error::ErrorMessage
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	cmp eax,ebp
	je Block5

 Block1:
	mov ecx,eax
	lea esi,[ecx+1]
	jmp Block3

 Block3:
	mov dl,byte ptr [ecx]
	inc ecx
	test dl,dl
	jne Block3

 Block4:
	sub ecx,esi
	mov esi,ecx
	push esi
	push eax
	push ebp
	push esi
	lea ecx,[esp+0x28]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x1C]
	call ZXString<char>::ReleaseBuffer
	mov ebx,dword ptr [esp+0x18]

 Block5:
	mov dword ptr [esp+0x2C],1
	mov dword ptr [esp+0x38],ebp
	cmp dword ptr [edi+8],0
	mov byte ptr [esp+0x2C],2
	je Block16

 Block6:
	mov eax,dword ptr [edi+8]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	cmp dword ptr [edi+8],0
	je Block16

 Block7:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call _com_error::Description
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x2C],3
	test eax,eax
	je Block9

 Block8:
	mov eax,dword ptr [eax]
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x40]
	call ZXString<char>::AssignWideStr
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x2C],2
	test ecx,ecx
	je Block12

 Block11:
	call _xbstr_t::Data_t::Release

 Block12:
	mov ebp,dword ptr [esp+0x38]

 Block13:
	mov esi,dword ptr [esp+0x34]
	mov dword ptr [esi],0
	mov dword ptr [esp+0x20],1
	test ebp,ebp
	je Block15

 Block14:
	cmp byte ptr [ebp],0
	jne Block27

 Block15:
	lea eax,[esp+0x1C]
	push 0x8AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi+4]
	mov eax,dword ptr [eax]
	push ebx
	push ecx
	push eax
	push esi
	mov byte ptr [esp+0x3C],5
	call ZXString<char>::Format
	add esp,0x10
	jmp Block30

 Block16:
	lea ecx,[esp+0x14]
	push ecx
	push 0
	mov byte ptr [esp+0x34],4
	mov dword ptr [esp+0x1C],0
	call dword ptr [ZImports::_GetErrorInfo]
	test eax,eax
	jl Block24

 Block17:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block25

 Block18:
	test eax,eax
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x14]
	lea ecx,[esp+0x1C]
	push ecx
	push eax
	call edx
	test eax,eax
	jl Block24

 Block21:
	mov eax,dword ptr [esp+0x1C]
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x40]
	call ZXString<char>::AssignWideStr
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block23:
	mov ebp,dword ptr [esp+0x38]

 Block24:
	mov eax,dword ptr [esp+0x14]

 Block25:
	mov byte ptr [esp+0x2C],2
	test eax,eax
	je Block13

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block13

 Block27:
	cmp dword ptr [edi+4],0x80004005
	jne Block29

 Block28:
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,esi
	call ZXString<char>::op_assign
	jmp Block32

 Block29:
	lea edx,[esp+0x1C]
	push 0x8B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi+4]
	mov eax,dword ptr [eax]
	push ebp
	push ebx
	push ecx
	push eax
	push esi
	mov byte ptr [esp+0x40],6
	call ZXString<char>::Format
	add esp,0x14

 Block30:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x2C],2
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	mov byte ptr [esp+0x2C],1
	test ebp,ebp
	je Block34

 Block33:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov byte ptr [esp+0x2C],0
	test ebx,ebx
	je Block36

 Block35:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block36:
	mov eax,esi
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret
}
}
// enum_next_in_directory
_SUB_EXCEPTION_HANDLER(55CA90)
__SUB(0055CA90, __cdecl, 80845,  int32_t, IEnumVARIANT*, Ztl_variant_t&, unsigned long&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55CA90
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	test byte ptr [_D__S3__3],1
	jne Block2

 Block1:
	or dword ptr [_D__S3__3],1
	push 0x8C6
	push offset _D_S_SIMGEXT
	mov dword ptr [esp+0x24],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push 0xB130F0
	call _atexit
	add esp,4
	mov dword ptr [esp+0x1C],0xFFFFFFFF

 Block2:
	mov ebx,2
	test byte ptr [_D__S3__3],bl
	jne Block6

 Block3:
	mov eax,dword ptr [_D_S_SIMGEXT]
	or dword ptr [_D__S3__3],ebx
	lea edx,[eax+2]

 Block4:
	mov cx,word ptr [eax]
	add eax,ebx
	test cx,cx
	jne Block4

 Block5:
	sub eax,edx
	sar eax,1
	mov dword ptr [_D_S_NIMGEXTLEN],eax

 Block6:
	mov ebp,dword ptr [esp+0x2C]
	mov esi,dword ptr [esp+0x28]
	mov ebx,dword ptr [esp+0x24]
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+0xC]
	push ebp
	push esi
	push 1
	push ebx
	call ecx
	test eax,eax
	jne Block17

 Block7:
	mov edi,dword ptr [esi+8]
	push 0x2E
	push edi
	call _wcschr
	add esp,8
	test eax,eax
	je Block18

 Block8:
	test edi,edi
	jne Block10

 Block9:
	xor eax,eax
	jmp Block11

 Block10:
	mov eax,dword ptr [edi-4]
	shr eax,1

 Block11:
	sub eax,dword ptr [_D_S_NIMGEXTLEN]
	mov edx,dword ptr [_D_S_SIMGEXT]
	push edx
	lea eax,[edi+eax*2]
	push eax
	call __wcsicmp
	add esp,8
	test eax,eax
	je Block18

 Block12:
	cmp word ptr [esi],8
	jne Block15

 Block13:
	mov eax,dword ptr [esi+8]
	xor ecx,ecx
	mov word ptr [esi],cx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	push esi
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jl Block19

 Block16:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0xC]
	push ebp
	push esi
	push 1
	push ebx
	call eax
	test eax,eax
	je Block7

 Block17:
	xor eax,eax
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret

 Block18:
	mov eax,1
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret

 Block19:
	push eax
	call _com_issue_error
}
}
// play_pet_sound
_SUB_EXCEPTION_HANDLER(5683F0)
__SUB(005683F0, __cdecl, 80914,  void, long, const wchar_t*, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5683F0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0xC],ebx
	mov esi,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],ebx
	lea eax,[esp+0x20]
	cmp esi,ebx
	jne Block2

 Block1:
	push 0x8C1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0x24],1
	call ZXString16::Format
	add esp,0xC
	jmp Block3

 Block2:
	push 0x8C2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [eax]
	push ecx
	push esi
	push eax
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x28],2
	call ZXString16::Format
	add esp,0x10

 Block3:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x18],bl
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov eax,dword ptr [esp+0x28]
	mov esi,dword ptr [esp+0xC]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push ebx
	push eax
	push esi
	call CSoundMan::PlaySE
	mov dword ptr [esp+0x18],0xFFFFFFFF
	cmp esi,ebx
	je Block7

 Block6:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block7:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret
}
}
// make_gray_canvas
_SUB_EXCEPTION_HANDLER(55B5A0)
__SUB(0055B5A0, __cdecl, 80832,  void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55B5A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x40]
	xor ebp,ebp
	mov dword ptr [esp+0x38],ebp
	cmp eax,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x38]
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x18]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x3C]
	mov dword ptr [esp+0x20],ebp
	call eax
	cmp eax,ebp
	jge Block8

 Block7:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov ebx,dword ptr [esp+0x14]
	cmp ebx,ebp
	je Block30

 Block9:
	mov edi,dword ptr [esp+0x18]
	cmp edi,ebp
	je Block30

 Block10:
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x1C]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [esp+0x24],ebp
	call eax
	cmp eax,ebp
	jge Block14

 Block13:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	mov ecx,dword ptr [esp+0x1C]
	xor edx,edx
	lea eax,[ecx+ebx-1]
	div ebx
	mov dword ptr [esp+0x20],eax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x48]
	lea ecx,[esp+0x1C]
	push ecx
	push eax
	mov esi,eax
	mov dword ptr [esp+0x24],ebp
	call edx
	cmp eax,ebp
	jge Block18

 Block17:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	lea eax,[eax+edi-1]
	div edi
	mov dword ptr [esp+0x1C],ebp
	cmp eax,ebp
	mov dword ptr [esp+0x28],eax
	jle Block30

 Block19:
	xor ebx,ebx

 Block20:
	cmp dword ptr [esp+0x20],ebp
	jle Block29

 Block21:
	xor edi,edi

 Block22:
	mov ecx,dword ptr [esp+0x40]
	test ecx,ecx
	je Block1

 Block23:
	push ebx
	push edi
	lea edx,[esp+0x2C]
	push edx
	call IWzCanvas::GetrawCanvas
	mov esi,dword ptr [esp+0x24]
	push ecx
	mov eax,esp
	mov byte ptr [esp+0x3C],1
	mov dword ptr [esp+0x30],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block25

 Block24:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block25:
	call make_gray_raw_canvas
	add esp,4
	mov byte ptr [esp+0x38],0
	test esi,esi
	je Block27

 Block26:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block27:
	add edi,dword ptr [esp+0x14]
	inc ebp
	cmp ebp,dword ptr [esp+0x20]
	jl Block22

 Block28:
	mov eax,dword ptr [esp+0x28]
	mov edi,dword ptr [esp+0x18]
	xor ebp,ebp

 Block29:
	mov ecx,dword ptr [esp+0x1C]
	inc ecx
	add ebx,edi
	cmp ecx,eax
	mov dword ptr [esp+0x1C],ecx
	jl Block20

 Block30:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebp
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block32:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret
}
}
// make_SingleColor_alpha_blur
_SUB_EXCEPTION_HANDLER(55BC60)
__SUB(0055BC60, __cdecl, 80836,  void, NakedParam<_x_com_ptr<IWzCanvas>>, uint16_t, uint16_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55BC60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x40]
	xor ebx,ebx
	mov dword ptr [esp+0x38],ebx
	cmp eax,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x38]
	mov dword ptr [esp+0x1C],ebx
	call eax
	cmp eax,ebx
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x18]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x3C]
	mov dword ptr [esp+0x20],ebx
	call eax
	cmp eax,ebx
	jge Block8

 Block7:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov ebp,dword ptr [esp+0x14]
	cmp ebp,ebx
	je Block30

 Block9:
	mov edi,dword ptr [esp+0x18]
	cmp edi,ebx
	je Block30

 Block10:
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x1C]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [esp+0x24],ebx
	call eax
	cmp eax,ebx
	jge Block14

 Block13:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	mov ecx,dword ptr [esp+0x1C]
	xor edx,edx
	lea eax,[ecx+ebp-1]
	div ebp
	mov dword ptr [esp+0x20],eax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x48]
	lea ecx,[esp+0x1C]
	push ecx
	push eax
	mov esi,eax
	mov dword ptr [esp+0x24],ebx
	call edx
	cmp eax,ebx
	jge Block18

 Block17:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	lea eax,[eax+edi-1]
	div edi
	mov dword ptr [esp+0x1C],ebx
	cmp eax,ebx
	mov dword ptr [esp+0x28],eax
	jle Block30

 Block19:
	xor ebp,ebp

 Block20:
	cmp dword ptr [esp+0x20],ebx
	jle Block29

 Block21:
	xor edi,edi

 Block22:
	mov ecx,dword ptr [esp+0x40]
	test ecx,ecx
	je Block1

 Block23:
	push ebp
	push edi
	lea edx,[esp+0x2C]
	push edx
	call IWzCanvas::GetrawCanvas
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [esp+0x44]
	mov esi,dword ptr [esp+0x24]
	push eax
	push ecx
	push ecx
	mov eax,esp
	mov byte ptr [esp+0x44],1
	mov dword ptr [esp+0x38],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block25

 Block24:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block25:
	call make_SingleColor_alpha_blur_0
	add esp,0xC
	mov byte ptr [esp+0x38],0
	test esi,esi
	je Block27

 Block26:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block27:
	add edi,dword ptr [esp+0x14]
	inc ebx
	cmp ebx,dword ptr [esp+0x20]
	jl Block22

 Block28:
	mov eax,dword ptr [esp+0x28]
	mov edi,dword ptr [esp+0x18]
	xor ebx,ebx

 Block29:
	mov ecx,dword ptr [esp+0x1C]
	inc ecx
	add ebp,edi
	cmp ecx,eax
	mov dword ptr [esp+0x1C],ecx
	jl Block20

 Block30:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebx
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block32:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret
}
}
// make_SingleColor_alpha_blur
_SUB_EXCEPTION_HANDLER(55B790)
__SUB(0055B790, __cdecl, 80834,  void, NakedParam<_x_com_ptr<IWzRawCanvas>>, uint16_t, uint16_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55B790
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x60]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x70]
	xor ebx,ebx
	mov dword ptr [esp+0x68],ebx
	cmp eax,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x1C]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x18]
	mov dword ptr [esp+0x24],ebx
	call eax
	cmp eax,ebx
	jge Block4

 Block3:
	push offset __GUID_312126f0_c399_4111_8eab_0f96a30b6b7c
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [esp+0x70]
	cmp eax,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x38]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x14]
	mov dword ptr [esp+0x40],ebx
	call eax
	cmp eax,ebx
	jge Block8

 Block7:
	push offset __GUID_312126f0_c399_4111_8eab_0f96a30b6b7c
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov ecx,dword ptr [esp+0x70]
	cmp ecx,ebx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x54]
	push eax
	call IWzRawCanvas::_LockAddress
	mov esi,dword ptr [esp+0x38]
	mov edi,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x58]
	mov eax,esi
	imul eax,edi
	mov dword ptr [esp+0x28],ecx
	xor ecx,ecx
	mov edx,2
	mul edx
	seto cl
	mov byte ptr [esp+0x68],1
	neg ecx
	or eax,ecx
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp edi,esi
	mov dword ptr [esp+0x2C],eax
	mov eax,esi
	jl Block12

 Block11:
	mov eax,edi

 Block12:
	xor ecx,ecx
	mov edx,2
	mul edx
	seto cl
	neg ecx
	or eax,ecx
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp edi,esi
	mov dword ptr [esp+0x3C],eax
	mov eax,esi
	jl Block14

 Block13:
	mov eax,edi

 Block14:
	xor ecx,ecx
	mov edx,2
	mul edx
	seto cl
	neg ecx
	or eax,ecx
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	movzx eax,word ptr [esp+0x78]
	lea ebp,[eax+eax+1]
	mov edi,ebp
	shl edi,8
	xor ecx,ecx
	mov eax,edi
	mov edx,2
	mul edx
	seto cl
	neg ecx
	or eax,ecx
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	xor ecx,ecx
	cmp edi,ebx
	mov dword ptr [esp+0x30],eax
	jle Block16

 Block15:
	mov eax,ecx
	cdq
	idiv ebp
	mov edx,dword ptr [esp+0x30]
	inc ecx
	cmp ecx,edi
	mov word ptr [edx+ecx*2-2],ax
	jl Block15

 Block16:
	xor eax,eax
	cmp dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x44],ebx
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x18],eax
	jle Block33

 Block17:
	movzx eax,word ptr [esp+0x78]
	neg eax
	mov dword ptr [esp+0x20],eax

 Block18:
	movzx edi,word ptr [esp+0x78]
	xor ecx,ecx
	cmp eax,edi
	mov dword ptr [esp+0x14],ecx
	jg Block24

 Block19:
	lea esp,[esp]

 Block20:
	xor edx,edx
	test eax,eax
	setle dl
	lea ebp,[esi-1]
	dec edx
	and edx,eax
	cmp ebp,edx
	jge Block22

 Block21:
	mov edx,ebp

 Block22:
	mov ebp,dword ptr [esp+0x28]
	add edx,ebx
	movzx edx,word ptr [ebp+edx*2]
	shr edx,0xC
	inc eax
	add ecx,edx
	cmp eax,edi
	jle Block20

 Block23:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x14],ecx

 Block24:
	xor edi,edi
	test esi,esi
	jle Block32

 Block25:
	mov edx,dword ptr [esp+0x24]
	mov ebp,eax
	mov eax,dword ptr [esp+0x3C]
	sub eax,edx
	mov dword ptr [esp+0x40],eax

 Block26:
	cmp dword ptr [esp+0x18],0
	mov eax,dword ptr [esp+0x30]
	mov cx,word ptr [eax+ecx*2]
	mov eax,dword ptr [esp+0x2C]
	mov word ptr [eax+ebx*2],cx
	jne Block30

 Block27:
	movzx ecx,word ptr [esp+0x78]
	lea eax,[esi-1]
	lea ecx,[ecx+edi+1]
	cmp ecx,eax
	jge Block29

 Block28:
	mov eax,ecx

 Block29:
	mov ecx,dword ptr [esp+0x40]
	mov word ptr [ecx+edx],ax
	xor eax,eax
	test ebp,ebp
	setle al
	dec eax
	and eax,ebp
	mov word ptr [edx],ax

 Block30:
	mov eax,dword ptr [esp+0x40]
	movzx eax,word ptr [eax+edx]
	mov ecx,dword ptr [esp+0x34]
	mov ebx,dword ptr [esp+0x28]
	add eax,ecx
	movzx eax,word ptr [ebx+eax*2]
	movzx ebx,word ptr [edx]
	add ebx,ecx
	mov ecx,dword ptr [esp+0x28]
	movzx ecx,word ptr [ecx+ebx*2]
	mov ebx,dword ptr [esp+0x44]
	and ecx,0xF000
	and eax,0xF000
	sub eax,ecx
	mov ecx,dword ptr [esp+0x14]
	sar eax,0xC
	add ecx,eax
	inc ebx
	inc edi
	inc ebp
	add edx,2
	cmp edi,esi
	mov dword ptr [esp+0x14],ecx
	mov dword ptr [esp+0x44],ebx
	jl Block26

 Block31:
	mov eax,dword ptr [esp+0x20]

 Block32:
	mov ecx,dword ptr [esp+0x18]
	add dword ptr [esp+0x34],esi
	inc ecx
	cmp ecx,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x18],ecx
	jl Block18

 Block33:
	xor ecx,ecx
	test esi,esi
	jle Block51

 Block34:
	movzx edi,word ptr [esp+0x78]
	mov eax,edi
	imul eax,esi
	neg eax
	neg edi
	mov dword ptr [esp+0x44],eax
	mov dword ptr [esp+0x20],edi

 Block35:
	movzx ebp,word ptr [esp+0x78]
	xor ebx,ebx
	cmp edi,ebp
	mov dword ptr [esp+0x14],ebx
	jg Block39

 Block36:
	sub ebp,edi
	inc ebp

 Block37:
	mov edi,dword ptr [esp+0x2C]
	xor edx,edx
	test eax,eax
	setl dl
	dec edx
	and edx,eax
	add edx,ecx
	movzx edx,word ptr [edi+edx*2]
	add ebx,edx
	add eax,esi
	sub ebp,1
	jne Block37

 Block38:
	mov eax,dword ptr [esp+0x44]
	mov edi,dword ptr [esp+0x20]
	mov dword ptr [esp+0x14],ebx

 Block39:
	cmp dword ptr [esp+0x1C],0
	mov dword ptr [esp+0x18],0
	jle Block50

 Block40:
	mov eax,dword ptr [esp+0x74]
	mov edx,dword ptr [esp+0x28]
	mov ebp,dword ptr [esp+0x3C]
	and eax,0xFFF
	mov dword ptr [esp+0x40],eax
	mov eax,dword ptr [esp+0x24]
	lea edx,[edx+ecx*2]
	mov dword ptr [esp+0x34],edx
	sub ebp,eax
	jmp Block44

 Block43:
	mov ebx,dword ptr [esp+0x14]

 Block44:
	mov edx,dword ptr [esp+0x30]
	mov dx,word ptr [edx+ebx*2]
	mov ebx,dword ptr [esp+0x34]
	shl dx,0xC
	or dx,word ptr [esp+0x40]
	mov word ptr [ebx],dx
	test ecx,ecx
	jne Block48

 Block45:
	mov edx,dword ptr [esp+0x1C]
	mov ebx,dword ptr [esp+0x18]
	dec edx
	mov dword ptr [esp+0x48],edx
	movzx edx,word ptr [esp+0x78]
	lea edx,[edx+ebx+1]
	mov ebx,dword ptr [esp+0x48]
	cmp edx,ebx
	jl Block47

 Block46:
	mov edx,ebx

 Block47:
	imul edx,esi
	mov word ptr [eax+ebp],dx
	xor edx,edx
	test edi,edi
	setle dl
	dec edx
	and edx,edi
	imul edx,esi
	mov word ptr [eax],dx

 Block48:
	mov dx,word ptr [eax+ebp]
	mov si,word ptr [eax]
	add dx,cx
	movzx edx,dx
	add si,cx
	movzx esi,si
	movzx edx,dx
	movzx ebx,si
	mov esi,dword ptr [esp+0x2C]
	movzx edx,word ptr [esi+edx*2]
	movzx ebx,word ptr [esi+ebx*2]
	mov esi,dword ptr [esp+0x38]
	sub edx,ebx
	add dword ptr [esp+0x14],edx
	lea edx,[esi+esi]
	add dword ptr [esp+0x34],edx
	mov edx,dword ptr [esp+0x18]
	inc edx
	inc edi
	add eax,2
	cmp edx,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x18],edx
	jl Block43

 Block49:
	mov edi,dword ptr [esp+0x20]
	mov eax,dword ptr [esp+0x44]

 Block50:
	inc ecx
	cmp ecx,esi
	jl Block35

 Block51:
	mov eax,dword ptr [esp+0x2C]
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free
	mov ecx,dword ptr [esp+0x3C]
	push ecx
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free
	mov edx,dword ptr [esp+0x24]
	push edx
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free
	mov eax,dword ptr [esp+0x30]
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x20]
	push 0
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block55

 Block54:
	push offset __GUID_312126f0_c399_4111_8eab_0f96a30b6b7c
	push esi
	push eax
	call _com_issue_errorex

 Block55:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x68],0
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov eax,dword ptr [esp+0x70]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test eax,eax
	je Block61

 Block60:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block61:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret
}
}
// get_labeled_sub
_SUB_EXCEPTION_HANDLER(55D660)
__SUB(0055D660, __cdecl, 80858,  _x_com_ptr<IWzProperty>, NakedParam<_x_com_ptr<IWzProperty>>, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55D660
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [ebp-0x14],ebx
	lea eax,[ebx+0x20]
	mov dword ptr [ebp-4],ebx
	call __chkstk
	mov eax,esp
	push ebx
	push ebx
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x10]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],1
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	mov esi,dword ptr [ebp+8]
	push eax
	mov ecx,esi
	mov dword ptr [esi],ebx
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
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],bl
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	cmp eax,ebx
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,ebx
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block11:
	mov eax,esi
	lea esp,[ebp-0x30]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
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
// format_string
_SUB_EXCEPTION_HANDLER(566080)
__SUB(00566080, __cdecl, 80896,  int32_t, ZXString16&, NakedParam<_x_com_ptr<IWzFont>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_566080
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	lea eax,[esp+0x18]
	xor ebx,ebx
	push eax
	mov dword ptr [esp+0x34],ebx
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	mov edi,dword ptr [esp+0x40]
	mov esi,dword ptr [esp+0x38]
	mov eax,dword ptr [esi]
	lea edx,[esp+0x18]
	push edx
	push edi
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x40],1
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],2
	cmp ecx,ebx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov byte ptr [esp+0x3C],1
	call IWzFont::CalcLongestText
	mov ecx,dword ptr [esi]
	cmp ecx,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [ecx-4]
	shr ecx,1
	jmp Block7

 Block6:
	xor ecx,ecx

 Block7:
	cmp eax,ecx
	sete byte ptr [esp+0x13]
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x30],bl
	jne Block10

 Block8:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebx
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block11:
	cmp byte ptr [esp+0x13],bl
	je Block15

 Block12:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block14

 Block13:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block14:
	xor eax,eax
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret

 Block15:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	lea eax,[esp+0x18]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x8B8
	push ecx
	mov byte ptr [esp+0x40],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x44]
	mov byte ptr [esp+0x38],4
	cmp ecx,ebx
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	mov byte ptr [esp+0x38],3
	call IWzFont::CalcTextWidth
	sub edi,eax
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x30],bl
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	cmp eax,ebx
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block23:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [esi]
	push edi
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x40],5
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],6
	cmp ecx,ebx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov byte ptr [esp+0x3C],5
	call IWzFont::CalcLongestText
	cmp word ptr [esp+0x18],8
	mov edi,eax
	mov byte ptr [esp+0x30],bl
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebx
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	push edi
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	call ZXString16::Left
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x34],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block33:
	push ebx
	mov ecx,esi
	call ZXString16::TrimRight
	lea ecx,[esp+0x14]
	push 0x8B8
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x30],8
	cmp eax,ebx
	je Block35

 Block34:
	mov ecx,dword ptr [eax-4]
	shr ecx,1
	jmp Block36

 Block35:
	xor ecx,ecx

 Block36:
	push ecx
	push eax
	mov ecx,esi
	call ZXString16::_Cat
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block38:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block40:
	mov eax,1
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret
}
}
// separate_string_by_width
_SUB_EXCEPTION_HANDLER(564CA0)
__SUB(00564CA0, __cdecl, 80881,  void, ZArray<ZXString<char> >&, NakedParam<ZXString<char>>, long, NakedParam<_x_com_ptr<IWzFont>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_564CA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x88
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x9C]
	mov dword ptr fs:[0],eax
	xor edi,edi
	cmp dword ptr [esp+0xB8],edi
	mov dword ptr [esp+0xA4],1
	sete al
	test al,al
	je Block8

 Block1:
	lea eax,[esp+0x28]
	push 1
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0xC0]
	add esp,8
	cmp ecx,eax
	je Block6

 Block2:
	mov esi,ecx
	mov dword ptr [esp+0xB8],eax
	cmp eax,edi
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	cmp esi,edi
	je Block6

 Block5:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block6:
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block8:
	mov esi,dword ptr [esp+0xAC]
	mov ecx,esi
	call ZArray<ZXString<char>>::RemoveAll
	lea ecx,[esp+0x14]
	push ecx
	push 1
	mov ecx,esi
	call ZArray<ZXString<char>>::_Alloc
	mov ebp,dword ptr [esp+0xB0]
	mov eax,0x270F
	lea edx,[esp+0x4C]
	mov dword ptr [esp+0x4C],eax
	mov dword ptr [esp+0x50],eax
	mov dword ptr [esp+0x54],eax
	mov dword ptr [esp+0x58],eax
	mov dword ptr [esp+0x5C],eax
	mov dword ptr [esp+0x60],eax
	mov dword ptr [esp+0x64],eax
	mov dword ptr [esp+0x68],eax
	mov dword ptr [esp+0x6C],eax
	mov dword ptr [esp+0x70],eax
	mov dword ptr [esp+0x74],eax
	mov dword ptr [esp+0x78],eax
	mov dword ptr [esp+0x7C],eax
	mov dword ptr [esp+0x80],eax
	mov dword ptr [esp+0x84],eax
	mov dword ptr [esp+0x88],eax
	mov dword ptr [esp+0x8C],eax
	mov dword ptr [esp+0x90],eax
	mov dword ptr [esp+0x94],eax
	mov dword ptr [esp+0x98],eax
	mov dword ptr [esp+0x28],edi
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esp+0x24],edi
	mov dword ptr [esp+0x20],edx

 Block9:
	test ebp,ebp
	je Block11

 Block10:
	mov eax,dword ptr [ebp-4]
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	cmp edi,eax
	mov ecx,esi
	jge Block44

 Block13:
	call ZArray<ZXString<char>>::GetCount
	mov ecx,dword ptr [esi]
	mov ebx,eax
	mov al,byte ptr [edi+ebp]
	dec ebx
	push 1
	lea edx,[esp+0x18]
	lea edi,[ebx*4]
	add ecx,edi
	push edx
	mov byte ptr [esp+0x1C],al
	call ZXString<char>::_Cat
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block42

 Block14:
	mov eax,dword ptr [esi]
	lea edx,[esp+0x3C]
	push edx
	push ecx
	add eax,edi
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xB0],2
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0xC0]
	mov byte ptr [esp+0xAC],3
	test ecx,ecx
	je Block43

 Block15:
	mov byte ptr [esp+0xAC],2
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x3C],8
	mov ebp,eax
	mov dword ptr [esp+0x18],ebp
	mov byte ptr [esp+0xA4],1
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0xB4]
	mov eax,dword ptr [esp+0x24]
	add ebp,edx
	cmp ebp,ecx
	mov ebp,dword ptr [esp+0xB0]
	jle Block34

 Block20:
	cmp byte ptr [eax+ebp+1],0x20
	je Block34

 Block21:
	lea ecx,[eax+1]
	cmp byte ptr [ecx+ebp],0x20
	lea eax,[ecx+ebp]
	mov dword ptr [esp+0x18],ecx
	je Block32

 Block22:
	mov ecx,dword ptr [esi]
	mov al,byte ptr [eax]
	push 1
	lea edx,[esp+0x18]
	add ecx,edi
	push edx
	mov byte ptr [esp+0x1C],al
	call ZXString<char>::_Cat
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block42

 Block23:
	mov eax,dword ptr [esi]
	lea edx,[esp+0x2C]
	push edx
	push ecx
	add eax,edi
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xB0],4
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0xC0]
	mov byte ptr [esp+0xAC],5
	test ecx,ecx
	je Block43

 Block24:
	mov byte ptr [esp+0xAC],4
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x2C],8
	mov ebp,eax
	mov dword ptr [esp+0x28],ebp
	mov byte ptr [esp+0xA4],1
	jne Block27

 Block25:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0xB4]
	lea eax,[ebp+edx*2]
	lea edx,[ecx+ecx]
	cmp eax,edx
	jg Block31

 Block29:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0xB0]
	dec eax
	mov dword ptr [esp+0x18],eax
	add eax,ecx
	cmp byte ptr [eax],0x20
	jne Block22

 Block30:
	mov ecx,dword ptr [esp+0x18]
	jmp Block33

 Block31:
	mov eax,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [eax],edx
	add eax,4
	mov dword ptr [esp+0x20],eax
	lea eax,[esp+0x14]
	push eax
	jmp Block39

 Block32:
	mov ebp,dword ptr [esp+0x28]

 Block33:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [eax],ecx
	lea ecx,[esp+0x14]
	push ecx
	push 0
	add eax,4
	add ebx,2
	push ebx
	mov ecx,esi
	mov dword ptr [esp+0x2C],eax
	call ZArray<ZXString<char>>::_Realloc
	sub ebp,dword ptr [esp+0xB4]
	mov edx,dword ptr [esp+0x1C]
	lea eax,[edx+ebp-1]
	mov dword ptr [esp+0x1C],eax
	jmp Block40

 Block34:
	cmp dword ptr [esp+0x18],ecx
	jle Block36

 Block35:
	cmp byte ptr [eax+ebp+1],0x20
	je Block38

 Block36:
	cmp byte ptr [eax+ebp],0xD
	jne Block41

 Block37:
	cmp byte ptr [eax+ebp+1],0xA
	jne Block41

 Block38:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [ecx],eax
	add ecx,4
	mov dword ptr [esp+0x20],ecx
	lea ecx,[esp+0x14]
	push ecx

 Block39:
	push 0
	add ebx,2
	push ebx
	mov ecx,esi
	call ZArray<ZXString<char>>::_Realloc
	mov dword ptr [esp+0x1C],0

 Block40:
	mov ebp,dword ptr [esp+0xB0]
	mov eax,dword ptr [esp+0x24]

 Block41:
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [edx],eax
	inc eax
	mov dword ptr [esp+0x24],eax
	mov edi,eax
	jmp Block9

 Block42:
	push eax
	call _com_issue_error

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	call ZArray<ZXString<char>>::RemoveAll
	lea eax,[esp+0x14]
	push eax
	push 1
	mov ecx,esi
	call ZArray<ZXString<char>>::_Alloc
	xor eax,eax
	xor ebx,ebx
	cmp dword ptr [esp+0x4C],0x270F
	mov dword ptr [esp+0x28],eax
	je Block61

 Block45:
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x18],ecx

 Block46:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edx]
	mov dword ptr [esp+0x20],eax
	inc eax
	cmp ebx,eax
	jge Block60

 Block47:
	mov ecx,esi
	call ZArray<ZXString<char>>::GetCount
	mov ecx,dword ptr [esp+0xB0]
	mov ebp,eax
	mov al,byte ptr [ebx+ecx]
	dec ebp
	cmp al,0xD
	jne Block50

 Block48:
	cmp byte ptr [ebx+ecx+1],0xA
	jne Block50

 Block49:
	lea eax,[esp+0x14]
	push eax
	push 0
	add ebp,2
	push ebp
	mov ecx,esi
	call ZArray<ZXString<char>>::_Realloc
	inc ebx
	jmp Block59

 Block50:
	mov ecx,dword ptr [esi]
	push 1
	lea edx,[esp+0x18]
	lea edi,[ebp*4]
	add ecx,edi
	push edx
	mov byte ptr [esp+0x1C],al
	call ZXString<char>::_Cat
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block42

 Block51:
	mov eax,dword ptr [esi]
	lea edx,[esp+0x2C]
	push edx
	push ecx
	add eax,edi
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xB0],6
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0xC0]
	mov byte ptr [esp+0xAC],7
	test ecx,ecx
	je Block43

 Block52:
	mov byte ptr [esp+0xAC],6
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xA4],1
	jne Block55

 Block53:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	cmp ebx,dword ptr [esp+0x20]
	jne Block59

 Block57:
	mov edx,dword ptr [esp+0x1C]
	cmp dword ptr [esp+edx+0x50],0x270F
	je Block59

 Block58:
	lea eax,[esp+0x14]
	push eax
	push 0
	add ebp,2
	push ebp
	mov ecx,esi
	call ZArray<ZXString<char>>::_Realloc

 Block59:
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [ecx]
	inc ebx
	inc edx
	cmp ebx,edx
	jl Block47

 Block60:
	mov eax,dword ptr [esp+0x28]
	inc eax
	mov dword ptr [esp+0x28],eax
	add eax,eax
	add eax,eax
	cmp dword ptr [esp+eax+0x4C],0x270F
	mov dword ptr [esp+0x1C],eax
	lea eax,[esp+eax+0x4C]
	mov dword ptr [esp+0x18],eax
	jne Block46

 Block61:
	mov eax,dword ptr [esp+0xB0]
	mov byte ptr [esp+0xA4],0
	test eax,eax
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block63:
	mov eax,dword ptr [esp+0xB8]
	mov dword ptr [esp+0xA4],0xFFFFFFFF
	test eax,eax
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block65:
	mov ecx,dword ptr [esp+0x9C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x94
	ret
}
}
// find_executable
_SUB_EXCEPTION_HANDLER(55D2B0)
__SUB(0055D2B0, __cdecl, 80857,  ZXString<char>, const ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55D2B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x120
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x11C],eax
	push ebx
	push ebp
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x130]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x140]
	mov eax,dword ptr [esp+0x144]
	mov dword ptr [esp+0x1C],0
	mov dword ptr [esp+0x24],esi
	mov dword ptr [esp+0x10],0
	mov eax,dword ptr [eax]
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	push eax
	mov ebx,1
	mov ebp,0x104
	push 0x80000000
	mov dword ptr [esp+0x148],ebx
	mov dword ptr [esp+0x28],ebp
	call RegQueryValueA
	test eax,eax
	je Block2

 Block1:
	lea eax,[esp+0x10]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	jmp Block20

 Block2:
	mov dword ptr [esp+0x20],0
	lea ecx,[esp+0x14]
	push 0x8B1
	push ecx
	mov byte ptr [esp+0x140],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	lea edx,[esp+0x28]
	push edx
	push eax
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x144],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x138],2
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x2C]
	mov dword ptr [esp+0x1C],ebp
	mov ebp,dword ptr [esp+0x24]
	push edx
	push ebp
	push 0x80000000
	call RegQueryValueA
	test eax,eax
	je Block7

 Block5:
	lea eax,[esp+0x10]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x1C],ebx
	mov byte ptr [esp+0x138],1
	test ebp,ebp
	je Block20

 Block6:
	add ebp,0xFFFFFFF4
	push ebp
	jmp Block19

 Block7:
	lea ecx,[esp+0x28]
	push ecx
	lea ecx,[esp+0x14]
	call ZXString<char>::AssignCStr
	lea edx,[esp+0x14]
	push 0x8B2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::Find__0
	cmp eax,0xFFFFFFFF
	mov eax,dword ptr [esp+0x14]
	sete bl
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	test bl,bl
	je Block15

 Block10:
	lea eax,[esp+0x14]
	push 0x8B3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x138],4
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax-4]
	jmp Block13

 Block12:
	xor ecx,ecx

 Block13:
	push ecx
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x138],2
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x1C],1
	mov byte ptr [esp+0x138],1
	test ebp,ebp
	je Block17

 Block16:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x138],0
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFF4
	push eax

 Block19:
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov eax,esi
	mov ecx,dword ptr [esp+0x130]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	mov ecx,dword ptr [esp+0x11C]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x12C
	ret
}
}
// draw_text_by_image
_SUB_EXCEPTION_HANDLER(565410)
__SUB(00565410, __cdecl, 80886,  long, NakedParam<_x_com_ptr<IWzCanvas>>, long, long, NakedParam<ZXString<char>>, NakedParam<_x_com_ptr<IWzProperty>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_565410
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x60]
	mov dword ptr fs:[0],eax
	mov ebp,dword ptr [esp+0x74]
	mov ebx,dword ptr [esp+0x84]
	mov dword ptr [esp+0x68],2
	mov dword ptr [esp+0x14],ebp
	xor eax,eax

 Block1:
	mov edx,dword ptr [esp+0x7C]
	test edx,edx
	je Block3

 Block2:
	mov ecx,dword ptr [edx-4]
	jmp Block4

 Block3:
	xor ecx,ecx

 Block4:
	cmp eax,ecx
	jge Block40

 Block5:
	lea esi,[eax+1]
	push esi
	push eax
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x88]
	mov dword ptr [esp+0x34],esi
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x70],3
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x84]
	mov byte ptr [esp+0x6C],4
	test ecx,ecx
	je Block38

 Block6:
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0x70],3
	call IWzProperty::Getitem
	push eax
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x70],5
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [esp+0x6C],6
	mov dword ptr [esp+0x1C],0
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	test eax,eax
	jge Block10

 Block9:
	cmp eax,0x80004002
	jne Block39

 Block10:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x68],8
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x68],9
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x68],0xA
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov edi,dword ptr [esp+0x18]
	test edi,edi
	sete al
	test al,al
	je Block24

 Block19:
	push 5
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0xAA3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x88]
	mov byte ptr [esp+0x70],0xB
	test ecx,ecx
	je Block38

 Block20:
	lea eax,[esp+0x58]
	push eax
	mov byte ptr [esp+0x74],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x70],0xC
	call get_int32
	add eax,ebx
	add ebp,eax
	add esp,8
	cmp word ptr [esp+0x50],8
	mov dword ptr [esp+0x14],ebp
	mov byte ptr [esp+0x68],0xA
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block35

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block23:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block35

 Block24:
	mov eax,3
	mov edx,0xFF
	mov word ptr [esp+0x30],ax
	mov dword ptr [esp+0x38],edx
	mov ecx,dword ptr [esp+0x70]
	mov byte ptr [esp+0x68],0xD
	test ecx,ecx
	je Block38

 Block25:
	mov ebp,dword ptr [esp+0x30]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x44]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x24]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x4C]
	push edi
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x8C]
	push eax
	push ebp
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	call ecx
	test eax,eax
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x68],0xA
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block31:
	test edi,edi
	je Block38

 Block32:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x1C]
	push edx
	push edi
	mov dword ptr [esp+0x24],0
	call eax
	test eax,eax
	jge Block34

 Block33:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block34:
	mov ecx,dword ptr [esp+0x1C]
	mov ebx,dword ptr [esp+0x84]
	mov esi,dword ptr [esp+0x28]
	add ecx,ebx
	add ebp,ecx
	mov dword ptr [esp+0x14],ebp

 Block35:
	mov byte ptr [esp+0x68],2
	test edi,edi
	je Block37

 Block36:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block37:
	mov eax,esi
	jmp Block1

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	push eax
	call _com_issue_error

 Block40:
	sub ebp,dword ptr [esp+0x74]
	mov eax,dword ptr [esp+0x70]
	mov esi,ebp
	mov byte ptr [esp+0x68],1
	test eax,eax
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov edx,dword ptr [esp+0x7C]

 Block42:
	mov byte ptr [esp+0x68],0
	test edx,edx
	je Block44

 Block43:
	add edx,0xFFFFFFF4
	push edx
	call ZXString<char>::_Release
	add esp,4

 Block44:
	mov eax,dword ptr [esp+0x80]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test eax,eax
	je Block46

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block46:
	mov eax,esi
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret
}
}
