#include "regen.hpp"
// UIScreenMsg.ipp
#include "UIScreenMsg.hpp"

// CUIScreenMsg::ScrMsg_Add
_SUB_EXCEPTION_HANDLER(43DC40)
__SUB_CLASS_THIS(0043DC40, __thiscall, 45801,  CUIScreenMsg, void, const char*, FONT_TYPE, FONT_TYPE) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43DC40
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
	mov ebx,ecx
	mov dword ptr [esp+0x1C],ebx
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	xor ebp,ebp
	cmp eax,ebp
	je Block2

 Block1:
	cmp dword ptr [eax+0x3850],ebp
	jne Block105

 Block2:
	mov eax,dword ptr [ebx+0x10]
	cmp eax,6
	jb Block23

 Block3:
	mov eax,dword ptr [ebx+0x14]
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x24],edi
	cmp edi,ebp
	je Block5

 Block4:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block5:
	mov edx,3
	mov dword ptr [esp+0x60],ebp
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],ebp
	mov byte ptr [esp+0x60],1
	cmp edi,ebp
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,edi
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x60],3
	jne Block10

 Block8:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block11:
	mov esi,dword ptr [esp+0x20]
	cmp esi,ebp
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block15

 Block14:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block15:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	mov ebp,dword ptr [esp+0x14]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],0
	call eax
	test eax,eax
	jge Block17

 Block16:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block17:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push ebp
	push edx
	push 0
	push 0
	push esi
	call eax
	test eax,eax
	jge Block19

 Block18:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block19:
	mov eax,dword ptr [ebx+0x14]
	lea ebp,[ebx+8]
	push eax
	mov ecx,ebp
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAt
	mov ecx,ebp
	call ZList<_x_com_ptr<IWzGr2DLayer>>::AddTail_
	mov ebp,dword ptr [eax]
	cmp ebp,edi
	je Block22

 Block20:
	mov dword ptr [eax],edi
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx
	test ebp,ebp
	je Block22

 Block21:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block22:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x64],0
	call eax
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x64],0xFFFFFFFF
	call edx
	xor ebp,ebp

 Block23:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	mov ebp,dword ptr [esp+0x68]
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov ebx,4
	push ebp
	mov dword ptr [esp+0x6C],ebx
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x74]
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0x70],5
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x68],6
	test ecx,ecx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov byte ptr [esp+0x68],7
	call IWzFont::CalcTextWidth
	mov esi,0x122
	sub esi,eax
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x60],bl
	test eax,eax
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block29:
	mov ebx,8
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp word ptr [esp+0x28],bx
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov eax,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax+0x18]
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x24],edi
	test edi,edi
	je Block35

 Block34:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block35:
	mov eax,3
	mov dword ptr [esp+0x60],ebx
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],0
	mov byte ptr [esp+0x60],9
	test edi,edi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea ecx,[esp+0x28]
	push ecx
	lea edx,[esp+0x6C]
	push edx
	mov ecx,edi
	call IWzGr2DLayer::Getcanvas
	mov byte ptr [esp+0x60],0xB
	cmp word ptr [esp+0x28],bx
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x48]
	push edx
	call ebx
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x64],0xC
	call ebx
	lea edx,[esp+0x38]
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
	mov edx,dword ptr [esp+0x70]
	lea eax,[esp+0x48]
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	push edx
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x70],0xD
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [esp+0x80],esp
	mov ecx,esp
	mov bl,0xE
	push ebp
	mov byte ptr [esp+0x74],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [esp+0x78],0
	mov byte ptr [esp+0x70],0xF
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	push 1
	lea ecx,[esi+1]
	push ecx
	mov ecx,dword ptr [esp+0x80]
	mov byte ptr [esp+0x78],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x60],0xD
	test eax,eax
	je Block49

 Block48:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block49:
	mov ebx,8
	mov byte ptr [esp+0x60],0xC
	cmp word ptr [esp+0x38],bx
	jne Block52

 Block50:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov byte ptr [esp+0x60],0xB
	cmp word ptr [esp+0x48],bx
	jne Block56

 Block54:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push edx
	call ebx
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block59

 Block58:
	push eax
	call _com_issue_error

 Block59:
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x64],0x10
	call ebx
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	mov edx,dword ptr [esp+0x6C]
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	push edx
	lea eax,[esp+0x7C]
	push eax
	mov byte ptr [esp+0x70],0x11
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [esp+0x7C],esp
	mov ecx,esp
	mov bl,0x12
	push ebp
	mov byte ptr [esp+0x74],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x78]
	push 0
	mov byte ptr [esp+0x74],0x13
	push esi
	mov byte ptr [esp+0x78],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0x60],0x11
	test eax,eax
	je Block63

 Block62:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block63:
	mov esi,8
	mov byte ptr [esp+0x60],0x10
	cmp word ptr [esp+0x48],si
	jne Block70

 Block64:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block66

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block66:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block67:
	mov byte ptr [esp+0x60],0xB
	cmp word ptr [esp+0x38],si
	jne Block71

 Block68:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block72

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block70:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x48]
	push ecx
	call ebp
	jmp Block67

 Block71:
	lea eax,[esp+0x38]
	push eax
	call ebp

 Block72:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push ecx
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block74

 Block73:
	push eax
	call _com_issue_error

 Block74:
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x64],0x14
	call esi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block76

 Block75:
	push eax
	call _com_issue_error

 Block76:
	lea edx,[esp+0x6C]
	mov bl,0x15
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x64],bl
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x60],0x16
	test ecx,ecx
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x4C]
	push edx
	push 0
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x60],bl
	test eax,eax
	je Block80

 Block79:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block80:
	mov ebx,8
	mov byte ptr [esp+0x60],0x14
	cmp word ptr [esp+0x48],bx
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea ecx,[esp+0x48]
	push ecx
	call ebp

 Block84:
	mov byte ptr [esp+0x60],0xB
	cmp word ptr [esp+0x38],bx
	jne Block87

 Block85:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea eax,[esp+0x38]
	push eax
	call ebp

 Block88:
	lea ecx,[esp+0x38]
	push ecx
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block90

 Block89:
	push eax
	call _com_issue_error

 Block90:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[esp+0x6C]
	push ecx
	push edi
	mov byte ptr [esp+0x68],0x17
	mov dword ptr [esp+0x74],0
	call edx
	test eax,eax
	jge Block92

 Block91:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block92:
	mov eax,dword ptr [esp+0x6C]
	add eax,0x1770
	mov ecx,3
	mov word ptr [esp+0x48],cx
	mov dword ptr [esp+0x50],eax
	lea edx,[esp+0x70]
	mov bl,0x18
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x64],bl
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x60],0x19
	test ecx,ecx
	jne Block94

 Block93:
	push 0x80004003
	call _com_issue_error

 Block94:
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x4C]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0x60],bl
	test eax,eax
	je Block96

 Block95:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block96:
	mov esi,8
	mov byte ptr [esp+0x60],0x17
	cmp word ptr [esp+0x48],si
	jne Block99

 Block97:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea ecx,[esp+0x48]
	push ecx
	call ebp

 Block100:
	mov byte ptr [esp+0x60],0xB
	cmp word ptr [esp+0x38],si
	jne Block103

 Block101:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea eax,[esp+0x38]
	push eax
	call ebp

 Block104:
	mov ecx,dword ptr [esp+0x1C]
	call CUIScreenMsg::LayoutScrMsg
	mov eax,dword ptr [esp+0x68]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x64],8
	call edx
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [esp+0x64],0xFFFFFFFF
	call ecx

 Block105:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 0xC
}
}
// CUIScreenMsg::CUIScreenMsg
_SUB_EXCEPTION_HANDLER(43D8B0)
__SUB_CLASS_THIS0(0043D8B0, __thiscall, 45797,  CUIScreenMsg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43D8B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x5C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x70]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x20],ecx
	lea eax,[ecx+4]
	xor ebx,ebx
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFFC
	mov dword ptr [TSingleton<CUIScreenMsg>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIScreenMsg>::ms_pInstance],ebx

 Block3:
	lea eax,[ecx+8]
	int 3// TODO: 	mov dword ptr [ecx],offset CUIScreenMsg::`vftable'
	mov dword ptr [esp+0x78],ebx
	int 3// TODO: 	mov dword ptr [eax],offset ZList<_x_com_ptr<IWzGr2DLayer>>::`vftable'
	mov dword ptr [eax+8],ebx
	mov dword ptr [eax+0xC],ebx
	mov dword ptr [eax+0x10],ebx
	mov byte ptr [esp+0x78],1
	mov dword ptr [esp+0x1C],ebx
	lea esp,[esp]

 Block4:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x50]
	push eax
	call esi
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block45

 Block5:
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x7C],2
	call esi
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block45

 Block6:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x78],3
	cmp ecx,ebx
	je Block46

 Block7:
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x44]
	push eax
	push 0xC0061634
	push 0xE
	push 0x122
	push ebx
	push ebx
	lea edx,[esp+0x40]
	push edx
	call IWzGr2D::CreateLayer
	mov esi,8
	mov byte ptr [esp+0x78],5
	cmp word ptr [esp+0x40],si
	jne Block14

 Block8:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block10:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block11:
	mov byte ptr [esp+0x78],6
	cmp word ptr [esp+0x50],si
	jne Block15

 Block12:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	cmp eax,ebx
	je Block16

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block14:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x40]
	push ecx
	call ebp
	jmp Block11

 Block15:
	lea eax,[esp+0x50]
	push eax
	call ebp

 Block16:
	push esi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov byte ptr [esp+0x78],7
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],eax
	cmp eax,ebx
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block18:
	mov edi,dword ptr [esp+0x24]
	mov byte ptr [esp+0x78],8
	cmp edi,ebx
	je Block46

 Block19:
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
	cmp eax,ebx
	jge Block21

 Block20:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block21:
	mov byte ptr [esp+0x78],7
	cmp word ptr [esp+0x30],si
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebx
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0x30]
	push edx
	call ebp

 Block25:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x78],6
	cmp eax,ebx
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block27:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push edi
	call ecx
	cmp eax,ebx
	jge Block29

 Block28:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block29:
	mov edx,3
	mov word ptr [esp+0x60],dx
	mov dword ptr [esp+0x68],ebx
	lea eax,[esp+0x60]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x80],9
	call IWzGr2DLayer::Getcanvas
	mov byte ptr [esp+0x78],0xB
	cmp word ptr [esp+0x60],si
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	cmp eax,ebx
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea eax,[esp+0x60]
	push eax
	call ebp

 Block33:
	mov esi,dword ptr [esp+0x2C]
	cmp esi,ebx
	je Block46

 Block34:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call eax
	cmp eax,ebx
	jge Block36

 Block35:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block36:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	mov ebp,dword ptr [esp+0x14]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],ebx
	call eax
	cmp eax,ebx
	jge Block38

 Block37:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block38:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push ebp
	push edx
	push ebx
	push ebx
	push esi
	call eax
	cmp eax,ebx
	jge Block40

 Block39:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block40:
	mov ecx,dword ptr [esp+0x20]
	add ecx,8
	call ZList<_x_com_ptr<IWzGr2DLayer>>::AddTail_
	mov ebp,dword ptr [eax]
	cmp ebp,edi
	je Block43

 Block41:
	mov dword ptr [eax],edi
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx
	cmp ebp,ebx
	je Block43

 Block42:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block43:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x7C],6
	call eax
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [esp+0x7C],1
	call edx
	mov eax,dword ptr [esp+0x1C]
	inc eax
	cmp eax,6
	mov dword ptr [esp+0x1C],eax
	jl Block4

 Block44:
	mov esi,dword ptr [esp+0x20]
	mov ecx,esi
	call CUIScreenMsg::LayoutScrMsg
	mov eax,esi
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x68
	ret

 Block45:
	push eax
	call _com_issue_error

 Block46:
	push 0x80004003
	call _com_issue_error
}
}
// CUIScreenMsg::MoveScrMsg
_SUB_EXCEPTION_HANDLER(43D630)
__SUB_CLASS_THIS0(0043D630, __thiscall, 45799,  CUIScreenMsg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43D630
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
	mov esi,ecx
	mov eax,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	xor ebx,ebx
	cmp eax,ebx
	je Block20

 Block1:
	lea ecx,[eax+0x1824]
	call CUIStatusBar::CQuickSlot::IsSlideUp
	mov edi,eax
	mov eax,dword ptr [esi+0x14]
	neg edi
	sbb edi,edi
	and edi,0xFFFFFFC1
	add edi,0xFFFFFF54
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block20

 Block2:
	mov ebp,dword ptr [ZImports::_VariantInit]
	jmp Block4

 Block4:
	lea eax,[esp+0x14]
	push eax
	call ZList<_x_com_ptr<IWzGr2DLayer>>::GetNext
	mov esi,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+0x18],esi
	cmp esi,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block6:
	lea eax,[esp+0x2C]
	push eax
	mov dword ptr [esp+0x48],ebx
	call ebp
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block21

 Block7:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call ebp
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block21

 Block8:
	mov byte ptr [esp+0x44],2
	cmp esi,ebx
	je Block22

 Block9:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0x2C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x48]
	push edi
	push 0xFFFFFED8
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x90]
	push esi
	call eax
	cmp eax,ebx
	jge Block11

 Block10:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block11:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x44],1
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x44],bl
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebx
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	add edi,0xE
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call eax
	cmp dword ptr [esp+0x14],ebx
	jne Block4

 Block20:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret

 Block21:
	push eax
	call _com_issue_error

 Block22:
	push 0x80004003
	call _com_issue_error
}
}
// CUIScreenMsg::LayoutScrMsg
_SUB_EXCEPTION_HANDLER(43D440)
__SUB_CLASS_THIS0(0043D440, __thiscall, 45799,  CUIScreenMsg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43D440
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
	mov esi,ecx
	mov eax,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	xor ebx,ebx
	cmp eax,ebx
	je Block20

 Block1:
	lea ecx,[eax+0x1824]
	call CUIStatusBar::CQuickSlot::IsSlideUp
	mov edi,eax
	mov eax,dword ptr [esi+0x14]
	neg edi
	sbb edi,edi
	and edi,0xFFFFFFC1
	add edi,0xFFFFFF54
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block20

 Block2:
	mov ebp,dword ptr [ZImports::_VariantInit]
	jmp Block4

 Block4:
	lea eax,[esp+0x14]
	push eax
	call ZList<_x_com_ptr<IWzGr2DLayer>>::GetNext
	mov esi,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+0x18],esi
	cmp esi,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block6:
	lea eax,[esp+0x2C]
	push eax
	mov dword ptr [esp+0x48],ebx
	call ebp
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block21

 Block7:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],1
	call ebp
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block21

 Block8:
	mov byte ptr [esp+0x44],2
	cmp esi,ebx
	je Block22

 Block9:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0x2C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x48]
	push edi
	push 0xFFFFFED8
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x90]
	push esi
	call eax
	cmp eax,ebx
	jge Block11

 Block10:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block11:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x44],1
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x44],bl
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebx
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	add edi,0xE
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call eax
	cmp dword ptr [esp+0x14],ebx
	jne Block4

 Block20:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret

 Block21:
	push eax
	call _com_issue_error

 Block22:
	push 0x80004003
	call _com_issue_error
}
}
// CUIScreenMsg::~CUIScreenMsg
_SUB_EXCEPTION_HANDLER(43D820)
__SUB_CLASS_THIS0(0043D820, __thiscall, 45799,  CUIScreenMsg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43D820
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+8],ecx
	int 3// TODO: 	mov dword ptr [ecx],offset CUIScreenMsg::`vftable'
	lea esi,[ecx+8]
	mov ecx,esi
	mov dword ptr [esp+0x14],1
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	mov ecx,esi
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [esi],offset ZList<_x_com_ptr<IWzGr2DLayer>>::`vftable'
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	mov dword ptr [TSingleton<CUIScreenMsg>::ms_pInstance],0
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
