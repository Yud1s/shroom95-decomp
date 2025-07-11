#include "regen.hpp"
// AvatarMegaphone.ipp
#include "AvatarMegaphone.hpp"

// CAvatarMegaphone::HelloAvatarMegaphone
_SUB_EXCEPTION_HANDLER(6E3C0)
__SUB_CLASS_THIS0(0006E3C0, __thiscall, 62344,  CAvatarMegaphone, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_6E3C0
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
	mov edi,ecx
	mov eax,dword ptr [edi+0x2A0]
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ebx,[eax-0xE1]
	sub eax,ebx
	add eax,0x64
	cdq
	mov ebp,eax
	xor ebp,edx
	lea eax,[esp+0x30]
	sub ebp,edx
	push eax
	mov dword ptr [esp+0x28],ebp
	call esi
	lea ecx,[esp+0x30]
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
	lea edx,[esp+0x40]
	push edx
	mov dword ptr [esp+0x7C],0
	call esi
	lea eax,[esp+0x40]
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
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x7C],1
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x78],2
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x30]
	push edx
	mov edx,dword ptr [edi+0x2A0]
	lea eax,[esp+0x44]
	push eax
	push 0
	add edx,0x64
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x78],1
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x78],0
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	cmp word ptr [esp+0x30],8
	mov dword ptr [esp+0x78],0xFFFFFFFF
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block16:
	lea ecx,[esp+0x30]
	push ecx
	call esi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	lea eax,[esp+0x20]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x7C],3
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x78],4
	test esi,esi
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x58]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block22

 Block21:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block22:
	mov ecx,dword ptr [esp+0x14]
	lea eax,[ecx+ebp]
	mov edx,3
	mov word ptr [esp+0x40],dx
	mov dword ptr [esp+0x48],eax
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x7C],5
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x78],6
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x44]
	push eax
	push 0
	push ebx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x78],5
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov esi,8
	mov byte ptr [esp+0x78],4
	cmp word ptr [esp+0x40],si
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x78],3
	test eax,eax
	je Block32

 Block31:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block32:
	mov dword ptr [esp+0x78],0xFFFFFFFF
	cmp word ptr [esp+0x30],si
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov ebx,1
	mov dword ptr [esp+0x18],ebx

 Block37:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block38:
	lea edx,[esp+0x28]
	push edx
	mov ecx,edi
	mov dword ptr [esp+0x7C],7
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x78],8
	test esi,esi
	je Block5

 Block39:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block41

 Block40:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block41:
	fild dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x14]
	add eax,ebp
	mov dword ptr [esp+0x20],eax
	fmul qword ptr [__real_3fc999999999999a]
	mov ecx,5
	mov word ptr [esp+0x30],cx
	fimul dword ptr [esp+0x24]
	fild dword ptr [esp+0x20]
	faddp st(1),st(0)
	fstp qword ptr [esp+0x38]
	lea edx,[esp+0x1C]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x7C],9
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x78],0xA
	test esi,esi
	je Block5

 Block42:
	mov edx,dword ptr [esp+0x40]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x54]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x58]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x5C]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0x40]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x54]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x58]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x5C]
	mov dword ptr [eax+0xC],edx
	mov eax,ebx
	and eax,0x80000001
	push 0
	jns Block44

 Block43:
	dec eax
	or eax,0xFFFFFFFE
	inc eax

 Block44:
	mov ecx,dword ptr [ecx+0x94]
	neg eax
	sbb eax,eax
	and eax,0xA
	add eax,0xFFFFFFFB
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block46

 Block45:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block46:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x78],9
	test eax,eax
	je Block48

 Block47:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block48:
	mov esi,8
	mov byte ptr [esp+0x78],8
	cmp word ptr [esp+0x30],si
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
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x78],7
	test eax,eax
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	mov dword ptr [esp+0x78],0xFFFFFFFF
	cmp word ptr [esp+0x40],si
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	inc ebx
	cmp ebx,7
	mov dword ptr [esp+0x18],ebx
	jl Block37

 Block59:
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
	jge Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	lea ecx,[esp+0x40]
	push ecx
	mov dword ptr [esp+0x7C],0xB
	call esi
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block63

 Block62:
	push eax
	call _com_issue_error

 Block63:
	mov ecx,dword ptr [edi+0x2C8]
	mov bl,0xC
	mov byte ptr [esp+0x78],bl
	test ecx,ecx
	jne Block65

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	lea eax,[esp+0x28]
	push eax
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	xor ebp,ebp
	mov byte ptr [esp+0x78],0xD
	cmp esi,ebp
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0x50]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x64]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x68]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x6C]
	push ebp
	push ebp
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x90]
	push esi
	call eax
	cmp eax,ebp
	jge Block69

 Block68:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block69:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x78],bl
	cmp eax,ebp
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block71:
	mov esi,8
	mov byte ptr [esp+0x78],0xB
	cmp word ptr [esp+0x40],si
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,ebp
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov dword ptr [esp+0x78],0xFFFFFFFF
	cmp word ptr [esp+0x30],si
	jne Block78

 Block76:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,ebp
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block79:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	mov esi,dword ptr [edi+0x2C8]
	mov dword ptr [esp+0x78],0xE
	cmp esi,ebp
	jne Block83

 Block82:
	push 0x80004003
	call _com_issue_error

 Block83:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],ebp
	call edx
	cmp eax,ebp
	jge Block85

 Block84:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block85:
	mov eax,dword ptr [esp+0x18]
	add eax,0x5DC
	mov ecx,3
	mov word ptr [esp+0x50],cx
	mov dword ptr [esp+0x58],eax
	mov ecx,dword ptr [edi+0x2C8]
	mov bl,0xF
	mov byte ptr [esp+0x78],bl
	cmp ecx,ebp
	jne Block87

 Block86:
	push 0x80004003
	call _com_issue_error

 Block87:
	lea edx,[esp+0x2C]
	push edx
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x78],0x10
	cmp esi,ebp
	jne Block89

 Block88:
	push 0x80004003
	call _com_issue_error

 Block89:
	mov edx,dword ptr [esp+0x60]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x74]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x78]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x7C]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0x60]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x74]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x78]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x7C]
	push 0xFF
	push 0xFF
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x90]
	push esi
	call eax
	cmp eax,ebp
	jge Block91

 Block90:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block91:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x78],bl
	cmp eax,ebp
	je Block93

 Block92:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block93:
	mov esi,8
	mov byte ptr [esp+0x78],0xE
	cmp word ptr [esp+0x50],si
	jne Block96

 Block94:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,ebp
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block97:
	mov dword ptr [esp+0x78],0xFFFFFFFF
	cmp word ptr [esp+0x60],si
	jne Block100

 Block98:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	cmp eax,ebp
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block101:
	mov dword ptr [esp+0x14],ebp
	mov ecx,dword ptr [edi+0x2B8]
	mov edx,dword ptr [edi+0x2B4]
	mov eax,dword ptr [edi+0x2B0]
	push ecx
	mov ecx,dword ptr [edi+0x2AC]
	push edx
	mov edx,dword ptr [edi+0x2A8]
	push eax
	push ecx
	push edx
	lea eax,[esp+0x28]
	push offset _S_SSSSS
	push eax
	mov dword ptr [esp+0x94],0x11
	call ZXString<char>::Format
	add esp,0x1C
	push 1
	push ebp
	push 1
	push 0x400
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [esp+0x14]
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebp
	je Block103

 Block102:
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],ebp
	mov ecx,dword ptr [edi+0x294]
	mov edx,dword ptr [edi+0x298]
	mov dword ptr [esp+0x30],esp
	push ecx
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push edx
	push 0x12
	push esi
	call CUIStatusBar::ChatLogAdd

 Block103:
	mov edi,dword ptr [edi+0x80]
	cmp edi,0x523EB6
	je Block106

 Block104:
	cmp edi,0x523EB7
	je Block106

 Block105:
	cmp edi,0x523EB8
	jne Block107

 Block106:
	fld qword ptr [__real_4030000000000000]
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push ebp
	push ebp
	push ebp
	push ebp
	sub esp,8
	fstp qword ptr [esp]
	call CAnimationDisplayer::Effect_Tremble

 Block107:
	mov dword ptr [esp+0x78],0xFFFFFFFF
	cmp esi,ebp
	je Block109

 Block108:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block109:
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x68
	ret
}
}
// CAvatarMegaphone::OnCreate
_SUB_EXCEPTION_HANDLER(6EC60)
__SUB_CLASS_THIS(0006EC60, __thiscall, 62345,  CAvatarMegaphone, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_6EC60
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
	mov esi,ecx
	mov eax,dword ptr [esi+0x80]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemInfo
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_PATH
	mov dword ptr [esp+0x68],0
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x18]
	mov byte ptr [esp+0x64],1
	test ecx,ecx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x68],0
	call IWzProperty::Getitem
	mov edi,8
	mov byte ptr [esp+0x60],2
	cmp word ptr [eax],di
	jne Block4

 Block3:
	mov eax,dword ptr [eax+8]
	jmp Block5

 Block4:
	mov eax,offset _S___3

 Block5:
	lea ebx,[esi+0x2A4]
	push eax
	mov ecx,ebx
	call ZXString16::AssignCStr
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x60],0
	cmp word ptr [esp+0x38],di
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x38]
	push ecx
	call ebp

 Block9:
	push 0
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_EMOTION__1
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x68],3
	test ecx,ecx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x6C],0
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x68],4
	call get_int32
	add esp,8
	mov dword ptr [esi+0x29C],eax
	mov byte ptr [esp+0x60],0
	cmp word ptr [esp+0x38],di
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x38]
	push ecx
	call ebp

 Block15:
	lea edx,[esp+0x18]
	push 0
	push edx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x2C0]
	add esp,8
	cmp edi,eax
	je Block20

 Block16:
	mov dword ptr [esi+0x2C0],eax
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block18:
	test edi,edi
	je Block20

 Block19:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block20:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block22

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block22:
	lea ecx,[esp+0x18]
	push 0x45
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x2BC]
	add esp,8
	cmp edi,eax
	je Block27

 Block23:
	mov dword ptr [esi+0x2BC],eax
	test eax,eax
	je Block25

 Block24:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block25:
	test edi,edi
	je Block27

 Block26:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block27:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block29:
	lea ecx,[esi+0x28C]
	call ZRef<CAvatar>::_Alloc
	mov eax,dword ptr [esi+0x29C]
	push eax
	push 0x64
	push 0x55
	push 0x52
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	lea edx,[esp+0x30]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x7C],5
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x78],6
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push eax
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [esi+0x290]
	push 5
	lea edx,[esi+0x84]
	push edx
	mov byte ptr [esp+0x84],7
	call CAvatar::Init_1
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x60],0
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	push 0
	push 0xFF
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	push 0
	push 0
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x7C],8
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x78],9
	test ecx,ecx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push edx
	call IWzGr2DLayer::Getlt
	mov eax,dword ptr [ebx]
	push 0
	push eax
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x88],0xA
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x2C4]
	add esp,0x28
	cmp edi,eax
	je Block40

 Block36:
	mov dword ptr [esi+0x2C4],eax
	test eax,eax
	je Block38

 Block37:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block38:
	test edi,edi
	je Block40

 Block39:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block40:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block42

 Block41:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block42:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x60],0
	test eax,eax
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push eax
	call ebp
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	lea edx,[esp+0x28]
	mov bl,0xB
	push edx
	mov byte ptr [esp+0x64],bl
	call ebp
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	mov ecx,dword ptr [esi+0x2C4]
	mov byte ptr [esp+0x60],0xC
	test ecx,ecx
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov byte ptr [esp+0x60],bl
	mov ebx,8
	cmp word ptr [esp+0x28],bx
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [esp+0x60],0
	cmp word ptr [esp+0x38],bx
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	lea edx,[esp+0x38]
	push edx
	call ebp
	lea eax,[esp+0x38]
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
	mov eax,dword ptr [esi+0x2A8]
	lea ecx,[esp+0x38]
	push ecx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x6C],0xD
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x2C0]
	mov byte ptr [esp+0x68],0xE
	test ecx,ecx
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	mov byte ptr [esp+0x68],0xD
	call IWzFont::CalcTextWidth
	mov edi,eax
	mov dword ptr [esp+0x18],edi
	mov byte ptr [esp+0x60],0
	cmp word ptr [esp+0x38],bx
	jne Block65

 Block63:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block66:
	lea ecx,[esp+0x28]
	push ecx
	call ebp
	lea edx,[esp+0x28]
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
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x64],0xF
	call ebp
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block70

 Block69:
	push eax
	call _com_issue_error

 Block70:
	xor ecx,ecx
	push 0
	cmp edi,0x46
	setge cl
	push 0
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x44]
	push eax
	mov bl,0x10
	add ecx,0xFB0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push ecx
	push edx
	mov byte ptr [esp+0x7C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x74],0x11
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	lea eax,[esp+0x5C]
	mov byte ptr [esp+0x74],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x68],0x12
	call Ztl_variant_t::GetUnknown
	lea edi,[esi+0x2CC]
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block75

 Block73:
	cmp eax,0x80004002
	je Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x60],bl
	jne Block78

 Block76:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov ebx,8
	mov byte ptr [esp+0x60],0xF
	cmp word ptr [esp+0x38],bx
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
	mov byte ptr [esp+0x60],0
	cmp word ptr [esp+0x28],bx
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
	lea ecx,[esp+0x28]
	push ecx
	call ebp
	lea edx,[esp+0x28]
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
	mov eax,dword ptr [edi]
	mov bl,0x13
	mov ecx,0xD
	mov byte ptr [esp+0x60],bl
	mov word ptr [esp+0x38],cx
	mov dword ptr [esp+0x40],eax
	test eax,eax
	je Block91

 Block90:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block91:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x60],0x14
	test ecx,ecx
	jne Block93

 Block92:
	push 0x80004003
	call _com_issue_error

 Block93:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push 0
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x38]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x2C8]
	cmp edi,eax
	je Block98

 Block94:
	mov dword ptr [esi+0x2C8],eax
	test eax,eax
	je Block96

 Block95:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block96:
	test edi,edi
	je Block98

 Block97:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block98:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block100

 Block99:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block100:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x60],bl
	jne Block103

 Block101:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x60],0
	jne Block107

 Block105:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block108:
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x15
	mov ecx,0xD
	mov byte ptr [esp+0x60],bl
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block110

 Block109:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block110:
	mov edi,dword ptr [esi+0x2C8]
	mov byte ptr [esp+0x60],0x16
	test edi,edi
	jne Block112

 Block111:
	push 0x80004003
	call _com_issue_error

 Block112:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [edi]
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
	push edi
	call eax
	test eax,eax
	jge Block114

 Block113:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block114:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x60],bl
	jne Block117

 Block115:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block118:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x60],0
	test eax,eax
	je Block120

 Block119:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block120:
	mov eax,dword ptr [esi+0x2C4]
	mov ecx,0xD
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block122

 Block121:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block122:
	mov edi,dword ptr [esi+0x2C8]
	mov byte ptr [esp+0x60],0x17
	test edi,edi
	jne Block124

 Block123:
	push 0x80004003
	call _com_issue_error

 Block124:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [edi]
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
	push edi
	call eax
	test eax,eax
	jge Block126

 Block125:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block126:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x60],0
	jne Block129

 Block127:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block130:
	lea eax,[esp+0x28]
	push eax
	call ebp
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block132

 Block131:
	push eax
	call _com_issue_error

 Block132:
	lea edx,[esp+0x38]
	mov bl,0x18
	push edx
	mov byte ptr [esp+0x64],bl
	call ebp
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block134

 Block133:
	push eax
	call _com_issue_error

 Block134:
	mov ecx,dword ptr [esi+0x2C8]
	mov byte ptr [esp+0x60],0x19
	test ecx,ecx
	jne Block136

 Block135:
	push 0x80004003
	call _com_issue_error

 Block136:
	lea edx,[esp+0x28]
	push edx
	xor edx,edx
	cmp dword ptr [esp+0x1C],0x46
	lea eax,[esp+0x3C]
	setge dl
	push eax
	push 0x54
	dec edx
	and edx,0x2D
	add edx,3
	push edx
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x38],di
	jne Block139

 Block137:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block140:
	mov byte ptr [esp+0x60],0
	cmp word ptr [esp+0x28],di
	jne Block143

 Block141:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block144

 Block142:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block144

 Block143:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block144:
	mov esi,dword ptr [esi+0x2C8]
	test esi,esi
	jne Block146

 Block145:
	push 0x80004003
	call _com_issue_error

 Block146:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xB4]
	push 1
	push esi
	call edx
	test eax,eax
	jge Block148

 Block147:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block148:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	test eax,eax
	je Block150

 Block149:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block150:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 4
}
}
// CAvatarMegaphone::OnMouseButton
__SUB_CLASS_THIS(0006D560, __thiscall, 62346,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	sub esp,0xC
	cmp dword ptr [esp+0x10],0x205
	jne Block8

 Block1:
	push esi
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test esi,esi
	je Block7

 Block2:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 0
	lea eax,[esp+0xC]
	push eax
	call CWndMan::GetCursorPos
	lea ecx,[esp+0x14]
	push ecx
	lea edx,[esp+8]
	push edx
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esi+0x35D4]
	call CTemporaryStatView::FindIcon
	mov eax,dword ptr [esp+4]
	sub eax,1
	je Block6

 Block3:
	sub eax,1
	jne Block7

 Block4:
	mov eax,dword ptr [esp+0x14]
	cmp eax,0x14011E
	je Block7

 Block5:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	push eax
	call CUserLocal::SendSkillCancelRequest
	pop esi
	add esp,0xC
	ret 0x10

 Block6:
	mov ecx,dword ptr [esp+0x14]
	neg ecx
	push ecx
	mov ecx,esi
	call CWvsContext::SendStatChangeItemCancelRequest

 Block7:
	pop esi

 Block8:
	add esp,0xC
	ret 0x10
}
}
// CAvatarMegaphone::Draw
_SUB_EXCEPTION_HANDLER(6DDE0)
__SUB_CLASS_THIS(0006DDE0, __thiscall, 62349,  CAvatarMegaphone, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_6DDE0
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
	mov eax,dword ptr [esp+0x5C]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x5C]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push edx
	mov dword ptr [esp+0x58],0
	call edi
	lea eax,[esp+0x2C]
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
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x58],1
	call edi
	lea edx,[esp+0x1C]
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
	lea eax,[esp+0x2C]
	push eax
	mov eax,dword ptr [esi+0x2BC]
	lea ecx,[esp+0x20]
	push ecx
	push eax
	mov eax,dword ptr [esi+0x2AC]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov bl,2
	push eax
	mov byte ptr [esp+0x68],bl
	call _xbstr_t::_ctor_0
	mov ebp,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x64],3
	test ebp,ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	push 0xE
	push 0x7C
	mov ecx,ebp
	mov byte ptr [esp+0x6C],bl
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [esp+0x54],1
	cmp word ptr [esp+0x1C],bx
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov byte ptr [esp+0x54],0
	cmp word ptr [esp+0x2C],bx
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	lea eax,[esp+0x1C]
	push eax
	call edi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x58],4
	call edi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	mov eax,dword ptr [esi+0x2BC]
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x30]
	push edx
	push eax
	mov eax,dword ptr [esi+0x2B0]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov bl,5
	push eax
	mov byte ptr [esp+0x68],bl
	call _xbstr_t::_ctor_0
	push 0x20
	mov byte ptr [esp+0x68],6
	push 0x7C
	mov ecx,ebp
	mov byte ptr [esp+0x6C],bl
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [esp+0x54],4
	cmp word ptr [esp+0x2C],bx
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov byte ptr [esp+0x54],0
	cmp word ptr [esp+0x1C],bx
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	lea ecx,[esp+0x1C]
	push ecx
	call edi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea eax,[esp+0x2C]
	mov bl,7
	push eax
	mov byte ptr [esp+0x58],bl
	call edi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x30]
	push eax
	mov eax,dword ptr [esi+0x2BC]
	push eax
	mov eax,dword ptr [esi+0x2B4]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x68],8
	call _xbstr_t::_ctor_0
	push 0x32
	mov byte ptr [esp+0x68],9
	push 0x7C
	mov ecx,ebp
	mov byte ptr [esp+0x6C],8
	call IWzCanvas::DrawTextA
	mov byte ptr [esp+0x54],bl
	mov ebx,8
	cmp word ptr [esp+0x2C],bx
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [esp+0x54],0
	cmp word ptr [esp+0x1C],bx
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	lea edx,[esp+0x1C]
	push edx
	call edi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0x58],0xA
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [esi+0x2BC]
	lea ecx,[esp+0x30]
	push ecx
	push eax
	mov eax,dword ptr [esi+0x2B8]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov bl,0xB
	push eax
	mov byte ptr [esp+0x68],bl
	call _xbstr_t::_ctor_0
	push 0x44
	mov byte ptr [esp+0x68],0xC
	push 0x7C
	mov ecx,ebp
	mov byte ptr [esp+0x6C],bl
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [esp+0x54],0xA
	cmp word ptr [esp+0x2C],bx
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov byte ptr [esp+0x54],0
	cmp word ptr [esp+0x1C],bx
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	lea eax,[esp+0x3C]
	push eax
	call edi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block52

 Block51:
	push eax
	call _com_issue_error

 Block52:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x58],0xD
	call edi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0x58],0xE
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [esi+0x2C0]
	lea ecx,[esp+0x20]
	push ecx
	push eax
	mov eax,dword ptr [esi+0x2A8]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x68],0xF
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esi+0x2A8]
	push 0x54
	lea edx,[esp+0x40]
	push edx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,0x10
	push eax
	mov byte ptr [esp+0x74],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x2C0]
	mov byte ptr [esp+0x70],0x11
	test ecx,ecx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	mov byte ptr [esp+0x70],bl
	call IWzFont::CalcTextWidth
	shr eax,1
	mov ecx,0x4E
	sub ecx,eax
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x6C],0xF
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x54],0xE
	cmp word ptr [esp+0x2C],si
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov byte ptr [esp+0x54],0xD
	cmp word ptr [esp+0x1C],si
	jne Block65

 Block63:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	mov byte ptr [esp+0x54],0
	cmp word ptr [esp+0x3C],si
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call eax
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 4
}
}
// CAvatarMegaphone::CAvatarMegaphone
_SUB_EXCEPTION_HANDLER(6DBD0)
__SUB_CLASS_THIS(0006DBD0, __thiscall, 62342,  CAvatarMegaphone, void, long, const AvatarLook&, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_6DBD0
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
	mov esi,ecx
	mov dword ptr [esp+0xC],esi
	mov dword ptr [esp+0x18],4
	call CWnd::_ctor_default
	lea eax,[esi+0x80]
	xor ebx,ebx
	cmp eax,ebx
	je Block2

 Block1:
	lea ecx,[eax-0x80]
	mov dword ptr [TSingleton<CAvatarMegaphone>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CAvatarMegaphone>::ms_pInstance],ebx

 Block3:
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x24]
	push eax
	lea ecx,[esi+0x84]
	int 3// TODO: 	mov dword ptr [esi],offset CAvatarMegaphone::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CAvatarMegaphone::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CAvatarMegaphone::`vftable'{for `ZRefCounted'}
	call AvatarLook::_ctor_2
	mov dword ptr [esi+0x290],ebx
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [esi+0x294],ecx
	mov dword ptr [esi+0x298],edx
	mov dword ptr [esi+0x2A4],ebx
	lea eax,[esp+0x28]
	lea ecx,[esi+0x2A8]
	push eax
	mov byte ptr [esp+0x1C],9
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea edx,[esp+0x2C]
	lea ecx,[esi+0x2AC]
	push edx
	mov byte ptr [esp+0x1C],0xA
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea eax,[esp+0x30]
	lea ecx,[esi+0x2B0]
	push eax
	mov byte ptr [esp+0x1C],0xB
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea edx,[esp+0x34]
	lea ecx,[esi+0x2B4]
	push edx
	mov byte ptr [esp+0x1C],0xC
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea eax,[esp+0x38]
	lea ecx,[esi+0x2B8]
	push eax
	mov byte ptr [esp+0x1C],0xD
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov dword ptr [esi+0x2BC],ebx
	mov dword ptr [esi+0x2C0],ebx
	mov dword ptr [esi+0x2C4],ebx
	mov dword ptr [esi+0x2C8],ebx
	mov dword ptr [esi+0x2CC],ebx
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	mov byte ptr [esp+0x18],0x13
	cmp dword ptr [ecx+0x98],ebx
	jne Block5

 Block4:
	mov dword ptr [esi+0x2A0],0x320
	jmp Block6

 Block5:
	mov dword ptr [esi+0x2A0],0x400

 Block6:
	mov edx,dword ptr [esi+0x2A0]
	push ebx
	push ebx
	push ebx
	push 1
	push 0xC0061508
	push 0x79
	push 0xE1
	push ebx
	push edx
	mov ecx,esi
	call CWnd::CreateWnd
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x18],3
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x18],2
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x18],1
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x18],bl
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret 0x24
}
}
// CAvatarMegaphone::OnDestroy
__SUB_CLASS_THIS0(0006D4F0, __thiscall, 62344,  CAvatarMegaphone, void) {
__asm {

 Block0:
	ret
}
}
// CAvatarMegaphone::OnMouseMove
__SUB_CLASS_THIS(0006D5F0, __thiscall, 62347,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	sub esp,8
	push 0
	lea eax,[esp+4]
	push eax
	call CWndMan::GetCursorPos
	mov ecx,dword ptr [esp+4]
	mov edx,dword ptr [esp]
	push ecx
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	push edx
	call CUserLocal::OnMouseMove
	xor eax,eax
	add esp,8
	ret 8
}
}
// CAvatarMegaphone::~CAvatarMegaphone
_SUB_EXCEPTION_HANDLER(6D9A0)
__SUB_CLASS_THIS0(0006D9A0, __thiscall, 62344,  CAvatarMegaphone, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_6D9A0
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
	int 3// TODO: 	mov dword ptr [esi],offset CAvatarMegaphone::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CAvatarMegaphone::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CAvatarMegaphone::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x2CC]
	mov dword ptr [esp+0x1C],8
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x2C8]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x2C4]
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x2C0]
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x2BC]
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0x2B8]
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov eax,dword ptr [esi+0x2B4]
	mov byte ptr [esp+0x1C],7
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov eax,dword ptr [esi+0x2B0]
	mov byte ptr [esp+0x1C],6
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esi+0x2AC]
	mov byte ptr [esp+0x1C],5
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,dword ptr [esi+0x2A8]
	mov byte ptr [esp+0x1C],4
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov eax,dword ptr [esi+0x2A4]
	mov byte ptr [esp+0x1C],3
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block22:
	mov eax,dword ptr [esi+0x290]
	mov byte ptr [esp+0x1C],2
	test eax,eax
	je Block27

 Block23:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block26

 Block24:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block26

 Block25:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block26:
	mov dword ptr [esi+0x290],0

 Block27:
	int 3// TODO: 	mov dword ptr [esi+0x84],offset ZRefCounted::`vftable'
	mov ecx,esi
	mov dword ptr [TSingleton<CAvatarMegaphone>::ms_pInstance],0
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
// CAvatarMegaphone::ByeAvatarMegaphone
_SUB_EXCEPTION_HANDLER(6D630)
__SUB_CLASS_THIS0(0006D630, __thiscall, 62344,  CAvatarMegaphone, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_6D630
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
	mov esi,dword ptr [edi+0x2A0]
	mov ebx,dword ptr [ZImports::_VariantInit]
	sub esi,0xE1
	mov eax,0x464
	sub eax,esi
	cdq
	mov ebp,eax
	lea eax,[esp+0x34]
	xor ebp,edx
	push eax
	sub ebp,edx
	call ebx
	lea ecx,[esp+0x34]
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
	lea edx,[esp+0x24]
	push edx
	mov dword ptr [esp+0x70],0
	call ebx
	lea eax,[esp+0x24]
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
	lea ecx,[esp+0x18]
	push ecx
	mov bl,1
	mov ecx,edi
	mov byte ptr [esp+0x70],bl
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x6C],2
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0
	push esi
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x6C],bl
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov esi,8
	mov byte ptr [esp+0x6C],0
	cmp word ptr [esp+0x24],si
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp word ptr [esp+0x34],si
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block16:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	lea eax,[esp+0x20]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x70],3
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x6C],4
	test esi,esi
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x58]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block22

 Block21:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block22:
	mov ecx,dword ptr [esp+0x14]
	lea eax,[ecx+ebp]
	mov edx,3
	mov word ptr [esp+0x44],dx
	mov dword ptr [esp+0x4C],eax
	lea eax,[esp+0x1C]
	mov bl,5
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x70],bl
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x6C],6
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x48]
	push eax
	push 0
	push 0x464
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x6C],bl
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov esi,8
	mov byte ptr [esp+0x6C],4
	cmp word ptr [esp+0x44],si
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x6C],3
	test eax,eax
	je Block32

 Block31:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block32:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp word ptr [esp+0x54],si
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret

 Block35:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret
}
}
// CAvatarMegaphone::OnKey
__SUB_CLASS_THIS(0006D500, __thiscall, 62348,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	ret 8
}
}
// CAvatarMegaphone::Update
__SUB_CLASS_THIS0(0006D510, __thiscall, 62344,  CAvatarMegaphone, void) {
__asm {

 Block0:
	jmp  CWnd::Update
}
}
