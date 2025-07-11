#include "regen.hpp"
// LoginWnd_World.ipp
#include "LoginWnd_World.hpp"

// CUIChannelSelect::OnSetFocus
__SUB_CLASS_THIS(002020F0, __thiscall, 138879,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	test edx,edx
	je Block2

 Block1:
	lea eax,[ecx-4]
	neg eax
	push esi
	mov esi,dword ptr [ecx+0xF0]
	sbb eax,eax
	and eax,ecx
	mov dword ptr [esi+0x1C8],eax
	pop esi

 Block2:
	mov dword ptr [esp+4],edx
	jmp  CWnd::OnSetFocus
}
}
// CUIChannelSelect::GetRect
__SUB_CLASS_THIS(00202140, __thiscall, 138883,  CUIChannelSelect, tagRECT*, tagRECT*, long) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+0xC]
	mov eax,0x66666667
	imul esi
	sar edx,1
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	lea eax,[ecx+ecx*4]
	imul ecx,0x1D
	sub esi,eax
	mov eax,dword ptr [esp+8]
	mov edx,esi
	shl edx,5
	add edx,esi
	lea edx,[edx+edx+0x17]
	add ecx,0x5D
	mov dword ptr [eax],edx
	mov dword ptr [eax+4],ecx
	add edx,0x3D
	add ecx,0x15
	mov dword ptr [eax+8],edx
	mov dword ptr [eax+0xC],ecx
	pop esi
	ret 8
}
}
// CUIChannelSelect::Draw
_SUB_EXCEPTION_HANDLER(2056D0)
__SUB_CLASS_THIS(002056D0, __thiscall, 138880,  CUIChannelSelect, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2056D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xDC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x58],ebx
	mov eax,dword ptr [esp+0xEC]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,ebx
	call CWnd::GetCanvas
	mov edi,dword ptr [esp+0x30]
	xor ebp,ebp
	mov dword ptr [esp+0xE4],ebp
	cmp edi,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x20],ebp
	call ecx
	cmp eax,ebp
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block4:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x40]
	mov esi,dword ptr [esp+0x18]
	lea eax,[esp+0x14]
	push eax
	push edi
	mov dword ptr [esp+0x1C],ebp
	call ecx
	cmp eax,ebp
	jge Block6

 Block5:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block6:
	mov eax,dword ptr [esp+0x14]
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x8C]
	push 0xFFFFFF
	push esi
	push eax
	push ebp
	push ebp
	push edi
	call ecx
	cmp eax,ebp
	jge Block8

 Block7:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block8:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x20]
	push edx
	call esi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov ebp,dword ptr [esp+0x20]
	mov ecx,dword ptr [ebx+0x104]
	mov edx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x34]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x38]
	push ecx
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x40]
	push 0x22
	push 0xA
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [edx+0x80]
	push edi
	mov byte ptr [esp+0x104],1
	call eax
	xor ebp,ebp
	cmp eax,ebp
	jge Block12

 Block11:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block12:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0xE4],0
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov dword ptr [esp+0x14],ebp
	mov byte ptr [esp+0xE4],2
	cmp dword ptr [ebx+0xF8],ebp
	je Block48

 Block17:
	lea eax,[esp+0x34]
	push 0x559
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebx+0xF8]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xF0],3
	call ZXString16::Format
	mov eax,dword ptr [esp+0x40]
	add esp,0xC
	mov byte ptr [esp+0xE4],2
	cmp eax,ebp
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	lea eax,[esp+0x38]
	push eax
	call esi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0xE8],4
	call esi
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov eax,dword ptr [esp+0x14]
	push ebp
	push ebp
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x54]
	push edx
	push ecx
	mov dword ptr [esp+0x70],esp
	mov ecx,esp
	mov bl,5
	push eax
	mov byte ptr [esp+0xFC],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xF8],6
	cmp dword ptr [_D_G_RM],ebp
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea ecx,[esp+0x74]
	push ecx
	mov byte ptr [esp+0xFC],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xEC],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov ebx,8
	mov byte ptr [esp+0xE4],9
	cmp word ptr [esp+0x60],bx
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	cmp eax,ebp
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov byte ptr [esp+0xE4],0xA
	cmp word ptr [esp+0x48],bx
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	cmp eax,ebp
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	cmp word ptr [esp+0x38],8
	mov bl,0xB
	mov byte ptr [esp+0xE4],bl
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	lea edx,[esp+0x20]
	push edx
	call esi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	mov esi,dword ptr [esp+0x18]
	lea ecx,[esp+0x20]
	push ecx
	push esi
	push 0xA
	push 0x104
	mov ecx,edi
	mov byte ptr [esp+0xF4],0xC
	call IWzCanvas::Copy
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0xE4],bl
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	cmp eax,ebp
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov byte ptr [esp+0xE4],2
	cmp esi,ebp
	je Block48

 Block47:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block48:
	xor edi,edi
	mov dword ptr [esp+0x34],edi
	mov dword ptr [esp+0x18],ebp

 Block49:
	mov esi,dword ptr [esp+0x58]
	push edi
	lea eax,[esp+0xD0]
	push eax
	mov ecx,esi
	call CUIChannelSelect::GetRect
	mov eax,dword ptr [esi+0x100]
	add eax,0x1C
	mov eax,dword ptr [eax]
	test eax,eax
	je Block91

 Block50:
	cmp edi,dword ptr [eax-4]
	jae Block91

 Block51:
	lea ecx,[esp+0x74]
	push 0x580
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xF0],0xD
	call ZXString16::Format
	mov eax,dword ptr [esp+0x80]
	add esp,0xC
	mov byte ptr [esp+0xE4],2
	test eax,eax
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block53:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x7C]
	push eax
	call ebx
	lea ecx,[esp+0x7C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block9

 Block54:
	lea edx,[esp+0x9C]
	push edx
	mov byte ptr [esp+0xE8],0xE
	call ebx
	lea eax,[esp+0x9C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block9

 Block55:
	mov eax,dword ptr [esp+0x14]
	push 0
	push 0
	lea ecx,[esp+0x84]
	push ecx
	lea edx,[esp+0xA8]
	push edx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xFC],0xF
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xF8],0x10
	je Block1

 Block56:
	lea ecx,[esp+0xC0]
	push ecx
	mov byte ptr [esp+0xFC],0xF
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xEC],0x11
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block59

 Block57:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x78]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x78]
	mov esi,ecx
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	jge Block59

 Block58:
	cmp eax,0x80004002
	jne Block9

 Block59:
	mov edi,8
	mov byte ptr [esp+0xE4],0x13
	cmp word ptr [esp+0xAC],di
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0xB4]
	xor edx,edx
	mov word ptr [esp+0xAC],dx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[esp+0xAC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov byte ptr [esp+0xE4],0x14
	cmp word ptr [esp+0x9C],di
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0xA4]
	xor ecx,ecx
	mov word ptr [esp+0x9C],cx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea edx,[esp+0x9C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov byte ptr [esp+0xE4],0x15
	cmp word ptr [esp+0x7C],di
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea ecx,[esp+0x7C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	lea edx,[esp+0x20]
	push edx
	call ebx
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block9

 Block72:
	mov edx,dword ptr [esp+0x20]
	mov ebp,dword ptr [esp+0xD0]
	mov ebx,dword ptr [esp+0x30]
	mov edi,dword ptr [esp+0xCC]
	mov ecx,dword ptr [ebx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x38]
	push esi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
	push ebp
	push edi
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push ebx
	mov byte ptr [esp+0x104],0x16
	call eax
	test eax,eax
	jge Block74

 Block73:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block74:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0xE4],0x15
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block78:
	mov eax,dword ptr [esp+0x58]
	mov ecx,dword ptr [eax+0x100]
	mov edx,dword ptr [ecx+0x1C]
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [edx+eax+4]
	mov eax,0x94F2095
	imul ecx
	sar edx,1
	mov ecx,edx
	shr ecx,0x1F
	lea eax,[edx+ecx+1]
	cmp eax,1
	jge Block80

 Block79:
	mov eax,1
	jmp Block82

 Block80:
	cmp eax,0xE
	jle Block82

 Block81:
	mov eax,0xE

 Block82:
	xor edx,edx
	cmp eax,0xE
	sete dl
	lea ecx,[esp+0x38]
	lea eax,[eax+eax*4]
	push ecx
	lea esi,[edx+eax+2]
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block9

 Block83:
	mov eax,dword ptr [esp+0x58]
	mov ecx,dword ptr [eax+0x108]
	mov ebx,dword ptr [ebx]
	sub esp,0x10
	mov eax,esp
	push 8
	push esi
	push 0
	push 0
	push 8
	lea edx,[ebp+0xD]
	mov ebp,dword ptr [esp+0x5C]
	push esi
	mov esi,dword ptr [esp+0x58]
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x64]
	push 0xFF
	push ecx
	mov ecx,dword ptr [ebx+0x84]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x70]
	push edx
	add edi,2
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x78]
	push edi
	push esi
	mov byte ptr [esp+0x120],0x17
	mov dword ptr [eax+0xC],ebp
	call ecx
	test eax,eax
	jge Block85

 Block84:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block85:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0xE4],0x15
	jne Block88

 Block86:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block89:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xE4],2
	test eax,eax
	je Block120

 Block90:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block120

 Block91:
	lea eax,[esp+0x70]
	push 0x581
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0xF0],0x18
	call ZXString16::Format
	mov eax,dword ptr [esp+0x7C]
	add esp,0xC
	mov byte ptr [esp+0xE4],2
	test eax,eax
	je Block93

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block93:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x60]
	push edx
	call esi
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block9

 Block94:
	lea ecx,[esp+0x8C]
	push ecx
	mov byte ptr [esp+0xE8],0x19
	call esi
	lea edx,[esp+0x8C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block9

 Block95:
	mov edx,dword ptr [esp+0x14]
	push 0
	push 0
	lea eax,[esp+0x68]
	push eax
	lea ecx,[esp+0x98]
	push ecx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xFC],0x1A
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xF8],0x1B
	je Block1

 Block96:
	lea eax,[esp+0xD0]
	mov byte ptr [esp+0xF8],0x1A
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xEC],0x1C
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block99

 Block97:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x5C]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x5C]
	mov esi,ecx
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	jge Block99

 Block98:
	cmp eax,0x80004002
	jne Block9

 Block99:
	mov edi,8
	mov byte ptr [esp+0xE4],0x1E
	cmp word ptr [esp+0xBC],di
	jne Block106

 Block100:
	mov eax,dword ptr [esp+0xC4]
	xor edx,edx
	mov word ptr [esp+0xBC],dx
	test eax,eax
	je Block102

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block102:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block103:
	mov byte ptr [esp+0xE4],0x1F
	cmp word ptr [esp+0x8C],di
	jne Block107

 Block104:
	mov eax,dword ptr [esp+0x94]
	xor ecx,ecx
	mov word ptr [esp+0x8C],cx
	test eax,eax
	je Block108

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block106:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0xBC]
	push eax
	call ebx
	jmp Block103

 Block107:
	lea edx,[esp+0x8C]
	push edx
	call ebx

 Block108:
	mov byte ptr [esp+0xE4],0x20
	cmp word ptr [esp+0x60],di
	jne Block111

 Block109:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea ecx,[esp+0x60]
	push ecx
	call ebx

 Block112:
	mov edx,3
	mov ecx,0x64
	mov word ptr [esp+0x48],dx
	mov dword ptr [esp+0x50],ecx
	mov ebp,dword ptr [esp+0x48]
	mov edi,dword ptr [esp+0x30]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x5C]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0xE0]
	mov ecx,dword ptr [esp+0xDC]
	push esi
	push eax
	push ecx
	push edi
	mov byte ptr [esp+0x104],0x21
	call edx
	test eax,eax
	jge Block114

 Block113:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block114:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0xE4],0x20
	jne Block117

 Block115:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea ecx,[esp+0x48]
	push ecx
	call ebx

 Block118:
	mov byte ptr [esp+0xE4],2
	test esi,esi
	je Block120

 Block119:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block120:
	mov eax,dword ptr [esp+0x18]
	mov edi,dword ptr [esp+0x34]
	add eax,0x14
	inc edi
	cmp eax,0x190
	mov dword ptr [esp+0x34],edi
	mov dword ptr [esp+0x18],eax
	jl Block49

 Block121:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xE4],0
	test eax,eax
	je Block123

 Block122:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block123:
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [esp+0xE8],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0xDC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xD4
	ret 4
}
}
// CUIRecommendWorld::HitTest
__SUB_CLASS_THIS(00202240, __thiscall, 138936,  CUIRecommendWorld, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x10]
	push eax
	push ecx
	mov ecx,esi
	call CWnd::HitTest
	test eax,eax
	je Block4

 Block1:
	test edi,edi
	je Block3

 Block2:
	cmp dword ptr [edi],0
	jne Block4

 Block3:
	cmp dword ptr [esi+0x3C],0
	jne Block5

 Block4:
	cmp eax,1
	jne Block6

 Block5:
	mov eax,2

 Block6:
	pop edi
	pop esi
	ret 0xC
}
}
// CUIWorldSelect::CUIWorldSelect
_SUB_EXCEPTION_HANDLER(202C80)
__SUB_CLASS_THIS(00202C80, __thiscall, 138818,  CUIWorldSelect, void, CLogin*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_202C80
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
	call CDialog::_ctor_default
	xor edi,edi
	lea eax,[esi+0x91]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFF6F
	mov dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance],edi

 Block3:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 0x24
	push 8
	lea eax,[esi+0xA0]
	push eax
	mov byte ptr [esp+0x2C],1
	int 3// TODO: 	mov dword ptr [esi],offset CUIWorldSelect::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIWorldSelect::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIWorldSelect::`vftable'{for `ZRefCounted'}
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x1C0],edi
	mov dword ptr [esi+0x1C4],edi
	mov dword ptr [esi+0x1C8],edi
	mov dword ptr [esi+0x1D0],edi
	mov ecx,dword ptr [esp+0x20]
	push edi
	push ecx
	push edi
	push 9
	push 0x9C
	push 0x234
	push 0xFFFFFCA2
	push 0xFFFFFF07
	mov ecx,esi
	mov byte ptr [esp+0x38],6
	call CDialog::CreateDlg_0
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CUIWorldSelect::OnSetFocus
__SUB_CLASS_THIS(00202990, __thiscall, 138824,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	lea ecx,[esi-4]
	test edi,edi
	je Block2

 Block1:
	mov eax,dword ptr [esi+0x98]
	push eax
	call CUIWorldSelect::SetKeyFocus
	mov ecx,dword ptr [esi+0x90]
	lea eax,[esi-4]
	neg eax
	sbb eax,eax
	and eax,esi
	mov dword ptr [ecx+0x1C8],eax
	push edi
	mov ecx,esi
	call CWnd::OnSetFocus
	pop edi
	pop esi
	ret 4

 Block2:
	push 0xFFFFFFFF
	call CUIWorldSelect::SetKeyFocus
	push edi
	mov ecx,esi
	call CWnd::OnSetFocus
	pop edi
	pop esi
	ret 4
}
}
// CUIWorldSelect::DrawWorldItems
_SUB_EXCEPTION_HANDLER(20AE10)
__SUB_CLASS_THIS0(0020AE10, __thiscall, 138820,  CUIWorldSelect, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20AE10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov esi,ecx
	mov dword ptr [ebp+0x30],esi
	mov eax,dword ptr [esi+0x94]
	mov eax,dword ptr [eax+0x22C]
	mov dword ptr [esi+0x1CC],eax
	test eax,eax
	je Block4

 Block1:
	xor ebx,ebx
	test eax,eax
	jle Block4

 Block2:
	xor edi,edi
	mov edi,edi

 Block3:
	lea ecx,[ebp+0x64]
	push ecx
	mov ecx,dword ptr [esi+0x94]
	call CLogin::GetBalloonInfo
	mov edx,dword ptr [eax]
	mov eax,dword ptr [edi+edx+4]
	push eax
	lea ecx,[ebp+0x54]
	push ecx
	mov ecx,dword ptr [esi+0x94]
	mov dword ptr [ebp-4],0
	call CLogin::GetBalloonInfo
	mov edx,dword ptr [eax]
	mov eax,dword ptr [edi+edx]
	push eax
	lea ecx,[ebp+0x58]
	push ecx
	mov ecx,dword ptr [esi+0x94]
	mov byte ptr [ebp-4],1
	call CLogin::GetBalloonInfo
	mov eax,dword ptr [eax]
	push ecx
	add eax,edi
	mov eax,dword ptr [eax+8]
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],2
	call _xbstr_t::_ctor_0
	mov ecx,esi
	call CUIWorldSelect::MakeWSBalloon
	lea ecx,[ebp+0x58]
	mov byte ptr [ebp-4],1
	call ZArray<CLogin::BALLOON>::RemoveAll
	lea ecx,[ebp+0x54]
	mov byte ptr [ebp-4],0
	call ZArray<CLogin::BALLOON>::RemoveAll
	lea ecx,[ebp+0x64]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZArray<CLogin::BALLOON>::RemoveAll
	inc ebx
	add edi,0xC
	cmp ebx,dword ptr [esi+0x1CC]
	jl Block3

 Block4:
	mov eax,dword ptr [esi+0x94]
	add eax,0x1CC
	mov eax,dword ptr [eax]
	test eax,eax
	je Block6

 Block5:
	mov eax,dword ptr [eax-4]

 Block6:
	mov dword ptr [esi+0x98],eax
	mov eax,1
	mov dword ptr [ebp+0x48],0
	mov dword ptr [ebp+0x3C],eax
	lea ecx,[esi+0x1C8]
	mov dword ptr [ebp-4],3
	mov dword ptr [ebp+0x40],eax
	mov dword ptr [ebp+0x44],eax
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x20]
	push edx
	call edi
	lea eax,[ebp-0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	lea ecx,[ebp+0x20]
	push ecx
	mov byte ptr [ebp-4],4
	call edi
	lea edx,[ebp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	push 0
	push 0
	lea eax,[ebp-0x20]
	push eax
	lea ecx,[ebp+0x20]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x50],esp
	push 0xC9E
	mov bl,5
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],6
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea eax,[ebp-0x30]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x54],ebx
	test eax,eax
	je Block16

 Block13:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x58]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x58]
	mov dword ptr [ebp+0x54],ebx
	test eax,eax
	jge Block16

 Block14:
	cmp eax,0x80004002
	je Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov edi,8
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x30],di
	jne Block19

 Block17:
	mov eax,dword ptr [ebp-0x28]
	xor ecx,ecx
	mov word ptr [ebp-0x30],cx
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[ebp-0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp+0x20],di
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x20],di
	jne Block27

 Block25:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea eax,[ebp-0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block28:
	xor edi,edi
	mov dword ptr [ebp+0x64],edi
	jmp Block30

 Block30:
	cmp edi,0x24
	jge Block104

 Block31:
	cmp edi,dword ptr [esi+0x98]
	jge Block88

 Block32:
	mov ecx,dword ptr [esi+0x94]
	mov ebx,edi
	shl ebx,5
	add ebx,dword ptr [ecx+0x1CC]
	lea edx,[ebp+0x34]
	push 0x579
	push edx
	mov dword ptr [ebp+0x58],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x48]
	push edx
	mov byte ptr [ebp-4],0xC
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x34]
	add esp,0xC
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block34:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x5C],eax
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block36

 Block35:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block37

 Block36:
	xor eax,eax

 Block37:
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block50

 Block38:
	add eax,8
	je Block50

 Block39:
	lea ebx,[eax-8]
	test ebx,ebx
	je Block41

 Block40:
	lea eax,[ebx+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block41:
	mov eax,dword ptr [esi+edi*8+0xA4]
	lea edi,[esi+edi*8+0xA4]
	mov dword ptr [edi],ebx
	test eax,eax
	je Block45

 Block42:
	lea edi,[eax+8]
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block45

 Block43:
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block45

 Block44:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block45:
	mov ebx,dword ptr [ebp+0x64]
	mov ecx,dword ptr [esi+ebx*8+0xA4]
	mov eax,0x2AAAAAAB
	imul ebx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edi,eax
	lea eax,[eax+eax*2]
	imul edi,0x1A
	add eax,eax
	mov edx,eax
	mov eax,ebx
	sub eax,edx
	lea edx,[ebp+0x3C]
	push edx
	mov edx,dword ptr [ebp+0x64]
	push 0
	lea ebx,[eax+eax*2]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	push edi
	shl ebx,5
	push ebx
	add edx,0x3E8
	push edx
	push esi
	call eax
	mov ecx,dword ptr [ebp+0x58]
	cmp dword ptr [ecx+8],0
	je Block102

 Block46:
	mov eax,0x20
	mov byte ptr [ebp-4],0xE
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov eax,dword ptr [esi+0x1C0]
	mov dword ptr [ebp+0x5C],esp
	push 0
	push 0xFF
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x44],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block48

 Block47:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block48:
	mov ecx,dword ptr [esi+0x1C0]
	add edi,6
	add ebx,0x4E
	push edi
	mov byte ptr [ebp-4],0xF
	push ebx
	test ecx,ecx
	jne Block51

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	xor ebx,ebx
	jmp Block41

 Block51:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x38],esp
	push edx
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [ebp+0x58]
	mov eax,dword ptr [eax+8]
	push 0
	push 0
	push 0
	push 0xA
	push ecx
	push eax
	mov byte ptr [ebp-4],0x10
	call __itow
	add esp,8
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x11
	test ecx,ecx
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	lea edx,[ebp-0x40]
	push edx
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x12
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ebx,esp
	mov dword ptr [ebp+0x5C],esp
	mov dword ptr [ebx],0
	test eax,eax
	je Block59

 Block54:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x4C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov edi,eax
	mov eax,dword ptr [ebx]
	test edi,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x4C]
	mov dword ptr [ebp+0x5C],ecx
	test eax,eax
	je Block56

 Block55:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block56:
	mov ecx,dword ptr [ebp+0x5C]
	mov dword ptr [ebx],ecx
	test edi,edi
	jge Block59

 Block57:
	cmp edi,0x80004002
	je Block59

 Block58:
	push edi
	call _com_issue_error

 Block59:
	lea edx,[ebp+0x60]
	push edx
	mov byte ptr [ebp-4],0x13
	call CAnimationDisplayer::LoadLayer_0
	add esp,0x28
	mov ebx,8
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp-0x40],bx
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov ecx,dword ptr [ebp+0x60]
	test ecx,ecx
	sete al
	test al,al
	sete al
	test al,al
	je Block83

 Block64:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp]
	push edx
	call edi
	lea eax,[ebp]
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
	lea ecx,[ebp+0x10]
	push ecx
	mov byte ptr [ebp-4],0x16
	call edi
	lea edx,[ebp+0x10]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block68

 Block67:
	push eax
	call _com_issue_error

 Block68:
	mov ecx,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x17
	test ecx,ecx
	jne Block70

 Block69:
	push 0x80004003
	call _com_issue_error

 Block70:
	lea eax,[ebp]
	push eax
	lea edx,[ebp+0x10]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp+0x10],bx
	jne Block73

 Block71:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea ecx,[ebp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block74:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp],bx
	jne Block77

 Block75:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block78:
	push 0xFFFFFFFF
	lea ecx,[esi+0x1C8]
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::InsertBefore
	mov edi,dword ptr [eax]
	mov ecx,dword ptr [ebp+0x60]
	cmp edi,ecx
	je Block83

 Block79:
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x60]
	test ecx,ecx
	je Block81

 Block80:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	call eax
	mov ecx,dword ptr [ebp+0x60]

 Block81:
	test edi,edi
	je Block83

 Block82:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx
	mov ecx,dword ptr [ebp+0x60]

 Block83:
	mov byte ptr [ebp-4],0xE
	test ecx,ecx
	je Block85

 Block84:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block85:
	inc dword ptr [ebp+0x64]
	mov ebx,dword ptr [ebp+0x54]
	mov edi,dword ptr [ebp+0x64]
	mov dword ptr [ebp-4],0xB
	jmp Block30

 Block88:
	lea edx,[ebp+0x50]
	push 0x57B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	lea eax,[ebp+0x48]
	push eax
	mov byte ptr [ebp-4],0x19
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x50]
	add esp,8
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block90

 Block89:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block90:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x38],eax
	mov byte ptr [ebp-4],0x1A
	test eax,eax
	je Block92

 Block91:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block93

 Block92:
	xor eax,eax

 Block93:
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block103

 Block94:
	add eax,8
	je Block103

 Block95:
	lea ebx,[eax-8]
	test ebx,ebx
	je Block97

 Block96:
	lea ecx,[ebx+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block97:
	mov eax,dword ptr [esi+edi*8+0xA4]
	mov dword ptr [esi+edi*8+0xA4],ebx
	test eax,eax
	je Block101

 Block98:
	lea ebx,[eax+8]
	lea edx,[ebx+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block101

 Block99:
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block101

 Block100:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block101:
	mov eax,0x2AAAAAAB
	imul edi
	mov ecx,dword ptr [esi+edi*8+0xA4]
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,dword ptr [ecx]
	lea ebx,[ebp+0x3C]
	push ebx
	mov ebx,eax
	mov edx,dword ptr [edx+0x28]
	imul ebx,0x1A
	lea eax,[eax+eax*2]
	add eax,eax
	push 0
	push ebx
	mov ebx,eax
	mov eax,edi
	sub eax,ebx
	lea eax,[eax+eax*2]
	shl eax,5
	push eax
	lea eax,[edi+0x3E8]
	push eax
	push esi
	call edx
	mov edi,dword ptr [esi+edi*8+0xA4]
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x1C]
	lea ecx,[edi+4]
	push 0
	call edx

 Block102:
	inc dword ptr [ebp+0x64]
	mov ebx,dword ptr [ebp+0x54]
	mov edi,dword ptr [ebp+0x64]
	jmp Block30

 Block103:
	xor ebx,ebx
	jmp Block97

 Block104:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test eax,eax
	je Block107

 Block105:
	cmp dword ptr [eax+0x2090],0
	jne Block107

 Block106:
	mov ecx,esi
	call CUIWorldSelect::MakeAdvice

 Block107:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov byte ptr [ebp-4],3
	test ebx,ebx
	je Block109

 Block108:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block109:
	mov eax,dword ptr [ebp+0x48]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block111

 Block110:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block111:
	lea esp,[ebp-0x54]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x68]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x6C
	mov esp,ebp
	pop ebp
	ret
}
}
// CUIChannelSelect::OnPreFadeIn
__SUB_CLASS_THIS0(00202120, __thiscall, 138874,  CUIChannelSelect, void) {
__asm {

 Block0:
	jmp  CFadeWnd::OnPreFadeIn
}
}
// CUIRecommendWorld::OnCreate
_SUB_EXCEPTION_HANDLER(2073A0)
__SUB_CLASS_THIS(002073A0, __thiscall, 138931,  CUIRecommendWorld, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2073A0
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
	mov esi,ecx
	mov eax,dword ptr [esp+0x48]
	xor ebp,ebp
	mov dword ptr [esi+0x94],eax
	mov dword ptr [esi+0x98],ebp
	mov eax,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	cmp eax,ebp
	je Block2

 Block1:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebp
	call eax

 Block2:
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x60],esp
	push 0x1505
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	lea edx,[esp+0x48]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea edi,[esi+0xBC]
	push edi
	push eax
	mov dword ptr [esp+0x4C],ebp
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x54]
	or ebx,0xFFFFFFFF
	add esp,0xC
	mov dword ptr [esp+0x40],ebx
	cmp eax,ebp
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
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
	lea edx,[esp+0x18]
	push edx
	push 0xFF5D3C1D
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x58],esp
	push 0x1A25
	push eax
	mov dword ptr [esp+0x58],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x50],2
	cmp ecx,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov byte ptr [esp+0x50],1
	call IWzFont::Create
	cmp word ptr [esp+0x18],8
	mov dword ptr [esp+0x40],ebx
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov eax,dword ptr [edi]
	cmp eax,ebp
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x14]
	call eax
	mov eax,0x46
	cdq
	idiv dword ptr [esp+0x14]
	mov dword ptr [esp+0x34],ebp
	mov dword ptr [esp+0x2C],ebp
	mov dword ptr [esp+0x30],ebp
	mov dword ptr [esi+0xC8],eax
	lea ecx,[esp+0x48]
	push 0x1506
	mov ebx,3
	push ecx
	mov dword ptr [esp+0x48],ebx
	mov dword ptr [esp+0x30],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x44],4
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],bl
	cmp eax,ebp
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block16:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x48],eax
	mov byte ptr [esp+0x40],5
	cmp eax,ebp
	je Block18

 Block17:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block19

 Block18:
	xor eax,eax

 Block19:
	mov byte ptr [esp+0x40],bl
	cmp eax,ebp
	je Block29

 Block20:
	add eax,8
	cmp eax,ebp
	je Block29

 Block21:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block23

 Block22:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block23:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebp
	je Block25

 Block24:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block25:
	mov ecx,dword ptr [esi+0xA0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x28]
	push edx
	push ebp
	push 0x5A
	push 0x22
	push 0x3E8
	push esi
	call eax
	lea ecx,[esp+0x48]
	push 0x1507
	push ecx
	mov dword ptr [esp+0x30],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x44],6
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],bl
	cmp eax,ebp
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block27:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x48],eax
	mov byte ptr [esp+0x40],7
	cmp eax,ebp
	je Block30

 Block28:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block31

 Block29:
	xor edi,edi
	jmp Block23

 Block30:
	xor eax,eax

 Block31:
	mov byte ptr [esp+0x40],bl
	cmp eax,ebp
	je Block41

 Block32:
	add eax,8
	cmp eax,ebp
	je Block41

 Block33:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block35

 Block34:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block35:
	mov eax,dword ptr [esi+0xA8]
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebp
	je Block37

 Block36:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block37:
	mov ecx,dword ptr [esi+0xA8]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x28]
	push edx
	push ebp
	push 0x5A
	push 0x87
	push 0x3E9
	push esi
	call eax
	lea ecx,[esp+0x48]
	push 0x1508
	push ecx
	mov dword ptr [esp+0x30],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x44],8
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],bl
	cmp eax,ebp
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block39:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x48],eax
	mov byte ptr [esp+0x40],9
	cmp eax,ebp
	je Block42

 Block40:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block43

 Block41:
	xor edi,edi
	jmp Block35

 Block42:
	xor eax,eax

 Block43:
	mov byte ptr [esp+0x40],bl
	cmp eax,ebp
	je Block53

 Block44:
	add eax,8
	cmp eax,ebp
	je Block53

 Block45:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block47

 Block46:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block47:
	mov eax,dword ptr [esi+0xB0]
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebp
	je Block49

 Block48:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block49:
	mov ecx,dword ptr [esi+0xB0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x28]
	push edx
	push ebp
	push 0xB9
	push 0x2F
	push 0x3EA
	push esi
	call eax
	lea ecx,[esp+0x48]
	push 0x1509
	push ecx
	mov dword ptr [esp+0x30],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x44],0xA
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],bl
	cmp eax,ebp
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block51:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x48],eax
	mov byte ptr [esp+0x40],0xB
	cmp eax,ebp
	je Block54

 Block52:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block55

 Block53:
	xor edi,edi
	jmp Block47

 Block54:
	xor eax,eax

 Block55:
	mov byte ptr [esp+0x40],bl
	cmp eax,ebp
	je Block64

 Block56:
	add eax,8
	cmp eax,ebp
	je Block64

 Block57:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block59

 Block58:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block59:
	mov eax,dword ptr [esi+0xB8]
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebp
	je Block61

 Block60:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block61:
	mov ecx,dword ptr [esi+0xB8]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x28]
	push edx
	push ebp
	push 0xB9
	push 0x68
	push 0x3EB
	push esi
	call eax
	push 1
	mov ecx,esi
	call CUIRecommendWorld::ResetWorldAndMessage
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	cmp eax,ebp
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block63:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 4

 Block64:
	xor edi,edi
	jmp Block59
}
}
// CUIWorldSelect::SetFocusWorld
__SUB_CLASS_THIS(00202410, __thiscall, 138826,  CUIWorldSelect, void, long) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [ecx+0x98]
	xor eax,eax
	test esi,esi
	jle Block5

 Block1:
	mov edx,dword ptr [ecx+0x94]
	mov edx,dword ptr [edx+0x1CC]
	push edi
	mov edi,dword ptr [esp+0xC]
	mov edi,edi

 Block2:
	cmp dword ptr [edx],edi
	je Block4

 Block3:
	inc eax
	add edx,0x20
	cmp eax,esi
	jl Block2

 Block4:
	pop edi

 Block5:
	cmp eax,esi
	pop esi
	je Block7

 Block6:
	mov dword ptr [ecx+0x9C],eax
	mov dword ptr [esp+4],eax
	jmp  CUIWorldSelect::SetKeyFocus

 Block7:
	ret 4
}
}
// CUIWorldSelect::UserLimitResult
_SUB_EXCEPTION_HANDLER(206870)
__SUB_CLASS_THIS(00206870, __thiscall, 138828,  CUIWorldSelect, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_206870
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x30]
	sub eax,0
	je Block7

 Block1:
	sub eax,1
	je Block4

 Block2:
	sub eax,1
	jne Block12

 Block3:
	push eax
	push 1
	push eax
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push 0x588
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov ecx,dword ptr [esi+0x1D4]
	mov esi,dword ptr [esi+ecx*8+0xA4]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	add esp,0x14
	push 1
	call eax
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x24
	ret 8

 Block4:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0x587
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov ecx,dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance]
	add esp,0x14
	test ecx,ecx
	jne Block8

 Block5:
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [esi+0x1D4]
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+8],ecx
	push 0x130
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x10],edx
	mov dword ptr [esp+0x14],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x28],1
	test eax,eax
	je Block12

 Block6:
	lea ecx,[esp+8]
	jmp Block11

 Block7:
	mov ecx,dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance]
	test ecx,ecx
	je Block9

 Block8:
	mov edx,dword ptr [esp+0x34]
	mov eax,dword ptr [esi+0x1D4]
	push 1
	push edx
	push eax
	call CUIChannelSelect::ResetInfo
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x24
	ret 8

 Block9:
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [esi+0x1D4]
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x14],ecx
	push 0x130
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x1C],edx
	mov dword ptr [esp+0x20],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x28],0
	test eax,eax
	je Block12

 Block10:
	lea ecx,[esp+0x14]

 Block11:
	push ecx
	mov ecx,eax
	call CUIChannelSelect::_ctor_0

 Block12:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x24
	ret 8
}
}
// CUIWorldSelect::MakeAdvice
_SUB_EXCEPTION_HANDLER(2053B0)
__SUB_CLASS_THIS0(002053B0, __thiscall, 138820,  CUIWorldSelect, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2053B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	push 1
	push 0x22
	push 0x12C
	lea eax,[esp+0x20]
	push eax
	call CUIWorldSelect::MakeBalloon
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x1D0]
	cmp esi,eax
	je Block5

 Block1:
	mov dword ptr [edi+0x1D0],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	test esi,esi
	je Block5

 Block4:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block5:
	mov eax,dword ptr [esp+0x14]
	xor ebx,ebx
	cmp eax,ebx
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block7:
	mov ecx,3
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],ebx
	mov ecx,dword ptr [edi+0x1D0]
	mov dword ptr [esp+0x58],ebx
	cmp ecx,ebx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x58],2
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x40]
	push eax
	call esi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x5C],3
	call esi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x20]
	push 0x45
	push eax
	mov byte ptr [esp+0x68],4
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,5
	push offset _S_PLEASESELECTTHEW
	mov byte ptr [esp+0x6C],bl
	call _xbstr_t::_ctor_0
	mov ebp,dword ptr [esp+0x24]
	mov byte ptr [esp+0x68],6
	test ebp,ebp
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	push 0xA
	push 0xF
	mov ecx,ebp
	mov byte ptr [esp+0x70],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x58],4
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	mov ebx,8
	mov byte ptr [esp+0x58],3
	cmp word ptr [esp+0x30],bx
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov byte ptr [esp+0x58],2
	cmp word ptr [esp+0x40],bx
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block29:
	lea ecx,[esp+0x30]
	push ecx
	call esi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block31

 Block30:
	push eax
	call _com_issue_error

 Block31:
	lea eax,[esp+0x40]
	mov bl,7
	push eax
	mov byte ptr [esp+0x5C],bl
	call esi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	mov ecx,dword ptr [edi+0x1D0]
	mov byte ptr [esp+0x58],8
	test ecx,ecx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x44]
	push eax
	push 0xB4
	push 0x19
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x40],si
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov byte ptr [esp+0x58],2
	cmp word ptr [esp+0x30],si
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call eax
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret
}
}
// CUIWorldSelect::CreateCanvas
_SUB_EXCEPTION_HANDLER(207970)
__SUB_CLASS_THIS(00207970, __thiscall, 138833,  CUIWorldSelect, _x_com_ptr<IWzCanvas>*, _x_com_ptr<IWzCanvas>*, NakedParam<Ztl_bstr_t>, uint32_t, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_207970
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x15C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x170]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0xCC],ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A0
	push eax
	mov dword ptr [esp+0x18C],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x198]
	mov byte ptr [esp+0x184],3
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0xFC]
	push edx
	mov byte ptr [esp+0x188],2
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x180],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x88]
	mov dword ptr [esp+0x88],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0x178],6
	cmp word ptr [esp+0xF0],di
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0xF0],ax
	mov eax,dword ptr [esp+0xF8]
	cmp eax,ebx
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0xF0]
	push ecx
	call esi

 Block9:
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x198]
	mov byte ptr [esp+0x184],7
	cmp ecx,ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[esp+0x16C]
	push eax
	mov byte ptr [esp+0x188],6
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x180],8
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x98]
	mov dword ptr [esp+0x98],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov byte ptr [esp+0x178],0xA
	cmp word ptr [esp+0x160],di
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x168]
	xor ecx,ecx
	mov word ptr [esp+0x160],cx
	cmp eax,ebx
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[esp+0x160]
	push edx
	call esi

 Block18:
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x198]
	mov byte ptr [esp+0x184],0xB
	cmp ecx,ebx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea edx,[esp+0xDC]
	push edx
	mov byte ptr [esp+0x188],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x180],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xA4]
	mov dword ptr [esp+0xA4],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block23

 Block21:
	cmp eax,0x80004002
	je Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov byte ptr [esp+0x178],0xE
	cmp word ptr [esp+0xD0],di
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0xD0],ax
	mov eax,dword ptr [esp+0xD8]
	cmp eax,ebx
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[esp+0xD0]
	push ecx
	call esi

 Block27:
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x198]
	mov byte ptr [esp+0x184],0xF
	cmp ecx,ebx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea eax,[esp+0x13C]
	push eax
	mov byte ptr [esp+0x188],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x180],0x10
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xAC]
	mov dword ptr [esp+0xAC],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block32

 Block30:
	cmp eax,0x80004002
	je Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov byte ptr [esp+0x178],0x12
	cmp word ptr [esp+0x130],di
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x138]
	xor ecx,ecx
	mov word ptr [esp+0x130],cx
	cmp eax,ebx
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[esp+0x130]
	push edx
	call esi

 Block36:
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x198]
	mov byte ptr [esp+0x184],0x13
	cmp ecx,ebx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[esp+0x11C]
	push edx
	mov byte ptr [esp+0x188],0x12
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x180],0x14
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xB8]
	mov dword ptr [esp+0xB8],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block41

 Block39:
	cmp eax,0x80004002
	je Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	mov byte ptr [esp+0x178],0x16
	cmp word ptr [esp+0x110],di
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x110],ax
	mov eax,dword ptr [esp+0x118]
	cmp eax,ebx
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x110]
	push ecx
	call esi

 Block45:
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x198]
	mov byte ptr [esp+0x184],0x17
	cmp ecx,ebx
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea eax,[esp+0x15C]
	push eax
	mov byte ptr [esp+0x188],0x16
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x180],0x18
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xB4]
	mov dword ptr [esp+0xB4],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block50

 Block48:
	cmp eax,0x80004002
	je Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	mov byte ptr [esp+0x178],0x1A
	cmp word ptr [esp+0x150],di
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x158]
	xor ecx,ecx
	mov word ptr [esp+0x150],cx
	cmp eax,ebx
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[esp+0x150]
	push edx
	call esi

 Block54:
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x198]
	mov byte ptr [esp+0x184],0x1B
	cmp ecx,ebx
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	lea edx,[esp+0xEC]
	push edx
	mov byte ptr [esp+0x188],0x1A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x180],0x1C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x80]
	mov dword ptr [esp+0x80],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block59

 Block57:
	cmp eax,0x80004002
	je Block59

 Block58:
	push eax
	call _com_issue_error

 Block59:
	mov byte ptr [esp+0x178],0x1E
	cmp word ptr [esp+0xE0],di
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [esp+0xE0],ax
	mov eax,dword ptr [esp+0xE8]
	cmp eax,ebx
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[esp+0xE0]
	push ecx
	call esi

 Block63:
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x198]
	mov byte ptr [esp+0x184],0x1F
	cmp ecx,ebx
	jne Block65

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	lea eax,[esp+0x10C]
	push eax
	mov byte ptr [esp+0x188],0x1E
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x180],0x20
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xB0]
	mov dword ptr [esp+0xB0],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block68

 Block66:
	cmp eax,0x80004002
	je Block68

 Block67:
	push eax
	call _com_issue_error

 Block68:
	mov byte ptr [esp+0x178],0x22
	cmp word ptr [esp+0x100],di
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0x108]
	xor ecx,ecx
	mov word ptr [esp+0x100],cx
	cmp eax,ebx
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea edx,[esp+0x100]
	push edx
	call esi

 Block72:
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x1AD4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x198]
	mov byte ptr [esp+0x184],0x23
	cmp ecx,ebx
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	lea edx,[esp+0x12C]
	push edx
	mov byte ptr [esp+0x188],0x22
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x180],0x24
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x8C]
	mov dword ptr [esp+0x8C],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block77

 Block75:
	cmp eax,0x80004002
	je Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	mov byte ptr [esp+0x178],0x26
	cmp word ptr [esp+0x120],di
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [esp+0x120],ax
	mov eax,dword ptr [esp+0x128]
	cmp eax,ebx
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[esp+0x120]
	push ecx
	call esi

 Block81:
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x198]
	mov byte ptr [esp+0x184],0x27
	cmp ecx,ebx
	jne Block83

 Block82:
	push 0x80004003
	call _com_issue_error

 Block83:
	lea eax,[esp+0x14C]
	push eax
	mov byte ptr [esp+0x188],0x26
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x180],0x28
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xA0]
	mov dword ptr [esp+0xA0],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block86

 Block84:
	cmp eax,0x80004002
	je Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	mov byte ptr [esp+0x178],0x2A
	cmp word ptr [esp+0x140],di
	jne Block89

 Block87:
	mov eax,dword ptr [esp+0x148]
	xor ecx,ecx
	mov word ptr [esp+0x140],cx
	cmp eax,ebx
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea edx,[esp+0x140]
	push edx
	call esi

 Block90:
	mov esi,dword ptr [esp+0x7C]
	cmp esi,ebx
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x6C]
	lea ecx,[esp+0x40]
	push ecx
	push esi
	mov dword ptr [esp+0x48],ebx
	call edx
	cmp eax,ebx
	jge Block94

 Block93:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block94:
	mov edi,dword ptr [esp+0x84]
	mov esi,dword ptr [esp+0x40]
	cmp edi,ebx
	jne Block96

 Block95:
	push 0x80004003
	call _com_issue_error

 Block96:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x6C]
	lea ecx,[esp+0x3C]
	push ecx
	push edi
	mov dword ptr [esp+0x44],ebx
	call edx
	cmp eax,ebx
	jge Block98

 Block97:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block98:
	mov eax,dword ptr [esp+0x3C]
	cmp esi,eax
	jge Block100

 Block99:
	mov esi,eax

 Block100:
	mov edi,dword ptr [esp+0xA8]
	cmp edi,ebx
	jne Block102

 Block101:
	push 0x80004003
	call _com_issue_error

 Block102:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x6C]
	lea ecx,[esp+0x38]
	push ecx
	push edi
	mov dword ptr [esp+0x40],ebx
	call edx
	cmp eax,ebx
	jge Block104

 Block103:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block104:
	mov eax,dword ptr [esp+0x38]
	cmp esi,eax
	mov dword ptr [esp+0x50],eax
	jl Block106

 Block105:
	mov dword ptr [esp+0x50],esi

 Block106:
	mov esi,dword ptr [esp+0x94]
	cmp esi,ebx
	jne Block108

 Block107:
	push 0x80004003
	call _com_issue_error

 Block108:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0xA4]
	push ecx
	push esi
	mov dword ptr [esp+0xAC],ebx
	call edx
	cmp eax,ebx
	jge Block110

 Block109:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block110:
	mov esi,dword ptr [esp+0x88]
	cmp esi,ebx
	jne Block112

 Block111:
	push 0x80004003
	call _com_issue_error

 Block112:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x40]
	push ecx
	push esi
	mov dword ptr [esp+0x48],ebx
	call edx
	cmp eax,ebx
	jge Block114

 Block113:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block114:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x6C]
	mov edi,dword ptr [esp+0x40]
	lea ecx,[esp+0x3C]
	push ecx
	push esi
	mov dword ptr [esp+0x44],ebx
	call edx
	cmp eax,ebx
	jge Block116

 Block115:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block116:
	mov ebp,dword ptr [esp+0xA0]
	mov ebx,dword ptr [esp+0x3C]
	test ebp,ebp
	jne Block118

 Block117:
	push 0x80004003
	call _com_issue_error

 Block118:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x38]
	push ecx
	push ebp
	mov dword ptr [esp+0x40],0
	call edx
	test eax,eax
	jge Block120

 Block119:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block120:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x6C]
	mov esi,dword ptr [esp+0x38]
	lea ecx,[esp+0x80]
	push ecx
	push ebp
	mov dword ptr [esp+0x88],0
	call edx
	test eax,eax
	jge Block122

 Block121:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block122:
	sub esi,dword ptr [esp+0x80]
	sub edi,ebx
	mov eax,edi
	cmp eax,esi
	jb Block124

 Block123:
	mov esi,eax

 Block124:
	mov ebx,dword ptr [esp+0xB0]
	test ebx,ebx
	jne Block126

 Block125:
	push 0x80004003
	call _com_issue_error

 Block126:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x48]
	push ecx
	push ebx
	mov dword ptr [esp+0x50],0
	call edx
	test eax,eax
	jge Block128

 Block127:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block128:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x6C]
	mov edi,dword ptr [esp+0x48]
	lea ecx,[esp+0x4C]
	push ecx
	push ebx
	mov dword ptr [esp+0x54],0
	call edx
	test eax,eax
	jge Block130

 Block129:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block130:
	sub edi,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x80],edi
	cmp esi,edi
	jb Block132

 Block131:
	mov dword ptr [esp+0x80],esi

 Block132:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x40]
	push ecx
	push ebp
	mov dword ptr [esp+0x48],0
	call edx
	test eax,eax
	jge Block134

 Block133:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block134:
	mov edi,dword ptr [esp+0x84]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x74]
	mov esi,dword ptr [esp+0x40]
	lea ecx,[esp+0x3C]
	push ecx
	xor ebx,ebx
	push edi
	mov dword ptr [esp+0x44],ebx
	call edx
	cmp eax,ebx
	jge Block136

 Block135:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block136:
	mov eax,dword ptr [esp+0x3C]
	cmp esi,eax
	jge Block138

 Block137:
	mov esi,eax

 Block138:
	mov edi,dword ptr [esp+0x94]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x38]
	push ecx
	push edi
	mov dword ptr [esp+0x40],ebx
	call edx
	cmp eax,ebx
	jge Block140

 Block139:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block140:
	mov eax,dword ptr [esp+0x38]
	cmp esi,eax
	mov dword ptr [esp+0x98],eax
	jl Block142

 Block141:
	mov dword ptr [esp+0x98],esi

 Block142:
	mov esi,dword ptr [esp+0xA8]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x8C]
	push ecx
	push esi
	mov dword ptr [esp+0x94],ebx
	call edx
	cmp eax,ebx
	jge Block144

 Block143:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block144:
	mov esi,dword ptr [esp+0x9C]
	cmp esi,ebx
	jne Block146

 Block145:
	push 0x80004003
	call _com_issue_error

 Block146:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x40]
	push ecx
	push esi
	mov dword ptr [esp+0x48],ebx
	call edx
	cmp eax,ebx
	jge Block148

 Block147:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block148:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	mov edi,dword ptr [esp+0x40]
	lea ecx,[esp+0x3C]
	push ecx
	push esi
	mov dword ptr [esp+0x44],ebx
	call edx
	cmp eax,ebx
	jge Block150

 Block149:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block150:
	mov ebx,dword ptr [esp+0xAC]
	mov ebp,dword ptr [esp+0x3C]
	test ebx,ebx
	jne Block152

 Block151:
	push 0x80004003
	call _com_issue_error

 Block152:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x38]
	push ecx
	push ebx
	mov dword ptr [esp+0x40],0
	call edx
	test eax,eax
	jge Block154

 Block153:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block154:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x74]
	mov esi,dword ptr [esp+0x38]
	lea ecx,[esp+0x48]
	push ecx
	push ebx
	mov dword ptr [esp+0x50],0
	call edx
	test eax,eax
	jge Block156

 Block155:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block156:
	sub esi,dword ptr [esp+0x48]
	sub edi,ebp
	mov eax,edi
	mov dword ptr [esp+0x20],esi
	cmp eax,esi
	jb Block158

 Block157:
	mov dword ptr [esp+0x20],eax

 Block158:
	mov esi,dword ptr [esp+0x88]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x4C]
	push ecx
	xor ebx,ebx
	push esi
	mov dword ptr [esp+0x54],ebx
	call edx
	cmp eax,ebx
	jge Block160

 Block159:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block160:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	mov edi,dword ptr [esp+0x4C]
	lea ecx,[esp+0x64]
	push ecx
	push esi
	mov dword ptr [esp+0x6C],ebx
	call edx
	cmp eax,ebx
	jge Block162

 Block161:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block162:
	mov ebp,dword ptr [esp+0x7C]
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x48]
	mov ebx,dword ptr [esp+0x64]
	lea ecx,[esp+0x68]
	push ecx
	push ebp
	mov dword ptr [esp+0x70],0
	call edx
	test eax,eax
	jge Block164

 Block163:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block164:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x74]
	mov esi,dword ptr [esp+0x68]
	lea ecx,[esp+0x24]
	push ecx
	push ebp
	mov dword ptr [esp+0x2C],0
	call edx
	test eax,eax
	jge Block166

 Block165:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block166:
	sub esi,dword ptr [esp+0x24]
	sub edi,ebx
	mov eax,edi
	cmp eax,esi
	jae Block168

 Block167:
	mov eax,esi

 Block168:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x4C],eax
	cmp ecx,eax
	jb Block170

 Block169:
	mov dword ptr [esp+0x4C],ecx

 Block170:
	mov edi,dword ptr [esp+0xA0]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x20]
	push ecx
	xor ebx,ebx
	push edi
	mov dword ptr [esp+0x28],ebx
	call edx
	cmp eax,ebx
	jge Block172

 Block171:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block172:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x74]
	mov esi,dword ptr [esp+0x20]
	lea ecx,[esp+0x24]
	push ecx
	push edi
	mov dword ptr [esp+0x2C],ebx
	call edx
	cmp eax,ebx
	jge Block174

 Block173:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block174:
	mov eax,dword ptr [esp+0x24]
	mov edi,dword ptr [esp+0x88]
	mov ecx,dword ptr [edi]
	lea edx,[esp+0x40]
	push edx
	mov dword ptr [esp+0x20],eax
	mov eax,dword ptr [ecx+0x74]
	push edi
	mov dword ptr [esp+0x48],ebx
	call eax
	cmp eax,ebx
	jge Block176

 Block175:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block176:
	mov edi,dword ptr [esp+0x84]
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x48]
	mov ebp,dword ptr [esp+0x40]
	lea edx,[esp+0x3C]
	push edx
	push edi
	mov dword ptr [esp+0x44],ebx
	call eax
	test eax,eax
	jge Block178

 Block177:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block178:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x74]
	mov ebx,dword ptr [esp+0x3C]
	lea edx,[esp+0x38]
	push edx
	push edi
	mov dword ptr [esp+0x40],0
	call eax
	test eax,eax
	jge Block180

 Block179:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block180:
	mov eax,dword ptr [esp+0x7C]
	mov ecx,dword ptr [eax]
	mov edi,dword ptr [esp+0x38]
	lea edx,[esp+0x48]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x74]
	mov dword ptr [esp+0x50],0
	call eax
	test eax,eax
	jge Block182

 Block181:
	mov ecx,dword ptr [esp+0x7C]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block182:
	sub esi,dword ptr [esp+0x1C]
	mov eax,dword ptr [esp+0x48]
	sub eax,edi
	add eax,ebx
	add esi,ebp
	mov dword ptr [esp+0x38],eax
	cmp esi,eax
	jb Block184

 Block183:
	mov dword ptr [esp+0x38],esi

 Block184:
	mov ecx,dword ptr [esp+0xA4]
	mov edi,dword ptr [esp+0x9C]
	mov edx,dword ptr [edi]
	mov esi,dword ptr [esp+0x8C]
	lea eax,[ecx*8]
	sub eax,ecx
	mov ecx,dword ptr [edx+0x40]
	mov dword ptr [esp+0x3C],eax
	lea eax,[esp+0x1C]
	push eax
	xor ebp,ebp
	push edi
	add esi,0xFFFFFFFE
	mov dword ptr [esp+0x6C],7
	mov dword ptr [esp+0x24],ebp
	call ecx
	cmp eax,ebp
	jge Block186

 Block185:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block186:
	int 3// TODO: 	mov dword ptr [esp+0xB8],offset ZList<Ztl_bstr_t>::`vftable'
	mov dword ptr [esp+0xC0],ebp
	mov dword ptr [esp+0xC4],ebp
	mov dword ptr [esp+0xC8],ebp
	mov dword ptr [esp+0x90],ebp
	lea edx,[esp+0x1C]
	push 0x5AF
	push edx
	mov byte ptr [esp+0x180],0x2C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea ecx,[esp+0x94]
	push ecx
	push eax
	mov byte ptr [esp+0x184],0x2D
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x178],0x2C
	cmp eax,ebp
	je Block188

 Block187:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block188:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block190

 Block189:
	push eax
	call _com_issue_error

 Block190:
	mov edx,dword ptr [esp+0x188]
	lea ecx,[esp+0x28]
	push ecx
	push edx
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1A25
	mov bl,0x2E
	push eax
	mov byte ptr [esp+0x190],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xA0]
	mov byte ptr [esp+0x188],0x2F
	cmp ecx,ebp
	jne Block192

 Block191:
	push 0x80004003
	call _com_issue_error

 Block192:
	mov byte ptr [esp+0x188],bl
	call IWzFont::Create
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x178],0x2C
	jne Block195

 Block193:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block196

 Block194:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block196

 Block195:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block196:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block284

 Block197:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esp+0x3C]
	lea edx,[esp+0x28]
	push edx
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x190]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x190]
	mov dword ptr [esp+0x28],esp
	test eax,eax
	je Block199

 Block198:
	add eax,8
	push eax
	call ebp

 Block199:
	mov ecx,dword ptr [esp+0x9C]
	mov byte ptr [esp+0x184],0x31
	test ecx,ecx
	je Block1

 Block200:
	mov byte ptr [esp+0x184],0x30
	call IWzFont::CalcLongestText
	mov esi,eax
	mov eax,dword ptr [esp+0x184]
	mov dword ptr [esp+0x1C],esi
	test eax,eax
	je Block204

 Block201:
	cmp dword ptr [eax],0
	je Block204

 Block202:
	mov ecx,dword ptr [eax]
	test ecx,ecx
	je Block204

 Block203:
	mov ecx,dword ptr [ecx-4]
	shr ecx,1
	jmp Block205

 Block204:
	xor ecx,ecx

 Block205:
	cmp esi,ecx
	setb bl
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x178],0x2C
	jne Block208

 Block206:
	mov ecx,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test ecx,ecx
	je Block210

 Block207:
	lea eax,[ecx-4]
	push eax
	call CoTaskMemFree
	jmp Block209

 Block208:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block209:
	mov eax,dword ptr [esp+0x184]

 Block210:
	test bl,bl
	je Block286

 Block211:
	test eax,eax
	je Block213

 Block212:
	mov ecx,dword ptr [eax]
	jmp Block214

 Block213:
	xor ecx,ecx

 Block214:
	lea esi,[ecx+esi*2-2]

 Block215:
	test eax,eax
	je Block217

 Block216:
	cmp esi,dword ptr [eax]
	jb Block219

 Block217:
	movzx eax,word ptr [esi]
	push eax
	push offset _S___15
	call _wcschr
	add esp,8
	test eax,eax
	mov eax,dword ptr [esp+0x184]
	je Block219

 Block218:
	sub esi,2
	jmp Block215

 Block219:
	test eax,eax
	je Block221

 Block220:
	mov eax,dword ptr [eax]
	mov ebp,eax
	jmp Block222

 Block221:
	xor eax,eax
	xor ebp,ebp

 Block222:
	sub esi,eax
	sar esi,1
	inc esi
	lea ecx,[esi+esi+6]
	push ecx
	call CoTaskMemAlloc
	mov edi,eax
	xor ebx,ebx
	cmp edi,ebx
	jne Block224

 Block223:
	mov dword ptr [esp+0x20],ebx
	jmp Block227

 Block224:
	add esi,esi
	mov dword ptr [edi],esi
	add edi,4
	cmp ebp,ebx
	je Block226

 Block225:
	push esi
	push ebp
	push edi
	call _memcpy
	add esp,0xC

 Block226:
	xor edx,edx
	mov word ptr [edi+esi],dx
	mov dword ptr [esp+0x20],edi

 Block227:
	mov edx,dword ptr [esp+0x184]
	cmp edx,ebx
	je Block229

 Block228:
	mov eax,dword ptr [edx]
	jmp Block230

 Block229:
	xor eax,eax

 Block230:
	mov ecx,dword ptr [esp+0x1C]
	lea ebp,[eax+ecx*2]
	movzx eax,word ptr [ebp]
	cmp ax,bx
	je Block235

 Block231:
	lea esp,[esp]

 Block232:
	movzx eax,ax
	push eax
	push offset _S___15
	call _wcschr
	add esp,8
	test eax,eax
	je Block234

 Block233:
	movzx eax,word ptr [ebp+2]
	add ebp,2
	cmp ax,bx
	jne Block232

 Block234:
	mov edx,dword ptr [esp+0x184]

 Block235:
	cmp edx,ebx
	je Block238

 Block236:
	mov ecx,dword ptr [edx]
	cmp ecx,ebx
	je Block239

 Block237:
	mov eax,dword ptr [ecx-4]
	shr eax,1
	jmp Block240

 Block238:
	xor ecx,ecx

 Block239:
	xor eax,eax

 Block240:
	lea edi,[eax+eax]
	sub edi,ebp
	add edi,ecx
	sar edi,1
	lea edx,[edi+edi+6]
	push edx
	call CoTaskMemAlloc
	mov esi,eax
	cmp esi,ebx
	jne Block242

 Block241:
	mov dword ptr [esp+0x24],ebx
	jmp Block243

 Block242:
	add edi,edi
	push edi
	mov dword ptr [esi],edi
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC
	xor eax,eax
	mov word ptr [esi+edi],ax
	mov dword ptr [esp+0x24],esi

 Block243:
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebx
	je Block245

 Block244:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],1
	mov dword ptr [eax],ecx
	mov ebp,eax
	jmp Block246

 Block245:
	xor ebp,ebp

 Block246:
	mov byte ptr [esp+0x178],0x2C
	mov dword ptr [esp+0x1C],ebp
	cmp ebp,ebx
	je Block285

 Block247:
	lea ecx,[esp+0xB8]
	mov byte ptr [esp+0x178],0x33
	call ZList<Ztl_bstr_t>::AddTail_
	mov esi,eax
	lea edx,[esp+0x1C]
	cmp esi,edx
	je Block258

 Block248:
	mov edi,dword ptr [esi]
	cmp edi,ebx
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	je Block257

 Block249:
	lea eax,[edi+8]
	push eax
	call ebx
	test eax,eax
	jne Block256

 Block250:
	test edi,edi
	je Block256

 Block251:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block253

 Block252:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block253:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block255

 Block254:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block255:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block256:
	mov dword ptr [esi],0

 Block257:
	lea ecx,[ebp+8]
	push ecx
	mov dword ptr [esi],ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block259

 Block258:
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]

 Block259:
	lea edx,[ebp+8]
	push edx
	mov byte ptr [esp+0x17C],0x2C
	call ebx
	test eax,eax
	jne Block265

 Block260:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block262

 Block261:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block262:
	mov eax,dword ptr [ebp+4]
	test eax,eax
	je Block264

 Block263:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block264:
	push ebp
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block265:
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	test eax,eax
	je Block267

 Block266:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [eax+4],0
	mov dword ptr [eax+8],1
	mov dword ptr [eax],ecx
	mov esi,eax
	jmp Block268

 Block267:
	xor esi,esi

 Block268:
	mov byte ptr [esp+0x178],0x2C
	test esi,esi
	je Block285

 Block269:
	mov edi,dword ptr [esp+0x184]
	test edi,edi
	je Block277

 Block270:
	lea edx,[edi+8]
	push edx
	call ebx
	test eax,eax
	jne Block277

 Block271:
	test edi,edi
	je Block277

 Block272:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block274

 Block273:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block274:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block276

 Block275:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block276:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block277:
	lea edi,[esi+8]
	push edi
	mov dword ptr [esp+0x188],esi
	call dword ptr [ZImports::_InterlockedIncrement]
	push edi
	call ebx
	test eax,eax
	jne Block283

 Block278:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block280

 Block279:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block280:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block282

 Block281:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block282:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block283:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block197

 Block284:
	push eax
	call _com_issue_error

 Block285:
	push 0x8007000E
	call _com_issue_error

 Block286:
	lea ecx,[esp+0xB8]
	call ZList<Ztl_bstr_t>::AddTail_
	mov edi,eax
	lea edx,[esp+0x184]
	cmp edi,edx
	je Block298

 Block287:
	mov esi,dword ptr [edi]
	test esi,esi
	je Block296

 Block288:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block295

 Block289:
	test esi,esi
	je Block295

 Block290:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block292

 Block291:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block292:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block294

 Block293:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block294:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block295:
	mov dword ptr [edi],0

 Block296:
	mov ecx,dword ptr [esp+0x184]
	mov dword ptr [edi],ecx
	mov eax,dword ptr [esp+0x184]
	test eax,eax
	je Block298

 Block297:
	add eax,8
	push eax
	call ebp

 Block298:
	mov edx,dword ptr [esp+0x8C]
	mov edi,dword ptr [esp+0xC0]
	imul edx,edi
	cmp edx,dword ptr [esp+0x38]
	jae Block312

 Block299:
	mov dword ptr [esp+0x1C],0
	mov bl,0x35
	nop

 Block300:
	lea ecx,[esp+0xB8]
	mov byte ptr [esp+0x178],bl
	call ZList<Ztl_bstr_t>::AddTail_
	mov edi,eax
	lea eax,[esp+0x1C]
	cmp edi,eax
	je Block311

 Block301:
	mov esi,dword ptr [edi]
	test esi,esi
	je Block310

 Block302:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block309

 Block303:
	test esi,esi
	je Block309

 Block304:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block306

 Block305:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block306:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block308

 Block307:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block308:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block309:
	mov dword ptr [edi],0

 Block310:
	mov dword ptr [edi],0

 Block311:
	mov edx,dword ptr [esp+0x8C]
	mov edi,dword ptr [esp+0xC0]
	imul edx,edi
	mov byte ptr [esp+0x178],0x2C
	cmp edx,dword ptr [esp+0x38]
	jb Block300

 Block312:
	cmp edi,1
	jne Block324

 Block313:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block315

 Block314:
	push eax
	call _com_issue_error

 Block315:
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x18C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x18C]
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block317

 Block316:
	add eax,8
	push eax
	call ebp

 Block317:
	mov ecx,dword ptr [esp+0x98]
	mov byte ptr [esp+0x180],0x37
	test ecx,ecx
	jne Block319

 Block318:
	push 0x80004003
	call _com_issue_error

 Block319:
	mov byte ptr [esp+0x180],0x36
	call IWzFont::CalcTextWidth
	mov ebx,dword ptr [esp+0xA4]
	xor edx,edx
	lea eax,[ebx+eax-1]
	div ebx
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x178],0x2C
	mov esi,eax
	jne Block322

 Block320:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block323

 Block321:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block323

 Block322:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block323:
	or esi,1
	mov eax,ebx
	imul eax,esi
	mov dword ptr [esp+0x64],esi
	mov dword ptr [esp+0x3C],eax

 Block324:
	mov ebp,dword ptr [esp+0x8C]
	mov ecx,dword ptr [esp+0x3C]
	imul ebp,edi
	mov edx,dword ptr [esp+0x80]
	add ebp,dword ptr [esp+0x4C]
	lea eax,[ecx+edx]
	add ebp,dword ptr [esp+0x98]
	add eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x40],ebp
	mov dword ptr [esp+0x38],eax
	mov dword ptr [esp+0x44],0
	lea eax,[esp+0x1C]
	push 0x3D0
	push eax
	mov byte ptr [esp+0x180],0x38
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[esp+0x48]
	push ecx
	push eax
	mov byte ptr [esp+0x184],0x39
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x178],0x38
	test eax,eax
	je Block326

 Block325:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block326:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x54]
	push edx
	call esi
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block328

 Block327:
	push eax
	call _com_issue_error

 Block328:
	lea ecx,[esp+0x6C]
	mov bl,0x3A
	push ecx
	mov byte ptr [esp+0x17C],bl
	call esi
	lea edx,[esp+0x6C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block330

 Block329:
	push eax
	call _com_issue_error

 Block330:
	mov ecx,dword ptr [esp+0x44]
	mov byte ptr [esp+0x178],0x3B
	test ecx,ecx
	jne Block332

 Block331:
	push 0x80004003
	call _com_issue_error

 Block332:
	mov edi,dword ptr [esp+0x54]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x68]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x6C]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x70]
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [esp+0x7C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x90]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x94]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x98]
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [esp+0x58]
	push ebp
	push eax
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [edx+0x2C]
	call ecx
	test eax,eax
	jge Block334

 Block333:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block334:
	mov esi,8
	mov byte ptr [esp+0x178],bl
	cmp word ptr [esp+0x6C],si
	jne Block337

 Block335:
	mov eax,dword ptr [esp+0x74]
	xor edx,edx
	mov word ptr [esp+0x6C],dx
	test eax,eax
	je Block338

 Block336:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block338

 Block337:
	lea eax,[esp+0x6C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block338:
	mov byte ptr [esp+0x178],0x38
	cmp word ptr [esp+0x54],si
	jne Block341

 Block339:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	test eax,eax
	je Block342

 Block340:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block342

 Block341:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block342:
	cmp dword ptr [esp+0x64],0
	mov dword ptr [esp+0x68],0
	jle Block380

 Block343:
	xor ebx,ebx
	mov edi,edi

 Block344:
	mov esi,dword ptr [esp+0x94]
	mov eax,3
	mov word ptr [esp+0x54],ax
	mov dword ptr [esp+0x5C],0xFF
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[esp+0x20]
	push edx
	xor ebp,ebp
	push esi
	mov byte ptr [esp+0x180],0x3C
	mov dword ptr [esp+0x28],ebp
	call eax
	cmp eax,ebp
	jge Block346

 Block345:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block346:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x6C]
	mov edi,dword ptr [esp+0x20]
	lea edx,[esp+0x24]
	push edx
	push esi
	mov dword ptr [esp+0x2C],ebp
	call eax
	cmp eax,ebp
	jge Block348

 Block347:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block348:
	mov ecx,dword ptr [esp+0x44]
	cmp ecx,ebp
	je Block1

 Block349:
	mov ebp,dword ptr [esp+0x54]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x68]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x6C]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x70]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0xA4]
	push eax
	mov eax,dword ptr [esp+0xAC]
	sub eax,edi
	push eax
	mov eax,ebx
	sub eax,dword ptr [esp+0x3C]
	mov esi,ecx
	add eax,dword ptr [esp+0x68]
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	xor ebp,ebp
	cmp eax,ebp
	jge Block351

 Block350:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block351:
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0x178],0x38
	jne Block354

 Block352:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	cmp eax,ebp
	je Block355

 Block353:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block355

 Block354:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block355:
	mov eax,dword ptr [esp+0x64]
	cdq
	sub eax,edx
	sar eax,1
	mov ecx,3
	cmp dword ptr [esp+0x68],eax
	jne Block366

 Block356:
	mov word ptr [esp+0x6C],cx
	mov dword ptr [esp+0x74],0xFF
	mov esi,dword ptr [esp+0x9C]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x20]
	push eax
	push esi
	mov byte ptr [esp+0x180],0x3D
	mov dword ptr [esp+0x28],ebp
	call ecx
	cmp eax,ebp
	jge Block358

 Block357:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block358:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x6C]
	mov edi,dword ptr [esp+0x20]
	lea eax,[esp+0x24]
	push eax
	push esi
	mov dword ptr [esp+0x2C],ebp
	call ecx
	cmp eax,ebp
	jge Block360

 Block359:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block360:
	mov ecx,dword ptr [esp+0x44]
	cmp ecx,ebp
	je Block1

 Block361:
	mov ebp,dword ptr [esp+0x6C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x80]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x84]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x88]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0xAC]
	mov ebp,dword ptr [esp+0x50]
	push eax
	mov eax,ebp
	sub eax,edi
	sub eax,dword ptr [esp+0x60]
	mov esi,ecx
	push eax
	mov eax,ebx
	sub eax,dword ptr [esp+0x3C]
	add eax,dword ptr [esp+0x68]
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block363

 Block362:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block363:
	cmp word ptr [esp+0x6C],8
	mov byte ptr [esp+0x178],0x38
	jne Block365

 Block364:
	mov eax,dword ptr [esp+0x74]
	xor edx,edx
	mov word ptr [esp+0x6C],dx
	jmp Block375

 Block365:
	lea eax,[esp+0x6C]
	jmp Block378

 Block366:
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],0xFF
	mov esi,dword ptr [esp+0xAC]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x20]
	push eax
	push esi
	mov byte ptr [esp+0x180],0x3E
	mov dword ptr [esp+0x28],ebp
	call ecx
	cmp eax,ebp
	jge Block368

 Block367:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block368:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x6C]
	mov edi,dword ptr [esp+0x20]
	lea eax,[esp+0x24]
	push eax
	push esi
	mov dword ptr [esp+0x2C],ebp
	call ecx
	cmp eax,ebp
	jge Block370

 Block369:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block370:
	mov ecx,dword ptr [esp+0x44]
	cmp ecx,ebp
	je Block1

 Block371:
	mov ebp,dword ptr [esp+0x28]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x40]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x44]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0xBC]
	mov ebp,dword ptr [esp+0x50]
	push eax
	mov eax,ebp
	sub eax,edi
	sub eax,dword ptr [esp+0x60]
	mov esi,ecx
	push eax
	mov eax,ebx
	sub eax,dword ptr [esp+0x3C]
	add eax,dword ptr [esp+0x68]
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block373

 Block372:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block373:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x178],0x38
	jne Block377

 Block374:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx

 Block375:
	test eax,eax
	je Block379

 Block376:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block379

 Block377:
	lea eax,[esp+0x28]

 Block378:
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block379:
	mov eax,dword ptr [esp+0x68]
	add ebx,dword ptr [esp+0xA4]
	inc eax
	cmp eax,dword ptr [esp+0x64]
	mov dword ptr [esp+0x68],eax
	jl Block344

 Block380:
	cmp dword ptr [esp+0xC0],0
	mov dword ptr [esp+0x1C],0
	jbe Block421

 Block381:
	mov ecx,dword ptr [esp+0x98]
	mov dword ptr [esp+0x48],ecx

 Block382:
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],0xFF
	mov ebx,dword ptr [esp+0xA8]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x20]
	push ecx
	xor esi,esi
	push ebx
	mov byte ptr [esp+0x180],0x3F
	mov dword ptr [esp+0x28],esi
	call edx
	cmp eax,esi
	jge Block384

 Block383:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block384:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x6C]
	mov edi,dword ptr [esp+0x20]
	lea ecx,[esp+0x24]
	push ecx
	push ebx
	mov dword ptr [esp+0x2C],esi
	call edx
	cmp eax,esi
	jge Block386

 Block385:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block386:
	mov ecx,dword ptr [esp+0x44]
	cmp ecx,esi
	je Block1

 Block387:
	mov ebp,dword ptr [esp+0x28]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x40]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0x58]
	push ebx
	sub eax,edi
	push eax
	mov eax,dword ptr [esp+0x68]
	sub eax,dword ptr [esp+0x3C]
	mov esi,ecx
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block389

 Block388:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block389:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x178],0x38
	jne Block392

 Block390:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block393

 Block391:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block393

 Block392:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block393:
	cmp dword ptr [esp+0x64],0
	mov dword ptr [esp+0x68],0
	jle Block408

 Block394:
	mov ebp,dword ptr [esp+0xB4]
	xor ebx,ebx

 Block395:
	mov ecx,3
	mov word ptr [esp+0x54],cx
	mov dword ptr [esp+0x5C],0xFF
	xor esi,esi
	mov byte ptr [esp+0x178],0x40
	cmp ebp,esi
	je Block1

 Block396:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x20]
	push eax
	push ebp
	mov dword ptr [esp+0x28],esi
	call ecx
	cmp eax,esi
	jge Block398

 Block397:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block398:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x6C]
	mov edi,dword ptr [esp+0x20]
	lea eax,[esp+0x24]
	push eax
	push ebp
	mov dword ptr [esp+0x2C],esi
	call ecx
	cmp eax,esi
	jge Block400

 Block399:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block400:
	mov ecx,dword ptr [esp+0x44]
	cmp ecx,esi
	je Block1

 Block401:
	mov ebp,dword ptr [esp+0x54]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x68]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x6C]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x70]
	mov dword ptr [eax+0xC],ebp
	mov ebp,dword ptr [esp+0xC4]
	mov eax,dword ptr [esp+0x58]
	sub eax,edi
	push ebp
	push eax
	mov eax,ebx
	sub eax,dword ptr [esp+0x3C]
	mov esi,ecx
	add eax,dword ptr [esp+0x68]
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block403

 Block402:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block403:
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0x178],0x38
	jne Block406

 Block404:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	test eax,eax
	je Block407

 Block405:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block407

 Block406:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block407:
	mov eax,dword ptr [esp+0x68]
	add ebx,dword ptr [esp+0xA4]
	inc eax
	cmp eax,dword ptr [esp+0x64]
	mov dword ptr [esp+0x68],eax
	jl Block395

 Block408:
	mov ecx,3
	mov word ptr [esp+0x6C],cx
	mov dword ptr [esp+0x74],0xFF
	mov ebx,dword ptr [esp+0xB0]
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x20]
	push eax
	xor esi,esi
	push ebx
	mov byte ptr [esp+0x180],0x41
	mov dword ptr [esp+0x28],esi
	call ecx
	cmp eax,esi
	jge Block410

 Block409:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block410:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x6C]
	mov edi,dword ptr [esp+0x20]
	lea eax,[esp+0x24]
	push eax
	push ebx
	mov dword ptr [esp+0x2C],esi
	call ecx
	cmp eax,esi
	jge Block412

 Block411:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block412:
	mov ecx,dword ptr [esp+0x44]
	cmp ecx,esi
	je Block1

 Block413:
	mov ebp,dword ptr [esp+0x6C]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x80]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x84]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x88]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0x58]
	sub eax,edi
	push ebx
	push eax
	mov eax,dword ptr [esp+0x50]
	sub eax,dword ptr [esp+0x3C]
	mov esi,ecx
	sub eax,dword ptr [esp+0x98]
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block415

 Block414:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block415:
	cmp word ptr [esp+0x6C],8
	mov byte ptr [esp+0x178],0x38
	jne Block418

 Block416:
	mov eax,dword ptr [esp+0x74]
	xor edx,edx
	mov word ptr [esp+0x6C],dx
	test eax,eax
	je Block419

 Block417:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block419

 Block418:
	lea eax,[esp+0x6C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block419:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x8C]
	add dword ptr [esp+0x48],ecx
	inc eax
	mov dword ptr [esp+0x1C],eax
	cmp eax,dword ptr [esp+0xC0]
	jb Block382

 Block420:
	mov ebp,dword ptr [esp+0x40]

 Block421:
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],0xFF
	mov esi,dword ptr [esp+0x84]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x1C]
	push ecx
	push esi
	mov byte ptr [esp+0x180],0x42
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block423

 Block422:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block423:
	mov esi,dword ptr [esp+0x84]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x6C]
	mov edi,dword ptr [esp+0x1C]
	lea ecx,[esp+0x20]
	push ecx
	push esi
	mov dword ptr [esp+0x28],0
	call edx
	test eax,eax
	jge Block425

 Block424:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block425:
	mov ecx,dword ptr [esp+0x44]
	test ecx,ecx
	jne Block427

 Block426:
	push 0x80004003
	call _com_issue_error

 Block427:
	mov ebx,dword ptr [esp+0x28]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [esp+0x94]
	push eax
	mov eax,dword ptr [esp+0xAC]
	sub eax,edi
	push eax
	mov eax,dword ptr [esp+0x68]
	sub eax,dword ptr [esp+0x38]
	mov esi,ecx
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	xor ebx,ebx
	cmp eax,ebx
	jge Block429

 Block428:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block429:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x178],0x38
	jne Block432

 Block430:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebx
	je Block433

 Block431:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block433

 Block432:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block433:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],0xFF
	mov esi,dword ptr [esp+0xA0]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov byte ptr [esp+0x180],0x43
	mov dword ptr [esp+0x24],ebx
	call ecx
	cmp eax,ebx
	jge Block435

 Block434:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block435:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x6C]
	mov edi,dword ptr [esp+0x1C]
	lea eax,[esp+0x20]
	push eax
	push esi
	mov dword ptr [esp+0x28],ebx
	call ecx
	cmp eax,ebx
	jge Block437

 Block436:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block437:
	mov ecx,dword ptr [esp+0x44]
	cmp ecx,ebx
	jne Block439

 Block438:
	push 0x80004003
	call _com_issue_error

 Block439:
	mov ebx,dword ptr [esp+0x28]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x40]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [esp+0xB0]
	push eax
	mov eax,dword ptr [esp+0xAC]
	sub eax,edi
	push eax
	mov eax,dword ptr [esp+0x50]
	sub eax,dword ptr [esp+0x38]
	mov esi,ecx
	sub eax,dword ptr [esp+0x98]
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	xor ebx,ebx
	cmp eax,ebx
	jge Block441

 Block440:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block441:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x178],0x38
	jne Block444

 Block442:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebx
	je Block445

 Block443:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block445

 Block444:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block445:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],0xFF
	mov esi,dword ptr [esp+0x7C]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov byte ptr [esp+0x180],0x44
	mov dword ptr [esp+0x24],ebx
	call ecx
	cmp eax,ebx
	jge Block447

 Block446:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block447:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x6C]
	mov edi,dword ptr [esp+0x1C]
	lea eax,[esp+0x20]
	push eax
	push esi
	mov dword ptr [esp+0x28],ebx
	call ecx
	cmp eax,ebx
	jge Block449

 Block448:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block449:
	mov ecx,dword ptr [esp+0x44]
	cmp ecx,ebx
	jne Block451

 Block450:
	push 0x80004003
	call _com_issue_error

 Block451:
	mov ebx,dword ptr [esp+0x28]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x40]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [esp+0x8C]
	push eax
	mov eax,ebp
	sub eax,edi
	sub eax,dword ptr [esp+0x60]
	mov esi,ecx
	push eax
	mov eax,dword ptr [esp+0x68]
	sub eax,dword ptr [esp+0x38]
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	xor ebx,ebx
	cmp eax,ebx
	jge Block453

 Block452:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block453:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x178],0x38
	jne Block456

 Block454:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebx
	je Block457

 Block455:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block457

 Block456:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block457:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],0xFF
	mov esi,dword ptr [esp+0x88]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov byte ptr [esp+0x180],0x45
	mov dword ptr [esp+0x24],ebx
	call ecx
	cmp eax,ebx
	jge Block459

 Block458:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block459:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x6C]
	mov edi,dword ptr [esp+0x1C]
	lea eax,[esp+0x20]
	push eax
	push esi
	mov dword ptr [esp+0x28],ebx
	call ecx
	cmp eax,ebx
	jge Block461

 Block460:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block461:
	mov ecx,dword ptr [esp+0x44]
	cmp ecx,ebx
	jne Block463

 Block462:
	push 0x80004003
	call _com_issue_error

 Block463:
	mov ebx,dword ptr [esp+0x28]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x40]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [esp+0x98]
	push eax
	mov eax,ebp
	sub eax,edi
	sub eax,dword ptr [esp+0x60]
	mov esi,ecx
	push eax
	mov eax,dword ptr [esp+0x50]
	sub eax,dword ptr [esp+0x38]
	sub eax,dword ptr [esp+0x98]
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block465

 Block464:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block465:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x178],0x38
	jne Block468

 Block466:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block469

 Block467:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block469

 Block468:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block469:
	mov esi,dword ptr [esp+0x180]
	mov dword ptr [esi],0
	lea ecx,[esp+0x1C]
	push 0x3D0
	push ecx
	mov dword ptr [esp+0xD4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov byte ptr [esp+0x184],0x46
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x178],0x38
	test eax,eax
	je Block471

 Block470:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block471:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block473

 Block472:
	push eax
	call _com_issue_error

 Block473:
	lea ecx,[esp+0x28]
	mov bl,0x47
	push ecx
	mov byte ptr [esp+0x17C],bl
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block475

 Block474:
	push eax
	call _com_issue_error

 Block475:
	mov edi,dword ptr [esp+0x180]
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x178],0x48
	test ecx,ecx
	jne Block477

 Block476:
	push 0x80004003
	call _com_issue_error

 Block477:
	lea eax,[esp+0x54]
	push eax
	mov eax,dword ptr [esp+0x3C]
	lea edx,[esp+0x2C]
	push edx
	push ebp
	push eax
	call IWzCanvas::Create
	mov byte ptr [esp+0x178],bl
	mov ebx,8
	cmp word ptr [esp+0x28],bx
	jne Block480

 Block478:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block481

 Block479:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block481

 Block480:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block481:
	mov byte ptr [esp+0x178],0x38
	cmp word ptr [esp+0x54],bx
	jne Block484

 Block482:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block485

 Block483:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block485

 Block484:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block485:
	mov edx,3
	mov ecx,0xFD
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],ecx
	mov esi,dword ptr [edi]
	mov byte ptr [esp+0x178],0x49
	test esi,esi
	jne Block487

 Block486:
	push 0x80004003
	call _com_issue_error

 Block487:
	mov ebp,dword ptr [esp+0x28]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x54]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push 0
	push 0
	push esi
	call ecx
	test eax,eax
	jge Block489

 Block488:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block489:
	mov byte ptr [esp+0x178],0x38
	cmp word ptr [esp+0x28],bx
	jne Block492

 Block490:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block493

 Block491:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block493

 Block492:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block493:
	mov eax,dword ptr [esp+0xC4]
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block518

 Block494:
	mov ebx,dword ptr [esp+0x98]
	mov ebp,dword ptr [ZImports::_VariantInit]
	inc ebx

 Block495:
	lea ecx,[esp+0x1C]
	push ecx
	call ZList<Ztl_bstr_t>::GetNext
	add esp,4
	lea edx,[esp+0x28]
	push edx
	mov edi,eax
	call ebp
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block4

 Block496:
	mov eax,dword ptr [edi]
	lea ecx,[esp+0x28]
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block498

 Block497:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block498:
	mov ecx,dword ptr [esp+0x98]
	mov byte ptr [esp+0x180],0x4B
	test ecx,ecx
	je Block1

 Block499:
	mov byte ptr [esp+0x180],0x4A
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x28],8
	mov esi,eax
	mov byte ptr [esp+0x178],0x38
	jne Block502

 Block500:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block503

 Block501:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block503

 Block502:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block503:
	lea ecx,[esp+0x6C]
	push ecx
	call ebp
	lea edx,[esp+0x6C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block4

 Block504:
	lea eax,[esp+0x54]
	push eax
	mov byte ptr [esp+0x17C],0x4C
	call ebp
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block4

 Block505:
	mov ecx,dword ptr [esp+0x90]
	lea edx,[esp+0x6C]
	push edx
	lea eax,[esp+0x58]
	push eax
	mov eax,dword ptr [edi]
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block507

 Block506:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block507:
	mov edx,dword ptr [esp+0x190]
	mov ecx,dword ptr [edx]
	mov byte ptr [esp+0x188],0x4E
	test ecx,ecx
	je Block1

 Block508:
	mov eax,dword ptr [esp+0x4C]
	sub eax,esi
	cdq
	sub eax,edx
	sar eax,1
	add eax,dword ptr [esp+0x60]
	push ebx
	push eax
	mov byte ptr [esp+0x190],0x4D
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x178],0x4C
	cmp word ptr [esp+0x54],si
	jne Block511

 Block509:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block512

 Block510:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block512

 Block511:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block512:
	mov byte ptr [esp+0x178],0x38
	cmp word ptr [esp+0x6C],si
	jne Block515

 Block513:
	mov eax,dword ptr [esp+0x74]
	xor edx,edx
	mov word ptr [esp+0x6C],dx
	test eax,eax
	je Block516

 Block514:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block516

 Block515:
	lea eax,[esp+0x6C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block516:
	add ebx,dword ptr [esp+0x8C]
	cmp dword ptr [esp+0x1C],0
	jne Block495

 Block517:
	mov edi,dword ptr [esp+0x180]

 Block518:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x178],0x2C
	test eax,eax
	je Block520

 Block519:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block520:
	mov eax,dword ptr [esp+0x90]
	mov byte ptr [esp+0x178],0x2B
	test eax,eax
	je Block522

 Block521:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block522:
	lea ecx,[esp+0xB8]
	mov byte ptr [esp+0x178],0x2A
	int 3// TODO: 	mov dword ptr [esp+0xB8],offset ZList<Ztl_bstr_t>::`vftable'
	call ZList<Ztl_bstr_t>::RemoveAll
	mov eax,dword ptr [esp+0x9C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x17C],0x26
	call edx
	mov eax,dword ptr [esp+0x88]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x17C],0x22
	call edx
	mov eax,dword ptr [esp+0xAC]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x17C],0x1E
	call edx
	mov eax,dword ptr [esp+0x7C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x17C],0x1A
	call edx
	mov eax,dword ptr [esp+0xB0]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x17C],0x16
	call edx
	mov eax,dword ptr [esp+0xB4]
	mov byte ptr [esp+0x178],0x12
	test eax,eax
	je Block524

 Block523:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block524:
	mov eax,dword ptr [esp+0xA8]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x17C],0xE
	call edx
	mov eax,dword ptr [esp+0xA0]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x17C],0xA
	call edx
	mov eax,dword ptr [esp+0x94]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x17C],6
	call edx
	mov eax,dword ptr [esp+0x84]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x17C],2
	call edx
	mov ecx,dword ptr [esp+0x184]
	test ecx,ecx
	je Block526

 Block525:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x184],0

 Block526:
	mov eax,dword ptr [esp+0x18C]
	mov byte ptr [esp+0x178],0
	test eax,eax
	je Block528

 Block527:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block528:
	mov eax,edi
	mov ecx,dword ptr [esp+0x170]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x168
	ret 0x10
}
}
// CUIChannelSelect::~CUIChannelSelect
_SUB_EXCEPTION_HANDLER(2030A0)
__SUB_CLASS_THIS0(002030A0, __thiscall, 138874,  CUIChannelSelect, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2030A0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIChannelSelect::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIChannelSelect::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIChannelSelect::`vftable'{for `ZRefCounted'}
	cmp dword ptr [esi+0x12C],0
	lea edi,[esi+0x128]
	mov dword ptr [esp+0x18],8
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CConnectionNoticeDlg>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	cmp dword ptr [esi+0x124],0
	lea edi,[esi+0x120]
	mov byte ptr [esp+0x18],7
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	mov eax,dword ptr [esi+0x11C]
	mov byte ptr [esp+0x18],6
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x118]
	mov byte ptr [esp+0x18],5
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x110]
	mov byte ptr [esp+0x18],4
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0x10C]
	mov byte ptr [esp+0x18],3
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi+0x108]
	mov byte ptr [esp+0x18],2
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov eax,dword ptr [esi+0x104]
	mov byte ptr [esp+0x18],1
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance],0
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CFadeWnd::~CFadeWnd
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CUIChannelSelect::SelectChannel
_SUB_EXCEPTION_HANDLER(2034E0)
__SUB_CLASS_THIS(002034E0, __thiscall, 138890,  CUIChannelSelect, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2034E0
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+4]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x14]
	push eax
	call CUIChannelSelect::SetSelected
	lea ecx,[esp+0x14]
	push 0x57F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x10],0
	call play_ui_sound
	mov eax,dword ptr [esp+0x18]
	add esp,4
	mov dword ptr [esp+0xC],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 4
}
}
// CUIWorldSelect::OnButtonClicked
__SUB_CLASS_THIS(002025E0, __thiscall, 138822,  CUIWorldSelect, void, uint32_t) {
__asm {

 Block0:
	push edi
	mov edi,ecx
	call CUIWorldSelect::IsRequestValid
	test eax,eax
	je Block9

 Block1:
	push esi
	mov esi,dword ptr [esp+0xC]
	add esi,0xFFFFFC18
	js Block8

 Block2:
	cmp esi,dword ptr [edi+0x98]
	jge Block8

 Block3:
	push esi
	mov dword ptr [edi+0x9C],esi
	call CUIWorldSelect::EnableButtons
	push 0xFFFFFFFF
	mov ecx,edi
	call CUIWorldSelect::SetKeyFocus
	mov ecx,dword ptr [edi+0x94]
	push esi
	mov dword ptr [edi+0x1D4],esi
	call CLogin::SendCheckUserLimitPacket
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test ecx,ecx
	je Block8

 Block4:
	mov eax,dword ptr [TSingleton<CUIRecommendWorld>::ms_pInstance]
	test eax,eax
	je Block6

 Block5:
	pop esi
	add eax,4
	pop edi
	mov dword ptr [esp+4],eax
	jmp  CWndMan::SetFocus

 Block6:
	mov eax,dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance]
	test eax,eax
	je Block8

 Block7:
	pop esi
	add eax,4
	pop edi
	mov dword ptr [esp+4],eax
	jmp  CWndMan::SetFocus

 Block8:
	pop esi

 Block9:
	pop edi
	ret 4
}
}
// CUIRecommendWorld::SetRet
__SUB_CLASS_THIS(002024D0, __thiscall, 138935,  CUIRecommendWorld, void, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x94]
	mov ecx,dword ptr [eax+0x20C]
	push 1
	call CUILoginStart::SetViewWorldButton
	mov eax,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	test eax,eax
	je Block2

 Block1:
	add eax,4
	jmp Block5

 Block2:
	mov eax,dword ptr [esi+0x94]
	test eax,eax
	je Block4

 Block3:
	add eax,4
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	cmp dword ptr [esi+0x84],0
	jne Block8

 Block6:
	cmp dword ptr [esi+0x14],0
	mov ecx,dword ptr [esp+8]
	mov dword ptr [esi+0x80],ecx
	mov dword ptr [esi+0x84],1
	je Block8

 Block7:
	mov ecx,esi
	call CWnd::Destroy

 Block8:
	mov ecx,esi
	call CWnd::Destroy
	mov eax,dword ptr [esi+0x94]
	test eax,eax
	je Block10

 Block9:
	mov dword ptr [eax+0x168],0

 Block10:
	mov edx,dword ptr [esi+8]
	lea ecx,[esi+8]
	pop esi
	mov dword ptr [esp+4],1
	mov eax,dword ptr [edx]
	jmp eax
}
}
// CUIRecommendWorld::CUIRecommendWorld
_SUB_EXCEPTION_HANDLER(2065C0)
__SUB_CLASS_THIS(002065C0, __thiscall, 138928,  CUIRecommendWorld, void, CLogin*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2065C0
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
	call CDialog::_ctor_default
	xor eax,eax
	lea ecx,[esi+0x91]
	mov dword ptr [esp+0x14],eax
	cmp ecx,eax
	je Block2

 Block1:
	add ecx,0xFFFFFF6F
	mov dword ptr [TSingleton<CUIRecommendWorld>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIRecommendWorld>::ms_pInstance],eax

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIRecommendWorld::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIRecommendWorld::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIRecommendWorld::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xA0],eax
	mov dword ptr [esi+0xA8],eax
	mov dword ptr [esi+0xB0],eax
	mov dword ptr [esi+0xB8],eax
	mov dword ptr [esi+0xBC],eax
	mov dword ptr [esi+0xC0],eax
	mov dword ptr [esi+0xC4],eax
	push eax
	mov eax,dword ptr [esp+0x20]
	push eax
	push 1
	push 0xA
	push 0xE4
	push 0xC8
	push 0x98
	push 0x12E
	mov ecx,esi
	mov byte ptr [esp+0x34],8
	call CDialog::CreateDlg_0
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CUIRecommendWorld::OnButtonClicked
__SUB_CLASS_THIS(00207910, __thiscall, 138932,  CUIRecommendWorld, void, uint32_t) {
__asm {

 Block0:
	call CUIRecommendWorld::IsRequestValid
	test eax,eax
	je Block6

 Block1:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFFC18
	cmp eax,3
	ja Block6

 Block2:
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block4
cmp EAX, 2
je Block5
cmp EAX, 3
je Block7


 Block3:
	mov dword ptr [esp+4],0xFFFFFFFF
	jmp  CUIRecommendWorld::MoveWorld

 Block4:
	mov dword ptr [esp+4],1
	jmp  CUIRecommendWorld::MoveWorld

 Block5:
	call CUIRecommendWorld::SelectWorld

 Block6:
	ret 4

 Block7:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx
}
}
// CUIWorldSelect::SetKeyFocus
__SUB_CLASS_THIS(002023C0, __thiscall, 138826,  CUIWorldSelect, void, long) {
__asm {

 Block0:
	push ebx
	push esi
	mov ebx,ecx
	xor esi,esi
	cmp dword ptr [ebx+0x98],esi
	jle Block4

 Block1:
	push edi
	lea edi,[ebx+0xA4]

 Block2:
	mov ecx,dword ptr [edi]
	push 0
	call CCtrlButton::SetKeyFocus
	inc esi
	add edi,8
	cmp esi,dword ptr [ebx+0x98]
	jl Block2

 Block3:
	pop edi

 Block4:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jl Block7

 Block5:
	cmp eax,dword ptr [ebx+0x98]
	jge Block7

 Block6:
	mov ecx,dword ptr [ebx+eax*8+0xA4]
	push 1
	call CCtrlButton::SetKeyFocus

 Block7:
	pop esi
	pop ebx
	ret 4
}
}
// CUIWorldSelect::IsRequestValid
__SUB_CLASS_THIS0(002020C0, __thiscall, 138830,  CUIWorldSelect, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x94]
	cmp dword ptr [eax+0x1AC],0
	jne Block3

 Block1:
	cmp dword ptr [eax+0x1A4],1
	jne Block3

 Block2:
	mov eax,1
	ret

 Block3:
	xor eax,eax
	ret
}
}
// CUIChannelSelect::OnCreate
_SUB_EXCEPTION_HANDLER(206A10)
__SUB_CLASS_THIS(00206A10, __thiscall, 138875,  CUIChannelSelect, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_206A10
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
	mov esi,ecx
	mov eax,dword ptr [esp+0x64]
	mov ecx,dword ptr [eax]
	mov dword ptr [esi+0xF4],ecx
	mov edx,dword ptr [eax+8]
	mov dword ptr [esi+0xF8],edx
	mov ecx,dword ptr [eax+8]
	mov edx,dword ptr [eax+4]
	xor ebp,ebp
	push ebp
	push ecx
	push edx
	mov ecx,esi
	call CUIChannelSelect::ResetInfo
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push eax
	call edi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x14]
	push edx
	mov dword ptr [esp+0x60],ebp
	call edi
	lea eax,[esp+0x14]
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
	push ebp
	push ebp
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x78],esp
	push 0x57D
	push eax
	mov byte ptr [esp+0x78],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x70],2
	cmp dword ptr [_D_G_RM],ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x58]
	push ecx
	mov byte ptr [esp+0x74],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x64],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x108]
	push eax
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
	mov ebx,8
	mov byte ptr [esp+0x5C],1
	cmp word ptr [esp+0x44],bx
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	cmp eax,ebp
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0x5C],0
	cmp word ptr [esp+0x14],bx
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x24],bx
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea edx,[esp+0x14]
	push edx
	call edi
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov ebx,4
	mov ecx,3
	mov dword ptr [esp+0x5C],ebx
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x5C],5
	cmp ecx,ebp
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0xC0007D02
	push ebp
	push ebp
	push ebp
	push ebp
	lea edx,[esp+0x80]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x110]
	cmp edi,eax
	je Block30

 Block26:
	mov dword ptr [esi+0x110],eax
	cmp eax,ebp
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block28:
	cmp edi,ebp
	je Block30

 Block29:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block30:
	mov eax,dword ptr [esp+0x64]
	cmp eax,ebp
	je Block32

 Block31:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block32:
	mov edi,8
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x24],di
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebp
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x14],di
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov dword ptr [esp+0x40],ebp
	mov dword ptr [esp+0x34],1
	mov dword ptr [esp+0x38],ebp
	mov dword ptr [esp+0x3C],ebp
	lea edx,[esp+0x64]
	push 0x57E
	mov ebx,6
	push edx
	mov dword ptr [esp+0x64],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0x60],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x5C],bl
	cmp eax,ebp
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block42:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x64],eax
	mov byte ptr [esp+0x5C],8
	cmp eax,ebp
	je Block44

 Block43:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block45

 Block44:
	xor eax,eax

 Block45:
	mov byte ptr [esp+0x5C],bl
	cmp eax,ebp
	je Block54

 Block46:
	add eax,8
	cmp eax,ebp
	je Block54

 Block47:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block49

 Block48:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block49:
	mov eax,dword ptr [esi+0x124]
	mov dword ptr [esi+0x124],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block51

 Block50:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block51:
	mov ecx,dword ptr [esi+0x124]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x34]
	push eax
	push ebp
	push 0x2B
	push 0xE6
	push 0x3E8
	push esi
	call edx
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp eax,ebp
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block53:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 4

 Block54:
	xor edi,edi
	jmp Block49
}
}
// CUIChannelSelect::OnKey
// 603960
static uint8_t _SUB_2036B0_LOOKUP_TABLE_0[32] = {
0, 7, 7, 7, 1, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 2, 7, 7, 7, 7, 7, 7, 7, 7, 7, 3, 4, 5, 6, 
};
__SUB_CLASS_THIS(002036B0, __thiscall, 138878,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+8]
	push ebx
	mov ebx,ecx
	push esi
	mov esi,dword ptr [ebx+0xF8]
	test edx,edx
	js Block55

 Block1:
	mov ecx,dword ptr [esp+0xC]
	lea eax,[ecx-9]
	cmp eax,0x1F
	ja Block54

 Block2:
	movzx eax,byte ptr [eax+_SUB_2036B0_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block53
cmp EAX, 2
je Block52
cmp EAX, 3
je Block21
cmp EAX, 4
je Block39
cmp EAX, 5
je Block14
cmp EAX, 6
je Block32
cmp EAX, 7
je Block54


 Block3:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	test ecx,ecx
	je Block10

 Block4:
	push 0x10
	call CInputSystem::IsKeyPressed
	test eax,eax
	jne Block6

 Block5:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0xA1
	call CInputSystem::IsKeyPressed
	test eax,eax
	je Block10

 Block6:
	sub esi,1
	jns Block13

 Block7:
	mov eax,dword ptr [ebx+0xFC]
	add eax,0x1C
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block9

 Block8:
	lea esi,[eax-1]
	push esi
	lea ecx,[ebx-4]
	call CUIChannelSelect::SelectChannel
	pop esi
	pop ebx
	ret 8

 Block9:
	mov eax,dword ptr [eax-4]
	lea esi,[eax-1]
	push esi
	lea ecx,[ebx-4]
	call CUIChannelSelect::SelectChannel
	pop esi
	pop ebx
	ret 8

 Block10:
	mov eax,dword ptr [ebx+0xFC]
	add eax,0x1C
	mov eax,dword ptr [eax]
	inc esi
	test eax,eax
	je Block12

 Block11:
	cmp esi,dword ptr [eax-4]
	jb Block13

 Block12:
	xor esi,esi

 Block13:
	push esi
	lea ecx,[ebx-4]
	call CUIChannelSelect::SelectChannel
	pop esi
	pop ebx
	ret 8

 Block14:
	mov eax,dword ptr [ebx+0xFC]
	add eax,0x1C
	mov eax,dword ptr [eax]
	test eax,eax
	je Block16

 Block15:
	mov eax,dword ptr [eax-4]

 Block16:
	dec eax
	cmp esi,eax
	mov eax,0x66666667
	jne Block18

 Block17:
	imul esi
	sar edx,1
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea esi,[eax+eax*4]
	push esi
	lea ecx,[ebx-4]
	call CUIChannelSelect::SelectChannel
	pop esi
	pop ebx
	ret 8

 Block18:
	imul esi
	sar edx,1
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax+eax*4]
	mov edx,esi
	sub edx,ecx
	cmp edx,4
	jne Block20

 Block19:
	sub esi,edx
	push esi
	lea ecx,[ebx-4]
	call CUIChannelSelect::SelectChannel
	pop esi
	pop ebx
	ret 8

 Block20:
	inc esi
	push esi
	lea ecx,[ebx-4]
	call CUIChannelSelect::SelectChannel
	pop esi
	pop ebx
	ret 8

 Block21:
	test esi,esi
	jge Block23

 Block22:
	xor esi,esi

 Block23:
	mov eax,0x66666667
	imul esi
	sar edx,1
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea eax,[eax+eax*4]
	mov ecx,esi
	sub ecx,eax
	jne Block25

 Block24:
	add esi,4
	jmp Block26

 Block25:
	dec esi

 Block26:
	mov ecx,dword ptr [ebx+0xFC]
	mov eax,dword ptr [ecx+0x1C]
	test eax,eax
	je Block28

 Block27:
	cmp esi,dword ptr [eax-4]
	jb Block31

 Block28:
	mov ecx,eax
	test ecx,ecx
	jne Block30

 Block29:
	lea esi,[ecx-1]
	push esi
	lea ecx,[ebx-4]
	call CUIChannelSelect::SelectChannel
	pop esi
	pop ebx
	ret 8

 Block30:
	mov ecx,dword ptr [ecx-4]
	lea esi,[ecx-1]

 Block31:
	push esi
	lea ecx,[ebx-4]
	call CUIChannelSelect::SelectChannel
	pop esi
	pop ebx
	ret 8

 Block32:
	test esi,esi
	jge Block34

 Block33:
	xor esi,esi

 Block34:
	mov eax,dword ptr [ebx+0xFC]
	add eax,0x1C
	mov eax,dword ptr [eax]
	test eax,eax
	je Block36

 Block35:
	mov eax,dword ptr [eax-4]

 Block36:
	sub eax,esi
	cmp eax,5
	ja Block38

 Block37:
	mov eax,0x99999999
	imul esi
	sar edx,1
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+esi]
	lea esi,[edx+eax*4]
	push esi
	lea ecx,[ebx-4]
	call CUIChannelSelect::SelectChannel
	pop esi
	pop ebx
	ret 8

 Block38:
	add esi,5
	push esi
	lea ecx,[ebx-4]
	call CUIChannelSelect::SelectChannel
	pop esi
	pop ebx
	ret 8

 Block39:
	push edi
	test esi,esi
	jge Block41

 Block40:
	xor esi,esi
	jmp Block42

 Block41:
	cmp esi,5
	jge Block50

 Block42:
	mov ecx,dword ptr [ebx+0xFC]
	mov eax,dword ptr [ecx+0x1C]
	mov edi,esi
	test eax,eax
	jne Block44

 Block43:
	xor edx,edx
	jmp Block45

 Block44:
	mov edx,dword ptr [eax-4]

 Block45:
	mov eax,0xCCCCCCCD
	mul edx
	shr edx,2
	lea eax,[edx+esi]
	lea esi,[eax+edx*4]
	mov eax,dword ptr [ecx+0x1C]
	test eax,eax
	je Block47

 Block46:
	cmp esi,dword ptr [eax-4]
	jb Block51

 Block47:
	mov ecx,eax
	test ecx,ecx
	je Block49

 Block48:
	mov ecx,dword ptr [ecx-4]

 Block49:
	mov eax,0xCCCCCCCD
	mul ecx
	shr edx,2
	lea ecx,[edi+edx*4]
	lea esi,[edx+ecx-5]
	push esi
	lea ecx,[ebx-4]
	call CUIChannelSelect::SelectChannel
	pop edi
	pop esi
	pop ebx
	ret 8

 Block50:
	sub esi,5

 Block51:
	push esi
	lea ecx,[ebx-4]
	call CUIChannelSelect::SelectChannel
	pop edi
	pop esi
	pop ebx
	ret 8

 Block52:
	mov ecx,dword ptr [ebx+0xF0]
	call CLogin::CloseChannelSelect
	pop esi
	pop ebx
	ret 8

 Block53:
	xor eax,eax
	test esi,esi
	setl al
	lea ecx,[ebx-4]
	dec eax
	and eax,esi
	push eax
	call CUIChannelSelect::EnterChannel
	pop esi
	pop ebx
	ret 8

 Block54:
	push edx
	push ecx
	mov ecx,ebx
	call CDialog::OnKey

 Block55:
	pop esi
	pop ebx
	ret 8
}
}
// CUIChannelSelect::Delete
__SUB_CLASS_THIS0(00202460, __thiscall, 138874,  CUIChannelSelect, void) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance]
	test ecx,ecx
	je Block3

 Block1:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance]
	test eax,eax
	je Block3

 Block2:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block3:
	ret
}
}
// CUIChannelSelect::SetSelected
_SUB_EXCEPTION_HANDLER(203200)
__SUB_CLASS_THIS(00203200, __thiscall, 138890,  CUIChannelSelect, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_203200
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x60]
	cmp dword ptr [esi+0xFC],eax
	je Block37

 Block1:
	mov dword ptr [esi+0xFC],eax
	test eax,eax
	jge Block4

 Block2:
	mov eax,dword ptr [esi+0x10C]
	test eax,eax
	je Block37

 Block3:
	mov dword ptr [esi+0x10C],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x50
	ret 4

 Block4:
	push eax
	lea eax,[esp+0x44]
	push eax
	call CUIChannelSelect::GetRect
	push 0
	push 0xFF
	push 0xFFFFFFFF
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [esp+0x6C],0
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzGr2DLayer>::_QueryUnknown
	test eax,eax
	jge Block7

 Block5:
	cmp eax,0x80004002
	je Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	mov edx,dword ptr [esp+0x54]
	mov eax,dword ptr [esp+0x50]
	add edx,0xFFFFFFFD
	push edx
	add eax,0xFFFFFFFE
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x74],1
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push eax
	mov byte ptr [esp+0x78],2
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	test eax,eax
	jge Block10

 Block8:
	cmp eax,0x80004002
	je Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	lea edx,[esp+0x28]
	push 0x586
	push edx
	mov byte ptr [esp+0x7C],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x74],4
	push 0
	push eax
	lea eax,[esp+0x84]
	push eax
	mov byte ptr [esp+0x80],6
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x10C]
	add esp,0x28
	cmp edi,eax
	je Block15

 Block11:
	mov dword ptr [esi+0x10C],eax
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block13:
	test edi,edi
	je Block15

 Block14:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block15:
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block17

 Block16:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block17:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x58],5
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x58],0
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	test eax,eax
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	call edi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	lea edx,[esp+0x20]
	push edx
	mov dword ptr [esp+0x5C],7
	call edi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	mov ecx,dword ptr [esi+0x10C]
	mov byte ptr [esp+0x58],8
	test ecx,ecx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	cmp word ptr [esp+0x20],8
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x58],7
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea edx,[esp+0x20]
	push edx
	call esi

 Block33:
	cmp word ptr [esp+0x30],8
	mov dword ptr [esp+0x58],0xFFFFFFFF
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x50
	ret 4

 Block36:
	lea ecx,[esp+0x30]
	push ecx
	call esi

 Block37:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x50
	ret 4
}
}
// CUIRecommendWorld::MoveWorld
__SUB_CLASS_THIS(002078D0, __thiscall, 138935,  CUIRecommendWorld, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x94]
	add eax,0x23C
	mov eax,dword ptr [eax]
	push esi
	test eax,eax
	jne Block2

 Block1:
	xor esi,esi
	jmp Block3

 Block2:
	mov esi,dword ptr [eax-4]

 Block3:
	mov eax,dword ptr [ecx+0x98]
	add eax,esi
	add eax,dword ptr [esp+8]
	cdq
	idiv esi
	pop esi
	mov dword ptr [ecx+0x98],edx
	mov dword ptr [esp+4],1
	jmp  CUIRecommendWorld::ResetWorldAndMessage
}
}
// CUIChannelSelect::GetChannelIDFromPt
__SUB_CLASS_THIS(002029F0, __thiscall, 138884,  CUIChannelSelect, long, tagPOINT&) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	mov ebp,ecx
	mov eax,dword ptr [ebp+0x100]
	add eax,0x1C
	mov eax,dword ptr [eax]
	push esi
	push edi
	test eax,eax
	jne Block2

 Block1:
	xor ebx,ebx
	jmp Block3

 Block2:
	mov ebx,dword ptr [eax-4]

 Block3:
	xor esi,esi
	test ebx,ebx
	jle Block7

 Block4:
	mov edi,dword ptr [esp+0x24]
	lea esp,[esp]

 Block5:
	mov eax,dword ptr [edi+4]
	mov ecx,dword ptr [edi]
	push eax
	push ecx
	push esi
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebp
	call CUIChannelSelect::GetRect
	push eax
	call PtInRect
	test eax,eax
	jne Block8

 Block6:
	inc esi
	cmp esi,ebx
	jl Block5

 Block7:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	add esp,0x10
	ret 4

 Block8:
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4
}
}
// CUIWorldSelect::OnCreate
_SUB_EXCEPTION_HANDLER(20B660)
__SUB_CLASS_THIS(0020B660, __thiscall, 138821,  CUIWorldSelect, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20B660
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [esp+0x58]
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push ecx
	mov dword ptr [edi+0x94],eax
	call ebp
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[esp+0x18]
	push eax
	mov dword ptr [esp+0x54],0
	call ebp
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x50],1
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push 0xA
	push 0xB1
	push 0x234
	push 0
	push 0
	lea edx,[esp+0x74]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x1C0]
	cmp esi,eax
	je Block11

 Block7:
	mov dword ptr [edi+0x1C0],eax
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block9:
	test esi,esi
	je Block11

 Block10:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block11:
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block13:
	mov esi,8
	mov byte ptr [esp+0x50],0
	cmp word ptr [esp+0x18],si
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp word ptr [esp+0x38],si
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea edx,[esp+0x58]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,2
	mov ecx,0xD
	mov dword ptr [esp+0x50],ebx
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block23

 Block22:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block23:
	mov esi,dword ptr [edi+0x1C0]
	mov byte ptr [esp+0x50],3
	test esi,esi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
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
	jge Block27

 Block26:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x50],bl
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
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
	mov eax,dword ptr [esp+0x58]
	or esi,0xFFFFFFFF
	mov dword ptr [esp+0x50],esi
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	lea eax,[esp+0x18]
	push eax
	call ebp
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	lea edx,[esp+0x38]
	mov ebx,4
	push edx
	mov dword ptr [esp+0x54],ebx
	call ebp
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	mov ecx,dword ptr [edi+0x1C0]
	mov byte ptr [esp+0x50],5
	test ecx,ecx
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push 0xFFFFFFF6
	push 0xFFFFFFF6
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x50],bl
	mov ebx,8
	cmp word ptr [esp+0x38],bx
	jne Block42

 Block40:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov dword ptr [esp+0x50],esi
	cmp word ptr [esp+0x18],bx
	jne Block46

 Block44:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	lea edx,[esp+0x14]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,6
	mov ecx,0xD
	mov dword ptr [esp+0x50],ebx
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block49

 Block48:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block49:
	mov esi,dword ptr [edi+0x1C0]
	mov byte ptr [esp+0x50],7
	test esi,esi
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
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
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block53

 Block52:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block53:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x50],bl
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov eax,dword ptr [esp+0x14]
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x50],ebx
	test eax,eax
	je Block59

 Block58:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block59:
	mov esi,dword ptr [edi+0x1C0]
	test esi,esi
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push ebx
	push esi
	call ecx
	test eax,eax
	jge Block63

 Block62:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block63:
	lea ecx,[edi+0x1C4]
	mov dword ptr [edi+0x1CC],0
	mov dword ptr [edi+0x9C],ebx
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	mov ecx,edi
	call CUIWorldSelect::DrawWorldItems
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 4
}
}
// CUIRecommendWorld::OnChildNotify
__SUB_CLASS_THIS(002021F0, __thiscall, 138934,  CUIRecommendWorld, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	cmp edi,0x3EC
	jne Block4

 Block1:
	cmp ebx,0x12C
	jb Block4

 Block2:
	cmp ebx,0x130
	ja Block4

 Block3:
	push 0
	call CWnd::InvalidateRect

 Block4:
	cmp ebx,0x64
	jne Block6

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push edi
	mov ecx,esi
	call edx

 Block6:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CUIWorldSelect::OnKey
// 60296C
static uint8_t _SUB_202670_LOOKUP_TABLE_0[32] = {
0, 7, 7, 7, 1, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 2, 7, 7, 7, 7, 7, 7, 7, 7, 7, 3, 4, 5, 6, 
};
__SUB_CLASS_THIS(00202670, __thiscall, 138823,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+8]
	push esi
	mov esi,ecx
	test edx,edx
	js Block49

 Block1:
	mov ecx,dword ptr [esp+8]
	lea eax,[ecx-9]
	push edi
	cmp eax,0x1F
	ja Block47

 Block2:
	movzx eax,byte ptr [eax+_SUB_202670_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block41
cmp EAX, 2
je Block38
cmp EAX, 3
je Block17
cmp EAX, 4
je Block31
cmp EAX, 5
je Block11
cmp EAX, 6
je Block25
cmp EAX, 7
je Block47


 Block3:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	test ecx,ecx
	je Block8

 Block4:
	push 0x10
	call CInputSystem::IsKeyPressed
	test eax,eax
	jne Block6

 Block5:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0xA1
	call CInputSystem::IsKeyPressed
	test eax,eax
	je Block8

 Block6:
	add dword ptr [esi+0x98],0xFFFFFFFF
	jns Block10

 Block7:
	mov ecx,dword ptr [esi+0x94]
	dec ecx
	mov edx,ecx
	mov dword ptr [esi+0x98],ecx
	push edx
	lea ecx,[esi-4]
	call CUIWorldSelect::SetKeyFocus
	pop edi
	pop esi
	ret 8

 Block8:
	inc dword ptr [esi+0x98]
	mov eax,dword ptr [esi+0x98]
	cmp eax,dword ptr [esi+0x94]
	jl Block10

 Block9:
	mov dword ptr [esi+0x98],0

 Block10:
	mov edx,dword ptr [esi+0x98]
	push edx
	lea ecx,[esi-4]
	call CUIWorldSelect::SetKeyFocus
	pop edi
	pop esi
	ret 8

 Block11:
	mov eax,dword ptr [esi+0x94]
	mov ecx,dword ptr [esi+0x98]
	dec eax
	cmp ecx,eax
	jne Block13

 Block12:
	mov eax,0x2AAAAAAB
	imul ecx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax+eax*2]
	add ecx,ecx
	jmp Block16

 Block13:
	mov eax,ecx
	cdq
	mov edi,6
	idiv edi
	cmp edx,5
	jne Block15

 Block14:
	add ecx,0xFFFFFFFB
	jmp Block16

 Block15:
	inc ecx

 Block16:
	mov edx,ecx
	mov dword ptr [esi+0x98],ecx
	push edx
	lea ecx,[esi-4]
	call CUIWorldSelect::SetKeyFocus
	pop edi
	pop esi
	ret 8

 Block17:
	cmp dword ptr [esi+0x98],0
	jge Block19

 Block18:
	mov dword ptr [esi+0x98],0

 Block19:
	mov ecx,dword ptr [esi+0x98]
	mov eax,ecx
	cdq
	mov edi,6
	idiv edi
	test edx,edx
	jne Block21

 Block20:
	add ecx,5
	jmp Block22

 Block21:
	dec ecx

 Block22:
	mov eax,dword ptr [esi+0x94]
	cmp ecx,eax
	mov dword ptr [esi+0x98],ecx
	jl Block24

 Block23:
	dec eax
	mov dword ptr [esi+0x98],eax

 Block24:
	mov eax,dword ptr [esi+0x98]
	push eax
	lea ecx,[esi-4]
	call CUIWorldSelect::SetKeyFocus
	pop edi
	pop esi
	ret 8

 Block25:
	cmp dword ptr [esi+0x98],0
	jge Block27

 Block26:
	mov dword ptr [esi+0x98],0

 Block27:
	mov ecx,dword ptr [esi+0x98]
	mov edx,dword ptr [esi+0x94]
	sub edx,ecx
	cmp edx,6
	jg Block29

 Block28:
	mov eax,0x2AAAAAAB
	imul ecx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea eax,[eax+eax*2]
	add eax,eax
	sub ecx,eax
	jmp Block30

 Block29:
	add ecx,6

 Block30:
	mov dword ptr [esi+0x98],ecx
	push ecx
	lea ecx,[esi-4]
	call CUIWorldSelect::SetKeyFocus
	pop edi
	pop esi
	ret 8

 Block31:
	cmp dword ptr [esi+0x98],0
	jge Block33

 Block32:
	mov dword ptr [esi+0x98],0

 Block33:
	mov edi,dword ptr [esi+0x98]
	cmp edi,6
	jge Block36

 Block34:
	mov ecx,dword ptr [esi+0x94]
	mov eax,0x2AAAAAAB
	imul ecx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*2]
	lea eax,[edi+edx*2]
	cmp eax,ecx
	mov dword ptr [esi+0x98],eax
	jl Block37

 Block35:
	add eax,0xFFFFFFFA
	push eax
	lea ecx,[esi-4]
	mov dword ptr [esi+0x98],eax
	call CUIWorldSelect::SetKeyFocus
	pop edi
	pop esi
	ret 8

 Block36:
	add edi,0xFFFFFFFA
	mov dword ptr [esi+0x98],edi

 Block37:
	mov eax,dword ptr [esi+0x98]
	push eax
	lea ecx,[esi-4]
	call CUIWorldSelect::SetKeyFocus
	pop edi
	pop esi
	ret 8

 Block38:
	mov ecx,dword ptr [esi+0x90]
	mov edx,dword ptr [ecx+0x1A4]
	cmp edx,dword ptr [ecx+0x1C0]
	lea eax,[esi-4]
	pop edi
	jle Block40

 Block39:
	neg eax
	sbb eax,eax
	and eax,esi
	pop esi
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+4],1
	jmp  CLogin::GotoTitle

 Block40:
	neg eax
	sbb eax,eax
	and eax,esi
	pop esi
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+4],1
	jmp  CLogin::ExitGame

 Block41:
	mov eax,dword ptr [esi+0x90]
	cmp dword ptr [eax+0x1A8],0
	jne Block48

 Block42:
	cmp dword ptr [esi+0x98],0
	jge Block44

 Block43:
	mov dword ptr [esi+0x98],0

 Block44:
	mov eax,dword ptr [esi+0x98]
	cmp eax,dword ptr [esi+0x94]
	jge Block48

 Block45:
	mov eax,dword ptr [esi+eax*8+0xA0]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x20]
	call eax
	test eax,eax
	je Block48

 Block46:
	mov eax,dword ptr [esi+0x98]
	mov edx,dword ptr [esi-4]
	mov edx,dword ptr [edx+0x20]
	lea ecx,[esi-4]
	add eax,0x3E8
	push eax
	call edx
	pop edi
	pop esi
	ret 8

 Block47:
	push edx
	push ecx
	mov ecx,esi
	call CDialog::OnKey

 Block48:
	pop edi

 Block49:
	pop esi
	ret 8
}
}
// CUIWorldSelect::MakeBalloon
_SUB_EXCEPTION_HANDLER(203D40)
__SUB_CLASS_THIS(00203D40, __thiscall, 138831,  CUIWorldSelect, _x_com_ptr<IWzGr2DLayer>*, _x_com_ptr<IWzGr2DLayer>*, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_203D40
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
	mov edi,ecx
	xor ebp,ebp
	lea eax,[esp+0x74]
	mov dword ptr [esp+0x4C],ebp
	mov esi,dword ptr [ZImports::_VariantInit]
	push eax
	mov dword ptr [esp+0xC0],ebp
	call esi
	lea ecx,[esp+0x74]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x54]
	mov ebx,1
	push edx
	mov dword ptr [esp+0xC0],ebx
	call esi
	lea eax,[esp+0x54]
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
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xBC],2
	cmp ecx,ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x74]
	push edx
	lea eax,[esp+0x58]
	push eax
	mov eax,dword ptr [esp+0xD8]
	mov edx,eax
	neg edx
	sbb edx,edx
	and edx,0xFFFFFFF0
	add edx,0x10
	add edx,dword ptr [esp+0xD4]
	neg eax
	push 0xA
	sbb eax,eax
	push edx
	and eax,0xA
	add eax,dword ptr [esp+0xD8]
	push eax
	push ebp
	push ebp
	mov ebp,dword ptr [esp+0xE0]
	push ebp
	call IWzGr2D::CreateLayer
	mov dword ptr [esp+0x4C],ebx
	mov ebx,8
	mov byte ptr [esp+0xBC],1
	cmp word ptr [esp+0x54],bx
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov byte ptr [esp+0xBC],0
	cmp word ptr [esp+0x74],bx
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x7C]
	xor edx,edx
	mov word ptr [esp+0x74],dx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea eax,[esp+0x74]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block14:
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov dword ptr [esp+0xBC],3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block16:
	mov esi,dword ptr [ebp]
	mov byte ptr [esp+0xBC],4
	test esi,esi
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
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
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block20

 Block19:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	mov byte ptr [esp+0xBC],3
	cmp word ptr [esp+0x28],bx
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xBC],0
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	lea eax,[esp+0x40]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,5
	mov ecx,0xD
	mov dword ptr [esp+0xBC],ebx
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block28

 Block27:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block28:
	mov esi,dword ptr [ebp]
	mov byte ptr [esp+0xBC],6
	test esi,esi
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
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
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block32

 Block31:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block32:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xBC],bl
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xBC],0
	test eax,eax
	je Block38

 Block37:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block38:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	call edi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	lea edx,[esp+0x14]
	mov ebx,7
	push edx
	mov dword ptr [esp+0xC0],ebx
	call edi
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0xBC],8
	test ecx,ecx
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x18]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0xBC],bl
	cmp word ptr [esp+0x14],si
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov byte ptr [esp+0xBC],0
	cmp word ptr [esp+0x28],si
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov esi,dword ptr [ebp]
	xor ebx,ebx
	cmp esi,ebx
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,ebx
	jge Block56

 Block55:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block56:
	mov ecx,3
	mov word ptr [esp+0x94],cx
	mov dword ptr [esp+0x9C],ebx
	mov ecx,dword ptr [ebp]
	mov dword ptr [esp+0xBC],9
	cmp ecx,ebx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea edx,[esp+0x94]
	push edx
	lea eax,[esp+0x54]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov ebp,8
	mov byte ptr [esp+0xBC],0xB
	cmp word ptr [esp+0x94],bp
	jne Block64

 Block59:
	mov eax,dword ptr [esp+0x9C]
	xor ecx,ecx
	mov word ptr [esp+0x94],cx
	cmp eax,ebx
	je Block61

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block61:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block62:
	lea eax,[esp+0x84]
	push eax
	call edi
	lea ecx,[esp+0x84]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block65

 Block63:
	push eax
	call _com_issue_error

 Block64:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x94]
	push edx
	call esi
	jmp Block62

 Block65:
	lea edx,[esp+0x64]
	push edx
	mov byte ptr [esp+0xC0],0xC
	call edi
	lea eax,[esp+0x64]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	push ebx
	push ebx
	lea ecx,[esp+0x8C]
	push ecx
	lea edx,[esp+0x70]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0xC9D
	push eax
	mov byte ptr [esp+0xD8],0xD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xD0],0xE
	cmp dword ptr [_D_G_RM],ebx
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea ecx,[esp+0xB8]
	push ecx
	mov byte ptr [esp+0xD4],0xD
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC4],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x48],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block72

 Block70:
	cmp eax,0x80004002
	je Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	mov byte ptr [esp+0xBC],0x11
	cmp word ptr [esp+0xA4],bp
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0xAC]
	xor edx,edx
	mov word ptr [esp+0xA4],dx
	cmp eax,ebx
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea eax,[esp+0xA4]
	push eax
	call esi

 Block76:
	mov byte ptr [esp+0xBC],0x12
	cmp word ptr [esp+0x64],bp
	jne Block79

 Block77:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	cmp eax,ebx
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea edx,[esp+0x64]
	push edx
	call esi

 Block80:
	mov byte ptr [esp+0xBC],0x13
	cmp word ptr [esp+0x84],bp
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [esp+0x84],ax
	mov eax,dword ptr [esp+0x8C]
	cmp eax,ebx
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea ecx,[esp+0x84]
	push ecx
	call esi

 Block84:
	xor ebx,ebx
	mov dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x3C],ebx
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0x5A0
	push edx
	mov byte ptr [esp+0xD0],0x15
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x50]
	mov byte ptr [esp+0xC8],0x16
	cmp edi,ebx
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	lea eax,[esp+0x20]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xCC],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x17
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x3C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block89

 Block87:
	cmp eax,0x80004002
	je Block89

 Block88:
	push eax
	call _com_issue_error

 Block89:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],0x15
	jne Block92

 Block90:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	call ebp
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	mov esi,dword ptr [esp+0x50]
	mov byte ptr [esp+0xBC],0x18
	cmp esi,ebx
	jne Block97

 Block96:
	push 0x80004003
	call _com_issue_error

 Block97:
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push ebx
	push ebx
	push esi
	call ecx
	cmp eax,ebx
	jge Block99

 Block98:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block99:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xBC],0x15
	jne Block102

 Block100:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebx
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block103:
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0x5A2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x20]
	mov byte ptr [esp+0xC8],0x19
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xCC],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x1A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x3C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block106

 Block104:
	cmp eax,0x80004002
	je Block106

 Block105:
	push eax
	call _com_issue_error

 Block106:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],0x15
	jne Block109

 Block107:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block110:
	lea edx,[esp+0x28]
	push edx
	call ebp
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block112

 Block111:
	push eax
	call _com_issue_error

 Block112:
	mov edx,dword ptr [esp+0x28]
	mov ebp,dword ptr [esp+0xC8]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x48]
	push eax
	push ebx
	add ebp,0xFFFFFFF7
	push ebp
	push esi
	mov byte ptr [esp+0xDC],0x1B
	mov dword ptr [esp+0x60],ebp
	call ecx
	cmp eax,ebx
	jge Block114

 Block113:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block114:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xBC],0x15
	jne Block117

 Block115:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebx
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block118:
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0x5A6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x20]
	mov byte ptr [esp+0xC8],0x1C
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xCC],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x1D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x3C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block121

 Block119:
	cmp eax,0x80004002
	je Block121

 Block120:
	push eax
	call _com_issue_error

 Block121:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],0x15
	jne Block124

 Block122:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block125:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block127

 Block126:
	push eax
	call _com_issue_error

 Block127:
	mov edx,dword ptr [esp+0x28]
	mov ebx,dword ptr [esp+0xCC]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x48]
	push eax
	add ebx,0xFFFFFFF7
	push ebx
	push 0
	push esi
	mov byte ptr [esp+0xDC],0x1E
	mov dword ptr [esp+0x68],ebx
	call ecx
	test eax,eax
	jge Block129

 Block128:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block129:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xBC],0x15
	jne Block132

 Block130:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block133:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0x1AD4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x20]
	mov byte ptr [esp+0xC8],0x1F
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xCC],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x20
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x3C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block136

 Block134:
	cmp eax,0x80004002
	je Block136

 Block135:
	push eax
	call _com_issue_error

 Block136:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],0x15
	jne Block139

 Block137:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block140:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block142

 Block141:
	push eax
	call _com_issue_error

 Block142:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x48]
	push eax
	push ebx
	push ebp
	push esi
	mov byte ptr [esp+0xDC],0x21
	call ecx
	test eax,eax
	jge Block144

 Block143:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block144:
	mov ebx,8
	mov byte ptr [esp+0xBC],0x15
	cmp word ptr [esp+0x28],bx
	jne Block147

 Block145:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block148

 Block146:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block148

 Block147:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block148:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0x5A1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x20]
	mov byte ptr [esp+0xC8],0x22
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xCC],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x23
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x3C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block151

 Block149:
	cmp eax,0x80004002
	je Block151

 Block150:
	push eax
	call _com_issue_error

 Block151:
	mov byte ptr [esp+0xBC],0x15
	cmp word ptr [esp+0x14],bx
	jne Block154

 Block152:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block155

 Block154:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block155:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0x5A7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x20]
	mov byte ptr [esp+0xC8],0x24
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xCC],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x25
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x40]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block158

 Block156:
	cmp eax,0x80004002
	je Block158

 Block157:
	push eax
	call _com_issue_error

 Block158:
	mov byte ptr [esp+0xBC],0x15
	cmp word ptr [esp+0x14],bx
	jne Block161

 Block159:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block162

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block162

 Block161:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block162:
	mov ebx,dword ptr [esp+0x38]
	mov edi,9
	cmp dword ptr [esp+0x40],edi
	jle Block179

 Block163:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ebx,[ebx]

 Block164:
	lea eax,[esp+0x28]
	push eax
	call ebp
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block165:
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x40]
	push ebx
	push 0
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x4C]
	push edi
	push esi
	mov byte ptr [esp+0xDC],0x26
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block167

 Block166:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block167:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xBC],0x15
	jne Block170

 Block168:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block171

 Block169:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block171

 Block170:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block171:
	lea edx,[esp+0x14]
	push edx
	call ebp
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block172:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x4C]
	mov edx,dword ptr [esp+0x58]
	push eax
	mov eax,dword ptr [ecx+0x80]
	push edx
	push edi
	push esi
	mov byte ptr [esp+0xDC],0x27
	call eax
	test eax,eax
	jge Block174

 Block173:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block174:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],0x15
	jne Block177

 Block175:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block178

 Block176:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block178

 Block177:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block178:
	inc edi
	cmp edi,dword ptr [esp+0x40]
	jl Block164

 Block179:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x5A4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0xCC],0x28
	mov byte ptr [esp+0xCC],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x29
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block185

 Block180:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x24]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov edi,eax
	xor eax,eax
	test edi,edi
	setl al
	dec eax
	and eax,dword ptr [esp+0x24]
	mov ebp,eax
	test ebx,ebx
	je Block182

 Block181:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block182:
	mov ebx,ebp
	mov dword ptr [esp+0x38],ebx
	test edi,edi
	jge Block188

 Block183:
	cmp edi,0x80004002
	je Block188

 Block184:
	push edi
	call _com_issue_error

 Block185:
	test ebx,ebx
	je Block188

 Block186:
	mov eax,ebx
	xor ebx,ebx
	mov dword ptr [esp+0x38],ebx
	test eax,eax
	je Block188

 Block187:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block188:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],0x15
	jne Block191

 Block189:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block192

 Block190:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block192

 Block191:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block192:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0x5A3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	lea eax,[esp+0x20]
	mov byte ptr [esp+0xC8],0x2A
	push eax
	mov byte ptr [esp+0xCC],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x2B
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block198

 Block193:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x24]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov edi,eax
	test edi,edi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x24]
	cmp dword ptr [esp+0x3C],0
	mov ebp,ecx
	je Block195

 Block194:
	mov eax,dword ptr [esp+0x3C]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block195:
	mov dword ptr [esp+0x3C],ebp
	test edi,edi
	jge Block201

 Block196:
	cmp edi,0x80004002
	je Block201

 Block197:
	push edi
	call _com_issue_error

 Block198:
	cmp dword ptr [esp+0x3C],0
	je Block201

 Block199:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x3C],0
	test eax,eax
	je Block201

 Block200:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block201:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],0x15
	jne Block204

 Block202:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block205

 Block203:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block205

 Block204:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block205:
	mov edi,9
	cmp dword ptr [esp+0x48],edi
	jle Block222

 Block206:
	mov ebp,dword ptr [ZImports::_VariantInit]

 Block207:
	lea edx,[esp+0x14]
	push edx
	call ebp
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block208:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	push ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x34]
	push edi
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push esi
	mov byte ptr [esp+0xDC],0x2C
	call eax
	test eax,eax
	jge Block210

 Block209:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block210:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],0x15
	jne Block213

 Block211:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block214

 Block212:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block214

 Block213:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block214:
	lea eax,[esp+0x28]
	push eax
	call ebp
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block215:
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x4C]
	mov ecx,dword ptr [esp+0x50]
	push eax
	push edi
	push ecx
	push esi
	mov byte ptr [esp+0xDC],0x2D
	call edx
	test eax,eax
	jge Block217

 Block216:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block217:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xBC],0x15
	jne Block220

 Block218:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block221

 Block219:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block221

 Block220:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block221:
	inc edi
	cmp edi,dword ptr [esp+0x48]
	jl Block207

 Block222:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0x5A5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	lea eax,[esp+0x20]
	mov byte ptr [esp+0xC8],0x2E
	push eax
	mov byte ptr [esp+0xCC],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x2F
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block228

 Block223:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x24]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov edi,eax
	test edi,edi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x24]
	mov ebp,ecx
	test ebx,ebx
	je Block225

 Block224:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block225:
	mov ebx,ebp
	mov dword ptr [esp+0x38],ebx
	test edi,edi
	jge Block231

 Block226:
	cmp edi,0x80004002
	je Block231

 Block227:
	push edi
	call _com_issue_error

 Block228:
	test ebx,ebx
	je Block231

 Block229:
	mov eax,ebx
	xor ebx,ebx
	mov dword ptr [esp+0x38],ebx
	test eax,eax
	je Block231

 Block230:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block231:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],0x15
	jne Block234

 Block232:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block235

 Block233:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block235

 Block234:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block235:
	mov ebp,9
	cmp dword ptr [esp+0x40],ebp
	jle Block248

 Block236:
	mov bl,0x30

 Block237:
	mov edi,9
	cmp dword ptr [esp+0x48],edi
	jle Block246

 Block238:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block239:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x48]
	push eax
	push edi
	push ebp
	push esi
	mov byte ptr [esp+0xDC],bl
	call ecx
	test eax,eax
	jge Block241

 Block240:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block241:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],0x15
	jne Block244

 Block242:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block245

 Block243:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block245

 Block244:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block245:
	inc edi
	cmp edi,dword ptr [esp+0x48]
	jl Block238

 Block246:
	inc ebp
	cmp ebp,dword ptr [esp+0x40]
	jl Block237

 Block247:
	mov ebx,dword ptr [esp+0x38]

 Block248:
	cmp dword ptr [esp+0xD0],0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	je Block265

 Block249:
	push 0x5A8
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	lea edx,[esp+0x20]
	mov byte ptr [esp+0xC8],0x31
	push edx
	mov byte ptr [esp+0xCC],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x32
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block255

 Block250:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x24]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov edi,eax
	test edi,edi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x24]
	mov ebp,ecx
	test ebx,ebx
	je Block252

 Block251:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block252:
	mov ebx,ebp
	mov dword ptr [esp+0x38],ebx
	test edi,edi
	jge Block258

 Block253:
	cmp edi,0x80004002
	je Block258

 Block254:
	push edi
	call _com_issue_error

 Block255:
	test ebx,ebx
	je Block258

 Block256:
	mov eax,ebx
	xor ebx,ebx
	mov dword ptr [esp+0x38],ebx
	test eax,eax
	je Block258

 Block257:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block258:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],0x15
	jne Block261

 Block259:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block262

 Block260:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block262

 Block261:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block262:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block264

 Block263:
	push eax
	call _com_issue_error

 Block264:
	mov edx,dword ptr [esp+0x14]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0xD8]
	push ebx
	push 9
	add eax,0xFFFFFFF8
	mov byte ptr [esp+0xD4],0x33
	push eax
	jmp Block281

 Block265:
	push 0x5A9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	lea edx,[esp+0x20]
	mov byte ptr [esp+0xC8],0x34
	push edx
	mov byte ptr [esp+0xCC],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x35
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block271

 Block266:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x24]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov edi,eax
	test edi,edi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x24]
	mov ebp,ecx
	test ebx,ebx
	je Block268

 Block267:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block268:
	mov ebx,ebp
	mov dword ptr [esp+0x38],ebx
	test edi,edi
	jge Block274

 Block269:
	cmp edi,0x80004002
	je Block274

 Block270:
	push edi
	call _com_issue_error

 Block271:
	test ebx,ebx
	je Block274

 Block272:
	mov eax,ebx
	xor ebx,ebx
	mov dword ptr [esp+0x38],ebx
	test eax,eax
	je Block274

 Block273:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block274:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],0x15
	jne Block277

 Block275:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block278

 Block276:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block278

 Block277:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block278:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block280

 Block279:
	push eax
	call _com_issue_error

 Block280:
	mov edx,dword ptr [esp+0x14]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x58]
	push ebx
	push eax
	mov byte ptr [esp+0xD4],0x36
	push 8

 Block281:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	push esi
	call ecx
	test eax,eax
	jge Block283

 Block282:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block283:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],0x15
	jne Block286

 Block284:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block287

 Block285:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block287

 Block286:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block287:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0xBC],0x14
	test eax,eax
	je Block289

 Block288:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block289:
	mov byte ptr [esp+0xBC],0x13
	test ebx,ebx
	je Block291

 Block290:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block291:
	mov eax,dword ptr [esp+0x44]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0xC0],0xB
	call eax
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0xC0],0
	call edx
	mov eax,dword ptr [esp+0xC4]
	mov ecx,dword ptr [esp+0xB4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xAC
	ret 0x10
}
}
// CUIChannelSelect::IsRequestValid
__SUB_CLASS_THIS0(00202190, __thiscall, 138887,  CUIChannelSelect, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xF4]
	cmp dword ptr [eax+0x1AC],0
	jne Block4

 Block1:
	cmp dword ptr [eax+0x1A4],1
	jne Block4

 Block2:
	cmp dword ptr [ecx+0xCC],0
	jne Block4

 Block3:
	mov eax,1
	ret

 Block4:
	xor eax,eax
	ret
}
}
// CUIWorldSelect::MakeWSBalloon
_SUB_EXCEPTION_HANDLER(20A0F0)
__SUB_CLASS_THIS(0020A0F0, __thiscall, 138834,  CUIWorldSelect, void, NakedParam<Ztl_bstr_t>, long, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20A0F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x6C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x24],ecx
	xor edi,edi
	mov dword ptr [ebp-4],edi
	mov dword ptr [ebp+0x50],edi
	lea eax,[ebp-0x14]
	push 0x59A
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	lea ecx,[ebp-0x10]
	push 0x59B
	push ecx
	mov byte ptr [ebp-4],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],3
	cmp eax,edi
	je Block2

 Block1:
	mov ecx,dword ptr [eax-4]
	shr ecx,1
	jmp Block3

 Block2:
	xor ecx,ecx

 Block3:
	push ecx
	push eax
	lea ecx,[ebp-0x14]
	call ZXString16::_Cat
	mov eax,dword ptr [ebp-0x10]
	mov byte ptr [ebp-4],2
	cmp eax,edi
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x48]
	push edx
	call esi
	lea eax,[ebp-0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea ecx,[ebp-0x38]
	push ecx
	mov byte ptr [ebp-4],4
	call esi
	lea edx,[ebp-0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edx,dword ptr [ebp-0x14]
	push edi
	push edi
	lea eax,[ebp-0x48]
	push eax
	lea ecx,[ebp-0x38]
	push ecx
	push ecx
	mov dword ptr [ebp+0x28],esp
	mov ecx,esp
	mov bl,5
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],6
	cmp dword ptr [_D_G_RM],edi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[ebp-0x78]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],edi
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
	cmp word ptr [ebp-0x78],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],9
	jne Block17

 Block15:
	mov eax,dword ptr [ebp-0x70]
	xor ecx,ecx
	mov word ptr [ebp-0x78],cx
	cmp eax,edi
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[ebp-0x78]
	push edx
	call ebx

 Block18:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],0xA
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	cmp eax,edi
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[ebp-0x38]
	push ecx
	call ebx

 Block22:
	cmp word ptr [ebp-0x48],8
	mov byte ptr [ebp-4],0xB
	jne Block25

 Block23:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	cmp eax,edi
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[ebp-0x48]
	push eax
	call ebx

 Block26:
	mov ebx,dword ptr [ebp+0x4C]
	cmp ebx,edi
	sete al
	test al,al
	je Block33

 Block27:
	mov byte ptr [ebp-4],2
	cmp ebx,edi
	je Block29

 Block28:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block29:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],1
	cmp eax,edi
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block31:
	mov ecx,dword ptr [ebp+0x74]
	cmp ecx,edi
	je Block213

 Block32:
	call _xbstr_t::Data_t::Release
	jmp Block213

 Block33:
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x28],esp
	push 0x5AE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0xC
	cmp ebx,edi
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea ecx,[ebp+0x2C]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x2C],8
	mov dword ptr [ebp-0x10],eax
	mov byte ptr [ebp-4],0xB
	jne Block38

 Block36:
	mov eax,dword ptr [ebp+0x34]
	xor edx,edx
	mov word ptr [ebp+0x2C],dx
	cmp eax,edi
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea eax,[ebp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block39:
	lea ecx,[ebp+0x10]
	push ecx
	call esi
	lea edx,[ebp+0x10]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	mov eax,3
	mov word ptr [ebp+0x58],ax
	mov dword ptr [ebp+0x60],edi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0xF
	cmp ecx,edi
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	lea edx,[ebp+0x10]
	push edx
	lea eax,[ebp+0x58]
	push eax
	push edi
	push edi
	push edi
	push edi
	push edi
	lea edx,[ebp+0x54]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	cmp eax,edi
	je Block45

 Block44:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	mov dword ptr [ebp+0x50],eax
	call edx

 Block45:
	mov eax,dword ptr [ebp+0x54]
	cmp eax,edi
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block47:
	mov esi,8
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp+0x58],si
	jne Block50

 Block48:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	cmp eax,edi
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x10],si
	jne Block54

 Block52:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	cmp eax,edi
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov ecx,dword ptr [ebp+0x24]
	push 0xFFFFFFFF
	add ecx,0x1C4
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::InsertBefore
	mov esi,dword ptr [eax]
	mov ecx,dword ptr [ebp+0x50]
	cmp esi,ecx
	je Block60

 Block56:
	mov dword ptr [eax],ecx
	cmp ecx,edi
	je Block58

 Block57:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	call eax

 Block58:
	cmp esi,edi
	je Block60

 Block59:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block60:
	mov ecx,dword ptr [ebp+0x24]
	lea eax,[ebp+0x54]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x10
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x58],cx
	mov dword ptr [ebp+0x60],eax
	cmp eax,edi
	je Block62

 Block61:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block62:
	mov esi,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x11
	cmp esi,edi
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	mov edx,dword ptr [ebp+0x58]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x60]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x64]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,edi
	jge Block66

 Block65:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block66:
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],bl
	jne Block69

 Block67:
	mov eax,dword ptr [ebp+0x60]
	xor ecx,ecx
	mov word ptr [ebp+0x58],cx
	cmp eax,edi
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea edx,[ebp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0xB
	cmp eax,edi
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block72:
	mov ecx,dword ptr [ebp+0x24]
	lea eax,[ebp+0x54]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x12
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x58],cx
	mov dword ptr [ebp+0x60],eax
	cmp eax,edi
	je Block74

 Block73:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block74:
	mov edx,dword ptr [ebp+0x58]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x60]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x64]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	mov byte ptr [ebp-4],0x13
	call eax
	cmp eax,edi
	jge Block76

 Block75:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block76:
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],bl
	jne Block79

 Block77:
	mov eax,dword ptr [ebp+0x60]
	xor ecx,ecx
	mov word ptr [ebp+0x58],cx
	cmp eax,edi
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea edx,[ebp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0xB
	cmp eax,edi
	je Block82

 Block81:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block82:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,edi
	jge Block84

 Block83:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block84:
	xor ebx,ebx

 Block85:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x4C]
	lea edx,[ebp-0x58]
	mov byte ptr [ebp-4],0x14
	push edx
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp-0x28]
	push eax
	mov byte ptr [ebp-4],0x15
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x16
	mov dword ptr [ebp+0x54],edi
	mov dword ptr [ebp+0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block87

 Block86:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block87:
	lea ecx,[ebp+0x54]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block89

 Block88:
	cmp eax,0x80004002
	jne Block6

 Block89:
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],0x18
	cmp eax,edi
	je Block91

 Block90:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block91:
	cmp word ptr [ebp-0x58],8
	mov byte ptr [ebp-4],0x19
	jne Block94

 Block92:
	xor eax,eax
	mov word ptr [ebp-0x58],ax
	mov eax,dword ptr [ebp-0x50]
	cmp eax,edi
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea ecx,[ebp-0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block95:
	mov esi,dword ptr [ebp+0x54]
	cmp esi,edi
	sete al
	test al,al
	jne Block137

 Block96:
	lea edx,[ebp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block6

 Block97:
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],0x1A
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block6

 Block98:
	lea eax,[ebp+0x58]
	push eax
	mov byte ptr [ebp-4],0x1B
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block6

 Block99:
	lea edx,[ebp+0x10]
	push edx
	mov byte ptr [ebp-4],0x1C
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x10]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block6

 Block100:
	push 0x78
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x20],esp
	push 0x1AA9
	push ecx
	mov byte ptr [ebp-4],0x1D
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x4C]
	lea edx,[ebp-0x24]
	mov byte ptr [ebp-4],0x1E
	push edx
	mov byte ptr [ebp-4],0x1D
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1F
	call get_int32
	add esp,8
	push 3
	push eax
	lea ecx,[ebp+0x2C]
	call _xvariant_t::_ctor_0
	lea eax,[ebp+0x3C]
	push eax
	lea ecx,[ebp]
	push ecx
	lea edx,[ebp+0x58]
	push edx
	lea eax,[ebp+0x10]
	push eax
	lea ecx,[ebp+0x2C]
	push ecx
	push ecx
	mov eax,esp
	mov byte ptr [ebp-4],0x20
	mov dword ptr [ebp+0x20],esp
	mov dword ptr [eax],esi
	cmp esi,edi
	je Block102

 Block101:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block102:
	mov ecx,dword ptr [ebp-0x10]
	mov edx,dword ptr [ebp+0x74]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+0x74]
	mov dword ptr [ebp+0x20],esp
	cmp eax,edi
	je Block104

 Block103:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block104:
	mov ecx,dword ptr [ebp+0x24]
	lea eax,[ebp+0x28]
	push eax
	call CUIWorldSelect::CreateCanvas
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[ebp-0x68]
	push ecx
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x21
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x68],8
	jne Block107

 Block105:
	mov eax,dword ptr [ebp-0x60]
	xor edx,edx
	mov word ptr [ebp-0x68],dx
	cmp eax,edi
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea eax,[ebp-0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block108:
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x20
	cmp eax,edi
	je Block110

 Block109:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block110:
	cmp word ptr [ebp+0x2C],8
	mov byte ptr [ebp-4],0x1F
	jne Block113

 Block111:
	xor eax,eax
	mov word ptr [ebp+0x2C],ax
	mov eax,dword ptr [ebp+0x34]
	cmp eax,edi
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea ecx,[ebp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block114:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0x1D
	jne Block117

 Block115:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	cmp eax,edi
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block118:
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],0x1C
	jne Block121

 Block119:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	cmp eax,edi
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block122:
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],0x1B
	jne Block125

 Block123:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	cmp eax,edi
	je Block126

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block126

 Block125:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block126:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x1A
	jne Block129

 Block127:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	cmp eax,edi
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block130:
	cmp word ptr [ebp+0x3C],8
	mov byte ptr [ebp-4],0x19
	jne Block133

 Block131:
	mov eax,dword ptr [ebp+0x44]
	xor ecx,ecx
	mov word ptr [ebp+0x3C],cx
	cmp eax,edi
	je Block134

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block133:
	lea edx,[ebp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block134:
	mov byte ptr [ebp-4],0xB
	cmp esi,edi
	je Block136

 Block135:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block136:
	inc ebx
	jmp Block85

 Block137:
	mov byte ptr [ebp-4],0xB
	cmp esi,edi
	je Block139

 Block138:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block139:
	mov esi,dword ptr [ZImports::_VariantInit]
	cmp ebx,edi
	je Block151

 Block140:
	lea ecx,[ebp]
	push ecx
	call esi
	lea edx,[ebp]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block142

 Block141:
	push eax
	call _com_issue_error

 Block142:
	lea eax,[ebp+0x3C]
	mov bl,0x22
	push eax
	mov byte ptr [ebp-4],bl
	call esi
	lea ecx,[ebp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block144

 Block143:
	push eax
	call _com_issue_error

 Block144:
	mov ecx,dword ptr [ebp+0x50]
	lea edx,[ebp]
	push edx
	lea eax,[ebp+0x3C]
	push eax
	push 0x20
	mov byte ptr [ebp-4],0x23
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x3C],si
	jne Block147

 Block145:
	mov eax,dword ptr [ebp+0x44]
	xor ecx,ecx
	mov word ptr [ebp+0x3C],cx
	cmp eax,edi
	je Block148

 Block146:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block148

 Block147:
	lea edx,[ebp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block148:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp],si
	jne Block150

 Block149:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	jmp Block188

 Block150:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block191

 Block151:
	lea edx,[ebp+0x2C]
	push edx
	call esi
	lea eax,[ebp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block153

 Block152:
	push eax
	call _com_issue_error

 Block153:
	lea ecx,[ebp+0x58]
	push ecx
	mov byte ptr [ebp-4],0x24
	call esi
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block155

 Block154:
	push eax
	call _com_issue_error

 Block155:
	lea eax,[ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0x25
	call esi
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block157

 Block156:
	push eax
	call _com_issue_error

 Block157:
	lea edx,[ebp]
	push edx
	mov byte ptr [ebp-4],0x26
	call esi
	lea eax,[ebp]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block159

 Block158:
	push eax
	call _com_issue_error

 Block159:
	lea ecx,[ebp+0x3C]
	push ecx
	mov byte ptr [ebp-4],0x27
	call esi
	lea edx,[ebp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block161

 Block160:
	push eax
	call _com_issue_error

 Block161:
	lea eax,[ebp+0x2C]
	push eax
	lea ecx,[ebp+0x58]
	push ecx
	lea edx,[ebp+0x10]
	push edx
	lea eax,[ebp]
	push eax
	lea ecx,[ebp+0x3C]
	push ecx
	push ecx
	mov ecx,dword ptr [ebp+0x4C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp+0x20],esp
	mov bl,0x28
	push ecx
	mov byte ptr [ebp-4],bl
	call eax
	mov ecx,dword ptr [ebp-0x10]
	mov edx,dword ptr [ebp+0x74]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+0x74]
	mov dword ptr [ebp+0x20],esp
	cmp eax,edi
	je Block163

 Block162:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block163:
	mov ecx,dword ptr [ebp+0x24]
	lea eax,[ebp+0x28]
	push eax
	call CUIWorldSelect::CreateCanvas
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[ebp-0x24]
	push ecx
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x29
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x24],8
	jne Block172

 Block164:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	cmp eax,edi
	je Block166

 Block165:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block166:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block167:
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],bl
	cmp eax,edi
	je Block169

 Block168:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block169:
	cmp word ptr [ebp+0x3C],8
	mov byte ptr [ebp-4],0x27
	jne Block173

 Block170:
	xor eax,eax
	mov word ptr [ebp+0x3C],ax
	mov eax,dword ptr [ebp+0x44]
	cmp eax,edi
	je Block174

 Block171:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block174

 Block172:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x24]
	push eax
	call esi
	jmp Block167

 Block173:
	lea ecx,[ebp+0x3C]
	push ecx
	call esi

 Block174:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x26
	jne Block177

 Block175:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	cmp eax,edi
	je Block178

 Block176:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block178

 Block177:
	lea eax,[ebp]
	push eax
	call esi

 Block178:
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],0x25
	jne Block181

 Block179:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	cmp eax,edi
	je Block182

 Block180:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block182

 Block181:
	lea edx,[ebp+0x10]
	push edx
	call esi

 Block182:
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],0x24
	jne Block185

 Block183:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	cmp eax,edi
	je Block186

 Block184:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block186

 Block185:
	lea ecx,[ebp+0x58]
	push ecx
	call esi

 Block186:
	cmp word ptr [ebp+0x2C],8
	mov byte ptr [ebp-4],0xB
	jne Block190

 Block187:
	mov eax,dword ptr [ebp+0x34]
	xor edx,edx
	mov word ptr [ebp+0x2C],dx

 Block188:
	cmp eax,edi
	je Block191

 Block189:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block191

 Block190:
	lea eax,[ebp+0x2C]
	push eax
	call esi

 Block191:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x3C]
	push ecx
	call esi
	lea edx,[ebp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block193

 Block192:
	push eax
	call _com_issue_error

 Block193:
	lea eax,[ebp+0x2C]
	mov bl,0x2A
	push eax
	mov byte ptr [ebp-4],bl
	call esi
	lea ecx,[ebp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block195

 Block194:
	push eax
	call _com_issue_error

 Block195:
	mov ecx,dword ptr [ebp+0x7C]
	lea edx,[ebp+0x3C]
	push edx
	mov edx,dword ptr [ebp+0x78]
	lea eax,[ebp+0x2C]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x50]
	push edx
	mov byte ptr [ebp-4],0x2B
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x2C],si
	jne Block198

 Block196:
	xor eax,eax
	mov word ptr [ebp+0x2C],ax
	mov eax,dword ptr [ebp+0x34]
	cmp eax,edi
	je Block199

 Block197:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block199

 Block198:
	lea ecx,[ebp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block199:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x3C],si
	jne Block202

 Block200:
	mov eax,dword ptr [ebp+0x44]
	xor edx,edx
	mov word ptr [ebp+0x3C],dx
	cmp eax,edi
	je Block203

 Block201:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block203

 Block202:
	lea eax,[ebp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block203:
	mov eax,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],2
	call edx
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],1
	cmp eax,edi
	je Block205

 Block204:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block205:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
	mov esi,dword ptr [ebp+0x74]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp esi,edi
	je Block213

 Block206:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block213

 Block207:
	cmp esi,edi
	je Block213

 Block208:
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block210

 Block209:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block210:
	mov eax,dword ptr [esi+4]
	cmp eax,edi
	je Block212

 Block211:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block212:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block213:
	lea esp,[ebp-0x88]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x68]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x6C
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// CUIChannelSelect::OnPostFadeOut
__SUB_CLASS_THIS0(00202130, __thiscall, 138874,  CUIChannelSelect, void) {
__asm {

 Block0:
	jmp  CFadeWnd::OnPostFadeOut
}
}
// CUIWorldSelect::OnMouseButton
__SUB_CLASS_THIS(00202350, __thiscall, 138825,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	ret 0x10
}
}
// CUIRecommendWorld::SelectWorld
__SUB_CLASS_THIS0(00202490, __thiscall, 138930,  CUIRecommendWorld, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance]
	test ecx,ecx
	je Block2

 Block1:
	mov eax,dword ptr [esi+0x94]
	mov edx,dword ptr [esi+0x98]
	mov eax,dword ptr [eax+0x23C]
	mov edx,dword ptr [eax+edx*8]
	push edx
	call CUIWorldSelect::SetFocusWorld

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 1
	mov ecx,esi
	call edx
	pop esi
	ret
}
}
// CUIChannelSelect::CUIChannelSelect
_SUB_EXCEPTION_HANDLER(202E60)
__SUB_CLASS_THIS(00202E60, __thiscall, 138872,  CUIChannelSelect, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_202E60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	call CFadeWnd::_ctor_default
	xor edi,edi
	lea eax,[esi+0xF4]
	mov dword ptr [esp+0x30],edi
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFF0C
	mov dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIChannelSelect>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIChannelSelect::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIChannelSelect::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIChannelSelect::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xF8],edi
	mov dword ptr [esi+0x104],edi
	mov dword ptr [esi+0x108],edi
	mov dword ptr [esi+0x10C],edi
	mov dword ptr [esi+0x110],edi
	mov dword ptr [esi+0x114],edi
	mov dword ptr [esi+0x118],edi
	mov dword ptr [esi+0x11C],edi
	mov dword ptr [esi+0x124],edi
	mov dword ptr [esi+0x12C],edi
	push 0xC8
	push edi
	push 0x12C
	mov ecx,0xFFFFFC6E
	push ecx
	mov eax,0xFFFFFF66
	push eax
	mov ebp,0xFFFFFD36
	push ebp
	mov edx,eax
	push edx
	push ecx
	push eax
	push 0xFF
	push 0xFF
	push 0xFF
	mov ecx,esi
	mov byte ptr [esp+0x60],9
	call CFadeWnd::SetOption
	mov eax,dword ptr [esp+0x38]
	push edi
	push 1
	push eax
	push edi
	push 0xC0007D03
	push edi
	push 0xE9
	push 0x1C0
	mov ecx,esi
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esi+0x110]
	push edi
	push 0xFF
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block5:
	push edi
	push edi
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x4C],0xA
	call CWnd::GetLayer
	push ecx
	mov ebp,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ebp],edi
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x50],0xB
	mov dword ptr [esp+0x44],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block7:
	mov ecx,ebp
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	cmp eax,edi
	jge Block10

 Block8:
	cmp eax,0x80004002
	je Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	lea eax,[esp+0x2C]
	push 0x583
	push eax
	mov byte ptr [esp+0x54],0xC
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0xD
	push edi
	push eax
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x58],0xF
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov ebp,dword ptr [esi+0x118]
	add esp,0x28
	cmp ebp,eax
	je Block15

 Block11:
	mov dword ptr [esi+0x118],eax
	cmp eax,edi
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block13:
	cmp ebp,edi
	je Block15

 Block14:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block15:
	mov eax,dword ptr [esp+0x38]
	cmp eax,edi
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x30],0xE
	cmp eax,edi
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x30],9
	cmp eax,edi
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	mov eax,esi
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x24
	ret 4
}
}
// CUIWorldSelect::SetRet
__SUB_CLASS_THIS(002020B0, __thiscall, 138826,  CUIWorldSelect, void, long) {
__asm {

 Block0:
	ret 4
}
}
// CUIRecommendWorld::~CUIRecommendWorld
_SUB_EXCEPTION_HANDLER(2066A0)
__SUB_CLASS_THIS0(002066A0, __thiscall, 138930,  CUIRecommendWorld, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2066A0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIRecommendWorld::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIRecommendWorld::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIRecommendWorld::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xC4]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],6
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	lea ecx,[esi+0xC0]
	call ZArray<ZXString16>::RemoveAll
	mov eax,dword ptr [esi+0xBC]
	mov byte ptr [esp+0x1C],5
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea edi,[esi+0xB4]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xAC]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xA4]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIRecommendWorld>::ms_pInstance],ebx
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CDialog::~CDialog
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
// CUIChannelSelect::OnButtonClicked
__SUB_CLASS_THIS(002035F0, __thiscall, 138876,  CUIChannelSelect, void, uint32_t) {
__asm {

 Block0:
	call CUIChannelSelect::IsRequestValid
	test eax,eax
	je Block4

 Block1:
	cmp dword ptr [esp+4],0x3E8
	jne Block4

 Block2:
	mov eax,dword ptr [ecx+0xFC]
	test eax,eax
	jl Block4

 Block3:
	mov dword ptr [esp+4],eax
	jmp  CUIChannelSelect::EnterChannel

 Block4:
	ret 4
}
}
// CUIChannelSelect::ResetInfo
_SUB_EXCEPTION_HANDLER(206210)
__SUB_CLASS_THIS(00206210, __thiscall, 138881,  CUIChannelSelect, void, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_206210
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
	mov esi,ecx
	mov eax,dword ptr [esi+0xF4]
	mov edx,dword ptr [eax+0x1CC]
	mov ecx,dword ptr [esp+0x5C]
	shl ecx,5
	lea eax,[edx+ecx]
	mov dword ptr [esi+0x100],eax
	add eax,0xC
	xor ebp,ebp
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi+0x100]
	mov ecx,0x64
	mov dword ptr [esp+0x54],ebp
	cmp dword ptr [eax+0x10],ecx
	jne Block2

 Block1:
	cmp dword ptr [eax+0x14],ecx
	je Block9

 Block2:
	lea eax,[esp+0x18]
	push 0xE8E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x5C],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [esi+0x100]
	mov edx,dword ptr [edx+0x10]
	mov eax,0x51EB851F
	imul edx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	push eax
	push ecx
	lea ecx,[esp+0x64]
	push ecx
	mov byte ptr [esp+0x60],2
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,0xC
	cmp eax,ebp
	je Block4

 Block3:
	mov ecx,dword ptr [eax-4]
	jmp Block5

 Block4:
	xor ecx,ecx

 Block5:
	push ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x54],1
	cmp eax,ebp
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x54],0
	cmp eax,ebp
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	push 0xFFFFFFFF
	mov ecx,esi
	call CUIChannelSelect::SetSelected
	mov edi,dword ptr [esi+0x100]
	mov eax,dword ptr [edi+0x1C]
	cmp eax,ebp
	jne Block11

 Block10:
	xor edx,edx
	jmp Block12

 Block11:
	mov edx,dword ptr [eax-4]

 Block12:
	xor ecx,ecx
	cmp edx,ebp
	jle Block18

 Block13:
	add eax,4
	nop

 Block14:
	cmp dword ptr [eax],0x3E8
	jl Block17

 Block15:
	inc ecx
	add eax,0x14
	cmp ecx,edx
	jl Block14

 Block16:
	jmp Block18

 Block17:
	push ecx
	mov ecx,esi
	call CUIChannelSelect::SetSelected

 Block18:
	mov dword ptr [esp+0x5C],ebp
	mov edx,dword ptr [esp+0x60]
	lea eax,[esp+0x60]
	push 0x584
	push eax
	mov byte ptr [esp+0x5C],3
	mov dword ptr [esi+0xF8],edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esi+0x100]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x64]
	push eax
	mov byte ptr [esp+0x60],4
	call ZXString16::Format
	mov eax,dword ptr [esp+0x6C]
	add esp,0xC
	mov byte ptr [esp+0x54],3
	cmp eax,ebp
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block20:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x58],5
	call edi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	push ebp
	push ebp
	lea edx,[esp+0x34]
	push edx
	mov edx,dword ptr [esp+0x68]
	lea eax,[esp+0x28]
	push eax
	push ecx
	mov dword ptr [esp+0x74],esp
	mov ecx,esp
	mov bl,6
	push edx
	mov byte ptr [esp+0x6C],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x68],7
	cmp dword ptr [_D_G_RM],ebp
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea eax,[esp+0x50]
	mov byte ptr [esp+0x68],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],8
	call Ztl_variant_t::GetUnknown
	cmp eax,ebp
	je Block32

 Block27:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x60]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov edi,eax
	mov eax,dword ptr [esi+0x104]
	cmp edi,ebp
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x60]
	mov ebp,ecx
	test eax,eax
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block29:
	mov dword ptr [esi+0x104],ebp
	test edi,edi
	jge Block34

 Block30:
	cmp edi,0x80004002
	je Block34

 Block31:
	push edi
	call _com_issue_error

 Block32:
	mov eax,dword ptr [esi+0x104]
	cmp eax,ebp
	je Block35

 Block33:
	mov dword ptr [esi+0x104],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block35

 Block34:
	xor ebp,ebp

 Block35:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x54],bl
	mov ebx,8
	cmp word ptr [esp+0x3C],bx
	jne Block38

 Block36:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea ecx,[esp+0x3C]
	push ecx
	call edi

 Block39:
	mov byte ptr [esp+0x54],5
	cmp word ptr [esp+0x1C],bx
	jne Block42

 Block40:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,ebp
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea eax,[esp+0x1C]
	push eax
	call edi

 Block43:
	mov byte ptr [esp+0x54],3
	cmp word ptr [esp+0x2C],bx
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea edx,[esp+0x2C]
	push edx
	call edi

 Block47:
	cmp dword ptr [esp+0x64],ebp
	je Block49

 Block48:
	push ebp
	mov ecx,esi
	call CWnd::InvalidateRect

 Block49:
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x54],0
	cmp eax,ebp
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block51:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp eax,ebp
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
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
// CUIRecommendWorld::IsRequestValid
__SUB_CLASS_THIS0(002021C0, __thiscall, 138939,  CUIRecommendWorld, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x94]
	cmp dword ptr [eax+0x1AC],0
	jne Block3

 Block1:
	cmp dword ptr [eax+0x1A4],1
	jne Block3

 Block2:
	mov eax,1
	ret

 Block3:
	xor eax,eax
	ret
}
}
// CUIRecommendWorld::Draw
_SUB_EXCEPTION_HANDLER(203980)
__SUB_CLASS_THIS(00203980, __thiscall, 138933,  CUIRecommendWorld, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_203980
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [esp+0x60]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x60]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov edx,3
	mov ecx,0xFF
	mov dword ptr [esp+0x58],0
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],ecx
	mov esi,dword ptr [esp+0x60]
	mov edx,dword ptr [edi+0xC4]
	mov byte ptr [esp+0x58],1
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ebp,dword ptr [esp+0x20]
	mov ebx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x34]
	push edx
	mov edx,dword ptr [ebx+0x80]
	push 0x23
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x44]
	push 0x22
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	xor ebx,ebx
	cmp eax,ebx
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x58],bl
	jne Block7

 Block5:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebx
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov eax,dword ptr [edi+0xBC]
	cmp eax,ebx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x14]
	lea ecx,[esp+0x1C]
	push ecx
	push eax
	call edx
	mov eax,dword ptr [edi+0xC0]
	cmp eax,ebx
	jne Block12

 Block11:
	mov dword ptr [esp+0x14],ebx
	jmp Block13

 Block12:
	mov eax,dword ptr [eax-4]
	mov dword ptr [esp+0x14],eax

 Block13:
	cmp dword ptr [esp+0x14],ebx
	jle Block33

 Block14:
	lea esp,[esp]

 Block15:
	cmp ebx,dword ptr [edi+0xC8]
	jge Block33

 Block16:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block34

 Block17:
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [edi+0xC0]
	lea ebp,[ebx*4]
	push ecx
	add eax,ebp
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x64],2
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi+0xBC]
	mov byte ptr [esp+0x60],3
	test ecx,ecx
	je Block1

 Block18:
	mov byte ptr [esp+0x60],2
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x20],8
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x58],0
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov esi,0x7D
	sub esi,dword ptr [esp+0x18]
	lea eax,[esp+0x40]
	push eax
	shr esi,1
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block34

 Block23:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x5C],4
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block34

 Block24:
	mov eax,dword ptr [edi+0xBC]
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push eax
	mov eax,dword ptr [edi+0xC0]
	push ecx
	add eax,ebp
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x6C],5
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x70]
	mov eax,ebx
	imul eax,dword ptr [esp+0x2C]
	add eax,0x6E
	push eax
	add esi,0x28
	mov byte ptr [esp+0x6C],6
	push esi
	mov byte ptr [esp+0x70],5
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x58],4
	cmp word ptr [esp+0x30],si
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov byte ptr [esp+0x58],0
	cmp word ptr [esp+0x40],si
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov esi,dword ptr [esp+0x60]
	inc ebx
	cmp ebx,dword ptr [esp+0x14]
	jl Block15

 Block33:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call eax
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret 4

 Block34:
	push eax
	call _com_issue_error
}
}
// CUIChannelSelect::DrawNoticeConnecting
_SUB_EXCEPTION_HANDLER(202BA0)
__SUB_CLASS_THIS0(00202BA0, __thiscall, 138874,  CUIChannelSelect, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_202BA0
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
	mov ebx,ecx
	push 0xA4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x20],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [ebx+0xF4]
	push ecx
	mov ecx,eax
	call CConnectionNoticeDlg::_ctor_0
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	lea esi,[ebx+0x128]
	test eax,eax
	je Block12

 Block4:
	add eax,8
	je Block12

 Block5:
	lea edi,[eax-8]
	test edi,edi
	je Block7

 Block6:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+4]
	mov dword ptr [esi+4],edi
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block9

 Block8:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CConnectionNoticeDlg>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [ebx+0x12C]
	call CDialog::DoModal
	cmp dword ptr [esi+4],0
	je Block11

 Block10:
	push 0
	mov ecx,esi
	call ZRef<CConnectionNoticeDlg>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block11:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret

 Block12:
	xor edi,edi
	jmp Block7
}
}
// CUIChannelSelect::OnMouseButton
__SUB_CLASS_THIS(00203620, __thiscall, 138877,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	sub esp,8
	push esi
	push edi
	mov edi,ecx
	lea esi,[edi-4]
	mov ecx,esi
	call CUIChannelSelect::IsRequestValid
	test eax,eax
	je Block7

 Block1:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+8],eax
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0xC],ecx
	cmp eax,0x201
	jne Block4

 Block2:
	lea edx,[esp+8]
	push edx
	mov ecx,esi
	call CUIChannelSelect::GetChannelIDFromPt
	test eax,eax
	jl Block7

 Block3:
	push eax
	mov ecx,esi
	call CUIChannelSelect::SelectChannel
	pop edi
	pop esi
	add esp,8
	ret 0x10

 Block4:
	cmp eax,0x203
	jne Block7

 Block5:
	lea eax,[esp+8]
	push eax
	mov ecx,esi
	call CUIChannelSelect::GetChannelIDFromPt
	test eax,eax
	jl Block7

 Block6:
	push eax
	mov ecx,esi
	call CUIChannelSelect::SelectChannel
	mov ecx,dword ptr [edi+0xF8]
	push ecx
	mov ecx,esi
	call CUIChannelSelect::EnterChannel

 Block7:
	pop edi
	pop esi
	add esp,8
	ret 0x10
}
}
// CUIChannelSelect::EnterChannel
__SUB_CLASS_THIS(00203570, __thiscall, 138890,  CUIChannelSelect, void, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xF4]
	cmp dword ptr [ecx+0x1A8],0
	jne Block3

 Block1:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esi+0x100]
	push eax
	mov eax,dword ptr [edx]
	push eax
	call CLogin::SendLoginPacket
	test eax,eax
	je Block3

 Block2:
	mov ecx,esi
	call CUIChannelSelect::DrawNoticeConnecting

 Block3:
	pop esi
	ret 4
}
}
// CUIRecommendWorld::OnMouseButton
__SUB_CLASS_THIS(00202570, __thiscall, 138938,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	lea esi,[ecx-4]
	mov ecx,esi
	call CUIRecommendWorld::IsRequestValid
	test eax,eax
	je Block4

 Block1:
	cmp dword ptr [esp+0x18],0x201
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x24]
	jne Block4

 Block2:
	push ecx
	push eax
	lea eax,[esp+0xC]
	push eax
	mov dword ptr [esp+0x10],0x22
	mov dword ptr [esp+0x14],0x23
	mov dword ptr [esp+0x18],0xA9
	mov dword ptr [esp+0x1C],0x54
	call PtInRect
	test eax,eax
	je Block4

 Block3:
	mov ecx,esi
	call CUIRecommendWorld::SelectWorld

 Block4:
	pop esi
	add esp,0x10
	ret 0x10
}
}
// CUIRecommendWorld::ResetWorldAndMessage
_SUB_EXCEPTION_HANDLER(206E10)
__SUB_CLASS_THIS(00206E10, __thiscall, 138940,  CUIRecommendWorld, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_206E10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x64]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x1C],edi
	mov esi,dword ptr [edi+0x94]
	mov eax,dword ptr [esi+0x23C]
	add esi,0x23C
	xor ebx,ebx
	cmp eax,ebx
	je Block3

 Block1:
	cmp dword ptr [eax-4],1
	jbe Block3

 Block2:
	mov eax,dword ptr [edi+0xA0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	push 1
	jmp Block4

 Block3:
	mov eax,dword ptr [edi+0xA0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebx
	call edx
	push ebx

 Block4:
	mov eax,dword ptr [edi+0xA8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	call edx
	mov dword ptr [esp+0x18],ebx
	lea eax,[esp+0x14]
	push 0x584
	push eax
	mov dword ptr [esp+0x74],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edi+0x98]
	mov ecx,dword ptr [edx+ecx*8]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x78],1
	call ZXString16::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x6C],0
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x44]
	push eax
	call ebp
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x70],2
	call ebp
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov eax,dword ptr [esp+0x18]
	push 0
	push 0
	lea ecx,[esp+0x4C]
	push ecx
	lea edx,[esp+0x40]
	push edx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov bl,3
	push eax
	mov byte ptr [esp+0x84],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x80],4
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea ecx,[esp+0x68]
	push ecx
	mov byte ptr [esp+0x84],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x74],5
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xC4]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block15

 Block13:
	cmp eax,0x80004002
	je Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov byte ptr [esp+0x6C],bl
	mov ebx,8
	cmp word ptr [esp+0x54],bx
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov byte ptr [esp+0x6C],2
	cmp word ptr [esp+0x34],bx
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov byte ptr [esp+0x6C],0
	cmp word ptr [esp+0x44],bx
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov edx,dword ptr [edi+0x98]
	mov eax,dword ptr [esi]
	lea eax,[eax+edx*8]
	mov eax,dword ptr [eax+4]
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],0
	call ZXString16::AssignCharStr
	lea ecx,[esp+0x44]
	push ecx
	mov byte ptr [esp+0x70],6
	call ebp
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov ebp,dword ptr [esp+0x14]
	lea eax,[esp+0x44]
	push eax
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,7
	push ebp
	mov byte ptr [esp+0x78],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi+0xBC]
	mov byte ptr [esp+0x74],8
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	mov byte ptr [esp+0x74],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x6C],6
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	lea ebx,[edi+0xC0]
	mov ecx,ebx
	call ZArray<ZXString16>::RemoveAll
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block64

 Block36:
	jmp Block40

 Block39:
	mov edi,dword ptr [esp+0x1C]

 Block40:
	lea edx,[esp+0x34]
	push edx
	push 0x7D
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x7C],9
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi+0xBC]
	mov byte ptr [esp+0x78],0xA
	test ecx,ecx
	je Block11

 Block41:
	mov byte ptr [esp+0x78],9
	call IWzFont::CalcLongestText
	cmp word ptr [esp+0x34],8
	mov edi,eax
	mov byte ptr [esp+0x6C],6
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	push 0
	push 0xD
	lea ecx,[esp+0x1C]
	call ZXString16::Find_
	mov esi,eax
	cmp esi,0xFFFFFFFF
	je Block53

 Block46:
	cmp edi,esi
	jle Block53

 Block47:
	push esi
	lea edx,[esp+0x24]
	push edx
	lea ecx,[esp+0x1C]
	call ZXString16::Left
	push eax
	push 0xFFFFFFFF
	mov ecx,ebx
	mov byte ptr [esp+0x74],0xB
	call ZArray<ZXString16>::InsertBefore
	mov ecx,eax
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x6C],6
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block49:
	test ebp,ebp
	je Block51

 Block50:
	mov eax,dword ptr [ebp-4]
	shr eax,1
	jmp Block52

 Block51:
	xor eax,eax

 Block52:
	sub eax,esi
	sub eax,2
	push eax
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x1C]
	call ZXString16::Right
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x70],0xC
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x24]
	jmp Block59

 Block53:
	push edi
	lea ecx,[esp+0x2C]
	push ecx
	lea ecx,[esp+0x1C]
	call ZXString16::Left
	push eax
	push 0xFFFFFFFF
	mov ecx,ebx
	mov byte ptr [esp+0x74],0xD
	call ZArray<ZXString16>::InsertBefore
	mov ecx,eax
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x6C],6
	test eax,eax
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block55:
	test ebp,ebp
	je Block57

 Block56:
	mov eax,dword ptr [ebp-4]
	shr eax,1
	jmp Block58

 Block57:
	xor eax,eax

 Block58:
	sub eax,edi
	push eax
	lea edx,[esp+0x30]
	push edx
	lea ecx,[esp+0x1C]
	call ZXString16::Right
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x70],0xE
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x2C]

 Block59:
	mov byte ptr [esp+0x6C],6
	test eax,eax
	je Block61

 Block60:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block61:
	mov ebp,dword ptr [esp+0x14]
	test ebp,ebp
	je Block65

 Block62:
	cmp word ptr [ebp],0
	je Block65

 Block63:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block39

 Block64:
	push eax
	call _com_issue_error

 Block65:
	cmp dword ptr [esp+0x74],0
	je Block67

 Block66:
	mov ecx,dword ptr [esp+0x1C]
	push 0
	call CWnd::InvalidateRect

 Block67:
	mov byte ptr [esp+0x6C],0
	test ebp,ebp
	je Block69

 Block68:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block69:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	test eax,eax
	je Block71

 Block70:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block71:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret 4
}
}
// CUIRecommendWorld::OnSetFocus
__SUB_CLASS_THIS(00202280, __thiscall, 138937,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	test edx,edx
	je Block2

 Block1:
	lea eax,[ecx-4]
	neg eax
	push esi
	mov esi,dword ptr [ecx+0x90]
	sbb eax,eax
	and eax,ecx
	mov dword ptr [esi+0x1C8],eax
	pop esi

 Block2:
	mov dword ptr [esp+4],edx
	jmp  CWnd::OnSetFocus
}
}
// CUIWorldSelect::~CUIWorldSelect
_SUB_EXCEPTION_HANDLER(202D70)
__SUB_CLASS_THIS0(00202D70, __thiscall, 138820,  CUIWorldSelect, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_202D70
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIWorldSelect::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIWorldSelect::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIWorldSelect::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x1D0]
	mov dword ptr [esp+0x14],4
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	lea ecx,[esi+0x1C8]
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	lea ecx,[esi+0x1C4]
	mov byte ptr [esp+0x14],3
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	mov eax,dword ptr [esi+0x1C0]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 0x24
	push 8
	lea eax,[esi+0xA0]
	push eax
	mov byte ptr [esp+0x24],1
	call __eh_vector_dtor_iterator
	mov ecx,esi
	mov dword ptr [TSingleton<CUIWorldSelect>::ms_pInstance],0
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIWorldSelect::EnableButtons
__SUB_CLASS_THIS(00202360, __thiscall, 138826,  CUIWorldSelect, void, long) {
__asm {

 Block0:
	push ebx
	push esi
	mov ebx,ecx
	xor esi,esi
	cmp dword ptr [ebx+0x98],esi
	jle Block4

 Block1:
	push edi
	lea edi,[ebx+0xA4]

 Block2:
	mov eax,dword ptr [edi]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	inc esi
	add edi,8
	cmp esi,dword ptr [ebx+0x98]
	jl Block2

 Block3:
	pop edi

 Block4:
	mov eax,dword ptr [esp+0xC]
	pop esi
	test eax,eax
	jl Block6

 Block5:
	mov ebx,dword ptr [ebx+eax*8+0xA4]
	mov eax,dword ptr [ebx+4]
	lea ecx,[ebx+4]
	pop ebx
	mov dword ptr [esp+4],0
	mov edx,dword ptr [eax+0x1C]
	jmp edx

 Block6:
	pop ebx
	ret 4
}
}
