#include "regen.hpp"
// UIMenuDlgs.ipp
#include "UIMenuDlgs.hpp"

// CUIGameMenu::OnMouseButton
__SUB_CLASS_THIS(003EE3F0, __thiscall, 68713,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x201
	push edi
	mov edi,ecx
	jne Block4

 Block1:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x10]
	push esi
	push 0
	push eax
	lea esi,[edi-4]
	push ecx
	mov ecx,esi
	call CWnd::HitTest
	test eax,eax
	jne Block3

 Block2:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 1
	mov ecx,esi
	mov dword ptr [edi+0x128],0xFFFFFFFF
	call eax

 Block3:
	pop esi

 Block4:
	pop edi
	ret 0x10
}
}
// CUIGameMenu::ResetButtonState
__SUB_CLASS_THIS0(003EE510, __thiscall, 68710,  CUIGameMenu, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov ebx,ecx
	push edi
	xor esi,esi
	lea edi,[ebx+0xF8]
	lea ecx,[ecx]

 Block1:
	cmp dword ptr [ebx+0x124],0
	je Block4

 Block2:
	cmp dword ptr [ebx+0x128],esi
	jne Block4

 Block3:
	mov eax,1
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov ecx,dword ptr [edi]
	push 1
	push eax
	call CCtrlButton::MouseEnter
	inc esi
	add edi,8
	cmp esi,6
	jl Block1

 Block6:
	pop edi
	pop esi
	pop ebx
	ret
}
}
// CUIGameMenu::OnCreate
_SUB_EXCEPTION_HANDLER(3EED60)
__SUB_CLASS_THIS(003EED60, __thiscall, 68711,  CUIGameMenu, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3EED60
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
	mov esi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x3C],ebp
	mov dword ptr [esp+0x30],1
	mov dword ptr [esp+0x34],ebp
	mov dword ptr [esp+0x38],ebp
	push offset _S_UISTATUSBAR2IMGM__47
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x6C],ebp
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x68],1
	cmp eax,ebp
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x68],0
	cmp eax,ebp
	je Block11

 Block4:
	add eax,8
	cmp eax,ebp
	je Block11

 Block5:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block7

 Block6:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block7:
	mov eax,dword ptr [esi+0xF8]
	mov dword ptr [esi+0xF8],edi
	mov dword ptr [esp+0x24],eax
	cmp eax,ebp
	je Block9

 Block8:
	push ebp
	lea ecx,[esp+0x24]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0xF8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x30]
	push eax
	push ebp
	push 0x14
	push 8
	push 0x3E8
	push esi
	call edx
	push offset _S_UISTATUSBAR2IMGM__46
	lea ecx,[esp+0x40]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x68],2
	cmp eax,ebp
	je Block12

 Block10:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block13

 Block11:
	xor edi,edi
	jmp Block7

 Block12:
	xor eax,eax

 Block13:
	mov byte ptr [esp+0x68],0
	cmp eax,ebp
	je Block21

 Block14:
	add eax,8
	cmp eax,ebp
	je Block21

 Block15:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block17

 Block16:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block17:
	mov eax,dword ptr [esi+0x100]
	mov dword ptr [esi+0x100],edi
	mov dword ptr [esp+0x24],eax
	cmp eax,ebp
	je Block19

 Block18:
	push ebp
	lea ecx,[esp+0x24]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block19:
	mov ecx,dword ptr [esi+0x100]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x30]
	push eax
	push ebp
	push 0x2D
	push 8
	push 0x3E9
	push esi
	call edx
	push offset _S_UISTATUSBAR2IMGM__45
	lea ecx,[esp+0x40]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x68],3
	cmp eax,ebp
	je Block22

 Block20:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block23

 Block21:
	xor edi,edi
	jmp Block17

 Block22:
	xor eax,eax

 Block23:
	mov byte ptr [esp+0x68],0
	cmp eax,ebp
	je Block31

 Block24:
	add eax,8
	cmp eax,ebp
	je Block31

 Block25:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block27

 Block26:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block27:
	mov eax,dword ptr [esi+0x108]
	mov dword ptr [esi+0x108],edi
	mov dword ptr [esp+0x24],eax
	cmp eax,ebp
	je Block29

 Block28:
	push ebp
	lea ecx,[esp+0x24]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block29:
	mov ecx,dword ptr [esi+0x108]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x30]
	push eax
	push ebp
	push 0x46
	push 8
	push 0x3EA
	push esi
	call edx
	push offset _S_UISTATUSBAR2IMGM__44
	lea ecx,[esp+0x40]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x68],4
	cmp eax,ebp
	je Block32

 Block30:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block33

 Block31:
	xor edi,edi
	jmp Block27

 Block32:
	xor eax,eax

 Block33:
	mov byte ptr [esp+0x68],0
	cmp eax,ebp
	je Block43

 Block34:
	add eax,8
	cmp eax,ebp
	je Block43

 Block35:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block37

 Block36:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block37:
	mov eax,dword ptr [esi+0x110]
	mov dword ptr [esi+0x110],edi
	mov dword ptr [esp+0x24],eax
	cmp eax,ebp
	je Block39

 Block38:
	push ebp
	lea ecx,[esp+0x24]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block39:
	mov ecx,dword ptr [esi+0x110]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x30]
	push eax
	push ebp
	push 0x5F
	push 8
	push 0x3EB
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x180C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x6C],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x68],0
	cmp eax,ebp
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block41:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x68],6
	cmp eax,ebp
	je Block44

 Block42:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block45

 Block43:
	xor edi,edi
	jmp Block37

 Block44:
	xor eax,eax

 Block45:
	mov byte ptr [esp+0x68],0
	cmp eax,ebp
	je Block53

 Block46:
	add eax,8
	cmp eax,ebp
	je Block53

 Block47:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block49

 Block48:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block49:
	mov eax,dword ptr [esi+0x118]
	mov dword ptr [esi+0x118],edi
	mov dword ptr [esp+0x24],eax
	cmp eax,ebp
	je Block51

 Block50:
	push ebp
	lea ecx,[esp+0x24]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block51:
	mov ecx,dword ptr [esi+0x118]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x30]
	push eax
	push ebp
	push 0x78
	push 8
	push 0x3EC
	push esi
	call edx
	push offset _S_UISTATUSBAR2IMGM__43
	lea ecx,[esp+0x40]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x68],7
	cmp eax,ebp
	je Block54

 Block52:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block55

 Block53:
	xor edi,edi
	jmp Block49

 Block54:
	xor eax,eax

 Block55:
	mov byte ptr [esp+0x68],0
	cmp eax,ebp
	je Block63

 Block56:
	add eax,8
	cmp eax,ebp
	je Block63

 Block57:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block59

 Block58:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block59:
	mov eax,dword ptr [esi+0x120]
	mov dword ptr [esi+0x120],edi
	mov dword ptr [esp+0x24],eax
	cmp eax,ebp
	je Block61

 Block60:
	push ebp
	lea ecx,[esp+0x24]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block61:
	mov ecx,dword ptr [esi+0x120]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x30]
	push eax
	push ebp
	push 0x91
	push 8
	push 0x3ED
	push esi
	call edx
	mov ecx,esi
	mov dword ptr [esi+0x124],1
	mov dword ptr [esi+0x128],ebp
	mov dword ptr [esi+0x12C],0xFFFFFFFF
	call CUIGameMenu::ResetButtonState
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x40]
	push eax
	call edi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block64

 Block62:
	push eax
	call _com_issue_error

 Block63:
	xor edi,edi
	jmp Block59

 Block64:
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x6C],8
	call edi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block66

 Block65:
	push eax
	call _com_issue_error

 Block66:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x6C],9
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov bl,0xA
	mov byte ptr [esp+0x68],bl
	cmp ecx,ebp
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	lea edx,[esp+0x14]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x68],0xB
	cmp ecx,ebp
	jne Block70

 Block69:
	push 0x80004003
	call _com_issue_error

 Block70:
	lea eax,[esp+0x40]
	push eax
	lea edx,[esp+0x24]
	push edx
	push 0xFF
	push ebp
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x68],bl
	cmp eax,ebp
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block72:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x68],9
	cmp eax,ebp
	je Block74

 Block73:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block74:
	cmp word ptr [esp+0x20],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x68],8
	jne Block77

 Block75:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea ecx,[esp+0x20]
	push ecx
	call ebx

 Block78:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x68],0
	jne Block81

 Block79:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	cmp eax,ebp
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea eax,[esp+0x40]
	push eax
	call ebx

 Block82:
	lea ecx,[esp+0x50]
	push ecx
	call edi
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x6C],0xC
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x68],0xD
	cmp edi,ebp
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x58]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block88

 Block87:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block88:
	mov eax,dword ptr [esp+0x14]
	add eax,0x1F4
	mov ecx,3
	mov word ptr [esp+0x40],cx
	mov dword ptr [esp+0x48],eax
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x6C],0xE
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov bl,0xF
	mov byte ptr [esp+0x68],bl
	cmp ecx,ebp
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x68],0x10
	cmp ecx,ebp
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x44]
	push eax
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x68],bl
	cmp eax,ebp
	je Block94

 Block93:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block94:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x68],0xE
	cmp eax,ebp
	je Block96

 Block95:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block96:
	mov esi,8
	mov byte ptr [esp+0x68],0xD
	cmp word ptr [esp+0x40],si
	jne Block99

 Block97:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,ebp
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block100:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x68],0xC
	cmp eax,ebp
	je Block102

 Block101:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block102:
	mov byte ptr [esp+0x68],0
	cmp word ptr [esp+0x50],si
	jne Block105

 Block103:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,ebp
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	cmp eax,ebp
	je Block108

 Block107:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block108:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 4
}
}
// CUIGameMenu::OnChildNotify
__SUB_CLASS_THIS(003EE7B0, __thiscall, 68714,  CUIGameMenu, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	cmp eax,0x65
	jne Block4

 Block1:
	cmp dword ptr [esp+0xC],0
	je Block3

 Block2:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFFC18
	mov dword ptr [ecx+0x124],1
	mov dword ptr [ecx+0x128],eax
	call CUIGameMenu::ResetButtonState
	ret 0xC

 Block3:
	mov dword ptr [ecx+0x124],0
	call CUIGameMenu::ResetButtonState
	ret 0xC

 Block4:
	cmp eax,0x64
	jne Block6

 Block5:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [edx+0x20]
	push eax
	call edx

 Block6:
	ret 0xC
}
}
// CUIShortCutMenu::~CUIShortCutMenu
_SUB_EXCEPTION_HANDLER(3EEA60)
__SUB_CLASS_THIS0(003EEA60, __thiscall, 68743,  CUIShortCutMenu, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3EEA60
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIShortCutMenu::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIShortCutMenu::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIShortCutMenu::`vftable'{for `ZRefCounted'}
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 7
	push 8
	lea eax,[esi+0xF4]
	push eax
	mov dword ptr [esp+0x24],1
	call __eh_vector_dtor_iterator
	mov ecx,esi
	mov dword ptr [TSingleton<CUIShortCutMenu>::ms_pInstance],0
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
// CUIShortCutMenu::HitTest
__SUB_CLASS_THIS(003EE450, __thiscall, 68749,  CUIShortCutMenu, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	jmp  CWnd::HitTest
}
}
// CUIShortCutMenu::OnKey
// 7EE944
static uint8_t _SUB_3EE810_LOOKUP_TABLE_0[28] = {
0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 4, 3, 
};
__SUB_CLASS_THIS(003EE810, __thiscall, 68745,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	mov esi,ecx
	test eax,eax
	js Block22

 Block1:
	mov ecx,dword ptr [esp+8]
	add ecx,0xFFFFFFF3
	cmp ecx,0x1B
	ja Block18

 Block2:
	movzx ecx,byte ptr [ecx+_SUB_3EE810_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block16
cmp ECX, 1
je Block20
cmp ECX, 2
je Block3
cmp ECX, 3
je Block10
cmp ECX, 4
je Block18


 Block3:
	mov dword ptr [esi+0x128],1
	jmp Block5

 Block5:
	mov eax,dword ptr [esi+0x12C]
	test eax,eax
	jne Block7

 Block6:
	mov dword ptr [esi+0x12C],6
	jmp Block8

 Block7:
	dec eax
	mov dword ptr [esi+0x12C],eax

 Block8:
	mov edx,dword ptr [esi+0x12C]
	mov eax,dword ptr [esi+edx*8+0xF4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	call edx
	test eax,eax
	je Block5

 Block9:
	lea ecx,[esi-4]
	call CUIShortCutMenu::ResetButtonState
	pop esi
	ret 8

 Block10:
	mov dword ptr [esi+0x128],1
	mov edi,edi

 Block11:
	mov eax,dword ptr [esi+0x12C]
	cmp eax,6
	jl Block13

 Block12:
	mov dword ptr [esi+0x12C],0
	jmp Block14

 Block13:
	inc eax
	mov dword ptr [esi+0x12C],eax

 Block14:
	mov eax,dword ptr [esi+0x12C]
	mov eax,dword ptr [esi+eax*8+0xF4]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x20]
	call eax
	test eax,eax
	je Block11

 Block15:
	lea ecx,[esi-4]
	call CUIShortCutMenu::ResetButtonState
	pop esi
	ret 8

 Block16:
	cmp dword ptr [esi+0x128],0
	je Block22

 Block17:
	mov edx,dword ptr [esi+0x12C]
	push edx
	jmp Block21

 Block18:
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	shr eax,0x10
	and eax,0xFF
	push eax
	call CFuncKeyMappedMan::FuncKeyMapped
	cmp byte ptr [eax],4
	jne Block22

 Block19:
	cmp dword ptr [eax+1],0xE
	jne Block22

 Block20:
	push 0xFFFFFFFF

 Block21:
	lea ecx,[esi-4]
	call CUIShortCutMenu::SetResult
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	push 1
	call edx

 Block22:
	pop esi
	ret 8
}
}
// CUIShortCutMenu::OnMouseButton
__SUB_CLASS_THIS(003EE5D0, __thiscall, 68746,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x201
	jne Block4

 Block1:
	mov eax,dword ptr [esp+0x10]
	push esi
	push 0
	lea esi,[ecx-4]
	mov ecx,dword ptr [esp+0x14]
	push eax
	push ecx
	mov ecx,esi
	call CWnd::HitTest
	test eax,eax
	jne Block3

 Block2:
	push 0xFFFFFFFF
	mov ecx,esi
	call CUIShortCutMenu::SetResult
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 1
	call eax

 Block3:
	pop esi

 Block4:
	ret 0x10
}
}
// CUIGameMenu::OnKey
// 7EE78C
static uint8_t _SUB_3EE660_LOOKUP_TABLE_0[28] = {
0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 4, 3, 
};
__SUB_CLASS_THIS(003EE660, __thiscall, 68712,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	test dword ptr [esp+8],0x80000000
	push esi
	mov esi,ecx
	jne Block18

 Block1:
	mov eax,dword ptr [esp+8]
	add eax,0xFFFFFFF3
	cmp eax,0x1B
	ja Block18

 Block2:
	movzx eax,byte ptr [eax+_SUB_3EE660_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block15
cmp EAX, 1
je Block17
cmp EAX, 2
je Block3
cmp EAX, 3
je Block9
cmp EAX, 4
je Block18


 Block3:
	mov dword ptr [esi+0x120],1
	lea esp,[esp]

 Block4:
	mov eax,dword ptr [esi+0x124]
	test eax,eax
	jne Block6

 Block5:
	mov dword ptr [esi+0x124],5
	jmp Block7

 Block6:
	dec eax
	mov dword ptr [esi+0x124],eax

 Block7:
	mov ecx,dword ptr [esi+0x124]
	mov eax,dword ptr [esi+ecx*8+0xF4]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x20]
	call eax
	test eax,eax
	je Block4

 Block8:
	lea ecx,[esi-4]
	call CUIGameMenu::ResetButtonState
	pop esi
	ret 8

 Block9:
	mov dword ptr [esi+0x120],1
	nop

 Block10:
	mov eax,dword ptr [esi+0x124]
	cmp eax,5
	jl Block12

 Block11:
	mov dword ptr [esi+0x124],0
	jmp Block13

 Block12:
	inc eax
	mov dword ptr [esi+0x124],eax

 Block13:
	mov ecx,dword ptr [esi+0x124]
	mov eax,dword ptr [esi+ecx*8+0xF4]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x20]
	call eax
	test eax,eax
	je Block10

 Block14:
	lea ecx,[esi-4]
	call CUIGameMenu::ResetButtonState
	pop esi
	ret 8

 Block15:
	cmp dword ptr [esi+0x120],0
	je Block18

 Block16:
	mov ecx,dword ptr [esi+0x124]
	mov edx,dword ptr [esi-4]
	mov eax,dword ptr [edx+0x34]
	mov dword ptr [esi+0x128],ecx
	lea ecx,[esi-4]
	push 1
	call eax
	pop esi
	ret 8

 Block17:
	mov edx,dword ptr [esi-4]
	mov eax,dword ptr [edx+0x34]
	lea ecx,[esi-4]
	push 1
	mov dword ptr [esi+0x128],0xFFFFFFFF
	call eax

 Block18:
	pop esi
	ret 8
}
}
// CUIShortCutMenu::OnButtonClicked
__SUB_CLASS_THIS(003EE560, __thiscall, 68748,  CUIShortCutMenu, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	lea edx,[eax-0x3E8]
	cmp edx,6
	ja Block2

 Block1:
	add eax,0xFFFFFC18
	push eax
	call CUIShortCutMenu::SetResult
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block2:
	cmp eax,1
	jne Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block4:
	cmp eax,2
	jne Block6

 Block5:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx

 Block6:
	cmp eax,8
	jne Block8

 Block7:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],8
	jmp edx

 Block8:
	ret 4
}
}
// CUIShortCutMenu::ResetButtonState
__SUB_CLASS_THIS0(003EE610, __thiscall, 68743,  CUIShortCutMenu, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov ebx,ecx
	push edi
	xor esi,esi
	lea edi,[ebx+0xF8]
	lea ecx,[ecx]

 Block1:
	cmp dword ptr [ebx+0x12C],0
	je Block4

 Block2:
	cmp dword ptr [ebx+0x130],esi
	jne Block4

 Block3:
	mov eax,1
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov ecx,dword ptr [edi]
	push 1
	push eax
	call CCtrlButton::MouseEnter
	inc esi
	add edi,8
	cmp esi,7
	jl Block1

 Block6:
	pop edi
	pop esi
	pop ebx
	ret
}
}
// CUIGameMenu::HitTest
__SUB_CLASS_THIS(003EE440, __thiscall, 68716,  CUIGameMenu, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	jmp  CWnd::HitTest
}
}
// CUIShortCutMenu::SetResult
__SUB_CLASS_THIS(003EE460, __thiscall, 68751,  CUIShortCutMenu, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,6
	ja Block9

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


 Block2:
	mov dword ptr [ecx+0x134],0
	ret 4

 Block3:
	mov dword ptr [ecx+0x134],1
	ret 4

 Block4:
	mov dword ptr [ecx+0x134],2
	ret 4

 Block5:
	mov dword ptr [ecx+0x134],3
	ret 4

 Block6:
	mov dword ptr [ecx+0x134],7
	ret 4

 Block7:
	mov dword ptr [ecx+0x134],6
	ret 4

 Block8:
	mov dword ptr [ecx+0x134],8
	ret 4

 Block9:
	mov dword ptr [ecx+0x134],eax
	ret 4
}
}
// CUIShortCutMenu::CUIShortCutMenu
_SUB_EXCEPTION_HANDLER(3EEC50)
__SUB_CLASS_THIS0(003EEC50, __thiscall, 68741,  CUIShortCutMenu, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3EEC50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+8],esi
	call CFadeWnd::_ctor_default
	lea eax,[esi+0xF4]
	mov dword ptr [esp+0x18],0
	test eax,eax
	je Block2

 Block1:
	lea ecx,[eax-0xF4]
	mov dword ptr [TSingleton<CUIShortCutMenu>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIShortCutMenu>::ms_pInstance],0

 Block3:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 7
	push 8
	push eax
	mov byte ptr [esp+0x2C],1
	int 3// TODO: 	mov dword ptr [esi],offset CUIShortCutMenu::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIShortCutMenu::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIShortCutMenu::`vftable'{for `ZRefCounted'}
	call __eh_vector_ctor_iterator
	push 0x1F4
	push 0
	push 0x1F4
	mov ecx,0xFFFFFF0C
	push ecx
	mov eax,0x29D
	push eax
	push ecx
	push eax
	push ecx
	push eax
	push 0
	push 0xFF
	push 0
	mov ecx,esi
	mov byte ptr [esp+0x48],2
	call CFadeWnd::SetOption
	push 0
	push 0
	push 0xD2
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_UISTATUSBAR2IMGM__42
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrndV
	push 6
	push 0
	push 0
	push 1
	push 0xA
	push 0
	push 0xEB
	push 0x4F
	mov ecx,esi
	call CFadeWnd::CreateFadeWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret
}
}
// CUIShortCutMenu::OnCreate
_SUB_EXCEPTION_HANDLER(3EF480)
__SUB_CLASS_THIS(003EF480, __thiscall, 68744,  CUIShortCutMenu, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3EF480
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
	mov ebp,ecx
	mov dword ptr [esp+0x1C],ebp
	push 0x4A
	push offset _S_UISTATUSBAR2IMGM__54
	xor esi,esi
	push esi
	push 0x25
	lea ecx,[esp+0x58]
	mov dword ptr [esp+0x58],esi
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x25
	lea ecx,[esp+0x4C]
	call ZXString16::ReleaseBuffer
	push 0x4C
	push offset _S_UISTATUSBAR2IMGM__53
	push esi
	push 0x26
	lea ecx,[esp+0x5C]
	mov dword ptr [esp+0x7C],esi
	mov dword ptr [esp+0x5C],esi
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x26
	lea ecx,[esp+0x50]
	call ZXString16::ReleaseBuffer
	push 0x4A
	push offset _S_UISTATUSBAR2IMGM__52
	push esi
	push 0x25
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0x7C],1
	mov dword ptr [esp+0x60],esi
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x25
	lea ecx,[esp+0x54]
	call ZXString16::ReleaseBuffer
	push 0x4C
	push offset _S_UISTATUSBAR2IMGM__51
	push esi
	push 0x26
	lea ecx,[esp+0x64]
	mov byte ptr [esp+0x7C],2
	mov dword ptr [esp+0x64],esi
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x26
	lea ecx,[esp+0x58]
	call ZXString16::ReleaseBuffer
	push 0x54
	push offset _S_UISTATUSBAR2IMGM__50
	push esi
	push 0x2A
	lea ecx,[esp+0x68]
	mov byte ptr [esp+0x7C],3
	mov dword ptr [esp+0x68],esi
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x2A
	lea ecx,[esp+0x5C]
	call ZXString16::ReleaseBuffer
	push 0x4C
	push offset _S_UISTATUSBAR2IMGM__49
	push esi
	mov byte ptr [esp+0x78],4
	mov dword ptr [esp+0x68],esi
	push 0x26
	lea ecx,[esp+0x6C]
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x26
	lea ecx,[esp+0x60]
	call ZXString16::ReleaseBuffer
	push 0x48
	push offset _S_UISTATUSBAR2IMGM__48
	push esi
	push 0x24
	lea ecx,[esp+0x70]
	mov byte ptr [esp+0x7C],5
	mov dword ptr [esp+0x70],esi
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x24
	lea ecx,[esp+0x64]
	call ZXString16::ReleaseBuffer
	lea eax,[esp+0x48]
	mov dword ptr [esp+0x6C],6
	mov dword ptr [esp+0x14],esi
	lea ebx,[esi+0x14]
	mov dword ptr [esp+0x18],eax
	add ebp,0xF8

 Block1:
	mov dword ptr [esp+0x44],esi
	mov dword ptr [esp+0x38],1
	mov dword ptr [esp+0x3C],esi
	mov dword ptr [esp+0x40],esi
	mov ecx,dword ptr [esp+0x18]
	push ecx
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0x70],7
	call ZXString16::op_assign
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0x6C],8
	cmp eax,esi
	je Block3

 Block2:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block4

 Block3:
	xor eax,eax

 Block4:
	mov byte ptr [esp+0x6C],7
	cmp eax,esi
	je Block17

 Block5:
	add eax,8
	cmp eax,esi
	je Block17

 Block6:
	lea edi,[eax-8]
	cmp edi,esi
	je Block8

 Block7:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	mov eax,dword ptr [ebp]
	mov dword ptr [ebp],edi
	cmp eax,esi
	je Block12

 Block9:
	lea edi,[eax+8]
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block10:
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,esi
	je Block12

 Block11:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block12:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x38]
	push eax
	mov eax,dword ptr [esp+0x18]
	push esi
	push ebx
	push 8
	add eax,0x3E8
	push eax
	mov eax,dword ptr [esp+0x30]
	push eax
	call edx
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x6C],6
	cmp eax,esi
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block14:
	inc dword ptr [esp+0x14]
	add dword ptr [esp+0x18],4
	add ebx,0x19
	add ebp,8
	cmp ebx,0xC3
	jl Block1

 Block15:
	mov ebx,dword ptr [esp+0x1C]
	mov ecx,ebx
	mov dword ptr [ebx+0x12C],1
	mov dword ptr [ebx+0x130],esi
	call CUIShortCutMenu::ResetButtonState
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push eax
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block18

 Block16:
	push eax
	call _com_issue_error

 Block17:
	xor edi,edi
	jmp Block8

 Block18:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x70],9
	call edi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebx
	mov byte ptr [esp+0x70],0xA
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x6C],0xB
	cmp ecx,esi
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ebp,dword ptr [eax]
	mov byte ptr [esp+0x6C],0xC
	cmp ebp,esi
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov edx,dword ptr [esp+0x38]
	mov ecx,dword ptr [ebp]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x54]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0x38]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x54]
	push 0xFF
	push esi
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x90]
	push ebp
	call eax
	cmp eax,esi
	jge Block26

 Block25:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push ebp
	push eax
	call _com_issue_errorex

 Block26:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x6C],0xB
	cmp eax,esi
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block28:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x6C],0xA
	cmp eax,esi
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	mov ebp,8
	mov byte ptr [esp+0x6C],9
	cmp word ptr [esp+0x28],bp
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,esi
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [esp+0x6C],6
	cmp word ptr [esp+0x38],bp
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,esi
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	lea ecx,[esp+0x28]
	push ecx
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	lea eax,[esp+0x24]
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x70],0xD
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x6C],0xE
	cmp edi,esi
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x58]
	lea edx,[esp+0x18]
	push edx
	push edi
	mov dword ptr [esp+0x20],esi
	call eax
	cmp eax,esi
	jge Block44

 Block43:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block44:
	mov eax,dword ptr [esp+0x18]
	add eax,0x1F4
	mov ecx,3
	mov word ptr [esp+0x38],cx
	mov dword ptr [esp+0x40],eax
	lea edx,[esp+0x20]
	push edx
	mov ecx,ebx
	mov byte ptr [esp+0x70],0xF
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov bl,0x10
	mov byte ptr [esp+0x6C],bl
	cmp ecx,esi
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	lea eax,[esp+0x14]
	push eax
	call IWzGr2DLayer::Getalpha
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x6C],0x11
	cmp edi,esi
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
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
	mov edx,dword ptr [esp+0x48]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x5C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x64]
	push 0xFF
	push 0xFF
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x90]
	push edi
	call eax
	cmp eax,esi
	jge Block50

 Block49:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block50:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x6C],bl
	cmp eax,esi
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x6C],0xF
	cmp eax,esi
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	mov byte ptr [esp+0x6C],0xE
	cmp word ptr [esp+0x38],bp
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,esi
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
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x6C],0xD
	cmp eax,esi
	je Block60

 Block59:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block60:
	mov byte ptr [esp+0x6C],6
	cmp word ptr [esp+0x28],bp
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,esi
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	push offset ZXString16::~ZXString<wchar_t>
	push 7
	push 4
	lea eax,[esp+0x54]
	push eax
	mov dword ptr [esp+0x7C],0xFFFFFFFF
	call __eh_vector_dtor_iterator
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
// CUIGameMenu::CUIGameMenu
_SUB_EXCEPTION_HANDLER(3EEB40)
__SUB_CLASS_THIS0(003EEB40, __thiscall, 68708,  CUIGameMenu, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3EEB40
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+8],esi
	call CFadeWnd::_ctor_default
	lea eax,[esi+0xF4]
	mov dword ptr [esp+0x18],0
	test eax,eax
	je Block2

 Block1:
	lea ecx,[eax-0xF4]
	mov dword ptr [TSingleton<CUIGameMenu>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIGameMenu>::ms_pInstance],0

 Block3:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 6
	push 8
	push eax
	mov byte ptr [esp+0x2C],1
	int 3// TODO: 	mov dword ptr [esi],offset CUIGameMenu::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIGameMenu::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIGameMenu::`vftable'{for `ZRefCounted'}
	call __eh_vector_ctor_iterator
	push 0x1F4
	push 0
	push 0x1F4
	mov ecx,0xFFFFFF24
	push ecx
	mov eax,0x2D1
	push eax
	push ecx
	push eax
	push ecx
	push eax
	push 0
	push 0xFF
	push 0
	mov ecx,esi
	mov byte ptr [esp+0x48],2
	call CFadeWnd::SetOption
	push 0
	push 0
	push 0xB9
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_UISTATUSBAR2IMGM__41
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrndV
	push 6
	push 0
	push 0
	push 1
	push 0xA
	push 0
	push 0xB9
	push 0x4F
	mov ecx,esi
	call CFadeWnd::CreateFadeWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret
}
}
// CUIGameMenu::OnButtonClicked
__SUB_CLASS_THIS(003EE380, __thiscall, 68715,  CUIGameMenu, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	lea edx,[eax-0x3E8]
	cmp edx,5
	ja Block2

 Block1:
	add eax,0xFFFFFC18
	mov dword ptr [ecx+0x12C],eax
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block2:
	cmp eax,1
	jne Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block4:
	cmp eax,2
	jne Block6

 Block5:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx

 Block6:
	cmp eax,8
	jne Block8

 Block7:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],8
	jmp edx

 Block8:
	ret 4
}
}
// CUIShortCutMenu::OnChildNotify
__SUB_CLASS_THIS(003EE960, __thiscall, 68747,  CUIShortCutMenu, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	cmp eax,0x65
	jne Block4

 Block1:
	cmp dword ptr [esp+0xC],0
	je Block3

 Block2:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFFC18
	mov dword ptr [ecx+0x12C],1
	mov dword ptr [ecx+0x130],eax
	call CUIShortCutMenu::ResetButtonState
	ret 0xC

 Block3:
	mov dword ptr [ecx+0x12C],0
	call CUIShortCutMenu::ResetButtonState
	ret 0xC

 Block4:
	cmp eax,0x64
	jne Block6

 Block5:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [edx+0x20]
	push eax
	call edx

 Block6:
	ret 0xC
}
}
// CUIGameMenu::~CUIGameMenu
_SUB_EXCEPTION_HANDLER(3EE9C0)
__SUB_CLASS_THIS0(003EE9C0, __thiscall, 68710,  CUIGameMenu, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3EE9C0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIGameMenu::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIGameMenu::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIGameMenu::`vftable'{for `ZRefCounted'}
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 6
	push 8
	lea eax,[esi+0xF4]
	push eax
	mov dword ptr [esp+0x24],1
	call __eh_vector_dtor_iterator
	mov ecx,esi
	mov dword ptr [TSingleton<CUIGameMenu>::ms_pInstance],0
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
