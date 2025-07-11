#include "regen.hpp"
// MemoryGameDlg.ipp
#include "MemoryGameDlg.hpp"

// CMemoryGameDlg::DrawReadyOrNot
_SUB_EXCEPTION_HANDLER(230880)
__SUB_CLASS_THIS0(00230880, __thiscall, 138484,  CMemoryGameDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_230880
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
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov eax,dword ptr [edi+0xE4]
	cmp eax,2
	jl Block93

 Block1:
	lea ebx,[ebp+3]
	cmp dword ptr [edi+0x220],ebp
	je Block10

 Block2:
	mov eax,ebx
	mov word ptr [esp+0x24],ax
	mov dword ptr [esp+0x2C],0xFFFFFFFE
	mov ecx,dword ptr [edi+0x220]
	mov dword ptr [esp+0x5C],ebp
	cmp ecx,ebp
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	mov ecx,ebx
	mov dword ptr [esp+0x5C],1
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x5C],2
	cmp ecx,ebp
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 6
	push ebp
	push ebp
	push ebp
	push ebp
	lea edx,[esp+0x38]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x220]
	cmp esi,eax
	je Block19

 Block15:
	mov dword ptr [edi+0x220],eax
	cmp eax,ebp
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block17:
	cmp esi,ebp
	je Block19

 Block18:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block19:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block21:
	mov esi,8
	mov byte ptr [esp+0x5C],1
	cmp word ptr [esp+0x24],si
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebp
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x34],si
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebp
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	lea edx,[esp+0x1C]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x5C],ebx
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],eax
	cmp eax,ebp
	je Block31

 Block30:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block31:
	mov esi,dword ptr [edi+0x220]
	mov byte ptr [esp+0x5C],4
	cmp esi,ebp
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
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
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebp
	jge Block35

 Block34:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block35:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x5C],bl
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
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp eax,ebp
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,5
	mov ecx,0xD
	mov dword ptr [esp+0x5C],ebx
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],eax
	cmp eax,ebp
	je Block43

 Block42:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block43:
	mov esi,dword ptr [edi+0x220]
	mov byte ptr [esp+0x5C],6
	cmp esi,ebp
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
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
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,ebp
	jge Block47

 Block46:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block47:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x5C],bl
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebp
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
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp eax,ebp
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	mov esi,dword ptr [edi+0x220]
	cmp esi,ebp
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,ebp
	jge Block57

 Block56:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block57:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x24]
	push edx
	call esi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block59

 Block58:
	push eax
	call _com_issue_error

 Block59:
	lea ecx,[esp+0x34]
	mov ebx,7
	push ecx
	mov dword ptr [esp+0x60],ebx
	call esi
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	mov ecx,dword ptr [edi+0x220]
	mov byte ptr [esp+0x5C],8
	cmp ecx,ebp
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	lea eax,[esp+0x24]
	push eax
	lea edx,[esp+0x38]
	push edx
	push 0x3F
	push 0x1EF
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x34],si
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebp
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x24],si
	jne Block70

 Block68:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	cmp eax,ebp
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block71:
	cmp dword ptr [edi+0xCA4],ebp
	je Block73

 Block72:
	lea ecx,[esp+0x20]
	push 0x65C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x14],1
	jmp Block74

 Block73:
	lea edx,[esp+0x18]
	push 0x65D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x14],2

 Block74:
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block76

 Block75:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block76:
	mov ecx,dword ptr [edi+0x1FC]
	mov dword ptr [esp+0x68],0xB
	cmp ecx,ebp
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
	lea eax,[esp+0x50]
	mov bl,0xA
	push eax
	mov byte ptr [esp+0x6C],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [esp+0x64],0xC
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	mov dword ptr [ecx],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block81

 Block79:
	cmp eax,0x80004002
	je Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	mov eax,dword ptr [edi+0x220]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block83

 Block82:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block83:
	call CAnimationDisplayer::LoadCanvas
	add esp,8
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x44],si
	jne Block86

 Block84:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,ebp
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov ebx,dword ptr [esp+0x14]
	test bl,2
	je Block90

 Block88:
	mov ecx,dword ptr [esp+0x18]
	and ebx,0xFFFFFFFD
	cmp ecx,ebp
	je Block90

 Block89:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],ebp

 Block90:
	test bl,1
	je Block93

 Block91:
	mov ecx,dword ptr [esp+0x20]
	cmp ecx,ebp
	je Block93

 Block92:
	call _xbstr_t::Data_t::Release

 Block93:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret
}
}
// CMemoryGameDlg::OnClickStartButton
_SUB_EXCEPTION_HANDLER(227A50)
__SUB_CLASS_THIS0(00227A50, __thiscall, 138484,  CMemoryGameDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_227A50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	cmp dword ptr [ecx+0xE4],1
	jl Block2

 Block1:
	push 0x90
	lea ecx,[esp+8]
	call COutPacket::_ctor_1
	push 0x3D
	lea ecx,[esp+8]
	mov dword ptr [esp+0x20],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+4]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+8]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret
}
}
// CMemoryGameDlg::DrawScore
_SUB_EXCEPTION_HANDLER(22A880)
__SUB_CLASS_THIS0(0022A880, __thiscall, 138484,  CMemoryGameDlg, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_22A880
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
	mov edi,ecx
	mov dword ptr [ebp-0x28],edi
	mov eax,dword ptr [edi+0x228]
	xor ebx,ebx
	cmp eax,ebx
	je Block2

 Block1:
	mov dword ptr [edi+0x228],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [edi+0x228]
	mov esi,dword ptr [edi+0x224]
	cmp esi,eax
	je Block7

 Block3:
	mov dword ptr [edi+0x224],eax
	cmp eax,ebx
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block5:
	cmp esi,ebx
	je Block7

 Block6:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block7:
	mov dword ptr [ebp-0x5C],ebx
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp-0x70],ebx
	lea edx,[ebp-0x38]
	push edx
	mov byte ptr [ebp-4],1
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ecx,3
	mov word ptr [ebp-0x24],cx
	mov dword ptr [ebp-0x1C],ebx
	mov byte ptr [ebp-4],cl
	mov ecx,dword ptr [_D_G_GR]
	cmp ecx,ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea edx,[ebp-0x38]
	push edx
	lea eax,[ebp-0x24]
	push eax
	push 6
	push ebx
	push ebx
	push ebx
	push ebx
	lea edx,[ebp-0x14]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x224]
	cmp esi,eax
	je Block16

 Block12:
	mov dword ptr [edi+0x224],eax
	cmp eax,ebx
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block14:
	cmp esi,ebx
	je Block16

 Block15:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block16:
	mov eax,dword ptr [ebp-0x14]
	cmp eax,ebx
	je Block18

 Block17:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block18:
	cmp word ptr [ebp-0x24],8
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],2
	jne Block21

 Block19:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[ebp-0x24]
	push edx
	call esi

 Block22:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],1
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	cmp eax,ebx
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[ebp-0x38]
	push ecx
	call esi

 Block26:
	lea edx,[ebp-0x14]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,4
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp-0x24],cx
	mov dword ptr [ebp-0x1C],eax
	test eax,eax
	je Block28

 Block27:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block28:
	mov esi,dword ptr [edi+0x224]
	mov byte ptr [ebp-4],5
	test esi,esi
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov edx,dword ptr [ebp-0x24]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x20]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x1C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x18]
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
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],bl
	jne Block35

 Block33:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block38

 Block37:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block38:
	lea eax,[ebp-0x14]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [ebp-4],6
	mov word ptr [ebp-0x24],cx
	mov dword ptr [ebp-0x1C],eax
	test eax,eax
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block40:
	mov esi,dword ptr [edi+0x224]
	mov byte ptr [ebp-4],7
	test esi,esi
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	mov edx,dword ptr [ebp-0x24]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x20]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x1C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x18]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block44

 Block43:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block44:
	mov ebx,8
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x24],bx
	jne Block47

 Block45:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block50:
	mov esi,dword ptr [edi+0x224]
	test esi,esi
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block54

 Block53:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block54:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x24]
	push edx
	call esi
	lea eax,[ebp-0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	lea ecx,[ebp-0x38]
	push ecx
	mov byte ptr [ebp-4],8
	call esi
	lea edx,[ebp-0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	mov ecx,dword ptr [edi+0x224]
	mov byte ptr [ebp-4],9
	test ecx,ecx
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	lea eax,[ebp-0x24]
	push eax
	lea edx,[ebp-0x38]
	push edx
	push 0xCF
	push 0x19B
	call IWzVector2D::RelMove
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x38],bx
	jne Block63

 Block61:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],bx
	jne Block67

 Block65:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block68:
	lea ecx,[ebp-0x14]
	push 0x1A15
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [edi+0xCEC]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp-0x5C]
	push eax
	mov byte ptr [ebp-4],0xA
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x14]
	add esp,0xC
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block70

 Block69:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block70:
	lea ecx,[ebp-0x58]
	push ecx
	call esi
	lea edx,[ebp-0x58]
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
	lea eax,[ebp-0x48]
	push eax
	mov byte ptr [ebp-4],0xB
	call esi
	lea ecx,[ebp-0x48]
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
	lea edx,[ebp-0x6C]
	push edx
	mov byte ptr [ebp-4],0xC
	call esi
	lea eax,[ebp-0x6C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block76

 Block75:
	push eax
	call _com_issue_error

 Block76:
	lea ecx,[ebp-0x24]
	push ecx
	mov byte ptr [ebp-4],0xD
	call esi
	lea edx,[ebp-0x24]
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
	lea eax,[ebp-0x38]
	push eax
	mov byte ptr [ebp-4],0xE
	call esi
	lea ecx,[ebp-0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block80

 Block79:
	push eax
	call _com_issue_error

 Block80:
	mov edi,dword ptr [ebp-0x5C]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	mov bl,0xF
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	lea edx,[ebp-0x58]
	push edx
	lea eax,[ebp-0x48]
	push eax
	lea ecx,[ebp-0x6C]
	push ecx
	lea edx,[ebp-0x24]
	push edx
	lea eax,[ebp-0x38]
	push eax
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
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x28]
	mov ecx,dword ptr [ecx+0x204]
	mov byte ptr [ebp-4],0x10
	test ecx,ecx
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	lea edx,[ebp-0x90]
	push edx
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x11
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block85

 Block83:
	cmp eax,0x80004002
	je Block85

 Block84:
	push eax
	call _com_issue_error

 Block85:
	mov eax,dword ptr [ebp-0x28]
	mov ecx,dword ptr [eax+0x224]
	mov byte ptr [ebp-4],0x12
	test ecx,ecx
	jne Block87

 Block86:
	push 0x80004003
	call _com_issue_error

 Block87:
	mov esi,dword ptr [ebp-0x14]
	push esi
	lea edx,[ebp-0x80]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x80],8
	jne Block96

 Block88:
	xor eax,eax
	mov word ptr [ebp-0x80],ax
	mov eax,dword ptr [ebp-0x78]
	test eax,eax
	je Block90

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block90:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block91:
	mov byte ptr [ebp-4],0x11
	test esi,esi
	je Block93

 Block92:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block93:
	cmp word ptr [ebp-0x90],8
	mov byte ptr [ebp-4],bl
	jne Block97

 Block94:
	mov eax,dword ptr [ebp-0x88]
	xor ecx,ecx
	mov word ptr [ebp-0x90],cx
	test eax,eax
	je Block98

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block96:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x80]
	push ecx
	call edi
	jmp Block91

 Block97:
	lea edx,[ebp-0x90]
	push edx
	call edi

 Block98:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],0xE
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[ebp-0x38]
	push ecx
	call edi

 Block102:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0xD
	jne Block105

 Block103:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea eax,[ebp-0x24]
	push eax
	call edi

 Block106:
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0xC
	jne Block109

 Block107:
	mov eax,dword ptr [ebp-0x64]
	xor ecx,ecx
	mov word ptr [ebp-0x6C],cx
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea edx,[ebp-0x6C]
	push edx
	call edi

 Block110:
	cmp word ptr [ebp-0x48],8
	mov byte ptr [ebp-4],0xB
	jne Block113

 Block111:
	xor eax,eax
	mov word ptr [ebp-0x48],ax
	mov eax,dword ptr [ebp-0x40]
	test eax,eax
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea ecx,[ebp-0x48]
	push ecx
	call edi

 Block114:
	cmp word ptr [ebp-0x58],8
	mov byte ptr [ebp-4],1
	jne Block117

 Block115:
	mov eax,dword ptr [ebp-0x50]
	xor edx,edx
	mov word ptr [ebp-0x58],dx
	test eax,eax
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea eax,[ebp-0x58]
	push eax
	call edi

 Block118:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x48]
	push ecx
	call edi
	lea edx,[ebp-0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block120

 Block119:
	push eax
	call _com_issue_error

 Block120:
	mov eax,3
	mov word ptr [ebp-0x58],ax
	mov dword ptr [ebp-0x50],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x14
	test ecx,ecx
	jne Block122

 Block121:
	push 0x80004003
	call _com_issue_error

 Block122:
	lea edx,[ebp-0x48]
	push edx
	lea eax,[ebp-0x58]
	push eax
	push 6
	push 0
	push 0
	push 0
	push 0
	lea edx,[ebp-0x14]
	push edx
	call IWzGr2D::CreateLayer
	mov ecx,dword ptr [ebp-0x28]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+0x228]
	cmp esi,eax
	je Block127

 Block123:
	mov dword ptr [ecx+0x228],eax
	test eax,eax
	je Block125

 Block124:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block125:
	test esi,esi
	je Block127

 Block126:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block127:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block129

 Block128:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block129:
	mov esi,8
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x58],si
	jne Block132

 Block130:
	mov eax,dword ptr [ebp-0x50]
	xor ecx,ecx
	mov word ptr [ebp-0x58],cx
	test eax,eax
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea edx,[ebp-0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block133:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x48],si
	jne Block136

 Block134:
	xor eax,eax
	mov word ptr [ebp-0x48],ax
	mov eax,dword ptr [ebp-0x40]
	test eax,eax
	je Block137

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block137

 Block136:
	lea ecx,[ebp-0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block137:
	mov ecx,dword ptr [ebp-0x28]
	lea edx,[ebp-0x14]
	push edx
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x15
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp-0x24],cx
	mov dword ptr [ebp-0x1C],eax
	test eax,eax
	je Block139

 Block138:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block139:
	mov ecx,dword ptr [ebp-0x28]
	mov esi,dword ptr [ecx+0x228]
	mov byte ptr [ebp-4],0x16
	test esi,esi
	jne Block141

 Block140:
	push 0x80004003
	call _com_issue_error

 Block141:
	mov ecx,dword ptr [ebp-0x24]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x64]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x20]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0x1C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x18]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block143

 Block142:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block143:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],bl
	jne Block146

 Block144:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block147:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block149

 Block148:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block149:
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,dword ptr [ebp-0x28]
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x17
	mov edx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp-0x24],dx
	mov dword ptr [ebp-0x1C],eax
	test eax,eax
	je Block151

 Block150:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block151:
	mov eax,dword ptr [ebp-0x28]
	mov esi,dword ptr [eax+0x228]
	mov byte ptr [ebp-4],0x18
	test esi,esi
	jne Block153

 Block152:
	push 0x80004003
	call _com_issue_error

 Block153:
	mov edx,dword ptr [ebp-0x24]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x20]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x1C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x18]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block155

 Block154:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block155:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],bl
	jne Block158

 Block156:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block159:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block161

 Block160:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block161:
	mov eax,dword ptr [ebp-0x28]
	mov esi,dword ptr [eax+0x228]
	test esi,esi
	jne Block163

 Block162:
	push 0x80004003
	call _com_issue_error

 Block163:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push esi
	call edx
	test eax,eax
	jge Block165

 Block164:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block165:
	lea eax,[ebp-0x48]
	push eax
	call edi
	lea ecx,[ebp-0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block167

 Block166:
	push eax
	call _com_issue_error

 Block167:
	lea edx,[ebp-0x58]
	mov bl,0x19
	push edx
	mov byte ptr [ebp-4],bl
	call edi
	lea eax,[ebp-0x58]
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
	mov esi,dword ptr [ebp-0x28]
	mov ecx,dword ptr [esi+0x228]
	mov byte ptr [ebp-4],0x1A
	test ecx,ecx
	jne Block171

 Block170:
	push 0x80004003
	call _com_issue_error

 Block171:
	lea edx,[ebp-0x48]
	push edx
	lea eax,[ebp-0x58]
	push eax
	push 0xCF
	push 0x1F1
	call IWzVector2D::RelMove
	mov byte ptr [ebp-4],bl
	mov ebx,8
	cmp word ptr [ebp-0x58],bx
	jne Block174

 Block172:
	mov eax,dword ptr [ebp-0x50]
	xor ecx,ecx
	mov word ptr [ebp-0x58],cx
	test eax,eax
	je Block175

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block174:
	lea edx,[ebp-0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block175:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x48],bx
	jne Block178

 Block176:
	xor eax,eax
	mov word ptr [ebp-0x48],ax
	mov eax,dword ptr [ebp-0x40]
	test eax,eax
	je Block179

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block179

 Block178:
	lea ecx,[ebp-0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block179:
	lea edx,[ebp-0x14]
	push 0x1A15
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xCF0]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp-0x70]
	push edx
	mov byte ptr [ebp-4],0x1B
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x14]
	add esp,0xC
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block181

 Block180:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block181:
	lea eax,[ebp-0x24]
	push eax
	call edi
	lea ecx,[ebp-0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block183

 Block182:
	push eax
	call _com_issue_error

 Block183:
	lea edx,[ebp-0x38]
	push edx
	mov byte ptr [ebp-4],0x1C
	call edi
	lea eax,[ebp-0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block185

 Block184:
	push eax
	call _com_issue_error

 Block185:
	lea ecx,[ebp-0x6C]
	push ecx
	mov byte ptr [ebp-4],0x1D
	call edi
	lea edx,[ebp-0x6C]
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
	lea eax,[ebp-0x48]
	push eax
	mov byte ptr [ebp-4],0x1E
	call edi
	lea ecx,[ebp-0x48]
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
	lea edx,[ebp-0x58]
	push edx
	mov byte ptr [ebp-4],0x1F
	call edi
	lea eax,[ebp-0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block191

 Block190:
	push eax
	call _com_issue_error

 Block191:
	mov edi,dword ptr [ebp-0x70]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	mov bl,0x20
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	lea ecx,[ebp-0x24]
	push ecx
	lea edx,[ebp-0x38]
	push edx
	lea eax,[ebp-0x6C]
	push eax
	lea ecx,[ebp-0x48]
	push ecx
	lea edx,[ebp-0x58]
	push edx
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
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov eax,dword ptr [ebp-0x28]
	mov ecx,dword ptr [eax+0x204]
	mov byte ptr [ebp-4],0x21
	test ecx,ecx
	jne Block193

 Block192:
	push 0x80004003
	call _com_issue_error

 Block193:
	lea edx,[ebp-0x80]
	push edx
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x22
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block196

 Block194:
	cmp eax,0x80004002
	je Block196

 Block195:
	push eax
	call _com_issue_error

 Block196:
	mov eax,dword ptr [ebp-0x28]
	mov ecx,dword ptr [eax+0x228]
	mov byte ptr [ebp-4],0x23
	test ecx,ecx
	jne Block198

 Block197:
	push 0x80004003
	call _com_issue_error

 Block198:
	mov esi,dword ptr [ebp-0x14]
	push esi
	lea edx,[ebp-0x90]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x90],8
	jne Block201

 Block199:
	xor eax,eax
	mov word ptr [ebp-0x90],ax
	mov eax,dword ptr [ebp-0x88]
	test eax,eax
	je Block202

 Block200:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block202

 Block201:
	lea ecx,[ebp-0x90]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block202:
	mov byte ptr [ebp-4],0x22
	test esi,esi
	je Block204

 Block203:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block204:
	cmp word ptr [ebp-0x80],8
	mov byte ptr [ebp-4],bl
	jne Block207

 Block205:
	mov eax,dword ptr [ebp-0x78]
	xor ecx,ecx
	mov word ptr [ebp-0x80],cx
	test eax,eax
	je Block208

 Block206:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block208

 Block207:
	lea edx,[ebp-0x80]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block208:
	mov ebx,8
	mov byte ptr [ebp-4],0x1F
	cmp word ptr [ebp-0x58],bx
	jne Block215

 Block209:
	xor eax,eax
	mov word ptr [ebp-0x58],ax
	mov eax,dword ptr [ebp-0x50]
	test eax,eax
	je Block211

 Block210:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block211:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block212:
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0x48],bx
	jne Block216

 Block213:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	test eax,eax
	je Block217

 Block214:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block217

 Block215:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x58]
	push ecx
	call esi
	jmp Block212

 Block216:
	lea eax,[ebp-0x48]
	push eax
	call esi

 Block217:
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp-0x6C],bx
	jne Block220

 Block218:
	mov eax,dword ptr [ebp-0x64]
	xor ecx,ecx
	mov word ptr [ebp-0x6C],cx
	test eax,eax
	je Block221

 Block219:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block221

 Block220:
	lea edx,[ebp-0x6C]
	push edx
	call esi

 Block221:
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp-0x38],bx
	jne Block224

 Block222:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block225

 Block223:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block225

 Block224:
	lea ecx,[ebp-0x38]
	push ecx
	call esi

 Block225:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],bx
	jne Block228

 Block226:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block229

 Block227:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block229

 Block228:
	lea eax,[ebp-0x24]
	push eax
	call esi

 Block229:
	mov byte ptr [ebp-4],0
	test edi,edi
	je Block231

 Block230:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block231:
	mov eax,dword ptr [ebp-0x5C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block233

 Block232:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block233:
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
	ret
}
}
// CMemoryGameDlg::CMemoryGameDlg
_SUB_EXCEPTION_HANDLER(22E830)
__SUB_CLASS_THIS0(0022E830, __thiscall, 138482,  CMemoryGameDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_22E830
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
	mov dword ptr [esp+0x18],esi
	call CMiniRoomBaseDlg::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CMemoryGameDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CMemoryGameDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CMemoryGameDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x54],edi
	mov dword ptr [esi+0x1A8],edi
	mov dword ptr [esi+0x1B0],edi
	mov dword ptr [esi+0x1B8],edi
	mov dword ptr [esi+0x1C0],edi
	mov dword ptr [esi+0x1C8],edi
	mov dword ptr [esi+0x1D0],edi
	mov dword ptr [esi+0x1D8],edi
	mov dword ptr [esi+0x1E0],edi
	mov dword ptr [esi+0x1E8],edi
	mov dword ptr [esi+0x1F0],edi
	mov dword ptr [esi+0x1FC],edi
	lea ebp,[esi+0x200]
	mov dword ptr [ebp],edi
	mov dword ptr [esi+0x204],edi
	mov dword ptr [esi+0x208],edi
	mov dword ptr [esi+0x20C],edi
	mov dword ptr [esi+0x210],edi
	mov dword ptr [esi+0x214],edi
	mov dword ptr [esi+0x218],edi
	mov dword ptr [esi+0x21C],edi
	mov dword ptr [esi+0x220],edi
	mov dword ptr [esi+0x224],edi
	mov dword ptr [esi+0x228],edi
	mov dword ptr [esi+0x22C],edi
	mov dword ptr [esi+0x230],edi
	mov dword ptr [esi+0x234],edi
	mov dword ptr [esi+0x238],edi
	mov dword ptr [esi+0x23C],edi
	lea ecx,[esi+0x240]
	mov byte ptr [esp+0x54],0x1B
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xC9C],edi
	mov dword ptr [esi+0xCAC],edi
	mov dword ptr [esi+0xCB0],edi
	mov byte ptr [esp+0x54],0x1E
	mov dword ptr [esi+0xD7C],edi
	call get_update_time
	mov dword ptr [esi+0xD80],eax
	lea eax,[esp+0x14]
	push 0x62D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x64],0x1F
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x54],0x1E
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call ebx
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x58],0x20
	call ebx
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	push edi
	push edi
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x62E
	mov bl,0x21
	push ecx
	mov byte ptr [esp+0x70],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x68],0x22
	cmp dword ptr [_D_G_RM],edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[esp+0x50]
	mov byte ptr [esp+0x68],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],0x23
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0x1FC]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x54],bl
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov ebx,8
	mov byte ptr [esp+0x54],0x20
	cmp word ptr [esp+0x1C],bx
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,edi
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov byte ptr [esp+0x54],0x1E
	cmp word ptr [esp+0x2C],bx
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,edi
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push eax
	call ebx
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x58],0x24
	call ebx
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	push edi
	push edi
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x62F
	mov bl,0x25
	push eax
	mov byte ptr [esp+0x70],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x68],0x26
	cmp dword ptr [_D_G_RM],edi
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x6C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],0x27
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block32

 Block30:
	cmp eax,0x80004002
	je Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov byte ptr [esp+0x54],bl
	mov ebx,8
	cmp word ptr [esp+0x3C],bx
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,edi
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov byte ptr [esp+0x54],0x24
	cmp word ptr [esp+0x2C],bx
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,edi
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov byte ptr [esp+0x54],0x1E
	cmp word ptr [esp+0x1C],bx
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,edi
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C]
	push edx
	call ebx
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0x58],0x28
	call ebx
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	push edi
	push edi
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x630
	mov bl,0x29
	push edx
	mov byte ptr [esp+0x70],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x68],0x2A
	cmp dword ptr [_D_G_RM],edi
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea eax,[esp+0x50]
	mov byte ptr [esp+0x68],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],0x2B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0x204]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block53

 Block51:
	cmp eax,0x80004002
	je Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	mov ebp,8
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x3C],bp
	jne Block60

 Block54:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,edi
	je Block56

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block56:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block57:
	mov byte ptr [esp+0x54],0x28
	cmp word ptr [esp+0x2C],bp
	jne Block61

 Block58:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,edi
	je Block62

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block60:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x3C]
	push edx
	call ebx
	jmp Block57

 Block61:
	lea ecx,[esp+0x2C]
	push ecx
	call ebx

 Block62:
	mov byte ptr [esp+0x54],0x1E
	cmp word ptr [esp+0x1C],bp
	jne Block65

 Block63:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,edi
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea eax,[esp+0x1C]
	push eax
	call ebx

 Block66:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x63E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0x1FC]
	mov byte ptr [esp+0x60],0x2C
	cmp ecx,edi
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x64],0x1E
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x5C],0x2D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0x208]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block71

 Block69:
	cmp eax,0x80004002
	je Block71

 Block70:
	push eax
	call _com_issue_error

 Block71:
	mov byte ptr [esp+0x54],0x1E
	cmp word ptr [esp+0x3C],bp
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea ecx,[esp+0x3C]
	push ecx
	call ebx

 Block75:
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x63F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0x1FC]
	mov byte ptr [esp+0x60],0x2E
	cmp ecx,edi
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x64],0x1E
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x5C],0x2F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0x214]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block80

 Block78:
	cmp eax,0x80004002
	je Block80

 Block79:
	push eax
	call _com_issue_error

 Block80:
	mov byte ptr [esp+0x54],0x1E
	cmp word ptr [esp+0x3C],bp
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,edi
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea edx,[esp+0x3C]
	push edx
	call ebx

 Block84:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x640
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0x1FC]
	mov byte ptr [esp+0x60],0x30
	cmp ecx,edi
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x64],0x1E
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x5C],0x31
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0x20C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block89

 Block87:
	cmp eax,0x80004002
	je Block89

 Block88:
	push eax
	call _com_issue_error

 Block89:
	mov byte ptr [esp+0x54],0x1E
	cmp word ptr [esp+0x3C],bp
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea ecx,[esp+0x3C]
	push ecx
	call ebx

 Block93:
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x641
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0x1FC]
	mov byte ptr [esp+0x60],0x32
	cmp ecx,edi
	jne Block95

 Block94:
	push 0x80004003
	call _com_issue_error

 Block95:
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x64],0x1E
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x5C],0x33
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0x210]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block98

 Block96:
	cmp eax,0x80004002
	je Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	mov byte ptr [esp+0x54],0x1E
	cmp word ptr [esp+0x3C],bp
	jne Block101

 Block99:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,edi
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea edx,[esp+0x3C]
	push edx
	call ebx

 Block102:
	mov ecx,esi
	call CMemoryGameDlg::ResetMiniGameData
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
// CMemoryGameDlg::TurnUpCard_Pic
_SUB_EXCEPTION_HANDLER(22B690)
__SUB_CLASS_THIS(0022B690, __thiscall, 138496,  CMemoryGameDlg, void, long, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_22B690
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
	mov edi,ecx
	mov eax,dword ptr [ebp+8]
	xor ebx,ebx
	cmp eax,ebx
	jl Block160

 Block1:
	cmp eax,dword ptr [edi+0xCD8]
	jge Block160

 Block2:
	mov dword ptr [ebp-0x50],ebx
	mov ecx,3
	mov dword ptr [ebp-4],ebx
	mov word ptr [ebp-0x4C],cx
	mov dword ptr [ebp-0x44],0xFFFFFFFE
	lea esi,[eax*4]
	mov eax,dword ptr [edi+0x238]
	add eax,esi
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],1
	mov dword ptr [ebp-0x38],esi
	cmp eax,ebx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[ebp-0x4C]
	push edx
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [ebp-0x14]
	cmp eax,ebx
	je Block6

 Block5:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block6:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],0
	jne Block9

 Block7:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	cmp eax,ebx
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[ebp-0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	lea eax,[ebp-0x14]
	push 0x1A15
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi+0x234]
	mov edx,dword ptr [ecx+esi]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp-0x50]
	push eax
	mov byte ptr [ebp-4],2
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x14]
	add esp,0xC
	mov byte ptr [ebp-4],0
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x24]
	push ecx
	call esi
	lea edx,[ebp-0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	lea eax,[ebp-0x34]
	push eax
	mov byte ptr [ebp-4],3
	call esi
	lea ecx,[ebp-0x34]
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
	lea edx,[ebp-0x70]
	push edx
	mov byte ptr [ebp-4],4
	call esi
	lea eax,[ebp-0x70]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	lea ecx,[ebp-0x60]
	push ecx
	mov byte ptr [ebp-4],5
	call esi
	lea edx,[ebp-0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	mov eax,3
	mov word ptr [ebp-0x4C],ax
	mov dword ptr [ebp-0x44],0x12C
	mov eax,dword ptr [edi+0xCB0]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	mov bl,7
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	lea ecx,[ebp-0x24]
	push ecx
	lea edx,[ebp-0x34]
	push edx
	lea eax,[ebp-0x70]
	push eax
	mov eax,dword ptr [edi+0xCB0]
	lea ecx,[ebp-0x60]
	push ecx
	lea edx,[ebp-0x4C]
	push edx
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x3C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi+0x200]
	mov byte ptr [ebp-4],8
	test ecx,ecx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea eax,[ebp-0x90]
	push eax
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block25

 Block23:
	cmp eax,0x80004002
	je Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	mov eax,dword ptr [edi+0x238]
	add eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0xA
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov esi,dword ptr [ebp-0x14]
	push esi
	lea ecx,[ebp-0x80]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x80],8
	jne Block30

 Block28:
	mov eax,dword ptr [ebp-0x78]
	xor edx,edx
	mov word ptr [ebp-0x80],dx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[ebp-0x80]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov byte ptr [ebp-4],9
	test esi,esi
	je Block33

 Block32:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block33:
	cmp word ptr [ebp-0x90],8
	mov byte ptr [ebp-4],bl
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [ebp-0x90],ax
	mov eax,dword ptr [ebp-0x88]
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[ebp-0x90]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov ebx,8
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x4C],bx
	jne Block44

 Block38:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	test eax,eax
	je Block40

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block40:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block41:
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x60],bx
	jne Block45

 Block42:
	mov eax,dword ptr [ebp-0x58]
	xor ecx,ecx
	mov word ptr [ebp-0x60],cx
	test eax,eax
	je Block46

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block44:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x4C]
	push eax
	call esi
	jmp Block41

 Block45:
	lea edx,[ebp-0x60]
	push edx
	call esi

 Block46:
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x70],bx
	jne Block49

 Block47:
	xor eax,eax
	mov word ptr [ebp-0x70],ax
	mov eax,dword ptr [ebp-0x68]
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea ecx,[ebp-0x70]
	push ecx
	call esi

 Block50:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x34],bx
	jne Block53

 Block51:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[ebp-0x34]
	push eax
	call esi

 Block54:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x24],bx
	jne Block57

 Block55:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea edx,[ebp-0x24]
	push edx
	call esi

 Block58:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x4C]
	push eax
	call esi
	lea ecx,[ebp-0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block60

 Block59:
	push eax
	call _com_issue_error

 Block60:
	lea edx,[ebp-0x60]
	push edx
	mov byte ptr [ebp-4],0xB
	call esi
	lea eax,[ebp-0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	lea ecx,[ebp-0x70]
	push ecx
	mov byte ptr [ebp-4],0xC
	call esi
	lea edx,[ebp-0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block64

 Block63:
	push eax
	call _com_issue_error

 Block64:
	lea eax,[ebp-0x34]
	push eax
	mov byte ptr [ebp-4],0xD
	call esi
	lea ecx,[ebp-0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block66

 Block65:
	push eax
	call _com_issue_error

 Block66:
	mov edx,3
	mov word ptr [ebp-0x24],dx
	mov dword ptr [ebp-0x1C],0x12C
	mov ebx,dword ptr [ebp-0x50]
	push 0
	push 0
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	mov byte ptr [ebp-4],0xF
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	lea eax,[ebp-0x4C]
	push eax
	lea ecx,[ebp-0x60]
	push ecx
	lea edx,[ebp-0x70]
	push edx
	lea eax,[ebp-0x34]
	push eax
	lea ecx,[ebp-0x24]
	push ecx
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x3C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi+0x200]
	mov byte ptr [ebp-4],0x10
	test ecx,ecx
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	lea edx,[ebp-0x80]
	push edx
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	mov bl,0x11
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block71

 Block69:
	cmp eax,0x80004002
	je Block71

 Block70:
	push eax
	call _com_issue_error

 Block71:
	mov eax,dword ptr [edi+0x238]
	add eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x12
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block73

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	mov esi,dword ptr [ebp-0x14]
	push esi
	lea ecx,[ebp-0x90]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x90],8
	jne Block76

 Block74:
	mov eax,dword ptr [ebp-0x88]
	xor edx,edx
	mov word ptr [ebp-0x90],dx
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea eax,[ebp-0x90]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block77:
	mov byte ptr [ebp-4],bl
	test esi,esi
	je Block79

 Block78:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block79:
	cmp word ptr [ebp-0x80],8
	mov byte ptr [ebp-4],0xF
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [ebp-0x80],ax
	mov eax,dword ptr [ebp-0x78]
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[ebp-0x80]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	mov ebx,8
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x24],bx
	jne Block90

 Block84:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block86

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block86:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block87:
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x34],bx
	jne Block91

 Block88:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block92

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block90:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x24]
	push eax
	call esi
	jmp Block87

 Block91:
	lea edx,[ebp-0x34]
	push edx
	call esi

 Block92:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x70],bx
	jne Block95

 Block93:
	xor eax,eax
	mov word ptr [ebp-0x70],ax
	mov eax,dword ptr [ebp-0x68]
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea ecx,[ebp-0x70]
	push ecx
	call esi

 Block96:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x60],bx
	jne Block99

 Block97:
	mov eax,dword ptr [ebp-0x58]
	xor edx,edx
	mov word ptr [ebp-0x60],dx
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea eax,[ebp-0x60]
	push eax
	call esi

 Block100:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x4C],bx
	jne Block103

 Block101:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea edx,[ebp-0x4C]
	push edx
	call esi

 Block104:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block106

 Block105:
	push eax
	call _com_issue_error

 Block106:
	mov eax,dword ptr [edi+0x238]
	add eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x13
	mov esi,dword ptr [eax]
	test esi,esi
	jne Block108

 Block107:
	push 0x80004003
	call _com_issue_error

 Block108:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x58]
	lea eax,[ebp-0x14]
	push eax
	push esi
	mov dword ptr [ebp-0x14],0
	call ecx
	test eax,eax
	jge Block110

 Block109:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block110:
	mov eax,dword ptr [ebp-0x14]
	add eax,0x258
	mov edx,3
	mov word ptr [ebp-0x24],dx
	mov dword ptr [ebp-0x1C],eax
	mov ecx,dword ptr [ebp+8]
	mov eax,dword ptr [edi+0x238]
	add ecx,ecx
	add ecx,ecx
	add eax,ecx
	mov eax,dword ptr [eax]
	mov bl,0x14
	mov byte ptr [ebp-4],bl
	test eax,eax
	jne Block112

 Block111:
	push 0x80004003
	call _com_issue_error

 Block112:
	lea ecx,[ebp-0x3C]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::Getrb
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x15
	test ecx,ecx
	jne Block114

 Block113:
	push 0x80004003
	call _com_issue_error

 Block114:
	lea edx,[ebp-0x34]
	push edx
	lea eax,[ebp-0x24]
	push eax
	push 0x3E
	push 0xFFFFFFCF
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp-0x3C]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block116

 Block115:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block116:
	mov esi,8
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x24],si
	jne Block119

 Block117:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block120:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x34],si
	jne Block123

 Block121:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block124:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block126

 Block125:
	push eax
	call _com_issue_error

 Block126:
	mov ebx,dword ptr [ebp+8]
	mov eax,dword ptr [edi+0x238]
	lea ecx,[ebx*4]
	mov esi,dword ptr [eax+ecx]
	add eax,ecx
	mov byte ptr [ebp-4],0x16
	mov dword ptr [ebp-0x38],ecx
	test esi,esi
	jne Block128

 Block127:
	push 0x80004003
	call _com_issue_error

 Block128:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[ebp-0x14]
	push ecx
	push esi
	mov dword ptr [ebp-0x14],0
	call edx
	test eax,eax
	jge Block130

 Block129:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block130:
	mov eax,dword ptr [ebp-0x14]
	add eax,0x258
	mov ecx,3
	mov word ptr [ebp-0x24],cx
	mov dword ptr [ebp-0x1C],eax
	mov eax,dword ptr [edi+0x238]
	add eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x17
	mov ecx,dword ptr [eax]
	test ecx,ecx
	jne Block132

 Block131:
	push 0x80004003
	call _com_issue_error

 Block132:
	mov esi,dword ptr [edi+0xD70]
	mov eax,ebx
	cdq
	idiv esi
	lea esi,[ebp-0x34]
	push esi
	lea esi,[ebp-0x24]
	push esi
	imul eax,0x43
	add eax,dword ptr [edi+0xD78]
	push eax
	lea eax,[edx*8]
	sub eax,edx
	mov edx,dword ptr [edi+0xD74]
	lea eax,[edx+eax*8+0x31]
	push eax
	call IWzVector2D::RelMove
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0x16
	jne Block135

 Block133:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block136

 Block134:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block136

 Block135:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block136:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],0
	jne Block139

 Block137:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block140:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x34]
	push edx
	call esi
	lea eax,[ebp-0x34]
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
	lea ecx,[ebp-0x24]
	mov bl,0x18
	push ecx
	mov byte ptr [ebp-4],bl
	call esi
	lea edx,[ebp-0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block144

 Block143:
	push eax
	call _com_issue_error

 Block144:
	mov eax,dword ptr [edi+0x238]
	add eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x19
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block146

 Block145:
	push 0x80004003
	call _com_issue_error

 Block146:
	lea ecx,[ebp-0x34]
	push ecx
	lea edx,[ebp-0x24]
	push edx
	push 0
	mov ecx,eax
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x24],si
	jne Block149

 Block147:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block150:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x34],si
	jne Block153

 Block151:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block154

 Block152:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block154

 Block153:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block154:
	cmp dword ptr [ebp+0xC],0
	je Block156

 Block155:
	mov dword ptr [edi+0xCE8],1
	call get_update_time
	add eax,0x384
	mov dword ptr [edi+0xCE0],eax

 Block156:
	lea ecx,[ebp-0x3C]
	push 0x64A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov byte ptr [ebp-4],0x1A
	call play_minigame_sound
	mov eax,dword ptr [ebp-0x3C]
	add esp,8
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block158

 Block157:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block158:
	mov eax,dword ptr [ebp-0x50]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block160

 Block159:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block160:
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
	ret 8
}
}
// CMemoryGameDlg::OnEnterResult
_SUB_EXCEPTION_HANDLER(228610)
__SUB_CLASS_THIS(00228610, __thiscall, 138495,  CMemoryGameDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_228610
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0xDC]
	xor ebp,ebp
	cmp eax,ebp
	jne Block4

 Block1:
	mov ecx,dword ptr [esi+0x1C8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0x1C8],ebp
	lea edi,[esi+0x1C4]
	je Block3

 Block2:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block3:
	mov eax,dword ptr [esi+0x1C0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebp
	call edx
	push 0x90
	lea ecx,[esp+0x1C]
	call COutPacket::_ctor_1
	push 0xB
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x34],ebp
	call COutPacket::Encode1
	push 1
	lea ecx,[esp+0x1C]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	jmp Block7

 Block4:
	mov ecx,dword ptr [esi+0x1C0]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	cmp dword ptr [esi+0x1C0],ebp
	lea edi,[esi+0x1BC]
	je Block6

 Block5:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block6:
	mov ecx,dword ptr [esi+0x1D8]
	mov dword ptr [esi+0xCA4],ebp
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	mov dword ptr [esi+0xD7C],1
	call get_update_time
	add eax,0xBB8
	mov dword ptr [esi+0xD80],eax

 Block7:
	mov ebx,dword ptr [esp+0x38]
	mov ecx,ebx
	call CInPacket::Decode1
	movsx edi,al
	cmp edi,ebp
	jl Block14

 Block8:
	mov eax,dword ptr [esi+edi*8+0x168]
	cmp eax,ebp
	je Block13

 Block9:
	lea ebp,[eax-0x10]
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block10:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebp,ebp
	je Block12

 Block11:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block12:
	mov dword ptr [esi+edi*8+0x168],0
	xor ebp,ebp

 Block13:
	push ebp
	call ZRefCounted_AllocHelper<ZRefCountedDummy<GW_MiniGameRecord>>::call
	mov dword ptr [eax+4],1
	add eax,0x10
	add esp,4
	mov ecx,eax
	push ebx
	mov dword ptr [esi+edi*8+0x168],eax
	call GW_MiniGameRecord::Decode
	mov ecx,ebx
	call CInPacket::Decode1
	movsx edi,al
	cmp edi,ebp
	jge Block8

 Block14:
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,ebx
	call CInPacket::DecodeStr
	lea edi,[esi+0xCAC]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x34],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebp
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov ecx,ebx
	call CInPacket::Decode1
	movzx edx,al
	mov ecx,ebx
	mov dword ptr [esi+0xCC4],edx
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esi+0xE8],eax
	cmp eax,ebp
	je Block21

 Block17:
	mov ecx,ebx
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esi+0xD84],eax
	push ebp
	cmp dword ptr [esi+0xDC],ebp
	jne Block19

 Block18:
	mov eax,dword ptr [esi+0x1C0]
	jmp Block20

 Block19:
	mov eax,dword ptr [esi+0x1C8]

 Block20:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	call eax
	mov eax,dword ptr [esi+0x1D0]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push ebp
	call eax

 Block21:
	mov eax,dword ptr [esi+0xCC4]
	sub eax,ebp
	je Block26

 Block22:
	sub eax,1
	je Block25

 Block23:
	sub eax,1
	jne Block27

 Block24:
	mov dword ptr [esi+0xD70],6
	mov dword ptr [esi+0xCD8],0x1E
	mov dword ptr [esi+0xD74],0x21
	mov dword ptr [esi+0xD78],0x27
	jmp Block27

 Block25:
	mov dword ptr [esi+0xD70],5
	mov dword ptr [esi+0xCD8],0x14
	mov dword ptr [esi+0xD74],0x3D
	mov dword ptr [esi+0xD78],0x48
	jmp Block27

 Block26:
	mov dword ptr [esi+0xD70],4
	mov dword ptr [esi+0xCD8],0xC
	mov dword ptr [esi+0xD74],0x59
	mov dword ptr [esi+0xD78],0x6A

 Block27:
	lea ecx,[esp+0x14]
	push 0x61A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0xCC4]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esi+0xCB0]
	push eax
	mov dword ptr [esp+0x3C],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebp
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	push ebp
	mov ecx,esi
	call CWnd::InvalidateRect
	mov esi,dword ptr [esi+0x23C]
	push 0xD7
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],esi
	cmp esi,ebp
	je Block31

 Block30:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block31:
	push edi
	call format_string_1
	add esp,0xC
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 4
}
}
// CMemoryGameDlg::OnTieResult
__SUB_CLASS_THIS(00227F20, __thiscall, 138495,  CMemoryGameDlg, void, CInPacket&) {
__asm {

 Block0:
	push ecx
	push esi
	push 6
	push ecx
	mov eax,esp
	mov dword ptr [esp+0xC],esp
	mov esi,ecx
	push 0x1DB
	push eax
	mov dword ptr [esi+0xC8C],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,esi
	call CMiniRoomBaseDlg::AddChatText
	pop esi
	pop ecx
	ret 4
}
}
// CMemoryGameDlg::~CMemoryGameDlg
_SUB_EXCEPTION_HANDLER(227AD0)
__SUB_CLASS_THIS0(00227AD0, __thiscall, 138484,  CMemoryGameDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_227AD0
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
	int 3// TODO: 	mov dword ptr [esi],offset CMemoryGameDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CMemoryGameDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CMemoryGameDlg::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xCB0]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],0x1D
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0xCAC]
	mov byte ptr [esp+0x1C],0x1C
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	lea ecx,[esi+0x240]
	mov byte ptr [esp+0x1C],0x1B
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0x23C]
	mov byte ptr [esp+0x1C],0x1A
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	lea ecx,[esi+0x238]
	mov byte ptr [esp+0x1C],0x19
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	lea ecx,[esi+0x234]
	mov byte ptr [esp+0x1C],0x18
	call ZArray<long>::RemoveAll
	mov eax,dword ptr [esi+0x230]
	mov byte ptr [esp+0x1C],0x17
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x22C]
	mov byte ptr [esp+0x1C],0x16
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0x228]
	mov byte ptr [esp+0x1C],0x15
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi+0x224]
	mov byte ptr [esp+0x1C],0x14
	cmp eax,ebx
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov eax,dword ptr [esi+0x220]
	mov byte ptr [esp+0x1C],0x13
	cmp eax,ebx
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov eax,dword ptr [esi+0x21C]
	mov byte ptr [esp+0x1C],0x12
	cmp eax,ebx
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov eax,dword ptr [esi+0x218]
	mov byte ptr [esp+0x1C],0x11
	cmp eax,ebx
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov eax,dword ptr [esi+0x214]
	mov byte ptr [esp+0x1C],0x10
	cmp eax,ebx
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block22:
	mov eax,dword ptr [esi+0x210]
	mov byte ptr [esp+0x1C],0xF
	cmp eax,ebx
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	mov eax,dword ptr [esi+0x20C]
	mov byte ptr [esp+0x1C],0xE
	cmp eax,ebx
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov eax,dword ptr [esi+0x208]
	mov byte ptr [esp+0x1C],0xD
	cmp eax,ebx
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block28:
	mov eax,dword ptr [esi+0x204]
	mov byte ptr [esp+0x1C],0xC
	cmp eax,ebx
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	mov eax,dword ptr [esi+0x200]
	mov byte ptr [esp+0x1C],0xB
	cmp eax,ebx
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block32:
	mov eax,dword ptr [esi+0x1FC]
	mov byte ptr [esp+0x1C],0xA
	cmp eax,ebx
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	lea edi,[esi+0x1EC]
	mov byte ptr [esp+0x1C],9
	cmp dword ptr [edi+4],ebx
	je Block36

 Block35:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block36:
	lea edi,[esi+0x1E4]
	mov byte ptr [esp+0x1C],8
	cmp dword ptr [edi+4],ebx
	je Block38

 Block37:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block38:
	lea edi,[esi+0x1DC]
	mov byte ptr [esp+0x1C],7
	cmp dword ptr [edi+4],ebx
	je Block40

 Block39:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block40:
	lea edi,[esi+0x1D4]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block42

 Block41:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block42:
	lea edi,[esi+0x1CC]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block44

 Block43:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block44:
	lea edi,[esi+0x1C4]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block46

 Block45:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block46:
	lea edi,[esi+0x1BC]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block48

 Block47:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block48:
	lea edi,[esi+0x1B4]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block50

 Block49:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block50:
	lea edi,[esi+0x1AC]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block52

 Block51:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block52:
	lea edi,[esi+0x1A4]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block54

 Block53:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block54:
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CMiniRoomBaseDlg::~CMiniRoomBaseDlg
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
// CMemoryGameDlg::SendClaimGiveUp
_SUB_EXCEPTION_HANDLER(228110)
__SUB_CLASS_THIS0(00228110, __thiscall, 138484,  CMemoryGameDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_228110
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0xC88],0
	jne Block3

 Block1:
	push 0
	push 0
	lea eax,[esi+0x88]
	push eax
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1D7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block3

 Block2:
	push 0x90
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 0x34
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0xC]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x10]
	mov dword ptr [esi+0xC88],1
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block3:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret
}
}
// CMemoryGameDlg::AnimateRoundEffect
_SUB_EXCEPTION_HANDLER(230E70)
// 631788
static uint8_t _SUB_230E70_LOOKUP_TABLE_0[31] = {
0, 3, 1, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 2, 3, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 
};
__SUB_CLASS_THIS(00230E70, __thiscall, 138500,  CMemoryGameDlg, void, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_230E70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
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
	xor edi,edi
	mov dword ptr [ebp+0x64],edi
	xor ecx,ecx
	mov dword ptr [ebp-4],edi
	mov dword ptr [ebp+0x68],ecx
	mov eax,dword ptr [ebp+0x7C]
	sub eax,edi
	mov byte ptr [ebp-4],1
	je Block66

 Block1:
	sub eax,1
	jne Block127

 Block2:
	lea eax,[ebp+0x30]
	push eax
	mov dword ptr [esi+0xD7C],edi
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov edi,dword ptr [esi+0x230]
	mov bl,0xE
	mov byte ptr [ebp-4],bl
	test edi,edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x58]
	lea eax,[ebp+0x6C]
	push eax
	push edi
	mov dword ptr [ebp+0x6C],0
	call ecx
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block8:
	mov eax,dword ptr [ebp+0x6C]
	add eax,0x1F4
	mov edx,3
	mov word ptr [ebp+0x10],dx
	mov dword ptr [ebp+0x18],eax
	mov ecx,dword ptr [esi+0x230]
	mov byte ptr [ebp-4],0xF
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea eax,[ebp+0x30]
	push eax
	lea edx,[ebp+0x10]
	push edx
	push 0x14
	push 0x1F4
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [ebp-4],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [ebp+0x10],di
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[ebp+0x10]
	push ecx
	call ebx

 Block14:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp+0x30],di
	jne Block17

 Block15:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[ebp+0x30]
	push eax
	call ebx

 Block18:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	mov edi,dword ptr [esi+0x230]
	mov byte ptr [ebp-4],0x10
	test edi,edi
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[ebp+0x6C]
	push ecx
	push edi
	mov dword ptr [ebp+0x6C],0
	call edx
	test eax,eax
	jge Block24

 Block23:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block24:
	mov eax,dword ptr [ebp+0x6C]
	add eax,0x190
	mov ecx,3
	mov word ptr [ebp-0x6C],cx
	mov dword ptr [ebp-0x64],eax
	mov ecx,dword ptr [esi+0x230]
	mov bl,0x11
	mov byte ptr [ebp-4],bl
	test ecx,ecx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[ebp+0x40]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x12
	test ecx,ecx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea eax,[ebp-0x1C]
	push eax
	lea edx,[ebp-0x6C]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	mov edi,8
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x6C],di
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x1C],di
	jne Block37

 Block35:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	mov edi,dword ptr [esi+0x230]
	mov bl,0x13
	mov byte ptr [ebp-4],bl
	test edi,edi
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[ebp+0x6C]
	push ecx
	push edi
	mov dword ptr [ebp+0x6C],0
	call edx
	test eax,eax
	jge Block44

 Block43:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block44:
	mov eax,dword ptr [ebp+0x6C]
	add eax,0x1F4
	mov ecx,3
	mov word ptr [ebp-0x5C],cx
	mov dword ptr [ebp-0x54],eax
	mov ecx,dword ptr [esi+0x230]
	mov byte ptr [ebp-4],0x14
	test ecx,ecx
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	lea edx,[ebp+0x4C]
	push edx
	call IWzGr2DLayer::Getrb
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x15
	test ecx,ecx
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea eax,[ebp-0x3C]
	push eax
	lea edx,[ebp-0x5C]
	push edx
	push 0x1E
	push 0x32
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x14
	test eax,eax
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block50:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x5C],di
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x3C],di
	jne Block57

 Block55:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov eax,dword ptr [esi+0xD84]
	add eax,0xFFFFFFFE
	cmp eax,0x1E
	ja Block65

 Block59:
	movzx ecx,byte ptr [eax+_SUB_230E70_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block62
cmp ECX, 1
je Block61
cmp ECX, 2
je Block60
cmp ECX, 3
je Block65


 Block60:
	lea edx,[ebp+0x54]
	push 0x9E9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xD84]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x64]
	push edx
	mov byte ptr [ebp-4],0x16
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esi+0xCAC]
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x54]
	jmp Block63

 Block61:
	lea eax,[ebp+0x44]
	push 0x9EA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esi+0xCAC]
	mov byte ptr [ebp-4],0x17
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x44]
	jmp Block63

 Block62:
	lea ecx,[ebp+0x5C]
	push 0x9EB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esi+0xCAC]
	mov byte ptr [ebp-4],0x18
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x5C]

 Block63:
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block65:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	jmp Block126

 Block66:
	mov ebx,2
	mov dword ptr [esi+0xD7C],ebx
	call get_update_time
	lea edx,[ebp+0x58]
	add eax,0x1770
	push 0x1A15
	push edx
	mov dword ptr [esi+0xD80],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xD84]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x64]
	push edx
	mov byte ptr [ebp-4],bl
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x58]
	add esp,0xC
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block68:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp]
	push eax
	call edi
	lea ecx,[ebp]
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
	lea edx,[ebp+0x20]
	push edx
	mov byte ptr [ebp-4],3
	call edi
	lea eax,[ebp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	push 0
	push 0
	lea ecx,[ebp]
	push ecx
	lea edx,[ebp+0x20]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x6C],esp
	push 0x9E8
	mov bl,4
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],5
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	lea ecx,[ebp-0x7C]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x68]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block77

 Block75:
	cmp eax,0x80004002
	je Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],bl
	mov ebx,8
	cmp word ptr [ebp-0x7C],bx
	jne Block80

 Block78:
	mov eax,dword ptr [ebp-0x74]
	xor edx,edx
	mov word ptr [ebp-0x7C],dx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea eax,[ebp-0x7C]
	push eax
	call edi

 Block81:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp+0x20],bx
	jne Block84

 Block82:
	mov eax,dword ptr [ebp+0x28]
	xor ecx,ecx
	mov word ptr [ebp+0x20],cx
	test eax,eax
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea edx,[ebp+0x20]
	push edx
	call edi

 Block85:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp],bx
	jne Block88

 Block86:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea ecx,[ebp]
	push ecx
	call edi

 Block89:
	mov edx,dword ptr [ebp+0x64]
	push 0
	push 0
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [ebp+0x64]
	mov edi,esp
	push 0
	push 0
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],7
	test ecx,ecx
	jne Block91

 Block90:
	push 0x80004003
	call _com_issue_error

 Block91:
	lea edx,[ebp-0x8C]
	push edx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],8
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x68]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block94

 Block92:
	cmp eax,0x80004002
	je Block94

 Block93:
	push eax
	call _com_issue_error

 Block94:
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],1
	jne Block97

 Block95:
	xor eax,eax
	mov word ptr [ebp-0x8C],ax
	mov eax,dword ptr [ebp-0x84]
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea ecx,[ebp-0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	push 0
	push 0xFF
	push 3
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x6C],esp
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	push 0xC8
	push 0xC8
	lea eax,[ebp+0x48]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],9
	call CWnd::GetLayer
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push eax
	mov byte ptr [ebp-4],0xA
	call _x_com_ptr<IWzVector2D>::CreateFromWzGr2DLayerComPtr
	push 0
	push ecx
	mov ecx,dword ptr [ebp+0x68]
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block100

 Block99:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	call eax

 Block100:
	lea ecx,[ebp+0x50]
	push ecx
	mov byte ptr [ebp-4],0xB
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x230]
	add esp,0x28
	cmp edi,eax
	je Block105

 Block101:
	mov dword ptr [esi+0x230],eax
	test eax,eax
	je Block103

 Block102:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block103:
	test edi,edi
	je Block105

 Block104:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block105:
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block107

 Block106:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block107:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block109

 Block108:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block109:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x4C]
	push eax
	call edi
	lea ecx,[ebp-0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block111

 Block110:
	push eax
	call _com_issue_error

 Block111:
	lea edx,[ebp-0x2C]
	mov bl,0xC
	push edx
	mov byte ptr [ebp-4],bl
	call edi
	lea eax,[ebp-0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block113

 Block112:
	push eax
	call _com_issue_error

 Block113:
	mov ecx,dword ptr [esi+0x230]
	mov byte ptr [ebp-4],0xD
	test ecx,ecx
	jne Block115

 Block114:
	push 0x80004003
	call _com_issue_error

 Block115:
	lea edx,[ebp-0x4C]
	push edx
	lea eax,[ebp-0x2C]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x2C],di
	jne Block118

 Block116:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block119:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x4C],di
	jne Block122

 Block120:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea ecx,[ebp-0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block123:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	mov dword ptr [eax],0
	mov esi,dword ptr [esi+0x230]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block125

 Block124:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block125:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation

 Block126:
	mov ecx,dword ptr [ebp+0x68]

 Block127:
	mov byte ptr [ebp-4],0
	test ecx,ecx
	je Block129

 Block128:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax

 Block129:
	mov eax,dword ptr [ebp+0x64]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block131

 Block130:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block131:
	lea esp,[ebp-0x9C]
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
// CMemoryGameDlg::OnCreate
_SUB_EXCEPTION_HANDLER(22F3C0)
__SUB_CLASS_THIS(0022F3C0, __thiscall, 138485,  CMemoryGameDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_22F3C0
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
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x70],ebx
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea eax,[esp+0x14]
	push 0x1A25
	push eax
	mov byte ptr [esp+0x78],1
	mov dword ptr [esp+0x58],0xFFE9EFF4
	mov dword ptr [esp+0x50],0xFF000000
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov edi,eax
	lea ecx,[esp+0x40]
	cmp ecx,edi
	je Block5

 Block1:
	mov ecx,dword ptr [esp+0x40]
	cmp ecx,ebx
	je Block3

 Block2:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x40],ebx

 Block3:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x40],edi
	cmp edi,ebx
	je Block5

 Block4:
	add edi,8
	push edi
	call ebp

 Block5:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	je Block7

 Block6:
	call _xbstr_t::Data_t::Release

 Block7:
	mov eax,2
	xor ecx,ecx
	mov edx,eax
	mov edi,eax
	mov dword ptr [esp+0x34],ecx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x3C],edx
	mov dword ptr [esp+0x40],edi
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],2
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block20

 Block11:
	add eax,8
	cmp eax,ebx
	je Block20

 Block12:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block14

 Block13:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block14:
	mov eax,dword ptr [esi+0x1F0]
	mov dword ptr [esi+0x1F0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block16

 Block15:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block16:
	mov ecx,dword ptr [esi+0x1F0]
	lea edx,[esp+0x2C]
	push edx
	push 0xF
	push 0xD2
	push 0x176
	push 0x1FF
	mov dword ptr [esp+0x70],0x100
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	push 0x3ED
	push esi
	call eax
	mov eax,dword ptr [esi+0x1F0]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	lea ecx,[esp+0x14]
	push 0x515
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block18:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],4
	cmp eax,ebx
	je Block21

 Block19:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block22

 Block20:
	xor edi,edi
	jmp Block14

 Block21:
	xor eax,eax

 Block22:
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block32

 Block23:
	add eax,8
	cmp eax,ebx
	je Block32

 Block24:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block26

 Block25:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block26:
	mov eax,dword ptr [esi+0x1E8]
	mov dword ptr [esi+0x1E8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block28

 Block27:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block28:
	mov ecx,dword ptr [esi+0x1E8]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0x173
	push 0x2C1
	push 0x3EE
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x64E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block30:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],6
	cmp eax,ebx
	je Block33

 Block31:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block34

 Block32:
	xor edi,edi
	jmp Block26

 Block33:
	xor eax,eax

 Block34:
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block44

 Block35:
	add eax,8
	cmp eax,ebx
	je Block44

 Block36:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block38

 Block37:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block38:
	mov eax,dword ptr [esi+0x1C0]
	mov dword ptr [esi+0x1C0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block40

 Block39:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block40:
	mov ecx,dword ptr [esi+0x1C0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0xF3
	push 0x271
	push 0x3E9
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x64F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],8
	cmp eax,ebx
	je Block45

 Block43:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block46

 Block44:
	xor edi,edi
	jmp Block38

 Block45:
	xor eax,eax

 Block46:
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block56

 Block47:
	add eax,8
	cmp eax,ebx
	je Block56

 Block48:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block50

 Block49:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block50:
	mov eax,dword ptr [esi+0x1C8]
	mov dword ptr [esi+0x1C8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block52

 Block51:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block52:
	mov ecx,dword ptr [esi+0x1C8]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0xF3
	push 0x271
	push 0x3EF
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x650
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],9
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block54:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],0xA
	cmp eax,ebx
	je Block57

 Block55:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block58

 Block56:
	xor edi,edi
	jmp Block50

 Block57:
	xor eax,eax

 Block58:
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block68

 Block59:
	add eax,8
	cmp eax,ebx
	je Block68

 Block60:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block62

 Block61:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block62:
	mov eax,dword ptr [esi+0x1B0]
	mov dword ptr [esi+0x1B0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block64

 Block63:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block64:
	mov ecx,dword ptr [esi+0x1B0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0x193
	push 0x1CA
	push 0x3EA
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x651
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],0xB
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block66

 Block65:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block66:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],0xC
	cmp eax,ebx
	je Block69

 Block67:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block70

 Block68:
	xor edi,edi
	jmp Block62

 Block69:
	xor eax,eax

 Block70:
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block80

 Block71:
	add eax,8
	cmp eax,ebx
	je Block80

 Block72:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block74

 Block73:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block74:
	mov eax,dword ptr [esi+0x1B8]
	mov dword ptr [esi+0x1B8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block76

 Block75:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block76:
	mov ecx,dword ptr [esi+0x1B8]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0x193
	push 0x19A
	push 0x3EB
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x652
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],0xD
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block78

 Block77:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block78:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],0xE
	cmp eax,ebx
	je Block81

 Block79:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block82

 Block80:
	xor edi,edi
	jmp Block74

 Block81:
	xor eax,eax

 Block82:
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block92

 Block83:
	add eax,8
	cmp eax,ebx
	je Block92

 Block84:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block86

 Block85:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block86:
	mov eax,dword ptr [esi+0x1D8]
	mov dword ptr [esi+0x1D8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block88

 Block87:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block88:
	mov ecx,dword ptr [esi+0x1D8]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0x3F
	push 0x227
	push 0x3F0
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x653
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],0xF
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],0x10
	cmp eax,ebx
	je Block93

 Block91:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block94

 Block92:
	xor edi,edi
	jmp Block86

 Block93:
	xor eax,eax

 Block94:
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block110

 Block95:
	add eax,8
	cmp eax,ebx
	je Block110

 Block96:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block98

 Block97:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block98:
	mov eax,dword ptr [esi+0x1D0]
	mov dword ptr [esi+0x1D0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block100

 Block99:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block100:
	mov ecx,dword ptr [esi+0x1D0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0x193
	push 0x2A7
	push 0x3EC
	push esi
	call eax
	push 1
	push 0x4C
	push 0x13E
	push 0x11F
	push 0x197
	mov ecx,esi
	call CMiniRoomBaseDlg::EnableChat
	lea ecx,[esp+0x14]
	push 1
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x23C]
	add esp,8
	cmp edi,eax
	je Block105

 Block101:
	mov dword ptr [esi+0x23C],eax
	cmp eax,ebx
	je Block103

 Block102:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block103:
	cmp edi,ebx
	je Block105

 Block104:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block105:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block107

 Block106:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block107:
	mov eax,dword ptr [esi+0x1D8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push ebx
	call edx
	or edi,0xFFFFFFFF
	lea ecx,[esp+0x2C]
	mov dword ptr [esi+0x1F4],edi
	mov dword ptr [esi+0x1F8],ebx
	mov byte ptr [esp+0x70],bl
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x70],edi
	cmp eax,ebx
	je Block109

 Block108:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block109:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret 4

 Block110:
	xor edi,edi
	jmp Block98
}
}
// CMemoryGameDlg::OnUserReady
_SUB_EXCEPTION_HANDLER(2317B0)
__SUB_CLASS_THIS(002317B0, __thiscall, 138495,  CMemoryGameDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2317B0
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
	lea eax,[esp+8]
	push eax
	call CWnd::GetCanvas
	mov eax,dword ptr [esi+0xDC]
	mov dword ptr [esp+0x14],0
	test eax,eax
	jne Block2

 Block1:
	mov eax,dword ptr [esi+0x1C0]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax

 Block2:
	mov ecx,esi
	mov dword ptr [esi+0xCA4],1
	call CMemoryGameDlg::DrawReadyOrNot
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CMemoryGameDlg::OnUserCancelReady
__SUB_CLASS_THIS(00231840, __thiscall, 138495,  CMemoryGameDlg, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0xDC],0
	jne Block2

 Block1:
	mov eax,dword ptr [esi+0x1C0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx

 Block2:
	mov ecx,esi
	mov dword ptr [esi+0xCA4],0
	call CMemoryGameDlg::DrawReadyOrNot
	pop esi
	ret 4
}
}
// CMemoryGameDlg::OnClickEndButton
_SUB_EXCEPTION_HANDLER(228450)
__SUB_CLASS_THIS0(00228450, __thiscall, 138484,  CMemoryGameDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_228450
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0xC9C],1
	push 0
	push 0
	lea eax,[esi+0x88]
	push eax
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	jne Block6

 Block1:
	cmp dword ptr [esi+0xCA0],0
	jne Block4

 Block2:
	push 0x1E0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block9

 Block3:
	push 0x90
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 0x38
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x38],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0xC]
	push edx
	call CClientSocket::SendPacket
	mov dword ptr [esi+0xCA0],1
	lea ecx,[esp+0x10]
	jmp Block8

 Block4:
	push 0x1E1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block9

 Block5:
	push 0x90
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 0x39
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x38],1
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0xC]
	push edx
	call CClientSocket::SendPacket
	mov dword ptr [esi+0xCA0],0
	lea ecx,[esp+0x10]
	jmp Block8

 Block6:
	push 0x1E4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block9

 Block7:
	push 0x90
	lea ecx,[esp+0x20]
	call COutPacket::_ctor_1
	push 0xA
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x38],2
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x1C]
	push edx
	call CClientSocket::SendPacket
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 2
	mov ecx,esi
	call edx
	lea ecx,[esp+0x20]

 Block8:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block9:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x30
	ret
}
}
// CMemoryGameDlg::SetCardSelected
_SUB_EXCEPTION_HANDLER(2275E0)
__SUB_CLASS_THIS(002275E0, __thiscall, 138500,  CMemoryGameDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2275E0
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
	mov ebp,dword ptr [esp+0x40]
	test ebp,ebp
	jl Block17

 Block1:
	cmp ebp,dword ptr [esi+0xCD8]
	jge Block17

 Block2:
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
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea edx,[esp+0x10]
	push edx
	mov dword ptr [esp+0x3C],0
	call edi
	lea eax,[esp+0x10]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [esi+0x238]
	lea eax,[ecx+ebp*4]
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x38],1
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov edi,dword ptr [esi+0xD70]
	mov eax,ebp
	cdq
	idiv edi
	lea edi,[esp+0x20]
	push edi
	lea edi,[esp+0x14]
	push edi
	mov edi,dword ptr [esi+0xD78]
	imul eax,0x43
	lea eax,[edi+eax+2]
	push eax
	lea eax,[edx*8]
	sub eax,edx
	mov edx,dword ptr [esi+0xD74]
	lea eax,[edx+eax*8+2]
	push eax
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x38],0
	cmp word ptr [esp+0x10],di
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x18]
	xor ecx,ecx
	mov word ptr [esp+0x10],cx
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp word ptr [esp+0x20],di
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov dword ptr [esi+0x1F4],ebp
	mov dword ptr [esi+0x1F8],1

 Block17:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x2C
	ret 4
}
}
// CMemoryGameDlg::OnEnter
_SUB_EXCEPTION_HANDLER(228980)
__SUB_CLASS_THIS(00228980, __thiscall, 138494,  CMemoryGameDlg, void, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_228980
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
	mov edi,dword ptr [esp+0x24]
	lea ecx,[esi+edi*8+0x164]
	call ZRef<GW_MiniGameRecord>::_Alloc
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esi+edi*8+0x168]
	push eax
	call GW_MiniGameRecord::Decode
	mov eax,dword ptr [esi+0xE8]
	xor ebx,ebx
	mov dword ptr [esi+0xCA4],ebx
	cmp eax,ebx
	jne Block2

 Block1:
	mov ecx,dword ptr [esi+0x1D8]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x24]
	add ecx,4
	push 1
	call eax

 Block2:
	push ebx
	mov ecx,esi
	call CWnd::InvalidateRect
	mov dword ptr [esp+0x24],ebx
	push 1
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x24],ebx
	call CMiniRoomBaseDlg::GetUserID
	mov edi,eax
	lea edx,[esp+0x28]
	push 0x1C4
	push edx
	mov byte ptr [esp+0x24],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x28],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x1C],1
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov edi,dword ptr [esp+0x24]
	push 6
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0xFFFFFFFF
	push edi
	mov dword ptr [ecx],ebx
	call ZXString16::AssignCharStr
	mov ecx,esi
	call CMiniRoomBaseDlg::AddChatText
	lea eax,[esp+0x28]
	push 0x642
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov byte ptr [esp+0x24],3
	call play_minigame_sound
	mov eax,dword ptr [esp+0x30]
	add esp,8
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	mov dword ptr [esi+0xD7C],1
	call get_update_time
	add eax,0xBB8
	mov dword ptr [esi+0xD80],eax
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	cmp edi,ebx
	je Block10

 Block9:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block10:
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
// CMemoryGameDlg::DecodeMiniGameRecord
__SUB_CLASS_THIS(00228DC0, __thiscall, 138494,  CMemoryGameDlg, void, long, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	lea ecx,[esi+edi*8+0x164]
	call ZRef<GW_MiniGameRecord>::_Alloc
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [esi+edi*8+0x168]
	push eax
	call GW_MiniGameRecord::Decode
	pop edi
	pop esi
	ret 8
}
}
// CMemoryGameDlg::SetCardFree
_SUB_EXCEPTION_HANDLER(227760)
__SUB_CLASS_THIS0(00227760, __thiscall, 138484,  CMemoryGameDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_227760
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
	mov eax,dword ptr [esi+0x1F4]
	test eax,eax
	jl Block17

 Block1:
	cmp eax,dword ptr [esi+0xCD8]
	jge Block17

 Block2:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push eax
	call edi
	lea ecx,[esp+0x1C]
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
	lea edx,[esp+0xC]
	push edx
	mov dword ptr [esp+0x38],0
	call edi
	lea eax,[esp+0xC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov eax,dword ptr [esi+0x1F4]
	mov ecx,dword ptr [esi+0x238]
	lea ecx,[ecx+eax*4]
	mov ecx,dword ptr [ecx]
	mov byte ptr [esp+0x34],1
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov edi,dword ptr [esi+0xD70]
	cdq
	idiv edi
	lea edi,[esp+0x1C]
	push edi
	lea edi,[esp+0x10]
	push edi
	imul eax,0x43
	add eax,dword ptr [esi+0xD78]
	push eax
	lea eax,[edx*8]
	sub eax,edx
	mov edx,dword ptr [esi+0xD74]
	lea eax,[edx+eax*8]
	push eax
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x34],0
	cmp word ptr [esp+0xC],di
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x14]
	xor ecx,ecx
	mov word ptr [esp+0xC],cx
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0xC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp word ptr [esp+0x1C],di
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov dword ptr [esi+0x1F4],0xFFFFFFFF
	mov dword ptr [esi+0x1F8],0

 Block17:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret
}
}
// CMemoryGameDlg::OnMouseButton
__SUB_CLASS_THIS(0022FBC0, __thiscall, 138488,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0xC90],0
	je Block20

 Block1:
	cmp dword ptr [esi+0xC98],1
	jne Block20

 Block2:
	cmp dword ptr [esi+0xCD8],2
	jge Block20

 Block3:
	cmp dword ptr [esi+0xCB0],0x2710
	jg Block20

 Block4:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x10]
	push ebx
	push edi
	push eax
	lea ebx,[esi-4]
	push ecx
	mov ecx,ebx
	call CMemoryGameDlg::GetCardPositionFromPoint
	mov edi,eax
	test edi,edi
	jl Block19

 Block5:
	cmp edi,dword ptr [esi+0xCD4]
	jge Block19

 Block6:
	mov edx,dword ptr [esi+0x230]
	cmp dword ptr [edx+edi*4],0xFFFFFFFF
	je Block19

 Block7:
	cmp edi,dword ptr [esi+0xCCC]
	je Block19

 Block8:
	mov eax,dword ptr [esp+0x10]
	cmp eax,0x202
	jne Block15

 Block9:
	cmp dword ptr [esi+0x1F4],0
	je Block11

 Block10:
	mov ecx,ebx
	call CMemoryGameDlg::SetCardFree

 Block11:
	mov eax,dword ptr [esi+0xCD8]
	test eax,eax
	jne Block13

 Block12:
	push 1
	push edi
	mov ecx,ebx
	call CMemoryGameDlg::SendTurnUpCard
	push 0
	push edi
	mov ecx,ebx
	call CMemoryGameDlg::TurnUpCard_Pic
	push 0
	mov ecx,ebx
	mov dword ptr [esi+0xCD8],1
	mov dword ptr [esi+0xCCC],edi
	call CWnd::InvalidateRect
	pop edi
	pop ebx
	pop esi
	ret 0x10

 Block13:
	cmp eax,1
	jne Block18

 Block14:
	push 0
	push edi
	mov ecx,ebx
	call CMemoryGameDlg::SendTurnUpCard
	push 0
	mov ecx,ebx
	mov dword ptr [esi+0xCD8],2
	mov dword ptr [esi+0xCD0],edi
	call CWnd::InvalidateRect
	pop edi
	pop ebx
	pop esi
	ret 0x10

 Block15:
	cmp eax,0x201
	jne Block18

 Block16:
	cmp dword ptr [esi+0x1F4],0
	jne Block18

 Block17:
	push edi
	mov ecx,ebx
	call CMemoryGameDlg::SetCardSelected

 Block18:
	push 0
	mov ecx,ebx
	call CWnd::InvalidateRect

 Block19:
	pop edi
	pop ebx

 Block20:
	pop esi
	ret 0x10
}
}
// CMemoryGameDlg::SetCard_Back
_SUB_EXCEPTION_HANDLER(22D920)
__SUB_CLASS_THIS(0022D920, __thiscall, 138500,  CMemoryGameDlg, void, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_22D920
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
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
	mov ebx,dword ptr [ebp+8]
	xor edi,edi
	cmp ebx,edi
	jl Block111

 Block1:
	cmp ebx,dword ptr [esi+0xCD8]
	jge Block111

 Block2:
	mov dword ptr [ebp-0x38],edi
	lea eax,[ebp-0x14]
	push 0x1A15
	push eax
	mov dword ptr [ebp-4],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x234]
	mov eax,dword ptr [eax]
	add ebx,ebx
	add ebx,ebx
	mov edx,dword ptr [ecx+ebx]
	push edx
	push eax
	lea eax,[ebp-0x38]
	push eax
	mov byte ptr [ebp-4],1
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x14]
	add esp,0xC
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esi+0x238]
	mov ecx,dword ptr [eax+ebx]
	add eax,ebx
	cmp ecx,edi
	je Block6

 Block5:
	mov dword ptr [eax],edi
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax

 Block6:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	mov eax,3
	mov word ptr [ebp-0x34],ax
	mov dword ptr [ebp-0x2C],edi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],al
	cmp ecx,edi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[ebp-0x24]
	push edx
	lea eax,[ebp-0x34]
	push eax
	push 4
	push edi
	push edi
	push edi
	push edi
	lea edx,[ebp-0x14]
	push edx
	call IWzGr2D::CreateLayer
	mov ecx,dword ptr [esi+0x238]
	mov eax,dword ptr [eax]
	mov edi,dword ptr [ecx+ebx]
	add ecx,ebx
	cmp edi,eax
	je Block15

 Block11:
	mov dword ptr [ecx],eax
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
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block17

 Block16:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block17:
	mov edi,8
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x34],di
	jne Block20

 Block18:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[ebp-0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x24],di
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	lea edx,[ebp-0x14]
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [ebp-4],4
	mov word ptr [ebp-0x24],cx
	mov dword ptr [ebp-0x1C],eax
	test eax,eax
	je Block27

 Block26:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block27:
	mov eax,dword ptr [esi+0x238]
	add eax,ebx
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],5
	test eax,eax
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea ecx,[ebp-0x24]
	push ecx
	mov ecx,eax
	call IWzVector2D::Putorigin
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x24],di
	jne Block32

 Block30:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	lea eax,[ebp-0x14]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,6
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp-0x24],cx
	mov dword ptr [ebp-0x1C],eax
	test eax,eax
	je Block37

 Block36:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block37:
	mov ecx,dword ptr [ebp+8]
	mov eax,dword ptr [esi+0x238]
	add ecx,ecx
	add ecx,ecx
	add eax,ecx
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],7
	test eax,eax
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea ecx,[ebp-0x24]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::Putoverlay
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],bl
	jne Block42

 Block40:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block45

 Block44:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block45:
	mov ecx,dword ptr [ebp+8]
	mov eax,dword ptr [esi+0x238]
	add ecx,ecx
	add ecx,ecx
	mov edi,dword ptr [eax+ecx]
	add eax,ecx
	mov dword ptr [ebp-0x3C],ecx
	test edi,edi
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push edi
	call ecx
	test eax,eax
	jge Block49

 Block48:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block49:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x34]
	push edx
	call ebx
	lea eax,[ebp-0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	lea ecx,[ebp-0x24]
	push ecx
	mov byte ptr [ebp-4],8
	call ebx
	lea edx,[ebp-0x24]
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
	mov eax,dword ptr [esi+0x238]
	add eax,dword ptr [ebp-0x3C]
	mov byte ptr [ebp-4],9
	mov ecx,dword ptr [eax]
	test ecx,ecx
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	mov eax,dword ptr [ebp+8]
	mov edi,dword ptr [esi+0xD70]
	cdq
	idiv edi
	lea edi,[ebp-0x34]
	push edi
	lea edi,[ebp-0x24]
	push edi
	imul eax,0x43
	add eax,dword ptr [esi+0xD78]
	push eax
	lea eax,[edx*8]
	sub eax,edx
	mov edx,dword ptr [esi+0xD74]
	lea eax,[edx+eax*8]
	push eax
	call IWzVector2D::RelMove
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],8
	jne Block58

 Block56:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],0
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	lea edx,[ebp-0x5C]
	push edx
	call ebx
	lea eax,[ebp-0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	lea ecx,[ebp-0x6C]
	push ecx
	mov byte ptr [ebp-4],0xA
	call ebx
	lea edx,[ebp-0x6C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	lea eax,[ebp-0x4C]
	push eax
	mov byte ptr [ebp-4],0xB
	call ebx
	lea ecx,[ebp-0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block69

 Block68:
	push eax
	call _com_issue_error

 Block69:
	lea edx,[ebp-0x34]
	push edx
	mov byte ptr [ebp-4],0xC
	call ebx
	lea eax,[ebp-0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block71

 Block70:
	push eax
	call _com_issue_error

 Block71:
	mov ecx,3
	mov word ptr [ebp-0x24],cx
	mov dword ptr [ebp-0x1C],0x12C
	mov eax,dword ptr [esi+0xCB0]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	mov bl,0xE
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edi,esp
	lea edx,[ebp-0x5C]
	push edx
	lea eax,[ebp-0x6C]
	push eax
	lea ecx,[ebp-0x4C]
	push ecx
	lea edx,[ebp-0x34]
	push edx
	lea eax,[ebp-0x24]
	push eax
	mov eax,dword ptr [esi+0xCB0]
	push 0
	push 0
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x200]
	mov byte ptr [ebp-4],0xF
	test ecx,ecx
	jne Block73

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	lea edx,[ebp-0x8C]
	push edx
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block76

 Block74:
	cmp eax,0x80004002
	je Block76

 Block75:
	push eax
	call _com_issue_error

 Block76:
	mov esi,dword ptr [esi+0x238]
	add esi,dword ptr [ebp-0x3C]
	mov byte ptr [ebp-4],0x11
	mov ecx,dword ptr [esi]
	test ecx,ecx
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
	mov esi,dword ptr [ebp-0x14]
	push esi
	lea eax,[ebp-0x7C]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x7C],8
	jne Block87

 Block79:
	mov eax,dword ptr [ebp-0x74]
	xor ecx,ecx
	mov word ptr [ebp-0x7C],cx
	test eax,eax
	je Block81

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block81:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block82:
	mov byte ptr [ebp-4],0x10
	test esi,esi
	je Block84

 Block83:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block84:
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],bl
	jne Block88

 Block85:
	mov eax,dword ptr [ebp-0x84]
	xor edx,edx
	mov word ptr [ebp-0x8C],dx
	test eax,eax
	je Block89

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block87:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x7C]
	push edx
	call edi
	jmp Block82

 Block88:
	lea eax,[ebp-0x8C]
	push eax
	call edi

 Block89:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0xD
	jne Block92

 Block90:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea edx,[ebp-0x24]
	push edx
	call edi

 Block93:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],0xC
	jne Block96

 Block94:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea ecx,[ebp-0x34]
	push ecx
	call edi

 Block97:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],0xB
	jne Block100

 Block98:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea eax,[ebp-0x4C]
	push eax
	call edi

 Block101:
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0xA
	jne Block104

 Block102:
	mov eax,dword ptr [ebp-0x64]
	xor ecx,ecx
	mov word ptr [ebp-0x6C],cx
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea edx,[ebp-0x6C]
	push edx
	call edi

 Block105:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0
	jne Block108

 Block106:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea ecx,[ebp-0x5C]
	push ecx
	call edi

 Block109:
	mov eax,dword ptr [ebp-0x38]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block111

 Block110:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block111:
	lea esp,[ebp-0x9C]
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
// CMemoryGameDlg::OnGameResult
_SUB_EXCEPTION_HANDLER(227F60)
__SUB_CLASS_THIS(00227F60, __thiscall, 138495,  CMemoryGameDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_227F60
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
	mov edi,dword ptr [esp+0x20]
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esi+0xCC0],eax
	cmp eax,1
	jne Block2

 Block1:
	push 6
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x1D5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,esi
	call CMiniRoomBaseDlg::AddChatText
	lea ecx,[esp+0x20]
	push 0x645
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [esp+0x20],0
	call play_minigame_sound
	mov eax,dword ptr [esp+0x28]
	jmp Block5

 Block2:
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	push 6
	push ecx
	mov dword ptr [esi+0xCBC],eax
	mov dword ptr [esp+0x28],esp
	cmp eax,dword ptr [esi+0xDC]
	jne Block4

 Block3:
	mov edx,esp
	push 0x1D4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,esi
	call CMiniRoomBaseDlg::AddChatText
	lea eax,[esp+0x20]
	push 0x646
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [esp+0x20],1
	call play_minigame_sound
	mov eax,dword ptr [esp+0x28]
	jmp Block5

 Block4:
	mov ecx,esp
	push 0x1D6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,esi
	call CMiniRoomBaseDlg::AddChatText
	lea edx,[esp+0xC]
	push 0x647
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [esp+0x20],2
	call play_minigame_sound
	mov eax,dword ptr [esp+0x14]

 Block5:
	add esp,8
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	mov ecx,dword ptr [esi+0x168]
	push edi
	call GW_MiniGameRecord::Decode
	mov ecx,dword ptr [esi+0x170]
	push edi
	call GW_MiniGameRecord::Decode
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xC9C],2
	mov dword ptr [esi+0xCA4],0
	call CWnd::InvalidateRect
	mov ecx,esi
	call CMemoryGameDlg::ResetMiniGameData
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CMemoryGameDlg::Update
_SUB_EXCEPTION_HANDLER(231880)
__SUB_CLASS_THIS0(00231880, __thiscall, 138484,  CMemoryGameDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_231880
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	call get_update_time
	mov ecx,dword ptr [esi+0xE8]
	xor ebp,ebp
	cmp ecx,ebp
	je Block6

 Block1:
	mov ecx,dword ptr [esi+0xD7C]
	cmp ecx,ebp
	je Block6

 Block2:
	cmp ecx,1
	jne Block33

 Block3:
	mov edx,eax
	sub edx,dword ptr [esi+0xD80]
	test edx,edx
	jle Block33

 Block4:
	push ebp

 Block5:
	mov ecx,esi
	call CMemoryGameDlg::AnimateRoundEffect

 Block6:
	mov edi,1
	cmp dword ptr [esi+0xC9C],edi
	jne Block41

 Block7:
	mov edi,dword ptr [esi+0xCB8]
	add dword ptr [esi+0xCB4],0xFFFFFFE2
	mov eax,dword ptr [esi+0xCB4]
	mov dword ptr [esp+0x14],edi
	fild dword ptr [esp+0x14]
	add eax,0x3E7
	mov dword ptr [esp+0x14],eax
	fstp qword ptr [esp+0x18]
	sub esp,8
	fild dword ptr [esp+0x1C]
	fdiv qword ptr [__real_408f400000000000]
	fstp qword ptr [esp]
	call _floor
	fld qword ptr [esp+0x20]
	fucompp
	add esp,8
	or ebx,0xFFFFFFFF
	fnstsw ax
	test ah,0x44
	jnp Block18

 Block8:
	cmp dword ptr [esi+0xC94],ebp
	je Block13

 Block9:
	cmp edi,9
	jg Block13

 Block10:
	cmp edi,ebp
	jle Block13

 Block11:
	lea eax,[esp+0x14]
	push 0x648
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [esp+0x38],ebp
	call play_minigame_sound
	mov eax,dword ptr [esp+0x1C]
	add esp,8
	mov dword ptr [esp+0x30],ebx
	cmp eax,ebp
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	mov ecx,dword ptr [esi+0xCB4]
	add ecx,0x3E7
	mov dword ptr [esp+0x14],ecx
	fild dword ptr [esp+0x14]
	sub esp,8
	fdiv qword ptr [__real_408f400000000000]
	fstp qword ptr [esp]
	call _floor
	add esp,8
	call __ftol2_sse
	cmp eax,0xA
	mov dword ptr [esi+0xCB8],eax
	jl Block15

 Block14:
	mov dword ptr [esi+0xCB8],0xA

 Block15:
	cmp dword ptr [esi+0xCB8],ebp
	jg Block17

 Block16:
	push 0x90
	lea ecx,[esp+0x1C]
	call COutPacket::_ctor_1
	push 0x3F
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x34],1
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x18]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x1C]
	mov dword ptr [esi+0xCB8],ebp
	mov dword ptr [esp+0x30],ebx
	call ZArray<unsigned char>::RemoveAll

 Block17:
	push ebp
	mov ecx,esi
	call CWnd::InvalidateRect

 Block18:
	cmp dword ptr [esi+0xCE8],ebp
	je Block21

 Block19:
	call get_update_time
	cmp dword ptr [esi+0xCE0],eax
	jg Block21

 Block20:
	mov eax,dword ptr [esi+0xCD0]
	push ebp
	push eax
	mov ecx,esi
	call CMemoryGameDlg::TurnUpCard_Back
	mov ecx,dword ptr [esi+0xCD4]
	push ebp
	push ecx
	mov ecx,esi
	call CMemoryGameDlg::TurnUpCard_Back
	mov dword ptr [esi+0xCD4],ebx
	mov dword ptr [esi+0xCD0],ebx
	mov dword ptr [esi+0xCE8],ebp

 Block21:
	cmp dword ptr [esi+0xCF4],ebp
	je Block31

 Block22:
	call get_update_time
	mov ecx,eax
	sub ecx,dword ptr [esi+0xCE4]
	mov eax,0x51EB851F
	imul ecx
	sar edx,6
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	cmp edi,dword ptr [esi+0xCD8]
	jge Block25

 Block23:
	cmp dword ptr [esi+edi*4+0xCF8],ebp
	jne Block25

 Block24:
	push ebp
	push edi
	mov ecx,esi
	call CMemoryGameDlg::TurnUpCard_Pic
	mov dword ptr [esi+edi*4+0xCF8],1

 Block25:
	cmp edi,5
	jl Block29

 Block26:
	mov edx,dword ptr [esi+0xCD8]
	add edx,5
	cmp edi,edx
	jge Block29

 Block27:
	cmp dword ptr [esi+edi*4+0xCE4],1
	jne Block29

 Block28:
	push ebp
	lea eax,[edi-5]
	push eax
	mov ecx,esi
	call CMemoryGameDlg::TurnUpCard_Back
	mov dword ptr [esi+edi*4+0xCE4],ebx

 Block29:
	mov ecx,dword ptr [esi+0xCD8]
	add ecx,5
	cmp edi,ecx
	jl Block31

 Block30:
	mov dword ptr [esi+0xCF4],ebp

 Block31:
	push ebp
	cmp dword ptr [esi+0xDC],ebp
	jne Block39

 Block32:
	mov eax,dword ptr [esi+0x1D8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	call eax
	mov eax,dword ptr [esi+0x1C0]
	push ebp
	jmp Block40

 Block33:
	cmp ecx,2
	jne Block36

 Block34:
	mov edx,eax
	sub edx,dword ptr [esi+0xD80]
	test edx,edx
	jle Block36

 Block35:
	push 1
	jmp Block5

 Block36:
	cmp ecx,3
	jne Block6

 Block37:
	sub eax,dword ptr [esi+0xD80]
	test eax,eax
	jle Block6

 Block38:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 8
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret

 Block39:
	mov eax,dword ptr [esi+0x1C8]

 Block40:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	call eax
	mov eax,dword ptr [esi+0x1B8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	mov eax,dword ptr [esi+0x1B0]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	jmp Block48

 Block41:
	push edi
	cmp dword ptr [esi+0xDC],ebp
	jne Block45

 Block42:
	mov eax,dword ptr [esi+0x1D8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	call eax
	cmp dword ptr [esi+0xE4],edi
	mov eax,dword ptr [esi+0x1C0]
	lea ecx,[eax+4]
	jle Block44

 Block43:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [esi+0xCA4]
	mov edx,dword ptr [edx+0x1C]
	push eax
	jmp Block47

 Block44:
	push ebp
	jmp Block46

 Block45:
	mov eax,dword ptr [esi+0x1C8]
	lea ecx,[eax+4]

 Block46:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]

 Block47:
	call edx
	mov eax,dword ptr [esi+0x1B8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebp
	call edx
	mov eax,dword ptr [esi+0x1B0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebp
	call edx

 Block48:
	cmp dword ptr [esi+0xE4],1
	jg Block58

 Block49:
	mov eax,dword ptr [esi+0x220]
	cmp eax,ebp
	je Block51

 Block50:
	mov dword ptr [esi+0x220],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block51:
	mov eax,dword ptr [esi+0x228]
	cmp eax,ebp
	je Block53

 Block52:
	mov dword ptr [esi+0x228],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	mov eax,dword ptr [esi+0x228]
	mov edi,dword ptr [esi+0x224]
	cmp edi,eax
	je Block58

 Block54:
	mov dword ptr [esi+0x224],eax
	cmp eax,ebp
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block56:
	cmp edi,ebp
	je Block58

 Block57:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block58:
	mov ecx,esi
	call CMemoryGameDlg::DrawReadyOrNot
	mov ecx,esi
	call CWnd::Update
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret
}
}
// CMemoryGameDlg::OnTurnUpCard
_SUB_EXCEPTION_HANDLER(22F060)
__SUB_CLASS_THIS(0022F060, __thiscall, 138495,  CMemoryGameDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_22F060
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
	mov esi,ecx
	mov ebp,dword ptr [esp+0x2C]
	mov ecx,ebp
	call CInPacket::Decode1
	movzx ebx,al
	mov ecx,ebp
	mov dword ptr [esp+0x2C],ebx
	call CInPacket::Decode1
	movzx edi,al
	test ebx,ebx
	jne Block2

 Block1:
	mov ecx,ebp
	call CInPacket::Decode1
	movzx ebx,al
	jmp Block3

 Block2:
	mov ebx,dword ptr [esp+0x2C]

 Block3:
	xor eax,eax
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x24],eax
	cmp dword ptr [esp+0x2C],eax
	je Block5

 Block4:
	push eax
	push edi
	mov ecx,esi
	call CMemoryGameDlg::TurnUpCard_Pic
	mov dword ptr [esi+0xCD0],edi
	jmp Block11

 Block5:
	mov ecx,ebp
	call CInPacket::Decode1
	movzx ebp,al
	cmp ebp,dword ptr [esi+0xE0]
	mov ecx,esi
	jl Block7

 Block6:
	push 0
	push edi
	call CMemoryGameDlg::TurnUpCard_Pic
	push ebx
	mov ecx,esi
	call CMemoryGameDlg::SetCard_Pic
	mov eax,dword ptr [esi+0x234]
	mov dword ptr [eax+ebx*4],0xFFFFFFFF
	mov ecx,dword ptr [esi+0x234]
	mov dword ptr [ecx+edi*4],0xFFFFFFFF
	sub ebp,dword ptr [esi+0xE0]
	inc dword ptr [esi+ebp*4+0xCEC]
	lea eax,[esi+ebp*4+0xCEC]
	push edi
	push ebx
	mov ecx,esi
	mov dword ptr [esi+0xCB4],0x2710
	call CMemoryGameDlg::DrawEffect
	mov ecx,esi
	call CMemoryGameDlg::DrawScore
	or eax,0xFFFFFFFF
	lea edx,[esp+0x2C]
	push 0x643
	push edx
	mov dword ptr [esi+0xCD4],eax
	mov dword ptr [esi+0xCD0],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov byte ptr [esp+0x2C],1
	call play_minigame_sound
	mov eax,dword ptr [esp+0x34]
	jmp Block8

 Block7:
	push 1
	push edi
	call CMemoryGameDlg::TurnUpCard_Pic
	mov eax,dword ptr [esi+0xDC]
	xor ecx,ecx
	cmp ebp,eax
	setne cl
	lea edx,[esp+0x14]
	push 0x644
	push edx
	mov dword ptr [esi+0xCD4],edi
	mov dword ptr [esi+0xCB4],0x2D50
	mov dword ptr [esi+0xC94],ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov byte ptr [esp+0x2C],2
	call play_minigame_sound
	mov eax,dword ptr [esp+0x1C]

 Block8:
	add esp,8
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	xor eax,eax
	mov dword ptr [esi+0xC90],eax
	mov dword ptr [esi+0xCDC],eax

 Block11:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 4
}
}
// CMemoryGameDlg::HitTest
__SUB_CLASS_THIS(002274D0, __thiscall, 138486,  CMemoryGameDlg, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,dword ptr [esp+0x18]
	push esi
	mov esi,dword ptr [esp+0x24]
	push edi
	mov edi,dword ptr [esp+0x24]
	push esi
	push edi
	push ebx
	call CWnd::HitTest
	test eax,eax
	je Block4

 Block1:
	test esi,esi
	je Block3

 Block2:
	cmp dword ptr [esi],0
	jne Block4

 Block3:
	push 0x185
	push 0x182
	push 0x13
	push 0xB
	lea eax,[esp+0x1C]
	push eax
	call SetRect
	push edi
	push ebx
	lea ecx,[esp+0x14]
	push ecx
	call PtInRect
	neg eax
	sbb eax,eax
	neg eax
	inc eax

 Block4:
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 0xC
}
}
// CMemoryGameDlg::OnKey
_SUB_EXCEPTION_HANDLER(228EA0)
__SUB_CLASS_THIS(00228EA0, __thiscall, 138487,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_228EA0
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
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x20]
	xor edx,edx
	mov dword ptr [esp+0xC],edx
	test eax,eax
	js Block16

 Block1:
	cmp ecx,0xD
	jne Block16

 Block2:
	mov ecx,dword ptr [esi+0x1EC]
	test ecx,ecx
	je Block6

 Block3:
	lea eax,[esp+0x20]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	mov edx,1
	test eax,eax
	je Block6

 Block4:
	cmp byte ptr [eax],0
	je Block6

 Block5:
	xor bl,bl
	jmp Block7

 Block6:
	mov bl,1

 Block7:
	test dl,1
	je Block10

 Block8:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	test bl,bl
	jne Block18

 Block11:
	mov ecx,dword ptr [esi+0x1EC]
	lea edx,[esp+0x24]
	push edx
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esi+0x1EC]
	push 0
	mov dword ptr [esp+0x1C],0
	call CCtrlEdit::SetText
	push ecx
	mov ecx,esp
	lea eax,[esp+0x28]
	mov dword ptr [esp+0x10],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esi-4]
	call CMiniRoomBaseDlg::CheckAndSendChat
	mov esi,dword ptr [esi+0x1EC]
	test esi,esi
	je Block13

 Block12:
	lea eax,[esi+4]
	jmp Block14

 Block13:
	xor eax,eax

 Block14:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block18

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret 8

 Block16:
	cmp ecx,0x1B
	je Block18

 Block17:
	push eax
	push ecx
	mov ecx,esi
	call CDialog::OnKey

 Block18:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret 8
}
}
// CMemoryGameDlg::OnButtonClicked
__SUB_CLASS_THIS(00228DF0, __thiscall, 138490,  CMemoryGameDlg, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	lea edx,[eax-0x3E9]
	cmp edx,7
	ja Block9

 Block1:
	cmp EDX, 0
je Block5
cmp EDX, 1
je Block2
cmp EDX, 2
je Block4
cmp EDX, 3
je Block7
cmp EDX, 4
je Block9
cmp EDX, 5
je Block9
cmp EDX, 6
je Block6
cmp EDX, 7
je Block8


 Block2:
	call CMemoryGameDlg::SendTieRequest

 Block3:
	ret 4

 Block4:
	call CMemoryGameDlg::SendClaimGiveUp
	ret 4

 Block5:
	call CMemoryGameDlg::OnClickStartButton
	ret 4

 Block6:
	call CMemoryGameDlg::OnClickReadyButton
	ret 4

 Block7:
	call CMemoryGameDlg::OnClickEndButton
	ret 4

 Block8:
	call CMemoryGameDlg::OnClickBanButton
	ret 4

 Block9:
	cmp eax,1
	jne Block11

 Block10:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block11:
	cmp eax,2
	jne Block13

 Block12:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx

 Block13:
	cmp eax,8
	jne Block3

 Block14:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],8
	jmp edx
}
}
// CMemoryGameDlg::DrawEffect
_SUB_EXCEPTION_HANDLER(228FF0)
__SUB_CLASS_THIS(00228FF0, __thiscall, 138497,  CMemoryGameDlg, void, long, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_228FF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x320
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp+0x50],esi
	xor ebx,ebx
	mov dword ptr [ebp+0x5C],ebx
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp+0x58],ebx
	lea eax,[ebp+0x54]
	push 0x656
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xCC4]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x58]
	push edx
	mov byte ptr [ebp-4],2
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x54]
	add esp,0xC
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov dword ptr [ebp+0x54],ebx

 Block3:
	mov edi,dword ptr [ebp+0x70]
	cmp dword ptr [ebp+0x54],ebx
	je Block5

 Block4:
	mov edi,dword ptr [ebp+0x74]

 Block5:
	lea eax,[ebp-0x24C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x24C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block6:
	mov edx,3
	mov word ptr [ebp-0x25C],dx
	mov dword ptr [ebp-0x254],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],4
	cmp ecx,ebx
	je Block309

 Block7:
	lea eax,[ebp-0x24C]
	push eax
	lea edx,[ebp-0x25C]
	push edx
	push 5
	push ebx
	push ebx
	push ebx
	push ebx
	lea eax,[ebp-0x24]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	cmp dword ptr [ebp+0x5C],eax
	je Block12

 Block8:
	mov esi,dword ptr [ebp+0x5C]
	mov dword ptr [ebp+0x5C],eax
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block10:
	cmp esi,ebx
	je Block12

 Block11:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block12:
	mov eax,dword ptr [ebp-0x24]
	cmp eax,ebx
	je Block14

 Block13:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block14:
	cmp word ptr [ebp-0x25C],8
	mov byte ptr [ebp-4],3
	jne Block17

 Block15:
	mov eax,dword ptr [ebp-0x254]
	xor ecx,ecx
	mov word ptr [ebp-0x25C],cx
	cmp eax,ebx
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[ebp-0x25C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	cmp word ptr [ebp-0x24C],8
	mov byte ptr [ebp-4],1
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [ebp-0x24C],ax
	mov eax,dword ptr [ebp-0x244]
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[ebp-0x24C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov ecx,dword ptr [ebp+0x50]
	lea edx,[ebp-0x2C]
	push edx
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [ebp-4],5
	mov word ptr [ebp+0x40],cx
	mov dword ptr [ebp+0x48],eax
	cmp eax,ebx
	je Block24

 Block23:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block24:
	mov esi,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],6
	cmp esi,ebx
	je Block309

 Block25:
	mov edx,dword ptr [ebp+0x40]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x44]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x48]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x4C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebx
	jge Block27

 Block26:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	cmp word ptr [ebp+0x40],8
	mov byte ptr [ebp-4],5
	jne Block30

 Block28:
	mov eax,dword ptr [ebp+0x48]
	xor ecx,ecx
	mov word ptr [ebp+0x40],cx
	cmp eax,ebx
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[ebp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	mov ecx,dword ptr [ebp+0x50]
	lea eax,[ebp-0x38]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [ebp-4],7
	mov word ptr [ebp],cx
	mov dword ptr [ebp+8],eax
	cmp eax,ebx
	je Block35

 Block34:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block35:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+8]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0xC]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	mov byte ptr [ebp-4],8
	call eax
	cmp eax,ebx
	jge Block37

 Block36:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block37:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],7
	jne Block40

 Block38:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	cmp eax,ebx
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block43:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,ebx
	jge Block45

 Block44:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block45:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x10]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block46:
	lea ecx,[ebp+0x30]
	push ecx
	mov byte ptr [ebp-4],9
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block47:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax+0xD70]
	mov eax,edi
	cdq
	idiv ecx
	mov ecx,dword ptr [ebp+0x50]
	sub esp,0x10
	mov byte ptr [ebp-4],0xA
	imul eax,0x43
	add eax,dword ptr [ecx+0xD78]
	mov ecx,dword ptr [ecx+0xD74]
	lea edi,[edx*8]
	sub edi,edx
	lea edx,[ecx+edi*8]
	mov edi,dword ptr [esi]
	mov esi,dword ptr [ebp+0x10]
	mov ecx,esp
	mov dword ptr [ecx],esi
	mov esi,dword ptr [ebp+0x14]
	mov dword ptr [ecx+4],esi
	mov esi,dword ptr [ebp+0x18]
	mov dword ptr [ecx+8],esi
	mov esi,dword ptr [ebp+0x1C]
	mov dword ptr [ecx+0xC],esi
	mov esi,dword ptr [ebp+0x30]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],esi
	mov esi,dword ptr [ebp+0x34]
	mov dword ptr [ecx+4],esi
	mov esi,dword ptr [ebp+0x38]
	mov dword ptr [ecx+8],esi
	mov esi,dword ptr [ebp+0x3C]
	push eax
	mov dword ptr [ecx+0xC],esi
	mov esi,dword ptr [ebp+0x5C]
	push edx
	mov edx,dword ptr [edi+0x90]
	push esi
	call edx
	cmp eax,ebx
	jge Block49

 Block48:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block49:
	mov esi,8
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x30],si
	jne Block52

 Block50:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	cmp eax,ebx
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp+0x10],si
	jne Block56

 Block54:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	cmp eax,ebx
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0xDC]
	push ecx
	call esi
	lea edx,[ebp-0xDC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block58:
	lea eax,[ebp-0x1FC]
	push eax
	mov byte ptr [ebp-4],0xB
	call esi
	lea ecx,[ebp-0x1FC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block59:
	mov edx,3
	mov word ptr [ebp-0xBC],dx
	mov dword ptr [ebp-0xB4],0xFF
	mov eax,edx
	mov word ptr [ebp-0x26C],ax
	mov dword ptr [ebp-0x264],ebx
	mov ecx,edx
	mov word ptr [ebp-0x9C],cx
	mov dword ptr [ebp-0x94],0x12C
	lea edx,[ebp-0x1DC]
	push edx
	mov byte ptr [ebp-4],0xF
	call esi
	lea eax,[ebp-0x1DC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block60:
	lea ecx,[ebp-0x7C]
	push ecx
	mov byte ptr [ebp-4],0x10
	call esi
	lea edx,[ebp-0x7C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block61:
	mov edi,dword ptr [ebp+0x58]
	push ebx
	push ebx
	push 0xFFFFFFFF
	push edi
	push ebx
	push ebx
	mov byte ptr [ebp-4],0x11
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	lea eax,[ebp-0xDC]
	push eax
	lea ecx,[ebp-0x1FC]
	push ecx
	lea edx,[ebp-0xBC]
	push edx
	lea eax,[ebp-0x26C]
	push eax
	lea ecx,[ebp-0x9C]
	push ecx
	push ebx
	push ebx
	lea edx,[ebp-0x1DC]
	push edx
	lea eax,[ebp-0x7C]
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push ebx
	push ebx
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x12
	cmp dword ptr [_D_G_RM],ebx
	je Block309

 Block62:
	lea ecx,[ebp-0x2BC]
	push ecx
	mov byte ptr [ebp-4],0x11
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x13
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x60],esi
	cmp eax,ebx
	je Block65

 Block63:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x30]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x30]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [ebp+0x60],esi
	jge Block65

 Block64:
	cmp eax,0x80004002
	jne Block308

 Block65:
	mov ecx,dword ptr [ebp+0x5C]
	push esi
	lea edx,[ebp-0x29C]
	push edx
	mov byte ptr [ebp-4],0x14
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x29C],8
	jne Block74

 Block66:
	xor eax,eax
	mov word ptr [ebp-0x29C],ax
	mov eax,dword ptr [ebp-0x294]
	cmp eax,ebx
	je Block68

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block68:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block69:
	mov byte ptr [ebp-4],0x13
	cmp esi,ebx
	je Block71

 Block70:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block71:
	cmp word ptr [ebp-0x2BC],8
	mov byte ptr [ebp-4],0x11
	jne Block75

 Block72:
	mov eax,dword ptr [ebp-0x2B4]
	xor ecx,ecx
	mov word ptr [ebp-0x2BC],cx
	cmp eax,ebx
	je Block76

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block74:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x29C]
	push ecx
	call edi
	jmp Block69

 Block75:
	lea edx,[ebp-0x2BC]
	push edx
	call edi

 Block76:
	cmp word ptr [ebp-0x7C],8
	mov byte ptr [ebp-4],0x10
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [ebp-0x7C],ax
	mov eax,dword ptr [ebp-0x74]
	cmp eax,ebx
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea ecx,[ebp-0x7C]
	push ecx
	call edi

 Block80:
	cmp word ptr [ebp-0x1DC],8
	mov byte ptr [ebp-4],0xF
	jne Block83

 Block81:
	mov eax,dword ptr [ebp-0x1D4]
	xor edx,edx
	mov word ptr [ebp-0x1DC],dx
	cmp eax,ebx
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea eax,[ebp-0x1DC]
	push eax
	call edi

 Block84:
	cmp word ptr [ebp-0x9C],8
	mov byte ptr [ebp-4],0xE
	jne Block87

 Block85:
	mov eax,dword ptr [ebp-0x94]
	xor ecx,ecx
	mov word ptr [ebp-0x9C],cx
	cmp eax,ebx
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea edx,[ebp-0x9C]
	push edx
	call edi

 Block88:
	cmp word ptr [ebp-0x26C],8
	mov byte ptr [ebp-4],0xD
	jne Block91

 Block89:
	xor eax,eax
	mov word ptr [ebp-0x26C],ax
	mov eax,dword ptr [ebp-0x264]
	cmp eax,ebx
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea ecx,[ebp-0x26C]
	push ecx
	call edi

 Block92:
	cmp word ptr [ebp-0xBC],8
	mov byte ptr [ebp-4],0xC
	jne Block95

 Block93:
	mov eax,dword ptr [ebp-0xB4]
	xor edx,edx
	mov word ptr [ebp-0xBC],dx
	cmp eax,ebx
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea eax,[ebp-0xBC]
	push eax
	call edi

 Block96:
	cmp word ptr [ebp-0x1FC],8
	mov byte ptr [ebp-4],0xB
	jne Block99

 Block97:
	mov eax,dword ptr [ebp-0x1F4]
	xor ecx,ecx
	mov word ptr [ebp-0x1FC],cx
	cmp eax,ebx
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea edx,[ebp-0x1FC]
	push edx
	call edi

 Block100:
	cmp word ptr [ebp-0xDC],8
	mov byte ptr [ebp-4],1
	jne Block103

 Block101:
	xor eax,eax
	mov word ptr [ebp-0xDC],ax
	mov eax,dword ptr [ebp-0xD4]
	cmp eax,ebx
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea ecx,[ebp-0xDC]
	push ecx
	call edi

 Block104:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x23C]
	push edx
	call edi
	lea eax,[ebp-0x23C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block105:
	lea ecx,[ebp-0x13C]
	push ecx
	mov byte ptr [ebp-4],0x15
	call edi
	lea edx,[ebp-0x13C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block106:
	mov eax,3
	mov word ptr [ebp-0x4C],ax
	mov dword ptr [ebp-0x44],0x80
	mov ecx,eax
	mov word ptr [ebp-0x11C],cx
	mov dword ptr [ebp-0x114],0xFF
	mov edx,eax
	mov word ptr [ebp-0x21C],dx
	mov dword ptr [ebp-0x214],0x12C
	lea eax,[ebp-0xFC]
	push eax
	mov byte ptr [ebp-4],0x19
	call edi
	lea ecx,[ebp-0xFC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block107:
	lea edx,[ebp-0x28C]
	push edx
	mov byte ptr [ebp-4],0x1A
	call edi
	lea eax,[ebp-0x28C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block108:
	mov ecx,dword ptr [ebp+0x58]
	push ebx
	push ebx
	push 0xFFFFFFFF
	push ecx
	push ebx
	push ebx
	mov byte ptr [ebp-4],0x1B
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	lea edx,[ebp-0x23C]
	push edx
	lea eax,[ebp-0x13C]
	push eax
	lea ecx,[ebp-0x4C]
	push ecx
	lea edx,[ebp-0x11C]
	push edx
	lea eax,[ebp-0x21C]
	push eax
	mov eax,dword ptr [ebp+0x58]
	push ebx
	push ebx
	lea ecx,[ebp-0xFC]
	push ecx
	lea edx,[ebp-0x28C]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push ebx
	push ebx
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x1C
	cmp dword ptr [_D_G_RM],ebx
	je Block309

 Block109:
	lea ecx,[ebp-0x2DC]
	push ecx
	mov byte ptr [ebp-4],0x1B
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1D
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x60],esi
	cmp eax,ebx
	je Block112

 Block110:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x20]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x20]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [ebp+0x60],esi
	jge Block112

 Block111:
	cmp eax,0x80004002
	jne Block308

 Block112:
	mov ecx,dword ptr [ebp+0x5C]
	push esi
	lea edx,[ebp-0x2FC]
	push edx
	mov byte ptr [ebp-4],0x1E
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x2FC],8
	jne Block115

 Block113:
	xor eax,eax
	mov word ptr [ebp-0x2FC],ax
	mov eax,dword ptr [ebp-0x2F4]
	cmp eax,ebx
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea ecx,[ebp-0x2FC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block116:
	mov byte ptr [ebp-4],0x1D
	cmp esi,ebx
	je Block118

 Block117:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block118:
	cmp word ptr [ebp-0x2DC],8
	mov byte ptr [ebp-4],0x1B
	jne Block121

 Block119:
	mov eax,dword ptr [ebp-0x2D4]
	xor ecx,ecx
	mov word ptr [ebp-0x2DC],cx
	cmp eax,ebx
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea edx,[ebp-0x2DC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block122:
	cmp word ptr [ebp-0x28C],8
	mov byte ptr [ebp-4],0x1A
	jne Block129

 Block123:
	xor eax,eax
	mov word ptr [ebp-0x28C],ax
	mov eax,dword ptr [ebp-0x284]
	cmp eax,ebx
	je Block125

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block125:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block126:
	cmp word ptr [ebp-0xFC],8
	mov byte ptr [ebp-4],0x19
	jne Block130

 Block127:
	mov eax,dword ptr [ebp-0xF4]
	xor edx,edx
	mov word ptr [ebp-0xFC],dx
	cmp eax,ebx
	je Block131

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block129:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x28C]
	push ecx
	call esi
	jmp Block126

 Block130:
	lea eax,[ebp-0xFC]
	push eax
	call esi

 Block131:
	cmp word ptr [ebp-0x21C],8
	mov byte ptr [ebp-4],0x18
	jne Block134

 Block132:
	mov eax,dword ptr [ebp-0x214]
	xor ecx,ecx
	mov word ptr [ebp-0x21C],cx
	cmp eax,ebx
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea edx,[ebp-0x21C]
	push edx
	call esi

 Block135:
	cmp word ptr [ebp-0x11C],8
	mov byte ptr [ebp-4],0x17
	jne Block138

 Block136:
	xor eax,eax
	mov word ptr [ebp-0x11C],ax
	mov eax,dword ptr [ebp-0x114]
	cmp eax,ebx
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block138:
	lea ecx,[ebp-0x11C]
	push ecx
	call esi

 Block139:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],0x16
	jne Block142

 Block140:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	cmp eax,ebx
	je Block143

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block142:
	lea eax,[ebp-0x4C]
	push eax
	call esi

 Block143:
	cmp word ptr [ebp-0x13C],8
	mov byte ptr [ebp-4],0x15
	jne Block146

 Block144:
	mov eax,dword ptr [ebp-0x134]
	xor ecx,ecx
	mov word ptr [ebp-0x13C],cx
	cmp eax,ebx
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea edx,[ebp-0x13C]
	push edx
	call esi

 Block147:
	cmp word ptr [ebp-0x23C],8
	mov byte ptr [ebp-4],1
	jne Block150

 Block148:
	xor eax,eax
	mov word ptr [ebp-0x23C],ax
	mov eax,dword ptr [ebp-0x234]
	cmp eax,ebx
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea ecx,[ebp-0x23C]
	push ecx
	call esi

 Block151:
	lea edx,[ebp-0x1BC]
	push edx
	call edi
	lea eax,[ebp-0x1BC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block152:
	lea ecx,[ebp-0x22C]
	push ecx
	mov byte ptr [ebp-4],0x1F
	call edi
	lea edx,[ebp-0x22C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block153:
	mov eax,3
	mov word ptr [ebp-0x19C],ax
	mov dword ptr [ebp-0x194],0xFF
	mov ecx,eax
	mov word ptr [ebp-0x20C],cx
	mov dword ptr [ebp-0x204],0x80
	mov edx,eax
	mov word ptr [ebp-0x17C],dx
	mov dword ptr [ebp-0x174],0x12C
	lea eax,[ebp-0x27C]
	push eax
	mov byte ptr [ebp-4],0x23
	call edi
	lea ecx,[ebp-0x27C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block154:
	lea edx,[ebp-0x15C]
	push edx
	mov byte ptr [ebp-4],0x24
	call edi
	lea eax,[ebp-0x15C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block155:
	mov ecx,dword ptr [ebp+0x58]
	push ebx
	push ebx
	push 0xFFFFFFFF
	push ecx
	push ebx
	push ebx
	mov byte ptr [ebp-4],0x25
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	lea edx,[ebp-0x1BC]
	push edx
	lea eax,[ebp-0x22C]
	push eax
	lea ecx,[ebp-0x19C]
	push ecx
	lea edx,[ebp-0x20C]
	push edx
	lea eax,[ebp-0x17C]
	push eax
	mov eax,dword ptr [ebp+0x58]
	push ebx
	push ebx
	lea ecx,[ebp-0x27C]
	push ecx
	lea edx,[ebp-0x15C]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push ebx
	push ebx
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x26
	cmp dword ptr [_D_G_RM],ebx
	je Block309

 Block156:
	lea ecx,[ebp-0x2AC]
	push ecx
	mov byte ptr [ebp-4],0x25
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x27
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x60],esi
	cmp eax,ebx
	je Block159

 Block157:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x34]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x34]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [ebp+0x60],esi
	jge Block159

 Block158:
	cmp eax,0x80004002
	jne Block308

 Block159:
	mov ecx,dword ptr [ebp+0x5C]
	push esi
	lea edx,[ebp-0x31C]
	push edx
	mov byte ptr [ebp-4],0x28
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x31C],8
	jne Block162

 Block160:
	xor eax,eax
	mov word ptr [ebp-0x31C],ax
	mov eax,dword ptr [ebp-0x314]
	cmp eax,ebx
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea ecx,[ebp-0x31C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block163:
	mov byte ptr [ebp-4],0x27
	cmp esi,ebx
	je Block165

 Block164:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block165:
	cmp word ptr [ebp-0x2AC],8
	mov byte ptr [ebp-4],0x25
	jne Block168

 Block166:
	mov eax,dword ptr [ebp-0x2A4]
	xor ecx,ecx
	mov word ptr [ebp-0x2AC],cx
	cmp eax,ebx
	je Block169

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block169

 Block168:
	lea edx,[ebp-0x2AC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block169:
	cmp word ptr [ebp-0x15C],8
	mov byte ptr [ebp-4],0x24
	jne Block176

 Block170:
	xor eax,eax
	mov word ptr [ebp-0x15C],ax
	mov eax,dword ptr [ebp-0x154]
	cmp eax,ebx
	je Block172

 Block171:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block172:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block173:
	cmp word ptr [ebp-0x27C],8
	mov byte ptr [ebp-4],0x23
	jne Block177

 Block174:
	mov eax,dword ptr [ebp-0x274]
	xor edx,edx
	mov word ptr [ebp-0x27C],dx
	cmp eax,ebx
	je Block178

 Block175:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block178

 Block176:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x15C]
	push ecx
	call esi
	jmp Block173

 Block177:
	lea eax,[ebp-0x27C]
	push eax
	call esi

 Block178:
	cmp word ptr [ebp-0x17C],8
	mov byte ptr [ebp-4],0x22
	jne Block181

 Block179:
	mov eax,dword ptr [ebp-0x174]
	xor ecx,ecx
	mov word ptr [ebp-0x17C],cx
	cmp eax,ebx
	je Block182

 Block180:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block182

 Block181:
	lea edx,[ebp-0x17C]
	push edx
	call esi

 Block182:
	cmp word ptr [ebp-0x20C],8
	mov byte ptr [ebp-4],0x21
	jne Block185

 Block183:
	xor eax,eax
	mov word ptr [ebp-0x20C],ax
	mov eax,dword ptr [ebp-0x204]
	cmp eax,ebx
	je Block186

 Block184:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block186

 Block185:
	lea ecx,[ebp-0x20C]
	push ecx
	call esi

 Block186:
	cmp word ptr [ebp-0x19C],8
	mov byte ptr [ebp-4],0x20
	jne Block189

 Block187:
	mov eax,dword ptr [ebp-0x194]
	xor edx,edx
	mov word ptr [ebp-0x19C],dx
	cmp eax,ebx
	je Block190

 Block188:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block190

 Block189:
	lea eax,[ebp-0x19C]
	push eax
	call esi

 Block190:
	cmp word ptr [ebp-0x22C],8
	mov byte ptr [ebp-4],0x1F
	jne Block193

 Block191:
	mov eax,dword ptr [ebp-0x224]
	xor ecx,ecx
	mov word ptr [ebp-0x22C],cx
	cmp eax,ebx
	je Block194

 Block192:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block194

 Block193:
	lea edx,[ebp-0x22C]
	push edx
	call esi

 Block194:
	cmp word ptr [ebp-0x1BC],8
	mov byte ptr [ebp-4],1
	jne Block197

 Block195:
	xor eax,eax
	mov word ptr [ebp-0x1BC],ax
	mov eax,dword ptr [ebp-0x1B4]
	cmp eax,ebx
	je Block198

 Block196:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block198

 Block197:
	lea ecx,[ebp-0x1BC]
	push ecx
	call esi

 Block198:
	lea edx,[ebp-0x10C]
	push edx
	call edi
	lea eax,[ebp-0x10C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block199:
	lea ecx,[ebp-0xEC]
	push ecx
	mov byte ptr [ebp-4],0x29
	call edi
	lea edx,[ebp-0xEC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block200:
	mov eax,3
	mov word ptr [ebp-0xCC],ax
	mov dword ptr [ebp-0xC4],0x80
	mov ecx,eax
	mov word ptr [ebp-0xAC],cx
	mov dword ptr [ebp-0xA4],0xFF
	mov edx,eax
	mov word ptr [ebp-0x8C],dx
	mov dword ptr [ebp-0x84],0x12C
	lea eax,[ebp-0x6C]
	push eax
	mov byte ptr [ebp-4],0x2D
	call edi
	lea ecx,[ebp-0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block201:
	lea edx,[ebp-0x5C]
	push edx
	mov byte ptr [ebp-4],0x2E
	call edi
	lea eax,[ebp-0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block202:
	mov ecx,dword ptr [ebp+0x58]
	push ebx
	push ebx
	push 0xFFFFFFFF
	push ecx
	push ebx
	push ebx
	mov byte ptr [ebp-4],0x2F
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	lea edx,[ebp-0x10C]
	push edx
	lea eax,[ebp-0xEC]
	push eax
	lea ecx,[ebp-0xCC]
	push ecx
	lea edx,[ebp-0xAC]
	push edx
	lea eax,[ebp-0x8C]
	push eax
	mov eax,dword ptr [ebp+0x58]
	push ebx
	push ebx
	lea ecx,[ebp-0x6C]
	push ecx
	lea edx,[ebp-0x5C]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push ebx
	push ebx
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x30
	cmp dword ptr [_D_G_RM],ebx
	je Block309

 Block203:
	lea ecx,[ebp-0x2EC]
	push ecx
	mov byte ptr [ebp-4],0x2F
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x31
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x60],esi
	cmp eax,ebx
	je Block206

 Block204:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x3C]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x3C]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [ebp+0x60],esi
	jge Block206

 Block205:
	cmp eax,0x80004002
	jne Block308

 Block206:
	mov ecx,dword ptr [ebp+0x5C]
	push esi
	lea edx,[ebp-0x2CC]
	push edx
	mov byte ptr [ebp-4],0x32
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x2CC],8
	jne Block209

 Block207:
	xor eax,eax
	mov word ptr [ebp-0x2CC],ax
	mov eax,dword ptr [ebp-0x2C4]
	cmp eax,ebx
	je Block210

 Block208:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block210

 Block209:
	lea ecx,[ebp-0x2CC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block210:
	mov byte ptr [ebp-4],0x31
	cmp esi,ebx
	je Block212

 Block211:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block212:
	cmp word ptr [ebp-0x2EC],8
	mov byte ptr [ebp-4],0x2F
	jne Block215

 Block213:
	mov eax,dword ptr [ebp-0x2E4]
	xor ecx,ecx
	mov word ptr [ebp-0x2EC],cx
	cmp eax,ebx
	je Block216

 Block214:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block216

 Block215:
	lea edx,[ebp-0x2EC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block216:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0x2E
	jne Block223

 Block217:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	cmp eax,ebx
	je Block219

 Block218:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block219:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block220:
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0x2D
	jne Block224

 Block221:
	mov eax,dword ptr [ebp-0x64]
	xor edx,edx
	mov word ptr [ebp-0x6C],dx
	cmp eax,ebx
	je Block225

 Block222:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block225

 Block223:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x5C]
	push ecx
	call esi
	jmp Block220

 Block224:
	lea eax,[ebp-0x6C]
	push eax
	call esi

 Block225:
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],0x2C
	jne Block228

 Block226:
	mov eax,dword ptr [ebp-0x84]
	xor ecx,ecx
	mov word ptr [ebp-0x8C],cx
	cmp eax,ebx
	je Block229

 Block227:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block229

 Block228:
	lea edx,[ebp-0x8C]
	push edx
	call esi

 Block229:
	cmp word ptr [ebp-0xAC],8
	mov byte ptr [ebp-4],0x2B
	jne Block232

 Block230:
	xor eax,eax
	mov word ptr [ebp-0xAC],ax
	mov eax,dword ptr [ebp-0xA4]
	cmp eax,ebx
	je Block233

 Block231:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block233

 Block232:
	lea ecx,[ebp-0xAC]
	push ecx
	call esi

 Block233:
	cmp word ptr [ebp-0xCC],8
	mov byte ptr [ebp-4],0x2A
	jne Block236

 Block234:
	mov eax,dword ptr [ebp-0xC4]
	xor edx,edx
	mov word ptr [ebp-0xCC],dx
	cmp eax,ebx
	je Block237

 Block235:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block237

 Block236:
	lea eax,[ebp-0xCC]
	push eax
	call esi

 Block237:
	cmp word ptr [ebp-0xEC],8
	mov byte ptr [ebp-4],0x29
	jne Block240

 Block238:
	mov eax,dword ptr [ebp-0xE4]
	xor ecx,ecx
	mov word ptr [ebp-0xEC],cx
	cmp eax,ebx
	je Block241

 Block239:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block241

 Block240:
	lea edx,[ebp-0xEC]
	push edx
	call esi

 Block241:
	cmp word ptr [ebp-0x10C],8
	mov byte ptr [ebp-4],1
	jne Block244

 Block242:
	xor eax,eax
	mov word ptr [ebp-0x10C],ax
	mov eax,dword ptr [ebp-0x104]
	cmp eax,ebx
	je Block245

 Block243:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block245

 Block244:
	lea ecx,[ebp-0x10C]
	push ecx
	call esi

 Block245:
	lea edx,[ebp-0x1EC]
	push edx
	call edi
	lea eax,[ebp-0x1EC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block246:
	lea ecx,[ebp-0x1CC]
	push ecx
	mov byte ptr [ebp-4],0x33
	call edi
	lea edx,[ebp-0x1CC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block247:
	mov eax,3
	mov word ptr [ebp-0x1AC],ax
	mov dword ptr [ebp-0x1A4],0xFF
	mov ecx,eax
	mov word ptr [ebp-0x18C],cx
	mov dword ptr [ebp-0x184],0x80
	mov edx,eax
	mov word ptr [ebp-0x16C],dx
	mov dword ptr [ebp-0x164],0x12C
	lea eax,[ebp-0x14C]
	push eax
	mov byte ptr [ebp-4],0x37
	call edi
	lea ecx,[ebp-0x14C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block248:
	lea edx,[ebp-0x12C]
	push edx
	mov byte ptr [ebp-4],0x38
	call edi
	lea eax,[ebp-0x12C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block249:
	mov ecx,dword ptr [ebp+0x58]
	push ebx
	push ebx
	push 0xFFFFFFFF
	push ecx
	push ebx
	push ebx
	mov byte ptr [ebp-4],0x39
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	lea edx,[ebp-0x1EC]
	push edx
	lea eax,[ebp-0x1CC]
	push eax
	lea ecx,[ebp-0x1AC]
	push ecx
	lea edx,[ebp-0x18C]
	push edx
	lea eax,[ebp-0x16C]
	push eax
	mov eax,dword ptr [ebp+0x58]
	push ebx
	push ebx
	lea ecx,[ebp-0x14C]
	push ecx
	lea edx,[ebp-0x12C]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push ebx
	push ebx
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x3A
	cmp dword ptr [_D_G_RM],ebx
	je Block309

 Block250:
	lea ecx,[ebp-0x32C]
	push ecx
	mov byte ptr [ebp-4],0x39
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x3B
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x60],esi
	cmp eax,ebx
	je Block253

 Block251:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x28]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x28]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [ebp+0x60],esi
	jge Block253

 Block252:
	cmp eax,0x80004002
	jne Block308

 Block253:
	mov ecx,dword ptr [ebp+0x5C]
	push esi
	lea edx,[ebp-0x30C]
	push edx
	mov byte ptr [ebp-4],0x3C
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x30C],8
	jne Block256

 Block254:
	xor eax,eax
	mov word ptr [ebp-0x30C],ax
	mov eax,dword ptr [ebp-0x304]
	cmp eax,ebx
	je Block257

 Block255:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block257

 Block256:
	lea ecx,[ebp-0x30C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block257:
	mov byte ptr [ebp-4],0x3B
	cmp esi,ebx
	je Block259

 Block258:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block259:
	cmp word ptr [ebp-0x32C],8
	mov byte ptr [ebp-4],0x39
	jne Block262

 Block260:
	mov eax,dword ptr [ebp-0x324]
	xor ecx,ecx
	mov word ptr [ebp-0x32C],cx
	cmp eax,ebx
	je Block263

 Block261:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block263

 Block262:
	lea edx,[ebp-0x32C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block263:
	cmp word ptr [ebp-0x12C],8
	mov byte ptr [ebp-4],0x38
	jne Block270

 Block264:
	xor eax,eax
	mov word ptr [ebp-0x12C],ax
	mov eax,dword ptr [ebp-0x124]
	cmp eax,ebx
	je Block266

 Block265:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block266:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block267:
	cmp word ptr [ebp-0x14C],8
	mov byte ptr [ebp-4],0x37
	jne Block271

 Block268:
	mov eax,dword ptr [ebp-0x144]
	xor edx,edx
	mov word ptr [ebp-0x14C],dx
	cmp eax,ebx
	je Block272

 Block269:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block272

 Block270:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x12C]
	push ecx
	call esi
	jmp Block267

 Block271:
	lea eax,[ebp-0x14C]
	push eax
	call esi

 Block272:
	cmp word ptr [ebp-0x16C],8
	mov byte ptr [ebp-4],0x36
	jne Block275

 Block273:
	mov eax,dword ptr [ebp-0x164]
	xor ecx,ecx
	mov word ptr [ebp-0x16C],cx
	cmp eax,ebx
	je Block276

 Block274:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block276

 Block275:
	lea edx,[ebp-0x16C]
	push edx
	call esi

 Block276:
	cmp word ptr [ebp-0x18C],8
	mov byte ptr [ebp-4],0x35
	jne Block279

 Block277:
	xor eax,eax
	mov word ptr [ebp-0x18C],ax
	mov eax,dword ptr [ebp-0x184]
	cmp eax,ebx
	je Block280

 Block278:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block280

 Block279:
	lea ecx,[ebp-0x18C]
	push ecx
	call esi

 Block280:
	cmp word ptr [ebp-0x1AC],8
	mov byte ptr [ebp-4],0x34
	jne Block283

 Block281:
	mov eax,dword ptr [ebp-0x1A4]
	xor edx,edx
	mov word ptr [ebp-0x1AC],dx
	cmp eax,ebx
	je Block284

 Block282:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block284

 Block283:
	lea eax,[ebp-0x1AC]
	push eax
	call esi

 Block284:
	cmp word ptr [ebp-0x1CC],8
	mov byte ptr [ebp-4],0x33
	jne Block287

 Block285:
	mov eax,dword ptr [ebp-0x1C4]
	xor ecx,ecx
	mov word ptr [ebp-0x1CC],cx
	cmp eax,ebx
	je Block288

 Block286:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block288

 Block287:
	lea edx,[ebp-0x1CC]
	push edx
	call esi

 Block288:
	cmp word ptr [ebp-0x1EC],8
	mov byte ptr [ebp-4],1
	jne Block291

 Block289:
	xor eax,eax
	mov word ptr [ebp-0x1EC],ax
	mov eax,dword ptr [ebp-0x1E4]
	cmp eax,ebx
	je Block292

 Block290:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block292

 Block291:
	lea ecx,[ebp-0x1EC]
	push ecx
	call esi

 Block292:
	lea edx,[ebp+0x20]
	push edx
	call edi
	lea eax,[ebp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block293:
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],0x3D
	call edi
	lea edx,[ebp-0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block308

 Block294:
	mov edx,dword ptr [ebp+0x20]
	mov edi,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x24]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x28]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x2C]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [ebp-0x1C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x18]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x14]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x10]
	push ebx
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x110]
	push edi
	mov byte ptr [ebp-4],0x3E
	call eax
	cmp eax,ebx
	jge Block296

 Block295:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block296:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x3D
	jne Block299

 Block297:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,ebx
	je Block300

 Block298:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block300

 Block299:
	lea edx,[ebp-0x1C]
	push edx
	call esi

 Block300:
	cmp word ptr [ebp+0x20],8
	mov byte ptr [ebp-4],1
	jne Block303

 Block301:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	cmp eax,ebx
	je Block304

 Block302:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block304

 Block303:
	lea ecx,[ebp+0x20]
	push ecx
	call esi

 Block304:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push ebx
	mov dword ptr [eax],ebx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp+0x60],esp
	push edi
	call eax
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [ebp+0x54]
	inc eax
	cmp eax,2
	mov dword ptr [ebp+0x54],eax
	jl Block3

 Block305:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],bl
	cmp eax,ebx
	je Block307

 Block306:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block307:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0x33C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x64]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x68
	mov esp,ebp
	pop ebp
	ret 8

 Block308:
	push eax
	call _com_issue_error

 Block309:
	push 0x80004003
	call _com_issue_error
}
}
// CMemoryGameDlg::GetCardPositionFromPoint
__SUB_CLASS_THIS(00227530, __thiscall, 138499,  CMemoryGameDlg, long, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,dword ptr [esp+0x18]
	push ebp
	mov ebp,dword ptr [esp+0x20]
	push esi
	push edi
	mov esi,ecx
	xor edi,edi
	cmp dword ptr [esi+0xCD8],edi
	jle Block5

 Block1:
	jmp Block3

 Block3:
	mov ecx,dword ptr [esi+0xD70]
	mov eax,edi
	cdq
	idiv ecx
	mov ecx,dword ptr [esi+0xD78]
	imul eax,0x43
	add eax,ecx
	lea ecx,[edx*8]
	sub ecx,edx
	mov edx,dword ptr [esi+0xD74]
	lea ecx,[edx+ecx*8]
	lea edx,[eax+0x3E]
	push edx
	lea edx,[ecx+0x31]
	push edx
	push eax
	push ecx
	lea eax,[esp+0x20]
	push eax
	call SetRect
	push ebp
	push ebx
	lea ecx,[esp+0x18]
	push ecx
	call PtInRect
	test eax,eax
	jne Block6

 Block4:
	inc edi
	cmp edi,dword ptr [esi+0xCD8]
	jl Block3

 Block5:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	add esp,0x10
	ret 8

 Block6:
	mov eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8
}
}
// CMemoryGameDlg::SetCard_Pic
_SUB_EXCEPTION_HANDLER(22C140)
__SUB_CLASS_THIS(0022C140, __thiscall, 138500,  CMemoryGameDlg, void, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_22C140
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
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
	mov eax,dword ptr [ebp+8]
	xor esi,esi
	cmp eax,esi
	jl Block131

 Block1:
	cmp eax,dword ptr [edi+0xCD8]
	jge Block131

 Block2:
	mov dword ptr [ebp-0x48],esi
	lea ebx,[eax*4]
	mov eax,dword ptr [edi+0x238]
	mov ecx,dword ptr [eax+ebx]
	add eax,ebx
	mov dword ptr [ebp-4],esi
	mov dword ptr [ebp-0x5C],ebx
	cmp ecx,esi
	je Block4

 Block3:
	mov dword ptr [eax],esi
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block4:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov ecx,3
	mov word ptr [ebp-0x58],cx
	mov dword ptr [ebp-0x50],esi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],2
	cmp ecx,esi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[ebp-0x24]
	push edx
	lea eax,[ebp-0x58]
	push eax
	push 4
	push 0
	push 0
	push 0
	push 0
	lea edx,[ebp-0x14]
	push edx
	call IWzGr2D::CreateLayer
	mov ecx,dword ptr [edi+0x238]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+ebx]
	add ecx,ebx
	cmp esi,eax
	je Block13

 Block9:
	mov dword ptr [ecx],eax
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block11:
	test esi,esi
	je Block13

 Block12:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block13:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block15:
	mov esi,8
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x58],si
	jne Block18

 Block16:
	mov eax,dword ptr [ebp-0x50]
	xor ecx,ecx
	mov word ptr [ebp-0x58],cx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[ebp-0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x24],si
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	lea edx,[ebp-0x14]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [ebp-4],3
	mov word ptr [ebp-0x24],cx
	mov dword ptr [ebp-0x1C],eax
	test eax,eax
	je Block25

 Block24:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block25:
	mov eax,dword ptr [edi+0x238]
	add eax,ebx
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],4
	test eax,eax
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea ecx,[ebp-0x24]
	push ecx
	mov ecx,eax
	call IWzVector2D::Putorigin
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x24],si
	jne Block30

 Block28:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	lea eax,[ebp-0x14]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [ebp-4],5
	mov word ptr [ebp-0x24],cx
	mov dword ptr [ebp-0x1C],eax
	test eax,eax
	je Block35

 Block34:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block35:
	mov eax,dword ptr [edi+0x238]
	add eax,ebx
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],6
	test eax,eax
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea ecx,[ebp-0x24]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::Putoverlay
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x24],si
	jne Block40

 Block38:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block43:
	mov eax,dword ptr [edi+0x238]
	mov esi,dword ptr [eax+ebx]
	add eax,ebx
	test esi,esi
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block47

 Block46:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block47:
	lea edx,[ebp-0x14]
	push 0x1A15
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi+0x234]
	mov edx,dword ptr [ecx+ebx]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp-0x48]
	push eax
	mov byte ptr [ebp-4],7
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x14]
	add esp,0xC
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block49:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x44]
	push ecx
	call esi
	lea edx,[ebp-0x44]
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
	lea eax,[ebp-0x34]
	push eax
	mov byte ptr [ebp-4],8
	call esi
	lea ecx,[ebp-0x34]
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
	lea edx,[ebp-0x6C]
	push edx
	mov byte ptr [ebp-4],9
	call esi
	lea eax,[ebp-0x6C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	lea ecx,[ebp-0x58]
	push ecx
	mov byte ptr [ebp-4],0xA
	call esi
	lea edx,[ebp-0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block57

 Block56:
	push eax
	call _com_issue_error

 Block57:
	lea eax,[ebp-0x24]
	push eax
	mov byte ptr [ebp-4],0xB
	call esi
	lea ecx,[ebp-0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block59

 Block58:
	push eax
	call _com_issue_error

 Block59:
	mov ebx,dword ptr [ebp-0x48]
	push 0
	push 0
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	mov byte ptr [ebp-4],0xC
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	lea edx,[ebp-0x44]
	push edx
	lea eax,[ebp-0x34]
	push eax
	lea ecx,[ebp-0x6C]
	push ecx
	lea edx,[ebp-0x58]
	push edx
	lea eax,[ebp-0x24]
	push eax
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi+0x200]
	mov byte ptr [ebp-4],0xD
	test ecx,ecx
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	lea edx,[ebp-0x8C]
	push edx
	mov byte ptr [ebp-4],0xC
	call IWzProperty::Getitem
	mov bl,0xE
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block64

 Block62:
	cmp eax,0x80004002
	je Block64

 Block63:
	push eax
	call _com_issue_error

 Block64:
	mov eax,dword ptr [edi+0x238]
	add eax,dword ptr [ebp-0x5C]
	mov byte ptr [ebp-4],0xF
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	mov esi,dword ptr [ebp-0x14]
	push esi
	lea ecx,[ebp-0x7C]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x7C],8
	jne Block69

 Block67:
	mov eax,dword ptr [ebp-0x74]
	xor edx,edx
	mov word ptr [ebp-0x7C],dx
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea eax,[ebp-0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov byte ptr [ebp-4],bl
	test esi,esi
	je Block72

 Block71:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block72:
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],0xC
	jne Block75

 Block73:
	xor eax,eax
	mov word ptr [ebp-0x8C],ax
	mov eax,dword ptr [ebp-0x84]
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea ecx,[ebp-0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov ebx,8
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x24],bx
	jne Block83

 Block77:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block79

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block79:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block80:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x58],bx
	jne Block84

 Block81:
	mov eax,dword ptr [ebp-0x50]
	xor ecx,ecx
	mov word ptr [ebp-0x58],cx
	test eax,eax
	je Block85

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block83:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x24]
	push eax
	call esi
	jmp Block80

 Block84:
	lea edx,[ebp-0x58]
	push edx
	call esi

 Block85:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x6C],bx
	jne Block88

 Block86:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea ecx,[ebp-0x6C]
	push ecx
	call esi

 Block89:
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x34],bx
	jne Block92

 Block90:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea eax,[ebp-0x34]
	push eax
	call esi

 Block93:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x44],bx
	jne Block96

 Block94:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea edx,[ebp-0x44]
	push edx
	call esi

 Block97:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x34]
	push eax
	call esi
	lea ecx,[ebp-0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block99

 Block98:
	push eax
	call _com_issue_error

 Block99:
	lea edx,[ebp-0x44]
	push edx
	mov byte ptr [ebp-4],0x10
	call esi
	lea eax,[ebp-0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block101

 Block100:
	push eax
	call _com_issue_error

 Block101:
	mov eax,dword ptr [edi+0x238]
	add eax,dword ptr [ebp-0x5C]
	mov bl,0x11
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],bl
	test eax,eax
	jne Block103

 Block102:
	push 0x80004003
	call _com_issue_error

 Block103:
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::Getrb
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x12
	test ecx,ecx
	jne Block105

 Block104:
	push 0x80004003
	call _com_issue_error

 Block105:
	lea edx,[ebp-0x34]
	push edx
	lea eax,[ebp-0x44]
	push eax
	push 0x3E
	push 0xFFFFFFCF
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block107

 Block106:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block107:
	mov ebx,8
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x44],bx
	jne Block110

 Block108:
	xor eax,eax
	mov word ptr [ebp-0x44],ax
	mov eax,dword ptr [ebp-0x3C]
	test eax,eax
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea ecx,[ebp-0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block111:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x34],bx
	jne Block114

 Block112:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block115:
	lea ecx,[ebp-0x34]
	push ecx
	call esi
	lea edx,[ebp-0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block117

 Block116:
	push eax
	call _com_issue_error

 Block117:
	lea eax,[ebp-0x44]
	mov bl,0x13
	push eax
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block119

 Block118:
	push eax
	call _com_issue_error

 Block119:
	mov ecx,dword ptr [ebp+8]
	mov eax,dword ptr [edi+0x238]
	add ecx,ecx
	add ecx,ecx
	add eax,ecx
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x14
	test ecx,ecx
	jne Block121

 Block120:
	push 0x80004003
	call _com_issue_error

 Block121:
	mov eax,dword ptr [ebp+8]
	mov esi,dword ptr [edi+0xD70]
	cdq
	idiv esi
	lea esi,[ebp-0x34]
	push esi
	lea esi,[ebp-0x44]
	push esi
	imul eax,0x43
	add eax,dword ptr [edi+0xD78]
	push eax
	lea eax,[edx*8]
	sub eax,edx
	mov edx,dword ptr [edi+0xD74]
	lea eax,[edx+eax*8+0x31]
	push eax
	call IWzVector2D::RelMove
	cmp word ptr [ebp-0x44],8
	mov byte ptr [ebp-4],bl
	jne Block124

 Block122:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	test eax,eax
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea edx,[ebp-0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block125:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],0
	jne Block128

 Block126:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block129:
	mov eax,dword ptr [ebp-0x48]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block131

 Block130:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block131:
	lea esp,[ebp-0x9C]
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
// CMemoryGameDlg::IsUserTurn
__SUB_CLASS_THIS0(002275C0, __thiscall, 138501,  CMemoryGameDlg, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xCBC]
	xor edx,edx
	cmp eax,dword ptr [ecx+0xDC]
	sete dl
	mov eax,edx
	ret
}
}
// CMemoryGameDlg::OnLeave
_SUB_EXCEPTION_HANDLER(228B20)
__SUB_CLASS_THIS(00228B20, __thiscall, 138494,  CMemoryGameDlg, void, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_228B20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x10],ebx
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0xC],ebx
	mov ecx,dword ptr [esi+0xDC]
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1C],1
	cmp eax,ecx
	je Block12

 Block1:
	push eax
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call CMiniRoomBaseDlg::GetUserID
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x20],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1C],1
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x14]
	mov dword ptr [esp+0x28],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	push 4
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call CMiniRoomBaseDlg::MakeGameMessage
	mov eax,dword ptr [esp+0xC]
	push 6
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0xFFFFFFFF
	push eax
	mov dword ptr [ecx],ebx
	call ZXString16::AssignCharStr
	mov ecx,esi
	call CMiniRoomBaseDlg::AddChatText
	mov eax,dword ptr [esi+0x1D8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push ebx
	call eax
	cmp dword ptr [esi+0x218],ebx
	je Block6

 Block4:
	mov eax,dword ptr [esi+0x218]
	cmp eax,ebx
	je Block6

 Block5:
	mov dword ptr [esi+0x218],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	cmp dword ptr [esi+0x220],ebx
	je Block9

 Block7:
	mov eax,dword ptr [esi+0x220]
	cmp eax,ebx
	je Block9

 Block8:
	mov dword ptr [esi+0x220],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	push ebx
	mov ecx,esi
	mov dword ptr [esi+0xCA4],ebx
	call CWnd::InvalidateRect
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	jmp Block25

 Block12:
	mov ecx,dword ptr [esp+0x28]
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,ebx
	je Block20

 Block13:
	cmp eax,4
	je Block20

 Block14:
	cmp eax,5
	jne Block16

 Block15:
	lea eax,[esp+0x24]
	push 0x1C9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x1C],4
	jmp Block21

 Block16:
	cmp eax,3
	jne Block18

 Block17:
	lea ecx,[esp+0x24]
	push 0x1D3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x1C],5
	jmp Block21

 Block18:
	cmp eax,2
	jne Block23

 Block19:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x67
	lea edx,[esp+0x14]
	push edx
	mov ecx,esi
	mov dword ptr [eax],ebx
	call CMiniRoomBaseDlg::MakeGameMessage
	mov eax,dword ptr [esp+0xC]
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0xFFFFFFFF
	push eax
	call ZXString16::CreateFromCharStr
	mov ecx,esi
	call CMiniRoomBaseDlg::AddChatText
	mov dword ptr [esi+0xD7C],3
	call get_update_time
	add eax,0x2710
	mov dword ptr [esi+0xD80],eax
	jmp Block24

 Block20:
	lea ecx,[esp+0x24]
	push 0x1CC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x1C],3

 Block21:
	push eax
	lea ecx,[esp+0x10]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1C],1
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 8
	mov ecx,esi
	call eax
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x20]
	mov dword ptr [esp+0x38],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	add esp,0x14

 Block24:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x1C],bl

 Block25:
	cmp eax,ebx
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x14
	ret 8
}
}
// CMemoryGameDlg::OnTimeOver
__SUB_CLASS_THIS(0022F330, __thiscall, 138495,  CMemoryGameDlg, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	push edi
	mov edi,dword ptr [esi+0xDC]
	call CInPacket::Decode1
	movzx eax,al
	xor ecx,ecx
	cmp edi,eax
	mov eax,dword ptr [esi+0xCD0]
	sete cl
	mov dword ptr [esi+0xC94],ecx
	test eax,eax
	jl Block5

 Block1:
	or edi,0xFFFFFFFF
	mov ecx,esi
	cmp dword ptr [esi+0xCD4],edi
	je Block3

 Block2:
	push eax
	call CMemoryGameDlg::SetCard_Back
	mov edx,dword ptr [esi+0xCD4]
	push edx
	mov ecx,esi
	call CMemoryGameDlg::SetCard_Back
	mov dword ptr [esi+0xCD4],edi
	jmp Block4

 Block3:
	push 1
	push eax
	call CMemoryGameDlg::TurnUpCard_Back

 Block4:
	mov dword ptr [esi+0xCDC],0
	mov dword ptr [esi+0xCD0],edi

 Block5:
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xCB4],0x2710
	call CWnd::InvalidateRect
	pop edi
	pop esi
	ret 4
}
}
// CMemoryGameDlg::TurnUpCard_Back
_SUB_EXCEPTION_HANDLER(22C980)
__SUB_CLASS_THIS(0022C980, __thiscall, 138496,  CMemoryGameDlg, void, long, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_22C980
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
	mov esi,ecx
	mov edi,dword ptr [ebp+8]
	xor eax,eax
	cmp edi,eax
	jl Block244

 Block1:
	cmp edi,dword ptr [esi+0xCD8]
	jge Block244

 Block2:
	mov dword ptr [ebp-0x60],eax
	mov dword ptr [ebp-4],eax
	lea eax,[ebp-0x14]
	push 0x1A15
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x234]
	mov eax,dword ptr [eax]
	add edi,edi
	add edi,edi
	mov edx,dword ptr [ecx+edi]
	push edx
	push eax
	lea eax,[ebp-0x60]
	mov ebx,1
	push eax
	mov byte ptr [ebp-4],bl
	mov dword ptr [ebp-0x38],edi
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x14]
	add esp,0xC
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	cmp dword ptr [ebp+0xC],0
	je Block136

 Block5:
	mov eax,dword ptr [esi+0x238]
	mov ecx,dword ptr [eax+edi]
	add eax,edi
	test ecx,ecx
	je Block7

 Block6:
	mov dword ptr [eax],0
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax

 Block7:
	lea ecx,[ebp-0x48]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x48]
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
	mov eax,3
	mov word ptr [ebp-0x58],ax
	mov dword ptr [ebp-0x50],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],al
	test ecx,ecx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea edx,[ebp-0x48]
	push edx
	lea eax,[ebp-0x58]
	push eax
	mov ebx,4
	push ebx
	push 0
	push 0
	push 0
	push 0
	lea edx,[ebp-0x14]
	push edx
	call IWzGr2D::CreateLayer
	mov ecx,dword ptr [esi+0x238]
	push eax
	add ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	cmp word ptr [ebp-0x58],8
	mov byte ptr [ebp-4],2
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [ebp-0x58],ax
	mov eax,dword ptr [ebp-0x50]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[ebp-0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	cmp word ptr [ebp-0x48],8
	mov byte ptr [ebp-4],0
	jne Block20

 Block18:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp-0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp-0x48],dx
	mov dword ptr [ebp-0x40],eax
	test eax,eax
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block23:
	mov eax,dword ptr [esi+0x238]
	add eax,edi
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],5
	test eax,eax
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea ecx,[ebp-0x48]
	push ecx
	mov ecx,eax
	call IWzVector2D::Putorigin
	cmp word ptr [ebp-0x48],8
	mov byte ptr [ebp-4],bl
	jne Block28

 Block26:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea eax,[ebp-0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	lea eax,[ebp-0x14]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,6
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp-0x48],cx
	mov dword ptr [ebp-0x40],eax
	test eax,eax
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block33:
	mov eax,dword ptr [esi+0x238]
	add eax,edi
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],7
	test eax,eax
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea ecx,[ebp-0x48]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::Putoverlay
	cmp word ptr [ebp-0x48],8
	mov byte ptr [ebp-4],bl
	jne Block38

 Block36:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea eax,[ebp-0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	mov eax,dword ptr [esi+0x238]
	add eax,dword ptr [ebp-0x38]
	mov edi,dword ptr [eax]
	test edi,edi
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push edi
	call ecx
	test eax,eax
	jge Block45

 Block44:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block45:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x58]
	push edx
	call ebx
	lea eax,[ebp-0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	lea ecx,[ebp-0x48]
	push ecx
	mov byte ptr [ebp-4],8
	call ebx
	lea edx,[ebp-0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block49

 Block48:
	push eax
	call _com_issue_error

 Block49:
	mov eax,dword ptr [esi+0x238]
	add eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],9
	mov ecx,dword ptr [eax]
	test ecx,ecx
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	mov eax,dword ptr [ebp+8]
	mov edi,dword ptr [esi+0xD70]
	cdq
	idiv edi
	lea edi,[ebp-0x58]
	push edi
	lea edi,[ebp-0x48]
	push edi
	imul eax,0x43
	add eax,dword ptr [esi+0xD78]
	push eax
	lea eax,[edx*8]
	sub eax,edx
	mov edx,dword ptr [esi+0xD74]
	lea eax,[edx+eax*8]
	push eax
	call IWzVector2D::RelMove
	cmp word ptr [ebp-0x48],8
	mov byte ptr [ebp-4],8
	jne Block54

 Block52:
	mov eax,dword ptr [ebp-0x40]
	xor ecx,ecx
	mov word ptr [ebp-0x48],cx
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea edx,[ebp-0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	cmp word ptr [ebp-0x58],8
	mov byte ptr [ebp-4],0
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [ebp-0x58],ax
	mov eax,dword ptr [ebp-0x50]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[ebp-0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	lea edx,[ebp-0x24]
	push edx
	call ebx
	lea eax,[ebp-0x24]
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
	lea ecx,[ebp-0x34]
	push ecx
	mov byte ptr [ebp-4],0xA
	call ebx
	lea edx,[ebp-0x34]
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
	lea eax,[ebp-0x70]
	push eax
	mov byte ptr [ebp-4],0xB
	call ebx
	lea ecx,[ebp-0x70]
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
	lea edx,[ebp-0x58]
	push edx
	mov byte ptr [ebp-4],0xC
	call ebx
	lea eax,[ebp-0x58]
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
	mov ecx,3
	mov word ptr [ebp-0x48],cx
	mov dword ptr [ebp-0x40],0x12C
	mov ebx,dword ptr [ebp-0x60]
	push 0
	push 0
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	mov byte ptr [ebp-4],0xE
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edi,esp
	lea edx,[ebp-0x24]
	push edx
	lea eax,[ebp-0x34]
	push eax
	lea ecx,[ebp-0x70]
	push ecx
	lea edx,[ebp-0x58]
	push edx
	lea eax,[ebp-0x48]
	push eax
	push 0
	push 0
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x5C],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x200]
	mov byte ptr [ebp-4],0xF
	test ecx,ecx
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea edx,[ebp-0x90]
	push edx
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov bl,0x10
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block72

 Block70:
	cmp eax,0x80004002
	je Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	mov eax,dword ptr [esi+0x238]
	add eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x11
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	mov edi,dword ptr [ebp-0x14]
	push edi
	lea ecx,[ebp-0x80]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x80],8
	jne Block77

 Block75:
	mov eax,dword ptr [ebp-0x78]
	xor edx,edx
	mov word ptr [ebp-0x80],dx
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea eax,[ebp-0x80]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block78:
	mov byte ptr [ebp-4],bl
	test edi,edi
	je Block80

 Block79:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block80:
	cmp word ptr [ebp-0x90],8
	mov byte ptr [ebp-4],0xE
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [ebp-0x90],ax
	mov eax,dword ptr [ebp-0x88]
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea ecx,[ebp-0x90]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov ebx,8
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x48],bx
	jne Block91

 Block85:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	test eax,eax
	je Block87

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block87:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block88:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x58],bx
	jne Block92

 Block89:
	mov eax,dword ptr [ebp-0x50]
	xor ecx,ecx
	mov word ptr [ebp-0x58],cx
	test eax,eax
	je Block93

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block91:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x48]
	push eax
	call edi
	jmp Block88

 Block92:
	lea edx,[ebp-0x58]
	push edx
	call edi

 Block93:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x70],bx
	jne Block96

 Block94:
	xor eax,eax
	mov word ptr [ebp-0x70],ax
	mov eax,dword ptr [ebp-0x68]
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea ecx,[ebp-0x70]
	push ecx
	call edi

 Block97:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x34],bx
	jne Block100

 Block98:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea eax,[ebp-0x34]
	push eax
	call edi

 Block101:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x24],bx
	jne Block104

 Block102:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea edx,[ebp-0x24]
	push edx
	call edi

 Block105:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x34]
	push eax
	call edi
	lea ecx,[ebp-0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block107

 Block106:
	push eax
	call _com_issue_error

 Block107:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],0x12
	call edi
	lea eax,[ebp-0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block109

 Block108:
	push eax
	call _com_issue_error

 Block109:
	mov eax,dword ptr [esi+0x238]
	add eax,dword ptr [ebp-0x38]
	mov bl,0x13
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],bl
	test eax,eax
	jne Block111

 Block110:
	push 0x80004003
	call _com_issue_error

 Block111:
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::Getrb
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x14
	test ecx,ecx
	jne Block113

 Block112:
	push 0x80004003
	call _com_issue_error

 Block113:
	lea edx,[ebp-0x34]
	push edx
	lea eax,[ebp-0x24]
	push eax
	push 0x3E
	push 0xFFFFFFCF
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block115

 Block114:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block115:
	mov edi,8
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp-0x24],di
	jne Block118

 Block116:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block119:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x34],di
	jne Block122

 Block120:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block123:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block125

 Block124:
	push eax
	call _com_issue_error

 Block125:
	lea eax,[ebp-0x24]
	mov bl,0x15
	push eax
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x24]
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
	mov eax,dword ptr [esi+0x238]
	add eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x16
	mov ecx,dword ptr [eax]
	test ecx,ecx
	jne Block129

 Block128:
	push 0x80004003
	call _com_issue_error

 Block129:
	mov eax,dword ptr [ebp+8]
	mov edi,dword ptr [esi+0xD70]
	cdq
	idiv edi
	lea edi,[ebp-0x34]
	push edi
	lea edi,[ebp-0x24]
	push edi
	imul eax,0x43
	add eax,dword ptr [esi+0xD78]
	push eax
	lea eax,[edx*8]
	sub eax,edx
	mov edx,dword ptr [esi+0xD74]
	lea eax,[edx+eax*8+0x31]
	push eax
	call IWzVector2D::RelMove
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],bl
	jne Block132

 Block130:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block133:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],0
	jne Block135

 Block134:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	jmp Block142

 Block135:
	lea ecx,[ebp-0x34]
	jmp Block145

 Block136:
	mov edx,3
	mov word ptr [ebp-0x24],dx
	mov dword ptr [ebp-0x1C],ebx
	mov eax,dword ptr [esi+0x238]
	add eax,edi
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x17
	test eax,eax
	jne Block138

 Block137:
	push 0x80004003
	call _com_issue_error

 Block138:
	lea ecx,[ebp-0x24]
	push ecx
	lea edx,[ebp-0x14]
	push edx
	mov ecx,eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block140

 Block139:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block140:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0
	jne Block144

 Block141:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]

 Block142:
	test eax,eax
	je Block146

 Block143:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block146

 Block144:
	lea ecx,[ebp-0x24]

 Block145:
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block146:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x58]
	push edx
	call edi
	lea eax,[ebp-0x58]
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
	lea ecx,[ebp-0x48]
	push ecx
	mov byte ptr [ebp-4],0x18
	call edi
	lea edx,[ebp-0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block150

 Block149:
	push eax
	call _com_issue_error

 Block150:
	lea eax,[ebp-0x70]
	push eax
	mov byte ptr [ebp-4],0x19
	call edi
	lea ecx,[ebp-0x70]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block152

 Block151:
	push eax
	call _com_issue_error

 Block152:
	lea edx,[ebp-0x34]
	push edx
	mov byte ptr [ebp-4],0x1A
	call edi
	lea eax,[ebp-0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block154

 Block153:
	push eax
	call _com_issue_error

 Block154:
	mov ecx,3
	mov word ptr [ebp-0x24],cx
	mov dword ptr [ebp-0x1C],0x12C
	mov eax,dword ptr [esi+0xCB0]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	mov bl,0x1C
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edi,esp
	lea edx,[ebp-0x58]
	push edx
	lea eax,[ebp-0x48]
	push eax
	lea ecx,[ebp-0x70]
	push ecx
	lea edx,[ebp-0x34]
	push edx
	lea eax,[ebp-0x24]
	push eax
	mov eax,dword ptr [esi+0xCB0]
	push 0
	push 0
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x5C],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x200]
	mov byte ptr [ebp-4],0x1D
	test ecx,ecx
	jne Block156

 Block155:
	push 0x80004003
	call _com_issue_error

 Block156:
	lea edx,[ebp-0x80]
	push edx
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block159

 Block157:
	cmp eax,0x80004002
	je Block159

 Block158:
	push eax
	call _com_issue_error

 Block159:
	mov eax,dword ptr [esi+0x238]
	add eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x1F
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block161

 Block160:
	push 0x80004003
	call _com_issue_error

 Block161:
	mov edi,dword ptr [ebp-0x14]
	push edi
	lea ecx,[ebp-0x90]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x90],8
	jne Block164

 Block162:
	mov eax,dword ptr [ebp-0x88]
	xor edx,edx
	mov word ptr [ebp-0x90],dx
	test eax,eax
	je Block165

 Block163:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block165

 Block164:
	lea eax,[ebp-0x90]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block165:
	mov byte ptr [ebp-4],0x1E
	test edi,edi
	je Block167

 Block166:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block167:
	cmp word ptr [ebp-0x80],8
	mov byte ptr [ebp-4],bl
	jne Block170

 Block168:
	xor eax,eax
	mov word ptr [ebp-0x80],ax
	mov eax,dword ptr [ebp-0x78]
	test eax,eax
	je Block171

 Block169:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block171

 Block170:
	lea ecx,[ebp-0x80]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block171:
	mov ebx,8
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp-0x24],bx
	jne Block178

 Block172:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block174

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block174:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block175:
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp-0x34],bx
	jne Block179

 Block176:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block180

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block180

 Block178:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x24]
	push eax
	call edi
	jmp Block175

 Block179:
	lea edx,[ebp-0x34]
	push edx
	call edi

 Block180:
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp-0x70],bx
	jne Block183

 Block181:
	xor eax,eax
	mov word ptr [ebp-0x70],ax
	mov eax,dword ptr [ebp-0x68]
	test eax,eax
	je Block184

 Block182:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block184

 Block183:
	lea ecx,[ebp-0x70]
	push ecx
	call edi

 Block184:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp-0x48],bx
	jne Block187

 Block185:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	test eax,eax
	je Block188

 Block186:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block188

 Block187:
	lea eax,[ebp-0x48]
	push eax
	call edi

 Block188:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x58],bx
	jne Block191

 Block189:
	mov eax,dword ptr [ebp-0x50]
	xor ecx,ecx
	mov word ptr [ebp-0x58],cx
	test eax,eax
	je Block192

 Block190:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block192

 Block191:
	lea edx,[ebp-0x58]
	push edx
	call edi

 Block192:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block194

 Block193:
	push eax
	call _com_issue_error

 Block194:
	mov eax,dword ptr [esi+0x238]
	add eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x20
	mov edi,dword ptr [eax]
	test edi,edi
	jne Block196

 Block195:
	push 0x80004003
	call _com_issue_error

 Block196:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x58]
	lea eax,[ebp-0x14]
	push eax
	push edi
	mov dword ptr [ebp-0x14],0
	call ecx
	test eax,eax
	jge Block198

 Block197:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block198:
	mov eax,dword ptr [ebp-0x14]
	add eax,0x258
	mov edx,3
	mov word ptr [ebp-0x24],dx
	mov dword ptr [ebp-0x1C],eax
	mov ecx,dword ptr [ebp+8]
	mov eax,dword ptr [esi+0x238]
	add ecx,ecx
	add ecx,ecx
	add eax,ecx
	mov eax,dword ptr [eax]
	mov bl,0x21
	mov byte ptr [ebp-4],bl
	test eax,eax
	jne Block200

 Block199:
	push 0x80004003
	call _com_issue_error

 Block200:
	lea ecx,[ebp-0x5C]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::Getrb
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x22
	test ecx,ecx
	jne Block202

 Block201:
	push 0x80004003
	call _com_issue_error

 Block202:
	lea edx,[ebp-0x34]
	push edx
	lea eax,[ebp-0x24]
	push eax
	push 0x3E
	push 0x31
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp-0x5C]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block204

 Block203:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block204:
	mov edi,8
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp-0x24],di
	jne Block207

 Block205:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block208

 Block206:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block208

 Block207:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block208:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x34],di
	jne Block211

 Block209:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block212

 Block210:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block212

 Block211:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block212:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block214

 Block213:
	push eax
	call _com_issue_error

 Block214:
	mov ebx,dword ptr [ebp+8]
	mov eax,dword ptr [esi+0x238]
	lea ecx,[ebx*4]
	mov edi,dword ptr [eax+ecx]
	add eax,ecx
	mov byte ptr [ebp-4],0x23
	mov dword ptr [ebp-0x38],ecx
	test edi,edi
	jne Block216

 Block215:
	push 0x80004003
	call _com_issue_error

 Block216:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[ebp-0x14]
	push ecx
	push edi
	mov dword ptr [ebp-0x14],0
	call edx
	test eax,eax
	jge Block218

 Block217:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block218:
	mov eax,dword ptr [ebp-0x14]
	add eax,0x258
	mov ecx,3
	mov word ptr [ebp-0x24],cx
	mov dword ptr [ebp-0x1C],eax
	mov eax,dword ptr [esi+0x238]
	add eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x24
	mov ecx,dword ptr [eax]
	test ecx,ecx
	jne Block220

 Block219:
	push 0x80004003
	call _com_issue_error

 Block220:
	mov edi,dword ptr [esi+0xD70]
	mov eax,ebx
	cdq
	idiv edi
	lea edi,[ebp-0x34]
	push edi
	lea edi,[ebp-0x24]
	push edi
	imul eax,0x43
	add eax,dword ptr [esi+0xD78]
	push eax
	lea eax,[edx*8]
	sub eax,edx
	mov edx,dword ptr [esi+0xD74]
	lea eax,[edx+eax*8]
	push eax
	call IWzVector2D::RelMove
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0x23
	jne Block223

 Block221:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block224

 Block222:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block224

 Block223:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block224:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],0
	jne Block227

 Block225:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block228

 Block226:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block228

 Block227:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block228:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x34]
	push edx
	call edi
	lea eax,[ebp-0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block230

 Block229:
	push eax
	call _com_issue_error

 Block230:
	lea ecx,[ebp-0x24]
	mov bl,0x25
	push ecx
	mov byte ptr [ebp-4],bl
	call edi
	lea edx,[ebp-0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block232

 Block231:
	push eax
	call _com_issue_error

 Block232:
	mov esi,dword ptr [esi+0x238]
	add esi,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x26
	mov ecx,dword ptr [esi]
	test ecx,ecx
	jne Block234

 Block233:
	push 0x80004003
	call _com_issue_error

 Block234:
	lea eax,[ebp-0x34]
	push eax
	lea edx,[ebp-0x24]
	push edx
	push 0
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x24],si
	jne Block237

 Block235:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block238

 Block236:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block238

 Block237:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block238:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x34],si
	jne Block241

 Block239:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block242

 Block240:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block242

 Block241:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block242:
	mov eax,dword ptr [ebp-0x60]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block244

 Block243:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block244:
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
	ret 8
}
}
// CMemoryGameDlg::GetActionPosition
__SUB_CLASS_THIS(002274A0, __thiscall, 138493,  CMemoryGameDlg, void, long, long&, tagPOINT&) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,dword ptr [esp+0xC]
	neg ecx
	sbb ecx,ecx
	and ecx,0x60
	add ecx,0x1B6
	mov dword ptr [eax+4],0x8D
	mov dword ptr [eax],ecx
	ret 0xC
}
}
// CMemoryGameDlg::OnUserStart
__SUB_CLASS_THIS(0022F220, __thiscall, 138495,  CMemoryGameDlg, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode1
	mov ecx,edi
	movzx ebp,al
	call CInPacket::Decode1
	movzx eax,al
	lea ecx,[esp+0x14]
	push ecx
	lea ebx,[esi+0x234]
	push eax
	mov ecx,ebx
	mov dword ptr [esi+0xCD8],eax
	call ZArray<long>::_Alloc
	mov edx,dword ptr [esi+0xCD8]
	mov eax,dword ptr [ebx]
	add edx,edx
	add edx,edx
	push edx
	push eax
	mov ecx,edi
	call CInPacket::DecodeBuffer
	xor ecx,ecx
	cmp ebp,dword ptr [esi+0xDC]
	setne cl
	xor edi,edi
	mov dword ptr [esi+0xC94],ecx
	mov eax,dword ptr [esi+0x218]
	cmp eax,edi
	je Block2

 Block1:
	mov dword ptr [esi+0x218],edi
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block2:
	mov eax,dword ptr [esi+0x21C]
	cmp eax,edi
	je Block4

 Block3:
	mov dword ptr [esi+0x21C],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	or eax,0xFFFFFFFF
	mov dword ptr [esi+0xCD4],eax
	mov dword ptr [esi+0xCD0],eax
	mov eax,dword ptr [esi+0xCD8]
	imul eax,0xC8
	add eax,0x2CEC
	mov ecx,esi
	mov dword ptr [esi+0xCB4],eax
	mov dword ptr [esi+0xCA4],edi
	call CMemoryGameDlg::ArrangeCard
	push 0x78
	xor eax,eax
	lea ecx,[esi+0xCF8]
	push edi
	mov dword ptr [esi+0xCEC],eax
	push ecx
	mov dword ptr [esi+0xCF0],eax
	call _memset
	add esp,0xC
	mov ecx,esi
	call CMemoryGameDlg::DrawScore
	push edi
	mov ecx,esi
	call CWnd::InvalidateRect
	pop edi
	mov dword ptr [esi+0xC9C],1
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// CMemoryGameDlg::ResetMiniGameData
__SUB_CLASS_THIS0(002278E0, __thiscall, 138484,  CMemoryGameDlg, void) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	xor edi,edi
	cmp dword ptr [esi+0xDC],edi
	jne Block2

 Block1:
	mov eax,dword ptr [esi+0x1C0]
	push edi
	jmp Block3

 Block2:
	mov eax,dword ptr [esi+0x1C8]
	push 1

 Block3:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	call edx
	mov dword ptr [esi+0xCE8],edi
	mov dword ptr [esi+0xCA4],edi
	mov dword ptr [esi+0xCA0],edi
	mov dword ptr [esi+0xC94],edi
	mov dword ptr [esi+0xC90],edi
	mov dword ptr [esi+0xC8C],edi
	mov dword ptr [esi+0xC88],edi
	mov dword ptr [esi+0xCDC],edi
	pop edi
	pop esi
	ret
}
}
// CMemoryGameDlg::SendTieRequest
_SUB_EXCEPTION_HANDLER(2281D0)
__SUB_CLASS_THIS0(002281D0, __thiscall, 138484,  CMemoryGameDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2281D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0xC90],0
	jne Block4

 Block1:
	cmp dword ptr [esi+0xC8C],0
	jne Block4

 Block2:
	push 0
	push 0
	lea eax,[esi+0x88]
	push eax
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1DA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block4

 Block3:
	push 0x90
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 0x32
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0xC]
	push edx
	call CClientSocket::SendPacket
	mov eax,1
	lea ecx,[esp+0x10]
	mov dword ptr [esi+0xC8C],eax
	mov dword ptr [esi+0xC90],eax
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block4:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret
}
}
// CMemoryGameDlg::OnMouseMove
__SUB_CLASS_THIS(00227940, __thiscall, 138489,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0xC]
	push eax
	lea edi,[esi-4]
	push ecx
	mov ecx,edi
	call CMemoryGameDlg::GetCardPositionFromPoint
	cmp eax,dword ptr [esi+0x1F0]
	je Block3

 Block1:
	cmp dword ptr [esi+0x1F4],0
	je Block3

 Block2:
	mov ecx,edi
	call CMemoryGameDlg::SetCardFree

 Block3:
	pop edi
	xor eax,eax
	pop esi
	ret 8
}
}
// CMemoryGameDlg::ArrangeCard
_SUB_EXCEPTION_HANDLER(22E040)
__SUB_CLASS_THIS0(0022E040, __thiscall, 138484,  CMemoryGameDlg, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_22E040
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x90
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
	mov dword ptr [ebp+4],edi
	xor esi,esi
	mov dword ptr [ebp+0x5C],esi
	mov eax,dword ptr [edi+0xCD8]
	lea edx,[ebp+0x63]
	push edx
	lea ecx,[edi+0x238]
	push eax
	mov dword ptr [ebp-4],esi
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::_Alloc
	cmp dword ptr [edi+0xCD8],esi
	mov dword ptr [ebp+0x64],esi
	jle Block100

 Block1:
	lea eax,[ebp+0x14]
	push 0x1A15
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,dword ptr [ebp+0x64]
	mov ecx,dword ptr [edi+0x234]
	mov eax,dword ptr [eax]
	add ebx,ebx
	add ebx,ebx
	mov edx,dword ptr [ecx+ebx]
	push edx
	push eax
	lea eax,[ebp+0x5C]
	push eax
	mov byte ptr [ebp-4],1
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x14]
	add esp,0xC
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x6C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block103

 Block4:
	mov eax,3
	mov word ptr [ebp-0x1C],ax
	mov dword ptr [ebp-0x14],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],al
	test ecx,ecx
	je Block104

 Block5:
	lea edx,[ebp-0x6C]
	push edx
	lea eax,[ebp-0x1C]
	push eax
	push 4
	push 0
	push 0
	push 0
	push 0
	lea edx,[ebp+0x10]
	push edx
	call IWzGr2D::CreateLayer
	mov ecx,dword ptr [edi+0x238]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+ebx]
	add ecx,ebx
	cmp esi,eax
	je Block10

 Block6:
	mov dword ptr [ecx],eax
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	test esi,esi
	je Block10

 Block9:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block10:
	mov eax,dword ptr [ebp+0x10]
	test eax,eax
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block12:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],2
	jne Block15

 Block13:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	lea edx,[ebp]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [ebp-4],4
	mov word ptr [ebp+0x18],cx
	mov dword ptr [ebp+0x20],eax
	test eax,eax
	je Block22

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block22:
	mov eax,dword ptr [edi+0x238]
	mov esi,dword ptr [eax+ebx]
	add eax,ebx
	mov byte ptr [ebp-4],5
	test esi,esi
	je Block104

 Block23:
	mov edx,dword ptr [ebp+0x18]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x1C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x20]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x24]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block25

 Block24:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	cmp word ptr [ebp+0x18],8
	mov byte ptr [ebp-4],4
	jne Block28

 Block26:
	mov eax,dword ptr [ebp+0x20]
	xor ecx,ecx
	mov word ptr [ebp+0x18],cx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea edx,[ebp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov eax,dword ptr [ebp]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	lea eax,[ebp+0xC]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [ebp-4],6
	mov word ptr [ebp+0x48],cx
	mov dword ptr [ebp+0x50],eax
	test eax,eax
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block33:
	mov eax,dword ptr [edi+0x238]
	mov esi,dword ptr [eax+ebx]
	add eax,ebx
	mov byte ptr [ebp-4],7
	test esi,esi
	je Block104

 Block34:
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
	test eax,eax
	jge Block36

 Block35:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block36:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],6
	jne Block39

 Block37:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block42:
	mov eax,dword ptr [edi+0x238]
	mov esi,dword ptr [eax+ebx]
	add eax,ebx
	test esi,esi
	je Block104

 Block43:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block45

 Block44:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block45:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x38]
	push edx
	call esi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block103

 Block46:
	lea ecx,[ebp+0x28]
	push ecx
	mov byte ptr [ebp-4],8
	call esi
	lea edx,[ebp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block103

 Block47:
	mov eax,dword ptr [edi+0x238]
	mov esi,dword ptr [eax+ebx]
	add eax,ebx
	mov byte ptr [ebp-4],9
	test esi,esi
	je Block104

 Block48:
	mov ecx,dword ptr [edi+0xD70]
	mov eax,dword ptr [ebp+0x64]
	cdq
	idiv ecx
	mov ebx,dword ptr [ebp+0x38]
	sub esp,0x10
	lea ecx,[edx*8]
	imul eax,0x43
	add eax,dword ptr [edi+0xD78]
	sub ecx,edx
	mov edx,dword ptr [edi+0xD74]
	mov edi,dword ptr [esi]
	lea edx,[edx+ecx*8]
	mov ecx,esp
	mov dword ptr [ecx],ebx
	mov ebx,dword ptr [ebp+0x3C]
	mov dword ptr [ecx+4],ebx
	mov ebx,dword ptr [ebp+0x40]
	mov dword ptr [ecx+8],ebx
	mov ebx,dword ptr [ebp+0x44]
	mov dword ptr [ecx+0xC],ebx
	mov ebx,dword ptr [ebp+0x28]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],ebx
	mov ebx,dword ptr [ebp+0x2C]
	mov dword ptr [ecx+4],ebx
	mov ebx,dword ptr [ebp+0x30]
	push eax
	mov eax,dword ptr [edi+0x90]
	mov dword ptr [ecx+8],ebx
	mov ebx,dword ptr [ebp+0x34]
	push edx
	push esi
	mov dword ptr [ecx+0xC],ebx
	call eax
	test eax,eax
	jge Block50

 Block49:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block50:
	mov esi,8
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp+0x28],si
	jne Block53

 Block51:
	mov eax,dword ptr [ebp+0x30]
	xor ecx,ecx
	mov word ptr [ebp+0x28],cx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[ebp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp+0x38],si
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x5C]
	push edx
	call esi
	lea eax,[ebp-0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block103

 Block59:
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],0xA
	call esi
	lea edx,[ebp-0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block103

 Block60:
	lea eax,[ebp-0x2C]
	push eax
	mov byte ptr [ebp-4],0xB
	call esi
	lea ecx,[ebp-0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block103

 Block61:
	lea edx,[ebp-0x7C]
	push edx
	mov byte ptr [ebp-4],0xC
	call esi
	lea eax,[ebp-0x7C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block103

 Block62:
	mov ecx,3
	mov word ptr [ebp-0x4C],cx
	mov dword ptr [ebp-0x44],0x12C
	mov edi,dword ptr [ebp+4]
	mov eax,dword ptr [edi+0xCB0]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	mov bl,0xE
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	lea edx,[ebp-0x5C]
	push edx
	lea eax,[ebp-0x3C]
	push eax
	lea ecx,[ebp-0x2C]
	push ecx
	lea edx,[ebp-0x7C]
	push edx
	lea eax,[ebp-0x4C]
	push eax
	mov eax,dword ptr [edi+0xCB0]
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi+0x200]
	mov byte ptr [ebp-4],0xF
	test ecx,ecx
	je Block104

 Block63:
	lea edx,[ebp-0x9C]
	push edx
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x58],esi
	test eax,eax
	je Block66

 Block64:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+8]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+8]
	mov esi,ecx
	mov dword ptr [ebp+0x58],esi
	test eax,eax
	jge Block66

 Block65:
	cmp eax,0x80004002
	jne Block103

 Block66:
	mov ecx,dword ptr [ebp+0x64]
	mov eax,dword ptr [edi+0x238]
	add ecx,ecx
	add ecx,ecx
	add eax,ecx
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block104

 Block67:
	push esi
	lea edx,[ebp-0x8C]
	push edx
	mov ecx,eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x8C],8
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [ebp-0x8C],ax
	mov eax,dword ptr [ebp-0x84]
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea ecx,[ebp-0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov byte ptr [ebp-4],0x10
	test esi,esi
	je Block73

 Block72:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block73:
	cmp word ptr [ebp-0x9C],8
	mov byte ptr [ebp-4],bl
	jne Block76

 Block74:
	mov eax,dword ptr [ebp-0x94]
	xor ecx,ecx
	mov word ptr [ebp-0x9C],cx
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea edx,[ebp-0x9C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block77:
	mov ebx,8
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x4C],bx
	jne Block84

 Block78:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block80

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block80:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block81:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x7C],bx
	jne Block85

 Block82:
	mov eax,dword ptr [ebp-0x74]
	xor edx,edx
	mov word ptr [ebp-0x7C],dx
	test eax,eax
	je Block86

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block84:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x4C]
	push ecx
	call esi
	jmp Block81

 Block85:
	lea eax,[ebp-0x7C]
	push eax
	call esi

 Block86:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x2C],bx
	jne Block89

 Block87:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea edx,[ebp-0x2C]
	push edx
	call esi

 Block90:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x3C],bx
	jne Block93

 Block91:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea ecx,[ebp-0x3C]
	push ecx
	call esi

 Block94:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x5C],bx
	jne Block97

 Block95:
	mov eax,dword ptr [ebp-0x54]
	xor edx,edx
	mov word ptr [ebp-0x5C],dx
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea eax,[ebp-0x5C]
	push eax
	call esi

 Block98:
	mov eax,dword ptr [ebp+0x64]
	inc eax
	cmp eax,dword ptr [edi+0xCD8]
	mov dword ptr [ebp+0x64],eax
	jl Block1

 Block99:
	mov esi,dword ptr [ebp+0x5C]

 Block100:
	call get_update_time
	mov dword ptr [edi+0xCE4],eax
	mov dword ptr [edi+0xCF4],1
	mov dword ptr [ebp-4],0xFFFFFFFF
	test esi,esi
	je Block102

 Block101:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block102:
	lea esp,[ebp-0xAC]
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

 Block103:
	push eax
	call _com_issue_error

 Block104:
	push 0x80004003
	call _com_issue_error
}
}
// CMemoryGameDlg::OnClickBanButton
_SUB_EXCEPTION_HANDLER(2283A0)
__SUB_CLASS_THIS0(002283A0, __thiscall, 138484,  CMemoryGameDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2283A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	push 0
	push 0
	add ecx,0x88
	push ecx
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x1D8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block2

 Block1:
	push 0x90
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0x3C
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x20
	ret
}
}
// CMemoryGameDlg::SendTurnUpCard
_SUB_EXCEPTION_HANDLER(2279B0)
__SUB_CLASS_THIS(002279B0, __thiscall, 138496,  CMemoryGameDlg, void, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2279B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	push 0x90
	lea ecx,[esp+8]
	call COutPacket::_ctor_1
	push 0x44
	lea ecx,[esp+8]
	mov dword ptr [esp+0x20],0
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x28]
	push eax
	lea ecx,[esp+8]
	call COutPacket::Encode1
	mov ecx,dword ptr [esp+0x24]
	push ecx
	lea ecx,[esp+8]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+4]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+8]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret 8
}
}
// CMemoryGameDlg::OnClickReadyButton
_SUB_EXCEPTION_HANDLER(2282B0)
__SUB_CLASS_THIS0(002282B0, __thiscall, 138484,  CMemoryGameDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2282B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	cmp dword ptr [ecx+0xCA4],0
	push 0x90
	lea ecx,[esp+0xC]
	jne Block2

 Block1:
	call COutPacket::_ctor_1
	push 0x3A
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	lea eax,[esp+8]
	push eax
	jmp Block3

 Block2:
	call COutPacket::_ctor_1
	push 0x3B
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],1
	call COutPacket::Encode1
	lea ecx,[esp+8]
	push ecx

 Block3:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	lea edx,[esp+4]
	push 0x649
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [esp+0x28],2
	call play_minigame_sound
	mov eax,dword ptr [esp+0xC]
	add esp,8
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x20
	ret
}
}
// CMemoryGameDlg::DrawGameResult
_SUB_EXCEPTION_HANDLER(22FCF0)
__SUB_CLASS_THIS(0022FCF0, __thiscall, 138498,  CMemoryGameDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_22FCF0
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
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov eax,dword ptr [edi+0xE4]
	cmp eax,1
	mov dword ptr [esp+0x50],ebp
	jle Block81

 Block1:
	cmp dword ptr [edi+0xCC0],1
	je Block81

 Block2:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x50],2
	cmp ecx,ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x2C]
	push edx
	push 6
	push ebp
	push ebp
	push ebp
	push ebp
	lea eax,[esp+0x3C]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x218]
	cmp esi,eax
	je Block11

 Block7:
	mov dword ptr [edi+0x218],eax
	cmp eax,ebp
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block9:
	cmp esi,ebp
	je Block11

 Block10:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block11:
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block13:
	mov esi,8
	mov byte ptr [esp+0x50],1
	cmp word ptr [esp+0x28],si
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [esp+0x50],0
	cmp word ptr [esp+0x38],si
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
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
	lea edx,[esp+0x20]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x50],3
	mov word ptr [esp+0x38],cx
	mov dword ptr [esp+0x40],eax
	cmp eax,ebp
	je Block23

 Block22:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block23:
	mov ecx,dword ptr [edi+0x218]
	mov byte ptr [esp+0x50],4
	cmp ecx,ebp
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea edx,[esp+0x38]
	push edx
	call IWzVector2D::Putorigin
	mov byte ptr [esp+0x50],3
	cmp word ptr [esp+0x38],si
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x50],0
	cmp eax,ebp
	je Block31

 Block30:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block31:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,5
	mov edx,0xD
	mov byte ptr [esp+0x50],bl
	mov word ptr [esp+0x38],dx
	mov dword ptr [esp+0x40],eax
	cmp eax,ebp
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block33:
	mov ecx,dword ptr [edi+0x218]
	mov byte ptr [esp+0x50],6
	cmp ecx,ebp
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea eax,[esp+0x38]
	push eax
	call IWzGr2DLayer::Putoverlay
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x50],bl
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebp
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x50],0
	cmp eax,ebp
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	mov esi,dword ptr [edi+0x218]
	cmp esi,ebp
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,ebp
	jge Block45

 Block44:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block45:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	lea ecx,[esp+0x38]
	mov bl,7
	push ecx
	mov byte ptr [esp+0x54],bl
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block49

 Block48:
	push eax
	call _com_issue_error

 Block49:
	mov ecx,dword ptr [edi+0x218]
	mov eax,dword ptr [edi+0xDC]
	mov byte ptr [esp+0x50],8
	cmp ecx,ebp
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	neg eax
	lea edx,[esp+0x28]
	push edx
	sbb eax,eax
	lea edx,[esp+0x3C]
	push edx
	and eax,0xFFFFFFAA
	push 0x71
	add eax,0x1F0
	push eax
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x38],si
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov byte ptr [esp+0x50],0
	cmp word ptr [esp+0x28],si
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov ecx,edi
	call CMemoryGameDlg::IsWinnerLastTime
	test eax,eax
	je Block61

 Block60:
	lea ecx,[esp+0x20]
	push 0x657
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x14],1
	jmp Block62

 Block61:
	lea edx,[esp+0x18]
	push 0x658
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x14],2

 Block62:
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block64

 Block63:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block64:
	mov ecx,dword ptr [edi+0x1FC]
	mov dword ptr [esp+0x5C],0xB
	cmp ecx,ebp
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	lea eax,[esp+0x44]
	mov bl,0xA
	push eax
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [esp+0x58],0xC
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	mov dword ptr [ecx],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block69

 Block67:
	cmp eax,0x80004002
	je Block69

 Block68:
	push eax
	call _com_issue_error

 Block69:
	mov eax,dword ptr [edi+0x218]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block71:
	call CAnimationDisplayer::LoadCanvas
	add esp,8
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x38],si
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov ebx,dword ptr [esp+0x14]
	test bl,2
	je Block78

 Block76:
	mov ecx,dword ptr [esp+0x18]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp ecx,ebp
	je Block78

 Block77:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],ebp

 Block78:
	mov dword ptr [esp+0x50],ebp
	test bl,1
	je Block81

 Block79:
	mov ecx,dword ptr [esp+0x20]
	and dword ptr [esp+0x14],0xFFFFFFFE
	cmp ecx,ebp
	je Block81

 Block80:
	call _xbstr_t::Data_t::Release

 Block81:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block83

 Block82:
	push eax
	call _com_issue_error

 Block83:
	mov ecx,3
	mov word ptr [esp+0x38],cx
	mov dword ptr [esp+0x40],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x50],0xE
	cmp ecx,ebp
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push 6
	push ebp
	push ebp
	push ebp
	push ebp
	lea edx,[esp+0x3C]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x21C]
	cmp esi,eax
	je Block90

 Block86:
	mov dword ptr [edi+0x21C],eax
	cmp eax,ebp
	je Block88

 Block87:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block88:
	cmp esi,ebp
	je Block90

 Block89:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block90:
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block92

 Block91:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block92:
	mov esi,8
	mov byte ptr [esp+0x50],0xD
	cmp word ptr [esp+0x38],si
	jne Block95

 Block93:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebp
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov byte ptr [esp+0x50],0
	cmp word ptr [esp+0x28],si
	jne Block99

 Block97:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block100:
	lea edx,[esp+0x20]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0xF
	mov ecx,0xD
	mov byte ptr [esp+0x50],bl
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	cmp eax,ebp
	je Block102

 Block101:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block102:
	mov esi,dword ptr [edi+0x21C]
	mov byte ptr [esp+0x50],0x10
	cmp esi,ebp
	jne Block104

 Block103:
	push 0x80004003
	call _com_issue_error

 Block104:
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
	jge Block106

 Block105:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block106:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x50],bl
	jne Block109

 Block107:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block110:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x50],0
	cmp eax,ebp
	je Block112

 Block111:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block112:
	lea eax,[esp+0x20]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x11
	mov ecx,0xD
	mov byte ptr [esp+0x50],bl
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	cmp eax,ebp
	je Block114

 Block113:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block114:
	mov esi,dword ptr [edi+0x21C]
	mov byte ptr [esp+0x50],0x12
	cmp esi,ebp
	jne Block116

 Block115:
	push 0x80004003
	call _com_issue_error

 Block116:
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
	cmp eax,ebp
	jge Block118

 Block117:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block118:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x50],bl
	jne Block121

 Block119:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block122:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x50],0
	cmp eax,ebp
	je Block124

 Block123:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block124:
	mov esi,dword ptr [edi+0x21C]
	cmp esi,ebp
	jne Block126

 Block125:
	push 0x80004003
	call _com_issue_error

 Block126:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,ebp
	jge Block128

 Block127:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block128:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block130

 Block129:
	push eax
	call _com_issue_error

 Block130:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	mov bl,0x13
	push ecx
	mov byte ptr [esp+0x54],bl
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block132

 Block131:
	push eax
	call _com_issue_error

 Block132:
	mov ecx,dword ptr [edi+0x21C]
	mov byte ptr [esp+0x50],0x14
	cmp ecx,ebp
	jne Block134

 Block133:
	push 0x80004003
	call _com_issue_error

 Block134:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x3C]
	push edx
	push 0x97
	push 0x57
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x50],bl
	jne Block137

 Block135:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block138:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x50],0
	jne Block141

 Block139:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
	je Block142

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block141:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block142:
	lea ecx,[esp+0x28]
	push ecx
	call esi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block144

 Block143:
	push eax
	call _com_issue_error

 Block144:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x54],0x15
	call esi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block146

 Block145:
	push eax
	call _com_issue_error

 Block146:
	mov ecx,dword ptr [edi+0x21C]
	mov bl,0x16
	mov byte ptr [esp+0x50],bl
	cmp ecx,ebp
	jne Block148

 Block147:
	push 0x80004003
	call _com_issue_error

 Block148:
	lea edx,[esp+0x20]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x50],0x17
	cmp ecx,ebp
	jne Block150

 Block149:
	push 0x80004003
	call _com_issue_error

 Block150:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x3C]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x50],bl
	cmp eax,ebp
	je Block152

 Block151:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block152:
	mov esi,8
	mov byte ptr [esp+0x50],0x15
	cmp word ptr [esp+0x38],si
	jne Block155

 Block153:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block156

 Block154:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block156

 Block155:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block156:
	mov byte ptr [esp+0x50],0
	cmp word ptr [esp+0x28],si
	jne Block159

 Block157:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
	je Block160

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block160

 Block159:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block160:
	cmp dword ptr [edi+0xCC0],1
	jne Block162

 Block161:
	lea ecx,[esp+0x20]
	push 0x65A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	or dword ptr [esp+0x14],4
	jmp Block165

 Block162:
	mov ecx,edi
	call CMemoryGameDlg::IsWinnerLastTime
	test eax,eax
	je Block164

 Block163:
	lea edx,[esp+0x1C]
	push 0x659
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	or dword ptr [esp+0x14],esi
	jmp Block165

 Block164:
	lea eax,[esp+0x18]
	push 0x65B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	or dword ptr [esp+0x14],0x10

 Block165:
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block167

 Block166:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block167:
	mov ecx,dword ptr [edi+0x1FC]
	mov dword ptr [esp+0x5C],0x1B
	cmp ecx,ebp
	jne Block169

 Block168:
	push 0x80004003
	call _com_issue_error

 Block169:
	lea edx,[esp+0x44]
	mov bl,0x1A
	push edx
	mov byte ptr [esp+0x60],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [esp+0x58],0x1C
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [ecx],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block172

 Block170:
	cmp eax,0x80004002
	je Block172

 Block171:
	push eax
	call _com_issue_error

 Block172:
	mov eax,dword ptr [edi+0x21C]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block174

 Block173:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block174:
	call CAnimationDisplayer::LoadCanvas
	add esp,8
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x38],si
	jne Block177

 Block175:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block178

 Block176:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block178

 Block177:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block178:
	mov ebx,dword ptr [esp+0x14]
	test bl,0x10
	je Block181

 Block179:
	mov ecx,dword ptr [esp+0x18]
	and ebx,0xFFFFFFEF
	cmp ecx,ebp
	je Block181

 Block180:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],ebp

 Block181:
	test bl,8
	je Block184

 Block182:
	mov ecx,dword ptr [esp+0x1C]
	and ebx,0xFFFFFFF7
	cmp ecx,ebp
	je Block184

 Block183:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x1C],ebp

 Block184:
	test bl,4
	je Block187

 Block185:
	mov ecx,dword ptr [esp+0x20]
	cmp ecx,ebp
	je Block187

 Block186:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x20],ebp

 Block187:
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [edi+0xC9C],ebp
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp eax,ebp
	je Block189

 Block188:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block189:
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
// CMemoryGameDlg::OnTieRequest
_SUB_EXCEPTION_HANDLER(227E60)
__SUB_CLASS_THIS(00227E60, __thiscall, 138495,  CMemoryGameDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_227E60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0x90
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 0x33
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode1
	push 0
	push 0
	add esi,0x88
	push esi
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1D9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	lea ecx,[esp+0xC]
	cmp eax,6
	jne Block2

 Block1:
	push 1
	jmp Block3

 Block2:
	push 0

 Block3:
	call COutPacket::Encode1
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret 4
}
}
// CMemoryGameDlg::OnPacket
// 6340C8
static uint8_t _SUB_234020_LOOKUP_TABLE_0[19] = {
0, 1, 8, 8, 8, 8, 8, 8, 2, 3, 8, 4, 5, 6, 8, 8, 
8, 8, 7, 
};
__SUB_CLASS_THIS(00234020, __thiscall, 138494,  CMemoryGameDlg, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFFFCE
	cmp eax,0x12
	ja Block10

 Block1:
	movzx eax,byte ptr [eax+_SUB_234020_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block4
cmp EAX, 2
je Block6
cmp EAX, 3
je Block7
cmp EAX, 4
je Block8
cmp EAX, 5
je Block5
cmp EAX, 6
je Block9
cmp EAX, 7
je Block2
cmp EAX, 8
je Block10


 Block2:
	mov edx,dword ptr [esp+8]
	push edx
	call CMemoryGameDlg::OnTurnUpCard
	ret 8

 Block3:
	mov eax,dword ptr [esp+8]
	push eax
	call CMemoryGameDlg::OnTieRequest
	ret 8

 Block4:
	mov edx,dword ptr [esp+8]
	push edx
	call CMemoryGameDlg::OnTieResult
	ret 8

 Block5:
	mov eax,dword ptr [esp+8]
	push eax
	call CMemoryGameDlg::OnGameResult
	ret 8

 Block6:
	mov edx,dword ptr [esp+8]
	push edx
	call CMemoryGameDlg::OnUserReady
	ret 8

 Block7:
	mov eax,dword ptr [esp+8]
	push eax
	call CMemoryGameDlg::OnUserCancelReady
	ret 8

 Block8:
	mov edx,dword ptr [esp+8]
	push edx
	call CMemoryGameDlg::OnUserStart
	ret 8

 Block9:
	mov eax,dword ptr [esp+8]
	push eax
	call CMemoryGameDlg::OnTimeOver

 Block10:
	ret 8
}
}
// CMemoryGameDlg::Draw
_SUB_EXCEPTION_HANDLER(231CB0)
__SUB_CLASS_THIS(00231CB0, __thiscall, 138491,  CMemoryGameDlg, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_231CB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x6C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [ebp+0x78]
	push eax
	call CMiniRoomBaseDlg::Draw
	lea ecx,[ebp+0x30]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov edx,3
	mov ecx,0xFF
	mov dword ptr [ebp-4],0
	mov word ptr [ebp+0x38],dx
	mov dword ptr [ebp+0x40],ecx
	mov ebx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],1
	test ebx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov edi,dword ptr [ebp+0x38]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x3C]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x44]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esi+0x208]
	push eax
	push 0x95
	push 0x194
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
	cmp word ptr [ebp+0x38],8
	mov byte ptr [ebp-4],0
	jne Block7

 Block5:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [ebp+0x38],dx
	mov dword ptr [ebp+0x40],ecx
	mov edi,dword ptr [ebp+0x38]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x3C]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x44]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esi+0x208]
	push eax
	push 0x95
	push 0x1EA
	push ebx
	mov byte ptr [ebp-4],2
	call edx
	test eax,eax
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block10:
	cmp word ptr [ebp+0x38],8
	mov byte ptr [ebp-4],0
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [ebp+0x38],dx
	mov dword ptr [ebp+0x40],ecx
	mov edi,dword ptr [ebp+0x38]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x3C]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x44]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esi+0x20C]
	push eax
	push 0xA7
	mov byte ptr [ebp-4],dl
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x80]
	push 0x194
	push ebx
	call edx
	test eax,eax
	jge Block16

 Block15:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block16:
	cmp word ptr [ebp+0x38],8
	mov byte ptr [ebp-4],0
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [ebp+0x38],dx
	mov dword ptr [ebp+0x40],ecx
	mov edi,dword ptr [ebp+0x38]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x3C]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x44]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esi+0x214]
	push eax
	push 0x3F
	push 0x1CC
	push ebx
	mov byte ptr [ebp-4],4
	call edx
	test eax,eax
	jge Block22

 Block21:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block22:
	cmp word ptr [ebp+0x38],8
	mov byte ptr [ebp-4],0
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x48]
	push edx
	call edi
	lea eax,[ebp+0x48]
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
	lea ecx,[ebp+0x38]
	push ecx
	mov byte ptr [ebp-4],5
	call edi
	lea edx,[ebp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea eax,[ebp+0x48]
	push eax
	mov eax,dword ptr [esi+0x23C]
	lea ecx,[ebp+0x38]
	push ecx
	push eax
	mov eax,dword ptr [esi+0xCAC]
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],6
	call _xbstr_t::_ctor_0
	push 0x14
	mov byte ptr [ebp-4],7
	push 0x1FB
	mov ecx,ebx
	mov byte ptr [ebp-4],6
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x38],8
	mov byte ptr [ebp-4],5
	jne Block33

 Block31:
	mov eax,dword ptr [ebp+0x40]
	xor edx,edx
	mov word ptr [ebp+0x38],dx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[ebp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0
	jne Block37

 Block35:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	xor eax,eax
	mov dword ptr [ebp+0x18],eax
	mov dword ptr [ebp+0x1C],eax
	push eax
	lea eax,[ebp+0x68]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],9
	call CMiniRoomBaseDlg::GetUserID
	push eax
	lea ecx,[ebp+0x18]
	mov byte ptr [ebp-4],0xA
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block40:
	lea ecx,[ebp+0x48]
	push ecx
	call edi
	lea edx,[ebp+0x48]
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
	mov eax,dword ptr [ebp+0x18]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0xB
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edx,dword ptr [ebp+0x18]
	mov edi,esp
	lea ecx,[ebp+0x48]
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x23C]
	mov byte ptr [ebp-4],0xC
	test ecx,ecx
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	mov byte ptr [ebp-4],0xB
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x48],8
	lea edi,[eax+5]
	mov dword ptr [ebp+0x34],edi
	mov byte ptr [ebp-4],9
	jne Block47

 Block45:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	cmp edi,0x49
	jle Block59

 Block49:
	mov eax,dword ptr [esi+0x23C]
	push 0x49
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block51

 Block50:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block51:
	lea ecx,[ebp+0x18]
	push ecx
	call format_string_1
	add esp,0xC
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	mov ecx,dword ptr [ebp+0x18]
	push 0
	push 0
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	mov byte ptr [ebp-4],0xD
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [ebp+0x18]
	mov edi,esp
	lea edx,[ebp+0x48]
	push edx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x23C]
	mov byte ptr [ebp-4],0xE
	test ecx,ecx
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	mov byte ptr [ebp-4],0xD
	call IWzFont::CalcTextWidth
	add eax,5
	cmp word ptr [ebp+0x48],8
	mov dword ptr [ebp+0x34],eax
	mov byte ptr [ebp-4],9
	jne Block58

 Block56:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov edi,dword ptr [esi+0x23C]
	test edi,edi
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x14]
	lea ecx,[ebp+0x68]
	push ecx
	push edi
	mov dword ptr [ebp+0x68],0
	call edx
	test eax,eax
	jge Block63

 Block62:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push edi
	push eax
	call _com_issue_errorex

 Block63:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x38]
	push eax
	call edi
	lea ecx,[ebp+0x38]
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
	lea edx,[ebp+0x48]
	push edx
	mov byte ptr [ebp-4],0xF
	call edi
	lea eax,[ebp+0x48]
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
	mov ecx,dword ptr [ebp+0x18]
	push 0
	push 0
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	mov byte ptr [ebp-4],0x10
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp+0x18]
	mov edi,esp
	lea edx,[ebp+0x38]
	push edx
	lea eax,[ebp+0x48]
	push eax
	mov eax,dword ptr [esi+0x23C]
	push eax
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov eax,dword ptr [ebp+0x34]
	cdq
	sub eax,edx
	sar eax,1
	mov edx,0x1BC
	push 0x96
	sub edx,eax
	mov byte ptr [ebp-4],0x11
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x10
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0xF
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	xor edi,edi
	cmp eax,edi
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	xor edi,edi

 Block71:
	cmp word ptr [ebp+0x38],8
	mov byte ptr [ebp-4],9
	jne Block74

 Block72:
	mov eax,dword ptr [ebp+0x40]
	xor edx,edx
	mov word ptr [ebp+0x38],dx
	cmp eax,edi
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea eax,[ebp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov dword ptr [ebp+0x2C],edi
	mov dword ptr [ebp+0x20],edi
	mov dword ptr [ebp+0x28],edi
	mov dword ptr [ebp+0x24],edi
	mov eax,dword ptr [esi+0x168]
	mov ecx,dword ptr [eax+0x10]
	push edi
	push ecx
	lea edx,[ebp+0x24]
	push edx
	mov byte ptr [ebp-4],0x15
	call format_integer
	mov eax,dword ptr [esi+0x168]
	mov eax,dword ptr [eax+4]
	push edi
	push eax
	lea ecx,[ebp+0x2C]
	push ecx
	call format_integer
	mov eax,dword ptr [esi+0x168]
	mov edx,dword ptr [eax+0xC]
	push edi
	push edx
	lea eax,[ebp+0x28]
	push eax
	call format_integer
	mov eax,dword ptr [esi+0x168]
	mov ecx,dword ptr [eax+8]
	push edi
	push ecx
	lea edx,[ebp+0x20]
	push edx
	call format_integer
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0x30
	lea eax,[ebp+0x58]
	push eax
	call edi
	lea ecx,[ebp+0x58]
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
	lea edx,[ebp+0x38]
	push edx
	mov byte ptr [ebp-4],0x16
	call edi
	lea eax,[ebp+0x38]
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
	mov ecx,dword ptr [ebp+0x24]
	push 0
	push 0
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	mov byte ptr [ebp-4],0x17
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	lea edx,[ebp+0x48]
	mov dword ptr [ebp+0x34],esp
	push edx
	call edi
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	mov ecx,dword ptr [ebp+0x24]
	push 0
	push 0
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	mov byte ptr [ebp-4],0x18
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp+0x34]
	mov edi,esp
	lea edx,[ebp+0x58]
	push edx
	mov edx,dword ptr [ebp+0x24]
	lea eax,[ebp+0x38]
	push eax
	mov eax,dword ptr [esi+0x23C]
	push eax
	push 0x3FFFFFFF
	push ecx
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	call MultiByteToWideChar
	mov eax,dword ptr [ebp+0x34]
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x24]
	push 0xA9
	lea ecx,[ebp+0x48]
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	mov byte ptr [ebp-4],0x19
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x23C]
	mov byte ptr [ebp-4],0x1A
	test ecx,ecx
	jne Block83

 Block82:
	push 0x80004003
	call _com_issue_error

 Block83:
	mov byte ptr [ebp-4],0x19
	call IWzFont::CalcTextWidth
	mov ecx,0x1C4
	sub ecx,eax
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x18
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x17
	cmp word ptr [ebp+0x48],di
	jne Block86

 Block84:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp+0x38],di
	jne Block90

 Block88:
	mov eax,dword ptr [ebp+0x40]
	xor ecx,ecx
	mov word ptr [ebp+0x38],cx
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea edx,[ebp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x58],di
	jne Block94

 Block92:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block95:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x38]
	push edx
	call edi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block97

 Block96:
	push eax
	call _com_issue_error

 Block97:
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],0x1B
	call edi
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block99

 Block98:
	push eax
	call _com_issue_error

 Block99:
	mov eax,dword ptr [ebp+0x2C]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x1C
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	lea ecx,[ebp+0x58]
	mov ebx,esp
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block101

 Block100:
	push eax
	call _com_issue_error

 Block101:
	mov eax,dword ptr [ebp+0x2C]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x1D
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [esi+0x23C]
	mov edi,esp
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	push eax
	mov eax,dword ptr [ebp+0x2C]
	push 0x3FFFFFFF
	push ebx
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push ebx
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x2C]
	push 0xBB
	lea ecx,[ebp+0x58]
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	mov bl,0x1E
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x23C]
	mov byte ptr [ebp-4],0x1F
	test ecx,ecx
	jne Block103

 Block102:
	push 0x80004003
	call _com_issue_error

 Block103:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	mov ecx,0x1D1
	sub ecx,eax
	push ecx
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x1D
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp+0x58],di
	jne Block106

 Block104:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block107:
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp+0x48],di
	jne Block110

 Block108:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block111:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x38],di
	jne Block114

 Block112:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block115:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x38]
	push edx
	call edi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block117

 Block116:
	push eax
	call _com_issue_error

 Block117:
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],0x20
	call edi
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block119

 Block118:
	push eax
	call _com_issue_error

 Block119:
	mov eax,dword ptr [ebp+0x28]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x21
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	lea ecx,[ebp+0x58]
	mov ebx,esp
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block121

 Block120:
	push eax
	call _com_issue_error

 Block121:
	mov eax,dword ptr [ebp+0x28]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x22
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [esi+0x23C]
	mov edi,esp
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	push eax
	mov eax,dword ptr [ebp+0x28]
	push 0x3FFFFFFF
	push ebx
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push ebx
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x28]
	push 0xC9
	lea ecx,[ebp+0x58]
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	mov bl,0x23
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x23C]
	mov byte ptr [ebp-4],0x24
	test ecx,ecx
	jne Block123

 Block122:
	push 0x80004003
	call _com_issue_error

 Block123:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	mov ecx,0x1D1
	sub ecx,eax
	push ecx
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x22
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x21
	cmp word ptr [ebp+0x58],di
	jne Block126

 Block124:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block127:
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp+0x48],di
	jne Block130

 Block128:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x38],di
	jne Block134

 Block132:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block135:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x38]
	push edx
	call edi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block137

 Block136:
	push eax
	call _com_issue_error

 Block137:
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],0x25
	call edi
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block139

 Block138:
	push eax
	call _com_issue_error

 Block139:
	mov eax,dword ptr [ebp+0x20]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x26
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	lea ecx,[ebp+0x58]
	mov ebx,esp
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x58]
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
	mov eax,dword ptr [ebp+0x20]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x27
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [esi+0x23C]
	mov edi,esp
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	push eax
	mov eax,dword ptr [ebp+0x20]
	push 0x3FFFFFFF
	push ebx
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push ebx
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x20]
	push 0xD7
	lea ecx,[ebp+0x58]
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	mov bl,0x28
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x23C]
	mov byte ptr [ebp-4],0x29
	test ecx,ecx
	jne Block143

 Block142:
	push 0x80004003
	call _com_issue_error

 Block143:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	mov edi,dword ptr [ebp+0x30]
	mov ecx,0x1D1
	sub ecx,eax
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x27
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [ebp-4],0x26
	cmp word ptr [ebp+0x58],bx
	jne Block146

 Block144:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block147:
	mov byte ptr [ebp-4],0x25
	cmp word ptr [ebp+0x48],bx
	jne Block150

 Block148:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block151:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x38],bx
	jne Block154

 Block152:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block155

 Block154:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block155:
	cmp dword ptr [esi+0xE4],1
	mov dword ptr [ebp+0x60],0xFF
	jle Block404

 Block156:
	mov edx,3
	mov word ptr [ebp+0x58],dx
	mov eax,dword ptr [esi+0x20C]
	lea ecx,[ebp+0x58]
	push ecx
	push eax
	push 0xA7
	push 0x1EA
	mov ecx,edi
	mov byte ptr [ebp-4],0x2A
	call IWzCanvas::Copy
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x58],bx
	jne Block159

 Block157:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block160

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block160

 Block159:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block160:
	push 1
	lea ecx,[ebp+0x68]
	push ecx
	mov ecx,esi
	call CMiniRoomBaseDlg::GetUserID
	push eax
	lea ecx,[ebp+0x1C]
	mov byte ptr [ebp-4],0x2B
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0x15
	test eax,eax
	je Block162

 Block161:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block162:
	lea edx,[ebp+0x58]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block164

 Block163:
	push eax
	call _com_issue_error

 Block164:
	mov ecx,dword ptr [ebp+0x1C]
	push 0
	push 0
	push 0xFFFFFFFF
	push ecx
	push 0
	mov bl,0x2C
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [ebp+0x1C]
	mov edi,esp
	lea edx,[ebp+0x58]
	push edx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x23C]
	mov byte ptr [ebp-4],0x2D
	test ecx,ecx
	jne Block166

 Block165:
	push 0x80004003
	call _com_issue_error

 Block166:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x58],8
	lea ebx,[eax+5]
	mov byte ptr [ebp-4],0x15
	jne Block169

 Block167:
	mov eax,dword ptr [ebp+0x60]
	xor ecx,ecx
	mov word ptr [ebp+0x58],cx
	test eax,eax
	je Block170

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block169:
	lea edx,[ebp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block170:
	cmp ebx,0x49
	jle Block181

 Block171:
	mov eax,dword ptr [esi+0x23C]
	push 0x49
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block173

 Block172:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block173:
	lea eax,[ebp+0x1C]
	push eax
	call format_string_1
	add esp,0xC
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block175

 Block174:
	push eax
	call _com_issue_error

 Block175:
	mov eax,dword ptr [ebp+0x1C]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	mov bl,0x2E
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edx,dword ptr [ebp+0x1C]
	mov edi,esp
	lea ecx,[ebp+0x58]
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x23C]
	mov byte ptr [ebp-4],0x2F
	test ecx,ecx
	jne Block177

 Block176:
	push 0x80004003
	call _com_issue_error

 Block177:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x58],8
	lea ebx,[eax+5]
	mov byte ptr [ebp-4],0x15
	jne Block180

 Block178:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block181

 Block179:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block181

 Block180:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block181:
	mov edi,dword ptr [esi+0x23C]
	test edi,edi
	jne Block183

 Block182:
	push 0x80004003
	call _com_issue_error

 Block183:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x14]
	lea eax,[ebp+0x68]
	push eax
	push edi
	mov dword ptr [ebp+0x68],0
	call ecx
	test eax,eax
	jge Block185

 Block184:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push edi
	push eax
	call _com_issue_errorex

 Block185:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x48]
	push edx
	call edi
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block187

 Block186:
	push eax
	call _com_issue_error

 Block187:
	lea ecx,[ebp+0x58]
	push ecx
	mov byte ptr [ebp-4],0x30
	call edi
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block189

 Block188:
	push eax
	call _com_issue_error

 Block189:
	mov eax,dword ptr [ebp+0x1C]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x31
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [esi+0x23C]
	mov edi,esp
	lea ecx,[ebp+0x48]
	push ecx
	lea edx,[ebp+0x58]
	push edx
	push eax
	mov eax,dword ptr [ebp+0x1C]
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov eax,ebx
	cdq
	sub eax,edx
	sar eax,1
	mov ecx,0x212
	sub ecx,eax
	push 0x96
	push ecx
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x32
	mov byte ptr [ebp-4],0x31
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],0x30
	jne Block192

 Block190:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block193

 Block191:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block193

 Block192:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block193:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0x15
	jne Block196

 Block194:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block197

 Block195:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block197

 Block196:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block197:
	mov eax,dword ptr [esi+0x170]
	mov eax,dword ptr [eax+0x10]
	push 0
	push eax
	lea ecx,[ebp+0x24]
	push ecx
	call format_integer
	mov eax,dword ptr [esi+0x170]
	mov edx,dword ptr [eax+4]
	push 0
	push edx
	lea eax,[ebp+0x2C]
	push eax
	call format_integer
	mov eax,dword ptr [esi+0x170]
	mov ecx,dword ptr [eax+0xC]
	push 0
	push ecx
	lea edx,[ebp+0x28]
	push edx
	call format_integer
	mov eax,dword ptr [esi+0x170]
	mov eax,dword ptr [eax+8]
	push 0
	push eax
	lea ecx,[ebp+0x20]
	push ecx
	call format_integer
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0x30
	lea edx,[ebp+0x38]
	push edx
	call edi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block199

 Block198:
	push eax
	call _com_issue_error

 Block199:
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],0x33
	call edi
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block201

 Block200:
	push eax
	call _com_issue_error

 Block201:
	mov eax,dword ptr [ebp+0x24]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x34
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	lea ecx,[ebp+0x58]
	mov ebx,esp
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block203

 Block202:
	push eax
	call _com_issue_error

 Block203:
	mov eax,dword ptr [ebp+0x24]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x35
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [esi+0x23C]
	mov edi,esp
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	push eax
	mov eax,dword ptr [ebp+0x24]
	push 0x3FFFFFFF
	push ebx
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push ebx
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x24]
	push 0xA9
	lea ecx,[ebp+0x58]
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	mov bl,0x36
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x23C]
	mov byte ptr [ebp-4],0x37
	test ecx,ecx
	jne Block205

 Block204:
	push 0x80004003
	call _com_issue_error

 Block205:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	mov ecx,0x21A
	sub ecx,eax
	push ecx
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x35
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x34
	cmp word ptr [ebp+0x58],di
	jne Block208

 Block206:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block209

 Block207:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block209

 Block208:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block209:
	mov byte ptr [ebp-4],0x33
	cmp word ptr [ebp+0x48],di
	jne Block212

 Block210:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block213

 Block211:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block213

 Block212:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block213:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x38],di
	jne Block216

 Block214:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block217

 Block215:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block217

 Block216:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block217:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x38]
	push edx
	call edi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block219

 Block218:
	push eax
	call _com_issue_error

 Block219:
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],0x38
	call edi
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block221

 Block220:
	push eax
	call _com_issue_error

 Block221:
	mov eax,dword ptr [ebp+0x2C]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x39
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	lea ecx,[ebp+0x58]
	mov ebx,esp
	push ecx
	call edi
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block223

 Block222:
	push eax
	call _com_issue_error

 Block223:
	mov eax,dword ptr [ebp+0x2C]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x3A
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [esi+0x23C]
	mov edi,esp
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	push eax
	mov eax,dword ptr [ebp+0x2C]
	push 0x3FFFFFFF
	push ebx
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push ebx
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x2C]
	push 0xBB
	lea ecx,[ebp+0x58]
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	mov bl,0x3B
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x23C]
	mov byte ptr [ebp-4],0x3C
	test ecx,ecx
	jne Block225

 Block224:
	push 0x80004003
	call _com_issue_error

 Block225:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	mov ecx,0x227
	sub ecx,eax
	push ecx
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x3A
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x39
	cmp word ptr [ebp+0x58],di
	jne Block228

 Block226:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block229

 Block227:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block229

 Block228:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block229:
	mov byte ptr [ebp-4],0x38
	cmp word ptr [ebp+0x48],di
	jne Block232

 Block230:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block233

 Block231:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block233

 Block232:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block233:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x38],di
	jne Block236

 Block234:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block237

 Block235:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block237

 Block236:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block237:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x38]
	push edx
	call edi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block239

 Block238:
	push eax
	call _com_issue_error

 Block239:
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],0x3D
	call edi
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block241

 Block240:
	push eax
	call _com_issue_error

 Block241:
	mov eax,dword ptr [ebp+0x28]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x3E
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	lea ecx,[ebp+0x58]
	mov ebx,esp
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block243

 Block242:
	push eax
	call _com_issue_error

 Block243:
	mov eax,dword ptr [ebp+0x28]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x3F
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [esi+0x23C]
	mov edi,esp
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	push eax
	mov eax,dword ptr [ebp+0x28]
	push 0x3FFFFFFF
	push ebx
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push ebx
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x28]
	push 0xC9
	lea ecx,[ebp+0x58]
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	mov bl,0x40
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x23C]
	mov byte ptr [ebp-4],0x41
	test ecx,ecx
	jne Block245

 Block244:
	push 0x80004003
	call _com_issue_error

 Block245:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	mov ecx,0x227
	sub ecx,eax
	push ecx
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x3F
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x3E
	cmp word ptr [ebp+0x58],di
	jne Block248

 Block246:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block249

 Block247:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block249

 Block248:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block249:
	mov byte ptr [ebp-4],0x3D
	cmp word ptr [ebp+0x48],di
	jne Block252

 Block250:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block253

 Block251:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block253

 Block252:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block253:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x38],di
	jne Block256

 Block254:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block257

 Block255:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block257

 Block256:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block257:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x38]
	push edx
	call edi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block259

 Block258:
	push eax
	call _com_issue_error

 Block259:
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],0x42
	call edi
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block261

 Block260:
	push eax
	call _com_issue_error

 Block261:
	mov eax,dword ptr [ebp+0x20]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x43
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	lea ecx,[ebp+0x58]
	mov ebx,esp
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block263

 Block262:
	push eax
	call _com_issue_error

 Block263:
	mov eax,dword ptr [ebp+0x20]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x44
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [esi+0x23C]
	mov edi,esp
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	push eax
	mov eax,dword ptr [ebp+0x20]
	push 0x3FFFFFFF
	push ebx
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push ebx
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x20]
	push 0xD7
	lea ecx,[ebp+0x58]
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	mov bl,0x45
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x23C]
	mov byte ptr [ebp-4],0x46
	test ecx,ecx
	jne Block265

 Block264:
	push 0x80004003
	call _com_issue_error

 Block265:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	mov ecx,0x227
	sub ecx,eax
	push ecx
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x44
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x43
	cmp word ptr [ebp+0x58],di
	jne Block268

 Block266:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block269

 Block267:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block269

 Block268:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block269:
	mov byte ptr [ebp-4],0x42
	cmp word ptr [ebp+0x48],di
	jne Block272

 Block270:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block273

 Block271:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block273

 Block272:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block273:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x38],di
	jne Block276

 Block274:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block277

 Block275:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block277

 Block276:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block277:
	cmp dword ptr [esi+0xC9C],1
	jne Block408

 Block278:
	xor ebx,ebx
	mov dword ptr [ebp+0x14],ebx
	mov dword ptr [ebp+0x10],ebx
	lea edx,[ebp+0x68]
	push 0x1E3
	push edx
	mov byte ptr [ebp-4],0x48
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x18]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x14]
	push edx
	mov byte ptr [ebp-4],0x49
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x68]
	add esp,0xC
	mov byte ptr [ebp-4],0x48
	cmp eax,ebx
	je Block280

 Block279:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block280:
	lea eax,[ebp+0x68]
	push 0x1E3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x1C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x10]
	push edx
	mov byte ptr [ebp-4],0x4A
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x68]
	add esp,0xC
	mov byte ptr [ebp-4],0x48
	cmp eax,ebx
	je Block282

 Block281:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block282:
	mov dword ptr [ebp+0x34],ebx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x48]
	push eax
	mov byte ptr [ebp-4],0x4B
	call edi
	lea ecx,[ebp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block284

 Block283:
	push eax
	call _com_issue_error

 Block284:
	lea edx,[ebp+0x58]
	push edx
	mov byte ptr [ebp-4],0x4C
	call edi
	lea eax,[ebp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block286

 Block285:
	push eax
	call _com_issue_error

 Block286:
	mov byte ptr [ebp-4],0x4D
	cmp dword ptr [esi+0xC94],ebx
	je Block289

 Block287:
	lea eax,[ebp+0x14]
	cmp dword ptr [esi+0xDC],ebx
	je Block291

 Block288:
	lea eax,[ebp+0x10]
	jmp Block291

 Block289:
	lea eax,[ebp+0x10]
	cmp dword ptr [esi+0xDC],ebx
	je Block291

 Block290:
	lea eax,[ebp+0x14]

 Block291:
	mov eax,dword ptr [eax]
	push ebx
	push ebx
	push 0xFFFFFFFF
	push eax
	push ebx
	push ebx
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edi,esp
	cmp dword ptr [esi+0xC94],ebx
	je Block294

 Block292:
	lea ecx,[ebp+0x14]
	cmp dword ptr [esi+0xDC],ebx
	je Block296

 Block293:
	lea ecx,[ebp+0x10]
	jmp Block296

 Block294:
	lea ecx,[ebp+0x10]
	cmp dword ptr [esi+0xDC],ebx
	je Block296

 Block295:
	lea ecx,[ebp+0x14]

 Block296:
	lea edx,[ebp+0x48]
	push edx
	lea eax,[ebp+0x58]
	push eax
	mov eax,dword ptr [esi+0x23C]
	push eax
	mov eax,dword ptr [ecx]
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ebx,dword ptr [ebp+0x30]
	push 0x194
	mov byte ptr [ebp-4],0x4E
	push 0xD
	mov ecx,ebx
	mov byte ptr [ebp-4],0x4D
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],0x4C
	jne Block299

 Block297:
	mov eax,dword ptr [ebp+0x60]
	xor ecx,ecx
	mov word ptr [ebp+0x58],cx
	test eax,eax
	je Block300

 Block298:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block300

 Block299:
	lea edx,[ebp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block300:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0x4B
	jne Block303

 Block301:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block304

 Block302:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block304

 Block303:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block304:
	lea edx,[ebp+0x68]
	push 0x1E2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xCB8]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x34]
	push edx
	mov byte ptr [ebp-4],0x4F
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x68]
	add esp,0xC
	mov byte ptr [ebp-4],0x4B
	test eax,eax
	je Block306

 Block305:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block306:
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
	jge Block308

 Block307:
	push eax
	call _com_issue_error

 Block308:
	lea edx,[ebp+0x58]
	push edx
	mov byte ptr [ebp-4],0x50
	call edi
	lea eax,[ebp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block310

 Block309:
	push eax
	call _com_issue_error

 Block310:
	mov ecx,dword ptr [ebp+0x34]
	push 0
	push 0
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	mov byte ptr [ebp-4],0x51
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp+0x34]
	mov edi,esp
	lea edx,[ebp+0x48]
	push edx
	lea eax,[ebp+0x58]
	push eax
	mov eax,dword ptr [esi+0x23C]
	push eax
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	push 0x194
	mov byte ptr [ebp-4],0x52
	push 0x127
	mov ecx,ebx
	mov byte ptr [ebp-4],0x51
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],0x50
	jne Block313

 Block311:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block314

 Block312:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block314

 Block313:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block314:
	mov ebx,8
	mov byte ptr [ebp-4],0x4B
	cmp word ptr [ebp+0x48],bx
	jne Block317

 Block315:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block318

 Block316:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block318

 Block317:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block318:
	cmp dword ptr [esi+0x22C],0
	lea edi,[esi+0x22C]
	sete al
	test al,al
	je Block381

 Block319:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block321

 Block320:
	push eax
	call _com_issue_error

 Block321:
	mov edx,3
	mov word ptr [ebp+0x58],dx
	mov dword ptr [ebp+0x60],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x54
	test ecx,ecx
	jne Block323

 Block322:
	push 0x80004003
	call _com_issue_error

 Block323:
	lea eax,[ebp+0x48]
	push eax
	lea edx,[ebp+0x58]
	push edx
	push 5
	push 0
	push 0
	push 0
	push 0
	lea eax,[ebp+0x68]
	push eax
	call IWzGr2D::CreateLayer
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block325

 Block324:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block325:
	mov byte ptr [ebp-4],0x53
	cmp word ptr [ebp+0x58],bx
	jne Block328

 Block326:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block329

 Block327:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block329

 Block328:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block329:
	mov byte ptr [ebp-4],0x4B
	cmp word ptr [ebp+0x48],bx
	jne Block332

 Block330:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	test eax,eax
	je Block333

 Block331:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block333

 Block332:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block333:
	lea ecx,[ebp+0x68]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x55
	mov edx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x58],dx
	mov dword ptr [ebp+0x60],eax
	test eax,eax
	je Block335

 Block334:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block335:
	mov ecx,dword ptr [edi]
	mov byte ptr [ebp-4],0x56
	test ecx,ecx
	jne Block337

 Block336:
	push 0x80004003
	call _com_issue_error

 Block337:
	lea eax,[ebp+0x58]
	push eax
	call IWzVector2D::Putorigin
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],bl
	jne Block340

 Block338:
	mov eax,dword ptr [ebp+0x60]
	xor ecx,ecx
	mov word ptr [ebp+0x58],cx
	test eax,eax
	je Block341

 Block339:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block341

 Block340:
	lea edx,[ebp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block341:
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0x4B
	test eax,eax
	je Block343

 Block342:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block343:
	lea eax,[ebp+0x68]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x57
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x58],cx
	mov dword ptr [ebp+0x60],eax
	test eax,eax
	je Block345

 Block344:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block345:
	mov ecx,dword ptr [edi]
	mov byte ptr [ebp-4],0x58
	test ecx,ecx
	jne Block347

 Block346:
	push 0x80004003
	call _com_issue_error

 Block347:
	lea edx,[ebp+0x58]
	push edx
	call IWzGr2DLayer::Putoverlay
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],bl
	jne Block350

 Block348:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block351

 Block349:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block351

 Block350:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block351:
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0x4B
	test eax,eax
	je Block353

 Block352:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block353:
	mov edi,dword ptr [edi]
	test edi,edi
	jne Block355

 Block354:
	push 0x80004003
	call _com_issue_error

 Block355:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push edi
	call edx
	test eax,eax
	jge Block357

 Block356:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block357:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x1C]
	push eax
	call edi
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block359

 Block358:
	push eax
	call _com_issue_error

 Block359:
	lea edx,[ebp]
	push edx
	mov byte ptr [ebp-4],0x59
	call edi
	lea eax,[ebp]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block361

 Block360:
	push eax
	call _com_issue_error

 Block361:
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],0x5A
	call edi
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block363

 Block362:
	push eax
	call _com_issue_error

 Block363:
	lea eax,[ebp+0x38]
	push eax
	mov byte ptr [ebp-4],0x5B
	call edi
	lea ecx,[ebp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block365

 Block364:
	push eax
	call _com_issue_error

 Block365:
	lea edx,[ebp+0x48]
	push edx
	mov byte ptr [ebp-4],0x5C
	call edi
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block367

 Block366:
	push eax
	call _com_issue_error

 Block367:
	lea ecx,[ebp-0x1C]
	push ecx
	lea edx,[ebp]
	push edx
	lea eax,[ebp-0x2C]
	push eax
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x68],esp
	push 0x655
	mov bl,0x5D
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0x1FC]
	mov byte ptr [ebp-4],0x5E
	test ecx,ecx
	jne Block369

 Block368:
	push 0x80004003
	call _com_issue_error

 Block369:
	lea edx,[ebp-0x3C]
	push edx
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov bl,0x5F
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x68]
	mov dword ptr [ebp+0x68],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block372

 Block370:
	cmp eax,0x80004002
	je Block372

 Block371:
	push eax
	call _com_issue_error

 Block372:
	mov ecx,dword ptr [esi+0x22C]
	mov byte ptr [ebp-4],0x60
	test ecx,ecx
	jne Block374

 Block373:
	push 0x80004003
	call _com_issue_error

 Block374:
	mov edi,dword ptr [ebp+0x68]
	push edi
	lea eax,[ebp+0x58]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp+0x58],8
	jne Block377

 Block375:
	mov eax,dword ptr [ebp+0x60]
	xor ecx,ecx
	mov word ptr [ebp+0x58],cx
	test eax,eax
	je Block378

 Block376:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block378

 Block377:
	lea edx,[ebp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block378:
	mov byte ptr [ebp-4],bl
	test edi,edi
	je Block380

 Block379:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block380:
	lea ecx,[ebp-0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp+0x48]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp+0x38]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x2C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1C]
	mov byte ptr [ebp-4],0x4B
	call Ztl_variant_t::~Ztl_variant_t

 Block381:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x48]
	push edx
	call edi
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block383

 Block382:
	push eax
	call _com_issue_error

 Block383:
	lea ecx,[ebp+0x58]
	mov bl,0x61
	push ecx
	mov byte ptr [ebp-4],bl
	call edi
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block385

 Block384:
	push eax
	call _com_issue_error

 Block385:
	cmp dword ptr [esi+0xC94],0
	mov eax,dword ptr [esi+0xDC]
	mov byte ptr [ebp-4],0x62
	je Block387

 Block386:
	neg eax
	sbb eax,eax
	and eax,0x56
	add eax,0x192
	jmp Block388

 Block387:
	neg eax
	sbb eax,eax
	and eax,0xFFFFFFAA
	add eax,0x1E8

 Block388:
	mov ecx,dword ptr [esi+0x22C]
	test ecx,ecx
	jne Block390

 Block389:
	push 0x80004003
	call _com_issue_error

 Block390:
	lea edx,[ebp+0x48]
	push edx
	lea edx,[ebp+0x58]
	push edx
	push 0x37
	push eax
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x58],di
	jne Block393

 Block391:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block394

 Block392:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block394

 Block393:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block394:
	mov byte ptr [ebp-4],0x4B
	cmp word ptr [ebp+0x48],di
	jne Block397

 Block395:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	test eax,eax
	je Block398

 Block396:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block398

 Block397:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block398:
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x48
	test eax,eax
	je Block400

 Block399:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block400:
	mov eax,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x47
	test eax,eax
	je Block402

 Block401:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block402:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0x15
	test eax,eax
	je Block408

 Block403:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block408

 Block404:
	mov ecx,3
	mov word ptr [ebp+0x58],cx
	mov eax,dword ptr [esi+0x210]
	lea edx,[ebp+0x58]
	push edx
	push eax
	push 0xA7
	push 0x1EA
	mov ecx,edi
	mov byte ptr [ebp-4],0x63
	call IWzCanvas::Copy
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x58],bx
	jne Block407

 Block405:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block408

 Block406:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block408

 Block407:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block408:
	cmp dword ptr [esi+0xC9C],2
	mov edi,dword ptr [ebp+0x30]
	jne Block410

 Block409:
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp+0x68],esp
	push edi
	call eax
	mov ecx,esi
	call CMemoryGameDlg::DrawGameResult

 Block410:
	mov eax,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0x14
	test eax,eax
	je Block412

 Block411:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block412:
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x13
	test eax,eax
	je Block414

 Block413:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block414:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x12
	test eax,eax
	je Block416

 Block415:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block416:
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block418

 Block417:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block418:
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block420

 Block419:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block420:
	mov eax,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block422

 Block421:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block422:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0x4C]
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
	ret 4
}
}
