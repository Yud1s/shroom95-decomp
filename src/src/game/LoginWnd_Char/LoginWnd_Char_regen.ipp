#include "regen.hpp"
// LoginWnd_Char.ipp
#include "LoginWnd_Char.hpp"

// CUIAvatarVAC::OnChildNotify
__SUB_CLASS_THIS(001ED370, __thiscall, 139148,  CUIAvatarVAC, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,0x3EA
	jne Block9

 Block1:
	cmp edx,0x12C
	jb Block9

 Block2:
	cmp edx,0x130
	ja Block9

 Block3:
	mov eax,dword ptr [ecx+0x80]
	push esi
	mov esi,dword ptr [eax+0x1D0]
	push edi
	call CUIAvatarVAC::GetScrollBarIdx
	lea edx,[eax+eax*2]
	mov eax,esi
	sub eax,edx
	cmp eax,8
	jle Block6

 Block4:
	call CUIAvatarVAC::GetScrollBarIdx
	mov edi,eax
	mov eax,0x55555556
	imul esi
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,2
	sub edx,eax
	add edi,edx
	lea eax,[esi+edi*2]
	add eax,edi
	push eax
	call CUIAvatarVAC::SetSelection
	pop edi
	pop esi

 Block5:
	ret 0xC

 Block6:
	test eax,eax
	jge Block8

 Block7:
	call CUIAvatarVAC::GetScrollBarIdx
	mov edi,eax
	mov eax,0x55555556
	imul esi
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	sub edi,eax
	lea edx,[esi+edi*2]
	add edx,edi
	push edx
	call CUIAvatarVAC::SetSelection
	pop edi
	pop esi
	ret 0xC

 Block8:
	push esi
	call CUIAvatarVAC::SetSelection
	pop edi
	pop esi
	ret 0xC

 Block9:
	cmp edx,0x64
	jne Block5

 Block10:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax
	ret 0xC
}
}
// CUIAvatar::OnSetFocus
__SUB_CLASS_THIS(001E0130, __thiscall, 139079,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	test edx,edx
	je Block2

 Block1:
	lea eax,[ecx-4]
	neg eax
	push esi
	mov esi,dword ptr [ecx+0x7C]
	sbb eax,eax
	and eax,ecx
	mov dword ptr [esi+0x1C8],eax
	pop esi

 Block2:
	mov dword ptr [esp+4],edx
	jmp  CWnd::OnSetFocus
}
}
// CUIAvatarVAC::GetScrollBarIdx
__SUB_CLASS_THIS0(001E0340, __thiscall, 139153,  CUIAvatarVAC, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x98]
	mov eax,dword ptr [eax+0x38]
	ret
}
}
// CUIAvatar::SelectCharacter
__SUB_CLASS_THIS(001EA280, __thiscall, 139080,  CUIAvatar, void, long) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push ebp
	push esi
	push edi
	mov edi,ecx
	cmp ebx,0xE
	ja Block3

 Block1:
	mov eax,dword ptr [edi+0x14C]
	add eax,dword ptr [edi+0x148]
	cmp ebx,eax
	jge Block3

 Block2:
	mov ecx,dword ptr [edi+0x80]
	mov dword ptr [ecx+0x1D0],ebx
	push ebx
	jmp Block4

 Block3:
	mov edx,dword ptr [edi+0x80]
	mov dword ptr [edx+0x1D0],0xFFFFFFFF
	push 0xFFFFFFFF

 Block4:
	mov ecx,dword ptr [edi+0x80]
	call CLogin::OnSelectedCharChanged
	mov eax,0x55555556
	imul ebx
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	cmp dword ptr [edi+0x144],esi
	je Block6

 Block5:
	mov ecx,edi
	mov dword ptr [edi+0x144],esi
	call CUIAvatar::Refresh

 Block6:
	test ebx,ebx
	jl Block8

 Block7:
	lea eax,[esi+esi*2]
	sub ebx,eax

 Block8:
	xor esi,esi
	lea ebp,[edi+0xC4]
	nop

 Block9:
	mov ecx,dword ptr [ebp]
	test ecx,ecx
	je Block11

 Block10:
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x10]
	xor eax,eax
	cmp esi,ebx
	setne al
	push 0
	inc eax
	add eax,eax
	push eax
	call edx
	xor eax,eax
	cmp esi,ebx
	sete al
	mov ecx,edi
	push eax
	push esi
	call CUIAvatar::DrawNameTag

 Block11:
	inc esi
	add ebp,8
	cmp esi,3
	jl Block9

 Block12:
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// CUIAvatar::MakeBalloon
_SUB_EXCEPTION_HANDLER(1E58C0)
__SUB_CLASS_THIS(001E58C0, __thiscall, 139084,  CUIAvatar, _x_com_ptr<IWzGr2DLayer>*, _x_com_ptr<IWzGr2DLayer>*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E58C0
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
	lea eax,[esp+0x54]
	mov dword ptr [esp+0x50],ebp
	mov esi,dword ptr [ZImports::_VariantInit]
	push eax
	mov dword ptr [esp+0xC0],ebp
	call esi
	lea ecx,[esp+0x54]
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
	lea edx,[esp+0x74]
	mov ebx,1
	push edx
	mov dword ptr [esp+0xC0],ebx
	call esi
	lea eax,[esp+0x74]
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
	lea edx,[esp+0x54]
	push edx
	mov edx,dword ptr [esp+0xD0]
	lea eax,[esp+0x78]
	push eax
	mov eax,dword ptr [esp+0xD0]
	push 0xA
	push edx
	push eax
	push ebp
	push ebp
	mov ebp,dword ptr [esp+0xE0]
	push ebp
	call IWzGr2D::CreateLayer
	mov dword ptr [esp+0x50],ebx
	mov ebx,8
	mov byte ptr [esp+0xBC],1
	cmp word ptr [esp+0x74],bx
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x7C]
	xor ecx,ecx
	mov word ptr [esp+0x74],cx
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x74]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov byte ptr [esp+0xBC],0
	cmp word ptr [esp+0x54],bx
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	lea edx,[esp+0x40]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0xBC],3
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block16:
	mov esi,dword ptr [ebp]
	mov byte ptr [esp+0xBC],4
	test esi,esi
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
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
	cmp word ptr [esp+0x14],bx
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[esp+0x14]
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
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
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
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],bl
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[esp+0x14]
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
	lea eax,[esp+0x14]
	push eax
	call edi
	lea ecx,[esp+0x14]
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
	lea edx,[esp+0x24]
	mov ebx,7
	push edx
	mov dword ptr [esp+0xC0],ebx
	call edi
	lea eax,[esp+0x24]
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
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0xBC],bl
	cmp word ptr [esp+0x24],si
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov byte ptr [esp+0xBC],0
	cmp word ptr [esp+0x14],si
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[esp+0x14]
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
	lea eax,[esp+0x50]
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
	mov dword ptr [esp+0x4C],esp
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
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x3C],ebx
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x44],esp
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
	lea eax,[esp+0x30]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xCC],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x17
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x38]
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
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0xBC],0x15
	jne Block92

 Block90:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebx
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push eax
	call ebp
	lea ecx,[esp+0x14]
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
	mov esi,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xBC],0x18
	cmp esi,ebx
	jne Block97

 Block96:
	push 0x80004003
	call _com_issue_error

 Block97:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x44]
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
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],0x15
	jne Block102

 Block100:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	cmp eax,ebx
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block103:
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0x5A2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x30]
	mov byte ptr [esp+0xC8],0x19
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xCC],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x1A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x38]
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
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0xBC],0x15
	jne Block109

 Block107:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebx
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block110:
	lea edx,[esp+0x14]
	push edx
	call ebp
	lea eax,[esp+0x14]
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
	mov edx,dword ptr [esp+0x14]
	mov ebp,dword ptr [esp+0xC8]
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
	mov eax,dword ptr [esp+0x44]
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
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],0x15
	jne Block117

 Block115:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	cmp eax,ebx
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block118:
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0x5A6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x30]
	mov byte ptr [esp+0xC8],0x1C
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xCC],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x1D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x38]
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
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0xBC],0x15
	jne Block124

 Block122:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebx
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block125:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
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
	mov edx,dword ptr [esp+0x14]
	mov ebx,dword ptr [esp+0xCC]
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
	mov eax,dword ptr [esp+0x44]
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
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],0x15
	jne Block132

 Block130:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block133:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0x1AD4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x30]
	mov byte ptr [esp+0xC8],0x1F
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xCC],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x20
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x38]
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
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0xBC],0x15
	jne Block139

 Block137:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block140:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
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
	mov eax,dword ptr [esp+0x44]
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
	cmp word ptr [esp+0x14],bx
	jne Block147

 Block145:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block148

 Block146:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block148

 Block147:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block148:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0x5A1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x30]
	mov byte ptr [esp+0xC8],0x22
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xCC],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x23
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x38]
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
	cmp word ptr [esp+0x24],bx
	jne Block154

 Block152:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block155

 Block154:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block155:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x44],esp
	push 0x5A7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x30]
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
	cmp word ptr [esp+0x24],bx
	jne Block161

 Block159:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block162

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block162

 Block161:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block162:
	mov ebx,dword ptr [esp+0x34]
	mov edi,9
	cmp dword ptr [esp+0x40],edi
	jle Block179

 Block163:
	mov ebp,dword ptr [ZImports::_VariantInit]

 Block164:
	lea eax,[esp+0x14]
	push eax
	call ebp
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block165:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x2C]
	push ebx
	push 0
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x38]
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
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],0x15
	jne Block170

 Block168:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block171

 Block169:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block171

 Block170:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block171:
	lea edx,[esp+0x24]
	push edx
	call ebp
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block172:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
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
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0xBC],0x15
	jne Block177

 Block175:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block178

 Block176:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block178

 Block177:
	lea edx,[esp+0x24]
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
	mov dword ptr [esp+0x44],esp
	push 0x5A4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x30]
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
	lea ecx,[esp+0x38]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov edi,eax
	xor eax,eax
	test edi,edi
	setl al
	dec eax
	and eax,dword ptr [esp+0x38]
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
	mov dword ptr [esp+0x34],ebx
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
	mov dword ptr [esp+0x34],ebx
	test eax,eax
	je Block188

 Block187:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block188:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0xBC],0x15
	jne Block191

 Block189:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block192

 Block190:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block192

 Block191:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block192:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x44],esp
	push 0x5A3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x50]
	lea eax,[esp+0x30]
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
	lea edx,[esp+0x38]
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
	and ecx,dword ptr [esp+0x38]
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
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0xBC],0x15
	jne Block204

 Block202:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block205

 Block203:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block205

 Block204:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block205:
	mov edi,9
	cmp dword ptr [esp+0x48],edi
	jle Block223

 Block206:
	mov ebp,dword ptr [ZImports::_VariantInit]
	mov bl,0x2D

 Block207:
	lea edx,[esp+0x24]
	push edx
	call ebp
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block208:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x44]
	push eax
	push edi
	push 0
	push esi
	mov byte ptr [esp+0xDC],0x2C
	call ecx
	test eax,eax
	jge Block210

 Block209:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block210:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0xBC],0x15
	jne Block213

 Block211:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block214

 Block212:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block214

 Block213:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block214:
	lea ecx,[esp+0x14]
	push ecx
	call ebp
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block215:
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
	mov edx,dword ptr [esp+0x50]
	push eax
	mov eax,dword ptr [ecx+0x80]
	push edi
	push edx
	push esi
	mov byte ptr [esp+0xDC],bl
	call eax
	test eax,eax
	jge Block217

 Block216:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block217:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xBC],0x15
	jne Block220

 Block218:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block221

 Block219:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block221

 Block220:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block221:
	inc edi
	cmp edi,dword ptr [esp+0x48]
	jl Block207

 Block222:
	mov ebx,dword ptr [esp+0x34]

 Block223:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push 0x5A5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0xCC],0x2E
	mov byte ptr [esp+0xCC],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x2F
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block229

 Block224:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x38]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov edi,eax
	xor eax,eax
	test edi,edi
	setl al
	dec eax
	and eax,dword ptr [esp+0x38]
	mov ebp,eax
	test ebx,ebx
	je Block226

 Block225:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block226:
	mov ebx,ebp
	mov dword ptr [esp+0x34],ebx
	test edi,edi
	jge Block232

 Block227:
	cmp edi,0x80004002
	je Block232

 Block228:
	push edi
	call _com_issue_error

 Block229:
	test ebx,ebx
	je Block232

 Block230:
	mov eax,ebx
	xor ebx,ebx
	mov dword ptr [esp+0x34],ebx
	test eax,eax
	je Block232

 Block231:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block232:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0xBC],0x15
	jne Block235

 Block233:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block236

 Block234:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block236

 Block235:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block236:
	mov ebp,9
	cmp dword ptr [esp+0x40],ebp
	jle Block250

 Block237:
	mov bl,0x30
	lea ebx,[ebx]

 Block238:
	mov edi,9
	cmp dword ptr [esp+0x48],edi
	jle Block248

 Block239:
	nop

 Block240:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block241:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x44]
	push eax
	push edi
	push ebp
	push esi
	mov byte ptr [esp+0xDC],bl
	call ecx
	test eax,eax
	jge Block243

 Block242:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block243:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0xBC],0x15
	jne Block246

 Block244:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block247

 Block245:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block247

 Block246:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block247:
	inc edi
	cmp edi,dword ptr [esp+0x48]
	jl Block240

 Block248:
	inc ebp
	cmp ebp,dword ptr [esp+0x40]
	jl Block238

 Block249:
	mov ebx,dword ptr [esp+0x34]

 Block250:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0xBC],0x14
	test eax,eax
	je Block252

 Block251:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block252:
	mov byte ptr [esp+0xBC],0x13
	test ebx,ebx
	je Block254

 Block253:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block254:
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
	ret 0xC
}
}
// CUICharDetailVAC::CUICharDetailVAC
_SUB_EXCEPTION_HANDLER(1E1440)
__SUB_CLASS_THIS(001E1440, __thiscall, 139113,  CUICharDetailVAC, void, CLogin*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E1440
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
	call CFadeWnd::_ctor_default
	lea edi,[esi+0xF4]
	mov dword ptr [esp+0x18],0
	test edi,edi
	je Block2

 Block1:
	lea eax,[edi-0xF4]
	mov dword ptr [TSingleton<CUICharDetailVAC>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUICharDetailVAC>::ms_pInstance],0

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUICharDetailVAC::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUICharDetailVAC::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUICharDetailVAC::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xFC],0
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push offset _x_com_ptr<IWzGr2DLayer>::_ctor_default
	push 2
	push 4
	lea ecx,[esi+0x104]
	push ecx
	mov byte ptr [esp+0x2C],2
	call __eh_vector_ctor_iterator
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esi+0xF8],eax
	shl eax,4
	mov dword ptr [edi],ecx
	add eax,dword ptr [ecx+0x170]
	mov byte ptr [esp+0x18],3
	cmp dword ptr [eax],0
	je Block6

 Block4:
	cmp dword ptr [eax+8],0
	je Block6

 Block5:
	mov eax,1
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	push 0x50
	push 0
	push 0x50
	mov ecx,0xFFFFFD3A
	push ecx
	mov dword ptr [esi+0x100],eax
	mov eax,0x94
	push eax
	push ecx
	push eax
	push ecx
	push eax
	push 0
	push 0xFF
	push 0
	mov ecx,esi
	call CFadeWnd::SetOption
	push 0
	push 0
	push 0
	push 0
	push 0xB
	push 0
	push 0xD2
	push 0xAA
	mov ecx,esi
	call CFadeWnd::CreateFadeWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 8
}
}
// CUIAvatar::OnCreate
_SUB_EXCEPTION_HANDLER(1EBE10)
__SUB_CLASS_THIS(001EBE10, __thiscall, 139075,  CUIAvatar, void, void*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1EBE10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x84
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x80]
	push eax
	call esi
	lea ecx,[ebp-0x80]
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
	lea edx,[ebp-0x70]
	push edx
	mov dword ptr [ebp-4],edi
	call esi
	lea eax,[ebp-0x70]
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
	lea ecx,[ebp-0x80]
	push ecx
	lea edx,[ebp-0x70]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x557
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
	lea ecx,[ebp-0x90]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x60]
	mov dword ptr [ebp-0x60],edi
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
	cmp word ptr [ebp-0x90],8
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],5
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x88]
	xor edx,edx
	mov word ptr [ebp-0x90],dx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x90]
	push eax
	call esi

 Block13:
	cmp word ptr [ebp-0x70],8
	mov byte ptr [ebp-4],6
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x68]
	xor ecx,ecx
	mov word ptr [ebp-0x70],cx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x70]
	push edx
	call esi

 Block17:
	cmp word ptr [ebp-0x80],8
	mov byte ptr [ebp-4],7
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp-0x80],ax
	mov eax,dword ptr [ebp-0x78]
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp-0x80]
	push ecx
	call esi

 Block21:
	mov dword ptr [ebp-0x44],edi
	mov dword ptr [ebp-0x40],0x4A

 Block22:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [ebp-0x44]
	mov eax,esp
	xor esi,esi
	push esi
	push esi
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x60]
	mov byte ptr [ebp-4],8
	cmp ecx,esi
	je Block5

 Block23:
	lea eax,[ebp-0x3C]
	push eax
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp-0x5C],esi
	cmp eax,esi
	je Block26

 Block24:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x2C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,esi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x2C]
	cmp eax,esi
	mov dword ptr [ebp-0x5C],ecx
	jge Block26

 Block25:
	cmp eax,0x80004002
	jne Block1

 Block26:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0xB
	jne Block29

 Block27:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	cmp eax,esi
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov dword ptr [ebp-0x58],esi
	jmp Block32

 Block32:
	mov eax,0x20
	call __chkstk
	mov esi,dword ptr [ebp-0x58]
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
	mov ecx,dword ptr [ebp-0x5C]
	mov byte ptr [ebp-4],0xC
	test ecx,ecx
	je Block5

 Block33:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::GetUnknown
	mov ecx,dword ptr [ebp-0x40]
	add ecx,esi
	lea esi,[ebx+ecx*4]
	test eax,eax
	je Block41

 Block34:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x28]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov edi,eax
	xor eax,eax
	test edi,edi
	setl al
	dec eax
	and eax,dword ptr [ebp-0x28]
	mov dword ptr [ebp-0x14],eax
	mov eax,dword ptr [esi]
	test eax,eax
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [esi],eax
	test edi,edi
	jge Block38

 Block37:
	cmp edi,0x80004002
	jne Block50

 Block38:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0xB
	jne Block43

 Block39:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block44

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block41:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block38

 Block42:
	mov dword ptr [esi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block38

 Block43:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov eax,dword ptr [ebp-0x58]
	inc eax
	cmp eax,3
	mov dword ptr [ebp-0x58],eax
	jl Block32

 Block45:
	mov eax,dword ptr [ebp-0x5C]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],7
	call eax
	mov eax,dword ptr [ebp-0x40]
	inc dword ptr [ebp-0x44]
	add eax,3
	cmp eax,0x50
	mov dword ptr [ebp-0x40],eax
	jl Block22

 Block46:
	lea ecx,[ebp-0x14]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea esi,[ebx+0x120]
	push esi
	push eax
	mov byte ptr [ebp-4],0xE
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp-0x14]
	add esp,0xC
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block48:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x24]
	push edx
	call edi
	lea eax,[ebp-0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block51

 Block49:
	push eax
	call _com_issue_error

 Block50:
	push edi
	call _com_issue_error

 Block51:
	lea ecx,[ebp-0x24]
	push ecx
	push 0xFF999999
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x1A25
	push edx
	mov byte ptr [ebp-4],0xF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [ebp-4],0x10
	test ecx,ecx
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	mov byte ptr [ebp-4],0xF
	call IWzFont::Create
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],7
	jne Block56

 Block54:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	lea edx,[ebp-0x14]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea esi,[ebx+0x124]
	push esi
	push eax
	mov byte ptr [ebp-4],0x11
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp-0x14]
	add esp,0xC
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block59:
	lea eax,[ebp-0x24]
	push eax
	call edi
	lea ecx,[ebp-0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	lea edx,[ebp-0x24]
	push edx
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x1A25
	push eax
	mov byte ptr [ebp-4],0x12
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [ebp-4],0x13
	test ecx,ecx
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	mov byte ptr [ebp-4],0x12
	call IWzFont::Create
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],7
	jne Block66

 Block64:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov ecx,dword ptr [ebp+8]
	lea eax,[ebx+0x84]
	mov edx,0xF
	lea ecx,[ecx]

 Block68:
	mov dword ptr [eax],ecx
	add eax,4
	add ecx,0x2FE
	sub edx,1
	jne Block68

 Block69:
	mov ecx,ebx
	call CUIAvatar::Refresh
	mov eax,dword ptr [ebx+0x80]
	mov eax,dword ptr [eax+0x1D0]
	push eax
	mov ecx,ebx
	call CUIAvatar::SelectCharacter
	push 0
	push 0xFF
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x40],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x44],esp
	mov dword ptr [eax],0
	lea ecx,[ebp-0x2C]
	push 0x54E
	push ecx
	mov byte ptr [ebp-4],0x15
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push offset _S_0
	lea edx,[ebp-0x28]
	push edx
	mov ecx,eax
	mov byte ptr [ebp-4],0x16
	call ZXString16::op_add_0
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x17
	push 0
	push eax
	lea eax,[ebp-0x14]
	push eax
	mov byte ptr [ebp-4],0x19
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x108]
	add esp,0x28
	cmp esi,eax
	je Block74

 Block70:
	mov dword ptr [ebx+0x108],eax
	test eax,eax
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block72:
	test esi,esi
	je Block74

 Block73:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block74:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block76

 Block75:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block76:
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block78

 Block77:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block78:
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block80

 Block79:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block80:
	mov ecx,dword ptr [ebx+0x108]
	test ecx,ecx
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	mov edx,dword ptr [_D_VTMISSING]
	mov esi,dword ptr [_D_VTMISSING+4]
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [_D_VTMISSING+8]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [_D_VTMISSING+12]
	mov dword ptr [eax+0xC],esi
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [_D_VTMISSING+4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [_D_VTMISSING+8]
	push 0xFFFFFB41
	mov dword ptr [eax+8],edx
	push 0xFFFFFEFC
	mov dword ptr [eax+0xC],esi
	mov eax,dword ptr [edi+0x90]
	push ecx
	call eax
	mov ecx,dword ptr [ebx+0x140]
	dec ecx
	mov eax,0x55555556
	imul ecx
	mov ecx,edx
	shr ecx,0x1F
	lea edx,[edx+ecx+1]
	cmp edx,1
	jg Block89

 Block83:
	mov ecx,dword ptr [_D_VTMISSING+4]
	mov eax,dword ptr [_D_VTMISSING]
	mov edx,dword ptr [_D_VTMISSING+8]
	mov esi,dword ptr [_D_VTMISSING+12]
	mov dword ptr [ebp-0x38],ecx
	mov dword ptr [ebp-0x20],ecx
	mov ecx,dword ptr [ebx+0x108]
	mov dword ptr [ebp-0x3C],eax
	mov dword ptr [ebp-0x34],edx
	mov dword ptr [ebp-0x24],eax
	mov dword ptr [ebp-0x1C],edx
	mov dword ptr [ebp-0x18],esi
	test ecx,ecx
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	lea eax,[ebp-0x14]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x1A
	test ecx,ecx
	jne Block87

 Block86:
	push 0x80004003
	call _com_issue_error

 Block87:
	mov edi,dword ptr [ebp-0x3C]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp-0x38]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp-0x34]
	mov dword ptr [eax+8],edi
	mov dword ptr [eax+0xC],esi
	mov esi,dword ptr [ebp-0x24]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [ebp-0x20]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [ebp-0x1C]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [ebp-0x18]
	push 0
	push 0
	mov dword ptr [eax+0xC],esi
	mov eax,dword ptr [edx+0x90]
	push ecx
	call eax
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block89

 Block88:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block89:
	push 0
	push 0xFF
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x40],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x44],esp
	mov dword ptr [eax],0
	lea eax,[ebp-0x2C]
	push 0x54E
	push eax
	mov byte ptr [ebp-4],0x1C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push offset _S_1
	lea ecx,[ebp-0x28]
	push ecx
	mov ecx,eax
	mov byte ptr [ebp-4],0x1D
	call ZXString16::op_add_0
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x1E
	push 0
	push eax
	lea edx,[ebp-0x14]
	push edx
	mov byte ptr [ebp-4],0x20
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x110]
	add esp,0x28
	cmp esi,eax
	je Block94

 Block90:
	mov dword ptr [ebx+0x110],eax
	test eax,eax
	je Block92

 Block91:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block92:
	test esi,esi
	je Block94

 Block93:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block94:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block96

 Block95:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block96:
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],0x1F
	test eax,eax
	je Block98

 Block97:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block98:
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block100

 Block99:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block100:
	mov ecx,dword ptr [ebx+0x110]
	test ecx,ecx
	jne Block102

 Block101:
	push 0x80004003
	call _com_issue_error

 Block102:
	mov edx,dword ptr [_D_VTMISSING]
	mov esi,dword ptr [_D_VTMISSING+4]
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [_D_VTMISSING+8]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [_D_VTMISSING+12]
	mov dword ptr [eax+0xC],esi
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [_D_VTMISSING+4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [_D_VTMISSING+8]
	push 0xFFFFFB41
	mov dword ptr [eax+8],edx
	push 0xFFFFFEFC
	mov dword ptr [eax+0xC],esi
	mov eax,dword ptr [edi+0x90]
	push ecx
	call eax
	mov ecx,dword ptr [_D_VTMISSING+4]
	mov eax,dword ptr [_D_VTMISSING]
	mov edx,dword ptr [_D_VTMISSING+8]
	mov esi,dword ptr [_D_VTMISSING+12]
	mov dword ptr [ebp-0x38],ecx
	mov dword ptr [ebp-0x20],ecx
	mov ecx,dword ptr [ebx+0x110]
	mov dword ptr [ebp-0x3C],eax
	mov dword ptr [ebp-0x34],edx
	mov dword ptr [ebp-0x24],eax
	mov dword ptr [ebp-0x1C],edx
	mov dword ptr [ebp-0x18],esi
	test ecx,ecx
	jne Block104

 Block103:
	push 0x80004003
	call _com_issue_error

 Block104:
	lea edx,[ebp-0x14]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x21
	test ecx,ecx
	jne Block106

 Block105:
	push 0x80004003
	call _com_issue_error

 Block106:
	mov edi,dword ptr [ebp-0x3C]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp-0x38]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp-0x34]
	mov dword ptr [eax+8],edi
	mov dword ptr [eax+0xC],esi
	mov esi,dword ptr [ebp-0x24]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [ebp-0x20]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [ebp-0x1C]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [ebp-0x18]
	push 0
	push 0
	mov dword ptr [eax+0xC],esi
	mov eax,dword ptr [edx+0x90]
	push ecx
	call eax
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block108

 Block107:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block108:
	push 0
	push 0xFF
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x40],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x44],esp
	mov dword ptr [eax],0
	lea eax,[ebp-0x2C]
	push 0x54F
	push eax
	mov byte ptr [ebp-4],0x23
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push offset _S_0
	lea ecx,[ebp-0x28]
	push ecx
	mov ecx,eax
	mov byte ptr [ebp-4],0x24
	call ZXString16::op_add_0
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x25
	push 0
	push eax
	lea edx,[ebp-0x14]
	push edx
	mov byte ptr [ebp-4],0x27
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x10C]
	add esp,0x28
	cmp esi,eax
	je Block113

 Block109:
	mov dword ptr [ebx+0x10C],eax
	test eax,eax
	je Block111

 Block110:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block111:
	test esi,esi
	je Block113

 Block112:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block113:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block115

 Block114:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block115:
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],0x26
	test eax,eax
	je Block117

 Block116:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block117:
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block119

 Block118:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block119:
	mov ecx,dword ptr [ebx+0x10C]
	test ecx,ecx
	jne Block121

 Block120:
	push 0x80004003
	call _com_issue_error

 Block121:
	mov edx,dword ptr [_D_VTMISSING]
	mov esi,dword ptr [_D_VTMISSING+4]
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [_D_VTMISSING+8]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [_D_VTMISSING+12]
	mov dword ptr [eax+0xC],esi
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [_D_VTMISSING+4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [_D_VTMISSING+8]
	push 0xFFFFFB43
	mov dword ptr [eax+8],edx
	push 0xBC
	mov dword ptr [eax+0xC],esi
	mov eax,dword ptr [edi+0x90]
	push ecx
	call eax
	mov ecx,dword ptr [ebx+0x140]
	dec ecx
	mov eax,0x55555556
	imul ecx
	mov ecx,edx
	shr ecx,0x1F
	lea edx,[edx+ecx+1]
	cmp edx,1
	jg Block128

 Block122:
	mov ecx,dword ptr [_D_VTMISSING+4]
	mov eax,dword ptr [_D_VTMISSING]
	mov edx,dword ptr [_D_VTMISSING+8]
	mov esi,dword ptr [_D_VTMISSING+12]
	mov dword ptr [ebp-0x38],ecx
	mov dword ptr [ebp-0x20],ecx
	mov ecx,dword ptr [ebx+0x10C]
	mov dword ptr [ebp-0x3C],eax
	mov dword ptr [ebp-0x34],edx
	mov dword ptr [ebp-0x24],eax
	mov dword ptr [ebp-0x1C],edx
	mov dword ptr [ebp-0x18],esi
	test ecx,ecx
	jne Block124

 Block123:
	push 0x80004003
	call _com_issue_error

 Block124:
	lea eax,[ebp-0x14]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x28
	test ecx,ecx
	jne Block126

 Block125:
	push 0x80004003
	call _com_issue_error

 Block126:
	mov edi,dword ptr [ebp-0x3C]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp-0x38]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp-0x34]
	mov dword ptr [eax+8],edi
	mov dword ptr [eax+0xC],esi
	mov esi,dword ptr [ebp-0x24]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [ebp-0x20]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [ebp-0x1C]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [ebp-0x18]
	push 0
	push 0
	mov dword ptr [eax+0xC],esi
	mov eax,dword ptr [edx+0x90]
	push ecx
	call eax
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block128

 Block127:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block128:
	push 0
	push 0xFF
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x40],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x44],esp
	mov dword ptr [eax],0
	lea eax,[ebp-0x2C]
	push 0x54F
	push eax
	mov byte ptr [ebp-4],0x2A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push offset _S_1
	lea ecx,[ebp-0x28]
	push ecx
	mov ecx,eax
	mov byte ptr [ebp-4],0x2B
	call ZXString16::op_add_0
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x2C
	push 0
	push eax
	lea edx,[ebp-0x14]
	push edx
	mov byte ptr [ebp-4],0x2E
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x114]
	add esp,0x28
	cmp esi,eax
	je Block133

 Block129:
	mov dword ptr [ebx+0x114],eax
	test eax,eax
	je Block131

 Block130:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block131:
	test esi,esi
	je Block133

 Block132:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block133:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block135

 Block134:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block135:
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],0x2D
	test eax,eax
	je Block137

 Block136:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block137:
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block139

 Block138:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block139:
	mov ecx,dword ptr [ebx+0x114]
	test ecx,ecx
	jne Block141

 Block140:
	push 0x80004003
	call _com_issue_error

 Block141:
	mov edx,dword ptr [_D_VTMISSING]
	mov esi,dword ptr [_D_VTMISSING+4]
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [_D_VTMISSING+8]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [_D_VTMISSING+12]
	mov dword ptr [eax+0xC],esi
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [_D_VTMISSING+4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [_D_VTMISSING+8]
	push 0xFFFFFB42
	mov dword ptr [eax+8],edx
	push 0xBC
	mov dword ptr [eax+0xC],esi
	mov eax,dword ptr [edi+0x90]
	push ecx
	call eax
	mov ecx,dword ptr [_D_VTMISSING+4]
	mov eax,dword ptr [_D_VTMISSING]
	mov edx,dword ptr [_D_VTMISSING+8]
	mov esi,dword ptr [_D_VTMISSING+12]
	mov dword ptr [ebp-0x38],ecx
	mov dword ptr [ebp-0x20],ecx
	mov ecx,dword ptr [ebx+0x114]
	mov dword ptr [ebp-0x3C],eax
	mov dword ptr [ebp-0x34],edx
	mov dword ptr [ebp-0x24],eax
	mov dword ptr [ebp-0x1C],edx
	mov dword ptr [ebp-0x18],esi
	test ecx,ecx
	jne Block143

 Block142:
	push 0x80004003
	call _com_issue_error

 Block143:
	lea edx,[ebp-0x14]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x2F
	test ecx,ecx
	jne Block145

 Block144:
	push 0x80004003
	call _com_issue_error

 Block145:
	mov edi,dword ptr [ebp-0x3C]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp-0x38]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp-0x34]
	mov dword ptr [eax+8],edi
	mov dword ptr [eax+0xC],esi
	mov esi,dword ptr [ebp-0x24]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [ebp-0x20]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [ebp-0x1C]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [ebp-0x18]
	push 0
	push 0
	mov dword ptr [eax+0xC],esi
	mov eax,dword ptr [edx+0x90]
	push ecx
	call eax
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block147

 Block146:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block147:
	push 0x28
	push 0xDC
	lea eax,[ebp-0x14]
	push eax
	mov ecx,ebx
	call CUIAvatar::MakeBalloon
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x118]
	cmp esi,eax
	je Block152

 Block148:
	mov dword ptr [ebx+0x118],eax
	test eax,eax
	je Block150

 Block149:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block150:
	test esi,esi
	je Block152

 Block151:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block152:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block154

 Block153:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block154:
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
	jge Block156

 Block155:
	push eax
	call _com_issue_error

 Block156:
	lea eax,[ebp-0x54]
	push eax
	mov byte ptr [ebp-4],0x30
	call edi
	lea ecx,[ebp-0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block158

 Block157:
	push eax
	call _com_issue_error

 Block158:
	mov esi,dword ptr [ebx+0x118]
	mov byte ptr [ebp-4],0x31
	test esi,esi
	jne Block160

 Block159:
	push 0x80004003
	call _com_issue_error

 Block160:
	mov ecx,dword ptr [ebp-0x24]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x90]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x20]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0x1C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x18]
	mov dword ptr [eax+0xC],ecx
	mov ecx,dword ptr [ebp-0x54]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x50]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0x4C]
	push 0xFFFFFF06
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x48]
	push 0xBE
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block162

 Block161:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block162:
	mov esi,8
	mov byte ptr [ebp-4],0x30
	cmp word ptr [ebp-0x54],si
	jne Block165

 Block163:
	xor eax,eax
	mov word ptr [ebp-0x54],ax
	mov eax,dword ptr [ebp-0x4C]
	test eax,eax
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block165:
	lea ecx,[ebp-0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block166:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x24],si
	jne Block169

 Block167:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block170

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block169:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block170:
	mov ecx,3
	mov word ptr [ebp-0x24],cx
	mov dword ptr [ebp-0x1C],0
	mov ebx,dword ptr [ebx+0x118]
	mov byte ptr [ebp-4],0x32
	test ebx,ebx
	jne Block172

 Block171:
	push 0x80004003
	call _com_issue_error

 Block172:
	lea edx,[ebp-0x24]
	push edx
	lea eax,[ebp-0x14]
	push eax
	mov ecx,ebx
	call IWzGr2DLayer::Getcanvas
	mov byte ptr [ebp-4],0x34
	cmp word ptr [ebp-0x24],si
	jne Block175

 Block173:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block176

 Block174:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block176

 Block175:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block176:
	lea eax,[ebp-0x3C]
	push eax
	call edi
	lea ecx,[ebp-0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block178

 Block177:
	push eax
	call _com_issue_error

 Block178:
	lea edx,[ebp-0x54]
	push edx
	mov byte ptr [ebp-4],0x35
	call edi
	lea eax,[ebp-0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block180

 Block179:
	push eax
	call _com_issue_error

 Block180:
	lea ecx,[ebp-0x3C]
	push ecx
	lea edx,[ebp-0x54]
	push edx
	lea eax,[ebp-0x28]
	push 1
	push eax
	mov byte ptr [ebp-4],0x36
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x2C],esp
	push 0x1156
	mov bl,0x37
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0x38
	test esi,esi
	jne Block182

 Block181:
	push 0x80004003
	call _com_issue_error

 Block182:
	push 0xF
	push 0xA
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],0x36
	test eax,eax
	je Block184

 Block183:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block184:
	mov edi,8
	mov byte ptr [ebp-4],0x35
	cmp word ptr [ebp-0x54],di
	jne Block187

 Block185:
	mov eax,dword ptr [ebp-0x4C]
	xor ecx,ecx
	mov word ptr [ebp-0x54],cx
	test eax,eax
	je Block188

 Block186:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block188

 Block187:
	lea edx,[ebp-0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block188:
	mov byte ptr [ebp-4],0x34
	cmp word ptr [ebp-0x3C],di
	jne Block191

 Block189:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block192

 Block190:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block192

 Block191:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block192:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],7
	call eax
	mov eax,dword ptr [ebp-0x60]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0xA0]
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
	ret 4
}
}
// CUICharSelect::MakeAdvice
_SUB_EXCEPTION_HANDLER(1E5280)
__SUB_CLASS_THIS0(001E5280, __thiscall, 139013,  CUICharSelect, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E5280
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
	xor ebx,ebx
	push ebx
	push 0x22
	push 0xE3
	lea eax,[esp+0x20]
	push eax
	call CUICharSelect::MakeBalloon
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x80]
	cmp esi,eax
	je Block5

 Block1:
	mov dword ptr [edi+0x80],eax
	cmp eax,ebx
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	cmp esi,ebx
	je Block5

 Block4:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block5:
	mov eax,dword ptr [esp+0x14]
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
	mov ecx,dword ptr [edi+0x80]
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
	push offset _S_DOUBLECLICKONACH
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
	mov ecx,dword ptr [edi+0x80]
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
	push 0xFFFFFFBF
	push 0xFFFFFECF
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
// CUICharDetail::~CUICharDetail
_SUB_EXCEPTION_HANDLER(1E06F0)
__SUB_CLASS_THIS0(001E06F0, __thiscall, 139045,  CUICharDetail, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E06F0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUICharDetail::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUICharDetail::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUICharDetail::`vftable'{for `ZRefCounted'}
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push 2
	push 4
	lea eax,[esi+0x108]
	push eax
	mov dword ptr [esp+0x24],2
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0x100]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov ecx,esi
	mov dword ptr [TSingleton<CUICharDetail>::ms_pInstance],0
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CFadeWnd::~CFadeWnd
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUICharDetail::Delete
__SUB_CLASS_THIS0(001E02B0, __thiscall, 139045,  CUICharDetail, void) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CUICharDetail>::ms_pInstance]
	test ecx,ecx
	je Block3

 Block1:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUICharDetail>::ms_pInstance]
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
// CUIAvatarVAC::IsRequestValid
__SUB_CLASS_THIS0(001E01A0, __thiscall, 139156,  CUIAvatarVAC, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x80]
	cmp dword ptr [eax+0x1AC],0
	jne Block3

 Block1:
	cmp dword ptr [eax+0x1A4],5
	jne Block3

 Block2:
	mov eax,1
	ret

 Block3:
	xor eax,eax
	ret
}
}
// CUIAvatarVAC::MakeCharacter
_SUB_EXCEPTION_HANDLER(1ED490)
__SUB_CLASS_THIS(001ED490, __thiscall, 139151,  CUIAvatarVAC, void, long, AvatarData&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1ED490
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
	mov esi,ecx
	mov edi,dword ptr [esp+0x74]
	mov ebp,dword ptr [esp+0x78]
	mov eax,edi
	imul eax,0xF9
	push ebp
	lea ecx,[eax+esi+0x18C]
	call GW_CharacterStat::operator=
	mov eax,0x55555556
	imul edi
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax+eax*2]
	imul eax,0x75
	mov ebx,edi
	sub ebx,ecx
	imul ebx,0x75
	add eax,0x96
	lea edi,[esi+edi*8+0x3BE8]
	add ebx,0x4A
	mov ecx,edi
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x78],eax
	call ZRef<CAvatar>::_Alloc
	mov edx,dword ptr [esp+0x78]
	mov edi,dword ptr [edi+4]
	push 0
	push 0x64
	push edx
	push ebx
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x88],0
	call CWnd::GetLayer
	push ecx
	mov ebx,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ebx],0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x8C],1
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov ecx,ebx
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	test eax,eax
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	push 4
	lea ecx,[ebp+0xF9]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x90],2
	call CAvatar::Init_1
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block7:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	lea eax,[esp+0x24]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	add ebp,4
	mov ebx,3
	push ebp
	mov dword ptr [esp+0x78],ebx
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x3FAC]
	mov byte ptr [esp+0x74],4
	test ecx,ecx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov byte ptr [esp+0x74],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x24],8
	mov edi,eax
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	cmp edi,0x28
	jle Block17

 Block16:
	add edi,0x12
	jmp Block18

 Block17:
	mov edi,0x3A

 Block18:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push eax
	call ebp
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	lea edx,[esp+0x24]
	mov ebx,5
	push edx
	mov dword ptr [esp+0x70],ebx
	call ebp
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x6C],6
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0
	push 0x16
	push edi
	push 0
	push 0xFFFFFF9C
	lea edx,[esp+0x30]
	push edx
	call IWzGr2D::CreateLayer
	mov ebp,dword ptr [esp+0x74]
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+ebp*4+0x3DC8]
	cmp edi,eax
	je Block29

 Block25:
	mov dword ptr [esi+ebp*4+0x3DC8],eax
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block27:
	test edi,edi
	je Block29

 Block28:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block29:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block31

 Block30:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block31:
	mov edi,8
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x24],di
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp word ptr [esp+0x34],di
	jne Block38

 Block36:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov edi,dword ptr [esi+ebp*4+0x3DC8]
	test edi,edi
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push edi
	call eax
	test eax,eax
	jge Block43

 Block42:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block43:
	lea ecx,[esp+0x74]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,7
	mov edx,0xD
	mov dword ptr [esp+0x6C],ebx
	mov word ptr [esp+0x24],dx
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block45

 Block44:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block45:
	mov edi,dword ptr [esi+ebp*4+0x3DC8]
	mov byte ptr [esp+0x6C],8
	test edi,edi
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push edi
	call eax
	test eax,eax
	jge Block49

 Block48:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block49:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x6C],bl
	jne Block52

 Block50:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block55:
	mov edi,dword ptr [esi+ebp*4+0x3DC8]
	test edi,edi
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push edi
	call ecx
	test eax,eax
	jge Block59

 Block58:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block59:
	lea edx,[esp+0x74]
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,9
	mov ecx,0xD
	mov dword ptr [esp+0x6C],ebx
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block61

 Block60:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block61:
	mov edi,dword ptr [esi+ebp*4+0x3DC8]
	mov byte ptr [esp+0x6C],0xA
	test edi,edi
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push edi
	call eax
	test eax,eax
	jge Block65

 Block64:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block65:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x6C],bl
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	test eax,eax
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block71:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x54]
	push eax
	call edi
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block73

 Block72:
	push eax
	call _com_issue_error

 Block73:
	lea edx,[esp+0x44]
	mov ebx,0xB
	push edx
	mov dword ptr [esp+0x70],ebx
	call edi
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	mov ecx,dword ptr [esi+ebp*4+0x3DC8]
	mov byte ptr [esp+0x6C],0xC
	test ecx,ecx
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	lea edx,[esp+0x54]
	push edx
	mov edx,dword ptr [esp+0x7C]
	lea eax,[esp+0x48]
	push eax
	mov eax,dword ptr [esp+0x20]
	add edx,9
	push edx
	add eax,0xFFFFFFE5
	push eax
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x44],di
	jne Block80

 Block78:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp word ptr [esp+0x54],di
	jne Block84

 Block82:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block85:
	push 0
	push ebp
	mov ecx,esi
	call CUIAvatarVAC::DrawNameTag
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret 8
}
}
// CUIAvatar::OnKey
_SUB_EXCEPTION_HANDLER(1ECEA0)
// 5ED104
static uint8_t _SUB_1ECEA0_LOOKUP_TABLE_0[31] = {
0, 5, 5, 5, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 3, 5, 4, 
};
__SUB_CLASS_THIS(001ECEA0, __thiscall, 139076,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1ECEA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	test dword ptr [esp+0x40],0x80000000
	jne Block26

 Block1:
	mov edx,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esi+0x7C]
	mov eax,dword ptr [ecx+0x1D0]
	add edx,0xFFFFFFF7
	cmp edx,0x1E
	ja Block26

 Block2:
	movzx edx,byte ptr [edx+_SUB_1ECEA0_LOOKUP_TABLE_0]
	cmp EDX, 0
je Block3
cmp EDX, 1
je Block21
cmp EDX, 2
je Block20
cmp EDX, 3
je Block16
cmp EDX, 4
je Block10
cmp EDX, 5
je Block26


 Block3:
	cmp dword ptr [esi+0x114],0
	lea edi,[esi+0x114]
	je Block7

 Block4:
	call get_update_time
	add eax,0x3E8
	push offset _D_VTMISSING
	lea ecx,[esp+0x20]
	mov dword ptr [esi+0x118],eax
	call Ztl_variant_t::_ctor_1
	mov esi,dword ptr [esi+0x118]
	mov eax,3
	mov dword ptr [esp+0x34],0
	mov word ptr [esp+0xC],ax
	mov dword ptr [esp+0x14],esi
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x38],1
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[esp+0x10]
	push ecx
	push 0xFF
	push 0
	mov ecx,eax
	mov byte ptr [esp+0x44],2
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block6

 Block5:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block6:
	lea ecx,[esp+0xC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t

 Block7:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test ecx,ecx
	je Block26

 Block8:
	mov eax,dword ptr [TSingleton<CUICharSelect>::ms_pInstance]
	test eax,eax
	je Block26

 Block9:
	add eax,4
	push eax
	call CWndMan::SetFocus
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret 8

 Block10:
	cmp eax,0xFFFFFFFF
	jne Block12

 Block11:
	xor eax,eax
	jmp Block13

 Block12:
	inc eax

 Block13:
	cmp eax,dword ptr [esi+0x13C]
	jge Block26

 Block14:
	mov edx,dword ptr [esi+0x148]
	add edx,dword ptr [esi+0x144]
	lea ecx,[esi-4]
	cmp eax,edx
	jge Block26

 Block15:
	push eax
	call CUIAvatar::SelectCharacter
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret 8

 Block16:
	cmp eax,0xFFFFFFFF
	jne Block18

 Block17:
	xor eax,eax
	push eax
	lea ecx,[esi-4]
	call CUIAvatar::SelectCharacter
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret 8

 Block18:
	sub eax,1
	js Block26

 Block19:
	push eax
	lea ecx,[esi-4]
	call CUIAvatar::SelectCharacter
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret 8

 Block20:
	lea eax,[esi-4]
	neg eax
	sbb eax,eax
	and eax,esi
	push eax
	push 1
	call CLogin::GotoTitle
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret 8

 Block21:
	test eax,eax
	jl Block26

 Block22:
	mov edx,dword ptr [esi+0x144]
	cmp eax,edx
	jge Block24

 Block23:
	call CLogin::SendSelectCharPacket
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret 8

 Block24:
	mov esi,dword ptr [esi+0x148]
	add esi,edx
	cmp eax,esi
	jge Block26

 Block25:
	push 1
	call CLogin::OnNewCharStep

 Block26:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret 8
}
}
// CUIAvatar::Update
__SUB_CLASS_THIS0(001E1AF0, __thiscall, 139074,  CUIAvatar, void) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,ecx
	lea esi,[edi+0xC4]
	mov ebx,3

 Block1:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block3

 Block2:
	call CAvatar::Update

 Block3:
	add esi,8
	sub ebx,1
	jne Block1

 Block4:
	cmp dword ptr [edi+0x118],ebx
	je Block10

 Block5:
	cmp dword ptr [edi+0x11C],ebx
	je Block10

 Block6:
	call get_update_time
	cmp eax,dword ptr [edi+0x11C]
	jle Block10

 Block7:
	mov eax,dword ptr [edi+0x118]
	test eax,eax
	je Block9

 Block8:
	mov dword ptr [edi+0x118],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov dword ptr [edi+0x11C],0

 Block10:
	mov ecx,edi
	pop edi
	pop esi
	pop ebx
	jmp  CWnd::Update
}
}
// CUICharSelect::~CUICharSelect
_SUB_EXCEPTION_HANDLER(1E2130)
__SUB_CLASS_THIS0(001E2130, __thiscall, 139013,  CUICharSelect, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E2130
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
	int 3// TODO: 	mov dword ptr [esi],offset CUICharSelect::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUICharSelect::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUICharSelect::`vftable'{for `ZRefCounted'}
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 3
	push 8
	lea eax,[esi+0x8C]
	push eax
	mov dword ptr [esp+0x24],2
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0x80]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov ecx,esi
	mov dword ptr [TSingleton<CUICharSelect>::ms_pInstance],0
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CWnd::~CWnd
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUICharSelect::OnSetFocus
__SUB_CLASS_THIS(001E0530, __thiscall, 139017,  IUIMsgHandler, int32_t, int32_t) {
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
	mov eax,dword ptr [esi+0x84]
	push eax
	call CUICharSelect::SetKeyFocus
	mov ecx,dword ptr [esi+0x80]
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
	call CUICharSelect::SetKeyFocus
	push edi
	mov ecx,esi
	call CWnd::OnSetFocus
	pop edi
	pop esi
	ret 4
}
}
// CUIAvatar::~CUIAvatar
_SUB_EXCEPTION_HANDLER(1E23D0)
__SUB_CLASS_THIS0(001E23D0, __thiscall, 139074,  CUIAvatar, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E23D0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIAvatar::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIAvatar::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIAvatar::`vftable'{for `ZRefCounted'}
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 6
	push 4
	lea eax,[esi+0x128]
	push eax
	mov dword ptr [esp+0x24],0xC
	call __eh_vector_dtor_iterator
	push offset _x_com_ptr<IWzFont>::~_x_com_ptr<IWzFont>
	push 2
	push 4
	lea ecx,[esi+0x120]
	push ecx
	mov byte ptr [esp+0x24],0xB
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0x118]
	mov byte ptr [esp+0x14],0xA
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block2:
	mov eax,dword ptr [esi+0x114]
	mov byte ptr [esp+0x14],9
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x110]
	mov byte ptr [esp+0x14],8
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x10C]
	mov byte ptr [esp+0x14],7
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x108]
	mov byte ptr [esp+0x14],6
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push 3
	push 4
	lea eax,[esi+0xFC]
	push eax
	mov byte ptr [esp+0x24],5
	call __eh_vector_dtor_iterator
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push 3
	push 4
	lea ecx,[esi+0xF0]
	push ecx
	mov byte ptr [esp+0x24],4
	call __eh_vector_dtor_iterator
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push 3
	push 4
	lea edx,[esi+0xE4]
	push edx
	mov byte ptr [esp+0x24],3
	call __eh_vector_dtor_iterator
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push 3
	push 4
	lea eax,[esi+0xD8]
	push eax
	mov byte ptr [esp+0x24],2
	call __eh_vector_dtor_iterator
	push offset ZRef<CAvatar>::~ZRef<CAvatar>
	push 3
	push 8
	lea ecx,[esi+0xC0]
	push ecx
	mov byte ptr [esp+0x24],1
	call __eh_vector_dtor_iterator
	mov ecx,esi
	mov dword ptr [TSingleton<CUIAvatar>::ms_pInstance],0
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CWnd::~CWnd
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIAvatarVAC::MakeSelectedCharacterNameTag
_SUB_EXCEPTION_HANDLER(1E7A30)
__SUB_CLASS_THIS0(001E7A30, __thiscall, 139144,  CUIAvatarVAC, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E7A30
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
	mov edi,ecx
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	call ebp
	lea ecx,[esp+0x28]
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
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x64],0
	call ebp
	lea eax,[esp+0x18]
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
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x60],1
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push 0
	push 0x16
	push 0x96
	push 0
	push 0
	lea edx,[esp+0x30]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x3EB8]
	cmp esi,eax
	je Block11

 Block7:
	mov dword ptr [edi+0x3EB8],eax
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
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block13:
	mov esi,8
	mov byte ptr [esp+0x60],0
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
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp word ptr [esp+0x28],si
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov esi,dword ptr [edi+0x3EB8]
	test esi,esi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block25

 Block24:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,2
	mov edx,0xD
	mov dword ptr [esp+0x60],ebx
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block27:
	mov esi,dword ptr [edi+0x3EB8]
	mov byte ptr [esp+0x60],3
	test esi,esi
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
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
	jge Block31

 Block30:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block31:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x60],bl
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	mov esi,dword ptr [edi+0x3EB8]
	test esi,esi
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push esi
	call ecx
	test eax,eax
	jge Block41

 Block40:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block41:
	lea edx,[esp+0x14]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,4
	mov ecx,0xD
	mov dword ptr [esp+0x60],ebx
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block43

 Block42:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block43:
	mov esi,dword ptr [edi+0x3EB8]
	mov byte ptr [esp+0x60],5
	test esi,esi
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
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
	jge Block47

 Block46:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block47:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x60],bl
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov eax,dword ptr [esp+0x14]
	or esi,0xFFFFFFFF
	mov dword ptr [esp+0x60],esi
	test eax,eax
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	lea eax,[esp+0x48]
	push eax
	call ebp
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	lea edx,[esp+0x38]
	mov ebx,6
	push edx
	mov dword ptr [esp+0x64],ebx
	call ebp
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block57

 Block56:
	push eax
	call _com_issue_error

 Block57:
	mov ecx,dword ptr [edi+0x3EB8]
	mov byte ptr [esp+0x60],7
	test ecx,ecx
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push 0x6B
	push 0x199
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x60],bl
	mov ebx,8
	cmp word ptr [esp+0x38],bx
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov dword ptr [esp+0x60],esi
	cmp word ptr [esp+0x48],bx
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov edx,dword ptr [edi+0x80]
	mov eax,dword ptr [edx+0x1D0]
	push eax
	mov ecx,edi
	call CUIAvatarVAC::DrawSelectedNameTag
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
// CUIAvatarVAC::ResetCharacter
_SUB_EXCEPTION_HANDLER(1E7EA0)
__SUB_CLASS_THIS(001E7EA0, __thiscall, 139151,  CUIAvatarVAC, void, long, AvatarData&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E7EA0
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
	mov esi,ecx
	call CUIAvatarVAC::GetScrollBarIdx
	mov ebx,dword ptr [esp+0x74]
	lea eax,[eax+eax*2]
	mov ecx,ebx
	sub ecx,eax
	js Block2

 Block1:
	mov ecx,esi
	call CUIAvatarVAC::GetScrollBarIdx
	lea edx,[eax+eax*2]
	mov eax,ebx
	sub eax,edx
	cmp eax,8
	jle Block9

 Block2:
	mov eax,dword ptr [esi+ebx*8+0x3BEC]
	test eax,eax
	je Block7

 Block3:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block6

 Block5:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block6:
	mov dword ptr [esi+ebx*8+0x3BEC],0

 Block7:
	mov eax,dword ptr [esi+ebx*4+0x3DC8]
	test eax,eax
	je Block95

 Block8:
	mov dword ptr [esi+ebx*4+0x3DC8],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block95

 Block9:
	call CUIAvatarVAC::GetScrollBarIdx
	lea eax,[eax+eax*2]
	mov ecx,eax
	mov eax,ebx
	sub eax,ecx
	cdq
	mov ecx,3
	idiv ecx
	mov ecx,esi
	mov ebp,edx
	imul ebp,0x75
	add ebp,0x4A
	mov dword ptr [esp+0x18],ebp
	call CUIAvatarVAC::GetScrollBarIdx
	lea edx,[eax+eax*2]
	mov ecx,ebx
	sub ecx,edx
	mov eax,0x55555556
	imul ecx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x75
	add eax,0x96
	lea edi,[esi+ebx*8+0x3BE8]
	mov ecx,edi
	mov dword ptr [esp+0x74],eax
	call ZRef<CAvatar>::_Alloc
	mov ecx,dword ptr [esp+0x74]
	mov edi,dword ptr [edi+4]
	push 0
	push 0x64
	push ecx
	push ebp
	push 1
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x88],0
	call CWnd::GetLayer
	push ecx
	mov ebp,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ebp],0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x8C],1
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block11:
	mov ecx,ebp
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	test eax,eax
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov ebp,dword ptr [esp+0x94]
	push 4
	lea eax,[ebp+0xF9]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x90],2
	call CAvatar::Init_1
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	lea edx,[esp+0x24]
	push edx
	push ecx
	mov dword ptr [esp+0x80],esp
	mov ecx,esp
	add ebp,4
	push ebp
	mov dword ptr [esp+0x78],3
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x3FAC]
	mov byte ptr [esp+0x74],4
	test ecx,ecx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov byte ptr [esp+0x74],3
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x24],8
	mov edi,eax
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	cmp edi,0x28
	jle Block26

 Block25:
	add edi,0x12
	jmp Block27

 Block26:
	mov edi,0x3A

 Block27:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x34]
	push edx
	call ebp
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	lea ecx,[esp+0x24]
	push ecx
	mov dword ptr [esp+0x70],5
	call ebp
	lea edx,[esp+0x24]
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
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x6C],6
	test ecx,ecx
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	lea eax,[esp+0x34]
	push eax
	lea edx,[esp+0x28]
	push edx
	push 0
	push 0x16
	push edi
	push 0
	push 0xFFFFFF9C
	lea eax,[esp+0x94]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+ebx*4+0x3DC8]
	cmp edi,eax
	je Block38

 Block34:
	mov dword ptr [esi+ebx*4+0x3DC8],eax
	test eax,eax
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block36:
	test edi,edi
	je Block38

 Block37:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block38:
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block40:
	mov edi,8
	mov byte ptr [esp+0x6C],5
	cmp word ptr [esp+0x24],di
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	or ebp,0xFFFFFFFF
	mov dword ptr [esp+0x6C],ebp
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
	mov edi,dword ptr [esi+ebx*4+0x3DC8]
	test edi,edi
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xE0]
	push ebp
	push edi
	call eax
	test eax,eax
	jge Block52

 Block51:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block52:
	lea ecx,[esp+0x78]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov dword ptr [esp+0x6C],7
	mov word ptr [esp+0x24],dx
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block54:
	mov edi,dword ptr [esi+ebx*4+0x3DC8]
	mov byte ptr [esp+0x6C],8
	test edi,edi
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push edi
	call eax
	test eax,eax
	jge Block58

 Block57:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block58:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x6C],7
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov eax,dword ptr [esp+0x78]
	mov dword ptr [esp+0x6C],ebp
	test eax,eax
	je Block64

 Block63:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block64:
	mov edi,dword ptr [esi+ebx*4+0x3DC8]
	test edi,edi
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push edi
	call ecx
	test eax,eax
	jge Block68

 Block67:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block68:
	lea edx,[esp+0x78]
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x6C],9
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block70

 Block69:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block70:
	mov edi,dword ptr [esi+ebx*4+0x3DC8]
	mov byte ptr [esp+0x6C],0xA
	test edi,edi
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push edi
	call eax
	test eax,eax
	jge Block74

 Block73:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block74:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x6C],9
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block78:
	mov eax,dword ptr [esp+0x78]
	mov dword ptr [esp+0x6C],ebp
	test eax,eax
	je Block80

 Block79:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block80:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x54]
	push eax
	call edi
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block82

 Block81:
	push eax
	call _com_issue_error

 Block82:
	lea edx,[esp+0x44]
	push edx
	mov dword ptr [esp+0x70],0xB
	call edi
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	mov ecx,dword ptr [esi+ebx*4+0x3DC8]
	mov byte ptr [esp+0x6C],0xC
	test ecx,ecx
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	lea edx,[esp+0x54]
	push edx
	mov edx,dword ptr [esp+0x78]
	lea eax,[esp+0x48]
	push eax
	mov eax,dword ptr [esp+0x20]
	add edx,9
	push edx
	add eax,0xFFFFFFE5
	push eax
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x6C],0xB
	cmp word ptr [esp+0x44],di
	jne Block89

 Block87:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	mov dword ptr [esp+0x6C],ebp
	cmp word ptr [esp+0x54],di
	jne Block93

 Block91:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	push 0
	push ebx
	mov ecx,esi
	call CUIAvatarVAC::DrawNameTag

 Block95:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret 8
}
}
// CUIAvatar::OnMouseButton
__SUB_CLASS_THIS(001ED130, __thiscall, 139077,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	sub esp,8
	mov eax,dword ptr [esp+0xC]
	push ebx
	mov ebx,dword ptr [esp+0x18]
	push ebp
	mov ebp,dword ptr [esp+0x20]
	push esi
	mov esi,ecx
	mov dword ptr [esp+0xC],ebx
	mov dword ptr [esp+0x10],ebp
	cmp eax,0x201
	jne Block15

 Block1:
	mov ecx,dword ptr [esi+0x13C]
	dec ecx
	mov eax,0x55555556
	imul ecx
	mov eax,edx
	shr eax,0x1F
	push edi
	lea edi,[edx+eax+1]
	cmp edi,1
	jle Block13

 Block2:
	lea ecx,[esp+0x10]
	push ecx
	push offset _D_RTPREV
	call _anon__PtInRect
	add esp,8
	test eax,eax
	je Block10

 Block3:
	mov ecx,dword ptr [esi+0x13C]
	dec ecx
	mov eax,0x55555556
	imul ecx
	mov eax,dword ptr [esi+0x140]
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	add eax,ecx
	inc ecx
	cdq
	idiv ecx
	mov edi,dword ptr [esi+0x144]
	lea ecx,[esi-4]
	mov esi,dword ptr [ecx+0x14C]
	add edi,esi
	mov eax,2
	lea esi,[edx+edx*2]
	lea edx,[esi+2]
	jmp Block5

 Block5:
	cmp edx,edi
	jl Block7

 Block6:
	dec eax
	dec edx
	test eax,eax
	jge Block5

 Block7:
	add esi,eax
	push esi
	call CUIAvatar::SelectCharacter

 Block8:
	pop edi

 Block9:
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10

 Block10:
	cmp edi,1
	jle Block13

 Block11:
	lea edx,[esp+0x10]
	push edx
	push offset _D_RTNEXT
	call _anon__PtInRect
	add esp,8
	test eax,eax
	je Block13

 Block12:
	mov eax,dword ptr [esi+0x140]
	inc eax
	cdq
	idiv edi
	lea ecx,[esi-4]
	lea eax,[edx+edx*2]
	push eax
	call CUIAvatar::SelectCharacter
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10

 Block13:
	push ebp
	add esi,0xFFFFFFFC
	push ebx
	mov ecx,esi
	call CUIAvatar::GetSelectedIdx
	test eax,eax
	jl Block8

 Block14:
	push eax
	mov ecx,esi
	call CUIAvatar::SelectCharacter
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10

 Block15:
	cmp eax,0x203
	jne Block9

 Block16:
	push ebp
	push ebx
	lea ecx,[esi-4]
	call CUIAvatar::GetSelectedIdx
	test eax,eax
	jl Block9

 Block17:
	mov ecx,dword ptr [esi+0x144]
	cmp eax,ecx
	jge Block19

 Block18:
	mov ecx,dword ptr [esi+0x7C]
	call CLogin::SendSelectCharPacket
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10

 Block19:
	mov edx,dword ptr [esi+0x148]
	add edx,ecx
	cmp eax,edx
	jge Block9

 Block20:
	mov ecx,dword ptr [esi+0x7C]
	push 1
	call CLogin::OnNewCharStep
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10
}
}
// CUIAvatar::Refresh
__SUB_CLASS_THIS0(001EA1B0, __thiscall, 139074,  CUIAvatar, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov edx,3
	push edi
	mov dword ptr [esi+0x148],0
	lea eax,[esi+0x88]
	lea ebx,[edx-2]
	lea ecx,[ecx]

 Block1:
	mov ecx,dword ptr [eax-4]
	test ecx,ecx
	je Block4

 Block2:
	cmp dword ptr [ecx],0
	je Block4

 Block3:
	add dword ptr [esi+0x148],ebx

 Block4:
	mov ecx,dword ptr [eax]
	test ecx,ecx
	je Block7

 Block5:
	cmp dword ptr [ecx],0
	je Block7

 Block6:
	add dword ptr [esi+0x148],ebx

 Block7:
	mov ecx,dword ptr [eax+4]
	test ecx,ecx
	je Block10

 Block8:
	cmp dword ptr [ecx],0
	je Block10

 Block9:
	add dword ptr [esi+0x148],ebx

 Block10:
	mov ecx,dword ptr [eax+8]
	test ecx,ecx
	je Block13

 Block11:
	cmp dword ptr [ecx],0
	je Block13

 Block12:
	add dword ptr [esi+0x148],ebx

 Block13:
	mov ecx,dword ptr [eax+0xC]
	test ecx,ecx
	je Block16

 Block14:
	cmp dword ptr [ecx],0
	je Block16

 Block15:
	add dword ptr [esi+0x148],ebx

 Block16:
	add eax,0x14
	sub edx,ebx
	jne Block1

 Block17:
	xor edi,edi

 Block18:
	mov ecx,dword ptr [esi+0x144]
	lea eax,[edi+ecx*2]
	add eax,ecx
	mov ecx,dword ptr [esi+0x148]
	cmp ecx,eax
	jg Block21

 Block19:
	mov edx,dword ptr [esi+0x14C]
	add edx,ecx
	cmp eax,edx
	jge Block21

 Block20:
	mov ecx,ebx
	jmp Block22

 Block21:
	xor ecx,ecx

 Block22:
	mov eax,dword ptr [esi+eax*4+0x84]
	push ecx
	push eax
	push edi
	mov ecx,esi
	call CUIAvatar::ResetCharacter
	add edi,ebx
	cmp edi,3
	jl Block18

 Block23:
	pop edi
	pop esi
	pop ebx
	ret
}
}
// CUIAvatarVAC::OnButtonClicked
__SUB_CLASS_THIS(001E0310, __thiscall, 139147,  CUIAvatarVAC, void, uint32_t) {
__asm {

 Block0:
	call CUIAvatarVAC::IsRequestValid
	test eax,eax
	je Block3

 Block1:
	cmp dword ptr [esp+4],0x3E9
	jne Block3

 Block2:
	mov ecx,dword ptr [ecx+0x80]
	call CLogin::SendSelectCharPacketByVAC

 Block3:
	ret 4
}
}
// CUIAvatarVAC::GetSelectedIdx
_SUB_EXCEPTION_HANDLER(1E1640)
__SUB_CLASS_THIS(001E1640, __thiscall, 139157,  CUIAvatarVAC, long, NakedParam<tagPOINT>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E1640
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x20],ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	lea ebp,[ecx+0x3BEC]

 Block1:
	cmp dword ptr [ebp],ebx
	je Block14

 Block2:
	lea eax,[esp+0x24]
	push eax
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x44],ebx
	cmp esi,ebx
	je Block17

 Block3:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],ebx
	call eax
	cmp eax,ebx
	jge Block5

 Block4:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block5:
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x4C]
	mov edx,dword ptr [esp+0x18]
	lea edi,[edx+ecx]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp eax,ebx
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov ecx,dword ptr [esp+0x20]
	lea eax,[esp+0x28]
	push eax
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x44],1
	cmp esi,ebx
	je Block17

 Block8:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x24],ebx
	call eax
	cmp eax,ebx
	jge Block10

 Block9:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x50]
	mov edx,dword ptr [esp+0x1C]
	lea esi,[edx+ecx]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov ecx,dword ptr [ebp]
	push ebx
	lea eax,[esp+0x30]
	push eax
	call CAvatar::GetBodyRect
	push esi
	push edi
	lea ecx,[esp+0x34]
	push ecx
	call PtInRect
	test eax,eax
	jne Block18

 Block13:
	mov ecx,dword ptr [esp+0x20]

 Block14:
	mov eax,dword ptr [esp+0x14]
	inc eax
	add ebp,8
	cmp eax,0x3C
	mov dword ptr [esp+0x14],eax
	jl Block1

 Block15:
	or eax,0xFFFFFFFF

 Block16:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret 8

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov eax,dword ptr [esp+0x14]
	jmp Block16
}
}
// CUIAvatar::ResetCharacter
_SUB_EXCEPTION_HANDLER(1E6C60)
__SUB_CLASS_THIS(001E6C60, __thiscall, 139082,  CUIAvatar, void, long, AvatarData&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E6C60
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
	mov esi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov eax,dword ptr [esp+0x64]
	cmp dword ptr [eax],ebp
	jne Block80

 Block1:
	mov edi,dword ptr [esp+0x60]
	mov eax,dword ptr [esi+edi*8+0xC4]
	cmp eax,ebp
	je Block6

 Block2:
	lea ebx,[eax-0x10]
	lea ebp,[ebx+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block5

 Block4:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block5:
	mov dword ptr [esi+edi*8+0xC4],0
	xor ebp,ebp

 Block6:
	mov eax,dword ptr [esi+edi*4+0xD8]
	cmp eax,ebp
	je Block8

 Block7:
	mov dword ptr [esi+edi*4+0xD8],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+edi*4+0xE4]
	cmp eax,ebp
	je Block10

 Block9:
	mov dword ptr [esi+edi*4+0xE4],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov ecx,dword ptr [esi+0x144]
	lea eax,[edi+ecx*2]
	add eax,ecx
	cmp eax,dword ptr [esi+0x140]
	jge Block76

 Block11:
	cmp dword ptr [esp+0x68],ebp
	je Block13

 Block12:
	lea eax,[esp+0x24]
	push 0x552
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x58],ebp
	mov dword ptr [esp+0x14],1
	jmp Block14

 Block13:
	lea ecx,[esp+0x64]
	push 0x550
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x58],1
	mov dword ptr [esp+0x14],2

 Block14:
	mov eax,dword ptr [eax]
	cmp eax,ebp
	je Block16

 Block15:
	mov ebx,dword ptr [eax]
	jmp Block17

 Block16:
	xor ebx,ebx

 Block17:
	push ebp
	push 0xFF
	push ebp
	lea edx,[esp+0x2C]
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push eax
	mov dword ptr [esp+0x6C],2
	mov dword ptr [ecx],ebp
	call _x_com_ptr<IWzGr2DLayer>::_QueryUnknown
	cmp eax,ebp
	jge Block20

 Block18:
	cmp eax,0x80004002
	je Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	mov eax,edi
	imul eax,0x7D
	push 0x50
	add eax,0xAA
	push eax
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x74],3
	mov dword ptr [esp+0x7C],eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push eax
	mov byte ptr [esp+0x78],4
	mov dword ptr [ecx],ebp
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,ebp
	jge Block23

 Block21:
	cmp eax,0x80004002
	je Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	push ebp
	lea edx,[esp+0x38]
	push ebx
	push edx
	mov byte ptr [esp+0x80],5
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov ebx,dword ptr [esi+edi*4+0xFC]
	add esp,0x28
	cmp ebx,eax
	je Block28

 Block24:
	mov dword ptr [esi+edi*4+0xFC],eax
	cmp eax,ebp
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block26:
	cmp ebx,ebp
	je Block28

 Block27:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block28:
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block30

 Block29:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block30:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x58],2
	cmp eax,ebp
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block32:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x58],1
	cmp eax,ebp
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	mov ebx,dword ptr [esp+0x14]
	test bl,2
	je Block37

 Block35:
	mov ecx,dword ptr [esp+0x64]
	and ebx,0xFFFFFFFD
	cmp ecx,ebp
	je Block37

 Block36:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x64],ebp

 Block37:
	mov dword ptr [esp+0x58],0xFFFFFFFF
	test bl,1
	je Block40

 Block38:
	mov ecx,dword ptr [esp+0x24]
	cmp ecx,ebp
	je Block40

 Block39:
	call _xbstr_t::Data_t::Release

 Block40:
	mov ebx,dword ptr [esi+edi*4+0xFC]
	cmp ebx,ebp
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push ebx
	call ecx
	cmp eax,ebp
	jge Block44

 Block43:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block44:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x40]
	push edx
	call ebx
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	lea ecx,[esp+0x30]
	push ecx
	mov dword ptr [esp+0x5C],6
	call ebx
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	mov ecx,dword ptr [esi+edi*4+0xFC]
	mov byte ptr [esp+0x58],7
	cmp ecx,ebp
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea eax,[esp+0x40]
	push eax
	lea edx,[esp+0x34]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x58],6
	cmp word ptr [esp+0x30],bx
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[esp+0x30]
	push ecx
	call ebp

 Block54:
	mov dword ptr [esp+0x58],0xFFFFFFFF
	cmp word ptr [esp+0x40],bx
	jne Block57

 Block55:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea eax,[esp+0x40]
	push eax
	call ebp

 Block58:
	xor ebp,ebp
	cmp dword ptr [esp+0x68],ebp
	je Block61

 Block59:
	mov eax,dword ptr [esi+edi*4+0xF0]
	cmp eax,ebp
	je Block207

 Block60:
	mov dword ptr [esi+edi*4+0xF0],ebp
	jmp Block206

 Block61:
	push ebp
	push 0xFF
	push ebp
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push eax
	mov dword ptr [esp+0x6C],ebx
	call _x_com_ptr<IWzGr2DLayer>::CreateFromUnknown
	mov ecx,dword ptr [esp+0x70]
	push 0x50
	push ecx
	lea edx,[esp+0x3C]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x74],9
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x7C],esp
	push eax
	mov byte ptr [esp+0x78],0xA
	call _x_com_ptr<IWzVector2D>::CreateFromUnknown
	lea eax,[esp+0x80]
	push 0x551
	push eax
	mov byte ptr [esp+0x7C],0xB
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x74],0xC
	cmp eax,ebp
	je Block63

 Block62:
	mov eax,dword ptr [eax]
	jmp Block64

 Block63:
	xor eax,eax

 Block64:
	push ebp
	push eax
	lea ecx,[esp+0x8C]
	push ecx
	mov byte ptr [esp+0x80],0xE
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	lea esi,[esi+edi*4+0xF0]
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x68]
	cmp eax,ebp
	je Block66

 Block65:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block66:
	mov ecx,dword ptr [esp+0x64]
	cmp ecx,ebp
	je Block68

 Block67:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x64],ebp

 Block68:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x58],8
	cmp eax,ebp
	je Block70

 Block69:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block70:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	cmp eax,ebp
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block72:
	mov esi,dword ptr [esi]
	cmp esi,ebp
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,ebp
	jge Block207

 Block75:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex
	jmp Block207

 Block76:
	mov eax,dword ptr [esi+edi*4+0xF0]
	cmp eax,ebp
	je Block78

 Block77:
	mov dword ptr [esi+edi*4+0xF0],ebp
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block78:
	mov eax,dword ptr [esi+edi*4+0xFC]
	cmp eax,ebp
	je Block207

 Block79:
	mov dword ptr [esi+edi*4+0xFC],ebp
	jmp Block206

 Block80:
	mov ebp,dword ptr [esp+0x60]
	lea edi,[esi+ebp*8+0xC0]
	mov ecx,edi
	call ZRef<CAvatar>::_Alloc
	mov edi,dword ptr [edi+4]
	mov eax,ebp
	imul eax,0x7D
	push 0
	push 0x64
	push 0x50
	mov dword ptr [esp+0x30],eax
	add eax,0xAA
	push eax
	push 1
	push ecx
	mov dword ptr [esp+0x78],eax
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	lea ecx,[esp+0x80]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x74],0xF
	call CWnd::GetLayer
	push ecx
	mov ebx,esp
	mov dword ptr [esp+0x48],esp
	mov dword ptr [ebx],0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x78],0x10
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block82

 Block81:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block82:
	mov ecx,ebx
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	test eax,eax
	jge Block85

 Block83:
	cmp eax,0x80004002
	je Block85

 Block84:
	push eax
	call _com_issue_error

 Block85:
	mov ecx,dword ptr [esp+0x80]
	add ecx,0xF9
	push 4
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x7C],0x11
	call CAvatar::Init_1
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	test eax,eax
	je Block87

 Block86:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block87:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block89

 Block88:
	push eax
	call _com_issue_error

 Block89:
	mov edx,dword ptr [esp+0x64]
	lea eax,[esp+0x40]
	push eax
	push ecx
	add edx,4
	mov dword ptr [esp+0x70],esp
	mov ecx,esp
	mov ebx,0x12
	push edx
	mov dword ptr [esp+0x64],ebx
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x120]
	mov byte ptr [esp+0x60],0x13
	test ecx,ecx
	jne Block91

 Block90:
	push 0x80004003
	call _com_issue_error

 Block91:
	mov byte ptr [esp+0x60],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x40],8
	mov edi,eax
	mov dword ptr [esp+0x58],0xFFFFFFFF
	jne Block94

 Block92:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block95:
	cmp edi,0x28
	jle Block97

 Block96:
	add edi,ebx
	jmp Block98

 Block97:
	mov edi,0x3A

 Block98:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block100

 Block99:
	push eax
	call _com_issue_error

 Block100:
	lea ecx,[esp+0x40]
	mov ebx,0x14
	push ecx
	mov dword ptr [esp+0x5C],ebx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block102

 Block101:
	push eax
	call _com_issue_error

 Block102:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x58],0x15
	test ecx,ecx
	jne Block104

 Block103:
	push 0x80004003
	call _com_issue_error

 Block104:
	lea eax,[esp+0x30]
	push eax
	lea edx,[esp+0x44]
	push edx
	push 0
	push 0x16
	push edi
	push 0
	push 0xFFFFFF9C
	lea eax,[esp+0x84]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+ebp*4+0xD8]
	cmp edi,eax
	je Block109

 Block105:
	mov dword ptr [esi+ebp*4+0xD8],eax
	test eax,eax
	je Block107

 Block106:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block107:
	test edi,edi
	je Block109

 Block108:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block109:
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block111

 Block110:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block111:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x58],bl
	jne Block114

 Block112:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block115:
	or ebx,0xFFFFFFFF
	cmp word ptr [esp+0x30],8
	mov dword ptr [esp+0x58],ebx
	jne Block118

 Block116:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block119:
	mov edi,dword ptr [esi+ebp*4+0xD8]
	test edi,edi
	jne Block121

 Block120:
	push 0x80004003
	call _com_issue_error

 Block121:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xE0]
	push ebx
	push edi
	call eax
	test eax,eax
	jge Block123

 Block122:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block123:
	lea ecx,[esp+0x68]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov dword ptr [esp+0x58],0x16
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],eax
	test eax,eax
	je Block125

 Block124:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block125:
	mov edi,dword ptr [esi+ebp*4+0xD8]
	mov byte ptr [esp+0x58],0x17
	test edi,edi
	jne Block127

 Block126:
	push 0x80004003
	call _com_issue_error

 Block127:
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push edi
	call eax
	test eax,eax
	jge Block129

 Block128:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block129:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x58],0x16
	jne Block132

 Block130:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block133:
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x58],ebx
	test eax,eax
	je Block135

 Block134:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block135:
	mov edi,dword ptr [esi+ebp*4+0xD8]
	test edi,edi
	jne Block137

 Block136:
	push 0x80004003
	call _com_issue_error

 Block137:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push edi
	call ecx
	test eax,eax
	jge Block139

 Block138:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block139:
	lea edx,[esp+0x68]
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,0x18
	mov ecx,0xD
	mov dword ptr [esp+0x58],ebx
	mov word ptr [esp+0x30],cx
	mov dword ptr [esp+0x38],eax
	test eax,eax
	je Block141

 Block140:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block141:
	mov edi,dword ptr [esi+ebp*4+0xD8]
	mov byte ptr [esp+0x58],0x19
	test edi,edi
	jne Block143

 Block142:
	push 0x80004003
	call _com_issue_error

 Block143:
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push edi
	call eax
	test eax,eax
	jge Block145

 Block144:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block145:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x58],bl
	jne Block148

 Block146:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block149

 Block147:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block149

 Block148:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block149:
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	test eax,eax
	je Block151

 Block150:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block151:
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
	jge Block153

 Block152:
	push eax
	call _com_issue_error

 Block153:
	lea edx,[esp+0x40]
	mov ebx,0x1A
	push edx
	mov dword ptr [esp+0x5C],ebx
	call edi
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block155

 Block154:
	push eax
	call _com_issue_error

 Block155:
	mov edi,dword ptr [esi+ebp*4+0xD8]
	mov byte ptr [esp+0x58],0x1B
	test edi,edi
	jne Block157

 Block156:
	push 0x80004003
	call _com_issue_error

 Block157:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0xB8]
	lea edx,[esp+0x68]
	push edx
	push edi
	mov dword ptr [esp+0x70],0
	call eax
	test eax,eax
	jge Block159

 Block158:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block159:
	mov ecx,dword ptr [esi+ebp*4+0xD8]
	test ecx,ecx
	jne Block161

 Block160:
	push 0x80004003
	call _com_issue_error

 Block161:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x44]
	push eax
	mov eax,dword ptr [esp+0x70]
	cdq
	sub eax,edx
	mov edx,eax
	mov eax,dword ptr [esp+0x2C]
	sar edx,1
	sub eax,edx
	push 0x50
	add eax,0xB0
	push eax
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x40],di
	jne Block164

 Block162:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block165

 Block163:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block165

 Block164:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block165:
	mov dword ptr [esp+0x58],0xFFFFFFFF
	cmp word ptr [esp+0x30],di
	jne Block168

 Block166:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block169

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block169

 Block168:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block169:
	push 0
	push ebp
	mov ecx,esi
	call CUIAvatar::DrawNameTag
	mov ebx,dword ptr [esp+0x64]
	mov ecx,dword ptr [ebx+0x3D]
	push ecx
	lea edi,[ebx+0x39]
	push edi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	cmp eax,1
	jne Block171

 Block170:
	lea ecx,[esp+0x64]
	push 0x558
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edi,dword ptr [eax]
	mov eax,dword ptr [esp+0x64]
	jmp Block179

 Block171:
	mov edx,dword ptr [ebx+0x3D]
	push edx
	push edi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	cmp eax,0x15
	je Block173

 Block172:
	cmp ecx,0x7D0
	jne Block174

 Block173:
	lea ecx,[esp+0x68]
	push 0x1414
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edi,dword ptr [eax]
	mov eax,dword ptr [esp+0x68]
	jmp Block179

 Block174:
	mov edx,dword ptr [ebx+0x3D]
	push edx
	push edi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	cwde
	push eax
	call is_evan_job
	add esp,0xC
	test eax,eax
	je Block176

 Block175:
	lea ecx,[esp+0x24]
	push 0x15A8
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edi,dword ptr [eax]
	mov eax,dword ptr [esp+0x24]
	jmp Block179

 Block176:
	mov edx,dword ptr [ebx+0x3D]
	push edx
	push edi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	cmp eax,3
	jne Block178

 Block177:
	lea ecx,[esp+0x20]
	push 0x1971
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edi,dword ptr [eax]
	mov eax,dword ptr [esp+0x20]
	jmp Block179

 Block178:
	lea edx,[esp+0x1C]
	push 0x1415
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edi,dword ptr [eax]
	mov eax,dword ptr [esp+0x1C]

 Block179:
	test eax,eax
	je Block181

 Block180:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block181:
	push 0
	push 0xFF
	push 0
	lea eax,[esp+0x38]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov ebx,0x1C
	push eax
	mov dword ptr [esp+0x6C],ebx
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzGr2DLayer>::_QueryUnknown
	test eax,eax
	jge Block184

 Block182:
	cmp eax,0x80004002
	je Block184

 Block183:
	push eax
	call _com_issue_error

 Block184:
	mov ecx,dword ptr [esp+0x70]
	push 0x50
	push ecx
	lea edx,[esp+0x40]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x74],0x1D
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x7C],esp
	push eax
	mov byte ptr [esp+0x78],0x1E
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	test eax,eax
	jge Block187

 Block185:
	cmp eax,0x80004002
	je Block187

 Block186:
	push eax
	call _com_issue_error

 Block187:
	push 0
	lea eax,[esp+0x34]
	push edi
	push eax
	mov byte ptr [esp+0x80],0x1F
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+ebp*4+0xE4]
	add esp,0x28
	cmp edi,eax
	je Block192

 Block188:
	mov dword ptr [esi+ebp*4+0xE4],eax
	test eax,eax
	je Block190

 Block189:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block190:
	test edi,edi
	je Block192

 Block191:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block192:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block194

 Block193:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block194:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x58],bl
	test eax,eax
	je Block196

 Block195:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block196:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	test eax,eax
	je Block198

 Block197:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block198:
	mov edi,dword ptr [esi+ebp*4+0xE4]
	test edi,edi
	jne Block200

 Block199:
	push 0x80004003
	call _com_issue_error

 Block200:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push edi
	call ecx
	xor ebx,ebx
	cmp eax,ebx
	jge Block202

 Block201:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block202:
	mov eax,dword ptr [esi+ebp*4+0xF0]
	cmp eax,ebx
	je Block204

 Block203:
	mov dword ptr [esi+ebp*4+0xF0],ebx
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block204:
	mov eax,dword ptr [esi+ebp*4+0xFC]
	cmp eax,ebx
	je Block207

 Block205:
	mov dword ptr [esi+ebp*4+0xFC],ebx

 Block206:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block207:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret 0xC
}
}
// CUICharDetail::Draw
_SUB_EXCEPTION_HANDLER(1E8860)
__SUB_CLASS_THIS(001E8860, __thiscall, 139046,  CUICharDetail, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E8860
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x84
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x70],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp+0x3C],esi
	lea eax,[ebp+0x44]
	push eax
	call CWnd::GetCanvas
	mov eax,dword ptr [esi+0xF4]
	mov edi,dword ptr [eax+0x1D0]
	mov ebx,dword ptr [ebp+0x44]
	imul edi,0x2FE
	add edi,dword ptr [eax+0x1D4]
	mov dword ptr [ebp-4],0
	mov dword ptr [ebp-0x30],edi
	test ebx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi+0x104]
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+0x8C]
	neg eax
	sbb eax,eax
	push 0x30FFFF00
	and eax,0x24
	add eax,0x70
	push eax
	push 0xB7
	push 0
	push 0
	push ebx
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block4:
	lea eax,[ebp+4]
	push 0x556
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	cmp dword ptr [esi+0x104],0
	mov byte ptr [ebp-4],1
	je Block6

 Block5:
	push 1
	push offset _S_1
	lea ecx,[ebp+4]
	call ZXString16::_Cat

 Block6:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x40]
	push ecx
	call esi
	lea edx,[ebp-0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	lea eax,[ebp-0x50]
	push eax
	mov byte ptr [ebp-4],2
	call esi
	lea ecx,[ebp-0x50]
	push offset _D_VTMISSING
	push ecx
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
	lea edx,[ebp-0x40]
	push edx
	mov edx,dword ptr [ebp+4]
	lea eax,[ebp-0x50]
	push eax
	push ecx
	mov dword ptr [ebp+0x24],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],3
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],4
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea eax,[ebp-0x60]
	mov byte ptr [ebp-4],3
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp]
	mov dword ptr [ebp],0
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
	cmp word ptr [ebp-0x60],8
	mov byte ptr [ebp-4],7
	jne Block18

 Block16:
	mov eax,dword ptr [ebp-0x58]
	xor ecx,ecx
	mov word ptr [ebp-0x60],cx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[ebp-0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	cmp word ptr [ebp-0x50],8
	mov byte ptr [ebp-4],8
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [ebp-0x50],ax
	mov eax,dword ptr [ebp-0x48]
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[ebp-0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	cmp word ptr [ebp-0x40],8
	mov byte ptr [ebp-4],9
	jne Block26

 Block24:
	mov eax,dword ptr [ebp-0x38]
	xor edx,edx
	mov word ptr [ebp-0x40],dx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[ebp-0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block27:
	lea ecx,[ebp+0x50]
	push ecx
	call esi
	lea edx,[ebp+0x50]
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
	mov edx,dword ptr [ebp+0x50]
	mov ecx,dword ptr [ebx]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x58]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp]
	push eax
	push 0
	push 0
	push ebx
	mov byte ptr [ebp-4],0xA
	call ecx
	test eax,eax
	jge Block31

 Block30:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block31:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],9
	jne Block34

 Block32:
	mov eax,dword ptr [ebp+0x58]
	xor edx,edx
	mov word ptr [ebp+0x50],dx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block35:
	lea ecx,[ebp+0x48]
	push 1
	push ecx
	call get_basic_font
	mov edx,dword ptr [edi+0x3D]
	lea eax,[edi+0x39]
	push edx
	push eax
	mov byte ptr [ebp-4],0xB
	mov dword ptr [ebp+0x24],eax
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	cwde
	push eax
	call get_job_name
	add esp,0x14
	mov dword ptr [ebp+0xC],0
	test eax,eax
	je Block39

 Block36:
	mov ecx,eax
	lea esi,[ecx+1]

 Block37:
	mov dl,byte ptr [ecx]
	inc ecx
	test dl,dl
	jne Block37

 Block38:
	sub ecx,esi
	mov esi,ecx
	push esi
	push eax
	push 0
	push esi
	lea ecx,[ebp+0xC]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[ebp+0xC]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [ZImports::_VariantInit]

 Block39:
	lea ecx,[ebp+0x60]
	push ecx
	mov byte ptr [ebp-4],0xC
	call esi
	lea edx,[ebp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	lea eax,[ebp+0x50]
	push eax
	mov byte ptr [ebp-4],0xD
	call esi
	lea ecx,[ebp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	mov ecx,dword ptr [ebp+0x48]
	lea edx,[ebp+0x60]
	push edx
	mov edx,dword ptr [ebp+0xC]
	lea eax,[ebp+0x50]
	push eax
	push ecx
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	mov bl,0xE
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x44]
	push 1
	mov byte ptr [ebp-4],0xF
	push 0x2E
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp+0x50],si
	jne Block46

 Block44:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp+0x60],si
	jne Block50

 Block48:
	mov eax,dword ptr [ebp+0x68]
	xor edx,edx
	mov word ptr [ebp+0x60],dx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [edi+0x35]
	mov esi,esp
	push ecx
	lea edx,[edi+0x33]
	push edx
	call _ZtlSecureFuseHelper<unsigned char>::call
	push 0xA
	movzx eax,al
	push esi
	push eax
	call __itow
	mov ebx,dword ptr [ZImports::_VariantInit]
	add esp,0x14
	lea ecx,[ebp+0x50]
	push ecx
	mov esi,eax
	call ebx
	lea edx,[ebp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	lea eax,[ebp+0x60]
	push eax
	mov byte ptr [ebp-4],0x10
	call ebx
	lea ecx,[ebp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	mov ecx,dword ptr [ebp+0x48]
	lea edx,[ebp+0x50]
	push edx
	lea eax,[ebp+0x60]
	push eax
	push ecx
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	mov bl,0x11
	push esi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x44]
	push 0x13
	mov byte ptr [ebp-4],0x12
	push 0x2E
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0x10
	jne Block58

 Block56:
	mov eax,dword ptr [ebp+0x68]
	xor edx,edx
	mov word ptr [ebp+0x60],dx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block59:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0xC
	jne Block62

 Block60:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov eax,0x20
	call __chkstk
	mov eax,dword ptr [edi+0xB1]
	mov esi,esp
	push eax
	lea ecx,[edi+0xAD]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	push 0xA
	movsx edx,ax
	push esi
	push edx
	call __itow
	mov ebx,dword ptr [ZImports::_VariantInit]
	mov esi,eax
	add esp,0x14
	lea eax,[ebp+0x50]
	push eax
	call ebx
	lea ecx,[ebp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	lea edx,[ebp+0x60]
	push edx
	mov byte ptr [ebp-4],0x13
	call ebx
	lea eax,[ebp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	mov eax,dword ptr [ebp+0x48]
	lea ecx,[ebp+0x50]
	push ecx
	lea edx,[ebp+0x60]
	push edx
	push eax
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push esi
	mov byte ptr [ebp-4],0x14
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x44]
	push 0x13
	mov byte ptr [ebp-4],0x15
	push 0x88
	mov byte ptr [ebp-4],0x14
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0x13
	jne Block70

 Block68:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0xC
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [edi+0x45]
	mov esi,esp
	push edx
	lea eax,[edi+0x41]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	push 0xA
	movsx ecx,ax
	push esi
	push ecx
	call __itow
	add esp,0x14
	lea edx,[ebp+0x50]
	push edx
	mov esi,eax
	call ebx
	lea eax,[ebp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	lea ecx,[ebp+0x60]
	push ecx
	mov byte ptr [ebp-4],0x16
	call ebx
	lea edx,[ebp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block79

 Block78:
	push eax
	call _com_issue_error

 Block79:
	mov edx,dword ptr [ebp+0x48]
	lea eax,[ebp+0x50]
	push eax
	lea ecx,[ebp+0x60]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	mov bl,0x17
	push esi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x44]
	push 0x25
	mov byte ptr [ebp-4],0x18
	push 0x2E
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0x16
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [ebp+0x60],ax
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[ebp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0xC
	jne Block86

 Block84:
	mov eax,dword ptr [ebp+0x58]
	xor edx,edx
	mov word ptr [ebp+0x50],dx
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [edi+0x55]
	mov esi,esp
	push ecx
	lea edx,[edi+0x51]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	push 0xA
	cwde
	push esi
	push eax
	call __itow
	mov ebx,dword ptr [ZImports::_VariantInit]
	add esp,0x14
	lea ecx,[ebp+0x50]
	push ecx
	mov esi,eax
	call ebx
	lea edx,[ebp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block89

 Block88:
	push eax
	call _com_issue_error

 Block89:
	lea eax,[ebp+0x60]
	push eax
	mov byte ptr [ebp-4],0x19
	call ebx
	lea ecx,[ebp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block91

 Block90:
	push eax
	call _com_issue_error

 Block91:
	mov ecx,dword ptr [ebp+0x48]
	lea edx,[ebp+0x50]
	push edx
	lea eax,[ebp+0x60]
	push eax
	push ecx
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	mov bl,0x1A
	push esi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x44]
	push 0x25
	mov byte ptr [ebp-4],0x1B
	push 0x88
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0x19
	jne Block94

 Block92:
	mov eax,dword ptr [ebp+0x68]
	xor edx,edx
	mov word ptr [ebp+0x60],dx
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block95:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0xC
	jne Block98

 Block96:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block99:
	mov eax,0x20
	call __chkstk
	mov eax,dword ptr [edi+0x4D]
	mov esi,esp
	push eax
	lea ecx,[edi+0x49]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	push 0xA
	movsx edx,ax
	push esi
	push edx
	call __itow
	mov ebx,dword ptr [ZImports::_VariantInit]
	mov esi,eax
	add esp,0x14
	lea eax,[ebp+0x50]
	push eax
	call ebx
	lea ecx,[ebp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block101

 Block100:
	push eax
	call _com_issue_error

 Block101:
	lea edx,[ebp+0x60]
	push edx
	mov byte ptr [ebp-4],0x1C
	call ebx
	lea eax,[ebp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block103

 Block102:
	push eax
	call _com_issue_error

 Block103:
	mov eax,dword ptr [ebp+0x48]
	lea ecx,[ebp+0x50]
	push ecx
	lea edx,[ebp+0x60]
	push edx
	push eax
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	mov bl,0x1D
	push esi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x44]
	push 0x37
	mov byte ptr [ebp-4],0x1E
	push 0x2E
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0x1C
	jne Block106

 Block104:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block107:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0xC
	jne Block110

 Block108:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block111:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [edi+0x5D]
	mov esi,esp
	push edx
	add edi,0x59
	push edi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	push 0xA
	cwde
	push esi
	push eax
	call __itow
	mov ebx,dword ptr [ZImports::_VariantInit]
	add esp,0x14
	lea ecx,[ebp+0x50]
	push ecx
	mov esi,eax
	call ebx
	lea edx,[ebp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block113

 Block112:
	push eax
	call _com_issue_error

 Block113:
	lea eax,[ebp+0x60]
	push eax
	mov byte ptr [ebp-4],0x1F
	call ebx
	lea ecx,[ebp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block115

 Block114:
	push eax
	call _com_issue_error

 Block115:
	mov ecx,dword ptr [ebp+0x48]
	lea edx,[ebp+0x50]
	push edx
	lea eax,[ebp+0x60]
	push eax
	push ecx
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push esi
	mov byte ptr [ebp-4],0x20
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [ebp+0x44]
	push 0x37
	mov byte ptr [ebp-4],0x21
	push 0x88
	mov ecx,esi
	mov byte ptr [ebp-4],0x20
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0x1F
	jne Block122

 Block116:
	mov eax,dword ptr [ebp+0x68]
	xor edx,edx
	mov word ptr [ebp+0x60],dx
	test eax,eax
	je Block118

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block118:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block119:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0xC
	jne Block123

 Block120:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block124

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block122:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp+0x60]
	push eax
	call edi
	jmp Block119

 Block123:
	lea edx,[ebp+0x50]
	push edx
	call edi

 Block124:
	mov eax,dword ptr [ebp+0x3C]
	cmp dword ptr [eax+0x104],0
	jne Block137

 Block125:
	lea eax,[ebp+0x50]
	push eax
	call ebx
	lea ecx,[ebp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block127

 Block126:
	push eax
	call _com_issue_error

 Block127:
	lea edx,[ebp+0x60]
	push edx
	mov byte ptr [ebp-4],0x22
	call ebx
	lea eax,[ebp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block129

 Block128:
	push eax
	call _com_issue_error

 Block129:
	mov eax,dword ptr [ebp+0x48]
	lea ecx,[ebp+0x50]
	push ecx
	lea edx,[ebp+0x60]
	push edx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x24],esp
	push 0xBCB
	mov bl,0x23
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push 0x63
	mov byte ptr [ebp-4],0x24
	push 0x24
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0x22
	jne Block132

 Block130:
	mov eax,dword ptr [ebp+0x68]
	xor edx,edx
	mov word ptr [ebp+0x60],dx
	test eax,eax
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea eax,[ebp+0x60]
	push eax
	call edi

 Block133:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0xC
	jne Block136

 Block134:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block324

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block324

 Block136:
	lea edx,[ebp+0x50]
	push edx
	call edi
	jmp Block324

 Block137:
	mov esi,dword ptr [eax+0xF8]
	mov eax,dword ptr [eax+0xF4]
	shl esi,4
	add esi,dword ptr [eax+0x1D8]
	mov dword ptr [ebp+0x40],0
	mov dword ptr [ebp+8],esi
	lea ecx,[ebp+0x3C]
	push 0xBCC
	push ecx
	mov byte ptr [ebp-4],0x25
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp+0x40]
	push eax
	mov byte ptr [ebp-4],0x26
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x3C]
	add esp,0xC
	mov byte ptr [ebp-4],0x25
	test eax,eax
	je Block139

 Block138:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block139:
	lea ecx,[ebp+0x60]
	push ecx
	call ebx
	lea edx,[ebp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block141

 Block140:
	push eax
	call _com_issue_error

 Block141:
	mov edx,dword ptr [ebp+0x40]
	lea eax,[ebp+0x60]
	push eax
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x27
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x28
	test ecx,ecx
	jne Block143

 Block142:
	push 0x80004003
	call _com_issue_error

 Block143:
	mov byte ptr [ebp-4],0x27
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x60],8
	mov edi,eax
	mov byte ptr [ebp-4],0x25
	jne Block146

 Block144:
	xor eax,eax
	mov word ptr [ebp+0x60],ax
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea ecx,[ebp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block147:
	lea edx,[ebp+0x50]
	push edx
	call ebx
	lea eax,[ebp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block149

 Block148:
	push eax
	call _com_issue_error

 Block149:
	lea ecx,[ebp+0x60]
	push ecx
	mov byte ptr [ebp-4],0x29
	call ebx
	lea edx,[ebp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block151

 Block150:
	push eax
	call _com_issue_error

 Block151:
	mov edx,dword ptr [ebp+0x48]
	lea eax,[ebp+0x50]
	push eax
	mov eax,dword ptr [ebp+0x40]
	lea ecx,[ebp+0x60]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	mov bl,0x2A
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov ecx,0x73
	sub ecx,edi
	push 0x63
	push ecx
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x2B
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x29
	cmp word ptr [ebp+0x60],di
	jne Block154

 Block152:
	mov eax,dword ptr [ebp+0x68]
	xor edx,edx
	mov word ptr [ebp+0x60],dx
	test eax,eax
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block155

 Block154:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block155:
	mov byte ptr [ebp-4],0x25
	cmp word ptr [ebp+0x50],di
	jne Block158

 Block156:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block159:
	mov eax,0x20
	call __chkstk
	mov eax,dword ptr [esi+4]
	cdq
	mov ecx,esp
	xor eax,edx
	push 0xA
	sub eax,edx
	push ecx
	push eax
	call __itow
	mov esi,eax
	add esp,0xC
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block161

 Block160:
	push eax
	call _com_issue_error

 Block161:
	lea edx,[ebp+0x60]
	push edx
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	mov bl,0x2C
	push esi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x2D
	test ecx,ecx
	jne Block163

 Block162:
	push 0x80004003
	call _com_issue_error

 Block163:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x60],8
	mov edi,eax
	mov byte ptr [ebp-4],0x25
	jne Block166

 Block164:
	xor eax,eax
	mov word ptr [ebp+0x60],ax
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block167

 Block165:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block167

 Block166:
	lea ecx,[ebp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block167:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x50]
	push edx
	call ebx
	lea eax,[ebp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block169

 Block168:
	push eax
	call _com_issue_error

 Block169:
	lea ecx,[ebp+0x60]
	push ecx
	mov byte ptr [ebp-4],0x2E
	call ebx
	lea edx,[ebp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block171

 Block170:
	push eax
	call _com_issue_error

 Block171:
	mov edx,dword ptr [ebp+0x48]
	lea eax,[ebp+0x50]
	push eax
	lea ecx,[ebp+0x60]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	mov bl,0x2F
	push esi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x44]
	mov eax,0xA5
	push 0x63
	sub eax,edi
	mov byte ptr [ebp-4],0x30
	push eax
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0x2E
	jne Block174

 Block172:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block175

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block174:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block175:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x25
	jne Block178

 Block176:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block179

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block179

 Block178:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block179:
	mov edi,dword ptr [ebp+8]
	mov eax,dword ptr [edi+4]
	test eax,eax
	jle Block181

 Block180:
	mov esi,offset _S_UP
	jmp Block183

 Block181:
	mov esi,offset _S_DOWN
	jl Block183

 Block182:
	mov esi,offset _S_SAME

 Block183:
	lea edx,[ebp+0x3C]
	push 0xBCE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea eax,[ebp+0x40]
	push eax
	mov byte ptr [ebp-4],0x31
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x3C]
	add esp,0xC
	mov byte ptr [ebp-4],0x25
	test eax,eax
	je Block185

 Block184:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block185:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x50]
	push ecx
	call esi
	lea edx,[ebp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block187

 Block186:
	push eax
	call _com_issue_error

 Block187:
	lea eax,[ebp+0x60]
	push eax
	mov byte ptr [ebp-4],0x32
	call esi
	lea ecx,[ebp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block189

 Block188:
	push eax
	call _com_issue_error

 Block189:
	push 0
	push 0
	lea edx,[ebp+0x50]
	push edx
	mov edx,dword ptr [ebp+0x40]
	lea eax,[ebp+0x60]
	push eax
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	mov bl,0x33
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x34
	jne Block191

 Block190:
	push 0x80004003
	call _com_issue_error

 Block191:
	lea eax,[ebp-0x80]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x35
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x10]
	mov dword ptr [ebp+0x10],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block194

 Block192:
	cmp eax,0x80004002
	je Block194

 Block193:
	push eax
	call _com_issue_error

 Block194:
	cmp word ptr [ebp-0x80],8
	mov byte ptr [ebp-4],0x37
	jne Block201

 Block195:
	mov eax,dword ptr [ebp-0x78]
	xor ecx,ecx
	mov word ptr [ebp-0x80],cx
	test eax,eax
	je Block197

 Block196:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block197:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block198:
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0x38
	jne Block202

 Block199:
	xor eax,eax
	mov word ptr [ebp+0x60],ax
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block203

 Block200:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block203

 Block201:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x80]
	push edx
	call ebx
	jmp Block198

 Block202:
	lea ecx,[ebp+0x60]
	push ecx
	call ebx

 Block203:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x39
	jne Block206

 Block204:
	mov eax,dword ptr [ebp+0x58]
	xor edx,edx
	mov word ptr [ebp+0x50],dx
	test eax,eax
	je Block207

 Block205:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block207

 Block206:
	lea eax,[ebp+0x50]
	push eax
	call ebx

 Block207:
	mov ecx,3
	mov word ptr [ebp+0x28],cx
	mov dword ptr [ebp+0x30],0xFF
	mov ecx,dword ptr [edi+4]
	mov eax,dword ptr [ebp+0x10]
	neg ecx
	sbb ecx,ecx
	lea edx,[ebp+0x28]
	push edx
	and ecx,0xFFFFFFFC
	push eax
	add ecx,0x69
	push ecx
	mov ecx,dword ptr [ebp+0x44]
	push 0xAA
	mov byte ptr [ebp-4],0x3A
	call IWzCanvas::Copy
	cmp word ptr [ebp+0x28],8
	mov byte ptr [ebp-4],0x39
	jne Block210

 Block208:
	mov eax,dword ptr [ebp+0x30]
	xor edx,edx
	mov word ptr [ebp+0x28],dx
	test eax,eax
	je Block211

 Block209:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block211

 Block210:
	lea eax,[ebp+0x28]
	push eax
	call ebx

 Block211:
	lea ecx,[ebp+0x3C]
	push 0xBCC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [edi+8]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp+0x40]
	push eax
	mov byte ptr [ebp-4],0x3B
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x3C]
	add esp,0xC
	mov byte ptr [ebp-4],0x39
	test eax,eax
	je Block213

 Block212:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block213:
	lea ecx,[ebp+0x28]
	push ecx
	call esi
	lea edx,[ebp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block215

 Block214:
	push eax
	call _com_issue_error

 Block215:
	mov edi,dword ptr [ebp+0x40]
	lea eax,[ebp+0x28]
	push eax
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	mov bl,0x3C
	push edi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x3D
	test ecx,ecx
	jne Block217

 Block216:
	push 0x80004003
	call _com_issue_error

 Block217:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x28],8
	mov esi,eax
	mov byte ptr [ebp-4],0x39
	jne Block220

 Block218:
	mov eax,dword ptr [ebp+0x30]
	xor ecx,ecx
	mov word ptr [ebp+0x28],cx
	test eax,eax
	je Block221

 Block219:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block221

 Block220:
	lea edx,[ebp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block221:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x14]
	push eax
	call ebx
	lea ecx,[ebp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block223

 Block222:
	push eax
	call _com_issue_error

 Block223:
	lea edx,[ebp+0x28]
	push edx
	mov byte ptr [ebp-4],0x3E
	call ebx
	lea eax,[ebp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block225

 Block224:
	push eax
	call _com_issue_error

 Block225:
	mov eax,dword ptr [ebp+0x48]
	lea ecx,[ebp+0x14]
	push ecx
	lea edx,[ebp+0x28]
	push edx
	push eax
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	mov bl,0x3F
	push edi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov ecx,0x73
	sub ecx,esi
	push 0x87
	push ecx
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x40
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x28],8
	mov byte ptr [ebp-4],0x3E
	jne Block228

 Block226:
	mov eax,dword ptr [ebp+0x30]
	xor edx,edx
	mov word ptr [ebp+0x28],dx
	test eax,eax
	je Block229

 Block227:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block229

 Block228:
	lea eax,[ebp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block229:
	cmp word ptr [ebp+0x14],8
	mov byte ptr [ebp-4],0x39
	jne Block232

 Block230:
	mov eax,dword ptr [ebp+0x1C]
	xor ecx,ecx
	mov word ptr [ebp+0x14],cx
	test eax,eax
	je Block233

 Block231:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block233

 Block232:
	lea edx,[ebp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block233:
	mov eax,0x20
	call __chkstk
	mov eax,dword ptr [ebp+8]
	mov eax,dword ptr [eax+0xC]
	cdq
	mov ecx,esp
	xor eax,edx
	push 0xA
	sub eax,edx
	push ecx
	push eax
	call __itow
	add esp,0xC
	lea ecx,[ebp+0x14]
	push ecx
	mov esi,eax
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block235

 Block234:
	push eax
	call _com_issue_error

 Block235:
	lea eax,[ebp+0x14]
	push eax
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	mov bl,0x41
	push esi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x42
	test ecx,ecx
	jne Block237

 Block236:
	push 0x80004003
	call _com_issue_error

 Block237:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x14],8
	mov edi,eax
	mov byte ptr [ebp-4],0x39
	jne Block240

 Block238:
	mov eax,dword ptr [ebp+0x1C]
	xor ecx,ecx
	mov word ptr [ebp+0x14],cx
	test eax,eax
	je Block241

 Block239:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block241

 Block240:
	lea edx,[ebp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block241:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x28]
	push eax
	call ebx
	lea ecx,[ebp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block243

 Block242:
	push eax
	call _com_issue_error

 Block243:
	lea edx,[ebp+0x14]
	push edx
	mov byte ptr [ebp-4],0x43
	call ebx
	lea eax,[ebp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block245

 Block244:
	push eax
	call _com_issue_error

 Block245:
	mov eax,dword ptr [ebp+0x48]
	lea ecx,[ebp+0x28]
	push ecx
	lea edx,[ebp+0x14]
	push edx
	push eax
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	mov bl,0x44
	push esi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov ecx,0xA5
	sub ecx,edi
	push 0x87
	push ecx
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x45
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x14],8
	mov byte ptr [ebp-4],0x43
	jne Block248

 Block246:
	mov eax,dword ptr [ebp+0x1C]
	xor edx,edx
	xor esi,esi
	mov word ptr [ebp+0x14],dx
	cmp eax,esi
	je Block249

 Block247:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block249

 Block248:
	lea eax,[ebp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]
	xor esi,esi

 Block249:
	cmp word ptr [ebp+0x28],8
	mov byte ptr [ebp-4],0x39
	jne Block252

 Block250:
	mov eax,dword ptr [ebp+0x30]
	xor ecx,ecx
	mov word ptr [ebp+0x28],cx
	cmp eax,esi
	je Block253

 Block251:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block253

 Block252:
	lea edx,[ebp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block253:
	push esi
	push 3
	lea ecx,[ebp+0x38]
	mov dword ptr [ebp+0x38],esi
	call ZXString16::GetBuffer
	mov ecx,dword ptr [_S_D__3]
	mov dword ptr [eax],ecx
	mov dx,word ptr [_S_D__3+4]
	push 3
	lea ecx,[ebp+0x38]
	mov word ptr [eax+4],dx
	call ZXString16::ReleaseBuffer
	lea eax,[ebp+0x4C]
	push 0xBCE
	push eax
	mov byte ptr [ebp-4],0x46
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x3C]
	mov bl,0x47
	push edx
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call ZXString16::op_add_1
	push eax
	lea ecx,[ebp+0x40]
	mov byte ptr [ebp-4],0x48
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],bl
	cmp eax,esi
	je Block255

 Block254:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block255:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x46
	cmp eax,esi
	je Block257

 Block256:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block257:
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x39
	cmp eax,esi
	je Block259

 Block258:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block259:
	mov eax,dword ptr [ebp-0x30]
	mov ecx,dword ptr [eax+0x3D]
	mov edx,dword ptr [ebp+0x24]
	push ecx
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	cwde
	cdq
	mov ecx,0x3E8
	idiv ecx
	mov eax,0x51EB851F
	lea ecx,[ebp+0x40]
	imul edx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,eax
	sub edx,5
	neg edx
	sbb edx,edx
	and edx,eax
	mov eax,dword ptr [ebp+0x40]
	push edx
	push offset _S_JOB__1
	push eax
	push ecx
	call ZXString16::Format
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0x18
	lea edx,[ebp+0x28]
	push edx
	call edi
	lea eax,[ebp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block261

 Block260:
	push eax
	call _com_issue_error

 Block261:
	lea ecx,[ebp+0x14]
	push ecx
	mov byte ptr [ebp-4],0x49
	call edi
	lea edx,[ebp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block263

 Block262:
	push eax
	call _com_issue_error

 Block263:
	mov edx,dword ptr [ebp+0x40]
	push esi
	push esi
	lea eax,[ebp+0x28]
	push eax
	lea ecx,[ebp+0x14]
	push ecx
	push ecx
	mov dword ptr [ebp+0x24],esp
	mov ecx,esp
	mov bl,0x4A
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x4B
	cmp dword ptr [_D_G_RM],esi
	jne Block265

 Block264:
	push 0x80004003
	call _com_issue_error

 Block265:
	lea eax,[ebp-0x70]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x4C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x38]
	mov dword ptr [ebp+0x38],esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block268

 Block266:
	cmp eax,0x80004002
	je Block268

 Block267:
	push eax
	call _com_issue_error

 Block268:
	mov ebx,8
	mov byte ptr [ebp-4],0x4E
	cmp word ptr [ebp-0x70],bx
	jne Block271

 Block269:
	mov eax,dword ptr [ebp-0x68]
	xor ecx,ecx
	mov word ptr [ebp-0x70],cx
	cmp eax,esi
	je Block272

 Block270:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block272

 Block271:
	lea edx,[ebp-0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block272:
	mov byte ptr [ebp-4],0x4F
	cmp word ptr [ebp+0x14],bx
	jne Block275

 Block273:
	xor eax,eax
	mov word ptr [ebp+0x14],ax
	mov eax,dword ptr [ebp+0x1C]
	cmp eax,esi
	je Block276

 Block274:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block276

 Block275:
	lea ecx,[ebp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block276:
	mov byte ptr [ebp-4],0x50
	cmp word ptr [ebp+0x28],bx
	jne Block279

 Block277:
	mov eax,dword ptr [ebp+0x30]
	xor edx,edx
	mov word ptr [ebp+0x28],dx
	cmp eax,esi
	je Block280

 Block278:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block280

 Block279:
	lea eax,[ebp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block280:
	mov ecx,3
	mov word ptr [ebp-0x2C],cx
	mov dword ptr [ebp-0x24],0xFF
	mov ebx,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x51
	cmp ebx,esi
	jne Block282

 Block281:
	push 0x80004003
	call _com_issue_error

 Block282:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[ebp+0x3C]
	push eax
	push ebx
	mov dword ptr [ebp+0x3C],esi
	call ecx
	cmp eax,esi
	jge Block284

 Block283:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block284:
	mov ecx,dword ptr [ebp+0x44]
	lea edx,[ebp-0x2C]
	push edx
	push ebx
	mov eax,0x53
	sub eax,dword ptr [ebp+0x3C]
	push 0x78
	push eax
	call IWzCanvas::Copy
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x50
	jne Block287

 Block285:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	cmp eax,esi
	je Block288

 Block286:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block288

 Block287:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block288:
	mov eax,dword ptr [ebp+8]
	mov eax,dword ptr [eax+0xC]
	cmp eax,esi
	jle Block290

 Block289:
	mov esi,offset _S_UP
	jmp Block292

 Block290:
	mov esi,offset _S_DOWN
	jl Block292

 Block291:
	mov esi,offset _S_SAME

 Block292:
	lea ecx,[ebp+0x24]
	push 0xBCE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[ebp+0x40]
	push edx
	mov byte ptr [ebp-4],0x52
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x24]
	add esp,0xC
	mov byte ptr [ebp-4],0x50
	test eax,eax
	je Block294

 Block293:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block294:
	lea eax,[ebp-0x1C]
	push eax
	call edi
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block296

 Block295:
	push eax
	call _com_issue_error

 Block296:
	lea edx,[ebp-0x2C]
	push edx
	mov byte ptr [ebp-4],0x53
	call edi
	lea eax,[ebp-0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block298

 Block297:
	push eax
	call _com_issue_error

 Block298:
	mov eax,dword ptr [ebp+0x40]
	push 0
	push 0
	lea ecx,[ebp-0x1C]
	push ecx
	lea edx,[ebp-0x2C]
	push edx
	push ecx
	mov dword ptr [ebp+0x24],esp
	mov ecx,esp
	mov bl,0x54
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x55
	jne Block300

 Block299:
	push 0x80004003
	call _com_issue_error

 Block300:
	lea ecx,[ebp-0x90]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x56
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x10]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block303

 Block301:
	cmp eax,0x80004002
	je Block303

 Block302:
	push eax
	call _com_issue_error

 Block303:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x90],di
	jne Block310

 Block304:
	mov eax,dword ptr [ebp-0x88]
	xor edx,edx
	mov word ptr [ebp-0x90],dx
	test eax,eax
	je Block306

 Block305:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block306:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block307:
	mov byte ptr [ebp-4],0x53
	cmp word ptr [ebp-0x2C],di
	jne Block311

 Block308:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block312

 Block309:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block312

 Block310:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x90]
	push eax
	call ebx
	jmp Block307

 Block311:
	lea edx,[ebp-0x2C]
	push edx
	call ebx

 Block312:
	mov byte ptr [ebp-4],0x50
	cmp word ptr [ebp-0x1C],di
	jne Block315

 Block313:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block316

 Block314:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block316

 Block315:
	lea ecx,[ebp-0x1C]
	push ecx
	call ebx

 Block316:
	mov edx,3
	mov word ptr [ebp-0x1C],dx
	mov dword ptr [ebp-0x14],0xFF
	mov ecx,dword ptr [ebp+8]
	mov edx,dword ptr [ecx+0xC]
	mov esi,dword ptr [ebp+0x10]
	mov ecx,dword ptr [ebp+0x44]
	neg edx
	sbb edx,edx
	lea eax,[ebp-0x1C]
	push eax
	and edx,0xFFFFFFFC
	push esi
	add edx,0x8D
	push edx
	push 0xAA
	mov byte ptr [ebp-4],0x57
	call IWzCanvas::Copy
	mov byte ptr [ebp-4],0x50
	cmp word ptr [ebp-0x1C],di
	jne Block319

 Block317:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block320

 Block318:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block320

 Block319:
	lea ecx,[ebp-0x1C]
	push ecx
	call ebx

 Block320:
	mov eax,dword ptr [ebp+0x38]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0x39
	call eax
	mov byte ptr [ebp-4],0x25
	test esi,esi
	je Block322

 Block321:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block322:
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block324

 Block323:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block324:
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block326

 Block325:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block326:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block328

 Block327:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block328:
	mov eax,dword ptr [ebp]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block330

 Block329:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block330:
	mov eax,dword ptr [ebp+4]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block332

 Block331:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block332:
	mov eax,dword ptr [ebp+0x44]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0xA0]
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
	ret 4
}
}
// CUIAvatar::GetSelectedIdx
_SUB_EXCEPTION_HANDLER(1E1120)
__SUB_CLASS_THIS(001E1120, __thiscall, 139085,  CUIAvatar, long, NakedParam<tagPOINT>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E1120
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
	mov edi,ecx
	mov dword ptr [esp+0x14],edi
	xor ebx,ebx
	xor edx,edx
	lea eax,[edi+0xC4]
	mov dword ptr [esp+0x18],edx
	lea ebp,[edi+0xFC]
	mov dword ptr [esp+0x1C],eax

 Block1:
	mov ecx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [ecx]
	cmp ecx,ebx
	je Block14

 Block2:
	push ebx
	lea edx,[esp+0x4C]
	push edx
	call CAvatar::GetBodyRect
	lea eax,[esp+0x30]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x60],ebx
	cmp esi,ebx
	je Block38

 Block3:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x20]
	push edx
	push esi
	mov dword ptr [esp+0x28],ebx
	call eax
	cmp eax,ebx
	jge Block5

 Block4:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block5:
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x68]
	mov edx,dword ptr [esp+0x20]
	lea edi,[edx+ecx]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp eax,ebx
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov ecx,dword ptr [esp+0x14]
	lea eax,[esp+0x34]
	push eax
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x60],1
	cmp esi,ebx
	je Block38

 Block8:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[esp+0x20]
	push edx
	push esi
	mov dword ptr [esp+0x28],ebx
	call eax
	cmp eax,ebx
	jge Block10

 Block9:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x6C]
	mov edx,dword ptr [esp+0x20]
	lea esi,[edx+ecx]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	push esi
	push edi
	lea eax,[esp+0x50]
	push eax
	call PtInRect
	test eax,eax
	je Block34

 Block13:
	mov ecx,dword ptr [esp+0x14]
	mov ecx,dword ptr [ecx+0x144]
	mov edx,dword ptr [esp+0x18]
	lea eax,[edx+ecx*2]
	add eax,ecx
	jmp Block37

 Block14:
	mov esi,dword ptr [ebp]
	cmp esi,ebx
	je Block35

 Block15:
	mov eax,dword ptr [edi+0x144]
	mov ecx,dword ptr [edi+0x14C]
	add ecx,dword ptr [edi+0x148]
	lea edx,[edx+eax*2]
	add edx,eax
	cmp edx,ecx
	jge Block35

 Block16:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x68]
	lea ecx,[esp+0x20]
	push ecx
	push esi
	mov dword ptr [esp+0x28],ebx
	call edx
	cmp eax,ebx
	jge Block18

 Block17:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	mov esi,dword ptr [ebp]
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x38],eax
	cmp esi,ebx
	je Block38

 Block19:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x20]
	push edx
	push esi
	mov dword ptr [esp+0x28],ebx
	call eax
	cmp eax,ebx
	jge Block21

 Block20:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block21:
	mov esi,dword ptr [ebp]
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x3C],ecx
	cmp esi,ebx
	je Block38

 Block22:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x68]
	lea eax,[esp+0x20]
	push eax
	push esi
	mov dword ptr [esp+0x28],ebx
	call ecx
	cmp eax,ebx
	jge Block24

 Block23:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block24:
	mov esi,dword ptr [ebp]
	mov edi,dword ptr [esp+0x20]
	cmp esi,ebx
	je Block38

 Block25:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xB8]
	lea eax,[esp+0x24]
	push eax
	push esi
	mov dword ptr [esp+0x2C],ebx
	call ecx
	cmp eax,ebx
	jge Block27

 Block26:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	mov edx,dword ptr [esp+0x24]
	mov esi,dword ptr [ebp]
	add edx,edi
	mov dword ptr [esp+0x40],edx
	cmp esi,ebx
	je Block38

 Block28:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x70]
	lea ecx,[esp+0x28]
	push ecx
	push esi
	mov dword ptr [esp+0x30],ebx
	call edx
	cmp eax,ebx
	jge Block30

 Block29:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block30:
	mov esi,dword ptr [ebp]
	mov edi,dword ptr [esp+0x28]
	cmp esi,ebx
	je Block38

 Block31:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xC0]
	lea ecx,[esp+0x2C]
	push ecx
	push esi
	mov dword ptr [esp+0x34],ebx
	call edx
	cmp eax,ebx
	jge Block33

 Block32:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block33:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x6C]
	mov edx,dword ptr [esp+0x68]
	add eax,edi
	push ecx
	mov dword ptr [esp+0x48],eax
	push edx
	lea eax,[esp+0x40]
	push eax
	call PtInRect
	test eax,eax
	jne Block39

 Block34:
	mov edi,dword ptr [esp+0x14]

 Block35:
	mov edx,dword ptr [esp+0x18]
	add dword ptr [esp+0x1C],8
	inc edx
	add ebp,4
	cmp edx,3
	mov dword ptr [esp+0x18],edx
	jl Block1

 Block36:
	or eax,0xFFFFFFFF

 Block37:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 8

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+0x144]
	mov edx,dword ptr [esp+0x18]
	lea eax,[edx+ecx*2]
	add eax,ecx
	jmp Block37
}
}
// CUICharSelect::CUICharSelect
_SUB_EXCEPTION_HANDLER(1E2040)
__SUB_CLASS_THIS(001E2040, __thiscall, 139011,  CUICharSelect, void, CLogin*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E2040
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
	call CWnd::_ctor_default
	lea eax,[esi+0x80]
	mov dword ptr [esp+0x18],0
	test eax,eax
	je Block2

 Block1:
	lea ecx,[eax-0x80]
	mov dword ptr [TSingleton<CUICharSelect>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUICharSelect>::ms_pInstance],0

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUICharSelect::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUICharSelect::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUICharSelect::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax],0
	mov edi,dword ptr [esp+0x20]
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 3
	push 8
	lea edx,[esi+0x8C]
	push edx
	mov byte ptr [esp+0x2C],2
	mov dword ptr [esi+0x84],edi
	mov dword ptr [esi+0x88],0
	call __eh_vector_ctor_iterator
	push 0
	push 1
	push edi
	push 0
	push 0xA
	push 0x83
	push 0x65
	push 0xFFFFFAB1
	push 0xFF
	mov ecx,esi
	mov byte ptr [esp+0x3C],3
	call CWnd::CreateWnd
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
// CUICharSelect::OnCreate
_SUB_EXCEPTION_HANDLER(1E8550)
__SUB_CLASS_THIS(001E8550, __thiscall, 139014,  CUICharSelect, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E8550
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
	mov esi,ecx
	mov eax,dword ptr [esp+0x3C]
	xor ebx,ebx
	mov dword ptr [esi+0x84],eax
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	lea ecx,[esp+0x3C]
	push 0x553
	push ecx
	mov dword ptr [esp+0x3C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x3C],eax
	mov byte ptr [esp+0x34],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block15

 Block6:
	add eax,8
	cmp eax,ebx
	je Block15

 Block7:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block9

 Block8:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block9:
	mov eax,dword ptr [esi+0x90]
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x90]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0xFFFFFFFE
	push 4
	push 0x3E8
	push esi
	call eax
	lea ecx,[esp+0x3C]
	push 0x554
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x3C],eax
	mov byte ptr [esp+0x34],4
	cmp eax,ebx
	je Block16

 Block14:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block17

 Block15:
	xor edi,edi
	jmp Block9

 Block16:
	xor eax,eax

 Block17:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block27

 Block18:
	lea edi,[eax+8]
	cmp edi,ebx
	je Block27

 Block19:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block21

 Block20:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block21:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block23

 Block22:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [esi+0x98]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0x24
	push 4
	push 0x3E9
	push esi
	call eax
	lea ecx,[esp+0x3C]
	push 0x555
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x3C],eax
	mov byte ptr [esp+0x34],6
	cmp eax,ebx
	je Block28

 Block26:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block29

 Block27:
	xor edi,edi
	jmp Block21

 Block28:
	xor eax,eax

 Block29:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block42

 Block30:
	lea edi,[eax+8]
	cmp edi,ebx
	je Block42

 Block31:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block33

 Block32:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block33:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block35

 Block34:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block35:
	mov ecx,dword ptr [esi+0xA0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0x55
	push 4
	push 0x3EA
	push esi
	call eax
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp eax,ebx
	je Block39

 Block36:
	cmp dword ptr [eax+0x2090],ebx
	jne Block39

 Block37:
	cmp dword ptr [eax+0x2094],ebx
	je Block39

 Block38:
	mov ecx,esi
	call CUICharSelect::MakeAdvice

 Block39:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block41:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 4

 Block42:
	xor edi,edi
	jmp Block33
}
}
// CUIAvatarVAC::SetSelection
__SUB_CLASS_THIS(001ED2A0, __thiscall, 139152,  CUIAvatarVAC, void, long) {
__asm {

 Block0:
	push ebp
	mov ebp,dword ptr [esp+8]
	push esi
	push edi
	mov esi,ecx
	test ebp,ebp
	jl Block4

 Block1:
	mov eax,dword ptr [esi+0x80]
	cmp ebp,dword ptr [eax+0x160]
	jge Block4

 Block2:
	mov ecx,ebp
	imul ecx,0xF9
	cmp dword ptr [ecx+esi+0x18C],0
	je Block4

 Block3:
	mov ecx,esi
	mov dword ptr [eax+0x1D0],ebp
	call CUIAvatarVAC::GetScrollBarIdx
	lea edx,[eax+eax*2]
	mov eax,ebp
	sub eax,edx
	push eax
	jmp Block5

 Block4:
	mov ecx,dword ptr [esi+0x80]
	mov dword ptr [ecx+0x1D0],0xFFFFFFFF
	push 0xFFFFFFFF

 Block5:
	mov ecx,dword ptr [esi+0x80]
	call CLogin::OnSelectedCharChanged
	mov edx,dword ptr [esi+0x80]
	xor edi,edi
	cmp dword ptr [edx+0x160],edi
	jle Block11

 Block6:
	push ebx
	lea ebx,[esi+0x3BEC]

 Block7:
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	je Block9

 Block8:
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	xor edx,edx
	cmp edi,ebp
	setne dl
	push 0
	inc edx
	add edx,edx
	push edx
	call eax

 Block9:
	mov ecx,dword ptr [esi+0x80]
	inc edi
	add ebx,8
	cmp edi,dword ptr [ecx+0x160]
	jl Block7

 Block10:
	pop ebx

 Block11:
	mov ecx,esi
	call CUIAvatarVAC::ResetAvatarPosition
	mov ecx,esi
	call CUIAvatarVAC::MakeSelectedCharacterNameTag
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebp
	ret 4
}
}
// CUIAvatarVAC::DrawSelectedNameTag
_SUB_EXCEPTION_HANDLER(1E36E0)
__SUB_CLASS_THIS(001E36E0, __thiscall, 139152,  CUIAvatarVAC, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E36E0
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
	mov ebp,ecx
	mov edi,dword ptr [esp+0x64]
	xor ebx,ebx
	cmp edi,0xFFFFFFFF
	jne Block2

 Block1:
	xor edi,edi

 Block2:
	mov eax,3
	mov word ptr [esp+0x34],ax
	mov dword ptr [esp+0x3C],ebx
	mov ecx,dword ptr [ebp+0x3EB8]
	mov dword ptr [esp+0x5C],ebx
	cmp ecx,ebx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x5C],2
	jne Block7

 Block5:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,ebx
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov esi,dword ptr [ebp+0x3EB8]
	cmp esi,ebx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xB8]
	lea ecx,[esp+0x64]
	push ecx
	push esi
	mov dword ptr [esp+0x6C],ebx
	call edx
	cmp eax,ebx
	jge Block12

 Block11:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block12:
	mov esi,dword ptr [ebp+0x3EB8]
	cmp esi,ebx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xC0]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block16

 Block15:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block16:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	imul edi,0xF9
	lea edx,[esp+0x24]
	push edx
	push ecx
	lea edi,[edi+ebp+0x190]
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edi
	mov byte ptr [esp+0x68],3
	mov dword ptr [esp+0x28],edi
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x3FAC]
	mov byte ptr [esp+0x64],4
	cmp ecx,ebx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov byte ptr [esp+0x64],3
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x5C],2
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebx
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov esi,dword ptr [esp+0x18]
	cmp esi,ebx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov eax,dword ptr [esp+0x14]
	mov ebx,dword ptr [esp+0x64]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x8C]
	push 0xFFFFFF
	push eax
	push ebx
	push 0
	push 0
	push esi
	call ecx
	test eax,eax
	jge Block28

 Block27:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block28:
	add ebx,0xFFFFFFF6
	xor edi,edi
	test ebx,ebx
	jle Block37

 Block29:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block17

 Block30:
	mov ebx,dword ptr [esp+0x24]
	mov ecx,dword ptr [ebp+0x3FC4]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x3C]
	push ecx
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x44]
	push 0
	push edi
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [edx+0x80]
	push esi
	mov byte ptr [esp+0x7C],5
	call eax
	test eax,eax
	jge Block32

 Block31:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block32:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x5C],2
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
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
	mov ebx,dword ptr [esp+0x64]
	add edi,9
	add ebx,0xFFFFFFF6
	cmp edi,ebx
	jl Block29

 Block37:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block39

 Block38:
	push eax
	call _com_issue_error

 Block39:
	mov edi,dword ptr [esp+0x24]
	mov ecx,dword ptr [ebp+0x3FC0]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x38]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x3C]
	push ecx
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x44]
	push 0
	push 0
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x80]
	push esi
	mov byte ptr [esp+0x7C],6
	call eax
	test eax,eax
	jge Block41

 Block40:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block41:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x5C],2
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	mov edi,dword ptr [esp+0x24]
	mov ecx,dword ptr [ebp+0x3FC8]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x38]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x3C]
	push ecx
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x44]
	push 0
	push ebx
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x80]
	push esi
	mov byte ptr [esp+0x7C],7
	call eax
	test eax,eax
	jge Block49

 Block48:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block49:
	mov ebx,8
	mov byte ptr [esp+0x5C],2
	cmp word ptr [esp+0x24],bx
	jne Block52

 Block50:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x44]
	push eax
	call edi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x60],8
	call edi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block57

 Block56:
	push eax
	call _com_issue_error

 Block57:
	mov eax,dword ptr [ebp+0x3FB0]
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push eax
	mov eax,dword ptr [esp+0x28]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x70],9
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x74]
	sub eax,dword ptr [esp+0x30]
	push 2
	cdq
	sub eax,edx
	sar eax,1
	dec eax
	mov byte ptr [esp+0x70],0xA
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x74],9
	call IWzCanvas::DrawTextA
	mov byte ptr [esp+0x5C],8
	cmp word ptr [esp+0x24],bx
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov byte ptr [esp+0x5C],2
	cmp word ptr [esp+0x44],bx
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [esp+0x60],0xFFFFFFFF
	call eax
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 4
}
}
// CUIAvatarVAC::MakeWorldIcon
_SUB_EXCEPTION_HANDLER(1E1B60)
__SUB_CLASS_THIS(001E1B60, __thiscall, 139152,  CUIAvatarVAC, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E1B60
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
	mov edi,ecx
	mov eax,dword ptr [edi+0x80]
	mov ecx,dword ptr [eax+0x17C]
	mov ebp,dword ptr [esp+0x64]
	mov ebx,dword ptr [ZImports::_VariantInit]
	mov esi,dword ptr [ecx+ebp*4]
	lea edx,[esp+0x24]
	push edx
	call ebx
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea ecx,[esp+0x14]
	push ecx
	mov dword ptr [esp+0x60],0
	call ebx
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	cmp dword ptr [edi+esi*4+0x3FCC],0
	mov ecx,dword ptr [_D_G_GR]
	setne al
	mov byte ptr [esp+0x5C],1
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x24]
	push edx
	lea edx,[esp+0x18]
	push edx
	movzx eax,al
	push eax
	push 0x14
	push 0x14
	push 0
	push 0xFFFFFF9C
	lea edx,[esp+0x80]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+ebp*4+0x3EBC]
	cmp esi,eax
	je Block11

 Block7:
	mov dword ptr [edi+ebp*4+0x3EBC],eax
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
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block13:
	mov esi,8
	mov byte ptr [esp+0x5C],0
	cmp word ptr [esp+0x14],si
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
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x24],si
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
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov esi,dword ptr [edi+ebp*4+0x3EBC]
	test esi,esi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block25

 Block24:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	lea ecx,[esp+0x64]
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,2
	mov edx,0xD
	mov dword ptr [esp+0x5C],ebx
	mov word ptr [esp+0x14],dx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block27:
	mov esi,dword ptr [edi+ebp*4+0x3EBC]
	mov byte ptr [esp+0x5C],3
	test esi,esi
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
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
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block31

 Block30:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block31:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x5C],bl
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov eax,dword ptr [esp+0x64]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	mov esi,dword ptr [edi+ebp*4+0x3EBC]
	test esi,esi
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push esi
	call ecx
	test eax,eax
	jge Block41

 Block40:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block41:
	lea edx,[esp+0x64]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,4
	mov ecx,0xD
	mov dword ptr [esp+0x5C],ebx
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block43

 Block42:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block43:
	mov esi,dword ptr [edi+ebp*4+0x3EBC]
	mov byte ptr [esp+0x5C],5
	test esi,esi
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
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
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block47

 Block46:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block47:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x5C],bl
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov eax,dword ptr [esp+0x64]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	test eax,eax
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x44]
	push eax
	call esi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	lea edx,[esp+0x34]
	mov ebx,6
	push edx
	mov dword ptr [esp+0x60],ebx
	call esi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block57

 Block56:
	push eax
	call _com_issue_error

 Block57:
	mov ecx,dword ptr [edi+ebp*4+0x3EBC]
	mov byte ptr [esp+0x5C],7
	test ecx,ecx
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	mov eax,0x55555556
	imul ebp
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[esp+0x44]
	push edx
	lea edx,[esp+0x38]
	push edx
	mov edx,eax
	imul edx,0x75
	add edx,0x9B
	push edx
	lea eax,[eax+eax*2]
	mov edx,ebp
	sub edx,eax
	imul edx,0x75
	add edx,0x1A
	push edx
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x34],si
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x44],si
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block67:
	push ebp
	mov ecx,edi
	call CUIAvatarVAC::DrawWorldIcon
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 4
}
}
// CUIAvatarVAC::~CUIAvatarVAC
_SUB_EXCEPTION_HANDLER(1E2790)
__SUB_CLASS_THIS0(001E2790, __thiscall, 139144,  CUIAvatarVAC, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E2790
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIAvatarVAC::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIAvatarVAC::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIAvatarVAC::`vftable'{for `ZRefCounted'}
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 0x24
	push 4
	lea eax,[esi+0x3FCC]
	push eax
	mov dword ptr [esp+0x2C],0xB
	call __eh_vector_dtor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 6
	push 4
	lea ecx,[esi+0x3FB4]
	push ecx
	mov byte ptr [esp+0x2C],0xA
	call __eh_vector_dtor_iterator
	push offset _x_com_ptr<IWzFont>::~_x_com_ptr<IWzFont>
	push 2
	push 4
	lea edx,[esi+0x3FAC]
	push edx
	mov byte ptr [esp+0x2C],9
	call __eh_vector_dtor_iterator
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push 0x3C
	push 4
	lea eax,[esi+0x3EBC]
	push eax
	mov byte ptr [esp+0x2C],8
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0x3EB8]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],7
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push 0x3C
	push 4
	lea eax,[esi+0x3DC8]
	push eax
	mov byte ptr [esp+0x2C],6
	call __eh_vector_dtor_iterator
	push offset ZRef<CAvatar>::~ZRef<CAvatar>
	push 0x3C
	push 8
	lea ecx,[esi+0x3BE8]
	push ecx
	mov byte ptr [esp+0x2C],5
	call __eh_vector_dtor_iterator
	push offset GW_CharacterStat::~GW_CharacterStat
	push 0x3C
	push 0xF9
	lea edx,[esi+0x18C]
	push edx
	mov byte ptr [esp+0x2C],4
	call __eh_vector_dtor_iterator
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x8C]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0x84]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIAvatarVAC>::ms_pInstance],ebx
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CWnd::~CWnd
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
// CUIAvatarVAC::OnSetFocus
__SUB_CLASS_THIS(001E0170, __thiscall, 139149,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	test edx,edx
	je Block2

 Block1:
	lea eax,[ecx-4]
	neg eax
	push esi
	mov esi,dword ptr [ecx+0x7C]
	sbb eax,eax
	and eax,ecx
	mov dword ptr [esi+0x1C8],eax
	pop esi

 Block2:
	mov dword ptr [esp+4],edx
	jmp  CWnd::OnSetFocus
}
}
// CUIAvatarVAC::DrawNameTag
_SUB_EXCEPTION_HANDLER(1E2EC0)
__SUB_CLASS_THIS(001E2EC0, __thiscall, 139158,  CUIAvatarVAC, void, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E2EC0
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
	mov ebx,ecx
	call CUIAvatarVAC::GetScrollBarIdx
	mov edi,dword ptr [esp+0x70]
	lea eax,[eax+eax*2]
	mov esi,edi
	sub esi,eax
	call CUIAvatarVAC::GetScrollBarIdx
	lea ecx,[eax+eax*2]
	mov edx,edi
	sub edx,ecx
	js Block100

 Block1:
	mov ecx,ebx
	call CUIAvatarVAC::GetScrollBarIdx
	lea eax,[eax+eax*2]
	mov ecx,edi
	sub ecx,eax
	cmp ecx,8
	jg Block100

 Block2:
	mov eax,0x55555556
	imul esi
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*2]
	imul eax,0x75
	sub esi,edx
	add eax,0x96
	imul esi,0x75
	mov dword ptr [esp+0x28],eax
	mov eax,edi
	imul eax,0xF9
	add esi,0x4A
	mov dword ptr [esp+0x2C],esi
	xor ebp,ebp
	lea esi,[eax+ebx+0x190]
	mov dword ptr [esp+0x14],ebp
	cmp esi,ebp
	je Block6

 Block3:
	mov eax,esi
	lea edx,[eax+1]
	lea esp,[esp]

 Block4:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block4

 Block5:
	sub eax,edx
	mov ebp,eax
	push ebp
	push esi
	push 0
	push ebp
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebp
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	xor ebp,ebp

 Block6:
	mov ecx,3
	mov dword ptr [esp+0x68],ebp
	mov word ptr [esp+0x40],cx
	mov dword ptr [esp+0x48],ebp
	mov ecx,dword ptr [ebx+edi*4+0x3DC8]
	mov byte ptr [esp+0x68],1
	cmp ecx,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x28]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x68],3
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	cmp eax,ebp
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov ebp,dword ptr [ebx+edi*4+0x3DC8]
	test ebp,ebp
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0xB8]
	lea ecx,[esp+0x18]
	push ecx
	push ebp
	mov dword ptr [esp+0x20],0
	call edx
	test eax,eax
	jge Block16

 Block15:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebp
	push eax
	call _com_issue_errorex

 Block16:
	mov edi,dword ptr [ebx+edi*4+0x3DC8]
	mov esi,dword ptr [esp+0x18]
	mov dword ptr [esp+0x18],esi
	test edi,edi
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xC0]
	lea ecx,[esp+0x1C]
	push ecx
	push edi
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block20

 Block19:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block20:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	call ebp
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	mov eax,dword ptr [esp+0x14]
	lea edx,[esp+0x30]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x74],4
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebx+0x3FAC]
	mov byte ptr [esp+0x70],5
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov byte ptr [esp+0x70],4
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x30],8
	mov edi,eax
	mov dword ptr [esp+0x20],edi
	mov byte ptr [esp+0x68],3
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
	cmp edi,0x50
	jle Block40

 Block29:
	mov eax,dword ptr [ebx+0x3FAC]
	push 0x50
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block31:
	lea eax,[esp+0x1C]
	push eax
	call format_string_1
	add esp,0xC
	lea ecx,[esp+0x30]
	push ecx
	call ebp
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	mov edx,dword ptr [esp+0x14]
	lea eax,[esp+0x30]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x74],6
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebx+0x3FAC]
	mov byte ptr [esp+0x70],7
	test ecx,ecx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	mov byte ptr [esp+0x70],6
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x30],8
	mov esi,eax
	mov dword ptr [esp+0x20],esi
	mov byte ptr [esp+0x68],3
	jne Block38

 Block36:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	add esi,0x12
	mov dword ptr [esp+0x18],esi

 Block40:
	mov edi,dword ptr [esp+0x24]
	test edi,edi
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	mov eax,dword ptr [esp+0x1C]
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x8C]
	push 0xFFFFFF
	push eax
	push esi
	push 0
	push 0
	push edi
	call ecx
	test eax,eax
	jge Block44

 Block43:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block44:
	lea eax,[esi-0xA]
	xor ebp,ebp
	test eax,eax
	jle Block53

 Block45:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block21

 Block46:
	mov esi,dword ptr [esp+0x30]
	mov edx,dword ptr [edi]
	xor eax,eax
	cmp dword ptr [esp+0x74],eax
	mov byte ptr [esp+0x68],8
	setne al
	sub esp,0x10
	lea ecx,[eax+eax*2]
	mov ecx,dword ptr [ebx+ecx*4+0x3FB8]
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [esp+0x44]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [esp+0x48]
	push ecx
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [esp+0x50]
	push 0
	push ebp
	mov dword ptr [eax+0xC],esi
	mov eax,dword ptr [edx+0x80]
	push edi
	call eax
	test eax,eax
	jge Block48

 Block47:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block48:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x68],3
	jne Block51

 Block49:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov eax,dword ptr [esp+0x18]
	add ebp,9
	add eax,0xFFFFFFF6
	cmp ebp,eax
	jl Block45

 Block53:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	mov esi,dword ptr [esp+0x30]
	xor edx,edx
	cmp dword ptr [esp+0x74],edx
	mov byte ptr [esp+0x68],9
	setne dl
	sub esp,0x10
	mov ebp,edx
	mov edx,dword ptr [edi]
	lea eax,[ebp+ebp*2+0xFED]
	mov ecx,dword ptr [ebx+eax*4]
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [esp+0x44]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [esp+0x48]
	push ecx
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [esp+0x50]
	push 0
	push 0
	mov dword ptr [eax+0xC],esi
	mov eax,dword ptr [edx+0x80]
	push edi
	call eax
	test eax,eax
	jge Block57

 Block56:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block57:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x68],3
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block63

 Block62:
	push eax
	call _com_issue_error

 Block63:
	mov esi,dword ptr [esp+0x30]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [esp+0x44]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [esp+0x48]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [esp+0x4C]
	lea edx,[ebp+ebp*2]
	mov ecx,dword ptr [ebx+edx*4+0x3FBC]
	mov edx,dword ptr [edi]
	mov dword ptr [eax+0xC],esi
	mov esi,dword ptr [esp+0x28]
	push ecx
	push 0
	lea eax,[esi-0xA]
	push eax
	mov eax,dword ptr [edx+0x80]
	push edi
	mov byte ptr [esp+0x88],0xA
	call eax
	test eax,eax
	jge Block65

 Block64:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block65:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x68],3
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block71

 Block70:
	push eax
	call _com_issue_error

 Block71:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x6C],0xB
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block73

 Block72:
	push eax
	call _com_issue_error

 Block73:
	mov ebp,dword ptr [ebx+ebp*4+0x3FAC]
	mov eax,dword ptr [esp+0x14]
	lea ecx,[esp+0x50]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push ebp
	push ecx
	mov dword ptr [esp+0x84],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x7C],0xC
	call _xbstr_t::_ctor_0
	mov eax,esi
	sub eax,dword ptr [esp+0x30]
	push 2
	cdq
	sub eax,edx
	sar eax,1
	dec eax
	mov byte ptr [esp+0x7C],0xD
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x80],0xC
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x68],0xB
	jne Block76

 Block74:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block77:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x68],3
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov edx,dword ptr [esp+0x70]
	mov ebp,dword ptr [ebx+edx*4+0x3DC8]
	mov dword ptr [esp+0x74],ebp
	test ebp,ebp
	je Block83

 Block82:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	push ebp
	call ecx

 Block83:
	mov byte ptr [esp+0x68],0xE
	test ebp,ebp
	je Block96

 Block84:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x30]
	push edx
	call esi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	lea ecx,[esp+0x50]
	mov bl,0xF
	push ecx
	mov byte ptr [esp+0x6C],bl
	call esi
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	mov edx,dword ptr [esp+0x28]
	lea eax,[esp+0x30]
	push eax
	mov eax,dword ptr [esp+0x30]
	lea ecx,[esp+0x54]
	push ecx
	add edx,9
	push edx
	add eax,0xFFFFFFE5
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x78],0x10
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x68],bl
	cmp word ptr [esp+0x50],si
	jne Block91

 Block89:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block92:
	mov byte ptr [esp+0x68],0xE
	cmp word ptr [esp+0x30],si
	jne Block95

 Block93:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov byte ptr [esp+0x68],3
	test ebp,ebp
	je Block98

 Block97:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block98:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [esp+0x6C],0
	call edx
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test eax,eax
	je Block100

 Block99:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block100:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 8
}
}
// CUIAvatar::CUIAvatar
_SUB_EXCEPTION_HANDLER(1E21F0)
__SUB_CLASS_THIS(001E21F0, __thiscall, 139072,  CUIAvatar, void, CLogin*, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E21F0
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
	call CWnd::_ctor_default
	xor edi,edi
	lea eax,[esi+0x80]
	mov dword ptr [esp+0x1C],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0x80]
	mov dword ptr [TSingleton<CUIAvatar>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIAvatar>::ms_pInstance],edi

 Block3:
	mov ebx,dword ptr [esp+0x24]
	push offset ZRef<CAvatar>::~ZRef<CAvatar>
	push offset ZRef<CAvatar>::_ctor_default
	push 3
	push 8
	lea edx,[esi+0xC0]
	push edx
	mov byte ptr [esp+0x30],1
	int 3// TODO: 	mov dword ptr [esi],offset CUIAvatar::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIAvatar::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIAvatar::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax],ebx
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push offset _x_com_ptr<IWzGr2DLayer>::_ctor_default
	push 3
	push 4
	lea eax,[esi+0xD8]
	push eax
	mov byte ptr [esp+0x30],2
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push offset _x_com_ptr<IWzGr2DLayer>::_ctor_default
	push 3
	push 4
	lea ecx,[esi+0xE4]
	push ecx
	mov byte ptr [esp+0x30],3
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push offset _x_com_ptr<IWzGr2DLayer>::_ctor_default
	push 3
	push 4
	lea edx,[esi+0xF0]
	push edx
	mov byte ptr [esp+0x30],4
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push offset _x_com_ptr<IWzGr2DLayer>::_ctor_default
	push 3
	push 4
	lea eax,[esi+0xFC]
	push eax
	mov byte ptr [esp+0x30],5
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x108],edi
	mov dword ptr [esi+0x10C],edi
	mov dword ptr [esi+0x110],edi
	mov dword ptr [esi+0x114],edi
	mov dword ptr [esi+0x118],edi
	push offset _x_com_ptr<IWzFont>::~_x_com_ptr<IWzFont>
	push offset _x_com_ptr<IWzFont>::_ctor_default
	push 2
	push 4
	lea ecx,[esi+0x120]
	push ecx
	mov byte ptr [esp+0x30],0xB
	mov dword ptr [esi+0x11C],edi
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 6
	push 4
	lea edx,[esi+0x128]
	push edx
	mov byte ptr [esp+0x30],0xC
	call __eh_vector_ctor_iterator
	mov byte ptr [esp+0x1C],0xD
	mov edx,dword ptr [esp+0x28]
	mov eax,dword ptr [ebx+0x1B8]
	push edi
	push 1
	push edx
	push edi
	push 0xA
	push 0x50
	push 0x258
	mov dword ptr [esi+0x140],eax
	mov dword ptr [esi+0x144],edi
	mov dword ptr [esi+0x148],edi
	mov ecx,dword ptr [ebx+0x1BC]
	push 0xFFFFFB3E
	mov dword ptr [esi+0x14C],ecx
	push 0xFFFFFEDE
	mov ecx,esi
	call CWnd::CreateWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 8
}
}
// CUIAvatar::DrawNameTag
_SUB_EXCEPTION_HANDLER(1E2940)
__SUB_CLASS_THIS(001E2940, __thiscall, 139083,  CUIAvatar, void, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E2940
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
	mov edi,ecx
	mov eax,3
	xor ebx,ebx
	mov word ptr [esp+0x34],ax
	mov dword ptr [esp+0x3C],ebx
	mov ebp,dword ptr [esp+0x64]
	mov ecx,dword ptr [edi+ebp*4+0xD8]
	mov dword ptr [esp+0x5C],ebx
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x5C],2
	jne Block5

 Block3:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,ebx
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block6:
	mov esi,dword ptr [edi+ebp*4+0xD8]
	cmp esi,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xB8]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block10

 Block9:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov esi,dword ptr [edi+ebp*4+0xD8]
	cmp esi,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xC0]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],ebx
	call edx
	cmp eax,ebx
	jge Block14

 Block13:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov ecx,dword ptr [edi+0x144]
	lea eax,[ebp+ecx*2]
	add eax,ecx
	mov eax,dword ptr [edi+eax*4+0x84]
	lea edx,[esp+0x24]
	push edx
	push ecx
	add eax,4
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x68],3
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0x120]
	mov byte ptr [esp+0x64],4
	cmp ecx,ebx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov byte ptr [esp+0x64],3
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x5C],2
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov esi,dword ptr [esp+0x1C]
	cmp esi,ebx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov eax,dword ptr [esp+0x18]
	mov ebx,dword ptr [esp+0x14]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x8C]
	push 0xFFFFFF
	push eax
	push ebx
	push 0
	push 0
	push esi
	call ecx
	test eax,eax
	jge Block26

 Block25:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block26:
	add ebx,0xFFFFFFF6
	xor ebp,ebp
	test ebx,ebx
	jle Block35

 Block27:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block15

 Block28:
	mov ebx,dword ptr [esp+0x24]
	mov edx,dword ptr [esi]
	xor eax,eax
	cmp dword ptr [esp+0x68],eax
	mov byte ptr [esp+0x5C],5
	setne al
	sub esp,0x10
	add eax,0x19
	lea ecx,[eax+eax*2]
	mov ecx,dword ptr [edi+ecx*4]
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x3C]
	push ecx
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x44]
	push 0
	push ebp
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [edx+0x80]
	push esi
	call eax
	test eax,eax
	jge Block30

 Block29:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block30:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x5C],2
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov ebx,dword ptr [esp+0x14]
	add ebp,9
	add ebx,0xFFFFFFF6
	cmp ebp,ebx
	jl Block27

 Block35:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	xor edx,edx
	cmp dword ptr [esp+0x68],edx
	mov byte ptr [esp+0x5C],6
	setne dl
	sub esp,0x10
	mov ebp,edx
	mov edx,dword ptr [esi]
	lea eax,[ebp+ebp*2]
	lea ecx,[edi+eax*4]
	mov eax,esp
	mov dword ptr [esp+0x78],ecx
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x78]
	mov eax,dword ptr [eax+0x128]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push 0
	push 0
	push esi
	call ecx
	test eax,eax
	jge Block39

 Block38:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block39:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x5C],2
	jne Block42

 Block40:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block43:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	mov eax,dword ptr [esp+0x68]
	mov ecx,dword ptr [eax+0x130]
	mov edx,dword ptr [esi]
	mov dword ptr [esp+0x68],ecx
	mov ecx,dword ptr [esp+0x24]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x78]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push 0
	push ebx
	push esi
	mov byte ptr [esp+0x7C],7
	call ecx
	test eax,eax
	jge Block47

 Block46:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block47:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x5C],2
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x44]
	push ecx
	call ebx
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x60],8
	call ebx
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	mov ecx,dword ptr [edi+0x144]
	lea edx,[esp+0x44]
	push edx
	mov edx,dword ptr [esp+0x68]
	lea eax,[esp+0x28]
	push eax
	mov eax,dword ptr [edi+ebp*4+0x120]
	push eax
	lea eax,[edx+ecx*2]
	add eax,ecx
	mov eax,dword ptr [edi+eax*4+0x84]
	push ecx
	add eax,4
	mov dword ptr [esp+0x78],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x70],9
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x24]
	sub eax,dword ptr [esp+0x30]
	push 2
	cdq
	sub eax,edx
	sar eax,1
	dec eax
	mov byte ptr [esp+0x70],0xA
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x74],9
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0x5C],8
	cmp word ptr [esp+0x24],di
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov byte ptr [esp+0x5C],2
	cmp word ptr [esp+0x44],di
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0x60],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 8
}
}
// CUICharSelect::OnButtonClicked
__SUB_CLASS_THIS(001E0350, __thiscall, 139015,  CUICharSelect, void, uint32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CUICharSelect::IsRequestValid
	test eax,eax
	je Block10

 Block1:
	push 0xFFFFFFFF
	call CUICharSelect::SetKeyFocus
	mov eax,dword ptr [esp+8]
	lea ecx,[eax-0x3E8]
	mov dword ptr [esi+0x88],ecx
	mov ecx,dword ptr [esi+0x84]
	cmp dword ptr [ecx+0x1A8],0
	jne Block8

 Block2:
	sub eax,0x3E8
	je Block7

 Block3:
	sub eax,1
	je Block6

 Block4:
	sub eax,1
	jne Block8

 Block5:
	call CLogin::SendDeleteCharPacket
	jmp Block8

 Block6:
	push 0
	call CLogin::OnNewCharStep
	jmp Block8

 Block7:
	call CLogin::SendSelectCharPacket

 Block8:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test ecx,ecx
	je Block10

 Block9:
	lea eax,[esi+4]
	pop esi
	mov dword ptr [esp+4],eax
	jmp  CWndMan::SetFocus

 Block10:
	pop esi
	ret 4
}
}
// CUICharSelect::OnKey
// 5E0508
static uint8_t _SUB_1E03D0_LOOKUP_TABLE_0[32] = {
0, 5, 5, 5, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 3, 5, 4, 
};
__SUB_CLASS_THIS(001E03D0, __thiscall, 139016,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	test dword ptr [esp+8],0x80000000
	push esi
	mov esi,ecx
	jne Block18

 Block1:
	mov eax,dword ptr [esp+8]
	add eax,0xFFFFFFF7
	cmp eax,0x1F
	ja Block18

 Block2:
	movzx eax,byte ptr [eax+_SUB_1E03D0_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block13
cmp EAX, 2
je Block12
cmp EAX, 3
je Block9
cmp EAX, 4
je Block6
cmp EAX, 5
je Block18


 Block3:
	push 0xFFFFFFFF
	lea ecx,[esi-4]
	call CUICharSelect::SetKeyFocus
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test ecx,ecx
	je Block18

 Block4:
	mov eax,dword ptr [TSingleton<CUIAvatar>::ms_pInstance]
	test eax,eax
	je Block18

 Block5:
	add eax,4
	push eax
	call CWndMan::SetFocus
	pop esi
	ret 8

 Block6:
	inc dword ptr [esi+0x84]
	cmp dword ptr [esi+0x84],3
	jl Block8

 Block7:
	mov dword ptr [esi+0x84],0

 Block8:
	mov ecx,dword ptr [esi+0x84]
	push ecx
	lea ecx,[esi-4]
	call CUICharSelect::SetKeyFocus
	pop esi
	ret 8

 Block9:
	add dword ptr [esi+0x84],0xFFFFFFFF
	jns Block11

 Block10:
	mov dword ptr [esi+0x84],2

 Block11:
	mov edx,dword ptr [esi+0x84]
	push edx
	lea ecx,[esi-4]
	call CUICharSelect::SetKeyFocus
	pop esi
	ret 8

 Block12:
	mov ecx,dword ptr [esi+0x80]
	lea eax,[esi-4]
	neg eax
	sbb eax,eax
	and eax,esi
	push eax
	push 1
	call CLogin::GotoTitle
	pop esi
	ret 8

 Block13:
	cmp dword ptr [esi+0x84],0
	jge Block15

 Block14:
	mov dword ptr [esi+0x84],0

 Block15:
	mov eax,dword ptr [esi+0x84]
	cmp eax,3
	jge Block18

 Block16:
	mov eax,dword ptr [esi+eax*8+0x8C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	call edx
	test eax,eax
	je Block18

 Block17:
	mov edx,dword ptr [esi+0x84]
	mov eax,dword ptr [esi-4]
	mov eax,dword ptr [eax+0x20]
	lea ecx,[esi-4]
	add edx,0x3E8
	push edx
	call eax

 Block18:
	pop esi
	ret 8
}
}
// CUICharDetail::OnPreFadeIn
_SUB_EXCEPTION_HANDLER(1E55A0)
__SUB_CLASS_THIS0(001E55A0, __thiscall, 139045,  CUICharDetail, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E55A0
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
	mov esi,ecx
	xor ebx,ebx
	cmp dword ptr [esi+0xFC],ebx
	jne Block35

 Block1:
	mov dword ptr [esp+0x14],ebx
	lea eax,[esp+0x18]
	push 0xBCD
	push eax
	mov dword ptr [esp+0x58],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esi+0x104]
	mov eax,dword ptr [eax]
	neg ecx
	sbb ecx,ecx
	and ecx,2
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x5C],1
	call ZXString16::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x50],bl
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	push ebx
	push 0xFF
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	push 0xFFFFFFE7
	push 0xFFFFFFEC
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x6C],2
	call CWnd::GetLayer
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [edi],ebx
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x70],3
	mov dword ptr [esp+0x44],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block5

 Block4:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block5:
	mov ecx,edi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	cmp eax,ebx
	jge Block8

 Block6:
	cmp eax,0x80004002
	je Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [esp+0x30]
	push ebx
	push ecx
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x78],4
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x100]
	add esp,0x28
	cmp edi,eax
	je Block13

 Block9:
	mov dword ptr [esi+0x100],eax
	cmp eax,ebx
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block11:
	cmp edi,ebx
	je Block13

 Block12:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block13:
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block15:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x50],bl
	cmp eax,ebx
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push eax
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x54],5
	call edi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	mov ecx,dword ptr [esi+0x100]
	mov byte ptr [esp+0x50],6
	cmp ecx,ebx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push ebx
	call IWzGr2DLayer::Animate
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0x50],5
	cmp word ptr [esp+0x28],di
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebx
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea edx,[esp+0x28]
	push edx
	call ebp

 Block27:
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x38],di
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x38]
	push ecx
	call ebp

 Block31:
	lea edx,[esp+0x1C]
	push 0x4FF
	push edx
	mov dword ptr [esi+0xFC],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0x54],7
	call play_ui_sound
	mov eax,dword ptr [esp+0x20]
	add esp,4
	mov byte ptr [esp+0x50],bl
	cmp eax,ebx
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block33:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp eax,ebx
	je Block41

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret

 Block35:
	mov edi,dword ptr [esi+0x100]
	cmp edi,ebx
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x114]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block39

 Block38:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block39:
	cmp dword ptr [esp+0x14],ebx
	jne Block41

 Block40:
	mov ecx,esi
	call CFadeWnd::OnPreFadeIn
	mov dword ptr [esi+0xFC],ebx

 Block41:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret
}
}
// CUICharSelect::Update
__SUB_CLASS_THIS0(001E0220, __thiscall, 139013,  CUICharSelect, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x84]
	xor ecx,ecx
	cmp dword ptr [eax+0x1D0],ecx
	mov eax,dword ptr [esi+0x90]
	mov edx,dword ptr [eax+4]
	setge cl
	push edi
	mov edi,ecx
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push edi
	call eax
	mov eax,dword ptr [esi+0xA0]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push edi
	call eax
	pop edi
	mov ecx,esi
	pop esi
	jmp  CWnd::Update
}
}
// CUICharSelect::MakeBalloon
_SUB_EXCEPTION_HANDLER(1E3C10)
__SUB_CLASS_THIS(001E3C10, __thiscall, 139020,  CUICharSelect, _x_com_ptr<IWzGr2DLayer>*, _x_com_ptr<IWzGr2DLayer>*, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E3C10
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
// CUICharDetailVAC::Delete
__SUB_CLASS_THIS0(001E02E0, __thiscall, 139115,  CUICharDetailVAC, void) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CUICharDetailVAC>::ms_pInstance]
	test ecx,ecx
	je Block3

 Block1:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUICharDetailVAC>::ms_pInstance]
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
// CUIAvatarVAC::CUIAvatarVAC
_SUB_EXCEPTION_HANDLER(1E25E0)
__SUB_CLASS_THIS(001E25E0, __thiscall, 139142,  CUIAvatarVAC, void, CLogin*, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E25E0
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
	call CWnd::_ctor_default
	xor edi,edi
	lea eax,[esi+0x80]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0x80]
	mov dword ptr [TSingleton<CUIAvatarVAC>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIAvatarVAC>::ms_pInstance],edi

 Block3:
	mov edx,dword ptr [esp+0x20]
	int 3// TODO: 	mov dword ptr [esi],offset CUIAvatarVAC::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIAvatarVAC::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIAvatarVAC::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax],edx
	mov dword ptr [esi+0x88],edi
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esi+0x98],edi
	push offset GW_CharacterStat::~GW_CharacterStat
	push offset GW_CharacterStat::_ctor_default
	push 0x3C
	push 0xF9
	lea eax,[esi+0x18C]
	push eax
	mov byte ptr [esp+0x2C],4
	call __eh_vector_ctor_iterator
	push offset ZRef<CAvatar>::~ZRef<CAvatar>
	push offset ZRef<CAvatar>::_ctor_default
	push 0x3C
	push 8
	lea ecx,[esi+0x3BE8]
	push ecx
	mov byte ptr [esp+0x2C],5
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push offset _x_com_ptr<IWzGr2DLayer>::_ctor_default
	push 0x3C
	push 4
	lea edx,[esi+0x3DC8]
	push edx
	mov byte ptr [esp+0x2C],6
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x3EB8],edi
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push offset _x_com_ptr<IWzGr2DLayer>::_ctor_default
	push 0x3C
	push 4
	lea eax,[esi+0x3EBC]
	push eax
	mov byte ptr [esp+0x2C],8
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzFont>::~_x_com_ptr<IWzFont>
	push offset _x_com_ptr<IWzFont>::_ctor_default
	push 2
	push 4
	lea ecx,[esi+0x3FAC]
	push ecx
	mov byte ptr [esp+0x2C],9
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 6
	push 4
	lea edx,[esi+0x3FB4]
	push edx
	mov byte ptr [esp+0x2C],0xA
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 0x24
	push 4
	lea eax,[esi+0x3FCC]
	push eax
	mov byte ptr [esp+0x2C],0xB
	call __eh_vector_ctor_iterator
	mov ecx,dword ptr [esp+0x24]
	push edi
	mov byte ptr [esp+0x1C],0xC
	push 1
	push ecx
	push edi
	push 0xA
	push 0x1B8
	push 0x246
	push 0xFFFFFC9A
	push 0xFFFFFF06
	mov ecx,esi
	call CWnd::CreateWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 8
}
}
// CUIAvatarVAC::ResetAvatarPosition
__SUB_CLASS_THIS0(001EBDC0, __thiscall, 139144,  CUIAvatarVAC, void) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0x80]
	xor esi,esi
	cmp dword ptr [eax+0x160],esi
	jle Block5

 Block1:
	push ebx
	lea ebx,[edi+0x9C]
	jmp Block3

 Block3:
	mov ecx,dword ptr [ebx]
	push ecx
	push esi
	mov ecx,edi
	call CUIAvatarVAC::ResetCharacter
	mov edx,dword ptr [edi+0x80]
	inc esi
	add ebx,4
	cmp esi,dword ptr [edx+0x160]
	jl Block3

 Block4:
	pop ebx

 Block5:
	pop edi
	pop esi
	ret
}
}
// CUIAvatarVAC::DrawWorldIcon
_SUB_EXCEPTION_HANDLER(1E17B0)
__SUB_CLASS_THIS(001E17B0, __thiscall, 139152,  CUIAvatarVAC, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E17B0
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
	mov esi,ecx
	call CUIAvatarVAC::GetScrollBarIdx
	mov edi,dword ptr [esp+0x5C]
	lea eax,[eax+eax*2]
	mov ecx,edi
	sub ecx,eax
	js Block34

 Block1:
	mov ecx,esi
	call CUIAvatarVAC::GetScrollBarIdx
	lea edx,[eax+eax*2]
	mov eax,edi
	sub eax,edx
	cmp eax,8
	jg Block34

 Block2:
	call CUIAvatarVAC::GetScrollBarIdx
	lea ecx,[eax+eax*2]
	mov edx,ecx
	mov ecx,edi
	sub ecx,edx
	mov eax,0x55555556
	imul ecx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*2]
	imul eax,0x75
	sub ecx,edx
	imul ecx,0x75
	add eax,0x96
	mov dword ptr [esp+0x10],eax
	add ecx,0x4A
	mov eax,3
	xor ebp,ebp
	mov dword ptr [esp+0x14],ecx
	mov word ptr [esp+0x1C],ax
	mov dword ptr [esp+0x24],ebp
	mov ecx,dword ptr [esi+edi*4+0x3EBC]
	mov dword ptr [esp+0x54],ebp
	cmp ecx,ebp
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x60]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x54],2
	jne Block7

 Block5:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call ebp
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov edx,dword ptr [esi+0x80]
	mov eax,dword ptr [edx+0x17C]
	mov ecx,dword ptr [esp+0x5C]
	mov eax,dword ptr [eax+edi*4]
	mov eax,dword ptr [esi+eax*4+0x3FCC]
	mov byte ptr [esp+0x54],3
	test ecx,ecx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea edx,[esp+0x2C]
	push edx
	push eax
	push 0
	push 0
	call IWzCanvas::Copy
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x54],2
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov esi,dword ptr [esi+edi*4+0x3EBC]
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block18

 Block17:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block18:
	mov byte ptr [esp+0x54],4
	test esi,esi
	je Block31

 Block19:
	lea ecx,[esp+0x3C]
	push ecx
	call ebp
	lea edx,[esp+0x3C]
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
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x58],5
	call ebp
	lea ecx,[esp+0x2C]
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
	mov ecx,dword ptr [esp+0x10]
	lea edx,[esp+0x3C]
	push edx
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x30]
	push eax
	add ecx,5
	push ecx
	add edx,0xFFFFFFD0
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x64],6
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x54],5
	cmp word ptr [esp+0x2C],di
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov byte ptr [esp+0x54],4
	cmp word ptr [esp+0x3C],di
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov byte ptr [esp+0x54],2
	test esi,esi
	je Block33

 Block32:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block33:
	mov eax,dword ptr [esp+0x5C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call edx

 Block34:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x48
	ret 4
}
}
// CUICharDetail::CUICharDetail
_SUB_EXCEPTION_HANDLER(1E0590)
__SUB_CLASS_THIS(001E0590, __thiscall, 139043,  CUICharDetail, void, CLogin*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E0590
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
	call CFadeWnd::_ctor_default
	xor ebx,ebx
	lea edi,[esi+0xF4]
	mov dword ptr [esp+0x1C],ebx
	cmp edi,ebx
	je Block2

 Block1:
	lea eax,[edi-0xF4]
	mov dword ptr [TSingleton<CUICharDetail>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUICharDetail>::ms_pInstance],ebx

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUICharDetail::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUICharDetail::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUICharDetail::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x100],ebx
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push offset _x_com_ptr<IWzGr2DLayer>::_ctor_default
	push 2
	push 4
	lea ecx,[esi+0x108]
	push ecx
	mov byte ptr [esp+0x30],2
	call __eh_vector_ctor_iterator
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x24]
	mov eax,ecx
	shl eax,4
	mov dword ptr [edi],edx
	mov dword ptr [esi+0xF8],ecx
	add eax,dword ptr [edx+0x1D8]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [eax],ebx
	je Block6

 Block4:
	cmp dword ptr [eax+8],ebx
	je Block6

 Block5:
	mov edi,1
	jmp Block7

 Block6:
	xor edi,edi

 Block7:
	mov eax,0x55555556
	imul ecx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*2]
	sub ecx,edx
	imul ecx,0x82
	push 0x50
	sub ecx,0xDC
	push ebx
	mov dword ptr [esi+0x104],edi
	push 0x50
	neg edi
	sbb edi,edi
	and edi,0x24
	mov eax,0xFFFFFABC
	sub eax,edi
	push eax
	push ecx
	push eax
	push ecx
	push eax
	push ecx
	push ebx
	push 0xFF
	push ebx
	mov ecx,esi
	mov dword ptr [esi+0xFC],ebx
	call CFadeWnd::SetOption
	mov eax,dword ptr [esi+0x104]
	push ebx
	push ebx
	push ebx
	neg eax
	push ebx
	sbb eax,eax
	push 0xA
	and eax,0x24
	push ebx
	add eax,0x73
	push eax
	push 0xB7
	mov ecx,esi
	call CFadeWnd::CreateFadeWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 8
}
}
// CUIAvatarVAC::Update
__SUB_CLASS_THIS0(001E2590, __thiscall, 139144,  CUIAvatarVAC, void) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0x80]
	xor esi,esi
	cmp dword ptr [eax+0x160],esi
	jle Block7

 Block1:
	push ebx
	lea ebx,[edi+0x3BEC]
	jmp Block3

 Block3:
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	je Block5

 Block4:
	call CAvatar::Update
	push esi
	mov ecx,edi
	call CUIAvatarVAC::MakeWorldIcon

 Block5:
	mov ecx,dword ptr [edi+0x80]
	inc esi
	add ebx,8
	cmp esi,dword ptr [ecx+0x160]
	jl Block3

 Block6:
	pop ebx

 Block7:
	mov ecx,edi
	pop edi
	pop esi
	jmp  CWnd::Update
}
}
// _anon__PtInRect
__SUB(001E0100, __cdecl, 139773,  int32_t, tagRECT&, tagPOINT&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+8]
	mov ecx,dword ptr [edx]
	mov eax,dword ptr [esp+4]
	cmp dword ptr [eax],ecx
	jg Block5

 Block1:
	cmp ecx,dword ptr [eax+8]
	jg Block5

 Block2:
	mov ecx,dword ptr [edx+4]
	cmp dword ptr [eax+4],ecx
	jg Block5

 Block3:
	cmp ecx,dword ptr [eax+0xC]
	jg Block5

 Block4:
	mov eax,1
	ret

 Block5:
	xor eax,eax
	ret
}
}
// CUIAvatarVAC::OnCreate
_SUB_EXCEPTION_HANDLER(1EDAC0)
__SUB_CLASS_THIS(001EDAC0, __thiscall, 139145,  CUIAvatarVAC, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1EDAC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp+0x50],esi
	push offset _S_1__2
	lea ecx,[ebp+0x60]
	call _xbstr_t::_ctor_0
	xor ebx,ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea eax,[ebp+0x64]
	push 0xFBC
	push eax
	mov dword ptr [ebp-4],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x60]
	push ecx
	lea edx,[ebp+0x54]
	push edx
	mov ecx,eax
	mov byte ptr [ebp-4],1
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],2
	mov dword ptr [ebp+0x5C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block2

 Block1:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov ecx,dword ptr [ebp+0x54]
	cmp ecx,ebx
	je Block4

 Block3:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x54],ebx

 Block4:
	mov ecx,dword ptr [ebp+0x64]
	cmp ecx,ebx
	je Block6

 Block5:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x64],ebx

 Block6:
	mov ecx,dword ptr [ebp+0x60]
	cmp ecx,ebx
	je Block8

 Block7:
	call _xbstr_t::Data_t::Release

 Block8:
	mov dword ptr [ebp+0xC],ebx
	mov dword ptr [ebp],1
	mov dword ptr [ebp+4],ebx
	mov dword ptr [ebp+8],ebx
	lea eax,[ebp+0x54]
	push 0xFB8
	push eax
	mov dword ptr [ebp-4],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0xC]
	mov byte ptr [ebp-4],4
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],3
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x5C],eax
	mov byte ptr [ebp-4],5
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block13

 Block12:
	xor eax,eax

 Block13:
	mov byte ptr [ebp-4],3
	cmp eax,ebx
	je Block21

 Block14:
	add eax,8
	cmp eax,ebx
	je Block21

 Block15:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block17

 Block16:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	mov eax,dword ptr [esi+0x88]
	mov dword ptr [esi+0x88],edi
	mov dword ptr [ebp+0x5C],eax
	cmp eax,ebx
	je Block19

 Block18:
	push ebx
	lea ecx,[ebp+0x58]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block19:
	mov ecx,dword ptr [esi+0x88]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp]
	push eax
	push ebx
	push 0x179
	push 0x19F
	push 0x3E9
	push esi
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x5C],eax
	mov byte ptr [ebp-4],6
	cmp eax,ebx
	je Block22

 Block20:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block23

 Block21:
	xor edi,edi
	jmp Block17

 Block22:
	xor eax,eax

 Block23:
	mov byte ptr [ebp-4],3
	cmp eax,ebx
	je Block31

 Block24:
	add eax,8
	cmp eax,ebx
	je Block31

 Block25:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block27

 Block26:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block27:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [ebp+0x5C],eax
	cmp eax,ebx
	je Block29

 Block28:
	push ebx
	lea ecx,[ebp+0x58]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block29:
	mov ecx,dword ptr [esi+0x98]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push ebx
	push 0x159
	push 0x43
	push 0x178
	push 6
	push 1
	push 0x3EA
	push esi
	call eax
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [eax+0x34],0x15E
	mov ecx,dword ptr [esi+0x80]
	mov eax,dword ptr [ecx+0x160]
	cmp eax,9
	jle Block32

 Block30:
	lea ecx,[eax-1]
	mov eax,0x55555556
	imul ecx
	mov eax,edx
	shr eax,0x1F
	lea eax,[edx+eax-1]
	jmp Block33

 Block31:
	xor edi,edi
	jmp Block27

 Block32:
	xor eax,eax

 Block33:
	mov ecx,dword ptr [esi+0x98]
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x1C]
	push ecx
	call esi
	lea edx,[ebp-0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	lea eax,[ebp+0x10]
	push eax
	mov byte ptr [ebp-4],7
	call esi
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	push ebx
	push ebx
	lea edx,[ebp-0x1C]
	push edx
	lea eax,[ebp+0x10]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x557
	push ecx
	mov edi,8
	mov byte ptr [ebp-4],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],9
	cmp dword ptr [_D_G_RM],ebx
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea edx,[ebp-0x2C]
	mov byte ptr [ebp-4],8
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block42

 Block40:
	cmp eax,0x80004002
	je Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x2C],di
	jne Block45

 Block43:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	cmp eax,ebx
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea ecx,[ebp-0x2C]
	push ecx
	call esi

 Block46:
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp+0x10],di
	jne Block49

 Block47:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	cmp eax,ebx
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea eax,[ebp+0x10]
	push eax
	call esi

 Block50:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x1C],di
	jne Block53

 Block51:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,ebx
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[ebp-0x1C]
	push edx
	call esi

 Block54:
	mov dword ptr [ebp+0x60],ebx
	mov dword ptr [ebp+0x64],0xFED
	lea ebx,[ebx]

 Block55:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x60]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0xF
	test ecx,ecx
	je Block38

 Block56:
	lea edx,[ebp+0x40]
	push edx
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x24],ebx
	test eax,eax
	je Block59

 Block57:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x20]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x20]
	mov dword ptr [ebp+0x24],ebx
	test eax,eax
	jge Block59

 Block58:
	cmp eax,0x80004002
	jne Block34

 Block59:
	cmp word ptr [ebp+0x40],8
	mov byte ptr [ebp-4],0x12
	jne Block62

 Block60:
	mov eax,dword ptr [ebp+0x48]
	xor ecx,ecx
	mov word ptr [ebp+0x40],cx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[ebp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov dword ptr [ebp+0x38],0
	lea ebx,[ebx]

 Block64:
	mov eax,0x20
	call __chkstk
	mov esi,dword ptr [ebp+0x38]
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x13
	test ebx,ebx
	je Block38

 Block65:
	lea eax,[ebp+0x28]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x12
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x14
	call Ztl_variant_t::GetUnknown
	mov ecx,dword ptr [ebp+0x64]
	mov edx,dword ptr [ebp+0x50]
	add ecx,esi
	lea esi,[edx+ecx*4]
	test eax,eax
	je Block73

 Block66:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x3C]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x3C]
	mov dword ptr [ebp+0x5C],ecx
	test eax,eax
	je Block68

 Block67:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block68:
	mov ecx,dword ptr [ebp+0x5C]
	mov dword ptr [esi],ecx
	test edi,edi
	jge Block70

 Block69:
	cmp edi,0x80004002
	jne Block92

 Block70:
	cmp word ptr [ebp+0x28],8
	mov byte ptr [ebp-4],0x12
	jne Block75

 Block71:
	mov eax,dword ptr [ebp+0x30]
	xor ecx,ecx
	mov word ptr [ebp+0x28],cx
	test eax,eax
	je Block76

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block73:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block70

 Block74:
	mov dword ptr [esi],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block70

 Block75:
	lea edx,[ebp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov eax,dword ptr [ebp+0x38]
	inc eax
	cmp eax,3
	mov dword ptr [ebp+0x38],eax
	jl Block64

 Block77:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],0xE
	call ecx
	mov eax,dword ptr [ebp+0x64]
	inc dword ptr [ebp+0x60]
	add eax,3
	cmp eax,0xFF3
	mov dword ptr [ebp+0x64],eax
	jl Block55

 Block78:
	mov ebx,dword ptr [ebp+0x50]
	mov dword ptr [ebp+0x60],0
	add ebx,0x3FCC
	lea esp,[esp]

 Block79:
	mov dword ptr [ebp+0x64],0
	lea edx,[ebp+0x5C]
	push 0xFBB
	push edx
	mov byte ptr [ebp-4],0x15
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp+0x60]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x64]
	push edx
	mov byte ptr [ebp-4],0x16
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x5C]
	add esp,0xC
	mov byte ptr [ebp-4],0x15
	test eax,eax
	je Block81

 Block80:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block81:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x40]
	push eax
	call esi
	lea ecx,[ebp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block34

 Block82:
	lea edx,[ebp+0x28]
	push edx
	mov byte ptr [ebp-4],0x17
	call esi
	lea eax,[ebp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block34

 Block83:
	mov eax,dword ptr [ebp+0x64]
	push 0
	push 0
	lea ecx,[ebp+0x40]
	push ecx
	lea edx,[ebp+0x28]
	push edx
	push ecx
	mov dword ptr [ebp+0x24],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x18
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x19
	je Block38

 Block84:
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],0x18
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1A
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block93

 Block85:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x3C]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov esi,eax
	xor eax,eax
	test esi,esi
	setl al
	dec eax
	and eax,dword ptr [ebp+0x3C]
	mov edi,eax
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block87

 Block86:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block87:
	mov dword ptr [ebx],edi
	test esi,esi
	jge Block89

 Block88:
	cmp esi,0x80004002
	jne Block111

 Block89:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x18
	jne Block95

 Block90:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block96

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block92:
	push edi
	call _com_issue_error

 Block93:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block89

 Block94:
	mov dword ptr [ebx],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block89

 Block95:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov esi,8
	mov byte ptr [ebp-4],0x17
	cmp word ptr [ebp+0x28],si
	jne Block99

 Block97:
	mov eax,dword ptr [ebp+0x30]
	xor edx,edx
	mov word ptr [ebp+0x28],dx
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea eax,[ebp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block100:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x40],si
	jne Block103

 Block101:
	mov eax,dword ptr [ebp+0x48]
	xor ecx,ecx
	mov word ptr [ebp+0x40],cx
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea edx,[ebp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0xE
	test eax,eax
	je Block106

 Block105:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block106:
	mov eax,dword ptr [ebp+0x60]
	inc eax
	add ebx,4
	cmp eax,0x24
	mov dword ptr [ebp+0x60],eax
	jl Block79

 Block107:
	lea eax,[ebp+0x5C]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,dword ptr [ebp+0x50]
	mov eax,dword ptr [eax]
	push 0
	add esi,0x3FAC
	push esi
	push eax
	mov byte ptr [ebp-4],0x1B
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x5C]
	add esp,0xC
	mov byte ptr [ebp-4],0xE
	test eax,eax
	je Block109

 Block108:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block109:
	lea ecx,[ebp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block112

 Block110:
	push eax
	call _com_issue_error

 Block111:
	push esi
	call _com_issue_error

 Block112:
	lea eax,[ebp+0x40]
	push eax
	push 0xFF999999
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x1C
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [ebp-4],0x1D
	test ecx,ecx
	jne Block114

 Block113:
	push 0x80004003
	call _com_issue_error

 Block114:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x40],8
	mov byte ptr [ebp-4],0xE
	jne Block117

 Block115:
	mov eax,dword ptr [ebp+0x48]
	xor edx,edx
	mov word ptr [ebp+0x40],dx
	test eax,eax
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea eax,[ebp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block118:
	lea ecx,[ebp+0x5C]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,dword ptr [ebp+0x50]
	mov eax,dword ptr [eax]
	push 0
	add esi,0x3FB0
	push esi
	push eax
	mov byte ptr [ebp-4],0x1E
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x5C]
	add esp,0xC
	mov byte ptr [ebp-4],0xE
	test eax,eax
	je Block120

 Block119:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block120:
	lea edx,[ebp+0x40]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block122

 Block121:
	push eax
	call _com_issue_error

 Block122:
	lea ecx,[ebp+0x40]
	push ecx
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1A25
	mov bl,0x1F
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [ebp-4],0x20
	test ecx,ecx
	jne Block124

 Block123:
	push 0x80004003
	call _com_issue_error

 Block124:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x40],8
	mov byte ptr [ebp-4],0xE
	jne Block127

 Block125:
	xor eax,eax
	mov word ptr [ebp+0x40],ax
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea ecx,[ebp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block128:
	mov ebx,dword ptr [ebp+0x50]
	mov edx,dword ptr [ebx+0x80]
	xor eax,eax
	cmp dword ptr [edx+0x160],eax
	jle Block131

 Block129:
	lea ecx,[ebx+0x18C]

 Block130:
	mov dword ptr [ecx],0
	mov edx,dword ptr [ebx+0x80]
	inc eax
	add ecx,0xF9
	cmp eax,dword ptr [edx+0x160]
	jl Block130

 Block131:
	mov ecx,dword ptr [ebx+0x80]
	mov ecx,dword ptr [ecx+0x160]
	mov edi,dword ptr [ebp+0x74]
	xor eax,eax
	test ecx,ecx
	jle Block134

 Block132:
	mov edx,edi
	lea ecx,[ebx+0x9C]

 Block133:
	mov dword ptr [ecx],edx
	mov esi,dword ptr [ebx+0x80]
	inc eax
	add ecx,4
	add edx,0x2FE
	cmp eax,dword ptr [esi+0x160]
	jl Block133

 Block134:
	mov edx,dword ptr [ebx+0x80]
	xor esi,esi
	cmp dword ptr [edx+0x160],esi
	jle Block137

 Block135:
	cmp dword ptr [edi],0
	je Block137

 Block136:
	push edi
	push esi
	mov ecx,ebx
	call CUIAvatarVAC::MakeCharacter
	push esi
	mov ecx,ebx
	call CUIAvatarVAC::MakeWorldIcon
	mov eax,dword ptr [ebx+0x80]
	inc esi
	add edi,0x2FE
	cmp esi,dword ptr [eax+0x160]
	jl Block135

 Block137:
	push 0
	mov ecx,ebx
	call CUIAvatarVAC::SetSelection
	mov ecx,ebx
	call CUIAvatarVAC::MakeSelectedCharacterNameTag
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],3
	call edx
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block139

 Block138:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block139:
	lea esp,[ebp-0x4C]
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
	ret 4
}
}
// CUICharDetailVAC::OnPreFadeIn
__SUB_CLASS_THIS0(001E0160, __thiscall, 139115,  CUICharDetailVAC, void) {
__asm {

 Block0:
	jmp  CFadeWnd::OnPreFadeIn
}
}
// CUICharDetailVAC::Draw
_SUB_EXCEPTION_HANDLER(1EA350)
__SUB_CLASS_THIS(001EA350, __thiscall, 139116,  CUICharDetailVAC, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1EA350
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp+0x1C],esi
	lea eax,[ebp+0x40]
	push eax
	call CWnd::GetCanvas
	mov eax,dword ptr [esi+0xF4]
	mov edi,dword ptr [eax+0x1D0]
	mov ebx,dword ptr [ebp+0x40]
	imul edi,0x2FE
	add edi,dword ptr [eax+0x16C]
	mov dword ptr [ebp-4],0
	mov dword ptr [ebp-0x34],edi
	test ebx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+0x8C]
	push 0
	push 0xD2
	push 0xAA
	push 0
	push 0
	push ebx
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block4:
	lea eax,[ebp+0x44]
	push 1
	push eax
	call get_basic_font
	add esp,8
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],1
	call ebx
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea eax,[ebp+0x58]
	push eax
	mov byte ptr [ebp-4],2
	call ebx
	lea ecx,[ebp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [ebp+0x44]
	lea edx,[ebp+0x48]
	push edx
	mov edx,dword ptr [esi+0xF8]
	lea eax,[ebp+0x58]
	push eax
	push ecx
	mov ecx,dword ptr [esi+0xF4]
	push edx
	lea eax,[ebp+0x34]
	push eax
	mov byte ptr [ebp-4],3
	call CLogin::GetWorldNamefromCharIdx
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [ebp+0x20],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],4
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x40]
	push 0x40
	mov byte ptr [ebp-4],5
	push 0x27
	mov byte ptr [ebp-4],4
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	cmp word ptr [ebp+0x58],8
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],2
	jne Block13

 Block11:
	mov eax,dword ptr [ebp+0x60]
	xor ecx,ecx
	mov word ptr [ebp+0x58],cx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea edx,[ebp+0x58]
	push edx
	call esi

 Block14:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],1
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[ebp+0x48]
	push ecx
	call esi

 Block18:
	mov edx,dword ptr [edi+0x3D]
	lea eax,[edi+0x39]
	push edx
	push eax
	mov dword ptr [ebp+0x20],eax
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	cwde
	push eax
	call get_job_name
	add esp,0xC
	mov dword ptr [ebp],0
	test eax,eax
	je Block22

 Block19:
	mov ecx,eax
	lea esi,[ecx+1]

 Block20:
	mov dl,byte ptr [ecx]
	inc ecx
	test dl,dl
	jne Block20

 Block21:
	sub ecx,esi
	mov esi,ecx
	push esi
	push eax
	push 0
	push esi
	lea ecx,[ebp]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[ebp]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [ZImports::_VariantClear]

 Block22:
	lea ecx,[ebp+0x58]
	push ecx
	mov byte ptr [ebp-4],6
	call ebx
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	lea eax,[ebp+0x48]
	push eax
	mov byte ptr [ebp-4],7
	call ebx
	lea ecx,[ebp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	mov ecx,dword ptr [ebp+0x44]
	lea edx,[ebp+0x58]
	push edx
	mov edx,dword ptr [ebp]
	lea eax,[ebp+0x48]
	push eax
	push ecx
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],8
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x40]
	push 0x52
	mov byte ptr [ebp-4],9
	push 0x27
	mov byte ptr [ebp-4],8
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],7
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[ebp+0x48]
	push ecx
	call esi

 Block30:
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],6
	jne Block33

 Block31:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[ebp+0x58]
	push eax
	call esi

 Block34:
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [edi+0x35]
	mov esi,esp
	push ecx
	lea edx,[edi+0x33]
	push edx
	call _ZtlSecureFuseHelper<unsigned char>::call
	push 0xA
	movzx eax,al
	push esi
	push eax
	call __itow
	add esp,0x14
	lea ecx,[ebp+0x58]
	push ecx
	mov esi,eax
	call ebx
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	lea eax,[ebp+0x48]
	push eax
	mov byte ptr [ebp-4],0xA
	call ebx
	lea ecx,[ebp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	mov ecx,dword ptr [ebp+0x44]
	lea edx,[ebp+0x58]
	push edx
	lea eax,[ebp+0x48]
	push eax
	push ecx
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push esi
	mov byte ptr [ebp-4],0xB
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x40]
	push 0x64
	mov byte ptr [ebp-4],0xC
	push 0x27
	mov byte ptr [ebp-4],0xB
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0xA
	jne Block41

 Block39:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block42:
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],6
	jne Block45

 Block43:
	mov eax,dword ptr [ebp+0x60]
	xor ecx,ecx
	mov word ptr [ebp+0x58],cx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea edx,[ebp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov eax,0x20
	call __chkstk
	mov eax,dword ptr [edi+0xB1]
	mov esi,esp
	push eax
	lea ecx,[edi+0xAD]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	push 0xA
	movsx edx,ax
	push esi
	push edx
	call __itow
	mov esi,eax
	add esp,0x14
	lea eax,[ebp+0x58]
	push eax
	call ebx
	lea ecx,[ebp+0x58]
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
	lea edx,[ebp+0x48]
	push edx
	mov byte ptr [ebp-4],0xD
	call ebx
	lea eax,[ebp+0x48]
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
	mov eax,dword ptr [ebp+0x44]
	lea ecx,[ebp+0x58]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	push eax
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push esi
	mov byte ptr [ebp-4],0xE
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x40]
	push 0x76
	mov byte ptr [ebp-4],0xF
	push 0x27
	mov byte ptr [ebp-4],0xE
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0xD
	jne Block53

 Block51:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],6
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [edi+0x45]
	mov esi,esp
	push edx
	lea eax,[edi+0x41]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	push 0xA
	movsx ecx,ax
	push esi
	push ecx
	call __itow
	add esp,0x14
	lea edx,[ebp+0x58]
	push edx
	mov esi,eax
	call ebx
	lea eax,[ebp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block60

 Block59:
	push eax
	call _com_issue_error

 Block60:
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],0x10
	call ebx
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	mov edx,dword ptr [ebp+0x44]
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x48]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push esi
	mov byte ptr [ebp-4],0x11
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x40]
	push 0x88
	mov byte ptr [ebp-4],0x12
	push 0x27
	mov byte ptr [ebp-4],0x11
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0x10
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],6
	jne Block69

 Block67:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [edi+0x4D]
	mov esi,esp
	push ecx
	lea edx,[edi+0x49]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	push 0xA
	cwde
	push esi
	push eax
	call __itow
	add esp,0x14
	lea ecx,[ebp+0x58]
	push ecx
	mov esi,eax
	call ebx
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	lea eax,[ebp+0x48]
	push eax
	mov byte ptr [ebp-4],0x13
	call ebx
	lea ecx,[ebp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block74

 Block73:
	push eax
	call _com_issue_error

 Block74:
	mov ecx,dword ptr [ebp+0x44]
	lea edx,[ebp+0x58]
	push edx
	lea eax,[ebp+0x48]
	push eax
	push ecx
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	mov bl,0x14
	push esi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x40]
	push 0x9A
	mov byte ptr [ebp-4],0x15
	push 0x27
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0x13
	jne Block77

 Block75:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block78:
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],6
	jne Block81

 Block79:
	mov eax,dword ptr [ebp+0x60]
	xor ecx,ecx
	mov word ptr [ebp+0x58],cx
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea edx,[ebp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block82:
	mov eax,0x20
	call __chkstk
	mov eax,dword ptr [edi+0x55]
	mov esi,esp
	push eax
	lea ecx,[edi+0x51]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	push 0xA
	movsx edx,ax
	push esi
	push edx
	call __itow
	mov ebx,dword ptr [ZImports::_VariantInit]
	mov esi,eax
	add esp,0x14
	lea eax,[ebp+0x58]
	push eax
	call ebx
	lea ecx,[ebp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	lea edx,[ebp+0x48]
	push edx
	mov byte ptr [ebp-4],0x16
	call ebx
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	mov eax,dword ptr [ebp+0x44]
	lea ecx,[ebp+0x58]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	push eax
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push esi
	mov byte ptr [ebp-4],0x17
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x40]
	push 0xAC
	mov byte ptr [ebp-4],0x18
	push 0x27
	mov byte ptr [ebp-4],0x17
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0x16
	jne Block89

 Block87:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],6
	jne Block93

 Block91:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [edi+0x5D]
	mov esi,esp
	push edx
	add edi,0x59
	push edi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	push 0xA
	cwde
	push esi
	push eax
	call __itow
	add esp,0x14
	lea ecx,[ebp+0x58]
	push ecx
	mov esi,eax
	call ebx
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	lea eax,[ebp+0x48]
	push eax
	mov byte ptr [ebp-4],0x19
	call ebx
	lea ecx,[ebp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor edi,edi
	add esp,8
	cmp eax,edi
	jge Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	mov ecx,dword ptr [ebp+0x44]
	lea edx,[ebp+0x58]
	push edx
	lea eax,[ebp+0x48]
	push eax
	push ecx
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push esi
	mov byte ptr [ebp-4],0x1A
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x40]
	push 0xBE
	mov byte ptr [ebp-4],0x1B
	push 0x27
	mov byte ptr [ebp-4],0x1A
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0x19
	jne Block101

 Block99:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	cmp eax,edi
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block102:
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],6
	jne Block105

 Block103:
	mov eax,dword ptr [ebp+0x60]
	xor ecx,ecx
	mov word ptr [ebp+0x58],cx
	cmp eax,edi
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea edx,[ebp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	mov dword ptr [ebp-0x20],edi
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x1C
	cmp dword ptr [eax+0x100],edi
	jne Block159

 Block107:
	lea eax,[ebp+0x58]
	push eax
	call ebx
	lea ecx,[ebp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block109

 Block108:
	push eax
	call _com_issue_error

 Block109:
	lea edx,[ebp+0x48]
	push edx
	mov byte ptr [ebp-4],0x1D
	call ebx
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block111

 Block110:
	push eax
	call _com_issue_error

 Block111:
	mov eax,dword ptr [ebp+0x44]
	lea ecx,[ebp+0x58]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x20],esp
	push 0xBCB
	push ecx
	mov byte ptr [ebp-4],0x1E
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x40]
	push edi
	mov byte ptr [ebp-4],0x1F
	push 0x1A
	mov ecx,esi
	mov byte ptr [ebp-4],0x1E
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0x1D
	jne Block114

 Block112:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	cmp eax,edi
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block115:
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],0x1C
	jne Block118

 Block116:
	mov eax,dword ptr [ebp+0x60]
	xor ecx,ecx
	mov word ptr [ebp+0x58],cx
	cmp eax,edi
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea edx,[ebp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block119:
	lea eax,[ebp+0x58]
	push eax
	call ebx
	lea ecx,[ebp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block121

 Block120:
	push eax
	call _com_issue_error

 Block121:
	lea edx,[ebp+0x48]
	push edx
	mov byte ptr [ebp-4],0x20
	call ebx
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block123

 Block122:
	push eax
	call _com_issue_error

 Block123:
	mov eax,dword ptr [ebp+0x44]
	lea ecx,[ebp+0x58]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x20],esp
	push 0xBCB
	push ecx
	mov byte ptr [ebp-4],0x21
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push 0x24
	mov byte ptr [ebp-4],0x22
	push 0x1A
	mov ecx,esi
	mov byte ptr [ebp-4],0x21
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0x20
	jne Block126

 Block124:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	cmp eax,edi
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block127:
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],0x1C
	jne Block133

 Block128:
	mov eax,dword ptr [ebp+0x60]
	xor ecx,ecx
	mov word ptr [ebp+0x58],cx
	cmp eax,edi
	je Block130

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block130:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block131:
	lea eax,[ebp-0x20]
	push offset _S_UILOGINIMGVIEWAL
	push eax
	call ZXString<char>::Format
	add esp,8
	lea ecx,[ebp+0x58]
	push ecx
	call ebx
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block134

 Block132:
	push eax
	call _com_issue_error

 Block133:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp+0x58]
	push edx
	call esi
	jmp Block131

 Block134:
	lea eax,[ebp+0x48]
	push eax
	mov byte ptr [ebp-4],0x23
	call ebx
	lea ecx,[ebp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block136

 Block135:
	push eax
	call _com_issue_error

 Block136:
	push edi
	push edi
	lea edx,[ebp+0x58]
	push edx
	mov edx,dword ptr [ebp-0x20]
	lea eax,[ebp+0x48]
	push eax
	push ecx
	mov dword ptr [ebp+0x20],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x24
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x25
	cmp dword ptr [_D_G_RM],edi
	jne Block138

 Block137:
	push 0x80004003
	call _com_issue_error

 Block138:
	lea eax,[ebp-0x1C]
	mov byte ptr [ebp-4],0x24
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x26
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x1C]
	mov dword ptr [ebp+0x1C],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block141

 Block139:
	cmp eax,0x80004002
	je Block141

 Block140:
	push eax
	call _com_issue_error

 Block141:
	mov ebx,8
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp-0x1C],bx
	jne Block144

 Block142:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,edi
	je Block145

 Block143:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block144:
	lea edx,[ebp-0x1C]
	push edx
	call esi

 Block145:
	mov byte ptr [ebp-4],0x29
	cmp word ptr [ebp+0x48],bx
	jne Block148

 Block146:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	cmp eax,edi
	je Block149

 Block147:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block149

 Block148:
	lea ecx,[ebp+0x48]
	push ecx
	call esi

 Block149:
	cmp word ptr [ebp+0x58],8
	mov bl,0x2A
	mov byte ptr [ebp-4],bl
	jne Block152

 Block150:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	cmp eax,edi
	je Block153

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block153

 Block152:
	lea eax,[ebp+0x58]
	push eax
	call esi

 Block153:
	mov ecx,3
	mov word ptr [ebp+0x24],cx
	mov dword ptr [ebp+0x2C],0xFF
	mov esi,dword ptr [ebp+0x1C]
	mov ecx,dword ptr [ebp+0x40]
	lea edx,[ebp+0x24]
	push edx
	push esi
	push 0x15
	push 0x34
	mov byte ptr [ebp-4],0x2B
	call IWzCanvas::Copy
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],bl
	jne Block156

 Block154:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	cmp eax,edi
	je Block157

 Block155:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block157

 Block156:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block157:
	mov byte ptr [ebp-4],0x1C
	cmp esi,edi
	je Block345

 Block158:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax
	jmp Block345

 Block159:
	mov esi,dword ptr [eax+0xF8]
	mov ecx,dword ptr [eax+0xF4]
	shl esi,4
	add esi,dword ptr [ecx+0x170]
	mov dword ptr [ebp+0x38],edi
	mov dword ptr [ebp+4],esi
	lea edx,[ebp+0x34]
	push 0xBCC
	push edx
	mov byte ptr [ebp-4],0x2C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x38]
	push edx
	mov byte ptr [ebp-4],0x2D
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x34]
	add esp,0xC
	mov byte ptr [ebp-4],0x2C
	cmp eax,edi
	je Block161

 Block160:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block161:
	lea eax,[ebp+0x24]
	push eax
	call ebx
	lea ecx,[ebp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block163

 Block162:
	push eax
	call _com_issue_error

 Block163:
	mov edi,dword ptr [ebp+0x38]
	lea edx,[ebp+0x24]
	push edx
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push edi
	mov byte ptr [ebp-4],0x2E
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x2F
	test ecx,ecx
	jne Block165

 Block164:
	push 0x80004003
	call _com_issue_error

 Block165:
	mov byte ptr [ebp-4],0x2E
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0x2C
	jne Block168

 Block166:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block169

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block169

 Block168:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block169:
	lea edx,[ebp+0x48]
	push edx
	call ebx
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block171

 Block170:
	push eax
	call _com_issue_error

 Block171:
	lea ecx,[ebp+0x24]
	push ecx
	mov byte ptr [ebp-4],0x30
	call ebx
	lea edx,[ebp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block173

 Block172:
	push eax
	call _com_issue_error

 Block173:
	mov edx,dword ptr [ebp+0x44]
	lea eax,[ebp+0x48]
	push eax
	lea ecx,[ebp+0x24]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	mov bl,0x31
	push edi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x40]
	push 0
	mov byte ptr [ebp-4],0x32
	push 5
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x30
	cmp word ptr [ebp+0x24],di
	jne Block176

 Block174:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block177

 Block175:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block177

 Block176:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block177:
	mov byte ptr [ebp-4],0x2C
	cmp word ptr [ebp+0x48],di
	jne Block180

 Block178:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	test eax,eax
	je Block181

 Block179:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block181

 Block180:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block181:
	mov eax,0x20
	call __chkstk
	mov eax,dword ptr [esi+4]
	cdq
	mov ecx,esp
	xor eax,edx
	push 0xA
	sub eax,edx
	push ecx
	push eax
	call __itow
	add esp,0xC
	lea ecx,[ebp+0x24]
	push ecx
	mov esi,eax
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block183

 Block182:
	push eax
	call _com_issue_error

 Block183:
	lea eax,[ebp+0x24]
	push eax
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	mov bl,0x33
	push esi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x34
	test ecx,ecx
	jne Block185

 Block184:
	push 0x80004003
	call _com_issue_error

 Block185:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x24],8
	mov edi,eax
	mov byte ptr [ebp-4],0x2C
	jne Block188

 Block186:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block189

 Block187:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block189

 Block188:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block189:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x48]
	push eax
	call ebx
	lea ecx,[ebp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block191

 Block190:
	push eax
	call _com_issue_error

 Block191:
	lea edx,[ebp+0x24]
	push edx
	mov byte ptr [ebp-4],0x35
	call ebx
	lea eax,[ebp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block193

 Block192:
	push eax
	call _com_issue_error

 Block193:
	mov eax,dword ptr [ebp+0x44]
	lea ecx,[ebp+0x48]
	push ecx
	lea edx,[ebp+0x24]
	push edx
	push eax
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	mov bl,0x36
	push esi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov ecx,0x9F
	sub ecx,edi
	push 0
	push ecx
	mov ecx,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0x37
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0x35
	jne Block196

 Block194:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block197

 Block195:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block197

 Block196:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block197:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0x2C
	jne Block200

 Block198:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block201

 Block199:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block201

 Block200:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block201:
	mov eax,dword ptr [ebp+4]
	mov eax,dword ptr [eax+4]
	test eax,eax
	jle Block203

 Block202:
	mov esi,offset _S_UP
	jmp Block205

 Block203:
	mov esi,offset _S_DOWN
	jl Block205

 Block204:
	mov esi,offset _S_SAME

 Block205:
	lea ecx,[ebp+0x34]
	push 0xBCE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[ebp+0x38]
	push edx
	mov byte ptr [ebp-4],0x38
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x34]
	add esp,0xC
	mov byte ptr [ebp-4],0x2C
	test eax,eax
	je Block207

 Block206:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block207:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x48]
	push eax
	call edi
	lea ecx,[ebp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block209

 Block208:
	push eax
	call _com_issue_error

 Block209:
	lea edx,[ebp+0x24]
	push edx
	mov byte ptr [ebp-4],0x39
	call edi
	lea eax,[ebp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block211

 Block210:
	push eax
	call _com_issue_error

 Block211:
	mov eax,dword ptr [ebp+0x38]
	push 0
	push 0
	lea ecx,[ebp+0x48]
	push ecx
	lea edx,[ebp+0x24]
	push edx
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	mov bl,0x3A
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x3B
	jne Block213

 Block212:
	push 0x80004003
	call _com_issue_error

 Block213:
	lea ecx,[ebp-0x54]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x3C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x1C]
	mov dword ptr [ebp+0x1C],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block216

 Block214:
	cmp eax,0x80004002
	je Block216

 Block215:
	push eax
	call _com_issue_error

 Block216:
	mov esi,8
	mov byte ptr [ebp-4],0x3E
	cmp word ptr [ebp-0x54],si
	jne Block223

 Block217:
	mov eax,dword ptr [ebp-0x4C]
	xor edx,edx
	mov word ptr [ebp-0x54],dx
	test eax,eax
	je Block219

 Block218:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block219:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block220:
	mov byte ptr [ebp-4],0x3F
	cmp word ptr [ebp+0x24],si
	jne Block224

 Block221:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block225

 Block222:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block225

 Block223:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x54]
	push eax
	call ebx
	jmp Block220

 Block224:
	lea edx,[ebp+0x24]
	push edx
	call ebx

 Block225:
	mov byte ptr [ebp-4],0x40
	cmp word ptr [ebp+0x48],si
	jne Block228

 Block226:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block229

 Block227:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block229

 Block228:
	lea ecx,[ebp+0x48]
	push ecx
	call ebx

 Block229:
	mov edx,3
	mov word ptr [ebp+0x58],dx
	mov dword ptr [ebp+0x60],0xFF
	mov esi,dword ptr [ebp+4]
	mov edx,dword ptr [esi+4]
	mov ecx,dword ptr [ebp+0x1C]
	neg edx
	sbb edx,edx
	lea eax,[ebp+0x58]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x40]
	and edx,0xFFFFFFFC
	add edx,6
	push edx
	push 0xA0
	mov byte ptr [ebp-4],0x41
	call IWzCanvas::Copy
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],0x40
	jne Block232

 Block230:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block233

 Block231:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block233

 Block232:
	lea ecx,[ebp+0x58]
	push ecx
	call ebx

 Block233:
	lea edx,[ebp+0x34]
	push 0xBCC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esi+8]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x38]
	push edx
	mov byte ptr [ebp-4],0x42
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x34]
	add esp,0xC
	mov byte ptr [ebp-4],0x40
	test eax,eax
	je Block235

 Block234:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block235:
	lea eax,[ebp+0x58]
	push eax
	call edi
	lea ecx,[ebp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block237

 Block236:
	push eax
	call _com_issue_error

 Block237:
	mov esi,dword ptr [ebp+0x38]
	lea edx,[ebp+0x58]
	push edx
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	mov bl,0x43
	push esi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x44
	test ecx,ecx
	jne Block239

 Block238:
	push 0x80004003
	call _com_issue_error

 Block239:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],0x40
	jne Block242

 Block240:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block243

 Block241:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block243

 Block242:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block243:
	lea edx,[ebp+8]
	push edx
	call edi
	lea eax,[ebp+8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block245

 Block244:
	push eax
	call _com_issue_error

 Block245:
	lea ecx,[ebp+0x58]
	push ecx
	mov byte ptr [ebp-4],0x45
	call edi
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block247

 Block246:
	push eax
	call _com_issue_error

 Block247:
	mov edx,dword ptr [ebp+0x44]
	lea eax,[ebp+8]
	push eax
	lea ecx,[ebp+0x58]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	mov bl,0x46
	push esi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x40]
	push 0x24
	mov byte ptr [ebp-4],0x47
	push 5
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],0x45
	jne Block250

 Block248:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block251

 Block249:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block251

 Block250:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block251:
	cmp word ptr [ebp+8],8
	mov byte ptr [ebp-4],0x40
	jne Block254

 Block252:
	mov eax,dword ptr [ebp+0x10]
	xor edx,edx
	mov word ptr [ebp+8],dx
	test eax,eax
	je Block255

 Block253:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block255

 Block254:
	lea eax,[ebp+8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block255:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [ebp+4]
	mov eax,dword ptr [edx+0xC]
	cdq
	mov ecx,esp
	xor eax,edx
	push 0xA
	sub eax,edx
	push ecx
	push eax
	call __itow
	mov esi,eax
	add esp,0xC
	lea eax,[ebp+8]
	push eax
	call edi
	lea ecx,[ebp+8]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block257

 Block256:
	push eax
	call _com_issue_error

 Block257:
	lea edx,[ebp+8]
	push edx
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	mov bl,0x48
	push esi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x49
	test ecx,ecx
	jne Block259

 Block258:
	push 0x80004003
	call _com_issue_error

 Block259:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+8],8
	mov edi,eax
	mov byte ptr [ebp-4],0x40
	jne Block262

 Block260:
	xor eax,eax
	mov word ptr [ebp+8],ax
	mov eax,dword ptr [ebp+0x10]
	test eax,eax
	je Block263

 Block261:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block263

 Block262:
	lea ecx,[ebp+8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block263:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x58]
	push edx
	call ebx
	lea eax,[ebp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block265

 Block264:
	push eax
	call _com_issue_error

 Block265:
	lea ecx,[ebp+8]
	push ecx
	mov byte ptr [ebp-4],0x4A
	call ebx
	lea edx,[ebp+8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block267

 Block266:
	push eax
	call _com_issue_error

 Block267:
	mov edx,dword ptr [ebp+0x44]
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+8]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	mov bl,0x4B
	push esi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x40]
	mov eax,0x9F
	push 0x24
	sub eax,edi
	mov byte ptr [ebp-4],0x4C
	push eax
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+8],8
	mov byte ptr [ebp-4],0x4A
	jne Block270

 Block268:
	mov eax,dword ptr [ebp+0x10]
	xor ecx,ecx
	xor esi,esi
	mov word ptr [ebp+8],cx
	cmp eax,esi
	je Block271

 Block269:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block271

 Block270:
	lea edx,[ebp+8]
	push edx
	call dword ptr [ZImports::_VariantClear]
	xor esi,esi

 Block271:
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],0x40
	jne Block274

 Block272:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	cmp eax,esi
	je Block275

 Block273:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block275

 Block274:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block275:
	push esi
	push 3
	lea ecx,[ebp+0x18]
	mov dword ptr [ebp+0x18],esi
	call ZXString16::GetBuffer
	mov edx,dword ptr [_S_D__3]
	mov dword ptr [eax],edx
	mov cx,word ptr [_S_D__3+4]
	mov word ptr [eax+4],cx
	push 3
	lea ecx,[ebp+0x18]
	call ZXString16::ReleaseBuffer
	lea edx,[ebp+0x3C]
	push 0xBCE
	push edx
	mov byte ptr [ebp-4],0x4D
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	lea ecx,[ebp+0x18]
	push ecx
	lea edx,[ebp+0x34]
	mov bl,0x4E
	push edx
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call ZXString16::op_add_1
	push eax
	lea ecx,[ebp+0x38]
	mov byte ptr [ebp-4],0x4F
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],bl
	cmp eax,esi
	je Block277

 Block276:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block277:
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x4D
	cmp eax,esi
	je Block279

 Block278:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block279:
	mov eax,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],0x40
	cmp eax,esi
	je Block281

 Block280:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block281:
	mov eax,dword ptr [ebp-0x34]
	mov ecx,dword ptr [eax+0x3D]
	mov edx,dword ptr [ebp+0x20]
	push ecx
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	cwde
	cdq
	mov ecx,0x3E8
	idiv ecx
	mov eax,0x51EB851F
	lea ecx,[ebp+0x38]
	imul edx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,eax
	sub edx,5
	neg edx
	sbb edx,edx
	and edx,eax
	mov eax,dword ptr [ebp+0x38]
	push edx
	push offset _S_JOB__1
	push eax
	push ecx
	call ZXString16::Format
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0x18
	lea edx,[ebp+0x58]
	push edx
	call edi
	lea eax,[ebp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block283

 Block282:
	push eax
	call _com_issue_error

 Block283:
	lea ecx,[ebp+8]
	push ecx
	mov byte ptr [ebp-4],0x50
	call edi
	lea edx,[ebp+8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block285

 Block284:
	push eax
	call _com_issue_error

 Block285:
	mov edx,dword ptr [ebp+0x38]
	push esi
	push esi
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+8]
	push ecx
	push ecx
	mov dword ptr [ebp+0x20],esp
	mov ecx,esp
	mov bl,0x51
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x52
	cmp dword ptr [_D_G_RM],esi
	jne Block287

 Block286:
	push 0x80004003
	call _com_issue_error

 Block287:
	lea eax,[ebp-0x44]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x53
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x18]
	mov dword ptr [ebp+0x18],esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block290

 Block288:
	cmp eax,0x80004002
	je Block290

 Block289:
	push eax
	call _com_issue_error

 Block290:
	mov edi,8
	mov byte ptr [ebp-4],0x55
	cmp word ptr [ebp-0x44],di
	jne Block293

 Block291:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	cmp eax,esi
	je Block294

 Block292:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block294

 Block293:
	lea edx,[ebp-0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block294:
	mov byte ptr [ebp-4],0x56
	cmp word ptr [ebp+8],di
	jne Block297

 Block295:
	xor eax,eax
	mov word ptr [ebp+8],ax
	mov eax,dword ptr [ebp+0x10]
	cmp eax,esi
	je Block298

 Block296:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block298

 Block297:
	lea ecx,[ebp+8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block298:
	mov byte ptr [ebp-4],0x57
	cmp word ptr [ebp+0x58],di
	jne Block301

 Block299:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	cmp eax,esi
	je Block302

 Block300:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block302

 Block301:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block302:
	mov ecx,3
	mov word ptr [ebp-0x30],cx
	mov dword ptr [ebp-0x28],0xFF
	mov edi,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],0x58
	cmp edi,esi
	jne Block304

 Block303:
	push 0x80004003
	call _com_issue_error

 Block304:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[ebp+0x34]
	push eax
	push edi
	mov dword ptr [ebp+0x34],esi
	call ecx
	cmp eax,esi
	jge Block306

 Block305:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block306:
	mov ecx,dword ptr [ebp+0x40]
	lea edx,[ebp-0x30]
	push edx
	push edi
	mov eax,0x52
	sub eax,dword ptr [ebp+0x34]
	push 0x15
	push eax
	call IWzCanvas::Copy
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],0x57
	jne Block309

 Block307:
	mov eax,dword ptr [ebp-0x28]
	xor ecx,ecx
	mov word ptr [ebp-0x30],cx
	cmp eax,esi
	je Block310

 Block308:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block310

 Block309:
	lea edx,[ebp-0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block310:
	mov eax,dword ptr [ebp+4]
	mov eax,dword ptr [eax+0xC]
	cmp eax,esi
	jle Block312

 Block311:
	mov esi,offset _S_UP
	jmp Block314

 Block312:
	mov esi,offset _S_DOWN
	jl Block314

 Block313:
	mov esi,offset _S_SAME

 Block314:
	lea ecx,[ebp+0x20]
	push 0xBCE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[ebp+0x38]
	push edx
	mov byte ptr [ebp-4],0x59
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x20]
	add esp,0xC
	mov byte ptr [ebp-4],0x57
	test eax,eax
	je Block316

 Block315:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block316:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x1C]
	push eax
	call esi
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block318

 Block317:
	push eax
	call _com_issue_error

 Block318:
	lea edx,[ebp-0x30]
	push edx
	mov byte ptr [ebp-4],0x5A
	call esi
	lea eax,[ebp-0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block320

 Block319:
	push eax
	call _com_issue_error

 Block320:
	mov eax,dword ptr [ebp+0x38]
	push 0
	push 0
	lea ecx,[ebp-0x1C]
	push ecx
	lea edx,[ebp-0x30]
	push edx
	push ecx
	mov dword ptr [ebp+0x20],esp
	mov ecx,esp
	mov bl,0x5B
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x5C
	jne Block322

 Block321:
	push 0x80004003
	call _com_issue_error

 Block322:
	lea ecx,[ebp-0x64]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x5D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x1C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block325

 Block323:
	cmp eax,0x80004002
	je Block325

 Block324:
	push eax
	call _com_issue_error

 Block325:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x64],si
	jne Block328

 Block326:
	mov eax,dword ptr [ebp-0x5C]
	xor edx,edx
	mov word ptr [ebp-0x64],dx
	test eax,eax
	je Block329

 Block327:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block329

 Block328:
	lea eax,[ebp-0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block329:
	mov byte ptr [ebp-4],0x5A
	cmp word ptr [ebp-0x30],si
	jne Block332

 Block330:
	mov eax,dword ptr [ebp-0x28]
	xor ecx,ecx
	mov word ptr [ebp-0x30],cx
	test eax,eax
	je Block333

 Block331:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block333

 Block332:
	lea edx,[ebp-0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block333:
	mov byte ptr [ebp-4],0x57
	cmp word ptr [ebp-0x1C],si
	jne Block336

 Block334:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block337

 Block335:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block337

 Block336:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block337:
	mov edx,3
	mov word ptr [ebp-0x1C],dx
	mov dword ptr [ebp-0x14],0xFF
	mov ecx,dword ptr [ebp+4]
	mov edx,dword ptr [ecx+0xC]
	mov esi,dword ptr [ebp+0x1C]
	mov ecx,dword ptr [ebp+0x40]
	neg edx
	sbb edx,edx
	lea eax,[ebp-0x1C]
	push eax
	and edx,0xFFFFFFFC
	push esi
	add edx,0x2A
	push edx
	push 0xA0
	mov byte ptr [ebp-4],0x5E
	call IWzCanvas::Copy
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x57
	jne Block340

 Block338:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block341

 Block339:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block341

 Block340:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block341:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],0x40
	call eax
	mov byte ptr [ebp-4],0x2C
	test esi,esi
	je Block343

 Block342:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block343:
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x1C
	test eax,eax
	je Block345

 Block344:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block345:
	mov eax,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block347

 Block346:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block347:
	mov eax,dword ptr [ebp]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block349

 Block348:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block349:
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block351

 Block350:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block351:
	mov eax,dword ptr [ebp+0x40]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0x74]
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
	ret 4
}
}
// CUIAvatarVAC::OnMouseButton
__SUB_CLASS_THIS(001ED430, __thiscall, 139146,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [esp+0xC]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x14]
	cmp edx,0x201
	jne Block5

 Block1:
	push edi
	push ecx
	lea edi,[esi-4]
	push eax
	mov ecx,edi
	call CUIAvatarVAC::GetSelectedIdx
	test eax,eax
	jl Block3

 Block2:
	mov ecx,dword ptr [esi+0x7C]
	mov dword ptr [ecx+0x1D0],eax
	push eax
	mov ecx,edi
	call CUIAvatarVAC::SetSelection

 Block3:
	pop edi

 Block4:
	pop esi
	ret 0x10

 Block5:
	cmp edx,0x203
	jne Block4

 Block6:
	push ecx
	push eax
	lea ecx,[esi-4]
	call CUIAvatarVAC::GetSelectedIdx
	test eax,eax
	jl Block4

 Block7:
	mov ecx,dword ptr [esi+0x7C]
	call CLogin::SendSelectCharPacketByVAC
	pop esi
	ret 0x10
}
}
// CUICharSelect::SetKeyFocus
__SUB_CLASS_THIS(001E0270, __thiscall, 139018,  CUICharSelect, void, long) {
__asm {

 Block0:
	push ebx
	push esi
	mov ebx,ecx
	push edi
	lea esi,[ebx+0x90]
	mov edi,3

 Block1:
	mov ecx,dword ptr [esi]
	push 0
	call CCtrlButton::SetKeyFocus
	add esi,8
	sub edi,1
	jne Block1

 Block2:
	mov eax,dword ptr [esp+0x10]
	cmp eax,2
	ja Block4

 Block3:
	mov ecx,dword ptr [ebx+eax*8+0x90]
	push 1
	call CCtrlButton::SetKeyFocus

 Block4:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CUICharSelect::IsRequestValid
__SUB_CLASS_THIS0(001E00D0, __thiscall, 139019,  CUICharSelect, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x84]
	cmp dword ptr [eax+0x1AC],0
	jne Block3

 Block1:
	cmp dword ptr [eax+0x1A4],2
	jne Block3

 Block2:
	mov eax,1
	ret

 Block3:
	xor eax,eax
	ret
}
}
// CUIAvatar::OnMouseMove
_SUB_EXCEPTION_HANDLER(1E07B0)
__SUB_CLASS_THIS(001E07B0, __thiscall, 139078,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E07B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esi+0x13C]
	dec ecx
	mov eax,0x55555556
	imul ecx
	mov eax,edx
	shr eax,0x1F
	lea ecx,[edx+eax+1]
	cmp ecx,1
	jle Block74

 Block1:
	mov edx,dword ptr [esp+0x44]
	mov eax,dword ptr [esp+0x48]
	lea ecx,[esp+0x14]
	push ecx
	push offset _D_RTPREV
	mov dword ptr [esp+0x1C],edx
	mov dword ptr [esp+0x20],eax
	call _anon__PtInRect
	add esp,8
	test eax,eax
	je Block25

 Block2:
	mov ecx,dword ptr [_D_VTMISSING+4]
	mov eax,dword ptr [_D_VTMISSING]
	mov edx,dword ptr [_D_VTMISSING+8]
	mov edi,dword ptr [_D_VTMISSING+12]
	mov dword ptr [esp+0x28],ecx
	mov dword ptr [esp+0x18],ecx
	mov ecx,dword ptr [esi+0x104]
	mov ebx,eax
	mov dword ptr [esp+0x2C],edx
	mov ebp,eax
	mov dword ptr [esp+0x1C],edx
	mov dword ptr [esp+0x20],edi
	test ecx,ecx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[esp+0x44]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x3C],0
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],ebx
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [esp+0x28]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x40]
	push 0
	push 0
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x90]
	push ecx
	call eax
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov ecx,dword ptr [_D_VTMISSING+4]
	mov eax,dword ptr [_D_VTMISSING]
	mov edx,dword ptr [_D_VTMISSING+8]
	mov edi,dword ptr [_D_VTMISSING+12]
	mov dword ptr [esp+0x28],ecx
	mov dword ptr [esp+0x18],ecx
	mov ecx,dword ptr [esi+0x108]
	mov ebx,eax
	mov dword ptr [esp+0x2C],edx
	mov ebp,eax
	mov dword ptr [esp+0x1C],edx
	mov dword ptr [esp+0x20],edi
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea eax,[esp+0x44]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x3C],1
	test ecx,ecx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],ebx
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [esp+0x28]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x40]
	push 0
	push 0xFF
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x90]
	push ecx
	call eax
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov ecx,dword ptr [_D_VTMISSING+4]
	mov eax,dword ptr [_D_VTMISSING]
	mov edx,dword ptr [_D_VTMISSING+8]
	mov edi,dword ptr [_D_VTMISSING+12]
	mov dword ptr [esp+0x28],ecx
	mov dword ptr [esp+0x18],ecx
	mov ecx,dword ptr [esi+0x10C]
	mov ebx,eax
	mov dword ptr [esp+0x2C],edx
	mov ebp,eax
	mov dword ptr [esp+0x1C],edx
	mov dword ptr [esp+0x20],edi
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea eax,[esp+0x44]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x3C],2
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],ebx
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [esp+0x28]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x40]
	push 0
	push 0xFF
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x90]
	push ecx
	call eax
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov ecx,dword ptr [_D_VTMISSING+4]
	mov eax,dword ptr [_D_VTMISSING]
	mov edx,dword ptr [_D_VTMISSING+8]
	mov edi,dword ptr [_D_VTMISSING+12]
	mov dword ptr [esp+0x28],ecx
	mov dword ptr [esp+0x18],ecx
	mov ecx,dword ptr [esi+0x110]
	mov ebx,eax
	mov dword ptr [esp+0x2C],edx
	mov ebp,eax
	mov dword ptr [esp+0x1C],edx
	mov dword ptr [esp+0x20],edi
	test ecx,ecx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea eax,[esp+0x44]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x3C],3
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov esi,dword ptr [esp+0x28]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [esp+0x28]
	mov dword ptr [eax+0xC],edi
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [esp+0x40]
	push 0
	push 0
	mov dword ptr [eax+0xC],esi
	mov eax,dword ptr [edx+0x90]
	push ecx
	call eax
	mov eax,dword ptr [esp+0x44]
	jmp Block72

 Block25:
	lea eax,[esp+0x14]
	push eax
	push offset _D_RTNEXT
	call _anon__PtInRect
	mov ecx,dword ptr [_D_VTMISSING+4]
	mov edx,dword ptr [_D_VTMISSING+8]
	mov edi,dword ptr [_D_VTMISSING+12]
	add esp,8
	test eax,eax
	mov eax,dword ptr [_D_VTMISSING]
	mov dword ptr [esp+0x28],ecx
	mov dword ptr [esp+0x18],ecx
	mov ecx,dword ptr [esi+0x104]
	mov dword ptr [esp+0x2C],edx
	mov dword ptr [esp+0x1C],edx
	mov dword ptr [esp+0x20],edi
	mov ebx,eax
	mov ebp,eax
	je Block49

 Block26:
	test ecx,ecx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea edx,[esp+0x44]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x3C],4
	test ecx,ecx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],ebx
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [esp+0x28]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x40]
	push 0
	push 0xFF
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x90]
	push ecx
	call eax
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block32:
	mov ecx,dword ptr [_D_VTMISSING+4]
	mov eax,dword ptr [_D_VTMISSING]
	mov edx,dword ptr [_D_VTMISSING+8]
	mov edi,dword ptr [_D_VTMISSING+12]
	mov dword ptr [esp+0x28],ecx
	mov dword ptr [esp+0x18],ecx
	mov ecx,dword ptr [esi+0x108]
	mov ebx,eax
	mov dword ptr [esp+0x2C],edx
	mov ebp,eax
	mov dword ptr [esp+0x1C],edx
	mov dword ptr [esp+0x20],edi
	test ecx,ecx
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea eax,[esp+0x44]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x3C],5
	test ecx,ecx
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],ebx
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [esp+0x28]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x40]
	push 0
	push 0
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x90]
	push ecx
	call eax
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block38

 Block37:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block38:
	mov ecx,dword ptr [_D_VTMISSING+4]
	mov eax,dword ptr [_D_VTMISSING]
	mov edx,dword ptr [_D_VTMISSING+8]
	mov edi,dword ptr [_D_VTMISSING+12]
	mov dword ptr [esp+0x28],ecx
	mov dword ptr [esp+0x18],ecx
	mov ecx,dword ptr [esi+0x10C]
	mov ebx,eax
	mov dword ptr [esp+0x2C],edx
	mov ebp,eax
	mov dword ptr [esp+0x1C],edx
	mov dword ptr [esp+0x20],edi
	test ecx,ecx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea eax,[esp+0x44]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x3C],6
	test ecx,ecx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],ebx
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [esp+0x28]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x40]
	push 0
	push 0
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x90]
	push ecx
	call eax
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	mov ecx,dword ptr [_D_VTMISSING+4]
	mov eax,dword ptr [_D_VTMISSING]
	mov edx,dword ptr [_D_VTMISSING+8]
	mov edi,dword ptr [_D_VTMISSING+12]
	mov dword ptr [esp+0x28],ecx
	mov dword ptr [esp+0x18],ecx
	mov ecx,dword ptr [esi+0x110]
	mov ebx,eax
	mov dword ptr [esp+0x2C],edx
	mov ebp,eax
	mov dword ptr [esp+0x1C],edx
	mov dword ptr [esp+0x20],edi
	test ecx,ecx
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	lea eax,[esp+0x44]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x3C],7
	test ecx,ecx
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	mov esi,dword ptr [esp+0x28]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [esp+0x28]
	mov dword ptr [eax+0xC],edi
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [esp+0x40]
	push 0
	push 0xFF
	mov dword ptr [eax+0xC],esi
	mov eax,dword ptr [edx+0x90]
	push ecx
	call eax
	mov eax,dword ptr [esp+0x44]
	jmp Block72

 Block49:
	test ecx,ecx
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	lea eax,[esp+0x44]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x3C],8
	test ecx,ecx
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],ebx
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [esp+0x28]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x40]
	push 0
	push 0xFF
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x90]
	push ecx
	call eax
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block55:
	mov ecx,dword ptr [_D_VTMISSING+4]
	mov eax,dword ptr [_D_VTMISSING]
	mov edx,dword ptr [_D_VTMISSING+8]
	mov edi,dword ptr [_D_VTMISSING+12]
	mov dword ptr [esp+0x28],ecx
	mov dword ptr [esp+0x18],ecx
	mov ecx,dword ptr [esi+0x108]
	mov ebx,eax
	mov dword ptr [esp+0x2C],edx
	mov ebp,eax
	mov dword ptr [esp+0x1C],edx
	mov dword ptr [esp+0x20],edi
	test ecx,ecx
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	lea eax,[esp+0x44]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x3C],9
	test ecx,ecx
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],ebx
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [esp+0x28]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x40]
	push 0
	push 0xFF
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x90]
	push ecx
	call eax
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov ecx,dword ptr [_D_VTMISSING+4]
	mov eax,dword ptr [_D_VTMISSING]
	mov edx,dword ptr [_D_VTMISSING+8]
	mov edi,dword ptr [_D_VTMISSING+12]
	mov dword ptr [esp+0x28],ecx
	mov dword ptr [esp+0x18],ecx
	mov ecx,dword ptr [esi+0x10C]
	mov ebx,eax
	mov dword ptr [esp+0x2C],edx
	mov ebp,eax
	mov dword ptr [esp+0x1C],edx
	mov dword ptr [esp+0x20],edi
	test ecx,ecx
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	lea eax,[esp+0x44]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x3C],0xA
	test ecx,ecx
	jne Block65

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],ebx
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [esp+0x28]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x40]
	push 0
	push 0
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x90]
	push ecx
	call eax
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block67

 Block66:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block67:
	mov ecx,dword ptr [_D_VTMISSING+4]
	mov eax,dword ptr [_D_VTMISSING]
	mov edx,dword ptr [_D_VTMISSING+8]
	mov edi,dword ptr [_D_VTMISSING+12]
	mov dword ptr [esp+0x28],ecx
	mov dword ptr [esp+0x18],ecx
	mov ecx,dword ptr [esi+0x110]
	mov ebx,eax
	mov dword ptr [esp+0x2C],edx
	mov ebp,eax
	mov dword ptr [esp+0x1C],edx
	mov dword ptr [esp+0x20],edi
	test ecx,ecx
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea eax,[esp+0x48]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x3C],0xB
	test ecx,ecx
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	mov esi,dword ptr [esp+0x28]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [esp+0x28]
	mov dword ptr [eax+0xC],edi
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [esp+0x40]
	push 0
	push 0
	mov dword ptr [eax+0xC],esi
	mov eax,dword ptr [edx+0x90]
	push ecx
	call eax
	mov eax,dword ptr [esp+0x48]

 Block72:
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block74

 Block73:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block74:
	xor eax,eax
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 8
}
}
// CUICharDetailVAC::~CUICharDetailVAC
_SUB_EXCEPTION_HANDLER(1E1580)
__SUB_CLASS_THIS0(001E1580, __thiscall, 139115,  CUICharDetailVAC, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1E1580
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
	int 3// TODO: 	mov dword ptr [esi],offset CUICharDetailVAC::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUICharDetailVAC::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUICharDetailVAC::`vftable'{for `ZRefCounted'}
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push 2
	push 4
	lea eax,[esi+0x104]
	push eax
	mov dword ptr [esp+0x24],2
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0xFC]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov ecx,esi
	mov dword ptr [TSingleton<CUICharDetailVAC>::ms_pInstance],0
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CFadeWnd::~CFadeWnd
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
