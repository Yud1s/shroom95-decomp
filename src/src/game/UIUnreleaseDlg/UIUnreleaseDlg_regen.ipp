#include "regen.hpp"
// UIUnreleaseDlg.ipp
#include "UIUnreleaseDlg.hpp"

// CUIUnreleaseDlg::~CUIUnreleaseDlg
_SUB_EXCEPTION_HANDLER(4AA5C0)
__SUB_CLASS_THIS0(004AA5C0, __thiscall, 71453,  CUIUnreleaseDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4AA5C0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIUnreleaseDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIUnreleaseDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIUnreleaseDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xA4]
	mov dword ptr [esp+0x14],2
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0xA0]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x9C]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	int 3// TODO: 	mov dword ptr [esi],offset CUniqueModeless::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUniqueModeless::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUniqueModeless::`vftable'{for `ZRefCounted'}
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	mov dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIUnreleaseDlg::OnKey
__SUB_CLASS_THIS(004AA560, __thiscall, 71458,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	ret 8
}
}
// CUIUnreleaseDlg::OnCreate
_SUB_EXCEPTION_HANDLER(4A9640)
__SUB_CLASS_THIS(004A9640, __thiscall, 71454,  CUIUnreleaseDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4A9640
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
	push ebp
	push ebp
	lea esi,[edi+0xA4]
	push edi
	mov ecx,esi
	call CLayoutMan::Init
	mov ebx,1
	mov dword ptr [esp+0x50],ebp
	mov dword ptr [esp+0x44],ebx
	mov dword ptr [esp+0x48],ebp
	mov dword ptr [esp+0x4C],ebp
	push ebp
	push ebp
	push ebp
	push ebx
	push offset _S_UIUIWINDOW2IMGMI__2
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x74],ebp
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],ebp
	je Block2

 Block1:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block2:
	push ebp
	push ebp
	push ebp
	push 2
	push offset _S_UIUIWINDOW2IMGMI__1
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],ebp
	je Block4

 Block3:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block4:
	push ebx
	push ebx
	push offset _S_UIUIWINDOW2IMGMI
	lea edx,[esp+0x20]
	push edx
	mov ecx,esi
	call CLayoutMan::AddLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x9C]
	cmp esi,eax
	je Block9

 Block5:
	mov dword ptr [edi+0x9C],eax
	cmp eax,ebp
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block7:
	cmp esi,ebp
	je Block9

 Block8:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block9:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block11:
	cmp dword ptr [edi+0x9C],ebp
	sete al
	test al,al
	jne Block90

 Block12:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x14]
	push ecx
	call ebp
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x60],bl
	call ebp
	lea ecx,[esp+0x24]
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
	mov ecx,dword ptr [edi+0x9C]
	mov byte ptr [esp+0x5C],2
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x24],si
	jne Block25

 Block19:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block21:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block22:
	mov byte ptr [esp+0x5C],0
	cmp word ptr [esp+0x14],si
	jne Block26

 Block23:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block27

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block25:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x24]
	push edx
	call ebx
	jmp Block22

 Block26:
	lea ecx,[esp+0x14]
	push ecx
	call ebx

 Block27:
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
	mov ecx,3
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x5C],4
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x30]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xA0]
	cmp esi,eax
	je Block36

 Block32:
	mov dword ptr [edi+0xA0],eax
	test eax,eax
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block34:
	test esi,esi
	je Block36

 Block35:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block36:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block38

 Block37:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block38:
	mov esi,8
	mov byte ptr [esp+0x5C],3
	cmp word ptr [esp+0x24],si
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x24]
	push edx
	call ebx

 Block42:
	mov byte ptr [esp+0x5C],0
	cmp word ptr [esp+0x34],si
	jne Block45

 Block43:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea ecx,[esp+0x34]
	push ecx
	call ebx

 Block46:
	lea edx,[esp+0x14]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,5
	mov ecx,0xD
	mov byte ptr [esp+0x5C],bl
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block48

 Block47:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block48:
	mov esi,dword ptr [edi+0xA0]
	mov byte ptr [esp+0x5C],6
	test esi,esi
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
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
	test eax,eax
	jge Block52

 Block51:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block52:
	mov esi,8
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x24],si
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x5C],0
	test eax,eax
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block58:
	lea eax,[esp+0x24]
	push eax
	call ebp
	lea ecx,[esp+0x24]
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
	lea edx,[esp+0x34]
	mov bl,7
	push edx
	mov byte ptr [esp+0x60],bl
	call ebp
	lea eax,[esp+0x34]
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
	mov ecx,dword ptr [edi+0xA0]
	mov byte ptr [esp+0x5C],8
	test ecx,ecx
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x38]
	push eax
	push 0x70
	push 0x59
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x34],si
	jne Block67

 Block65:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov byte ptr [esp+0x5C],0
	cmp word ptr [esp+0x24],si
	jne Block71

 Block69:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov esi,dword ptr [edi+0xA0]
	test esi,esi
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block76

 Block75:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block76:
	mov eax,dword ptr [edi+0x9C]
	mov ecx,0xD
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block78

 Block77:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block78:
	mov esi,dword ptr [edi+0xA0]
	mov byte ptr [esp+0x5C],9
	test esi,esi
	jne Block80

 Block79:
	push 0x80004003
	call _com_issue_error

 Block80:
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
	test eax,eax
	jge Block82

 Block81:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block82:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x5C],0
	jne Block85

 Block83:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block86:
	mov esi,dword ptr [edi+0xA0]
	test esi,esi
	jne Block88

 Block87:
	push 0x80004003
	call _com_issue_error

 Block88:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 2
	push esi
	call ecx
	test eax,eax
	jge Block90

 Block89:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block90:
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
// CUIUnreleaseDlg::Draw
_SUB_EXCEPTION_HANDLER(4A9BF0)
__SUB_CLASS_THIS(004A9BF0, __thiscall, 71456,  CUIUnreleaseDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4A9BF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x74
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x84]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	mov eax,dword ptr [esp+0x94]
	push eax
	call CWnd::Draw
	cmp dword ptr [esi+0x98],0xFFFFFFFF
	je Block78

 Block1:
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x30]
	xor ebp,ebp
	mov dword ptr [esp+0x28],edx
	cmp eax,ebp
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
	cmp esi,ebp
	je Block5

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block5:
	mov dword ptr [esp+0x30],ebp

 Block6:
	mov eax,3
	mov word ptr [esp+0x34],ax
	mov dword ptr [esp+0x3C],0xFFFFFFFE
	mov ecx,dword ptr [esp+0x14]
	mov ecx,dword ptr [ecx+0xA0]
	mov dword ptr [esp+0x8C],ebp
	cmp ecx,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov edi,8
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	cmp word ptr [esp+0x34],di
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebp
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov dword ptr [esp+0x10],ebp
	lea edx,[esp+0x18]
	push 0x3D0
	push edx
	mov dword ptr [esp+0x94],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea ecx,[esp+0x14]
	push ecx
	push eax
	mov byte ptr [esp+0x98],2
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x8C],1
	cmp eax,ebp
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block16:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x18]
	push edx
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0x90],3
	call esi
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	mov ecx,dword ptr [esp+0x10]
	mov byte ptr [esp+0x8C],4
	cmp ecx,ebp
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea eax,[esp+0x18]
	push eax
	lea edx,[esp+0x38]
	push edx
	push 0x20
	push 0x20
	call IWzCanvas::Create
	mov byte ptr [esp+0x8C],3
	cmp word ptr [esp+0x34],di
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebp
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov byte ptr [esp+0x8C],1
	cmp word ptr [esp+0x18],di
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	cmp eax,ebp
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block30:
	lea ecx,[esp+0x64]
	push ecx
	call esi
	lea edx,[esp+0x64]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	lea eax,[esp+0x54]
	push eax
	mov byte ptr [esp+0x90],5
	call esi
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0x90],6
	call esi
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x90],7
	call esi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x90],8
	call esi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edx+0xA0]
	mov byte ptr [esp+0x8C],9
	cmp ecx,ebp
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea eax,[esp+0x64]
	push eax
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x4C]
	push eax
	lea edx,[esp+0x24]
	push edx
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x44]
	push eax
	push edx
	lea eax,[esp+0x8C]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x74],di
	jne Block49

 Block43:
	mov eax,dword ptr [esp+0x7C]
	xor ecx,ecx
	mov word ptr [esp+0x74],cx
	cmp eax,ebp
	je Block45

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block45:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block46:
	mov byte ptr [esp+0x8C],8
	cmp word ptr [esp+0x34],di
	jne Block50

 Block47:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebp
	je Block51

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block49:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x74]
	push edx
	call esi
	jmp Block46

 Block50:
	lea ecx,[esp+0x34]
	push ecx
	call esi

 Block51:
	mov byte ptr [esp+0x8C],7
	cmp word ptr [esp+0x18],di
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	cmp eax,ebp
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea eax,[esp+0x18]
	push eax
	call esi

 Block55:
	mov byte ptr [esp+0x8C],6
	cmp word ptr [esp+0x44],di
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,ebp
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[esp+0x44]
	push edx
	call esi

 Block59:
	mov byte ptr [esp+0x8C],5
	cmp word ptr [esp+0x54],di
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebp
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[esp+0x54]
	push ecx
	call esi

 Block63:
	mov byte ptr [esp+0x8C],1
	cmp word ptr [esp+0x64],di
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	cmp eax,ebp
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea eax,[esp+0x64]
	push eax
	call esi

 Block67:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx+0x98]
	mov ecx,dword ptr [esp+0x28]
	push edx
	push 1
	lea eax,[esp+0x20]
	push eax
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block72

 Block68:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block71

 Block69:
	mov ecx,dword ptr [esp+0x1C]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,ebp
	je Block71

 Block70:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block71:
	mov dword ptr [esp+0x1C],ebp

 Block72:
	cmp esi,ebp
	je Block76

 Block73:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	sub esp,8
	mov edi,eax
	mov eax,esp
	lea ecx,[esi+4]
	mov dword ptr [esp+0x30],esp
	push ecx
	mov dword ptr [eax+4],esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::CalcEquipItemQuality
	mov edx,dword ptr [esi]
	push 2
	push ebp
	push eax
	mov eax,dword ptr [edx+4]
	push ebp
	push ebp
	push ebp
	mov ecx,esi
	call eax
	push eax
	push 0x20
	push ebp
	push edi
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x54],esp
	cmp eax,ebp
	je Block75

 Block74:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block75:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot

 Block76:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	cmp eax,ebp
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block78:
	mov ecx,dword ptr [esp+0x84]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x80
	ret 4
}
}
// CUIUnreleaseDlg::IsKindOf
__SUB_CLASS_THIS(004AA590, __thiscall, 71464,  CUIUnreleaseDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIUnreleaseDlg::ms_RTTI_CUIUnreleaseDlg
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
// CUIUnreleaseDlg::CUIUnreleaseDlg
_SUB_EXCEPTION_HANDLER(4AA4B0)
__SUB_CLASS_THIS(004AA4B0, __thiscall, 71451,  CUIUnreleaseDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4AA4B0
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
	call CUniqueModeless::_ctor_default
	mov ecx,dword ptr [esp+0x1C]
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CUIUnreleaseDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIUnreleaseDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIUnreleaseDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x94],ecx
	mov dword ptr [esi+0x98],0xFFFFFFFF
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esi+0xA0],eax
	mov dword ptr [esi+0xA4],eax
	mov dword ptr [esi+0xA8],eax
	mov dword ptr [esi+0xAC],eax
	mov dword ptr [esi+0xB0],eax
	mov dword ptr [esi+0xB4],eax
	push 1
	push eax
	push 1
	push offset _S_UIUIWINDOW2IMGMI__3
	mov ecx,esi
	mov byte ptr [esp+0x24],3
	call CDialog::CreateDlg_2
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CUIUnreleaseDlg::HitTest
__SUB_CLASS_THIS(004A9600, __thiscall, 71455,  CUIUnreleaseDlg, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [esp+0x10]
	push edi
	mov edi,dword ptr [esp+0x10]
	push esi
	push edi
	push eax
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
	xor eax,eax
	cmp edi,0xF
	setge al
	inc eax

 Block4:
	pop edi
	pop esi
	ret 0xC
}
}
// CUIUnreleaseDlg::OnButtonClicked
__SUB_CLASS_THIS(004AA6A0, __thiscall, 71457,  CUIUnreleaseDlg, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	cmp eax,1
	jne Block3

 Block1:
	call CUIUnreleaseDlg::UnreleaseEquipItem
	test eax,eax
	je Block7

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 1
	mov ecx,esi
	call edx
	pop esi
	ret 4

 Block3:
	cmp eax,2
	jne Block5

 Block4:
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	call edx
	pop esi
	ret 4

 Block5:
	cmp eax,8
	jne Block7

 Block6:
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	call edx

 Block7:
	pop esi
	ret 4
}
}
// CUIUnreleaseDlg::UnreleaseEquipItem
_SUB_EXCEPTION_HANDLER(4AA1A0)
__SUB_CLASS_THIS0(004AA1A0, __thiscall, 71461,  CUIUnreleaseDlg, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4AA1A0
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
	or edi,0xFFFFFFFF
	cmp dword ptr [esi+0x94],edi
	je Block6

 Block1:
	cmp dword ptr [esi+0x98],edi
	jne Block7

 Block2:
	lea eax,[esp+0x14]
	push 0x16E9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	xor esi,esi
	mov dword ptr [esp+0x40],esi
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],esi
	je Block4

 Block3:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push esi
	push edi
	mov dword ptr [ecx+4],esi
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block4:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x40],edi
	cmp eax,esi
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	xor eax,eax
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret

 Block7:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x14]
	push edx
	mov ebp,ecx
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	lea ecx,[esp+0x14]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	cmp dword ptr [ebp+0x20B8],0
	jne Block6

 Block8:
	mov eax,dword ptr [ebp+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block6

 Block9:
	call get_update_time
	sub eax,dword ptr [ebp+0x20BC]
	cmp eax,0x1F4
	jl Block6

 Block10:
	mov edx,dword ptr [esi+0x98]
	push edx
	push 1
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebx
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x20]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	jne Block14

 Block11:
	lea ecx,[esp+0x14]
	push 0x16E9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x40],1

 Block12:
	push 0xC
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x1C]
	add esp,8
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block6

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret

 Block14:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x80]
	mov ecx,edi
	call eax
	test al,al
	jne Block16

 Block15:
	lea ecx,[esp+0x14]
	push 0x16E2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x40],2
	jmp Block12

 Block16:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x78]
	mov ecx,edi
	call eax
	test eax,eax
	jne Block18

 Block17:
	lea ecx,[esp+0x14]
	push 0x16E2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x40],3
	jmp Block12

 Block18:
	mov edx,dword ptr [esi+0x94]
	push edx
	push 5
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebx
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x20]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	jne Block20

 Block19:
	lea ecx,[esp+0x14]
	push 0x16E2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x40],4
	jmp Block12

 Block20:
	push 0x55
	lea ecx,[esp+0x2C]
	call COutPacket::_ctor_1
	mov dword ptr [esp+0x40],5
	call get_update_time
	push eax
	lea ecx,[esp+0x2C]
	call COutPacket::Encode4
	movzx edx,word ptr [esi+0x94]
	push edx
	lea ecx,[esp+0x2C]
	call COutPacket::Encode2
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	push eax
	lea ecx,[esp+0x2C]
	call COutPacket::Encode4
	mov eax,dword ptr [esi+0x98]
	push eax
	lea ecx,[esp+0x2C]
	call COutPacket::Encode4
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	push 1
	mov ecx,ebp
	call CWvsContext::SetExclRequestSent
	lea edx,[esp+0x1C]
	push 0x927
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov byte ptr [esp+0x48],6
	call play_game_sound
	mov eax,dword ptr [esp+0x24]
	add esp,8
	mov byte ptr [esp+0x40],5
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block22:
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,1
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
// CUIUnreleaseDlg::GetRTTI
__SUB_CLASS_THIS0(004AA570, __thiscall, 71463,  CUIUnreleaseDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIUnreleaseDlg::ms_RTTI_CUIUnreleaseDlg
	ret
}
}
