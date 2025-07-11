#include "regen.hpp"
// UIStatusBar.ipp
#include "UIStatusBar.hpp"

// CUIStatusBar::CQuickSlot::Draw
_SUB_EXCEPTION_HANDLER(475750)
__SUB_CLASS_THIS0(00475750, __thiscall, 37954,  CUIStatusBar::CQuickSlot, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_475750
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xD0
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x6C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp+0x44],ebx
	mov eax,3
	xor edi,edi
	mov word ptr [ebp-0x6C],ax
	mov dword ptr [ebp-0x64],edi
	mov ecx,dword ptr [ebx+0x14]
	mov dword ptr [ebp-4],edi
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x6C]
	push edx
	lea eax,[ebp+0x60]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],2
	jne Block5

 Block3:
	mov eax,dword ptr [ebp-0x64]
	xor ecx,ecx
	mov word ptr [ebp-0x6C],cx
	cmp eax,edi
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea edx,[ebp-0x6C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block6:
	mov esi,dword ptr [ebx+0x14]
	cmp esi,edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xC0]
	lea ecx,[ebp+0x4C]
	push ecx
	push esi
	mov dword ptr [ebp+0x4C],edi
	call edx
	cmp eax,edi
	jge Block10

 Block9:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov esi,dword ptr [ebx+0x14]
	mov edi,dword ptr [ebp+0x4C]
	test esi,esi
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xB8]
	lea ecx,[ebp+0x54]
	push ecx
	xor ebx,ebx
	push esi
	mov dword ptr [ebp+0x54],ebx
	call edx
	cmp eax,ebx
	jge Block14

 Block13:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	mov esi,dword ptr [ebp+0x60]
	cmp esi,ebx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov ecx,dword ptr [ebp+0x54]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x8C]
	push 0xFFFFFF
	push edi
	push ecx
	push ebx
	push ebx
	push esi
	call edx
	cmp eax,ebx
	jge Block18

 Block17:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x2C]
	push eax
	call esi
	lea ecx,[ebp-0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	lea edx,[ebp-0x5C]
	push edx
	mov byte ptr [ebp-4],3
	call esi
	lea eax,[ebp-0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	push ebx
	push ebx
	lea ecx,[ebp-0x2C]
	push ecx
	lea edx,[ebp-0x5C]
	push edx
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGKE__1
	mov byte ptr [ebp-4],4
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],5
	cmp dword ptr [_D_G_RM],ebx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea eax,[ebp-0x8C]
	mov byte ptr [ebp-4],4
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block27

 Block25:
	cmp eax,0x80004002
	je Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	mov edi,8
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x8C],di
	jne Block30

 Block28:
	mov eax,dword ptr [ebp-0x84]
	xor ecx,ecx
	mov word ptr [ebp-0x8C],cx
	cmp eax,ebx
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[ebp-0x8C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x5C],di
	jne Block34

 Block32:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	cmp eax,ebx
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x2C],di
	jne Block38

 Block36:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	cmp eax,ebx
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block39:
	lea ecx,[ebp-0x4C]
	push ecx
	call esi
	lea edx,[ebp-0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	lea eax,[ebp-0x7C]
	push eax
	mov byte ptr [ebp-4],0xB
	call esi
	lea ecx,[ebp-0x7C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	push 0
	push 0
	lea edx,[ebp-0x4C]
	push edx
	lea eax,[ebp-0x7C]
	push eax
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	mov bl,0xC
	push offset _S_UIUIWINDOW2IMGKE
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xD
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	lea ecx,[ebp-0xAC]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xE
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block48

 Block46:
	cmp eax,0x80004002
	je Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	mov esi,8
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0xAC],si
	jne Block51

 Block49:
	mov eax,dword ptr [ebp-0xA4]
	xor edx,edx
	mov word ptr [ebp-0xAC],dx
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea eax,[ebp-0xAC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x7C],si
	jne Block55

 Block53:
	mov eax,dword ptr [ebp-0x74]
	xor ecx,ecx
	mov word ptr [ebp-0x7C],cx
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea edx,[ebp-0x7C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp-0x4C],si
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[ebp-0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	xor ebx,ebx
	mov dword ptr [ebp+0x48],ebx
	lea ebx,[ebx]

 Block61:
	mov ecx,dword ptr [ebp+0x44]
	lea edx,[ebp+0x50]
	push edx
	lea eax,[ebp+0x58]
	push eax
	push ebx
	call CUIStatusBar::CQuickSlot::GetPosByIndex
	cmp dword ptr [ebp+0x58],0
	jne Block63

 Block62:
	cmp dword ptr [ebp+0x50],0
	je Block163

 Block63:
	mov edx,dword ptr [ebp+0x44]
	lea ecx,[ebx+ebx*2]
	mov al,byte ptr [edx+ecx*4+0x94]
	lea edi,[edx+ecx*4]
	test al,al
	je Block142

 Block64:
	xor esi,esi
	mov dword ptr [ebp+0x40],esi
	mov byte ptr [ebp-4],0x13
	cmp al,2
	je Block67

 Block65:
	cmp al,3
	je Block67

 Block66:
	cmp al,7
	jne Block75

 Block67:
	mov eax,dword ptr [ebp+0x48]
	mov ecx,dword ptr [ebp+0x44]
	mov edx,dword ptr [ebp+0x50]
	mov edi,dword ptr [edi+0x95]
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	lea eax,[eax+eax*2+0x27]
	mov ebx,dword ptr [ecx+eax*4]
	mov eax,dword ptr [ebp+0x58]
	push 0
	add edx,0x20
	push edx
	push eax
	push edi
	push ecx
	mov ecx,dword ptr [ebp+0x60]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp+0x68],esp
	push ecx
	call eax
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov eax,0x431BDE83
	imul edi
	sar edx,0x12
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,2
	jne Block71

 Block68:
	mov edx,dword ptr [ebp+0x44]
	mov eax,dword ptr [edx]
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block70

 Block69:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block70:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [ebp+0x58]
	push ebx
	add eax,0x14
	push eax
	push ecx
	push ecx
	mov ecx,dword ptr [ebp+0x60]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp+0x68],esp
	push ecx
	call eax
	call draw_number_by_image
	add esp,0x18

 Block71:
	push 0
	push 0
	push edi
	lea ecx,[ebp+0x28]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [eax]
	test eax,eax
	je Block73

 Block72:
	mov edx,dword ptr [eax]
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp+0x40],esi
	call eax

 Block73:
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block139

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block139

 Block75:
	cmp al,1
	jne Block87

 Block76:
	mov eax,dword ptr [edi+0x95]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetSkill
	mov eax,dword ptr [eax+0x25C]
	xor ebx,ebx
	cmp eax,ebx
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov esi,eax
	push eax
	mov dword ptr [ebp+0x40],esi
	call edx

 Block78:
	mov eax,3
	mov word ptr [ebp+0x10],ax
	mov dword ptr [ebp+0x18],0xFF
	mov byte ptr [ebp-4],0x14
	cmp esi,ebx
	je Block1

 Block79:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[ebp+0x64]
	push edx
	push esi
	mov dword ptr [ebp+0x64],ebx
	call eax
	cmp eax,ebx
	jge Block81

 Block80:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block81:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x6C]
	mov edi,dword ptr [ebp+0x64]
	lea edx,[ebp+0x5C]
	push edx
	push esi
	mov dword ptr [ebp+0x5C],ebx
	call eax
	cmp eax,ebx
	jge Block83

 Block82:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block83:
	mov edx,dword ptr [ebp+0x50]
	mov eax,dword ptr [ebp+0x58]
	sub eax,dword ptr [ebp+0x5C]
	lea ecx,[ebp+0x10]
	push ecx
	mov ecx,dword ptr [ebp+0x60]
	sub edx,edi
	push esi
	add edx,0x20
	push edx
	push eax
	call IWzCanvas::Copy
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],0x13
	jne Block86

 Block84:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	cmp eax,ebx
	je Block139

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block86:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block139

 Block87:
	cmp al,8
	jne Block118

 Block88:
	xor ebx,ebx
	mov dword ptr [ebp+0x64],ebx
	mov eax,dword ptr [edi+0x95]
	push eax
	lea ecx,[ebp+0x64]
	push offset _S_UIUIWINDOW2IMGSK
	push ecx
	mov byte ptr [ebp-4],0x15
	call ZXString<char>::Format
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[ebp]
	push edx
	call edi
	lea eax,[ebp]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block19

 Block89:
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],0x16
	call edi
	lea edx,[ebp-0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block19

 Block90:
	mov eax,dword ptr [ebp+0x64]
	push ebx
	push ebx
	push 0xFFFFFFFF
	push eax
	push ebx
	push ebx
	mov byte ptr [ebp-4],0x17
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [ebp+0x64]
	mov edi,esp
	push ebx
	push ebx
	lea ecx,[ebp]
	push ecx
	lea edx,[ebp-0x3C]
	push edx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push ebx
	push ebx
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x18
	cmp dword ptr [_D_G_RM],ebx
	je Block1

 Block91:
	lea ecx,[ebp-0xCC]
	push ecx
	mov byte ptr [ebp-4],0x17
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x19
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp+0x5C],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block93

 Block92:
	cmp eax,0x80004002
	jne Block19

 Block93:
	mov edi,dword ptr [ebp+0x5C]
	cmp edi,ebx
	je Block95

 Block94:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov esi,edi
	push edi
	mov dword ptr [ebp+0x40],esi
	call eax
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block95:
	cmp word ptr [ebp-0xCC],8
	mov byte ptr [ebp-4],0x17
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [ebp-0xCC],ax
	mov eax,dword ptr [ebp-0xC4]
	cmp eax,ebx
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea ecx,[ebp-0xCC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block99:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x16
	jne Block102

 Block100:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	cmp eax,ebx
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block103:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x15
	jne Block106

 Block104:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	cmp eax,ebx
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block107:
	mov eax,3
	mov word ptr [ebp-0x1C],ax
	mov dword ptr [ebp-0x14],0xFF
	mov byte ptr [ebp-4],0x1A
	cmp esi,ebx
	je Block1

 Block108:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[ebp+0x5C]
	push edx
	push esi
	mov dword ptr [ebp+0x5C],ebx
	call eax
	cmp eax,ebx
	jge Block110

 Block109:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block110:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x6C]
	mov edi,dword ptr [ebp+0x5C]
	lea edx,[ebp+0x68]
	push edx
	push esi
	mov dword ptr [ebp+0x68],ebx
	call eax
	cmp eax,ebx
	jge Block112

 Block111:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block112:
	mov edx,dword ptr [ebp+0x50]
	mov eax,dword ptr [ebp+0x58]
	sub eax,dword ptr [ebp+0x68]
	lea ecx,[ebp-0x1C]
	push ecx
	mov ecx,dword ptr [ebp+0x60]
	sub edx,edi
	push esi
	add edx,0x20
	push edx
	push eax
	call IWzCanvas::Copy
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x15
	jne Block115

 Block113:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,ebx
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block116:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x13
	cmp eax,ebx
	je Block139

 Block117:
	add eax,0xFFFFFFF4
	push eax
	jmp Block138

 Block118:
	cmp al,4
	je Block121

 Block119:
	cmp al,5
	je Block121

 Block120:
	cmp al,6
	jne Block139

 Block121:
	mov dword ptr [ebp+0x68],0
	lea eax,[ebp+0x20]
	push 0x994
	push eax
	mov byte ptr [ebp-4],0x1B
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi+0x95]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x68]
	push edx
	mov byte ptr [ebp-4],0x1C
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x20]
	add esp,0xC
	mov byte ptr [ebp-4],0x1B
	test eax,eax
	je Block123

 Block122:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block123:
	mov edi,dword ptr [ebp+0x68]
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
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [ebp+0x54],0
	mov byte ptr [ebp-4],0x1D
	je Block1

 Block124:
	mov ecx,dword ptr [ebp+0x54]
	lea eax,[ebp-0x9C]
	push eax
	mov byte ptr [ebp-4],0x1B
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x40]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block126

 Block125:
	cmp eax,0x80004002
	jne Block19

 Block126:
	cmp word ptr [ebp-0x9C],8
	mov byte ptr [ebp-4],0x1B
	jne Block129

 Block127:
	mov eax,dword ptr [ebp-0x94]
	xor ecx,ecx
	mov word ptr [ebp-0x9C],cx
	test eax,eax
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea edx,[ebp-0x9C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block130:
	mov esi,dword ptr [ebp+0x40]
	test esi,esi
	sete al
	test al,al
	je Block135

 Block131:
	mov byte ptr [ebp-4],0x13
	test edi,edi
	je Block133

 Block132:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block133:
	mov byte ptr [ebp-4],0x12
	test esi,esi
	je Block163

 Block134:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx
	jmp Block163

 Block135:
	mov edx,3
	mov word ptr [ebp-0xDC],dx
	mov dword ptr [ebp-0xD4],0xFF
	mov byte ptr [ebp-4],0x1F
	test esi,esi
	je Block1

 Block136:
	lea eax,[ebp-0xDC]
	push eax
	push esi
	mov ecx,esi
	call IWzCanvas::Getcy
	mov ecx,dword ptr [ebp+0x50]
	sub ecx,eax
	add ecx,0x20
	push ecx
	mov ecx,esi
	call IWzCanvas::Getcx
	mov edx,dword ptr [ebp+0x58]
	mov ecx,dword ptr [ebp+0x60]
	sub edx,eax
	push edx
	call IWzCanvas::Copy
	lea ecx,[ebp-0xDC]
	call Ztl_variant_t::~Ztl_variant_t
	mov byte ptr [ebp-4],0x13
	test edi,edi
	je Block139

 Block137:
	add edi,0xFFFFFFF4
	push edi

 Block138:
	call ZXString<char>::_Release
	add esp,4

 Block139:
	mov byte ptr [ebp-4],0x12
	test esi,esi
	je Block141

 Block140:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block141:
	mov ebx,dword ptr [ebp+0x48]

 Block142:
	mov dword ptr [ebp+0x64],0
	lea edx,[ebp+0x24]
	push 0x1A15
	push edx
	mov byte ptr [ebp-4],0x20
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [TSingleton<CQuickslotKeyMappedMan>::ms_pInstance]
	mov ecx,dword ptr [ecx+ebx*4+4]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x64]
	push edx
	mov byte ptr [ebp-4],0x21
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x24]
	add esp,0xC
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block144

 Block143:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block144:
	mov eax,3
	mov word ptr [ebp+0x2C],ax
	mov dword ptr [ebp+0x34],0xFF
	mov edi,dword ptr [ebp+0x64]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],0x22
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
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x23
	test ecx,ecx
	je Block1

 Block145:
	lea edx,[ebp-0xBC]
	push edx
	mov byte ptr [ebp-4],0x22
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x24
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x68],esi
	test eax,eax
	je Block148

 Block146:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x3C]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x3C]
	mov esi,ecx
	mov dword ptr [ebp+0x68],esi
	test eax,eax
	jge Block148

 Block147:
	cmp eax,0x80004002
	jne Block19

 Block148:
	mov eax,dword ptr [ebp+0x60]
	mov ebx,dword ptr [eax]
	mov edi,dword ptr [ebp+0x2C]
	mov ecx,dword ptr [ebp+0x50]
	mov edx,dword ptr [ebp+0x58]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x30]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp+0x34]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [ebp+0x38]
	push esi
	add ecx,2
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	add edx,2
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [ebp+0x60]
	push edx
	push edi
	mov byte ptr [ebp-4],0x25
	call ecx
	test eax,eax
	jge Block150

 Block149:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block150:
	mov byte ptr [ebp-4],0x24
	test esi,esi
	je Block152

 Block151:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block152:
	mov esi,8
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp-0xBC],si
	jne Block155

 Block153:
	mov eax,dword ptr [ebp-0xB4]
	xor ecx,ecx
	mov word ptr [ebp-0xBC],cx
	test eax,eax
	je Block156

 Block154:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block156

 Block155:
	lea edx,[ebp-0xBC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block156:
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp+0x2C],si
	jne Block159

 Block157:
	xor eax,eax
	mov word ptr [ebp+0x2C],ax
	mov eax,dword ptr [ebp+0x34]
	test eax,eax
	je Block160

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block160

 Block159:
	lea ecx,[ebp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block160:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x12
	test eax,eax
	je Block162

 Block161:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block162:
	mov ebx,dword ptr [ebp+0x48]

 Block163:
	inc ebx
	cmp ebx,8
	mov dword ptr [ebp+0x48],ebx
	jl Block61

 Block164:
	mov esi,dword ptr [ebp+0x44]
	mov ecx,esi
	call CUIStatusBar::CQuickSlot::DrawSkillCooltime
	mov ecx,esi
	call CUIStatusBar::CQuickSlot::DrawConsumeItemCooltime
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block166

 Block165:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block166:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block168

 Block167:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block168:
	mov eax,dword ptr [ebp+0x60]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0xEC]
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
// CUIStatusBar::CGauge::Create
_SUB_EXCEPTION_HANDLER(4747A0)
__SUB_CLASS_THIS(004747A0, __thiscall, 37915,  CUIStatusBar::CGauge, void, NakedParam<_x_com_ptr<IWzGr2DLayer>>, const wchar_t*, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4747A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x68]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],ecx
	mov eax,dword ptr [esp+0x84]
	mov edx,dword ptr [esp+0x88]
	mov edi,dword ptr [esp+0x80]
	mov esi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [ecx+0x10],eax
	lea eax,[esp+0x38]
	xor ebp,ebp
	push eax
	mov dword ptr [esp+0x74],ebp
	mov dword ptr [ecx+0xC],edi
	mov dword ptr [ecx+0x14],edx
	call esi
	lea ecx,[esp+0x38]
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
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x74],1
	call esi
	lea eax,[esp+0x28]
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
	mov eax,dword ptr [esp+0x7C]
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	push ecx
	mov dword ptr [esp+0x94],esp
	mov ecx,esp
	mov bl,2
	push eax
	mov byte ptr [esp+0x80],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x7C],3
	cmp dword ptr [_D_G_RM],ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x54]
	push ecx
	mov byte ptr [esp+0x80],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x78],4
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [esp+0x74],5
	mov dword ptr [esp+0x8C],ebp
	mov dword ptr [esp+0x80],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	lea ecx,[esp+0x8C]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	cmp eax,ebp
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x70],7
	cmp eax,ebp
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x70],bl
	cmp word ptr [esp+0x48],bx
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x48]
	push ecx
	call esi

 Block17:
	mov byte ptr [esp+0x70],9
	cmp word ptr [esp+0x28],bx
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x28]
	push eax
	call esi

 Block21:
	mov byte ptr [esp+0x70],0xA
	cmp word ptr [esp+0x38],bx
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebp
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0x38]
	push edx
	call esi

 Block25:
	push ebp
	push 0xFF
	push 1
	push ecx
	mov ecx,dword ptr [esp+0x88]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x88]
	mov dword ptr [esp+0x2C],esp
	cmp eax,ebp
	je Block27

 Block26:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block27:
	mov ecx,dword ptr [esp+0x94]
	push ecx
	push edi
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [esi],ebp
	mov edx,dword ptr [esp+0x94]
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x98]
	mov byte ptr [esp+0x90],0xB
	mov dword ptr [esp+0x44],esp
	cmp eax,ebp
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block29:
	mov ecx,esi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	cmp eax,ebp
	jge Block32

 Block30:
	cmp eax,0x80004002
	je Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	push ebp
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x50],esp
	mov ecx,esp
	mov bl,0xC
	push offset _S_0
	mov byte ptr [esp+0xA0],bl
	call _xbstr_t::_ctor_1
	mov edi,dword ptr [esp+0xB4]
	mov byte ptr [esp+0x9C],0xD
	cmp edi,ebp
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea eax,[esp+0x84]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xA0],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x98],0xE
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push eax
	mov dword ptr [ecx],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block37

 Block35:
	cmp eax,0x80004002
	je Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	lea ecx,[esp+0xA0]
	push ecx
	mov byte ptr [esp+0x98],0xF
	call CAnimationDisplayer::LoadSingleLayer_0
	mov ebx,dword ptr [esp+0x3C]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx]
	add esp,0x28
	cmp esi,eax
	je Block42

 Block38:
	mov dword ptr [ebx],eax
	cmp eax,ebp
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block40:
	cmp esi,ebp
	je Block42

 Block41:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block42:
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebp
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x70],0xA
	jne Block47

 Block45:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	cmp eax,ebp
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov edx,dword ptr [esp+0x78]
	push ebp
	push 0xFF
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x88]
	mov dword ptr [esp+0x34],esp
	cmp eax,ebp
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block50:
	mov esi,dword ptr [ebx]
	mov eax,dword ptr [esp+0x94]
	mov byte ptr [esp+0x80],0x10
	push eax
	cmp esi,ebp
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xB8]
	lea edx,[esp+0x90]
	push edx
	push esi
	mov dword ptr [esp+0x98],ebp
	call eax
	cmp eax,ebp
	jge Block54

 Block53:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block54:
	mov ecx,dword ptr [esp+0x90]
	mov edx,dword ptr [esp+0x94]
	add ecx,edx
	push ecx
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x98],esp
	push ecx
	mov dword ptr [esi],ebp
	mov ecx,dword ptr [esp+0x98]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x98]
	mov dword ptr [esp+0x40],esp
	cmp eax,ebp
	je Block56

 Block55:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block56:
	mov ecx,esi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	cmp eax,ebp
	jge Block59

 Block57:
	cmp eax,0x80004002
	je Block59

 Block58:
	push eax
	call _com_issue_error

 Block59:
	push ebp
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x4C],esp
	mov ecx,esp
	mov bl,0x11
	push offset _S_1
	mov byte ptr [esp+0xA0],bl
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0x84]
	push ecx
	mov byte ptr [esp+0xA0],0x12
	mov ecx,edi
	mov byte ptr [esp+0xA0],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x98],0x13
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push eax
	mov dword ptr [ecx],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block62

 Block60:
	cmp eax,0x80004002
	je Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x98],0x14
	call CAnimationDisplayer::LoadSingleLayer_0
	mov edi,dword ptr [esp+0x3C]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+4]
	add esp,0x28
	cmp esi,eax
	je Block67

 Block63:
	mov dword ptr [edi+4],eax
	cmp eax,ebp
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block65:
	cmp esi,ebp
	je Block67

 Block66:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block67:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block69

 Block68:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block69:
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x70],0xA
	jne Block72

 Block70:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,ebp
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	push ebp
	push 0xFF
	push 1
	push ecx
	mov ecx,dword ptr [esp+0x88]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x88]
	mov dword ptr [esp+0x34],esp
	cmp eax,ebp
	je Block75

 Block74:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block75:
	mov esi,dword ptr [edi]
	mov ecx,dword ptr [esp+0x94]
	mov byte ptr [esp+0x80],0x15
	push ecx
	cmp esi,ebp
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xB8]
	lea eax,[esp+0x98]
	push eax
	push esi
	mov dword ptr [esp+0xA0],ebp
	call ecx
	cmp eax,ebp
	jge Block79

 Block78:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block79:
	mov edx,dword ptr [esp+0x28]
	mov esi,dword ptr [edx+4]
	mov edi,dword ptr [esp+0x98]
	cmp esi,ebp
	jne Block81

 Block80:
	push 0x80004003
	call _com_issue_error

 Block81:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xB8]
	lea ecx,[esp+0x90]
	push ecx
	push esi
	mov dword ptr [esp+0x98],ebp
	call edx
	cmp eax,ebp
	jge Block83

 Block82:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block83:
	mov eax,dword ptr [esp+0x90]
	add eax,edi
	add eax,dword ptr [esp+0x94]
	push eax
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x9C],esp
	push ecx
	mov dword ptr [esi],ebp
	mov ecx,dword ptr [esp+0x98]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x98]
	mov dword ptr [esp+0x40],esp
	cmp eax,ebp
	je Block85

 Block84:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block85:
	mov ecx,esi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	cmp eax,ebp
	jge Block88

 Block86:
	cmp eax,0x80004002
	je Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	push ebp
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x4C],esp
	mov ecx,esp
	mov bl,0x16
	push offset _S_2
	mov byte ptr [esp+0xA0],bl
	call _xbstr_t::_ctor_1
	mov edi,dword ptr [esp+0xB4]
	lea ecx,[esp+0x84]
	push ecx
	mov byte ptr [esp+0xA0],0x17
	mov ecx,edi
	mov byte ptr [esp+0xA0],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x98],0x18
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push eax
	mov dword ptr [ecx],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block91

 Block89:
	cmp eax,0x80004002
	je Block91

 Block90:
	push eax
	call _com_issue_error

 Block91:
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x98],0x19
	call CAnimationDisplayer::LoadSingleLayer_0
	mov ecx,dword ptr [esp+0x3C]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+8]
	add esp,0x28
	cmp esi,eax
	je Block96

 Block92:
	mov dword ptr [ecx+8],eax
	cmp eax,ebp
	je Block94

 Block93:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block94:
	cmp esi,ebp
	je Block96

 Block95:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block96:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block98

 Block97:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block98:
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x70],0xA
	jne Block101

 Block99:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,ebp
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0x74],0
	call ecx
	mov eax,dword ptr [esp+0x78]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp eax,ebp
	je Block104

 Block103:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block104:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret 0x14
}
}
// CUIStatusBar::CQuickSlot::Init
_SUB_EXCEPTION_HANDLER(474F10)
__SUB_CLASS_THIS(00474F10, __thiscall, 37951,  CUIStatusBar::CQuickSlot, void, int32_t, CLayoutMan&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_474F10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
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
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x40]
	push eax
	call edi
	lea ecx,[ebp-0x40]
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
	lea edx,[ebp-0x28]
	push edx
	mov dword ptr [ebp-4],ebx
	call edi
	lea eax,[ebp-0x28]
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
	lea ecx,[ebp-0x40]
	push ecx
	lea edx,[ebp-0x28]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x30],esp
	push 0x50E
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x74]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,esi
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
	cmp word ptr [ebp-0x74],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],1
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x6C]
	xor edx,edx
	mov word ptr [ebp-0x74],dx
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x74]
	push eax
	call edi

 Block13:
	cmp word ptr [ebp-0x28],8
	mov byte ptr [ebp-4],0
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x20]
	xor ecx,ecx
	mov word ptr [ebp-0x28],cx
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x28]
	push edx
	call edi

 Block17:
	cmp word ptr [ebp-0x40],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp-0x40]
	push ecx
	call edi

 Block21:
	mov edx,dword ptr [ebp+8]
	mov ecx,dword ptr [ebp+0xC]
	push 1
	push 0xFFFFFFFA
	push offset _S_UISTATUSBAR2IMGM__8
	lea eax,[ebp-0x14]
	push eax
	mov dword ptr [esi+4],edx
	call CLayoutMan::AddSingleLayerRemoveOrigin
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x10]
	cmp edi,eax
	je Block26

 Block22:
	mov dword ptr [esi+0x10],eax
	cmp eax,ebx
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block24:
	cmp edi,ebx
	je Block26

 Block25:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block26:
	mov eax,dword ptr [ebp-0x14]
	cmp eax,ebx
	je Block28

 Block27:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block28:
	mov edi,dword ptr [esi+0x10]
	cmp edi,ebx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x68]
	lea edx,[ebp-0x18]
	push edx
	push edi
	mov dword ptr [ebp-0x18],ebx
	call eax
	cmp eax,ebx
	jge Block32

 Block31:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block32:
	mov ecx,dword ptr [ebp-0x18]
	mov dword ptr [esi+8],ecx
	mov edi,dword ptr [esi+0x10]
	cmp edi,ebx
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x70]
	lea eax,[ebp-0x18]
	push eax
	push edi
	mov dword ptr [ebp-0x18],ebx
	call ecx
	cmp eax,ebx
	jge Block36

 Block35:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block36:
	mov edx,dword ptr [ebp-0x18]
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x28]
	push eax
	mov dword ptr [esi+0xC],edx
	call edi
	lea ecx,[ebp-0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	lea edx,[ebp-0x40]
	push edx
	mov dword ptr [ebp-4],4
	call edi
	lea eax,[ebp-0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	mov ecx,dword ptr [esi+0x10]
	mov byte ptr [ebp-4],5
	cmp ecx,ebx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea edx,[ebp-0x28]
	push edx
	lea eax,[ebp-0x40]
	push eax
	push ebx
	push ebx
	call IWzVector2D::RelMove
	cmp word ptr [ebp-0x40],8
	mov byte ptr [ebp-4],4
	jne Block45

 Block43:
	mov eax,dword ptr [ebp-0x38]
	xor ecx,ecx
	mov word ptr [ebp-0x40],cx
	cmp eax,ebx
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea edx,[ebp-0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	cmp word ptr [ebp-0x28],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block49

 Block47:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	cmp eax,ebx
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea ecx,[ebp-0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	lea edx,[ebp-0x28]
	push edx
	call edi
	lea eax,[ebp-0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block52

 Block51:
	push eax
	call _com_issue_error

 Block52:
	lea ecx,[ebp-0x40]
	mov ebx,6
	push ecx
	mov dword ptr [ebp-4],ebx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	mov ecx,dword ptr [esi+0x10]
	mov byte ptr [ebp-4],7
	test ecx,ecx
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	lea eax,[ebp-0x28]
	push eax
	mov eax,dword ptr [esi+4]
	neg eax
	sbb eax,eax
	and eax,0xFFFFFFBD
	add eax,0x43
	add eax,dword ptr [esi+0xC]
	lea edx,[ebp-0x40]
	push edx
	mov edx,dword ptr [esi+8]
	push eax
	push edx
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x40],di
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp word ptr [ebp-0x28],di
	jne Block63

 Block61:
	mov eax,dword ptr [ebp-0x20]
	xor edx,edx
	mov word ptr [ebp-0x28],dx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea eax,[ebp-0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov eax,dword ptr [esi+0x10]
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x30],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block66

 Block65:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block66:
	lea eax,[ebp-0x14]
	push eax
	call CLayoutMan::CopyToEmptyLayerOverlay
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x14]
	add esp,0xC
	cmp edi,eax
	je Block71

 Block67:
	mov dword ptr [esi+0x14],eax
	test eax,eax
	je Block69

 Block68:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block69:
	test edi,edi
	je Block71

 Block70:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block71:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block73

 Block72:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block73:
	mov eax,dword ptr [esi+0x14]
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x30],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block75:
	lea eax,[ebp-0x14]
	push eax
	call CLayoutMan::CopyToEmptyLayerOverlay
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x28]
	add esp,0xC
	cmp edi,eax
	je Block80

 Block76:
	mov dword ptr [esi+0x28],eax
	test eax,eax
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block78:
	test edi,edi
	je Block80

 Block79:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block80:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block82

 Block81:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block82:
	mov eax,dword ptr [esi+0x28]
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x30],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block84

 Block83:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block84:
	lea eax,[ebp-0x14]
	push eax
	call CLayoutMan::CopyToEmptyLayerOverlay
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x8C]
	add esp,0xC
	cmp edi,eax
	je Block89

 Block85:
	mov dword ptr [esi+0x8C],eax
	test eax,eax
	je Block87

 Block86:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block87:
	test edi,edi
	je Block89

 Block88:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block89:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block91

 Block90:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block91:
	push 0
	push 0
	push 0
	push 0x3EE
	push offset _S_UISTATUSBAR2IMGM__7
	lea ecx,[ebp-0x20]
	push ecx
	mov ecx,dword ptr [ebp+0xC]
	call CLayoutMan::AddButton
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov dword ptr [ebp-4],8
	lea ebx,[esi+0x18]
	test eax,eax
	je Block93

 Block92:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block93:
	cmp dword ptr [ebx+4],0
	je Block95

 Block94:
	push 0
	mov ecx,ebx
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebx+4],0

 Block95:
	cmp dword ptr [ebp-0x1C],0
	mov edx,dword ptr [edi+4]
	mov dword ptr [ebx+4],edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block97

 Block96:
	push 0
	lea ecx,[ebp-0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block97:
	mov ecx,dword ptr [ebp+0xC]
	push 0
	push 0
	push 0
	push 0x3EE
	push offset _S_UISTATUSBAR2IMGM__6
	lea eax,[ebp-0x20]
	push eax
	call CLayoutMan::AddButton
	mov ebx,eax
	mov eax,dword ptr [ebx+4]
	mov dword ptr [ebp-4],9
	lea edi,[esi+0x20]
	test eax,eax
	je Block99

 Block98:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block99:
	cmp dword ptr [edi+4],0
	je Block101

 Block100:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block101:
	cmp dword ptr [ebp-0x1C],0
	mov ecx,dword ptr [ebx+4]
	mov dword ptr [edi+4],ecx
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block103

 Block102:
	push 0
	lea ecx,[ebp-0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block103:
	add esi,0x2C
	mov dword ptr [ebp-0x18],0
	mov dword ptr [ebp-0x2C],esi

 Block104:
	mov dword ptr [ebp-0x14],0
	lea edx,[ebp-0x44]
	push 0xE32
	push edx
	mov dword ptr [ebp-4],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp-0x18]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp-0x14]
	push edx
	mov byte ptr [ebp-4],0xB
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x44]
	add esp,0xC
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block106

 Block105:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block106:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x54]
	push eax
	call esi
	lea ecx,[ebp-0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block107:
	lea edx,[ebp-0x64]
	push edx
	mov byte ptr [ebp-4],0xC
	call esi
	lea eax,[ebp-0x64]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block108:
	mov ebx,dword ptr [ebp-0x14]
	push 0
	push 0
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	mov byte ptr [ebp-4],0xD
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea ecx,[ebp-0x54]
	push ecx
	lea edx,[ebp-0x64]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x1C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xE
	je Block5

 Block109:
	lea eax,[ebp-0x84]
	mov byte ptr [ebp-4],0xD
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block117

 Block110:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x30]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	mov edx,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [edx]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x30]
	mov edi,ecx
	test eax,eax
	je Block112

 Block111:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block112:
	mov eax,dword ptr [ebp-0x2C]
	mov dword ptr [eax],edi
	test esi,esi
	jge Block114

 Block113:
	cmp esi,0x80004002
	jne Block132

 Block114:
	cmp word ptr [ebp-0x84],8
	mov byte ptr [ebp-4],0xD
	jne Block119

 Block115:
	xor eax,eax
	mov word ptr [ebp-0x84],ax
	mov eax,dword ptr [ebp-0x7C]
	test eax,eax
	je Block120

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block117:
	mov ecx,dword ptr [ebp-0x2C]
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block114

 Block118:
	mov edx,ecx
	mov dword ptr [edx],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block114

 Block119:
	lea ecx,[ebp-0x84]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block120:
	mov esi,8
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x64],si
	jne Block123

 Block121:
	mov eax,dword ptr [ebp-0x5C]
	xor edx,edx
	mov word ptr [ebp-0x64],dx
	test eax,eax
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea eax,[ebp-0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block124:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x54],si
	jne Block127

 Block125:
	mov eax,dword ptr [ebp-0x4C]
	xor ecx,ecx
	mov word ptr [ebp-0x54],cx
	test eax,eax
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea edx,[ebp-0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block128:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test ebx,ebx
	je Block130

 Block129:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block130:
	mov eax,dword ptr [ebp-0x18]
	add dword ptr [ebp-0x2C],4
	inc eax
	cmp eax,0xF
	mov dword ptr [ebp-0x18],eax
	jle Block104

 Block131:
	lea esp,[ebp-0x94]
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
	ret 8

 Block132:
	push esi
	call _com_issue_error
}
}
// CBitmapStrNumber::CBitmapStrNumber
_SUB_EXCEPTION_HANDLER(476470)
__SUB_CLASS_THIS(00476470, __thiscall, 37791,  CBitmapStrNumber, void, NakedParam<_x_com_ptr<IWzProperty>>, long, const char*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_476470
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
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
	mov dword ptr [ebp-0x20],ebx
	xor eax,eax
	xor esi,esi
	mov dword ptr [ebx+4],eax
	mov dword ptr [ebp-4],esi
	mov dword ptr [ebx+8],eax
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 0xA
	push 4
	lea edi,[ebx+0xC]
	push edi
	mov byte ptr [ebp-4],1
	int 3// TODO: 	mov dword ptr [ebx],offset CBitmapStrNumber::`vftable'
	call __eh_vector_ctor_iterator
	mov dword ptr [ebx+0x34],esi
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],3
	mov dword ptr [ebx+0x38],esi
	cmp ecx,esi
	je Block4

 Block1:
	mov eax,ecx
	lea esi,[eax+1]

 Block2:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block2

 Block3:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
	push 0
	push esi
	lea ecx,[ebx+0x38]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[ebx+0x38]
	call ZXString<char>::ReleaseBuffer
	xor esi,esi

 Block4:
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],4
	mov dword ptr [ebx+0x3C],eax
	lea ebx,[ebx]

 Block5:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x1C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],5
	test ecx,ecx
	je Block19

 Block6:
	lea edx,[ebp-0x30]
	push edx
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp-0x18]
	push eax
	mov byte ptr [ebp-4],6
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],7
	mov dword ptr [ebp-0x1C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	test eax,eax
	jge Block10

 Block9:
	cmp eax,0x80004002
	jne Block20

 Block10:
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],4
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[ebp-0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	inc esi
	add edi,4
	cmp esi,0xA
	jl Block5

 Block17:
	mov eax,dword ptr [ebx+0x38]
	test eax,eax
	je Block21

 Block18:
	mov eax,dword ptr [eax-4]
	jmp Block22

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	push eax
	call _com_issue_error

 Block21:
	xor eax,eax

 Block22:
	lea edx,[ebp-0x13]
	push edx
	push eax
	lea ecx,[ebx+0x34]
	call ZArray<_x_com_ptr<IWzCanvas>>::_Alloc
	xor edi,edi

 Block23:
	mov eax,dword ptr [ebx+0x38]
	lea ecx,[ebx+0x38]
	test eax,eax
	je Block25

 Block24:
	mov eax,dword ptr [eax-4]
	jmp Block26

 Block25:
	xor eax,eax

 Block26:
	cmp edi,eax
	jge Block41

 Block27:
	mov eax,dword ptr [ecx]
	mov al,byte ptr [edi+eax]
	push 0
	push 0
	push 0xFFFFFFFF
	lea ecx,[ebp-0x14]
	push ecx
	push 0
	push 0
	mov dword ptr [ebp-0x18],0
	mov byte ptr [ebp-0x14],al
	mov byte ptr [ebp-0x13],0
	call MultiByteToWideChar
	add eax,eax
	mov esi,eax
	shr esi,1
	push 0
	dec esi
	push esi
	lea ecx,[ebp-0x18]
	call ZXString16::GetBuffer
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	lea edx,[ebp-0x14]
	push edx
	push 0
	push 0
	call MultiByteToWideChar
	push esi
	lea ecx,[ebp-0x18]
	call ZXString16::ReleaseBuffer
	mov ebx,dword ptr [ebp-0x18]
	push ecx
	mov dword ptr [ebp-0x34],esp
	mov ecx,esp
	push ebx
	mov byte ptr [ebp-4],8
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],9
	test ecx,ecx
	je Block19

 Block28:
	lea eax,[ebp-0x30]
	push eax
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],0xA
	call get_unknown
	mov ecx,dword ptr [ebp-0x20]
	mov edx,dword ptr [ecx+0x34]
	mov eax,dword ptr [eax]
	add ecx,0x34
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0xB
	lea esi,[edx+edi*4]
	mov dword ptr [ebp-0x34],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block30:
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	test eax,eax
	jge Block32

 Block31:
	cmp eax,0x80004002
	jne Block20

 Block32:
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],8
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[ebp-0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov byte ptr [ebp-4],4
	test ebx,ebx
	je Block40

 Block39:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString16::_Release
	add esp,4

 Block40:
	mov ebx,dword ptr [ebp-0x20]
	inc edi
	jmp Block23

 Block41:
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block43

 Block42:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block43:
	mov eax,ebx
	lea esp,[ebp-0x44]
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
// CUIStatusBar::OnSetFocus
__SUB_CLASS_THIS(00471FE0, __thiscall, 37818,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIStatusBar::SendCoupleMessage
_SUB_EXCEPTION_HANDLER(47B3E0)
__SUB_CLASS_THIS(0047B3E0, __thiscall, 37858,  CUIStatusBar, void, const ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_47B3E0
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
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [edi+0x20CC]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],edi
	cmp eax,ebx
	je Block2

 Block1:
	lea ecx,[eax+4]
	jmp Block3

 Block2:
	xor ecx,ecx

 Block3:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	cmp ecx,ebx
	je Block7

 Block4:
	mov eax,ecx
	lea esi,[eax+1]

 Block5:
	mov dl,byte ptr [eax]
	inc eax
	cmp dl,bl
	jne Block5

 Block6:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
	push ebx
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [esp+0x14]

 Block7:
	mov dword ptr [esp+0x44],ebx
	mov dword ptr [esp+0x18],ebx
	lea eax,[esp+0x24]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x48],1
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebx
	je Block12

 Block8:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block9:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block11

 Block10:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block11:
	mov esi,dword ptr [esp+0x14]
	mov edi,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x28],ebx

 Block12:
	cmp dword ptr [ebp+0x645],ebx
	jbe Block16

 Block13:
	mov ebp,dword ptr [ebp+0x649]
	lea eax,[ebp+0x23]
	cmp dword ptr [edi+0x2034],ebx
	je Block15

 Block14:
	lea eax,[ebp+0x16]

 Block15:
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::AssignCStr
	push 0x8E
	lea ecx,[esp+0x30]
	call COutPacket::_ctor_1
	push ecx
	mov ecx,esp
	lea edx,[esp+0x1C]
	mov dword ptr [esp+0x24],esp
	push edx
	mov byte ptr [esp+0x4C],5
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x30]
	call COutPacket::EncodeStr
	mov eax,dword ptr [esp+0x4C]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x30]
	call COutPacket::EncodeStr
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x44],1
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x44],bl
	jmp Block17

 Block16:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax+4],ebx
	lea edx,[esp+0x54]
	push 0xA1
	push edx
	mov byte ptr [esp+0x54],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],3
	mov ecx,dword ptr [esp+0x28]
	push ebx
	push 0xFFFFFFFF
	push 0xC
	push eax
	mov byte ptr [esp+0x5C],4
	call CUIStatusBar::ChatLogAdd
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x44],1

 Block17:
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp esi,ebx
	je Block21

 Block20:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret 4
}
}
// CBitmapStrNumber::Draw
_SUB_EXCEPTION_HANDLER(4713C0)
__SUB_CLASS_THIS(004713C0, __thiscall, 37794,  CBitmapStrNumber, void, NakedParam<_x_com_ptr<IWzCanvas>>, long, long, const char*, CBitmapStrNumber::Align) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4713C0
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
	mov dword ptr [esp+0x18],ecx
	mov edx,dword ptr [esp+0x54]
	xor ebx,ebx
	mov dword ptr [esp+0x40],ebx
	mov dword ptr [esp+0x14],ebx
	cmp edx,ebx
	je Block4

 Block1:
	mov eax,edx
	lea esi,[eax+1]

 Block2:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block2

 Block3:
	sub eax,esi
	mov esi,eax
	push esi
	push edx
	push 0
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	mov ebx,dword ptr [esp+0x14]

 Block4:
	mov eax,dword ptr [esp+0x58]
	mov ebp,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x40],1
	mov dword ptr [esp+0x54],ebp
	test eax,eax
	jne Block30

 Block5:
	xor edi,edi

 Block6:
	mov dword ptr [esp+0x1C],edi
	test ebx,ebx
	je Block8

 Block7:
	mov eax,dword ptr [ebx-4]
	jmp Block9

 Block8:
	xor eax,eax

 Block9:
	cmp edi,eax
	jge Block52

 Block10:
	mov al,byte ptr [edi+ebx]
	mov byte ptr [esp+0x20],al
	mov ecx,dword ptr [esp+0x20]
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0x28]
	push edx
	call CBitmapStrNumber::_GetDigit
	mov esi,dword ptr [esp+0x24]
	test esi,esi
	sete al
	test al,al
	je Block13

 Block11:
	mov byte ptr [esp+0x40],1
	test esi,esi
	je Block28

 Block12:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx
	inc edi
	jmp Block6

 Block13:
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],0xFF
	mov byte ptr [esp+0x40],dl
	test esi,esi
	je Block29

 Block14:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x4C]
	push ecx
	push esi
	mov dword ptr [esp+0x54],0
	call edx
	test eax,eax
	jge Block16

 Block15:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block16:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x6C]
	mov ebp,dword ptr [esp+0x4C]
	lea ecx,[esp+0x58]
	push ecx
	push esi
	mov dword ptr [esp+0x60],0
	call edx
	test eax,eax
	jge Block18

 Block17:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	mov ecx,dword ptr [esp+0x48]
	test ecx,ecx
	je Block29

 Block19:
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
	mov eax,dword ptr [esp+0x60]
	push esi
	sub eax,ebp
	push eax
	mov eax,dword ptr [esp+0x6C]
	sub eax,dword ptr [esp+0x70]
	mov edi,ecx
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block21

 Block20:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block21:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x40],2
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x4C]
	push edx
	push esi
	mov dword ptr [esp+0x54],0
	call eax
	test eax,eax
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [ecx+0x3C]
	add edx,dword ptr [esp+0x4C]
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	add dword ptr [esp+0x54],edx
	push esi
	mov byte ptr [esp+0x44],1
	call ecx
	mov ebx,dword ptr [esp+0x14]
	mov edi,dword ptr [esp+0x1C]

 Block28:
	inc edi
	jmp Block6

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	cmp eax,1
	jne Block52

 Block31:
	test ebx,ebx
	je Block33

 Block32:
	mov eax,dword ptr [ebx-4]
	jmp Block34

 Block33:
	xor eax,eax

 Block34:
	lea edi,[eax-1]
	mov dword ptr [esp+0x58],edi
	test edi,edi
	jl Block52

 Block35:
	mov dl,byte ptr [edi+ebx]
	mov byte ptr [esp+0x24],dl
	mov eax,dword ptr [esp+0x24]
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	call CBitmapStrNumber::_GetDigit
	mov esi,dword ptr [esp+0x20]
	test esi,esi
	sete al
	mov byte ptr [esp+0x40],4
	test al,al
	je Block38

 Block36:
	mov byte ptr [esp+0x40],1
	test esi,esi
	je Block51

 Block37:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax
	jmp Block51

 Block38:
	test esi,esi
	je Block29

 Block39:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x54]
	push edx
	push esi
	mov dword ptr [esp+0x5C],0
	call eax
	test eax,eax
	jge Block41

 Block40:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block41:
	sub ebp,dword ptr [esp+0x54]
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],0xFF
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x54]
	push eax
	push esi
	mov byte ptr [esp+0x48],5
	mov dword ptr [esp+0x5C],0
	call ecx
	test eax,eax
	jge Block43

 Block42:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block43:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x6C]
	mov edi,dword ptr [esp+0x54]
	lea eax,[esp+0x4C]
	push eax
	push esi
	mov dword ptr [esp+0x54],0
	call ecx
	test eax,eax
	jge Block45

 Block44:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block45:
	mov ecx,dword ptr [esp+0x48]
	test ecx,ecx
	je Block29

 Block46:
	mov eax,dword ptr [esp+0x50]
	lea edx,[esp+0x28]
	push edx
	push esi
	sub eax,edi
	mov edx,ebp
	sub edx,dword ptr [esp+0x54]
	push eax
	push edx
	call IWzCanvas::Copy
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x40],4
	jne Block49

 Block47:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+8]
	sub ebp,dword ptr [edx+0x3C]
	push esi
	mov byte ptr [esp+0x44],1
	call ecx
	mov edi,dword ptr [esp+0x58]

 Block51:
	sub edi,1
	mov dword ptr [esp+0x58],edi
	jns Block35

 Block52:
	mov byte ptr [esp+0x40],0
	test ebx,ebx
	je Block54

 Block53:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block54:
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block56

 Block55:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block56:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 0x14
}
}
// CUIStatusBar::ChangeWhisperTarget
_SUB_EXCEPTION_HANDLER(47EDA0)
__SUB_CLASS_THIS0(0047EDA0, __thiscall, 37842,  CUIStatusBar, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_47EDA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x2C],0
	test eax,eax
	je Block9

 Block1:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block9

 Block2:
	add eax,8
	je Block9

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x20],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	push 0
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x31E
	push ecx
	mov dword ptr [esp+0x40],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0
	push 7
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	lea ebp,[edi+0x16B4]
	push ebp
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_COMBOBOX
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,1
	je Block10

 Block6:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test esi,esi
	je Block8

 Block7:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block8:
	xor eax,eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x20
	ret

 Block9:
	xor esi,esi
	mov dword ptr [esp+0x20],esi
	jmp Block5

 Block10:
	push ebp
	mov ecx,esi
	call CUtilDlgEx::ApplyComboBoxItemList
	lea edx,[esp+0x10]
	push edx
	mov ecx,esi
	call CUtilDlgEx::GetComboBoxStr
	xor ebp,ebp
	push ebp
	push ebp
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x34],2
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [esp+0x10]
	cmp eax,ebp
	je Block12

 Block11:
	cmp byte ptr [eax],0
	jne Block17

 Block12:
	mov byte ptr [esp+0x2C],1
	cmp eax,ebp
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp esi,ebp
	je Block16

 Block15:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block16:
	xor eax,eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x20
	ret

 Block17:
	lea eax,[esp+0x10]
	push ebp
	push eax
	call is_valid_character_name
	add esp,8
	test eax,eax
	jne Block24

 Block18:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax+4],ebp
	lea ecx,[esp+0x1C]
	push 0x31F
	push ecx
	mov byte ptr [esp+0x3C],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x34],4
	push ebp
	push 0xFFFFFFFF
	push 0xC
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x44],5
	call CUIStatusBar::ChatLogAdd
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x2C],2
	cmp eax,ebp
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x2C],1
	cmp eax,ebp
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp esi,ebp
	je Block16

 Block23:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	xor eax,eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x20
	ret

 Block24:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [edx+0x20CC]
	cmp eax,ebp
	je Block32

 Block25:
	add eax,4
	cmp eax,ebp
	je Block32

 Block26:
	push eax
	lea ecx,[esp+0x14]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jne Block32

 Block27:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax+4],ebp
	lea eax,[esp+0x1C]
	push 0x320
	push eax
	mov byte ptr [esp+0x3C],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x34],7
	push ebp
	push 0xFFFFFFFF
	push 0xC
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x44],8
	call CUIStatusBar::ChatLogAdd
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x2C],2
	cmp eax,ebp
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x2C],1
	cmp eax,ebp
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>
	xor eax,eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x20
	ret

 Block32:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x14]
	mov dword ptr [esp+0x1C],esp
	push edx
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	mov ecx,edi
	call CUIStatusBar::AddWhisperCandidate
	push ebp
	push ecx
	mov ecx,esp
	lea eax,[esp+0x18]
	mov dword ptr [esp+0x20],esp
	push eax
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	mov ecx,edi
	call CUIStatusBar::SetWhisperTarget
	push ebp
	mov ecx,edi
	call CUIStatusBar::StartChat
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x2C],1
	cmp eax,ebp
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp esi,ebp
	je Block36

 Block35:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block36:
	mov eax,1
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x20
	ret
}
}
// CUIStatusBar::TryBeginWhisper
_SUB_EXCEPTION_HANDLER(47F390)
__SUB_CLASS_THIS(0047F390, __thiscall, 37859,  CUIStatusBar, int32_t, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_47F390
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
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
	mov dword ptr [ebp-0x1C],ebx
	xor ecx,ecx
	cmp dword ptr [ebx+0x1808],ecx
	mov dword ptr [ebp-0x28],ecx
	jle Block54

 Block1:
	mov esi,dword ptr [CUIStatusBar::m_aChatLog]
	mov dword ptr [ebp-0x20],ecx

 Block2:
	test esi,esi
	jne Block4

 Block3:
	xor eax,eax
	jmp Block5

 Block4:
	mov eax,dword ptr [esi-4]

 Block5:
	sub eax,ecx
	mov ecx,dword ptr [ebx+0x156C]
	cmp dword ptr [ecx+0x3C],0
	jne Block7

 Block6:
	dec eax
	jmp Block8

 Block7:
	mov edx,dword ptr [ecx+0x3C]
	mov ecx,dword ptr [ecx+0x38]
	sub ecx,edx
	add eax,ecx

 Block8:
	test eax,eax
	jl Block53

 Block9:
	test esi,esi
	je Block53

 Block10:
	cmp eax,dword ptr [esi-4]
	jae Block53

 Block11:
	mov edi,dword ptr [esi+eax*8+4]
	mov dword ptr [ebp-0x30],edi
	test edi,edi
	je Block13

 Block12:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	mov ecx,dword ptr [edi+0x18]
	lea esi,[edi+0x10]
	push ecx
	push esi
	mov dword ptr [ebp-4],0
	mov dword ptr [ebp-0x24],esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xE
	je Block21

 Block14:
	mov edx,dword ptr [edi+0x18]
	push edx
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xF
	je Block21

 Block15:
	mov eax,dword ptr [edi+0x18]
	push eax
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x10
	je Block21

 Block16:
	mov ecx,dword ptr [edi+0x18]
	push ecx
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x12
	je Block21

 Block17:
	mov edx,dword ptr [edi+0x18]
	push edx
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x13
	je Block21

 Block18:
	mov eax,dword ptr [edi+0x18]
	push eax
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x14
	je Block21

 Block19:
	mov ecx,edi
	call CUIStatusBar::CChatLog::_ZtlSecureGet_m_nType
	cmp eax,0x15
	je Block21

 Block20:
	mov ecx,edi
	call CUIStatusBar::CChatLog::_ZtlSecureGet_m_nType
	cmp eax,0x16
	jne Block49

 Block21:
	cmp dword ptr [edi+0x24],0
	je Block49

 Block22:
	cmp dword ptr [edi+0x28],0
	je Block49

 Block23:
	mov ecx,dword ptr [ebx+0x1804]
	mov esi,dword ptr [ebx+0x1810]
	sub ecx,3
	neg ecx
	sbb ecx,ecx
	and ecx,5
	sub esi,ecx
	add esi,dword ptr [ebx+0x1800]
	push 0
	sub esi,dword ptr [ebp-0x20]
	lea ebx,[edi+0xC]
	push 0x3A
	mov ecx,ebx
	sub esi,0xD
	call ZXString16::Find_
	dec eax
	push eax
	lea edx,[ebp-0x18]
	push edx
	mov ecx,ebx
	call ZXString16::Left
	lea eax,[ebp-0x44]
	push eax
	mov byte ptr [ebp-4],1
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block56

 Block24:
	mov eax,dword ptr [ebp-0x18]
	lea edx,[ebp-0x44]
	push edx
	push ecx
	mov dword ptr [ebp-0x2C],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],2
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi+0x18]
	mov edx,dword ptr [ebp-0x24]
	push ecx
	push edx
	mov byte ptr [ebp-4],3
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [ebp-0x1C]
	mov ecx,dword ptr [ecx+eax*4+0x1630]
	add esp,8
	test ecx,ecx
	je Block57

 Block25:
	mov byte ptr [ebp-4],2
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp-0x44],8
	mov dword ptr [ebp-0x24],eax
	mov byte ptr [ebp-4],1
	jne Block28

 Block26:
	mov eax,dword ptr [ebp-0x3C]
	xor edx,edx
	mov word ptr [ebp-0x44],dx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea eax,[ebp-0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block29:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x2C],esp
	push ebx
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	lea ecx,[ebp-0x14]
	push ecx
	call ExtractCharacterNameHelper<ZXString16>::call
	add esp,8
	mov edx,dword ptr [ebp-0x14]
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	mov byte ptr [ebp-4],4
	call WideCharToMultiByte
	call __alloca_probe_16
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x20CC]
	mov ebx,esp
	test eax,eax
	je Block31

 Block30:
	lea edi,[eax+4]
	jmp Block32

 Block31:
	xor edi,edi

 Block32:
	mov ecx,dword ptr [ebp-0x14]
	push 0
	push 0
	push 0x3FFFFFFF
	push ebx
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	call WideCharToMultiByte
	push edi
	push ebx
	call lstrcmpiA
	test eax,eax
	jne Block39

 Block33:
	mov eax,dword ptr [ebp-0x14]

 Block34:
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block36:
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block38:
	lea ecx,[ebp-0x34]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<CUIStatusBar::CChatLog>::~ZRef<CUIStatusBar::CChatLog>
	mov ebx,dword ptr [ebp-0x1C]
	jmp Block52

 Block39:
	mov eax,dword ptr [ebp-0x24]
	lea edx,[esi+0xC]
	push edx
	lea ecx,[eax+0x27]
	push ecx
	push esi
	add eax,6
	push eax
	lea edx,[ebp-0x54]
	push edx
	call SetRect
	mov eax,dword ptr [ebp+0xC]
	mov ecx,dword ptr [ebp+8]
	push eax
	push ecx
	lea edx,[ebp-0x54]
	push edx
	call PtInRect
	test eax,eax
	mov eax,dword ptr [ebp-0x14]
	je Block34

 Block40:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call WideCharToMultiByte
	call __alloca_probe_16
	mov ecx,dword ptr [ebp-0x14]
	mov eax,esp
	push 0xFFFFFFFF
	push eax
	push ecx
	call ZStrUtil::_Conv_1
	add esp,8
	mov edi,esp
	mov dword ptr [ebp-0x2C],esp
	mov dword ptr [edi],0
	test eax,eax
	je Block44

 Block41:
	mov ecx,eax
	lea esi,[ecx+1]

 Block42:
	mov dl,byte ptr [ecx]
	inc ecx
	test dl,dl
	jne Block42

 Block43:
	sub ecx,esi
	mov esi,ecx
	push esi
	push eax
	push 0
	push esi
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer

 Block44:
	mov esi,dword ptr [ebp-0x1C]
	mov ecx,esi
	call CUIStatusBar::AddWhisperCandidate
	mov ecx,esi
	call CUIStatusBar::ChangeWhisperTarget
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block46:
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block48:
	lea ecx,[ebp-0x34]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<CUIStatusBar::CChatLog>::~ZRef<CUIStatusBar::CChatLog>
	mov eax,1
	jmp Block55

 Block49:
	lea esi,[edi+4]
	push esi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block51

 Block50:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block51:
	mov dword ptr [ebp-0x30],0

 Block52:
	mov esi,dword ptr [CUIStatusBar::m_aChatLog]

 Block53:
	mov ecx,dword ptr [ebp-0x28]
	add dword ptr [ebp-0x20],0xD
	inc ecx
	cmp ecx,dword ptr [ebx+0x1808]
	mov dword ptr [ebp-0x28],ecx
	jl Block2

 Block54:
	xor eax,eax

 Block55:
	lea esp,[ebp-0x64]
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
	ret 8

 Block56:
	push eax
	call _com_issue_error

 Block57:
	push 0x80004003
	call _com_issue_error
}
}
// CUIStatusBar::CQuickSlot::GetPosByIndex
__SUB_CLASS_THIS(0046CCA0, __thiscall, 37957,  CUIStatusBar::CQuickSlot, void, long, long&, long&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,8
	jge Block2

 Block1:
	mov ecx,dword ptr [eax*8+_D_S_PTSHORTKEYPOS]
	mov edx,dword ptr [esp+8]
	mov dword ptr [edx],ecx
	mov eax,dword ptr [eax*8+_D_S_PTSHORTKEYPOS+4]
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [ecx],eax

 Block2:
	ret 0xC
}
}
// CUIStatusBar::CQuickSlot::DrawSkillCooltime
_SUB_EXCEPTION_HANDLER(46FF50)
__SUB_CLASS_THIS0(0046FF50, __thiscall, 37954,  CUIStatusBar::CQuickSlot, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_46FF50
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
	mov esi,ecx
	mov dword ptr [esp+0x24],esi
	mov eax,3
	xor edi,edi
	mov word ptr [esp+0x54],ax
	mov dword ptr [esp+0x5C],edi
	mov ecx,dword ptr [esi+0x28]
	mov dword ptr [esp+0x8C],edi
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0x8C],2
	jne Block5

 Block3:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	cmp eax,edi
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block6:
	xor eax,eax
	lea edi,[esi+0x6C]
	lea ecx,[esi+0x95]
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esp+0x1C],ecx
	jmp Block8

 Block7:
	mov esi,dword ptr [esp+0x24]

 Block8:
	lea edx,[esp+0x28]
	push edx
	lea ecx,[esp+0x30]
	push ecx
	push eax
	mov ecx,esi
	call CUIStatusBar::CQuickSlot::GetPosByIndex
	mov edx,dword ptr [esp+0x1C]
	cmp byte ptr [edx-1],1
	je Block17

 Block9:
	cmp dword ptr [edi],0
	jl Block41

 Block10:
	lea eax,[esp+0x44]
	push eax
	mov dword ptr [edi],0xFFFFFFFF
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block45

 Block11:
	mov ecx,dword ptr [esi+0x68]
	mov esi,dword ptr [esp+0x20]
	mov byte ptr [esp+0x8C],3
	test esi,esi
	je Block1

 Block12:
	mov edi,dword ptr [esp+0x44]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x58]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x5C]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x60]
	push ecx
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [esp+0x3C]
	push eax
	push ecx
	push esi
	call edx
	test eax,eax
	jge Block14

 Block13:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x8C],2
	jne Block16

 Block15:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	jmp Block37

 Block16:
	lea ecx,[esp+0x44]
	jmp Block40

 Block17:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x3C]
	push edx
	mov ecx,edi
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [esp+0x40]
	mov ebp,dword ptr [eax+4]
	test esi,esi
	je Block22

 Block18:
	add esi,0xFFFFFFF0
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block21

 Block19:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block21

 Block20:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block21:
	mov dword ptr [esp+0x40],0

 Block22:
	mov eax,dword ptr [esp+0x1C]
	mov esi,dword ptr [eax]
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	cmp esi,0x4F8379
	jne Block24

 Block23:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x4FA6A2
	push ebp
	call CSkillInfo::GetSkillLevel_0
	cmp eax,ebx
	jg Block25

 Block24:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	lea edx,[esp+0x14]
	push edx
	push esi
	push ebp
	mov dword ptr [esp+0x20],ebx
	call CSkillInfo::GetSkillLevel_0
	cmp eax,ebx
	jle Block41

 Block25:
	mov ecx,dword ptr [esp+0x14]
	push eax
	call SKILLENTRY::GetLevelData
	mov ebp,eax
	mov eax,dword ptr [ebp+0x21C]
	push eax
	lea ebx,[ebp+0x214]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block32

 Block26:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx]
	push 0
	lea eax,[esp+0x38]
	lea esi,[edi+0x3FB4]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x3C],edx
	call ZMap<long, long, long>::GetAt
	test eax,eax
	je Block32

 Block27:
	call dword ptr [ZImports::_timeGetTime]
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx]
	mov edi,eax
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x3C],edx
	call ZMap<long, long, long>::GetAt
	mov ecx,dword ptr [esp+0x38]
	sub ecx,edi
	test ecx,ecx
	jle Block41

 Block28:
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	mov edx,dword ptr [ebp+0x21C]
	push edx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov edi,eax
	mov eax,dword ptr [ebp+0x21C]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	sub edi,esi
	lea eax,[edi*8]
	sub eax,edi
	add eax,eax
	cdq
	idiv ecx
	add esp,0x10
	mov esi,eax
	test esi,esi
	jl Block41

 Block29:
	mov edx,dword ptr [esp+0x18]
	cmp dword ptr [edx],esi
	je Block41

 Block30:
	mov eax,edx
	push offset _D_VTMISSING
	lea ecx,[esp+0x78]
	mov dword ptr [eax],esi
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x24]
	mov esi,dword ptr [ecx+esi*4+0x2C]
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x8C],4
	test ecx,ecx
	je Block1

 Block31:
	mov eax,dword ptr [esp+0x28]
	lea edx,[esp+0x74]
	push edx
	mov edx,dword ptr [esp+0x30]
	push esi
	push eax
	push edx
	call IWzCanvas::Copy
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0x8C],2
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block41

 Block32:
	mov eax,dword ptr [esp+0x18]
	cmp dword ptr [eax],0
	jl Block41

 Block33:
	lea edx,[esp+0x64]
	mov ecx,eax
	push edx
	mov dword ptr [ecx],0xFFFFFFFF
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x64]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block45

 Block34:
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [ecx+0x68]
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x8C],5
	test ecx,ecx
	je Block1

 Block35:
	lea edx,[esp+0x64]
	push edx
	mov edx,dword ptr [esp+0x30]
	push eax
	mov eax,dword ptr [esp+0x30]
	push eax
	push edx
	call IWzCanvas::Copy
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0x8C],2
	jne Block39

 Block36:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]

 Block37:
	test eax,eax
	je Block41

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block39:
	lea ecx,[esp+0x64]

 Block40:
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov eax,dword ptr [esp+0x30]
	mov edi,dword ptr [esp+0x18]
	add dword ptr [esp+0x1C],0xC
	inc eax
	add edi,4
	cmp eax,8
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x18],edi
	jl Block7

 Block42:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	test eax,eax
	je Block44

 Block43:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block44:
	mov ecx,dword ptr [esp+0x84]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x7C
	ret

 Block45:
	push eax
	call _com_issue_error
}
}
// CUIStatusBar::GetChatLog
_SUB_EXCEPTION_HANDLER(4775A0)
__SUB_CLASS_THIS0(004775A0, __thiscall, 37849,  CUIStatusBar, ZArray<ZXString<char> >) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4775A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
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
	xor ecx,ecx
	mov dword ptr [ebp-0x1C],ecx
	mov eax,dword ptr [ebp+8]
	mov dword ptr [eax],ecx
	mov dword ptr [ebp-4],ecx
	mov dword ptr [ebp-0x1C],1

 Block1:
	mov eax,dword ptr [CUIStatusBar::m_aChatLog]
	mov dword ptr [ebp-0x18],ecx
	test eax,eax
	je Block28

 Block2:
	cmp ecx,dword ptr [eax-4]
	jae Block28

 Block3:
	lea edi,[ecx*8]
	mov eax,dword ptr [edi+eax+4]
	mov ecx,dword ptr [eax+0x18]
	push ecx
	add eax,0x10
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block13

 Block4:
	mov edx,dword ptr [CUIStatusBar::m_aChatLog]
	mov eax,dword ptr [edi+edx+4]
	mov ecx,dword ptr [eax+0x18]
	push ecx
	add eax,0x10
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,1
	je Block13

 Block5:
	mov edx,dword ptr [CUIStatusBar::m_aChatLog]
	mov eax,dword ptr [edi+edx+4]
	mov ecx,dword ptr [eax+0x18]
	push ecx
	add eax,0x10
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,2
	je Block13

 Block6:
	mov edx,dword ptr [CUIStatusBar::m_aChatLog]
	mov eax,dword ptr [edi+edx+4]
	mov ecx,dword ptr [eax+0x18]
	push ecx
	add eax,0x10
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,3
	je Block13

 Block7:
	mov edx,dword ptr [CUIStatusBar::m_aChatLog]
	mov eax,dword ptr [edi+edx+4]
	mov ecx,dword ptr [eax+0x18]
	push ecx
	add eax,0x10
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xD
	je Block13

 Block8:
	mov edx,dword ptr [CUIStatusBar::m_aChatLog]
	mov eax,dword ptr [edi+edx+4]
	mov ecx,dword ptr [eax+0x18]
	push ecx
	add eax,0x10
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xE
	je Block13

 Block9:
	mov edx,dword ptr [CUIStatusBar::m_aChatLog]
	mov eax,dword ptr [edi+edx+4]
	mov ecx,dword ptr [eax+0x18]
	push ecx
	add eax,0x10
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x10
	je Block13

 Block10:
	mov edx,dword ptr [CUIStatusBar::m_aChatLog]
	mov eax,dword ptr [edi+edx+4]
	mov ecx,dword ptr [eax+0x18]
	push ecx
	add eax,0x10
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x17
	je Block13

 Block11:
	mov edx,dword ptr [CUIStatusBar::m_aChatLog]
	mov ecx,dword ptr [edi+edx+4]
	call CUIStatusBar::CChatLog::_ZtlSecureGet_m_nType
	cmp eax,4
	je Block13

 Block12:
	mov eax,dword ptr [CUIStatusBar::m_aChatLog]
	mov ecx,dword ptr [edi+eax+4]
	call CUIStatusBar::CChatLog::_ZtlSecureGet_m_nType
	cmp eax,0x18
	jne Block27

 Block13:
	mov ecx,dword ptr [CUIStatusBar::m_aChatLog]
	mov eax,dword ptr [edi+ecx+4]
	mov edx,dword ptr [eax+0x18]
	push edx
	add eax,0x10
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x19
	je Block27

 Block14:
	mov eax,dword ptr [CUIStatusBar::m_aChatLog]
	mov eax,dword ptr [edi+eax+4]
	mov ecx,dword ptr [eax+0x18]
	push ecx
	add eax,0x10
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,1
	jne Block21

 Block15:
	mov edx,dword ptr [CUIStatusBar::m_aChatLog]
	mov eax,dword ptr [edi+edx+4]
	push ecx
	mov ecx,esp
	add eax,0xC
	mov dword ptr [ebp-0x14],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	lea eax,[ebp-0x24]
	push eax
	mov ecx,ebx
	call CUIStatusBar::ConvertWhisperToNormal
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov dword ptr [ebp-4],1
	call WideCharToMultiByte
	call __alloca_probe_16
	mov ecx,dword ptr [CUIStatusBar::m_aChatLog]
	mov eax,dword ptr [edi+ecx+4]
	mov esi,esp
	push ecx
	mov ecx,esp
	add eax,0xC
	mov dword ptr [ebp-0x14],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	lea edx,[ebp-0x20]
	push edx
	mov ecx,ebx
	call CUIStatusBar::ConvertWhisperToNormal
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],2
	call WideCharToMultiByte
	push 0xFFFFFFFF
	push esi
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call ZXString<char>::Assign
	mov ecx,dword ptr [ebp+8]
	lea eax,[ebp-0x14]
	push eax
	push 0xFFFFFFFF
	mov byte ptr [ebp-4],3
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov eax,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block27

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	mov ecx,dword ptr [ebp-0x18]
	add esp,4
	inc ecx
	jmp Block1

 Block21:
	mov ecx,dword ptr [CUIStatusBar::m_aChatLog]
	mov eax,dword ptr [edi+ecx+4]
	mov eax,dword ptr [eax+0xC]
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call WideCharToMultiByte
	call __alloca_probe_16
	mov edx,dword ptr [CUIStatusBar::m_aChatLog]
	mov eax,dword ptr [edi+edx+4]
	mov eax,dword ptr [eax+0xC]
	mov esi,esp
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call WideCharToMultiByte
	xor edi,edi
	mov dword ptr [ebp-0x14],edi
	test esi,esi
	je Block25

 Block22:
	mov eax,esi
	lea edx,[eax+1]

 Block23:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block23

 Block24:
	sub eax,edx
	mov edi,eax
	push edi
	push esi
	push 0
	push edi
	lea ecx,[ebp-0x14]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	lea ecx,[ebp-0x14]
	call ZXString<char>::ReleaseBuffer
	mov edi,dword ptr [ebp-0x14]

 Block25:
	mov ecx,dword ptr [ebp+8]
	lea eax,[ebp-0x14]
	push eax
	push 0xFFFFFFFF
	mov dword ptr [ebp-4],4
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov byte ptr [ebp-4],0
	test edi,edi
	je Block27

 Block26:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov ecx,dword ptr [ebp-0x18]
	inc ecx
	jmp Block1

 Block28:
	mov eax,dword ptr [ebp+8]
	lea esp,[ebp-0x34]
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
// CUIStatusBar::OnMouseMove
_SUB_EXCEPTION_HANDLER(47A7B0)
__SUB_CLASS_THIS(0047A7B0, __thiscall, 37820,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_47A7B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x64
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x78]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	xor edi,edi
	mov dword ptr [esp+0x18],ecx
	cmp dword ptr [esi+0x1614],edi
	je Block2

 Block1:
	mov ebp,dword ptr [esp+0x8C]
	mov ebx,dword ptr [esp+0x88]
	push 0xFFFFFFFF
	push ebp
	push ebx
	lea ecx,[esi-4]
	call CUIStatusBar::ChangeChatWndSize
	jmp Block55

 Block2:
	cmp dword ptr [esi+0x17C0],edi
	sete al
	test al,al
	sete al
	test al,al
	je Block53

 Block3:
	lea ecx,[esi-4]
	call CUIStatusBar::_ResetChatBarPos
	mov eax,3
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],edi
	mov ecx,dword ptr [esi+0x17C0]
	mov dword ptr [esp+0x80],edi
	cmp ecx,edi
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x28]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x80],2
	jne Block8

 Block6:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,edi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov edi,dword ptr [esp+0x24]
	xor ebx,ebx
	cmp edi,ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block13

 Block12:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block13:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	mov ebp,dword ptr [esp+0x14]
	lea ecx,[esp+0x1C]
	push ecx
	push edi
	mov dword ptr [esp+0x24],ebx
	call edx
	cmp eax,ebx
	jge Block15

 Block14:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block15:
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x8C]
	push 0xFFFFFF
	push ebp
	push ecx
	push ebx
	push ebx
	push edi
	call edx
	cmp eax,ebx
	jge Block17

 Block16:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block17:
	mov dword ptr [esp+0x14],ebx
	cmp dword ptr [esi+0x1800],3
	mov byte ptr [esp+0x80],3
	jne Block24

 Block18:
	cmp dword ptr [esp+0x88],0x241
	jge Block24

 Block19:
	mov eax,dword ptr [esi+0x180C]
	mov ecx,dword ptr [esp+0x8C]
	lea edx,[eax+8]
	cmp ecx,edx
	jge Block24

 Block20:
	add eax,0xFFFFFFFE
	cmp ecx,eax
	jle Block24

 Block21:
	push offset _D_VTMISSING
	lea ecx,[esp+0x4C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x84],4
	call Ztl_variant_t::_ctor_1
	push ebx
	push ebx
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esp+0x64]
	push ecx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push offset _S_UISTATUSBAR2IMGC__1
	mov byte ptr [esp+0x98],5
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x94],6
	cmp dword ptr [_D_G_RM],ebx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[esp+0x4C]
	mov byte ptr [esp+0x94],5
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[esp+0x38]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x58]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0x80],3
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [esp+0x18]
	push 7
	call CInputSystem::SetCursorState
	mov eax,3
	mov word ptr [esp+0x58],ax
	mov dword ptr [esp+0x60],0xFF
	mov ebp,dword ptr [esp+0x14]
	lea ecx,[esp+0x58]
	push ecx
	push ebp
	push 0
	push 0
	mov ecx,edi
	mov byte ptr [esp+0x90],8
	call IWzCanvas::Copy
	lea ecx,[esp+0x58]
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block50

 Block24:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x48]
	push edx
	call ebp
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x84],9
	call ebp
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	push 0
	push 0
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esp+0x44]
	push ecx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,0xA
	push offset _S_UISTATUSBAR2IMGC
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0xB
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea edx,[esp+0x6C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block33

 Block31:
	cmp eax,0x80004002
	je Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	mov ebp,8
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],bp
	jne Block40

 Block34:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block36:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block37:
	mov byte ptr [esp+0x80],9
	cmp word ptr [esp+0x38],bp
	jne Block41

 Block38:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block42

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block40:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x58]
	push ecx
	call ebx
	jmp Block37

 Block41:
	lea eax,[esp+0x38]
	push eax
	call ebx

 Block42:
	mov byte ptr [esp+0x80],3
	cmp word ptr [esp+0x48],bp
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea edx,[esp+0x48]
	push edx
	call ebx

 Block46:
	mov ecx,dword ptr [esp+0x18]
	push 0
	call CInputSystem::SetCursorState
	mov eax,3
	mov word ptr [esp+0x48],ax
	mov dword ptr [esp+0x50],0xFF
	mov ebp,dword ptr [esp+0x14]
	lea ecx,[esp+0x48]
	push ecx
	push ebp
	push 0
	push 1
	mov ecx,edi
	mov byte ptr [esp+0x90],0xD
	call IWzCanvas::Copy
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x80],3
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea eax,[esp+0x48]
	push eax
	call ebx

 Block50:
	mov byte ptr [esp+0x80],2
	test ebp,ebp
	je Block52

 Block51:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block52:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call ecx
	jmp Block54

 Block53:
	push edi
	call CInputSystem::SetCursorState

 Block54:
	mov ebp,dword ptr [esp+0x8C]
	mov ebx,dword ptr [esp+0x88]

 Block55:
	lea ecx,[esi+0x1820]
	call CUIStatusBar::CQuickSlot::IsEnabled
	test eax,eax
	je Block70

 Block56:
	push ebp
	lea ecx,[esi-4]
	push ebx
	call CUIStatusBar::GetShortCutIndexByPos
	mov edi,eax
	cmp edi,0xFFFFFFFF
	je Block73

 Block57:
	mov ecx,dword ptr [esp+0x18]
	push 5
	call CInputSystem::SetCursorState
	lea edx,[edi+edi*2+0x62D]
	mov al,byte ptr [esi+edx*4]
	lea edi,[esi+edx*4]
	cmp al,2
	je Block63

 Block58:
	cmp al,7
	je Block63

 Block59:
	cmp al,1
	jne Block61

 Block60:
	mov eax,dword ptr [edi+1]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 1
	push eax
	call CSkillInfo::GetSkill
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+ebp-0x80]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	add eax,ebx
	push eax
	lea ecx,[esi+0x7C]
	call CUIToolTip::SetToolTip_Skill
	jmp Block69

 Block61:
	cmp al,8
	jne Block69

 Block62:
	mov ecx,dword ptr [edi+1]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x30]
	push ecx
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+ebp-0x80]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	add eax,ebx
	push eax
	lea ecx,[esi+0x7C]
	call CUIToolTip::SetToolTip_MacroSysSkill
	jmp Block69

 Block63:
	mov ecx,dword ptr [edi+1]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esp+0x20]
	push edx
	call CItemInfo::GetItemSlot
	mov ecx,dword ptr [esp+0x20]
	push 1
	sub esp,8
	mov ebx,0xE
	mov eax,esp
	mov dword ptr [esp+0x8C],ebx
	mov dword ptr [esp+0x30],esp
	mov dword ptr [eax+4],0
	push 0
	mov eax,dword ptr [ecx]
	push 0
	mov edx,dword ptr [eax+4]
	mov ebp,dword ptr [esp+0x34]
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	mov byte ptr [esp+0xC0],0xF
	call edx
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edi+1]
	add ebp,0x20
	push ebp
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0xD8]
	lea edx,[eax+ecx-0x80]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	add eax,dword ptr [esp+0xD8]
	lea ecx,[esi+0x7C]
	push eax
	mov byte ptr [esp+0xD4],bl
	call CUIToolTip::SetToolTip_Bundle
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test eax,eax
	je Block68

 Block64:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block67

 Block65:
	mov eax,dword ptr [esp+0x20]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x20]
	test ecx,ecx
	je Block67

 Block66:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block67:
	mov dword ptr [esp+0x20],0

 Block68:
	mov ebp,dword ptr [esp+0x8C]
	mov ebx,dword ptr [esp+0x88]

 Block69:
	push ebp
	push ebx
	lea ecx,[esi-4]
	call CUIStatusBar::ProcessToolTip

 Block70:
	mov eax,dword ptr [esi+0x150C]
	lea ecx,[eax-0x14]
	mov dword ptr [esp+0x68],ecx
	mov ecx,dword ptr [esi+0x1510]
	add eax,0x14
	push ebp
	lea edx,[ecx-0x14]
	mov dword ptr [esp+0x74],eax
	push ebx
	lea eax,[esp+0x70]
	add ecx,0x14
	push eax
	mov dword ptr [esp+0x78],edx
	mov dword ptr [esp+0x80],ecx
	call PtInRect
	test eax,eax
	jne Block72

 Block71:
	lea ecx,[esi+0xAC4]
	call CUIToolTip::ClearToolTip

 Block72:
	xor eax,eax
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret 8

 Block73:
	cmp dword ptr [esi+0x80],1
	je Block69

 Block74:
	lea ecx,[esi+0x7C]
	call CUIToolTip::ClearToolTip
	jmp Block69
}
}
// CUIStatusBar::ProcessToolTip
_SUB_EXCEPTION_HANDLER(473140)
__SUB_CLASS_THIS(00473140, __thiscall, 37855,  CUIStatusBar, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_473140
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	mov esi,dword ptr [eax+0x978]
	xor edi,edi
	cmp esi,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xDC]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],edi
	call eax
	cmp eax,edi
	jge Block4

 Block3:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	xor eax,eax
	cmp dword ptr [esp+0x18],0xFFFFFFFF
	sete al
	cmp eax,edi
	je Block52

 Block5:
	mov eax,dword ptr [ebx+0x84]
	cmp eax,edi
	je Block7

 Block6:
	cmp eax,1
	jne Block52

 Block7:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,esi
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	je Block12

 Block8:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block9:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block11

 Block10:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block11:
	mov dword ptr [esp+0x28],0
	xor edi,edi

 Block12:
	mov ecx,dword ptr [ebx+0x35]
	push ecx
	lea edx,[ebx+0x33]
	push edx
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx eax,al
	push eax
	call get_next_level_exp
	add esp,0xC
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x18],edi
	mov ebp,dword ptr [esp+0x54]
	lea ecx,[ebp-0x4C]
	mov dword ptr [esp+0x4C],edi
	cmp ecx,0x52
	ja Block19

 Block13:
	mov edx,dword ptr [esp+0x58]
	add edx,0xFFFFFDD0
	cmp edx,0xE
	ja Block19

 Block14:
	cmp dword ptr [esi+0x2064],edi
	je Block16

 Block15:
	lea eax,[esp+0x1C]
	push 0x2B9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x2060]
	mov edx,dword ptr [esi+0x3F74]
	mov ecx,dword ptr [edx+ecx*4]
	mov byte ptr [esp+0x4C],1
	jmp Block17

 Block16:
	lea ecx,[esp+0x1C]
	push 0x7FD
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0x2060]
	mov ecx,dword ptr [esi+0x3F74]
	mov ecx,dword ptr [ecx+edx*4]
	mov byte ptr [esp+0x4C],2

 Block17:
	mov esi,dword ptr [esi+0x2050]
	mov eax,dword ptr [eax]
	lea edx,[ebx+4]
	push edx
	push ecx
	push esi
	push eax
	lea eax,[esp+0x28]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0x14
	mov byte ptr [esp+0x4C],0
	cmp eax,edi
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov ecx,dword ptr [esp+0x14]
	mov esi,dword ptr [ecx+0x18]
	cmp esi,edi
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov dword ptr [esp+0x24],edi
	call ecx
	cmp eax,edi
	jge Block23

 Block22:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block23:
	mov eax,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x1C]
	mov esi,dword ptr [eax+0x18]
	add edx,ebp
	mov dword ptr [esp+0x2C],edx
	cmp esi,edi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x24],edi
	call eax
	cmp eax,edi
	jge Block27

 Block26:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	mov eax,dword ptr [esp+0x14]
	mov esi,dword ptr [eax+0x17CC]
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x58]
	lea ebp,[ecx+edx]
	cmp esi,edi
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x24],edi
	call eax
	cmp eax,edi
	jge Block31

 Block30:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block31:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov esi,dword ptr [edx+0x17CC]
	add ecx,0x1C
	mov dword ptr [esp+0x34],ecx
	cmp esi,edi
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[esp+0x1C]
	push ecx
	push esi
	mov dword ptr [esp+0x24],edi
	call edx
	cmp eax,edi
	jge Block35

 Block34:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block35:
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [esp+0x1C]
	mov esi,dword ptr [ecx+0x17CC]
	add eax,0x12
	mov dword ptr [esp+0x38],eax
	cmp esi,edi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov dword ptr [esp+0x24],edi
	call ecx
	cmp eax,edi
	jge Block39

 Block38:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block39:
	mov eax,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x1C]
	mov esi,dword ptr [eax+0x17CC]
	add edx,0x150
	mov dword ptr [esp+0x3C],edx
	cmp esi,edi
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x24],edi
	call eax
	cmp eax,edi
	jge Block43

 Block42:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block43:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x1C]
	push ebp
	push edx
	lea eax,[esp+0x3C]
	add ecx,0x1F
	push eax
	mov dword ptr [esp+0x4C],ecx
	call PtInRect
	test eax,eax
	je Block46

 Block44:
	lea ecx,[esp+0x1C]
	push 0x1A37
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,eax
	mov edx,dword ptr [ebx+0xA9]
	push edx
	add ebx,0xA1
	push ebx
	mov byte ptr [esp+0x54],3
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x28]
	mov esi,dword ptr [esi]
	push ecx
	push eax
	lea edx,[esp+0x28]
	push esi
	push edx
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0x18
	mov byte ptr [esp+0x4C],0
	cmp eax,edi
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	mov ebx,dword ptr [esp+0x18]
	cmp ebx,edi
	je Block49

 Block47:
	cmp byte ptr [ebx],0
	je Block49

 Block48:
	mov ebp,dword ptr [esp+0x14]
	mov eax,dword ptr [ebp+4]
	mov edx,dword ptr [eax+0x30]
	lea esi,[ebp+4]
	push ebx
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x5C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x5C]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[ebp+0x80]
	call CUIToolTip::SetToolTip_String
	jmp Block50

 Block49:
	mov ecx,dword ptr [esp+0x14]
	sub ecx,0xFFFFFF80
	call CUIToolTip::ClearToolTip

 Block50:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp ebx,edi
	je Block52

 Block51:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block52:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 8
}
}
// CUIStatusBar::CChatLog::~CChatLog
_SUB_EXCEPTION_HANDLER(4719C0)
__SUB_CLASS_THIS0(004719C0, __thiscall, 37891,  CUIStatusBar::CChatLog, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4719C0
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
	mov eax,dword ptr [esi+0x30]
	mov dword ptr [esp+0x14],1
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0x30]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0x30]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0x30],0

 Block5:
	mov eax,dword ptr [esi+0xC]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIStatusBar::CQuickSlot::DrawConsumeItemCooltime
_SUB_EXCEPTION_HANDLER(46F5A0)
__SUB_CLASS_THIS0(0046F5A0, __thiscall, 37954,  CUIStatusBar::CQuickSlot, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_46F5A0
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
	mov eax,3
	xor ebx,ebx
	mov word ptr [esp+0x20],ax
	mov dword ptr [esp+0x28],ebx
	mov ecx,dword ptr [edi+0x8C]
	mov dword ptr [esp+0x58],ebx
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x58],2
	jne Block5

 Block3:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebx
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block6:
	mov esi,dword ptr [_D_G_PSTAGE+4]
	cmp esi,ebx
	je Block8

 Block7:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	jne Block10

 Block8:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	cmp eax,ebx
	je Block47

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret

 Block10:
	mov ebp,dword ptr [esi+0x238]
	cmp ebp,ebx
	jle Block36

 Block11:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	cmp eax,ebx
	je Block8

 Block12:
	mov ebx,dword ptr [eax+0x47C8]
	mov esi,ebp
	imul esi,0x3E8
	add esi,ebx
	call get_update_time
	cmp ebx,0xFFFFFFFF
	je Block25

 Block13:
	cmp esi,eax
	jle Block25

 Block14:
	sub esi,eax
	mov eax,0x10624DD3
	imul esi
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov ecx,ebp
	sub ecx,eax
	lea eax,[ecx*8]
	sub eax,ecx
	add eax,eax
	cdq
	idiv ebp
	mov esi,eax
	test esi,esi
	jl Block45

 Block15:
	cmp dword ptr [edi+0x90],esi
	je Block45

 Block16:
	mov dword ptr [edi+0x90],esi
	xor ebp,ebp
	lea ebx,[edi+0x94]

 Block17:
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	push ebp
	mov ecx,edi
	call CUIStatusBar::CQuickSlot::GetPosByIndex
	cmp byte ptr [ebx],2
	jne Block21

 Block18:
	mov edx,dword ptr [ebx+1]
	push edx
	call is_state_change_item
	add esp,4
	test eax,eax
	je Block21

 Block19:
	push offset _D_VTMISSING
	lea ecx,[esp+0x34]
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [edi+esi*4+0x2C]
	mov byte ptr [esp+0x58],4
	test ecx,ecx
	je Block1

 Block20:
	lea edx,[esp+0x30]
	push edx
	mov edx,dword ptr [esp+0x20]
	push eax
	mov eax,dword ptr [esp+0x20]
	push eax
	push edx
	call IWzCanvas::Copy
	lea ecx,[esp+0x30]
	jmp Block23

 Block21:
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [edi+0x68]
	mov byte ptr [esp+0x58],3
	test ecx,ecx
	je Block1

 Block22:
	lea edx,[esp+0x40]
	push edx
	mov edx,dword ptr [esp+0x20]
	push eax
	mov eax,dword ptr [esp+0x20]
	push eax
	push edx
	call IWzCanvas::Copy
	lea ecx,[esp+0x40]

 Block23:
	mov byte ptr [esp+0x58],2
	call Ztl_variant_t::~Ztl_variant_t
	inc ebp
	add ebx,0xC
	cmp ebp,8
	jl Block17

 Block24:
	jmp Block45

 Block25:
	cmp dword ptr [edi+0x90],0
	jl Block45

 Block26:
	mov ebp,dword ptr [ZImports::_VariantInit]
	mov dword ptr [edi+0x90],0xFFFFFFFF
	xor esi,esi
	mov bl,5

 Block27:
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	push esi
	mov ecx,edi
	call CUIStatusBar::CQuickSlot::GetPosByIndex
	lea edx,[esp+0x30]
	push edx
	call ebp
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block35

 Block28:
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [edi+0x68]
	mov byte ptr [esp+0x58],bl
	test ecx,ecx
	je Block1

 Block29:
	lea edx,[esp+0x30]
	push edx
	mov edx,dword ptr [esp+0x1C]
	push eax
	mov eax,dword ptr [esp+0x24]
	push eax
	push edx
	call IWzCanvas::Copy
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x58],2
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	inc esi
	cmp esi,8
	jl Block27

 Block34:
	jmp Block45

 Block35:
	push eax
	call _com_issue_error

 Block36:
	cmp dword ptr [edi+0x90],ebx
	jl Block45

 Block37:
	mov ebp,dword ptr [ZImports::_VariantInit]
	mov dword ptr [edi+0x90],0xFFFFFFFF
	xor esi,esi
	mov bl,6

 Block38:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov ecx,edi
	call CUIStatusBar::CQuickSlot::GetPosByIndex
	lea ecx,[esp+0x30]
	push ecx
	call ebp
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block35

 Block39:
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [edi+0x68]
	mov byte ptr [esp+0x58],bl
	test ecx,ecx
	je Block1

 Block40:
	lea edx,[esp+0x30]
	push edx
	mov edx,dword ptr [esp+0x1C]
	push eax
	mov eax,dword ptr [esp+0x24]
	push eax
	push edx
	call IWzCanvas::Copy
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x58],2
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	inc esi
	cmp esi,8
	jl Block38

 Block45:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	test eax,eax
	je Block47

 Block46:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block47:
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
// ExtractCharacterName_ZXString_unsignedshort__
_SUB_EXCEPTION_HANDLER(477040)
__SUB(00477040, __cdecl, 85127,  ZXString16, NakedParam<ZXString16>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_477040
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
	mov dword ptr [esp+0x1C],ebx
	push ebx
	mov ebp,1
	push 0x3A
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x34],ebp
	call ZXString16::Find_
	mov edi,eax
	cmp edi,ebx
	push 0xFFFFFFFF
	jge Block2

 Block1:
	mov esi,dword ptr [esp+0x38]
	push offset _S_
	mov ecx,esi
	mov dword ptr [esi],ebx
	call ZXString16::AssignCharStr
	mov dword ptr [esp+0x1C],ebp
	jmp Block13

 Block2:
	push offset _S___24
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebx
	call ZXString16::AssignCharStr
	push 2
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x34],2
	call ZXString16::Left
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,eax
	call ZXString16::op_eq
	mov esi,eax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x2C],1
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	cmp esi,ebx
	je Block8

 Block7:
	mov esi,dword ptr [esp+0x34]
	push 0xFFFFFFFF
	push offset _S_
	mov ecx,esi
	mov dword ptr [esi],ebx
	call ZXString16::AssignCharStr
	mov dword ptr [esp+0x1C],ebp
	jmp Block13

 Block8:
	dec edi
	push edi
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x40]
	call ZXString16::Left
	push ebx
	push 0x20
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],3
	xor esi,esi
	call ZXString16::Find_
	cmp eax,0xFFFFFFFF
	je Block11

 Block9:
	lea ecx,[ecx]

 Block10:
	lea esi,[eax+1]
	push esi
	push 0x20
	lea ecx,[esp+0x1C]
	call ZXString16::Find_
	cmp eax,0xFFFFFFFF
	jne Block10

 Block11:
	push 0xFFFFFFFF
	push esi
	mov esi,dword ptr [esp+0x3C]
	push esi
	lea ecx,[esp+0x20]
	call ZXString16::Substring
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x1C],ebp
	mov byte ptr [esp+0x2C],1
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x2C],bl
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block15:
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
// CUIStatusBar::Draw
_SUB_EXCEPTION_HANDLER(476CD0)
__SUB_CLASS_THIS(00476CD0, __thiscall, 37826,  CUIStatusBar, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_476CD0
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
	mov dword ptr [esp+0x18],ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x20]
	push eax
	mov dword ptr [esp+0x18],ecx
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	xor ecx,ecx
	cmp dword ptr [eax+4],ecx
	mov eax,dword ptr [esp+0x24]
	sete cl
	mov ebp,ecx
	test eax,eax
	je Block4

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	test ebp,ebp
	jne Block30

 Block5:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block10

 Block6:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call ebx
	test eax,eax
	jne Block9

 Block7:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block9

 Block8:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block9:
	mov dword ptr [esp+0x2C],0

 Block10:
	mov edi,dword ptr [_D_G_PSTAGE+4]
	xor ebx,ebx
	cmp edi,ebx
	je Block18

 Block11:
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[edi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block18

 Block12:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x1C]
	mov ecx,edi
	call eax
	cmp eax,0x16
	jne Block18

 Block13:
	lea ecx,[esi+4]
	push ecx
	mov ebp,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ebp],ebx
	cmp ecx,ebx
	je Block17

 Block14:
	mov eax,ecx
	lea edi,[eax+1]

 Block15:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block15

 Block16:
	sub eax,edi
	mov edi,eax
	push edi
	push ecx
	push ebx
	push edi
	mov ecx,ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	mov ecx,ebp
	call ZXString<char>::ReleaseBuffer

 Block17:
	mov ecx,dword ptr [esi+0x3D]
	push ecx
	lea edi,[esi+0x39]
	push edi
	mov dword ptr [esp+0x44],ebx
	call _ZtlSecureFuseHelper<short>::call
	mov edx,dword ptr [esi+0x3D]
	push edx
	push edi
	movzx ebp,ax
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,bp
	add esp,0x10
	push ecx
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	dec eax
	neg eax
	sbb eax,eax
	and eax,0x50
	add eax,0x78
	jmp Block23

 Block18:
	lea ecx,[esi+4]
	push ecx
	mov ebp,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ebp],ebx
	cmp ecx,ebx
	je Block22

 Block19:
	mov eax,ecx
	lea edi,[eax+1]
	lea ebx,[ebx]

 Block20:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block20

 Block21:
	sub eax,edi
	mov edi,eax
	push edi
	push ecx
	push ebx
	push edi
	mov ecx,ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	mov ecx,ebp
	call ZXString<char>::ReleaseBuffer

 Block22:
	mov ecx,dword ptr [esi+0x3D]
	push ecx
	lea edx,[esi+0x39]
	push edx
	mov dword ptr [esp+0x44],1
	call _ZtlSecureFuseHelper<short>::call
	movzx edi,ax
	mov eax,dword ptr [esi+0x35]
	push eax
	lea ecx,[esi+0x33]
	push ecx
	call _ZtlSecureFuseHelper<unsigned char>::call
	movsx edx,di
	add esp,0x10
	push edx
	movzx eax,al

 Block23:
	mov ecx,dword ptr [esp+0x20]
	push eax
	mov dword ptr [esp+0x44],0xFFFFFFFF
	call CUIStatusBar::SetStatusValue
	mov ecx,dword ptr [esi+0x35]
	push ecx
	lea edi,[esi+0x33]
	push edi
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	cmp al,0x32
	jbe Block25

 Block24:
	mov dword ptr [esp+0x1C],ebx
	jmp Block26

 Block25:
	mov edx,dword ptr [esi+0xC9]
	push edx
	lea eax,[esi+0xC1]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov dword ptr [esp+0x1C],eax

 Block26:
	mov ecx,dword ptr [esi+0x35]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx edx,al
	push edx
	call get_next_level_exp
	add esp,0xC
	cmp eax,1
	mov dword ptr [esp+0x20],eax
	jg Block28

 Block27:
	mov dword ptr [esp+0x20],1

 Block28:
	mov eax,dword ptr [esi+0xA9]
	push eax
	lea ecx,[esi+0xA1]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edi,eax
	mov eax,dword ptr [esp+0x1C]
	mov edx,dword ptr [eax+0x2144]
	push edx
	add eax,0x213C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,eax
	mov eax,dword ptr [esi+0x81]
	push eax
	lea ecx,[esi+0x79]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov ebp,eax
	mov eax,dword ptr [esp+0x2C]
	mov edx,dword ptr [eax+0x2138]
	push edx
	add eax,0x2130
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x40]
	add esp,0x20
	push ecx
	push edx
	push edi
	push ebx
	push ebp
	push eax
	mov eax,dword ptr [esi+0x69]
	push eax
	add esi,0x61
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov esi,dword ptr [esp+0x38]
	add esp,8
	push eax
	mov ecx,esi
	call CUIStatusBar::SetNumberValue
	add esi,0x1824
	mov ecx,esi
	call CUIStatusBar::CQuickSlot::CompareValidateFuncKeyMappedInfo
	test eax,eax
	jne Block30

 Block29:
	mov ecx,esi
	call CUIStatusBar::CQuickSlot::Draw

 Block30:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 4
}
}
// CUIStatusBar::GetWhisperTarget
__SUB_CLASS_THIS0(000D97C0, __thiscall, 37837,  CUIStatusBar, ZXString<char>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	add ecx,0x16B0
	push ecx
	mov ecx,esi
	mov dword ptr [esp+8],0
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CUIStatusBar::SetShortcutTooltip
_SUB_EXCEPTION_HANDLER(474400)
// 874764
static uint8_t _SUB_474400_LOOKUP_TABLE_0[32] = {
0, 1, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
2, 3, 4, 5, 8, 8, 8, 8, 8, 8, 8, 8, 6, 7, 139, 255, 
};
__SUB_CLASS_THIS(00474400, __thiscall, 37848,  CUIStatusBar, void, long, char) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_474400
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x10],ebx
	mov cl,byte ptr [esp+0x50]
	movsx eax,cl
	add eax,0xFFFFFFEF
	mov dword ptr [esp+0x44],ebx
	cmp eax,0x1D
	ja Block10

 Block1:
	movzx eax,byte ptr [eax+_SUB_474400_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block8
cmp EAX, 1
je Block9
cmp EAX, 2
je Block6
cmp EAX, 3
je Block7
cmp EAX, 4
je Block3
cmp EAX, 5
je Block4
cmp EAX, 6
je Block2
cmp EAX, 7
je Block5
cmp EAX, 8
je Block10


 Block2:
	push offset _S_INS
	jmp Block11

 Block3:
	push offset _S_END
	jmp Block11

 Block4:
	push offset _S_HOME
	jmp Block11

 Block5:
	push offset _S_DEL
	jmp Block11

 Block6:
	push offset _S_PAGEUP
	jmp Block11

 Block7:
	push offset _S_PAGEDOWN
	jmp Block11

 Block8:
	push offset _S_CTRL
	jmp Block11

 Block9:
	push offset _S_ALT
	jmp Block11

 Block10:
	mov byte ptr [esp+0x50],cl
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0x51],bl
	push ecx

 Block11:
	lea ecx,[esp+0x14]
	call ZXString<char>::AssignCStr
	mov eax,dword ptr [esp+0x4C]
	mov edi,dword ptr [esp+0x10]
	cmp eax,5
	ja Block33

 Block12:
	cmp EAX, 0
je Block13
cmp EAX, 1
je Block16
cmp EAX, 2
je Block19
cmp EAX, 3
je Block22
cmp EAX, 4
je Block25
cmp EAX, 5
je Block28


 Block13:
	lea edx,[esp+0x24]
	push 0x989
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x50],ebx
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea eax,[esp+0x58]
	push eax
	mov byte ptr [esp+0x50],2
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x1544]
	add esp,0xC
	push ebx
	push 1
	push eax
	call CCtrlButton::LoadToolTipbyString
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x44],1
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov eax,dword ptr [esp+0x24]
	jmp Block31

 Block16:
	lea ecx,[esp+0x28]
	push 0x98A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x4C],ebx
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x54]
	push edx
	mov byte ptr [esp+0x50],4
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x154C]
	add esp,0xC
	push ebx
	push 1
	push eax
	call CCtrlButton::LoadToolTipbyString
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x44],3
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,dword ptr [esp+0x28]
	jmp Block31

 Block19:
	lea eax,[esp+0x2C]
	push 0x98B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x50],6
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x1554]
	add esp,0xC
	push ebx
	push 1
	push eax
	call CCtrlButton::LoadToolTipbyString
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],5
	cmp eax,ebx
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov eax,dword ptr [esp+0x2C]
	jmp Block31

 Block22:
	lea edx,[esp+0x30]
	push 0x98C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x18],ebx
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x50],8
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x155C]
	add esp,0xC
	push ebx
	push 1
	push eax
	call CCtrlButton::LoadToolTipbyString
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x44],7
	cmp eax,ebx
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov eax,dword ptr [esp+0x30]
	jmp Block31

 Block25:
	lea ecx,[esp+0x34]
	push 0x18CB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x1C],ebx
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x50],0xA
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x155C]
	add esp,0xC
	push ebx
	push 1
	push eax
	call CCtrlButton::LoadToolTipbyString
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x44],9
	cmp eax,ebx
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov eax,dword ptr [esp+0x34]
	jmp Block31

 Block28:
	lea eax,[esp+0x38]
	push 0x18ED
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x20],ebx
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x50],0xC
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x155C]
	add esp,0xC
	push ebx
	push 1
	push eax
	call CCtrlButton::LoadToolTipbyString
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x44],0xB
	cmp eax,ebx
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	mov eax,dword ptr [esp+0x38]

 Block31:
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp edi,ebx
	je Block35

 Block34:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block35:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x38
	ret 8
}
}
// CUIStatusBar::OnMouseButton
__SUB_CLASS_THIS(004803F0, __thiscall, 37819,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x201
	push ebx
	push esi
	push edi
	mov esi,ecx
	je Block7

 Block1:
	sub eax,1
	je Block4

 Block2:
	sub eax,1
	jne Block9

 Block3:
	mov edi,dword ptr [esp+0x1C]
	mov ebx,dword ptr [esp+0x18]
	push edi
	add esi,0xFFFFFFFC
	push ebx
	mov ecx,esi
	call CUIStatusBar::TryShowMemoListDlg
	push edi
	push ebx
	mov ecx,esi
	call CUIStatusBar::TryUseTempExp
	pop edi
	pop esi
	pop ebx
	ret 0x10

 Block4:
	cmp dword ptr [esi+0x1614],0
	je Block6

 Block5:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea eax,[esi-4]
	neg eax
	sbb eax,eax
	and eax,esi
	push eax
	call CWndMan::ReleaseCaptureWnd

 Block6:
	pop edi
	mov dword ptr [esi+0x1614],0
	pop esi
	pop ebx
	ret 0x10

 Block7:
	lea ecx,[esi+0x7C]
	call CUIToolTip::ClearToolTip
	mov edi,dword ptr [esp+0x1C]
	mov ebx,dword ptr [esp+0x18]
	push edi
	add esi,0xFFFFFFFC
	push ebx
	mov ecx,esi
	call CUIStatusBar::TryBeginDragFuncKeyMappedIcon
	push edi
	push ebx
	mov ecx,esi
	call CUIStatusBar::TryBeginChangeChatWnd
	push edi
	push ebx
	mov ecx,esi
	call CUIStatusBar::TryBeginWhisper
	test eax,eax
	jne Block9

 Block8:
	push edi
	push ebx
	mov ecx,esi
	call CUIStatusBar::TryBeginShowItemInfo

 Block9:
	pop edi
	pop esi
	pop ebx
	ret 0x10
}
}
// CBitmapStrNumber::_GetDigit
__SUB_CLASS_THIS(0046D350, __thiscall, 37795,  CBitmapStrNumber, _x_com_ptr<IWzCanvas>*, _x_com_ptr<IWzCanvas>*, char) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0xC]
	push esi
	mov esi,ecx
	mov cl,al
	sub cl,0x30
	mov dword ptr [esp+4],0
	cmp cl,9
	ja Block4

 Block1:
	movsx edx,al
	mov eax,dword ptr [esi+edx*4-0xB4]
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esi],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	mov eax,esi
	pop esi
	pop ecx
	ret 8

 Block4:
	push 0
	push eax
	lea ecx,[esi+0x38]
	call ZXString<char>::Find__1
	test eax,eax
	jl Block8

 Block5:
	mov ecx,dword ptr [esi+0x34]
	mov eax,dword ptr [ecx+eax*4]
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esi],eax
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block7:
	mov eax,esi
	pop esi
	pop ecx
	ret 8

 Block8:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [eax],0
	pop esi
	pop ecx
	ret 8
}
}
// CUIStatusBar::SetButtonBlink
_SUB_EXCEPTION_HANDLER(46DA90)
__SUB_CLASS_THIS(0046DA90, __thiscall, 37846,  CUIStatusBar, void, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_46DA90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ebp,dword ptr [esp+0x40]
	cmp ebp,3
	ja Block18

 Block1:
	cmp dword ptr [esp+0x44],0
	jne Block4

 Block2:
	mov eax,dword ptr [edi+ebp*4+0x17E0]
	test eax,eax
	je Block18

 Block3:
	mov dword ptr [edi+ebp*4+0x17E0],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x2C
	ret 8

 Block4:
	cmp dword ptr [edi+ebp*4+0x17E0],0
	lea esi,[edi+ebp*4+0x17E0]
	sete al
	test al,al
	sete al
	test al,al
	jne Block18

 Block5:
	xor eax,eax
	cmp ebp,3
	ja Block11

 Block6:
	cmp EBP, 0
je Block7
cmp EBP, 1
je Block8
cmp EBP, 2
je Block9
cmp EBP, 3
je Block10


 Block7:
	mov eax,offset _S_UISTATUSBAR2IMGM__5
	jmp Block11

 Block8:
	mov eax,offset _S_UISTATUSBAR2IMGM__4
	jmp Block11

 Block9:
	mov eax,offset _S_UISTATUSBAR2IMGM__3
	jmp Block11

 Block10:
	mov eax,offset _S_UISTATUSBAR2IMGM__2

 Block11:
	push 0
	push 1
	push eax
	lea eax,[esp+0x4C]
	push eax
	lea ecx,[edi+0x1918]
	call CLayoutMan::AddLayer
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	push offset _D_VTMISSING
	lea ecx,[esp+0x24]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x3C],0
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x38],1
	test ecx,ecx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea eax,[esp+0x20]
	push eax
	lea edx,[esp+0x14]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x10]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x20]
	call Ztl_variant_t::~Ztl_variant_t
	cmp dword ptr [esp+0x44],1
	jne Block17

 Block16:
	call dword ptr [ZImports::_timeGetTime]
	mov dword ptr [edi+ebp*4+0x17F0],eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x2C
	ret 8

 Block17:
	mov dword ptr [edi+ebp*4+0x17F0],0xFFFFFFFF

 Block18:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x2C
	ret 8
}
}
// CUIStatusBar::TryBeginShowItemInfo
_SUB_EXCEPTION_HANDLER(46FBF0)
__SUB_CLASS_THIS(0046FBF0, __thiscall, 37855,  CUIStatusBar, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_46FBF0
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
	mov ebx,ecx
	xor ecx,ecx
	cmp dword ptr [ebx+0x1808],ecx
	mov dword ptr [esp+0x18],ecx
	jle Block29

 Block1:
	mov ebp,dword ptr [esp+0x38]
	mov esi,dword ptr [CUIStatusBar::m_aChatLog]
	mov dword ptr [esp+0x14],ecx

 Block2:
	test esi,esi
	jne Block4

 Block3:
	xor eax,eax
	jmp Block5

 Block4:
	mov eax,dword ptr [esi-4]

 Block5:
	sub eax,ecx
	mov ecx,dword ptr [ebx+0x156C]
	cmp dword ptr [ecx+0x3C],0
	jne Block7

 Block6:
	dec eax
	jmp Block8

 Block7:
	mov edx,dword ptr [ecx+0x3C]
	mov ecx,dword ptr [ecx+0x38]
	sub ecx,edx
	add eax,ecx

 Block8:
	test eax,eax
	jl Block26

 Block9:
	test esi,esi
	je Block26

 Block10:
	cmp eax,dword ptr [esi-4]
	jae Block26

 Block11:
	mov esi,dword ptr [esi+eax*8+4]
	mov dword ptr [esp+0x20],esi
	test esi,esi
	je Block13

 Block12:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	mov ecx,dword ptr [esi+0x18]
	push ecx
	lea edi,[esi+0x10]
	push edi
	mov dword ptr [esp+0x34],0
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x10
	je Block19

 Block14:
	mov edx,dword ptr [esi+0x18]
	push edx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xA
	je Block19

 Block15:
	mov eax,dword ptr [esi+0x18]
	push eax
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x13
	je Block19

 Block16:
	mov ecx,dword ptr [esi+0x18]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x14
	je Block19

 Block17:
	mov edx,dword ptr [esi+0x18]
	push edx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x15
	je Block19

 Block18:
	mov eax,dword ptr [esi+0x18]
	push eax
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x16
	jne Block23

 Block19:
	cmp dword ptr [esi+0x30],0
	je Block23

 Block20:
	mov ecx,dword ptr [ebx+0x1804]
	mov eax,dword ptr [ebx+0x1810]
	sub ecx,3
	neg ecx
	sbb ecx,ecx
	and ecx,5
	sub eax,ecx
	add eax,dword ptr [ebx+0x1800]
	sub eax,dword ptr [esp+0x14]
	sub eax,0xD
	cmp eax,ebp
	jg Block23

 Block21:
	add eax,0xC
	cmp ebp,eax
	jg Block23

 Block22:
	cmp dword ptr [esp+0x34],0x241
	jl Block28

 Block23:
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block25

 Block24:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block25:
	mov esi,dword ptr [CUIStatusBar::m_aChatLog]
	mov dword ptr [esp+0x20],0

 Block26:
	mov ecx,dword ptr [esp+0x18]
	add dword ptr [esp+0x14],0xD
	inc ecx
	cmp ecx,dword ptr [ebx+0x1808]
	mov dword ptr [esp+0x18],ecx
	jl Block2

 Block27:
	jmp Block29

 Block28:
	mov esi,dword ptr [esi+0x30]
	mov edx,dword ptr [ebx+4]
	mov eax,dword ptr [edx+0x30]
	push 0
	push 0
	push 0
	push 0
	lea edi,[ebx+4]
	push 0
	push esi
	mov ecx,edi
	call eax
	mov edx,dword ptr [edi]
	lea ecx,[eax+ebp+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,edi
	call eax
	mov esi,dword ptr [esp+0x50]
	add eax,esi
	push eax
	lea ecx,[ebx+0xAC8]
	call CUIToolTip::ShowItemToolTip
	lea ecx,[esp+0x1C]
	mov dword ptr [ebx+0x1510],esi
	mov dword ptr [ebx+0x1514],ebp
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZRef<CUIStatusBar::CChatLog>::~ZRef<CUIStatusBar::CChatLog>

 Block29:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 8
}
}
// CUIStatusBar::CGauge::~CGauge
__SUB_CLASS_THIS0(0046D3F0, __thiscall, 37917,  CUIStatusBar::CGauge, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+8]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov esi,dword ptr [esi]
	test esi,esi
	je Block6

 Block5:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block6:
	pop esi
	ret
}
}
// CUIStatusBar::CQuickSlot::CompareValidateFuncKeyMappedInfo
__SUB_CLASS_THIS0(00471000, __thiscall, 37961,  CUIStatusBar::CQuickSlot, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x30
	push ebx
	push ebp
	push esi
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edi
	lea eax,[esp+0x38]
	mov ebx,ecx
	push eax
	mov ecx,esi
	call CWvsContext::GetCharacterData
	xor ecx,ecx
	cmp dword ptr [eax+4],ecx
	mov eax,dword ptr [esp+0x3C]
	sete cl
	mov dword ptr [esp+0x24],ecx
	test eax,eax
	je Block4

 Block1:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block4

 Block3:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block4:
	cmp dword ptr [esp+0x24],0
	je Block10

 Block5:
	xor eax,eax
	add ebx,0x94
	mov ecx,ebx
	lea esp,[esp]

 Block6:
	cmp byte ptr [ecx],0
	jne Block9

 Block7:
	inc eax
	add ecx,0xC
	cmp eax,8
	jl Block6

 Block8:
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block9:
	push 0x60
	push 0
	push ebx
	call _memset
	add esp,0xC
	xor eax,eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block10:
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,esi
	call CWvsContext::GetCharacterData
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x1C],edx
	test eax,eax
	je Block15

 Block11:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block14

 Block13:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block14:
	mov dword ptr [esp+0x3C],0

 Block15:
	mov eax,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	mov dword ptr [esp+0x28],eax
	mov eax,dword ptr [TSingleton<CQuickslotKeyMappedMan>::ms_pInstance]
	add ebx,0x94
	add eax,4
	mov dword ptr [esp+0x10],1
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],8

 Block16:
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x28]
	push eax
	call CFuncKeyMappedMan::FuncKeyMapped
	mov ebp,eax
	movzx eax,byte ptr [ebp]
	xor edi,edi
	dec eax
	mov dword ptr [esp+0x14],edi
	cmp eax,7
	ja Block66

 Block17:
	cmp EAX, 0
je Block56
cmp EAX, 1
je Block18
cmp EAX, 2
je Block18
cmp EAX, 3
je Block62
cmp EAX, 4
je Block62
cmp EAX, 5
je Block62
cmp EAX, 6
je Block18
cmp EAX, 7
je Block62


 Block18:
	mov esi,dword ptr [ebp+1]
	mov eax,0x431BDE83
	imul esi
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	jne Block49

 Block19:
	mov eax,0x68DB8BAD
	imul esi
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xC8
	je Block31

 Block20:
	cmp eax,0xC9
	je Block31

 Block21:
	cmp eax,0xCA
	je Block31

 Block22:
	cmp eax,0xCD
	je Block31

 Block23:
	cmp eax,0xDD
	je Block31

 Block24:
	cmp eax,0xEC
	je Block31

 Block25:
	cmp eax,0xEE
	je Block31

 Block26:
	cmp eax,0xF5
	je Block31

 Block27:
	cmp eax,0xD4
	je Block31

 Block28:
	cmp eax,0xE2
	je Block31

 Block29:
	cmp eax,0xE3
	je Block31

 Block30:
	push esi
	call is_immediate_mobsummon_item
	add esp,4
	test eax,eax
	je Block55

 Block31:
	mov ebx,dword ptr [esp+0x1C]
	push 2
	mov ecx,ebx
	call CharacterData::GetItemSlotCount
	mov edi,1
	cmp eax,edi
	mov dword ptr [esp+0x2C],eax
	jl Block43

 Block32:
	lea ecx,[ecx]

 Block33:
	push edi
	push 2
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,ebx
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block38

 Block34:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block37

 Block35:
	mov edx,dword ptr [esp+0x34]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x34]
	test ecx,ecx
	je Block37

 Block36:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block37:
	mov dword ptr [esp+0x34],0

 Block38:
	test esi,esi
	je Block42

 Block39:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	cmp eax,dword ptr [ebp+1]
	jne Block42

 Block40:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+4]
	mov ecx,esi
	call edx
	test eax,eax
	jne Block42

 Block41:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	mov ecx,esi
	call edx
	add dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x10],0

 Block42:
	inc edi
	cmp edi,dword ptr [esp+0x2C]
	jle Block33

 Block43:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax]
	cmp ecx,dword ptr [ebp]
	jne Block46

 Block44:
	mov dl,byte ptr [ebp+4]
	cmp dl,byte ptr [eax+4]
	jne Block46

 Block45:
	mov ecx,dword ptr [esp+0x14]
	cmp dword ptr [eax+8],ecx
	je Block47

 Block46:
	mov dword ptr [esp+0x10],0

 Block47:
	mov ebx,dword ptr [esp+0x18]

 Block48:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [ebx],edx
	mov al,byte ptr [ebp+4]
	mov byte ptr [ebx+4],al
	mov dword ptr [ebx+8],ecx
	jmp Block69

 Block49:
	cmp eax,5
	jne Block31

 Block50:
	push esi
	call get_cashslot_item_type
	add esp,4
	cmp eax,8
	jl Block54

 Block51:
	cmp eax,0xB
	jle Block53

 Block52:
	cmp eax,0x27
	jne Block54

 Block53:
	cmp eax,9
	je Block31

 Block54:
	push esi
	call get_etc_cash_item_type
	add esp,4
	cmp eax,6
	je Block31

 Block55:
	mov dword ptr [esp+0x10],edi
	jmp Block48

 Block56:
	mov edx,dword ptr [ebp+1]
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push edi
	push edx
	push eax
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block66

 Block57:
	cmp dword ptr [ebp+1],edi
	je Block66

 Block58:
	mov ecx,dword ptr [ebx]
	cmp ecx,dword ptr [ebp]
	jne Block60

 Block59:
	mov dl,byte ptr [ebp+4]
	cmp dl,byte ptr [ebx+4]
	je Block61

 Block60:
	mov dword ptr [esp+0x10],edi

 Block61:
	mov eax,dword ptr [ebp]
	mov dword ptr [ebx],eax
	mov cl,byte ptr [ebp+4]
	mov byte ptr [ebx+4],cl
	jmp Block69

 Block62:
	mov edx,dword ptr [ebx]
	cmp edx,dword ptr [ebp]
	jne Block64

 Block63:
	mov al,byte ptr [ebp+4]
	cmp al,byte ptr [ebx+4]
	je Block65

 Block64:
	mov dword ptr [esp+0x10],edi

 Block65:
	mov ecx,dword ptr [ebp]
	mov dword ptr [ebx],ecx
	mov dl,byte ptr [ebp+4]
	mov byte ptr [ebx+4],dl
	jmp Block69

 Block66:
	cmp byte ptr [ebx],0
	je Block68

 Block67:
	mov dword ptr [esp+0x10],edi

 Block68:
	mov byte ptr [ebx],0
	mov byte ptr [ebp],0

 Block69:
	mov eax,dword ptr [esp+0x20]
	add eax,4
	add ebx,0xC
	sub dword ptr [esp+0x24],1
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x18],ebx
	jne Block16

 Block70:
	mov eax,dword ptr [esp+0x10]
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CUIStatusBar::SetWhisperTarget
_SUB_EXCEPTION_HANDLER(471830)
__SUB_CLASS_THIS(00471830, __thiscall, 37838,  CUIStatusBar, void, NakedParam<ZXString<char>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_471830
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	lea eax,[esp+0x1C]
	lea esi,[edi+0x16B0]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x18],0
	call ZXString<char>::op_assign
	mov esi,dword ptr [esi]
	test esi,esi
	je Block3

 Block1:
	cmp byte ptr [esi],0
	je Block3

 Block2:
	mov dword ptr [edi+0x1610],7

 Block3:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 8
}
}
// CUIStatusBar::OnMouseEnter
__SUB_CLASS_THIS(0046CC80, __thiscall, 37822,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0x7C]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CUIStatusBar::OnChildNotify
__SUB_CLASS_THIS(004804A0, __thiscall, 37823,  CUIStatusBar, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	cmp edi,0x3F2
	jne Block7

 Block1:
	cmp ebx,0x12C
	jb Block4

 Block2:
	cmp ebx,0x130
	ja Block4

 Block3:
	call CUIStatusBar::ChatLogDraw
	call timeGetTime
	mov dword ptr [esi+0x16AC],eax

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

 Block7:
	cmp edi,0x3F4
	jne Block10

 Block8:
	cmp ebx,0x258
	jne Block4

 Block9:
	mov eax,dword ptr [esp+0x18]
	push eax
	call CUIStatusBar::SetChatTarget
	pop edi
	pop esi
	pop ebx
	ret 0xC

 Block10:
	lea ecx,[edi-0x7D0]
	cmp ecx,3
	ja Block4

 Block11:
	cmp ebx,0x64
	jne Block6

 Block12:
	push 0
	lea edx,[edi-0x7D0]
	push edx
	mov ecx,esi
	call CUIStatusBar::SetButtonBlink
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push edi
	mov ecx,esi
	call edx
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CUIStatusBar::GetChatTarget
__SUB_CLASS_THIS0(0046DE40, __thiscall, 37840,  CUIStatusBar, long) {
__asm {

 Block0:
	mov eax,dword ptr [CUIStatusBar::m_aChatLog]
	push ebx
	mov ebx,ecx
	cmp dword ptr [ebx+0x195C],0
	jne Block4

 Block1:
	test eax,eax
	jne Block3

 Block2:
	pop ebx
	ret

 Block3:
	mov eax,dword ptr [eax-4]
	pop ebx
	ret

 Block4:
	push esi
	push edi
	xor edi,edi
	xor esi,esi

 Block5:
	test eax,eax
	je Block11

 Block6:
	cmp esi,dword ptr [eax-4]
	jae Block11

 Block7:
	mov ecx,dword ptr [eax+esi*8+4]
	test ecx,ecx
	je Block10

 Block8:
	mov eax,dword ptr [ebx+0x195C]
	push eax
	call CUIStatusBar::CChatLog::IsFiltered
	test eax,eax
	mov eax,dword ptr [CUIStatusBar::m_aChatLog]
	je Block10

 Block9:
	inc edi

 Block10:
	inc esi
	jmp Block5

 Block11:
	mov eax,edi
	pop edi
	pop esi
	pop ebx
	ret
}
}
// CUIStatusBar::ChangeChatWndSize
_SUB_EXCEPTION_HANDLER(47A540)
__SUB_CLASS_THIS(0047A540, __thiscall, 37844,  CUIStatusBar, void, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_47A540
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0x1618],0
	je Block32

 Block1:
	mov eax,dword ptr [esp+0x28]
	xor edi,edi
	test eax,eax
	jge Block11

 Block2:
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [esi+0x1614]
	xor ebx,ebx
	cmp ecx,dword ptr [esi+0x1810]
	jge Block4

 Block3:
	mov edx,eax
	lea edi,[ebx+1]
	sub edx,ecx
	jmp Block5

 Block4:
	mov edx,ecx
	sub edx,eax

 Block5:
	cmp edx,0xD
	setle bl
	mov edx,ebx
	test edx,edx
	jne Block32

 Block6:
	lea ebx,[edx+0x1A]
	test edi,edi
	je Block8

 Block7:
	cmp dword ptr [esi+0x1800],0x1E9
	setge dl
	jmp Block9

 Block8:
	cmp dword ptr [esi+0x1800],ebx
	setle dl

 Block9:
	test edx,edx
	jne Block32

 Block10:
	sub eax,ecx
	mov ecx,eax
	mov eax,0x4EC4EC4F
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0xD
	add dword ptr [esi+0x1800],eax
	mov eax,dword ptr [esi+0x1800]
	jmp Block16

 Block11:
	xor ecx,ecx
	cmp eax,1
	sete cl
	xor edx,edx
	mov ebx,0x1A
	mov eax,ecx
	mov ecx,dword ptr [esi+0x1800]
	test eax,eax
	je Block13

 Block12:
	cmp ecx,0x1E9
	setge dl
	jmp Block14

 Block13:
	cmp ecx,ebx
	setl dl

 Block14:
	test edx,edx
	jne Block32

 Block15:
	neg eax
	sbb eax,eax
	and eax,ebx
	add eax,0xFFFFFFF3
	add eax,ecx
	mov dword ptr [esi+0x1800],eax

 Block16:
	cmp eax,0x1E9
	jl Block18

 Block17:
	mov dword ptr [esi+0x1800],0x1E9
	jmp Block20

 Block18:
	cmp eax,ebx
	jg Block20

 Block19:
	mov dword ptr [esi+0x1800],ebx

 Block20:
	mov ecx,dword ptr [esi+0x1800]
	mov eax,ecx
	cdq
	mov edi,0xD
	idiv edi
	mov dword ptr [esi+0x1808],eax
	test edx,edx
	jne Block22

 Block21:
	add ecx,2
	mov dword ptr [esi+0x1800],ecx

 Block22:
	mov eax,0x203
	sub eax,dword ptr [esi+0x1800]
	push 1
	mov ecx,esi
	mov dword ptr [esi+0x1810],eax
	mov dword ptr [esi+0x1614],eax
	call CUIStatusBar::MakeCtrlEdit
	mov ecx,dword ptr [esi+0x156C]
	test ecx,ecx
	je Block24

 Block23:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax

 Block24:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x18],0
	test eax,eax
	je Block26

 Block25:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block27

 Block26:
	xor eax,eax

 Block27:
	push eax
	lea ecx,[esi+0x1568]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZRef<CCtrlScrollBar>::op_assign_ptr
	mov eax,dword ptr [esi+0x1800]
	mov ecx,dword ptr [esi+0x156C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	push 0
	lea edi,[eax-2]
	push edi
	mov edi,0x204
	sub edi,eax
	push edi
	mov eax,0x235
	sub eax,dword ptr [esi+0x16A8]
	push eax
	push 8
	push 1
	push 0x3F2
	push esi
	call edx
	mov ecx,dword ptr [esi+0x156C]
	mov eax,0x241
	sub eax,dword ptr [esi+0x16A8]
	mov dword ptr [ecx+0x34],eax
	cmp dword ptr [esi+0x1800],0x34
	jge Block29

 Block28:
	mov edx,dword ptr [esi+0x156C]
	mov dword ptr [edx+0x68],1

 Block29:
	mov eax,dword ptr [CUIStatusBar::m_aChatLog]
	test eax,eax
	je Block31

 Block30:
	mov eax,dword ptr [eax-4]

 Block31:
	sub eax,dword ptr [esi+0x1808]
	mov ecx,dword ptr [esi+0x156C]
	inc eax
	mov edi,eax
	push edi
	call CCtrlScrollBar::SetScrollRange
	mov ecx,dword ptr [esi+0x156C]
	dec edi
	push edi
	call CCtrlScrollBar::SetCurPos
	mov ecx,esi
	call CUIStatusBar::ChatLogDraw
	mov eax,dword ptr [esi+0x1800]
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	mov dword ptr [ecx+0x60],eax

 Block32:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0xC
}
}
// CBitmapStrNumber::~CBitmapStrNumber
_SUB_EXCEPTION_HANDLER(4717B0)
__SUB_CLASS_THIS0(004717B0, __thiscall, 37796,  CBitmapStrNumber, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4717B0
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
	mov eax,dword ptr [esi+0x38]
	mov dword ptr [esp+0x14],2
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea ecx,[esi+0x34]
	mov byte ptr [esp+0x14],1
	call ZArray<_x_com_ptr<IWzCanvas>>::RemoveAll
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 0xA
	push 4
	lea eax,[esi+0xC]
	push eax
	mov byte ptr [esp+0x24],0
	call __eh_vector_dtor_iterator
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIStatusBar::OnButtonClicked
__SUB_CLASS_THIS(00480540, __thiscall, 37824,  IUIMsgHandler, void, uint32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test ecx,ecx
	je Block3

 Block1:
	cmp dword ptr [ecx+0x4690],0
	je Block3

 Block2:
	call CUserLocal::OnKeyDownSkillEnd

 Block3:
	mov eax,dword ptr [esp+8]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp eax,0x7D0
	ja Block25

 Block4:
	je Block24

 Block5:
	add eax,0xFFFFFC18
	cmp eax,0x13
	ja Block34

 Block6:
	cmp EAX, 0
je Block7
cmp EAX, 1
je Block8
cmp EAX, 2
je Block11
cmp EAX, 3
je Block13
cmp EAX, 4
je Block14
cmp EAX, 5
je Block9
cmp EAX, 6
je Block12
cmp EAX, 7
je Block10
cmp EAX, 8
je Block15
cmp EAX, 9
je Block16
cmp EAX, 10
je Block34
cmp EAX, 11
je Block34
cmp EAX, 12
je Block34
cmp EAX, 13
je Block17
cmp EAX, 14
je Block18
cmp EAX, 15
je Block19
cmp EAX, 16
je Block20
cmp EAX, 17
je Block21
cmp EAX, 18
je Block22
cmp EAX, 19
je Block23


 Block7:
	pop esi
	mov dword ptr [esp+4],0
	jmp  CWvsContext::SendMigrateToShopRequest

 Block8:
	call CWvsContext::SendMigrateToITCRequest
	pop esi
	ret 4

 Block9:
	push 0xFFFFFFFF
	push 5
	call CWvsContext::UI_Toggle
	pop esi
	ret 4

 Block10:
	call CWvsContext::UI_Menu
	pop esi
	ret 4

 Block11:
	call CWvsContext::UI_ShortCut
	pop esi
	ret 4

 Block12:
	mov ecx,esi
	call CUIStatusBar::ToggleQuickSlot
	pop esi
	ret 4

 Block13:
	push 1
	mov ecx,esi
	call CUIStatusBar::SetChatType
	pop esi
	ret 4

 Block14:
	push 3
	mov ecx,esi
	call CUIStatusBar::SetChatType
	pop esi
	ret 4

 Block15:
	push 7
	mov ecx,esi
	call CUIStatusBar::SetChatTarget
	pop esi
	ret 4

 Block16:
	mov ecx,esi
	call CUIStatusBar::SendClaim
	pop esi
	ret 4

 Block17:
	call CWvsContext::ChannelShift
	pop esi
	ret 4

 Block18:
	mov ecx,esi
	mov dword ptr [esi+0x195C],0
	call CUIStatusBar::_RefreshChatLog
	mov ecx,esi
	call CUIStatusBar::_SetFilterButton
	pop esi
	ret 4

 Block19:
	xor dword ptr [esi+0x195C],8
	mov ecx,esi
	call CUIStatusBar::_RefreshChatLog
	mov ecx,esi
	call CUIStatusBar::_SetFilterButton
	pop esi
	ret 4

 Block20:
	xor dword ptr [esi+0x195C],4
	mov ecx,esi
	call CUIStatusBar::_RefreshChatLog
	mov ecx,esi
	call CUIStatusBar::_SetFilterButton
	pop esi
	ret 4

 Block21:
	xor dword ptr [esi+0x195C],0x10
	mov ecx,esi
	call CUIStatusBar::_RefreshChatLog
	mov ecx,esi
	call CUIStatusBar::_SetFilterButton
	pop esi
	ret 4

 Block22:
	xor dword ptr [esi+0x195C],0x20
	mov ecx,esi
	call CUIStatusBar::_RefreshChatLog
	mov ecx,esi
	call CUIStatusBar::_SetFilterButton
	pop esi
	ret 4

 Block23:
	xor dword ptr [esi+0x195C],0x4000000
	mov ecx,esi
	call CUIStatusBar::_RefreshChatLog
	mov ecx,esi
	call CUIStatusBar::_SetFilterButton
	pop esi
	ret 4

 Block24:
	push 0xFFFFFFFF
	push 1
	call CWvsContext::UI_Toggle
	push 0
	push 0
	mov ecx,esi
	call CUIStatusBar::SetButtonBlink
	pop esi
	ret 4

 Block25:
	add eax,0xFFFFF82F
	cmp eax,4
	ja Block34

 Block26:
	cmp EAX, 0
je Block27
cmp EAX, 1
je Block28
cmp EAX, 2
je Block29
cmp EAX, 3
je Block30
cmp EAX, 4
je Block33


 Block27:
	push 0xFFFFFFFF
	push 0
	call CWvsContext::UI_Toggle
	push 0
	push 1
	mov ecx,esi
	call CUIStatusBar::SetButtonBlink
	pop esi
	ret 4

 Block28:
	push 0xFFFFFFFF
	push 2
	call CWvsContext::UI_Toggle
	push 0
	push 2
	mov ecx,esi
	call CUIStatusBar::SetButtonBlink
	pop esi
	ret 4

 Block29:
	push 0xFFFFFFFF
	push 3
	call CWvsContext::UI_Toggle
	push 0
	push 3
	mov ecx,esi
	call CUIStatusBar::SetButtonBlink
	pop esi
	ret 4

 Block30:
	cmp dword ptr [TSingleton<CUIUserInfo>::ms_pInstance],0
	jne Block32

 Block31:
	mov eax,dword ptr [ecx+0x20B4]
	push 0
	push 1
	push eax
	call CWvsContext::SendCharacterInfoRequest
	pop esi
	ret 4

 Block32:
	pop esi
	mov dword ptr [esp+4],0xA
	jmp  CWvsContext::UI_Close

 Block33:
	push 0xFFFFFFFF
	push 6
	call CWvsContext::UI_Toggle

 Block34:
	pop esi
	ret 4
}
}
// CUIStatusBar::CGauge::SetVal
_SUB_EXCEPTION_HANDLER(46DEA0)
__SUB_CLASS_THIS(0046DEA0, __thiscall, 37916,  CUIStatusBar::CGauge, void, double) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_46DEA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x64
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x78]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x14],edi
	fild dword ptr [edi+0x14]
	fmul qword ptr [esp+0x88]
	fdiv qword ptr [__real_4059000000000000]
	call __ftol2_sse
	xor ebp,ebp
	cmp eax,ebp
	mov dword ptr [esp+0x88],eax
	mov ebx,1
	jg Block2

 Block1:
	mov dword ptr [esp+0x88],ebx

 Block2:
	mov esi,dword ptr [edi+4]
	cmp esi,ebp
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x11C]
	push ebx
	push esi
	call ecx
	cmp eax,ebp
	jge Block6

 Block5:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov ecx,dword ptr [edi+4]
	cmp ecx,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x80],ebp
	cmp esi,ebp
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x68]
	lea ecx,[esp+0x1C]
	push ecx
	push esi
	mov dword ptr [esp+0x24],ebp
	call edx
	cmp eax,ebp
	jge Block12

 Block11:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block12:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp eax,ebp
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov ecx,dword ptr [edi+4]
	cmp ecx,ebp
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x80],ebx
	cmp esi,ebp
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],ebp
	call eax
	cmp eax,ebp
	jge Block20

 Block19:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp eax,ebp
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block22:
	mov ecx,dword ptr [edi+4]
	cmp ecx,ebp
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x80],2
	cmp ecx,ebp
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[esp+0x28]
	push edx
	call IWzVector2D::Getorigin
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x80],4
	cmp eax,ebp
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block28:
	mov ecx,dword ptr [edi+4]
	cmp ecx,ebp
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x80],5
	cmp esi,ebp
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	mov edx,dword ptr [_D_VTEMPTY]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [_D_VTEMPTY+4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [_D_VTEMPTY+8]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [_D_VTEMPTY+12]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebp
	jge Block34

 Block33:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block34:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],4
	cmp eax,ebp
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	mov ecx,dword ptr [edi+4]
	cmp ecx,ebp
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x80],6
	cmp esi,ebp
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
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
	cmp eax,ebp
	jge Block42

 Block41:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block42:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],4
	cmp eax,ebp
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x48]
	push eax
	call edi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	lea edx,[esp+0x38]
	mov bl,7
	push edx
	mov byte ptr [esp+0x84],bl
	call edi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	mov esi,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+4]
	mov byte ptr [esp+0x80],8
	cmp ecx,ebp
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea edx,[esp+0x24]
	push edx
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x80],9
	cmp ecx,ebp
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	lea eax,[esp+0x48]
	push eax
	mov eax,dword ptr [esp+0x1C]
	lea edx,[esp+0x3C]
	push edx
	mov edx,dword ptr [esp+0x24]
	push eax
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],8
	cmp eax,ebp
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x80],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[esp+0x38]
	push ecx
	call ebx

 Block58:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x80],4
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,ebp
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea eax,[esp+0x48]
	push eax
	call ebx

 Block62:
	mov ecx,dword ptr [esi+4]
	cmp ecx,ebp
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	lea edx,[esp+0x24]
	push edx
	call IWzGr2DLayer::Getrb
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x80],0xA
	cmp esi,ebp
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x68]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],ebp
	call edx
	cmp eax,ebp
	jge Block68

 Block67:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block68:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],4
	cmp eax,ebp
	je Block70

 Block69:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block70:
	mov ebx,dword ptr [esp+0x14]
	mov ecx,dword ptr [ebx+4]
	cmp ecx,ebp
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::Getrb
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x80],0xB
	cmp esi,ebp
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x24],ebp
	call eax
	cmp eax,ebp
	jge Block76

 Block75:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block76:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],4
	cmp eax,ebp
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block78:
	mov ecx,dword ptr [ebx+4]
	cmp ecx,ebp
	jne Block80

 Block79:
	push 0x80004003
	call _com_issue_error

 Block80:
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::Getrb
	mov ecx,dword ptr [eax]
	mov bl,0xC
	mov byte ptr [esp+0x80],bl
	cmp ecx,ebp
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	lea edx,[esp+0x68]
	push edx
	call IWzVector2D::Getorigin
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x88],0xD
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0x80],bl
	jne Block87

 Block85:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	cmp eax,ebp
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea edx,[esp+0x68]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],4
	cmp eax,ebp
	je Block90

 Block89:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block90:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+4]
	cmp ecx,ebp
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	lea edx,[esp+0x24]
	push edx
	call IWzGr2DLayer::Getrb
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x80],0xE
	cmp esi,ebp
	jne Block94

 Block93:
	push 0x80004003
	call _com_issue_error

 Block94:
	mov edx,dword ptr [_D_VTEMPTY]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [_D_VTEMPTY+4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [_D_VTEMPTY+8]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [_D_VTEMPTY+12]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebp
	jge Block96

 Block95:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block96:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],4
	cmp eax,ebp
	je Block98

 Block97:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block98:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+4]
	cmp ecx,ebp
	jne Block100

 Block99:
	push 0x80004003
	call _com_issue_error

 Block100:
	lea edx,[esp+0x24]
	push edx
	call IWzGr2DLayer::Getrb
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x80],0xF
	cmp esi,ebp
	jne Block102

 Block101:
	push 0x80004003
	call _com_issue_error

 Block102:
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
	cmp eax,ebp
	jge Block104

 Block103:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block104:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],4
	cmp eax,ebp
	je Block106

 Block105:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block106:
	lea eax,[esp+0x38]
	push eax
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block108

 Block107:
	push eax
	call _com_issue_error

 Block108:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x84],0x10
	call edi
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block110

 Block109:
	push eax
	call _com_issue_error

 Block110:
	mov ecx,dword ptr [esp+0x14]
	mov ecx,dword ptr [ecx+4]
	mov bl,0x11
	mov byte ptr [esp+0x80],bl
	cmp ecx,ebp
	jne Block112

 Block111:
	push 0x80004003
	call _com_issue_error

 Block112:
	lea edx,[esp+0x24]
	push edx
	call IWzGr2DLayer::Getrb
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x80],0x12
	cmp ecx,ebp
	jne Block114

 Block113:
	push 0x80004003
	call _com_issue_error

 Block114:
	lea eax,[esp+0x38]
	push eax
	mov eax,dword ptr [esp+0x20]
	lea edx,[esp+0x4C]
	push edx
	mov edx,dword ptr [esp+0x20]
	push eax
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],bl
	cmp eax,ebp
	je Block116

 Block115:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block116:
	mov esi,8
	mov byte ptr [esp+0x80],0x10
	cmp word ptr [esp+0x48],si
	jne Block119

 Block117:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebp
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block120:
	mov byte ptr [esp+0x80],4
	cmp word ptr [esp+0x38],si
	jne Block123

 Block121:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebp
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block124:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x28],si
	jne Block127

 Block125:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block128:
	lea eax,[esp+0x38]
	push eax
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block130

 Block129:
	push eax
	call _com_issue_error

 Block130:
	mov edi,dword ptr [esp+0x14]
	mov esi,dword ptr [edi+4]
	mov dword ptr [esp+0x80],0x13
	cmp esi,ebp
	jne Block132

 Block131:
	push 0x80004003
	call _com_issue_error

 Block132:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x58]
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov dword ptr [esp+0x24],ebp
	call ecx
	cmp eax,ebp
	jge Block134

 Block133:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block134:
	mov eax,dword ptr [esp+0x1C]
	add eax,0x2BC
	mov edx,3
	mov word ptr [esp+0x48],dx
	mov dword ptr [esp+0x50],eax
	mov ecx,dword ptr [edi+4]
	mov bl,0x14
	mov byte ptr [esp+0x80],bl
	cmp ecx,ebp
	jne Block136

 Block135:
	push 0x80004003
	call _com_issue_error

 Block136:
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::Getrb
	mov edi,eax
	mov ecx,dword ptr [esp+0x14]
	mov esi,dword ptr [ecx+4]
	mov byte ptr [esp+0x80],0x15
	cmp esi,ebp
	jne Block138

 Block137:
	push 0x80004003
	call _com_issue_error

 Block138:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xC0]
	lea eax,[esp+0x18]
	push eax
	push esi
	mov dword ptr [esp+0x20],ebp
	call ecx
	cmp eax,ebp
	jge Block140

 Block139:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block140:
	mov ecx,dword ptr [edi]
	cmp ecx,ebp
	jne Block142

 Block141:
	push 0x80004003
	call _com_issue_error

 Block142:
	lea edx,[esp+0x38]
	push edx
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x4C]
	push eax
	mov eax,dword ptr [esp+0x90]
	push edx
	dec eax
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],bl
	cmp eax,ebp
	je Block144

 Block143:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block144:
	mov esi,8
	mov byte ptr [esp+0x80],0x13
	cmp word ptr [esp+0x48],si
	jne Block147

 Block145:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebp
	je Block148

 Block146:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block148

 Block147:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block148:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x38],si
	jne Block151

 Block149:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebp
	je Block152

 Block150:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block152

 Block151:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block152:
	mov edi,dword ptr [esp+0x14]
	mov esi,dword ptr [edi+8]
	cmp esi,ebp
	jne Block154

 Block153:
	push 0x80004003
	call _com_issue_error

 Block154:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x11C]
	push 1
	push esi
	call edx
	cmp eax,ebp
	jge Block156

 Block155:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block156:
	mov ecx,dword ptr [edi+8]
	cmp ecx,ebp
	jne Block158

 Block157:
	push 0x80004003
	call _com_issue_error

 Block158:
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x80],0x16
	cmp esi,ebp
	jne Block160

 Block159:
	push 0x80004003
	call _com_issue_error

 Block160:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x68]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],ebp
	call eax
	cmp eax,ebp
	jge Block162

 Block161:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block162:
	mov eax,dword ptr [esp+0x24]
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x80],ebx
	cmp eax,ebp
	je Block164

 Block163:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block164:
	mov ecx,dword ptr [edi+8]
	cmp ecx,ebp
	jne Block166

 Block165:
	push 0x80004003
	call _com_issue_error

 Block166:
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x80],0x17
	cmp esi,ebp
	jne Block168

 Block167:
	push 0x80004003
	call _com_issue_error

 Block168:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x24],ebp
	call eax
	cmp eax,ebp
	jge Block170

 Block169:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block170:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x80],ebx
	cmp eax,ebp
	je Block172

 Block171:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block172:
	mov ecx,dword ptr [edi+8]
	cmp ecx,ebp
	jne Block174

 Block173:
	push 0x80004003
	call _com_issue_error

 Block174:
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x80],0x18
	cmp ecx,ebp
	jne Block176

 Block175:
	push 0x80004003
	call _com_issue_error

 Block176:
	lea edx,[esp+0x28]
	push edx
	call IWzVector2D::Getorigin
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],0x1A
	cmp eax,ebp
	je Block178

 Block177:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block178:
	mov ecx,dword ptr [edi+8]
	cmp ecx,ebp
	jne Block180

 Block179:
	push 0x80004003
	call _com_issue_error

 Block180:
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x80],0x1B
	cmp esi,ebp
	jne Block182

 Block181:
	push 0x80004003
	call _com_issue_error

 Block182:
	mov edx,dword ptr [_D_VTEMPTY]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [_D_VTEMPTY+4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [_D_VTEMPTY+8]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [_D_VTEMPTY+12]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebp
	jge Block184

 Block183:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block184:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x80],0x1A
	cmp eax,ebp
	je Block186

 Block185:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block186:
	mov ecx,dword ptr [edi+8]
	cmp ecx,ebp
	jne Block188

 Block187:
	push 0x80004003
	call _com_issue_error

 Block188:
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x80],0x1C
	cmp esi,ebp
	jne Block190

 Block189:
	push 0x80004003
	call _com_issue_error

 Block190:
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
	cmp eax,ebp
	jge Block192

 Block191:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block192:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x80],0x1A
	cmp eax,ebp
	je Block194

 Block193:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block194:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push eax
	call esi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block196

 Block195:
	push eax
	call _com_issue_error

 Block196:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x84],0x1D
	call esi
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block198

 Block197:
	push eax
	call _com_issue_error

 Block198:
	mov ecx,dword ptr [edi+8]
	mov bl,0x1E
	mov byte ptr [esp+0x80],bl
	cmp ecx,ebp
	jne Block200

 Block199:
	push 0x80004003
	call _com_issue_error

 Block200:
	lea edx,[esp+0x20]
	push edx
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x80],0x1F
	cmp ecx,ebp
	jne Block202

 Block201:
	push 0x80004003
	call _com_issue_error

 Block202:
	lea eax,[esp+0x38]
	push eax
	mov eax,dword ptr [esp+0x20]
	lea edx,[esp+0x4C]
	push edx
	mov edx,dword ptr [esp+0x20]
	push eax
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x80],bl
	cmp eax,ebp
	je Block204

 Block203:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block204:
	mov esi,8
	mov byte ptr [esp+0x80],0x1D
	cmp word ptr [esp+0x48],si
	jne Block207

 Block205:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebp
	je Block208

 Block206:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block208

 Block207:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block208:
	mov byte ptr [esp+0x80],0x1A
	cmp word ptr [esp+0x38],si
	jne Block211

 Block209:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebp
	je Block212

 Block210:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block212

 Block211:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block212:
	mov ecx,dword ptr [edi+8]
	cmp ecx,ebp
	jne Block214

 Block213:
	push 0x80004003
	call _com_issue_error

 Block214:
	lea edx,[esp+0x20]
	push edx
	call IWzGr2DLayer::Getrb
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x80],0x20
	cmp esi,ebp
	jne Block216

 Block215:
	push 0x80004003
	call _com_issue_error

 Block216:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x68]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],ebp
	call edx
	cmp eax,ebp
	jge Block218

 Block217:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block218:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x80],0x1A
	cmp eax,ebp
	je Block220

 Block219:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block220:
	mov ecx,dword ptr [edi+8]
	cmp ecx,ebp
	jne Block222

 Block221:
	push 0x80004003
	call _com_issue_error

 Block222:
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getrb
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x80],0x21
	cmp esi,ebp
	jne Block224

 Block223:
	push 0x80004003
	call _com_issue_error

 Block224:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x24],ebp
	call eax
	cmp eax,ebp
	jge Block226

 Block225:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block226:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x80],0x1A
	cmp eax,ebp
	je Block228

 Block227:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block228:
	mov ecx,dword ptr [edi+8]
	cmp ecx,ebp
	jne Block230

 Block229:
	push 0x80004003
	call _com_issue_error

 Block230:
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getrb
	mov ecx,dword ptr [eax]
	mov bl,0x22
	mov byte ptr [esp+0x80],bl
	cmp ecx,ebp
	jne Block232

 Block231:
	push 0x80004003
	call _com_issue_error

 Block232:
	lea edx,[esp+0x68]
	push edx
	call IWzVector2D::Getorigin
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x88],0x23
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block234

 Block233:
	push eax
	call _com_issue_error

 Block234:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0x80],bl
	jne Block237

 Block235:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	cmp eax,ebp
	je Block238

 Block236:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block238

 Block237:
	lea edx,[esp+0x68]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block238:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x80],0x1A
	cmp eax,ebp
	je Block240

 Block239:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block240:
	mov ecx,dword ptr [edi+8]
	cmp ecx,ebp
	jne Block242

 Block241:
	push 0x80004003
	call _com_issue_error

 Block242:
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getrb
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x80],0x24
	cmp esi,ebp
	jne Block244

 Block243:
	push 0x80004003
	call _com_issue_error

 Block244:
	mov edx,dword ptr [_D_VTEMPTY]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [_D_VTEMPTY+4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [_D_VTEMPTY+8]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [_D_VTEMPTY+12]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebp
	jge Block246

 Block245:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block246:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x80],0x1A
	cmp eax,ebp
	je Block248

 Block247:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block248:
	mov ecx,dword ptr [edi+8]
	cmp ecx,ebp
	jne Block250

 Block249:
	push 0x80004003
	call _com_issue_error

 Block250:
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getrb
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x80],0x25
	cmp esi,ebp
	jne Block252

 Block251:
	push 0x80004003
	call _com_issue_error

 Block252:
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
	cmp eax,ebp
	jge Block254

 Block253:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block254:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x80],0x1A
	cmp eax,ebp
	je Block256

 Block255:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block256:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push eax
	call esi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block258

 Block257:
	push eax
	call _com_issue_error

 Block258:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x84],0x26
	call esi
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block260

 Block259:
	push eax
	call _com_issue_error

 Block260:
	mov ecx,dword ptr [edi+8]
	mov bl,0x27
	mov byte ptr [esp+0x80],bl
	cmp ecx,ebp
	jne Block262

 Block261:
	push 0x80004003
	call _com_issue_error

 Block262:
	lea edx,[esp+0x20]
	push edx
	call IWzGr2DLayer::Getrb
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x80],0x28
	cmp ecx,ebp
	jne Block264

 Block263:
	push 0x80004003
	call _com_issue_error

 Block264:
	lea eax,[esp+0x38]
	push eax
	mov eax,dword ptr [esp+0x20]
	lea edx,[esp+0x4C]
	push edx
	mov edx,dword ptr [esp+0x20]
	push eax
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x80],bl
	cmp eax,ebp
	je Block266

 Block265:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block266:
	mov esi,8
	mov byte ptr [esp+0x80],0x26
	cmp word ptr [esp+0x48],si
	jne Block269

 Block267:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebp
	je Block270

 Block268:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block270

 Block269:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block270:
	mov byte ptr [esp+0x80],0x1A
	cmp word ptr [esp+0x38],si
	jne Block273

 Block271:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebp
	je Block274

 Block272:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block274

 Block273:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block274:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x28],si
	jne Block277

 Block275:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block278

 Block276:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block278

 Block277:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block278:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x68]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block280

 Block279:
	push eax
	call _com_issue_error

 Block280:
	mov esi,dword ptr [edi+8]
	mov ebx,0x29
	mov dword ptr [esp+0x80],ebx
	cmp esi,ebp
	jne Block282

 Block281:
	push 0x80004003
	call _com_issue_error

 Block282:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x58]
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov dword ptr [esp+0x24],ebp
	call ecx
	cmp eax,ebp
	jge Block284

 Block283:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block284:
	mov eax,dword ptr [esp+0x1C]
	add eax,0x2BC
	mov edx,3
	mov word ptr [esp+0x58],dx
	mov dword ptr [esp+0x60],eax
	mov ecx,dword ptr [edi+8]
	mov byte ptr [esp+0x80],0x2A
	cmp ecx,ebp
	jne Block286

 Block285:
	push 0x80004003
	call _com_issue_error

 Block286:
	lea eax,[esp+0x68]
	push eax
	mov eax,dword ptr [edi+0x10]
	lea edx,[esp+0x5C]
	push edx
	mov edx,dword ptr [edi+0xC]
	push eax
	mov eax,dword ptr [esp+0x94]
	lea edx,[edx+eax-1]
	push edx
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],si
	jne Block289

 Block287:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	cmp eax,ebp
	je Block290

 Block288:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block290

 Block289:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block290:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x68],si
	jne Block293

 Block291:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	cmp eax,ebp
	je Block294

 Block292:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block294

 Block293:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block294:
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret 8
}
}
// CUIStatusBar::TryBeginChangeChatWnd
__SUB_CLASS_THIS(0046CE70, __thiscall, 37855,  CUIStatusBar, void, long, long) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x1804],3
	jne Block5

 Block1:
	mov eax,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	cmp dword ptr [eax+0x9C4],9
	jne Block5

 Block2:
	cmp dword ptr [ecx+0x1614],0xFFFFFFFF
	jne Block4

 Block3:
	mov edx,dword ptr [esp+8]
	mov dword ptr [ecx+0x1614],edx

 Block4:
	lea eax,[ecx+4]
	mov dword ptr [ecx+0x1618],1
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetCaptureWnd

 Block5:
	ret 8
}
}
// CUIStatusBar::TryUseTempExp
__SUB_CLASS_THIS(00470AA0, __thiscall, 37855,  CUIStatusBar, void, long, long) {
__asm {

 Block0:
	sub esp,0x18
	mov ecx,dword ptr [esp+0x20]
	mov eax,dword ptr [esp+0x1C]
	push ebx
	push esi
	push edi
	push ecx
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov dword ptr [esp+0x20],0x1C
	mov dword ptr [esp+0x24],0x12
	mov dword ptr [esp+0x28],0x150
	mov dword ptr [esp+0x2C],0x1F
	call PtInRect
	test eax,eax
	je Block10

 Block1:
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block6

 Block2:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block5

 Block4:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block5:
	mov dword ptr [esp+0x10],0

 Block6:
	mov ecx,dword ptr [ebx+0x35]
	push ecx
	lea edx,[ebx+0x33]
	push edx
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	cmp al,0x32
	ja Block10

 Block7:
	mov eax,dword ptr [ebx+0xC9]
	push eax
	add ebx,0xC1
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block10

 Block8:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x130F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block10

 Block9:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::SendTempExpUseRequest

 Block10:
	pop edi
	pop esi
	pop ebx
	add esp,0x18
	ret 8
}
}
// CUIStatusBar::CQuickSlot::ChangeScreenResolution
_SUB_EXCEPTION_HANDLER(46F110)
__SUB_CLASS_THIS(0046F110, __thiscall, 37953,  CUIStatusBar::CQuickSlot, void, int32_t, NakedParam<_x_com_ptr<IWzGr2DLayer>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_46F110
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0x10],0
	mov dword ptr [esp+0x38],0
	sete al
	test al,al
	jne Block70

 Block1:
	cmp dword ptr [esi+0x14],0
	sete al
	test al,al
	jne Block70

 Block2:
	mov edi,dword ptr [esi+0x10]
	test edi,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov ebp,dword ptr [esp+0x40]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x11C]
	xor ecx,ecx
	test ebp,ebp
	sete cl
	push ecx
	push edi
	call edx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block6:
	test ebp,ebp
	je Block38

 Block7:
	mov eax,0xD
	mov word ptr [esp+0x10],ax
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block9:
	mov ecx,dword ptr [esi+0x14]
	mov byte ptr [esp+0x38],1
	test ecx,ecx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[esp+0x10]
	push eax
	call IWzVector2D::Putorigin
	mov ebp,8
	mov byte ptr [esp+0x38],0
	cmp word ptr [esp+0x10],bp
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x18]
	xor ecx,ecx
	mov word ptr [esp+0x10],cx
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov eax,0xD
	mov word ptr [esp+0x10],ax
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block17:
	mov ecx,dword ptr [esi+0x14]
	mov byte ptr [esp+0x38],2
	test ecx,ecx
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea eax,[esp+0x10]
	push eax
	call IWzGr2DLayer::Putoverlay
	mov byte ptr [esp+0x38],0
	cmp word ptr [esp+0x10],bp
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x18]
	xor ecx,ecx
	mov word ptr [esp+0x10],cx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[esp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x20]
	push eax
	call edi
	lea ecx,[esp+0x20]
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
	lea edx,[esp+0x10]
	push edx
	mov byte ptr [esp+0x3C],3
	call edi
	lea eax,[esp+0x10]
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
	mov ecx,dword ptr [esi+0x14]
	mov byte ptr [esp+0x38],4
	test ecx,ecx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x14]
	push eax
	push 2
	push 0x371
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x38],3
	cmp word ptr [esp+0x10],bp
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x18]
	xor ecx,ecx
	mov word ptr [esp+0x10],cx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea edx,[esp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov byte ptr [esp+0x38],0
	cmp word ptr [esp+0x20],bp
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov eax,dword ptr [esi+0x1C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	mov esi,dword ptr [esi+0x24]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x24]
	lea ecx,[esi+4]
	push 0
	jmp Block69

 Block38:
	mov eax,dword ptr [esi+0x10]
	mov ecx,0xD
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block40:
	mov ecx,dword ptr [esi+0x14]
	mov byte ptr [esp+0x38],5
	test ecx,ecx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea edx,[esp+0x20]
	push edx
	call IWzVector2D::Putorigin
	mov ebp,8
	mov byte ptr [esp+0x38],0
	cmp word ptr [esp+0x20],bp
	jne Block45

 Block43:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov eax,dword ptr [esi+0x10]
	mov edx,0xD
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block48

 Block47:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block48:
	mov ecx,dword ptr [esi+0x14]
	mov byte ptr [esp+0x38],6
	test ecx,ecx
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Putoverlay
	mov byte ptr [esp+0x38],0
	cmp word ptr [esp+0x20],bp
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x10]
	push eax
	call edi
	lea ecx,[esp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x3C],7
	call edi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	mov ecx,dword ptr [esi+0x14]
	mov byte ptr [esp+0x38],8
	test ecx,ecx
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x38],7
	cmp word ptr [esp+0x20],bp
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov byte ptr [esp+0x38],0
	cmp word ptr [esp+0x10],bp
	jne Block67

 Block65:
	xor eax,eax
	mov word ptr [esp+0x10],ax
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea ecx,[esp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov eax,dword ptr [esi+0x1C]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x24]
	lea ecx,[eax+4]
	xor eax,eax
	cmp dword ptr [esi+4],eax
	sete al
	push eax
	call edx
	mov eax,dword ptr [esi+0x24]
	mov edx,dword ptr [esi+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x24]
	push edx

 Block69:
	call eax

 Block70:
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block72:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x2C
	ret 8
}
}
// CUIStatusBar::GetRTTI
__SUB_CLASS_THIS0(00472000, __thiscall, 37869,  CUIStatusBar, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIStatusBar::ms_RTTI_CUIStatusBar
	ret
}
}
// CUIStatusBar::CQuickSlot::Toggle
_SUB_EXCEPTION_HANDLER(46D180)
__SUB_CLASS_THIS0(0046D180, __thiscall, 37954,  CUIStatusBar::CQuickSlot, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_46D180
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebp,dword ptr [ZImports::_VariantInit]
	xor eax,eax
	cmp dword ptr [esi+4],eax
	lea edx,[esp+0x20]
	sete al
	push edx
	mov dword ptr [esi+4],eax
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	mov dword ptr [ecx+0x5C],eax
	mov edi,dword ptr [esi+4]
	neg edi
	sbb edi,edi
	and edi,0xFFFFFFBD
	add edi,0x43
	add edi,dword ptr [esi+0xC]
	call ebp
	lea eax,[esp+0x20]
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
	lea ecx,[esp+0x10]
	push ecx
	mov dword ptr [esp+0x3C],0
	call ebp
	lea edx,[esp+0x10]
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
	mov ecx,dword ptr [esi+0x10]
	mov byte ptr [esp+0x38],1
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [esi+8]
	lea edx,[esp+0x14]
	push edx
	push edi
	push eax
	call IWzVector2D::RelMove
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0x38],0
	cmp word ptr [esp+0x10],di
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x18]
	xor ecx,ecx
	mov word ptr [esp+0x10],cx
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x10]
	push edx
	call ebp

 Block10:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp word ptr [esp+0x20],di
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x20]
	push ecx
	call ebp

 Block14:
	mov eax,dword ptr [esi+0x1C]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x24]
	lea ecx,[eax+4]
	xor eax,eax
	cmp dword ptr [esi+4],eax
	sete al
	push eax
	call edx
	mov eax,dword ptr [esi+0x24]
	mov edx,dword ptr [esi+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x24]
	push edx
	call eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x2C
	ret
}
}
// CUIStatusBar::SetChatTarget
// 87FDD0
static uint8_t _SUB_47FD30_LOOKUP_TABLE_0[9] = {
0, 1, 0, 0, 0, 0, 0, 2, 0, 
};
__SUB_CLASS_THIS(0047FD30, __thiscall, 37839,  CUIStatusBar, void, long) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x1814],0
	push edi
	jne Block8

 Block1:
	cmp ebx,8
	ja Block8

 Block2:
	movzx eax,byte ptr [ebx+_SUB_47FD30_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block7
cmp EAX, 1
je Block5
cmp EAX, 2
je Block3


 Block3:
	call CUIStatusBar::ChangeWhisperTarget
	test eax,eax
	je Block9

 Block4:
	jmp Block8

 Block5:
	call CUIStatusBar::ChangeGroupWhisperTarget
	test eax,eax
	je Block9

 Block6:
	jmp Block8

 Block7:
	push 0
	call CUIStatusBar::StartChat
	push 0
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x18],esp
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	mov ecx,esi
	call CUIStatusBar::SetWhisperTarget

 Block8:
	mov dword ptr [esi+0x1610],ebx
	mov dword ptr [esi+0x1814],0

 Block9:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CUIStatusBar::TryShowMemoListDlg
_SUB_EXCEPTION_HANDLER(4779F0)
__SUB_CLASS_THIS(004779F0, __thiscall, 37855,  CUIStatusBar, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4779F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ecx,dword ptr [esp+0x50]
	mov eax,dword ptr [esp+0x4C]
	push ecx
	push eax
	lea eax,[esp+0x20]
	push eax
	mov dword ptr [esp+0x24],0x262
	mov dword ptr [esp+0x28],0x204
	mov dword ptr [esp+0x2C],0x282
	mov dword ptr [esp+0x30],0x212
	call PtInRect
	test eax,eax
	je Block10

 Block1:
	xor ebx,ebx
	int 3// TODO: 	mov dword ptr [esp+0x28],offset ZList<GW_Memo>::`vftable'
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x38],ebx
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x44],ebx
	call ZList<GW_Memo>::RemoveAll
	add esi,0x3F2C
	push esi
	lea ecx,[esp+0x2C]
	call ZList<GW_Memo>::AddTail_List
	mov ecx,esi
	call ZList<GW_Memo>::RemoveAll
	cmp dword ptr [esp+0x30],ebx
	je Block9

 Block2:
	push ebx
	mov ecx,edi
	call CWnd::InvalidateRect
	push 0xD8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x4C],eax
	mov byte ptr [esp+0x44],1
	cmp eax,ebx
	je Block11

 Block3:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,eax
	call CMemoListDlg::_ctor_0
	cmp eax,ebx
	je Block11

 Block4:
	add eax,8
	cmp eax,ebx
	je Block11

 Block5:
	lea esi,[eax-8]
	mov dword ptr [esp+0x14],esi
	cmp esi,ebx
	je Block7

 Block6:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov ecx,esi
	mov byte ptr [esp+0x44],2
	call CDialog::DoModal
	mov byte ptr [esp+0x44],bl
	cmp esi,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CMemoListDlg>::_ReleaseRaw

 Block9:
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x28],offset ZList<GW_Memo>::`vftable'
	call ZList<GW_Memo>::RemoveAll

 Block10:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x38
	ret 8

 Block11:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	jmp Block7
}
}
// CUIStatusBar::EnableButtons
__SUB_CLASS_THIS(0046CF10, __thiscall, 37851,  CUIStatusBar, void, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x1524]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push edi
	mov edi,dword ptr [esp+0xC]
	push edi
	call edx
	mov eax,dword ptr [esi+0x1544]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push edi
	call edx
	mov eax,dword ptr [esi+0x154C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push edi
	call edx
	mov eax,dword ptr [esi+0x1554]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push edi
	call edx
	mov esi,dword ptr [esi+0x155C]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x1C]
	lea ecx,[esi+4]
	push edi
	call edx
	pop edi
	pop esi
	ret 4
}
}
// CUIStatusBar::OnKey
_SUB_EXCEPTION_HANDLER(47FDE0)
// 8803D8
static uint8_t _SUB_47FDE0_LOOKUP_TABLE_0[9] = {
0, 0, 0, 0, 0, 0, 1, 3, 2, 
};
__SUB_CLASS_THIS(0047FDE0, __thiscall, 37821,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_47FDE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov ecx,dword ptr [ebp+0x1570]
	test ecx,ecx
	je Block2

 Block1:
	lea eax,[ecx+4]
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov edx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	cmp dword ptr [edx+0xA0],eax
	jne Block87

 Block4:
	test dword ptr [esp+0x30],0x80000000
	jne Block87

 Block5:
	mov edi,dword ptr [esp+0x2C]
	cmp edi,9
	jne Block22

 Block6:
	mov eax,dword ptr [ebp+0x160C]
	cmp eax,8
	ja Block21

 Block7:
	cmp EAX, 0
je Block9
cmp EAX, 1
je Block11
cmp EAX, 2
je Block13
cmp EAX, 3
je Block14
cmp EAX, 4
je Block15
cmp EAX, 5
je Block16
cmp EAX, 6
je Block10
cmp EAX, 7
je Block12
cmp EAX, 8
je Block8


 Block8:
	push 0
	lea ecx,[ebp-4]
	call CUIStatusBar::SetChatTarget
	mov ecx,dword ptr [ebp+0x1578]
	call CCtrlWnd::InvalidateRect
	jmp Block87

 Block9:
	push 6
	lea ecx,[ebp-4]
	call CUIStatusBar::SetChatTarget
	mov ecx,dword ptr [ebp+0x1578]
	call CCtrlWnd::InvalidateRect
	jmp Block87

 Block10:
	push 1
	lea ecx,[ebp-4]
	call CUIStatusBar::SetChatTarget
	mov ecx,dword ptr [ebp+0x1578]
	call CCtrlWnd::InvalidateRect
	jmp Block87

 Block11:
	push 2
	lea ecx,[ebp-4]
	call CUIStatusBar::SetChatTarget
	mov ecx,dword ptr [ebp+0x1578]
	call CCtrlWnd::InvalidateRect
	jmp Block87

 Block12:
	push 8
	lea ecx,[ebp-4]
	call CUIStatusBar::SetChatTarget
	mov ecx,dword ptr [ebp+0x1578]
	call CCtrlWnd::InvalidateRect
	jmp Block87

 Block13:
	push 3
	lea ecx,[ebp-4]
	call CUIStatusBar::SetChatTarget
	mov ecx,dword ptr [ebp+0x1578]
	call CCtrlWnd::InvalidateRect
	jmp Block87

 Block14:
	push 4
	lea ecx,[ebp-4]
	call CUIStatusBar::SetChatTarget
	mov ecx,dword ptr [ebp+0x1578]
	call CCtrlWnd::InvalidateRect
	jmp Block87

 Block15:
	push 5
	lea ecx,[ebp-4]
	call CUIStatusBar::SetChatTarget
	mov ecx,dword ptr [ebp+0x1578]
	call CCtrlWnd::InvalidateRect
	jmp Block87

 Block16:
	lea eax,[esp+0x30]
	lea esi,[ebp-4]
	push eax
	mov ecx,esi
	call CUIStatusBar::GetWhisperTarget
	mov ecx,eax
	call ZXString<char>::IsEmpty
	mov edi,eax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	test edi,edi
	je Block20

 Block19:
	push 7
	mov ecx,esi
	mov dword ptr [ebp+0x1810],1
	call CUIStatusBar::SetChatTarget
	mov ecx,dword ptr [ebp+0x1578]
	call CCtrlWnd::InvalidateRect
	jmp Block87

 Block20:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push ecx
	mov ecx,esi
	call CUIStatusBar::GetWhisperTarget
	mov ecx,esi
	call CUIStatusBar::SetWhisperTarget
	push 0
	mov ecx,esi
	call CUIStatusBar::StartChat

 Block21:
	mov ecx,dword ptr [ebp+0x1578]
	call CCtrlWnd::InvalidateRect
	jmp Block87

 Block22:
	cmp edi,0xD
	jne Block65

 Block23:
	lea edx,[esp+0x30]
	push edx
	call CCtrlEdit::GetText
	lea edi,[ebp-4]
	mov ecx,edi
	mov dword ptr [esp+0x24],0
	mov dword ptr [esp+0x2C],edi
	call CUIStatusBar::EndChat
	push 1
	push 0x400
	lea ecx,[esp+0x38]
	call ZXString<char>::GetBuffer
	mov esi,eax
	cmp byte ptr [esi],0
	je Block32

 Block24:
	mov bl,0x20

 Block25:
	movzx eax,byte ptr [esi]
	push eax
	call dword ptr [ZImports::_IsDBCSLeadByte]
	test eax,eax
	je Block27

 Block26:
	mov byte ptr [esi+1],bl
	mov byte ptr [esi],bl
	add esi,2
	jmp Block31

 Block27:
	mov al,byte ptr [esi]
	cmp al,bl
	jl Block29

 Block28:
	cmp al,0x7E
	jle Block30

 Block29:
	mov byte ptr [esi],bl

 Block30:
	inc esi

 Block31:
	cmp byte ptr [esi],0
	jne Block25

 Block32:
	push 0xFFFFFFFF
	lea ecx,[esp+0x34]
	call ZXString<char>::ReleaseBuffer
	push 0
	push 0
	lea ecx,[esp+0x38]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block85

 Block33:
	mov cl,byte ptr [eax]
	test cl,cl
	je Block85

 Block34:
	cmp cl,0x2F
	je Block39

 Block35:
	lea ecx,[ebp+0x16AC]
	call ZXString<char>::IsEmpty
	test eax,eax
	je Block39

 Block36:
	cmp dword ptr [ebp+0x160C],7
	jne Block39

 Block37:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax+4],0
	lea ecx,[esp+0x1C]
	push 0xAFD
	push ecx
	mov byte ptr [esp+0x34],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x2C],2
	push 0
	push 0xFFFFFFFF
	push 0xC
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x3C],3
	call CUIStatusBar::ChatLogAdd
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	mov ecx,dword ptr [esp+0x2C]
	push 0
	call CUIStatusBar::StartChat
	mov ecx,dword ptr [ebp+0x1570]
	push 0
	call CCtrlEdit::SetText
	call get_field
	mov ebx,eax
	test ebx,ebx
	jne Block41

 Block40:
	mov eax,dword ptr [esp+0x30]
	jmp Block85

 Block41:
	mov edx,dword ptr [esp+0x30]
	cmp byte ptr [edx],0x2F
	lea eax,[esp+0x30]
	push eax
	jne Block43

 Block42:
	mov ecx,ebx
	call CField::SendChatMsgSlash
	push ecx
	lea edx,[esp+0x34]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push edx
	call ZXString<char>::_ctor_copy
	lea ecx,[ebp+0x1760]
	call CChatHelper::HistoryAddforCommand
	mov eax,dword ptr [esp+0x30]
	jmp Block85

 Block43:
	lea ecx,[ebp+0x1760]
	call CChatHelper::TryChat
	test eax,eax
	jne Block45

 Block44:
	mov eax,dword ptr [esp+0x30]
	jmp Block85

 Block45:
	lea esi,[ebp+0x16AC]
	mov ecx,esi
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block47

 Block46:
	push esi
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,ebx
	call CField::SendChatMsgWhisper
	mov eax,dword ptr [esp+0x30]
	jmp Block85

 Block47:
	mov edi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test edi,edi
	jne Block49

 Block48:
	mov eax,dword ptr [esp+0x30]
	jmp Block85

 Block49:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [edx+0x3864]
	test eax,eax
	jne Block55

 Block50:
	mov eax,dword ptr [edi+0x640]
	and eax,0xFFFFFFFE
	cmp eax,0x12
	je Block55

 Block51:
	xor esi,esi

 Block52:
	mov eax,dword ptr [edi+0x2E44]
	cmp dword ptr [esi+eax+4],0
	je Block54

 Block53:
	push ecx
	lea edx,[esp+0x34]
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push edx
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [edi+0x2E44]
	mov ecx,dword ptr [esi+eax+4]
	call CPet::ParseCommand

 Block54:
	add esi,8
	cmp esi,0x18
	jl Block52

 Block55:
	mov eax,dword ptr [ebp+0x160C]
	cmp eax,8
	ja Block62

 Block56:
	movzx ecx,byte ptr [eax+_SUB_47FDE0_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block57
cmp ECX, 1
je Block58
cmp ECX, 2
je Block59
cmp ECX, 3
je Block62


 Block57:
	mov ecx,dword ptr [esp+0x2C]
	lea edx,[esp+0x30]
	push edx
	push eax
	call CUIStatusBar::SendGroupMessage
	jmp Block62

 Block58:
	mov ecx,dword ptr [esp+0x2C]
	lea eax,[esp+0x30]
	push eax
	call CUIStatusBar::SendCoupleMessage
	jmp Block62

 Block59:
	push 0
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,ebx
	call CField::SendChatMsg
	cmp dword ptr [ebp+0x1958],0
	je Block62

 Block60:
	lea edx,[esp+0x14]
	push 0x192D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov byte ptr [esp+0x2C],4
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x1C]
	add esp,8
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block62:
	mov ecx,dword ptr [esp+0x2C]
	lea eax,[esp+0x30]
	push eax
	call CUIStatusBar::GetEmotionKey
	test eax,eax
	je Block64

 Block63:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	push 0
	add eax,0xFFFFFF91
	push eax
	call CWvsContext::SendEmotionChange

 Block64:
	mov eax,dword ptr [esp+0x30]
	jmp Block85

 Block65:
	cmp edi,0x1B
	jne Block68

 Block66:
	push 0
	call CCtrlEdit::SetText

 Block67:
	lea ecx,[ebp-4]
	call CUIStatusBar::EndChat
	jmp Block87

 Block68:
	cmp edi,0x25
	je Block70

 Block69:
	cmp edi,0x27
	jne Block77

 Block70:
	lea edx,[esp+0x30]
	push edx
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	test eax,eax
	je Block73

 Block71:
	cmp byte ptr [eax],0
	je Block73

 Block72:
	xor esi,esi
	jmp Block74

 Block73:
	mov esi,1

 Block74:
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block76

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block76:
	test esi,esi
	jne Block67

 Block77:
	cmp edi,0x26
	jne Block81

 Block78:
	lea eax,[esp+0x30]
	push eax
	lea ecx,[ebp+0x1760]
	call CChatHelper::HistoryUp
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x24],5
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block80

 Block79:
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [ebp+0x1570]
	push edx
	call CCtrlEdit::SetText

 Block80:
	mov eax,dword ptr [esp+0x30]
	jmp Block85

 Block81:
	cmp edi,0x28
	jne Block87

 Block82:
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[ebp+0x1760]
	call CChatHelper::HistoryDown
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x24],6
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block84

 Block83:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [ebp+0x1570]
	push edx
	call CCtrlEdit::SetText

 Block84:
	mov eax,dword ptr [esp+0x2C]

 Block85:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block87

 Block86:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block87:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 8
}
}
// CUIStatusBar::OnCreate
_SUB_EXCEPTION_HANDLER(47B5F0)
__SUB_CLASS_THIS(0047B5F0, __thiscall, 37817,  CUIStatusBar, void, void*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_47B5F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x84
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x98]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0x241
	push 0x200
	lea ecx,[esi+0x1918]
	push esi
	call CLayoutMan::Init
	push 8
	push 1
	call CCtrlScrollBar::GetScrollBarSize
	mov dword ptr [esi+0x16A8],eax
	lea eax,[esp+0x38]
	push 1
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x1620]
	add esp,0x10
	cmp edi,eax
	je Block5

 Block1:
	mov dword ptr [esi+0x1620],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	test edi,edi
	je Block5

 Block4:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block5:
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block7:
	lea ecx,[esp+0x30]
	push 0
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x162C]
	add esp,8
	cmp edi,eax
	je Block12

 Block8:
	mov dword ptr [esi+0x162C],eax
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block10:
	test edi,edi
	je Block12

 Block11:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block12:
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	lea eax,[esp+0x30]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1628]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	or ebp,0xFFFFFFFF
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block16:
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
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	lea eax,[esp+0x44]
	push eax
	push 0xFF99CC33
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	push ecx
	mov dword ptr [esp+0xB8],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],2
	test ecx,ecx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov byte ptr [esp+0xB0],1
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block24:
	lea ecx,[esp+0x30]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1624]
	push edi
	push eax
	mov dword ptr [esp+0xAC],3
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block26:
	lea edx,[esp+0x44]
	push edx
	call ebx
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea ecx,[esp+0x44]
	push ecx
	push 0xFFFFD800
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,4
	push edx
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],5
	test ecx,ecx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	lea edx,[esp+0x30]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1630]
	push edi
	push eax
	mov dword ptr [esp+0xAC],6
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block36:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x44]
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
	lea edx,[esp+0x44]
	push edx
	push ebp
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,7
	push eax
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],8
	test ecx,ecx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	lea eax,[esp+0x30]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1634]
	push edi
	push eax
	mov dword ptr [esp+0xAC],9
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block46:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	lea eax,[esp+0x44]
	push eax
	push 0xFF00FF00
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	push ecx
	mov dword ptr [esp+0xB8],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0xB
	test ecx,ecx
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	mov byte ptr [esp+0xB0],0xA
	call IWzFont::Create
	mov ebx,8
	mov dword ptr [esp+0xA0],ebp
	cmp word ptr [esp+0x44],bx
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	lea ecx,[esp+0x30]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x164C]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0xC
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block56:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	lea ecx,[esp+0x44]
	push ecx
	push 0xFFBBBBBB
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	push edx
	mov dword ptr [esp+0xB8],0xD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0xE
	test ecx,ecx
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	mov byte ptr [esp+0xB0],0xD
	call IWzFont::Create
	mov dword ptr [esp+0xA0],ebp
	cmp word ptr [esp+0x44],bx
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
	lea edx,[esp+0x30]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1650]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0xF
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block66

 Block65:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block66:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block68

 Block67:
	push eax
	call _com_issue_error

 Block68:
	lea edx,[esp+0x44]
	push edx
	push 0xFFFFFF00
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,0x10
	push eax
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x11
	test ecx,ecx
	jne Block70

 Block69:
	push 0x80004003
	call _com_issue_error

 Block70:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block73

 Block71:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block74:
	lea eax,[esp+0x30]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1654]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x12
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block76

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block76:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block78

 Block77:
	push eax
	call _com_issue_error

 Block78:
	lea eax,[esp+0x44]
	push eax
	push 0xFFFFF080
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,0x13
	push ecx
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x14
	test ecx,ecx
	jne Block80

 Block79:
	push 0x80004003
	call _com_issue_error

 Block80:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block84:
	lea ecx,[esp+0x30]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1658]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x15
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block86

 Block85:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block86:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push edx
	call ebx
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	lea ecx,[esp+0x44]
	push ecx
	push 0xFF60CEFF
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	push edx
	mov dword ptr [esp+0xB8],0x16
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x17
	test ecx,ecx
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	mov byte ptr [esp+0xB0],0x16
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block93

 Block91:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	lea edx,[esp+0x30]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x165C]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x18
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block96

 Block95:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block96:
	lea eax,[esp+0x44]
	push eax
	call ebx
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	lea edx,[esp+0x44]
	push edx
	push 0xFF000000
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,0x19
	push eax
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x1A
	test ecx,ecx
	jne Block100

 Block99:
	push 0x80004003
	call _com_issue_error

 Block100:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block103

 Block101:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	lea eax,[esp+0x30]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1660]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x1B
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block106

 Block105:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block106:
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
	jge Block108

 Block107:
	push eax
	call _com_issue_error

 Block108:
	lea eax,[esp+0x44]
	push eax
	push 0xFFFFAFAF
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	push ecx
	mov dword ptr [esp+0xB8],0x1C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x1D
	test ecx,ecx
	jne Block110

 Block109:
	push 0x80004003
	call _com_issue_error

 Block110:
	mov byte ptr [esp+0xB0],0x1C
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block113

 Block111:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block114:
	lea ecx,[esp+0x30]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1664]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x1E
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block116

 Block115:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block116:
	lea edx,[esp+0x44]
	push edx
	call ebx
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block118

 Block117:
	push eax
	call _com_issue_error

 Block118:
	lea ecx,[esp+0x44]
	push ecx
	push 0xFF003F7F
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,0x1F
	push edx
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x20
	test ecx,ecx
	jne Block120

 Block119:
	push 0x80004003
	call _com_issue_error

 Block120:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block123

 Block121:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block124:
	lea edx,[esp+0x30]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1668]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x21
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block126

 Block125:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block126:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block128

 Block127:
	push eax
	call _com_issue_error

 Block128:
	lea edx,[esp+0x44]
	push edx
	push 0xFF770042
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,0x22
	push eax
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x23
	test ecx,ecx
	jne Block130

 Block129:
	push 0x80004003
	call _com_issue_error

 Block130:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block133

 Block131:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block134

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block133:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block134:
	lea eax,[esp+0x30]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x167C]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x24
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block136

 Block135:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block136:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block138

 Block137:
	push eax
	call _com_issue_error

 Block138:
	lea eax,[esp+0x44]
	push eax
	push 0xFF000000
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,0x25
	push ecx
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x26
	test ecx,ecx
	jne Block140

 Block139:
	push 0x80004003
	call _com_issue_error

 Block140:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block143

 Block141:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block144

 Block142:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block144

 Block143:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block144:
	lea ecx,[esp+0x30]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1680]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x27
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block146

 Block145:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block146:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block148

 Block147:
	push eax
	call _com_issue_error

 Block148:
	lea ecx,[esp+0x44]
	push ecx
	push ebp
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,0x28
	push edx
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x29
	test ecx,ecx
	jne Block150

 Block149:
	push 0x80004003
	call _com_issue_error

 Block150:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block153

 Block151:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block154

 Block152:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block154

 Block153:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block154:
	lea edx,[esp+0x30]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1684]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x2A
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block156

 Block155:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block156:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x44]
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
	lea edx,[esp+0x44]
	push edx
	push 0xFF000000
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,0x2B
	push eax
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x2C
	test ecx,ecx
	jne Block160

 Block159:
	push 0x80004003
	call _com_issue_error

 Block160:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block163

 Block161:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block164

 Block162:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block164

 Block163:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block164:
	lea eax,[esp+0x30]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1688]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x2D
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block166

 Block165:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block166:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block168

 Block167:
	push eax
	call _com_issue_error

 Block168:
	lea eax,[esp+0x44]
	push eax
	push ebp
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,0x2E
	push ecx
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x2F
	test ecx,ecx
	jne Block170

 Block169:
	push 0x80004003
	call _com_issue_error

 Block170:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block173

 Block171:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block174

 Block172:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block174

 Block173:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block174:
	lea ecx,[esp+0x30]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1670]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x30
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block176

 Block175:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block176:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block178

 Block177:
	push eax
	call _com_issue_error

 Block178:
	lea ecx,[esp+0x44]
	push ecx
	push 0xFF462706
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,0x31
	push edx
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x32
	test ecx,ecx
	jne Block180

 Block179:
	push 0x80004003
	call _com_issue_error

 Block180:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block183

 Block181:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block184

 Block182:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block184

 Block183:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block184:
	lea edx,[esp+0x30]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1674]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x33
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block186

 Block185:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block186:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block188

 Block187:
	push eax
	call _com_issue_error

 Block188:
	lea edx,[esp+0x44]
	push edx
	push 0xFF6C4CE3
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,0x34
	push eax
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x35
	test ecx,ecx
	jne Block190

 Block189:
	push 0x80004003
	call _com_issue_error

 Block190:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block193

 Block191:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block194

 Block192:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block194

 Block193:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block194:
	lea eax,[esp+0x30]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x168C]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x36
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block196

 Block195:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block196:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block198

 Block197:
	push eax
	call _com_issue_error

 Block198:
	lea eax,[esp+0x44]
	push eax
	push 0xFF462705
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,0x37
	push ecx
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x38
	test ecx,ecx
	jne Block200

 Block199:
	push 0x80004003
	call _com_issue_error

 Block200:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block203

 Block201:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block204

 Block202:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block204

 Block203:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block204:
	lea ecx,[esp+0x30]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x163C]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x39
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block206

 Block205:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block206:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block208

 Block207:
	push eax
	call _com_issue_error

 Block208:
	lea ecx,[esp+0x44]
	push ecx
	push 0xFFFF9900
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,0x3A
	push edx
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x3B
	test ecx,ecx
	jne Block210

 Block209:
	push 0x80004003
	call _com_issue_error

 Block210:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block213

 Block211:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block214

 Block212:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block214

 Block213:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block214:
	lea edx,[esp+0x30]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1638]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x3C
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block216

 Block215:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block216:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block218

 Block217:
	push eax
	call _com_issue_error

 Block218:
	lea edx,[esp+0x44]
	push edx
	push 0xFFFF99CC
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,0x3D
	push eax
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x3E
	test ecx,ecx
	jne Block220

 Block219:
	push 0x80004003
	call _com_issue_error

 Block220:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block223

 Block221:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block224

 Block222:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block224

 Block223:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block224:
	lea eax,[esp+0x30]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1678]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x3F
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block226

 Block225:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block226:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block228

 Block227:
	push eax
	call _com_issue_error

 Block228:
	lea eax,[esp+0x44]
	push eax
	push 0xFFFC8BE5
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,0x40
	push ecx
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x41
	test ecx,ecx
	jne Block230

 Block229:
	push 0x80004003
	call _com_issue_error

 Block230:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block233

 Block231:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block234

 Block232:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block234

 Block233:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block234:
	lea ecx,[esp+0x30]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x169C]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x42
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block236

 Block235:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block236:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block238

 Block237:
	push eax
	call _com_issue_error

 Block238:
	lea ecx,[esp+0x44]
	push ecx
	push ebp
	push 0xA
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 8
	mov ebx,0x43
	push edx
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x44
	test ecx,ecx
	jne Block240

 Block239:
	push 0x80004003
	call _com_issue_error

 Block240:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block243

 Block241:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block244

 Block242:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block244

 Block243:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block244:
	lea edx,[esp+0x30]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1640]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x45
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block246

 Block245:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block246:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x44]
	push eax
	call ebx
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block248

 Block247:
	push eax
	call _com_issue_error

 Block248:
	lea edx,[esp+0x44]
	push edx
	push 0xFFE1ACFE
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	push eax
	mov dword ptr [esp+0xB8],0x46
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x47
	test ecx,ecx
	jne Block250

 Block249:
	push 0x80004003
	call _com_issue_error

 Block250:
	mov byte ptr [esp+0xB0],0x46
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block253

 Block251:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block254

 Block252:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block254

 Block253:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block254:
	lea eax,[esp+0x30]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1644]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x48
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block256

 Block255:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block256:
	lea ecx,[esp+0x44]
	push ecx
	call ebx
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block258

 Block257:
	push eax
	call _com_issue_error

 Block258:
	lea eax,[esp+0x44]
	push eax
	push 0xFFA6FF7F
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,0x49
	push ecx
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x4A
	test ecx,ecx
	jne Block260

 Block259:
	push 0x80004003
	call _com_issue_error

 Block260:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block263

 Block261:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block264

 Block262:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block264

 Block263:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block264:
	lea ecx,[esp+0x30]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1648]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x4B
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block266

 Block265:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block266:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block268

 Block267:
	push eax
	call _com_issue_error

 Block268:
	lea ecx,[esp+0x44]
	push ecx
	push 0xFFFF28A7
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,0x4C
	push edx
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x4D
	test ecx,ecx
	jne Block270

 Block269:
	push 0x80004003
	call _com_issue_error

 Block270:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block273

 Block271:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block274

 Block272:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block274

 Block273:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block274:
	lea edx,[esp+0x30]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1690]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x4E
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block276

 Block275:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block276:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block278

 Block277:
	push eax
	call _com_issue_error

 Block278:
	lea edx,[esp+0x44]
	push edx
	push 0xFFBBBBBB
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,0x4F
	push eax
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x50
	test ecx,ecx
	jne Block280

 Block279:
	push 0x80004003
	call _com_issue_error

 Block280:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block283

 Block281:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block284

 Block282:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block284

 Block283:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block284:
	lea eax,[esp+0x30]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x166C]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x51
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block286

 Block285:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block286:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block288

 Block287:
	push eax
	call _com_issue_error

 Block288:
	lea eax,[esp+0x44]
	push eax
	push 0xFF000000
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,0x52
	push ecx
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x53
	test ecx,ecx
	jne Block290

 Block289:
	push 0x80004003
	call _com_issue_error

 Block290:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block293

 Block291:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block294

 Block292:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block294

 Block293:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block294:
	lea ecx,[esp+0x30]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1694]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x54
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block296

 Block295:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block296:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x44]
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
	lea ecx,[esp+0x44]
	push ecx
	push 0xFFFFFF00
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,0x55
	push edx
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x56
	test ecx,ecx
	jne Block300

 Block299:
	push 0x80004003
	call _com_issue_error

 Block300:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block303

 Block301:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block304

 Block302:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block304

 Block303:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block304:
	lea edx,[esp+0x30]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x1698]
	push edi
	push eax
	mov dword ptr [esp+0xAC],0x57
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0xA0],ebp
	test eax,eax
	je Block306

 Block305:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block306:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block308

 Block307:
	push eax
	call _com_issue_error

 Block308:
	lea edx,[esp+0x44]
	push edx
	push 0xFF7DFFEE
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A25
	mov ebx,0x58
	push eax
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xB0],0x59
	test ecx,ecx
	jne Block310

 Block309:
	push 0x80004003
	call _com_issue_error

 Block310:
	mov byte ptr [esp+0xB0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0xA0],ebp
	jne Block313

 Block311:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block314

 Block312:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block314

 Block313:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block314:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push eax
	call edi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block316

 Block315:
	push eax
	call _com_issue_error

 Block316:
	lea edx,[esp+0x44]
	push edx
	mov dword ptr [esp+0xA4],0x5A
	call edi
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block318

 Block317:
	push eax
	call _com_issue_error

 Block318:
	push 0
	push 0
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x50]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push 0xA79
	mov bl,0x5B
	push eax
	mov byte ptr [esp+0xBC],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xB4],0x5C
	jne Block320

 Block319:
	push 0x80004003
	call _com_issue_error

 Block320:
	lea ecx,[esp+0x78]
	push ecx
	mov byte ptr [esp+0xB8],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA8],0x5D
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x16A4]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block323

 Block321:
	cmp eax,0x80004002
	je Block323

 Block322:
	push eax
	call _com_issue_error

 Block323:
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0xA0],bl
	jne Block326

 Block324:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	test eax,eax
	je Block327

 Block325:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block327

 Block326:
	lea eax,[esp+0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block327:
	mov ebx,8
	mov byte ptr [esp+0xA0],0x5A
	cmp word ptr [esp+0x44],bx
	jne Block330

 Block328:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block331

 Block329:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block331

 Block330:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block331:
	mov dword ptr [esp+0xA0],ebp
	cmp word ptr [esp+0x34],bx
	jne Block334

 Block332:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block335

 Block333:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block335

 Block334:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block335:
	lea edx,[esp+0x34]
	push edx
	call edi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block337

 Block336:
	push eax
	call _com_issue_error

 Block337:
	lea ecx,[esp+0x44]
	push ecx
	mov dword ptr [esp+0xA4],0x5E
	call edi
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block339

 Block338:
	push eax
	call _com_issue_error

 Block339:
	push 0
	push 0
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x50]
	push ecx
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	mov bl,0x5F
	push offset _S_UISTATUSBAR2IMGM__40
	mov byte ptr [esp+0xB8],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xB4],0x60
	jne Block341

 Block340:
	push 0x80004003
	call _com_issue_error

 Block341:
	lea edx,[esp+0x78]
	mov byte ptr [esp+0xB4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA8],0x61
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x16A0]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block344

 Block342:
	cmp eax,0x80004002
	je Block344

 Block343:
	push eax
	call _com_issue_error

 Block344:
	mov edi,8
	mov byte ptr [esp+0xA0],bl
	cmp word ptr [esp+0x64],di
	jne Block347

 Block345:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block348

 Block346:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block348

 Block347:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block348:
	mov byte ptr [esp+0xA0],0x5E
	cmp word ptr [esp+0x44],di
	jne Block351

 Block349:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block352

 Block350:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block352

 Block351:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block352:
	mov dword ptr [esp+0xA0],ebp
	cmp word ptr [esp+0x34],di
	jne Block355

 Block353:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block356

 Block354:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block356

 Block355:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block356:
	push 1
	push ebp
	push offset _S_UISTATUSBAR2IMGM__39
	lea eax,[esp+0x3C]
	lea ebx,[esi+0x1918]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddSingleLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x17C8]
	cmp edi,eax
	je Block361

 Block357:
	mov dword ptr [esi+0x17C8],eax
	test eax,eax
	je Block359

 Block358:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block359:
	test edi,edi
	je Block361

 Block360:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block361:
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block363

 Block362:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block363:
	push 1
	push ebp
	push offset _S_UISTATUSBAR2IMGM__38
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddSingleLayer
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block365

 Block364:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block365:
	push 1
	push 1
	push offset _S_UISTATUSBAR2IMGM__37
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddSingleLayer
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block367

 Block366:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block367:
	push 1
	push ebp
	push offset _S_UISTATUSBAR2IMGM__36
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddSingleLayer
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block369

 Block368:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block369:
	push 1
	push ebp
	push offset _S_UISTATUSBAR2IMGM__35
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddSingleLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x17D0]
	cmp edi,eax
	je Block374

 Block370:
	mov dword ptr [esi+0x17D0],eax
	test eax,eax
	je Block372

 Block371:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block372:
	test edi,edi
	je Block374

 Block373:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block374:
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block376

 Block375:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block376:
	push 1
	push 1
	push offset _S_UISTATUSBAR2IMGM__34
	lea eax,[esp+0x3C]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddSingleLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x17D4]
	cmp edi,eax
	je Block381

 Block377:
	mov dword ptr [esi+0x17D4],eax
	test eax,eax
	je Block379

 Block378:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block379:
	test edi,edi
	je Block381

 Block380:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block381:
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block383

 Block382:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block383:
	push 1
	push ebp
	push offset _S_UISTATUSBAR2IMGM__33
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddSingleLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x17D8]
	cmp edi,eax
	je Block388

 Block384:
	mov dword ptr [esi+0x17D8],eax
	test eax,eax
	je Block386

 Block385:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block386:
	test edi,edi
	je Block388

 Block387:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block388:
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block390

 Block389:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block390:
	mov edi,dword ptr [esi+0x17D8]
	test edi,edi
	jne Block392

 Block391:
	push 0x80004003
	call _com_issue_error

 Block392:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0x11C]
	push 0
	push edi
	call ecx
	test eax,eax
	jge Block394

 Block393:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block394:
	push 1
	push 1
	push offset _S_UISTATUSBAR2IMGM__32
	lea edx,[esp+0x3C]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddSingleLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x17DC]
	cmp edi,eax
	je Block399

 Block395:
	mov dword ptr [esi+0x17DC],eax
	test eax,eax
	je Block397

 Block396:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block397:
	test edi,edi
	je Block399

 Block398:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block399:
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block401

 Block400:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block401:
	mov edi,dword ptr [esi+0x17DC]
	test edi,edi
	jne Block403

 Block402:
	push 0x80004003
	call _com_issue_error

 Block403:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0x11C]
	push 0
	push edi
	call edx
	test eax,eax
	jge Block405

 Block404:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block405:
	mov eax,dword ptr [TSingleton<CConfig>::ms_pInstance]
	mov edx,dword ptr [eax+0x5C]
	push ebx
	lea ecx,[esi+0x1824]
	push edx
	call CUIStatusBar::CQuickSlot::Init
	mov ecx,esi
	call CUIStatusBar::ChangeScreenResolution
	push 1
	push ebp
	push offset _S_UISTATUSBAR2IMGM__31
	lea eax,[esp+0x24]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddSingleLayer
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x64]
	push ecx
	mov dword ptr [esp+0xA4],0x62
	call edi
	lea edx,[esp+0x64]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block407

 Block406:
	push eax
	call _com_issue_error

 Block407:
	lea eax,[esp+0x54]
	push eax
	mov byte ptr [esp+0xA4],0x63
	call edi
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block409

 Block408:
	push eax
	call _com_issue_error

 Block409:
	push 0
	push 0
	lea edx,[esp+0x6C]
	push edx
	lea eax,[esp+0x60]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0x7CE
	mov bl,0x64
	push ecx
	mov byte ptr [esp+0xBC],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xB4],0x65
	jne Block411

 Block410:
	push 0x80004003
	call _com_issue_error

 Block411:
	lea edx,[esp+0x98]
	mov byte ptr [esp+0xB4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA8],0x66
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x34],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block414

 Block412:
	cmp eax,0x80004002
	je Block414

 Block413:
	push eax
	call _com_issue_error

 Block414:
	mov edi,8
	mov byte ptr [esp+0xA0],0x68
	cmp word ptr [esp+0x84],di
	jne Block417

 Block415:
	xor eax,eax
	mov word ptr [esp+0x84],ax
	mov eax,dword ptr [esp+0x8C]
	test eax,eax
	je Block418

 Block416:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block418

 Block417:
	lea ecx,[esp+0x84]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block418:
	mov byte ptr [esp+0xA0],0x69
	cmp word ptr [esp+0x54],di
	jne Block421

 Block419:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	test eax,eax
	je Block422

 Block420:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block422

 Block421:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block422:
	mov byte ptr [esp+0xA0],0x6A
	cmp word ptr [esp+0x64],di
	jne Block425

 Block423:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	test eax,eax
	je Block426

 Block424:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block426

 Block425:
	lea edx,[esp+0x64]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block426:
	push 0x8A
	push 2
	push 0x1C
	push offset _S_UISTATUSBAR2IMGM__30
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x30],esp
	test eax,eax
	je Block428

 Block427:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block428:
	lea ecx,[esi+0x16C8]
	call CUIStatusBar::CGauge::Create
	push 0x8A
	push 2
	push 0xC5
	push offset _S_UISTATUSBAR2IMGM__29
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x30],esp
	test eax,eax
	je Block430

 Block429:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block430:
	lea ecx,[esi+0x16E0]
	call CUIStatusBar::CGauge::Create
	push 0x134
	push 0x12
	push 0x1C
	push offset _S_UISTATUSBAR2IMGM__28
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x30],esp
	test eax,eax
	je Block432

 Block431:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block432:
	lea ecx,[esi+0x16F8]
	call CUIStatusBar::CGauge::Create
	fldz
	push ecx
	fstp qword ptr [esi+0x1758]
	mov ecx,dword ptr [esp+0x1C]
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block434

 Block433:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block434:
	lea ecx,[esp+0x20]
	push ecx
	call CLayoutMan::CopyToEmptyLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x17CC]
	add esp,8
	cmp edi,eax
	je Block439

 Block435:
	mov dword ptr [esi+0x17CC],eax
	test eax,eax
	je Block437

 Block436:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block437:
	test edi,edi
	je Block439

 Block438:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block439:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block441

 Block440:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block441:
	push 1
	push ebp
	push offset _S_UISTATUSBAR2IMGM__27
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esi+0x1918]
	call CLayoutMan::AddSingleLayer
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block443

 Block442:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block443:
	mov dword ptr [esp+0x38],0
	push 0
	push 0
	push 0
	push 0x3EC
	push offset _S_UISTATUSBAR2IMGM__26
	lea eax,[esp+0x30]
	lea ebx,[esi+0x1918]
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0xB8],0x6B
	call CLayoutMan::AddButton
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov byte ptr [esp+0xA0],0x6C
	lea ebp,[esi+0x1538]
	test eax,eax
	je Block445

 Block444:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block445:
	cmp dword ptr [ebp+4],0
	je Block447

 Block446:
	push 0
	mov ecx,ebp
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+4],0

 Block447:
	cmp dword ptr [esp+0x20],0
	mov ecx,dword ptr [edi+4]
	mov dword ptr [ebp+4],ecx
	mov byte ptr [esp+0xA0],0x6B
	je Block449

 Block448:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block449:
	mov eax,dword ptr [esi+0x153C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	push 0
	push 0
	push 0
	push 0x3EB
	push offset _S_UISTATUSBAR2IMGM__25
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov byte ptr [esp+0xA0],0x6D
	lea ebp,[esi+0x1530]
	test eax,eax
	je Block451

 Block450:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block451:
	cmp dword ptr [ebp+4],0
	je Block453

 Block452:
	push 0
	mov ecx,ebp
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+4],0

 Block453:
	cmp dword ptr [esp+0x20],0
	mov edx,dword ptr [edi+4]
	mov dword ptr [ebp+4],edx
	mov byte ptr [esp+0xA0],0x6B
	je Block455

 Block454:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block455:
	mov eax,dword ptr [esi+0x1534]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	push 0
	push 0
	push 0
	push 0x3F0
	push offset _S_UISTATUSBAR2IMGM__24
	lea eax,[esp+0x30]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov edi,eax
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block457

 Block456:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block457:
	cmp dword ptr [esp+0x20],0
	mov edi,dword ptr [edi+4]
	mov dword ptr [esp+0x38],edi
	mov byte ptr [esp+0xA0],0x6B
	je Block459

 Block458:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block459:
	lea ecx,[esp+0x1C]
	push 0x1A88
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 1
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xAC],0x6F
	call CCtrlButton::LoadToolTipbyString
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xA0],0x6B
	test eax,eax
	je Block461

 Block460:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block461:
	push 0
	push 0
	push 0
	push 0x3F1
	push offset _S_UISTATUSBAR2IMGM__23
	lea edx,[esp+0x30]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov byte ptr [esp+0xA0],0x70
	test eax,eax
	je Block463

 Block462:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block463:
	test edi,edi
	je Block465

 Block464:
	push 0
	lea ecx,[esp+0x38]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block465:
	cmp dword ptr [esp+0x20],0
	mov edi,dword ptr [ebp+4]
	mov dword ptr [esp+0x38],edi
	mov byte ptr [esp+0xA0],0x6B
	je Block467

 Block466:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block467:
	lea eax,[esp+0x1C]
	push 0x18B2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 1
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xAC],0x71
	call CCtrlButton::LoadToolTipbyString
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xA0],0x6B
	test eax,eax
	je Block469

 Block468:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block469:
	push 0
	push 0
	push 0
	push 0x7D4
	push offset _S_UISTATUSBAR2IMGM__22
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0xA4],0x72
	call ZRef<CCtrlOriginButton>::op_assign_copy
	cmp dword ptr [esp+0x20],0
	mov byte ptr [esp+0xA0],0x6B
	je Block471

 Block470:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block471:
	lea edx,[esp+0x1C]
	push 0x18CA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x38]
	push 0
	push 1
	push eax
	mov byte ptr [esp+0xAC],0x73
	call CCtrlButton::LoadToolTipbyString
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xA0],0x6B
	test eax,eax
	je Block473

 Block472:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block473:
	push 0
	push 0
	push 0
	push 0x7D2
	push offset _S_UISTATUSBAR2IMGM__21
	lea eax,[esp+0x30]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	push eax
	lea ecx,[esi+0x1550]
	mov byte ptr [esp+0xA4],0x74
	call ZRef<CCtrlOriginButton>::op_assign_copy
	cmp dword ptr [esp+0x20],0
	mov byte ptr [esp+0xA0],0x6B
	je Block475

 Block474:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block475:
	push 0
	push 0
	push 0
	push 0x7D5
	push offset _S_UISTATUSBAR2IMGM__20
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0xA4],0x75
	call ZRef<CCtrlOriginButton>::op_assign_copy
	cmp dword ptr [esp+0x20],0
	mov byte ptr [esp+0xA0],0x6B
	je Block477

 Block476:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block477:
	lea edx,[esp+0x1C]
	push 0x1A60
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x38]
	push 0
	push 1
	push eax
	mov byte ptr [esp+0xAC],0x76
	call CCtrlButton::LoadToolTipbyString
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xA0],0x6B
	test eax,eax
	je Block479

 Block478:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block479:
	push 0
	push 0
	push 0
	push 0x7D1
	push offset _S_UISTATUSBAR2IMGM__19
	lea eax,[esp+0x30]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	push eax
	lea ecx,[esi+0x1548]
	mov byte ptr [esp+0xA4],0x77
	call ZRef<CCtrlOriginButton>::op_assign_copy
	cmp dword ptr [esp+0x20],0
	mov byte ptr [esp+0xA0],0x6B
	je Block481

 Block480:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block481:
	push 0
	push 0
	push 0
	push 0x7D0
	push offset _S_UISTATUSBAR2IMGM__18
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	push eax
	lea ecx,[esi+0x1540]
	mov byte ptr [esp+0xA4],0x78
	call ZRef<CCtrlOriginButton>::op_assign_copy
	cmp dword ptr [esp+0x20],0
	mov byte ptr [esp+0xA0],0x6B
	je Block483

 Block482:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block483:
	push 0
	push 0
	push 0
	push 0x7D3
	push offset _S_UISTATUSBAR2IMGM__17
	lea edx,[esp+0x30]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddButton
	push eax
	lea ecx,[esi+0x1558]
	mov byte ptr [esp+0xA4],0x79
	call ZRef<CCtrlOriginButton>::op_assign_copy
	cmp dword ptr [esp+0x20],0
	mov byte ptr [esp+0xA0],0x6B
	je Block485

 Block484:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block485:
	push 0
	push 0
	push 0
	push 0x3ED
	push offset _S_UISTATUSBAR2IMGM__16
	lea eax,[esp+0x30]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0xA4],0x7A
	call ZRef<CCtrlOriginButton>::op_assign_copy
	cmp dword ptr [esp+0x20],0
	mov byte ptr [esp+0xA0],0x6B
	je Block487

 Block486:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block487:
	lea ecx,[esp+0x1C]
	push 0x18C8
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x38]
	push 0
	push 1
	push eax
	mov byte ptr [esp+0xAC],0x7B
	call CCtrlButton::LoadToolTipbyString
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xA0],0x6B
	test eax,eax
	je Block489

 Block488:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block489:
	push 0
	push 0
	push 0
	push 0x3F5
	push offset _S_UISTATUSBAR2IMGM__15
	lea edx,[esp+0x30]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddButton
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0xA4],0x7C
	call ZRef<CCtrlOriginButton>::op_assign_copy
	cmp dword ptr [esp+0x20],0
	mov byte ptr [esp+0xA0],0x6B
	je Block491

 Block490:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block491:
	lea eax,[esp+0x1C]
	push 0x18C5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x38]
	push 0
	push 1
	push eax
	mov byte ptr [esp+0xAC],0x7D
	call CCtrlButton::LoadToolTipbyString
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xA0],0x6B
	test eax,eax
	je Block493

 Block492:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block493:
	push 0
	push 0
	push 0
	push 0x3F6
	push offset _S_UISTATUSBAR2IMGC__7
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	push eax
	lea ecx,[esi+0x192C]
	mov byte ptr [esp+0xA4],0x7E
	call ZRef<CCtrlOriginButton>::op_assign_copy
	cmp dword ptr [esp+0x20],0
	mov byte ptr [esp+0xA0],0x6B
	je Block495

 Block494:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block495:
	push 0
	push 0
	push 0
	push 0x3F7
	push offset _S_UISTATUSBAR2IMGC__6
	lea edx,[esp+0x30]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddButton
	push eax
	lea ecx,[esi+0x1934]
	mov byte ptr [esp+0xA4],0x7F
	call ZRef<CCtrlOriginButton>::op_assign_copy
	cmp dword ptr [esp+0x20],0
	mov byte ptr [esp+0xA0],0x6B
	je Block497

 Block496:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block497:
	push 0
	push 0
	push 0
	push 0x3F8
	push offset _S_UISTATUSBAR2IMGC__5
	lea eax,[esp+0x30]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	push eax
	lea ecx,[esi+0x193C]
	mov byte ptr [esp+0xA4],0x80
	call ZRef<CCtrlOriginButton>::op_assign_copy
	cmp dword ptr [esp+0x20],0
	mov byte ptr [esp+0xA0],0x6B
	je Block499

 Block498:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block499:
	push 0
	push 0
	push 0
	push 0x3F9
	push offset _S_UISTATUSBAR2IMGC__4
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	push eax
	lea ecx,[esi+0x1944]
	mov byte ptr [esp+0xA4],0x81
	call ZRef<CCtrlOriginButton>::op_assign_copy
	cmp dword ptr [esp+0x20],0
	mov byte ptr [esp+0xA0],0x6B
	je Block501

 Block500:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block501:
	push 0
	push 0
	push 0
	push 0x3FA
	push offset _S_UISTATUSBAR2IMGC__3
	lea edx,[esp+0x30]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddButton
	push eax
	lea ecx,[esi+0x194C]
	mov byte ptr [esp+0xA4],0x82
	call ZRef<CCtrlOriginButton>::op_assign_copy
	cmp dword ptr [esp+0x20],0
	mov byte ptr [esp+0xA0],0x6B
	je Block503

 Block502:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block503:
	push 0
	push 0
	push 0
	push 0x3FB
	push offset _S_UISTATUSBAR2IMGC__2
	lea eax,[esp+0x30]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	push eax
	lea ecx,[esi+0x1954]
	mov byte ptr [esp+0xA4],0x83
	call ZRef<CCtrlOriginButton>::op_assign_copy
	cmp dword ptr [esp+0x20],0
	mov byte ptr [esp+0xA0],0x6B
	je Block505

 Block504:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block505:
	lea edi,[esi+0x1930]
	mov ebp,6

 Block506:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	add edi,8
	sub ebp,1
	jne Block506

 Block507:
	mov ecx,esi
	call CUIStatusBar::_SetFilterButton
	push ebp
	push ebp
	push ebp
	push 0x3E8
	push offset _S_UISTATUSBAR2IMGM__14
	lea ecx,[esp+0x30]
	push ecx
	lea ebx,[esi+0x1918]
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov byte ptr [esp+0xA0],0x84
	test eax,eax
	je Block509

 Block508:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block509:
	cmp dword ptr [esp+0x38],0
	je Block511

 Block510:
	push 0
	lea ecx,[esp+0x38]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block511:
	cmp dword ptr [esp+0x20],0
	mov edi,dword ptr [edi+4]
	mov dword ptr [esp+0x38],edi
	mov byte ptr [esp+0xA0],0x6B
	je Block513

 Block512:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block513:
	lea edx,[esp+0x1C]
	push 0x7F0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 1
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xAC],0x85
	call CCtrlButton::LoadToolTip
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xA0],0x6B
	test eax,eax
	je Block515

 Block514:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block515:
	push 0
	push 0
	push 0
	push 0x3EA
	push offset _S_UISTATUSBAR2IMGM__13
	lea eax,[esp+0x30]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov byte ptr [esp+0xA0],0x86
	lea edi,[esi+0x1520]
	test eax,eax
	je Block517

 Block516:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block517:
	cmp dword ptr [edi+4],0
	je Block519

 Block518:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block519:
	cmp dword ptr [esp+0x20],0
	mov ecx,dword ptr [ebp+4]
	mov dword ptr [edi+4],ecx
	mov byte ptr [esp+0xA0],0x6B
	je Block521

 Block520:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block521:
	push 0
	push 0
	push 0
	push 0x3EF
	push offset _S_UISTATUSBAR2IMGM__12
	lea edx,[esp+0x30]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov byte ptr [esp+0xA0],0x87
	lea edi,[esi+0x1528]
	test eax,eax
	je Block523

 Block522:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block523:
	cmp dword ptr [edi+4],0
	je Block525

 Block524:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block525:
	cmp dword ptr [esp+0x20],0
	mov eax,dword ptr [ebp+4]
	mov dword ptr [edi+4],eax
	mov byte ptr [esp+0xA0],0x6B
	je Block527

 Block526:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block527:
	lea ecx,[esp+0x1C]
	push 0x7F7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x152C]
	push 0
	push 0
	push eax
	mov byte ptr [esp+0xAC],0x88
	call CCtrlButton::LoadToolTip
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xA0],0x6B
	test eax,eax
	je Block529

 Block528:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block529:
	push 0
	push 0
	push 0
	push 0x3E9
	push offset _S_UISTATUSBAR2IMGM__11
	lea edx,[esp+0x30]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0x1518]
	mov byte ptr [esp+0xA4],0x89
	call ZRef<CCtrlButton>::op_assign_ptr
	cmp dword ptr [esp+0x20],0
	mov byte ptr [esp+0xA0],0x6B
	je Block531

 Block530:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block531:
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::SaveCharacter
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	call CFuncKeyMappedMan::AdaptVirtualKey
	xor ebx,ebx
	mov eax,0x16
	push offset _S_UISTATUSBAR2IMGM__10
	lea ecx,[esp+0x20]
	mov dword ptr [esi+0x1580],0xFF555555
	mov dword ptr [esi+0x1584],0xFFFFC600
	mov dword ptr [esi+0x1588],0xFF404040
	mov dword ptr [esi+0x158C],ebx
	mov dword ptr [esi+0x1590],ebx
	mov dword ptr [esi+0x1594],0x5A
	mov dword ptr [esi+0x15AC],eax
	mov dword ptr [esi+0x15B0],eax
	mov dword ptr [esi+0x15B4],eax
	mov dword ptr [esi+0x15B8],0x18
	mov dword ptr [esi+0x159C],ebx
	mov dword ptr [esi+0x15BC],1
	mov dword ptr [esi+0x15C8],ebx
	call _xbstr_t::_ctor_1
	mov ebp,dword ptr [esp+0x1C]
	lea edi,[esi+0x15CC]
	lea eax,[esp+0x1C]
	cmp edi,eax
	je Block536

 Block532:
	mov ecx,dword ptr [edi]
	cmp ecx,ebx
	je Block534

 Block533:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],ebx

 Block534:
	mov dword ptr [edi],ebp
	cmp ebp,ebx
	je Block538

 Block535:
	lea ecx,[ebp+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block536:
	cmp ebp,ebx
	je Block538

 Block537:
	mov ecx,ebp
	call _xbstr_t::Data_t::Release

 Block538:
	lea edx,[esp+0x1C]
	push 0x1A25
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,eax
	lea edi,[esi+0x15E8]
	cmp edi,ebp
	je Block543

 Block539:
	mov ecx,dword ptr [edi]
	cmp ecx,ebx
	je Block541

 Block540:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],ebx

 Block541:
	mov eax,dword ptr [ebp]
	mov dword ptr [edi],eax
	cmp eax,ebx
	je Block543

 Block542:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block543:
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,ebx
	je Block545

 Block544:
	call _xbstr_t::Data_t::Release

 Block545:
	mov dword ptr [esi+0x15EC],0xB
	mov dword ptr [esi+0x15F8],0xFFFFFFFF
	mov dword ptr [esi+0x15F0],0xFF000000
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[eax+0x2038]
	mov edi,eax
	call TSecType<unsigned char>::GetData
	test al,1
	jne Block548

 Block546:
	cmp dword ptr [edi+0x209C],ebx
	jne Block548

 Block547:
	xor eax,eax
	jmp Block549

 Block548:
	mov eax,1

 Block549:
	neg eax
	sbb eax,eax
	and eax,0xBA
	add eax,0x46
	mov dword ptr [esi+0x1604],eax
	call timeGetTime
	mov ebp,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esi+0x16AC],eax
	lea eax,[esp+0x74]
	push eax
	mov dword ptr [esi+0x17B8],ebx
	mov dword ptr [esi+0x17B4],ebx
	call ebp
	lea ecx,[esp+0x74]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block551

 Block550:
	push eax
	call _com_issue_error

 Block551:
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0xA4],0x8A
	call ebp
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block553

 Block552:
	push eax
	call _com_issue_error

 Block553:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xA0],0x8B
	cmp ecx,ebx
	jne Block555

 Block554:
	push 0x80004003
	call _com_issue_error

 Block555:
	lea edx,[esp+0x74]
	push edx
	lea eax,[esp+0x48]
	push eax
	push ebx
	push 0xE
	push 0x1B2
	push ebx
	push ebx
	lea edx,[esp+0x38]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x17BC]
	cmp edi,eax
	je Block560

 Block556:
	mov dword ptr [esi+0x17BC],eax
	cmp eax,ebx
	je Block558

 Block557:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block558:
	cmp edi,ebx
	je Block560

 Block559:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block560:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block562

 Block561:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block562:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0xA0],0x8A
	jne Block565

 Block563:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,ebx
	je Block566

 Block564:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block566

 Block565:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block566:
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xA0],0x6B
	jne Block569

 Block567:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebx
	je Block570

 Block568:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block570

 Block569:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block570:
	mov edi,dword ptr [esi+0x17BC]
	cmp edi,ebx
	jne Block572

 Block571:
	push 0x80004003
	call _com_issue_error

 Block572:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push edi
	call eax
	cmp eax,ebx
	jge Block574

 Block573:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block574:
	push ebx
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov bl,0x8C
	mov edx,0xD
	mov byte ptr [esp+0xA0],bl
	mov word ptr [esp+0x44],dx
	mov dword ptr [esp+0x4C],eax
	test eax,eax
	je Block576

 Block575:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block576:
	mov edi,dword ptr [esi+0x17BC]
	mov byte ptr [esp+0xA0],0x8D
	test edi,edi
	jne Block578

 Block577:
	push 0x80004003
	call _com_issue_error

 Block578:
	mov edx,dword ptr [esp+0x44]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x58]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x5C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push edi
	call eax
	test eax,eax
	jge Block580

 Block579:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block580:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0xA0],bl
	jne Block583

 Block581:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block584

 Block582:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block584

 Block583:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block584:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xA0],0x6B
	test eax,eax
	je Block586

 Block585:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block586:
	mov eax,dword ptr [esi+0x18]
	mov ecx,0xD
	mov word ptr [esp+0x44],cx
	mov dword ptr [esp+0x4C],eax
	test eax,eax
	je Block588

 Block587:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block588:
	mov edi,dword ptr [esi+0x17BC]
	mov byte ptr [esp+0xA0],0x8E
	test edi,edi
	jne Block590

 Block589:
	push 0x80004003
	call _com_issue_error

 Block590:
	mov edx,dword ptr [esp+0x44]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x58]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x5C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push edi
	call eax
	test eax,eax
	jge Block592

 Block591:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block592:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0xA0],0x6B
	jne Block595

 Block593:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block596

 Block594:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block596

 Block595:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block596:
	mov edi,dword ptr [esi+0x17BC]
	test edi,edi
	jne Block598

 Block597:
	push 0x80004003
	call _com_issue_error

 Block598:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push edi
	call ecx
	test eax,eax
	jge Block600

 Block599:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block600:
	lea edx,[esp+0x1C]
	push edx
	call ebp
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block602

 Block601:
	push eax
	call _com_issue_error

 Block602:
	lea ecx,[esp+0x74]
	mov bl,0x8F
	push ecx
	mov byte ptr [esp+0xA4],bl
	call ebp
	lea edx,[esp+0x74]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block604

 Block603:
	push eax
	call _com_issue_error

 Block604:
	mov ecx,dword ptr [esi+0x17BC]
	mov byte ptr [esp+0xA0],0x90
	test ecx,ecx
	jne Block606

 Block605:
	push 0x80004003
	call _com_issue_error

 Block606:
	lea eax,[esp+0x1C]
	push eax
	lea edx,[esp+0x78]
	push edx
	push 0x1DB
	push 0xF2
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0xA0],bl
	cmp word ptr [esp+0x74],di
	jne Block609

 Block607:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	je Block610

 Block608:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block610

 Block609:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block610:
	mov byte ptr [esp+0xA0],0x6B
	cmp word ptr [esp+0x1C],di
	jne Block613

 Block611:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block614

 Block612:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block614

 Block613:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block614:
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	mov eax,dword ptr [ecx+0x58]
	lea edx,[eax-1]
	mov ecx,esi
	cmp edx,2
	ja Block616

 Block615:
	push eax
	jmp Block617

 Block616:
	push 1

 Block617:
	call CUIStatusBar::SetChatType
	lea ecx,[esi+0x1824]
	call CUIStatusBar::CQuickSlot::Draw
	mov edi,dword ptr [_D_G_PSTAGE+4]
	test edi,edi
	je Block621

 Block618:
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[edi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block621

 Block619:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x1C]
	mov ecx,edi
	call edx
	cmp eax,0x16
	jne Block621

 Block620:
	push 0
	jmp Block622

 Block621:
	push 1

 Block622:
	mov ecx,esi
	call CUIStatusBar::EnableButtons
	cmp dword ptr [esp+0x38],0
	mov byte ptr [esp+0xA0],0x6A
	je Block624

 Block623:
	push 0
	lea ecx,[esp+0x38]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block624:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xA0],0x62
	test eax,eax
	je Block626

 Block625:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block626:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0xA0],0xFFFFFFFF
	test eax,eax
	je Block628

 Block627:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block628:
	mov ecx,dword ptr [esp+0x98]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CUIStatusBar::GetShortCutIndexByPos
_SUB_EXCEPTION_HANDLER(46D640)
__SUB_CLASS_THIS(0046D640, __thiscall, 37835,  CUIStatusBar, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_46D640
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
	mov edi,ecx
	lea eax,[esp+0x20]
	push eax
	call CWnd::GetLayer
	mov esi,eax
	lea ecx,[esp+0x1C]
	push ecx
	xor ebx,ebx
	mov ecx,edi
	mov dword ptr [esp+0x30],ebx
	call CWnd::GetLayer
	mov dword ptr [esp+0x18],eax
	mov esi,dword ptr [esi]
	mov byte ptr [esp+0x2C],1
	cmp esi,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x28]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],ebx
	call ecx
	cmp eax,ebx
	jge Block4

 Block3:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov edx,dword ptr [esp+0x18]
	mov esi,dword ptr [edx]
	mov ebp,dword ptr [esp+0x14]
	cmp esi,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],ebx
	call edx
	cmp eax,ebx
	jge Block8

 Block7:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x18]
	add ebp,eax
	add edx,ecx
	push ebp
	push edx
	lea ecx,[edi+0x1824]
	call CUIStatusBar::CQuickSlot::GetIndexByPos
	mov esi,eax
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x2C],bl
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,esi
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 8
}
}
// CUIStatusBar::CChatLog::CChatLog
_SUB_EXCEPTION_HANDLER(4718C0)
__SUB_CLASS_THIS(004718C0, __thiscall, 37885,  CUIStatusBar::CChatLog, void, NakedParam<ZXString16>, long, long, long, int32_t, int32_t, NakedParam<ZRef<GW_ItemSlotBase>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4718C0
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
	mov dword ptr [esp+0x18],0
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	lea ecx,[esi+0xC]
	int 3// TODO: 	mov dword ptr [esi],offset CUIStatusBar::CChatLog::`vftable'
	mov dword ptr [ecx],eax
	lea edi,[esi+0x2C]
	mov dword ptr [edi+4],eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x1C],4
	call ZXString16::op_assign
	mov ecx,dword ptr [esp+0x24]
	lea edx,[esi+0x10]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [esi+0x1C],ecx
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [esi+0x20],edx
	mov dword ptr [esi+0x18],eax
	mov eax,dword ptr [esp+0x30]
	lea edx,[esp+0x38]
	mov dword ptr [esi+0x28],ecx
	push edx
	mov ecx,edi
	mov dword ptr [esi+0x24],eax
	call ZRef<GW_ItemSlotBase>::op_assign_copy
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block6

 Block3:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	mov eax,dword ptr [esp+0x3C]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x3C]
	test ecx,ecx
	je Block6

 Block5:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block6:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 0x20
}
}
// CUIStatusBar::SetNumberValue
_SUB_EXCEPTION_HANDLER(473D50)
__SUB_CLASS_THIS(00473D50, __thiscall, 37854,  CUIStatusBar, void, long, long, long, long, long, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_473D50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA8
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB8]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [TSingleton<CConfig>::ms_pInstance]
	mov eax,dword ptr [eax+0x88]
	lea ecx,[eax+eax*4]
	test ecx,ecx
	je Block5

 Block1:
	mov esi,dword ptr [ebp+8]
	mov eax,esi
	imul eax,0x64
	cdq
	idiv dword ptr [ebp+0xC]
	cmp eax,ecx
	jge Block5

 Block2:
	cmp dword ptr [edi+0x1818],esi
	jle Block4

 Block3:
	mov ecx,edi
	call CUIStatusBar::FlashHPBar

 Block4:
	mov dword ptr [edi+0x1818],esi
	jmp Block6

 Block5:
	imul ecx,dword ptr [ebp+0xC]
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov dword ptr [edi+0x1818],ecx

 Block6:
	mov edx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	mov eax,dword ptr [edx+0x8C]
	lea ecx,[eax+eax*4]
	test ecx,ecx
	je Block11

 Block7:
	mov esi,dword ptr [ebp+0x10]
	mov eax,esi
	imul eax,0x64
	cdq
	idiv dword ptr [ebp+0x14]
	cmp eax,ecx
	jge Block11

 Block8:
	cmp dword ptr [edi+0x181C],esi
	jle Block10

 Block9:
	mov ecx,edi
	call CUIStatusBar::FlashMPBar

 Block10:
	mov dword ptr [edi+0x181C],esi
	jmp Block12

 Block11:
	imul ecx,dword ptr [ebp+0x14]
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov dword ptr [edi+0x181C],eax

 Block12:
	fild dword ptr [ebp+0x18]
	fmul qword ptr [__real_4059000000000000]
	fidiv dword ptr [ebp+0x1C]
	fst qword ptr [esp+0x3C]
	fld qword ptr [__real_4058ff5c28f5c28f]
	fcom
	fnstsw ax
	test ah,0x41
	jp Block14

 Block13:
	fstp st(1)
	jmp Block15

 Block14:
	fstp st(0)

 Block15:
	mov esi,dword ptr [ZImports::_VariantInit]
	fstp qword ptr [edi+0x1758]
	lea ecx,[esp+0x54]
	push ecx
	call esi
	lea edx,[esp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	xor ebx,ebx
	add esp,8
	cmp eax,ebx
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	lea eax,[esp+0x44]
	push eax
	mov dword ptr [esp+0xC4],ebx
	call esi
	lea ecx,[esp+0x44]
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
	push ebx
	push ebx
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x50]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push 0x997
	push ecx
	mov byte ptr [esp+0xDC],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xD4],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea edx,[esp+0x88]
	mov byte ptr [esp+0xD4],1
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC8],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x38],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block24

 Block22:
	cmp eax,0x80004002
	je Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0xC0],5
	cmp word ptr [esp+0x74],bx
	jne Block27

 Block25:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea ecx,[esp+0x74]
	push ecx
	call esi

 Block28:
	mov byte ptr [esp+0xC0],6
	cmp word ptr [esp+0x44],bx
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[esp+0x44]
	push eax
	call esi

 Block32:
	mov byte ptr [esp+0xC0],7
	cmp word ptr [esp+0x54],bx
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
	jmp Block36

 Block35:
	lea edx,[esp+0x54]
	push edx
	call esi

 Block36:
	mov eax,3
	mov word ptr [esp+0x64],ax
	mov dword ptr [esp+0x6C],0
	mov ecx,dword ptr [edi+0x17CC]
	mov byte ptr [esp+0xC0],bl
	test ecx,ecx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[esp+0x64]
	push edx
	lea eax,[esp+0x3C]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov byte ptr [esp+0xC0],0xA
	cmp word ptr [esp+0x64],bx
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x64]
	push edx
	call esi

 Block42:
	mov esi,dword ptr [edi+0x17CC]
	test esi,esi
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xC0]
	lea ecx,[esp+0x2C]
	push ecx
	push esi
	mov dword ptr [esp+0x34],0
	call edx
	test eax,eax
	jge Block46

 Block45:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block46:
	mov esi,dword ptr [edi+0x17CC]
	mov ebx,dword ptr [esp+0x2C]
	test esi,esi
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xB8]
	lea ecx,[esp+0x30]
	push ecx
	push esi
	mov dword ptr [esp+0x38],0
	call edx
	test eax,eax
	jge Block50

 Block49:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block50:
	mov esi,dword ptr [esp+0x38]
	test esi,esi
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	mov ecx,dword ptr [esp+0x30]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x8C]
	push 0xFFFFFF
	push ebx
	push ecx
	push 0
	push 0
	push esi
	call edx
	test eax,eax
	jge Block54

 Block53:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block54:
	mov dword ptr [esp+0x28],0
	fld qword ptr [esp+0x3C]
	sub esp,8
	lea ecx,[edi+0x16F8]
	fstp qword ptr [esp]
	mov byte ptr [esp+0xC8],0xB
	call CUIStatusBar::CGauge::SetVal
	fld qword ptr [edi+0x1758]
	mov eax,dword ptr [ebp+0x18]
	sub esp,8
	fstp qword ptr [esp]
	push eax
	lea ecx,[esp+0x34]
	push offset _S_D02F
	push ecx
	call ZXString<char>::Format
	mov edx,dword ptr [esp+0x3C]
	add esp,0x14
	push 1
	push edx
	push 0x14
	push 0x14C
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x50],esp
	push esi
	call ecx
	lea ebx,[edi+0x1710]
	mov ecx,ebx
	call CBitmapStrNumber::Draw
	fild dword ptr [ebp+8]
	sub esp,8
	lea ecx,[edi+0x16C8]
	fmul qword ptr [__real_4059000000000000]
	fidiv dword ptr [ebp+0xC]
	fstp qword ptr [esp]
	call CUIStatusBar::CGauge::SetVal
	mov edx,dword ptr [ebp+0xC]
	mov eax,dword ptr [ebp+8]
	push edx
	push eax
	lea ecx,[esp+0x30]
	push offset _S_DD__2
	push ecx
	call ZXString<char>::Format
	mov edx,dword ptr [esp+0x38]
	add esp,0x10
	push 1
	push edx
	push 4
	push 0xA3
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x50],esp
	push esi
	call ecx
	mov ecx,ebx
	call CBitmapStrNumber::Draw
	fild dword ptr [ebp+0x10]
	sub esp,8
	lea ecx,[edi+0x16E0]
	fmul qword ptr [__real_4059000000000000]
	fidiv dword ptr [ebp+0x14]
	fstp qword ptr [esp]
	call CUIStatusBar::CGauge::SetVal
	mov edx,dword ptr [ebp+0x14]
	mov eax,dword ptr [ebp+0x10]
	push edx
	push eax
	lea ecx,[esp+0x30]
	push offset _S_DD__2
	push ecx
	call ZXString<char>::Format
	add esp,0x10
	mov edi,dword ptr [esp+0x28]
	push 1
	push edi
	push 4
	push 0x14C
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x50],esp
	push esi
	call eax
	mov ecx,ebx
	call CBitmapStrNumber::Draw
	mov byte ptr [esp+0xC0],0xA
	test edi,edi
	je Block56

 Block55:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block56:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0xC4],7
	call edx
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0xC0],0xFFFFFFFF
	test eax,eax
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block58:
	mov ecx,dword ptr [esp+0xB8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x1C
}
}
// CUIStatusBar::ChangeGroupWhisperTarget
_SUB_EXCEPTION_HANDLER(47F120)
__SUB_CLASS_THIS0(0047F120, __thiscall, 37842,  CUIStatusBar, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_47F120
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
	mov ebp,ecx
	mov dword ptr [esp+0x18],ebp
	push 0xF8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	xor ebx,ebx
	mov dword ptr [esp+0x44],ebx
	cmp eax,ebx
	je Block10

 Block1:
	mov ecx,eax
	call CUtilDlg::_ctor_default
	cmp eax,ebx
	je Block10

 Block2:
	lea esi,[eax+8]
	cmp esi,ebx
	je Block10

 Block3:
	add esi,0xFFFFFFF8
	mov dword ptr [esp+0x24],esi
	cmp esi,ebx
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	push ebx
	mov dword ptr [esi+0x90],ebx
	mov edi,1
	push ebx
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xA0],ebx
	push ebx
	mov dword ptr [esi+0x94],edi
	push 0x3E9
	mov ecx,esi
	mov dword ptr [esp+0x54],edi
	mov dword ptr [esi+0x98],0x1969
	call CUtilDlg::SetUtilDlg_0
	push ebx
	push edi
	push ebx
	push ebx
	mov ecx,esi
	call CDialog::CreateDlg_1
	mov dword ptr [esp+0x14],ebx
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov byte ptr [esp+0x48],2
	call CWvsContext::GetFriendGroups
	int 3// TODO: 	mov dword ptr [esp+0x28],offset ZList<ZXString<char>>::`vftable'
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x38],ebx
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x44],3
	xor edi,edi
	call ZArray<ZXString<char>>::GetCount
	test eax,eax
	jbe Block8

 Block6:
	mov edx,dword ptr [esp+0x14]
	lea ecx,[esp+0x28]
	lea ebp,[edx+edi*4]
	call ZList<ZXString<char>>::AddTail_
	push ebp
	mov ecx,eax
	call ZXString<char>::op_assign
	lea ecx,[esp+0x14]
	inc edi
	call ZArray<ZXString<char>>::GetCount
	cmp edi,eax
	jb Block6

 Block7:
	mov ebp,dword ptr [esp+0x18]

 Block8:
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call CUtilDlg::SetUtilDlg_COMBOBOX
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,6
	je Block11

 Block9:
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x44],2
	int 3// TODO: 	mov dword ptr [esp+0x28],offset ZList<ZXString<char>>::`vftable'
	call ZList<ZXString<char>>::RemoveAll
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x44],1
	call ZArray<ZXString<char>>::RemoveAll
	push ebx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call ZRef<CUtilDlg>::_ReleaseRaw
	xor eax,eax
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret

 Block10:
	xor esi,esi
	mov dword ptr [esp+0x24],esi
	jmp Block5

 Block11:
	push ebx
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x24],esp
	push ebx
	push offset _S_
	push ebx
	push ebx
	mov ecx,edi
	mov dword ptr [edi],ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	mov ecx,ebp
	call CUIStatusBar::SetWhisperTarget
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	call CUtilDlg::GetComboBoxStr
	lea esi,[ebp+0x1760]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x48],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x44],3
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov esi,dword ptr [esi]
	cmp esi,ebx
	je Block16

 Block14:
	cmp byte ptr [esi],bl
	je Block16

 Block15:
	mov dword ptr [ebp+0x1610],1

 Block16:
	push ebx
	mov ecx,ebp
	call CUIStatusBar::StartChat
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x44],2
	int 3// TODO: 	mov dword ptr [esp+0x28],offset ZList<ZXString<char>>::`vftable'
	call ZList<ZXString<char>>::RemoveAll
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x44],1
	call ZArray<ZXString<char>>::RemoveAll
	push ebx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call ZRef<CUtilDlg>::_ReleaseRaw
	mov eax,1
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret
}
}
// CUIStatusBar::SetStatusValue
_SUB_EXCEPTION_HANDLER(473590)
__SUB_CLASS_THIS(00473590, __thiscall, 37853,  CUIStatusBar, void, long, long, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_473590
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
	mov ebx,ecx
	mov dword ptr [esp+0x1C],ebx
	lea eax,[esp+0x18]
	xor edi,edi
	push eax
	mov dword ptr [esp+0x54],edi
	call CWnd::GetCanvas
	mov esi,dword ptr [esp+0x18]
	mov byte ptr [esp+0x50],1
	cmp esi,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push 0x242
	push 0x320
	push edi
	push edi
	push esi
	call edx
	cmp eax,edi
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov dword ptr [esp+0x20],edi
	mov dword ptr [esp+0x14],edi
	mov dword ptr [esp+0x24],edi
	mov edi,dword ptr [esp+0x58]
	cmp edi,0x63
	mov byte ptr [esp+0x50],4
	jle Block6

 Block5:
	mov ebp,0xC
	jmp Block7

 Block6:
	xor eax,eax
	cmp edi,9
	setle al
	dec eax
	and eax,6
	mov ebp,eax

 Block7:
	mov eax,dword ptr [ebx+0x16A0]
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x60],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block9:
	push edi
	push 0x228
	mov eax,0x2D
	sub eax,ebp
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x70],esp
	push esi
	call edx
	call draw_number_by_image
	mov eax,dword ptr [esp+0x74]
	push eax
	call get_job_name
	add esp,0x1C
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::AssignCStr
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push ecx
	call edi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	lea eax,[esp+0x28]
	mov bl,5
	push eax
	mov byte ptr [esp+0x54],bl
	call edi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0x38]
	push edx
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x2C]
	push eax
	mov eax,dword ptr [ecx+0x1624]
	push eax
	push ecx
	mov dword ptr [esp+0x68],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x64],6
	call _xbstr_t::_ctor_0
	push 0x225
	mov byte ptr [esp+0x64],7
	push 0x4B
	mov ecx,esi
	mov byte ptr [esp+0x68],6
	call IWzCanvas::DrawTextA
	mov ebp,8
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x28],bp
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [esp+0x50],4
	cmp word ptr [esp+0x38],bp
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea ecx,[esp+0x28]
	push ecx
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x54],8
	call edi
	lea ecx,[esp+0x38]
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
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x60]
	push 0x14
	push ecx
	mov byte ptr [esp+0x60],9
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x68]
	push eax
	push ecx
	mov dword ptr [esp+0x6C],esp
	mov ecx,esp
	mov bl,0xA
	push edx
	mov byte ptr [esp+0x64],bl
	call _xbstr_t::_ctor_0
	push 0x230
	mov byte ptr [esp+0x64],0xB
	push 0x4A
	mov ecx,esi
	mov byte ptr [esp+0x68],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x50],9
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block27:
	mov byte ptr [esp+0x50],8
	cmp word ptr [esp+0x38],bp
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov byte ptr [esp+0x50],4
	cmp word ptr [esp+0x28],bp
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block35:
	lea ecx,[esp+0x28]
	push ecx
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x54],0xC
	call edi
	lea ecx,[esp+0x38]
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
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x60]
	push 0x14
	push ecx
	mov byte ptr [esp+0x60],0xD
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x68]
	push eax
	push ecx
	mov dword ptr [esp+0x6C],esp
	mov ecx,esp
	mov bl,0xE
	push edx
	mov byte ptr [esp+0x64],bl
	call _xbstr_t::_ctor_0
	push 0x230
	mov byte ptr [esp+0x64],0xF
	push 0x4C
	mov ecx,esi
	mov byte ptr [esp+0x68],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x50],0xD
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	mov byte ptr [esp+0x50],0xC
	cmp word ptr [esp+0x38],bp
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov byte ptr [esp+0x50],4
	cmp word ptr [esp+0x28],bp
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block49:
	lea ecx,[esp+0x28]
	push ecx
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x54],0x10
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x60]
	push 0x14
	push ecx
	mov byte ptr [esp+0x60],0x11
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x68]
	push eax
	push ecx
	mov dword ptr [esp+0x6C],esp
	mov ecx,esp
	mov bl,0x12
	push edx
	mov byte ptr [esp+0x64],bl
	call _xbstr_t::_ctor_0
	push 0x232
	mov byte ptr [esp+0x64],0x13
	push 0x4A
	mov ecx,esi
	mov byte ptr [esp+0x68],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x50],0x11
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block55:
	mov byte ptr [esp+0x50],0x10
	cmp word ptr [esp+0x38],bp
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov byte ptr [esp+0x50],4
	cmp word ptr [esp+0x28],bp
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block63:
	lea ecx,[esp+0x28]
	push ecx
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x54],0x14
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x60]
	push 0x14
	mov bl,0x15
	push ecx
	mov byte ptr [esp+0x60],bl
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x68]
	push eax
	push ecx
	mov dword ptr [esp+0x6C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x64],0x16
	call _xbstr_t::_ctor_0
	push 0x232
	mov byte ptr [esp+0x64],0x17
	push 0x4C
	mov ecx,esi
	mov byte ptr [esp+0x68],0x16
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x50],bl
	test eax,eax
	je Block69

 Block68:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block69:
	mov byte ptr [esp+0x50],0x14
	cmp word ptr [esp+0x38],bp
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov byte ptr [esp+0x50],4
	cmp word ptr [esp+0x28],bp
	jne Block76

 Block74:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block77:
	lea ecx,[esp+0x28]
	push ecx
	call edi
	lea edx,[esp+0x28]
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
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x54],0x18
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x60]
	push 0x16
	push ecx
	mov byte ptr [esp+0x60],0x19
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x68]
	push eax
	push ecx
	mov dword ptr [esp+0x6C],esp
	mov ecx,esp
	mov bl,0x1A
	push edx
	mov byte ptr [esp+0x64],bl
	call _xbstr_t::_ctor_0
	push 0x231
	mov byte ptr [esp+0x64],0x1B
	push 0x4B
	mov ecx,esi
	mov byte ptr [esp+0x68],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x50],0x19
	test eax,eax
	je Block83

 Block82:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block83:
	mov byte ptr [esp+0x50],0x18
	cmp word ptr [esp+0x38],bp
	jne Block86

 Block84:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov byte ptr [esp+0x50],4
	cmp word ptr [esp+0x28],bp
	jne Block90

 Block88:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block91:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x50],2
	test eax,eax
	je Block93

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block93:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0x54],0
	call edx
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test eax,eax
	je Block95

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block95:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 0xC
}
}
// CUIStatusBar::StartChat
__SUB_CLASS_THIS(0047A4B0, __thiscall, 37829,  CUIStatusBar, void, const char*) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x1804]
	cmp eax,1
	je Block3

 Block1:
	cmp dword ptr [esi+0x1574],0
	je Block8

 Block2:
	cmp eax,1
	jne Block4

 Block3:
	push 2
	call CUIStatusBar::SetChatType

 Block4:
	mov eax,dword ptr [esi+0x1574]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov eax,dword ptr [esi+0x1574]
	test eax,eax
	je Block6

 Block5:
	add eax,4
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov ecx,dword ptr [esp+8]
	push ecx
	mov ecx,dword ptr [esi+0x1574]
	call CCtrlEdit::SetText

 Block8:
	pop esi
	ret 4
}
}
// CUIStatusBar::AddWhisperCandidate
_SUB_EXCEPTION_HANDLER(479A50)
__SUB_CLASS_THIS(00479A50, __thiscall, 37841,  CUIStatusBar, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_479A50
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
	mov edi,ecx
	mov eax,dword ptr [edi+0x16C0]
	xor ebx,ebx
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block9

 Block1:
	lea esp,[esp]

 Block2:
	mov esi,eax
	lea eax,[esp+0x14]
	push eax
	call ZList<ZXString<char>>::GetNext
	add esp,4
	push eax
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x14],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x28]
	push ecx
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x24],1
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block7

 Block3:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	jne Block2

 Block6:
	jmp Block9

 Block7:
	push esi
	lea ecx,[edi+0x16B4]
	call ZList<ZXString<char>>::RemoveAt
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	lea esi,[edi+0x16B4]
	mov ecx,esi
	call ZList<ZXString<char>>::AddHead_
	lea edx,[esp+0x28]
	push edx
	mov ecx,eax
	call ZXString<char>::op_assign
	cmp dword ptr [edi+0x16BC],0xA
	jbe Block11

 Block10:
	mov eax,dword ptr [esi+0x10]
	push eax
	mov ecx,esi
	call ZList<ZXString<char>>::RemoveAt

 Block11:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4
}
}
// CUIStatusBar::SendGroupMessage
_SUB_EXCEPTION_HANDLER(47F7F0)
__SUB_CLASS_THIS(0047F7F0, __thiscall, 37857,  CUIStatusBar, void, const long, const ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_47F7F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x4C],ebx
	cmp eax,5
	ja Block23

 Block1:
	cmp EAX, 0
je Block9
cmp EAX, 1
je Block13
cmp EAX, 2
je Block2
cmp EAX, 3
je Block6
cmp EAX, 4
je Block16
cmp EAX, 5
je Block20


 Block2:
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call CWvsContext::GetOnlinePartyMemberID
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block4

 Block3:
	mov eax,dword ptr [eax-4]
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	jne Block5

 Block4:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x60],esp
	mov dword ptr [eax+4],ebx
	lea ecx,[esp+0x24]
	push 0xA0
	push ecx
	mov byte ptr [esp+0x5C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x54],2
	push ebx
	push 0xFFFFFFFF
	push 0xC
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x64],3
	call CUIStatusBar::ChatLogAdd
	jmp Block48

 Block5:
	mov dword ptr [esp+0x54],1
	mov ebp,2
	jmp Block24

 Block6:
	lea edx,[esp+0x14]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x58],6
	mov ebp,0x1A
	call CWvsContext::GetOnlineExpeditionMemberID
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block8

 Block7:
	mov eax,dword ptr [eax-4]
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	jne Block24

 Block8:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x60],esp
	mov dword ptr [eax+4],ebx
	lea eax,[esp+0x28]
	push 0x18A4
	push eax
	mov byte ptr [esp+0x5C],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x54],5
	push ebx
	push 0xFFFFFFFF
	push 0xC
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x64],6
	call CUIStatusBar::ChatLogAdd
	mov eax,dword ptr [esp+0x20]
	jmp Block49

 Block9:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	call CWvsContext::GetOnlineFriendID
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block11

 Block10:
	mov eax,dword ptr [eax-4]
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	jne Block12

 Block11:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x60],esp
	mov dword ptr [eax+4],ebx
	lea edx,[esp+0x2C]
	push 0xA2
	push edx
	mov byte ptr [esp+0x5C],7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x54],8
	push ebx
	push 0xFFFFFFFF
	push 0xC
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x64],9
	call CUIStatusBar::ChatLogAdd
	mov eax,dword ptr [esp+0x24]
	jmp Block49

 Block12:
	mov dword ptr [esp+0x54],ebx
	mov ebp,3
	jmp Block24

 Block13:
	lea eax,[esp+0x14]
	push eax
	push ecx
	mov ecx,esp
	lea edx,[edi+0x1760]
	mov dword ptr [esp+0x5C],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,esi
	call CWvsContext::GetOnlineFriendIDByGroup
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block15

 Block14:
	mov eax,dword ptr [eax-4]
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	jne Block12

 Block15:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x60],esp
	mov dword ptr [eax+4],ebx
	lea eax,[esp+0x30]
	push 0xA2
	push eax
	mov byte ptr [esp+0x5C],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x54],0xB
	push ebx
	push 0xFFFFFFFF
	push 0xC
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x64],0xC
	call CUIStatusBar::ChatLogAdd
	mov eax,dword ptr [esp+0x28]
	jmp Block49

 Block16:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	call CWvsContext::GetOnlineGuildMemberID
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block18

 Block17:
	mov eax,dword ptr [eax-4]
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	jne Block19

 Block18:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x60],esp
	mov dword ptr [eax+4],ebx
	lea edx,[esp+0x34]
	push 0xA3
	push edx
	mov byte ptr [esp+0x5C],0xD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x54],0xE
	push ebx
	push 0xFFFFFFFF
	push 0xC
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x64],0xF
	call CUIStatusBar::ChatLogAdd
	mov eax,dword ptr [esp+0x2C]
	jmp Block49

 Block19:
	mov dword ptr [esp+0x54],2
	mov ebp,4
	jmp Block24

 Block20:
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x58],3
	mov ebp,5
	call CWvsContext::GetOnlineAllianceMemberID
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block22

 Block21:
	mov eax,dword ptr [eax-4]
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	jne Block24

 Block22:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x60],esp
	mov dword ptr [eax+4],ebx
	lea ecx,[esp+0x38]
	push 0x18A3
	push ecx
	mov byte ptr [esp+0x5C],0x10
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x54],0x11
	push ebx
	push 0xFFFFFFFF
	push 0xC
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x64],0x12
	call CUIStatusBar::ChatLogAdd
	mov eax,dword ptr [esp+0x30]
	jmp Block49

 Block23:
	mov ebp,dword ptr [esp+0x58]

 Block24:
	mov dword ptr [esp+0x1C],ebx
	lea edx,[esp+0x30]
	push 0x72D
	push edx
	mov byte ptr [esp+0x54],0x13
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,dword ptr [esi+0x20CC]
	mov byte ptr [esp+0x4C],0x14
	cmp esi,ebx
	je Block26

 Block25:
	lea ecx,[esi+4]
	jmp Block27

 Block26:
	xor ecx,ecx

 Block27:
	mov edx,dword ptr [esp+0x58]
	mov edx,dword ptr [edx]
	mov eax,dword ptr [eax]
	push edx
	push ecx
	push eax
	lea eax,[esp+0x28]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x40]
	add esp,0x10
	mov byte ptr [esp+0x4C],0x13
	cmp eax,ebx
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebx
	je Block31

 Block30:
	mov edx,dword ptr [esp+0x1C]
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push ebx
	movzx ecx,bp
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [eax+4],ebx
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push edx
	call CUIStatusBar::ChatLogAdd

 Block31:
	mov edi,dword ptr [edi+0x195C]
	cmp edi,ebx
	je Block35

 Block32:
	mov eax,1
	mov ecx,ebp
	shl eax,cl
	test edi,eax
	jne Block35

 Block33:
	lea ecx,[esp+0x30]
	push 0x192D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov byte ptr [esp+0x54],0x15
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x38]
	add esp,8
	mov byte ptr [esp+0x4C],0x13
	cmp eax,ebx
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	push 0x8C
	lea ecx,[esp+0x38]
	call COutPacket::_ctor_1
	mov byte ptr [esp+0x4C],0x16
	call get_update_time
	push eax
	lea ecx,[esp+0x38]
	call COutPacket::Encode4
	mov edx,dword ptr [esp+0x54]
	push edx
	lea ecx,[esp+0x38]
	call COutPacket::Encode1
	mov ebp,dword ptr [esp+0x18]
	push ebp
	lea ecx,[esp+0x38]
	call COutPacket::Encode1
	xor esi,esi
	cmp ebp,ebx
	jle Block47

 Block36:
	lea ebx,[ebx]

 Block37:
	mov eax,dword ptr [esp+0x14]
	mov edi,dword ptr [eax+esi*4]
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebx
	jne Block39

 Block38:
	xor edx,edx
	jmp Block40

 Block39:
	mov edx,dword ptr [eax-4]

 Block40:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,4
	cmp ecx,edx
	jbe Block46

 Block41:
	cmp eax,ebx
	jne Block43

 Block42:
	xor eax,eax
	jmp Block44

 Block43:
	mov eax,dword ptr [eax-4]
	lea esp,[esp]

 Block44:
	add eax,eax
	cmp ecx,eax
	ja Block44

 Block45:
	lea ecx,[esp+0x58]
	push ecx
	push ebx
	push eax
	lea ecx,[esp+0x44]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x38]

 Block46:
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+edx],edi
	add dword ptr [esp+0x3C],4
	inc esi
	cmp esi,ebp
	jl Block37

 Block47:
	mov eax,dword ptr [esp+0x58]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x38]
	call COutPacket::EncodeStr
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x4C],0x13
	call ZArray<unsigned char>::RemoveAll

 Block48:
	mov eax,dword ptr [esp+0x1C]

 Block49:
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call ZArray<unsigned long>::RemoveAll
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 8
}
}
// CUIStatusBar::HitTest
__SUB_CLASS_THIS(0046D500, __thiscall, 37825,  CUIStatusBar, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,ecx
	push edi
	test esi,esi
	je Block2

 Block1:
	lea ecx,[esi+4]
	jmp Block3

 Block2:
	xor ecx,ecx

 Block3:
	mov eax,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	cmp dword ptr [eax+0x88],0
	je Block5

 Block4:
	mov eax,dword ptr [eax+0x90]
	mov eax,dword ptr [eax]
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	mov ebx,dword ptr [esp+0x18]
	mov edi,dword ptr [esp+0x14]
	sub eax,ecx
	neg eax
	sbb eax,eax
	and eax,dword ptr [esp+0x1C]
	mov ecx,esi
	push eax
	push ebx
	push edi
	call CWnd::HitTest
	mov ebp,eax
	cmp ebp,2
	jne Block31

 Block7:
	mov eax,dword ptr [esi+0x157C]
	mov ecx,0x1FA
	test eax,eax
	je Block10

 Block8:
	cmp dword ptr [eax+0x4C],0
	je Block10

 Block9:
	mov ecx,dword ptr [eax+0x3C]
	neg ecx
	shl ecx,4

 Block10:
	mov edx,dword ptr [esi+0x1800]
	mov eax,0x1E9
	sub eax,edx
	cmp ecx,eax
	jge Block12

 Block11:
	mov eax,ecx

 Block12:
	cmp edi,0x241
	jge Block15

 Block13:
	cmp dword ptr [esi+0x1804],1
	jne Block15

 Block14:
	cmp ebx,0x1FA
	jl Block30

 Block15:
	cmp edi,0x114
	jge Block18

 Block16:
	cmp ebx,eax
	jge Block18

 Block17:
	cmp dword ptr [esi+0x1618],0
	je Block30

 Block18:
	lea ecx,[edi-0x115]
	cmp ecx,0x12B
	ja Block21

 Block19:
	mov eax,0x1FA
	sub eax,edx
	cmp ebx,eax
	jge Block21

 Block20:
	cmp dword ptr [esi+0x1618],0
	je Block30

 Block21:
	mov edx,dword ptr [esi+0x182C]
	cmp edi,edx
	jle Block27

 Block22:
	lea ecx,[esi+0x1824]
	call CUIStatusBar::CQuickSlot::IsEnabled
	test eax,eax
	je Block24

 Block23:
	cmp ebx,0x1B7
	jl Block30

 Block24:
	cmp edi,edx
	jle Block27

 Block25:
	lea ecx,[esi+0x1824]
	call CUIStatusBar::CQuickSlot::IsEnabled
	test eax,eax
	jne Block27

 Block26:
	cmp ebx,0x1FA
	jl Block30

 Block27:
	cmp edi,0x241
	jle Block31

 Block28:
	cmp edi,edx
	jge Block31

 Block29:
	cmp ebx,0x1FA
	jge Block31

 Block30:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret 0xC

 Block31:
	pop edi
	pop esi
	mov eax,ebp
	pop ebp
	pop ebx
	ret 0xC
}
}
// CUIStatusBar::IsKindOf
__SUB_CLASS_THIS(00472020, __thiscall, 37870,  CUIStatusBar, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIStatusBar::ms_RTTI_CUIStatusBar
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
// CUIStatusBar::CQuickSlot::IsEnabled
__SUB_CLASS_THIS0(0046D2F0, __thiscall, 37960,  CUIStatusBar::CQuickSlot, int32_t) {
__asm {

 Block0:
	cmp dword ptr [ecx+4],0
	jne Block3

 Block1:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp byte ptr [eax+0x41C4],0
	jne Block3

 Block2:
	xor eax,eax
	ret

 Block3:
	mov eax,1
	ret
}
}
// CUIStatusBar::SetProblem
__SUB_CLASS_THIS(0046D4B0, __thiscall, 37829,  CUIStatusBar, void, const char*) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	test edi,edi
	je Block2

 Block1:
	push 0x1388
	push 0
	push 0
	call CUIStatusBar::SetItemMsg
	push 0xC00616FD
	push 0xA0
	push 0
	push edi
	lea ecx,[esi+0x179C]
	call CFloatNotice::CreateFloatNotice
	pop edi
	pop esi
	ret 4

 Block2:
	lea ecx,[esi+0x179C]
	call CFloatNotice::DeleteFloatNotice
	pop edi
	pop esi
	ret 4
}
}
// CUIStatusBar::CChatLog::_ZtlSecureGet_m_nType
__SUB_CLASS0(0046CD10, __fastcall, 37888,  CUIStatusBar::CChatLog, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x18]
	push eax
	add ecx,0x10
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CUIStatusBar::TryBeginDragFuncKeyMappedIcon
__SUB_CLASS_THIS(00476C60, __thiscall, 37855,  CUIStatusBar, void, long, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea ecx,[esi+0x1824]
	call CUIStatusBar::CQuickSlot::IsEnabled
	test eax,eax
	je Block4

 Block1:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push edi
	mov edi,dword ptr [esp+0x14]
	push edi
	push ebx
	mov ecx,esi
	call CUIStatusBar::GetShortCutIndexByPos
	cmp eax,0xFFFFFFFF
	je Block3

 Block2:
	mov edx,dword ptr [TSingleton<CQuickslotKeyMappedMan>::ms_pInstance]
	mov eax,dword ptr [edx+eax*4+4]
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	push eax
	call CFuncKeyMappedMan::FuncKeyMapped
	push eax
	push edi
	push ebx
	mov ecx,esi
	call CUIStatusBar::DrawDragFuncKeyMappedIcon

 Block3:
	pop edi
	pop ebx

 Block4:
	pop esi
	ret 8
}
}
// CUIStatusBar::CUIStatusBar
_SUB_EXCEPTION_HANDLER(4767C0)
__SUB_CLASS_THIS0(004767C0, __thiscall, 37814,  CUIStatusBar, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4767C0
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
	mov dword ptr [esp+0x14],esi
	call CWnd::_ctor_default
	xor edi,edi
	lea ecx,[esi+0x80]
	mov dword ptr [esp+0x54],edi
	cmp ecx,edi
	je Block2

 Block1:
	lea eax,[ecx-0x80]
	mov dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],edi

 Block3:
	mov byte ptr [esp+0x54],1
	int 3// TODO: 	mov dword ptr [esi],offset CUIStatusBar::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIStatusBar::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIStatusBar::`vftable'{for `ZRefCounted'}
	call CUIToolTip::_ctor_default
	lea ecx,[esi+0xAC8]
	mov byte ptr [esp+0x54],2
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0x151C],edi
	mov dword ptr [esi+0x1524],edi
	mov dword ptr [esi+0x152C],edi
	mov dword ptr [esi+0x1534],edi
	mov dword ptr [esi+0x153C],edi
	mov dword ptr [esi+0x1544],edi
	mov dword ptr [esi+0x154C],edi
	mov dword ptr [esi+0x1554],edi
	mov dword ptr [esi+0x155C],edi
	mov dword ptr [esi+0x1564],edi
	mov dword ptr [esi+0x156C],edi
	mov dword ptr [esi+0x1574],edi
	mov dword ptr [esi+0x157C],edi
	lea ecx,[esi+0x1580]
	mov byte ptr [esp+0x54],0x10
	call CCtrlComboBox::CREATEPARAM::_ctor_default
	lea ecx,[esi+0x15D4]
	mov byte ptr [esp+0x54],0x11
	call CCtrlEdit::CREATEPARAM::_ctor_default
	mov dword ptr [esi+0x1610],8
	mov dword ptr [esi+0x1614],0xFFFFFFFF
	mov dword ptr [esi+0x1618],edi
	mov dword ptr [esi+0x161C],edi
	mov dword ptr [esi+0x1620],edi
	mov dword ptr [esi+0x1624],edi
	mov dword ptr [esi+0x1628],edi
	mov dword ptr [esi+0x162C],edi
	push offset _x_com_ptr<IWzFont>::~_x_com_ptr<IWzFont>
	push offset _x_com_ptr<IWzFont>::_ctor_default
	push 0x1B
	push 4
	lea ecx,[esi+0x1630]
	push ecx
	mov byte ptr [esp+0x68],0x17
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x169C],edi
	mov dword ptr [esi+0x16A0],edi
	mov dword ptr [esi+0x16A4],edi
	mov dword ptr [esi+0x16B0],edi
	int 3// TODO: 	mov dword ptr [esi+0x16B4],offset ZList<ZXString<char>>::`vftable'
	mov dword ptr [esi+0x16BC],edi
	mov dword ptr [esi+0x16C0],edi
	mov dword ptr [esi+0x16C4],edi
	mov dword ptr [esi+0x16C8],edi
	mov dword ptr [esi+0x16CC],edi
	mov dword ptr [esi+0x16D0],edi
	mov dword ptr [esi+0x16E0],edi
	mov dword ptr [esi+0x16E4],edi
	mov dword ptr [esi+0x16E8],edi
	mov dword ptr [esi+0x16F8],edi
	mov dword ptr [esi+0x16FC],edi
	mov dword ptr [esi+0x1700],edi
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x58],0x20
	call ebp
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x58],0x21
	call ebp
	lea edx,[esp+0x1C]
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
	push offset _S___23
	push edi
	push edi
	push edi
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,0x22
	push offset _S_UISTATUSBAR2IMGM__9
	mov byte ptr [esp+0x74],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x70],0x23
	cmp dword ptr [_D_G_RM],edi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea edx,[esp+0x58]
	mov byte ptr [esp+0x70],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x64],0x24
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push eax
	mov dword ptr [ecx],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block12

 Block10:
	cmp eax,0x80004002
	je Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	lea ecx,[esi+0x1710]
	call CBitmapStrNumber::_ctor_0
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	mov byte ptr [esp+0x54],0x26
	cmp word ptr [esp+0x3C],bp
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
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
	mov byte ptr [esp+0x54],0x27
	cmp word ptr [esp+0x1C],bp
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,edi
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[esp+0x1C]
	push eax
	call ebx

 Block20:
	mov byte ptr [esp+0x54],0x28
	cmp word ptr [esp+0x2C],bp
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,edi
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[esp+0x2C]
	push edx
	call ebx

 Block24:
	mov dword ptr [esi+0x1760],edi
	lea ecx,[esi+0x1764]
	mov byte ptr [esp+0x54],0x29
	call CChatHelper::_ctor_default
	lea ecx,[esi+0x1790]
	mov byte ptr [esp+0x54],0x2A
	call CFloatNotice::_ctor_default
	lea ecx,[esi+0x179C]
	mov byte ptr [esp+0x54],0x2B
	call CFloatNotice::_ctor_default
	lea ecx,[esi+0x17A8]
	mov byte ptr [esp+0x54],0x2C
	call CFloatNotice::_ctor_default
	mov dword ptr [esi+0x17BC],edi
	mov dword ptr [esi+0x17C0],edi
	mov dword ptr [esi+0x17C4],edi
	mov dword ptr [esi+0x17C8],edi
	mov dword ptr [esi+0x17CC],edi
	mov dword ptr [esi+0x17D0],edi
	mov dword ptr [esi+0x17D4],edi
	mov dword ptr [esi+0x17D8],edi
	mov dword ptr [esi+0x17DC],edi
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push offset _x_com_ptr<IWzGr2DLayer>::_ctor_default
	push 4
	push 4
	lea eax,[esi+0x17E0]
	push eax
	mov byte ptr [esp+0x68],0x36
	call __eh_vector_ctor_iterator
	or eax,0xFFFFFFFF
	mov byte ptr [esp+0x54],0x37
	mov dword ptr [esi+0x1804],edi
	mov dword ptr [esi+0x1818],eax
	mov dword ptr [esi+0x181C],eax
	call dword ptr [ZImports::_timeGetTime]
	lea ecx,[esi+0x1824]
	mov dword ptr [esi+0x1820],eax
	call CUIStatusBar::CQuickSlot::_ctor_default
	mov dword ptr [esi+0x1918],edi
	mov dword ptr [esi+0x191C],edi
	mov dword ptr [esi+0x1920],edi
	mov dword ptr [esi+0x1924],edi
	mov dword ptr [esi+0x1928],edi
	push offset ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	push offset ZRef<CCtrlOriginButton>::_ctor_default
	push 6
	push ebp
	lea ecx,[esi+0x192C]
	push ecx
	mov byte ptr [esp+0x68],0x39
	call __eh_vector_ctor_iterator
	push 6
	push 1
	push edi
	push 1
	push 0xC00615D0
	push 0x242
	push 0x400
	mov byte ptr [esp+0x70],0x3A
	mov dword ptr [esi+0x195C],edi
	mov dword ptr [esi+0x150C],1
	push 0xFFFFFDBE
	push edi
	mov ecx,esi
	call CWnd::CreateWnd
	mov eax,esi
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
// CUIStatusBar::CChatLog::IsFiltered
__SUB_CLASS_THIS(0046CD30, __thiscall, 37890,  CUIStatusBar::CChatLog, int32_t, unsigned long) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov esi,ecx
	test ebx,ebx
	je Block5

 Block1:
	mov eax,dword ptr [esi+0x18]
	push eax
	lea edi,[esi+0x10]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xC
	jl Block3

 Block2:
	mov ecx,dword ptr [esi+0x18]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x18
	jle Block5

 Block3:
	mov edx,dword ptr [esi+0x18]
	push edx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov edx,1
	mov ecx,eax
	shl edx,cl
	add esp,8
	test ebx,edx
	jne Block5

 Block4:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 4

 Block5:
	pop edi
	pop esi
	mov eax,1
	pop ebx
	ret 4
}
}
// CUIStatusBar::SetChatType
_SUB_EXCEPTION_HANDLER(479C00)
__SUB_CLASS_THIS(00479C00, __thiscall, 37839,  CUIStatusBar, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_479C00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x68]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x78]
	cmp eax,dword ptr [esi+0x1804]
	je Block126

 Block1:
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	mov edi,1
	mov dword ptr [esi+0x1804],eax
	mov dword ptr [ecx+0x58],eax
	sub eax,edi
	lea ebx,[edi-1]
	lea ebp,[edi-2]
	je Block21

 Block2:
	sub eax,edi
	je Block15

 Block3:
	sub eax,edi
	jne Block28

 Block4:
	mov ecx,dword ptr [ecx+0x60]
	lea eax,[ecx-0x1A]
	cmp eax,0x1CF
	ja Block6

 Block5:
	mov dword ptr [esi+0x1800],ecx
	jmp Block7

 Block6:
	mov dword ptr [esi+0x1800],0x46

 Block7:
	mov ecx,dword ptr [esi+0x1800]
	mov eax,ecx
	cdq
	mov ebp,0xD
	idiv ebp
	mov dword ptr [esi+0x1808],eax
	cmp edx,ebx
	jne Block9

 Block8:
	add ecx,2
	mov dword ptr [esi+0x1800],ecx

 Block9:
	mov ecx,0x203
	sub ecx,dword ptr [esi+0x1800]
	push edi
	mov dword ptr [esi+0x1810],ecx
	mov ecx,esi
	call CUIStatusBar::MakeCtrlEdit
	mov ecx,dword ptr [esi+0x156C]
	cmp ecx,ebx
	je Block11

 Block10:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax

 Block11:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x78],eax
	mov dword ptr [esp+0x70],2
	cmp eax,ebx
	je Block13

 Block12:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block14

 Block13:
	xor eax,eax

 Block14:
	push eax
	lea ecx,[esi+0x1568]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	call ZRef<CCtrlScrollBar>::op_assign_ptr
	mov eax,dword ptr [esi+0x1800]
	mov ecx,dword ptr [esi+0x156C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	push ebx
	lea ebp,[eax-2]
	push ebp
	mov ebp,0x204
	sub ebp,eax
	push ebp
	mov eax,0x235
	sub eax,dword ptr [esi+0x16A8]
	push eax
	push 8
	push edi
	push 0x3F2
	push esi
	call edx
	mov ecx,dword ptr [esi+0x156C]
	mov eax,0x241
	sub eax,dword ptr [esi+0x16A8]
	mov dword ptr [ecx+0x34],eax
	jmp Block28

 Block15:
	push edi
	mov ecx,esi
	mov dword ptr [esi+0x1800],0x18
	mov dword ptr [esi+0x1808],edi
	mov dword ptr [esi+0x1810],0x1EC
	call CUIStatusBar::MakeCtrlEdit
	mov ecx,dword ptr [esi+0x156C]
	cmp ecx,ebx
	je Block17

 Block16:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx

 Block17:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x78],eax
	mov dword ptr [esp+0x70],edi
	cmp eax,ebx
	je Block19

 Block18:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block20

 Block19:
	xor eax,eax

 Block20:
	push eax
	lea ecx,[esi+0x1568]
	mov dword ptr [esp+0x74],ebp
	call ZRef<CCtrlScrollBar>::op_assign_ptr
	mov eax,dword ptr [esi+0x1800]
	mov ecx,dword ptr [esi+0x156C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	push ebx
	lea ebp,[eax+1]
	push ebp
	mov ebp,0x203
	sub ebp,eax
	push ebp
	mov eax,0x235
	sub eax,dword ptr [esi+0x16A8]
	push eax
	push 8
	push edi
	push 0x3F2
	push esi
	call edx
	jmp Block27

 Block21:
	push ebx
	mov ecx,esi
	mov dword ptr [esi+0x1800],0x18
	mov dword ptr [esi+0x1808],edi
	mov dword ptr [esi+0x1810],0x206
	call CUIStatusBar::MakeCtrlEdit
	mov ecx,dword ptr [esi+0x156C]
	cmp ecx,ebx
	je Block23

 Block22:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx

 Block23:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x78],eax
	mov dword ptr [esp+0x70],ebx
	cmp eax,ebx
	je Block25

 Block24:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block26

 Block25:
	xor eax,eax

 Block26:
	push eax
	lea ecx,[esi+0x1568]
	mov dword ptr [esp+0x74],ebp
	call ZRef<CCtrlScrollBar>::op_assign_ptr
	mov edx,dword ptr [esi+0x1800]
	mov ecx,dword ptr [esi+0x156C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	push ebx
	add edx,edi
	push edx
	push 0x205
	mov edx,0x203
	sub edx,dword ptr [esi+0x16A8]
	push edx
	push 8
	push edi
	push 0x3F2
	push esi
	call eax

 Block27:
	mov ecx,dword ptr [esi+0x156C]
	mov eax,0x241
	sub eax,dword ptr [esi+0x16A8]
	mov dword ptr [ecx+0x34],eax
	mov eax,dword ptr [esi+0x156C]
	mov dword ptr [eax+0x68],edi

 Block28:
	mov ecx,esi
	call CUIStatusBar::ToggleMaxMinButton
	mov eax,dword ptr [CUIStatusBar::m_aChatLog]
	cmp eax,ebx
	jne Block30

 Block29:
	xor eax,eax
	jmp Block31

 Block30:
	mov eax,dword ptr [eax-4]

 Block31:
	sub eax,dword ptr [esi+0x1808]
	mov ecx,dword ptr [esi+0x156C]
	add eax,edi
	mov edi,eax
	push edi
	call CCtrlScrollBar::SetScrollRange
	mov ecx,dword ptr [esi+0x156C]
	dec edi
	push edi
	call CCtrlScrollBar::SetCurPos
	mov eax,dword ptr [esi+0x1804]
	cmp eax,3
	je Block35

 Block32:
	cmp eax,2
	je Block35

 Block33:
	mov eax,dword ptr [esi+0x17C4]
	cmp eax,ebx
	je Block123

 Block34:
	mov dword ptr [esi+0x17C4],ebx
	mov ecx,dword ptr [eax]
	push eax
	jmp Block122

 Block35:
	cmp dword ptr [esi+0x17C4],ebx
	sete al
	test al,al
	je Block123

 Block36:
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
	jge Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x74],3
	call ebp
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x70],4
	cmp ecx,ebx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push ebx
	push 4
	push 0x241
	push ebx
	push ebx
	lea edx,[esp+0x94]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x17C4]
	cmp edi,eax
	je Block47

 Block43:
	mov dword ptr [esi+0x17C4],eax
	cmp eax,ebx
	je Block45

 Block44:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block45:
	cmp edi,ebx
	je Block47

 Block46:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block47:
	mov eax,dword ptr [esp+0x78]
	cmp eax,ebx
	je Block49

 Block48:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block49:
	cmp word ptr [esp+0x18],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x70],3
	jne Block52

 Block50:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebx
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea edx,[esp+0x18]
	push edx
	call edi

 Block53:
	cmp word ptr [esp+0x28],8
	mov dword ptr [esp+0x70],0xFFFFFFFF
	jne Block56

 Block54:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebx
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea ecx,[esp+0x28]
	push ecx
	call edi

 Block57:
	mov edi,dword ptr [esi+0x17C4]
	cmp edi,ebx
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push edi
	call eax
	cmp eax,ebx
	jge Block61

 Block60:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block61:
	lea ecx,[esp+0x78]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,5
	mov edx,0xD
	mov dword ptr [esp+0x70],ebx
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block63

 Block62:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block63:
	mov ecx,dword ptr [esi+0x17C4]
	mov byte ptr [esp+0x70],6
	test ecx,ecx
	jne Block65

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	lea eax,[esp+0x28]
	push eax
	call IWzVector2D::Putorigin
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x70],bl
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov eax,dword ptr [esp+0x78]
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0x70],edi
	test eax,eax
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block71:
	lea eax,[esp+0x78]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,7
	mov ecx,0xD
	mov dword ptr [esp+0x70],ebx
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block73

 Block72:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block73:
	mov ecx,dword ptr [esi+0x17C4]
	mov byte ptr [esp+0x70],8
	test ecx,ecx
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	lea edx,[esp+0x28]
	push edx
	call IWzGr2DLayer::Putoverlay
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x70],bl
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov eax,dword ptr [esp+0x78]
	mov dword ptr [esp+0x70],edi
	test eax,eax
	je Block81

 Block80:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block81:
	mov edi,dword ptr [esi+0x17C4]
	test edi,edi
	jne Block83

 Block82:
	push 0x80004003
	call _com_issue_error

 Block83:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xB4]
	push 0
	push edi
	call edx
	test eax,eax
	jge Block85

 Block84:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block85:
	lea eax,[esp+0x18]
	push eax
	call ebp
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block87

 Block86:
	push eax
	call _com_issue_error

 Block87:
	lea edx,[esp+0x28]
	push edx
	mov dword ptr [esp+0x74],9
	call ebp
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block89

 Block88:
	push eax
	call _com_issue_error

 Block89:
	xor ebp,ebp
	push ebp
	push ebp
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push ecx
	mov dword ptr [esp+0x8C],esp
	mov ecx,esp
	mov bl,0xA
	push offset _S_UISTATUSBAR2IMGC
	mov byte ptr [esp+0x88],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x84],0xB
	cmp dword ptr [_D_G_RM],ebp
	jne Block91

 Block90:
	push 0x80004003
	call _com_issue_error

 Block91:
	lea eax,[esp+0x6C]
	mov byte ptr [esp+0x84],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x78],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x7C]
	mov dword ptr [esp+0x7C],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block94

 Block92:
	cmp eax,0x80004002
	je Block94

 Block93:
	push eax
	call _com_issue_error

 Block94:
	mov edi,8
	mov byte ptr [esp+0x70],0xE
	cmp word ptr [esp+0x58],di
	jne Block97

 Block95:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,ebp
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	mov byte ptr [esp+0x70],0xF
	cmp word ptr [esp+0x28],di
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	mov byte ptr [esp+0x70],0x10
	cmp word ptr [esp+0x18],di
	jne Block105

 Block103:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	cmp eax,ebp
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block106:
	mov ecx,3
	mov word ptr [esp+0x48],cx
	mov dword ptr [esp+0x50],0xFF
	mov edx,ecx
	mov word ptr [esp+0x38],dx
	mov dword ptr [esp+0x40],ebp
	mov ecx,dword ptr [esi+0x17C4]
	mov bl,0x12
	mov byte ptr [esp+0x70],bl
	cmp ecx,ebp
	jne Block108

 Block107:
	push 0x80004003
	call _com_issue_error

 Block108:
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x70],0x13
	cmp ecx,ebp
	jne Block110

 Block109:
	push 0x80004003
	call _com_issue_error

 Block110:
	mov edi,dword ptr [esp+0x78]
	lea eax,[esp+0x48]
	push eax
	push edi
	push ebp
	push 1
	call IWzCanvas::Copy
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebp
	je Block112

 Block111:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block112:
	mov ebx,8
	mov byte ptr [esp+0x70],0x11
	cmp word ptr [esp+0x38],bx
	jne Block115

 Block113:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block116:
	mov byte ptr [esp+0x70],0x10
	cmp word ptr [esp+0x48],bx
	jne Block119

 Block117:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,ebp
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block120:
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp edi,ebp
	je Block123

 Block121:
	mov ecx,dword ptr [edi]
	push edi

 Block122:
	mov edx,dword ptr [ecx+8]
	call edx

 Block123:
	mov ebp,6
	lea edi,[esi+0x1930]
	lea ebx,[ebp-3]
	nop

 Block124:
	mov eax,dword ptr [edi]
	xor edx,edx
	cmp dword ptr [esi+0x1804],ebx
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x24]
	sete dl
	push edx
	call eax
	add edi,8
	sub ebp,1
	jne Block124

 Block125:
	mov ecx,esi
	call CUIStatusBar::ChatLogDraw

 Block126:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret 4
}
}
// CUIStatusBar::~CUIStatusBar
_SUB_EXCEPTION_HANDLER(132150)
__SUB_CLASS_THIS0(00132150, __thiscall, 37816,  CUIStatusBar, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_132150
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x10],ebx
	mov eax,dword ptr [esi+0x16BC]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [esi+0x16C0]
	jmp Block3

 Block2:
	push 0
	push offset _S_
	push 0
	push 0
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	lea ecx,[esp+0x10]
	call ZXString<char>::ReleaseBuffer
	mov ebx,1
	lea eax,[esp+0xC]
	mov dword ptr [esp+0x20],0
	mov dword ptr [esp+0x10],ebx

 Block3:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call CUIStatusBar::SetWhisperTarget
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test bl,1
	je Block6

 Block4:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x18
	ret
}
}
// CUIStatusBar::CQuickSlot::~CQuickSlot
_SUB_EXCEPTION_HANDLER(46FAF0)
__SUB_CLASS_THIS0(0046FAF0, __thiscall, 37954,  CUIStatusBar::CQuickSlot, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_46FAF0
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
	mov eax,dword ptr [esi+0x8C]
	mov dword ptr [esp+0x18],5
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 0x10
	push 4
	lea eax,[esi+0x2C]
	push eax
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0x28]
	mov byte ptr [esp+0x18],4
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	cmp dword ptr [esi+0x24],0
	lea edi,[esi+0x20]
	mov byte ptr [esp+0x18],3
	je Block6

 Block5:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block6:
	cmp dword ptr [esi+0x1C],0
	lea edi,[esi+0x18]
	mov byte ptr [esp+0x18],2
	je Block8

 Block7:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block8:
	mov eax,dword ptr [esi+0x14]
	mov byte ptr [esp+0x18],1
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0x10]
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov esi,dword ptr [esi]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test esi,esi
	je Block14

 Block13:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block14:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CUIStatusBar::DrawDragFuncKeyMappedIcon
_SUB_EXCEPTION_HANDLER(472050)
__SUB_CLASS_THIS(00472050, __thiscall, 37868,  CUIStatusBar, void, long, long, FUNCKEY_MAPPED&) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x64]
	sub esp,0x64
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_472050
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x278
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x60],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x54],ecx
	mov eax,dword ptr [ebp+0x70]
	mov edx,dword ptr [ebp+0x6C]
	push eax
	push edx
	call CUIStatusBar::GetShortCutIndexByPos
	mov dword ptr [ebp+0x44],eax
	cmp eax,0xFFFFFFFF
	je Block193

 Block1:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x10]
	push eax
	call esi
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebx,ebx
	add esp,8
	cmp eax,ebx
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	lea edx,[ebp-0x8C]
	push edx
	mov dword ptr [ebp-4],ebx
	call esi
	lea eax,[ebp-0x8C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	push ebx
	push ebx
	lea ecx,[ebp+0x10]
	push ecx
	lea edx,[ebp-0x8C]
	push edx
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGKE
	mov byte ptr [ebp-4],1
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea eax,[ebp-0xB4]
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x3C]
	mov dword ptr [ebp+0x3C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block10

 Block8:
	cmp eax,0x80004002
	je Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	cmp word ptr [ebp-0xB4],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],5
	jne Block13

 Block11:
	mov eax,dword ptr [ebp-0xAC]
	xor ecx,ecx
	mov word ptr [ebp-0xB4],cx
	cmp eax,ebx
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea edx,[ebp-0xB4]
	push edx
	call edi

 Block14:
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],6
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [ebp-0x8C],ax
	mov eax,dword ptr [ebp-0x84]
	cmp eax,ebx
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[ebp-0x8C]
	push ecx
	call edi

 Block18:
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],7
	jne Block21

 Block19:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[ebp+0x10]
	push eax
	call edi

 Block22:
	lea ecx,[ebp-0xA4]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [ebp-0xA0]
	mov dword ptr [ebp+0x4C],edx
	cmp eax,ebx
	je Block27

 Block23:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block26

 Block24:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block26

 Block25:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block26:
	mov esi,dword ptr [ZImports::_VariantInit]
	mov edi,dword ptr [ZImports::_VariantClear]
	mov dword ptr [ebp-0xA0],ebx

 Block27:
	lea eax,[ebp-0x4C]
	push eax
	call esi
	lea ecx,[ebp-0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov edx,3
	mov word ptr [ebp-0x6C],dx
	mov dword ptr [ebp-0x64],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],9
	cmp ecx,ebx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea eax,[ebp-0x4C]
	push eax
	lea edx,[ebp-0x6C]
	push edx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea eax,[ebp+0x50]
	push eax
	call IWzGr2D::CreateLayer
	mov esi,8
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x6C],si
	jne Block34

 Block32:
	mov eax,dword ptr [ebp-0x64]
	xor ecx,ecx
	mov word ptr [ebp-0x6C],cx
	cmp eax,ebx
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[ebp-0x6C]
	push edx
	call edi

 Block35:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x4C],si
	jne Block38

 Block36:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	cmp eax,ebx
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea ecx,[ebp-0x4C]
	push ecx
	call edi

 Block39:
	mov ebx,dword ptr [ebp+0x50]
	xor esi,esi
	cmp ebx,esi
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0xE0]
	push 0x80FFFFFF
	push ebx
	call eax
	cmp eax,esi
	jge Block43

 Block42:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block43:
	lea ecx,[ebp+0x5C]
	push ecx
	mov ecx,dword ptr [ebp+0x54]
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov byte ptr [ebp-4],0xD
	mov word ptr [ebp+0x2C],dx
	mov dword ptr [ebp+0x34],eax
	cmp eax,esi
	je Block45

 Block44:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block45:
	mov edx,dword ptr [ebp+0x2C]
	mov ecx,dword ptr [ebx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x30]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x34]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x38]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push ebx
	mov byte ptr [ebp-4],0xE
	call eax
	cmp eax,esi
	jge Block47

 Block46:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push ebx
	push eax
	call _com_issue_errorex

 Block47:
	cmp word ptr [ebp+0x2C],8
	mov byte ptr [ebp-4],0xD
	jne Block50

 Block48:
	mov eax,dword ptr [ebp+0x34]
	xor ecx,ecx
	mov word ptr [ebp+0x2C],cx
	cmp eax,esi
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[ebp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0xC
	cmp eax,esi
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	mov dword ptr [ebp+0x58],esi
	mov edi,dword ptr [ebp+0x74]
	movzx eax,byte ptr [edi]
	dec eax
	mov byte ptr [ebp-4],0xF
	cmp eax,7
	ja Block189

 Block54:
	cmp EAX, 0
je Block155
cmp EAX, 1
je Block55
cmp EAX, 2
je Block55
cmp EAX, 3
je Block165
cmp EAX, 4
je Block165
cmp EAX, 5
je Block165
cmp EAX, 6
je Block55
cmp EAX, 7
je Block133


 Block55:
	mov ecx,dword ptr [edi+1]
	mov eax,0x431BDE83
	imul ecx
	mov eax,dword ptr [ebp+0x4C]
	sar edx,0x12
	mov ebx,edx
	shr ebx,0x1F
	add ebx,edx
	mov eax,dword ptr [eax+ebx*4+0x501]
	mov dword ptr [ebp+0x44],ebx
	test eax,eax
	je Block57

 Block56:
	mov eax,dword ptr [eax-4]

 Block57:
	dec eax
	cmp eax,1
	mov dword ptr [ebp+0x48],eax
	mov dword ptr [ebp+0x5C],1
	jl Block189

 Block58:
	nop

 Block59:
	mov ecx,dword ptr [ebp+0x5C]
	push ecx
	mov ecx,dword ptr [ebp+0x4C]
	push ebx
	lea edx,[ebp+0x34]
	push edx
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block64

 Block60:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block63

 Block61:
	mov eax,dword ptr [ebp+0x38]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x38]
	test ecx,ecx
	je Block63

 Block62:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block63:
	mov dword ptr [ebp+0x38],0

 Block64:
	test esi,esi
	je Block66

 Block65:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	cmp eax,dword ptr [edi+1]
	je Block68

 Block66:
	mov eax,dword ptr [ebp+0x5C]
	inc eax
	cmp eax,dword ptr [ebp+0x48]
	mov dword ptr [ebp+0x5C],eax
	jle Block59

 Block67:
	jmp Block189

 Block68:
	cmp dword ptr [ebp+0x5C],0
	je Block189

 Block69:
	mov ecx,dword ptr [edi+1]
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[ebp+0x20]
	push edx
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [eax]
	test eax,eax
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [ebp+0x58],edi
	call edx
	jmp Block72

 Block71:
	mov edi,dword ptr [ebp+0x58]

 Block72:
	mov eax,dword ptr [ebp+0x20]
	test eax,eax
	je Block74

 Block73:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block74:
	test edi,edi
	sete al
	test al,al
	jne Block189

 Block75:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x7C]
	push eax
	call esi
	lea ecx,[ebp-0x7C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	lea edx,[ebp-0x5C]
	push edx
	mov byte ptr [ebp-4],0x10
	call esi
	lea eax,[ebp-0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block79

 Block78:
	push eax
	call _com_issue_error

 Block79:
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],0x11
	call esi
	lea edx,[ebp-0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	lea eax,[ebp-0x1C]
	push eax
	mov byte ptr [ebp-4],0x12
	call esi
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block83

 Block82:
	push eax
	call _com_issue_error

 Block83:
	lea edx,[ebp]
	mov bl,0x13
	push edx
	mov byte ptr [ebp-4],bl
	call esi
	lea eax,[ebp]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block85

 Block84:
	push eax
	call _com_issue_error

 Block85:
	lea ecx,[ebp-0x7C]
	push ecx
	lea edx,[ebp-0x5C]
	push edx
	lea eax,[ebp-0x3C]
	push eax
	lea ecx,[ebp-0x1C]
	push ecx
	mov ecx,dword ptr [ebp+0x50]
	lea edx,[ebp]
	push edx
	push edi
	lea eax,[ebp-0xC4]
	push eax
	mov byte ptr [ebp-4],0x14
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0xC4],8
	jne Block92

 Block86:
	mov eax,dword ptr [ebp-0xBC]
	xor ecx,ecx
	mov word ptr [ebp-0xC4],cx
	test eax,eax
	je Block88

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block88:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block89:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],bl
	jne Block93

 Block90:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block94

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block92:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0xC4]
	push edx
	call edi
	jmp Block89

 Block93:
	lea ecx,[ebp]
	push ecx
	call edi

 Block94:
	mov ebx,8
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp-0x1C],bx
	jne Block97

 Block95:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea eax,[ebp-0x1C]
	push eax
	call edi

 Block98:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x3C],bx
	jne Block101

 Block99:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea edx,[ebp-0x3C]
	push edx
	call edi

 Block102:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x5C],bx
	jne Block105

 Block103:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea ecx,[ebp-0x5C]
	push ecx
	call edi

 Block106:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x7C],bx
	jne Block109

 Block107:
	mov eax,dword ptr [ebp-0x74]
	xor edx,edx
	mov word ptr [ebp-0x7C],dx
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea eax,[ebp-0x7C]
	push eax
	call edi

 Block110:
	lea ecx,[ebp-0x2C]
	push ecx
	call esi
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block112

 Block111:
	push eax
	call _com_issue_error

 Block112:
	lea eax,[ebp-0x9C]
	mov bl,0x15
	push eax
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x9C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block114

 Block113:
	push eax
	call _com_issue_error

 Block114:
	mov esi,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x16
	test esi,esi
	jne Block116

 Block115:
	push 0x80004003
	call _com_issue_error

 Block116:
	lea edx,[ebp-0x2C]
	push edx
	lea eax,[ebp-0x9C]
	push eax
	mov ecx,esi
	call IWzCanvas::Getcy
	mov ecx,eax
	mov eax,dword ptr [ebp+0x70]
	sub eax,ecx
	add eax,0x10
	push eax
	mov ecx,esi
	call IWzCanvas::Getcx
	mov edi,dword ptr [ebp+0x50]
	mov edx,eax
	mov eax,dword ptr [ebp+0x6C]
	sub eax,edx
	sub eax,0x10
	push eax
	mov ecx,edi
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x9C],si
	jne Block119

 Block117:
	xor eax,eax
	mov word ptr [ebp-0x9C],ax
	mov eax,dword ptr [ebp-0x94]
	test eax,eax
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea ecx,[ebp-0x9C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block120:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x2C],si
	jne Block123

 Block121:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block124:
	push 0x28
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x48],eax
	mov esi,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x17
	test eax,eax
	je Block129

 Block125:
	test esi,esi
	je Block127

 Block126:
	lea edx,[esi+4]
	jmp Block128

 Block127:
	xor edx,edx

 Block128:
	mov ecx,dword ptr [ebp+0x5C]
	push edx
	mov edx,dword ptr [ebp+0x44]
	push 0
	push ecx
	push edx
	push edi
	mov ecx,eax
	call CDraggableItem::_ctor_0
	jmp Block130

 Block129:
	xor eax,eax

 Block130:
	mov byte ptr [ebp-4],0xF
	test esi,esi
	je Block132

 Block131:
	push 0
	lea ecx,[esi+4]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::BeginDragDrop
	jmp Block186

 Block132:
	xor ecx,ecx
	push ecx
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::BeginDragDrop
	jmp Block186

 Block133:
	mov edi,dword ptr [edi+1]
	mov dword ptr [ebp+0x44],edi
	mov dword ptr [ebp+0x4C],esi
	lea eax,[ebp+0x24]
	push 0x1069
	push eax
	mov byte ptr [ebp-4],0x18
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea ecx,[ebp+0x4C]
	push ecx
	mov byte ptr [ebp-4],0x19
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x24]
	add esp,0xC
	mov byte ptr [ebp-4],0x18
	cmp eax,esi
	je Block135

 Block134:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block135:
	push offset _D_VTMISSING
	lea ecx,[ebp-0xF4]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0xD4]
	mov byte ptr [ebp-4],0x1A
	call Ztl_variant_t::_ctor_1
	mov edi,dword ptr [ebp+0x4C]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	mov bl,0x1B
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,esp
	push 0
	push 0
	lea edx,[ebp-0xF4]
	push edx
	lea ecx,[ebp-0xD4]
	push ecx
	push 0xFFFFFFFF
	push eax
	push edi
	call ZStrUtil::_Conv_0
	add esp,8
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x1C
	jne Block137

 Block136:
	push 0x80004003
	call _com_issue_error

 Block137:
	lea edx,[ebp-0x244]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x28]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	push eax
	lea ecx,[ebp+0x58]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block139

 Block138:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block139:
	lea ecx,[ebp-0x244]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xD4]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xF4]
	mov byte ptr [ebp-4],0x18
	call Ztl_variant_t::~Ztl_variant_t
	mov esi,dword ptr [ebp+0x58]
	test esi,esi
	sete al
	test al,al
	je Block142

 Block140:
	mov byte ptr [ebp-4],0xF
	test edi,edi
	je Block189

 Block141:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	jmp Block188

 Block142:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x214]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x134]
	mov byte ptr [ebp-4],0x1E
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1D4]
	mov byte ptr [ebp-4],0x1F
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x114]
	mov byte ptr [ebp-4],0x20
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x204]
	mov byte ptr [ebp-4],0x21
	call Ztl_variant_t::_ctor_1
	mov ebx,dword ptr [ebp+0x50]
	lea eax,[ebp-0x214]
	push eax
	lea ecx,[ebp-0x134]
	push ecx
	lea edx,[ebp-0x1D4]
	push edx
	lea eax,[ebp-0x114]
	push eax
	lea ecx,[ebp-0x204]
	push ecx
	push esi
	lea edx,[ebp-0x274]
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x22
	call IWzGr2DLayer::InsertCanvas
	lea ecx,[ebp-0x274]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x204]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x114]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1D4]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x134]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x214]
	mov byte ptr [ebp-4],0x18
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1F4]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x154]
	mov byte ptr [ebp-4],0x23
	call Ztl_variant_t::_ctor_1
	mov byte ptr [ebp-4],0x24
	test esi,esi
	jne Block144

 Block143:
	push 0x80004003
	call _com_issue_error

 Block144:
	lea eax,[ebp-0x1F4]
	push eax
	lea ecx,[ebp-0x154]
	push ecx
	mov ecx,esi
	call IWzCanvas::Getcy
	mov edx,eax
	mov eax,dword ptr [ebp+0x70]
	sub eax,edx
	add eax,0x10
	push eax
	mov ecx,esi
	call IWzCanvas::Getcx
	mov ecx,eax
	mov eax,dword ptr [ebp+0x6C]
	sub eax,ecx
	sub eax,0x10
	push eax
	mov ecx,ebx
	call IWzVector2D::RelMove
	lea ecx,[ebp-0x154]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1F4]
	mov byte ptr [ebp-4],0x18
	call Ztl_variant_t::~Ztl_variant_t
	push 0x2C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x48],eax
	mov esi,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x25
	test eax,eax
	je Block149

 Block145:
	test esi,esi
	je Block147

 Block146:
	lea ecx,[esi+4]
	jmp Block148

 Block147:
	xor ecx,ecx

 Block148:
	mov edx,dword ptr [ebp+0x44]
	push 0xFFFFFFFF
	push 0xFFFFFFFF
	push 1
	push ecx
	push edx
	push ebx
	mov ecx,eax
	call CDraggableSkill::_ctor_0
	jmp Block150

 Block149:
	xor eax,eax

 Block150:
	mov byte ptr [ebp-4],0x18
	test esi,esi
	je Block152

 Block151:
	lea ecx,[esi+4]
	jmp Block153

 Block152:
	xor ecx,ecx

 Block153:
	push 0
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::BeginDragDrop
	mov byte ptr [ebp-4],0xF
	test edi,edi
	je Block186

 Block154:
	add edi,0xFFFFFFF4
	push edi
	jmp Block185

 Block155:
	mov edi,dword ptr [edi+1]
	push edi
	call is_active_skill
	add esp,4
	test eax,eax
	je Block189

 Block156:
	mov ecx,dword ptr [ebp+0x4C]
	lea eax,[ebp+0x5C]
	push eax
	push edi
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	mov dword ptr [ebp+0x5C],esi
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block189

 Block157:
	mov edx,dword ptr [ebp+0x5C]
	add edx,0x25C
	push edx
	lea ecx,[ebp+0x58]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov esi,dword ptr [ebp+0x58]
	test esi,esi
	sete al
	test al,al
	jne Block189

 Block158:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1B4]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x224]
	mov byte ptr [ebp-4],0x26
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x194]
	mov byte ptr [ebp-4],0x27
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x234]
	mov byte ptr [ebp-4],0x28
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x174]
	mov byte ptr [ebp-4],0x29
	call Ztl_variant_t::_ctor_1
	lea eax,[ebp-0x1B4]
	push eax
	lea ecx,[ebp-0x224]
	push ecx
	lea edx,[ebp-0x194]
	push edx
	lea eax,[ebp-0x234]
	push eax
	lea ecx,[ebp-0x174]
	push ecx
	push esi
	lea edx,[ebp-0x254]
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x2A
	call IWzGr2DLayer::InsertCanvas
	lea ecx,[ebp-0x254]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x174]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x234]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x194]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x224]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1B4]
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[ebp-0x104]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0xE4]
	mov byte ptr [ebp-4],0x2B
	call Ztl_variant_t::_ctor_1
	mov byte ptr [ebp-4],0x2C
	test esi,esi
	jne Block160

 Block159:
	push 0x80004003
	call _com_issue_error

 Block160:
	lea eax,[ebp-0x104]
	push eax
	lea ecx,[ebp-0xE4]
	push ecx
	mov ecx,esi
	call IWzCanvas::Getcy
	mov edx,eax
	mov eax,dword ptr [ebp+0x70]
	sub eax,edx
	add eax,0x10
	push eax
	mov ecx,esi
	call IWzCanvas::Getcx
	mov ecx,eax
	mov eax,dword ptr [ebp+0x6C]
	sub eax,ecx
	sub eax,0x10
	push eax
	mov ecx,ebx
	call IWzVector2D::RelMove
	lea ecx,[ebp-0xE4]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x104]
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::~Ztl_variant_t
	push 0x2C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x44],eax
	mov esi,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x2D
	test eax,eax
	je Block129

 Block161:
	test esi,esi
	je Block163

 Block162:
	lea ecx,[esi+4]
	jmp Block164

 Block163:
	xor ecx,ecx

 Block164:
	mov edx,dword ptr [ebp+0x5C]
	push 0xFFFFFFFF
	push 0xFFFFFFFF
	push 0
	push ecx
	mov ecx,dword ptr [edx]
	push ecx
	push ebx
	mov ecx,eax
	call CDraggableSkill::_ctor_0
	jmp Block130

 Block165:
	mov dword ptr [ebp+0x5C],0
	lea edx,[ebp+0x40]
	push 0x994
	mov bl,0x2E
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi+1]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x5C]
	push edx
	mov byte ptr [ebp-4],0x2F
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x40]
	add esp,0xC
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block167

 Block166:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block167:
	mov esi,dword ptr [ebp+0x5C]
	push 0
	push 0
	push 0xFFFFFFFF
	push esi
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,esp
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push esi
	call ZStrUtil::_Conv_0
	add esp,8
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x30
	test ecx,ecx
	jne Block169

 Block168:
	push 0x80004003
	call _com_issue_error

 Block169:
	lea eax,[ebp-0x264]
	push eax
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x31
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[ebp-0x264]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	mov esi,dword ptr [ebp+0x58]
	test esi,esi
	sete al
	test al,al
	je Block172

 Block170:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block189

 Block171:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	jmp Block188

 Block172:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1A4]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x184]
	mov byte ptr [ebp-4],0x32
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x164]
	mov byte ptr [ebp-4],0x33
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x144]
	mov byte ptr [ebp-4],0x34
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x124]
	mov byte ptr [ebp-4],0x35
	call Ztl_variant_t::_ctor_1
	lea ecx,[ebp-0x1A4]
	push ecx
	lea edx,[ebp-0x184]
	push edx
	lea eax,[ebp-0x164]
	push eax
	lea ecx,[ebp-0x144]
	push ecx
	mov ecx,dword ptr [ebp+0x50]
	lea edx,[ebp-0x124]
	push edx
	push esi
	lea eax,[ebp-0x284]
	push eax
	mov byte ptr [ebp-4],0x36
	call IWzGr2DLayer::InsertCanvas
	lea ecx,[ebp-0x284]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x124]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x144]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x164]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x184]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1A4]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1E4]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1C4]
	mov byte ptr [ebp-4],0x37
	call Ztl_variant_t::_ctor_1
	mov byte ptr [ebp-4],0x38
	test esi,esi
	jne Block174

 Block173:
	push 0x80004003
	call _com_issue_error

 Block174:
	lea ecx,[ebp-0x1E4]
	push ecx
	lea edx,[ebp-0x1C4]
	push edx
	mov ecx,esi
	call IWzCanvas::Getcy
	mov ecx,eax
	mov eax,dword ptr [ebp+0x70]
	sub eax,ecx
	add eax,0x10
	push eax
	mov ecx,esi
	call IWzCanvas::Getcx
	mov ecx,dword ptr [ebp+0x50]
	mov edx,eax
	mov eax,dword ptr [ebp+0x6C]
	sub eax,edx
	sub eax,0x10
	push eax
	call IWzVector2D::RelMove
	lea ecx,[ebp-0x1C4]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1E4]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0x28
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x48],eax
	mov esi,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x39
	test eax,eax
	je Block179

 Block175:
	test esi,esi
	je Block177

 Block176:
	lea ecx,[esi+4]
	jmp Block178

 Block177:
	xor ecx,ecx

 Block178:
	mov edx,dword ptr [edi+1]
	push ecx
	xor ecx,ecx
	cmp dword ptr [ebp+0x44],0x5A
	setg cl
	push ecx
	movzx ecx,byte ptr [edi]
	push edx
	mov edx,dword ptr [ebp+0x50]
	push ecx
	push edx
	mov ecx,eax
	call CDraggableMenu::_ctor_0
	jmp Block180

 Block179:
	xor eax,eax

 Block180:
	mov byte ptr [ebp-4],bl
	test esi,esi
	je Block182

 Block181:
	lea ecx,[esi+4]
	jmp Block183

 Block182:
	xor ecx,ecx

 Block183:
	push 0
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::BeginDragDrop
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block186

 Block184:
	add eax,0xFFFFFFF4
	push eax

 Block185:
	call ZXString<char>::_Release
	add esp,4

 Block186:
	lea eax,[ebp+0x40]
	push 0x75E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [ebp-4],0x3A
	call play_ui_sound
	mov eax,dword ptr [ebp+0x40]
	add esp,4
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block189

 Block187:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release

 Block188:
	add esp,4

 Block189:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block191

 Block190:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block191:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],7
	call edx
	mov eax,dword ptr [ebp+0x3C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block193

 Block192:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block193:
	lea esp,[ebp-0x294]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x60]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x64
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// CUIStatusBar::CQuickSlot::IsSlideUp
__SUB_CLASS_THIS0(0046D310, __thiscall, 37960,  CUIStatusBar::CQuickSlot, int32_t) {
__asm {

 Block0:
	cmp dword ptr [ecx+4],0
	je Block3

 Block1:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp byte ptr [eax+0x41C4],0
	jne Block3

 Block2:
	mov eax,1
	ret

 Block3:
	xor eax,eax
	ret
}
}
// CUIStatusBar::MakeCtrlEdit
_SUB_EXCEPTION_HANDLER(470BA0)
__SUB_CLASS_THIS(00470BA0, __thiscall, 37851,  CUIStatusBar, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_470BA0
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
	mov esi,ecx
	mov ebx,dword ptr [esp+0x28]
	test ebx,ebx
	je Block25

 Block1:
	or edi,0xFFFFFFFF
	cmp dword ptr [esi+0x1574],0
	jne Block6

 Block2:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x20],0
	test eax,eax
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	push eax
	lea ecx,[esi+0x1570]
	mov dword ptr [esp+0x24],edi
	call ZRef<CCtrlEdit>::op_assign_ptr
	mov ecx,dword ptr [esi+0x1574]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esi+0x15D4]
	push edx
	push 0xC
	push 0x199
	push 0x20C
	push 0x4B
	push 0x3F3
	push esi
	call eax

 Block6:
	cmp dword ptr [esi+0x157C],0
	jne Block31

 Block7:
	mov ebx,1
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esi+0x1814],ebx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x20],ebx
	test eax,eax
	je Block9

 Block8:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	push eax
	lea ecx,[esi+0x1578]
	mov dword ptr [esp+0x24],edi
	call ZRef<CCtrlComboBox>::op_assign_ptr
	mov ecx,dword ptr [esi+0x157C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esi+0x1580]
	push eax
	push 0x15
	push 0x44
	push 0x207
	push 3
	push ebx
	push 0x3F4
	push esi
	call edx
	lea eax,[esp+0x10]
	push 0x324
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x157C]
	push 0
	push eax
	mov dword ptr [esp+0x28],2
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x20],edi
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	lea ecx,[esp+0x10]
	push 0x327
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x157C]
	push ebx
	push eax
	mov dword ptr [esp+0x28],3
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x20],edi
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	lea edx,[esp+0x10]
	push 0x323
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x157C]
	push 2
	push eax
	mov dword ptr [esp+0x28],4
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x20],edi
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	lea eax,[esp+0x10]
	push 0x189C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x157C]
	push 3
	push eax
	mov dword ptr [esp+0x28],5
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x20],edi
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	lea ecx,[esp+0x10]
	push 0x326
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x157C]
	push 4
	push eax
	mov dword ptr [esp+0x28],6
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x20],edi
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	lea edx,[esp+0x10]
	push 0x1896
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x157C]
	push 5
	push eax
	mov dword ptr [esp+0x28],7
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x20],edi
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	lea eax,[esp+0x14]
	push 0x322
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x157C]
	push 8
	push eax
	mov dword ptr [esp+0x28],8
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],edi
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov ecx,dword ptr [esi+0x1610]
	push ecx
	mov ecx,dword ptr [esi+0x157C]
	call CCtrlComboBox::SetSelect
	mov ebx,dword ptr [esp+0x28]
	jmp Block31

 Block25:
	mov ecx,dword ptr [esi+0x1574]
	test ecx,ecx
	je Block28

 Block26:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	cmp dword ptr [esi+0x1574],0
	lea edi,[esi+0x1570]
	je Block28

 Block27:
	push 0
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block28:
	mov ecx,dword ptr [esi+0x157C]
	test ecx,ecx
	je Block31

 Block29:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	cmp dword ptr [esi+0x157C],0
	lea edi,[esi+0x1578]
	je Block31

 Block30:
	push 0
	mov ecx,edi
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block31:
	mov edi,dword ptr [esi+0x17D8]
	test edi,edi
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0x11C]
	push ebx
	push edi
	call edx
	test eax,eax
	jge Block35

 Block34:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block35:
	mov edi,dword ptr [esi+0x17DC]
	test edi,edi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0x11C]
	push ebx
	push edi
	call ecx
	test eax,eax
	jge Block39

 Block38:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block39:
	mov edi,dword ptr [esi+0x17D0]
	test edi,edi
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0x11C]
	xor edx,edx
	test ebx,ebx
	sete dl
	mov ebx,edx
	push ebx
	push edi
	call ecx
	test eax,eax
	jge Block43

 Block42:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block43:
	mov esi,dword ptr [esi+0x17D4]
	test esi,esi
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x11C]
	push ebx
	push esi
	call eax
	test eax,eax
	jge Block47

 Block46:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block47:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4
}
}
// CUIStatusBar::ChangeDragFuncKeyMappedIcon
__SUB_CLASS_THIS(00476CB0, __thiscall, 37868,  CUIStatusBar, void, long, long, FUNCKEY_MAPPED&) {
__asm {

 Block0:
	mov edx,ecx
	lea ecx,[edx+0x1824]
	call CUIStatusBar::CQuickSlot::IsEnabled
	test eax,eax
	je Block2

 Block1:
	mov ecx,edx
	jmp  CUIStatusBar::DrawDragFuncKeyMappedIcon

 Block2:
	ret 0xC
}
}
// CUIStatusBar::CQuickSlot::CQuickSlot
_SUB_EXCEPTION_HANDLER(46FE90)
__SUB_CLASS_THIS0(0046FE90, __thiscall, 37948,  CUIStatusBar::CQuickSlot, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_46FE90
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
	xor ebx,ebx
	mov dword ptr [esi],ebx
	mov dword ptr [esi+8],ebx
	mov dword ptr [esi+0xC],ebx
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esi+0x10],ebx
	mov dword ptr [esi+0x14],ebx
	mov dword ptr [esi+0x1C],ebx
	mov dword ptr [esi+0x24],ebx
	mov dword ptr [esi+0x28],ebx
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 0x10
	push 4
	lea eax,[esi+0x2C]
	push eax
	mov byte ptr [esp+0x30],5
	call __eh_vector_ctor_iterator
	push 0x60
	lea ecx,[esi+0x94]
	push ebx
	mov dword ptr [esi+0x8C],ebx
	or edi,0xFFFFFFFF
	push ecx
	mov dword ptr [esi+0x90],edi
	call _memset
	add esp,0xC
	mov dword ptr [esi+0x6C],edi
	mov dword ptr [esi+0x70],edi
	mov dword ptr [esi+0x74],edi
	mov dword ptr [esi+0x78],edi
	mov dword ptr [esi+0x7C],edi
	mov dword ptr [esi+0x80],edi
	mov dword ptr [esi+0x84],edi
	mov dword ptr [esi+0x88],edi
	mov eax,esi
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
// CUIStatusBar::ClearToolTip
__SUB_CLASS_THIS0(00471FF0, __thiscall, 37827,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0x7C
	jmp  CUIToolTip::ClearToolTip
}
}
// CUIStatusBar::FloatNotice
__SUB_CLASS_THIS(0046D430, __thiscall, 37831,  CUIStatusBar, void, const char*, long, unsigned long) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	mov esi,ecx
	test ebx,ebx
	je Block5

 Block1:
	push edi
	mov edi,dword ptr [esp+0x18]
	test edi,edi
	je Block3

 Block2:
	call timeGetTime
	add eax,edi
	mov dword ptr [esi+0x17B8],eax
	jmp Block4

 Block3:
	mov dword ptr [esi+0x17B8],0

 Block4:
	push 0x1388
	push 0
	push 0
	mov ecx,esi
	call CUIStatusBar::SetItemMsg
	mov eax,dword ptr [esp+0x14]
	push 0xC00616FC
	push 0xA0
	push eax
	push ebx
	lea ecx,[esi+0x1790]
	call CFloatNotice::CreateFloatNotice
	pop edi
	pop esi
	pop ebx
	ret 0xC

 Block5:
	lea ecx,[esi+0x1790]
	call CFloatNotice::DeleteFloatNotice
	mov dword ptr [esi+0x17B8],0
	pop esi
	pop ebx
	ret 0xC
}
}
// CUIStatusBar::ConvertWhisperToNormal
_SUB_EXCEPTION_HANDLER(4771C0)
__SUB_CLASS_THIS(004771C0, __thiscall, 37850,  CUIStatusBar, ZXString16*, ZXString16*, NakedParam<ZXString16>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4771C0
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
	xor ebp,ebp
	mov dword ptr [esp+0x24],ebp
	mov ebx,dword ptr [esp+0x40]
	lea eax,[esp+0x44]
	mov esi,1
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x3C],esi
	mov dword ptr [ebx],ebp
	call ZXString16::op_assign
	mov dword ptr [esp+0x24],esi
	mov dword ptr [esp+0x1C],ebp
	mov ecx,dword ptr [esp+0x44]
	movzx eax,word ptr [ecx]
	mov byte ptr [esp+0x38],2
	mov dword ptr [esp+0x20],ebp
	cmp ax,0x20
	je Block42

 Block1:
	xor edi,edi
	lea esp,[esp]

 Block2:
	cmp ecx,ebp
	je Block4

 Block3:
	mov eax,dword ptr [ecx-4]
	shr eax,1
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	dec eax
	cmp edi,eax
	jge Block42

 Block6:
	lea ecx,[edi+2]
	push ecx
	push edi
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[esp+0x50]
	call ZXString16::Substring
	push ebp
	push ebp
	push 0xFFFFFFFF
	push offset _S___26
	push ebp
	push ebp
	mov byte ptr [esp+0x50],3
	mov dword ptr [esp+0x30],ebp
	call MultiByteToWideChar
	add eax,eax
	mov esi,eax
	shr esi,1
	push ebp
	dec esi
	push esi
	lea ecx,[esp+0x20]
	call ZXString16::GetBuffer
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push offset _S___26
	push ebp
	push ebp
	call MultiByteToWideChar
	push esi
	lea ecx,[esp+0x1C]
	call ZXString16::ReleaseBuffer
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x18]
	call ZXString16::op_eq
	mov esi,eax
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	push 0xFFFFFFFF
	cmp esi,ebp
	jne Block22

 Block9:
	push offset _S___25
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebp
	call ZXString16::AssignCharStr
	lea ecx,[esp+0x18]
	push ecx
	lea ecx,[esp+0x18]
	call ZXString16::op_eq
	mov esi,eax
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	cmp esi,ebp
	jne Block27

 Block12:
	mov edx,dword ptr [esp+0x44]
	movzx eax,word ptr [edx+edi*2]
	movzx ecx,ax
	cmp cx,0x5B
	jne Block14

 Block13:
	mov dword ptr [esp+0x20],1
	jmp Block19

 Block14:
	movzx eax,ax
	cmp ax,0x5D
	jne Block16

 Block15:
	mov dword ptr [esp+0x20],ebp
	jmp Block19

 Block16:
	cmp dword ptr [esp+0x20],ebp
	jne Block19

 Block17:
	movzx eax,word ptr [edx+edi*2]
	push eax
	lea edx,[esp+0x2C]
	push edx
	lea ecx,[esp+0x24]
	call ZXString16::op_add_2
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x3C],0xC
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x38],3
	cmp eax,ebp
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x38],2
	cmp eax,ebp
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block21:
	mov ecx,dword ptr [esp+0x44]
	inc edi
	jmp Block2

 Block22:
	push offset _S___6
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],ebp
	call ZXString16::AssignCharStr
	push 0xFFFFFFFF
	add edi,2
	push edi
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0x44],4
	call ZXString16::Substring
	mov esi,eax
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x40],5
	call ZXString16::op_add_1
	push esi
	lea ecx,[esp+0x2C]
	push ecx
	mov bl,6
	mov ecx,eax
	mov byte ptr [esp+0x40],bl
	call ZXString16::op_add_1
	mov ecx,dword ptr [esp+0x40]
	push eax
	mov byte ptr [esp+0x3C],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x38],bl
	cmp eax,ebp
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block24:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],5
	cmp eax,ebp
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block26:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x38],4
	jmp Block35

 Block27:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [edx+0x20CC]
	cmp eax,ebp
	je Block29

 Block28:
	add eax,4
	jmp Block30

 Block29:
	xor eax,eax

 Block30:
	push 0xFFFFFFFF
	push eax
	mov ecx,ebx
	call ZXString16::AssignCharStr
	push 0xFFFFFFFF
	push offset _S___6
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],ebp
	call ZXString16::AssignCharStr
	push 0xFFFFFFFF
	add edi,2
	push edi
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0x44],8
	call ZXString16::Substring
	mov esi,eax
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	mov ecx,ebx
	mov byte ptr [esp+0x40],9
	call ZXString16::op_add_1
	push esi
	lea ecx,[esp+0x30]
	push ecx
	mov bl,0xA
	mov ecx,eax
	mov byte ptr [esp+0x40],bl
	call ZXString16::op_add_1
	mov ecx,dword ptr [esp+0x40]
	push eax
	mov byte ptr [esp+0x3C],0xB
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x38],bl
	cmp eax,ebp
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block32:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x38],9
	cmp eax,ebp
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block34:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],8

 Block35:
	cmp eax,ebp
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block37:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x38],3
	cmp eax,ebp
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block39:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x38],2
	cmp eax,ebp
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block41:
	mov ebx,dword ptr [esp+0x40]

 Block42:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x38],1
	cmp eax,ebp
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block44:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x38],0
	cmp eax,ebp
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block46:
	mov eax,ebx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 8
}
}
// CUIStatusBar::CQuickSlot::GetIndexByPos
__SUB_CLASS_THIS(0046D030, __thiscall, 37955,  CUIStatusBar::CQuickSlot, long, long, long) {
__asm {

 Block0:
	sub esp,0x14
	push ebx
	push ebp
	push esi
	push edi
	xor ebp,ebp
	mov edi,ecx
	xor ebx,ebx
	lea ecx,[ecx]

 Block1:
	mov esi,dword ptr [edi+0x14]
	cmp esi,ebp
	je Block16

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x10]
	push ecx
	push esi
	mov dword ptr [esp+0x18],ebp
	call edx
	cmp eax,ebp
	jge Block4

 Block3:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [ebx*8+_D_S_PTSHORTKEYPOS]
	add eax,dword ptr [esp+0x10]
	mov esi,dword ptr [edi+0x14]
	mov dword ptr [esp+0x14],eax
	cmp esi,ebp
	je Block16

 Block5:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[esp+0x10]
	push edx
	push esi
	mov dword ptr [esp+0x18],ebp
	call eax
	cmp eax,ebp
	jge Block7

 Block6:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block7:
	mov ecx,dword ptr [ebx*8+_D_S_PTSHORTKEYPOS+4]
	add ecx,dword ptr [esp+0x10]
	mov esi,dword ptr [edi+0x14]
	mov dword ptr [esp+0x18],ecx
	cmp esi,ebp
	je Block16

 Block8:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[esp+0x10]
	push eax
	push esi
	mov dword ptr [esp+0x18],ebp
	call ecx
	cmp eax,ebp
	jge Block10

 Block9:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov edx,dword ptr [ebx*8+_D_S_PTSHORTKEYPOS]
	mov eax,dword ptr [esp+0x10]
	mov esi,dword ptr [edi+0x14]
	lea ecx,[edx+eax+0x20]
	mov dword ptr [esp+0x1C],ecx
	cmp esi,ebp
	je Block16

 Block11:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x28]
	lea eax,[esp+0x10]
	push eax
	push esi
	mov dword ptr [esp+0x18],ebp
	call ecx
	cmp eax,ebp
	jge Block13

 Block12:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block13:
	mov edx,dword ptr [ebx*8+_D_S_PTSHORTKEYPOS+4]
	mov eax,dword ptr [esp+0x10]
	lea ecx,[edx+eax+0x20]
	mov eax,dword ptr [esp+0x2C]
	push eax
	mov eax,dword ptr [esp+0x2C]
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x2C],ecx
	call PtInRect
	test eax,eax
	jne Block17

 Block14:
	inc ebx
	cmp ebx,8
	jl Block1

 Block15:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	add esp,0x14
	ret 8

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	pop edi
	pop esi
	pop ebp
	mov eax,ebx
	pop ebx
	add esp,0x14
	ret 8
}
}
// CUIStatusBar::GetEmotionKey
_SUB_EXCEPTION_HANDLER(4706E0)
__SUB_CLASS_THIS(004706E0, __thiscall, 37828,  CUIStatusBar, uint32_t, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4706E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	lea eax,[esp+0x24]
	push 0xD69
	xor edi,edi
	push eax
	mov dword ptr [esp+0x18],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x48]
	push edi
	push edi
	mov ebx,1
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x4C],edi
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::Find__0
	test eax,eax
	jge Block5

 Block1:
	lea ecx,[esp+0x20]
	push 0xD6A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push edi
	mov dword ptr [esp+0x48],ebx
	mov ebx,3
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::Find__0
	test eax,eax
	jge Block5

 Block2:
	lea edx,[esp+0x1C]
	push 0xD6B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push edi
	mov ebx,7
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x4C],2
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::Find__0
	test eax,eax
	jge Block5

 Block3:
	lea eax,[esp+0x18]
	push 0xD6C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push edi
	mov ebx,0xF
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x4C],3
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::Find__0
	test eax,eax
	jge Block5

 Block4:
	lea ecx,[esp+0x14]
	push 0xD6D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push edi
	push eax
	mov ecx,esi
	lea ebx,[edi+0x1F]
	call ZXString<char>::Find__0
	mov byte ptr [esp+0x48],0
	test eax,eax
	jl Block6

 Block5:
	mov byte ptr [esp+0x48],1

 Block6:
	test bl,0x10
	je Block9

 Block7:
	mov eax,dword ptr [esp+0x14]
	and ebx,0xFFFFFFEF
	mov dword ptr [esp+0x10],ebx
	cmp eax,edi
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov dword ptr [esp+0x40],2
	test bl,8
	je Block12

 Block10:
	mov eax,dword ptr [esp+0x18]
	and ebx,0xFFFFFFF7
	mov dword ptr [esp+0x10],ebx
	cmp eax,edi
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov dword ptr [esp+0x40],1
	test bl,4
	je Block15

 Block13:
	mov eax,dword ptr [esp+0x1C]
	and ebx,0xFFFFFFFB
	mov dword ptr [esp+0x10],ebx
	cmp eax,edi
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov dword ptr [esp+0x40],edi
	test bl,2
	je Block18

 Block16:
	mov eax,dword ptr [esp+0x20]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x10],ebx
	cmp eax,edi
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test bl,1
	je Block21

 Block19:
	mov eax,dword ptr [esp+0x24]
	and ebx,0xFFFFFFFE
	cmp eax,edi
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	cmp byte ptr [esp+0x48],0
	je Block23

 Block22:
	mov eax,0x71
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x34
	ret 4

 Block23:
	lea edx,[esp+0x34]
	push 0xD6E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push edi
	or ebx,0x20
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x4C],4
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::Find__0
	mov edi,5
	test eax,eax
	jge Block27

 Block24:
	lea eax,[esp+0x30]
	push 0xD6F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	or ebx,0x40
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x4C],edi
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::Find__0
	test eax,eax
	jge Block27

 Block25:
	lea ecx,[esp+0x2C]
	push 0x1AA7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	or ebx,0x80
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x4C],6
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::Find__0
	test eax,eax
	jge Block27

 Block26:
	lea edx,[esp+0x28]
	push 0xD70
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push 0
	push eax
	mov ecx,esi
	or ebx,0x100
	call ZXString<char>::Find__0
	mov byte ptr [esp+0x48],0
	test eax,eax
	jl Block28

 Block27:
	mov byte ptr [esp+0x48],1

 Block28:
	test ebx,0x100
	je Block31

 Block29:
	mov eax,dword ptr [esp+0x28]
	and ebx,0xFFFFFEFF
	mov dword ptr [esp+0x10],ebx
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	mov dword ptr [esp+0x40],edi
	test bl,bl
	jns Block34

 Block32:
	mov eax,dword ptr [esp+0x2C]
	and ebx,0xFFFFFF7F
	mov dword ptr [esp+0x10],ebx
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov dword ptr [esp+0x40],4
	test bl,0x40
	je Block37

 Block35:
	mov eax,dword ptr [esp+0x30]
	and ebx,0xFFFFFFBF
	mov dword ptr [esp+0x10],ebx
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test bl,0x20
	je Block40

 Block38:
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block40:
	movzx eax,byte ptr [esp+0x48]
	neg eax
	sbb eax,eax
	and eax,0x73
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x34
	ret 4
}
}
// CUIStatusBar::ChatLogAdd
_SUB_EXCEPTION_HANDLER(47AEC0)
__SUB_CLASS_THIS(0047AEC0, __thiscall, 37834,  CUIStatusBar, void, const char*, long, long, int32_t, NakedParam<ZRef<GW_ItemSlotBase>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_47AEC0
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
	mov edi,ecx
	mov dword ptr [esp+0x24],edi
	xor ebx,ebx
	mov dword ptr [esp+0x54],ebx
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x18],ebx
	mov eax,dword ptr [esp+0x5C]
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x5C],2
	mov dword ptr [esp+0x1C],ebx
	call ZXString16::AssignCharStr
	mov ecx,dword ptr [TSingleton<CMacroSysMan>::ms_pInstance]
	mov byte ptr [esp+0x54],3
	cmp dword ptr [ecx+0xC],ebx
	je Block7

 Block1:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x18]
	mov dword ptr [esp+0x60],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString16::op_assign
	mov ecx,dword ptr [TSingleton<CMacroSysMan>::ms_pInstance]
	call CMacroSysMan::CanItShow
	cmp eax,ebx
	jne Block7

 Block2:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x54],2
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x54],1
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	lea ecx,[esp+0x6C]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	jmp Block79

 Block7:
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x1C]
	call ZXString16::op_assign
	push ebx
	push ebx
	lea ecx,[esp+0x20]
	call ZXString16::TrimRight
	mov ecx,eax
	call ZXString16::TrimLeft
	mov ebp,dword ptr [esp+0x60]
	xor esi,esi

 Block8:
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	je Block66

 Block9:
	cmp word ptr [eax],bx
	je Block66

 Block10:
	lea ecx,[esp+0x3C]
	inc esi
	push ecx
	mov dword ptr [esp+0x60],esi
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block63

 Block11:
	mov byte ptr [esp+0x54],4
	cmp ebp,0xE
	je Block15

 Block12:
	cmp ebp,0x10
	je Block15

 Block13:
	cmp ebp,0x13
	je Block15

 Block14:
	cmp ebp,0x14
	jne Block17

 Block15:
	cmp esi,1
	jne Block17

 Block16:
	lea eax,[esi-0x27]
	jmp Block18

 Block17:
	xor eax,eax

 Block18:
	sub eax,dword ptr [edi+0x16A8]
	mov edx,dword ptr [esp+0x14]
	lea ecx,[esp+0x3C]
	push ecx
	add eax,0x223
	push eax
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi+ebp*4+0x1630]
	mov byte ptr [esp+0x60],5
	cmp ecx,ebx
	je Block64

 Block19:
	mov byte ptr [esp+0x60],4
	call IWzFont::CalcLongestText
	cmp word ptr [esp+0x3C],8
	mov esi,eax
	mov byte ptr [esp+0x54],3
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebx
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	push esi
	push ebx
	lea edx,[esp+0x68]
	push edx
	lea ecx,[esp+0x20]
	call ZXString16::Mid
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x58],6
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x54],3
	cmp eax,ebx
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	push 0xFFFFFFFF
	push esi
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x20]
	call ZXString16::Mid
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x58],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x54],3
	cmp eax,ebx
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block27:
	push ebx
	lea ecx,[esp+0x18]
	call ZXString16::TrimLeft
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block32

 Block28:
	cmp word ptr [eax],bx
	je Block32

 Block29:
	cmp ebp,7
	jl Block31

 Block30:
	cmp ebp,0xC
	jle Block32

 Block31:
	push eax
	lea ecx,[esp+0x18]
	push offset _S_S__5
	push ecx
	call ZXString16::Format
	add esp,0xC

 Block32:
	lea eax,[ebp-0xB]
	cmp eax,0xC
	ja Block43

 Block33:
	cmp EAX, 0
je Block41
cmp EAX, 1
je Block43
cmp EAX, 2
je Block34
cmp EAX, 3
je Block35
cmp EAX, 4
je Block36
cmp EAX, 5
je Block39
cmp EAX, 6
je Block43
cmp EAX, 7
je Block42
cmp EAX, 8
je Block37
cmp EAX, 9
je Block38
cmp EAX, 10
je Block39
cmp EAX, 11
je Block40
cmp EAX, 12
je Block40


 Block34:
	mov esi,0xB0CAE7FF
	jmp Block44

 Block35:
	mov esi,0xCCFFBFDD
	jmp Block44

 Block36:
	mov esi,0xFFF74B4B
	jmp Block44

 Block37:
	mov esi,dword ptr [esp+0x64]
	inc esi
	neg esi
	sbb esi,esi
	and esi,0x7E9A6FDA
	add esi,0x80FF5C59
	jmp Block44

 Block38:
	mov esi,0x80FF5C59
	jmp Block44

 Block39:
	mov esi,0xDDFFC600
	jmp Block44

 Block40:
	mov esi,0xFF99CC33
	jmp Block44

 Block41:
	mov esi,0xB0FFFFFF
	jmp Block44

 Block42:
	mov esi,0x2C4D1AAD
	jmp Block44

 Block43:
	xor esi,esi

 Block44:
	push 0x34
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov edi,eax
	mov dword ptr [esp+0x28],edi
	cmp edi,ebx
	je Block48

 Block45:
	mov edx,dword ptr [esp+0x70]
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],edx
	mov eax,dword ptr [esp+0x78]
	mov dword ptr [esp+0x34],esp
	cmp eax,ebx
	je Block47

 Block46:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block47:
	mov ecx,dword ptr [esp+0x70]
	mov edx,dword ptr [esp+0x6C]
	xor eax,eax
	cmp dword ptr [esp+0x64],1
	mov byte ptr [esp+0x5C],9
	setle al
	push eax
	push ecx
	push edx
	push esi
	push ebp
	push ecx
	mov ecx,esp
	lea eax,[esp+0x3C]
	mov dword ptr [esp+0x50],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString16::op_assign
	mov ecx,edi
	mov byte ptr [esp+0x74],8
	call CUIStatusBar::CChatLog::_ctor_0
	mov esi,eax
	jmp Block49

 Block48:
	xor esi,esi

 Block49:
	mov dword ptr [esp+0x38],esi
	cmp esi,ebx
	je Block51

 Block50:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block51:
	push 0xFFFFFFFF
	mov ecx,offset CUIStatusBar::m_aChatLog
	mov byte ptr [esp+0x58],0xA
	call ZArray<ZRef<CUIStatusBar::CChatLog>>::InsertBefore
	mov edi,eax
	cmp esi,ebx
	je Block53

 Block52:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block53:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block58

 Block54:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block57

 Block55:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	cmp ecx,ebx
	je Block57

 Block56:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block57:
	mov dword ptr [edi+4],ebx

 Block58:
	mov dword ptr [edi+4],esi
	mov byte ptr [esp+0x54],3
	cmp esi,ebx
	je Block62

 Block59:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block61

 Block60:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block61:
	mov dword ptr [esp+0x38],ebx

 Block62:
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x1C]
	call ZXString16::op_assign
	push ebx
	push ebx
	lea ecx,[esp+0x20]
	call ZXString16::TrimRight
	mov ecx,eax
	call ZXString16::TrimLeft
	mov esi,dword ptr [esp+0x5C]
	mov edi,dword ptr [esp+0x24]
	jmp Block8

 Block63:
	push eax
	call _com_issue_error

 Block64:
	push 0x80004003
	call _com_issue_error

 Block66:
	mov eax,dword ptr [CUIStatusBar::m_aChatLog]
	cmp eax,ebx
	je Block69

 Block67:
	cmp dword ptr [eax-4],0x40
	jbe Block69

 Block68:
	push ebx
	mov ecx,offset CUIStatusBar::m_aChatLog
	call ZArray<ZRef<CUIStatusBar::CChatLog>>::FindIndex
	push eax
	mov ecx,offset CUIStatusBar::m_aChatLog
	call ZArray<ZRef<CUIStatusBar::CChatLog>>::RemoveAt
	jmp Block66

 Block69:
	mov ecx,edi
	call CUIStatusBar::_RefreshChatLog
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x54],2
	cmp eax,ebx
	je Block71

 Block70:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block71:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x54],1
	cmp eax,ebx
	je Block73

 Block72:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block73:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x54],bl
	cmp eax,ebx
	je Block75

 Block74:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block75:
	mov eax,dword ptr [esp+0x70]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp eax,ebx
	je Block79

 Block76:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block79

 Block77:
	mov ecx,dword ptr [esp+0x70]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x70]
	cmp ecx,ebx
	je Block79

 Block78:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block79:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 0x18
}
}
// CUIStatusBar::SetItemMsg
__SUB_CLASS_THIS(0046CDF0, __thiscall, 37832,  CUIStatusBar, int32_t, const char*, long, unsigned long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	test edi,edi
	jne Block2

 Block1:
	lea ecx,[esi+0x17A8]
	call CFloatNotice::DeleteFloatNotice
	lea eax,[edi+1]
	pop edi
	pop esi
	ret 0xC

 Block2:
	cmp dword ptr [esi+0x17A0],0
	jne Block6

 Block3:
	cmp dword ptr [esi+0x1794],0
	jne Block6

 Block4:
	cmp dword ptr [esi+0x17AC],0
	jne Block6

 Block5:
	call timeGetTime
	add eax,dword ptr [esp+0x14]
	push 0xC00616FE
	mov dword ptr [esi+0x17B4],eax
	mov eax,dword ptr [esp+0x14]
	push 0xA0
	push eax
	push edi
	lea ecx,[esi+0x17A8]
	call CFloatNotice::CreateFloatNotice
	pop edi
	mov eax,1
	pop esi
	ret 0xC

 Block6:
	pop edi
	xor eax,eax
	pop esi
	ret 0xC
}
}
