#include "regen.hpp"
// Msgbox.ipp
#include "Msgbox.hpp"

// CMsgbox::~CMsgbox
_SUB_EXCEPTION_HANDLER(268590)
__SUB_CLASS_THIS0(00268590, __thiscall, 78983,  CMsgbox, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_268590
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
	int 3// TODO: 	mov dword ptr [esi],offset CMsgbox::`vftable'
	mov eax,dword ptr [esi+0xC]
	mov dword ptr [esp+0x14],2
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+8]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov esi,dword ptr [esi+4]
	mov byte ptr [esp+0x14],0
	test esi,esi
	je Block6

 Block5:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov dword ptr [TSingleton<CMsgbox>::ms_pInstance],0
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CMsgbox::CMsgbox
_SUB_EXCEPTION_HANDLER(2686B0)
__SUB_CLASS_THIS0(002686B0, __thiscall, 78980,  CMsgbox, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2686B0
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
	lea edi,[esi+4]
	xor ebx,ebx
	cmp edi,ebx
	je Block2

 Block1:
	lea eax,[edi-4]
	mov dword ptr [TSingleton<CMsgbox>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CMsgbox>::ms_pInstance],ebx

 Block3:
	push ebx
	push offset _S_
	push ebx
	int 3// TODO: 	mov dword ptr [esi],offset CMsgbox::`vftable'
	push ebx
	mov ecx,edi
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [edi],ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	push ebx
	push offset _S_
	lea edi,[esi+8]
	push ebx
	push ebx
	mov ecx,edi
	mov byte ptr [esp+0x2C],1
	mov dword ptr [edi],ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	mov dword ptr [esi+0xC],ebx
	push 0x7F89
	push ebx
	mov byte ptr [esp+0x24],3
	mov dword ptr [esi+0x30],ebx
	call LoadCursorA
	push 0x7F00
	push ebx
	mov dword ptr [esi+0x34],eax
	call LoadCursorA
	mov dword ptr [esi+0x38],eax
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
// CMsgboxLinkWeb::~CMsgboxLinkWeb
_SUB_EXCEPTION_HANDLER(268630)
__SUB_CLASS_THIS0(00268630, __thiscall, 79009,  CMsgboxLinkWeb, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_268630
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
	int 3// TODO: 	mov dword ptr [esi],offset CMsgboxLinkWeb::`vftable'
	mov eax,dword ptr [esi+8]
	mov dword ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [esi+4]
	mov byte ptr [esp+0x14],0
	test esi,esi
	je Block4

 Block3:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov dword ptr [TSingleton<CMsgboxLinkWeb>::ms_pInstance],0
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CMsgboxLinkWeb::CMsgboxLinkWeb
_SUB_EXCEPTION_HANDLER(2687B0)
__SUB_CLASS_THIS0(002687B0, __thiscall, 79006,  CMsgboxLinkWeb, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2687B0
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
	mov edi,ecx
	mov dword ptr [esp+0xC],edi
	lea esi,[edi+4]
	test esi,esi
	je Block2

 Block1:
	lea eax,[esi-4]
	mov dword ptr [TSingleton<CMsgboxLinkWeb>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CMsgboxLinkWeb>::ms_pInstance],0

 Block3:
	push 0
	push offset _S_
	push 0
	int 3// TODO: 	mov dword ptr [edi],offset CMsgboxLinkWeb::`vftable'
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x28],0
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	push 0
	push offset _S_
	lea esi,[edi+8]
	push 0
	push 0
	mov ecx,esi
	mov byte ptr [esp+0x28],1
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	mov eax,edi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CMsgboxLinkWeb::Init
_SUB_EXCEPTION_HANDLER(269470)
__SUB_CLASS_THIS(00269470, __thiscall, 79008,  CMsgboxLinkWeb, void, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_269470
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esi+4]
	mov dword ptr [esp+0x14],1
	call ZXString<char>::op_assign
	lea ecx,[esp+0x1C]
	push ecx
	lea ecx,[esi+8]
	call ZXString<char>::op_assign
	push 0
	push offset MsgLinkWebDlgProc
	push 0
	push 0x73
	push 0
	mov dword ptr [esi+0xC],0x14
	mov dword ptr [esi+0x10],0xF
	mov dword ptr [esi+0x14],0x14A
	mov dword ptr [esi+0x18],0x64
	call dword ptr [ZImports::_DialogBoxParamA]
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x10],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 8
}
}
// MsgDlgProc
_SUB_EXCEPTION_HANDLER(2688A0)
__SUB(002688A0, __stdcall, 4527,  int32_t, HWND__*, uint32_t, uint32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2688A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x84
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x80],eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x98]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0xAC]
	mov ebx,dword ptr [esp+0xA8]
	mov esi,dword ptr [TSingleton<CMsgbox>::ms_pInstance]
	cmp eax,0x111
	ja Block33

 Block1:
	je Block30

 Block2:
	cmp eax,0x20
	ja Block15

 Block3:
	je Block11

 Block4:
	sub eax,0xF
	jne Block31

 Block5:
	mov edx,dword ptr [esi+0x18]
	mov eax,dword ptr [esi+0x10]
	mov ecx,dword ptr [esi+0x14]
	mov dword ptr [esp+0x1C],edx
	mov edx,dword ptr [esi+0x24]
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [esi+0x1C]
	mov dword ptr [esp+0x18],ecx
	mov ecx,dword ptr [esi+0x20]
	mov dword ptr [esp+0x28],edx
	lea edx,[esp+0x54]
	mov dword ptr [esp+0x20],eax
	mov eax,dword ptr [esi+0x28]
	mov dword ptr [esp+0x24],ecx
	mov ecx,dword ptr [esi+0x2C]
	push edx
	push ebx
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x38],ecx
	call BeginPaint
	mov edi,eax
	push 1
	push edi
	call SetBkMode
	lea eax,[esp+0x50]
	push 0x1A25
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,eax
	mov dword ptr [esp+0xA0],2
	call _xbstr_t::op_char_str
	push eax
	push 0
	push 0
	push 0
	push 0
	push 0x81
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0xC
	call CreateFontA
	mov ebp,eax
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x34],ebp
	mov dword ptr [esp+0xA0],0xFFFFFFFF
	call Ztl_bstr_t::~Ztl_bstr_t
	push ebp
	push edi
	call SelectObject
	mov eax,dword ptr [esi+4]
	push 0x11
	lea ecx,[esp+0x18]
	push ecx
	push 0xFFFFFFFF
	push eax
	push edi
	call _DrawTextA
	lea ebp,[esi+8]
	mov ecx,ebp
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block10

 Block6:
	lea edx,[esp+0x44]
	push 0x1A25
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,eax
	mov dword ptr [esp+0xA0],3
	call _xbstr_t::op_char_str
	push eax
	push 0
	push 0
	push 0
	push 0
	push 0x81
	push 0
	push 1
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0xC
	call CreateFontA
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0x40],eax
	mov dword ptr [esp+0xA0],0xFFFFFFFF
	call Ztl_bstr_t::~Ztl_bstr_t
	mov eax,dword ptr [esp+0x40]
	push eax
	push edi
	call SelectObject
	push 0xFF0000
	push edi
	call SetTextColor
	add esi,0xC
	mov ecx,esi
	call ZXString<char>::IsEmpty
	push 0x40011
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [ebp]
	lea ecx,[esp+0x28]
	push ecx
	push 0xFFFFFFFF
	push edx
	jmp Block9

 Block8:
	mov ecx,dword ptr [esi]
	lea eax,[esp+0x28]
	push eax
	push 0xFFFFFFFF
	push ecx

 Block9:
	push edi
	call _DrawTextA
	mov edx,dword ptr [esp+0x40]
	push edx
	call DeleteObject

 Block10:
	mov eax,dword ptr [esp+0x34]
	push eax
	call DeleteObject
	lea ecx,[esp+0x54]
	push ecx
	push ebx
	call EndPaint
	jmp Block56

 Block11:
	mov eax,dword ptr [esi+8]
	test eax,eax
	je Block56

 Block12:
	cmp byte ptr [eax],0
	je Block56

 Block13:
	lea edx,[esp+0x48]
	push edx
	call GetCursorPos
	lea eax,[esp+0x48]
	push eax
	push ebx
	call ScreenToClient
	cmp dword ptr [esi+0x30],0
	jne Block53

 Block14:
	mov ecx,dword ptr [esp+0x4C]
	mov edx,dword ptr [esp+0x48]
	push ecx
	push edx
	lea eax,[esi+0x20]
	push eax
	jmp Block51

 Block15:
	cmp eax,0x110
	jne Block56

 Block16:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [esi+0x14]
	mov eax,dword ptr [esi+0x18]
	mov dword ptr [esp+0x24],ecx
	mov ecx,dword ptr [esi+0x1C]
	mov dword ptr [esp+0x28],edx
	mov edx,dword ptr [esi+0x20]
	mov dword ptr [esp+0x2C],eax
	mov eax,dword ptr [esi+0x24]
	mov dword ptr [esp+0x30],ecx
	mov ecx,dword ptr [esi+0x28]
	mov dword ptr [esp+0x14],edx
	mov edx,dword ptr [esi+0x2C]
	push ebx
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x20],ecx
	mov dword ptr [esp+0x24],edx
	call GetDC
	mov ebp,eax
	push 1
	push ebp
	call SetBkMode
	lea eax,[esp+0x3C]
	push 0x1A25
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,eax
	mov dword ptr [esp+0xA0],0
	call _xbstr_t::op_char_str
	push eax
	push 0
	push 0
	push 0
	push 0
	push 0x81
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0xC
	call CreateFontA
	mov ecx,dword ptr [esp+0x3C]
	mov edi,eax
	mov dword ptr [esp+0x34],edi
	mov dword ptr [esp+0xA0],0xFFFFFFFF
	test ecx,ecx
	je Block18

 Block17:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x3C],0

 Block18:
	push edi
	push ebp
	call SelectObject
	mov eax,dword ptr [esi+4]
	push 0x10
	lea ecx,[esp+0x28]
	push ecx
	push 0xFFFFFFFF
	push eax
	push ebp
	call _DrawTextA
	add eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esi+8]
	mov dword ptr [esp+0x30],eax
	test ecx,ecx
	je Block26

 Block19:
	cmp byte ptr [ecx],0
	je Block26

 Block20:
	add eax,0xF
	lea edi,[esi+0xC]
	mov ecx,edi
	mov dword ptr [esp+0x18],eax
	call ZXString<char>::IsEmpty
	push 0x400
	test eax,eax
	je Block22

 Block21:
	mov eax,dword ptr [esi+8]
	lea edx,[esp+0x18]
	push edx
	push 0xFFFFFFFF
	push eax
	jmp Block23

 Block22:
	mov edi,dword ptr [edi]
	lea eax,[esp+0x18]
	push eax
	push 0xFFFFFFFF
	push edi

 Block23:
	push ebp
	call _DrawTextA
	mov edi,dword ptr [esp+0x1C]
	mov ecx,eax
	add ecx,dword ptr [esp+0x18]
	cmp edi,0x14A
	mov dword ptr [esp+0x20],ecx
	jle Block25

 Block24:
	mov edi,0x14A

 Block25:
	push 8
	push 0x19
	push 0x50
	mov eax,0x172
	sub eax,edi
	cdq
	add ecx,0xF
	push ecx
	push 0x87
	sub eax,edx
	push 0
	sar eax,1
	push 1
	lea edx,[edi+eax-0x14]
	push ebx
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x3C],edx
	call dword ptr [ZImports::_GetDlgItem]
	push eax
	call SetWindowPos
	mov edi,dword ptr [esp+0x20]
	jmp Block27

 Block26:
	push 0
	push 0x19
	push 0x50
	add eax,0xF
	push eax
	push 0x87
	push 0
	push 1
	push ebx
	call dword ptr [ZImports::_GetDlgItem]
	push eax
	call SetWindowPos
	mov edi,dword ptr [esp+0x30]

 Block27:
	push 0
	add edi,0x50
	push edi
	push 0x15E
	push 1
	call GetSystemMetrics
	sub eax,edi
	cdq
	sub eax,edx
	sar eax,1
	push eax
	push 0
	call GetSystemMetrics
	sub eax,0x15E
	cdq
	sub eax,edx
	sar eax,1
	push eax
	push 0
	push ebx
	call SetWindowPos
	push 0
	add edi,0xFFFFFFE2
	push edi
	push 0x14A
	push 0xFFFFFFFE
	push 8
	push 0
	push 0x3E8
	push ebx
	call dword ptr [ZImports::_GetDlgItem]
	push eax
	call SetWindowPos
	mov eax,dword ptr [esp+0x34]
	push eax
	call DeleteObject
	push ebp
	push ebx
	call ReleaseDC
	lea ecx,[esp+0x38]
	push 0x1A25
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,eax
	mov dword ptr [esp+0xA0],1
	call _xbstr_t::op_char_str
	push eax
	push 0
	push 0
	push 0
	push 0
	push 0x81
	push 0
	push 0
	push 0
	push 0x2BC
	push 0
	push 0
	push 0
	push 0xC
	call CreateFontA
	mov ecx,dword ptr [esp+0x38]
	mov edi,eax
	mov dword ptr [esp+0xA0],0xFFFFFFFF
	test ecx,ecx
	je Block29

 Block28:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x38],0

 Block29:
	push 1
	push edi
	push 0x30
	push 1
	push ebx
	call SendDlgItemMessageA
	push 1
	push edi
	push 0x30
	push 6
	push ebx
	call SendDlgItemMessageA
	push 1
	push edi
	push 0x30
	push 7
	push ebx
	call SendDlgItemMessageA
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [esi+0x10],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [esi+0x14],eax
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esi+0x18],ecx
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esi+0x20],eax
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esi+0x1C],edx
	mov edx,dword ptr [esp+0x1C]
	mov dword ptr [esi+0x24],ecx
	mov dword ptr [esi+0x28],edx
	mov dword ptr [esi+0x2C],eax
	jmp Block56

 Block30:
	mov eax,dword ptr [esp+0xB0]

 Block31:
	sub eax,1
	jne Block56

 Block32:
	push eax
	push ebx
	call EndDialog
	jmp Block56

 Block33:
	sub eax,0x200
	je Block47

 Block34:
	sub eax,1
	je Block42

 Block35:
	sub eax,1
	jne Block56

 Block36:
	mov eax,dword ptr [esi+8]
	test eax,eax
	je Block56

 Block37:
	cmp byte ptr [eax],0
	je Block56

 Block38:
	mov eax,dword ptr [esp+0xB4]
	movzx ecx,ax
	shr eax,0x10
	cmp dword ptr [esi+0x30],0
	je Block41

 Block39:
	push eax
	push ecx
	lea ecx,[esi+0x20]
	push ecx
	call PtInRect
	test eax,eax
	je Block41

 Block40:
	mov edx,dword ptr [esi+8]
	push 0
	push edx
	call open_web_site
	add esp,8
	push 0
	push ebx
	call EndDialog
	mov eax,1
	jmp Block57

 Block41:
	mov eax,dword ptr [esi+0x38]
	mov dword ptr [esi+0x30],0
	push eax
	jmp Block55

 Block42:
	mov eax,dword ptr [esi+8]
	test eax,eax
	je Block56

 Block43:
	cmp byte ptr [eax],0
	je Block56

 Block44:
	mov eax,dword ptr [esp+0xB4]
	movzx ecx,ax
	shr eax,0x10
	push eax
	push ecx
	lea ecx,[esi+0x20]
	push ecx
	call PtInRect
	test eax,eax
	je Block46

 Block45:
	mov edx,dword ptr [esi+0x34]
	push edx
	mov dword ptr [esi+0x30],1
	call SetCursor
	mov eax,1
	jmp Block57

 Block46:
	mov eax,dword ptr [esi+0x38]
	push eax
	call SetCursor
	mov eax,1
	jmp Block57

 Block47:
	mov eax,dword ptr [esi+8]
	test eax,eax
	je Block56

 Block48:
	cmp byte ptr [eax],0
	je Block56

 Block49:
	mov eax,dword ptr [esp+0xB4]
	movzx ecx,ax
	shr eax,0x10
	cmp dword ptr [esi+0x30],0
	jne Block53

 Block50:
	push eax
	push ecx
	lea ecx,[esi+0x20]
	push ecx

 Block51:
	call PtInRect
	test eax,eax
	jne Block53

 Block52:
	mov esi,dword ptr [esi+0x38]
	jmp Block54

 Block53:
	mov esi,dword ptr [esi+0x34]

 Block54:
	push esi

 Block55:
	call SetCursor

 Block56:
	xor eax,eax

 Block57:
	mov ecx,dword ptr [esp+0x98]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov ecx,dword ptr [esp+0x80]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x90
	ret 0x10
}
}
// CMsgbox::Init
_SUB_EXCEPTION_HANDLER(269370)
__SUB_CLASS_THIS(00269370, __thiscall, 78982,  CMsgbox, void, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_269370
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esi+4]
	mov dword ptr [esp+0x14],2
	call ZXString<char>::op_assign
	lea ecx,[esp+0x1C]
	push ecx
	lea ecx,[esi+8]
	call ZXString<char>::op_assign
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esi+0xC]
	call ZXString<char>::op_assign
	mov eax,0x14
	push 0
	mov dword ptr [esi+0x20],eax
	mov dword ptr [esi+0x10],eax
	mov eax,0xF
	push offset MsgDlgProc
	mov dword ptr [esi+0x24],eax
	mov dword ptr [esi+0x14],eax
	mov eax,0x14A
	push 0
	mov dword ptr [esi+0x18],eax
	mov dword ptr [esi+0x28],eax
	mov eax,0x78
	push 0x6D
	push 0
	mov dword ptr [esi+0x2C],eax
	mov dword ptr [esi+0x1C],eax
	call dword ptr [ZImports::_DialogBoxParamA]
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x10],1
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x10],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 0xC
}
}
