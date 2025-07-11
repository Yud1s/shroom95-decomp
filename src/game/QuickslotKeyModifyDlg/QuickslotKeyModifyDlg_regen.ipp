#include "regen.hpp"
// QuickslotKeyModifyDlg.ipp
#include "QuickslotKeyModifyDlg.hpp"

// CQuickslotKeyModifyDlg::Draw
_SUB_EXCEPTION_HANDLER(2C6B80)
__SUB_CLASS_THIS(002C6B80, __thiscall, 55879,  CQuickslotKeyModifyDlg, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2C6B80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xF0
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [ebp+0x10],edi
	mov eax,dword ptr [ebp+0x74]
	push eax
	call CWnd::Draw
	mov eax,dword ptr [edi+0x10C]
	xor ebx,ebx
	cmp eax,ebx
	je Block2

 Block1:
	mov dword ptr [edi+0x10C],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x14]
	push eax
	call esi
	lea ecx,[ebp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea edx,[ebp+0x48]
	push edx
	mov dword ptr [ebp-4],ebx
	call esi
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov esi,dword ptr [edi+0x18]
	mov byte ptr [ebp-4],1
	cmp esi,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xB0]
	lea edx,[ebp+0x40]
	push edx
	push esi
	mov dword ptr [ebp+0x40],ebx
	call eax
	cmp eax,ebx
	jge Block10

 Block9:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov esi,dword ptr [edi+0x18]
	mov ecx,dword ptr [ebp+0x40]
	mov dword ptr [ebp+0x64],ecx
	cmp esi,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xC0]
	lea eax,[ebp+0x44]
	push eax
	push esi
	mov dword ptr [ebp+0x44],ebx
	call ecx
	cmp eax,ebx
	jge Block14

 Block13:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	mov esi,dword ptr [edi+0x18]
	mov ebx,dword ptr [ebp+0x44]
	test esi,esi
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xB8]
	lea eax,[ebp+0x58]
	push eax
	push esi
	mov dword ptr [ebp+0x58],0
	call ecx
	test eax,eax
	jge Block18

 Block17:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea edx,[ebp+0x14]
	push edx
	mov edx,dword ptr [ebp+0x64]
	lea eax,[ebp+0x48]
	push eax
	mov eax,dword ptr [ebp+0x58]
	inc edx
	push edx
	push ebx
	push eax
	push 0
	push 0
	lea edx,[ebp+0x60]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x10C]
	cmp esi,eax
	je Block25

 Block21:
	mov dword ptr [edi+0x10C],eax
	test eax,eax
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block23:
	test esi,esi
	je Block25

 Block24:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block25:
	mov eax,dword ptr [ebp+0x60]
	xor ebx,ebx
	cmp eax,ebx
	je Block27

 Block26:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block27:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x48],si
	jne Block30

 Block28:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	cmp eax,ebx
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp word ptr [ebp+0x14],si
	jne Block34

 Block32:
	xor eax,eax
	mov word ptr [ebp+0x14],ax
	mov eax,dword ptr [ebp+0x1C]
	cmp eax,ebx
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea ecx,[ebp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov eax,dword ptr [edi+0x18]
	mov edx,0xD
	mov word ptr [ebp+0x48],dx
	mov dword ptr [ebp+0x50],eax
	cmp eax,ebx
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block37:
	mov esi,dword ptr [edi+0x10C]
	mov dword ptr [ebp-4],2
	cmp esi,ebx
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	mov edx,dword ptr [ebp+0x48]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x4C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebx
	jge Block41

 Block40:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block41:
	cmp word ptr [ebp+0x48],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block44

 Block42:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	cmp eax,ebx
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov eax,dword ptr [edi+0x18]
	mov ecx,0xD
	mov word ptr [ebp+0x48],cx
	mov dword ptr [ebp+0x50],eax
	cmp eax,ebx
	je Block47

 Block46:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block47:
	mov esi,dword ptr [edi+0x10C]
	mov dword ptr [ebp-4],3
	cmp esi,ebx
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	mov edx,dword ptr [ebp+0x48]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x4C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,ebx
	jge Block51

 Block50:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block51:
	cmp word ptr [ebp+0x48],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block54

 Block52:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	cmp eax,ebx
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov esi,dword ptr [edi+0x10C]
	cmp esi,ebx
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,ebx
	jge Block59

 Block58:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block59:
	mov edx,3
	mov word ptr [ebp+0x14],dx
	mov dword ptr [ebp+0x1C],ebx
	mov ecx,dword ptr [edi+0x10C]
	mov dword ptr [ebp-4],4
	cmp ecx,ebx
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	lea eax,[ebp+0x14]
	push eax
	lea edx,[ebp+0x40]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov esi,8
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp+0x14],si
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [ebp+0x14],ax
	mov eax,dword ptr [ebp+0x1C]
	cmp eax,ebx
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[ebp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov edx,3
	mov word ptr [ebp-0x6C],dx
	mov dword ptr [ebp-0x64],ebx
	mov ecx,dword ptr [edi+0x18]
	mov byte ptr [ebp-4],7
	cmp ecx,ebx
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	lea eax,[ebp-0x6C]
	push eax
	lea edx,[ebp+0x5C]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x6C],si
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	cmp eax,ebx
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x4C]
	push edx
	call esi
	lea eax,[ebp-0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block73

 Block72:
	push eax
	call _com_issue_error

 Block73:
	lea ecx,[ebp-0x7C]
	push ecx
	mov byte ptr [ebp-4],0xA
	call esi
	lea edx,[ebp-0x7C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	xor edi,edi
	push edi
	push edi
	lea eax,[ebp-0x4C]
	push eax
	lea ecx,[ebp-0x7C]
	push ecx
	push ecx
	mov dword ptr [ebp+0x24],esp
	mov ecx,esp
	mov bl,0xB
	push offset _S_UIUIWINDOW2IMGKE__1
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0xC
	cmp dword ptr [_D_G_RM],edi
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	lea edx,[ebp-0xAC]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x2C]
	mov dword ptr [ebp+0x2C],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block80

 Block78:
	cmp eax,0x80004002
	je Block80

 Block79:
	push eax
	call _com_issue_error

 Block80:
	mov ebx,8
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0xAC],bx
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [ebp-0xAC],ax
	mov eax,dword ptr [ebp-0xA4]
	cmp eax,edi
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea ecx,[ebp-0xAC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x7C],bx
	jne Block87

 Block85:
	mov eax,dword ptr [ebp-0x74]
	xor edx,edx
	mov word ptr [ebp-0x7C],dx
	cmp eax,edi
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea eax,[ebp-0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block88:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x4C],bx
	jne Block91

 Block89:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	cmp eax,edi
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea edx,[ebp-0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block92:
	lea eax,[ebp-0x1C]
	push eax
	call esi
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block94

 Block93:
	push eax
	call _com_issue_error

 Block94:
	lea edx,[ebp-0x9C]
	push edx
	mov byte ptr [ebp-4],0x12
	call esi
	lea eax,[ebp-0x9C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	push edi
	push edi
	lea ecx,[ebp-0x1C]
	push ecx
	lea edx,[ebp-0x9C]
	push edx
	push ecx
	mov dword ptr [ebp+0x24],esp
	mov ecx,esp
	mov bl,0x13
	push offset _S_UIUIWINDOW2IMGKE
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x14
	cmp dword ptr [_D_G_RM],edi
	jne Block98

 Block97:
	push 0x80004003
	call _com_issue_error

 Block98:
	lea eax,[ebp-0xCC]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0x44],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block101

 Block99:
	cmp eax,0x80004002
	je Block101

 Block100:
	push eax
	call _com_issue_error

 Block101:
	mov esi,8
	mov byte ptr [ebp-4],0x17
	cmp word ptr [ebp-0xCC],si
	jne Block104

 Block102:
	mov eax,dword ptr [ebp-0xC4]
	xor ecx,ecx
	mov word ptr [ebp-0xCC],cx
	cmp eax,edi
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea edx,[ebp-0xCC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block105:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp-0x9C],si
	jne Block108

 Block106:
	xor eax,eax
	mov word ptr [ebp-0x9C],ax
	mov eax,dword ptr [ebp-0x94]
	cmp eax,edi
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea ecx,[ebp-0x9C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block109:
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp-0x1C],si
	jne Block112

 Block110:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	cmp eax,edi
	je Block113

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block112:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block113:
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	mov dword ptr [ebp+4],ecx
	mov dword ptr [ebp+0x28],edi

 Block114:
	mov esi,dword ptr [ebp+0x28]
	mov edi,dword ptr [ebp+0x10]
	mov ebx,dword ptr [ebp+0x2C]
	lea edx,[ebp+0x3C]
	push edx
	lea eax,[ebp+0x38]
	push eax
	push esi
	mov ecx,edi
	call CQuickslotKeyModifyDlg::GetSlotPos
	mov dword ptr [ebp+0x30],0
	lea ecx,[ebp+8]
	push 0x1A15
	push ecx
	mov byte ptr [ebp-4],0x1A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [edi+esi*4+0x90]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp+0x30]
	push eax
	mov byte ptr [ebp-4],0x1B
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+8]
	add esp,0xC
	mov byte ptr [ebp-4],0x1A
	test eax,eax
	je Block116

 Block115:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block116:
	mov ecx,3
	mov word ptr [ebp+0x48],cx
	mov dword ptr [ebp+0x50],0xFF
	mov edi,dword ptr [ebp+0x30]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],0x1C
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x1D
	test ebx,ebx
	je Block7

 Block117:
	lea edx,[ebp-0xEC]
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x1C
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1E
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x64],esi
	test eax,eax
	je Block120

 Block118:
	mov ecx,dword ptr [eax]
	lea edx,[ebp]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp]
	mov esi,ecx
	mov dword ptr [ebp+0x64],esi
	test eax,eax
	jge Block120

 Block119:
	cmp eax,0x80004002
	jne Block3

 Block120:
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0x1F
	test eax,eax
	je Block7

 Block121:
	mov ebx,dword ptr [eax]
	mov edi,dword ptr [ebp+0x48]
	mov ecx,dword ptr [ebp+0x3C]
	mov edx,dword ptr [ebp+0x38]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x4C]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp+0x50]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [ebp+0x54]
	push esi
	add ecx,2
	add edx,2
	push ecx
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [ebp+0x40]
	push edx
	mov edx,dword ptr [ebx+0x80]
	push edi
	call edx
	test eax,eax
	jge Block123

 Block122:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block123:
	mov byte ptr [ebp-4],0x1E
	test esi,esi
	je Block125

 Block124:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block125:
	mov esi,8
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp-0xEC],si
	jne Block128

 Block126:
	mov eax,dword ptr [ebp-0xE4]
	xor edx,edx
	mov word ptr [ebp-0xEC],dx
	test eax,eax
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea eax,[ebp-0xEC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block129:
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp+0x48],si
	jne Block132

 Block130:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block133:
	mov eax,dword ptr [ebp+0x10]
	mov ecx,dword ptr [ebp+0x28]
	mov edx,dword ptr [eax+ecx*4+0x90]
	mov ecx,dword ptr [ebp+4]
	push edx
	call CFuncKeyMappedMan::FuncKeyMapped
	mov edi,eax
	mov al,byte ptr [edi]
	test al,al
	jne Block143

 Block134:
	mov eax,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block136

 Block135:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block136:
	mov ebx,dword ptr [ebp+0x5C]

 Block137:
	mov eax,dword ptr [ebp+0x28]
	inc eax
	cmp eax,8
	mov dword ptr [ebp+0x28],eax
	jl Block114

 Block138:
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block140

 Block139:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block140:
	mov eax,dword ptr [ebp+0x2C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],9
	call edx
	mov byte ptr [ebp-4],6
	test ebx,ebx
	je Block142

 Block141:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block142:
	mov eax,dword ptr [ebp+0x40]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call eax
	lea esp,[ebp-0x10C]
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

 Block143:
	xor esi,esi
	mov dword ptr [ebp+0x34],esi
	mov byte ptr [ebp-4],0x20
	cmp al,2
	je Block146

 Block144:
	cmp al,3
	je Block146

 Block145:
	cmp al,7
	jne Block152

 Block146:
	mov eax,dword ptr [ebp+0x3C]
	mov ecx,dword ptr [ebp+0x38]
	mov edi,dword ptr [edi+1]
	mov ebx,dword ptr [ebp+0x5C]
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	add eax,0x20
	push eax
	push ecx
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block148

 Block147:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax

 Block148:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	push 0
	push 0
	push edi
	lea ecx,[ebp+0xC]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [eax]
	test eax,eax
	je Block150

 Block149:
	mov edx,dword ptr [eax]
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp+0x34],esi
	call eax

 Block150:
	mov eax,dword ptr [ebp+0xC]
	test eax,eax
	je Block219

 Block151:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block219

 Block152:
	cmp al,1
	jne Block165

 Block153:
	mov eax,dword ptr [edi+1]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetSkill
	mov eax,dword ptr [eax+0x25C]
	xor ebx,ebx
	cmp eax,ebx
	je Block155

 Block154:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov esi,eax
	push eax
	mov dword ptr [ebp+0x34],esi
	call edx

 Block155:
	mov eax,3
	mov word ptr [ebp-0x8C],ax
	mov dword ptr [ebp-0x84],0xFF
	mov byte ptr [ebp-4],0x21
	cmp esi,ebx
	je Block7

 Block156:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[ebp+0x58]
	push edx
	push esi
	mov dword ptr [ebp+0x58],ebx
	call eax
	cmp eax,ebx
	jge Block158

 Block157:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block158:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x6C]
	mov edi,dword ptr [ebp+0x58]
	lea edx,[ebp+0x60]
	push edx
	push esi
	mov dword ptr [ebp+0x60],ebx
	call eax
	cmp eax,ebx
	jge Block160

 Block159:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block160:
	mov ebx,dword ptr [ebp+0x5C]
	test ebx,ebx
	je Block7

 Block161:
	mov eax,dword ptr [ebp+0x3C]
	lea ecx,[ebp-0x8C]
	push ecx
	sub eax,edi
	add eax,0x20
	push esi
	push eax
	mov eax,dword ptr [ebp+0x38]
	sub eax,dword ptr [ebp+0x60]
	mov ecx,ebx
	push eax
	call IWzCanvas::Copy
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],0x20
	jne Block164

 Block162:
	mov eax,dword ptr [ebp-0x84]
	xor edx,edx
	mov word ptr [ebp-0x8C],dx
	test eax,eax
	je Block219

 Block163:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block219

 Block164:
	lea eax,[ebp-0x8C]
	push eax
	call dword ptr [ZImports::_VariantClear]
	jmp Block219

 Block165:
	cmp al,8
	jne Block197

 Block166:
	mov dword ptr [ebp+0x58],0
	mov ecx,dword ptr [edi+1]
	push ecx
	lea edx,[ebp+0x58]
	push offset _S_UIUIWINDOW2IMGSK
	push edx
	mov byte ptr [ebp-4],0x22
	call ZXString<char>::Format
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea eax,[ebp-0x2C]
	push eax
	call edi
	lea ecx,[ebp-0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block167:
	lea edx,[ebp-0x5C]
	push edx
	mov byte ptr [ebp-4],0x23
	call edi
	lea eax,[ebp-0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block168:
	mov ebx,dword ptr [ebp+0x58]
	push 0
	push 0
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	mov byte ptr [ebp-4],0x24
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edi,esp
	push 0
	push 0
	lea ecx,[ebp-0x2C]
	push ecx
	lea edx,[ebp-0x5C]
	push edx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x25
	je Block7

 Block169:
	lea eax,[ebp-0xBC]
	mov byte ptr [ebp-4],0x24
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x26
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block171

 Block170:
	cmp eax,0x80004002
	jne Block3

 Block171:
	mov edi,dword ptr [ebp+0x60]
	cmp edi,ebx
	je Block173

 Block172:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	mov esi,edi
	push edi
	mov dword ptr [ebp+0x34],esi
	call edx
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block173:
	mov edi,8
	mov byte ptr [ebp-4],0x24
	cmp word ptr [ebp-0xBC],di
	jne Block176

 Block174:
	mov eax,dword ptr [ebp-0xB4]
	xor edx,edx
	mov word ptr [ebp-0xBC],dx
	cmp eax,ebx
	je Block177

 Block175:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block177

 Block176:
	lea eax,[ebp-0xBC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block177:
	mov byte ptr [ebp-4],0x23
	cmp word ptr [ebp-0x5C],di
	jne Block180

 Block178:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	cmp eax,ebx
	je Block181

 Block179:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block181

 Block180:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block181:
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp-0x2C],di
	jne Block184

 Block182:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	cmp eax,ebx
	je Block185

 Block183:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block185

 Block184:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block185:
	mov edx,3
	mov word ptr [ebp-0x3C],dx
	mov dword ptr [ebp-0x34],0xFF
	mov byte ptr [ebp-4],0x27
	cmp esi,ebx
	je Block7

 Block186:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[ebp+0x60]
	push ecx
	push esi
	mov dword ptr [ebp+0x60],ebx
	call edx
	cmp eax,ebx
	jge Block188

 Block187:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block188:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x6C]
	mov edi,dword ptr [ebp+0x60]
	lea ecx,[ebp+0x64]
	push ecx
	push esi
	mov dword ptr [ebp+0x64],ebx
	call edx
	cmp eax,ebx
	jge Block190

 Block189:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block190:
	mov ebx,dword ptr [ebp+0x5C]
	test ebx,ebx
	je Block7

 Block191:
	lea eax,[ebp-0x3C]
	push eax
	mov eax,dword ptr [ebp+0x3C]
	sub eax,edi
	add eax,0x20
	push esi
	push eax
	mov eax,dword ptr [ebp+0x38]
	sub eax,dword ptr [ebp+0x64]
	mov ecx,ebx
	push eax
	call IWzCanvas::Copy
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x22
	jne Block194

 Block192:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	test eax,eax
	je Block195

 Block193:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block195

 Block194:
	lea edx,[ebp-0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block195:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block219

 Block196:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block219

 Block197:
	cmp al,4
	je Block200

 Block198:
	cmp al,5
	je Block200

 Block199:
	cmp al,6
	jne Block218

 Block200:
	mov dword ptr [ebp+0x64],0
	lea eax,[ebp+0x24]
	push 0x994
	mov bl,0x28
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi+1]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x64]
	push edx
	mov byte ptr [ebp-4],0x29
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x24]
	add esp,0xC
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block202

 Block201:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block202:
	mov edi,dword ptr [ebp+0x64]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x2A
	test ecx,ecx
	je Block7

 Block203:
	lea eax,[ebp-0xDC]
	push eax
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x2B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x34]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block205

 Block204:
	cmp eax,0x80004002
	jne Block3

 Block205:
	cmp word ptr [ebp-0xDC],8
	mov byte ptr [ebp-4],bl
	jne Block208

 Block206:
	mov eax,dword ptr [ebp-0xD4]
	xor ecx,ecx
	mov word ptr [ebp-0xDC],cx
	test eax,eax
	je Block209

 Block207:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block209

 Block208:
	lea edx,[ebp-0xDC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block209:
	mov esi,dword ptr [ebp+0x34]
	test esi,esi
	sete al
	test al,al
	je Block214

 Block210:
	mov byte ptr [ebp-4],0x20
	test edi,edi
	je Block212

 Block211:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block212:
	mov byte ptr [ebp-4],0x1A
	test esi,esi
	je Block134

 Block213:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx
	jmp Block134

 Block214:
	mov edx,3
	mov word ptr [ebp-0xFC],dx
	mov dword ptr [ebp-0xF4],0xFF
	mov byte ptr [ebp-4],0x2C
	test esi,esi
	je Block7

 Block215:
	mov ebx,dword ptr [ebp+0x5C]
	test ebx,ebx
	je Block7

 Block216:
	lea eax,[ebp-0xFC]
	push eax
	push esi
	mov ecx,esi
	call IWzCanvas::Getcy
	mov ecx,eax
	mov eax,dword ptr [ebp+0x3C]
	sub eax,ecx
	add eax,0x20
	push eax
	mov ecx,esi
	call IWzCanvas::Getcx
	mov ecx,dword ptr [ebp+0x38]
	sub ecx,eax
	push ecx
	mov ecx,ebx
	call IWzCanvas::Copy
	lea ecx,[ebp-0xFC]
	call Ztl_variant_t::~Ztl_variant_t
	mov byte ptr [ebp-4],0x20
	test edi,edi
	je Block219

 Block217:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4
	jmp Block219

 Block218:
	mov ebx,dword ptr [ebp+0x5C]

 Block219:
	mov byte ptr [ebp-4],0x1A
	test esi,esi
	je Block221

 Block220:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block221:
	mov eax,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block137

 Block222:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block137
}
}
// CQuickslotKeyModifyDlg::ModifyQuickslotKeyMap
__SUB_CLASS_THIS(002C7E40, __thiscall, 55883,  CQuickslotKeyModifyDlg, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push edi
	mov edi,ecx
	lea ecx,[eax-0x60]
	cmp ecx,9
	ja Block3

 Block1:
	lea esi,[eax-0x5F]
	cmp esi,1
	jne Block5

 Block2:
	mov esi,0xB
	jmp Block5

 Block3:
	mov esi,dword ptr [esp+0x10]
	shr esi,0x10
	and esi,0xFF
	cmp esi,0x36
	jne Block5

 Block4:
	mov esi,0x2A

 Block5:
	push esi
	mov ecx,edi
	call CQuickslotKeyModifyDlg::CheckAbaliableKey
	test eax,eax
	jne Block7

 Block6:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1555
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	pop edi
	pop esi
	ret 8

 Block7:
	push esi
	mov ecx,edi
	call CQuickslotKeyModifyDlg::IsUsedKey
	push 0
	test eax,eax
	je Block9

 Block8:
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x1556
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	pop edi
	pop esi
	ret 8

 Block9:
	mov ecx,dword ptr [edi+0xB4]
	mov dword ptr [edi+ecx*4+0x90],esi
	mov ecx,edi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	ret 8
}
}
// CQuickslotKeyModifyDlg::OnKey
// 6C80E0
static uint8_t _SUB_2C7F00_LOOKUP_TABLE_0[32] = {
0, 7, 7, 7, 1, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 2, 7, 7, 7, 7, 7, 7, 7, 7, 7, 3, 4, 5, 6, 
};
__SUB_CLASS_THIS(002C7F00, __thiscall, 55876,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0xC]
	test ecx,ecx
	js Block35

 Block1:
	mov edx,dword ptr [esp+8]
	lea eax,[edx-9]
	cmp eax,0x1F
	ja Block33

 Block2:
	movzx eax,byte ptr [eax+_SUB_2C7F00_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block11
cmp EAX, 1
je Block3
cmp EAX, 2
je Block6
cmp EAX, 3
je Block20
cmp EAX, 4
je Block25
cmp EAX, 5
je Block12
cmp EAX, 6
je Block29
cmp EAX, 7
je Block33


 Block3:
	add esi,0xFFFFFFFC
	push 1
	mov ecx,esi
	call CWnd::GetChildItem
	test eax,eax
	je Block5

 Block4:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x20]
	call eax
	test eax,eax
	je Block35

 Block5:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 1
	mov ecx,esi
	call eax
	pop esi
	ret 8

 Block6:
	cmp dword ptr [esi+0xAC],0xFFFFFFFF
	je Block8

 Block7:
	lea ecx,[esi-4]
	call CQuickslotKeyModifyDlg::ClearAllFocus
	mov dword ptr [esi+0xAC],0xFFFFFFFF
	mov dword ptr [esi+0xB4],0
	mov dword ptr [esi+0xB0],0
	pop esi
	ret 8

 Block8:
	add esi,0xFFFFFFFC
	push 2
	mov ecx,esi
	call CWnd::GetChildItem
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x20]
	call eax
	test eax,eax
	je Block35

 Block10:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 2
	mov ecx,esi
	call eax
	pop esi
	ret 8

 Block11:
	lea ecx,[esi-4]
	call CQuickslotKeyModifyDlg::SetCtrlFocus
	pop esi
	ret 8

 Block12:
	mov eax,dword ptr [esi+0xAC]
	cmp eax,0xFFFFFFFF
	je Block35

 Block13:
	test eax,eax
	jne Block17

 Block14:
	mov eax,dword ptr [esi+0xB0]
	cmp eax,3
	je Block35

 Block15:
	cmp eax,7
	je Block35

 Block16:
	push 1
	lea ecx,[esi-4]
	call CQuickslotKeyModifyDlg::SetSlotFocus
	pop esi
	ret 8

 Block17:
	cmp eax,1
	jne Block19

 Block18:
	push edx
	lea ecx,[esi-4]
	call CQuickslotKeyModifyDlg::SetOkCancleFocus
	pop esi
	ret 8

 Block19:
	mov dword ptr [esi+0xAC],0xFFFFFFFF
	pop esi
	ret 8

 Block20:
	mov eax,dword ptr [esi+0xAC]
	cmp eax,0xFFFFFFFF
	je Block35

 Block21:
	test eax,eax
	jne Block17

 Block22:
	mov eax,dword ptr [esi+0xB0]
	test eax,eax
	je Block35

 Block23:
	cmp eax,4
	je Block35

 Block24:
	push 0xFFFFFFFF
	lea ecx,[esi-4]
	call CQuickslotKeyModifyDlg::SetSlotFocus
	pop esi
	ret 8

 Block25:
	cmp dword ptr [esi+0xAC],0
	jne Block35

 Block26:
	mov eax,dword ptr [esi+0xB0]
	cmp eax,3
	jle Block35

 Block27:
	cmp eax,8
	jge Block35

 Block28:
	push 0xFFFFFFFC
	lea ecx,[esi-4]
	call CQuickslotKeyModifyDlg::SetSlotFocus
	pop esi
	ret 8

 Block29:
	cmp dword ptr [esi+0xAC],0
	jne Block35

 Block30:
	mov eax,dword ptr [esi+0xB0]
	cmp eax,0xFFFFFFFF
	jle Block35

 Block31:
	cmp eax,4
	jge Block35

 Block32:
	push 4
	lea ecx,[esi-4]
	call CQuickslotKeyModifyDlg::SetSlotFocus
	pop esi
	ret 8

 Block33:
	cmp dword ptr [esi+0xAC],0
	jne Block35

 Block34:
	push ecx
	push edx
	lea ecx,[esi-4]
	call CQuickslotKeyModifyDlg::ModifyQuickslotKeyMap

 Block35:
	pop esi
	ret 8
}
}
// CQuickslotKeyModifyDlg::CheckAbaliableKey
_SUB_EXCEPTION_HANDLER(2C7B70)
__SUB_CLASS_THIS(002C7B70, __thiscall, 55884,  CQuickslotKeyModifyDlg, int32_t, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2C7B70
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
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x3C]
	push eax
	call esi
	lea ecx,[ebp-0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebx,ebx
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x2C]
	push edx
	mov dword ptr [ebp-4],ebx
	call esi
	lea eax,[ebp-0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push ebx
	push ebx
	lea ecx,[ebp-0x3C]
	push ecx
	lea edx,[ebp-0x2C]
	push edx
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGKE__1
	mov byte ptr [ebp-4],1
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[ebp-0x4C]
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
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
	cmp word ptr [ebp-0x4C],si
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[ebp-0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x2C],si
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x3C],si
	jne Block20

 Block18:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov dword ptr [ebp-0x1C],ebx
	lea ecx,[ebp-0x14]
	push 0x1A15
	push ecx
	mov byte ptr [ebp-4],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [ebp+8]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp-0x1C]
	push eax
	mov byte ptr [ebp-4],9
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x14]
	add esp,0xC
	mov byte ptr [ebp-4],8
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov edi,dword ptr [ebp-0x1C]
	push ebx
	push ebx
	push 0xFFFFFFFF
	push edi
	push ebx
	push ebx
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push ebx
	push ebx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push ebx
	push ebx
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0xA
	cmp esi,ebx
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea ecx,[ebp-0x5C]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	cmp word ptr [ebp-0x5C],8
	mov ebx,eax
	mov byte ptr [ebp-4],8
	jne Block28

 Block26:
	mov eax,dword ptr [ebp-0x54]
	xor edx,edx
	mov word ptr [ebp-0x5C],dx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea eax,[ebp-0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov byte ptr [ebp-4],7
	test ebx,ebx
	je Block33

 Block30:
	test edi,edi
	je Block32

 Block31:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block32:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	mov eax,1
	jmp Block36

 Block33:
	test edi,edi
	je Block35

 Block34:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block35:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ecx
	xor eax,eax

 Block36:
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
	ret 4
}
}
// CQuickslotKeyModifyDlg::CQuickslotKeyModifyDlg
_SUB_EXCEPTION_HANDLER(2C65A0)
__SUB_CLASS_THIS0(002C65A0, __thiscall, 55872,  CQuickslotKeyModifyDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2C65A0
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
	push offset ZRef<CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey>::~ZRef<CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey>
	push offset ZRef<CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey>::_ctor_default
	push 8
	xor edi,edi
	push 8
	lea eax,[esi+0xBC]
	push eax
	mov dword ptr [esp+0x2C],edi
	int 3// TODO: 	mov dword ptr [esi],offset CQuickslotKeyModifyDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CQuickslotKeyModifyDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CQuickslotKeyModifyDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xB0],0xFFFFFFFF
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xB8],edi
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x100],edi
	mov dword ptr [esi+0x108],edi
	mov dword ptr [esi+0x10C],edi
	push edi
	push edi
	push 1
	push offset _S_UIUIWINDOW2IMGKE__9
	mov ecx,esi
	mov byte ptr [esp+0x28],4
	call CDialog::CreateDlg_2
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CQuickslotKeyModifyDlg::ClearAllFocus
__SUB_CLASS_THIS0(002C6210, __thiscall, 55874,  CQuickslotKeyModifyDlg, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov ebx,ecx
	push edi
	lea esi,[ebx+0xC0]
	mov edi,8

 Block1:
	mov ecx,dword ptr [esi]
	push 0
	call CCtrlButton::SetKeyFocus
	add esi,8
	sub edi,1
	jne Block1

 Block2:
	mov ecx,dword ptr [ebx+0x100]
	push edi
	call CCtrlButton::SetKeyFocus
	mov ecx,dword ptr [ebx+0x108]
	push edi
	call CCtrlButton::SetKeyFocus
	pop edi
	pop esi
	pop ebx
	ret
}
}
// CQuickslotKeyModifyDlg::IsKindOf
__SUB_CLASS_THIS(002C6680, __thiscall, 55889,  CQuickslotKeyModifyDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CQuickslotKeyModifyDlg::ms_RTTI_CQuickslotKeyModifyDlg
	lea esp,[esp]

 Block1:
	cmp eax,ecx
	je Block4

 Block2:
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block1

 Block3:
	ret 4

 Block4:
	mov eax,1
	ret 4
}
}
// CQuickslotKeyModifyDlg::IsUsedKey
__SUB_CLASS_THIS(002C61D0, __thiscall, 55884,  CQuickslotKeyModifyDlg, int32_t, long) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	xor eax,eax
	add ecx,0x90
	lea esp,[esp]

 Block1:
	cmp dword ptr [ecx],edx
	je Block4

 Block2:
	inc eax
	add ecx,4
	cmp eax,8
	jl Block1

 Block3:
	xor eax,eax
	ret 4

 Block4:
	mov eax,1
	ret 4
}
}
// CQuickslotKeyModifyDlg::~CQuickslotKeyModifyDlg
_SUB_EXCEPTION_HANDLER(2C66B0)
__SUB_CLASS_THIS0(002C66B0, __thiscall, 55874,  CQuickslotKeyModifyDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2C66B0
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
	int 3// TODO: 	mov dword ptr [esi],offset CQuickslotKeyModifyDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CQuickslotKeyModifyDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CQuickslotKeyModifyDlg::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x10C]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],4
	cmp eax,ebx
	je Block2

 Block1:
	mov dword ptr [esi+0x10C],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x10C]
	mov byte ptr [esp+0x1C],3
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea edi,[esi+0x104]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xFC]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	push offset ZRef<CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey>::~ZRef<CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey>
	push 8
	push 8
	lea eax,[esi+0xBC]
	push eax
	mov byte ptr [esp+0x2C],bl
	call __eh_vector_dtor_iterator
	mov ecx,esi
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
// CQuickslotKeyModifyDlg::SetCtrlFocus
__SUB_CLASS_THIS0(002C6430, __thiscall, 55874,  CQuickslotKeyModifyDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CQuickslotKeyModifyDlg::ClearAllFocus
	mov eax,dword ptr [esi+0xB0]
	cmp eax,0xFFFFFFFF
	je Block5

 Block1:
	cmp eax,1
	je Block5

 Block2:
	test eax,eax
	jne Block4

 Block3:
	mov ecx,dword ptr [esi+0x100]
	push 1
	call CCtrlButton::SetKeyFocus
	mov dword ptr [esi+0xB0],1
	mov dword ptr [esi+0xB8],0
	pop esi
	ret

 Block4:
	mov dword ptr [esi+0xB0],0xFFFFFFFF
	pop esi
	ret

 Block5:
	mov ecx,dword ptr [esi+0xC0]
	push 1
	call CCtrlButton::SetKeyFocus
	mov dword ptr [esi+0xB0],0
	mov dword ptr [esi+0xB4],0
	pop esi
	ret
}
}
// CQuickslotKeyModifyDlg::OnMouseButton
__SUB_CLASS_THIS(002C6330, __thiscall, 55878,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	sub esp,0x20
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x34]
	push esi
	push edi
	mov edi,ecx
	mov esi,dword ptr [edi+0x74]
	xor ebx,ebx
	mov dword ptr [esp+0x10],ebx
	mov dword ptr [esp+0x14],ebx
	cmp esi,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x3C]
	push ecx
	push esi
	mov dword ptr [esp+0x44],ebx
	call edx
	cmp eax,ebx
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [esp+0x3C]
	mov esi,dword ptr [edi+0x74]
	dec eax
	mov dword ptr [esp+0x18],eax
	cmp esi,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x3C]
	push edx
	push esi
	mov dword ptr [esp+0x44],ebx
	call eax
	cmp eax,ebx
	jge Block8

 Block7:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov esi,dword ptr [esp+0x40]
	mov ecx,dword ptr [esp+0x3C]
	push esi
	push ebp
	lea edx,[esp+0x18]
	dec ecx
	push edx
	mov dword ptr [esp+0x28],ecx
	mov dword ptr [esp+0x2C],0x41
	mov dword ptr [esp+0x30],0x71
	mov dword ptr [esp+0x34],0xCA
	mov dword ptr [esp+0x38],0xB4
	call PtInRect
	test eax,eax
	je Block12

 Block9:
	push esi
	push ebp
	lea eax,[esp+0x28]
	push eax
	call PtInRect
	test eax,eax
	jne Block12

 Block10:
	cmp dword ptr [esp+0x34],0x202
	jne Block12

 Block11:
	lea ecx,[edi-4]
	mov dword ptr [edi+0xAC],0xFFFFFFFF
	call CQuickslotKeyModifyDlg::ClearAllFocus

 Block12:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 0x10
}
}
// CQuickslotKeyModifyDlg::OnCreate
_SUB_EXCEPTION_HANDLER(2C6800)
__SUB_CLASS_THIS(002C6800, __thiscall, 55875,  CQuickslotKeyModifyDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2C6800
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
	mov ebp,ecx
	xor esi,esi
	xor eax,eax
	lea ecx,[ebp+0x90]

 Block1:
	mov edx,dword ptr [TSingleton<CQuickslotKeyMappedMan>::ms_pInstance]
	mov edx,dword ptr [eax+edx+4]
	mov dword ptr [ecx],edx
	add eax,4
	add ecx,4
	cmp eax,0x20
	jl Block1

 Block2:
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x20],1
	mov dword ptr [esp+0x24],esi
	mov dword ptr [esp+0x28],esi
	mov dword ptr [esp+0x38],esi
	xor edi,edi
	lea ebx,[ebp+0xC0]
	jmp Block5

 Block4:
	xor esi,esi

 Block5:
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	push edi
	mov ecx,ebp
	call CQuickslotKeyModifyDlg::GetSlotPos
	push 0x72
	push offset _S_UIUIWINDOW2IMGKE__12
	push esi
	push 0x39
	lea ecx,[esp+0x3C]
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x39
	lea ecx,[esp+0x30]
	call ZXString16::ReleaseBuffer
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x1C],esi
	mov byte ptr [esp+0x38],1
	test esi,esi
	je Block7

 Block6:
	mov ecx,esi
	call CCtrlButton::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey::`vftable'{for `ZRefCounted'}
	jmp Block8

 Block7:
	xor esi,esi

 Block8:
	mov byte ptr [esp+0x38],0
	test esi,esi
	je Block19

 Block9:
	lea eax,[esi+8]
	test eax,eax
	je Block19

 Block10:
	lea esi,[eax-8]
	test esi,esi
	je Block12

 Block11:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block12:
	mov eax,dword ptr [ebx]
	mov dword ptr [ebx],esi
	test eax,eax
	je Block16

 Block13:
	lea esi,[eax+8]
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block16

 Block14:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block16

 Block15:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block16:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [esp+0x18]
	push 1
	push eax
	mov eax,dword ptr [esp+0x24]
	push eax
	lea eax,[edi+0x3E8]
	push eax
	push ebp
	call edx
	inc edi
	add ebx,8
	cmp edi,8
	jl Block4

 Block17:
	push 0x5E
	push offset _S_UIUIWINDOW2IMGKE__11
	push 0
	push 0x2F
	lea ecx,[esp+0x3C]
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x2F
	lea ecx,[esp+0x30]
	call ZXString16::ReleaseBuffer
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x1C],esi
	mov byte ptr [esp+0x38],2
	test esi,esi
	je Block20

 Block18:
	mov ecx,esi
	call CCtrlButton::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey::`vftable'{for `ZRefCounted'}
	jmp Block21

 Block19:
	xor esi,esi
	jmp Block12

 Block20:
	xor esi,esi

 Block21:
	mov byte ptr [esp+0x38],0
	test esi,esi
	je Block25

 Block22:
	lea eax,[esi+8]
	test eax,eax
	je Block25

 Block23:
	lea esi,[eax-8]
	test esi,esi
	je Block26

 Block24:
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	lea eax,[esi+0xC]
	push eax
	call edi
	jmp Block27

 Block25:
	xor esi,esi

 Block26:
	mov edi,dword ptr [ZImports::_InterlockedIncrement]

 Block27:
	mov eax,dword ptr [ebp+0x100]
	mov dword ptr [ebp+0x100],esi
	test eax,eax
	je Block31

 Block28:
	lea esi,[eax+8]
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block31

 Block29:
	lea edx,[esi+4]
	push edx
	call edi
	test esi,esi
	je Block31

 Block30:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block31:
	mov ecx,dword ptr [ebp+0x100]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x20]
	push edx
	push 1
	push 0xB4
	push 0x7F
	push 1
	push ebp
	call eax
	push 0x66
	push offset _S_UIUIWINDOW2IMGKE__10
	push 0
	push 0x33
	lea ecx,[esp+0x3C]
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x33
	lea ecx,[esp+0x30]
	call ZXString16::ReleaseBuffer
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x1C],esi
	mov byte ptr [esp+0x38],3
	test esi,esi
	je Block33

 Block32:
	mov ecx,esi
	call CCtrlButton::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey::`vftable'{for `ZRefCounted'}
	jmp Block34

 Block33:
	xor esi,esi

 Block34:
	mov byte ptr [esp+0x38],0
	test esi,esi
	je Block45

 Block35:
	lea eax,[esi+8]
	test eax,eax
	je Block45

 Block36:
	lea esi,[eax-8]
	test esi,esi
	je Block38

 Block37:
	lea ecx,[esi+0xC]
	push ecx
	call edi

 Block38:
	mov eax,dword ptr [ebp+0x108]
	mov dword ptr [ebp+0x108],esi
	test eax,eax
	je Block42

 Block39:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block42

 Block40:
	lea eax,[esi+4]
	push eax
	call edi
	test esi,esi
	je Block42

 Block41:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block42:
	mov ecx,dword ptr [ebp+0x108]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 1
	push 0xB4
	push 0xAB
	push 2
	push ebp
	call edx
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block44:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 4

 Block45:
	xor esi,esi
	jmp Block38
}
}
// CQuickslotKeyModifyDlg::GetSlotPos
__SUB_CLASS_THIS(002C6190, __thiscall, 55882,  CQuickslotKeyModifyDlg, void, long, long&, long&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	xor ecx,ecx
	cmp eax,4
	setl cl
	dec ecx
	and ecx,0xFFFFFFFC
	add ecx,eax
	mov edx,ecx
	shl edx,5
	lea ecx,[edx+ecx+0x32]
	mov edx,dword ptr [esp+8]
	mov dword ptr [edx],ecx
	mov edx,dword ptr [esp+0xC]
	xor ecx,ecx
	cmp eax,4
	setge cl
	dec ecx
	and ecx,0xFFFFFFDF
	add ecx,0x82
	mov dword ptr [edx],ecx
	ret 0xC
}
}
// CQuickslotKeyModifyDlg::SetSlotFocus
__SUB_CLASS_THIS(002C64A0, __thiscall, 55881,  CQuickslotKeyModifyDlg, void, long) {
__asm {

 Block0:
	push edi
	mov edi,ecx
	call CQuickslotKeyModifyDlg::ClearAllFocus
	mov eax,dword ptr [edi+0xB4]
	test eax,eax
	jl Block2

 Block1:
	cmp eax,7
	jle Block3

 Block2:
	mov dword ptr [edi+0xB4],0

 Block3:
	cmp dword ptr [edi+0xB0],0
	jne Block11

 Block4:
	mov eax,dword ptr [esp+8]
	cmp eax,0xFFFFFFFF
	je Block8

 Block5:
	cmp eax,1
	je Block8

 Block6:
	cmp eax,0xFFFFFFFC
	je Block8

 Block7:
	cmp eax,4
	jne Block11

 Block8:
	push esi
	mov esi,dword ptr [edi+0xB4]
	add esi,eax
	cmp esi,7
	ja Block10

 Block9:
	mov ecx,dword ptr [edi+esi*8+0xC0]
	push 1
	call CCtrlButton::SetKeyFocus
	mov dword ptr [edi+0xB4],esi

 Block10:
	pop esi

 Block11:
	pop edi
	ret 4
}
}
// CQuickslotKeyModifyDlg::SetOkCancleFocus
__SUB_CLASS_THIS(002C6510, __thiscall, 55877,  CQuickslotKeyModifyDlg, void, uint32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CQuickslotKeyModifyDlg::ClearAllFocus
	mov eax,dword ptr [esi+0xB8]
	test eax,eax
	je Block3

 Block1:
	cmp eax,1
	je Block3

 Block2:
	mov dword ptr [esi+0xB8],0

 Block3:
	cmp dword ptr [esi+0xB0],1
	jne Block8

 Block4:
	mov eax,dword ptr [esp+8]
	cmp eax,0x27
	jne Block6

 Block5:
	mov ecx,dword ptr [esi+0x108]
	push 1
	call CCtrlButton::SetKeyFocus
	mov dword ptr [esi+0xB8],1
	pop esi
	ret 4

 Block6:
	cmp eax,0x25
	jne Block8

 Block7:
	mov ecx,dword ptr [esi+0x100]
	push 1
	call CCtrlButton::SetKeyFocus
	mov dword ptr [esi+0xB8],0

 Block8:
	pop esi
	ret 4
}
}
// CQuickslotKeyModifyDlg::GetRTTI
__SUB_CLASS_THIS0(002C6660, __thiscall, 55888,  CQuickslotKeyModifyDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CQuickslotKeyModifyDlg::ms_RTTI_CQuickslotKeyModifyDlg
	ret
}
}
// CQuickslotKeyModifyDlg::OnButtonClicked
__SUB_CLASS_THIS(002C62B0, __thiscall, 55877,  CQuickslotKeyModifyDlg, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	cmp eax,0x3E8
	jb Block3

 Block1:
	cmp eax,0x3EF
	ja Block3

 Block2:
	add eax,0xFFFFFC18
	mov dword ptr [esi+0xB0],0
	mov dword ptr [esi+0xB4],eax
	call CQuickslotKeyModifyDlg::ClearAllFocus
	mov eax,dword ptr [esi+0xB4]
	mov ecx,dword ptr [esi+eax*8+0xC0]
	push 1
	call CCtrlButton::SetKeyFocus
	pop esi
	ret 4

 Block3:
	cmp eax,1
	jne Block5

 Block4:
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x34]
	call eax
	pop esi
	ret 4

 Block5:
	cmp eax,2
	jne Block7

 Block6:
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x34]
	call eax
	pop esi
	ret 4

 Block7:
	cmp eax,8
	jne Block9

 Block8:
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x34]
	call eax

 Block9:
	pop esi
	ret 4
}
}
// CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey::OnKey
__SUB_CLASS_THIS(002C67C0, __thiscall, 55897,  CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x20]
	mov eax,dword ptr [ecx+4]
	mov eax,dword ptr [eax]
	add ecx,4
	jmp eax
}
}
