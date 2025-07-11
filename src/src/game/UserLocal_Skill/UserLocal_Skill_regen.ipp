#include "regen.hpp"
// UserLocal_Skill.ipp
#include "UserLocal_Skill.hpp"

// CUIAntiMacroCharacterName::~CUIAntiMacroCharacterName
_SUB_EXCEPTION_HANDLER(53F870)
__SUB_CLASS_THIS0(0053F870, __thiscall, 54315,  CUIAntiMacroCharacterName, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_53F870
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIAntiMacroCharacterName::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIAntiMacroCharacterName::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIAntiMacroCharacterName::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xA8]
	mov dword ptr [esp+0x1C],3
	call CLayoutMan::~CLayoutMan
	lea edi,[esi+0xA0]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
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
// CUIAntiMacroCharacterName::OnCreate
_SUB_EXCEPTION_HANDLER(38DF00)
__SUB_CLASS_THIS(0038DF00, __thiscall, 54316,  CUIAntiMacroCharacterName, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38DF00
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
	xor ebx,ebx
	push ebx
	push ebx
	lea ebp,[esi+0xA8]
	push esi
	mov ecx,ebp
	call CLayoutMan::Init
	lea ecx,[esp+0x1C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x64],ebx
	mov dword ptr [esp+0x44],ebx
	mov dword ptr [esp+0x3C],0xFF000000
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x60],1
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov byte ptr [esp+0x60],bl
	cmp eax,ebx
	je Block14

 Block4:
	add eax,8
	cmp eax,ebx
	je Block14

 Block5:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block7

 Block6:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0x94]
	lea eax,[esp+0x1C]
	push eax
	push 0x10
	push 0xCE
	push 0x59
	push 0x54
	mov dword ptr [esp+0x60],0xC
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	push 0x3E8
	push esi
	call edx
	mov eax,dword ptr [esi+0x94]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	push ebx
	push ebx
	push ebx
	push 1
	push offset _S_UIUIWINDOW2IMGMA__17
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebp
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block11:
	push ebx
	push ebx
	push ebx
	push 2
	push offset _S_UIUIWINDOW2IMGMA__16
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebp
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],ebx
	je Block13

 Block12:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x18],ebx

 Block13:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 4

 Block14:
	xor edi,edi
	jmp Block7
}
}
// CUIAntiMacroCharacterName::CUIAntiMacroCharacterName
_SUB_EXCEPTION_HANDLER(53F7C0)
__SUB_CLASS_THIS0(0053F7C0, __thiscall, 54313,  CUIAntiMacroCharacterName, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_53F7C0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIAntiMacroCharacterName::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIAntiMacroCharacterName::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIAntiMacroCharacterName::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esi+0x94],eax
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esi+0xA4],eax
	mov dword ptr [esi+0xA8],eax
	mov dword ptr [esi+0xAC],eax
	mov dword ptr [esi+0xB0],eax
	mov dword ptr [esi+0xB4],eax
	mov dword ptr [esi+0xB8],eax
	push eax
	push eax
	push 1
	push offset _S_UIUIWINDOW2IMGMA
	mov ecx,esi
	mov byte ptr [esp+0x24],4
	call CDialog::CreateDlg_2
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIAntiMacroCharacterName::GetResult
_SUB_EXCEPTION_HANDLER(53E530)
__SUB_CLASS_THIS(0053E530, __thiscall, 54317,  CUIAntiMacroCharacterName, void, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_53E530
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [ecx+0x94]
	lea eax,[esp+4]
	push eax
	call CCtrlEdit::GetText
	push 0
	push 0
	mov ecx,eax
	mov dword ptr [esp+0x18],0
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov ecx,dword ptr [esp+0x18]
	push eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+4]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x10
	ret 4
}
}
