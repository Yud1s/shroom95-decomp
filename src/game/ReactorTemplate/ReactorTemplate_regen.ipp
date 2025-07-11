#include "regen.hpp"
// ReactorTemplate.ipp
#include "ReactorTemplate.hpp"

// CReactorTemplate::Load
_SUB_EXCEPTION_HANDLER(2D2AB0)
__SUB0(002D2AB0, __cdecl, 77046,  void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D2AB0
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+4]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret
}
}
// CReactorTemplate::GetStateInfo
__SUB_CLASS_THIS(002D0300, __thiscall, 77042,  CReactorTemplate, ZRef<CReactorTemplate::STATEINFO>*, ZRef<CReactorTemplate::STATEINFO>*, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0xC]
	xor edx,edx
	cmp eax,edx
	mov dword ptr [esp],edx
	jl Block5

 Block1:
	cmp eax,dword ptr [ecx+0x10]
	jge Block5

 Block2:
	mov ecx,dword ptr [ecx+0x28]
	mov eax,dword ptr [ecx+eax*8+4]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esi+4],eax
	cmp eax,edx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov eax,esi
	pop esi
	pop ecx
	ret 8

 Block5:
	mov eax,dword ptr [esp+8]
	mov dword ptr [eax+4],edx
	pop ecx
	ret 8
}
}
// CReactorTemplate::GetTemplateProp
_SUB_EXCEPTION_HANDLER(2D0670)
__SUB_CLASS_THIS(002D0670, __thiscall, 77044,  CReactorTemplate, _x_com_ptr<IWzProperty>*, _x_com_ptr<IWzProperty>*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D0670
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x98
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xAC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x28],ebp
	cmp dword ptr [esi+0xC],ebp
	jne Block2

 Block1:
	mov eax,dword ptr [esp+0xBC]
	mov dword ptr [eax],ebp
	jmp Block89

 Block2:
	mov dword ptr [esp+0x1C],ebp
	lea eax,[esp+0x18]
	push 0xC32
	push eax
	mov dword ptr [esp+0xBC],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esi+0xC]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0xC0],2
	call ZXString16::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0xB4],1
	cmp eax,ebp
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x6C]
	push eax
	call esi
	lea ecx,[esp+0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea edx,[esp+0x4C]
	push edx
	mov byte ptr [esp+0xB8],3
	call esi
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	mov eax,dword ptr [esp+0x1C]
	push ebp
	push ebp
	lea ecx,[esp+0x74]
	push ecx
	lea edx,[esp+0x58]
	push edx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,4
	push eax
	mov byte ptr [esp+0xCC],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xC8],5
	cmp dword ptr [_D_G_RM],ebp
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea ecx,[esp+0x90]
	push ecx
	mov byte ptr [esp+0xCC],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xBC],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block13

 Block11:
	cmp eax,0x80004002
	je Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	mov edi,8
	mov byte ptr [esp+0xB4],8
	cmp word ptr [esp+0x7C],di
	jne Block20

 Block14:
	mov eax,dword ptr [esp+0x84]
	xor edx,edx
	mov word ptr [esp+0x7C],dx
	cmp eax,ebp
	je Block16

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block16:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [esp+0xB4],9
	cmp word ptr [esp+0x4C],di
	jne Block21

 Block18:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	cmp eax,ebp
	je Block22

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block20:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x7C]
	push eax
	call ebx
	jmp Block17

 Block21:
	lea edx,[esp+0x4C]
	push edx
	call ebx

 Block22:
	mov byte ptr [esp+0xB4],0xA
	cmp word ptr [esp+0x6C],di
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	cmp eax,ebp
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[esp+0x6C]
	push ecx
	call ebx

 Block26:
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x3D5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xC0],0xB
	cmp edi,ebp
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea eax,[esp+0x98]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xC4],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xBC],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block31

 Block29:
	cmp eax,0x80004002
	je Block31

 Block30:
	push eax
	call _com_issue_error

 Block31:
	cmp word ptr [esp+0x8C],8
	mov byte ptr [esp+0xB4],0xE
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x94]
	xor ecx,ecx
	mov word ptr [esp+0x8C],cx
	cmp eax,ebp
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[esp+0x8C]
	push edx
	call ebx

 Block35:
	mov ebp,dword ptr [esp+0x18]
	test ebp,ebp
	sete al
	test al,al
	je Block41

 Block36:
	mov esi,dword ptr [esp+0xBC]
	mov dword ptr [esi],0
	mov dword ptr [esp+0x28],1
	mov byte ptr [esp+0xB4],0xA
	test ebp,ebp
	je Block38

 Block37:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block38:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0xB8],1
	call eax
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB4],0
	test eax,eax
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block40:
	mov eax,esi
	jmp Block89

 Block41:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x3D6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xB8],0xF
	test ebp,ebp
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	lea edx,[esp+0x30]
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0xBC],0xE
	call IWzProperty::Getitem
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xB4],0x10
	jne Block78

 Block44:
	mov dword ptr [esp+0x24],0
	lea eax,[esp+0x14]
	push 0xC30
	push eax
	mov byte ptr [esp+0xBC],0x11
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x34]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0xC0],0x12
	call ZXString16::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0xB4],0x11
	test eax,eax
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block46:
	lea eax,[esp+0x3C]
	push eax
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	lea edx,[esp+0x5C]
	push edx
	mov byte ptr [esp+0xB8],0x13
	call esi
	lea eax,[esp+0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	mov eax,dword ptr [esp+0x24]
	push 0
	push 0
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x68]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0x14
	push eax
	mov byte ptr [esp+0xCC],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xC8],0x15
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	lea ecx,[esp+0xB0]
	push ecx
	mov byte ptr [esp+0xCC],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xBC],0x16
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block55

 Block53:
	cmp eax,0x80004002
	je Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	mov esi,8
	mov byte ptr [esp+0xB4],0x18
	cmp word ptr [esp+0x9C],si
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0xA4]
	xor edx,edx
	mov word ptr [esp+0x9C],dx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[esp+0x9C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov byte ptr [esp+0xB4],0x19
	cmp word ptr [esp+0x5C],si
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[esp+0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov byte ptr [esp+0xB4],0x1A
	cmp word ptr [esp+0x3C],si
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov esi,dword ptr [esp+0x14]
	test esi,esi
	sete al
	test al,al
	je Block73

 Block68:
	mov ebx,dword ptr [esp+0xBC]
	mov dword ptr [ebx],0
	mov dword ptr [esp+0x28],1
	mov byte ptr [esp+0xB4],0x11
	test esi,esi
	je Block70

 Block69:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block70:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xB4],0x10
	test eax,eax
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block72:
	lea ecx,[esp+0x2C]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0xB8],0xA
	call edx
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0xB8],1
	call ecx
	jmp Block86

 Block73:
	lea edx,[esp+0x14]
	push edx
	lea ecx,[esp+0x24]
	call _x_com_ptr<IWzProperty>::op_assign_copy
	mov byte ptr [esp+0xB4],0x11
	test esi,esi
	je Block75

 Block74:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block75:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xB4],0x10
	test eax,eax
	je Block77

 Block76:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block77:
	mov edi,dword ptr [esp+0x20]

 Block78:
	mov ebx,dword ptr [esp+0xBC]
	mov dword ptr [ebx],edi
	test edi,edi
	je Block80

 Block79:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block80:
	cmp word ptr [esp+0x2C],8
	mov dword ptr [esp+0x28],1
	mov byte ptr [esp+0xB4],0xE
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0xB8],0xA
	call ecx
	mov byte ptr [esp+0xB4],1
	test edi,edi
	je Block86

 Block85:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block86:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB4],0
	test eax,eax
	je Block88

 Block87:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block88:
	mov eax,ebx

 Block89:
	mov ecx,dword ptr [esp+0xAC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA4
	ret 4
}
}
// CReactorTemplate::GetHitProp
_SUB_EXCEPTION_HANDLER(2D0D80)
__SUB_CLASS_THIS(002D0D80, __thiscall, 77045,  CReactorTemplate, _x_com_ptr<IWzProperty>*, _x_com_ptr<IWzProperty>*, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D0D80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
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
	lea eax,[ebp-0x18]
	xor ebx,ebx
	push eax
	mov dword ptr [ebp-0x1C],ebx
	call CReactorTemplate::GetTemplateProp
	mov edi,dword ptr [ebp+0xC]
	push edi
	lea ecx,[ebp-0x48]
	push ecx
	mov ecx,esi
	mov dword ptr [ebp-4],1
	call CReactorTemplate::GetStateInfo
	cmp dword ptr [ebp+0x10],ebx
	mov byte ptr [ebp-4],2
	jl Block81

 Block1:
	lea eax,[ebx+0x20]
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],3
	test ecx,ecx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[ebp-0x5C]
	push edx
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp-0x4C]
	push eax
	mov byte ptr [ebp-4],4
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],5
	mov dword ptr [ebp-0x2C],0
	mov dword ptr [ebp-0x14],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block5:
	lea ecx,[ebp-0x2C]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	test eax,eax
	jge Block8

 Block6:
	cmp eax,0x80004002
	je Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	mov eax,dword ptr [ebp-0x4C]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],8
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov esi,dword ptr [ebp-0x44]
	mov edi,dword ptr [ebp-0x2C]
	test esi,esi
	je Block64

 Block15:
	test edi,edi
	sete al
	test al,al
	jne Block64

 Block16:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block18

 Block17:
	mov esi,dword ptr [ebp+0x10]
	cmp esi,dword ptr [eax-4]
	jb Block41

 Block18:
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x1AB7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0xC
	test ecx,ecx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea eax,[ebp-0x40]
	push eax
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp-0x30]
	push ecx
	mov byte ptr [ebp-4],0xD
	call get_unknown
	add esp,8
	push eax
	lea ecx,[ebp-0x20]
	mov byte ptr [ebp-4],0xE
	call _x_com_ptr<IWzProperty>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp-0x30]
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block22

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block22:
	lea ecx,[ebp-0x40]
	mov byte ptr [ebp-4],0x11
	call Ztl_variant_t::~Ztl_variant_t
	cmp dword ptr [ebp-0x20],0
	je Block24

 Block23:
	lea eax,[ebp-0x20]
	jmp Block27

 Block24:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x24],esp
	push 0x1AB7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x12
	test edi,edi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[ebp-0x6C]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x11
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp-0x14]
	push eax
	mov byte ptr [ebp-4],0x13
	mov dword ptr [ebp-0x1C],2
	call get_unknown
	add esp,8
	push eax
	lea ecx,[ebp-0x28]
	mov dword ptr [ebp-4],0x14
	mov dword ptr [ebp-0x1C],6
	call _x_com_ptr<IWzProperty>::CreateFromUnknownComPtr
	mov ebx,0xE

 Block27:
	mov esi,dword ptr [ebp+8]
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzProperty>::_ctor_copy
	or ebx,1
	mov dword ptr [ebp-0x1C],ebx
	test bl,8
	je Block30

 Block28:
	mov eax,dword ptr [ebp-0x28]
	and ebx,0xFFFFFFF7
	mov dword ptr [ebp-0x1C],ebx
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	mov dword ptr [ebp-4],0x13
	test bl,4
	je Block33

 Block31:
	mov eax,dword ptr [ebp-0x14]
	and ebx,0xFFFFFFFB
	mov dword ptr [ebp-0x1C],ebx
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	mov dword ptr [ebp-4],0x11
	test bl,2
	je Block35

 Block34:
	and ebx,0xFFFFFFFD
	lea ecx,[ebp-0x6C]
	mov dword ptr [ebp-0x1C],ebx
	call Ztl_variant_t::~Ztl_variant_t

 Block35:
	mov eax,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	mov byte ptr [ebp-4],2
	test edi,edi
	je Block39

 Block38:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block39:
	lea ecx,[ebp-0x48]
	mov byte ptr [ebp-4],1
	call ZRef<CReactorTemplate::STATEINFO>::~ZRef<CReactorTemplate::STATEINFO>
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block104

 Block40:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block104

 Block41:
	mov dword ptr [ebp-0x30],0
	lea ecx,[ebp-0x14]
	push 0xC34
	push ecx
	mov byte ptr [ebp-4],0x15
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[ebp-0x30]
	push edx
	mov byte ptr [ebp-4],0x16
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x14]
	add esp,0xC
	mov byte ptr [ebp-4],0x15
	test eax,eax
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block43:
	mov eax,dword ptr [ebp-0x30]
	push ecx
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x17
	test edi,edi
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	lea ecx,[ebp-0x6C]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	push eax
	lea edx,[ebp-0x14]
	push edx
	mov byte ptr [ebp-4],0x18
	call get_unknown
	add esp,8
	push eax
	lea ecx,[ebp-0x20]
	mov byte ptr [ebp-4],0x19
	call _x_com_ptr<IWzProperty>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0x1B
	test eax,eax
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block47:
	lea ecx,[ebp-0x6C]
	mov byte ptr [ebp-4],0x1C
	call Ztl_variant_t::~Ztl_variant_t
	mov esi,dword ptr [ebp-0x20]
	test esi,esi
	sete al
	test al,al
	je Block51

 Block48:
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x24],esp
	push 0x1AB7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x40]
	push ecx
	mov byte ptr [ebp-4],0x1D
	mov ecx,edi
	mov byte ptr [ebp-4],0x1C
	call IWzProperty::Getitem
	push eax
	lea edx,[ebp-0x28]
	mov bl,0x1E
	push edx
	mov byte ptr [ebp-4],bl
	call get_unknown
	add esp,8
	push eax
	lea ecx,[ebp-0x20]
	mov byte ptr [ebp-4],0x1F
	call _x_com_ptr<IWzProperty>::op_assign_unknown_com_ptr
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block50:
	lea ecx,[ebp-0x40]
	mov byte ptr [ebp-4],0x1C
	call Ztl_variant_t::~Ztl_variant_t
	mov esi,dword ptr [ebp-0x20]

 Block51:
	test esi,esi
	sete al
	test al,al
	je Block57

 Block52:
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x24],esp
	push 0x1AB7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0x20
	test ecx,ecx
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	lea edx,[ebp-0x40]
	push edx
	mov byte ptr [ebp-4],0x1C
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp-0x28]
	mov bl,0x21
	push eax
	mov byte ptr [ebp-4],bl
	call get_unknown
	add esp,8
	push eax
	lea ecx,[ebp-0x20]
	mov byte ptr [ebp-4],0x22
	call _x_com_ptr<IWzProperty>::op_assign_unknown_com_ptr
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block56:
	lea ecx,[ebp-0x40]
	mov byte ptr [ebp-4],0x1C
	call Ztl_variant_t::~Ztl_variant_t
	mov esi,dword ptr [ebp-0x20]

 Block57:
	mov ebx,dword ptr [ebp+8]
	mov dword ptr [ebx],esi
	test esi,esi
	je Block59

 Block58:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block59:
	mov dword ptr [ebp-0x1C],1
	mov byte ptr [ebp-4],0x15
	test esi,esi
	je Block61

 Block60:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block61:
	mov eax,dword ptr [ebp-0x30]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block63:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],2
	call edx
	lea ecx,[ebp-0x48]
	mov byte ptr [ebp-4],1
	call ZRef<CReactorTemplate::STATEINFO>::~ZRef<CReactorTemplate::STATEINFO>
	jmp Block78

 Block64:
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x24],esp
	push 0x1AB7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],9
	test ecx,ecx
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	lea edx,[ebp-0x40]
	push edx
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp-0x14]
	push eax
	mov byte ptr [ebp-4],0xA
	call get_unknown
	add esp,8
	mov ebx,dword ptr [ebp+8]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0xB
	call _x_com_ptr<IWzProperty>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x1C],1
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block68:
	cmp word ptr [ebp-0x40],8
	mov byte ptr [ebp-4],8
	jne Block71

 Block69:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov byte ptr [ebp-4],2
	test edi,edi
	je Block74

 Block73:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block74:
	mov byte ptr [ebp-4],1
	test esi,esi
	je Block78

 Block75:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block78

 Block76:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block78

 Block77:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block78:
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block80

 Block79:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block80:
	mov eax,ebx
	jmp Block105

 Block81:
	cmp dword ptr [ebp-0x44],0
	jne Block90

 Block82:
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x24],esp
	push 0x1AB7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0x23
	test ecx,ecx
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	lea edx,[ebp-0x40]
	push edx
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp-0x14]
	mov bl,0x24
	push eax
	mov byte ptr [ebp-4],bl
	call get_unknown
	add esp,8
	mov esi,dword ptr [ebp+8]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x25
	call _x_com_ptr<IWzProperty>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x1C],1
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block86

 Block85:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block86:
	cmp word ptr [ebp-0x40],8
	mov byte ptr [ebp-4],2
	jne Block89

 Block87:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block39

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block89:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block39

 Block90:
	mov dword ptr [ebp-0x2C],0
	lea ecx,[ebp-0x14]
	push 0xC33
	push ecx
	mov byte ptr [ebp-4],0x26
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[ebp-0x2C]
	push edx
	mov byte ptr [ebp-4],0x27
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x14]
	add esp,0xC
	mov byte ptr [ebp-4],0x26
	test eax,eax
	je Block92

 Block91:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block92:
	mov edi,dword ptr [ebp-0x2C]
	push ecx
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0x28
	test ecx,ecx
	jne Block94

 Block93:
	push 0x80004003
	call _com_issue_error

 Block94:
	lea eax,[ebp-0x40]
	push eax
	mov byte ptr [ebp-4],0x26
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp-0x14]
	mov bl,0x29
	push ecx
	mov byte ptr [ebp-4],bl
	call get_unknown
	add esp,8
	mov esi,dword ptr [ebp+8]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x2A
	call _x_com_ptr<IWzProperty>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x1C],1
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block96

 Block95:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block96:
	cmp word ptr [ebp-0x40],8
	mov byte ptr [ebp-4],0x26
	jne Block99

 Block97:
	mov eax,dword ptr [ebp-0x38]
	xor ecx,ecx
	mov word ptr [ebp-0x40],cx
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea edx,[ebp-0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block100:
	mov byte ptr [ebp-4],2
	test edi,edi
	je Block102

 Block101:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block102:
	lea ecx,[ebp-0x48]
	mov byte ptr [ebp-4],1
	call ZRef<CReactorTemplate::STATEINFO>::~ZRef<CReactorTemplate::STATEINFO>
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block104

 Block103:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block104:
	mov eax,esi

 Block105:
	lea esp,[ebp-0x7C]
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
// CReactorTemplate::Unload
__SUB0(002CFFF0, __cdecl, 77046,  void) {
__asm {

 Block0:
	mov ecx,offset CReactorTemplate::ms_mReactorTemplate
	jmp  ZMap<unsigned long, ZRef<CReactorTemplate>, unsigned long>::RemoveAll
}
}
// CReactorTemplate::LoadEvent
_SUB_EXCEPTION_HANDLER(2D16C0)
__SUB(002D16C0, __cdecl, 77052,  int32_t, NakedParam<_x_com_ptr<IWzProperty>>, ZArray<ZRef<CReactorTemplate::REACTOREVENTINFO> >&) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D16C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x6C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ebp+0x78]
	xor edx,edx
	cmp eax,edx
	sete cl
	mov dword ptr [ebp-4],edx
	test cl,cl
	je Block4

 Block1:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edx
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	xor eax,eax
	jmp Block88

 Block4:
	mov dword ptr [ebp+0x5C],edx
	mov edi,edi

 Block5:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x5C]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x50],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],1
	test ecx,ecx
	je Block81

 Block6:
	lea edx,[ebp-0x3C]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x68],ebx
	test eax,eax
	je Block10

 Block7:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x48]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x48]
	mov dword ptr [ebp+0x68],ecx
	test eax,eax
	jge Block9

 Block8:
	cmp eax,0x80004002
	jne Block82

 Block9:
	mov ebx,dword ptr [ebp+0x68]

 Block10:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],4
	jne Block13

 Block11:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block14:
	test ebx,ebx
	sete al
	test al,al
	jne Block83

 Block15:
	mov ecx,dword ptr [ebp+0x7C]
	push 0xFFFFFFFF
	call ZArray<ZRef<CReactorTemplate::REACTOREVENTINFO>>::InsertBefore
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov dword ptr [ebp+0x50],edi
	test eax,eax
	je Block20

 Block16:
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block19

 Block17:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block19

 Block18:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block19:
	mov ebx,dword ptr [ebp+0x68]
	mov dword ptr [edi+4],0

 Block20:
	push 0
	call ZRefCounted_AllocHelper<ZRefCountedDummy<CReactorTemplate::REACTOREVENTINFO>>::call
	add esp,4
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [eax+4],1
	mov dword ptr [ebp+0x64],esp
	add eax,0x10
	push 0x618
	push ecx
	mov dword ptr [edi+4],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],5
	test ebx,ebx
	je Block81

 Block21:
	lea edx,[ebp-0x1C]
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	mov esi,dword ptr [edi+4]
	push eax
	mov byte ptr [ebp-4],6
	call get_int32
	mov dword ptr [esi],eax
	mov esi,8
	add esp,8
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x1C],si
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_LT
	call _xbstr_t::_ctor_1
	lea edx,[ebp+0x10]
	mov byte ptr [ebp-4],7
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],8
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp+0x60],0
	test eax,eax
	je Block28

 Block26:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x40]
	push edx
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x40]
	mov dword ptr [ebp+0x60],ecx
	test eax,eax
	jge Block28

 Block27:
	cmp eax,0x80004002
	jne Block82

 Block28:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp+0x10],si
	jne Block31

 Block29:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block32:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_RB
	call _xbstr_t::_ctor_1
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],0xB
	mov ecx,ebx
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xC
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x54],ebx
	test eax,eax
	je Block36

 Block33:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x44]
	push ecx
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x44]
	mov dword ptr [ebp+0x54],ecx
	test eax,eax
	jge Block35

 Block34:
	cmp eax,0x80004002
	jne Block82

 Block35:
	mov ebx,dword ptr [ebp+0x54]

 Block36:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0xE
	jne Block39

 Block37:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block40:
	cmp dword ptr [ebp+0x60],0
	sete al
	test al,al
	sete al
	test al,al
	je Block54

 Block41:
	test ebx,ebx
	sete al
	test al,al
	sete al
	test al,al
	je Block54

 Block42:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x20]
	push ecx
	call esi
	lea edx,[ebp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block82

 Block43:
	mov ecx,dword ptr [ebp+0x60]
	mov eax,dword ptr [edi+4]
	mov byte ptr [ebp-4],0xF
	test ecx,ecx
	je Block81

 Block44:
	lea edx,[ebp+0x20]
	push edx
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	lea edx,[eax+8]
	push edx
	add eax,4
	push eax
	call IWzVector2D::_GetSnapshot
	cmp word ptr [ebp+0x20],8
	mov byte ptr [ebp-4],0xE
	jne Block47

 Block45:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	lea edx,[ebp+0x30]
	push edx
	call esi
	lea eax,[ebp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block82

 Block49:
	mov eax,dword ptr [edi+4]
	mov byte ptr [ebp-4],0x10
	test ebx,ebx
	je Block81

 Block50:
	lea ecx,[ebp+0x30]
	push ecx
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	lea edx,[eax+0x10]
	push edx
	add eax,0xC
	push eax
	mov ecx,ebx
	call IWzVector2D::_GetSnapshot
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],0xE
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block55

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block53:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block55

 Block54:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_SetRectEmpty]

 Block55:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1A9B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x68]
	lea eax,[ebp-0x2C]
	mov byte ptr [ebp-4],0x11
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x12
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x64],esi
	test eax,eax
	je Block58

 Block56:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x4C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x4C]
	mov esi,ecx
	mov dword ptr [ebp+0x64],esi
	test eax,eax
	jge Block58

 Block57:
	cmp eax,0x80004002
	jne Block82

 Block58:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x14
	jne Block61

 Block59:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block62:
	test esi,esi
	sete al
	test al,al
	sete al
	test al,al
	je Block74

 Block63:
	xor ebx,ebx

 Block64:
	test esi,esi
	je Block81

 Block65:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x58]
	push edx
	push esi
	mov dword ptr [ebp+0x58],0
	call eax
	test eax,eax
	jge Block67

 Block66:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block67:
	cmp ebx,dword ptr [ebp+0x58]
	jae Block73

 Block68:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x4C]
	push ecx
	mov byte ptr [ebp-4],0x15
	mov ecx,esi
	mov byte ptr [ebp-4],0x14
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x16
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x4C],8
	mov edi,eax
	mov byte ptr [ebp-4],0x14
	jne Block71

 Block69:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov ecx,dword ptr [ebp+0x50]
	mov eax,dword ptr [ecx+4]
	push 0xFFFFFFFF
	lea ecx,[eax+0x14]
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],edi
	inc ebx
	jmp Block64

 Block73:
	mov ebx,dword ptr [ebp+0x54]
	mov edi,dword ptr [ebp+0x68]

 Block74:
	mov byte ptr [ebp-4],0xE
	test esi,esi
	je Block76

 Block75:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block76:
	mov byte ptr [ebp-4],0xA
	test ebx,ebx
	je Block78

 Block77:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block78:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block80

 Block79:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block80:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],0
	call ecx
	inc dword ptr [ebp+0x5C]
	jmp Block5

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	push eax
	call _com_issue_error

 Block83:
	mov byte ptr [ebp-4],0
	test ebx,ebx
	je Block85

 Block84:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block85:
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block87

 Block86:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block87:
	mov eax,1

 Block88:
	lea esp,[ebp-0x5C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x6C]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x70
	mov esp,ebp
	pop ebp
	ret
}
}
// CReactorTemplate::~CReactorTemplate
_SUB_EXCEPTION_HANDLER(2D1580)
__SUB_CLASS_THIS0(002D1580, __thiscall, 77061,  CReactorTemplate, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D1580
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
	mov dword ptr [esp+0x14],0
	call ZArray<ZRef<CReactorTemplate::STATEINFO>>::RemoveAll
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CReactorTemplate::GetReactorTemplate
_SUB_EXCEPTION_HANDLER(2D27C0)
__SUB(002D27C0, __cdecl, 77047,  CReactorTemplate*, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D27C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x58]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x68]
	xor edi,edi
	cmp esi,edi
	jne Block2

 Block1:
	xor eax,eax
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret

 Block2:
	mov dword ptr [esp+0x24],edi
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x6C]
	push ecx
	mov ecx,offset CReactorTemplate::ms_mReactorTemplate
	mov dword ptr [esp+0x68],edi
	call ZMap<unsigned long, ZRef<CReactorTemplate>, unsigned long>::GetAt
	test eax,eax
	jne Block34

 Block3:
	mov dword ptr [esp+0x14],edi
	lea edx,[esp+0x18]
	push 0xC32
	push edx
	mov byte ptr [esp+0x68],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x6C],2
	call ZXString16::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x60],1
	cmp eax,edi
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push ecx
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x64],3
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ebp,dword ptr [esp+0x14]
	push edi
	push edi
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x34]
	push eax
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,4
	push ebp
	mov byte ptr [esp+0x78],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x74],5
	cmp dword ptr [_D_G_RM],edi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x68],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x48],bx
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,edi
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[esp+0x48]
	push eax
	call esi

 Block18:
	mov byte ptr [esp+0x60],9
	cmp word ptr [esp+0x28],bx
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,edi
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x28]
	push edx
	call esi

 Block22:
	mov byte ptr [esp+0x60],0xA
	cmp word ptr [esp+0x38],bx
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,edi
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[esp+0x38]
	push ecx
	call esi

 Block26:
	mov esi,dword ptr [esp+0x18]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],esi
	cmp esi,edi
	je Block28

 Block27:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block28:
	mov ecx,dword ptr [esp+0x6C]
	push ecx
	call CReactorTemplate::RegisterReactor
	add esp,8
	cmp eax,edi
	jne Block30

 Block29:
	push 0x22000006
	lea ecx,[esp+0x6C]
	call CMSException::_ctor_0
	mov edx,dword ptr [esp+0x68]
	push offset CTerminateException::THROW_INFO
	lea eax,[esp+0x20]
	push eax
	mov dword ptr [esp+0x24],edx
	call _CxxThrowException

 Block30:
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x6C]
	push edx
	mov ecx,offset CReactorTemplate::ms_mReactorTemplate
	call ZMap<unsigned long, ZRef<CReactorTemplate>, unsigned long>::GetAt
	mov byte ptr [esp+0x60],1
	cmp esi,edi
	je Block32

 Block31:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block32:
	mov byte ptr [esp+0x60],0
	cmp ebp,edi
	je Block34

 Block33:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block34:
	mov esi,dword ptr [esp+0x24]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp esi,edi
	je Block37

 Block35:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block37

 Block36:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block37:
	mov eax,esi
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret
}
}
// CReactorTemplate::RegisterReactor
_SUB_EXCEPTION_HANDLER(2D1DE0)
__SUB(002D1DE0, __cdecl, 77048,  int32_t, unsigned long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D1DE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x74
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	xor esi,esi
	lea ecx,[ebp-0x3C]
	mov dword ptr [ebp-4],esi
	mov dword ptr [ebp-0x38],esi
	call ZRef<CReactorTemplate>::_Alloc
	mov eax,dword ptr [ebp+8]
	mov ebx,dword ptr [ebp-0x38]
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x3D5
	push ecx
	mov byte ptr [ebp-4],1
	mov dword ptr [ebx+0xC],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],2
	cmp ecx,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x7C]
	push edx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x30]
	mov dword ptr [ebp-0x30],esi
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
	mov edi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x7C],di
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp-0x7C],ax
	mov eax,dword ptr [ebp-0x74]
	cmp eax,esi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp-0x7C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov esi,dword ptr [ebp-0x30]
	test esi,esi
	sete al
	test al,al
	je Block14

 Block10:
	mov byte ptr [ebp-4],1
	test esi,esi
	je Block12

 Block11:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block12:
	lea edi,[ebx+4]
	push edi
	mov byte ptr [ebp-4],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block131

 Block13:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax
	jmp Block131

 Block14:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x1AC2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],6
	test esi,esi
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea ecx,[ebp-0x24]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],7
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [ebx+0x14],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x24],di
	jne Block19

 Block17:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block20:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	push 0xEEE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x24]
	mov byte ptr [ebp-4],8
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],9
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x18],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x24],di
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x1801
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x24]
	mov byte ptr [ebp-4],0xA
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [ebx+0x1C],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x24],di
	jne Block27

 Block25:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0xEF0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x24]
	push ecx
	mov byte ptr [ebp-4],0xC
	mov ecx,esi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x20],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x24],di
	jne Block31

 Block29:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block32:
	push 0
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push offset _S_QUEST__2
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0xE
	test ecx,ecx
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xF
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x24],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x24],di
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x3D6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x4C]
	mov byte ptr [ebp-4],0x10
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x4C],di
	jne Block76

 Block39:
	mov dword ptr [ebp-0x34],0
	lea ecx,[ebp-0x28]
	push 0xC30
	push ecx
	mov byte ptr [ebp-4],0x12
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [ebp-0x44]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp-0x34]
	push eax
	mov byte ptr [ebp-4],0x13
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x28]
	add esp,0xC
	mov byte ptr [ebp-4],0x12
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block41:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x24]
	push ecx
	call edi
	lea edx,[ebp-0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	lea eax,[ebp-0x5C]
	push eax
	mov byte ptr [ebp-4],0x14
	call edi
	lea ecx,[ebp-0x5C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	mov esi,dword ptr [ebp-0x34]
	push 0
	push 0
	lea edx,[ebp-0x24]
	push edx
	lea eax,[ebp-0x5C]
	push eax
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	mov bl,0x15
	push esi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x16
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea ecx,[ebp-0x6C]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x17
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x2C]
	mov dword ptr [ebp-0x2C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block50

 Block48:
	cmp eax,0x80004002
	je Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	mov edi,8
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp-0x6C],di
	jne Block53

 Block51:
	mov eax,dword ptr [ebp-0x64]
	xor edx,edx
	mov word ptr [ebp-0x6C],dx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[ebp-0x6C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp-0x5C],di
	jne Block57

 Block55:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp-0x24],di
	jne Block61

 Block59:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov edi,dword ptr [ebp-0x2C]
	test edi,edi
	sete al
	test al,al
	je Block72

 Block63:
	mov byte ptr [ebp-4],0x12
	test edi,edi
	je Block65

 Block64:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block65:
	mov byte ptr [ebp-4],0x11
	test esi,esi
	je Block67

 Block66:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block67:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],5
	jne Block70

 Block68:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea edx,[ebp-0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov eax,dword ptr [ebp-0x30]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],1
	call edx
	lea ecx,[ebp-0x3C]
	mov byte ptr [ebp-4],0
	call ZRef<CReactorTemplate>::~ZRef<CReactorTemplate>
	jmp Block131

 Block72:
	lea eax,[ebp-0x2C]
	push eax
	lea ecx,[ebp+0xC]
	call _x_com_ptr<IWzProperty>::op_assign_copy
	mov byte ptr [ebp-4],0x12
	test edi,edi
	je Block74

 Block73:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block74:
	mov byte ptr [ebp-4],0x11
	test esi,esi
	je Block76

 Block75:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block76:
	xor ebx,ebx
	mov dword ptr [ebp-0x2C],ebx

 Block77:
	mov esi,dword ptr [ebp-0x38]
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x28],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0x1C
	test ecx,ecx
	je Block1

 Block78:
	lea eax,[ebp-0x6C]
	push eax
	mov byte ptr [ebp-4],0x11
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp-0x14]
	push ecx
	mov byte ptr [ebp-4],0x1D
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x1E
	mov dword ptr [ebp-0x34],0
	mov dword ptr [ebp-0x28],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block80

 Block79:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block80:
	lea ecx,[ebp-0x34]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	test eax,eax
	jge Block82

 Block81:
	cmp eax,0x80004002
	jne Block4

 Block82:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block84

 Block83:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block84:
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0x21
	jne Block87

 Block85:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	mov edi,dword ptr [ebp-0x34]
	test edi,edi
	sete al
	test al,al
	jne Block112

 Block89:
	push 0xFFFFFFFF
	lea ecx,[esi+0x28]
	call ZArray<ZRef<CReactorTemplate::STATEINFO>>::InsertBefore
	mov ebx,eax
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block94

 Block90:
	lea esi,[eax-0x10]
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block93

 Block91:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block93

 Block92:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block93:
	mov dword ptr [ebx+4],0

 Block94:
	push 0
	call ZRefCounted_AllocHelper<ZRefCountedDummy<CReactorTemplate::STATEINFO>>::call
	add esp,4
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [eax+4],1
	mov dword ptr [ebp-0x28],esp
	add eax,0x10
	push 0x1AD0
	push ecx
	mov dword ptr [ebx+4],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x22
	test edi,edi
	je Block1

 Block95:
	lea edx,[ebp-0x24]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x21
	call IWzProperty::Getitem
	mov esi,dword ptr [ebx+4]
	push eax
	mov byte ptr [ebp-4],0x23
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi],eax
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0x21
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block99:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x28],esp
	push 0xC31
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x5C]
	mov byte ptr [ebp-4],0x24
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x21
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x25
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x28]
	mov dword ptr [ebp-0x28],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block101

 Block100:
	cmp eax,0x80004002
	jne Block4

 Block101:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0x27
	jne Block104

 Block102:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block105:
	mov esi,dword ptr [ebp-0x28]
	test esi,esi
	sete al
	test al,al
	jne Block109

 Block106:
	mov ebx,dword ptr [ebx+4]
	add ebx,4
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x80],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block108

 Block107:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block108:
	call CReactorTemplate::LoadEvent
	add esp,8
	test eax,eax
	je Block123

 Block109:
	mov byte ptr [ebp-4],0x21
	test esi,esi
	je Block111

 Block110:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block111:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],0x11
	call eax
	inc dword ptr [ebp-0x2C]
	mov ebx,dword ptr [ebp-0x2C]
	jmp Block77

 Block112:
	mov byte ptr [ebp-4],0x11
	test edi,edi
	je Block114

 Block113:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block114:
	lea eax,[ebp-0x3C]
	push eax
	lea ecx,[ebp+8]
	push ecx
	mov ecx,offset CReactorTemplate::ms_mReactorTemplate
	mov dword ptr [esi+0x10],ebx
	call ZMap<unsigned long, ZRef<CReactorTemplate>, unsigned long>::Insert
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],5
	jne Block117

 Block115:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	test eax,eax
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block118:
	mov eax,dword ptr [ebp-0x30]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],1
	call edx
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block120

 Block119:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block120:
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block122

 Block121:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block122:
	mov eax,1
	jmp Block134

 Block123:
	mov byte ptr [ebp-4],0x21
	test esi,esi
	je Block125

 Block124:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block125:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],0x11
	call eax
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],5
	jne Block128

 Block126:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	test eax,eax
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea edx,[ebp-0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block129:
	mov eax,dword ptr [ebp-0x30]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],1
	call edx
	mov edi,dword ptr [ebp-0x38]
	lea esi,[edi+4]
	push esi
	mov byte ptr [ebp-4],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block131

 Block130:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block131:
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block133

 Block132:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block133:
	xor eax,eax

 Block134:
	lea esp,[ebp-0x90]
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
