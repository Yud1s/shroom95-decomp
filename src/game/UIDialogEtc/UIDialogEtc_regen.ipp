#include "regen.hpp"
// UIDialogEtc.ipp
#include "UIDialogEtc.hpp"

// CUISpeedQuiz::SetRet
_SUB_EXCEPTION_HANDLER(39C4C0)
__SUB_CLASS_THIS(0039C4C0, __thiscall, 54388,  CUISpeedQuiz, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39C4C0
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
	mov edi,dword ptr [esp+0x28]
	xor ebx,ebx
	mov dword ptr [esp+0x10],ebx
	cmp edi,2
	je Block25

 Block1:
	cmp edi,1
	jne Block5

 Block2:
	mov ecx,dword ptr [esi+0x98]
	lea eax,[esp+0x14]
	push eax
	call CCtrlEdit::GetText
	mov dword ptr [esp+0x20],ebx
	push 0
	mov ebx,edi
	push 0
	mov ecx,eax
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [eax]
	test eax,eax
	je Block4

 Block3:
	cmp dword ptr [eax-4],2
	jge Block5

 Block4:
	mov byte ptr [esp+0x28],bl
	jmp Block6

 Block5:
	mov byte ptr [esp+0x28],0

 Block6:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test bl,1
	je Block9

 Block7:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	cmp byte ptr [esp+0x28],0
	jne Block25

 Block10:
	cmp dword ptr [esi+0x84],0
	jne Block13

 Block11:
	cmp dword ptr [esi+0x14],0
	mov dword ptr [esi+0x80],edi
	mov dword ptr [esi+0x84],1
	je Block13

 Block12:
	mov ecx,esi
	call CWnd::Destroy

 Block13:
	cmp edi,1
	jne Block16

 Block14:
	cmp dword ptr [esi+0xCC],0
	jle Block21

 Block15:
	mov ecx,dword ptr [esi+0x98]
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push edx
	call CCtrlEdit::GetText
	jmp Block20

 Block16:
	cmp edi,0x3E9
	jne Block18

 Block17:
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x2C],esp
	push 0
	push 0xA
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_GIVEUP]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [_S_GIVEUP+4]
	mov dword ptr [eax+4],edx
	mov cx,word ptr [_S_GIVEUP+8]
	mov word ptr [eax+8],cx
	push 0xA
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	jmp Block20

 Block18:
	cmp edi,0x3EA
	jne Block21

 Block19:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0xFFFFFFFF
	push offset _S_
	call ZXString<char>::CreateFromCharStr

 Block20:
	mov ecx,esi
	call CUISpeedQuiz::SendResult

 Block21:
	mov ecx,dword ptr [TSingleton<CUISpeedQuiz>::ms_pInstance]
	test ecx,ecx
	je Block24

 Block22:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUISpeedQuiz>::ms_pInstance]
	test eax,eax
	je Block24

 Block23:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block24:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [ecx+0x3FA0],0

 Block25:
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
// CUISkillEffectChange::Draw
_SUB_EXCEPTION_HANDLER(3924C0)
__SUB_CLASS_THIS(003924C0, __thiscall, 54667,  CUISkillEffectChange, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3924C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x60]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x60]
	push 0
	push ecx
	call get_basic_font
	add esp,8
	mov dword ptr [esp+0x58],0
	mov dword ptr [esp+0x10],0
	lea edx,[esp+0x14]
	push 0x1A15
	push edx
	mov byte ptr [esp+0x60],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x9C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x64],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x58],1
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
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
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x5C],3
	call edi
	lea eax,[esp+0x20]
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
	mov eax,dword ptr [esp+0x60]
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x24]
	push edx
	mov edx,dword ptr [esp+0x18]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,4
	push edx
	mov byte ptr [esp+0x6C],bl
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x24]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x6C],5
	call CWnd::GetCanvas
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x68],6
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	push 0x70
	push 0x1B
	mov byte ptr [esp+0x70],7
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x58],bl
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov ebx,8
	mov byte ptr [esp+0x58],3
	cmp word ptr [esp+0x20],bx
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
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov byte ptr [esp+0x58],1
	cmp word ptr [esp+0x30],bx
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block18:
	lea ecx,[esp+0x40]
	push ecx
	call edi
	lea edx,[esp+0x40]
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
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x5C],8
	call edi
	lea ecx,[esp+0x20]
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
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x5C],9
	call edi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	mov eax,dword ptr [esp+0x60]
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push eax
	mov eax,dword ptr [esi+0xA0]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x6C],0xA
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esi+0xA0]
	push 0x81
	lea ecx,[esp+0x44]
	push ecx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0xB
	push eax
	mov byte ptr [esp+0x78],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x74],0xC
	test ecx,ecx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov byte ptr [esp+0x74],bl
	call IWzFont::CalcTextWidth
	lea edx,[esp+0x28]
	push edx
	mov ecx,esi
	mov edi,eax
	call CWnd::GetCanvas
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x6C],0xD
	test ecx,ecx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	shr edi,1
	mov eax,0x46
	sub eax,edi
	push eax
	mov byte ptr [esp+0x70],0xE
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x58],0xA
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	mov esi,8
	mov byte ptr [esp+0x58],9
	cmp word ptr [esp+0x30],si
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [esp+0x58],8
	cmp word ptr [esp+0x20],si
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov byte ptr [esp+0x58],1
	cmp word ptr [esp+0x40],si
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x58],0
	test eax,eax
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	test eax,eax
	je Block46

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block46:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x4C
	ret 4
}
}
// CUISendMemo::OnCreate
_SUB_EXCEPTION_HANDLER(382CF0)
__SUB_CLASS_THIS(00382CF0, __thiscall, 53886,  CUISendMemo, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_382CF0
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
	lea edi,[esi+0xB8]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	mov eax,dword ptr [esi+0x24]
	push ebx
	push 6
	sub eax,0x16
	push eax
	push 2
	push offset _S_UIBASICIMGBTCLOS__1
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],ebx
	je Block2

 Block1:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block2:
	push ebx
	push ebx
	push ebx
	push 1
	push offset _S_UIUIWINDOW2IMGME__19
	lea edx,[esp+0x28]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],ebx
	je Block4

 Block3:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block4:
	push ebx
	push ebx
	push ebx
	push 2
	push offset _S_UIUIWINDOW2IMGME__18
	lea eax,[esp+0x28]
	push eax
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],ebx
	je Block6

 Block5:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block6:
	lea ecx,[esp+0x1C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	or ecx,0xFFFFFFFF
	mov dword ptr [esp+0x24],ecx
	mov dword ptr [esp+0x40],ecx
	lea ecx,[esp+0x14]
	xor eax,eax
	xor edx,edx
	push 0x1A25
	mov edi,1
	push ecx
	mov dword ptr [esp+0x68],ebx
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x30],edx
	mov dword ptr [esp+0x34],edi
	mov dword ptr [esp+0x40],0xFF555555
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov edi,eax
	lea edx,[esp+0x30]
	cmp edx,edi
	je Block11

 Block7:
	mov ecx,dword ptr [esp+0x30]
	cmp ecx,ebx
	je Block9

 Block8:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x30],ebx

 Block9:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x30],edi
	cmp edi,ebx
	je Block11

 Block10:
	add edi,8
	push edi
	call ebp

 Block11:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	je Block13

 Block12:
	call _xbstr_t::Data_t::Release

 Block13:
	push offset _S_
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x38],0xB
	mov dword ptr [esp+0x50],0xC
	call ZXString<char>::AssignCStr
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x60],1
	cmp eax,ebx
	je Block15

 Block14:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block16

 Block15:
	xor eax,eax

 Block16:
	mov byte ptr [esp+0x60],bl
	cmp eax,ebx
	je Block24

 Block17:
	add eax,8
	cmp eax,ebx
	je Block24

 Block18:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block20

 Block19:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block20:
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block22

 Block21:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block22:
	mov ecx,dword ptr [esi+0xAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x1C]
	push eax
	push 0xD
	push 0x96
	push 0x45
	push 0x1F
	push 0x3E8
	push esi
	call edx
	push offset _S_
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x50],0xC8
	call ZXString<char>::AssignCStr
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x60],2
	cmp eax,ebx
	je Block25

 Block23:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block26

 Block24:
	xor edi,edi
	jmp Block20

 Block25:
	xor eax,eax

 Block26:
	mov byte ptr [esp+0x60],bl
	cmp eax,ebx
	je Block33

 Block27:
	add eax,8
	cmp eax,ebx
	je Block33

 Block28:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block30

 Block29:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block30:
	mov eax,dword ptr [esi+0xB4]
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block32

 Block31:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block32:
	mov ecx,dword ptr [esi+0xB4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x1C]
	push eax
	push 0xD
	push 0xEA
	push 0x79
	push 0xF
	push 0x3E9
	push esi
	call edx
	mov eax,dword ptr [esi+0xAC]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
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

 Block33:
	xor edi,edi
	jmp Block30
}
}
// CSpeakerWorldDlgEx::OnCreate
_SUB_EXCEPTION_HANDLER(398450)
__SUB_CLASS_THIS(00398450, __thiscall, 54002,  CSpeakerWorldDlgEx, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_398450
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebp,ebp
	push ebp
	push ebp
	lea edi,[esi+0xDC]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	lea eax,[esp+0x14]
	push 0x198E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push ebp
	push 1
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0xB0],ebp
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x1C],ebp
	je Block2

 Block1:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],ebp

 Block2:
	mov eax,dword ptr [esp+0x14]
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x98],ebx
	cmp eax,ebp
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	lea edx,[esp+0x14]
	push 0x198D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push ebp
	push 2
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0xB0],1
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x1C],ebp
	je Block6

 Block5:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],ebp

 Block6:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x98],ebx
	cmp eax,ebp
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	lea ecx,[esp+0x14]
	push 0x19E2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push ebp
	push 0x3ED
	push eax
	lea edx,[esp+0x2C]
	push edx
	mov ecx,edi
	mov dword ptr [esp+0xB0],2
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x1C],ebp
	je Block10

 Block9:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],ebp

 Block10:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x98],ebx
	cmp eax,ebp
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block12:
	lea eax,[esp+0x14]
	push 0x19E1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push ebp
	push 0x3EC
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0xB0],3
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x1C],ebp
	je Block14

 Block13:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],ebp

 Block14:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x98],ebx
	cmp eax,ebp
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block16:
	lea ecx,[esp+0x54]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x9C],4
	mov dword ptr [esp+0x7C],ebx
	mov dword ptr [esp+0x74],0xFF000000
	mov dword ptr [esp+0x88],0x3C
	mov dword ptr [esp+0x5C],2
	mov dword ptr [esp+0x60],ebp
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x98],5
	cmp eax,ebp
	je Block18

 Block17:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block19

 Block18:
	xor eax,eax

 Block19:
	mov byte ptr [esp+0x98],4
	cmp eax,ebp
	je Block27

 Block20:
	add eax,8
	cmp eax,ebp
	je Block27

 Block21:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block23

 Block22:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block23:
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebp
	je Block25

 Block24:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block25:
	mov ecx,dword ptr [esi+0x9C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x54]
	push edx
	push 0x10
	push 0x171
	push 0x3C
	push 0xE
	push 0x3E9
	push esi
	call eax
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x98],6
	cmp eax,ebp
	je Block28

 Block26:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block29

 Block27:
	xor edi,edi
	jmp Block23

 Block28:
	xor eax,eax

 Block29:
	mov byte ptr [esp+0x98],4
	cmp eax,ebp
	je Block37

 Block30:
	add eax,8
	cmp eax,ebp
	je Block37

 Block31:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block33

 Block32:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block33:
	mov eax,dword ptr [esi+0xA4]
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebp
	je Block35

 Block34:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block35:
	mov ecx,dword ptr [esi+0xA4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x54]
	push eax
	push 0x10
	push 0x171
	push 0x50
	push 0xE
	push 0x3EA
	push esi
	call edx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x98],7
	cmp eax,ebp
	je Block38

 Block36:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block39

 Block37:
	xor edi,edi
	jmp Block33

 Block38:
	xor eax,eax

 Block39:
	mov byte ptr [esp+0x98],4
	cmp eax,ebp
	je Block47

 Block40:
	add eax,8
	cmp eax,ebp
	je Block47

 Block41:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block43

 Block42:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block43:
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebp
	je Block45

 Block44:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block45:
	mov ecx,dword ptr [esi+0xAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x54]
	push eax
	push 0x10
	push 0x171
	push 0x64
	push 0xE
	push 0x3EB
	push esi
	call edx
	mov eax,dword ptr [esi+0x9C]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	lea ecx,[esp+0x20]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	mov eax,0xE
	mov bl,8
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x9C],bl
	mov dword ptr [esp+0x28],ebp
	mov dword ptr [esp+0x40],eax
	mov dword ptr [esp+0x44],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x98],9
	cmp eax,ebp
	je Block48

 Block46:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block49

 Block47:
	xor edi,edi
	jmp Block43

 Block48:
	xor eax,eax

 Block49:
	mov byte ptr [esp+0x98],bl
	cmp eax,ebp
	je Block60

 Block50:
	add eax,8
	cmp eax,ebp
	je Block60

 Block51:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block53

 Block52:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block53:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebp
	je Block55

 Block54:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block55:
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0x7E
	push 0xE
	push 0x3E8
	push esi
	call edx
	mov ecx,dword ptr [esi+0x94]
	push 1
	call CCtrlCheckBox::SetChecked
	mov ecx,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x98],4
	cmp ecx,ebp
	je Block57

 Block56:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x2C],ebp

 Block57:
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block59:
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret 4

 Block60:
	xor edi,edi
	jmp Block53
}
}
// CUISendGifts::OnCreate
_SUB_EXCEPTION_HANDLER(3993D0)
__SUB_CLASS_THIS(003993D0, __thiscall, 54051,  CUISendGifts, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3993D0
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
	mov ebp,ecx
	lea eax,[esp+0x14]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea esi,[ebp+0x114]
	push esi
	push eax
	mov dword ptr [esp+0x4C],0
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	or ebx,0xFFFFFFFF
	add esp,0xC
	mov dword ptr [esp+0x40],ebx
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0x14]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[ebp+0x110]
	push edi
	push eax
	mov dword ptr [esp+0x4C],1
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0x40],ebx
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	lea edx,[esp+0x14]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[ebp+0x118]
	push 0
	push ecx
	push eax
	mov dword ptr [esp+0x4C],2
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0x40],ebx
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
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
	lea edx,[esp+0x18]
	push edx
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	mov ebx,3
	push eax
	mov dword ptr [esp+0x58],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x50],4
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov byte ptr [esp+0x50],bl
	call IWzFont::Create
	cmp word ptr [esp+0x18],8
	mov dword ptr [esp+0x40],0xFFFFFFFF
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x18]
	push eax
	call esi
	lea ecx,[esp+0x18]
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
	lea edx,[esp+0x18]
	push edx
	push 0xFF000000
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	mov ebx,5
	push eax
	mov dword ptr [esp+0x58],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x50],6
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov byte ptr [esp+0x50],bl
	call IWzFont::Create
	mov edi,8
	mov dword ptr [esp+0x40],0xFFFFFFFF
	cmp word ptr [esp+0x18],di
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	lea eax,[esp+0x28]
	push eax
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	lea edx,[esp+0x28]
	push edx
	push 0xFF909090
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	mov ebx,7
	push eax
	mov dword ptr [esp+0x58],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x118]
	mov byte ptr [esp+0x50],8
	test ecx,ecx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov byte ptr [esp+0x50],bl
	call IWzFont::Create
	mov dword ptr [esp+0x40],0xFFFFFFFF
	cmp word ptr [esp+0x28],di
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov ecx,ebp
	call CUISendGifts::SetLayer
	mov ecx,ebp
	call CUISendGifts::SetCtrl
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 4
}
}
// CUITransferWorldLicenseNotice::SetBirthDate
__SUB_CLASS_THIS(0037F3D0, __thiscall, 54541,  CUITransferWorldLicenseNotice, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0xBC],eax
	ret 4
}
}
// CSpeakerWorldDlgEx::GetResult
_SUB_EXCEPTION_HANDLER(386F70)
__SUB_CLASS_THIS(00386F70, __thiscall, 54004,  CSpeakerWorldDlgEx, void, ZXString<char>&, ZXString<char>&, ZXString<char>&, int32_t&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_386F70
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
	mov ecx,dword ptr [esi+0x9C]
	lea eax,[esp+8]
	push eax
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esp+0x1C]
	push eax
	mov dword ptr [esp+0x18],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esi+0xA4]
	lea edx,[esp+0x1C]
	push edx
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esp+0x20]
	push eax
	mov dword ptr [esp+0x18],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esi+0xAC]
	lea eax,[esp+0x20]
	push eax
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esp+0x24]
	push eax
	mov dword ptr [esp+0x18],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [ecx+0x48]
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [eax],edx
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0x10
}
}
// CMatchTableDlg::Draw
_SUB_EXCEPTION_HANDLER(397D20)
__SUB_CLASS_THIS(00397D20, __thiscall, 53961,  CMatchTableDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_397D20
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
	mov eax,dword ptr [esp+0x64]
	push eax
	call CWnd::Draw
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push ecx
	call esi
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[esp+0x14]
	push eax
	mov dword ptr [esp+0x60],0
	call esi
	lea ecx,[esp+0x14]
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
	mov ecx,dword ptr [edi+0x3FC]
	mov byte ptr [esp+0x5C],1
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x18]
	push eax
	push 0x22
	push 0xC
	call IWzVector2D::RelMove
	mov ebp,8
	mov byte ptr [esp+0x5C],0
	cmp word ptr [esp+0x14],bp
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x24],bp
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	lea edx,[esp+0x14]
	push edx
	call esi
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	lea ecx,[esp+0x24]
	mov ebx,2
	push ecx
	mov dword ptr [esp+0x60],ebx
	call esi
	lea edx,[esp+0x24]
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
	mov ecx,dword ptr [edi+0x404]
	mov byte ptr [esp+0x5C],3
	test ecx,ecx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea eax,[esp+0x14]
	push eax
	lea edx,[esp+0x28]
	push edx
	push 4
	push 0xA
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x24],bp
	jne Block27

 Block21:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block23:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block24:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x14],bp
	jne Block28

 Block25:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block29

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block27:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x24]
	push ecx
	call ebx
	jmp Block24

 Block28:
	lea eax,[esp+0x14]
	push eax
	call ebx

 Block29:
	lea ecx,[esp+0x14]
	push ecx
	call esi
	lea edx,[esp+0x14]
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
	lea eax,[esp+0x24]
	push eax
	mov dword ptr [esp+0x60],4
	call esi
	lea ecx,[esp+0x24]
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
	mov ecx,dword ptr [edi+0x408]
	mov byte ptr [esp+0x5C],5
	test ecx,ecx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 4
	push 0xA
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x5C],4
	cmp word ptr [esp+0x24],bp
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea edx,[esp+0x24]
	push edx
	call ebx

 Block39:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x14],bp
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea ecx,[esp+0x14]
	push ecx
	call ebx

 Block43:
	lea edx,[esp+0x44]
	push edx
	call esi
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	lea ecx,[esp+0x34]
	mov ebx,6
	push ecx
	mov dword ptr [esp+0x60],ebx
	call esi
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	mov ecx,dword ptr [edi+0x400]
	mov byte ptr [esp+0x5C],7
	test ecx,ecx
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	lea eax,[esp+0x44]
	push eax
	lea edx,[esp+0x38]
	push edx
	push 0xFFFFFFFA
	push 0xA
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x34],bp
	jne Block52

 Block50:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x44],bp
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov ecx,edi
	call CMatchTableDlg::DrawLine
	mov ecx,edi
	call CMatchTableDlg::DrawStateA
	mov ecx,edi
	call CMatchTableDlg::DrawCharacterName
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
// CUITransferWorldSelectDlg::Draw
_SUB_EXCEPTION_HANDLER(3943D0)
__SUB_CLASS_THIS(003943D0, __thiscall, 54561,  CUITransferWorldSelectDlg, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3943D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [ebp+8]
	push eax
	call CWnd::Draw
	lea ecx,[edi+0x9C]
	push ecx
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call ZXString<char>::op_assign
	push 0x5F
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x18],esp
	push 1
	push edx
	mov dword ptr [ebp-4],0
	call get_basic_font
	lea eax,[ebp-0x14]
	add esp,8
	push eax
	call format_string_1
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[ebp-0x2C]
	push ecx
	call esi
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[ebp-0x3C]
	push eax
	mov byte ptr [ebp-4],1
	call esi
	lea ecx,[ebp-0x3C]
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
	mov edx,dword ptr [ebp-0x14]
	push 0
	push 0
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	mov byte ptr [ebp-4],2
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	lea eax,[ebp-0x2C]
	push eax
	lea ecx,[ebp-0x3C]
	push ecx
	lea edx,[ebp-0x18]
	push 1
	push edx
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [ebp-0x14]
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],3
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x40],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x1C]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],4
	call CWnd::GetCanvas
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],5
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	push 0x21
	push 0x69
	mov byte ptr [ebp-4],6
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block8:
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x3C],si
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[ebp-0x3C]
	push ecx
	call edi

 Block14:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x2C],si
	jne Block17

 Block15:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[ebp-0x2C]
	push eax
	call edi

 Block18:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	lea esp,[ebp-0x4C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	mov ecx,dword ptr [ebp-0x10]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CUIInitialQuiz::SetValues
_SUB_EXCEPTION_HANDLER(3816C0)
__SUB_CLASS_THIS(003816C0, __thiscall, 54355,  CUIInitialQuiz, void, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3816C0
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
	lea ecx,[esi+0xAC]
	mov dword ptr [esp+0x14],2
	call ZXString<char>::op_assign
	lea ecx,[esp+0x1C]
	push ecx
	lea ecx,[esi+0xB0]
	call ZXString<char>::op_assign
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esi+0xB4]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x28]
	lea ecx,[eax+eax]
	lea eax,[edx+edx]
	mov dword ptr [esi+0xB8],ecx
	mov dword ptr [esi+0xBC],eax
	call dword ptr [ZImports::_timeGetTime]
	add eax,dword ptr [esp+0x2C]
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xC0],eax
	call CWnd::InvalidateRect
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
	ret 0x18
}
}
// CUISkillEffectChange::~CUISkillEffectChange
_SUB_EXCEPTION_HANDLER(380020)
__SUB_CLASS_THIS0(00380020, __thiscall, 54665,  CUISkillEffectChange, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_380020
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
	int 3// TODO: 	mov dword ptr [esi],offset CUISkillEffectChange::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUISkillEffectChange::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUISkillEffectChange::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esp+0x18],2
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	cmp dword ptr [esi+0x98],0
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x18],1
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	mov ecx,esi
	mov dword ptr [TSingleton<CUISkillEffectChange>::ms_pInstance],0
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CUIClaimPreNotice::OnButtonClicked
__SUB_CLASS_THIS(0037F060, __thiscall, 53827,  CUIClaimPreNotice, void, uint32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,edx
	sub eax,0x3E8
	je Block4

 Block1:
	sub eax,1
	je Block3

 Block2:
	mov dword ptr [esp+4],edx
	jmp  CDialog::OnButtonClicked

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],0x3E9
	jmp edx

 Block4:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],0x3E8
	jmp edx
}
}
// CUIAdminAntiMacro::SetValues
_SUB_EXCEPTION_HANDLER(37FA70)
__SUB_CLASS_THIS(0037FA70, __thiscall, 54289,  CUIAdminAntiMacro, void, NakedParam<_x_com_ptr<IWzCanvas>>, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_37FA70
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x14],0
	call dword ptr [ZImports::_timeGetTime]
	add eax,dword ptr [esp+0x20]
	mov dword ptr [esi+0xA4],eax
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esi+0xAC],eax
	mov edi,dword ptr [esi+0xB0]
	mov eax,dword ptr [esp+0x1C]
	cmp edi,eax
	je Block5

 Block1:
	mov dword ptr [esi+0xB0],eax
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
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block7:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 0xC
}
}
// CSpeakerWorldDlgEx::CSpeakerWorldDlgEx
_SUB_EXCEPTION_HANDLER(386CC0)
__SUB_CLASS_THIS(00386CC0, __thiscall, 53999,  CSpeakerWorldDlgEx, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_386CC0
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
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CSpeakerWorldDlgEx::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CSpeakerWorldDlgEx::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CSpeakerWorldDlgEx::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD4],edi
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esi+0xD8],eax
	mov dword ptr [esi+0xDC],edi
	mov dword ptr [esi+0xE0],edi
	mov dword ptr [esi+0xE4],edi
	mov dword ptr [esi+0xE8],edi
	mov dword ptr [esi+0xEC],edi
	lea ecx,[esp+0x20]
	push 0x19B3
	push ecx
	mov byte ptr [esp+0x20],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x28],0xB
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x18],0xA
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
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
// CUITransferWorldSelectDlg::OnButtonClicked
__SUB_CLASS_THIS(0037FB60, __thiscall, 54562,  CUITransferWorldSelectDlg, void, uint32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	cmp edi,0x3E8
	je Block6

 Block1:
	jbe Block4

 Block2:
	cmp edi,0x3EA
	ja Block4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 2
	call edx

 Block4:
	cmp edi,1
	jne Block7

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push edi
	mov ecx,esi
	call edx
	pop edi
	pop esi
	ret 4

 Block6:
	call CUITransferWorldSelectDlg::SetResult
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 1
	call edx
	pop edi
	pop esi
	ret 4

 Block7:
	cmp edi,2
	jne Block9

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push edi
	mov ecx,esi
	call edx
	pop edi
	pop esi
	ret 4

 Block9:
	cmp edi,8
	jne Block11

 Block10:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push edi
	mov ecx,esi
	call edx

 Block11:
	pop edi
	pop esi
	ret 4
}
}
// CUISendGifts::SetScrollBar
_SUB_EXCEPTION_HANDLER(3806A0)
__SUB_CLASS_THIS0(003806A0, __thiscall, 54050,  CUISendGifts, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3806A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x1C],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block12

 Block4:
	add eax,8
	je Block12

 Block5:
	lea edi,[eax-8]
	test edi,edi
	je Block7

 Block6:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+0xCC]
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esp+0x10],eax
	test eax,eax
	je Block9

 Block8:
	push 0
	lea ecx,[esp+0x10]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0xCC]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0x37
	push 0x34
	push 0x1B7
	push 3
	push 1
	push 0x3F0
	push esi
	call eax
	mov ecx,dword ptr [esi+0xCC]
	mov dword ptr [ecx+0x34],0x87
	mov eax,dword ptr [esi+0x108]
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [esi+0xCC]
	add eax,0xFFFFFFFE
	push eax
	call CCtrlScrollBar::SetScrollRange

 Block11:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret

 Block12:
	xor edi,edi
	jmp Block7
}
}
// CUIChangingLicenseNotice::OnChildNotify
__SUB_CLASS_THIS(0037F6B0, __thiscall, 54516,  CUIChangingLicenseNotice, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	cmp edi,0x3E8
	jne Block7

 Block1:
	cmp ebx,0x12C
	jb Block7

 Block2:
	cmp ebx,0x130
	ja Block7

 Block3:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi+0xA8]
	lea eax,[eax+eax*4]
	mov dword ptr [esi+0xB4],eax
	mov edx,dword ptr [ecx+0x38]
	mov eax,dword ptr [esi+0x98]
	cmp edx,dword ptr [esi+0xB8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	jl Block5

 Block4:
	push 1
	jmp Block6

 Block5:
	push 0

 Block6:
	call edx
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block7:
	cmp ebx,0x64
	jne Block9

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push edi
	mov ecx,esi
	call edx

 Block9:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CSlideNotice::HitTest
__SUB_CLASS_THIS(003805D0, __thiscall, 54022,  CSlideNotice, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	xor eax,eax
	ret 0xC
}
}
// CUISpeedQuiz::~CUISpeedQuiz
_SUB_EXCEPTION_HANDLER(3903A0)
__SUB_CLASS_THIS0(003903A0, __thiscall, 54384,  CUISpeedQuiz, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3903A0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUISpeedQuiz::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUISpeedQuiz::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUISpeedQuiz::`vftable'{for `ZRefCounted'}
	mov ecx,dword ptr [esi+0xB8]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],7
	cmp ecx,ebx
	je Block2

 Block1:
	call CWnd::Destroy

 Block2:
	mov eax,dword ptr [esi+0xBC]
	mov byte ptr [esp+0x1C],6
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea edi,[esi+0xB4]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CDialog>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xAC]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xA4]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	mov ecx,esi
	mov dword ptr [TSingleton<CUISpeedQuiz>::ms_pInstance],ebx
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
// CUIAvatarMegaphone::GetText
_SUB_EXCEPTION_HANDLER(394D10)
__SUB_CLASS_THIS(00394D10, __thiscall, 54629,  CUIAvatarMegaphone, void, ZXString<char>&, ZXString<char>&, ZXString<char>&, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_394D10
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
	mov ecx,dword ptr [esi+0xB4]
	xor eax,eax
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x38],eax
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x40],eax
	mov dword ptr [esp+0x44],eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x30],eax
	mov eax,dword ptr [ecx+0x44]
	test eax,eax
	jne Block2

 Block1:
	xor edi,edi
	jmp Block4

 Block2:
	mov edi,dword ptr [eax-4]
	cmp edi,5
	jle Block4

 Block3:
	mov edi,5

 Block4:
	xor eax,eax
	or ebp,0xFFFFFFFF
	test edi,edi
	jle Block13

 Block5:
	test eax,eax
	jne Block9

 Block6:
	mov dword ptr [esp+0x34],eax
	cmp edi,1
	jne Block8

 Block7:
	mov dword ptr [esp+0x20],ebp
	jmp Block12

 Block8:
	mov edx,dword ptr [ecx+0x44]
	mov edx,dword ptr [edx+4]
	mov dword ptr [esp+0x20],edx
	jmp Block12

 Block9:
	lea edx,[edi-1]
	cmp eax,edx
	jne Block11

 Block10:
	mov edx,dword ptr [ecx+0x44]
	mov edx,dword ptr [edx+eax*4]
	mov dword ptr [esp+eax*4+0x34],edx
	mov dword ptr [esp+eax*4+0x20],ebp
	jmp Block12

 Block11:
	mov edx,ecx
	mov ebx,dword ptr [edx+0x44]
	mov edx,dword ptr [edx+0x44]
	mov ebx,dword ptr [ebx+eax*4]
	mov edx,dword ptr [edx+eax*4+4]
	mov dword ptr [esp+eax*4+0x34],ebx
	mov dword ptr [esp+eax*4+0x20],edx

 Block12:
	inc eax
	cmp eax,edi
	jl Block5

 Block13:
	lea eax,[esp+0x18]
	push eax
	call CCtrlMLEdit::GetText
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x34]
	push ecx
	push edx
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,eax
	mov dword ptr [esp+0x5C],0
	call ZXString<char>::Substring
	mov ecx,dword ptr [esp+0x58]
	push eax
	mov byte ptr [esp+0x54],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x50],0
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x50],ebp
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov ecx,dword ptr [esi+0xB4]
	lea edx,[esp+0x18]
	push edx
	call CCtrlMLEdit::GetText
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x38]
	push ecx
	push edx
	lea ecx,[esp+0x60]
	push ecx
	mov ebx,2
	mov ecx,eax
	mov dword ptr [esp+0x5C],ebx
	call ZXString<char>::Substring
	mov ecx,dword ptr [esp+0x5C]
	push eax
	mov byte ptr [esp+0x54],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x50],bl
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x50],ebp
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov ecx,dword ptr [esi+0xB4]
	lea edx,[esp+0x5C]
	push edx
	call CCtrlMLEdit::GetText
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x3C]
	push ecx
	push edx
	lea ecx,[esp+0x60]
	push ecx
	mov ebx,4
	mov ecx,eax
	mov dword ptr [esp+0x5C],ebx
	call ZXString<char>::Substring
	mov ecx,dword ptr [esp+0x60]
	push eax
	mov byte ptr [esp+0x54],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x50],bl
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x50],ebp
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov ecx,dword ptr [esi+0xB4]
	lea edx,[esp+0x1C]
	push edx
	call CCtrlMLEdit::GetText
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x40]
	push ecx
	push edx
	lea ecx,[esp+0x68]
	push ecx
	mov ebx,6
	mov ecx,eax
	mov dword ptr [esp+0x5C],ebx
	call ZXString<char>::Substring
	mov ecx,dword ptr [esp+0x64]
	push eax
	mov byte ptr [esp+0x54],7
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x50],bl
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x50],ebp
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 0x10
}
}
// CUIChangingCharacterName::SetBirthDate
__SUB_CLASS_THIS(0037F2F0, __thiscall, 54480,  CUIChangingCharacterName, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0xC0],eax
	ret 4
}
}
// CSpeakerWorldDlg::OnCreate
_SUB_EXCEPTION_HANDLER(398110)
__SUB_CLASS_THIS(00398110, __thiscall, 53982,  CSpeakerWorldDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_398110
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebp,ebp
	push ebp
	push ebp
	lea edi,[esi+0xBC]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	lea eax,[esp+0x14]
	push 0x1995
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push ebp
	push 1
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0xB0],ebp
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x1C],ebp
	je Block2

 Block1:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],ebp

 Block2:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	cmp eax,ebp
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	lea edx,[esp+0x14]
	push 0x1994
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push ebp
	mov ebx,2
	push ebx
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0xB0],1
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x1C],ebp
	je Block6

 Block5:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],ebp

 Block6:
	mov eax,dword ptr [esp+0x14]
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0x98],edi
	cmp eax,ebp
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	lea ecx,[esp+0x54]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x9C],ebx
	mov dword ptr [esp+0x7C],edi
	mov dword ptr [esp+0x74],0xFF000000
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x98],3
	cmp eax,ebp
	je Block10

 Block9:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	mov byte ptr [esp+0x98],2
	cmp eax,ebp
	je Block19

 Block12:
	add eax,8
	cmp eax,ebp
	je Block19

 Block13:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block15

 Block14:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block15:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebp
	je Block17

 Block16:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block17:
	mov ecx,dword ptr [esi+0xA0]
	lea eax,[esp+0x54]
	push eax
	push 0xF
	push 0x16F
	push 0x37
	mov edi,0xE
	push edi
	mov dword ptr [esp+0x98],0x3C
	mov dword ptr [esp+0x6C],ebx
	mov dword ptr [esp+0x70],ebp
	mov dword ptr [esp+0x74],ebx
	mov dword ptr [esp+0x78],ebx
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	push 0x3E9
	push esi
	call edx
	mov eax,dword ptr [esi+0xA0]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	lea ecx,[esp+0x20]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	mov bl,4
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x9C],bl
	mov dword ptr [esp+0x28],ebp
	mov dword ptr [esp+0x40],edi
	mov dword ptr [esp+0x44],edi
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x98],5
	cmp eax,ebp
	je Block20

 Block18:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block21

 Block19:
	xor edi,edi
	jmp Block15

 Block20:
	xor eax,eax

 Block21:
	mov byte ptr [esp+0x98],bl
	cmp eax,ebp
	je Block34

 Block22:
	add eax,8
	cmp eax,ebp
	je Block34

 Block23:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block25

 Block24:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block25:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebp
	je Block27

 Block26:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block27:
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0x51
	push 0xB
	push 0x3E8
	push esi
	call edx
	mov ecx,dword ptr [esi+0x94]
	push 1
	call CCtrlCheckBox::SetChecked
	cmp dword ptr [esi+0x98],ebp
	jne Block29

 Block28:
	mov ecx,dword ptr [esi+0x94]
	push ebp
	call CCtrlCheckBox::SetChecked
	mov esi,dword ptr [esi+0x94]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x1C]
	lea ecx,[esi+4]
	push ebp
	call edx

 Block29:
	mov ecx,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x98],2
	cmp ecx,ebp
	je Block31

 Block30:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x2C],ebp

 Block31:
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret 4

 Block34:
	xor edi,edi
	jmp Block25
}
}
// CUIChangingCharacterName::~CUIChangingCharacterName
_SUB_EXCEPTION_HANDLER(380D90)
__SUB_CLASS_THIS0(00380D90, __thiscall, 54476,  CUIChangingCharacterName, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_380D90
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIChangingCharacterName::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIChangingCharacterName::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIChangingCharacterName::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xBC]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],6
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0xB8]
	mov byte ptr [esp+0x1C],5
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea edi,[esi+0xB0]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xA8]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIChangingCharacterName>::ms_pInstance],ebx
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
// CUITransferWorldLicenseNotice::~CUITransferWorldLicenseNotice
_SUB_EXCEPTION_HANDLER(39F600)
__SUB_CLASS_THIS0(0039F600, __thiscall, 54534,  CUITransferWorldLicenseNotice, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39F600
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
	int 3// TODO: 	mov dword ptr [esi],offset CUITransferWorldLicenseNotice::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUITransferWorldLicenseNotice::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUITransferWorldLicenseNotice::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB0]
	mov dword ptr [esp+0x1C],4
	call ZArray<_x_com_ptr<IWzFont>>::RemoveAll
	lea ecx,[esi+0xAC]
	mov byte ptr [esp+0x1C],3
	call ZArray<CT_INFO>::RemoveAll
	lea edi,[esi+0xA4]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
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
// CUITransferWorldLicenseNotice::OnKey
__SUB_CLASS_THIS(0037F420, __thiscall, 54537,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x1B
	je Block3

 Block1:
	cmp eax,0xD
	je Block3

 Block2:
	mov dword ptr [esp+4],eax
	jmp  CDialog::OnKey

 Block3:
	ret 8
}
}
// CUIAntiMacro::OnSetFocus
__SUB_CLASS_THIS(0038B860, __thiscall, 54255,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIInitialQuiz::SetRet
_SUB_EXCEPTION_HANDLER(39C020)
__SUB_CLASS_THIS(0039C020, __thiscall, 54353,  CUIInitialQuiz, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39C020
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov ebp,dword ptr [esp+0x30]
	xor edi,edi
	cmp ebp,2
	je Block53

 Block1:
	cmp ebp,1
	jne Block5

 Block2:
	mov ecx,dword ptr [esi+0x98]
	lea eax,[esp+0x18]
	push eax
	call CCtrlEdit::GetText
	push edi
	mov ebx,ebp
	push edi
	mov ecx,eax
	mov dword ptr [esp+0x30],edi
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [eax]
	cmp eax,edi
	je Block4

 Block3:
	cmp byte ptr [eax],0
	jne Block5

 Block4:
	mov byte ptr [esp+0x30],bl
	jmp Block6

 Block5:
	mov byte ptr [esp+0x30],0

 Block6:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test bl,1
	je Block9

 Block7:
	mov eax,dword ptr [esp+0x18]
	cmp eax,edi
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	cmp byte ptr [esp+0x30],0
	jne Block53

 Block10:
	mov ecx,dword ptr [esi+0x98]
	lea edx,[esp+0x30]
	push edx
	call CCtrlEdit::GetText
	mov ebx,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],1
	cmp ebx,edi
	je Block12

 Block11:
	mov eax,dword ptr [ebx-4]
	jmp Block13

 Block12:
	xor eax,eax

 Block13:
	cmp eax,dword ptr [esi+0xB8]
	jge Block27

 Block14:
	mov dword ptr [esp+0x14],edi
	lea eax,[esp+0x18]
	push 0xF79
	push eax
	mov byte ptr [esp+0x30],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xB8]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x34],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x28],2
	cmp eax,edi
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov ebx,dword ptr [esp+0x14]
	push edi
	push edi
	lea eax,[esi+0xA4]
	push eax
	push edi
	push ecx
	mov ebp,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ebp],edi
	cmp ebx,edi
	je Block20

 Block17:
	mov eax,ebx
	lea edx,[eax+1]

 Block18:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block18

 Block19:
	sub eax,edx
	mov edi,eax
	push edi
	push ebx
	push 0
	push edi
	mov ecx,ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	mov ecx,ebp
	call ZXString<char>::ReleaseBuffer
	xor edi,edi

 Block20:
	call CUtilDlg::Notice
	mov esi,dword ptr [esi+0x98]
	add esp,0x14
	cmp esi,edi
	je Block22

 Block21:
	lea eax,[esi+4]
	jmp Block23

 Block22:
	xor eax,eax

 Block23:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov byte ptr [esp+0x28],1
	cmp ebx,edi
	je Block25

 Block24:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,edi
	je Block53

 Block26:
	add eax,0xFFFFFFF4
	push eax
	jmp Block52

 Block27:
	cmp ebx,edi
	je Block29

 Block28:
	mov eax,dword ptr [ebx-4]
	jmp Block30

 Block29:
	xor eax,eax

 Block30:
	cmp eax,dword ptr [esi+0xBC]
	jle Block44

 Block31:
	mov dword ptr [esp+0x14],edi
	lea ecx,[esp+0x1C]
	push 0xF7A
	mov bl,4
	push ecx
	mov byte ptr [esp+0x30],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0xBC]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x34],5
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x28],bl
	cmp eax,edi
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	mov ebx,dword ptr [esp+0x14]
	push edi
	push edi
	lea ecx,[esi+0xA4]
	push ecx
	push edi
	push ecx
	mov ebp,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ebp],edi
	cmp ebx,edi
	je Block37

 Block34:
	mov eax,ebx
	lea edx,[eax+1]

 Block35:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block35

 Block36:
	sub eax,edx
	mov edi,eax
	push edi
	push ebx
	push 0
	push edi
	mov ecx,ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	mov ecx,ebp
	call ZXString<char>::ReleaseBuffer
	xor edi,edi

 Block37:
	call CUtilDlg::Notice
	mov esi,dword ptr [esi+0x98]
	add esp,0x14
	cmp esi,edi
	je Block39

 Block38:
	lea eax,[esi+4]
	jmp Block40

 Block39:
	xor eax,eax

 Block40:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov byte ptr [esp+0x28],1
	cmp ebx,edi
	je Block42

 Block41:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block42:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,edi
	je Block53

 Block43:
	add eax,0xFFFFFFF4
	push eax
	jmp Block52

 Block44:
	push ebp
	mov ecx,esi
	call CDialog::SetRet
	cmp ebp,1
	jne Block50

 Block45:
	cmp dword ptr [esi+0xC4],edi
	jle Block50

 Block46:
	mov ecx,dword ptr [esi+0x98]
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push edx
	call CCtrlEdit::GetText
	mov ecx,esi
	call CUIInitialQuiz::SendResult
	mov ecx,dword ptr [TSingleton<CUIInitialQuiz>::ms_pInstance]
	cmp ecx,edi
	je Block49

 Block47:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIInitialQuiz>::ms_pInstance]
	cmp eax,edi
	je Block49

 Block48:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push ebp
	call edx

 Block49:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [eax+0x3FA0],edi

 Block50:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp ebx,edi
	je Block53

 Block51:
	add ebx,0xFFFFFFF4
	push ebx

 Block52:
	call ZXString<char>::_Release
	add esp,4

 Block53:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 4
}
}
// CUIInitialQuiz::OnCreate
_SUB_EXCEPTION_HANDLER(38E720)
__SUB_CLASS_THIS(0038E720, __thiscall, 54351,  CUIInitialQuiz, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38E720
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
	lea ecx,[esp+0x2C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	xor eax,eax
	mov dword ptr [esp+0x30],eax
	lea eax,[esp+0x14]
	xor ecx,ecx
	push 0x1A25
	xor ebx,ebx
	push eax
	mov dword ptr [esp+0x78],ebx
	mov dword ptr [esp+0x3C],ecx
	mov dword ptr [esp+0x58],0xFFFFFFFF
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
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x60],0x32
	mov dword ptr [esp+0x64],ebx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	mov byte ptr [esp+0x70],bl
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
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block16

 Block15:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block16:
	mov ecx,dword ptr [esi+0x98]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x2C]
	push edx
	push 0xD
	push 0x96
	push 0x9D
	push 0x6D
	push 0x3E8
	push esi
	call eax
	mov eax,dword ptr [esi+0x98]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	lea ecx,[esp+0x14]
	push 0x512
	push ecx
	mov byte ptr [esp+0x78],2
	mov dword ptr [esp+0x24],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],2
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
	mov byte ptr [esp+0x70],2
	cmp eax,ebx
	je Block31

 Block23:
	add eax,8
	cmp eax,ebx
	je Block31

 Block24:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block26

 Block25:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block26:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block28

 Block27:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block28:
	mov ecx,dword ptr [esi+0xA0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0xC7
	push 0xF1
	push 1
	push esi
	call eax
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block30:
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret 4

 Block31:
	xor edi,edi
	jmp Block26
}
}
// CUINoticePremium::SetVisible
__SUB_CLASS_THIS(0037F670, __thiscall, 72341,  CUINoticePremium, void, int32_t) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x18],0
	je Block6

 Block1:
	push esi
	mov esi,dword ptr [ecx+0x18]
	test esi,esi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov ecx,dword ptr [esp+8]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x11C]
	push ecx
	push esi
	call edx
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block5:
	pop esi

 Block6:
	ret 4
}
}
// CUIReceiveGift::SetRet
_SUB_EXCEPTION_HANDLER(38B500)
__SUB_CLASS_THIS(0038B500, __thiscall, 54231,  CUIReceiveGift, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38B500
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esp+0x24],1
	jne Block11

 Block1:
	mov ecx,dword ptr [esi+0x9C]
	lea eax,[esp+0x10]
	push eax
	call CCtrlEdit::GetText
	push 0
	push 0
	mov ecx,eax
	mov dword ptr [esp+0x24],0
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push eax
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x10],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x1C],2
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block6

 Block4:
	cmp dword ptr [eax-4],0xC8
	jle Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4

 Block6:
	push 1
	push 0
	push 1
	push 0x400
	lea ecx,[esp+0x1C]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x10]
	mov edi,eax
	call ZXString<char>::ReleaseBuffer
	test edi,edi
	jne Block9

 Block7:
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x11D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x20]
	add esp,0x14
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block14

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4

 Block9:
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esi+0xAC]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	cmp dword ptr [esi+0x84],0
	jne Block14

 Block12:
	cmp dword ptr [esi+0x14],0
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esi+0x80],eax
	mov dword ptr [esi+0x84],1
	je Block14

 Block13:
	mov ecx,esi
	call CWnd::Destroy

 Block14:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4
}
}
// CUITransferWorldSelectDlg::OnCreate
_SUB_EXCEPTION_HANDLER(39D750)
__SUB_CLASS_THIS(0039D750, __thiscall, 54560,  CUITransferWorldSelectDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39D750
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x6C
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x7C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x24],ebp
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ebp
	mov dword ptr [esp+0x20],ebp
	lea eax,[esp+0x10]
	push 0x512
	push eax
	mov dword ptr [esp+0x8C],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x88],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x84],0
	cmp eax,ebp
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
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x84],2
	cmp eax,ebp
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0x84],0
	cmp eax,ebp
	je Block15

 Block6:
	add eax,8
	cmp eax,ebp
	je Block15

 Block7:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block9

 Block8:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [esi+0xA8]
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebp
	je Block11

 Block10:
	push ebp
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0xA8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebp
	push 0x4D
	push 0x6B
	push 0x3E8
	push esi
	call edx
	lea eax,[esp+0x10]
	push 0x513
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x88],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x84],0
	cmp eax,ebp
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
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x84],4
	cmp eax,ebp
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
	mov byte ptr [esp+0x84],0
	cmp eax,ebp
	je Block27

 Block18:
	add eax,8
	cmp eax,ebp
	je Block27

 Block19:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block21

 Block20:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block21:
	mov eax,dword ptr [esi+0xB0]
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebp
	je Block23

 Block22:
	push ebp
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [esi+0xB0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebp
	push 0x4D
	push 0x9C
	push 0x3E9
	push esi
	call edx
	lea eax,[esp+0x10]
	push 0x1A71
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x88],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x84],0
	cmp eax,ebp
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
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x84],6
	cmp eax,ebp
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
	mov byte ptr [esp+0x84],0
	cmp eax,ebp
	je Block37

 Block30:
	add eax,8
	cmp eax,ebp
	je Block37

 Block31:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block33

 Block32:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block33:
	mov eax,dword ptr [esi+0xB8]
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebp
	je Block35

 Block34:
	push ebp
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block35:
	mov ecx,dword ptr [esi+0xB8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebp
	push 6
	push 0xBE
	push 0x3EA
	push esi
	call edx
	lea ecx,[esp+0x28]
	call CCtrlComboBox::CREATEPARAM::_ctor_default
	mov eax,0x4C
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x88],7
	mov dword ptr [esp+0x2C],0xFFEEEEEE
	mov dword ptr [esp+0x30],0xFFA5A198
	mov dword ptr [esp+0x34],0xFF999999
	mov dword ptr [esp+0x58],eax
	mov dword ptr [esp+0x5C],eax
	mov dword ptr [esp+0x60],eax
	mov dword ptr [esp+0x64],eax
	mov dword ptr [esp+0x7C],0xFFFFFFFE
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x84],8
	cmp eax,ebp
	je Block38

 Block36:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block39

 Block37:
	xor edi,edi
	jmp Block33

 Block38:
	xor eax,eax

 Block39:
	mov byte ptr [esp+0x84],7
	cmp eax,ebp
	je Block49

 Block40:
	add eax,8
	cmp eax,ebp
	je Block49

 Block41:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block43

 Block42:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block43:
	mov eax,dword ptr [esi+0xC0]
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebp
	je Block45

 Block44:
	push ebp
	lea ecx,[esp+0x14]
	call ZRef<CCtrlComboBox>::_ReleaseRaw

 Block45:
	mov ecx,dword ptr [esi+0xC0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push 0x11
	push 0x64
	push 0x32
	push 0x67
	push ebp
	push 0x3EB
	push esi
	call edx
	xor edi,edi
	lea esp,[esp]

 Block46:
	mov ecx,dword ptr [esi+0x94]
	mov eax,dword ptr [ecx+0x530]
	cmp eax,ebp
	je Block50

 Block47:
	cmp edi,dword ptr [eax-4]
	jae Block50

 Block48:
	mov ecx,dword ptr [eax+edi*4]
	push edi
	push ecx
	mov ecx,dword ptr [esi+0xC0]
	call CCtrlComboBox::AddItem
	inc edi
	jmp Block46

 Block49:
	xor edi,edi
	jmp Block43

 Block50:
	mov edx,dword ptr [esi+0xA0]
	mov ecx,dword ptr [esi+0xC0]
	push edx
	call CCtrlComboBox::SetSelect
	mov eax,dword ptr [esi+0xC0]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x84],0
	cmp eax,ebp
	je Block59

 Block51:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebp
	jne Block58

 Block52:
	cmp esi,ebp
	je Block58

 Block53:
	mov eax,dword ptr [esi]
	cmp eax,ebp
	je Block55

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block55:
	mov eax,dword ptr [esi+4]
	cmp eax,ebp
	je Block57

 Block56:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block57:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block58:
	mov dword ptr [esp+0x74],ebp

 Block59:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	cmp eax,ebp
	je Block61

 Block60:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block61:
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x78
	ret 4
}
}
// CUIClaim::SetRet
_SUB_EXCEPTION_HANDLER(395D40)
__SUB_CLASS_THIS(00395D40, __thiscall, 53846,  CUIClaim, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_395D40
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
	cmp dword ptr [esp+0x44],1
	jne Block20

 Block1:
	mov eax,dword ptr [esi+0x94]
	cmp dword ptr [eax+0x68],0
	jg Block3

 Block2:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x58],esp
	push 0xD67
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block23

 Block3:
	mov ecx,dword ptr [esi+0xBC]
	lea edx,[esp+0x30]
	push edx
	call CCtrlEdit::GetText
	mov edi,eax
	mov ecx,dword ptr [esi+0xB4]
	lea eax,[esp+0x2C]
	push eax
	mov dword ptr [esp+0x40],0
	call CCtrlEdit::GetText
	mov ebp,eax
	mov ecx,dword ptr [esi+0xAC]
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x40],1
	call CCtrlEdit::GetText
	mov ebx,eax
	mov ecx,dword ptr [esi+0xA4]
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],2
	call CCtrlEdit::GetText
	mov dword ptr [esp+0x14],eax
	push 0
	push 0
	mov ecx,ebx
	mov byte ptr [esp+0x44],3
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov ecx,dword ptr [esp+0x14]
	push 0
	push 0
	mov ebx,eax
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push ebx
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,eax
	call ZXString<char>::op_add_1
	mov ebx,eax
	push 0
	push 0
	mov ecx,ebp
	mov byte ptr [esp+0x44],4
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push eax
	lea edx,[esp+0x20]
	push edx
	mov ecx,ebx
	call ZXString<char>::op_add_1
	mov ebp,eax
	push 0
	mov bl,5
	push 0
	mov ecx,edi
	mov byte ptr [esp+0x44],bl
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebp
	call ZXString<char>::op_add_1
	lea edi,[esi+0xC4]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x40],6
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x3C],bl
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x3C],4
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x3C],3
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x3C],2
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x3C],1
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x3C],0
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov edi,dword ptr [edi]
	test edi,edi
	je Block19

 Block18:
	cmp byte ptr [edi],0
	jne Block20

 Block19:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	push 0xD62
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block23

 Block20:
	cmp dword ptr [esi+0x84],0
	jne Block23

 Block21:
	cmp dword ptr [esi+0x14],0
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [esi+0x80],edx
	mov dword ptr [esi+0x84],1
	je Block23

 Block22:
	mov ecx,esi
	call CWnd::Destroy

 Block23:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 4
}
}
// CUISendMemo::SetRet
_SUB_EXCEPTION_HANDLER(395FD0)
__SUB_CLASS_THIS(00395FD0, __thiscall, 53888,  CUISendMemo, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_395FD0
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
	xor ebx,ebx
	cmp dword ptr [esp+0x2C],1
	jne Block27

 Block1:
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x14],ebx
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x2C],1
	call CUISendMemo::GetResult
	push ebx
	push ebx
	lea ecx,[esp+0x20]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push ebx
	push ebx
	lea ecx,[esp+0x1C]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	je Block31

 Block2:
	mov eax,dword ptr [eax-4]
	cmp eax,4
	jl Block31

 Block3:
	cmp eax,0xC
	jg Block31

 Block4:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [edx+0x20CC]
	cmp eax,ebx
	je Block6

 Block5:
	add eax,4
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jne Block12

 Block8:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0xABF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,ebx
	je Block30

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block30

 Block12:
	push 1
	push ebx
	push 1
	push 0x400
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	or ebp,0xFFFFFFFF
	push ebp
	lea ecx,[esp+0x18]
	mov edi,eax
	call ZXString<char>::ReleaseBuffer
	cmp edi,ebx
	jne Block18

 Block13:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x11D
	push ecx

 Block14:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x24],ebp
	cmp eax,ebx
	je Block30

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block30

 Block18:
	lea ecx,[esp+0x14]
	call ZXString<char>::IsEmpty
	test eax,eax
	je Block20

 Block19:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1A5B
	push edx
	jmp Block14

 Block20:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block23

 Block21:
	cmp dword ptr [eax-4],0xC8
	jle Block23

 Block22:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0xA84
	push eax
	jmp Block14

 Block23:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi+0xAC]
	push edx
	call CCtrlEdit::SetText
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0xB4]
	push eax
	call CCtrlEdit::SetText
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x24],ebp
	cmp eax,ebx
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	cmp dword ptr [esi+0x84],ebx
	jne Block30

 Block28:
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [esi+0x80],edx
	mov dword ptr [esi+0x84],1
	cmp dword ptr [esi+0x14],ebx
	je Block30

 Block29:
	mov ecx,esi
	call CWnd::Destroy

 Block30:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 4

 Block31:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0xABE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,ebx
	je Block30

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block30
}
}
// CUIAvatarMegaphone::IsCheckWhisper
__SUB_CLASS_THIS0(0037F7E0, __thiscall, 54630,  CUIAvatarMegaphone, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xAC]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax+0x48]
	ret

 Block2:
	xor eax,eax
	ret
}
}
// CUIAntiMacro::Draw
_SUB_EXCEPTION_HANDLER(38BB30)
__SUB_CLASS_THIS(0038BB30, __thiscall, 54253,  CUIAntiMacro, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38BB30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x5C
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
	mov dword ptr [ebp-0x64],ebx
	mov eax,dword ptr [ebp+8]
	push eax
	call CWnd::Draw
	call dword ptr [ZImports::_timeGetTime]
	sub eax,dword ptr [ebx+0xA4]
	mov edi,0
	js Block2

 Block1:
	mov dword ptr [ebx+0xA8],edi

 Block2:
	mov dword ptr [ebp-0x38],edi
	lea ecx,[ebp-0x50]
	push ecx
	mov ecx,ebx
	mov dword ptr [ebp-4],edi
	call CWnd::GetCanvas
	mov ecx,dword ptr [ebx+0xA8]
	mov eax,0x88888889
	imul ecx
	add edx,ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	push eax
	lea ecx,[ebp-0x38]
	push offset _S_UIUIWINDOW2IMGMA__13
	push ecx
	mov byte ptr [ebp-4],1
	call ZXString<char>::Format
	mov edx,3
	add esp,0xC
	mov word ptr [ebp-0x24],dx
	mov dword ptr [ebp-0x1C],0xFF
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x34]
	push eax
	mov byte ptr [ebp-4],2
	call esi
	lea ecx,[ebp-0x34]
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
	lea edx,[ebp-0x4C]
	push edx
	mov byte ptr [ebp-4],3
	call esi
	lea eax,[ebp-0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov edi,dword ptr [ebp-0x38]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],4
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea ecx,[ebp-0x34]
	push ecx
	lea edx,[ebp-0x4C]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x3C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],5
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[ebp-0x60]
	mov byte ptr [ebp-4],4
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov edi,dword ptr [ebp-0x50]
	mov byte ptr [ebp-4],7
	test edi,edi
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	mov edx,dword ptr [ebp-0x24]
	mov esi,dword ptr [ebp-0x14]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x20]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x1C]
	push esi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x18]
	push 0x27
	push 0x5F
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push edi
	call eax
	test eax,eax
	jge Block15

 Block14:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block15:
	mov byte ptr [ebp-4],6
	test esi,esi
	je Block17

 Block16:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block17:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x60],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp-0x60]
	push ecx
	call esi

 Block21:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x4C],di
	jne Block24

 Block22:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea eax,[ebp-0x4C]
	push eax
	call esi

 Block25:
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x34],di
	jne Block28

 Block26:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea edx,[ebp-0x34]
	push edx
	call esi

 Block29:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],di
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[ebp-0x24]
	push ecx
	call esi

 Block33:
	mov ecx,dword ptr [ebx+0xA8]
	mov eax,0x88888889
	imul ecx
	add edx,ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cdq
	mov ecx,0xA
	idiv ecx
	push edx
	lea edx,[ebp-0x38]
	push offset _S_UIUIWINDOW2IMGMA__13
	push edx
	call ZXString<char>::Format
	mov eax,3
	add esp,0xC
	mov word ptr [ebp-0x24],ax
	mov dword ptr [ebp-0x1C],0xFF
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x4C]
	push ecx
	mov byte ptr [ebp-4],8
	call esi
	lea edx,[ebp-0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	lea eax,[ebp-0x34]
	push eax
	mov byte ptr [ebp-4],9
	call esi
	lea ecx,[ebp-0x34]
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
	mov edi,dword ptr [ebp-0x38]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],0xA
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea edx,[ebp-0x4C]
	push edx
	lea eax,[ebp-0x34]
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x3C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xB
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea ecx,[ebp-0x60]
	push ecx
	mov byte ptr [ebp-4],0xA
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov bl,0xC
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block42

 Block40:
	cmp eax,0x80004002
	je Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	mov ecx,dword ptr [ebp-0x24]
	mov esi,dword ptr [ebp-0x14]
	mov edi,dword ptr [ebp-0x50]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x20]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0x1C]
	push esi
	push 0x27
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x18]
	push 0x73
	push edi
	mov byte ptr [ebp-4],0xD
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block44

 Block43:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block44:
	mov byte ptr [ebp-4],bl
	test esi,esi
	je Block46

 Block45:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block46:
	mov edi,8
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x60],di
	jne Block53

 Block47:
	mov eax,dword ptr [ebp-0x58]
	xor edx,edx
	mov word ptr [ebp-0x60],dx
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block49:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block50:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x34],di
	jne Block54

 Block51:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block55

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block53:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x60]
	push eax
	call esi
	jmp Block50

 Block54:
	lea edx,[ebp-0x34]
	push edx
	call esi

 Block55:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x4C],di
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[ebp-0x4C]
	push ecx
	call esi

 Block59:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],di
	jne Block62

 Block60:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[ebp-0x24]
	push eax
	call esi

 Block63:
	lea ecx,[ebp-0x38]
	push offset _S_UIUIWINDOW2IMGMA__12
	push ecx
	call ZXString<char>::Format
	mov edx,3
	add esp,8
	mov word ptr [ebp-0x24],dx
	mov dword ptr [ebp-0x1C],0xFF
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x4C]
	push eax
	mov byte ptr [ebp-4],0xE
	call esi
	lea ecx,[ebp-0x4C]
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
	lea edx,[ebp-0x34]
	push edx
	mov byte ptr [ebp-4],0xF
	call esi
	lea eax,[ebp-0x34]
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
	mov edi,dword ptr [ebp-0x38]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	mov bl,0x10
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea ecx,[ebp-0x4C]
	push ecx
	lea edx,[ebp-0x34]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x3C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x11
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea eax,[ebp-0x60]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x12
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
	mov edx,dword ptr [ebp-0x24]
	mov esi,dword ptr [ebp-0x14]
	mov edi,dword ptr [ebp-0x50]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x20]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x1C]
	push esi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x18]
	push 0x27
	push 0x89
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push edi
	mov byte ptr [ebp-4],0x13
	call eax
	test eax,eax
	jge Block74

 Block73:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block74:
	mov byte ptr [ebp-4],0x12
	test esi,esi
	je Block76

 Block75:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block76:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x60],di
	jne Block83

 Block77:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block79

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block79:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block80:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x34],di
	jne Block84

 Block81:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block85

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block83:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x60]
	push ecx
	call esi
	jmp Block80

 Block84:
	lea eax,[ebp-0x34]
	push eax
	call esi

 Block85:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x4C],di
	jne Block88

 Block86:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea edx,[ebp-0x4C]
	push edx
	call esi

 Block89:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],di
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea ecx,[ebp-0x24]
	push ecx
	call esi

 Block93:
	mov edx,dword ptr [ebp-0x64]
	mov eax,dword ptr [edx+0xA8]
	cdq
	mov ecx,0x3C
	idiv ecx
	mov eax,0x66666667
	lea ecx,[ebp-0x38]
	imul edx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	push eax
	push offset _S_UIUIWINDOW2IMGMA__13
	push ecx
	call ZXString<char>::Format
	mov edx,3
	add esp,0xC
	mov word ptr [ebp-0x24],dx
	mov dword ptr [ebp-0x1C],0xFF
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x4C]
	push eax
	mov byte ptr [ebp-4],0x14
	call esi
	lea ecx,[ebp-0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	lea edx,[ebp-0x34]
	push edx
	mov byte ptr [ebp-4],0x15
	call esi
	lea eax,[ebp-0x34]
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
	mov edi,dword ptr [ebp-0x38]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	mov bl,0x16
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea ecx,[ebp-0x4C]
	push ecx
	lea edx,[ebp-0x34]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x3C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x17
	jne Block99

 Block98:
	push 0x80004003
	call _com_issue_error

 Block99:
	lea eax,[ebp-0x60]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x18
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block102

 Block100:
	cmp eax,0x80004002
	je Block102

 Block101:
	push eax
	call _com_issue_error

 Block102:
	mov edx,dword ptr [ebp-0x24]
	mov esi,dword ptr [ebp-0x14]
	mov edi,dword ptr [ebp-0x50]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x20]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x1C]
	push esi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x18]
	push 0x27
	push 0x93
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push edi
	mov byte ptr [ebp-4],0x19
	call eax
	test eax,eax
	jge Block104

 Block103:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block104:
	mov byte ptr [ebp-4],0x18
	test esi,esi
	je Block106

 Block105:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block106:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x60],di
	jne Block113

 Block107:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block109

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block109:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block110:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp-0x34],di
	jne Block114

 Block111:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block115

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block113:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x60]
	push ecx
	call esi
	jmp Block110

 Block114:
	lea eax,[ebp-0x34]
	push eax
	call esi

 Block115:
	mov byte ptr [ebp-4],0x14
	cmp word ptr [ebp-0x4C],di
	jne Block118

 Block116:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea edx,[ebp-0x4C]
	push edx
	call esi

 Block119:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],di
	jne Block122

 Block120:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea ecx,[ebp-0x24]
	push ecx
	call esi

 Block123:
	mov edx,dword ptr [ebp-0x64]
	mov eax,dword ptr [edx+0xA8]
	cdq
	mov ecx,0x3C
	idiv ecx
	mov ecx,0xA
	mov eax,edx
	cdq
	idiv ecx
	push edx
	lea edx,[ebp-0x38]
	push offset _S_UIUIWINDOW2IMGMA__13
	push edx
	call ZXString<char>::Format
	mov eax,3
	add esp,0xC
	mov word ptr [ebp-0x24],ax
	mov dword ptr [ebp-0x1C],0xFF
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x4C]
	push ecx
	mov byte ptr [ebp-4],0x1A
	call esi
	lea edx,[ebp-0x4C]
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
	lea eax,[ebp-0x34]
	push eax
	mov byte ptr [ebp-4],0x1B
	call esi
	lea ecx,[ebp-0x34]
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
	mov edi,dword ptr [ebp-0x38]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	mov bl,0x1C
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea edx,[ebp-0x4C]
	push edx
	lea eax,[ebp-0x34]
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x3C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x1D
	jne Block129

 Block128:
	push 0x80004003
	call _com_issue_error

 Block129:
	lea ecx,[ebp-0x60]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block132

 Block130:
	cmp eax,0x80004002
	je Block132

 Block131:
	push eax
	call _com_issue_error

 Block132:
	mov ecx,dword ptr [ebp-0x24]
	mov esi,dword ptr [ebp-0x14]
	mov edi,dword ptr [ebp-0x50]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x20]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0x1C]
	push esi
	push 0x27
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x18]
	push 0xA7
	push edi
	mov byte ptr [ebp-4],0x1F
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block134

 Block133:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block134:
	mov byte ptr [ebp-4],0x1E
	test esi,esi
	je Block136

 Block135:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block136:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x60],di
	jne Block143

 Block137:
	mov eax,dword ptr [ebp-0x58]
	xor edx,edx
	mov word ptr [ebp-0x60],dx
	test eax,eax
	je Block139

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block139:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block140:
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp-0x34],di
	jne Block144

 Block141:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block145

 Block142:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block143:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x60]
	push eax
	call esi
	jmp Block140

 Block144:
	lea edx,[ebp-0x34]
	push edx
	call esi

 Block145:
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp-0x4C],di
	jne Block148

 Block146:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block149

 Block147:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block149

 Block148:
	lea ecx,[ebp-0x4C]
	push ecx
	call esi

 Block149:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],di
	jne Block152

 Block150:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block153

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block153

 Block152:
	lea eax,[ebp-0x24]
	push eax
	call esi

 Block153:
	mov dword ptr [ebp-0x14],0
	lea ecx,[ebp-0x3C]
	push 0x1A15
	push ecx
	mov byte ptr [ebp-4],0x20
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp-0x64]
	mov eax,dword ptr [eax]
	xor edx,edx
	cmp dword ptr [ecx+0xAC],edx
	mov byte ptr [ebp-4],0x21
	setne dl
	inc edx
	push edx
	push eax
	lea edx,[ebp-0x14]
	push edx
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x3C]
	add esp,0xC
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block155

 Block154:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block155:
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
	jge Block157

 Block156:
	push eax
	call _com_issue_error

 Block157:
	lea edx,[ebp-0x34]
	push edx
	mov byte ptr [ebp-4],0x22
	call esi
	lea eax,[ebp-0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block159

 Block158:
	push eax
	call _com_issue_error

 Block159:
	lea ecx,[ebp-0x4C]
	push ecx
	lea edx,[ebp-0x34]
	push edx
	lea eax,[ebp-0x3C]
	push 0x22
	push eax
	mov byte ptr [ebp-4],0x23
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [ebp-0x14]
	push eax
	push ecx
	mov dword ptr [ebp-0x68],esp
	mov ecx,esp
	mov bl,0x24
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [ebp-0x50]
	push 0xCE
	mov byte ptr [ebp-4],0x25
	push 0xDE
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x3C]
	mov byte ptr [ebp-4],0x23
	test eax,eax
	je Block161

 Block160:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block161:
	mov esi,8
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp-0x34],si
	jne Block164

 Block162:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block165

 Block163:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block165

 Block164:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block165:
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp-0x4C],si
	jne Block168

 Block166:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	test eax,eax
	je Block169

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block169

 Block168:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block169:
	mov esi,dword ptr [ebp-0x64]
	cmp dword ptr [esi+0xB0],0
	je Block180

 Block170:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block172

 Block171:
	push eax
	call _com_issue_error

 Block172:
	lea eax,[ebp-0x3C]
	mov bl,0x26
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call CWnd::GetCanvas
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [esi+0xB0]
	mov byte ptr [ebp-4],0x27
	test ecx,ecx
	jne Block174

 Block173:
	push 0x80004003
	call _com_issue_error

 Block174:
	lea eax,[ebp-0x34]
	push eax
	push edx
	push 0x7A
	push 0x28
	call IWzCanvas::Copy
	mov eax,dword ptr [ebp-0x3C]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block176

 Block175:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block176:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],0x20
	jne Block179

 Block177:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block180

 Block178:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block180

 Block179:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block180:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block182

 Block181:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block182:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],0
	call eax
	mov eax,dword ptr [ebp-0x38]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block184

 Block183:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block184:
	lea esp,[ebp-0x78]
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
// CUIWeddingInvitation::OnCreate
_SUB_EXCEPTION_HANDLER(391DC0)
__SUB_CLASS_THIS(00391DC0, __thiscall, 54418,  CUIWeddingInvitation, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_391DC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x10]
	push 0x19CE
	push eax
	mov dword ptr [esp+0x38],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x34],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x30],bl
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
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x30],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block14

 Block6:
	lea edi,[eax+8]
	cmp edi,ebx
	je Block14

 Block7:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block9

 Block8:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0xA0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0xCE
	push 0x57
	push 1
	push esi
	call edx
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret 4

 Block14:
	xor edi,edi
	jmp Block9
}
}
// CUISendGifts::GetMemberIDFromPoint
__SUB_CLASS_THIS(0037F920, __thiscall, 54058,  CUISendGifts, unsigned long, long, long, long, int32_t) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0xC]
	push esi
	push edi
	xor edi,edi
	xor ebx,ebx
	mov esi,ecx
	cmp dword ptr [esp+0x20],edi
	je Block6

 Block1:
	mov eax,dword ptr [esi+0xFC]
	test eax,eax
	je Block11

 Block2:
	cmp ebx,dword ptr [eax-4]
	jae Block11

 Block3:
	mov ecx,dword ptr [esp+0x18]
	push ecx
	add eax,edi
	push ebp
	add eax,8
	push eax
	call PtInRect
	test eax,eax
	jne Block5

 Block4:
	inc ebx
	add edi,0x18
	jmp Block1

 Block5:
	mov ecx,dword ptr [esi+0xFC]
	pop edi
	pop esi
	lea eax,[ebx+ebx*2]
	mov eax,dword ptr [ecx+eax*8]
	pop ebp
	pop ebx
	ret 0x10

 Block6:
	mov eax,dword ptr [esi+0x100]
	test eax,eax
	je Block11

 Block7:
	cmp ebx,dword ptr [eax-4]
	jae Block11

 Block8:
	mov ecx,dword ptr [esp+0x18]
	push ecx
	add eax,edi
	push ebp
	add eax,8
	push eax
	call PtInRect
	test eax,eax
	jne Block10

 Block9:
	inc ebx
	add edi,0x18
	jmp Block6

 Block10:
	mov eax,dword ptr [esi+0x100]
	pop edi
	pop esi
	lea edx,[ebx+ebx*2]
	mov eax,dword ptr [eax+edx*8]
	pop ebp
	pop ebx
	ret 0x10

 Block11:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret 0x10
}
}
// CUIAntiMacro::OnCreate
_SUB_EXCEPTION_HANDLER(38B980)
__SUB_CLASS_THIS(0038B980, __thiscall, 54252,  CUIAntiMacro, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38B980
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
	lea ebp,[esi+0xB4]
	push esi
	mov ecx,ebp
	call CLayoutMan::Init
	lea ecx,[esp+0x1C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea eax,[esp+0x14]
	push 0x1A25
	push eax
	mov dword ptr [esp+0x68],ebx
	mov dword ptr [esp+0x48],ebx
	mov dword ptr [esp+0x40],0xFF000000
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea ecx,[esp+0x30]
	cmp ecx,edi
	je Block5

 Block1:
	mov ecx,dword ptr [esp+0x30]
	cmp ecx,ebx
	je Block3

 Block2:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x30],ebx

 Block3:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x30],edi
	cmp edi,ebx
	je Block5

 Block4:
	add edi,8
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	je Block7

 Block6:
	call _xbstr_t::Data_t::Release

 Block7:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x50],0xC
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x60],1
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	mov byte ptr [esp+0x60],bl
	cmp eax,ebx
	je Block19

 Block11:
	add eax,8
	cmp eax,ebx
	je Block19

 Block12:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block14

 Block13:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block16

 Block15:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block16:
	mov ecx,dword ptr [esi+0x98]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x1C]
	push edx
	push 0x10
	push 0xC2
	push 0xBD
	push 0x2A
	push 0x3E8
	push esi
	call eax
	push ebx
	push ebx
	push ebx
	push 1
	push offset _S_UIUIWINDOW2IMGMA__11
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebp
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],ebx
	je Block18

 Block17:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x18],ebx

 Block18:
	mov eax,dword ptr [esi+0x98]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
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

 Block19:
	xor edi,edi
	jmp Block14
}
}
// CUIWeddingInvitation::CUIWeddingInvitation
_SUB_EXCEPTION_HANDLER(3817B0)
__SUB_CLASS_THIS(003817B0, __thiscall, 54415,  CUIWeddingInvitation, void, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3817B0
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
	mov dword ptr [esp+0x14],esi
	mov dword ptr [esp+0xC],0
	mov dword ptr [esp+0x20],1
	call CDialog::_ctor_default
	lea eax,[esp+0x28]
	lea ecx,[esi+0x90]
	int 3// TODO: 	mov dword ptr [esi],offset CUIWeddingInvitation::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIWeddingInvitation::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIWeddingInvitation::`vftable'{for `ZRefCounted'}
	push eax
	mov byte ptr [esp+0x24],2
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea edx,[esp+0x2C]
	lea ecx,[esi+0x94]
	push edx
	mov byte ptr [esp+0x24],3
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esi+0x98],eax
	mov dword ptr [esi+0xA0],0
	mov byte ptr [esp+0x20],5
	cmp eax,2
	jne Block2

 Block1:
	lea eax,[esp+0x10]
	push 0xEB0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x20],6
	mov ebx,1
	jmp Block3

 Block2:
	lea ecx,[esp+0x30]
	push 0xEAF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x20],7
	mov ebx,2

 Block3:
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 1
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x1C],ebx
	call CDialog::CreateDlg_2
	mov dword ptr [esp+0x20],6
	test bl,2
	je Block6

 Block4:
	mov eax,dword ptr [esp+0x30]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0xC],ebx
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov dword ptr [esp+0x20],5
	test bl,1
	je Block9

 Block7:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block9:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x18
	ret 0xC
}
}
// CSpeakerWorldDlg::Draw
__SUB_CLASS_THIS(0037F190, __thiscall, 53983,  CSpeakerWorldDlg, void, const tagRECT*) {
__asm {

 Block0:
	mov dword ptr [esp+4],0
	jmp  CWnd::Draw
}
}
// CUISpeedQuiz::OnButtonClicked
__SUB_CLASS_THIS(0037F2B0, __thiscall, 54386,  CUISpeedQuiz, void, uint32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,edx
	sub eax,0x3E9
	je Block4

 Block1:
	sub eax,1
	je Block3

 Block2:
	mov dword ptr [esp+4],edx
	jmp  CDialog::OnButtonClicked

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],0x3EA
	jmp edx

 Block4:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],0x3E9
	jmp edx
}
}
// CUIClaim::OnCreate
_SUB_EXCEPTION_HANDLER(3953E0)
__SUB_CLASS_THIS(003953E0, __thiscall, 53845,  CUIClaim, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3953E0
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
	mov esi,ecx
	xor ebx,ebx
	push ebx
	push ebx
	lea ecx,[esi+0xCC]
	push esi
	mov dword ptr [esp+0x28],ecx
	call CLayoutMan::Init
	lea ecx,[esp+0x60]
	call CCtrlComboBox::CREATEPARAM::_ctor_default
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0xC0],ebx
	mov dword ptr [esp+0x64],0xFFEEEEEE
	mov dword ptr [esp+0x68],0xFFA5A198
	mov dword ptr [esp+0x6C],0xFF999999
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xBC],1
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0xBC],bl
	cmp eax,ebx
	je Block13

 Block4:
	add eax,8
	cmp eax,ebx
	je Block13

 Block5:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block7

 Block6:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block7:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlComboBox>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x60]
	push eax
	push 0x11
	push 0x90
	push 0x8F
	push 0x6F
	push ebx
	push ebx
	push esi
	call edx
	xor edi,edi

 Block10:
	mov eax,dword ptr [esi+0xC0]
	cmp eax,ebx
	je Block14

 Block11:
	cmp edi,dword ptr [eax-4]
	jae Block14

 Block12:
	mov ecx,dword ptr [esi+0xC0]
	mov edx,dword ptr [ecx+edi*4]
	mov ecx,dword ptr [esi+0x94]
	lea eax,[edi+0x3E8]
	push eax
	push edx
	call CCtrlComboBox::AddItem
	inc edi
	jmp Block10

 Block13:
	xor edi,edi
	jmp Block7

 Block14:
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xBC],2
	cmp eax,ebx
	je Block16

 Block15:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block17

 Block16:
	xor eax,eax

 Block17:
	mov byte ptr [esp+0xBC],bl
	cmp eax,ebx
	je Block37

 Block18:
	add eax,8
	cmp eax,ebx
	je Block37

 Block19:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block21

 Block20:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block21:
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x9C],edi
	cmp eax,ebx
	je Block25

 Block22:
	lea edi,[eax+8]
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block25

 Block23:
	lea edx,[edi+4]
	push edx
	call ebp
	cmp edi,ebx
	je Block25

 Block24:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block25:
	mov ecx,dword ptr [esi+0x9C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x60]
	push edx
	push 0x11
	push 0x90
	push 0xA3
	push 0x6F
	push ebx
	push 1
	push esi
	call eax
	lea ecx,[esp+0x14]
	cmp dword ptr [esi+0xC8],ebx
	je Block38

 Block26:
	push 0xD4F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x9C]
	push 3
	push eax
	mov byte ptr [esp+0xC4],3
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xBC],bl
	cmp eax,ebx
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	lea edx,[esp+0x14]
	push 0x1A22
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x9C]
	push 4
	push eax
	mov byte ptr [esp+0xC4],4
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xBC],bl
	cmp eax,ebx
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	lea eax,[esp+0x14]
	push 0xD50
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x9C]
	push 5
	push eax
	mov byte ptr [esp+0xC4],5
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xBC],bl
	cmp eax,ebx
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	lea ecx,[esp+0x14]
	push 0xD51
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x9C]
	push 6
	push eax
	mov byte ptr [esp+0xC4],6
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xBC],bl
	cmp eax,ebx
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	lea edx,[esp+0x14]
	push 0xD52
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x9C]
	push 7
	push eax
	mov byte ptr [esp+0xC4],7
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xBC],bl
	cmp eax,ebx
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	lea eax,[esp+0x14]
	push 0xD53
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0xBC],8
	push 8
	jmp Block39

 Block37:
	xor edi,edi
	jmp Block21

 Block38:
	push 0xD54
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0xBC],9
	push 9

 Block39:
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x9C]
	push eax
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xBC],bl
	cmp eax,ebx
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	lea ecx,[esp+0x24]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea edx,[esp+0x14]
	xor eax,eax
	xor ecx,ecx
	push 0x1A25
	push edx
	mov byte ptr [esp+0xC4],0xA
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x34],ecx
	mov dword ptr [esp+0x50],0xFFFFFFFF
	mov dword ptr [esp+0x48],0xFF333333
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,eax
	lea eax,[esp+0x38]
	cmp eax,ebp
	je Block53

 Block42:
	mov edi,dword ptr [esp+0x38]
	cmp edi,ebx
	je Block51

 Block43:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	jne Block50

 Block44:
	cmp edi,ebx
	je Block50

 Block45:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block47

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block47:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block49

 Block48:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block49:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block50:
	mov dword ptr [esp+0x38],ebx

 Block51:
	mov eax,dword ptr [ebp]
	mov dword ptr [esp+0x38],eax
	cmp eax,ebx
	je Block53

 Block52:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block53:
	mov edi,dword ptr [esp+0x14]
	cmp edi,ebx
	je Block61

 Block54:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	jne Block61

 Block55:
	cmp edi,ebx
	je Block61

 Block56:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block58

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block58:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block60

 Block59:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block60:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block61:
	push ebx
	push offset _S_
	push ebx
	push ebx
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x4C],0xB
	mov dword ptr [esp+0x64],0x18
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	lea ecx,[esp+0x28]
	call ZXString<char>::ReleaseBuffer
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xBC],0xB
	cmp eax,ebx
	je Block63

 Block62:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block64

 Block63:
	xor eax,eax

 Block64:
	mov byte ptr [esp+0xBC],0xA
	cmp eax,ebx
	je Block68

 Block65:
	add eax,8
	cmp eax,ebx
	je Block68

 Block66:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block69

 Block67:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	lea eax,[edi+0xC]
	push eax
	call ebp
	jmp Block70

 Block68:
	xor edi,edi

 Block69:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]

 Block70:
	mov eax,dword ptr [esi+0xA4]
	mov dword ptr [esi+0xA4],edi
	cmp eax,ebx
	je Block74

 Block71:
	lea edi,[eax+8]
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block74

 Block72:
	lea edx,[edi+4]
	push edx
	call ebp
	cmp edi,ebx
	je Block74

 Block73:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block74:
	mov ecx,dword ptr [esi+0xA4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x24]
	push edx
	push 0xC
	push 0x8E
	push 0xB8
	push 0x70
	push 0x7D0
	push esi
	call eax
	push ebx
	push offset _S_
	push ebx
	push ebx
	lea ecx,[esp+0x34]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	lea ecx,[esp+0x28]
	call ZXString<char>::ReleaseBuffer
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xBC],0xC
	cmp eax,ebx
	je Block76

 Block75:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block77

 Block76:
	xor eax,eax

 Block77:
	mov byte ptr [esp+0xBC],0xA
	cmp eax,ebx
	je Block87

 Block78:
	add eax,8
	cmp eax,ebx
	je Block87

 Block79:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block81

 Block80:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block81:
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esi+0xAC],edi
	cmp eax,ebx
	je Block85

 Block82:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block85

 Block83:
	lea eax,[edi+4]
	push eax
	call ebp
	cmp edi,ebx
	je Block85

 Block84:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block85:
	mov ecx,dword ptr [esi+0xAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x24]
	push eax
	push 0xC
	push 0x8E
	push 0xC4
	push 0x70
	push 0x7D1
	push esi
	call edx
	push ebx
	push offset _S_
	push ebx
	push ebx
	lea ecx,[esp+0x34]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	lea ecx,[esp+0x28]
	call ZXString<char>::ReleaseBuffer
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xBC],0xD
	cmp eax,ebx
	je Block88

 Block86:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block89

 Block87:
	xor edi,edi
	jmp Block81

 Block88:
	xor eax,eax

 Block89:
	mov byte ptr [esp+0xBC],0xA
	cmp eax,ebx
	je Block99

 Block90:
	add eax,8
	cmp eax,ebx
	je Block99

 Block91:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block93

 Block92:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block93:
	mov eax,dword ptr [esi+0xB4]
	mov dword ptr [esi+0xB4],edi
	cmp eax,ebx
	je Block97

 Block94:
	lea edi,[eax+8]
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block97

 Block95:
	lea edx,[edi+4]
	push edx
	call ebp
	cmp edi,ebx
	je Block97

 Block96:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block97:
	mov ecx,dword ptr [esi+0xB4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x24]
	push edx
	push 0xC
	push 0x8E
	push 0xD0
	push 0x70
	push 0x7D2
	push esi
	call eax
	push ebx
	push offset _S_
	push ebx
	push ebx
	lea ecx,[esp+0x34]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	lea ecx,[esp+0x28]
	call ZXString<char>::ReleaseBuffer
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xBC],0xE
	cmp eax,ebx
	je Block100

 Block98:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block101

 Block99:
	xor edi,edi
	jmp Block93

 Block100:
	xor eax,eax

 Block101:
	mov byte ptr [esp+0xBC],0xA
	cmp eax,ebx
	je Block113

 Block102:
	add eax,8
	cmp eax,ebx
	je Block113

 Block103:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block105

 Block104:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block105:
	mov eax,dword ptr [esi+0xBC]
	mov dword ptr [esi+0xBC],edi
	cmp eax,ebx
	je Block109

 Block106:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block109

 Block107:
	lea eax,[edi+4]
	push eax
	call ebp
	cmp edi,ebx
	je Block109

 Block108:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block109:
	mov ecx,dword ptr [esi+0xBC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x24]
	push eax
	push 0xB
	push 0x8E
	push 0xDC
	push 0x70
	push 0x7D3
	push esi
	call edx
	mov esi,dword ptr [esp+0x1C]
	push ebx
	push ebx
	push ebx
	push 1
	push offset _S_UIUIWINDOW2IMGCL__6
	lea eax,[esp+0x30]
	push eax
	mov ecx,esi
	call CLayoutMan::AddButton
	mov eax,dword ptr [esp+0x20]
	mov edi,dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	je Block118

 Block110:
	add eax,0xC
	push eax
	call edi
	test eax,eax
	jne Block118

 Block111:
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebx
	je Block114

 Block112:
	add eax,8
	jmp Block115

 Block113:
	xor edi,edi
	jmp Block105

 Block114:
	xor eax,eax

 Block115:
	add eax,4
	push eax
	call ebp
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebx
	je Block118

 Block116:
	lea ecx,[eax+8]
	cmp ecx,ebx
	je Block118

 Block117:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block118:
	push ebx
	push ebx
	push ebx
	push 2
	push offset _S_UIUIWINDOW2IMGCL__5
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,esi
	call CLayoutMan::AddButton
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	je Block127

 Block119:
	add eax,0xC
	push eax
	call edi
	test eax,eax
	jne Block126

 Block120:
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	je Block122

 Block121:
	add eax,8
	jmp Block123

 Block122:
	xor eax,eax

 Block123:
	add eax,4
	push eax
	call ebp
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	je Block126

 Block124:
	lea ecx,[eax+8]
	cmp ecx,ebx
	je Block126

 Block125:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block126:
	mov dword ptr [esp+0x18],ebx

 Block127:
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0xBC],bl
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov esi,dword ptr [esp+0xAC]
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	cmp esi,ebx
	je Block135

 Block128:
	lea ecx,[esi+8]
	push ecx
	call edi
	test eax,eax
	jne Block135

 Block129:
	cmp esi,ebx
	je Block135

 Block130:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block132

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block132:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block134

 Block133:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block134:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block135:
	mov ecx,dword ptr [esp+0xB4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xAC
	ret 4
}
}
// CUIReceiveGift::~CUIReceiveGift
_SUB_EXCEPTION_HANDLER(380B10)
__SUB_CLASS_THIS0(00380B10, __thiscall, 54228,  CUIReceiveGift, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_380B10
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIReceiveGift::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIReceiveGift::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIReceiveGift::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esp+0x18],4
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0xA8]
	mov byte ptr [esp+0x18],3
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esi+0xA4]
	mov byte ptr [esp+0x18],2
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	cmp dword ptr [esi+0x9C],0
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x18],1
	je Block8

 Block7:
	push 0
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block8:
	cmp dword ptr [esi+0x94],0
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x18],0
	je Block10

 Block9:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block10:
	mov ecx,esi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CUISendGift::SetReceiver
_SUB_EXCEPTION_HANDLER(381560)
__SUB_CLASS_THIS(00381560, __thiscall, 54212,  CUISendGift, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_381560
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
	lea ecx,[esi+0xB8]
	mov dword ptr [esp+0x14],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esi+0xA4]
	mov dword ptr [esi+0xC0],1
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	mov esi,dword ptr [esi+0xAC]
	test esi,esi
	je Block2

 Block1:
	lea eax,[esi+4]
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4
}
}
// CSlideNotice::CSlideNotice
_SUB_EXCEPTION_HANDLER(380530)
__SUB_CLASS_THIS0(00380530, __thiscall, 54018,  CSlideNotice, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_380530
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
	call CWnd::_ctor_default
	xor ecx,ecx
	lea eax,[esi+0x80]
	mov dword ptr [esp+0x14],ecx
	cmp eax,ecx
	je Block2

 Block1:
	lea edx,[eax-0x80]
	mov dword ptr [TSingleton<CSlideNotice>::ms_pInstance],edx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CSlideNotice>::ms_pInstance],ecx

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CSlideNotice::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CSlideNotice::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CSlideNotice::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax],ecx
	mov dword ptr [esi+0x84],ecx
	push 1
	push 1
	push ecx
	push 1
	push 0xA
	push 0x17
	push 0x400
	push ecx
	push 0xFFFFFE00
	mov ecx,esi
	mov byte ptr [esp+0x38],3
	call CWnd::CreateWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIAvatarMegaphone::OnCreate
_SUB_EXCEPTION_HANDLER(39E6B0)
__SUB_CLASS_THIS(0039E6B0, __thiscall, 54623,  CUIAvatarMegaphone, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39E6B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x88
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x9C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esp+0x1C]
	push 0xFAF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	xor ebx,ebx
	mov dword ptr [esp+0xA4],ebx
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x20],1
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x28],ebx
	lea ecx,[esp+0x14]
	push 0x3DA
	push ecx
	mov byte ptr [esp+0xAC],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax]
	push offset _S_BTOK__1
	push edx
	push eax
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0xB4],2
	call ZXString16::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0x10
	mov byte ptr [esp+0xA4],1
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xA4],3
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
	mov byte ptr [esp+0xA4],1
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
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block9:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x98]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push ebx
	push 0xAA
	push 0x34
	push 1
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x3DA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax]
	push offset _S_BTCANCEL__1
	push ecx
	push eax
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0xB4],4
	call ZXString16::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0x10
	mov byte ptr [esp+0xA4],1
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xA4],5
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
	mov byte ptr [esp+0xA4],1
	cmp eax,ebx
	je Block32

 Block18:
	lea edi,[eax+8]
	cmp edi,ebx
	je Block32

 Block19:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block21

 Block20:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block21:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block23

 Block22:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [esi+0xA0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push ebx
	push 0xAA
	push 0x66
	push 2
	push esi
	call edx
	lea ecx,[esp+0x30]
	call CCtrlMLEdit::CREATEPARAM::_ctor_default
	lea eax,[esp+0x14]
	push 0x1A25
	push eax
	mov byte ptr [esp+0xAC],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea ecx,[esp+0x3C]
	cmp ecx,edi
	je Block28

 Block24:
	mov ecx,dword ptr [esp+0x3C]
	cmp ecx,ebx
	je Block26

 Block25:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x3C],ebx

 Block26:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x3C],edi
	cmp edi,ebx
	je Block28

 Block27:
	add edi,8
	push edi
	call ebp

 Block28:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	je Block30

 Block29:
	call _xbstr_t::Data_t::Release

 Block30:
	push 0xCC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x44],0xF
	mov dword ptr [esp+0x64],4
	mov dword ptr [esp+0x60],0x61
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xA4],7
	cmp eax,ebx
	je Block33

 Block31:
	mov ecx,eax
	call CCtrlMLEdit::_ctor_default
	jmp Block34

 Block32:
	xor edi,edi
	jmp Block21

 Block33:
	xor eax,eax

 Block34:
	mov byte ptr [esp+0xA4],6
	cmp eax,ebx
	je Block42

 Block35:
	lea edi,[eax+8]
	cmp edi,ebx
	je Block42

 Block36:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block38

 Block37:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block38:
	mov eax,dword ptr [esi+0xB4]
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block40

 Block39:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlMLEdit>::_ReleaseRaw

 Block40:
	mov ecx,dword ptr [esi+0xB4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x30]
	push edx
	push 0x3C
	push 0x6B
	push 0x51
	push 0x30
	push ebx
	push esi
	call eax
	lea ecx,[esp+0x68]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	mov eax,0xE
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0xA8],8
	mov dword ptr [esp+0x70],ebx
	mov dword ptr [esp+0x88],eax
	mov dword ptr [esp+0x8C],eax
	mov dword ptr [esp+0x90],ebx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xA4],9
	cmp eax,ebx
	je Block43

 Block41:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block44

 Block42:
	xor edi,edi
	jmp Block38

 Block43:
	xor eax,eax

 Block44:
	mov byte ptr [esp+0xA4],8
	cmp eax,ebx
	je Block63

 Block45:
	lea edi,[eax+8]
	cmp edi,ebx
	je Block63

 Block46:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block48

 Block47:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block48:
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block50

 Block49:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block50:
	mov ecx,dword ptr [esi+0xAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x68]
	push eax
	push 0x93
	push 0xA
	push 1
	push esi
	call edx
	mov ecx,dword ptr [esi+0xAC]
	push 1
	call CCtrlCheckBox::SetChecked
	mov eax,dword ptr [esi+0xAC]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	mov eax,dword ptr [esi+0xB4]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov ecx,dword ptr [esp+0x74]
	mov byte ptr [esp+0xA4],6
	cmp ecx,ebx
	je Block52

 Block51:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x74],ebx

 Block52:
	mov eax,dword ptr [esp+0x70]
	cmp eax,ebx
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block54:
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0xA4],1
	cmp ecx,ebx
	je Block56

 Block55:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x3C],ebx

 Block56:
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebx
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block58:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xA4],bl
	cmp eax,ebx
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block60:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0xA4],0xFFFFFFFF
	cmp eax,ebx
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block62:
	mov ecx,dword ptr [esp+0x9C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x94
	ret 4

 Block63:
	xor edi,edi
	jmp Block48
}
}
// CUIChangingCharacterName::Draw
__SUB_CLASS_THIS(0037FC80, __thiscall, 54479,  CUIChangingCharacterName, void, const tagRECT*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::Draw
	lea ecx,[esp+8]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov eax,dword ptr [esp+8]
	pop esi
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	mov dword ptr [esp+4],eax
	mov eax,dword ptr [edx+8]
	jmp eax

 Block2:
	ret 4
}
}
// CUIChangingCharacterName::SetNameValues
_SUB_EXCEPTION_HANDLER(381AC0)
__SUB_CLASS_THIS(00381AC0, __thiscall, 54481,  CUIChangingCharacterName, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_381AC0
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
	lea ecx,[esi+0xBC]
	mov dword ptr [esp+0x14],0
	call ZXString<char>::op_assign
	mov esi,dword ptr [esi+0xA4]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	push 1
	call eax
	mov eax,dword ptr [esp+0x18]
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
	pop esi
	add esp,0xC
	ret 4
}
}
// CMatchTableDlg::CMatchTableDlg
_SUB_EXCEPTION_HANDLER(380210)
__SUB_CLASS_THIS(00380210, __thiscall, 53957,  CMatchTableDlg, void, CInPacket&, CField_Tournament*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_380210
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],esi
	call CDialog::_ctor_default
	push offset ZRef<CAvatar>::~ZRef<CAvatar>
	push offset ZRef<CAvatar>::_ctor_default
	push 8
	push 8
	lea eax,[esi+0x390]
	xor edi,edi
	push eax
	mov dword ptr [esp+0x30],edi
	int 3// TODO: 	mov dword ptr [esi],offset CMatchTableDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CMatchTableDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CMatchTableDlg::`vftable'{for `ZRefCounted'}
	call __eh_vector_ctor_iterator
	push offset ZXString<char>::~ZXString<char>
	push offset ZXString<char>::_ctor_default
	push 8
	push 4
	lea ecx,[esi+0x3D0]
	push ecx
	mov byte ptr [esp+0x30],1
	call __eh_vector_ctor_iterator
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [esi+0x3F4],2
	mov dword ptr [esi+0x3F8],edx
	mov dword ptr [esi+0x3FC],edi
	mov dword ptr [esi+0x400],edi
	mov dword ptr [esi+0x404],edi
	mov dword ptr [esi+0x408],edi
	mov dword ptr [esi+0x40C],edi
	mov dword ptr [esi+0x410],edi
	mov dword ptr [esi+0x414],edi
	mov dword ptr [esi+0x41C],edi
	mov dword ptr [esi+0x424],edi
	mov dword ptr [esi+0x42C],edi
	mov ebp,dword ptr [esp+0x24]
	push 0x300
	lea eax,[esi+0x90]
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x24],0xC
	call CInPacket::DecodeBuffer
	mov ecx,ebp
	call CInPacket::Decode1
	movzx ecx,al
	lea edx,[esp+0x28]
	push 0x752
	push edx
	mov dword ptr [esi+0x3F0],ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x2C],0xD
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x1C],0xC
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x10
	ret 8
}
}
// CUIHope::OnCreate
_SUB_EXCEPTION_HANDLER(3824F0)
__SUB_CLASS_THIS(003824F0, __thiscall, 53866,  CUIHope, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3824F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x54]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	push ebx
	push ebx
	lea edi,[esi+0xC4]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	push ebx
	push ebx
	push ebx
	push 1
	push offset _S_UIUIWINDOW2IMGMU__2
	lea eax,[esp+0x24]
	push eax
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x14],ebx
	je Block2

 Block1:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block2:
	push ebx
	push ebx
	push ebx
	push 2
	push offset _S_UIUIWINDOW2IMGMU__1
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x14],ebx
	je Block4

 Block3:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block4:
	lea ecx,[esp+0x18]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea edx,[esp+0x10]
	push 0x1A25
	push edx
	mov dword ptr [esp+0x64],ebx
	mov dword ptr [esp+0x44],ebx
	mov dword ptr [esp+0x3C],0xFF65280C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea eax,[esp+0x2C]
	cmp eax,edi
	je Block9

 Block5:
	mov ecx,dword ptr [esp+0x2C]
	cmp ecx,ebx
	je Block7

 Block6:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x2C],ebx

 Block7:
	mov eax,dword ptr [edi]
	mov dword ptr [esp+0x2C],eax
	cmp eax,ebx
	je Block9

 Block8:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov ecx,dword ptr [esp+0x10]
	cmp ecx,ebx
	je Block11

 Block10:
	call _xbstr_t::Data_t::Release

 Block11:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x5C],1
	cmp eax,ebx
	je Block13

 Block12:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block14

 Block13:
	xor eax,eax

 Block14:
	mov byte ptr [esp+0x5C],bl
	cmp eax,ebx
	je Block22

 Block15:
	add eax,8
	cmp eax,ebx
	je Block22

 Block16:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block18

 Block17:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block18:
	mov eax,dword ptr [esi+0xB0]
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block20

 Block19:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block20:
	push offset _S_
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x4C],0x3C
	call ZXString<char>::AssignCStr
	mov ecx,dword ptr [esi+0xB0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x18]
	push eax
	push 0x10
	push 0x13A
	push 0x39
	push 0xF
	push ebx
	push esi
	call edx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x5C],2
	cmp eax,ebx
	je Block23

 Block21:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block24

 Block22:
	xor edi,edi
	jmp Block18

 Block23:
	xor eax,eax

 Block24:
	mov byte ptr [esp+0x5C],bl
	cmp eax,ebx
	je Block32

 Block25:
	add eax,8
	cmp eax,ebx
	je Block32

 Block26:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block28

 Block27:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block28:
	mov eax,dword ptr [esi+0xB8]
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block30

 Block29:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block30:
	push offset _S_
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x4C],0x3C
	call ZXString<char>::AssignCStr
	mov ecx,dword ptr [esi+0xB8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x18]
	push eax
	push 0x10
	push 0x13A
	push 0x4A
	push 0xF
	push 1
	push esi
	call edx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x5C],3
	cmp eax,ebx
	je Block33

 Block31:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block34

 Block32:
	xor edi,edi
	jmp Block28

 Block33:
	xor eax,eax

 Block34:
	mov byte ptr [esp+0x5C],bl
	cmp eax,ebx
	je Block41

 Block35:
	add eax,8
	cmp eax,ebx
	je Block41

 Block36:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block38

 Block37:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block38:
	mov eax,dword ptr [esi+0xC0]
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block40

 Block39:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block40:
	push offset _S_
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x4C],0x3C
	call ZXString<char>::AssignCStr
	mov ecx,dword ptr [esi+0xC0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x18]
	push eax
	push 0x10
	push 0x13A
	push 0x5B
	push 0xF
	push 2
	push esi
	call edx
	mov eax,dword ptr [esi+0xB0]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x50
	ret 4

 Block41:
	xor edi,edi
	jmp Block38
}
}
// CUIMapleTV::OnKey
__SUB_CLASS_THIS(0037F450, __thiscall, 54596,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	test eax,eax
	js Block2

 Block1:
	cmp edx,0xD
	je Block3

 Block2:
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+4],edx
	jmp  CDialog::OnKey

 Block3:
	ret 8
}
}
// CUIChangingLicenseNotice::~CUIChangingLicenseNotice
_SUB_EXCEPTION_HANDLER(39F430)
__SUB_CLASS_THIS0(0039F430, __thiscall, 54510,  CUIChangingLicenseNotice, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39F430
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIChangingLicenseNotice::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIChangingLicenseNotice::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIChangingLicenseNotice::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB0]
	mov dword ptr [esp+0x1C],4
	call ZArray<_x_com_ptr<IWzFont>>::RemoveAll
	lea ecx,[esi+0xAC]
	mov byte ptr [esp+0x1C],3
	call ZArray<CT_INFO>::RemoveAll
	lea edi,[esi+0xA4]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
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
// CUIReceiveGift::Draw
_SUB_EXCEPTION_HANDLER(39AA20)
__SUB_CLASS_THIS(0039AA20, __thiscall, 54230,  CUIReceiveGift, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39AA20
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
	mov edi,ecx
	mov eax,dword ptr [esp+0x70]
	push eax
	call CWnd::Draw
	push 0
	lea esi,[edi+0xA8]
	push 0xA
	mov ecx,esi
	call ZXString<char>::Find__1
	mov ebp,eax
	push ebp
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	call ZXString<char>::Left
	mov eax,dword ptr [esi]
	mov dword ptr [esp+0x68],0
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	sub eax,ebp
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	call ZXString<char>::Right
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x6C],1
	call CWnd::GetCanvas
	mov ecx,dword ptr [edi+0xA0]
	push 2
	push 0
	push 0
	push 1
	push 0
	push 1
	push 0
	push 0x58
	push 0x1A
	push ecx
	push ecx
	mov ecx,dword ptr [esp+0x40]
	mov eax,esp
	mov byte ptr [esp+0x94],2
	mov dword ptr [esp+0x50],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block5

 Block4:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	call eax

 Block5:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov ecx,dword ptr [edi+0xA0]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esp+0x74]
	push edx
	call CItemInfo::GetItemName
	mov ecx,dword ptr [edi+0xA0]
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov byte ptr [esp+0x68],3
	cmp eax,0x38E
	jne Block8

 Block6:
	push ecx
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetSpecialName
	push eax
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0x6C],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x68],3
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	push 0x86
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 1
	push edx
	call get_basic_font
	lea eax,[esp+0x80]
	add esp,8
	push eax
	call format_string_1
	mov ebp,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[esp+0x50]
	push ecx
	call ebp
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x6C],5
	call ebp
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x6C],6
	call ebp
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	lea ecx,[esp+0x50]
	push ecx
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x2C]
	push 1
	mov bl,7
	push eax
	mov byte ptr [esp+0x78],bl
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x78]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push edx
	mov esi,8
	mov byte ptr [esp+0x7C],8
	call _xbstr_t::_ctor_0
	mov edx,dword ptr [esp+0x80]
	push 0x1A
	lea eax,[esp+0x44]
	push eax
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x88],9
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x3C]
	push 1
	push eax
	mov byte ptr [esp+0x8C],0xA
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x84],0xB
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov byte ptr [esp+0x84],0xC
	call IWzFont::CalcTextWidth
	cmp dword ptr [esp+0x28],0
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov ecx,0x86
	sub ecx,eax
	shr ecx,1
	add ecx,0x67
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x80],0xD
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x68],8
	test eax,eax
	je Block20

 Block19:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block20:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x68],bl
	test eax,eax
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block22:
	mov byte ptr [esp+0x68],6
	cmp word ptr [esp+0x30],si
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov byte ptr [esp+0x68],5
	cmp word ptr [esp+0x40],si
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov byte ptr [esp+0x68],3
	cmp word ptr [esp+0x50],si
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	lea eax,[esp+0x30]
	push eax
	call ebp
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x6C],0xE
	call ebp
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x6C],0xF
	call ebp
	lea edx,[esp+0x50]
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
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x28]
	push 4
	push edx
	mov byte ptr [esp+0x78],0x10
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [edi+0xA4]
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	mov bl,0x11
	push eax
	mov byte ptr [esp+0x7C],bl
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [edi+0xA4]
	push 0x35
	lea eax,[esp+0x64]
	push eax
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	push edi
	mov byte ptr [esp+0x88],0x12
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x40]
	push 4
	push ecx
	mov byte ptr [esp+0x8C],0x13
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x84],0x14
	test ecx,ecx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	mov byte ptr [esp+0x84],0x15
	call IWzFont::CalcTextWidth
	mov esi,dword ptr [esp+0x28]
	mov edx,0x86
	sub edx,eax
	shr edx,1
	add edx,0x67
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x80],0x16
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x68],bl
	test eax,eax
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x68],0x10
	test eax,eax
	je Block46

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block46:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x68],0xF
	jne Block53

 Block47:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block49:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block50:
	mov ebx,8
	mov byte ptr [esp+0x68],0xE
	cmp word ptr [esp+0x40],bx
	jne Block54

 Block51:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block55

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block53:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x50]
	push ecx
	call edi
	jmp Block50

 Block54:
	lea eax,[esp+0x40]
	push eax
	call edi

 Block55:
	mov byte ptr [esp+0x68],3
	cmp word ptr [esp+0x30],bx
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[esp+0x30]
	push edx
	call edi

 Block59:
	lea eax,[esp+0x40]
	push eax
	call ebp
	lea ecx,[esp+0x40]
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
	lea edx,[esp+0x50]
	push edx
	mov byte ptr [esp+0x6C],0x17
	call ebp
	lea eax,[esp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block63

 Block62:
	push eax
	call _com_issue_error

 Block63:
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x2C]
	push 0
	mov bl,0x18
	push eax
	mov byte ptr [esp+0x78],bl
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0xC57
	push ecx
	mov byte ptr [esp+0x80],0x19
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push 0x47
	mov byte ptr [esp+0x7C],0x1A
	push 0x6B
	mov ecx,esi
	mov byte ptr [esp+0x80],0x19
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x68],bl
	test eax,eax
	je Block65

 Block64:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block65:
	mov ebx,8
	mov byte ptr [esp+0x68],0x17
	cmp word ptr [esp+0x50],bx
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[esp+0x50]
	push edx
	call edi

 Block69:
	mov byte ptr [esp+0x68],3
	cmp word ptr [esp+0x40],bx
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[esp+0x40]
	push ecx
	call edi

 Block73:
	push 0xD2
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 1
	push edx
	call get_basic_font
	lea eax,[esp+0x2C]
	add esp,8
	push eax
	call format_string_1
	add esp,0xC
	push 0xD2
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 1
	push ecx
	call get_basic_font
	lea edx,[esp+0x28]
	add esp,8
	push edx
	call format_string_1
	add esp,0xC
	lea eax,[esp+0x40]
	push eax
	call ebp
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	lea edx,[esp+0x50]
	push edx
	mov byte ptr [esp+0x6C],0x1B
	call ebp
	lea eax,[esp+0x50]
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
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x2C]
	push 1
	push eax
	mov byte ptr [esp+0x78],0x1C
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x24]
	push eax
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	mov bl,0x1D
	push edx
	mov byte ptr [esp+0x7C],bl
	call _xbstr_t::_ctor_0
	push 0x69
	mov byte ptr [esp+0x7C],0x1E
	push 0x19
	mov ecx,esi
	mov byte ptr [esp+0x80],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x68],0x1C
	test eax,eax
	je Block79

 Block78:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block79:
	mov ebx,8
	mov byte ptr [esp+0x68],0x1B
	cmp word ptr [esp+0x50],bx
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[esp+0x50]
	push ecx
	call edi

 Block83:
	mov byte ptr [esp+0x68],3
	cmp word ptr [esp+0x40],bx
	jne Block86

 Block84:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea eax,[esp+0x40]
	push eax
	call edi

 Block87:
	lea ecx,[esp+0x40]
	push ecx
	call ebp
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
	lea eax,[esp+0x50]
	push eax
	mov byte ptr [esp+0x6C],0x1F
	call ebp
	lea ecx,[esp+0x50]
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
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x54]
	push eax
	lea ecx,[esp+0x2C]
	push 1
	push ecx
	mov byte ptr [esp+0x78],0x20
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	mov bl,0x21
	push edx
	mov byte ptr [esp+0x7C],bl
	call _xbstr_t::_ctor_0
	push 0x79
	mov byte ptr [esp+0x7C],0x22
	push 0x19
	mov ecx,esi
	mov byte ptr [esp+0x80],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x68],0x20
	test eax,eax
	je Block93

 Block92:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block93:
	mov ebx,8
	mov byte ptr [esp+0x68],0x1F
	cmp word ptr [esp+0x50],bx
	jne Block96

 Block94:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea ecx,[esp+0x50]
	push ecx
	call edi

 Block97:
	mov byte ptr [esp+0x68],3
	cmp word ptr [esp+0x40],bx
	jne Block100

 Block98:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea eax,[esp+0x40]
	push eax
	call edi

 Block101:
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0x68],2
	test eax,eax
	je Block103

 Block102:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block103:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0x6C],1
	call edx
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x68],0
	test eax,eax
	je Block105

 Block104:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block105:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test eax,eax
	je Block107

 Block106:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block107:
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
// CUISendGifts::SetState
_SUB_EXCEPTION_HANDLER(39F030)
__SUB_CLASS_THIS(0039F030, __thiscall, 54057,  CUISendGifts, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39F030
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x28]
	cmp dword ptr [esi+0xF8],eax
	je Block8

 Block1:
	mov ecx,dword ptr [esi+0xD4]
	mov dword ptr [esi+0xF8],eax
	lea eax,[esp+0x28]
	push eax
	call CCtrlEdit::GetText
	lea ebp,[esi+0x11C]
	push eax
	mov ecx,ebp
	mov dword ptr [esp+0x24],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0x20],edi
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	mov ecx,dword ptr [esi+0xDC]
	lea edx,[esp+0x28]
	push edx
	call CCtrlEdit::GetText
	lea ebx,[esi+0x120]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x24],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],edi
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov ecx,dword ptr [esi+0xE4]
	lea eax,[esp+0x14]
	push eax
	call CCtrlEdit::GetText
	lea edi,[esi+0x124]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x24],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov ecx,esi
	call CUISendGifts::LoadData
	mov ecx,esi
	call CUISendGifts::SetLayer
	mov ecx,esi
	call CUISendGifts::SetCtrl
	mov ecx,dword ptr [ebp]
	push ecx
	mov ecx,dword ptr [esi+0xD4]
	call CCtrlEdit::SetText
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [esi+0xDC]
	push edx
	call CCtrlEdit::SetText
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [esi+0xE4]
	push eax
	call CCtrlEdit::SetText
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov dword ptr [esi+0x10C],0

 Block8:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4
}
}
// CSpeakerWorldDlg::GetResult
_SUB_EXCEPTION_HANDLER(386C30)
__SUB_CLASS_THIS(00386C30, __thiscall, 53985,  CSpeakerWorldDlg, void, ZXString<char>&, int32_t&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_386C30
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
	mov ecx,dword ptr [esi+0xA0]
	lea eax,[esp+8]
	push eax
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esp+0x1C]
	push eax
	mov dword ptr [esp+0x18],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [ecx+0x48]
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [eax],edx
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 8
}
}
// CUIClaim::GetResult
__SUB_CLASS_THIS(00381460, __thiscall, 53849,  CUIClaim, void, ZXString<char>&, long&, ZXString<char>&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x94]
	mov eax,dword ptr [eax+0x68]
	test eax,eax
	jg Block2

 Block1:
	mov ecx,dword ptr [esp+8]
	push offset _S_
	call ZXString<char>::AssignCStr
	jmp Block3

 Block2:
	mov ecx,dword ptr [esi+0xC0]
	lea edx,[ecx+eax*4]
	mov ecx,dword ptr [esp+8]
	push edx
	call ZXString<char>::op_assign

 Block3:
	mov ecx,dword ptr [esp+0x10]
	lea eax,[esi+0xC4]
	push eax
	call ZXString<char>::op_assign
	cmp dword ptr [esi+0xC8],0
	jne Block5

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [ecx],9
	pop esi
	ret 0xC

 Block5:
	mov edx,dword ptr [esi+0x9C]
	mov eax,dword ptr [edx+0x68]
	cmp eax,5
	ja Block13

 Block6:
	cmp EAX, 0
je Block7
cmp EAX, 1
je Block8
cmp EAX, 2
je Block9
cmp EAX, 3
je Block10
cmp EAX, 4
je Block11
cmp EAX, 5
je Block12


 Block7:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [eax],1
	pop esi
	ret 0xC

 Block8:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [ecx],2
	pop esi
	ret 0xC

 Block9:
	mov edx,dword ptr [esp+0xC]
	mov dword ptr [edx],3
	pop esi
	ret 0xC

 Block10:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [eax],5
	pop esi
	ret 0xC

 Block11:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [ecx],7
	pop esi
	ret 0xC

 Block12:
	mov edx,dword ptr [esp+0xC]
	mov dword ptr [edx],8

 Block13:
	pop esi
	ret 0xC
}
}
// CUIAntiMacroNotice::~CUIAntiMacroNotice
_SUB_EXCEPTION_HANDLER(395030)
__SUB_CLASS_THIS0(00395030, __thiscall, 54332,  CUIAntiMacroNotice, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_395030
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIAntiMacroNotice::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIAntiMacroNotice::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIAntiMacroNotice::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB0]
	mov dword ptr [esp+0x18],4
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0xA4]
	mov byte ptr [esp+0x18],3
	call ZArray<ZXString<char>>::RemoveAll
	mov eax,dword ptr [esi+0xA0]
	mov byte ptr [esp+0x18],2
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	cmp dword ptr [esi+0x9C],0
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x18],1
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	cmp dword ptr [esi+0x94],0
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x18],0
	je Block6

 Block5:
	push 0
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block6:
	mov ecx,esi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CUIHope::Draw
_SUB_EXCEPTION_HANDLER(382810)
__SUB_CLASS_THIS(00382810, __thiscall, 53868,  CUIHope, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_382810
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x4C]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	lea edx,[esp+0xC]
	push 0x74E
	push edx
	mov dword ptr [esp+0x4C],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esi+0x90]
	push eax
	lea ecx,[esp+0x54]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov byte ptr [esp+0x50],1
	call CItemInfo::GetItemString
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x44],3
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push edx
	call esi
	lea eax,[esp+0x2C]
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
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x48],4
	call esi
	lea edx,[esp+0x1C]
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
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x1C]
	push 0x16
	push edx
	mov byte ptr [esp+0x54],5
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x58]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,6
	push eax
	mov byte ptr [esp+0x58],bl
	call _xbstr_t::_ctor_0
	mov esi,dword ptr [esp+0x20]
	mov byte ptr [esp+0x54],7
	test esi,esi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	push 0x15
	push 0x28
	mov ecx,esi
	mov byte ptr [esp+0x5C],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],5
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	cmp word ptr [esp+0x1C],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x44],4
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x1C]
	push ecx
	call ebx

 Block14:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x44],3
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[esp+0x2C]
	push eax
	call ebx

 Block18:
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x44],0
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x3C
	ret 4
}
}
// CUIReceiveGift::GetResult
__SUB_CLASS_THIS(00381600, __thiscall, 54232,  CUIReceiveGift, void, ZXString<char>&) {
__asm {

 Block0:
	add ecx,0xAC
	push ecx
	mov ecx,dword ptr [esp+8]
	call ZXString<char>::op_assign
	ret 4
}
}
// CUIChangingCharacterName::OnButtonClicked
_SUB_EXCEPTION_HANDLER(393260)
__SUB_CLASS_THIS(00393260, __thiscall, 54478,  CUIChangingCharacterName, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_393260
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
	mov edi,ecx
	mov eax,dword ptr [esp+0x38]
	sub eax,0x3E9
	je Block16

 Block1:
	sub eax,1
	je Block4

 Block2:
	sub eax,1
	jne Block34

 Block3:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x34]
	push 2
	call edx
	jmp Block34

 Block4:
	mov ecx,dword ptr [edi+0xB4]
	lea eax,[esp+0x38]
	push eax
	call CCtrlEdit::GetText
	lea ecx,[edi+0xBC]
	push ecx
	mov ecx,eax
	call ZXString<char>::op_eq_0
	mov esi,eax
	mov eax,dword ptr [esp+0x38]
	neg esi
	sbb esi,esi
	inc esi
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	test esi,esi
	je Block8

 Block7:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0x219
	jmp Block28

 Block8:
	mov ecx,dword ptr [edi+0xB4]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push eax
	call CCtrlEdit::GetText
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ecx+0x20CC]
	mov dword ptr [esp+0x34],1
	test eax,eax
	je Block10

 Block9:
	lea ebp,[eax+4]
	jmp Block11

 Block10:
	xor ebp,ebp

 Block11:
	push ecx
	mov ebx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ebx],0
	test ebp,ebp
	je Block15

 Block12:
	mov eax,ebp
	lea edx,[eax+1]

 Block13:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block13

 Block14:
	sub eax,edx
	mov esi,eax
	push esi
	push ebp
	push 0
	push esi
	mov ecx,ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,ebx
	call ZXString<char>::ReleaseBuffer

 Block15:
	mov edx,dword ptr [edi+0xC4]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	mov ecx,dword ptr [edi+0x94]
	push edx
	call CCashShop::SendBuyNameChangeItemPacket
	jmp Block34

 Block16:
	mov ecx,dword ptr [edi+0xB4]
	lea eax,[esp+0x14]
	push eax
	call CCtrlEdit::GetText
	lea esi,[edi+0xBC]
	push esi
	mov ecx,eax
	call ZXString<char>::op_eq_0
	mov ebx,eax
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	test ebx,ebx
	jne Block34

 Block19:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esi],ebx

 Block21:
	mov ecx,dword ptr [edi+0xB4]
	lea edx,[esp+0x18]
	push edx
	call CCtrlEdit::GetText
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edx,dword ptr [ecx+0x20CC]
	test edx,edx
	je Block23

 Block22:
	add edx,4
	jmp Block24

 Block23:
	xor edx,edx

 Block24:
	push edx
	mov ecx,eax
	call ZXString<char>::Compare
	mov esi,eax
	mov eax,dword ptr [esp+0x18]
	neg esi
	sbb esi,esi
	inc esi
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	test esi,esi
	je Block29

 Block27:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 0x218

 Block28:
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block34

 Block29:
	mov ecx,dword ptr [edi+0xB4]
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x1C]
	push eax
	call CCtrlEdit::GetText
	mov ebx,eax
	mov ecx,esi
	mov dword ptr [esp+0x30],0
	call CWvsContext::IsAdminAccount
	neg eax
	sbb eax,eax
	inc eax
	push eax
	push ebx
	call is_valid_character_name
	add esp,8
	test eax,eax
	mov eax,dword ptr [esp+0x1C]
	sete bl
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	test bl,bl
	je Block33

 Block32:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x215
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block34

 Block33:
	mov ecx,dword ptr [edi+0xB4]
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	call CCtrlEdit::GetText
	mov ecx,dword ptr [edi+0x94]
	call CCashShop::SendCheckDuplicateIDPacket

 Block34:
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
// CUISendGifts::OnKey
__SUB_CLASS_THIS(003891A0, __thiscall, 54055,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x10]
	push esi
	push edi
	mov edi,dword ptr [esp+0x1C]
	xor ebx,ebx
	mov esi,ecx
	mov dword ptr [esp+0x10],ebx
	test edi,edi
	js Block25

 Block1:
	cmp ebp,0xD
	jne Block25

 Block2:
	mov eax,dword ptr [esi+0x70]
	cmp eax,dword ptr [esi+0xD0]
	jne Block6

 Block3:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [esi+0xD8]
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	lea ebx,[ebp-0xC]
	test eax,eax
	je Block5

 Block4:
	cmp byte ptr [eax],0
	jne Block6

 Block5:
	mov byte ptr [esp+0x1C],bl
	jmp Block7

 Block6:
	mov byte ptr [esp+0x1C],0

 Block7:
	test bl,1
	je Block10

 Block8:
	mov eax,dword ptr [esp+0x18]
	and ebx,0xFFFFFFFE
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	cmp byte ptr [esp+0x1C],0
	je Block14

 Block11:
	mov esi,dword ptr [esi+0xD8]
	test esi,esi
	je Block13

 Block12:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea eax,[esi+4]
	push eax
	call CWndMan::SetFocus
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8

 Block13:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	xor eax,eax
	push eax
	call CWndMan::SetFocus
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8

 Block14:
	mov edx,dword ptr [esi+0x70]
	cmp edx,dword ptr [esi+0xD8]
	jne Block18

 Block15:
	mov ecx,dword ptr [esi+0xE0]
	lea eax,[esp+0x18]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	or ebx,2
	test eax,eax
	je Block17

 Block16:
	cmp byte ptr [eax],0
	jne Block18

 Block17:
	mov byte ptr [esp+0x1C],1
	jmp Block19

 Block18:
	mov byte ptr [esp+0x1C],0

 Block19:
	test bl,2
	je Block22

 Block20:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	cmp byte ptr [esp+0x1C],0
	je Block25

 Block23:
	mov esi,dword ptr [esi+0xE0]
	test esi,esi
	je Block13

 Block24:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea eax,[esi+4]
	push eax
	call CWndMan::SetFocus
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8

 Block25:
	push edi
	push ebp
	mov ecx,esi
	call CDialog::OnKey
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8
}
}
// CUISendGift::OnCreate
_SUB_EXCEPTION_HANDLER(38A330)
__SUB_CLASS_THIS(0038A330, __thiscall, 54207,  CUISendGift, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38A330
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x94
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xA8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x48],ebp
	mov dword ptr [esp+0x3C],1
	mov dword ptr [esp+0x40],ebp
	mov dword ptr [esp+0x44],ebp
	lea eax,[esp+0x18]
	push 0x512
	push eax
	mov dword ptr [esp+0xB8],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0xB4],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xB0],0
	cmp eax,ebp
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xB0],2
	cmp eax,ebp
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0xB0],0
	cmp eax,ebp
	je Block15

 Block6:
	add eax,8
	cmp eax,ebp
	je Block15

 Block7:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block9

 Block8:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block9:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block11

 Block10:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	push ebp
	push 0x70
	push 0xA8
	push 1
	push esi
	call edx
	lea eax,[esp+0x18]
	push 0x513
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0xB4],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xB0],0
	cmp eax,ebp
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xB0],4
	cmp eax,ebp
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
	mov byte ptr [esp+0xB0],0
	cmp eax,ebp
	je Block32

 Block18:
	add eax,8
	cmp eax,ebp
	je Block32

 Block19:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block21

 Block20:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block21:
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block23

 Block22:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [esi+0x9C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	push ebp
	push 0x70
	push 0xD2
	push 2
	push esi
	call edx
	lea ecx,[esp+0x6C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	xor eax,eax
	mov dword ptr [esp+0x70],eax
	lea eax,[esp+0x18]
	xor ecx,ecx
	push 0x1A25
	push eax
	mov byte ptr [esp+0xB8],5
	mov dword ptr [esp+0x7C],ecx
	mov dword ptr [esp+0x98],0xFFFFFFFF
	mov dword ptr [esp+0x90],0xFF000000
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea ecx,[esp+0x80]
	cmp ecx,edi
	je Block28

 Block24:
	mov ecx,dword ptr [esp+0x80]
	cmp ecx,ebp
	je Block26

 Block25:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x80],ebp

 Block26:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x80],edi
	cmp edi,ebp
	je Block28

 Block27:
	add edi,8
	push edi
	call ebx

 Block28:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,ebp
	je Block30

 Block29:
	call _xbstr_t::Data_t::Release

 Block30:
	push offset _S_
	lea ecx,[esp+0x70]
	mov dword ptr [esp+0xA0],0xC
	call ZXString<char>::AssignCStr
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xB0],6
	cmp eax,ebp
	je Block33

 Block31:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block34

 Block32:
	xor edi,edi
	jmp Block21

 Block33:
	xor eax,eax

 Block34:
	mov byte ptr [esp+0xB0],5
	cmp eax,ebp
	je Block42

 Block35:
	add eax,8
	cmp eax,ebp
	je Block42

 Block36:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block38

 Block37:
	lea edx,[edi+0xC]
	push edx
	call ebx

 Block38:
	mov eax,dword ptr [esi+0xA4]
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block40

 Block39:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block40:
	mov ecx,dword ptr [esi+0xA4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x6C]
	push edx
	push 0xD
	push 0x7A
	push 0x19
	push 0x54
	push 0x3E8
	push esi
	call eax
	mov ebx,0x22
	push offset _S_
	lea ecx,[esp+0x70]
	mov dword ptr [esp+0xA0],ebx
	call ZXString<char>::AssignCStr
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xB0],7
	cmp eax,ebp
	je Block43

 Block41:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block44

 Block42:
	xor edi,edi
	jmp Block38

 Block43:
	xor eax,eax

 Block44:
	mov byte ptr [esp+0xB0],5
	cmp eax,ebp
	je Block52

 Block45:
	add eax,8
	cmp eax,ebp
	je Block52

 Block46:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block48

 Block47:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block48:
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block50

 Block49:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block50:
	mov ecx,dword ptr [esi+0xAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x6C]
	push eax
	push 0xD
	push 0xD2
	push 0x31
	push 0x1A
	push 0x3E9
	push esi
	call edx
	push offset _S_
	lea ecx,[esp+0x70]
	mov dword ptr [esp+0xA0],ebx
	call ZXString<char>::AssignCStr
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xB0],8
	cmp eax,ebp
	je Block53

 Block51:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block54

 Block52:
	xor edi,edi
	jmp Block48

 Block53:
	xor eax,eax

 Block54:
	mov byte ptr [esp+0xB0],5
	cmp eax,ebp
	je Block62

 Block55:
	add eax,8
	cmp eax,ebp
	je Block62

 Block56:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block58

 Block57:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block58:
	mov eax,dword ptr [esi+0xB4]
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block60

 Block59:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block60:
	mov ecx,dword ptr [esi+0xB4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x6C]
	push eax
	push 0xD
	push 0xD2
	push 0x41
	push 0x1A
	push 0x3EA
	push esi
	call edx
	mov eax,dword ptr [esi+0xA4]
	push eax
	mov ecx,esi
	mov dword ptr [esi+0xC0],ebp
	call CWnd::SetFocusChild
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call ebx
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block63

 Block61:
	push eax
	call _com_issue_error

 Block62:
	xor edi,edi
	jmp Block58

 Block63:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xB4],9
	call ebx
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xB0],0xA
	cmp ecx,ebp
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x20]
	push eax
	push 2
	push 0xD
	push 0xD2
	push 0x31
	push 0x1A
	lea edx,[esp+0x34]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xC4]
	cmp edi,eax
	je Block72

 Block68:
	mov dword ptr [esi+0xC4],eax
	cmp eax,ebp
	je Block70

 Block69:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block70:
	cmp edi,ebp
	je Block72

 Block71:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block72:
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block74

 Block73:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block74:
	cmp word ptr [esp+0x1C],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0xB0],9
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea edx,[esp+0x1C]
	push edx
	call edi

 Block78:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xB0],5
	jne Block81

 Block79:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block82:
	mov edx,3
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],ebp
	mov ecx,dword ptr [esi+0xC4]
	mov byte ptr [esp+0xB0],0xB
	cmp ecx,ebp
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	lea eax,[esp+0x2C]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xB0],0xD
	jne Block87

 Block85:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block88:
	lea edx,[esp+0x4C]
	push edx
	call ebx
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block90

 Block89:
	push eax
	call _com_issue_error

 Block90:
	mov ecx,3
	mov word ptr [esp+0x5C],cx
	mov dword ptr [esp+0x64],0x37
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x60]
	push eax
	lea ecx,[esp+0x1C]
	push 1
	push ecx
	mov byte ptr [esp+0xC0],0xF
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0xC5A
	mov bl,0x10
	push edx
	mov byte ptr [esp+0xC8],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [esp+0x28]
	mov byte ptr [esp+0xC0],0x11
	test ebp,ebp
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	push 1
	push 0x1D
	mov ecx,ebp
	mov byte ptr [esp+0xC8],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xB0],0xF
	test eax,eax
	je Block94

 Block93:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block94:
	mov edi,8
	mov byte ptr [esp+0xB0],0xE
	cmp word ptr [esp+0x5C],di
	jne Block97

 Block95:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	mov byte ptr [esp+0xB0],0xD
	cmp word ptr [esp+0x4C],di
	jne Block101

 Block99:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block102:
	mov edi,dword ptr [esi+0xC4]
	test edi,edi
	jne Block104

 Block103:
	push 0x80004003
	call _com_issue_error

 Block104:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push edi
	call edx
	test eax,eax
	jge Block106

 Block105:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block106:
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x12
	mov ecx,0xD
	mov byte ptr [esp+0xB0],bl
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block108

 Block107:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block108:
	mov edi,dword ptr [esi+0xC4]
	mov byte ptr [esp+0xB0],0x13
	test edi,edi
	jne Block110

 Block109:
	push 0x80004003
	call _com_issue_error

 Block110:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push edi
	call eax
	test eax,eax
	jge Block112

 Block111:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block112:
	mov edi,8
	mov byte ptr [esp+0xB0],bl
	cmp word ptr [esp+0x1C],di
	jne Block115

 Block113:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block116:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xB0],0xD
	test eax,eax
	je Block118

 Block117:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block118:
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x14
	mov ecx,0xD
	mov byte ptr [esp+0xB0],bl
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block120

 Block119:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block120:
	mov esi,dword ptr [esi+0xC4]
	mov byte ptr [esp+0xB0],0x15
	test esi,esi
	jne Block122

 Block121:
	push 0x80004003
	call _com_issue_error

 Block122:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block124

 Block123:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block124:
	mov byte ptr [esp+0xB0],bl
	cmp word ptr [esp+0x1C],di
	jne Block127

 Block125:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block128:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xB0],0xD
	test eax,eax
	je Block130

 Block129:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block130:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0xB4],5
	call ecx
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0xB0],0
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [esp+0xB0],0xFFFFFFFF
	test eax,eax
	je Block132

 Block131:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block132:
	mov ecx,dword ptr [esp+0xA8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA0
	ret 4
}
}
// CMatchTableDlg::DrawStateA
_SUB_EXCEPTION_HANDLER(386050)
__SUB_CLASS_THIS0(00386050, __thiscall, 53959,  CMatchTableDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_386050
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
	mov edi,ecx
	xor ebp,ebp
	xor esi,esi
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x38],esi
	mov dword ptr [esp+0x14],esi
	mov eax,2
	cmp dword ptr [edi+0x3F4],eax
	jne Block29

 Block1:
	cmp dword ptr [edi+0x3F0],eax
	jl Block29

 Block2:
	mov ecx,3
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],esi
	mov ecx,dword ptr [edi+0x3FC]
	mov byte ptr [esp+0x38],al
	cmp ecx,esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov eax,dword ptr [eax]
	cmp eax,esi
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov ebp,eax
	push eax
	mov dword ptr [esp+0x1C],ebp
	call edx

 Block6:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,esi
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov esi,8
	mov bl,1
	mov byte ptr [esp+0x38],bl
	cmp word ptr [esp+0x20],si
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x75B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi+0x40C]
	mov byte ptr [esp+0x44],3
	test ecx,ecx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x48],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x40],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block17

 Block15:
	cmp eax,0x80004002
	je Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov byte ptr [esp+0x38],bl
	cmp word ptr [esp+0x20],si
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x20]
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
	mov byte ptr [esp+0x38],5
	test ebp,ebp
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov esi,dword ptr [esp+0x14]
	mov eax,5
	sub eax,dword ptr [edi+0x3F0]
	lea edx,[esp+0x20]
	imul eax,0x67
	push edx
	push esi
	push eax
	push 0
	mov ecx,ebp
	call IWzCanvas::Copy
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x38],bl
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov byte ptr [esp+0x38],0
	test esi,esi
	je Block31

 Block30:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block31:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test ebp,ebp
	je Block33

 Block32:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block33:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret
}
}
// CUITransferWorldLicenseNotice::LoadFont
_SUB_EXCEPTION_HANDLER(393BC0)
__SUB_CLASS_THIS0(00393BC0, __thiscall, 54534,  CUITransferWorldLicenseNotice, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_393BC0
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
	lea eax,[esp+0x17]
	lea edi,[ecx+0xB0]
	push eax
	push 0xA
	mov ecx,edi
	mov dword ptr [esp+0x20],edi
	call ZArray<_x_com_ptr<IWzFont>>::_Alloc
	xor ebx,ebx
	xor esi,esi

 Block1:
	lea ecx,[esp+0x20]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [edi]
	mov eax,dword ptr [eax]
	push ebx
	add edx,esi
	push edx
	push eax
	mov dword ptr [esp+0x58],ebx
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x2C]
	or ebp,0xFFFFFFFF
	add esp,0xC
	mov dword ptr [esp+0x4C],ebp
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	add esi,4
	cmp esi,0x28
	jl Block1

 Block4:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea edx,[esp+0x24]
	push edx
	push 0xFF000000
	push 0xA
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x1A25
	mov ebx,1
	push eax
	mov dword ptr [esp+0x64],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x5C],2
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov byte ptr [esp+0x5C],bl
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0x4C],ebp
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	lea eax,[esp+0x1C]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov ebx,3
	mov dword ptr [esp+0x4C],ebx
	test eax,eax
	je Block14

 Block13:
	mov ebp,dword ptr [eax]
	jmp Block15

 Block14:
	xor ebp,ebp

 Block15:
	mov ecx,8
	mov word ptr [esp+0x34],cx
	test ebp,ebp
	jne Block17

 Block16:
	xor esi,esi
	jmp Block22

 Block17:
	mov eax,ebp
	lea edx,[eax+2]
	lea ebx,[ebx]

 Block18:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block18

 Block19:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea edx,[edi+edi+6]
	push edx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block21

 Block20:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block21:
	mov edi,dword ptr [esp+0x18]

 Block22:
	mov dword ptr [esp+0x3C],esi
	test esi,esi
	jne Block25

 Block23:
	test ebp,ebp
	je Block25

 Block24:
	push 0x8007000E
	call _com_issue_error

 Block25:
	lea eax,[esp+0x34]
	push eax
	push 0xFF000000
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0x1A25
	push ecx
	mov byte ptr [esp+0x64],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,4
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x5C],5
	test eax,eax
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov ecx,eax
	mov byte ptr [esp+0x5C],4
	call IWzFont::Create
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x4C],bl
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov esi,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test esi,esi
	je Block40

 Block32:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block39

 Block33:
	test esi,esi
	je Block39

 Block34:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block36:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block38

 Block37:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block38:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block39:
	mov dword ptr [esp+0x1C],0

 Block40:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx]
	mov esi,dword ptr [ecx+8]
	cmp esi,eax
	je Block45

 Block41:
	mov dword ptr [ecx+8],eax
	test eax,eax
	je Block43

 Block42:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block43:
	test esi,esi
	je Block45

 Block44:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block45:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+4]
	mov esi,dword ptr [ecx+0xC]
	cmp esi,eax
	je Block50

 Block46:
	mov dword ptr [ecx+0xC],eax
	test eax,eax
	je Block48

 Block47:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block48:
	test esi,esi
	je Block50

 Block49:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block50:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx]
	mov esi,dword ptr [ecx+0x10]
	cmp esi,eax
	je Block55

 Block51:
	mov dword ptr [ecx+0x10],eax
	test eax,eax
	je Block53

 Block52:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block53:
	test esi,esi
	je Block55

 Block54:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block55:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+4]
	mov esi,dword ptr [ecx+0x14]
	cmp esi,eax
	je Block60

 Block56:
	mov dword ptr [ecx+0x14],eax
	test eax,eax
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block58:
	test esi,esi
	je Block60

 Block59:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block60:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx]
	mov esi,dword ptr [ecx+0x18]
	cmp esi,eax
	je Block65

 Block61:
	mov dword ptr [ecx+0x18],eax
	test eax,eax
	je Block63

 Block62:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block63:
	test esi,esi
	je Block65

 Block64:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block65:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+4]
	mov esi,dword ptr [ecx+0x1C]
	cmp esi,eax
	je Block70

 Block66:
	mov dword ptr [ecx+0x1C],eax
	test eax,eax
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block68:
	test esi,esi
	je Block70

 Block69:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block70:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx]
	mov esi,dword ptr [ecx+0x20]
	cmp esi,eax
	je Block75

 Block71:
	mov dword ptr [ecx+0x20],eax
	test eax,eax
	je Block73

 Block72:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block73:
	test esi,esi
	je Block75

 Block74:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block75:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+4]
	mov esi,dword ptr [ecx+0x24]
	cmp esi,eax
	je Block80

 Block76:
	mov dword ptr [ecx+0x24],eax
	test eax,eax
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block78:
	test esi,esi
	je Block80

 Block79:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block80:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret
}
}
// CUIInitialQuiz::Draw
_SUB_EXCEPTION_HANDLER(38E9A0)
__SUB_CLASS_THIS(0038E9A0, __thiscall, 54352,  CUIInitialQuiz, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38E9A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
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
	mov dword ptr [ebp-0x54],edi
	mov eax,dword ptr [ebp+8]
	push eax
	call CWnd::Draw
	lea ecx,[ebp-0x50]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	xor ebx,ebx
	mov dword ptr [ebp-4],ebx
	call dword ptr [ZImports::_timeGetTime]
	sub eax,dword ptr [edi+0xC0]
	js Block2

 Block1:
	mov dword ptr [edi+0xC4],ebx

 Block2:
	mov dword ptr [ebp-0x4C],ebx
	lea edx,[ebp-0x14]
	push 0xF73
	push edx
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],2
	cmp esi,ebx
	je Block6

 Block3:
	cmp dword ptr [esi+4],ebx
	jne Block5

 Block4:
	mov eax,dword ptr [esi]
	push eax
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block5:
	mov esi,dword ptr [esi+4]
	jmp Block7

 Block6:
	xor esi,esi

 Block7:
	mov ecx,dword ptr [edi+0xC4]
	mov eax,0x88888889
	imul ecx
	add edx,ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	push ecx
	lea edx,[ebp-0x4C]
	push esi
	push edx
	call ZXString<char>::Format
	mov ecx,dword ptr [ebp-0x14]
	add esp,0xC
	cmp ecx,ebx
	je Block9

 Block8:
	call _xbstr_t::Data_t::Release

 Block9:
	mov eax,3
	mov word ptr [ebp-0x48],ax
	mov dword ptr [ebp-0x40],0xFF
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x24]
	push ecx
	mov byte ptr [ebp-4],al
	call esi
	lea edx,[ebp-0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	lea eax,[ebp-0x34]
	push eax
	mov byte ptr [ebp-4],4
	call esi
	lea ecx,[ebp-0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	mov edi,dword ptr [ebp-0x4C]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	mov bl,5
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea edx,[ebp-0x24]
	push edx
	lea eax,[ebp-0x34]
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x38],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],6
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea ecx,[ebp-0x68]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block18

 Block16:
	cmp eax,0x80004002
	je Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	mov edi,dword ptr [ebp-0x50]
	mov byte ptr [ebp-4],8
	test edi,edi
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov ecx,dword ptr [ebp-0x48]
	mov esi,dword ptr [ebp-0x14]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x44]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0x40]
	push esi
	push 0x21
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x3C]
	push 0x6F
	push edi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block22

 Block21:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block22:
	mov byte ptr [ebp-4],7
	test esi,esi
	je Block24

 Block23:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block24:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x68],di
	jne Block27

 Block25:
	mov eax,dword ptr [ebp-0x60]
	xor edx,edx
	mov word ptr [ebp-0x68],dx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea eax,[ebp-0x68]
	push eax
	call esi

 Block28:
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x34],di
	jne Block31

 Block29:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea edx,[ebp-0x34]
	push edx
	call esi

 Block32:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x24],di
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[ebp-0x24]
	push ecx
	call esi

 Block36:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x48],di
	jne Block39

 Block37:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[ebp-0x48]
	push eax
	call esi

 Block40:
	lea ecx,[ebp-0x14]
	push 0xF73
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],9
	test esi,esi
	je Block44

 Block41:
	cmp dword ptr [esi+4],0
	jne Block43

 Block42:
	mov edx,dword ptr [esi]
	push edx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block43:
	mov esi,dword ptr [esi+4]
	jmp Block45

 Block44:
	xor esi,esi

 Block45:
	mov eax,dword ptr [ebp-0x54]
	mov ecx,dword ptr [eax+0xC4]
	mov eax,0x88888889
	imul ecx
	add edx,ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cdq
	mov ecx,0xA
	idiv ecx
	push edx
	lea edx,[ebp-0x4C]
	push esi
	push edx
	call ZXString<char>::Format
	mov ecx,dword ptr [ebp-0x14]
	add esp,0xC
	test ecx,ecx
	je Block47

 Block46:
	call _xbstr_t::Data_t::Release

 Block47:
	mov eax,3
	mov word ptr [ebp-0x48],ax
	mov dword ptr [ebp-0x40],0xFF
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x34]
	push ecx
	mov byte ptr [ebp-4],0xA
	call esi
	lea edx,[ebp-0x34]
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
	jge Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	mov edi,dword ptr [ebp-0x4C]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	mov bl,0xC
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea edx,[ebp-0x34]
	push edx
	lea eax,[ebp-0x24]
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x38],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xD
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	lea ecx,[ebp-0x68]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xE
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block56

 Block54:
	cmp eax,0x80004002
	je Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	mov ecx,dword ptr [ebp-0x48]
	mov esi,dword ptr [ebp-0x14]
	mov edi,dword ptr [ebp-0x50]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x44]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0x40]
	push esi
	push 0x21
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x3C]
	push 0x84
	push edi
	mov byte ptr [ebp-4],0xF
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block58

 Block57:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block58:
	mov byte ptr [ebp-4],0xE
	test esi,esi
	je Block60

 Block59:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block60:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x68],di
	jne Block67

 Block61:
	mov eax,dword ptr [ebp-0x60]
	xor edx,edx
	mov word ptr [ebp-0x68],dx
	test eax,eax
	je Block63

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block63:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block64:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x24],di
	jne Block68

 Block65:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block69

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block67:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x68]
	push eax
	call esi
	jmp Block64

 Block68:
	lea edx,[ebp-0x24]
	push edx
	call esi

 Block69:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x34],di
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[ebp-0x34]
	push ecx
	call esi

 Block73:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x48],di
	jne Block76

 Block74:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea eax,[ebp-0x48]
	push eax
	call esi

 Block77:
	lea ecx,[ebp-0x14]
	push 0xF74
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x10
	test esi,esi
	je Block81

 Block78:
	cmp dword ptr [esi+4],0
	jne Block80

 Block79:
	mov edx,dword ptr [esi]
	push edx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block80:
	mov esi,dword ptr [esi+4]
	jmp Block82

 Block81:
	xor esi,esi

 Block82:
	lea eax,[ebp-0x4C]
	push esi
	push eax
	call ZXString<char>::Format
	mov ecx,dword ptr [ebp-0x14]
	add esp,8
	test ecx,ecx
	je Block84

 Block83:
	call _xbstr_t::Data_t::Release

 Block84:
	mov ecx,3
	mov word ptr [ebp-0x48],cx
	mov dword ptr [ebp-0x40],0xFF
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x34]
	push edx
	mov byte ptr [ebp-4],0x11
	call esi
	lea eax,[ebp-0x34]
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
	lea ecx,[ebp-0x24]
	push ecx
	mov byte ptr [ebp-4],0x12
	call esi
	lea edx,[ebp-0x24]
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
	mov edi,dword ptr [ebp-0x4C]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	mov bl,0x13
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea eax,[ebp-0x34]
	push eax
	lea ecx,[ebp-0x24]
	push ecx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x38],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x14
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	lea edx,[ebp-0x68]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block93

 Block91:
	cmp eax,0x80004002
	je Block93

 Block92:
	push eax
	call _com_issue_error

 Block93:
	mov edx,dword ptr [ebp-0x48]
	mov esi,dword ptr [ebp-0x14]
	mov edi,dword ptr [ebp-0x50]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x44]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x40]
	push esi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x3C]
	push 0x21
	push 0x9B
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push edi
	mov byte ptr [ebp-4],0x16
	call eax
	test eax,eax
	jge Block95

 Block94:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block95:
	mov byte ptr [ebp-4],0x15
	test esi,esi
	je Block97

 Block96:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block97:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x68],di
	jne Block104

 Block98:
	xor eax,eax
	mov word ptr [ebp-0x68],ax
	mov eax,dword ptr [ebp-0x60]
	test eax,eax
	je Block100

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block100:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block101:
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp-0x24],di
	jne Block105

 Block102:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block106

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block104:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x68]
	push ecx
	call esi
	jmp Block101

 Block105:
	lea eax,[ebp-0x24]
	push eax
	call esi

 Block106:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x34],di
	jne Block109

 Block107:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea edx,[ebp-0x34]
	push edx
	call esi

 Block110:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x48],di
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
	call esi

 Block114:
	lea edx,[ebp-0x14]
	push 0xF73
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x17
	test esi,esi
	je Block118

 Block115:
	cmp dword ptr [esi+4],0
	jne Block117

 Block116:
	mov eax,dword ptr [esi]
	push eax
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block117:
	mov esi,dword ptr [esi+4]
	jmp Block119

 Block118:
	xor esi,esi

 Block119:
	mov ecx,dword ptr [ebp-0x54]
	mov eax,dword ptr [ecx+0xC4]
	cdq
	mov ecx,0x3C
	idiv ecx
	mov eax,0x66666667
	lea ecx,[ebp-0x4C]
	imul edx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	push eax
	push esi
	push ecx
	call ZXString<char>::Format
	mov ecx,dword ptr [ebp-0x14]
	add esp,0xC
	test ecx,ecx
	je Block121

 Block120:
	call _xbstr_t::Data_t::Release

 Block121:
	mov edx,3
	mov word ptr [ebp-0x48],dx
	mov dword ptr [ebp-0x40],0xFF
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x34]
	push eax
	mov byte ptr [ebp-4],0x18
	call esi
	lea ecx,[ebp-0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block123

 Block122:
	push eax
	call _com_issue_error

 Block123:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],0x19
	call esi
	lea eax,[ebp-0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block125

 Block124:
	push eax
	call _com_issue_error

 Block125:
	mov edi,dword ptr [ebp-0x4C]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	mov bl,0x1A
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea ecx,[ebp-0x34]
	push ecx
	lea edx,[ebp-0x24]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x38],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x1B
	jne Block127

 Block126:
	push 0x80004003
	call _com_issue_error

 Block127:
	lea eax,[ebp-0x68]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block130

 Block128:
	cmp eax,0x80004002
	je Block130

 Block129:
	push eax
	call _com_issue_error

 Block130:
	mov edx,dword ptr [ebp-0x48]
	mov esi,dword ptr [ebp-0x14]
	mov edi,dword ptr [ebp-0x50]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x44]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x40]
	push esi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x3C]
	push 0x21
	push 0xA8
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push edi
	mov byte ptr [ebp-4],0x1D
	call eax
	test eax,eax
	jge Block132

 Block131:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block132:
	mov byte ptr [ebp-4],0x1C
	test esi,esi
	je Block134

 Block133:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block134:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x68],di
	jne Block141

 Block135:
	xor eax,eax
	mov word ptr [ebp-0x68],ax
	mov eax,dword ptr [ebp-0x60]
	test eax,eax
	je Block137

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block137:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block138:
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp-0x24],di
	jne Block142

 Block139:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block143

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block141:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x68]
	push ecx
	call esi
	jmp Block138

 Block142:
	lea eax,[ebp-0x24]
	push eax
	call esi

 Block143:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp-0x34],di
	jne Block146

 Block144:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea edx,[ebp-0x34]
	push edx
	call esi

 Block147:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x48],di
	jne Block150

 Block148:
	xor eax,eax
	mov word ptr [ebp-0x48],ax
	mov eax,dword ptr [ebp-0x40]
	test eax,eax
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea ecx,[ebp-0x48]
	push ecx
	call esi

 Block151:
	lea edx,[ebp-0x14]
	push 0xF73
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x1E
	test esi,esi
	je Block155

 Block152:
	cmp dword ptr [esi+4],0
	jne Block154

 Block153:
	mov eax,dword ptr [esi]
	push eax
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block154:
	mov esi,dword ptr [esi+4]
	jmp Block156

 Block155:
	xor esi,esi

 Block156:
	mov ecx,dword ptr [ebp-0x54]
	mov eax,dword ptr [ecx+0xC4]
	cdq
	mov ecx,0x3C
	idiv ecx
	mov ecx,0xA
	mov eax,edx
	cdq
	idiv ecx
	push edx
	lea edx,[ebp-0x4C]
	push esi
	push edx
	call ZXString<char>::Format
	mov ecx,dword ptr [ebp-0x14]
	add esp,0xC
	test ecx,ecx
	je Block158

 Block157:
	call _xbstr_t::Data_t::Release

 Block158:
	mov eax,3
	mov word ptr [ebp-0x48],ax
	mov dword ptr [ebp-0x40],0xFF
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x34]
	push ecx
	mov byte ptr [ebp-4],0x1F
	call esi
	lea edx,[ebp-0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block160

 Block159:
	push eax
	call _com_issue_error

 Block160:
	lea eax,[ebp-0x24]
	push eax
	mov byte ptr [ebp-4],0x20
	call esi
	lea ecx,[ebp-0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block162

 Block161:
	push eax
	call _com_issue_error

 Block162:
	mov edi,dword ptr [ebp-0x4C]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],0x21
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea edx,[ebp-0x34]
	push edx
	lea eax,[ebp-0x24]
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x38],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x22
	jne Block164

 Block163:
	push 0x80004003
	call _com_issue_error

 Block164:
	lea ecx,[ebp-0x68]
	push ecx
	mov byte ptr [ebp-4],0x21
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov bl,0x23
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block167

 Block165:
	cmp eax,0x80004002
	je Block167

 Block166:
	push eax
	call _com_issue_error

 Block167:
	mov ecx,dword ptr [ebp-0x48]
	mov esi,dword ptr [ebp-0x14]
	mov edi,dword ptr [ebp-0x50]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x44]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0x40]
	push esi
	push 0x21
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x3C]
	push 0xBD
	push edi
	mov byte ptr [ebp-4],0x24
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block169

 Block168:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block169:
	mov byte ptr [ebp-4],bl
	test esi,esi
	je Block171

 Block170:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block171:
	mov ebx,8
	mov byte ptr [ebp-4],0x21
	cmp word ptr [ebp-0x68],bx
	jne Block178

 Block172:
	mov eax,dword ptr [ebp-0x60]
	xor edx,edx
	mov word ptr [ebp-0x68],dx
	test eax,eax
	je Block174

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block174:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block175:
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp-0x24],bx
	jne Block179

 Block176:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block180

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block180

 Block178:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x68]
	push eax
	call edi
	jmp Block175

 Block179:
	lea edx,[ebp-0x24]
	push edx
	call edi

 Block180:
	mov byte ptr [ebp-4],0x1F
	cmp word ptr [ebp-0x34],bx
	jne Block183

 Block181:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block184

 Block182:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block184

 Block183:
	lea ecx,[ebp-0x34]
	push ecx
	call edi

 Block184:
	mov byte ptr [ebp-4],1
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
	lea ecx,[ebp-0x6C]
	push 0x42
	push ecx
	call get_basic_font
	add esp,8
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],0x25
	call esi
	lea eax,[ebp-0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block190

 Block189:
	push eax
	call _com_issue_error

 Block190:
	mov edx,dword ptr [ebp-0x54]
	mov eax,dword ptr [edx+0xAC]
	lea ecx,[ebp-0x24]
	push ecx
	push ecx
	mov dword ptr [ebp-0x38],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x26
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x6C]
	mov byte ptr [ebp-4],0x27
	test ecx,ecx
	jne Block192

 Block191:
	push 0x80004003
	call _com_issue_error

 Block192:
	mov byte ptr [ebp-4],0x26
	call IWzFont::CalcTextWidth
	mov dword ptr [ebp-0x38],eax
	mov byte ptr [ebp-4],0x25
	cmp word ptr [ebp-0x24],bx
	jne Block195

 Block193:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block196

 Block194:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block196

 Block195:
	lea ecx,[ebp-0x24]
	push ecx
	call edi

 Block196:
	lea edx,[ebp-0x34]
	push edx
	call esi
	lea eax,[ebp-0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block198

 Block197:
	push eax
	call _com_issue_error

 Block198:
	lea ecx,[ebp-0x24]
	push ecx
	mov byte ptr [ebp-4],0x28
	call esi
	lea edx,[ebp-0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block200

 Block199:
	push eax
	call _com_issue_error

 Block200:
	mov edx,dword ptr [ebp-0x6C]
	mov edi,dword ptr [ebp-0x54]
	lea eax,[ebp-0x34]
	push eax
	mov eax,dword ptr [edi+0xAC]
	lea ecx,[ebp-0x24]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp-0x58],esp
	mov ecx,esp
	mov bl,0x29
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov esi,dword ptr [edi+0x78]
	mov byte ptr [ebp-4],0x2A
	test esi,esi
	jne Block202

 Block201:
	push 0x80004003
	call _com_issue_error

 Block202:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[ebp-0x14]
	push ecx
	push esi
	mov dword ptr [ebp-0x14],0
	call edx
	test eax,eax
	jge Block204

 Block203:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block204:
	mov eax,dword ptr [ebp-0x14]
	sub eax,dword ptr [ebp-0x38]
	mov ecx,dword ptr [ebp-0x50]
	push 0x50
	shr eax,1
	push eax
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp-0x24],si
	jne Block207

 Block205:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block208

 Block206:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block208

 Block207:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block208:
	mov byte ptr [ebp-4],0x25
	cmp word ptr [ebp-0x34],si
	jne Block211

 Block209:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block212

 Block210:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block212

 Block211:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block212:
	mov eax,dword ptr [edi+0xB0]
	test eax,eax
	je Block244

 Block213:
	cmp byte ptr [eax],0
	je Block244

 Block214:
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
	jge Block216

 Block215:
	push eax
	call _com_issue_error

 Block216:
	lea ecx,[ebp-0x24]
	push ecx
	mov byte ptr [ebp-4],0x2B
	call esi
	lea edx,[ebp-0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block218

 Block217:
	push eax
	call _com_issue_error

 Block218:
	lea eax,[ebp-0x34]
	push eax
	lea ecx,[ebp-0x24]
	push ecx
	lea edx,[ebp-0x14]
	push 0
	push edx
	mov byte ptr [ebp-4],0x2C
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	lea eax,[ebp-0x38]
	push 0xF75
	push eax
	mov byte ptr [ebp-4],0x2D
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [ebp-0x58],esp
	mov ecx,esp
	mov bl,0x2E
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [ebp-0x50]
	push 0x6E
	mov byte ptr [ebp-4],0x2F
	push 0x34
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x2D
	test eax,eax
	je Block220

 Block219:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block220:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0x2C
	test eax,eax
	je Block222

 Block221:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block222:
	mov esi,8
	mov byte ptr [ebp-4],0x2B
	cmp word ptr [ebp-0x24],si
	jne Block225

 Block223:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block226

 Block224:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block226

 Block225:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block226:
	mov byte ptr [ebp-4],0x25
	cmp word ptr [ebp-0x34],si
	jne Block229

 Block227:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block230

 Block228:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block230

 Block229:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block230:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x34]
	push ecx
	call esi
	lea edx,[ebp-0x34]
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
	lea eax,[ebp-0x24]
	push eax
	mov byte ptr [ebp-4],0x30
	call esi
	lea ecx,[ebp-0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block234

 Block233:
	push eax
	call _com_issue_error

 Block234:
	lea edx,[ebp-0x34]
	push edx
	lea eax,[ebp-0x24]
	push eax
	lea ecx,[ebp-0x38]
	push 0
	push ecx
	mov byte ptr [ebp-4],0x31
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [ebp-0x54]
	push eax
	mov eax,dword ptr [edx+0xB0]
	push ecx
	mov dword ptr [ebp-0x58],esp
	mov ecx,esp
	mov bl,0x32
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	push 0x6E
	mov byte ptr [ebp-4],0x33
	push 0x5C
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x31
	test eax,eax
	je Block236

 Block235:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block236:
	mov esi,8
	mov byte ptr [ebp-4],0x30
	cmp word ptr [ebp-0x24],si
	jne Block239

 Block237:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block240

 Block238:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block240

 Block239:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block240:
	mov byte ptr [ebp-4],0x25
	cmp word ptr [ebp-0x34],si
	jne Block243

 Block241:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block244

 Block242:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block244

 Block243:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block244:
	mov ecx,dword ptr [ebp-0x54]
	mov eax,dword ptr [ecx+0xB4]
	test eax,eax
	je Block276

 Block245:
	cmp byte ptr [eax],0
	je Block276

 Block246:
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
	jge Block248

 Block247:
	push eax
	call _com_issue_error

 Block248:
	lea ecx,[ebp-0x24]
	push ecx
	mov byte ptr [ebp-4],0x34
	call esi
	lea edx,[ebp-0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block250

 Block249:
	push eax
	call _com_issue_error

 Block250:
	lea eax,[ebp-0x34]
	push eax
	lea ecx,[ebp-0x24]
	push ecx
	lea edx,[ebp-0x14]
	push 0
	push edx
	mov byte ptr [ebp-4],0x35
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	lea eax,[ebp-0x38]
	push 0xF76
	push eax
	mov byte ptr [ebp-4],0x36
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [ebp-0x58],esp
	mov ecx,esp
	mov bl,0x37
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x50]
	push 0x82
	mov byte ptr [ebp-4],0x38
	push 0x34
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x36
	test eax,eax
	je Block252

 Block251:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block252:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0x35
	test eax,eax
	je Block254

 Block253:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block254:
	mov edi,8
	mov byte ptr [ebp-4],0x34
	cmp word ptr [ebp-0x24],di
	jne Block257

 Block255:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block258

 Block256:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block258

 Block257:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block258:
	mov byte ptr [ebp-4],0x25
	cmp word ptr [ebp-0x34],di
	jne Block261

 Block259:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block262

 Block260:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block262

 Block261:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block262:
	lea ecx,[ebp-0x34]
	push ecx
	call esi
	lea edx,[ebp-0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block264

 Block263:
	push eax
	call _com_issue_error

 Block264:
	lea eax,[ebp-0x24]
	push eax
	mov byte ptr [ebp-4],0x39
	call esi
	lea ecx,[ebp-0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block266

 Block265:
	push eax
	call _com_issue_error

 Block266:
	lea edx,[ebp-0x34]
	push edx
	lea eax,[ebp-0x24]
	push eax
	lea ecx,[ebp-0x38]
	push 0
	push ecx
	mov byte ptr [ebp-4],0x3A
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [ebp-0x54]
	push eax
	mov eax,dword ptr [edx+0xB4]
	push ecx
	mov dword ptr [ebp-0x58],esp
	mov ecx,esp
	mov bl,0x3B
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x50]
	push 0x82
	mov byte ptr [ebp-4],0x3C
	push 0x5C
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x3A
	test eax,eax
	je Block268

 Block267:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block268:
	mov esi,8
	mov byte ptr [ebp-4],0x39
	cmp word ptr [ebp-0x24],si
	jne Block271

 Block269:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block272

 Block270:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block272

 Block271:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block272:
	mov byte ptr [ebp-4],0x25
	cmp word ptr [ebp-0x34],si
	jne Block275

 Block273:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block276

 Block274:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block276

 Block275:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block276:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x34]
	push ecx
	call esi
	lea edx,[ebp-0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block278

 Block277:
	push eax
	call _com_issue_error

 Block278:
	lea eax,[ebp-0x24]
	push eax
	mov byte ptr [ebp-4],0x3D
	call esi
	lea ecx,[ebp-0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block280

 Block279:
	push eax
	call _com_issue_error

 Block280:
	lea edx,[ebp-0x34]
	push edx
	lea eax,[ebp-0x24]
	push eax
	lea ecx,[ebp-0x14]
	push 0
	push ecx
	mov byte ptr [ebp-4],0x3E
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	lea edx,[ebp-0x38]
	push 0xF77
	push edx
	mov byte ptr [ebp-4],0x3F
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [ebp-0x58],esp
	mov ecx,esp
	mov bl,0x40
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x50]
	push 0x9D
	mov byte ptr [ebp-4],0x41
	push 0x2D
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x3F
	test eax,eax
	je Block282

 Block281:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block282:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0x3E
	test eax,eax
	je Block284

 Block283:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block284:
	mov edi,8
	mov byte ptr [ebp-4],0x3D
	cmp word ptr [ebp-0x24],di
	jne Block287

 Block285:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block288

 Block286:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block288

 Block287:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block288:
	mov byte ptr [ebp-4],0x25
	cmp word ptr [ebp-0x34],di
	jne Block291

 Block289:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block292

 Block290:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block292

 Block291:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block292:
	lea ecx,[ebp-0x34]
	push ecx
	call esi
	lea edx,[ebp-0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block294

 Block293:
	push eax
	call _com_issue_error

 Block294:
	lea eax,[ebp-0x24]
	push eax
	mov byte ptr [ebp-4],0x42
	call esi
	lea ecx,[ebp-0x24]
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
	lea edx,[ebp-0x34]
	push edx
	lea eax,[ebp-0x24]
	push eax
	lea ecx,[ebp-0x14]
	push 6
	push ecx
	mov byte ptr [ebp-4],0x43
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	lea edx,[ebp-0x38]
	push 0xF78
	push edx
	mov byte ptr [ebp-4],0x44
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [ebp-0x58],esp
	mov ecx,esp
	mov bl,0x45
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [ebp-0x50]
	push 0xCA
	mov byte ptr [ebp-4],0x46
	push 0x26
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x44
	test eax,eax
	je Block298

 Block297:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block298:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0x43
	test eax,eax
	je Block300

 Block299:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block300:
	mov esi,8
	mov byte ptr [ebp-4],0x42
	cmp word ptr [ebp-0x24],si
	jne Block303

 Block301:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block304

 Block302:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block304

 Block303:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block304:
	mov byte ptr [ebp-4],0x25
	cmp word ptr [ebp-0x34],si
	jne Block307

 Block305:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block308

 Block306:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block308

 Block307:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block308:
	mov ecx,dword ptr [ebp-0x54]
	cmp dword ptr [ecx+0xC4],0
	jg Block325

 Block309:
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
	jge Block311

 Block310:
	push eax
	call _com_issue_error

 Block311:
	lea ecx,[ebp-0x24]
	push ecx
	mov byte ptr [ebp-4],0x47
	call esi
	lea edx,[ebp-0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block313

 Block312:
	push eax
	call _com_issue_error

 Block313:
	lea eax,[ebp-0x34]
	push eax
	lea ecx,[ebp-0x24]
	push ecx
	lea edx,[ebp-0x14]
	push 6
	push edx
	mov byte ptr [ebp-4],0x48
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	lea eax,[ebp-0x38]
	push 0xF7C
	push eax
	mov byte ptr [ebp-4],0x49
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [ebp-0x58],esp
	mov ecx,esp
	mov bl,0x4A
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	push 0x9E
	mov byte ptr [ebp-4],0x4B
	push 0x77
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x49
	test eax,eax
	je Block315

 Block314:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block315:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0x48
	test eax,eax
	je Block317

 Block316:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block317:
	mov esi,8
	mov byte ptr [ebp-4],0x47
	cmp word ptr [ebp-0x24],si
	jne Block320

 Block318:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block321

 Block319:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block321

 Block320:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block321:
	mov byte ptr [ebp-4],0x25
	cmp word ptr [ebp-0x34],si
	jne Block324

 Block322:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block325

 Block323:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block325

 Block324:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block325:
	mov eax,dword ptr [ebp-0x6C]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block327

 Block326:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block327:
	mov eax,dword ptr [ebp-0x4C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block329

 Block328:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block329:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ecx
	lea esp,[ebp-0x7C]
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
// CUISkillEffectChange::SetRet
__SUB_CLASS_THIS(0037F600, __thiscall, 54668,  CUISkillEffectChange, void, long) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	cmp esi,2
	je Block8

 Block1:
	cmp dword ptr [ecx+0x84],0
	jne Block4

 Block2:
	cmp dword ptr [ecx+0x14],0
	mov dword ptr [ecx+0x80],esi
	mov dword ptr [ecx+0x84],1
	je Block4

 Block3:
	call CWnd::Destroy

 Block4:
	cmp esi,1
	jne Block8

 Block5:
	mov ecx,dword ptr [TSingleton<CUISkillEffectChange>::ms_pInstance]
	test ecx,ecx
	je Block8

 Block6:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUISkillEffectChange>::ms_pInstance]
	test eax,eax
	je Block8

 Block7:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	pop esi
	mov dword ptr [esp+4],1
	mov edx,dword ptr [eax]
	jmp edx

 Block8:
	pop esi
	ret 4
}
}
// CUIWeddingInvitation::~CUIWeddingInvitation
_SUB_EXCEPTION_HANDLER(381960)
__SUB_CLASS_THIS0(00381960, __thiscall, 54417,  CUIWeddingInvitation, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_381960
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIWeddingInvitation::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIWeddingInvitation::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIWeddingInvitation::`vftable'{for `ZRefCounted'}
	cmp dword ptr [esi+0xA0],0
	lea edi,[esi+0x9C]
	mov dword ptr [esp+0x18],2
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	mov eax,dword ptr [esi+0x94]
	mov byte ptr [esp+0x18],1
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esi+0x90]
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,esi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CUISendGift::OnKey
__SUB_CLASS_THIS(0038B100, __thiscall, 54210,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x10]
	push esi
	push edi
	mov edi,dword ptr [esp+0x1C]
	xor ebx,ebx
	mov esi,ecx
	mov dword ptr [esp+0x10],ebx
	test edi,edi
	js Block25

 Block1:
	cmp ebp,0xD
	jne Block25

 Block2:
	mov eax,dword ptr [esi+0x70]
	cmp eax,dword ptr [esi+0xA0]
	jne Block6

 Block3:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [esi+0xA8]
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	lea ebx,[ebp-0xC]
	test eax,eax
	je Block5

 Block4:
	cmp byte ptr [eax],0
	jne Block6

 Block5:
	mov byte ptr [esp+0x1C],bl
	jmp Block7

 Block6:
	mov byte ptr [esp+0x1C],0

 Block7:
	test bl,1
	je Block10

 Block8:
	mov eax,dword ptr [esp+0x18]
	and ebx,0xFFFFFFFE
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	cmp byte ptr [esp+0x1C],0
	je Block14

 Block11:
	mov esi,dword ptr [esi+0xA8]
	test esi,esi
	je Block13

 Block12:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea eax,[esi+4]
	push eax
	call CWndMan::SetFocus
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8

 Block13:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	xor eax,eax
	push eax
	call CWndMan::SetFocus
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8

 Block14:
	mov edx,dword ptr [esi+0x70]
	cmp edx,dword ptr [esi+0xA8]
	jne Block18

 Block15:
	mov ecx,dword ptr [esi+0xB0]
	lea eax,[esp+0x18]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	or ebx,2
	test eax,eax
	je Block17

 Block16:
	cmp byte ptr [eax],0
	jne Block18

 Block17:
	mov byte ptr [esp+0x1C],1
	jmp Block19

 Block18:
	mov byte ptr [esp+0x1C],0

 Block19:
	test bl,2
	je Block22

 Block20:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	cmp byte ptr [esp+0x1C],0
	je Block25

 Block23:
	mov esi,dword ptr [esi+0xB0]
	test esi,esi
	je Block13

 Block24:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea eax,[esi+4]
	push eax
	call CWndMan::SetFocus
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8

 Block25:
	push edi
	push ebp
	mov ecx,esi
	call CDialog::OnKey
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8
}
}
// CUIMapleTV::setDialogType
__SUB_CLASS_THIS(0037F4D0, __thiscall, 54604,  CUIMapleTV, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0xD0],eax
	ret 4
}
}
// CUITransferWorldLicenseNotice::OnButtonClicked
_SUB_EXCEPTION_HANDLER(393FC0)
__SUB_CLASS_THIS(00393FC0, __thiscall, 54536,  CUITransferWorldLicenseNotice, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_393FC0
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
	mov ebx,ecx
	mov eax,dword ptr [esp+0x2C]
	sub eax,1
	je Block3

 Block1:
	sub eax,1
	jne Block18

 Block2:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x34]
	push 2
	call edx
	jmp Block18

 Block3:
	push 0xC4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebp,eax
	mov dword ptr [esp+0x2C],ebp
	xor ecx,ecx
	mov dword ptr [esp+0x24],ecx
	cmp ebp,ecx
	je Block19

 Block4:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x20CC]
	cmp eax,ecx
	je Block6

 Block5:
	lea ecx,[eax+4]

 Block6:
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [edi],0
	test ecx,ecx
	je Block10

 Block7:
	mov eax,ecx
	lea esi,[eax+1]

 Block8:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block8

 Block9:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
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

 Block10:
	mov ecx,dword ptr [ebx+0x90]
	push ecx
	mov ecx,ebp
	call CUITransferWorldSelectDlg::_ctor_0
	test eax,eax
	je Block19

 Block11:
	add eax,8
	je Block19

 Block12:
	lea esi,[eax-8]
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block14

 Block13:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x34]
	push 2
	mov ecx,ebx
	mov dword ptr [esp+0x28],1
	call edx
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,1
	jne Block16

 Block15:
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	call CUITransferWorldSelectDlg::GetResult
	mov ecx,dword ptr [ebx+0x90]
	mov edx,dword ptr [esp+0x2C]
	mov eax,dword ptr [ecx+0x4F0]
	push edx
	push eax
	call CCashShop::SendBuyTransferWorldItemPacket

 Block16:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test esi,esi
	je Block18

 Block17:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CUITransferWorldSelectDlg>::_ReleaseRaw

 Block18:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 4

 Block19:
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	jmp Block14
}
}
// CUIHope::OnKey
__SUB_CLASS_THIS(0037F0A0, __thiscall, 53867,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	test eax,eax
	js Block2

 Block1:
	cmp edx,0xD
	je Block3

 Block2:
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+4],edx
	jmp  CDialog::OnKey

 Block3:
	ret 8
}
}
// CUIHope::~CUIHope
_SUB_EXCEPTION_HANDLER(3823B0)
__SUB_CLASS_THIS0(003823B0, __thiscall, 53865,  CUIHope, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3823B0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIHope::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIHope::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIHope::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xC4]
	mov dword ptr [esp+0x1C],6
	call CLayoutMan::~CLayoutMan
	lea edi,[esi+0xBC]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xB4]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xAC]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xA4]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
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
// CMatchTableDlg::DrawLine
_SUB_EXCEPTION_HANDLER(3856A0)
__SUB_CLASS_THIS0(003856A0, __thiscall, 53959,  CMatchTableDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3856A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x20],esi
	xor edi,edi
	mov dword ptr [esp+0x18],edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x759
	push eax
	mov dword ptr [esp+0xAC],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0x40C]
	mov byte ptr [esp+0xA4],1
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x4C]
	push edx
	mov byte ptr [esp+0xA8],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xA0],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [esp+0x40],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x98],4
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,edi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x40]
	push ecx
	call ebx

 Block9:
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	cmp dword ptr [esi+0x3F4],2
	mov ebp,dword ptr [esp+0x1C]
	jne Block125

 Block10:
	mov edx,3
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],edi
	mov ecx,dword ptr [esi+0x400]
	mov byte ptr [esp+0x98],6
	test ecx,ecx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea eax,[esp+0x30]
	push eax
	lea edx,[esp+0x2C]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov eax,dword ptr [eax]
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	mov dword ptr [esp+0x1C],eax
	call edx

 Block14:
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x98],5
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x30]
	push ecx
	call ebx

 Block20:
	cmp dword ptr [esi+0x3F0],2
	jle Block45

 Block21:
	xor ebp,ebp
	lea ebx,[esi+0x98]

 Block22:
	mov eax,ebp
	cdq
	sub eax,edx
	mov esi,eax
	mov eax,dword ptr [esp+0x20]
	sar esi,1
	lea edx,[esi+esi*2]
	mov ecx,dword ptr [eax+edx*8+0x9C]
	cmp ecx,dword ptr [ebx]
	jne Block43

 Block23:
	mov edx,ebp
	and edx,0x80000001
	jns Block25

 Block24:
	dec edx
	or edx,0xFFFFFFFE
	inc edx

 Block25:
	mov eax,offset _S_8F
	jne Block27

 Block26:
	mov eax,offset _S_8__1

 Block27:
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0xA4],7
	test ecx,ecx
	je Block1

 Block28:
	lea eax,[esp+0x5C]
	push eax
	mov byte ptr [esp+0xA8],5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xA0],8
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block30

 Block29:
	cmp eax,0x80004002
	jne Block4

 Block30:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x98],5
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block4

 Block35:
	mov edi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x98],9
	test edi,edi
	je Block1

 Block36:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x6C]
	lea eax,[esp+0x24]
	push eax
	push edi
	mov dword ptr [esp+0x2C],0
	call ecx
	test eax,eax
	jge Block38

 Block37:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block38:
	cmp dword ptr [esp+0x18],0
	je Block1

 Block39:
	mov ecx,dword ptr [esp+0x18]
	imul esi,0xAF
	sub esi,dword ptr [esp+0x24]
	lea edx,[esp+0x30]
	push edx
	push edi
	push 0x139
	add esi,0x52
	push esi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x98],5
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
	inc ebp
	add ebx,0x18
	cmp ebp,8
	jl Block22

 Block44:
	mov ebp,dword ptr [esp+0x1C]
	mov esi,dword ptr [esp+0x20]

 Block45:
	cmp dword ptr [esi+0x3F0],3
	jle Block91

 Block46:
	mov ebp,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov dword ptr [esp+0x24],ecx
	xor ebx,ebx

 Block47:
	mov eax,ecx
	cdq
	sub eax,edx
	mov esi,eax
	mov eax,dword ptr [esp+0x20]
	sar esi,1
	lea edx,[esi+esi*2]
	mov edx,dword ptr [eax+edx*8+0xA0]
	lea ecx,[ecx+ecx*2]
	cmp edx,dword ptr [eax+ecx*8+0x9C]
	jne Block89

 Block48:
	mov eax,dword ptr [esp+0x24]
	cmp eax,3
	ja Block78

 Block49:
	cmp EAX, 0
je Block50
cmp EAX, 1
je Block58
cmp EAX, 2
je Block64
cmp EAX, 3
je Block70


 Block50:
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push offset _S_4L
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xA4],0xA
	cmp ebp,ebx
	je Block1

 Block51:
	lea eax,[esp+0x5C]
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0xA8],5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xA0],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block53

 Block52:
	cmp eax,0x80004002
	jne Block4

 Block53:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x98],5
	jne Block57

 Block54:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx

 Block55:
	cmp eax,ebx
	je Block77

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block57:
	lea edx,[esp+0x50]
	jmp Block76

 Block58:
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push offset _S_4R
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xA4],0xC
	cmp ebp,ebx
	je Block1

 Block59:
	lea eax,[esp+0x6C]
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0xA8],5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xA0],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block61

 Block60:
	cmp eax,0x80004002
	jne Block4

 Block61:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x98],5
	jne Block63

 Block62:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	jmp Block55

 Block63:
	lea edx,[esp+0x60]
	jmp Block76

 Block64:
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push offset _S_4RF
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xA4],0xE
	cmp ebp,ebx
	je Block1

 Block65:
	lea eax,[esp+0x7C]
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0xA8],5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xA0],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block67

 Block66:
	cmp eax,0x80004002
	jne Block4

 Block67:
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0x98],5
	jne Block69

 Block68:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	jmp Block55

 Block69:
	lea edx,[esp+0x70]
	jmp Block76

 Block70:
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push offset _S_4LF
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xA4],0x10
	cmp ebp,ebx
	je Block1

 Block71:
	lea eax,[esp+0x8C]
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0xA8],5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xA0],0x11
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block73

 Block72:
	cmp eax,0x80004002
	jne Block4

 Block73:
	cmp word ptr [esp+0x80],8
	mov byte ptr [esp+0x98],5
	jne Block75

 Block74:
	mov eax,dword ptr [esp+0x88]
	xor ecx,ecx
	mov word ptr [esp+0x80],cx
	jmp Block55

 Block75:
	lea edx,[esp+0x80]

 Block76:
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block77:
	mov edi,dword ptr [esp+0x14]

 Block78:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block4

 Block79:
	mov byte ptr [esp+0x98],0x12
	cmp edi,ebx
	je Block1

 Block80:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x6C]
	lea eax,[esp+0x28]
	push eax
	push edi
	mov dword ptr [esp+0x30],ebx
	call ecx
	cmp eax,ebx
	jge Block82

 Block81:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block82:
	cmp dword ptr [esp+0x18],ebx
	je Block1

 Block83:
	mov edx,dword ptr [esp+0x18]
	imul esi,0xD7
	mov ecx,dword ptr [edx]
	mov edx,dword ptr [esp+0x30]
	sub esi,dword ptr [esp+0x28]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x4C]
	push edi
	push 0xA8
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x30]
	add esi,0xEC
	push esi
	push eax
	call ecx
	cmp eax,ebx
	jge Block85

 Block84:
	mov edx,dword ptr [esp+0x18]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edx
	push eax
	call _com_issue_errorex

 Block85:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x98],5
	jne Block88

 Block86:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebx
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block89:
	mov ecx,dword ptr [esp+0x24]
	inc ecx
	cmp ecx,4
	mov dword ptr [esp+0x24],ecx
	jl Block47

 Block90:
	mov ebp,dword ptr [esp+0x1C]
	mov esi,dword ptr [esp+0x20]

 Block91:
	cmp dword ptr [esi+0x3F0],4
	jle Block125

 Block92:
	lea edx,[esi+0xA0]
	xor ebx,ebx
	mov dword ptr [esp+0x24],edx
	jmp Block95

 Block94:
	mov esi,dword ptr [esp+0x20]

 Block95:
	mov eax,ebx
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0x24]
	sar eax,1
	lea eax,[eax+eax*2]
	mov ecx,dword ptr [esi+eax*8+0xA4]
	cmp ecx,dword ptr [edx]
	jne Block124

 Block96:
	mov eax,ebx
	and eax,0x80000001
	jns Block98

 Block97:
	dec eax
	or eax,0xFFFFFFFE
	inc eax

 Block98:
	mov eax,offset _S_2F
	jne Block100

 Block99:
	mov eax,offset _S_2

 Block100:
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xA4],0x13
	test ebp,ebp
	je Block1

 Block101:
	lea ecx,[esp+0x8C]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0xA8],5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xA0],0x14
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block109

 Block102:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x2C]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov esi,eax
	xor eax,eax
	test esi,esi
	setl al
	dec eax
	and eax,dword ptr [esp+0x2C]
	mov ebp,eax
	test edi,edi
	je Block104

 Block103:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block104:
	mov edi,ebp
	mov dword ptr [esp+0x14],edi
	test esi,esi
	jge Block106

 Block105:
	cmp esi,0x80004002
	jne Block132

 Block106:
	mov ebp,8
	mov byte ptr [esp+0x98],5
	cmp word ptr [esp+0x80],bp
	jne Block112

 Block107:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block113

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block109:
	test edi,edi
	je Block106

 Block110:
	mov eax,edi
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	test eax,eax
	je Block106

 Block111:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block106

 Block112:
	lea ecx,[esp+0x80]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block113:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block4

 Block114:
	mov byte ptr [esp+0x98],0x15
	test edi,edi
	je Block1

 Block115:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x6C]
	lea edx,[esp+0x28]
	push edx
	push edi
	mov dword ptr [esp+0x30],0
	call eax
	test eax,eax
	jge Block117

 Block116:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block117:
	mov esi,dword ptr [esp+0x18]
	test esi,esi
	je Block1

 Block118:
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+0xC],edx
	push edi
	mov eax,0x158
	sub eax,dword ptr [esp+0x3C]
	push 0x6A
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block120

 Block119:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block120:
	mov byte ptr [esp+0x98],5
	cmp word ptr [esp+0x30],bp
	jne Block123

 Block121:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block124:
	add dword ptr [esp+0x24],0x18
	mov ebp,dword ptr [esp+0x1C]
	inc ebx
	cmp ebx,2
	jl Block94

 Block125:
	mov byte ptr [esp+0x98],4
	test edi,edi
	je Block127

 Block126:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block127:
	mov byte ptr [esp+0x98],0
	test ebp,ebp
	je Block129

 Block128:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block129:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	test eax,eax
	je Block131

 Block130:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block131:
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret

 Block132:
	push esi
	call _com_issue_error
}
}
// CUISendGifts::SetRet
_SUB_EXCEPTION_HANDLER(399D90)
__SUB_CLASS_THIS(00399D90, __thiscall, 54057,  CUISendGifts, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_399D90
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
	mov dword ptr [esp+0x24],ecx
	xor ebp,ebp
	cmp dword ptr [esp+0x40],1
	jne Block63

 Block1:
	mov dword ptr [esp+0x14],ebp
	mov dword ptr [esp+0x38],ebp
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x1C],ebp
	mov ebx,ecx
	mov ecx,dword ptr [ebx+0xD4]
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x3C],2
	call CCtrlEdit::GetText
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x3C],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x38],2
	cmp eax,ebp
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	mov ecx,dword ptr [ebx+0xDC]
	lea edx,[esp+0x20]
	push edx
	call CCtrlEdit::GetText
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x3C],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x38],2
	cmp eax,ebp
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov ecx,dword ptr [ebx+0xE4]
	lea eax,[esp+0x20]
	push eax
	call CCtrlEdit::GetText
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x3C],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x38],2
	cmp eax,ebp
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	push ebp
	push ebp
	lea ecx,[esp+0x20]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push ebp
	push ebp
	lea ecx,[esp+0x24]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	add ebx,0xEC
	mov ecx,ebx
	call ZArray<ZXString<char>>::RemoveAll
	jmp Block9

 Block9:
	push offset _S___37
	push offset _S___37
	lea ecx,[esp+0x1C]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push ebp
	push ebp
	lea ecx,[esp+0x1C]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	je Block28

 Block10:
	cmp byte ptr [eax],0
	je Block28

 Block11:
	push ebp
	push 0x3B
	lea ecx,[esp+0x1C]
	call ZXString<char>::Find__1
	mov edi,eax
	cmp edi,0xFFFFFFFF
	je Block34

 Block12:
	push edi
	lea ecx,[esp+0x24]
	push ecx
	lea ecx,[esp+0x1C]
	call ZXString<char>::Left
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x38],6
	cmp eax,ebp
	je Block83

 Block13:
	mov eax,dword ptr [eax-4]
	cmp eax,4
	jl Block83

 Block14:
	cmp eax,0xC
	jg Block83

 Block15:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [edx+0x20CC]
	cmp eax,ebp
	je Block17

 Block16:
	add eax,4
	jmp Block18

 Block17:
	xor eax,eax

 Block18:
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::CompareNoCase
	test eax,eax
	je Block67

 Block19:
	xor esi,esi

 Block20:
	mov eax,dword ptr [ebx]
	cmp eax,ebp
	je Block24

 Block21:
	cmp esi,dword ptr [eax-4]
	jae Block24

 Block22:
	mov ecx,dword ptr [ebx]
	lea eax,[esp+0x20]
	push eax
	lea ecx,[ecx+esi*4]
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block75

 Block23:
	inc esi
	jmp Block20

 Block24:
	lea edx,[esp+0x20]
	push edx
	push 0xFFFFFFFF
	mov ecx,ebx
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	push 0xFFFFFFFF
	inc edi
	push edi
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Substring
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x3C],7
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x38],6
	cmp eax,ebp
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x38],2
	cmp eax,ebp
	je Block9

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block9

 Block28:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x54],esp
	push 0xC53
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x30]
	add esp,0x14
	mov byte ptr [esp+0x38],1
	cmp eax,ebp
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],0
	cmp eax,ebp
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebp
	je Block66

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block66

 Block34:
	lea edx,[esp+0x14]
	push edx
	or edi,0xFFFFFFFF
	push edi
	mov ecx,ebx
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	push 1
	push ebp
	push 1
	push 0x400
	lea ecx,[esp+0x28]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push edi
	lea ecx,[esp+0x1C]
	mov esi,eax
	call ZXString<char>::ReleaseBuffer
	cmp esi,ebp
	jne Block43

 Block35:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x54],esp
	push 0x11D

 Block36:
	push eax

 Block37:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x30]
	add esp,0x14
	mov byte ptr [esp+0x38],1
	cmp eax,ebp
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],0
	cmp eax,ebp
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x38],edi
	cmp eax,ebp
	je Block66

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block66

 Block43:
	push 1
	push ebp
	push 1
	push 0x400
	lea ecx,[esp+0x2C]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push edi
	lea ecx,[esp+0x20]
	mov esi,eax
	call ZXString<char>::ReleaseBuffer
	cmp esi,ebp
	jne Block45

 Block44:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x54],esp
	push 0x11D
	push ecx
	jmp Block37

 Block45:
	push offset _S___22
	lea edx,[esp+0x30]
	push edx
	lea ecx,[esp+0x20]
	call ZXString<char>::op_add_0
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x2C]
	mov bl,8
	push edx
	mov ecx,eax
	mov byte ptr [esp+0x40],bl
	call ZXString<char>::op_add_1
	mov esi,dword ptr [esp+0x24]
	add esi,0xE8
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x3C],9
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x38],bl
	cmp eax,ebp
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x38],2
	cmp eax,ebp
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block49:
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x1C]
	cmp ecx,ebp
	je Block51

 Block50:
	cmp byte ptr [ecx],0
	jne Block54

 Block51:
	cmp eax,ebp
	je Block53

 Block52:
	cmp byte ptr [eax],0
	jne Block54

 Block53:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x54],esp
	push 0xC56
	jmp Block36

 Block54:
	mov esi,dword ptr [esi]
	cmp esi,ebp
	je Block57

 Block55:
	cmp dword ptr [esi-4],0x48
	jle Block57

 Block56:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x54],esp
	push 0xC55
	push ecx
	jmp Block37

 Block57:
	mov byte ptr [esp+0x38],1
	cmp eax,ebp
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	mov ecx,dword ptr [esp+0x1C]
	add esp,4

 Block59:
	mov byte ptr [esp+0x38],0
	cmp ecx,ebp
	je Block61

 Block60:
	add ecx,0xFFFFFFF4
	push ecx
	call ZXString<char>::_Release
	add esp,4

 Block61:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x38],edi
	cmp eax,ebp
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block63:
	mov ecx,dword ptr [esp+0x24]
	cmp dword ptr [ecx+0x84],ebp
	jne Block66

 Block64:
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [ecx+0x80],edx
	mov dword ptr [ecx+0x84],1
	cmp dword ptr [ecx+0x14],ebp
	je Block66

 Block65:
	call CWnd::Destroy

 Block66:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 4

 Block67:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x54],esp
	push 0xC54
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x34]
	add esp,0x14
	mov byte ptr [esp+0x38],2
	cmp eax,ebp
	je Block69

 Block68:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block69:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x38],1
	cmp eax,ebp
	je Block71

 Block70:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block71:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],0
	cmp eax,ebp
	je Block73

 Block72:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block73:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebp
	je Block66

 Block74:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block66

 Block75:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x54],esp
	push 0x241
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x34]
	add esp,0x14
	mov byte ptr [esp+0x38],2
	cmp eax,ebp
	je Block77

 Block76:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block77:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x38],1
	cmp eax,ebp
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block79:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],0
	cmp eax,ebp
	je Block81

 Block80:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block81:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebp
	je Block66

 Block82:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block66

 Block83:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x54],esp
	push 0xC53
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x34]
	add esp,0x14
	mov byte ptr [esp+0x38],2
	cmp eax,ebp
	je Block85

 Block84:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block85:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x38],1
	cmp eax,ebp
	je Block87

 Block86:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block87:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],0
	cmp eax,ebp
	je Block89

 Block88:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block89:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebp
	je Block66

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block66
}
}
// CUIAdminAntiMacro::OnCreate
_SUB_EXCEPTION_HANDLER(38CD90)
__SUB_CLASS_THIS(0038CD90, __thiscall, 54285,  CUIAdminAntiMacro, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38CD90
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
	lea ebp,[esi+0xB4]
	push esi
	mov ecx,ebp
	call CLayoutMan::Init
	lea ecx,[esp+0x1C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea eax,[esp+0x14]
	push 0x1A25
	push eax
	mov dword ptr [esp+0x68],ebx
	mov dword ptr [esp+0x48],ebx
	mov dword ptr [esp+0x40],0xFF000000
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea ecx,[esp+0x30]
	cmp ecx,edi
	je Block5

 Block1:
	mov ecx,dword ptr [esp+0x30]
	cmp ecx,ebx
	je Block3

 Block2:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x30],ebx

 Block3:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x30],edi
	cmp edi,ebx
	je Block5

 Block4:
	add edi,8
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	je Block7

 Block6:
	call _xbstr_t::Data_t::Release

 Block7:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x50],0xC
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x60],1
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	mov byte ptr [esp+0x60],bl
	cmp eax,ebx
	je Block19

 Block11:
	add eax,8
	cmp eax,ebx
	je Block19

 Block12:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block14

 Block13:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block16

 Block15:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block16:
	mov ecx,dword ptr [esi+0x98]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x1C]
	push edx
	push 0x10
	push 0xC2
	push 0xCE
	push 0x53
	push 0x3E8
	push esi
	call eax
	push ebx
	push ebx
	push ebx
	push 1
	push offset _S_UIUIWINDOW2IMGMA__15
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebp
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],ebx
	je Block18

 Block17:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x18],ebx

 Block18:
	mov eax,dword ptr [esi+0x98]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
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

 Block19:
	xor edi,edi
	jmp Block14
}
}
// CUISendGift::SetRet
_SUB_EXCEPTION_HANDLER(39A4C0)
__SUB_CLASS_THIS(0039A4C0, __thiscall, 54209,  CUISendGift, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39A4C0
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
	xor ebx,ebx
	xor ebp,ebp
	cmp dword ptr [esp+0x38],1
	mov dword ptr [esp+0x20],ebx
	jne Block58

 Block1:
	mov dword ptr [esp+0x1C],ebp
	mov dword ptr [esp+0x30],ebp
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x14],ebp
	mov byte ptr [esp+0x30],2
	cmp dword ptr [esi+0xC0],ebp
	je Block3

 Block2:
	lea eax,[esi+0xB8]
	jmp Block4

 Block3:
	mov ecx,dword ptr [esi+0xA4]
	lea eax,[esp+0x24]
	push eax
	call CCtrlEdit::GetText
	mov ebx,1
	mov byte ptr [esp+0x30],3
	mov dword ptr [esp+0x20],ebx

 Block4:
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x30],2
	test bl,1
	je Block7

 Block5:
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov ecx,dword ptr [esi+0xAC]
	lea edx,[esp+0x24]
	push edx
	call CCtrlEdit::GetText
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x30],2
	cmp eax,ebp
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov ecx,dword ptr [esi+0xB4]
	lea eax,[esp+0x24]
	push eax
	call CCtrlEdit::GetText
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x34],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x30],2
	cmp eax,ebp
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	push ebp
	push ebp
	lea ecx,[esp+0x24]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push ebp
	push ebp
	lea ecx,[esp+0x20]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push ebp
	push ebp
	lea ecx,[esp+0x1C]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block62

 Block12:
	mov eax,dword ptr [eax-4]
	cmp eax,4
	jl Block62

 Block13:
	cmp eax,0xC
	jg Block62

 Block14:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ecx+0x20CC]
	cmp eax,ebp
	je Block16

 Block15:
	add eax,4
	jmp Block17

 Block16:
	xor eax,eax

 Block17:
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jne Block24

 Block18:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x4C],esp
	push 0xC54
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x30],1
	cmp eax,ebp
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x30],0
	cmp eax,ebp
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebp
	je Block61

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block61

 Block24:
	push 1
	push ebp
	push 1
	push 0x400
	lea ecx,[esp+0x28]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	or ebx,0xFFFFFFFF
	push ebx
	lea ecx,[esp+0x1C]
	mov edi,eax
	call ZXString<char>::ReleaseBuffer
	cmp edi,ebp
	jne Block33

 Block25:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	push 0x11D
	push eax

 Block26:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x30],1
	cmp eax,ebp
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x30],0
	cmp eax,ebp
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	mov dword ptr [esp+0x30],ebx

 Block31:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block61

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block61

 Block33:
	push 1
	push ebp
	push 1
	push 0x400
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push ebx
	lea ecx,[esp+0x18]
	mov edi,eax
	call ZXString<char>::ReleaseBuffer
	cmp edi,ebp
	jne Block35

 Block34:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push 0x11D
	push ecx
	jmp Block26

 Block35:
	push offset _S___22
	lea edx,[esp+0x24]
	push edx
	lea ecx,[esp+0x20]
	call ZXString<char>::op_add_0
	lea ecx,[esp+0x14]
	push ecx
	lea edx,[esp+0x28]
	mov bl,6
	push edx
	mov ecx,eax
	mov byte ptr [esp+0x38],bl
	call ZXString<char>::op_add_1
	lea edi,[esi+0xBC]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x34],7
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x30],bl
	cmp eax,ebp
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x30],2
	cmp eax,ebp
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	lea ecx,[esp+0x18]
	call ZXString<char>::IsEmpty
	test eax,eax
	je Block46

 Block40:
	lea ecx,[esp+0x14]
	call ZXString<char>::IsEmpty
	test eax,eax
	je Block46

 Block41:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	push 0xC56
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x30],1
	cmp eax,ebp
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block43:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x30],0
	cmp eax,ebp
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block45:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	jmp Block31

 Block46:
	mov edi,dword ptr [edi]
	cmp edi,ebp
	je Block52

 Block47:
	cmp dword ptr [edi-4],0x48
	jle Block52

 Block48:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push 0xC55
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x30],1
	cmp eax,ebp
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block50:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x30],0
	cmp eax,ebp
	je Block45

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esp+0x30],0xFFFFFFFF
	jmp Block31

 Block52:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x30],1
	cmp eax,ebp
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block54:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x30],0
	cmp eax,ebp
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block56:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebp
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block58:
	cmp dword ptr [esi+0x84],ebp
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esi+0x80],eax
	mov dword ptr [esi+0x84],1
	cmp dword ptr [esi+0x14],ebp
	je Block61

 Block60:
	mov ecx,esi
	call CWnd::Destroy

 Block61:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 4

 Block62:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x4C],esp
	push 0xC53
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x30],1
	cmp eax,ebp
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block64:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x30],0
	cmp eax,ebp
	je Block66

 Block65:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block66:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebp
	je Block61

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block61
}
}
// CUIReceiveGift::SetValues
_SUB_EXCEPTION_HANDLER(381620)
__SUB_CLASS_THIS(00381620, __thiscall, 54233,  CUIReceiveGift, void, long, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_381620
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0x1C]
	push ecx
	lea ecx,[esi+0xA4]
	mov dword ptr [esp+0x14],1
	mov dword ptr [esi+0xA0],eax
	call ZXString<char>::op_assign
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esi+0xA8]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x10],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x20]
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
	ret 0xC
}
}
// CUIAdminAntiMacro::Draw
_SUB_EXCEPTION_HANDLER(38CF40)
__SUB_CLASS_THIS(0038CF40, __thiscall, 54286,  CUIAdminAntiMacro, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38CF40
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
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
	mov dword ptr [ebp-0x64],ebx
	mov eax,dword ptr [ebp+8]
	push eax
	call CWnd::Draw
	call dword ptr [ZImports::_timeGetTime]
	sub eax,dword ptr [ebx+0xA4]
	mov edi,0
	js Block2

 Block1:
	mov dword ptr [ebx+0xA8],edi

 Block2:
	mov dword ptr [ebp-0x38],edi
	lea ecx,[ebp-0x50]
	push ecx
	mov ecx,ebx
	mov dword ptr [ebp-4],edi
	call CWnd::GetCanvas
	mov ecx,dword ptr [ebx+0xA8]
	mov eax,0x88888889
	imul ecx
	add edx,ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	push eax
	lea ecx,[ebp-0x38]
	push offset _S_UIUIWINDOW2IMGMA__13
	push ecx
	mov byte ptr [ebp-4],1
	call ZXString<char>::Format
	mov edx,3
	add esp,0xC
	mov word ptr [ebp-0x24],dx
	mov dword ptr [ebp-0x1C],0xFF
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x34]
	push eax
	mov byte ptr [ebp-4],2
	call esi
	lea ecx,[ebp-0x34]
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
	lea edx,[ebp-0x48]
	push edx
	mov byte ptr [ebp-4],3
	call esi
	lea eax,[ebp-0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov edi,dword ptr [ebp-0x38]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],4
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea ecx,[ebp-0x34]
	push ecx
	lea edx,[ebp-0x48]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x4C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],5
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[ebp-0x60]
	mov byte ptr [ebp-4],4
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov edi,dword ptr [ebp-0x50]
	mov byte ptr [ebp-4],7
	test edi,edi
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	mov edx,dword ptr [ebp-0x24]
	mov esi,dword ptr [ebp-0x14]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x20]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x1C]
	push esi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x18]
	push 0x27
	push 0x6E
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push edi
	call eax
	test eax,eax
	jge Block15

 Block14:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block15:
	mov byte ptr [ebp-4],6
	test esi,esi
	je Block17

 Block16:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block17:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x60],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp-0x60]
	push ecx
	call esi

 Block21:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x48],di
	jne Block24

 Block22:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea eax,[ebp-0x48]
	push eax
	call esi

 Block25:
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x34],di
	jne Block28

 Block26:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea edx,[ebp-0x34]
	push edx
	call esi

 Block29:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],di
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[ebp-0x24]
	push ecx
	call esi

 Block33:
	mov ecx,dword ptr [ebx+0xA8]
	mov eax,0x88888889
	imul ecx
	add edx,ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cdq
	mov ecx,0xA
	idiv ecx
	push edx
	lea edx,[ebp-0x38]
	push offset _S_UIUIWINDOW2IMGMA__13
	push edx
	call ZXString<char>::Format
	mov eax,3
	add esp,0xC
	mov word ptr [ebp-0x24],ax
	mov dword ptr [ebp-0x1C],0xFF
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x48]
	push ecx
	mov byte ptr [ebp-4],8
	call esi
	lea edx,[ebp-0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	lea eax,[ebp-0x34]
	push eax
	mov byte ptr [ebp-4],9
	call esi
	lea ecx,[ebp-0x34]
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
	mov edi,dword ptr [ebp-0x38]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],0xA
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea edx,[ebp-0x48]
	push edx
	lea eax,[ebp-0x34]
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x4C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xB
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea ecx,[ebp-0x60]
	push ecx
	mov byte ptr [ebp-4],0xA
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov bl,0xC
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block42

 Block40:
	cmp eax,0x80004002
	je Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	mov ecx,dword ptr [ebp-0x24]
	mov esi,dword ptr [ebp-0x14]
	mov edi,dword ptr [ebp-0x50]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x20]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0x1C]
	push esi
	push 0x27
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x18]
	push 0x82
	push edi
	mov byte ptr [ebp-4],0xD
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block44

 Block43:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block44:
	mov byte ptr [ebp-4],bl
	test esi,esi
	je Block46

 Block45:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block46:
	mov edi,8
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x60],di
	jne Block53

 Block47:
	mov eax,dword ptr [ebp-0x58]
	xor edx,edx
	mov word ptr [ebp-0x60],dx
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block49:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block50:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x34],di
	jne Block54

 Block51:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block55

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block53:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x60]
	push eax
	call esi
	jmp Block50

 Block54:
	lea edx,[ebp-0x34]
	push edx
	call esi

 Block55:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x48],di
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [ebp-0x48],ax
	mov eax,dword ptr [ebp-0x40]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[ebp-0x48]
	push ecx
	call esi

 Block59:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],di
	jne Block62

 Block60:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[ebp-0x24]
	push eax
	call esi

 Block63:
	lea ecx,[ebp-0x38]
	push offset _S_UIUIWINDOW2IMGMA__12
	push ecx
	call ZXString<char>::Format
	mov edx,3
	add esp,8
	mov word ptr [ebp-0x24],dx
	mov dword ptr [ebp-0x1C],0xFF
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x48]
	push eax
	mov byte ptr [ebp-4],0xE
	call esi
	lea ecx,[ebp-0x48]
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
	lea edx,[ebp-0x34]
	push edx
	mov byte ptr [ebp-4],0xF
	call esi
	lea eax,[ebp-0x34]
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
	mov edi,dword ptr [ebp-0x38]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	mov bl,0x10
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea ecx,[ebp-0x48]
	push ecx
	lea edx,[ebp-0x34]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x4C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x11
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea eax,[ebp-0x60]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x12
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
	mov edx,dword ptr [ebp-0x24]
	mov esi,dword ptr [ebp-0x14]
	mov edi,dword ptr [ebp-0x50]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x20]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x1C]
	push esi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x18]
	push 0x27
	push 0x98
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push edi
	mov byte ptr [ebp-4],0x13
	call eax
	test eax,eax
	jge Block74

 Block73:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block74:
	mov byte ptr [ebp-4],0x12
	test esi,esi
	je Block76

 Block75:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block76:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x60],di
	jne Block83

 Block77:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block79

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block79:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block80:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x34],di
	jne Block84

 Block81:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block85

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block83:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x60]
	push ecx
	call esi
	jmp Block80

 Block84:
	lea eax,[ebp-0x34]
	push eax
	call esi

 Block85:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x48],di
	jne Block88

 Block86:
	mov eax,dword ptr [ebp-0x40]
	xor ecx,ecx
	mov word ptr [ebp-0x48],cx
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea edx,[ebp-0x48]
	push edx
	call esi

 Block89:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],di
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea ecx,[ebp-0x24]
	push ecx
	call esi

 Block93:
	mov edx,dword ptr [ebp-0x64]
	mov eax,dword ptr [edx+0xA8]
	cdq
	mov ecx,0x3C
	idiv ecx
	mov eax,0x66666667
	lea ecx,[ebp-0x38]
	imul edx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	push eax
	push offset _S_UIUIWINDOW2IMGMA__13
	push ecx
	call ZXString<char>::Format
	mov edx,3
	add esp,0xC
	mov word ptr [ebp-0x24],dx
	mov dword ptr [ebp-0x1C],0xFF
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x48]
	push eax
	mov byte ptr [ebp-4],0x14
	call esi
	lea ecx,[ebp-0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	lea edx,[ebp-0x34]
	push edx
	mov byte ptr [ebp-4],0x15
	call esi
	lea eax,[ebp-0x34]
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
	mov edi,dword ptr [ebp-0x38]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	mov bl,0x16
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea ecx,[ebp-0x48]
	push ecx
	lea edx,[ebp-0x34]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x4C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x17
	jne Block99

 Block98:
	push 0x80004003
	call _com_issue_error

 Block99:
	lea eax,[ebp-0x60]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x18
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block102

 Block100:
	cmp eax,0x80004002
	je Block102

 Block101:
	push eax
	call _com_issue_error

 Block102:
	mov edx,dword ptr [ebp-0x24]
	mov esi,dword ptr [ebp-0x14]
	mov edi,dword ptr [ebp-0x50]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x20]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x1C]
	push esi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x18]
	push 0x27
	push 0xA2
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push edi
	mov byte ptr [ebp-4],0x19
	call eax
	test eax,eax
	jge Block104

 Block103:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block104:
	mov byte ptr [ebp-4],0x18
	test esi,esi
	je Block106

 Block105:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block106:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x60],di
	jne Block113

 Block107:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block109

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block109:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block110:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp-0x34],di
	jne Block114

 Block111:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block115

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block113:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x60]
	push ecx
	call esi
	jmp Block110

 Block114:
	lea eax,[ebp-0x34]
	push eax
	call esi

 Block115:
	mov byte ptr [ebp-4],0x14
	cmp word ptr [ebp-0x48],di
	jne Block118

 Block116:
	mov eax,dword ptr [ebp-0x40]
	xor ecx,ecx
	mov word ptr [ebp-0x48],cx
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea edx,[ebp-0x48]
	push edx
	call esi

 Block119:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],di
	jne Block122

 Block120:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea ecx,[ebp-0x24]
	push ecx
	call esi

 Block123:
	mov edx,dword ptr [ebp-0x64]
	mov eax,dword ptr [edx+0xA8]
	cdq
	mov ecx,0x3C
	idiv ecx
	mov ecx,0xA
	mov eax,edx
	cdq
	idiv ecx
	push edx
	lea edx,[ebp-0x38]
	push offset _S_UIUIWINDOW2IMGMA__13
	push edx
	call ZXString<char>::Format
	mov eax,3
	add esp,0xC
	mov word ptr [ebp-0x24],ax
	mov dword ptr [ebp-0x1C],0xFF
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x48]
	push ecx
	mov byte ptr [ebp-4],0x1A
	call esi
	lea edx,[ebp-0x48]
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
	lea eax,[ebp-0x34]
	push eax
	mov byte ptr [ebp-4],0x1B
	call esi
	lea ecx,[ebp-0x34]
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
	mov edi,dword ptr [ebp-0x38]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	mov bl,0x1C
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea edx,[ebp-0x48]
	push edx
	lea eax,[ebp-0x34]
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x4C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x1D
	jne Block129

 Block128:
	push 0x80004003
	call _com_issue_error

 Block129:
	lea ecx,[ebp-0x60]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block132

 Block130:
	cmp eax,0x80004002
	je Block132

 Block131:
	push eax
	call _com_issue_error

 Block132:
	mov ecx,dword ptr [ebp-0x24]
	mov esi,dword ptr [ebp-0x14]
	mov edi,dword ptr [ebp-0x50]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x20]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0x1C]
	push esi
	push 0x27
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x18]
	push 0xB6
	push edi
	mov byte ptr [ebp-4],0x1F
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block134

 Block133:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block134:
	mov byte ptr [ebp-4],0x1E
	test esi,esi
	je Block136

 Block135:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block136:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x60],di
	jne Block143

 Block137:
	mov eax,dword ptr [ebp-0x58]
	xor edx,edx
	mov word ptr [ebp-0x60],dx
	test eax,eax
	je Block139

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block139:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block140:
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp-0x34],di
	jne Block144

 Block141:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block145

 Block142:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block143:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x60]
	push eax
	call esi
	jmp Block140

 Block144:
	lea edx,[ebp-0x34]
	push edx
	call esi

 Block145:
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp-0x48],di
	jne Block148

 Block146:
	xor eax,eax
	mov word ptr [ebp-0x48],ax
	mov eax,dword ptr [ebp-0x40]
	test eax,eax
	je Block149

 Block147:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block149

 Block148:
	lea ecx,[ebp-0x48]
	push ecx
	call esi

 Block149:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],di
	jne Block152

 Block150:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block153

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block153

 Block152:
	lea eax,[ebp-0x24]
	push eax
	call esi

 Block153:
	mov dword ptr [ebp-0x14],0
	lea ecx,[ebp-0x68]
	push 0x1A15
	push ecx
	mov byte ptr [ebp-4],0x20
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp-0x64]
	mov eax,dword ptr [eax]
	xor edx,edx
	cmp dword ptr [ecx+0xAC],edx
	mov byte ptr [ebp-4],0x21
	setne dl
	inc edx
	push edx
	push eax
	lea edx,[ebp-0x14]
	push edx
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x68]
	add esp,0xC
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block155

 Block154:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block155:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x48]
	push eax
	call esi
	lea ecx,[ebp-0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block157

 Block156:
	push eax
	call _com_issue_error

 Block157:
	lea edx,[ebp-0x34]
	push edx
	mov byte ptr [ebp-4],0x22
	call esi
	lea eax,[ebp-0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block159

 Block158:
	push eax
	call _com_issue_error

 Block159:
	lea ecx,[ebp-0x48]
	push ecx
	lea edx,[ebp-0x34]
	push edx
	lea eax,[ebp-0x4C]
	push 0x22
	push eax
	mov byte ptr [ebp-4],0x23
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edi,dword ptr [ebp-0x14]
	push eax
	push ecx
	mov dword ptr [ebp-0x6C],esp
	mov ecx,esp
	mov bl,0x24
	push edi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov esi,dword ptr [ebp-0x64]
	lea ecx,[ebp-0x68]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x25
	call CWnd::GetCanvas
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x26
	test ecx,ecx
	jne Block161

 Block160:
	push 0x80004003
	call _com_issue_error

 Block161:
	push 0xE1
	push 0xAA
	mov byte ptr [ebp-4],0x27
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x68]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block163

 Block162:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block163:
	mov eax,dword ptr [ebp-0x4C]
	mov byte ptr [ebp-4],0x23
	test eax,eax
	je Block165

 Block164:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block165:
	mov ebx,8
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp-0x34],bx
	jne Block168

 Block166:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block169

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block169

 Block168:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block169:
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp-0x48],bx
	jne Block172

 Block170:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	test eax,eax
	je Block173

 Block171:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block173

 Block172:
	lea eax,[ebp-0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block173:
	cmp dword ptr [esi+0xB0],0
	je Block184

 Block174:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block176

 Block175:
	push eax
	call _com_issue_error

 Block176:
	lea eax,[ebp-0x4C]
	mov bl,0x28
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call CWnd::GetCanvas
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [esi+0xB0]
	mov byte ptr [ebp-4],0x29
	test ecx,ecx
	jne Block178

 Block177:
	push 0x80004003
	call _com_issue_error

 Block178:
	lea eax,[ebp-0x34]
	push eax
	push edx
	push 0x99
	push 0x51
	call IWzCanvas::Copy
	mov eax,dword ptr [ebp-0x4C]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block180

 Block179:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block180:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],0x20
	jne Block183

 Block181:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block184

 Block182:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block184

 Block183:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block184:
	mov byte ptr [ebp-4],1
	test edi,edi
	je Block186

 Block185:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block186:
	mov eax,dword ptr [ebp-0x50]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0
	call eax
	mov eax,dword ptr [ebp-0x38]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block188

 Block187:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block188:
	lea esp,[ebp-0x7C]
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
// CUIInitialQuiz::~CUIInitialQuiz
_SUB_EXCEPTION_HANDLER(38E5D0)
__SUB_CLASS_THIS0(0038E5D0, __thiscall, 54350,  CUIInitialQuiz, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38E5D0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIInitialQuiz::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIInitialQuiz::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIInitialQuiz::`vftable'{for `ZRefCounted'}
	mov ecx,dword ptr [esi+0xA8]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],7
	cmp ecx,ebx
	je Block2

 Block1:
	call CWnd::Destroy

 Block2:
	mov eax,dword ptr [esi+0xB4]
	mov byte ptr [esp+0x1C],6
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esi+0xB0]
	mov byte ptr [esp+0x1C],5
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esi+0xAC]
	mov byte ptr [esp+0x1C],4
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	lea edi,[esi+0xA4]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CDialog>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIInitialQuiz>::ms_pInstance],ebx
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
// CUISpeedQuiz::SetValues
_SUB_EXCEPTION_HANDLER(3919E0)
__SUB_CLASS_THIS(003919E0, __thiscall, 54390,  CUISpeedQuiz, void, long, unsigned long, long, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3919E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov edi,ecx
	mov dword ptr [ebp-0x18],edi
	xor ebx,ebx
	mov dword ptr [ebp-0x14],ebx
	mov eax,dword ptr [ebp+0x10]
	mov ecx,dword ptr [ebp+0x14]
	mov dword ptr [edi+0xC0],eax
	mov dword ptr [edi+0xC4],ecx
	call dword ptr [ZImports::_timeGetTime]
	mov ecx,dword ptr [ebp+0x18]
	add eax,ecx
	mov dword ptr [edi+0xC8],eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov dword ptr [edi+0xD0],eax
	mov eax,dword ptr [ebp+8]
	mov dword ptr [edi+0xD8],eax
	cmp eax,ebx
	je Block9

 Block1:
	cmp eax,1
	je Block9

 Block2:
	mov ecx,dword ptr [ebp+0xC]
	push ebx
	push 1
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[ebp+0xC]
	push edx
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xBC]
	cmp esi,eax
	je Block7

 Block3:
	mov dword ptr [edi+0xBC],eax
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
	mov eax,dword ptr [ebp+0xC]
	cmp eax,ebx
	je Block43

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block43

 Block9:
	mov dword ptr [ebp+0x10],ebx
	mov dword ptr [ebp-4],ebx
	cmp eax,1
	jne Block11

 Block10:
	lea ecx,[ebp+0x18]
	push 0x667
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [ebp-4],1
	mov ebx,1
	jmp Block12

 Block11:
	lea edx,[ebp+0x14]
	push 0xAB9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,2
	mov dword ptr [ebp-4],ebx

 Block12:
	mov ecx,dword ptr [ebp+0xC]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x10]
	push edx
	mov dword ptr [ebp-0x14],ebx
	call ZXString<char>::Format
	add esp,0xC
	mov dword ptr [ebp-4],1
	test bl,2
	je Block15

 Block13:
	mov eax,dword ptr [ebp+0x14]
	and ebx,0xFFFFFFFD
	mov dword ptr [ebp-0x14],ebx
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov dword ptr [ebp-4],0
	test bl,1
	je Block18

 Block16:
	mov eax,dword ptr [ebp+0x18]
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x38]
	push eax
	mov byte ptr [ebp-4],3
	call esi
	lea ecx,[ebp-0x38]
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
	lea edx,[ebp-0x28]
	push edx
	mov byte ptr [ebp-4],4
	call esi
	lea eax,[ebp-0x28]
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
	mov esi,dword ptr [ebp+0x10]
	push 0
	push 0
	lea ecx,[ebp-0x38]
	push ecx
	lea edx,[ebp-0x28]
	push edx
	push ecx
	mov dword ptr [ebp+0xC],esp
	mov ecx,esp
	mov bl,5
	push esi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],6
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea eax,[ebp-0x48]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xBC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block27

 Block25:
	cmp eax,0x80004002
	je Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	mov byte ptr [ebp-4],bl
	mov ebx,8
	cmp word ptr [ebp-0x48],bx
	jne Block30

 Block28:
	mov eax,dword ptr [ebp-0x40]
	xor ecx,ecx
	mov word ptr [ebp-0x48],cx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[ebp-0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x28],bx
	jne Block34

 Block32:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea ecx,[ebp-0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x38],bx
	jne Block38

 Block36:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	test eax,eax
	je Block41

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block38:
	lea eax,[ebp-0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]
	jmp Block41

 Block41:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test esi,esi
	je Block43

 Block42:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block43:
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x14
}
}
// CUIChangingLicenseNotice::HitTest
__SUB_CLASS_THIS(0037F340, __thiscall, 54514,  CUIChangingLicenseNotice, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+0x10]
	push edi
	mov edi,ecx
	test esi,esi
	jne Block2

 Block1:
	pop edi
	xor eax,eax
	pop esi
	ret 0xC

 Block2:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [esp+0xC]
	push esi
	push eax
	push ecx
	mov ecx,edi
	call CWnd::HitTest
	test eax,eax
	je Block6

 Block3:
	cmp dword ptr [esi],0
	jne Block6

 Block4:
	cmp dword ptr [edi+0x3C],0
	je Block6

 Block5:
	mov eax,1

 Block6:
	pop edi
	pop esi
	ret 0xC
}
}
// CUIAdminAntiMacro::CUIAdminAntiMacro
_SUB_EXCEPTION_HANDLER(38CAC0)
__SUB_CLASS_THIS0(0038CAC0, __thiscall, 54282,  CUIAdminAntiMacro, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38CAC0
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
	mov dword ptr [esp+0x24],esi
	call CDialog::_ctor_default
	xor edi,edi
	lea eax,[esi+0x91]
	mov dword ptr [esp+0x30],edi
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFF6F
	mov dword ptr [TSingleton<CUIAdminAntiMacro>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIAdminAntiMacro>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIAdminAntiMacro::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIAdminAntiMacro::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIAdminAntiMacro::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xAC],1
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0xC4],edi
	push edi
	push edi
	push 1
	push edi
	push edi
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGMA__14
	mov byte ptr [esp+0x4C],5
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov ebx,dword ptr [esi+0x78]
	cmp ebx,edi
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x14]
	push ecx
	push ebx
	mov dword ptr [esp+0x1C],edi
	call edx
	cmp eax,edi
	jge Block7

 Block6:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block7:
	mov ebx,dword ptr [esi+0x78]
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],eax
	cmp ebx,edi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x18]
	push edx
	push ebx
	mov dword ptr [esp+0x20],edi
	call eax
	cmp eax,edi
	jge Block11

 Block10:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block11:
	mov ebx,dword ptr [esi+0x78]
	mov ebp,dword ptr [esp+0x18]
	cmp ebx,edi
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	mov dword ptr [esp+0x24],edi
	call eax
	cmp eax,edi
	jge Block15

 Block14:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block15:
	mov ecx,dword ptr [esp+0x20]
	push 1
	push edi
	push edi
	push 1
	push 0xA
	push ecx
	push ebp
	mov edx,0xFFFFFFD8
	sub edx,dword ptr [esp+0x38]
	push 0xA
	push edx
	mov ecx,esi
	call CWnd::CreateWnd
	mov eax,esi
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
// CUIReceiveGift::CUIReceiveGift
_SUB_EXCEPTION_HANDLER(380A30)
__SUB_CLASS_THIS0(00380A30, __thiscall, 54226,  CUIReceiveGift, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_380A30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],esi
	call CDialog::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CUIReceiveGift::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIReceiveGift::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIReceiveGift::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xAC],edi
	lea eax,[esp+0xC]
	push 0xC4F
	push eax
	mov byte ptr [esp+0x24],5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x2C],6
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x1C],5
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret
}
}
// CUIMapleTV::GetText
_SUB_EXCEPTION_HANDLER(3949C0)
__SUB_CLASS_THIS(003949C0, __thiscall, 54601,  CUIMapleTV, void, ZXString<char>&, ZXString<char>&, ZXString<char>&, ZXString<char>&, ZXString<char>&, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3949C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebx,1
	or ebp,0xFFFFFFFF
	cmp dword ptr [esi+0xD0],ebx
	je Block3

 Block1:
	mov ecx,dword ptr [esi+0xC4]
	lea eax,[esp+0x14]
	push eax
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esp+0x50]
	push eax
	mov dword ptr [esp+0x4C],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x48],ebp
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	mov ecx,dword ptr [esi+0xCC]
	xor eax,eax
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x38],eax
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x28],eax
	mov eax,dword ptr [ecx+0x44]
	test eax,eax
	jne Block5

 Block4:
	xor edi,edi
	jmp Block7

 Block5:
	mov edi,dword ptr [eax-4]
	cmp edi,5
	jle Block7

 Block6:
	mov edi,5

 Block7:
	xor eax,eax
	test edi,edi
	jle Block16

 Block8:
	test eax,eax
	jne Block12

 Block9:
	mov dword ptr [esp+0x2C],eax
	cmp edi,ebx
	jne Block11

 Block10:
	mov dword ptr [esp+0x18],ebp
	jmp Block15

 Block11:
	mov edx,dword ptr [ecx+0x44]
	mov edx,dword ptr [edx+4]
	mov dword ptr [esp+0x18],edx
	jmp Block15

 Block12:
	lea edx,[edi-1]
	cmp eax,edx
	jne Block14

 Block13:
	mov edx,dword ptr [ecx+0x44]
	mov edx,dword ptr [edx+eax*4]
	mov dword ptr [esp+eax*4+0x2C],edx
	mov dword ptr [esp+eax*4+0x18],ebp
	jmp Block15

 Block14:
	mov edx,ecx
	mov ebp,dword ptr [edx+0x44]
	mov ebp,dword ptr [ebp+eax*4]
	mov edx,dword ptr [edx+0x44]
	mov edx,dword ptr [edx+eax*4+4]
	mov dword ptr [esp+eax*4+0x2C],ebp
	mov dword ptr [esp+eax*4+0x18],edx
	or ebp,0xFFFFFFFF

 Block15:
	add eax,ebx
	cmp eax,edi
	jl Block8

 Block16:
	lea eax,[esp+0x14]
	push eax
	call CCtrlMLEdit::GetText
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x2C]
	push ecx
	push edx
	lea ecx,[esp+0x58]
	push ecx
	mov ecx,eax
	mov dword ptr [esp+0x54],ebx
	call ZXString<char>::Substring
	mov ecx,dword ptr [esp+0x54]
	push eax
	mov byte ptr [esp+0x4C],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x48],bl
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x48],ebp
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov ecx,dword ptr [esi+0xCC]
	lea edx,[esp+0x54]
	push edx
	call CCtrlMLEdit::GetText
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x30]
	push ecx
	push edx
	lea ecx,[esp+0x58]
	push ecx
	mov ebx,3
	mov ecx,eax
	mov dword ptr [esp+0x54],ebx
	call ZXString<char>::Substring
	mov ecx,dword ptr [esp+0x58]
	push eax
	mov byte ptr [esp+0x4C],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x48],bl
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x48],ebp
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov ecx,dword ptr [esi+0xCC]
	lea edx,[esp+0x54]
	push edx
	call CCtrlMLEdit::GetText
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x34]
	push ecx
	push edx
	lea ecx,[esp+0x58]
	push ecx
	mov ecx,eax
	mov dword ptr [esp+0x54],5
	call ZXString<char>::Substring
	mov ecx,dword ptr [esp+0x5C]
	push eax
	mov byte ptr [esp+0x4C],6
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x48],5
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x48],ebp
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov ecx,dword ptr [esi+0xCC]
	lea edx,[esp+0x54]
	push edx
	call CCtrlMLEdit::GetText
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x38]
	push ecx
	push edx
	lea ecx,[esp+0x58]
	push ecx
	mov ebx,7
	mov ecx,eax
	mov dword ptr [esp+0x54],ebx
	call ZXString<char>::Substring
	mov ecx,dword ptr [esp+0x60]
	push eax
	mov byte ptr [esp+0x4C],8
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x48],bl
	test eax,eax
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x48],ebp
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	mov ecx,dword ptr [esi+0xCC]
	lea edx,[esp+0x5C]
	push edx
	call CCtrlMLEdit::GetText
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x3C]
	push ecx
	push edx
	lea ecx,[esp+0x60]
	push ecx
	mov ebx,9
	mov ecx,eax
	mov dword ptr [esp+0x54],ebx
	call ZXString<char>::Substring
	mov ecx,dword ptr [esp+0x64]
	push eax
	mov byte ptr [esp+0x4C],0xA
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x48],bl
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x48],ebp
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 0x18
}
}
// CSlideNotice::OnCreate
_SUB_EXCEPTION_HANDLER(37FBE0)
__SUB_CLASS_THIS(0037FBE0, __thiscall, 54021,  CSlideNotice, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_37FBE0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	lea eax,[esp+8]
	push eax
	call CWnd::GetCanvas
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x14],0
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0x80000000
	push 0x300
	push 0x400
	push 0
	push 0
	push esi
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CUIAntiMacro::CUIAntiMacro
_SUB_EXCEPTION_HANDLER(38B6B0)
__SUB_CLASS_THIS0(0038B6B0, __thiscall, 54249,  CUIAntiMacro, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38B6B0
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
	mov dword ptr [esp+0x24],esi
	call CDialog::_ctor_default
	xor edi,edi
	lea eax,[esi+0x91]
	mov dword ptr [esp+0x30],edi
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFF6F
	mov dword ptr [TSingleton<CUIAntiMacro>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIAntiMacro>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIAntiMacro::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIAntiMacro::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIAntiMacro::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xAC],1
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0xC4],edi
	push edi
	push edi
	push 1
	push edi
	push edi
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGMA__10
	mov byte ptr [esp+0x4C],5
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov ebx,dword ptr [esi+0x78]
	cmp ebx,edi
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x14]
	push ecx
	push ebx
	mov dword ptr [esp+0x1C],edi
	call edx
	cmp eax,edi
	jge Block7

 Block6:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block7:
	mov ebx,dword ptr [esi+0x78]
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],eax
	cmp ebx,edi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x18]
	push edx
	push ebx
	mov dword ptr [esp+0x20],edi
	call eax
	cmp eax,edi
	jge Block11

 Block10:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block11:
	mov ebx,dword ptr [esi+0x78]
	mov ebp,dword ptr [esp+0x18]
	cmp ebx,edi
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	mov dword ptr [esp+0x24],edi
	call eax
	cmp eax,edi
	jge Block15

 Block14:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block15:
	mov ecx,dword ptr [esp+0x20]
	push 1
	push 1
	push edi
	push 1
	push 0xA
	push ecx
	push ebp
	mov edx,0xFFFFFFD8
	sub edx,dword ptr [esp+0x38]
	push 0xA
	push edx
	mov ecx,esi
	call CWnd::CreateWnd
	mov eax,esi
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
// CUIChangingLicenseNotice::OnCreate
_SUB_EXCEPTION_HANDLER(39C850)
__SUB_CLASS_THIS(0039C850, __thiscall, 54511,  CUIChangingLicenseNotice, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39C850
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x8C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push 0xFB5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov ecx,esi
	call CUIChangingLicenseNotice::LoadFont
	mov dword ptr [esp+0x48],ebx
	mov dword ptr [esp+0x3C],1
	mov dword ptr [esp+0x40],ebx
	mov dword ptr [esp+0x44],ebx
	lea ecx,[esp+0x28]
	push 0x512
	push ecx
	mov dword ptr [esp+0x9C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x98],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x94],bl
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
	mov dword ptr [esp+0x2C],eax
	mov byte ptr [esp+0x94],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0x94],bl
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
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x30],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x30]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x98]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x3C]
	push edx
	push ebx
	push 0x18B
	push 0x113
	push 1
	push esi
	call eax
	mov eax,dword ptr [esi+0x98]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	lea ecx,[esp+0x28]
	push 0x513
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x98],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x94],bl
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
	mov dword ptr [esp+0x2C],eax
	mov byte ptr [esp+0x94],4
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
	mov byte ptr [esp+0x94],bl
	cmp eax,ebx
	je Block25

 Block18:
	add eax,8
	cmp eax,ebx
	je Block25

 Block19:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block21

 Block20:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block21:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esp+0x30],eax
	cmp eax,ebx
	je Block23

 Block22:
	push ebx
	lea ecx,[esp+0x30]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [esi+0xA0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x3C]
	push edx
	push ebx
	push 0x18B
	push 0x154
	push 2
	push esi
	call eax
	push 0x14
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebx
	je Block26

 Block24:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CTextAnalyzer::`vftable'
	mov dword ptr [eax+0x10],0x15E
	mov dword ptr [eax+0xC],7
	mov dword ptr [esp+0x14],eax
	jmp Block27

 Block25:
	xor edi,edi
	jmp Block21

 Block26:
	mov dword ptr [esp+0x14],ebx
	mov eax,ebx

 Block27:
	mov dword ptr [esp+0x38],eax
	cmp eax,ebx
	je Block29

 Block28:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block29:
	mov dword ptr [esp+0x1C],ebx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x98],6
	call edi
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block31

 Block30:
	push eax
	call _com_issue_error

 Block31:
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x98],7
	call edi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	push ebx
	push ebx
	lea edx,[esp+0x64]
	push edx
	lea eax,[esp+0x58]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0xFB6
	push ecx
	mov byte ptr [esp+0xB0],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xA8],9
	cmp dword ptr [_D_G_RM],ebx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea edx,[esp+0x80]
	mov byte ptr [esp+0xA8],8
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x9C],0xA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block38

 Block36:
	cmp eax,0x80004002
	je Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	mov edi,8
	mov byte ptr [esp+0x94],0xC
	cmp word ptr [esp+0x6C],di
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	cmp eax,ebx
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov byte ptr [esp+0x94],0xD
	cmp word ptr [esp+0x4C],di
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,ebx
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov byte ptr [esp+0x94],0xE
	cmp word ptr [esp+0x5C],di
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	cmp eax,ebx
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea edx,[esp+0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov ebp,dword ptr [esp+0x20]
	xor edi,edi
	mov dword ptr [esp+0x18],edi
	cmp ebp,ebx
	je Block34

 Block51:
	mov edi,edi

 Block52:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x24]
	push ecx
	push ebp
	mov dword ptr [esp+0x2C],ebx
	call edx
	cmp eax,ebx
	jge Block54

 Block53:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebp
	push eax
	call _com_issue_errorex

 Block54:
	cmp edi,dword ptr [esp+0x24]
	jae Block72

 Block55:
	lea eax,[esp+0x2C]
	push 0x1A64
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x28],ebx
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0xA0],0x10
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,8
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	lea edx,[esp+0x80]
	mov byte ptr [esp+0x98],0x11
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x9C],0x10
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0x94],0x12
	jne Block57

 Block56:
	mov eax,dword ptr [eax+8]
	jmp Block58

 Block57:
	mov eax,offset _S___3

 Block58:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],ebx
	call ZXString<char>::AssignWideStr
	cmp word ptr [esp+0x7C],8
	mov byte ptr [esp+0x94],0x14
	jne Block61

 Block59:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	cmp eax,ebx
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea ecx,[esp+0x7C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x94],0x15
	cmp eax,ebx
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block64:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x94],0x16
	cmp eax,ebx
	je Block66

 Block65:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block66:
	mov edi,dword ptr [esp+0x24]
	cmp edi,ebx
	je Block68

 Block67:
	mov eax,dword ptr [edi-4]
	jmp Block69

 Block68:
	xor eax,eax

 Block69:
	push eax
	push edi
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	mov byte ptr [esp+0x94],0xE
	cmp edi,ebx
	je Block71

 Block70:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block71:
	inc dword ptr [esp+0x18]
	mov edi,dword ptr [esp+0x18]
	jmp Block52

 Block72:
	push ebx
	push ebx
	push ebx
	lea edx,[esi+0xB0]
	push edx
	lea eax,[esi+0xAC]
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x34]
	mov dword ptr [esp+0x3C],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x2C]
	call CTextAnalyzer::AnalyzeText
	lea ecx,[eax-0x13D]
	mov eax,0x92492493
	imul ecx
	add edx,ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	lea ecx,[edx+eax-0xF]
	mov dword ptr [esi+0xB8],ecx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0x94],0x17
	cmp eax,ebx
	je Block74

 Block73:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block75

 Block74:
	xor eax,eax

 Block75:
	mov byte ptr [esp+0x94],0xE
	cmp eax,ebx
	je Block91

 Block76:
	add eax,8
	cmp eax,ebx
	je Block91

 Block77:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block79

 Block78:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block79:
	mov eax,dword ptr [esi+0xA8]
	mov dword ptr [esi+0xA8],edi
	cmp eax,ebx
	je Block83

 Block80:
	lea edi,[eax+8]
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block83

 Block81:
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block83

 Block82:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block83:
	mov ecx,dword ptr [esi+0xA8]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push ebx
	push 0x144
	push 0x2F
	push 0x180
	push 5
	push 1
	push 0x3E8
	push esi
	call eax
	mov eax,dword ptr [esi+0xB8]
	mov ecx,dword ptr [esi+0xA8]
	xor edx,edx
	cmp eax,1
	setl dl
	inc edx
	add edx,eax
	push edx
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [esi+0xA8]
	mov dword ptr [eax+0x34],0x163
	mov eax,dword ptr [esp+0x9C]
	mov dword ptr [esi+0x90],eax
	mov eax,dword ptr [eax+0x4F0]
	mov dword ptr [esi+0xC0],eax
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0x98],6
	call edx
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x94],5
	cmp eax,ebx
	je Block85

 Block84:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block85:
	mov edi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x94],bl
	cmp edi,ebx
	je Block88

 Block86:
	lea esi,[edi+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block88

 Block87:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block88:
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp eax,ebx
	je Block90

 Block89:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block90:
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret 4

 Block91:
	xor edi,edi
	jmp Block79
}
}
// CUITransferWorldLicenseNotice::Draw
_SUB_EXCEPTION_HANDLER(394130)
__SUB_CLASS_THIS(00394130, __thiscall, 54539,  CUITransferWorldLicenseNotice, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_394130
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
	mov ebp,ecx
	mov eax,dword ptr [esp+0x70]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebp
	call CWnd::GetCanvas
	xor esi,esi
	mov edx,3
	mov dword ptr [esp+0x68],esi
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],1
	mov ebx,dword ptr [esp+0x18]
	mov byte ptr [esp+0x68],1
	cmp ebx,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+0x20]
	push eax
	push 0x13B
	push 0x161
	push 0x33
	push 0x1D
	lea ecx,[esp+0x64]
	push ecx
	mov ecx,ebx
	call IWzCanvas::SetClipRect
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x68],3
	jne Block5

 Block3:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	cmp eax,esi
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block6:
	mov dword ptr [esp+0x70],esi
	mov dword ptr [esp+0x14],esi
	jmp Block8

 Block8:
	mov eax,dword ptr [ebp+0xAC]
	test eax,eax
	je Block24

 Block9:
	mov ecx,dword ptr [esp+0x70]
	cmp ecx,dword ptr [eax-4]
	jae Block24

 Block10:
	mov edi,eax
	add edi,dword ptr [esp+0x14]
	mov eax,dword ptr [edi+8]
	mov esi,dword ptr [edi+0x1C]
	lea edx,[eax+eax*4]
	sub esi,edx
	mov eax,esi
	sub eax,dword ptr [ebp+0xB4]
	cmp eax,0xFFFFFFD0
	jl Block22

 Block11:
	cmp eax,0x155
	jge Block22

 Block12:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block23

 Block13:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x6C],4
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block23

 Block14:
	mov eax,dword ptr [edi+0xC]
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push eax
	mov eax,dword ptr [edi+0x10]
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x7C],5
	call _xbstr_t::_ctor_0
	sub esi,dword ptr [ebp+0xB4]
	mov eax,dword ptr [edi+0x18]
	add esi,0x33
	push esi
	add eax,0x1D
	mov byte ptr [esp+0x7C],6
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x80],5
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x68],4
	cmp word ptr [esp+0x30],si
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov byte ptr [esp+0x68],3
	cmp word ptr [esp+0x40],si
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [esp+0x70]
	add dword ptr [esp+0x14],0x44
	jmp Block8

 Block21:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	inc dword ptr [esp+0x70]
	add dword ptr [esp+0x14],0x44
	jmp Block8

 Block23:
	push eax
	call _com_issue_error

 Block24:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x68],0
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	call edx
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
// CUITransferWorldLicenseNotice::OnChildNotify
__SUB_CLASS_THIS(0037F730, __thiscall, 54540,  CUITransferWorldLicenseNotice, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	cmp edi,0x3E8
	jne Block7

 Block1:
	cmp ebx,0x12C
	jb Block7

 Block2:
	cmp ebx,0x130
	ja Block7

 Block3:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi+0xA8]
	lea eax,[eax+eax*4]
	mov dword ptr [esi+0xB4],eax
	mov edx,dword ptr [ecx+0x38]
	mov eax,dword ptr [esi+0x98]
	cmp edx,dword ptr [esi+0xB8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	jl Block5

 Block4:
	push 1
	jmp Block6

 Block5:
	push 0

 Block6:
	call edx
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block7:
	cmp ebx,0x64
	jne Block9

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push edi
	mov ecx,esi
	call edx

 Block9:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CUIChangingLicenseNotice::CUIChangingLicenseNotice
_SUB_EXCEPTION_HANDLER(39F360)
__SUB_CLASS_THIS(0039F360, __thiscall, 54508,  CUIChangingLicenseNotice, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39F360
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIChangingLicenseNotice::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIChangingLicenseNotice::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIChangingLicenseNotice::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esi+0x98],eax
	mov dword ptr [esi+0xA0],eax
	mov dword ptr [esi+0xA8],eax
	mov dword ptr [esi+0xAC],eax
	mov dword ptr [esi+0xB0],eax
	push eax
	mov dword ptr [esi+0xB4],eax
	mov eax,dword ptr [esp+0x20]
	push eax
	push 1
	push 0xD2
	push 0x1A8
	push 0x196
	push 0x30
	push 0xC5
	mov ecx,esi
	mov byte ptr [esp+0x34],5
	mov dword ptr [esi+0xB8],0xFFFFFFFF
	call CDialog::CreateDlg_0
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CUISendGifts::GetCharacterNameFromPoint
__SUB_CLASS_THIS(0038A220, __thiscall, 54059,  CUISendGifts, ZXString<char>*, ZXString<char>*, long, long, long, int32_t) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x14]
	push esi
	xor ebx,ebx
	push edi
	xor edi,edi
	mov esi,ecx
	mov dword ptr [esp+0x10],ebx
	cmp dword ptr [esp+0x28],ebx
	je Block8

 Block1:
	lea esp,[esp]

 Block2:
	mov eax,dword ptr [esi+0xFC]
	test eax,eax
	je Block13

 Block3:
	cmp edi,dword ptr [eax-4]
	jae Block13

 Block4:
	mov ecx,dword ptr [esp+0x20]
	push ecx
	add eax,ebx
	push ebp
	add eax,8
	push eax
	call PtInRect
	test eax,eax
	jne Block6

 Block5:
	inc edi
	add ebx,0x18
	jmp Block2

 Block6:
	mov ecx,dword ptr [esi+0xFC]
	mov esi,dword ptr [esp+0x18]
	lea eax,[edi+edi*2]
	lea eax,[ecx+eax*8]
	add eax,4
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 0x14

 Block8:
	mov eax,dword ptr [esi+0x100]
	test eax,eax
	je Block13

 Block9:
	cmp edi,dword ptr [eax-4]
	jae Block13

 Block10:
	mov ecx,dword ptr [esp+0x20]
	push ecx
	add eax,ebx
	push ebp
	add eax,8
	push eax
	call PtInRect
	test eax,eax
	jne Block12

 Block11:
	inc edi
	add ebx,0x18
	jmp Block8

 Block12:
	mov eax,dword ptr [esi+0x100]
	mov esi,dword ptr [esp+0x18]
	lea edx,[edi+edi*2]
	lea eax,[eax+edx*8]
	add eax,4
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 0x14

 Block13:
	mov esi,dword ptr [esp+0x18]
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 0x14
}
}
// CMatchTableDlg::DrawCharacterName
_SUB_EXCEPTION_HANDLER(3862A0)
__SUB_CLASS_THIS0(003862A0, __thiscall, 53959,  CMatchTableDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3862A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xBC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x18],edi
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov dword ptr [esp+0xC4],ebp
	mov dword ptr [esp+0xB8],ebp
	mov eax,3
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],ebp
	mov ecx,dword ptr [edi+0x408]
	mov byte ptr [esp+0xC4],2
	cmp ecx,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov eax,dword ptr [eax]
	cmp eax,ebp
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	mov dword ptr [esp+0x18],eax
	call edx

 Block4:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xC4],1
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	lea edx,[edi+0x98]
	mov dword ptr [esp+0x20],ebp
	lea ebx,[edi+0x3D0]
	mov dword ptr [esp+0x1C],edx
	jmp Block13

 Block12:
	xor ebp,ebp

 Block13:
	mov eax,dword ptr [esp+0x1C]
	cmp dword ptr [eax],ebp
	je Block16

 Block14:
	mov eax,dword ptr [ebx]
	cmp eax,ebp
	je Block16

 Block15:
	cmp dword ptr [eax-4],ebp
	jne Block17

 Block16:
	push ebp
	push 3
	mov ecx,ebx
	call ZXString<char>::GetBuffer
	mov cx,word ptr [_S___32]
	mov word ptr [eax],cx
	mov dl,byte ptr [_S___32+2]
	push 3
	mov ecx,ebx
	mov byte ptr [eax+2],dl
	call ZXString<char>::ReleaseBuffer

 Block17:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block79

 Block18:
	mov eax,dword ptr [ebx]
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xD0],3
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0x414]
	mov byte ptr [esp+0xCC],4
	cmp ecx,ebp
	je Block1

 Block19:
	mov byte ptr [esp+0xCC],3
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x28],8
	mov ebp,eax
	mov byte ptr [esp+0xC4],1
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	lea edx,[esp+0x68]
	push edx
	call esi
	lea eax,[esp+0x68]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block79

 Block24:
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0xC8],5
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block79

 Block25:
	lea eax,[esp+0x68]
	push eax
	mov eax,dword ptr [edi+0x414]
	lea ecx,[esp+0x3C]
	push ecx
	push eax
	mov eax,dword ptr [ebx]
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xD8],6
	call _xbstr_t::_ctor_0
	cmp dword ptr [esp+0x24],0
	mov byte ptr [esp+0xD4],7
	je Block1

 Block26:
	mov eax,dword ptr [esp+0x30]
	cdq
	sub eax,edx
	mov esi,eax
	mov eax,ebp
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0x30]
	mov ebp,eax
	sar esi,1
	sar ebp,1
	and edx,0x80000001
	push 0x189
	jns Block28

 Block27:
	dec edx
	or edx,0xFFFFFFFE
	inc edx

 Block28:
	mov ecx,dword ptr [esp+0x28]
	imul edx,0x53
	mov eax,esi
	imul eax,0xAE
	add edx,eax
	sub edx,ebp
	add edx,0x2A
	push edx
	mov byte ptr [esp+0xDC],6
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0xC4],5
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0xC4],1
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax]
	lea edx,[esi+esi*2]
	cmp ecx,dword ptr [edi+edx*8+0x9C]
	jne Block77

 Block37:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block79

 Block38:
	lea ecx,[esp+0x88]
	push ecx
	mov byte ptr [esp+0xC8],8
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x88]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block79

 Block39:
	lea eax,[esp+0x48]
	push eax
	mov eax,dword ptr [edi+0x414]
	lea ecx,[esp+0x8C]
	push ecx
	push eax
	mov eax,dword ptr [ebx]
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xD8],9
	call _xbstr_t::_ctor_0
	mov eax,esi
	cdq
	sub eax,edx
	mov edi,eax
	mov edx,esi
	sar edi,1
	and edx,0x80000001
	mov byte ptr [esp+0xD4],0xA
	push 0x121
	jns Block41

 Block40:
	dec edx
	or edx,0xFFFFFFFE
	inc edx

 Block41:
	mov ecx,dword ptr [esp+0x28]
	lea eax,[edx+edi*2]
	imul eax,0xAF
	sub eax,ebp
	add eax,0x51
	push eax
	mov byte ptr [esp+0xDC],9
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x88],8
	mov byte ptr [esp+0xC4],8
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x90]
	xor ecx,ecx
	mov word ptr [esp+0x88],cx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea edx,[esp+0x88]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0xC4],1
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esi+esi*2]
	mov ecx,dword ptr [eax+ecx*8+0x9C]
	lea edx,[edi+edi*2]
	cmp ecx,dword ptr [eax+edx*8+0xA0]
	jne Block76

 Block50:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x78]
	push edx
	call esi
	lea eax,[esp+0x78]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block79

 Block51:
	lea ecx,[esp+0x58]
	push ecx
	mov byte ptr [esp+0xC8],0xB
	call esi
	lea edx,[esp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block79

 Block52:
	mov eax,edi
	and eax,0x80000001
	mov byte ptr [esp+0xC4],0xC
	jns Block54

 Block53:
	dec eax
	or eax,0xFFFFFFFE
	inc eax

 Block54:
	je Block56

 Block55:
	neg ebp
	lea esi,[ebp+0x19B]
	jmp Block57

 Block56:
	neg ebp
	lea esi,[ebp+0x115]

 Block57:
	mov eax,dword ptr [esp+0x18]
	mov eax,dword ptr [eax+0x414]
	lea ecx,[esp+0x78]
	push ecx
	lea edx,[esp+0x5C]
	push edx
	push eax
	mov eax,dword ptr [ebx]
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x24]
	push 0xB9
	mov byte ptr [esp+0xD8],0xD
	push esi
	mov byte ptr [esp+0xDC],0xC
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0xC4],0xB
	cmp word ptr [esp+0x58],si
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov byte ptr [esp+0xC4],1
	cmp word ptr [esp+0x78],si
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [esp+0x78],ax
	mov eax,dword ptr [esp+0x80]
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[esp+0x78]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov eax,edi
	cdq
	sub eax,edx
	sar eax,1
	lea edx,[eax+eax*2]
	mov eax,dword ptr [esp+0x18]
	lea ecx,[edi+edi*2]
	mov ecx,dword ptr [eax+ecx*8+0xA0]
	cmp ecx,dword ptr [eax+edx*8+0xA4]
	jne Block76

 Block66:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x98]
	push edx
	call esi
	lea eax,[esp+0x98]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block79

 Block67:
	lea ecx,[esp+0xA8]
	push ecx
	mov byte ptr [esp+0xC8],0xE
	call esi
	lea edx,[esp+0xA8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block79

 Block68:
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x98]
	push eax
	mov eax,dword ptr [edx+0x414]
	lea ecx,[esp+0xAC]
	push ecx
	push eax
	mov eax,dword ptr [ebx]
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xD8],0xF
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x24]
	push 0x51
	add ebp,0x155
	mov byte ptr [esp+0xD8],0x10
	push ebp
	mov byte ptr [esp+0xDC],0xF
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0xC4],0xE
	cmp word ptr [esp+0xA8],si
	jne Block71

 Block69:
	xor eax,eax
	mov word ptr [esp+0xA8],ax
	mov eax,dword ptr [esp+0xB0]
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea ecx,[esp+0xA8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov byte ptr [esp+0xC4],1
	cmp word ptr [esp+0x98],si
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0xA0]
	xor edx,edx
	mov word ptr [esp+0x98],dx
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea eax,[esp+0x98]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov edi,dword ptr [esp+0x18]

 Block77:
	mov eax,dword ptr [esp+0x20]
	add dword ptr [esp+0x1C],0x18
	inc eax
	add ebx,4
	cmp eax,8
	mov dword ptr [esp+0x20],eax
	jl Block12

 Block78:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [esp+0xC8],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0xBC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xB4
	ret

 Block79:
	push eax
	call _com_issue_error
}
}
// CUIChangingCharacterName::CUIChangingCharacterName
_SUB_EXCEPTION_HANDLER(380C70)
__SUB_CLASS_THIS(00380C70, __thiscall, 54474,  CUIChangingCharacterName, void, CCashShop*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_380C70
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
	xor edi,edi
	lea eax,[esi+0x91]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFF6F
	mov dword ptr [TSingleton<CUIChangingCharacterName>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIChangingCharacterName>::ms_pInstance],edi

 Block3:
	mov eax,dword ptr [esp+0x20]
	int 3// TODO: 	mov dword ptr [esi],offset CUIChangingCharacterName::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIChangingCharacterName::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIChangingCharacterName::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x94],eax
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xBC],edi
	lea ecx,[esp+0x20]
	push 0xFB3
	push ecx
	mov byte ptr [esp+0x20],7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x28],8
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x18],7
	cmp eax,edi
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov edx,dword ptr [esi+0x94]
	mov eax,dword ptr [edx+0x4F0]
	mov dword ptr [esi+0xC4],eax
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
// CUISendGifts::GetResult
__SUB_CLASS_THIS(0039A490, __thiscall, 54062,  CUISendGifts, void, ZArray<ZXString<char> >&, ZXString<char>&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	lea eax,[esi+0xEC]
	push eax
	call ZArray<ZXString<char>>::operator=
	mov ecx,dword ptr [esp+0xC]
	add esi,0xE8
	push esi
	call ZXString<char>::op_assign
	pop esi
	ret 8
}
}
// CUISendMemo::CUISendMemo
_SUB_EXCEPTION_HANDLER(382B10)
__SUB_CLASS_THIS0(00382B10, __thiscall, 53883,  CUISendMemo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_382B10
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
	int 3// TODO: 	mov dword ptr [esi],offset CUISendMemo::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUISendMemo::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUISendMemo::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esi+0x94],eax
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esi+0xA4],eax
	mov dword ptr [esi+0xAC],eax
	mov dword ptr [esi+0xB4],eax
	mov dword ptr [esi+0xB8],eax
	mov dword ptr [esi+0xBC],eax
	mov dword ptr [esi+0xC0],eax
	mov dword ptr [esi+0xC4],eax
	mov dword ptr [esi+0xC8],eax
	push 1
	push eax
	push 1
	push offset _S_UIUIWINDOW2IMGME__17
	mov ecx,esi
	mov byte ptr [esp+0x24],6
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
// CUIAdminAntiMacro::Update
__SUB_CLASS_THIS0(0037F250, __thiscall, 54284,  CUIAdminAntiMacro, void) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [ZImports::_timeGetTime]
	mov esi,ecx
	call edi
	sub eax,dword ptr [esi+0xA4]
	js Block2

 Block1:
	xor edx,edx
	jmp Block3

 Block2:
	call edi
	mov ecx,dword ptr [esi+0xA4]
	sub ecx,eax
	mov eax,0x10624DD3
	mul ecx
	shr edx,6

 Block3:
	cmp dword ptr [esi+0xA8],edx
	je Block8

 Block4:
	mov dword ptr [esi+0xA8],edx
	test edx,edx
	jl Block7

 Block5:
	cmp edx,0x78
	jg Block7

 Block6:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block7:
	pop edi
	mov ecx,esi
	pop esi
	jmp  CWnd::Update

 Block8:
	pop edi
	pop esi
	ret
}
}
// CUITransferWorldLicenseNotice::SetRet
__SUB_CLASS_THIS(0037F3A0, __thiscall, 54541,  CUITransferWorldLicenseNotice, void, long) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x84],0
	jne Block3

 Block1:
	cmp dword ptr [ecx+0x14],0
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0x80],eax
	mov dword ptr [ecx+0x84],1
	je Block3

 Block2:
	call CWnd::Destroy

 Block3:
	ret 4
}
}
// CSpeakerWorldDlgEx::~CSpeakerWorldDlgEx
_SUB_EXCEPTION_HANDLER(386DE0)
__SUB_CLASS_THIS0(00386DE0, __thiscall, 54001,  CSpeakerWorldDlgEx, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_386DE0
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
	int 3// TODO: 	mov dword ptr [esi],offset CSpeakerWorldDlgEx::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CSpeakerWorldDlgEx::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CSpeakerWorldDlgEx::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xDC]
	mov dword ptr [esp+0x1C],9
	call CLayoutMan::~CLayoutMan
	lea edi,[esi+0xD0]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],8
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xC8]
	mov byte ptr [esp+0x1C],7
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xC0]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xB8]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xB0]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0xA8]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block16

 Block15:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block16:
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block18

 Block17:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block18:
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
// CUIAntiMacro::Update
__SUB_CLASS_THIS0(0037F1F0, __thiscall, 54251,  CUIAntiMacro, void) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [ZImports::_timeGetTime]
	mov esi,ecx
	call edi
	sub eax,dword ptr [esi+0xA4]
	js Block2

 Block1:
	xor edx,edx
	jmp Block3

 Block2:
	call edi
	mov ecx,dword ptr [esi+0xA4]
	sub ecx,eax
	mov eax,0x10624DD3
	mul ecx
	shr edx,6

 Block3:
	cmp dword ptr [esi+0xA8],edx
	je Block8

 Block4:
	mov dword ptr [esi+0xA8],edx
	test edx,edx
	jl Block7

 Block5:
	cmp edx,0x78
	jg Block7

 Block6:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block7:
	pop edi
	mov ecx,esi
	pop esi
	jmp  CWnd::Update

 Block8:
	pop edi
	pop esi
	ret
}
}
// CUISendGift::GetResult
_SUB_EXCEPTION_HANDLER(38B240)
__SUB_CLASS_THIS(0038B240, __thiscall, 54211,  CUISendGift, void, ZXString<char>&, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38B240
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
	mov dword ptr [esp+0xC],ebx
	cmp dword ptr [esi+0xC0],ebx
	je Block2

 Block1:
	lea eax,[esi+0xB8]
	jmp Block3

 Block2:
	mov ecx,dword ptr [esi+0xA4]
	lea eax,[esp+0x10]
	push eax
	call CCtrlEdit::GetText
	mov ebx,1
	mov dword ptr [esp+0x1C],0
	mov dword ptr [esp+0xC],ebx

 Block3:
	mov ecx,dword ptr [esp+0x24]
	push eax
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test bl,1
	je Block6

 Block4:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esp+0x28]
	add esi,0xBC
	push esi
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x14
	ret 8
}
}
// CUISendGifts::SetCtrl
_SUB_EXCEPTION_HANDLER(3881A0)
__SUB_CLASS_THIS0(003881A0, __thiscall, 54050,  CUISendGifts, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3881A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x9C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB0]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x4C],ebx
	mov dword ptr [esp+0x40],1
	mov dword ptr [esp+0x44],ebx
	mov dword ptr [esp+0x48],ebx
	mov dword ptr [esp+0xB8],ebx
	cmp dword ptr [esi+0x94],ebx
	jne Block7

 Block1:
	lea eax,[esp+0x24]
	push 0x512
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0xBC],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xB8],bl
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x28],eax
	mov byte ptr [esp+0xB8],2
	cmp eax,ebx
	je Block5

 Block4:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	push eax
	lea ecx,[esi+0x90]
	mov byte ptr [esp+0xBC],0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x40]
	push eax
	push ebx
	push 0x8B
	push 0xA8
	push 1
	push esi
	call edx

 Block7:
	cmp dword ptr [esi+0x9C],ebx
	jne Block14

 Block8:
	lea eax,[esp+0x24]
	push 0x513
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0xBC],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xB8],0
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
	mov dword ptr [esp+0x28],eax
	mov byte ptr [esp+0xB8],4
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block13

 Block12:
	xor eax,eax

 Block13:
	push eax
	lea ecx,[esi+0x98]
	mov byte ptr [esp+0xBC],0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x9C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x40]
	push eax
	push ebx
	push 0x8B
	push 0xD2
	push 2
	push esi
	call edx

 Block14:
	cmp dword ptr [esi+0xA4],ebx
	jne Block21

 Block15:
	lea eax,[esp+0x24]
	push 0x1322
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0xBC],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xB8],0
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block17:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x28],eax
	mov byte ptr [esp+0xB8],6
	cmp eax,ebx
	je Block19

 Block18:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block20

 Block19:
	xor eax,eax

 Block20:
	push eax
	lea ecx,[esi+0xA0]
	mov byte ptr [esp+0xBC],0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xA4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x40]
	push eax
	push ebx
	push 0x8B
	push 0x6E
	push 0x3EB
	push esi
	call edx

 Block21:
	cmp dword ptr [esi+0xAC],ebx
	jne Block28

 Block22:
	lea eax,[esp+0x24]
	push 0x1323
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0xBC],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xB8],0
	cmp eax,ebx
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block24:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x28],eax
	mov byte ptr [esp+0xB8],8
	cmp eax,ebx
	je Block26

 Block25:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block27

 Block26:
	xor eax,eax

 Block27:
	push eax
	lea ecx,[esi+0xA8]
	mov byte ptr [esp+0xBC],0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x40]
	push eax
	push ebx
	push 0x8B
	push 0x38
	push 0x3EC
	push esi
	call edx

 Block28:
	cmp dword ptr [esi+0xF8],ebx
	jne Block33

 Block29:
	mov ecx,dword ptr [esi+0xB4]
	cmp ecx,ebx
	je Block32

 Block30:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0xB4],ebx
	lea edi,[esi+0xB0]
	je Block32

 Block31:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block32:
	cmp dword ptr [esi+0xF8],ebx
	je Block40

 Block33:
	cmp dword ptr [esi+0xB4],ebx
	jne Block40

 Block34:
	lea eax,[esp+0x24]
	push 0x1324
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0xBC],9
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xB8],0
	cmp eax,ebx
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block36:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x28],eax
	mov byte ptr [esp+0xB8],0xA
	cmp eax,ebx
	je Block38

 Block37:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block39

 Block38:
	xor eax,eax

 Block39:
	push eax
	lea ecx,[esi+0xB0]
	mov byte ptr [esp+0xBC],0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xB4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x40]
	push eax
	push ebx
	push 0x8B
	push 0x1B7
	push 0x3ED
	push esi
	call edx

 Block40:
	mov ecx,dword ptr [esi+0xCC]
	cmp ecx,ebx
	je Block43

 Block41:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0xCC],ebx
	lea edi,[esi+0xC8]
	je Block43

 Block42:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block43:
	cmp dword ptr [esi+0xF8],ebx
	je Block45

 Block44:
	mov ecx,esi
	call CUISendGifts::SetScrollBar

 Block45:
	lea ecx,[esp+0x74]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	xor eax,eax
	mov dword ptr [esp+0x78],eax
	lea eax,[esp+0x24]
	xor ecx,ecx
	push 0x1A25
	push eax
	mov byte ptr [esp+0xC0],0xB
	mov dword ptr [esp+0x84],ecx
	mov dword ptr [esp+0xA0],0xFFFFFFFF
	mov dword ptr [esp+0x98],0xFF000000
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea ecx,[esp+0x88]
	cmp ecx,edi
	je Block50

 Block46:
	mov ecx,dword ptr [esp+0x88]
	cmp ecx,ebx
	je Block48

 Block47:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x88],ebx

 Block48:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x88],edi
	cmp edi,ebx
	je Block50

 Block49:
	add edi,8
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block50:
	mov ecx,dword ptr [esp+0x24]
	cmp ecx,ebx
	je Block52

 Block51:
	call _xbstr_t::Data_t::Release

 Block52:
	cmp dword ptr [esi+0xD4],ebx
	jne Block57

 Block53:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x28],eax
	mov byte ptr [esp+0xB8],0xC
	cmp eax,ebx
	je Block55

 Block54:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block56

 Block55:
	xor eax,eax

 Block56:
	push eax
	lea ecx,[esi+0xD0]
	mov byte ptr [esp+0xBC],0xB
	call ZRef<CCtrlEdit>::op_assign_ptr
	mov ecx,dword ptr [esi+0xD4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x74]
	push eax
	push 0xD
	push 0x7A
	push 0x34
	push 0x54
	push 0x3E8
	push esi
	call edx

 Block57:
	mov edi,0x22
	cmp dword ptr [esi+0xDC],ebx
	jne Block62

 Block58:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0xA8],edi
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x28],eax
	mov byte ptr [esp+0xB8],0xD
	cmp eax,ebx
	je Block60

 Block59:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block61

 Block60:
	xor eax,eax

 Block61:
	push eax
	lea ecx,[esi+0xD8]
	mov byte ptr [esp+0xBC],0xB
	call ZRef<CCtrlEdit>::op_assign_ptr
	mov ecx,dword ptr [esi+0xDC]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x74]
	push edx
	push 0xD
	push 0xD2
	push 0x4C
	push 0x1A
	push 0x3E9
	push esi
	call eax

 Block62:
	cmp dword ptr [esi+0xE4],ebx
	jne Block67

 Block63:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0xA8],edi
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x28],eax
	mov byte ptr [esp+0xB8],0xE
	cmp eax,ebx
	je Block65

 Block64:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block66

 Block65:
	xor eax,eax

 Block66:
	push eax
	lea ecx,[esi+0xE0]
	mov byte ptr [esp+0xBC],0xB
	call ZRef<CCtrlEdit>::op_assign_ptr
	mov ecx,dword ptr [esi+0xE4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x74]
	push eax
	push 0xD
	push 0xD2
	push 0x5C
	push 0x1A
	push 0x3EA
	push esi
	call edx

 Block67:
	mov eax,dword ptr [esi+0xD4]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x50]
	push eax
	call ebp
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block69

 Block68:
	push eax
	call _com_issue_error

 Block69:
	lea edx,[esp+0x14]
	mov bl,0xF
	push edx
	mov byte ptr [esp+0xBC],bl
	call ebp
	lea eax,[esp+0x14]
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
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xB8],0x10
	test ecx,ecx
	jne Block73

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x18]
	push eax
	push 2
	push 0xD
	push 0xD2
	push 0x4C
	push 0x1A
	lea edx,[esp+0x40]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xF0]
	cmp edi,eax
	je Block78

 Block74:
	mov dword ptr [esi+0xF0],eax
	test eax,eax
	je Block76

 Block75:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block76:
	test edi,edi
	je Block78

 Block77:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block78:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block80

 Block79:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block80:
	cmp word ptr [esp+0x14],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0xB8],bl
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block84:
	mov ebx,8
	mov byte ptr [esp+0xB8],0xB
	cmp word ptr [esp+0x50],bx
	jne Block87

 Block85:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea ecx,[esp+0x50]
	push ecx
	call edi

 Block88:
	mov edx,3
	mov word ptr [esp+0x50],dx
	mov dword ptr [esp+0x58],0
	mov ecx,dword ptr [esi+0xF0]
	mov byte ptr [esp+0xB8],0x11
	test ecx,ecx
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	lea eax,[esp+0x50]
	push eax
	lea edx,[esp+0x28]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov byte ptr [esp+0xB8],0x13
	cmp word ptr [esp+0x50],bx
	jne Block93

 Block91:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea ecx,[esp+0x50]
	push ecx
	call edi

 Block94:
	lea edx,[esp+0x30]
	push edx
	call ebp
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	mov ecx,3
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],0x37
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x34]
	push 1
	push ecx
	mov byte ptr [esp+0xC8],0x15
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 0xC5A
	mov bl,0x16
	push edx
	mov byte ptr [esp+0xD0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [esp+0x34]
	mov byte ptr [esp+0xC8],0x17
	test ebp,ebp
	jne Block98

 Block97:
	push 0x80004003
	call _com_issue_error

 Block98:
	push 1
	push 0x1D
	mov ecx,ebp
	mov byte ptr [esp+0xD0],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xB8],0x15
	test eax,eax
	je Block100

 Block99:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block100:
	mov edi,8
	mov byte ptr [esp+0xB8],0x14
	cmp word ptr [esp+0x14],di
	jne Block103

 Block101:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	mov byte ptr [esp+0xB8],0x13
	cmp word ptr [esp+0x30],di
	jne Block107

 Block105:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block108:
	mov edi,dword ptr [esi+0xF0]
	test edi,edi
	jne Block110

 Block109:
	push 0x80004003
	call _com_issue_error

 Block110:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push edi
	call edx
	test eax,eax
	jge Block112

 Block111:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block112:
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x18
	mov ecx,0xD
	mov byte ptr [esp+0xB8],bl
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block114

 Block113:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block114:
	mov edi,dword ptr [esi+0xF0]
	mov byte ptr [esp+0xB8],0x19
	test edi,edi
	jne Block116

 Block115:
	push 0x80004003
	call _com_issue_error

 Block116:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edi]
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
	push edi
	call eax
	test eax,eax
	jge Block118

 Block117:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block118:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xB8],bl
	jne Block121

 Block119:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block122:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xB8],0x13
	test eax,eax
	je Block124

 Block123:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block124:
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0xB8],0x1A
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block126

 Block125:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block126:
	mov edi,dword ptr [esi+0xF0]
	mov byte ptr [esp+0xB8],0x1B
	test edi,edi
	jne Block128

 Block127:
	push 0x80004003
	call _com_issue_error

 Block128:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edi]
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
	push edi
	call eax
	test eax,eax
	jge Block130

 Block129:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block130:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xB8],0x1A
	jne Block133

 Block131:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block134

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block133:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block134:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xB8],0x13
	test eax,eax
	je Block136

 Block135:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block136:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block138

 Block137:
	push eax
	call _com_issue_error

 Block138:
	lea edx,[esp+0x30]
	mov bl,0x1C
	push edx
	mov byte ptr [esp+0xBC],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block140

 Block139:
	push eax
	call _com_issue_error

 Block140:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xB8],0x1D
	test ecx,ecx
	jne Block142

 Block141:
	push 0x80004003
	call _com_issue_error

 Block142:
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x34]
	push eax
	push 2
	push 0x11
	push 0x32
	push 0x36
	push 0x150
	lea edx,[esp+0x48]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xF4]
	cmp edi,eax
	je Block147

 Block143:
	mov dword ptr [esi+0xF4],eax
	test eax,eax
	je Block145

 Block144:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block145:
	test edi,edi
	je Block147

 Block146:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block147:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block149

 Block148:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block149:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xB8],bl
	jne Block152

 Block150:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block153

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block153

 Block152:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block153:
	mov edi,8
	mov byte ptr [esp+0xB8],0x13
	cmp word ptr [esp+0x14],di
	jne Block156

 Block154:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block157

 Block155:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block157

 Block156:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block157:
	cmp dword ptr [esi+0xF8],0
	je Block207

 Block158:
	mov edx,3
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],0
	mov ecx,dword ptr [esi+0xF4]
	mov byte ptr [esp+0xB8],0x1E
	test ecx,ecx
	jne Block160

 Block159:
	push 0x80004003
	call _com_issue_error

 Block160:
	lea eax,[esp+0x30]
	push eax
	lea edx,[esp+0x30]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov byte ptr [esp+0xB8],0x20
	cmp word ptr [esp+0x30],di
	jne Block163

 Block161:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block164

 Block162:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block164

 Block163:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block164:
	lea edx,[esp+0x60]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block166

 Block165:
	push eax
	call _com_issue_error

 Block166:
	mov ecx,3
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],0x37
	lea edx,[esp+0x60]
	push edx
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x30]
	push 1
	push ecx
	mov byte ptr [esp+0xC8],0x22
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [esp+0x80],esp
	mov ecx,esp
	mov bl,0x23
	push offset _S_NONE
	mov byte ptr [esp+0xCC],bl
	call _xbstr_t::_ctor_0
	mov ebp,dword ptr [esp+0x3C]
	mov byte ptr [esp+0xC8],0x24
	test ebp,ebp
	jne Block168

 Block167:
	push 0x80004003
	call _com_issue_error

 Block168:
	push 1
	push 1
	mov ecx,ebp
	mov byte ptr [esp+0xD0],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xB8],0x22
	test eax,eax
	je Block170

 Block169:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block170:
	mov edi,8
	mov byte ptr [esp+0xB8],0x21
	cmp word ptr [esp+0x14],di
	jne Block173

 Block171:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block174

 Block172:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block174

 Block173:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block174:
	mov byte ptr [esp+0xB8],0x20
	cmp word ptr [esp+0x60],di
	jne Block177

 Block175:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block178

 Block176:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block178

 Block177:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block178:
	mov edi,dword ptr [esi+0xF4]
	test edi,edi
	jne Block180

 Block179:
	push 0x80004003
	call _com_issue_error

 Block180:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push edi
	call eax
	test eax,eax
	jge Block182

 Block181:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block182:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x25
	mov edx,0xD
	mov byte ptr [esp+0xB8],bl
	mov word ptr [esp+0x14],dx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block184

 Block183:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block184:
	mov edi,dword ptr [esi+0xF4]
	mov byte ptr [esp+0xB8],0x26
	test edi,edi
	jne Block186

 Block185:
	push 0x80004003
	call _com_issue_error

 Block186:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edi]
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
	push edi
	call eax
	test eax,eax
	jge Block188

 Block187:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block188:
	mov edi,8
	mov byte ptr [esp+0xB8],bl
	cmp word ptr [esp+0x14],di
	jne Block191

 Block189:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block192

 Block190:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block192

 Block191:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block192:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xB8],0x20
	test eax,eax
	je Block194

 Block193:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block194:
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x27
	mov ecx,0xD
	mov byte ptr [esp+0xB8],bl
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block196

 Block195:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block196:
	mov esi,dword ptr [esi+0xF4]
	mov byte ptr [esp+0xB8],0x28
	test esi,esi
	jne Block198

 Block197:
	push 0x80004003
	call _com_issue_error

 Block198:
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
	jge Block200

 Block199:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block200:
	mov byte ptr [esp+0xB8],bl
	cmp word ptr [esp+0x14],di
	jne Block203

 Block201:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block204

 Block202:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block204

 Block203:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block204:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xB8],0x20
	test eax,eax
	je Block206

 Block205:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block206:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0xBC],0x13
	call ecx
	mov ebp,dword ptr [esp+0x24]

 Block207:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	mov byte ptr [esp+0xBC],0xB
	call eax
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0xB8],0
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	test eax,eax
	je Block209

 Block208:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block209:
	mov ecx,dword ptr [esp+0xB0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA8
	ret
}
}
// CSlideNotice::~CSlideNotice
_SUB_EXCEPTION_HANDLER(380600)
__SUB_CLASS_THIS0(00380600, __thiscall, 54020,  CSlideNotice, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_380600
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
	int 3// TODO: 	mov dword ptr [esi],offset CSlideNotice::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CSlideNotice::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CSlideNotice::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x84]
	mov dword ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x80]
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,esi
	mov dword ptr [TSingleton<CSlideNotice>::ms_pInstance],0
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
// CUITransferWorldLicenseNotice::CUITransferWorldLicenseNotice
_SUB_EXCEPTION_HANDLER(39F530)
__SUB_CLASS_THIS(0039F530, __thiscall, 54532,  CUITransferWorldLicenseNotice, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39F530
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
	int 3// TODO: 	mov dword ptr [esi],offset CUITransferWorldLicenseNotice::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUITransferWorldLicenseNotice::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUITransferWorldLicenseNotice::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esi+0x98],eax
	mov dword ptr [esi+0xA0],eax
	mov dword ptr [esi+0xA8],eax
	mov dword ptr [esi+0xAC],eax
	mov dword ptr [esi+0xB0],eax
	push eax
	mov dword ptr [esi+0xB4],eax
	mov eax,dword ptr [esp+0x20]
	push eax
	push 1
	push 0xD2
	push 0x1A8
	push 0x196
	push 0x30
	push 0xC5
	mov ecx,esi
	mov byte ptr [esp+0x34],5
	mov dword ptr [esi+0xB8],0xFFFFFFFF
	call CDialog::CreateDlg_0
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CUITransferWorldLicenseNotice::HitTest
__SUB_CLASS_THIS(0037F3E0, __thiscall, 54538,  CUITransferWorldLicenseNotice, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+0x10]
	push edi
	mov edi,ecx
	test esi,esi
	jne Block2

 Block1:
	pop edi
	xor eax,eax
	pop esi
	ret 0xC

 Block2:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [esp+0xC]
	push esi
	push eax
	push ecx
	mov ecx,edi
	call CWnd::HitTest
	test eax,eax
	je Block6

 Block3:
	cmp dword ptr [esi],0
	jne Block6

 Block4:
	cmp dword ptr [edi+0x3C],0
	je Block6

 Block5:
	mov eax,1

 Block6:
	pop edi
	pop esi
	ret 0xC
}
}
// CSlideNotice::OnSetFocus
__SUB_CLASS_THIS(003805E0, __thiscall, 54023,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIMapleTV::~CUIMapleTV
_SUB_EXCEPTION_HANDLER(381100)
__SUB_CLASS_THIS0(00381100, __thiscall, 54594,  CUIMapleTV, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_381100
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIMapleTV::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIMapleTV::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIMapleTV::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0xC8]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlMLEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xC0]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xB8]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xAC]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xA4]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 2
	push 4
	lea eax,[esi+0x9C]
	push eax
	mov byte ptr [esp+0x2C],1
	call __eh_vector_dtor_iterator
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
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
// CUIMapleTV::Draw
_SUB_EXCEPTION_HANDLER(3945E0)
__SUB_CLASS_THIS(003945E0, __thiscall, 54597,  CUIMapleTV, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3945E0
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
	mov esi,ecx
	mov eax,dword ptr [esp+0x54]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	lea edx,[esp+0x14]
	push 0x74E
	push edx
	mov dword ptr [esp+0x54],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esi+0x90]
	push eax
	lea ecx,[esp+0x5C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov byte ptr [esp+0x58],1
	call CItemInfo::GetItemString
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x4C],3
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
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
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea ecx,[esp+0x24]
	push ecx
	mov byte ptr [esp+0x50],4
	call ebp
	lea edx,[esp+0x24]
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
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	lea edx,[esp+0x24]
	push 0x32
	push edx
	mov byte ptr [esp+0x5C],5
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x60]
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,6
	push eax
	mov byte ptr [esp+0x60],bl
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [esp+0x28]
	mov byte ptr [esp+0x5C],7
	test edi,edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	push 0x47
	push 0x28
	mov ecx,edi
	mov byte ptr [esp+0x64],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x4C],5
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov ebx,8
	mov byte ptr [esp+0x4C],4
	cmp word ptr [esp+0x24],bx
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov byte ptr [esp+0x4C],3
	cmp word ptr [esp+0x34],bx
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block18:
	lea ecx,[esp+0x24]
	push ecx
	call ebp
	lea edx,[esp+0x24]
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
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x50],8
	call ebp
	lea ecx,[esp+0x34]
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
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x24]
	push 0x31
	push ecx
	mov byte ptr [esp+0x5C],9
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x5C]
	push eax
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,0xA
	push edx
	mov byte ptr [esp+0x60],bl
	call _xbstr_t::_ctor_0
	push 0x46
	mov byte ptr [esp+0x60],0xB
	push 0x27
	mov ecx,edi
	mov byte ptr [esp+0x64],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x4C],9
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	mov ebx,8
	mov byte ptr [esp+0x4C],8
	cmp word ptr [esp+0x34],bx
	jne Block31

 Block25:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block27:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block28:
	mov byte ptr [esp+0x4C],3
	cmp word ptr [esp+0x24],bx
	jne Block32

 Block29:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block33

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block31:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x34]
	push ecx
	call ebp
	jmp Block28

 Block32:
	lea eax,[esp+0x24]
	push eax
	call ebp

 Block33:
	mov eax,dword ptr [esi+0xD0]
	test eax,eax
	jne Block37

 Block34:
	mov ecx,3
	mov word ptr [esp+0x34],cx
	mov dword ptr [esp+0x3C],0xFF
	mov eax,dword ptr [esi+0x98]
	mov eax,dword ptr [eax+0x48]
	xor edx,edx
	test eax,eax
	setne dl
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x50],0xC
	mov eax,dword ptr [esi+edx*4+0x9C]
	push eax
	push 0x41
	push 0x14
	call IWzCanvas::Copy
	mov byte ptr [esp+0x4C],3
	cmp word ptr [esp+0x34],bx
	jne Block36

 Block35:
	xor edx,edx
	mov word ptr [esp+0x34],dx
	jmp Block40

 Block36:
	lea eax,[esp+0x34]
	push eax
	jmp Block43

 Block37:
	cmp eax,2
	jne Block44

 Block38:
	mov ecx,3
	mov word ptr [esp+0x34],cx
	mov dword ptr [esp+0x3C],0xFF
	mov esi,dword ptr [esi+0xA0]
	lea edx,[esp+0x34]
	push edx
	push esi
	push 0x41
	push 0x14
	mov ecx,edi
	mov byte ptr [esp+0x5C],0xD
	call IWzCanvas::Copy
	mov byte ptr [esp+0x4C],3
	cmp word ptr [esp+0x34],bx
	jne Block42

 Block39:
	xor eax,eax
	mov word ptr [esp+0x34],ax

 Block40:
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block44

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block42:
	lea ecx,[esp+0x34]
	push ecx

 Block43:
	call ebp

 Block44:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x4C],0
	test eax,eax
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call eax
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 4
}
}
// CUIChangingCharacterName::OnCreate
_SUB_EXCEPTION_HANDLER(392BA0)
__SUB_CLASS_THIS(00392BA0, __thiscall, 54477,  CUIChangingCharacterName, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_392BA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x64]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0xBC]
	xor ebx,ebx
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esi+0xBC],ebx

 Block2:
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x10]
	push 0xFB4
	push eax
	mov dword ptr [esp+0x74],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x70],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x6C],bl
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x6C],2
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	mov byte ptr [esp+0x6C],bl
	cmp eax,ebx
	je Block17

 Block8:
	add eax,8
	cmp eax,ebx
	je Block17

 Block9:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block11

 Block10:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block13

 Block12:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block13:
	mov ecx,dword ptr [esi+0x9C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x1A
	push 0xC3
	push 0x3E9
	push esi
	call edx
	lea eax,[esp+0x10]
	push 0x512
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x70],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x6C],bl
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block15:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x6C],4
	cmp eax,ebx
	je Block18

 Block16:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block19

 Block17:
	xor edi,edi
	jmp Block11

 Block18:
	xor eax,eax

 Block19:
	mov byte ptr [esp+0x6C],bl
	cmp eax,ebx
	je Block29

 Block20:
	add eax,8
	cmp eax,ebx
	je Block29

 Block21:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block23

 Block22:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block23:
	mov eax,dword ptr [esi+0xA4]
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block25

 Block24:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block25:
	mov ecx,dword ptr [esi+0xA4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x5D
	push 0xA1
	push 0x3EA
	push esi
	call edx
	lea eax,[esp+0x10]
	push 0x513
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x70],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x6C],bl
	cmp eax,ebx
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block27:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x6C],6
	cmp eax,ebx
	je Block30

 Block28:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block31

 Block29:
	xor edi,edi
	jmp Block23

 Block30:
	xor eax,eax

 Block31:
	mov byte ptr [esp+0x6C],bl
	cmp eax,ebx
	je Block46

 Block32:
	add eax,8
	cmp eax,ebx
	je Block46

 Block33:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block35

 Block34:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block35:
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block37

 Block36:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block37:
	mov ecx,dword ptr [esi+0xAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x5D
	push 0xD2
	push 0x3EB
	push esi
	call edx
	lea ecx,[esp+0x28]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	xor eax,eax
	mov dword ptr [esp+0x2C],eax
	lea eax,[esp+0x10]
	xor ecx,ecx
	push 0x1A25
	push eax
	mov byte ptr [esp+0x74],7
	mov dword ptr [esp+0x38],ecx
	mov dword ptr [esp+0x54],0xFFFFFFFF
	mov dword ptr [esp+0x4C],0xFF000000
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea ecx,[esp+0x3C]
	cmp ecx,edi
	je Block42

 Block38:
	mov ecx,dword ptr [esp+0x3C]
	cmp ecx,ebx
	je Block40

 Block39:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x3C],ebx

 Block40:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x3C],edi
	cmp edi,ebx
	je Block42

 Block41:
	add edi,8
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block42:
	mov ecx,dword ptr [esp+0x10]
	cmp ecx,ebx
	je Block44

 Block43:
	call _xbstr_t::Data_t::Release

 Block44:
	push offset _S_
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x5C],0xC
	call ZXString<char>::AssignCStr
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x6C],8
	cmp eax,ebx
	je Block47

 Block45:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block48

 Block46:
	xor edi,edi
	jmp Block35

 Block47:
	xor eax,eax

 Block48:
	mov byte ptr [esp+0x6C],7
	cmp eax,ebx
	je Block57

 Block49:
	add eax,8
	cmp eax,ebx
	je Block57

 Block50:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block52

 Block51:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block52:
	mov eax,dword ptr [esi+0xB4]
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block54

 Block53:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block54:
	mov ecx,dword ptr [esi+0xB4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x28]
	push edx
	push 0xD
	push 0xD4
	push 0x33
	push 0x1A
	push 0x3E8
	push esi
	call eax
	mov eax,dword ptr [esi+0xA4]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	mov eax,dword ptr [esi+0xB4]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x6C],bl
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp eax,ebx
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block56:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x60
	ret 4

 Block57:
	xor edi,edi
	jmp Block52
}
}
// CUISpeedQuiz::Update
_SUB_EXCEPTION_HANDLER(39C670)
__SUB_CLASS_THIS0(0039C670, __thiscall, 54384,  CUISpeedQuiz, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39C670
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	call CWnd::Update
	mov edi,dword ptr [ZImports::_timeGetTime]
	call edi
	sub eax,dword ptr [esi+0xC8]
	js Block2

 Block1:
	xor edi,edi
	jmp Block3

 Block2:
	call edi
	mov ecx,dword ptr [esi+0xC8]
	sub ecx,eax
	mov eax,0x10624DD3
	mul ecx
	mov edi,edx
	shr edi,6

 Block3:
	cmp dword ptr [esi+0xCC],edi
	je Block13

 Block4:
	mov dword ptr [esi+0xCC],edi
	test edi,edi
	jl Block9

 Block5:
	cmp edi,0x78
	jg Block8

 Block6:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	lea edx,[esp+0x18]
	push 0x648
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	fild dword ptr [esi+0xCC]
	mov ecx,dword ptr [eax]
	fnstcw word ptr [esp+0xE]
	fidiv dword ptr [esi+0xD0]
	movzx eax,word ptr [esp+0xE]
	or eax,0xC00
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x24],0
	fld1
	fsubrp st(1),st(0)
	fmul qword ptr [__real_4059000000000000]
	fldcw word ptr [esp+0x10]
	fistp qword ptr [esp+0x10]
	mov eax,dword ptr [esp+0x10]
	push eax
	push ecx
	fldcw word ptr [esp+0x16]
	call play_minigame_sound
	mov eax,dword ptr [esp+0x20]
	add esp,8
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	test edi,edi
	jg Block13

 Block9:
	mov eax,dword ptr [esi+0x98]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	mov eax,dword ptr [esi+0x98]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov eax,dword ptr [esi+0xA0]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea edi,[esi+4]
	push edi
	call CWndMan::SetCaptureWnd
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push edi
	call CWndMan::SetFocus
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x14],esp
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
	call CUISpeedQuiz::SendResult
	mov ecx,dword ptr [TSingleton<CUISpeedQuiz>::ms_pInstance]
	test ecx,ecx
	je Block12

 Block10:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUISpeedQuiz>::ms_pInstance]
	test eax,eax
	je Block12

 Block11:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block12:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [ecx+0x3FA0],0

 Block13:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret
}
}
// CUINoticePremium::~CUINoticePremium
_SUB_EXCEPTION_HANDLER(3800F0)
__SUB_CLASS_THIS0(003800F0, __thiscall, 72339,  CUINoticePremium, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3800F0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUINoticePremium::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINoticePremium::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINoticePremium::`vftable'{for `ZRefCounted'}
	cmp dword ptr [esi+0x98],0
	lea edi,[esi+0x94]
	mov dword ptr [esp+0x18],1
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	mov ecx,esi
	mov dword ptr [TSingleton<CUINoticePremium>::ms_pInstance],0
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CUISkillEffectChange::CUISkillEffectChange
_SUB_EXCEPTION_HANDLER(3921C0)
__SUB_CLASS_THIS0(003921C0, __thiscall, 54663,  CUISkillEffectChange, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3921C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x1C],esi
	call CDialog::_ctor_default
	xor ebx,ebx
	lea eax,[esi+0x91]
	mov dword ptr [esp+0x28],ebx
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFF6F
	mov dword ptr [TSingleton<CUISkillEffectChange>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUISkillEffectChange>::ms_pInstance],ebx

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUISkillEffectChange::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUISkillEffectChange::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUISkillEffectChange::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x98],ebx
	mov dword ptr [esi+0x9C],ebx
	mov dword ptr [esi+0xA0],ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x1525
	push eax
	mov byte ptr [esp+0x48],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov edi,dword ptr [esi+0x78]
	cmp edi,ebx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],ebx
	call eax
	cmp eax,ebx
	jge Block7

 Block6:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block7:
	mov edi,dword ptr [esi+0x78]
	mov ebp,dword ptr [esp+0x14]
	cmp edi,ebx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x18]
	push edx
	push edi
	mov dword ptr [esp+0x20],ebx
	call eax
	cmp eax,ebx
	jge Block11

 Block10:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block11:
	push ebx
	push 1
	mov eax,ebp
	cdq
	sub eax,edx
	sar eax,1
	push ebx
	push 1
	mov ecx,0xFFFFFFB0
	sub ecx,eax
	mov eax,dword ptr [esp+0x28]
	push 0xA
	cdq
	push 4
	sub eax,edx
	push 1
	sar eax,1
	push ecx
	neg eax
	push eax
	mov ecx,esi
	call CWnd::CreateWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret
}
}
// CUINoticePremium::OnCreate
_SUB_EXCEPTION_HANDLER(392A60)
__SUB_CLASS_THIS(00392A60, __thiscall, 72340,  CUINoticePremium, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_392A60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x10]
	push 0x1962
	push eax
	mov dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x20],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x34],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x30],bl
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
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x30],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block14

 Block6:
	add eax,8
	cmp eax,ebx
	je Block14

 Block7:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block9

 Block8:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x98]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0xE
	push 0x11B
	push 2
	push esi
	call edx
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret 4

 Block14:
	xor edi,edi
	jmp Block9
}
}
// CUITransferWorldSelectDlg::OnKey
__SUB_CLASS_THIS(0037FB20, __thiscall, 54563,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	test edi,edi
	jns Block2

 Block1:
	push edi
	push ebx
	call CDialog::OnKey

 Block2:
	cmp ebx,0xD
	jne Block4

 Block3:
	lea ecx,[esi-4]
	call CUITransferWorldSelectDlg::SetResult

 Block4:
	push edi
	push ebx
	mov ecx,esi
	call CDialog::OnKey
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CUIChangingLicenseNotice::SetBirthDate
__SUB_CLASS_THIS(0037F330, __thiscall, 54517,  CUIChangingLicenseNotice, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0xBC],eax
	ret 4
}
}
// CUISendGifts::GUILD::~GUILD
__SUB_CLASS_THIS0(003807C0, __thiscall, 54092,  CUISendGifts::GUILD, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+4]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	pop ecx

 Block2:
	ret
}
}
// CUIMapleTV::HitTest
__SUB_CLASS_THIS(0037F480, __thiscall, 54599,  CUIMapleTV, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x10]
	push eax
	push ecx
	mov ecx,esi
	call CWnd::HitTest
	test eax,eax
	je Block9

 Block1:
	test edi,edi
	je Block3

 Block2:
	cmp dword ptr [edi],0
	jne Block5

 Block3:
	cmp dword ptr [esi+0x3C],0
	je Block5

 Block4:
	mov eax,1
	jmp Block6

 Block5:
	test eax,eax
	je Block9

 Block6:
	test edi,edi
	je Block8

 Block7:
	cmp dword ptr [edi],0
	jne Block9

 Block8:
	mov eax,1

 Block9:
	pop edi
	pop esi
	ret 0xC
}
}
// CSpeakerWorldDlg::CSpeakerWorldDlg
_SUB_EXCEPTION_HANDLER(386A00)
__SUB_CLASS_THIS(00386A00, __thiscall, 53979,  CSpeakerWorldDlg, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_386A00
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
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CSpeakerWorldDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CSpeakerWorldDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CSpeakerWorldDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esi+0xCC],edi
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esi+0x98],eax
	neg eax
	sbb eax,eax
	and eax,0xFFFFFFE1
	add eax,0x19B2
	push eax
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x20],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x28],7
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x18],6
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
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
// CUIHope::HitTest
__SUB_CLASS_THIS(0037F0D0, __thiscall, 53869,  CUIHope, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x10]
	push eax
	push ecx
	mov ecx,esi
	call CWnd::HitTest
	test eax,eax
	je Block9

 Block1:
	test edi,edi
	je Block3

 Block2:
	cmp dword ptr [edi],0
	jne Block5

 Block3:
	cmp dword ptr [esi+0x3C],0
	je Block5

 Block4:
	mov eax,1
	jmp Block6

 Block5:
	test eax,eax
	je Block9

 Block6:
	test edi,edi
	je Block8

 Block7:
	cmp dword ptr [edi],0
	jne Block9

 Block8:
	mov eax,1

 Block9:
	pop edi
	pop esi
	ret 0xC
}
}
// CUIAntiMacroNotice::CUIAntiMacroNotice
_SUB_EXCEPTION_HANDLER(38E080)
__SUB_CLASS_THIS(0038E080, __thiscall, 54330,  CUIAntiMacroNotice, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38E080
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIAntiMacroNotice::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIAntiMacroNotice::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIAntiMacroNotice::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esi+0x94],eax
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esi+0xA0],eax
	mov dword ptr [esi+0xA4],eax
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [esi+0xA8],ecx
	mov dword ptr [esi+0xAC],edx
	mov dword ptr [esi+0xB0],eax
	mov dword ptr [esi+0xB4],eax
	mov dword ptr [esi+0xB8],eax
	mov dword ptr [esi+0xBC],eax
	mov dword ptr [esi+0xC0],eax
	push eax
	push eax
	push 1
	push offset _S_UIUIWINDOW2IMGMA__18
	mov ecx,esi
	mov byte ptr [esp+0x24],5
	call CDialog::CreateDlg_2
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 8
}
}
// CUIChangingCharacterName::SetRet
_SUB_EXCEPTION_HANDLER(393000)
__SUB_CLASS_THIS(00393000, __thiscall, 54480,  CUIChangingCharacterName, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_393000
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	cmp dword ptr [esp+0x30],1
	jne Block18

 Block1:
	mov dword ptr [esp+0x10],ebx
	mov ecx,dword ptr [esi+0xB4]
	lea eax,[esp+0x14]
	push eax
	mov dword ptr [esp+0x2C],ebx
	call CCtrlEdit::GetText
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x2C],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x28],bl
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	push ebx
	push ebx
	lea ecx,[esp+0x18]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [esp+0x10]
	cmp eax,ebx
	je Block22

 Block4:
	mov eax,dword ptr [eax-4]
	cmp eax,4
	jl Block22

 Block5:
	cmp eax,0xC
	jg Block22

 Block6:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ecx+0x20CC]
	cmp eax,ebx
	je Block8

 Block7:
	add eax,4
	jmp Block9

 Block8:
	xor eax,eax

 Block9:
	push eax
	lea ecx,[esp+0x14]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jne Block11

 Block10:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x44],esp
	push 0x218
	jmp Block23

 Block11:
	push 1
	push ebx
	push 1
	push 0x400
	lea ecx,[esp+0x20]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x14]
	mov edi,eax
	call ZXString<char>::ReleaseBuffer
	cmp edi,ebx
	jne Block13

 Block12:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push 0x11D
	push eax
	jmp Block24

 Block13:
	mov ecx,dword ptr [esi+0xB4]
	lea edx,[esp+0x14]
	push edx
	call CCtrlEdit::GetText
	lea ecx,[esi+0xBC]
	push ecx
	mov ecx,eax
	call ZXString<char>::op_eq_0
	mov edi,eax
	mov eax,dword ptr [esp+0x14]
	neg edi
	sbb edi,edi
	inc edi
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	cmp edi,ebx
	jne Block22

 Block16:
	mov ecx,dword ptr [esi+0xB4]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	call CCtrlEdit::GetText
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edi,esp
	mov dword ptr [esp+0x24],esp
	push 0xFFFFFFFF
	mov byte ptr [esp+0x34],2
	call CWvsContext::GetCharacterName
	push eax
	mov ecx,edi
	call ZXString<char>::CreateFromCharStr
	mov ecx,dword ptr [esi+0xC4]
	push ecx
	mov byte ptr [esp+0x34],bl
	mov ecx,dword ptr [esi+0x94]
	call CCashShop::SendBuyNameChangeItemPacket
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	cmp dword ptr [esi+0x84],ebx
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esi+0x80],eax
	mov dword ptr [esi+0x84],1
	cmp dword ptr [esi+0x14],ebx
	je Block21

 Block20:
	mov ecx,esi
	call CWnd::Destroy

 Block21:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4

 Block22:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x44],esp
	push 0x219

 Block23:
	push edx

 Block24:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x24]
	add esp,0x14
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block21

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4
}
}
// CUISpeedQuiz::OnCreate
_SUB_EXCEPTION_HANDLER(3904E0)
__SUB_CLASS_THIS(003904E0, __thiscall, 54385,  CUISpeedQuiz, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3904E0
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
	lea ecx,[esp+0x2C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	xor eax,eax
	mov dword ptr [esp+0x30],eax
	lea eax,[esp+0x14]
	xor ecx,ecx
	push 0x1A25
	xor ebx,ebx
	push eax
	mov dword ptr [esp+0x78],ebx
	mov dword ptr [esp+0x3C],ecx
	mov dword ptr [esp+0x58],0xFFFFFFFF
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
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x60],0x32
	mov dword ptr [esp+0x64],ebx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	mov byte ptr [esp+0x70],bl
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
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block16

 Block15:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block16:
	mov ecx,dword ptr [esi+0x98]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x2C]
	push edx
	push 0xD
	push 0xA5
	push 0x153
	push 0x64
	push 0x3E8
	push esi
	call eax
	mov eax,dword ptr [esi+0x98]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	lea ecx,[esp+0x14]
	push 0x512
	push ecx
	mov byte ptr [esp+0x78],2
	mov dword ptr [esp+0x24],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],2
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
	mov byte ptr [esp+0x70],2
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
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block28

 Block27:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block28:
	mov ecx,dword ptr [esi+0xA0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0x17C
	push 0xE9
	push 1
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0xF80
	push ecx
	mov dword ptr [esp+0x24],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],2
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
	mov byte ptr [esp+0x70],2
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
	mov eax,dword ptr [esi+0xA8]
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block40

 Block39:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block40:
	mov ecx,dword ptr [esi+0xA8]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0x17C
	push 0xBE
	push 0x3EA
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0xF81
	push ecx
	mov dword ptr [esp+0x24],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],2
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
	mov byte ptr [esp+0x70],2
	cmp eax,ebx
	je Block55

 Block47:
	add eax,8
	cmp eax,ebx
	je Block55

 Block48:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block50

 Block49:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block50:
	mov eax,dword ptr [esi+0xB0]
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block52

 Block51:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block52:
	mov ecx,dword ptr [esi+0xB0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0x17C
	push 0x7E
	push 0x3E9
	push esi
	call eax
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block54:
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret 4

 Block55:
	xor edi,edi
	jmp Block50
}
}
// CUISendGifts::FRIEND::~FRIEND
__SUB_CLASS_THIS0(003807A0, __thiscall, 54079,  CUISendGifts::FRIEND, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+4]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	pop ecx

 Block2:
	ret
}
}
// CUIClaimPreNotice::CUIClaimPreNotice
_SUB_EXCEPTION_HANDLER(381F30)
__SUB_CLASS_THIS0(00381F30, __thiscall, 53823,  CUIClaimPreNotice, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_381F30
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIClaimPreNotice::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIClaimPreNotice::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIClaimPreNotice::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x90],eax
	mov dword ptr [esi+0x94],eax
	mov dword ptr [esi+0x98],eax
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esi+0xA0],eax
	push 1
	push eax
	push 1
	push offset _S_UIUIWINDOW2IMGCL__3
	mov ecx,esi
	mov byte ptr [esp+0x24],1
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
// CUITransferWorldSelectDlg::CUITransferWorldSelectDlg
_SUB_EXCEPTION_HANDLER(381B40)
__SUB_CLASS_THIS(00381B40, __thiscall, 54557,  CUITransferWorldSelectDlg, void, CCashShop*, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_381B40
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
	xor edi,edi
	mov dword ptr [esp+0x18],edi
	call CDialog::_ctor_default
	lea eax,[esi+0x91]
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFF6F
	mov dword ptr [TSingleton<CUITransferWorldSelectDlg>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUITransferWorldSelectDlg>::ms_pInstance],edi

 Block3:
	mov eax,dword ptr [esp+0x20]
	lea edx,[esp+0x24]
	lea ecx,[esi+0x9C]
	int 3// TODO: 	mov dword ptr [esi],offset CUITransferWorldSelectDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUITransferWorldSelectDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUITransferWorldSelectDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x94],eax
	push edx
	mov byte ptr [esp+0x1C],2
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xC0],edi
	lea eax,[esp+0x20]
	push 0xFE0
	push eax
	mov byte ptr [esp+0x20],7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x28],8
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x18],7
	cmp eax,edi
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	cmp eax,edi
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
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
// CUISendGifts::LoadData
_SUB_EXCEPTION_HANDLER(399700)
__SUB_CLASS_THIS0(00399700, __thiscall, 54050,  CUISendGifts, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_399700
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x78],eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov eax,dword ptr [ebx+0xF8]
	mov dword ptr [esp+0x5C],ebx
	cmp eax,1
	jne Block30

 Block1:
	xor ebp,ebp
	mov dword ptr [ebx+0x104],ebp
	mov dword ptr [ebx+0x108],ebp
	add ebx,0xFC
	mov ecx,ebx
	call ZArray<CUISendGifts::FRIEND>::RemoveAll
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [esp+0x28],eax
	xor edi,edi

 Block2:
	mov ecx,dword ptr [esp+0x28]
	mov esi,dword ptr [ecx+0x3788]
	mov ecx,esi
	call CWvsContext::CFriend::IsDataTwisted
	mov esi,dword ptr [esi]
	cmp esi,ebp
	jne Block4

 Block3:
	xor esi,esi
	jmp Block5

 Block4:
	mov esi,dword ptr [esi-4]

 Block5:
	cmp edi,esi
	jge Block26

 Block6:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [edx+0x3788]
	mov eax,edi
	imul eax,0x27
	add eax,dword ptr [ecx]
	mov ecx,dword ptr [eax]
	cmp ecx,ebp
	je Block25

 Block7:
	mov dword ptr [esp+0x48],ebp
	add eax,4
	mov dword ptr [esp+0x44],ecx
	push eax
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x9C],ebp
	call ZXString<char>::AssignCStr
	push 0xFFFFFFFF
	mov ecx,ebx
	call ZArray<CUISendGifts::FRIEND>::InsertBefore
	mov esi,eax
	mov eax,dword ptr [esp+0x44]
	lea ecx,[esp+0x48]
	push ecx
	lea ecx,[esi+4]
	mov dword ptr [esi],eax
	call ZXString<char>::op_assign
	mov edx,dword ptr [esp+0x4C]
	mov eax,dword ptr [esp+0x50]
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr [esi+8],edx
	mov edx,dword ptr [esp+0x58]
	mov dword ptr [esi+0xC],eax
	mov dword ptr [esi+0x10],ecx
	xor ecx,ecx
	mov dword ptr [esi+0x14],edx
	mov dword ptr [esp+0x30],ecx
	mov eax,dword ptr [ebx]
	mov byte ptr [esp+0x98],1
	cmp eax,ebp
	jne Block9

 Block8:
	xor eax,eax
	jmp Block10

 Block9:
	mov eax,dword ptr [eax-4]

 Block10:
	lea edx,[eax-1]
	cmp edx,ebp
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x18],ebp
	jle Block20

 Block11:
	mov ecx,1
	xor esi,esi
	mov dword ptr [esp+0x24],ecx
	mov dword ptr [esp+0x1C],edx
	mov dword ptr [esp+0x18],edx

 Block12:
	cmp ecx,eax
	jge Block18

 Block13:
	sub eax,ecx
	lea ebp,[esi+0x18]
	mov dword ptr [esp+0x20],eax
	lea esp,[esp]

 Block14:
	mov edi,dword ptr [ebx]
	mov eax,dword ptr [edi+ebp+4]
	push eax
	lea ecx,[esi+edi+4]
	call ZXString<char>::Compare
	test eax,eax
	jle Block16

 Block15:
	mov ecx,dword ptr [esi+edi]
	lea edx,[esi+edi+4]
	mov dword ptr [esp+0x2C],ecx
	push edx
	lea ecx,[esp+0x34]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi+edi+8]
	mov ecx,dword ptr [esi+edi+0xC]
	mov edx,dword ptr [esi+edi+0x10]
	mov dword ptr [esp+0x34],eax
	mov eax,dword ptr [esi+edi+0x14]
	mov edi,dword ptr [ebx]
	mov dword ptr [esp+0x38],ecx
	mov ecx,dword ptr [edi+ebp]
	mov dword ptr [esp+0x3C],edx
	lea edx,[edi+ebp+4]
	mov dword ptr [esi+edi],ecx
	push edx
	lea ecx,[esi+edi+4]
	mov dword ptr [esp+0x44],eax
	call ZXString<char>::op_assign
	mov edx,dword ptr [edi+ebp+8]
	mov dword ptr [esi+edi+8],edx
	mov edx,dword ptr [edi+ebp+0xC]
	lea eax,[edi+ebp+8]
	lea ecx,[esi+edi+8]
	mov dword ptr [ecx+4],edx
	mov edx,dword ptr [eax+8]
	mov dword ptr [ecx+8],edx
	mov eax,dword ptr [eax+0xC]
	mov dword ptr [ecx+0xC],eax
	mov edi,dword ptr [ebx]
	mov ecx,dword ptr [esp+0x2C]
	add edi,ebp
	lea edx,[esp+0x30]
	mov dword ptr [edi],ecx
	push edx
	lea ecx,[edi+4]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [edi+8],eax
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [edi+0xC],ecx
	mov dword ptr [edi+0x10],edx
	mov dword ptr [edi+0x14],eax

 Block16:
	add ebp,0x18
	sub dword ptr [esp+0x20],1
	jne Block14

 Block17:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x24]
	xor ebp,ebp

 Block18:
	inc ecx
	add esi,0x18
	sub dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x24],ecx
	jne Block12

 Block19:
	mov ecx,dword ptr [esp+0x30]

 Block20:
	mov byte ptr [esp+0x98],0
	cmp ecx,ebp
	je Block22

 Block21:
	add ecx,0xFFFFFFF4
	push ecx
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	cmp eax,ebp
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov edi,dword ptr [esp+0x18]

 Block25:
	inc edi
	jmp Block2

 Block26:
	mov ebx,dword ptr [ebx]
	cmp ebx,ebp
	jne Block28

 Block27:
	xor ebx,ebx
	jmp Block29

 Block28:
	mov ebx,dword ptr [ebx-4]

 Block29:
	mov eax,dword ptr [esp+0x5C]
	mov ecx,ebx
	mov dword ptr [eax+0x104],ebx
	mov dword ptr [eax+0x108],ecx
	jmp Block56

 Block30:
	cmp eax,2
	jne Block55

 Block31:
	xor edi,edi
	mov dword ptr [ebx+0x104],edi
	mov dword ptr [ebx+0x108],edi
	add ebx,0x100
	mov ecx,ebx
	call ZArray<CUISendGifts::GUILD>::RemoveAll
	mov ebp,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,ebp
	mov dword ptr [esp+0x60],ebp
	xor esi,esi
	call CWvsContext::GetGuildMemberNum
	test eax,eax
	jle Block53

 Block32:
	lea esp,[esp]

 Block33:
	lea edx,[esp+0x64]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push esi
	mov ecx,ebp
	call CWvsContext::GetGuildMemberDataByIdx
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	je Block52

 Block34:
	mov dword ptr [esp+0x48],edi
	lea ecx,[esp+0x64]
	push ecx
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x9C],2
	mov dword ptr [esp+0x48],eax
	call ZXString<char>::AssignCStr
	push 0xFFFFFFFF
	mov ecx,ebx
	call ZArray<CUISendGifts::GUILD>::InsertBefore
	mov edx,dword ptr [esp+0x44]
	mov esi,eax
	lea eax,[esp+0x48]
	push eax
	lea ecx,[esi+4]
	mov dword ptr [esi],edx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x4C]
	mov edx,dword ptr [esp+0x50]
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esi+8],ecx
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr [esi+0xC],edx
	mov dword ptr [esi+0x10],eax
	mov dword ptr [esi+0x14],ecx
	xor ecx,ecx
	mov dword ptr [esp+0x30],ecx
	mov eax,dword ptr [ebx]
	mov byte ptr [esp+0x98],3
	cmp eax,edi
	jne Block36

 Block35:
	xor eax,eax
	mov dword ptr [esp+0x18],eax
	jmp Block37

 Block36:
	mov edx,dword ptr [eax-4]
	mov dword ptr [esp+0x18],edx
	mov eax,edx

 Block37:
	lea edx,[eax-1]
	cmp edx,edi
	mov dword ptr [esp+0x14],edi
	jle Block47

 Block38:
	mov ecx,1
	xor esi,esi
	mov dword ptr [esp+0x24],ecx
	mov dword ptr [esp+0x20],edx
	mov dword ptr [esp+0x14],edx

 Block39:
	cmp ecx,eax
	jge Block45

 Block40:
	sub eax,ecx
	lea ebp,[esi+0x18]
	mov dword ptr [esp+0x1C],eax

 Block41:
	mov edi,dword ptr [ebx]
	mov eax,dword ptr [edi+ebp+4]
	push eax
	lea ecx,[esi+edi+4]
	call ZXString<char>::Compare
	test eax,eax
	jle Block43

 Block42:
	mov eax,dword ptr [esi+edi]
	lea ecx,[esi+edi+4]
	push ecx
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x30],eax
	call ZXString<char>::op_assign
	mov edx,dword ptr [esi+edi+8]
	mov eax,dword ptr [esi+edi+0xC]
	mov ecx,dword ptr [esi+edi+0x10]
	mov dword ptr [esp+0x34],edx
	mov edx,dword ptr [esi+edi+0x14]
	mov edi,dword ptr [ebx]
	mov dword ptr [esp+0x3C],ecx
	lea ecx,[edi+ebp+4]
	mov dword ptr [esp+0x38],eax
	mov eax,dword ptr [edi+ebp]
	push ecx
	lea ecx,[esi+edi+4]
	mov dword ptr [esp+0x44],edx
	mov dword ptr [esi+edi],eax
	call ZXString<char>::op_assign
	mov edx,dword ptr [edi+ebp+8]
	mov dword ptr [esi+edi+8],edx
	mov edx,dword ptr [edi+ebp+0xC]
	lea eax,[edi+ebp+8]
	lea ecx,[esi+edi+8]
	mov dword ptr [ecx+4],edx
	mov edx,dword ptr [eax+8]
	mov dword ptr [ecx+8],edx
	mov eax,dword ptr [eax+0xC]
	mov dword ptr [ecx+0xC],eax
	mov edi,dword ptr [ebx]
	mov ecx,dword ptr [esp+0x2C]
	add edi,ebp
	lea edx,[esp+0x30]
	mov dword ptr [edi],ecx
	push edx
	lea ecx,[edi+4]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [edi+8],eax
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [edi+0xC],ecx
	mov dword ptr [edi+0x10],edx
	mov dword ptr [edi+0x14],eax

 Block43:
	add ebp,0x18
	sub dword ptr [esp+0x1C],1
	jne Block41

 Block44:
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x18]
	xor edi,edi

 Block45:
	inc ecx
	add esi,0x18
	sub dword ptr [esp+0x20],1
	mov dword ptr [esp+0x24],ecx
	jne Block39

 Block46:
	mov ecx,dword ptr [esp+0x30]
	mov ebp,dword ptr [esp+0x60]

 Block47:
	mov byte ptr [esp+0x98],2
	cmp ecx,edi
	je Block49

 Block48:
	add ecx,0xFFFFFFF4
	push ecx
	call ZXString<char>::_Release
	add esp,4

 Block49:
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	cmp eax,edi
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	mov esi,dword ptr [esp+0x14]

 Block52:
	mov ecx,ebp
	inc esi
	call CWvsContext::GetGuildMemberNum
	cmp esi,eax
	jl Block33

 Block53:
	mov ebx,dword ptr [ebx]
	cmp ebx,edi
	jne Block28

 Block54:
	xor ebx,ebx
	jmp Block29

 Block55:
	mov edx,dword ptr [ebx+0x104]
	mov dword ptr [ebx+0x108],edx

 Block56:
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov ecx,dword ptr [esp+0x78]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x88
	ret
}
}
// CUISendMemo::GetResult
_SUB_EXCEPTION_HANDLER(382FC0)
__SUB_CLASS_THIS(00382FC0, __thiscall, 53890,  CUISendMemo, void, ZXString<char>&, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_382FC0
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
	mov ecx,dword ptr [esi+0xAC]
	lea eax,[esp+8]
	push eax
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esp+0x1C]
	push eax
	mov dword ptr [esp+0x18],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esi+0xB4]
	lea edx,[esp+0x1C]
	push edx
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esp+0x20]
	push eax
	mov dword ptr [esp+0x18],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 8
}
}
// CUIClaim::OnKey
__SUB_CLASS_THIS(00382060, __thiscall, 53847,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x10]
	push esi
	push edi
	mov edi,dword ptr [esp+0x1C]
	xor ebx,ebx
	mov esi,ecx
	mov dword ptr [esp+0x10],ebx
	test edi,edi
	js Block48

 Block1:
	cmp ebp,0xD
	jne Block34

 Block2:
	mov eax,dword ptr [esi+0x70]
	cmp eax,dword ptr [esi+0xA0]
	jne Block6

 Block3:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [esi+0xA8]
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	lea ebx,[ebp-0xC]
	test eax,eax
	je Block5

 Block4:
	cmp byte ptr [eax],0
	jne Block6

 Block5:
	mov byte ptr [esp+0x1C],bl
	jmp Block7

 Block6:
	mov byte ptr [esp+0x1C],0

 Block7:
	test bl,1
	je Block10

 Block8:
	mov eax,dword ptr [esp+0x18]
	and ebx,0xFFFFFFFE
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	cmp byte ptr [esp+0x1C],0
	je Block14

 Block11:
	mov esi,dword ptr [esi+0xA8]
	test esi,esi
	je Block13

 Block12:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea eax,[esi+4]
	push eax
	call CWndMan::SetFocus
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8

 Block13:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	xor eax,eax
	push eax
	call CWndMan::SetFocus
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8

 Block14:
	mov edx,dword ptr [esi+0x70]
	cmp edx,dword ptr [esi+0xA8]
	jne Block18

 Block15:
	mov ecx,dword ptr [esi+0xB0]
	lea eax,[esp+0x18]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	or ebx,2
	test eax,eax
	je Block17

 Block16:
	cmp byte ptr [eax],0
	jne Block18

 Block17:
	mov byte ptr [esp+0x1C],1
	jmp Block19

 Block18:
	mov byte ptr [esp+0x1C],0

 Block19:
	test bl,2
	je Block22

 Block20:
	mov eax,dword ptr [esp+0x18]
	and ebx,0xFFFFFFFD
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	cmp byte ptr [esp+0x1C],0
	je Block25

 Block23:
	mov esi,dword ptr [esi+0xB0]
	test esi,esi
	je Block13

 Block24:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea eax,[esi+4]
	push eax
	call CWndMan::SetFocus
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8

 Block25:
	mov ecx,dword ptr [esi+0x70]
	cmp ecx,dword ptr [esi+0xB0]
	jne Block27

 Block26:
	mov ecx,dword ptr [esi+0xB8]
	lea edx,[esp+0x18]
	push edx
	call CCtrlEdit::GetText
	mov ecx,eax
	or ebx,4
	call ZXString<char>::IsEmpty
	mov byte ptr [esp+0x1C],1
	test eax,eax
	jne Block28

 Block27:
	mov byte ptr [esp+0x1C],0

 Block28:
	test bl,4
	je Block31

 Block29:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	cmp byte ptr [esp+0x1C],0
	je Block48

 Block32:
	mov esi,dword ptr [esi+0xB8]
	test esi,esi
	je Block13

 Block33:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea eax,[esi+4]
	push eax
	call CWndMan::SetFocus
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8

 Block34:
	cmp ebp,0x26
	jne Block44

 Block35:
	mov edx,dword ptr [esi+0xA8]
	mov eax,dword ptr [esi+0x70]
	cmp eax,edx
	jne Block38

 Block36:
	mov esi,dword ptr [esi+0xA0]
	test esi,esi
	je Block13

 Block37:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea eax,[esi+4]
	push eax
	call CWndMan::SetFocus
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8

 Block38:
	mov ecx,dword ptr [esi+0xB0]
	cmp eax,ecx
	jne Block41

 Block39:
	test edx,edx
	je Block13

 Block40:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea eax,[edx+4]
	push eax
	call CWndMan::SetFocus
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8

 Block41:
	cmp eax,dword ptr [esi+0xB8]
	jne Block48

 Block42:
	test ecx,ecx
	je Block13

 Block43:
	lea eax,[ecx+4]
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8

 Block44:
	cmp ebp,0x28
	jne Block48

 Block45:
	mov eax,dword ptr [esi+0x70]
	cmp eax,dword ptr [esi+0xA0]
	je Block11

 Block46:
	cmp eax,dword ptr [esi+0xA8]
	je Block23

 Block47:
	cmp eax,dword ptr [esi+0xB0]
	je Block32

 Block48:
	push edi
	push ebp
	mov ecx,esi
	call CDialog::OnKey
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8
}
}
// CUIClaim::CUIClaim
_SUB_EXCEPTION_HANDLER(395130)
__SUB_CLASS_THIS(00395130, __thiscall, 53842,  CUIClaim, void, ZArray<ZXString<char> >&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_395130
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],esi
	call CDialog::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CUIClaim::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIClaim::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIClaim::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xBC],edi
	lea ebp,[esi+0xC0]
	mov dword ptr [ebp],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD0],edi
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esi+0xD8],edi
	mov dword ptr [esi+0xDC],edi
	mov eax,dword ptr [esp+0x24]
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x20],9
	call ZArray<ZXString<char>>::operator=
	lea ecx,[esp+0x24]
	push 0xD66
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push edi
	mov ecx,ebp
	mov byte ptr [esp+0x24],0xA
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1C],9
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov edx,dword ptr [esp+0x28]
	push 1
	push edi
	push 1
	push offset _S_UIUIWINDOW2IMGCL__4
	mov ecx,esi
	mov dword ptr [esi+0xC8],edx
	call CDialog::CreateDlg_2
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x10
	ret 8
}
}
// CUISendGift::Draw
_SUB_EXCEPTION_HANDLER(38AD00)
__SUB_CLASS_THIS(0038AD00, __thiscall, 54208,  CUISendGift, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38AD00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
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
	mov eax,dword ptr [ebp+8]
	xor ebx,ebx
	push eax
	mov dword ptr [ebp-0x3C],ebx
	call CWnd::Draw
	lea ecx,[ebp-0x40]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov dword ptr [ebp-4],ebx
	cmp dword ptr [esi+0xC0],ebx
	je Block16

 Block1:
	lea edx,[ebp-0x28]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	mov ecx,3
	mov word ptr [ebp-0x38],cx
	mov dword ptr [ebp-0x30],0xFF
	mov eax,dword ptr [esi+0xB8]
	push ebx
	push ebx
	push 0xFFFFFFFF
	push eax
	push ebx
	push ebx
	mov byte ptr [ebp-4],2
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edi,esp
	lea edx,[ebp-0x28]
	push edx
	lea eax,[ebp-0x38]
	push eax
	lea ecx,[ebp-0x3C]
	push 1
	push ecx
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esi+0xB8]
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],3
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x40]
	mov byte ptr [ebp-4],4
	test ecx,ecx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	push 0x19
	push 0x54
	mov byte ptr [ebp-4],3
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x3C]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block7:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],1
	jne Block14

 Block8:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block10:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block11:
	cmp word ptr [ebp-0x28],8
	mov byte ptr [ebp-4],0
	jne Block15

 Block12:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	je Block17

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block14:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x38]
	push edx
	call edi
	jmp Block11

 Block15:
	lea ecx,[ebp-0x28]
	push ecx
	call edi
	jmp Block17

 Block16:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block17:
	mov eax,dword ptr [esi+0x74]
	mov ecx,dword ptr [esi+0xAC]
	cmp eax,ecx
	je Block24

 Block18:
	cmp eax,dword ptr [esi+0xB4]
	je Block24

 Block19:
	lea edx,[ebp-0x18]
	push edx
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	mov ebx,1
	mov byte ptr [ebp-4],5
	mov dword ptr [ebp-0x3C],ebx
	test eax,eax
	je Block21

 Block20:
	cmp byte ptr [eax],0
	jne Block24

 Block21:
	mov ecx,dword ptr [esi+0xB4]
	lea eax,[ebp-0x44]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	mov ebx,3
	test eax,eax
	je Block23

 Block22:
	cmp byte ptr [eax],0
	jne Block24

 Block23:
	mov byte ptr [ebp-0x11],0
	jmp Block25

 Block24:
	mov byte ptr [ebp-0x11],1

 Block25:
	test bl,2
	je Block28

 Block26:
	mov eax,dword ptr [ebp-0x44]
	and ebx,0xFFFFFFFD
	mov dword ptr [ebp-0x3C],ebx
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov dword ptr [ebp-4],0
	test bl,1
	je Block31

 Block29:
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x38]
	push ecx
	call ebx
	lea edx,[ebp-0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp byte ptr [ebp-0x11],0
	je Block43

 Block32:
	test eax,eax
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	lea eax,[ebp-0x28]
	push eax
	mov byte ptr [ebp-4],6
	call ebx
	lea ecx,[ebp-0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	mov ecx,dword ptr [esi+0xC4]
	mov bl,7
	mov byte ptr [ebp-4],bl
	test ecx,ecx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[ebp-0x18]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],8
	test ecx,ecx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea eax,[ebp-0x38]
	push eax
	lea edx,[ebp-0x28]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block42:
	mov byte ptr [ebp-4],6
	jmp Block54

 Block43:
	test eax,eax
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	lea eax,[ebp-0x28]
	push eax
	mov byte ptr [ebp-4],9
	call ebx
	lea ecx,[ebp-0x28]
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
	mov ecx,dword ptr [esi+0xC4]
	mov bl,0xA
	mov byte ptr [ebp-4],bl
	test ecx,ecx
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	lea edx,[ebp-0x18]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0xB
	test ecx,ecx
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	lea eax,[ebp-0x38]
	push eax
	lea edx,[ebp-0x28]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	mov byte ptr [ebp-4],9

 Block54:
	mov esi,8
	cmp word ptr [ebp-0x28],si
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[ebp-0x28]
	push ecx
	call edi

 Block58:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x38],si
	jne Block61

 Block59:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea eax,[ebp-0x38]
	push eax
	call edi

 Block62:
	mov eax,dword ptr [ebp-0x40]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block64

 Block63:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block64:
	lea esp,[ebp-0x54]
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
// CUIMapleTV::IsCheckWhisper
__SUB_CLASS_THIS0(0037F7C0, __thiscall, 54603,  CUIMapleTV, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xBC]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax+0x48]
	ret

 Block2:
	xor eax,eax
	ret
}
}
// CUISendMemo::~CUISendMemo
_SUB_EXCEPTION_HANDLER(382BD0)
__SUB_CLASS_THIS0(00382BD0, __thiscall, 53885,  CUISendMemo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_382BD0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUISendMemo::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUISendMemo::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUISendMemo::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB8]
	mov dword ptr [esp+0x1C],5
	call CLayoutMan::~CLayoutMan
	lea edi,[esi+0xB0]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xA8]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
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
// CUISkillEffectChange::OnCreate
_SUB_EXCEPTION_HANDLER(392310)
__SUB_CLASS_THIS(00392310, __thiscall, 54666,  CUISkillEffectChange, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_392310
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
	mov edi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x2C],ebx
	lea eax,[esp+0x18]
	push 0x1526
	push eax
	mov dword ptr [esp+0x44],ebx
	mov dword ptr [esp+0x2C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x40],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x3C],bl
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
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x3C],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0x3C],bl
	cmp eax,ebx
	je Block13

 Block6:
	add eax,8
	cmp eax,ebx
	je Block13

 Block7:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block9

 Block8:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [edi+0x98]
	mov dword ptr [edi+0x98],esi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov esi,dword ptr [edi+0x78]
	mov ebp,dword ptr [edi+0x98]
	cmp esi,ebx
	jne Block14

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	xor esi,esi
	jmp Block9

 Block14:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],ebx
	call ecx
	cmp eax,ebx
	jge Block16

 Block15:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block16:
	mov esi,dword ptr [edi+0x78]
	mov edx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x1C],edx
	cmp esi,ebx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],ebx
	call edx
	cmp eax,ebx
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [ebp]
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	push ebx
	add edx,0xFFFFFFDD
	push edx
	mov edx,dword ptr [eax+0x28]
	shr ecx,1
	sub ecx,0x13
	push ecx
	push 1
	push edi
	mov ecx,ebp
	call edx
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp eax,ebx
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block22:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 4
}
}
// CUISendGift::~CUISendGift
_SUB_EXCEPTION_HANDLER(3808D0)
__SUB_CLASS_THIS0(003808D0, __thiscall, 54206,  CUISendGift, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3808D0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUISendGift::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUISendGift::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUISendGift::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xC4]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],6
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xBC]
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esi+0xB8]
	mov byte ptr [esp+0x1C],5
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	lea edi,[esi+0xB0]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xA8]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block16

 Block15:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block16:
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
// CUIWeddingInvitation::Draw
_SUB_EXCEPTION_HANDLER(391F00)
__SUB_CLASS_THIS(00391F00, __thiscall, 54419,  CUIWeddingInvitation, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_391F00
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
	mov eax,dword ptr [esp+0x4C]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push edx
	mov dword ptr [esp+0x48],0
	call ebp
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
	mov byte ptr [esp+0x48],1
	call ebp
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
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x1C]
	push 1
	push edx
	mov byte ptr [esp+0x54],2
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esi+0x90]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,3
	push eax
	mov byte ptr [esp+0x58],bl
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x54],4
	test edi,edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	push 0x69
	push 0x32
	mov ecx,edi
	mov byte ptr [esp+0x5C],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],2
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov ebx,8
	mov byte ptr [esp+0x44],1
	cmp word ptr [esp+0x1C],bx
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov byte ptr [esp+0x44],0
	cmp word ptr [esp+0x2C],bx
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block16:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp
	lea edx,[esp+0x1C]
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
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x48],5
	call ebp
	lea ecx,[esp+0x2C]
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
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esp+0x1C]
	push 1
	push ecx
	mov byte ptr [esp+0x54],6
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esi+0x94]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,7
	push eax
	mov byte ptr [esp+0x58],bl
	call _xbstr_t::_ctor_0
	push 0x69
	mov byte ptr [esp+0x58],8
	push 0x83
	mov ecx,edi
	mov byte ptr [esp+0x5C],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],6
	test eax,eax
	je Block22

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block22:
	mov esi,8
	mov byte ptr [esp+0x44],5
	cmp word ptr [esp+0x2C],si
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov byte ptr [esp+0x44],0
	cmp word ptr [esp+0x1C],si
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call eax
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
// CUIMapleTV::OnChildNotify
_SUB_EXCEPTION_HANDLER(37FCB0)
__SUB_CLASS_THIS(0037FCB0, __thiscall, 54598,  CUIMapleTV, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_37FCB0
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
	cmp dword ptr [esi+0xD0],0
	jne Block4

 Block1:
	mov eax,dword ptr [esi+0x98]
	cmp dword ptr [eax+0x48],0
	mov eax,dword ptr [esi+0xC4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	je Block3

 Block2:
	push 1
	call edx
	jmp Block4

 Block3:
	push 0
	call edx
	mov ecx,dword ptr [esi+0xC4]
	push offset _S_
	call CCtrlEdit::SetText

 Block4:
	lea eax,[esp+8]
	push eax
	mov ecx,esi
	call CWnd::GetCanvas
	cmp dword ptr [esp+0x20],0x64
	mov dword ptr [esp+0x14],0
	jne Block6

 Block5:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [esp+0x1C]
	mov edx,dword ptr [edx+0x20]
	push eax
	mov ecx,esi
	call edx

 Block6:
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0xC
}
}
// CUIAvatarMegaphone::CUIAvatarMegaphone
_SUB_EXCEPTION_HANDLER(381240)
__SUB_CLASS_THIS(00381240, __thiscall, 54620,  CUIAvatarMegaphone, void, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_381240
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
	mov eax,dword ptr [esp+0x20]
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CUIAvatarMegaphone::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIAvatarMegaphone::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIAvatarMegaphone::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x90],eax
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0xA0],edi
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [esi+0xA4],ecx
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB4],edi
	lea edx,[esp+0x20]
	push 0xFAE
	push edx
	mov byte ptr [esp+0x20],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x28],5
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x18],4
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
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
// CUITransferWorldSelectDlg::~CUITransferWorldSelectDlg
_SUB_EXCEPTION_HANDLER(381C70)
__SUB_CLASS_THIS0(00381C70, __thiscall, 54559,  CUITransferWorldSelectDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_381C70
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
	int 3// TODO: 	mov dword ptr [esi],offset CUITransferWorldSelectDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUITransferWorldSelectDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUITransferWorldSelectDlg::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0xBC]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xB4]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xAC]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xA4]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	mov eax,dword ptr [esi+0x9C]
	mov byte ptr [esp+0x1C],1
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov ecx,esi
	mov dword ptr [TSingleton<CUITransferWorldSelectDlg>::ms_pInstance],ebx
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
// CUIAvatarMegaphone::~CUIAvatarMegaphone
_SUB_EXCEPTION_HANDLER(381330)
__SUB_CLASS_THIS0(00381330, __thiscall, 54622,  CUIAvatarMegaphone, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_381330
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIAvatarMegaphone::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIAvatarMegaphone::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIAvatarMegaphone::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0xB0]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlMLEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xA8]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
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
// CUISendGift::CUISendGift
_SUB_EXCEPTION_HANDLER(3807E0)
__SUB_CLASS_THIS0(003807E0, __thiscall, 54204,  CUISendGift, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3807E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],esi
	call CDialog::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CUISendGift::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUISendGift::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUISendGift::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC4],edi
	lea eax,[esp+0xC]
	push 0xC4E
	push eax
	mov byte ptr [esp+0x24],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x2C],9
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x1C],8
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret
}
}
// CUITransferWorldSelectDlg::GetResult
__SUB_CLASS_THIS(0037F440, __thiscall, 54564,  CUITransferWorldSelectDlg, void, long&) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xA0]
	mov ecx,dword ptr [esp+4]
	mov dword ptr [ecx],eax
	ret 4
}
}
// CUIChangingLicenseNotice::Draw
_SUB_EXCEPTION_HANDLER(393920)
__SUB_CLASS_THIS(00393920, __thiscall, 54515,  CUIChangingLicenseNotice, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_393920
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
	mov ebp,ecx
	mov eax,dword ptr [esp+0x70]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebp
	call CWnd::GetCanvas
	xor esi,esi
	mov edx,3
	mov dword ptr [esp+0x68],esi
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],1
	mov ebx,dword ptr [esp+0x18]
	mov byte ptr [esp+0x68],1
	cmp ebx,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+0x20]
	push eax
	push 0x13B
	push 0x161
	push 0x33
	push 0x1D
	lea ecx,[esp+0x64]
	push ecx
	mov ecx,ebx
	call IWzCanvas::SetClipRect
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x68],3
	jne Block5

 Block3:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	cmp eax,esi
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block6:
	mov dword ptr [esp+0x70],esi
	mov dword ptr [esp+0x14],esi
	jmp Block8

 Block8:
	mov eax,dword ptr [ebp+0xAC]
	test eax,eax
	je Block24

 Block9:
	mov ecx,dword ptr [esp+0x70]
	cmp ecx,dword ptr [eax-4]
	jae Block24

 Block10:
	mov edi,eax
	add edi,dword ptr [esp+0x14]
	mov eax,dword ptr [edi+8]
	mov esi,dword ptr [edi+0x1C]
	lea edx,[eax+eax*4]
	sub esi,edx
	mov eax,esi
	sub eax,dword ptr [ebp+0xB4]
	cmp eax,0xFFFFFFD0
	jl Block22

 Block11:
	cmp eax,0x155
	jge Block22

 Block12:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block23

 Block13:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x6C],4
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block23

 Block14:
	mov eax,dword ptr [edi+0xC]
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push eax
	mov eax,dword ptr [edi+0x10]
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x7C],5
	call _xbstr_t::_ctor_0
	sub esi,dword ptr [ebp+0xB4]
	mov eax,dword ptr [edi+0x18]
	add esi,0x33
	push esi
	add eax,0x1D
	mov byte ptr [esp+0x7C],6
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x80],5
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x68],4
	cmp word ptr [esp+0x30],si
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov byte ptr [esp+0x68],3
	cmp word ptr [esp+0x40],si
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [esp+0x70]
	add dword ptr [esp+0x14],0x44
	jmp Block8

 Block21:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	inc dword ptr [esp+0x70]
	add dword ptr [esp+0x14],0x44
	jmp Block8

 Block23:
	push eax
	call _com_issue_error

 Block24:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x68],0
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	call edx
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
// CUIAdminAntiMacro::OnSetFocus
__SUB_CLASS_THIS(0038CC70, __thiscall, 54288,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUINoticePremium::CUINoticePremium
_SUB_EXCEPTION_HANDLER(3928A0)
__SUB_CLASS_THIS0(003928A0, __thiscall, 72337,  CUINoticePremium, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3928A0
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
	mov esi,ecx
	mov dword ptr [esp+0x2C],esi
	call CDialog::_ctor_default
	xor ebp,ebp
	lea eax,[esi+0x91]
	mov dword ptr [esp+0x38],ebp
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFF6F
	mov dword ptr [TSingleton<CUINoticePremium>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUINoticePremium>::ms_pInstance],ebp

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUINoticePremium::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINoticePremium::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINoticePremium::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x98],ebp
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGNO__6
	mov byte ptr [esp+0x54],2
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov edi,dword ptr [esi+0x78]
	cmp edi,ebp
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],ebp
	call edx
	cmp eax,ebp
	jge Block7

 Block6:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block7:
	mov edi,dword ptr [esi+0x78]
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],eax
	cmp edi,ebp
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x18]
	push edx
	push edi
	mov dword ptr [esp+0x20],ebp
	call eax
	cmp eax,ebp
	jge Block11

 Block10:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block11:
	mov edi,dword ptr [esi+0x78]
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],ecx
	cmp edi,ebp
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x1C]
	push eax
	push edi
	mov dword ptr [esp+0x24],ebp
	call ecx
	cmp eax,ebp
	jge Block15

 Block14:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block15:
	mov edi,dword ptr [esi+0x78]
	mov ebx,dword ptr [esp+0x1C]
	cmp edi,ebp
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x20]
	push eax
	push edi
	mov dword ptr [esp+0x28],ebp
	call ecx
	cmp eax,ebp
	jge Block19

 Block18:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block19:
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x28]
	push 4
	push 1
	push ebp
	push 1
	push 0xA
	push edx
	push eax
	mov eax,ebx
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	mov eax,dword ptr [esp+0x40]
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	mov ecx,esi
	call CWnd::CreateWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret
}
}
// CUISendGifts::SetLayer
_SUB_EXCEPTION_HANDLER(387BE0)
__SUB_CLASS_THIS0(00387BE0, __thiscall, 54050,  CUISendGifts, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_387BE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov eax,3
	mov word ptr [esp+0x20],ax
	mov dword ptr [esp+0x28],0xFFFFFFFE
	lea ecx,[esp+0x1C]
	push ecx
	xor edi,edi
	mov ecx,ebp
	mov dword ptr [esp+0x9C],edi
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x98],1
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x18]
	cmp eax,edi
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x98],0
	cmp eax,edi
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	cmp word ptr [esp+0x20],8
	mov dword ptr [esp+0x98],0xFFFFFFFF
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov eax,dword ptr [ebp+0xF8]
	sub eax,edi
	je Block15

 Block11:
	sub eax,1
	je Block14

 Block12:
	sub eax,1
	jne Block17

 Block13:
	push edi
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0x1326
	mov dword ptr [ebp+0x24],0x1D9
	push edx
	jmp Block16

 Block14:
	push edi
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0x1326
	mov dword ptr [ebp+0x24],0x1D9
	push eax
	jmp Block16

 Block15:
	push edi
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0x1325
	mov dword ptr [ebp+0x24],0x10A
	push ecx

 Block16:
	mov dword ptr [ebp+0x28],0xA9
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,ebp
	call CWnd::SetBackgrnd

 Block17:
	mov dword ptr [esp+0x14],edi
	lea edx,[esp+0x1C]
	push 0x3D0
	push edx
	mov dword ptr [esp+0xA0],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[esp+0x18]
	push ecx
	push eax
	mov byte ptr [esp+0xA4],3
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x98],2
	cmp eax,edi
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x30]
	push edx
	call esi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	lea ecx,[esp+0x20]
	mov bl,4
	push ecx
	mov byte ptr [esp+0x9C],bl
	call esi
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x98],5
	cmp ecx,edi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea eax,[esp+0x30]
	push eax
	mov eax,dword ptr [ebp+0x28]
	lea edx,[esp+0x24]
	push edx
	mov edx,dword ptr [ebp+0x24]
	push eax
	push edx
	call IWzCanvas::Create
	mov byte ptr [esp+0x98],bl
	mov ebx,8
	cmp word ptr [esp+0x20],bx
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov byte ptr [esp+0x98],2
	cmp word ptr [esp+0x30],bx
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,edi
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x70]
	push 0x85
	push eax
	mov edi,eax
	call edx
	test eax,eax
	jge Block37

 Block36:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block37:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	push 0x54
	push eax
	mov edi,eax
	call edx
	test eax,eax
	jge Block41

 Block40:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block41:
	lea eax,[esp+0x70]
	push eax
	call esi
	lea ecx,[esp+0x70]
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
	lea edx,[esp+0x60]
	push edx
	mov byte ptr [esp+0x9C],6
	call esi
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x9C],7
	call esi
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x9C],8
	call esi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block49

 Block48:
	push eax
	call _com_issue_error

 Block49:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x9C],9
	call esi
	lea eax,[esp+0x30]
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
	lea ecx,[esp+0x18]
	push ecx
	mov bl,0xA
	mov ecx,ebp
	mov byte ptr [esp+0x9C],bl
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x98],0xB
	test ecx,ecx
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	lea edx,[esp+0x70]
	push edx
	lea eax,[esp+0x64]
	push eax
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x4C]
	push eax
	mov eax,dword ptr [esp+0x24]
	lea edx,[esp+0x40]
	push edx
	push eax
	lea edx,[esp+0x98]
	push edx
	call IWzGr2DLayer::InsertCanvas
	mov edi,8
	cmp word ptr [esp+0x80],di
	jne Block62

 Block54:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block56

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block56:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block57:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x98],bl
	test eax,eax
	je Block59

 Block58:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block59:
	mov byte ptr [esp+0x98],9
	cmp word ptr [esp+0x30],di
	jne Block63

 Block60:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block64

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block62:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x80]
	push ecx
	call esi
	jmp Block57

 Block63:
	lea edx,[esp+0x30]
	push edx
	call esi

 Block64:
	mov byte ptr [esp+0x98],8
	cmp word ptr [esp+0x40],di
	jne Block67

 Block65:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea ecx,[esp+0x40]
	push ecx
	call esi

 Block68:
	mov byte ptr [esp+0x98],7
	cmp word ptr [esp+0x50],di
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea eax,[esp+0x50]
	push eax
	call esi

 Block72:
	mov byte ptr [esp+0x98],6
	cmp word ptr [esp+0x60],di
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea edx,[esp+0x60]
	push edx
	call esi

 Block76:
	mov byte ptr [esp+0x98],2
	cmp word ptr [esp+0x70],di
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea ecx,[esp+0x70]
	push ecx
	call esi

 Block80:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	test eax,eax
	je Block82

 Block81:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block82:
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret
}
}
// CMatchTableDlg::~CMatchTableDlg
_SUB_EXCEPTION_HANDLER(380380)
__SUB_CLASS_THIS0(00380380, __thiscall, 53959,  CMatchTableDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_380380
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
	int 3// TODO: 	mov dword ptr [esi],offset CMatchTableDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CMatchTableDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CMatchTableDlg::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0x428]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],0xB
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0x420]
	mov byte ptr [esp+0x1C],0xA
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x418]
	mov byte ptr [esp+0x1C],9
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	mov eax,dword ptr [esi+0x414]
	mov byte ptr [esp+0x1C],8
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x410]
	mov byte ptr [esp+0x1C],7
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0x40C]
	mov byte ptr [esp+0x1C],6
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi+0x408]
	mov byte ptr [esp+0x1C],5
	cmp eax,ebx
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov eax,dword ptr [esi+0x404]
	mov byte ptr [esp+0x1C],4
	cmp eax,ebx
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov eax,dword ptr [esi+0x400]
	mov byte ptr [esp+0x1C],3
	cmp eax,ebx
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov eax,dword ptr [esi+0x3FC]
	mov byte ptr [esp+0x1C],2
	cmp eax,ebx
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	push offset ZXString<char>::~ZXString<char>
	push 8
	push 4
	lea eax,[esi+0x3D0]
	push eax
	mov byte ptr [esp+0x2C],1
	call __eh_vector_dtor_iterator
	push offset ZRef<CAvatar>::~ZRef<CAvatar>
	push 8
	push 8
	lea ecx,[esi+0x390]
	push ecx
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
// CUIAvatarMegaphone::OnChildNotify
_SUB_EXCEPTION_HANDLER(37FD70)
__SUB_CLASS_THIS(0037FD70, __thiscall, 54626,  CUIAvatarMegaphone, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_37FD70
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
	cmp dword ptr [esp+0x20],0x64
	mov dword ptr [esp+0x14],0
	jne Block2

 Block1:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [esp+0x1C]
	mov edx,dword ptr [edx+0x20]
	push eax
	mov ecx,esi
	call edx

 Block2:
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
	ret 0xC
}
}
// CUISendGifts::CUISendGifts
_SUB_EXCEPTION_HANDLER(39EBC0)
__SUB_CLASS_THIS0(0039EBC0, __thiscall, 54048,  CUISendGifts, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39EBC0
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
	call CDialog::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CUISendGifts::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUISendGifts::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUISendGifts::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esi+0xDC],edi
	mov dword ptr [esi+0xE4],edi
	mov dword ptr [esi+0xE8],edi
	mov dword ptr [esi+0xEC],edi
	mov dword ptr [esi+0xF0],edi
	mov dword ptr [esi+0xF4],edi
	mov dword ptr [esi+0xF8],edi
	mov dword ptr [esi+0xFC],edi
	mov dword ptr [esi+0x100],edi
	mov dword ptr [esi+0x10C],edi
	mov dword ptr [esi+0x110],edi
	mov dword ptr [esi+0x114],edi
	mov dword ptr [esi+0x118],edi
	push edi
	push offset _S_
	lea ebx,[esi+0x11C]
	push edi
	push edi
	mov ecx,ebx
	mov byte ptr [esp+0x2C],0x14
	mov dword ptr [ebx],edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	mov ecx,ebx
	call ZXString<char>::ReleaseBuffer
	push edi
	push offset _S_
	lea ebx,[esi+0x120]
	push edi
	push edi
	mov ecx,ebx
	mov byte ptr [esp+0x2C],0x15
	mov dword ptr [ebx],edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	mov ecx,ebx
	call ZXString<char>::ReleaseBuffer
	push edi
	push offset _S_
	lea ebx,[esi+0x124]
	push edi
	push edi
	mov ecx,ebx
	mov byte ptr [esp+0x2C],0x16
	mov dword ptr [ebx],edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	mov ecx,ebx
	call ZXString<char>::ReleaseBuffer
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0xA9
	push 0x10A
	push 0xD7
	push 0x10B
	mov ecx,esi
	mov byte ptr [esp+0x40],0x17
	call CWnd::CreateWnd
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
// CUIMapleTV::CUIMapleTV
_SUB_EXCEPTION_HANDLER(380FC0)
__SUB_CLASS_THIS(00380FC0, __thiscall, 54592,  CUIMapleTV, void, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_380FC0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],esi
	call CDialog::_ctor_default
	mov eax,dword ptr [esp+0x24]
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CUIMapleTV::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIMapleTV::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIMapleTV::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x90],eax
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esi+0x98],edi
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 2
	push 4
	lea ecx,[esi+0x9C]
	push ecx
	mov byte ptr [esp+0x30],1
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xB0],edi
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [esi+0xB4],edx
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xCC],edi
	mov ebp,dword ptr [esp+0x28]
	push ebp
	mov ecx,esi
	mov byte ptr [esp+0x20],7
	mov dword ptr [esi+0xD0],edi
	call CUIMapleTV::setDialogType
	cmp edx,edi
	je Block3

 Block1:
	mov eax,0xF96
	cmp ebp,1
	jne Block5

 Block2:
	mov eax,0xF97
	jmp Block5

 Block3:
	mov eax,0xF94
	cmp ebp,1
	jne Block5

 Block4:
	mov eax,0xF95

 Block5:
	push eax
	lea edx,[esp+0x28]
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x2C],8
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1C],7
	cmp eax,edi
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x10
	ret 0xC
}
}
// CUIAdminAntiMacro::~CUIAdminAntiMacro
_SUB_EXCEPTION_HANDLER(38CC90)
__SUB_CLASS_THIS0(0038CC90, __thiscall, 54284,  CUIAdminAntiMacro, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38CC90
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIAdminAntiMacro::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIAdminAntiMacro::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIAdminAntiMacro::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB4]
	mov dword ptr [esp+0x18],4
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0xB0]
	mov byte ptr [esp+0x18],3
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	cmp dword ptr [esi+0xA0],0
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x18],2
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	cmp dword ptr [esi+0x98],0
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x18],1
	je Block6

 Block5:
	push 0
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block6:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIAdminAntiMacro>::ms_pInstance],0
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CUIInitialQuiz::CUIInitialQuiz
_SUB_EXCEPTION_HANDLER(38E3D0)
__SUB_CLASS_THIS0(0038E3D0, __thiscall, 54348,  CUIInitialQuiz, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38E3D0
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
	mov esi,ecx
	mov dword ptr [esp+0x2C],esi
	call CDialog::_ctor_default
	xor ebx,ebx
	lea eax,[esi+0x91]
	mov dword ptr [esp+0x38],ebx
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFF6F
	mov dword ptr [TSingleton<CUIInitialQuiz>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIInitialQuiz>::ms_pInstance],ebx

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIInitialQuiz::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIInitialQuiz::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIInitialQuiz::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x98],ebx
	mov dword ptr [esi+0xA0],ebx
	mov dword ptr [esi+0xA8],ebx
	mov dword ptr [esi+0xAC],ebx
	mov dword ptr [esi+0xB0],ebx
	mov dword ptr [esi+0xB4],ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0xF72
	push eax
	mov byte ptr [esp+0x58],7
	mov dword ptr [esi+0xC4],ebx
	mov dword ptr [esi+0xC8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov edi,dword ptr [esi+0x78]
	cmp edi,ebx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],ebx
	call eax
	cmp eax,ebx
	jge Block7

 Block6:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block7:
	mov edi,dword ptr [esi+0x78]
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ecx
	cmp edi,ebx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x20],ebx
	call ecx
	cmp eax,ebx
	jge Block11

 Block10:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block11:
	mov edi,dword ptr [esi+0x78]
	mov edx,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],edx
	cmp edi,ebx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
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
	mov edi,dword ptr [esi+0x78]
	mov ebp,dword ptr [esp+0x1C]
	cmp edi,ebx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x20]
	push ecx
	push edi
	mov dword ptr [esp+0x28],ebx
	call edx
	cmp eax,ebx
	jge Block19

 Block18:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block19:
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x28]
	push 4
	push 1
	push ebx
	push 1
	push 0xA
	push eax
	mov eax,ebp
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push ecx
	push eax
	mov eax,dword ptr [esp+0x40]
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	mov ecx,esi
	call CWnd::CreateWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret
}
}
// CUISendGifts::OnMouseButton
_SUB_EXCEPTION_HANDLER(39F1A0)
__SUB_CLASS_THIS(0039F1A0, __thiscall, 54053,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39F1A0
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
	mov eax,dword ptr [esp+0x20]
	cmp eax,0x202
	jne Block8

 Block1:
	mov eax,dword ptr [esi+0xF4]
	sub eax,1
	mov edi,dword ptr [esi+0x108]
	je Block4

 Block2:
	sub eax,1
	jne Block6

 Block3:
	push eax
	jmp Block5

 Block4:
	push 1

 Block5:
	mov eax,dword ptr [esi+0xC8]
	mov eax,dword ptr [eax+0x38]
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [esp+0x2C]
	push eax
	push ecx
	push edx
	lea ecx,[esi-4]
	call CUISendGifts::GetMemberIDFromPoint
	mov dword ptr [esi+0x108],eax

 Block6:
	cmp dword ptr [esi+0x108],edi
	je Block20

 Block7:
	push 0
	lea ecx,[esi-4]
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 0x10

 Block8:
	cmp eax,0x203
	jne Block20

 Block9:
	mov dword ptr [esp+0x20],0
	mov eax,dword ptr [esi+0xF4]
	sub eax,1
	mov dword ptr [esp+0x18],0
	je Block14

 Block10:
	sub eax,1
	jne Block18

 Block11:
	mov eax,dword ptr [esi+0xC8]
	mov eax,dword ptr [eax+0x38]
	mov ecx,dword ptr [esp+0x28]
	push 0
	push eax
	mov eax,dword ptr [esp+0x34]
	push eax
	push ecx
	lea edx,[esp+0x3C]
	add esi,0xFFFFFFFC
	push edx
	mov ecx,esi
	call CUISendGifts::GetCharacterNameFromPoint
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x1C],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	push ecx
	lea eax,[esp+0x24]
	mov dword ptr [esp+0x10],esp
	mov ecx,esp
	push eax
	jmp Block17

 Block14:
	mov eax,dword ptr [esi+0xC8]
	mov eax,dword ptr [eax+0x38]
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x28]
	push 1
	push eax
	push ecx
	push edx
	lea eax,[esp+0x38]
	add esi,0xFFFFFFFC
	push eax
	mov ecx,esi
	call CUISendGifts::GetCharacterNameFromPoint
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x1C],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	push ecx
	lea edx,[esp+0x24]
	mov dword ptr [esp+0x10],esp
	mov ecx,esp
	push edx

 Block17:
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call CUISendGifts::AddReciever

 Block18:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 0x10
}
}
// CUISendMemo::Draw
__SUB_CLASS_THIS(0037F120, __thiscall, 53887,  CUISendMemo, void, const tagRECT*) {
__asm {

 Block0:
	jmp  CWnd::Draw
}
}
// CSlideNotice::SetMsg
_SUB_EXCEPTION_HANDLER(387070)
__SUB_CLASS_THIS(00387070, __thiscall, 54024,  CSlideNotice, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_387070
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
	mov edi,ecx
	mov dword ptr [ebp-0x64],edi
	mov eax,dword ptr [edi+0x84]
	xor ebx,ebx
	mov dword ptr [ebp-4],ebx
	cmp eax,ebx
	je Block2

 Block1:
	mov dword ptr [edi+0x84],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x34]
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
	mov edx,3
	mov word ptr [ebp-0x20],dx
	mov dword ptr [ebp-0x18],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],2
	cmp ecx,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[ebp-0x34]
	push eax
	lea edx,[ebp-0x20]
	push edx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea eax,[ebp-0x24]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x84]
	cmp esi,eax
	je Block11

 Block7:
	mov dword ptr [edi+0x84],eax
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block9:
	cmp esi,ebx
	je Block11

 Block10:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block11:
	mov eax,dword ptr [ebp-0x24]
	cmp eax,ebx
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block13:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],1
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],0
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov esi,dword ptr [edi+0x84]
	cmp esi,ebx
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
	cmp eax,ebx
	jge Block25

 Block24:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	lea ecx,[ebp-0x24]
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov byte ptr [ebp-4],3
	mov word ptr [ebp-0x20],dx
	mov dword ptr [ebp-0x18],eax
	cmp eax,ebx
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block27:
	mov esi,dword ptr [edi+0x84]
	mov byte ptr [ebp-4],4
	cmp esi,ebx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov edx,dword ptr [ebp-0x20]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x1C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x18]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x14]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebx
	jge Block31

 Block30:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block31:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],3
	jne Block34

 Block32:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	cmp eax,ebx
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],0
	cmp eax,ebx
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	lea eax,[ebp-0x24]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [ebp-4],5
	mov word ptr [ebp-0x20],cx
	mov dword ptr [ebp-0x18],eax
	cmp eax,ebx
	je Block39

 Block38:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block39:
	mov esi,dword ptr [edi+0x84]
	mov byte ptr [ebp-4],6
	cmp esi,ebx
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	mov edx,dword ptr [ebp-0x20]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x1C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x18]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x14]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,ebx
	jge Block43

 Block42:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block43:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],5
	jne Block46

 Block44:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	cmp eax,ebx
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],0
	cmp eax,ebx
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block49:
	mov esi,dword ptr [edi+0x84]
	cmp esi,ebx
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push esi
	call ecx
	cmp eax,ebx
	jge Block53

 Block52:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block53:
	lea edx,[ebp-0x60]
	push 3
	push edx
	call get_basic_font
	add esp,8
	lea eax,[ebp-0x34]
	push eax
	mov byte ptr [ebp-4],7
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	mov edx,dword ptr [ebp+8]
	push ebx
	push ebx
	push 0xFFFFFFFF
	push edx
	push ebx
	push ebx
	mov byte ptr [ebp-4],8
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp+8]
	mov esi,esp
	lea eax,[ebp-0x34]
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push ecx
	push ebx
	push ebx
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x60]
	mov byte ptr [ebp-4],9
	cmp ecx,ebx
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	mov byte ptr [ebp-4],8
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp-0x34],8
	mov esi,eax
	mov dword ptr [ebp-0x24],esi
	mov byte ptr [ebp-4],7
	jne Block60

 Block58:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	cmp eax,ebx
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block61:
	cmp esi,ebx
	jg Block68

 Block62:
	mov ecx,dword ptr [TSingleton<CSlideNotice>::ms_pInstance]
	cmp ecx,ebx
	je Block65

 Block63:
	call CWnd::Destroy
	mov ecx,dword ptr [TSingleton<CSlideNotice>::ms_pInstance]
	cmp ecx,ebx
	je Block65

 Block64:
	mov edx,dword ptr [ecx+8]
	mov eax,dword ptr [edx]
	add ecx,8
	push 1
	call eax

 Block65:
	mov eax,dword ptr [ebp-0x60]
	mov byte ptr [ebp-4],0
	cmp eax,ebx
	je Block67

 Block66:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block67:
	mov eax,dword ptr [ebp+8]
	cmp eax,ebx
	jmp Block180

 Block68:
	lea eax,[esi+0x320]
	mov edi,eax
	shl edi,4
	sub edi,eax
	mov dword ptr [ebp-0x58],ebx
	lea eax,[ebp-0x5C]
	push 0x3D0
	push eax
	mov byte ptr [ebp-4],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[ebp-0x58]
	push ecx
	push eax
	mov byte ptr [ebp-4],0xB
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp-0x5C]
	add esp,0xC
	mov byte ptr [ebp-4],0xA
	cmp eax,ebx
	je Block70

 Block69:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block70:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x34]
	mov bl,0xC
	push ecx
	mov byte ptr [ebp-4],bl
	call esi
	lea edx,[ebp-0x34]
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
	mov ecx,dword ptr [ebp-0x58]
	mov byte ptr [ebp-4],0xD
	test ecx,ecx
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	lea eax,[ebp-0x20]
	push eax
	mov eax,dword ptr [ebp-0x24]
	lea edx,[ebp-0x34]
	push edx
	push 0x17
	push eax
	call IWzCanvas::Create
	mov byte ptr [ebp-4],bl
	mov ebx,8
	cmp word ptr [ebp-0x34],bx
	jne Block79

 Block77:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea edx,[ebp-0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x20],bx
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	lea edx,[ebp-0x20]
	push edx
	call esi
	lea eax,[ebp-0x20]
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
	mov ecx,3
	mov word ptr [ebp-0x34],cx
	mov dword ptr [ebp-0x2C],0xFF
	mov edx,dword ptr [ebp+8]
	push 0
	push 0
	push 0xFFFFFFFF
	push edx
	push 0
	mov bl,0xF
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edx,dword ptr [ebp-0x60]
	mov esi,esp
	lea eax,[ebp-0x20]
	push eax
	mov eax,dword ptr [ebp+8]
	lea ecx,[ebp-0x34]
	push ecx
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x5C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x58]
	mov byte ptr [ebp-4],0x10
	test ecx,ecx
	jne Block88

 Block87:
	push 0x80004003
	call _com_issue_error

 Block88:
	push 5
	push 0
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x34],si
	jne Block91

 Block89:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea edx,[ebp-0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block92:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x20],si
	jne Block95

 Block93:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x44]
	push edx
	call esi
	lea eax,[ebp-0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	lea ecx,[ebp-0x54]
	push ecx
	mov byte ptr [ebp-4],0x11
	call esi
	lea edx,[ebp-0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block100

 Block99:
	push eax
	call _com_issue_error

 Block100:
	lea eax,[ebp-0x74]
	push eax
	mov byte ptr [ebp-4],0x12
	call esi
	lea ecx,[ebp-0x74]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block102

 Block101:
	push eax
	call _com_issue_error

 Block102:
	lea edx,[ebp-0x20]
	push edx
	mov byte ptr [ebp-4],0x13
	call esi
	lea eax,[ebp-0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block104

 Block103:
	push eax
	call _com_issue_error

 Block104:
	lea ecx,[ebp-0x34]
	mov bl,0x14
	push ecx
	mov byte ptr [ebp-4],bl
	call esi
	lea edx,[ebp-0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block106

 Block105:
	push eax
	call _com_issue_error

 Block106:
	mov eax,dword ptr [ebp-0x64]
	mov ecx,dword ptr [eax+0x84]
	mov byte ptr [ebp-4],0x15
	test ecx,ecx
	jne Block108

 Block107:
	push 0x80004003
	call _com_issue_error

 Block108:
	lea edx,[ebp-0x44]
	push edx
	lea eax,[ebp-0x54]
	push eax
	lea edx,[ebp-0x74]
	push edx
	lea eax,[ebp-0x20]
	push eax
	mov eax,dword ptr [ebp-0x58]
	lea edx,[ebp-0x34]
	push edx
	push eax
	lea edx,[ebp-0x84]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x84],8
	jne Block111

 Block109:
	xor eax,eax
	mov word ptr [ebp-0x84],ax
	mov eax,dword ptr [ebp-0x7C]
	test eax,eax
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea ecx,[ebp-0x84]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block112:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],bl
	jne Block115

 Block113:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block116:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],0x13
	jne Block123

 Block117:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	test eax,eax
	je Block119

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block119:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block120:
	cmp word ptr [ebp-0x74],8
	mov byte ptr [ebp-4],0x12
	jne Block124

 Block121:
	xor eax,eax
	mov word ptr [ebp-0x74],ax
	mov eax,dword ptr [ebp-0x6C]
	test eax,eax
	je Block125

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block123:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x20]
	push edx
	call ebx
	jmp Block120

 Block124:
	lea ecx,[ebp-0x74]
	push ecx
	call ebx

 Block125:
	cmp word ptr [ebp-0x54],8
	mov byte ptr [ebp-4],0x11
	jne Block128

 Block126:
	mov eax,dword ptr [ebp-0x4C]
	xor edx,edx
	mov word ptr [ebp-0x54],dx
	test eax,eax
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea eax,[ebp-0x54]
	push eax
	call ebx

 Block129:
	cmp word ptr [ebp-0x44],8
	mov byte ptr [ebp-4],0xA
	jne Block132

 Block130:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	test eax,eax
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea edx,[ebp-0x44]
	push edx
	call ebx

 Block133:
	lea eax,[ebp-0x54]
	push eax
	call esi
	lea ecx,[ebp-0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block135

 Block134:
	push eax
	call _com_issue_error

 Block135:
	lea edx,[ebp-0x44]
	mov bl,0x16
	push edx
	mov byte ptr [ebp-4],bl
	call esi
	lea eax,[ebp-0x44]
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
	mov ecx,dword ptr [ebp-0x64]
	mov ecx,dword ptr [ecx+0x84]
	mov byte ptr [ebp-4],0x17
	test ecx,ecx
	jne Block139

 Block138:
	push 0x80004003
	call _com_issue_error

 Block139:
	lea edx,[ebp-0x54]
	push edx
	lea eax,[ebp-0x44]
	push eax
	push 0
	push 0x400
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x44],si
	jne Block142

 Block140:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	test eax,eax
	je Block143

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block142:
	lea edx,[ebp-0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block143:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x54],si
	jne Block146

 Block144:
	xor eax,eax
	mov word ptr [ebp-0x54],ax
	mov eax,dword ptr [ebp-0x4C]
	test eax,eax
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea ecx,[ebp-0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block147:
	mov edx,3
	mov word ptr [ebp-0x54],dx
	mov dword ptr [ebp-0x4C],0x10000000
	mov eax,dword ptr [ebp-0x64]
	mov esi,dword ptr [eax+0x84]
	mov bl,0x18
	mov byte ptr [ebp-4],bl
	test esi,esi
	jne Block149

 Block148:
	push 0x80004003
	call _com_issue_error

 Block149:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x58]
	lea edx,[ebp-0x5C]
	push edx
	push esi
	mov dword ptr [ebp-0x5C],0
	call eax
	test eax,eax
	jge Block151

 Block150:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block151:
	mov ecx,dword ptr [ebp-0x5C]
	lea eax,[ecx+edi]
	mov edx,3
	mov word ptr [ebp-0x44],dx
	mov dword ptr [ebp-0x3C],eax
	mov edi,dword ptr [ebp-0x64]
	mov ecx,dword ptr [edi+0x84]
	mov byte ptr [ebp-4],0x19
	test ecx,ecx
	jne Block153

 Block152:
	push 0x80004003
	call _com_issue_error

 Block153:
	mov esi,dword ptr [ebp-0x24]
	lea eax,[ebp-0x54]
	push eax
	lea edx,[ebp-0x44]
	push edx
	or eax,0xFFFFFFFF
	push 0
	sub eax,esi
	push eax
	call IWzVector2D::RelMove
	cmp word ptr [ebp-0x44],8
	mov byte ptr [ebp-4],bl
	jne Block156

 Block154:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	test eax,eax
	je Block157

 Block155:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block157

 Block156:
	lea edx,[ebp-0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block157:
	cmp word ptr [ebp-0x54],8
	mov byte ptr [ebp-4],0xA
	jne Block160

 Block158:
	xor eax,eax
	mov word ptr [ebp-0x54],ax
	mov eax,dword ptr [ebp-0x4C]
	test eax,eax
	je Block161

 Block159:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block161

 Block160:
	lea ecx,[ebp-0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block161:
	mov edx,3
	mov word ptr [ebp-0x54],dx
	mov dword ptr [ebp-0x4C],0
	lea eax,[ebp-0x24]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x1A
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x1B
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp-0x44],cx
	mov dword ptr [ebp-0x3C],eax
	test eax,eax
	je Block163

 Block162:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block163:
	mov ecx,dword ptr [edi+0x84]
	mov byte ptr [ebp-4],0x1C
	test ecx,ecx
	jne Block165

 Block164:
	push 0x80004003
	call _com_issue_error

 Block165:
	lea edx,[ebp-0x54]
	push edx
	push 0
	lea eax,[esi+0x400]
	push eax
	push 0
	neg esi
	push esi
	lea edx,[ebp-0x44]
	push edx
	call IWzVector2D::WrapClip
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x44],si
	jne Block168

 Block166:
	xor eax,eax
	mov word ptr [ebp-0x44],ax
	mov eax,dword ptr [ebp-0x3C]
	test eax,eax
	je Block169

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block169

 Block168:
	lea ecx,[ebp-0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block169:
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],0x1A
	test eax,eax
	je Block171

 Block170:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block171:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x54],si
	jne Block174

 Block172:
	mov eax,dword ptr [ebp-0x4C]
	xor ecx,ecx
	mov word ptr [ebp-0x54],cx
	test eax,eax
	je Block175

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block174:
	lea edx,[ebp-0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block175:
	mov eax,dword ptr [ebp-0x58]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block177

 Block176:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block177:
	mov eax,dword ptr [ebp-0x60]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block179

 Block178:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block179:
	mov eax,dword ptr [ebp+8]
	test eax,eax

 Block180:
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block182

 Block181:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block182:
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
	ret 4
}
}
// CUIClaim::~CUIClaim
_SUB_EXCEPTION_HANDLER(395270)
__SUB_CLASS_THIS0(00395270, __thiscall, 53844,  CUIClaim, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_395270
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIClaim::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIClaim::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIClaim::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xCC]
	mov dword ptr [esp+0x1C],8
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0xC4]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],7
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea ecx,[esi+0xC0]
	mov byte ptr [esp+0x1C],6
	call ZArray<ZXString<char>>::RemoveAll
	lea edi,[esi+0xB8]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xB0]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xA8]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
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
// CUISendGifts::AddReciever
_SUB_EXCEPTION_HANDLER(399C40)
__SUB_CLASS_THIS(00399C40, __thiscall, 54060,  CUISendGifts, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_399C40
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0x10C],0
	mov dword ptr [esp+0x1C],0
	je Block11

 Block1:
	push offset _S_
	lea ecx,[esp+0x28]
	call ZXString<char>::Compare
	test eax,eax
	je Block11

 Block2:
	mov ecx,dword ptr [esi+0xD4]
	lea eax,[esp+8]
	push eax
	call CCtrlEdit::GetText
	push offset _S_
	lea ecx,[esp+0xC]
	mov byte ptr [esp+0x20],1
	call ZXString<char>::Compare
	test eax,eax
	jne Block4

 Block3:
	mov ecx,dword ptr [esp+0x24]
	push ecx
	jmp Block9

 Block4:
	push offset _S___37
	lea edx,[esp+0x14]
	push edx
	lea ecx,[esp+0x10]
	call ZXString<char>::op_add_0
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x10]
	push edx
	mov ecx,eax
	mov byte ptr [esp+0x24],2
	call ZXString<char>::op_add_1
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x20],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x1C],2
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x1C],1
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esp+0x24]
	push eax

 Block9:
	mov esi,dword ptr [esi+0xD4]
	mov ecx,esi
	call CCtrlEdit::SetText
	mov eax,dword ptr [esp+8]
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x18
	ret 4
}
}
// CUITransferWorldLicenseNotice::OnCreate
_SUB_EXCEPTION_HANDLER(39CFD0)
__SUB_CLASS_THIS(0039CFD0, __thiscall, 54535,  CUITransferWorldLicenseNotice, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39CFD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x8C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push 0xFDE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov ecx,esi
	call CUITransferWorldLicenseNotice::LoadFont
	mov dword ptr [esp+0x48],ebx
	mov dword ptr [esp+0x3C],1
	mov dword ptr [esp+0x40],ebx
	mov dword ptr [esp+0x44],ebx
	lea ecx,[esp+0x28]
	push 0x512
	push ecx
	mov dword ptr [esp+0x9C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x98],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x94],bl
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
	mov dword ptr [esp+0x2C],eax
	mov byte ptr [esp+0x94],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0x94],bl
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
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x30],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x30]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x98]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x3C]
	push edx
	push ebx
	push 0x18B
	push 0x113
	push 1
	push esi
	call eax
	mov eax,dword ptr [esi+0x98]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	lea ecx,[esp+0x28]
	push 0x513
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x98],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x94],bl
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
	mov dword ptr [esp+0x2C],eax
	mov byte ptr [esp+0x94],4
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
	mov byte ptr [esp+0x94],bl
	cmp eax,ebx
	je Block25

 Block18:
	add eax,8
	cmp eax,ebx
	je Block25

 Block19:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block21

 Block20:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block21:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esp+0x30],eax
	cmp eax,ebx
	je Block23

 Block22:
	push ebx
	lea ecx,[esp+0x30]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [esi+0xA0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x3C]
	push edx
	push ebx
	push 0x18B
	push 0x154
	push 2
	push esi
	call eax
	push 0x14
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebx
	je Block26

 Block24:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CTextAnalyzer::`vftable'
	mov dword ptr [eax+0x10],0x15E
	mov dword ptr [eax+0xC],7
	mov dword ptr [esp+0x14],eax
	jmp Block27

 Block25:
	xor edi,edi
	jmp Block21

 Block26:
	mov dword ptr [esp+0x14],ebx
	mov eax,ebx

 Block27:
	mov dword ptr [esp+0x38],eax
	cmp eax,ebx
	je Block29

 Block28:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block29:
	mov dword ptr [esp+0x1C],ebx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x98],6
	call edi
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block31

 Block30:
	push eax
	call _com_issue_error

 Block31:
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x98],7
	call edi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	push ebx
	push ebx
	lea edx,[esp+0x64]
	push edx
	lea eax,[esp+0x58]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0xFDF
	push ecx
	mov byte ptr [esp+0xB0],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xA8],9
	cmp dword ptr [_D_G_RM],ebx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea edx,[esp+0x80]
	mov byte ptr [esp+0xA8],8
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x9C],0xA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block38

 Block36:
	cmp eax,0x80004002
	je Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	mov edi,8
	mov byte ptr [esp+0x94],0xC
	cmp word ptr [esp+0x6C],di
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	cmp eax,ebx
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov byte ptr [esp+0x94],0xD
	cmp word ptr [esp+0x4C],di
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,ebx
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov byte ptr [esp+0x94],0xE
	cmp word ptr [esp+0x5C],di
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	cmp eax,ebx
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea edx,[esp+0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov ebp,dword ptr [esp+0x20]
	xor edi,edi
	mov dword ptr [esp+0x18],edi
	cmp ebp,ebx
	je Block34

 Block51:
	mov edi,edi

 Block52:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x24]
	push ecx
	push ebp
	mov dword ptr [esp+0x2C],ebx
	call edx
	cmp eax,ebx
	jge Block54

 Block53:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebp
	push eax
	call _com_issue_errorex

 Block54:
	cmp edi,dword ptr [esp+0x24]
	jae Block72

 Block55:
	lea eax,[esp+0x2C]
	push 0x1A64
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x28],ebx
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0xA0],0x10
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,8
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	lea edx,[esp+0x80]
	mov byte ptr [esp+0x98],0x11
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x9C],0x10
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0x94],0x12
	jne Block57

 Block56:
	mov eax,dword ptr [eax+8]
	jmp Block58

 Block57:
	mov eax,offset _S___3

 Block58:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],ebx
	call ZXString<char>::AssignWideStr
	cmp word ptr [esp+0x7C],8
	mov byte ptr [esp+0x94],0x14
	jne Block61

 Block59:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	cmp eax,ebx
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea ecx,[esp+0x7C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x94],0x15
	cmp eax,ebx
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block64:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x94],0x16
	cmp eax,ebx
	je Block66

 Block65:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block66:
	mov edi,dword ptr [esp+0x24]
	cmp edi,ebx
	je Block68

 Block67:
	mov eax,dword ptr [edi-4]
	jmp Block69

 Block68:
	xor eax,eax

 Block69:
	push eax
	push edi
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	mov byte ptr [esp+0x94],0xE
	cmp edi,ebx
	je Block71

 Block70:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block71:
	inc dword ptr [esp+0x18]
	mov edi,dword ptr [esp+0x18]
	jmp Block52

 Block72:
	push ebx
	push ebx
	push ebx
	lea edx,[esi+0xB0]
	push edx
	lea eax,[esi+0xAC]
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x34]
	mov dword ptr [esp+0x3C],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x2C]
	call CTextAnalyzer::AnalyzeText
	lea ecx,[eax-0x13D]
	mov eax,0x92492493
	imul ecx
	add edx,ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	lea ecx,[edx+eax-0xF]
	mov dword ptr [esi+0xB8],ecx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0x94],0x17
	cmp eax,ebx
	je Block74

 Block73:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block75

 Block74:
	xor eax,eax

 Block75:
	mov byte ptr [esp+0x94],0xE
	cmp eax,ebx
	je Block91

 Block76:
	add eax,8
	cmp eax,ebx
	je Block91

 Block77:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block79

 Block78:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block79:
	mov eax,dword ptr [esi+0xA8]
	mov dword ptr [esi+0xA8],edi
	cmp eax,ebx
	je Block83

 Block80:
	lea edi,[eax+8]
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block83

 Block81:
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block83

 Block82:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block83:
	mov ecx,dword ptr [esi+0xA8]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push ebx
	push 0x144
	push 0x2F
	push 0x180
	push 5
	push 1
	push 0x3E8
	push esi
	call eax
	mov eax,dword ptr [esi+0xB8]
	mov ecx,dword ptr [esi+0xA8]
	xor edx,edx
	cmp eax,1
	setl dl
	inc edx
	add edx,eax
	push edx
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [esi+0xA8]
	mov dword ptr [eax+0x34],0x163
	mov eax,dword ptr [esp+0x9C]
	mov dword ptr [esi+0x90],eax
	mov eax,dword ptr [eax+0x4F0]
	mov dword ptr [esi+0xC0],eax
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0x98],6
	call edx
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x94],5
	cmp eax,ebx
	je Block85

 Block84:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block85:
	mov edi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x94],bl
	cmp edi,ebx
	je Block88

 Block86:
	lea esi,[edi+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block88

 Block87:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block88:
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp eax,ebx
	je Block90

 Block89:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block90:
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret 4

 Block91:
	xor edi,edi
	jmp Block79
}
}
// CUIInitialQuiz::SendResult
_SUB_EXCEPTION_HANDLER(3900D0)
__SUB_CLASS_THIS(003900D0, __thiscall, 54357,  CUIInitialQuiz, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3900D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	cmp dword ptr [ecx+0xC8],0
	mov dword ptr [esp+0x20],0
	jne Block2

 Block1:
	mov dword ptr [ecx+0xC8],1
	push 0x41
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 6
	lea ecx,[esp+0xC]
	mov byte ptr [esp+0x24],1
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea eax,[esp+0x2C]
	mov dword ptr [esp+8],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0xC]
	call COutPacket::EncodeStr
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov byte ptr [esp+0x20],0
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x20
	ret 4
}
}
// CUIAvatarMegaphone::Draw
__SUB_CLASS_THIS(0037F4E0, __thiscall, 54625,  CUIAvatarMegaphone, void, const tagRECT*) {
__asm {

 Block0:
	jmp  CWnd::Draw
}
}
// CUIAntiMacro::~CUIAntiMacro
_SUB_EXCEPTION_HANDLER(38B880)
__SUB_CLASS_THIS0(0038B880, __thiscall, 54251,  CUIAntiMacro, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38B880
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIAntiMacro::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIAntiMacro::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIAntiMacro::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB4]
	mov dword ptr [esp+0x18],4
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0xB0]
	mov byte ptr [esp+0x18],3
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	cmp dword ptr [esi+0xA0],0
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x18],2
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	cmp dword ptr [esi+0x98],0
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x18],1
	je Block6

 Block5:
	push 0
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block6:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIAntiMacro>::ms_pInstance],0
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CSpeakerWorldDlgEx::OnButtonClicked
_SUB_EXCEPTION_HANDLER(398960)
__SUB_CLASS_THIS(00398960, __thiscall, 54005,  CSpeakerWorldDlgEx, void, uint32_t) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_398960
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
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
	mov ecx,dword ptr [ebp+0x74]
	xor ebx,ebx
	mov eax,ecx
	xor edi,edi
	sub eax,1
	mov dword ptr [ebp+0x60],ebx
	je Block92

 Block1:
	sub eax,0x3EB
	je Block60

 Block2:
	sub eax,1
	jne Block115

 Block3:
	mov ecx,dword ptr [esi+0x9C]
	lea eax,[ebp+0x10]
	push eax
	call CCtrlEdit::GetText
	push edi
	push edi
	mov ecx,eax
	mov dword ptr [ebp-4],0x14
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push eax
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp+0x5C],edi
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x16
	cmp eax,edi
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov eax,dword ptr [ebp+0x5C]
	cmp eax,edi
	je Block7

 Block6:
	cmp byte ptr [eax],0
	jne Block12

 Block7:
	mov ecx,dword ptr [esi+0xA4]
	lea edx,[ebp+0x24]
	push edx
	call CCtrlEdit::GetText
	push edi
	mov ebx,1
	push edi
	mov ecx,eax
	mov byte ptr [ebp-4],0x17
	mov dword ptr [ebp+0x60],ebx
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [eax]
	cmp eax,edi
	je Block9

 Block8:
	cmp byte ptr [eax],0
	jne Block12

 Block9:
	mov ecx,dword ptr [esi+0xAC]
	lea eax,[ebp+0x14]
	push eax
	call CCtrlEdit::GetText
	push edi
	mov ebx,3
	push edi
	mov ecx,eax
	mov dword ptr [ebp-4],0x18
	mov dword ptr [ebp+0x60],ebx
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [eax]
	cmp eax,edi
	je Block11

 Block10:
	cmp byte ptr [eax],0
	jne Block12

 Block11:
	mov byte ptr [ebp+0x67],0
	jmp Block13

 Block12:
	mov byte ptr [ebp+0x67],1

 Block13:
	mov dword ptr [ebp-4],0x17
	test bl,2
	je Block16

 Block14:
	mov eax,dword ptr [ebp+0x14]
	and ebx,0xFFFFFFFD
	mov dword ptr [ebp+0x60],ebx
	cmp eax,edi
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov dword ptr [ebp-4],0x16
	test bl,1
	je Block19

 Block17:
	mov eax,dword ptr [ebp+0x24]
	and ebx,0xFFFFFFFE
	cmp eax,edi
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	cmp byte ptr [ebp+0x67],0
	je Block30

 Block20:
	lea ecx,[ebp]
	push 0x1182
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp+0x54],edi
	mov eax,dword ptr [eax]
	push 7
	push eax
	lea edx,[ebp+0x54]
	push edx
	mov byte ptr [ebp-4],0x1A
	call ZXString<char>::Format
	add esp,8
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [ebp+0x54]
	add esp,8
	mov byte ptr [ebp-4],0x19
	cmp eax,edi
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov eax,dword ptr [ebp]
	mov byte ptr [ebp-4],0x16
	cmp eax,edi
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	lea eax,[ebp+0x38]
	push 0x72D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [ecx+0x20CC]
	mov byte ptr [ebp-4],0x1B
	cmp ecx,edi
	je Block26

 Block25:
	add ecx,4
	jmp Block27

 Block26:
	xor ecx,ecx

 Block27:
	mov edx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [eax]
	push edx
	push ecx
	push eax
	lea eax,[ebp+0x5C]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x38]
	add esp,0x10
	mov byte ptr [ebp-4],0x16
	cmp eax,edi
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov ecx,dword ptr [ebp+0x5C]
	sub esp,8
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push edi
	push edi
	push 0x18
	mov dword ptr [eax+4],edi
	push ecx
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	call CUIStatusBar::ChatLogAdd

 Block30:
	mov ecx,dword ptr [esi+0xA4]
	lea edx,[ebp+0xC]
	push edx
	call CCtrlEdit::GetText
	push edi
	push edi
	mov ecx,eax
	mov byte ptr [ebp-4],0x1C
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push eax
	lea ecx,[ebp+0x5C]
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0x16
	cmp eax,edi
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	mov edi,dword ptr [ebp+0x5C]
	test edi,edi
	je Block34

 Block33:
	cmp byte ptr [edi],0
	jne Block37

 Block34:
	mov ecx,dword ptr [esi+0xAC]
	lea eax,[ebp+0x30]
	push eax
	call CCtrlEdit::GetText
	push 0
	or ebx,4
	push 0
	mov ecx,eax
	mov byte ptr [ebp-4],0x1D
	mov dword ptr [ebp+0x60],ebx
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [eax]
	test eax,eax
	je Block36

 Block35:
	cmp byte ptr [eax],0
	jne Block37

 Block36:
	mov byte ptr [ebp+0x67],0
	jmp Block38

 Block37:
	mov byte ptr [ebp+0x67],1

 Block38:
	mov dword ptr [ebp-4],0x16
	test bl,4
	je Block41

 Block39:
	mov eax,dword ptr [ebp+0x30]
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	cmp byte ptr [ebp+0x67],0
	je Block48

 Block42:
	lea ecx,[ebp+4]
	push 0x72D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [edx+0x20CC]
	mov byte ptr [ebp-4],0x1E
	test ecx,ecx
	je Block44

 Block43:
	add ecx,4
	jmp Block45

 Block44:
	xor ecx,ecx

 Block45:
	mov eax,dword ptr [eax]
	push edi
	push ecx
	push eax
	lea eax,[ebp+0x5C]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+4]
	add esp,0x10
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	mov ecx,dword ptr [ebp+0x5C]
	sub esp,8
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0
	push 0
	push 0x18
	mov dword ptr [eax+4],0
	push ecx
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	call CUIStatusBar::ChatLogAdd

 Block48:
	mov esi,dword ptr [esi+0xAC]
	lea edx,[ebp+0x28]
	push edx
	mov ecx,esi
	call CCtrlEdit::GetText
	push 0
	push 0
	mov ecx,eax
	mov byte ptr [ebp-4],0x1F
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push eax
	lea ecx,[ebp+0x5C]
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block50:
	mov esi,dword ptr [ebp+0x5C]
	test esi,esi
	je Block58

 Block51:
	cmp byte ptr [esi],0
	je Block58

 Block52:
	lea eax,[ebp+0x44]
	push 0x72D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [ecx+0x20CC]
	mov byte ptr [ebp-4],0x20
	test ecx,ecx
	je Block54

 Block53:
	add ecx,4
	jmp Block55

 Block54:
	xor ecx,ecx

 Block55:
	mov eax,dword ptr [eax]
	push esi
	push ecx
	push eax
	lea edx,[ebp+0x5C]
	push edx
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x44]
	add esp,0x10
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block57:
	mov esi,dword ptr [ebp+0x5C]
	sub esp,8
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0
	push 0
	push 0x18
	mov dword ptr [eax+4],0
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push esi
	call CUIStatusBar::ChatLogAdd

 Block58:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test esi,esi
	je Block122

 Block59:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4
	jmp Block122

 Block60:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 0
	lea eax,[ebp+0x48]
	push eax
	call CWndMan::GetCursorPos
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x2C]
	lea edi,[esi+4]
	mov ecx,edi
	call eax
	mov edx,dword ptr [edi]
	add eax,0x17E
	mov dword ptr [ebp+0x48],eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,edi
	call eax
	add eax,0x19
	push 0xA4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp+0x4C],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x58],eax
	mov dword ptr [ebp-4],0
	test eax,eax
	je Block71

 Block61:
	mov ecx,dword ptr [ebp+0x4C]
	mov edx,dword ptr [ebp+0x48]
	push ecx
	mov ecx,dword ptr [esi+0xD8]
	push edx
	push ecx
	mov ecx,eax
	call CUIArtSpeakerSample::_ctor_0
	test eax,eax
	je Block71

 Block62:
	add eax,8
	je Block71

 Block63:
	lea edi,[eax-8]
	mov dword ptr [ebp+0x1C],edi
	test edi,edi
	je Block65

 Block64:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block65:
	mov ecx,edi
	mov dword ptr [ebp-4],1
	call CDialog::DoModal
	cmp eax,1
	jne Block88

 Block66:
	mov edi,dword ptr [edi+0x94]
	test edi,edi
	jl Block87

 Block67:
	mov dword ptr [ebp+0x5C],0
	lea eax,[ebp+0x20]
	push 0x1181
	push eax
	mov byte ptr [ebp-4],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esi+0xD8]
	mov eax,dword ptr [eax]
	push edi
	push ecx
	push eax
	lea edx,[ebp+0x5C]
	push edx
	mov byte ptr [ebp-4],3
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x20]
	add esp,0x10
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block69

 Block68:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block69:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x2C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1C]
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [ebp+0x5C]
	push 0
	push 0
	lea eax,[ebp-0x2C]
	push eax
	lea ecx,[ebp-0x1C]
	push ecx
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	mov bl,5
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],6
	jne Block72

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	xor edi,edi
	mov dword ptr [ebp+0x1C],edi
	jmp Block65

 Block72:
	lea eax,[ebp-0x5C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+8]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp-0x5C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x2C]
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::~Ztl_variant_t
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push offset _S_0
	call _xbstr_t::_ctor_1
	mov edi,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0xC
	test edi,edi
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	lea ecx,[ebp-0x3C]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0xD
	jne Block76

 Block75:
	mov eax,dword ptr [eax+8]
	jmp Block77

 Block76:
	mov eax,offset _S___3

 Block77:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],0
	call ZXString16::Assign
	mov bl,0xF
	lea ecx,[ebp-0x3C]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	mov edx,dword ptr [ebp+0x60]
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	call WideCharToMultiByte
	call __alloca_probe_16
	mov edx,dword ptr [ebp+0x60]
	mov ecx,dword ptr [esi+0x9C]
	mov eax,esp
	push 0xFFFFFFFF
	push eax
	push edx
	mov dword ptr [ebp+0x58],ecx
	call ZStrUtil::_Conv_1
	mov ecx,dword ptr [ebp+0x58]
	add esp,0xC
	push eax
	call CCtrlEdit::SetText
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push offset _S_1
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x4C]
	mov byte ptr [ebp-4],0x10
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x11
	jne Block79

 Block78:
	mov eax,dword ptr [eax+8]
	jmp Block80

 Block79:
	mov eax,offset _S___3

 Block80:
	push eax
	lea ecx,[ebp+0x60]
	call ZXString16::AssignCStr
	lea ecx,[ebp-0x4C]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [ebp+0x60]
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	call WideCharToMultiByte
	call __alloca_probe_16
	mov edx,dword ptr [esi+0xA4]
	mov eax,esp
	push 0xFFFFFFFF
	push eax
	mov eax,dword ptr [ebp+0x60]
	push eax
	mov dword ptr [ebp+0x58],edx
	call ZStrUtil::_Conv_1
	mov ecx,dword ptr [ebp+0x58]
	add esp,0xC
	push eax
	call CCtrlEdit::SetText
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push offset _S_2
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x6C]
	push ecx
	mov byte ptr [ebp-4],0x12
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x13
	jne Block82

 Block81:
	mov eax,dword ptr [eax+8]
	jmp Block83

 Block82:
	mov eax,offset _S___3

 Block83:
	push eax
	lea ecx,[ebp+0x60]
	call ZXString16::AssignCStr
	lea ecx,[ebp-0x6C]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	mov ebx,dword ptr [ebp+0x60]
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call WideCharToMultiByte
	call __alloca_probe_16
	mov esi,dword ptr [esi+0xAC]
	mov eax,esp
	push 0xFFFFFFFF
	push eax
	push ebx
	call ZStrUtil::_Conv_1
	add esp,0xC
	push eax
	mov ecx,esi
	call CCtrlEdit::SetText
	mov byte ptr [ebp-4],0xB
	test ebx,ebx
	je Block85

 Block84:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString16::_Release
	add esp,4

 Block85:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],2
	call eax
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block87

 Block86:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block87:
	push 0
	lea ecx,[ebp+0x18]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<CUIArtSpeakerSample>::_ReleaseRaw
	jmp Block122

 Block88:
	cmp eax,5
	jne Block90

 Block89:
	mov ecx,dword ptr [esi+0x9C]
	push 0
	call CCtrlEdit::SetText
	mov ecx,dword ptr [esi+0xA4]
	push 0
	call CCtrlEdit::SetText
	mov esi,dword ptr [esi+0xAC]
	push 0
	mov ecx,esi
	call CCtrlEdit::SetText

 Block90:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test edi,edi
	je Block122

 Block91:
	push 0
	lea ecx,[ebp+0x18]
	call ZRef<CUIArtSpeakerSample>::_ReleaseRaw
	jmp Block122

 Block92:
	mov ecx,dword ptr [esi+0x9C]
	lea edx,[ebp+0x34]
	push edx
	call CCtrlEdit::GetText
	push 0
	mov ebx,8
	push 0
	mov ecx,eax
	mov dword ptr [ebp-4],0x21
	mov dword ptr [ebp+0x60],ebx
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [eax]
	lea edi,[ebx+0x1A]
	test eax,eax
	je Block98

 Block93:
	cmp byte ptr [eax],0
	je Block98

 Block94:
	mov ecx,dword ptr [esi+0xA4]
	lea eax,[ebp+0x3C]
	push eax
	call CCtrlEdit::GetText
	push 0
	mov ebx,0x18
	push 0
	mov ecx,eax
	mov dword ptr [ebp-4],edi
	mov dword ptr [ebp+0x60],ebx
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [eax]
	test eax,eax
	je Block98

 Block95:
	cmp byte ptr [eax],0
	je Block98

 Block96:
	mov ecx,dword ptr [esi+0xAC]
	lea edx,[ebp+0x40]
	push edx
	call CCtrlEdit::GetText
	push 0
	mov ebx,0x38
	push 0
	mov ecx,eax
	mov dword ptr [ebp-4],0x23
	mov dword ptr [ebp+0x60],ebx
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [eax]
	test eax,eax
	je Block98

 Block97:
	cmp byte ptr [eax],0
	mov byte ptr [ebp+0x67],0
	jne Block99

 Block98:
	mov byte ptr [ebp+0x67],1

 Block99:
	mov dword ptr [ebp-4],edi
	test bl,0x20
	je Block102

 Block100:
	mov eax,dword ptr [ebp+0x40]
	and ebx,0xFFFFFFDF
	mov dword ptr [ebp+0x60],ebx
	test eax,eax
	je Block102

 Block101:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block102:
	mov dword ptr [ebp-4],0x21
	test bl,0x10
	je Block105

 Block103:
	mov eax,dword ptr [ebp+0x3C]
	and ebx,0xFFFFFFEF
	mov dword ptr [ebp+0x60],ebx
	test eax,eax
	je Block105

 Block104:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block105:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test bl,8
	je Block108

 Block106:
	mov eax,dword ptr [ebp+0x34]
	test eax,eax
	je Block108

 Block107:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block108:
	cmp byte ptr [ebp+0x67],0
	je Block116

 Block109:
	push 0
	push 0
	push 0
	push 0
	lea eax,[ebp+0x2C]
	push 0x1183
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,0x24
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp+0x50],0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[ebp+0x50]
	push ecx
	mov byte ptr [ebp-4],0x25
	call ZXString<char>::Format
	add esp,4
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	mov edi,eax
	mov eax,dword ptr [ebp+0x50]
	add esp,0x14
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block111

 Block110:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block111:
	mov eax,dword ptr [ebp+0x2C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block113

 Block112:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block113:
	cmp edi,7
	je Block122

 Block114:
	push 1
	jmp Block121

 Block115:
	cmp ecx,1
	jne Block117

 Block116:
	push 1
	jmp Block121

 Block117:
	cmp ecx,2
	jne Block119

 Block118:
	push ecx
	jmp Block121

 Block119:
	cmp ecx,8
	jne Block122

 Block120:
	push ecx

 Block121:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	mov ecx,esi
	call eax

 Block122:
	lea esp,[ebp-0x7C]
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
// CUISendMemo::SetReceiver
_SUB_EXCEPTION_HANDLER(380190)
__SUB_CLASS_THIS(00380190, __thiscall, 53889,  CUISendMemo, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_380190
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi+0xAC]
	push eax
	mov dword ptr [esp+0x14],0
	call CCtrlEdit::SetText
	mov eax,dword ptr [esi+0xB4]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov eax,dword ptr [esp+0x18]
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
	pop esi
	add esp,0xC
	ret 4
}
}
// CUIClaimPreNotice::~CUIClaimPreNotice
_SUB_EXCEPTION_HANDLER(381FD0)
__SUB_CLASS_THIS0(00381FD0, __thiscall, 53825,  CUIClaimPreNotice, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_381FD0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIClaimPreNotice::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIClaimPreNotice::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIClaimPreNotice::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0x90]
	mov dword ptr [esp+0x14],0
	call CLayoutMan::~CLayoutMan
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIChangingLicenseNotice::SetRet
__SUB_CLASS_THIS(0037F300, __thiscall, 54517,  CUIChangingLicenseNotice, void, long) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x84],0
	jne Block3

 Block1:
	cmp dword ptr [ecx+0x14],0
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0x80],eax
	mov dword ptr [ecx+0x84],1
	je Block3

 Block2:
	call CWnd::Destroy

 Block3:
	ret 4
}
}
// CUIAdminAntiMacro::SetRet
_SUB_EXCEPTION_HANDLER(38DD80)
__SUB_CLASS_THIS(0038DD80, __thiscall, 54287,  CUIAdminAntiMacro, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38DD80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x38]
	xor ebx,ebx
	mov dword ptr [esp+0x10],ebx
	cmp edi,2
	je Block18

 Block1:
	cmp edi,1
	jne Block5

 Block2:
	mov ecx,dword ptr [esi+0x98]
	lea eax,[esp+0x14]
	push eax
	call CCtrlEdit::GetText
	mov dword ptr [esp+0x30],ebx
	push 0
	mov ebx,edi
	push 0
	mov ecx,eax
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [eax]
	test eax,eax
	je Block4

 Block3:
	cmp byte ptr [eax],0
	jne Block5

 Block4:
	mov byte ptr [esp+0x38],bl
	jmp Block6

 Block5:
	mov byte ptr [esp+0x38],0

 Block6:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test bl,1
	je Block9

 Block7:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	cmp byte ptr [esp+0x38],0
	jne Block18

 Block10:
	cmp dword ptr [esi+0x84],0
	jne Block13

 Block11:
	cmp dword ptr [esi+0x14],0
	mov dword ptr [esi+0x80],edi
	mov dword ptr [esi+0x84],1
	je Block13

 Block12:
	mov ecx,esi
	call CWnd::Destroy

 Block13:
	cmp edi,1
	jne Block18

 Block14:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call dword ptr [ZImports::_timeGetTime]
	mov ecx,dword ptr [esi+0xA4]
	sub ecx,eax
	mov dword ptr [edi+0x3F9C],ecx
	push 0x75
	lea ecx,[esp+0x1C]
	call COutPacket::_ctor_1
	mov ecx,dword ptr [esi+0x98]
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push edx
	mov dword ptr [esp+0x38],1
	call CCtrlEdit::GetText
	lea ecx,[esp+0x1C]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CClientSocket::SendPacket
	mov ecx,dword ptr [TSingleton<CUIAdminAntiMacro>::ms_pInstance]
	test ecx,ecx
	je Block17

 Block15:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIAdminAntiMacro>::ms_pInstance]
	test eax,eax
	je Block17

 Block16:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block17:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block18:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret 4
}
}
// CUISpeedQuiz::CUISpeedQuiz
_SUB_EXCEPTION_HANDLER(3901A0)
__SUB_CLASS_THIS0(003901A0, __thiscall, 54382,  CUISpeedQuiz, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3901A0
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
	mov esi,ecx
	mov dword ptr [esp+0x2C],esi
	call CDialog::_ctor_default
	xor ebx,ebx
	lea eax,[esi+0x91]
	mov dword ptr [esp+0x38],ebx
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFF6F
	mov dword ptr [TSingleton<CUISpeedQuiz>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUISpeedQuiz>::ms_pInstance],ebx

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUISpeedQuiz::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUISpeedQuiz::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUISpeedQuiz::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x98],ebx
	mov dword ptr [esi+0xA0],ebx
	mov dword ptr [esi+0xA8],ebx
	mov dword ptr [esi+0xB0],ebx
	mov dword ptr [esi+0xB8],ebx
	mov dword ptr [esi+0xBC],ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0xF7D
	push eax
	mov byte ptr [esp+0x58],7
	mov dword ptr [esi+0xCC],ebx
	mov dword ptr [esi+0xD4],ebx
	mov dword ptr [esi+0xD8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov edi,dword ptr [esi+0x78]
	cmp edi,ebx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],ebx
	call eax
	cmp eax,ebx
	jge Block7

 Block6:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block7:
	mov edi,dword ptr [esi+0x78]
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ecx
	cmp edi,ebx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x20],ebx
	call ecx
	cmp eax,ebx
	jge Block11

 Block10:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block11:
	mov edi,dword ptr [esi+0x78]
	mov edx,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],edx
	cmp edi,ebx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
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
	mov edi,dword ptr [esi+0x78]
	mov ebp,dword ptr [esp+0x1C]
	cmp edi,ebx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x20]
	push ecx
	push edi
	mov dword ptr [esp+0x28],ebx
	call edx
	cmp eax,ebx
	jge Block19

 Block18:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block19:
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x28]
	push ebx
	push 1
	push ebx
	push 1
	push 0xA
	push eax
	mov edx,0x258
	push ecx
	sub edx,ebp
	mov eax,0x320
	sub eax,dword ptr [esp+0x3C]
	shr edx,1
	push edx
	shr eax,1
	push eax
	mov ecx,esi
	call CWnd::CreateWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret
}
}
// CUIReceiveGift::OnCreate
_SUB_EXCEPTION_HANDLER(38B2F0)
__SUB_CLASS_THIS(0038B2F0, __thiscall, 54229,  CUIReceiveGift, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38B2F0
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
	lea eax,[esp+0x14]
	push 0x512
	push eax
	mov dword ptr [esp+0x78],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],bl
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],2
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
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
	je Block13

 Block6:
	add eax,8
	cmp eax,ebx
	je Block13

 Block7:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block9

 Block8:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block9:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push ebx
	push 0xDC
	push 0xCB
	push 1
	push esi
	call edx
	lea ecx,[esp+0x2C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x74],3
	mov dword ptr [esp+0x60],0xC8
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],4
	cmp eax,ebx
	je Block14

 Block12:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block15

 Block13:
	xor edi,edi
	jmp Block9

 Block14:
	xor eax,eax

 Block15:
	mov byte ptr [esp+0x70],3
	cmp eax,ebx
	je Block24

 Block16:
	add eax,8
	cmp eax,ebx
	je Block24

 Block17:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block19

 Block18:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block19:
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block21

 Block20:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block21:
	mov ecx,dword ptr [esi+0x9C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x2C]
	push eax
	push 0xD
	push 0xD2
	push 0xAE
	push 0x19
	push 0x3E8
	push esi
	call edx
	mov eax,dword ptr [esi+0x9C]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x70],bl
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret 4

 Block24:
	xor edi,edi
	jmp Block19
}
}
// CUIChangingLicenseNotice::LoadFont
_SUB_EXCEPTION_HANDLER(393520)
__SUB_CLASS_THIS0(00393520, __thiscall, 54510,  CUIChangingLicenseNotice, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_393520
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
	lea eax,[esp+0x17]
	lea edi,[ecx+0xB0]
	push eax
	push 0xA
	mov ecx,edi
	mov dword ptr [esp+0x20],edi
	call ZArray<_x_com_ptr<IWzFont>>::_Alloc
	xor ebx,ebx
	xor esi,esi

 Block1:
	lea ecx,[esp+0x20]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [edi]
	mov eax,dword ptr [eax]
	push ebx
	add edx,esi
	push edx
	push eax
	mov dword ptr [esp+0x58],ebx
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x2C]
	or ebp,0xFFFFFFFF
	add esp,0xC
	mov dword ptr [esp+0x4C],ebp
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	add esi,4
	cmp esi,0x28
	jl Block1

 Block4:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea edx,[esp+0x24]
	push edx
	push 0xFF000000
	push 0xA
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x1A25
	mov ebx,1
	push eax
	mov dword ptr [esp+0x64],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x5C],2
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov byte ptr [esp+0x5C],bl
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0x4C],ebp
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	lea eax,[esp+0x1C]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov ebx,3
	mov dword ptr [esp+0x4C],ebx
	test eax,eax
	je Block14

 Block13:
	mov ebp,dword ptr [eax]
	jmp Block15

 Block14:
	xor ebp,ebp

 Block15:
	mov ecx,8
	mov word ptr [esp+0x34],cx
	test ebp,ebp
	jne Block17

 Block16:
	xor esi,esi
	jmp Block22

 Block17:
	mov eax,ebp
	lea edx,[eax+2]
	lea ebx,[ebx]

 Block18:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block18

 Block19:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea edx,[edi+edi+6]
	push edx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block21

 Block20:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block21:
	mov edi,dword ptr [esp+0x18]

 Block22:
	mov dword ptr [esp+0x3C],esi
	test esi,esi
	jne Block25

 Block23:
	test ebp,ebp
	je Block25

 Block24:
	push 0x8007000E
	call _com_issue_error

 Block25:
	lea eax,[esp+0x34]
	push eax
	push 0xFF000000
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0x1A25
	push ecx
	mov byte ptr [esp+0x64],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,4
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x5C],5
	test eax,eax
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov ecx,eax
	mov byte ptr [esp+0x5C],4
	call IWzFont::Create
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x4C],bl
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov esi,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test esi,esi
	je Block40

 Block32:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block39

 Block33:
	test esi,esi
	je Block39

 Block34:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block36:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block38

 Block37:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block38:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block39:
	mov dword ptr [esp+0x1C],0

 Block40:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx]
	mov esi,dword ptr [ecx+8]
	cmp esi,eax
	je Block45

 Block41:
	mov dword ptr [ecx+8],eax
	test eax,eax
	je Block43

 Block42:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block43:
	test esi,esi
	je Block45

 Block44:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block45:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+4]
	mov esi,dword ptr [ecx+0xC]
	cmp esi,eax
	je Block50

 Block46:
	mov dword ptr [ecx+0xC],eax
	test eax,eax
	je Block48

 Block47:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block48:
	test esi,esi
	je Block50

 Block49:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block50:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx]
	mov esi,dword ptr [ecx+0x10]
	cmp esi,eax
	je Block55

 Block51:
	mov dword ptr [ecx+0x10],eax
	test eax,eax
	je Block53

 Block52:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block53:
	test esi,esi
	je Block55

 Block54:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block55:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+4]
	mov esi,dword ptr [ecx+0x14]
	cmp esi,eax
	je Block60

 Block56:
	mov dword ptr [ecx+0x14],eax
	test eax,eax
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block58:
	test esi,esi
	je Block60

 Block59:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block60:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx]
	mov esi,dword ptr [ecx+0x18]
	cmp esi,eax
	je Block65

 Block61:
	mov dword ptr [ecx+0x18],eax
	test eax,eax
	je Block63

 Block62:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block63:
	test esi,esi
	je Block65

 Block64:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block65:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+4]
	mov esi,dword ptr [ecx+0x1C]
	cmp esi,eax
	je Block70

 Block66:
	mov dword ptr [ecx+0x1C],eax
	test eax,eax
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block68:
	test esi,esi
	je Block70

 Block69:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block70:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx]
	mov esi,dword ptr [ecx+0x20]
	cmp esi,eax
	je Block75

 Block71:
	mov dword ptr [ecx+0x20],eax
	test eax,eax
	je Block73

 Block72:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block73:
	test esi,esi
	je Block75

 Block74:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block75:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+4]
	mov esi,dword ptr [ecx+0x24]
	cmp esi,eax
	je Block80

 Block76:
	mov dword ptr [ecx+0x24],eax
	test eax,eax
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block78:
	test esi,esi
	je Block80

 Block79:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block80:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret
}
}
// CUIAntiMacroNotice::OnCreate
// CUISkillEffectChange::SetValues
_SUB_EXCEPTION_HANDLER(381A40)
__SUB_CLASS_THIS(00381A40, __thiscall, 54670,  CUISkillEffectChange, void, long, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_381A40
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0x1C]
	push ecx
	lea ecx,[esi+0xA0]
	mov dword ptr [esp+0x14],0
	mov dword ptr [esi+0x9C],eax
	call ZXString<char>::op_assign
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov eax,dword ptr [esp+0x1C]
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
	pop esi
	add esp,0xC
	ret 8
}
}
// CUIAntiMacroNotice::Draw
_SUB_EXCEPTION_HANDLER(38E150)
__SUB_CLASS_THIS(0038E150, __thiscall, 54334,  CUIAntiMacroNotice, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38E150
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x50]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov edx,3
	mov ecx,0xFF
	mov dword ptr [esp+0x48],0
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],ecx
	mov ebp,dword ptr [esp+0x14]
	mov edx,dword ptr [esi+0xA0]
	mov byte ptr [esp+0x48],1
	test ebp,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ebx,dword ptr [esp+0x20]
	mov edi,dword ptr [ebp]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x34]
	push edx
	mov edx,dword ptr [edi+0x80]
	push 0x14
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x44]
	push 0x14
	push ebp
	mov dword ptr [eax+0xC],ecx
	call edx
	xor edi,edi
	cmp eax,edi
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block4:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],0
	jne Block7

 Block5:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov dword ptr [esp+0x50],edi
	mov bl,4
	nop

 Block9:
	mov eax,dword ptr [esi+0xA4]
	test eax,eax
	je Block27

 Block10:
	cmp edi,dword ptr [eax-4]
	jae Block27

 Block11:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block26

 Block12:
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0x4C],2
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block26

 Block13:
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x20]
	push 0x16
	push edx
	mov byte ptr [esp+0x58],3
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esi+0xA4]
	push ecx
	lea eax,[eax+edi*4]
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x5C],bl
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esi+0xA4]
	mov byte ptr [esp+0x58],5
	test eax,eax
	je Block15

 Block14:
	mov eax,dword ptr [eax-4]

 Block15:
	mov edx,dword ptr [esp+0x60]
	lea ecx,[eax*8]
	sub edx,ecx
	add edx,0x3B
	push edx
	push 0x57
	mov ecx,ebp
	mov byte ptr [esp+0x60],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x48],3
	test eax,eax
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],2
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x48],0
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc edi
	add dword ptr [esp+0x50],0x11
	jmp Block9

 Block24:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block25:
	inc edi
	add dword ptr [esp+0x50],0x11
	jmp Block9

 Block26:
	push eax
	call _com_issue_error

 Block27:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 4
}
}
// CUITransferWorldSelectDlg::SetResult
__SUB_CLASS_THIS0(0037F7B0, __thiscall, 54559,  CUITransferWorldSelectDlg, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xC0]
	mov edx,dword ptr [eax+0x68]
	mov dword ptr [ecx+0xA0],edx
	ret
}
}
// CUISendGifts::OnChildNotify
__SUB_CLASS_THIS(0037F1A0, __thiscall, 54054,  CUISendGifts, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	cmp ebx,0x3F0
	jne Block4

 Block1:
	cmp edi,0x12C
	jb Block4

 Block2:
	cmp edi,0x130
	ja Block4

 Block3:
	push 0
	call CWnd::InvalidateRect

 Block4:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	cmp edi,0x64
	jne Block6

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push ebx
	mov ecx,esi
	call edx

 Block6:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CUIChangingLicenseNotice::OnKey
__SUB_CLASS_THIS(0037F380, __thiscall, 54513,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x1B
	je Block3

 Block1:
	cmp eax,0xD
	je Block3

 Block2:
	mov dword ptr [esp+4],eax
	jmp  CDialog::OnKey

 Block3:
	ret 8
}
}
// CUIAntiMacro::SetRet
_SUB_EXCEPTION_HANDLER(38C940)
__SUB_CLASS_THIS(0038C940, __thiscall, 54254,  CUIAntiMacro, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38C940
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x38]
	xor ebx,ebx
	mov dword ptr [esp+0x10],ebx
	cmp edi,2
	je Block18

 Block1:
	cmp edi,1
	jne Block5

 Block2:
	mov ecx,dword ptr [esi+0x98]
	lea eax,[esp+0x14]
	push eax
	call CCtrlEdit::GetText
	mov dword ptr [esp+0x30],ebx
	push 0
	mov ebx,edi
	push 0
	mov ecx,eax
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [eax]
	test eax,eax
	je Block4

 Block3:
	cmp byte ptr [eax],0
	jne Block5

 Block4:
	mov byte ptr [esp+0x38],bl
	jmp Block6

 Block5:
	mov byte ptr [esp+0x38],0

 Block6:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test bl,1
	je Block9

 Block7:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	cmp byte ptr [esp+0x38],0
	jne Block18

 Block10:
	cmp dword ptr [esi+0x84],0
	jne Block13

 Block11:
	cmp dword ptr [esi+0x14],0
	mov dword ptr [esi+0x80],edi
	mov dword ptr [esi+0x84],1
	je Block13

 Block12:
	mov ecx,esi
	call CWnd::Destroy

 Block13:
	cmp edi,1
	jne Block18

 Block14:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call dword ptr [ZImports::_timeGetTime]
	mov ecx,dword ptr [esi+0xA4]
	sub ecx,eax
	mov dword ptr [edi+0x3F9C],ecx
	push 0x75
	lea ecx,[esp+0x1C]
	call COutPacket::_ctor_1
	mov ecx,dword ptr [esi+0x98]
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push edx
	mov dword ptr [esp+0x38],1
	call CCtrlEdit::GetText
	lea ecx,[esp+0x1C]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CClientSocket::SendPacket
	mov ecx,dword ptr [TSingleton<CUIAntiMacro>::ms_pInstance]
	test ecx,ecx
	je Block17

 Block15:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIAntiMacro>::ms_pInstance]
	test eax,eax
	je Block17

 Block16:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block17:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block18:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret 4
}
}
// CSpeakerWorldDlg::~CSpeakerWorldDlg
_SUB_EXCEPTION_HANDLER(386B10)
__SUB_CLASS_THIS0(00386B10, __thiscall, 53981,  CSpeakerWorldDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_386B10
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
	int 3// TODO: 	mov dword ptr [esi],offset CSpeakerWorldDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CSpeakerWorldDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CSpeakerWorldDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xBC]
	mov dword ptr [esp+0x1C],5
	call CLayoutMan::~CLayoutMan
	lea edi,[esi+0xB4]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xAC]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xA4]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
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
// CUISpeedQuiz::Draw
_SUB_EXCEPTION_HANDLER(390910)
__SUB_CLASS_THIS(00390910, __thiscall, 54387,  CUISpeedQuiz, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_390910
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x64
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
	mov dword ptr [ebp-0x58],edi
	mov eax,dword ptr [ebp+8]
	push eax
	call CWnd::Draw
	lea ecx,[ebp-0x54]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	xor ebx,ebx
	mov dword ptr [ebp-4],ebx
	call dword ptr [ZImports::_timeGetTime]
	sub eax,dword ptr [edi+0xC8]
	js Block2

 Block1:
	mov dword ptr [edi+0xCC],ebx

 Block2:
	mov dword ptr [ebp-0x4C],ebx
	lea edx,[ebp-0x14]
	push 0xF7E
	push edx
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],2
	cmp esi,ebx
	je Block6

 Block3:
	cmp dword ptr [esi+4],ebx
	jne Block5

 Block4:
	mov eax,dword ptr [esi]
	push eax
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block5:
	mov esi,dword ptr [esi+4]
	jmp Block7

 Block6:
	xor esi,esi

 Block7:
	mov ecx,dword ptr [edi+0xCC]
	mov eax,0x88888889
	imul ecx
	add edx,ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	push ecx
	lea edx,[ebp-0x4C]
	push esi
	push edx
	call ZXString<char>::Format
	mov ecx,dword ptr [ebp-0x14]
	add esp,0xC
	cmp ecx,ebx
	je Block9

 Block8:
	call _xbstr_t::Data_t::Release

 Block9:
	mov eax,3
	mov word ptr [ebp-0x38],ax
	mov dword ptr [ebp-0x30],0xFF
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x28]
	push ecx
	mov byte ptr [ebp-4],al
	call esi
	lea edx,[ebp-0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	lea eax,[ebp-0x48]
	push eax
	mov byte ptr [ebp-4],4
	call esi
	lea ecx,[ebp-0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	mov edi,dword ptr [ebp-0x4C]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	mov bl,5
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea edx,[ebp-0x28]
	push edx
	lea eax,[ebp-0x48]
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x50],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],6
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea ecx,[ebp-0x68]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block18

 Block16:
	cmp eax,0x80004002
	je Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	mov edi,dword ptr [ebp-0x54]
	mov byte ptr [ebp-4],8
	test edi,edi
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov ecx,dword ptr [ebp-0x38]
	mov esi,dword ptr [ebp-0x18]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x34]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0x30]
	push esi
	push 0x21
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x2C]
	push 0x6F
	push edi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block22

 Block21:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block22:
	mov byte ptr [ebp-4],7
	test esi,esi
	je Block24

 Block23:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block24:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x68],di
	jne Block27

 Block25:
	mov eax,dword ptr [ebp-0x60]
	xor edx,edx
	mov word ptr [ebp-0x68],dx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea eax,[ebp-0x68]
	push eax
	call esi

 Block28:
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x48],di
	jne Block31

 Block29:
	mov eax,dword ptr [ebp-0x40]
	xor ecx,ecx
	mov word ptr [ebp-0x48],cx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea edx,[ebp-0x48]
	push edx
	call esi

 Block32:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x28],di
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[ebp-0x28]
	push ecx
	call esi

 Block36:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x38],di
	jne Block39

 Block37:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[ebp-0x38]
	push eax
	call esi

 Block40:
	lea ecx,[ebp-0x14]
	push 0xF7E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],9
	test esi,esi
	je Block44

 Block41:
	cmp dword ptr [esi+4],0
	jne Block43

 Block42:
	mov edx,dword ptr [esi]
	push edx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block43:
	mov esi,dword ptr [esi+4]
	jmp Block45

 Block44:
	xor esi,esi

 Block45:
	mov eax,dword ptr [ebp-0x58]
	mov ecx,dword ptr [eax+0xCC]
	mov eax,0x88888889
	imul ecx
	add edx,ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cdq
	mov ecx,0xA
	idiv ecx
	push edx
	lea edx,[ebp-0x4C]
	push esi
	push edx
	call ZXString<char>::Format
	mov ecx,dword ptr [ebp-0x14]
	add esp,0xC
	test ecx,ecx
	je Block47

 Block46:
	call _xbstr_t::Data_t::Release

 Block47:
	mov eax,3
	mov word ptr [ebp-0x38],ax
	mov dword ptr [ebp-0x30],0xFF
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x48]
	push ecx
	mov byte ptr [ebp-4],0xA
	call esi
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
	lea eax,[ebp-0x28]
	push eax
	mov byte ptr [ebp-4],0xB
	call esi
	lea ecx,[ebp-0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	mov edi,dword ptr [ebp-0x4C]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	mov bl,0xC
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea edx,[ebp-0x48]
	push edx
	lea eax,[ebp-0x28]
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x50],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xD
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	lea ecx,[ebp-0x68]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xE
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block56

 Block54:
	cmp eax,0x80004002
	je Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	mov ecx,dword ptr [ebp-0x38]
	mov esi,dword ptr [ebp-0x18]
	mov edi,dword ptr [ebp-0x54]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x34]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0x30]
	push esi
	push 0x21
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x2C]
	push 0x84
	push edi
	mov byte ptr [ebp-4],0xF
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block58

 Block57:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block58:
	mov byte ptr [ebp-4],0xE
	test esi,esi
	je Block60

 Block59:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block60:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x68],di
	jne Block67

 Block61:
	mov eax,dword ptr [ebp-0x60]
	xor edx,edx
	mov word ptr [ebp-0x68],dx
	test eax,eax
	je Block63

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block63:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block64:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x28],di
	jne Block68

 Block65:
	mov eax,dword ptr [ebp-0x20]
	xor ecx,ecx
	mov word ptr [ebp-0x28],cx
	test eax,eax
	je Block69

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block67:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x68]
	push eax
	call esi
	jmp Block64

 Block68:
	lea edx,[ebp-0x28]
	push edx
	call esi

 Block69:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x48],di
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [ebp-0x48],ax
	mov eax,dword ptr [ebp-0x40]
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[ebp-0x48]
	push ecx
	call esi

 Block73:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x38],di
	jne Block76

 Block74:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea eax,[ebp-0x38]
	push eax
	call esi

 Block77:
	lea ecx,[ebp-0x14]
	push 0xF7F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x10
	test esi,esi
	je Block81

 Block78:
	cmp dword ptr [esi+4],0
	jne Block80

 Block79:
	mov edx,dword ptr [esi]
	push edx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block80:
	mov esi,dword ptr [esi+4]
	jmp Block82

 Block81:
	xor esi,esi

 Block82:
	lea eax,[ebp-0x4C]
	push esi
	push eax
	call ZXString<char>::Format
	mov ecx,dword ptr [ebp-0x14]
	add esp,8
	test ecx,ecx
	je Block84

 Block83:
	call _xbstr_t::Data_t::Release

 Block84:
	mov ecx,3
	mov word ptr [ebp-0x38],cx
	mov dword ptr [ebp-0x30],0xFF
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x48]
	push edx
	mov byte ptr [ebp-4],0x11
	call esi
	lea eax,[ebp-0x48]
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
	lea ecx,[ebp-0x28]
	push ecx
	mov byte ptr [ebp-4],0x12
	call esi
	lea edx,[ebp-0x28]
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
	mov edi,dword ptr [ebp-0x4C]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	mov bl,0x13
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea eax,[ebp-0x48]
	push eax
	lea ecx,[ebp-0x28]
	push ecx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x50],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x14
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	lea edx,[ebp-0x68]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block93

 Block91:
	cmp eax,0x80004002
	je Block93

 Block92:
	push eax
	call _com_issue_error

 Block93:
	mov edx,dword ptr [ebp-0x38]
	mov esi,dword ptr [ebp-0x18]
	mov edi,dword ptr [ebp-0x54]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x34]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x30]
	push esi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x2C]
	push 0x21
	push 0x9B
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push edi
	mov byte ptr [ebp-4],0x16
	call eax
	test eax,eax
	jge Block95

 Block94:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block95:
	mov byte ptr [ebp-4],0x15
	test esi,esi
	je Block97

 Block96:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block97:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x68],di
	jne Block104

 Block98:
	xor eax,eax
	mov word ptr [ebp-0x68],ax
	mov eax,dword ptr [ebp-0x60]
	test eax,eax
	je Block100

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block100:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block101:
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp-0x28],di
	jne Block105

 Block102:
	mov eax,dword ptr [ebp-0x20]
	xor edx,edx
	mov word ptr [ebp-0x28],dx
	test eax,eax
	je Block106

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block104:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x68]
	push ecx
	call esi
	jmp Block101

 Block105:
	lea eax,[ebp-0x28]
	push eax
	call esi

 Block106:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x48],di
	jne Block109

 Block107:
	mov eax,dword ptr [ebp-0x40]
	xor ecx,ecx
	mov word ptr [ebp-0x48],cx
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea edx,[ebp-0x48]
	push edx
	call esi

 Block110:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x38],di
	jne Block113

 Block111:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea ecx,[ebp-0x38]
	push ecx
	call esi

 Block114:
	lea edx,[ebp-0x14]
	push 0xF7E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x17
	test esi,esi
	je Block118

 Block115:
	cmp dword ptr [esi+4],0
	jne Block117

 Block116:
	mov eax,dword ptr [esi]
	push eax
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block117:
	mov esi,dword ptr [esi+4]
	jmp Block119

 Block118:
	xor esi,esi

 Block119:
	mov ecx,dword ptr [ebp-0x58]
	mov eax,dword ptr [ecx+0xCC]
	cdq
	mov ecx,0x3C
	idiv ecx
	mov eax,0x66666667
	lea ecx,[ebp-0x4C]
	imul edx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	push eax
	push esi
	push ecx
	call ZXString<char>::Format
	mov ecx,dword ptr [ebp-0x14]
	add esp,0xC
	test ecx,ecx
	je Block121

 Block120:
	call _xbstr_t::Data_t::Release

 Block121:
	mov edx,3
	mov word ptr [ebp-0x38],dx
	mov dword ptr [ebp-0x30],0xFF
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x48]
	push eax
	mov byte ptr [ebp-4],0x18
	call esi
	lea ecx,[ebp-0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block123

 Block122:
	push eax
	call _com_issue_error

 Block123:
	lea edx,[ebp-0x28]
	push edx
	mov byte ptr [ebp-4],0x19
	call esi
	lea eax,[ebp-0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block125

 Block124:
	push eax
	call _com_issue_error

 Block125:
	mov edi,dword ptr [ebp-0x4C]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	mov bl,0x1A
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea ecx,[ebp-0x48]
	push ecx
	lea edx,[ebp-0x28]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x50],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x1B
	jne Block127

 Block126:
	push 0x80004003
	call _com_issue_error

 Block127:
	lea eax,[ebp-0x68]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block130

 Block128:
	cmp eax,0x80004002
	je Block130

 Block129:
	push eax
	call _com_issue_error

 Block130:
	mov edx,dword ptr [ebp-0x38]
	mov esi,dword ptr [ebp-0x18]
	mov edi,dword ptr [ebp-0x54]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x34]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x30]
	push esi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x2C]
	push 0x21
	push 0xA8
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push edi
	mov byte ptr [ebp-4],0x1D
	call eax
	test eax,eax
	jge Block132

 Block131:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block132:
	mov byte ptr [ebp-4],0x1C
	test esi,esi
	je Block134

 Block133:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block134:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x68],di
	jne Block141

 Block135:
	xor eax,eax
	mov word ptr [ebp-0x68],ax
	mov eax,dword ptr [ebp-0x60]
	test eax,eax
	je Block137

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block137:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block138:
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp-0x28],di
	jne Block142

 Block139:
	mov eax,dword ptr [ebp-0x20]
	xor edx,edx
	mov word ptr [ebp-0x28],dx
	test eax,eax
	je Block143

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block141:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x68]
	push ecx
	call esi
	jmp Block138

 Block142:
	lea eax,[ebp-0x28]
	push eax
	call esi

 Block143:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp-0x48],di
	jne Block146

 Block144:
	mov eax,dword ptr [ebp-0x40]
	xor ecx,ecx
	mov word ptr [ebp-0x48],cx
	test eax,eax
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea edx,[ebp-0x48]
	push edx
	call esi

 Block147:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x38],di
	jne Block150

 Block148:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea ecx,[ebp-0x38]
	push ecx
	call esi

 Block151:
	lea edx,[ebp-0x14]
	push 0xF7E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x1E
	test esi,esi
	je Block155

 Block152:
	cmp dword ptr [esi+4],0
	jne Block154

 Block153:
	mov eax,dword ptr [esi]
	push eax
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block154:
	mov esi,dword ptr [esi+4]
	jmp Block156

 Block155:
	xor esi,esi

 Block156:
	mov ecx,dword ptr [ebp-0x58]
	mov eax,dword ptr [ecx+0xCC]
	cdq
	mov ecx,0x3C
	idiv ecx
	mov ecx,0xA
	mov eax,edx
	cdq
	idiv ecx
	push edx
	lea edx,[ebp-0x4C]
	push esi
	push edx
	call ZXString<char>::Format
	mov ecx,dword ptr [ebp-0x14]
	add esp,0xC
	test ecx,ecx
	je Block158

 Block157:
	call _xbstr_t::Data_t::Release

 Block158:
	mov eax,3
	mov word ptr [ebp-0x38],ax
	mov dword ptr [ebp-0x30],0xFF
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x48]
	push ecx
	mov byte ptr [ebp-4],0x1F
	call esi
	lea edx,[ebp-0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block160

 Block159:
	push eax
	call _com_issue_error

 Block160:
	lea eax,[ebp-0x28]
	push eax
	mov byte ptr [ebp-4],0x20
	call esi
	lea ecx,[ebp-0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block162

 Block161:
	push eax
	call _com_issue_error

 Block162:
	mov edi,dword ptr [ebp-0x4C]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],0x21
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea edx,[ebp-0x48]
	push edx
	lea eax,[ebp-0x28]
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x50],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x22
	jne Block164

 Block163:
	push 0x80004003
	call _com_issue_error

 Block164:
	lea ecx,[ebp-0x68]
	push ecx
	mov byte ptr [ebp-4],0x21
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov bl,0x23
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block167

 Block165:
	cmp eax,0x80004002
	je Block167

 Block166:
	push eax
	call _com_issue_error

 Block167:
	mov ecx,dword ptr [ebp-0x38]
	mov esi,dword ptr [ebp-0x18]
	mov edi,dword ptr [ebp-0x54]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x34]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0x30]
	push esi
	push 0x21
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x2C]
	push 0xBD
	push edi
	mov byte ptr [ebp-4],0x24
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block169

 Block168:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block169:
	xor edi,edi
	mov byte ptr [ebp-4],bl
	cmp esi,edi
	je Block171

 Block170:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block171:
	mov ebx,8
	mov byte ptr [ebp-4],0x21
	cmp word ptr [ebp-0x68],bx
	jne Block178

 Block172:
	mov eax,dword ptr [ebp-0x60]
	xor edx,edx
	mov word ptr [ebp-0x68],dx
	cmp eax,edi
	je Block174

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block174:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block175:
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp-0x28],bx
	jne Block179

 Block176:
	mov eax,dword ptr [ebp-0x20]
	xor ecx,ecx
	mov word ptr [ebp-0x28],cx
	cmp eax,edi
	je Block180

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block180

 Block178:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x68]
	push eax
	call esi
	jmp Block175

 Block179:
	lea edx,[ebp-0x28]
	push edx
	call esi

 Block180:
	mov byte ptr [ebp-4],0x1F
	cmp word ptr [ebp-0x48],bx
	jne Block183

 Block181:
	xor eax,eax
	mov word ptr [ebp-0x48],ax
	mov eax,dword ptr [ebp-0x40]
	cmp eax,edi
	je Block184

 Block182:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block184

 Block183:
	lea ecx,[ebp-0x48]
	push ecx
	call esi

 Block184:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x38],bx
	jne Block187

 Block185:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	cmp eax,edi
	je Block188

 Block186:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block188

 Block187:
	lea eax,[ebp-0x38]
	push eax
	call esi

 Block188:
	mov dword ptr [ebp-0x18],edi
	mov dword ptr [ebp-0x6C],edi
	lea ecx,[ebp-0x14]
	push 0xF82
	push ecx
	mov byte ptr [ebp-4],0x26
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,dword ptr [ebp-0x58]
	mov edx,dword ptr [esi+0xC0]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp-0x18]
	push eax
	mov byte ptr [ebp-4],0x27
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x14]
	add esp,0xC
	mov byte ptr [ebp-4],0x26
	cmp eax,edi
	je Block190

 Block189:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block190:
	mov ecx,dword ptr [esi+0xC4]
	push ecx
	lea edx,[ebp-0x6C]
	push offset _S_2D
	push edx
	call ZXString<char>::Format
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea eax,[ebp-0x48]
	push eax
	call esi
	lea ecx,[ebp-0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block192

 Block191:
	push eax
	call _com_issue_error

 Block192:
	lea edx,[ebp-0x28]
	push edx
	mov byte ptr [ebp-4],0x28
	call esi
	lea eax,[ebp-0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block194

 Block193:
	push eax
	call _com_issue_error

 Block194:
	lea ecx,[ebp-0x48]
	push ecx
	lea edx,[ebp-0x28]
	push edx
	lea eax,[ebp-0x14]
	push 0
	push eax
	mov byte ptr [ebp-4],0x29
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [ebp-0x18]
	push eax
	push ecx
	mov dword ptr [ebp-0x50],esp
	mov ecx,esp
	mov bl,0x2A
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [ebp-0x54]
	push 0x2D
	mov byte ptr [ebp-4],0x2B
	push 0xED
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0x29
	test eax,eax
	je Block196

 Block195:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block196:
	mov esi,8
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp-0x28],si
	jne Block199

 Block197:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	je Block200

 Block198:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block200

 Block199:
	lea ecx,[ebp-0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block200:
	mov byte ptr [ebp-4],0x26
	cmp word ptr [ebp-0x48],si
	jne Block203

 Block201:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	test eax,eax
	je Block204

 Block202:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block204

 Block203:
	lea eax,[ebp-0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block204:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x48]
	push ecx
	call esi
	lea edx,[ebp-0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block206

 Block205:
	push eax
	call _com_issue_error

 Block206:
	lea eax,[ebp-0x28]
	push eax
	mov byte ptr [ebp-4],0x2C
	call esi
	lea ecx,[ebp-0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block208

 Block207:
	push eax
	call _com_issue_error

 Block208:
	lea edx,[ebp-0x48]
	push edx
	lea eax,[ebp-0x28]
	push eax
	lea ecx,[ebp-0x14]
	push 0
	push ecx
	mov byte ptr [ebp-4],0x2D
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [ebp-0x6C]
	push eax
	push ecx
	mov dword ptr [ebp-0x50],esp
	mov ecx,esp
	mov bl,0x2E
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	push 0x17D
	mov byte ptr [ebp-4],0x2F
	push 0x63
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0x2D
	test eax,eax
	je Block210

 Block209:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block210:
	mov esi,8
	mov byte ptr [ebp-4],0x2C
	cmp word ptr [ebp-0x28],si
	jne Block213

 Block211:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	je Block214

 Block212:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block214

 Block213:
	lea ecx,[ebp-0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block214:
	mov byte ptr [ebp-4],0x26
	cmp word ptr [ebp-0x48],si
	jne Block217

 Block215:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	test eax,eax
	je Block218

 Block216:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block218

 Block217:
	lea eax,[ebp-0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block218:
	mov ebx,dword ptr [ebp-0x58]
	mov eax,dword ptr [ebx+0xBC]
	test eax,eax
	mov dword ptr [ebp-0x58],eax
	sete al
	test al,al
	sete al
	test al,al
	je Block231

 Block219:
	xor ecx,ecx
	cmp dword ptr [ebx+0xD8],2
	mov edx,3
	setne cl
	mov word ptr [ebp-0x28],dx
	mov dword ptr [ebp-0x20],0xFF
	dec ecx
	and ecx,0x10
	mov dword ptr [ebp-0x50],ecx
	mov esi,dword ptr [ebx+0xBC]
	mov byte ptr [ebp-4],0x30
	test esi,esi
	jne Block221

 Block220:
	push 0x80004003
	call _com_issue_error

 Block221:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[ebp-0x70]
	push ecx
	push esi
	mov dword ptr [ebp-0x70],0
	call edx
	test eax,eax
	jge Block223

 Block222:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block223:
	mov esi,dword ptr [ebx+0xBC]
	mov edi,dword ptr [ebp-0x70]
	test esi,esi
	jne Block225

 Block224:
	push 0x80004003
	call _com_issue_error

 Block225:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x6C]
	lea ecx,[ebp-0x14]
	push ecx
	push esi
	mov dword ptr [ebp-0x14],0
	call edx
	test eax,eax
	jge Block227

 Block226:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block227:
	mov ecx,dword ptr [ebp-0x58]
	lea eax,[ebp-0x28]
	push eax
	mov eax,0x9C
	sub eax,dword ptr [ebp-0x50]
	push ecx
	sub eax,dword ptr [ebp-0x14]
	mov ecx,dword ptr [ebp-0x54]
	mov edx,0x11F
	sub edx,edi
	push edx
	push eax
	call IWzCanvas::Copy
	cmp word ptr [ebp-0x28],8
	mov byte ptr [ebp-4],0x26
	jne Block230

 Block228:
	mov eax,dword ptr [ebp-0x20]
	xor ecx,ecx
	mov word ptr [ebp-0x28],cx
	test eax,eax
	je Block231

 Block229:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block231

 Block230:
	lea edx,[ebp-0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block231:
	mov eax,dword ptr [ebp-0x6C]
	mov byte ptr [ebp-4],0x25
	test eax,eax
	je Block233

 Block232:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block233:
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block235

 Block234:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block235:
	mov eax,dword ptr [ebp-0x4C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block237

 Block236:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block237:
	mov eax,dword ptr [ebp-0x54]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0x80]
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
// CMatchTableDlg::OnCreate
_SUB_EXCEPTION_HANDLER(384050)
__SUB_CLASS_THIS(00384050, __thiscall, 53960,  CMatchTableDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_384050
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x88
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x9C]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	lea eax,[esp+0x24]
	push 1
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x414]
	add esp,8
	xor ebx,ebx
	cmp esi,eax
	je Block5

 Block1:
	mov dword ptr [ebp+0x414],eax
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
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block7:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	lea eax,[esp+0x3C]
	push eax
	mov dword ptr [esp+0xA8],ebx
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	push ebx
	push ebx
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x48]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x753
	push ecx
	mov byte ptr [esp+0xC0],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xB8],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea edx,[esp+0x60]
	mov byte ptr [esp+0xB8],1
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xAC],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x40C]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block16

 Block14:
	cmp eax,0x80004002
	je Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0xA4],1
	cmp word ptr [esp+0x4C],di
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebx
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x4C]
	push ecx
	call esi

 Block20:
	mov byte ptr [esp+0xA4],0
	cmp word ptr [esp+0x3C],di
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebx
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[esp+0x3C]
	push eax
	call esi

 Block24:
	mov dword ptr [esp+0xA4],0xFFFFFFFF
	cmp word ptr [esp+0x2C],di
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebx
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x2C]
	push edx
	call esi

 Block28:
	mov dword ptr [esp+0x78],ebx
	mov dword ptr [esp+0x6C],1
	mov dword ptr [esp+0x70],ebx
	mov dword ptr [esp+0x74],ebx
	lea eax,[esp+0x24]
	push 0x754
	push eax
	mov dword ptr [esp+0xAC],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x7C]
	mov byte ptr [esp+0xA8],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xA4],4
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
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0xA4],6
	cmp eax,ebx
	je Block32

 Block31:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block33

 Block32:
	xor eax,eax

 Block33:
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0xA4],4
	cmp eax,ebx
	je Block43

 Block34:
	add eax,8
	cmp eax,ebx
	je Block43

 Block35:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block37

 Block36:
	lea ecx,[esi+0xC]
	push ecx
	call edi

 Block37:
	mov eax,dword ptr [ebp+0x424]
	mov dword ptr [ebp+0x424],esi
	mov dword ptr [esp+0x28],eax
	cmp eax,ebx
	je Block39

 Block38:
	push ebx
	lea ecx,[esp+0x28]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block39:
	mov ecx,dword ptr [ebp+0x424]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x6C]
	push eax
	push ebx
	push 0x24
	push 0x2D9
	push 0x3E8
	push ebp
	call edx
	mov eax,dword ptr [ebp+0x424]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebx
	call edx
	lea eax,[esp+0x24]
	push 0x755
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x7C]
	mov byte ptr [esp+0xA8],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xA4],4
	cmp eax,ebx
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
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0xA4],8
	cmp eax,ebx
	je Block44

 Block42:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block45

 Block43:
	xor esi,esi
	jmp Block37

 Block44:
	xor eax,eax

 Block45:
	mov byte ptr [esp+0xA4],4
	cmp eax,ebx
	je Block55

 Block46:
	add eax,8
	cmp eax,ebx
	je Block55

 Block47:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block49

 Block48:
	lea ecx,[esi+0xC]
	push ecx
	call edi

 Block49:
	mov eax,dword ptr [ebp+0x42C]
	mov dword ptr [ebp+0x42C],esi
	mov dword ptr [esp+0x28],eax
	cmp eax,ebx
	je Block51

 Block50:
	push ebx
	lea ecx,[esp+0x28]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block51:
	mov ecx,dword ptr [ebp+0x42C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x6C]
	push eax
	push ebx
	push 0x1B1
	push 0x2D9
	push 0x3E9
	push ebp
	call edx
	mov eax,dword ptr [ebp+0x42C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebx
	call edx
	lea eax,[esp+0x24]
	push 0x746
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x7C]
	mov byte ptr [esp+0xA8],9
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xA4],4
	cmp eax,ebx
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block53:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0xA4],0xA
	cmp eax,ebx
	je Block56

 Block54:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block57

 Block55:
	xor esi,esi
	jmp Block49

 Block56:
	xor eax,eax

 Block57:
	mov byte ptr [esp+0xA4],4
	cmp eax,ebx
	je Block65

 Block58:
	add eax,8
	cmp eax,ebx
	je Block65

 Block59:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block61

 Block60:
	lea ecx,[esi+0xC]
	push ecx
	call edi

 Block61:
	mov eax,dword ptr [ebp+0x41C]
	mov dword ptr [ebp+0x41C],esi
	mov dword ptr [esp+0x28],eax
	cmp eax,ebx
	je Block63

 Block62:
	push ebx
	lea ecx,[esp+0x28]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block63:
	mov ecx,dword ptr [ebp+0x41C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x6C]
	push eax
	push ebx
	push 9
	push 0x2C6
	push 2
	push ebp
	call edx
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block66

 Block64:
	push eax
	call _com_issue_error

 Block65:
	xor esi,esi
	jmp Block61

 Block66:
	mov edx,3
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xA4],0xC
	cmp ecx,ebx
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	lea eax,[esp+0x3C]
	push eax
	lea edx,[esp+0x30]
	push edx
	push 1
	push 0x19D
	push 0x2CA
	push ebx
	push ebx
	lea eax,[esp+0x40]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x3FC]
	cmp esi,eax
	je Block73

 Block69:
	mov dword ptr [ebp+0x3FC],eax
	cmp eax,ebx
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block71:
	cmp esi,ebx
	je Block73

 Block72:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block73:
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block75

 Block74:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block75:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xA4],0xB
	jne Block82

 Block76:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebx
	je Block78

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block78:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block79:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xA4],4
	jne Block83

 Block80:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebx
	je Block84

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block82:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x2C]
	push edx
	call edi
	jmp Block79

 Block83:
	lea ecx,[esp+0x3C]
	push ecx
	call edi

 Block84:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	mov ecx,3
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xA4],0xE
	cmp ecx,ebx
	jne Block88

 Block87:
	push 0x80004003
	call _com_issue_error

 Block88:
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push 1
	push 0x196
	push 0x2B2
	push ebx
	push ebx
	lea edx,[esp+0x40]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x404]
	cmp esi,eax
	je Block93

 Block89:
	mov dword ptr [ebp+0x404],eax
	cmp eax,ebx
	je Block91

 Block90:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block91:
	cmp esi,ebx
	je Block93

 Block92:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block93:
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block95

 Block94:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block95:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xA4],0xD
	jne Block98

 Block96:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebx
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea edx,[esp+0x2C]
	push edx
	call edi

 Block99:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xA4],4
	jne Block102

 Block100:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebx
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea ecx,[esp+0x3C]
	push ecx
	call edi

 Block103:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block105

 Block104:
	push eax
	call _com_issue_error

 Block105:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	mov bl,0xF
	push ecx
	mov byte ptr [esp+0xA8],bl
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block107

 Block106:
	push eax
	call _com_issue_error

 Block107:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xA4],0x10
	test ecx,ecx
	jne Block109

 Block108:
	push 0x80004003
	call _com_issue_error

 Block109:
	lea eax,[esp+0x3C]
	push eax
	lea edx,[esp+0x30]
	push edx
	push 3
	push 0x1A0
	push 0x2B2
	push 0
	push 0
	lea eax,[esp+0x40]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x400]
	cmp esi,eax
	je Block114

 Block110:
	mov dword ptr [ebp+0x400],eax
	test eax,eax
	je Block112

 Block111:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block112:
	test esi,esi
	je Block114

 Block113:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block114:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block116

 Block115:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block116:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xA4],bl
	jne Block119

 Block117:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block120:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xA4],4
	jne Block123

 Block121:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block124:
	lea edx,[esp+0x3C]
	push edx
	call edi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block126

 Block125:
	push eax
	call _com_issue_error

 Block126:
	lea ecx,[esp+0x2C]
	mov bl,0x11
	push ecx
	mov byte ptr [esp+0xA8],bl
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block128

 Block127:
	push eax
	call _com_issue_error

 Block128:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xA4],0x12
	test ecx,ecx
	jne Block130

 Block129:
	push 0x80004003
	call _com_issue_error

 Block130:
	lea eax,[esp+0x3C]
	push eax
	lea edx,[esp+0x30]
	push edx
	push 2
	push 0x196
	push 0x2B2
	push 0
	push 0
	lea eax,[esp+0x40]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x408]
	cmp esi,eax
	je Block135

 Block131:
	mov dword ptr [ebp+0x408],eax
	test eax,eax
	je Block133

 Block132:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block133:
	test esi,esi
	je Block135

 Block134:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block135:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block137

 Block136:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block137:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xA4],bl
	jne Block140

 Block138:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block141:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xA4],4
	jne Block144

 Block142:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block145

 Block143:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block144:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block145:
	lea edx,[esp+0x4C]
	push edx
	call edi
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block147

 Block146:
	push eax
	call _com_issue_error

 Block147:
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0xA8],0x13
	call edi
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block149

 Block148:
	push eax
	call _com_issue_error

 Block149:
	lea eax,[esp+0x14]
	push eax
	mov byte ptr [esp+0xA8],0x14
	call edi
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block151

 Block150:
	push eax
	call _com_issue_error

 Block151:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0xA8],0x15
	call edi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block153

 Block152:
	push eax
	call _com_issue_error

 Block153:
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0xA8],0x16
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block155

 Block154:
	push eax
	call _com_issue_error

 Block155:
	lea eax,[esp+0x4C]
	push eax
	lea ecx,[esp+0x60]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x48]
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x44],esp
	push 0x757
	push edx
	mov byte ptr [esp+0xCC],0x17
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x40C]
	mov byte ptr [esp+0xC4],0x18
	test ecx,ecx
	jne Block157

 Block156:
	push 0x80004003
	call _com_issue_error

 Block157:
	lea eax,[esp+0xAC]
	push eax
	mov byte ptr [esp+0xC8],0x17
	call IWzProperty::Getitem
	mov bl,0x19
	mov ecx,eax
	mov byte ptr [esp+0xC0],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x3C],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block160

 Block158:
	cmp eax,0x80004002
	je Block160

 Block159:
	push eax
	call _com_issue_error

 Block160:
	mov ecx,dword ptr [ebp+0x3FC]
	mov byte ptr [esp+0xB8],0x1A
	test ecx,ecx
	jne Block162

 Block161:
	push 0x80004003
	call _com_issue_error

 Block162:
	mov esi,dword ptr [esp+0x38]
	push esi
	lea edx,[esp+0x94]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x7C],8
	jne Block165

 Block163:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	test eax,eax
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block165:
	lea ecx,[esp+0x7C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block166:
	mov byte ptr [esp+0xA4],bl
	test esi,esi
	je Block168

 Block167:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block168:
	cmp word ptr [esp+0x8C],8
	mov byte ptr [esp+0xA4],0x17
	jne Block171

 Block169:
	mov eax,dword ptr [esp+0x94]
	xor ecx,ecx
	mov word ptr [esp+0x8C],cx
	test eax,eax
	je Block172

 Block170:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block172

 Block171:
	lea edx,[esp+0x8C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block172:
	mov ebx,8
	mov byte ptr [esp+0xA4],0x16
	cmp word ptr [esp+0x2C],bx
	jne Block179

 Block173:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block175

 Block174:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block175:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block176:
	mov byte ptr [esp+0xA4],0x15
	cmp word ptr [esp+0x3C],bx
	jne Block180

 Block177:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block181

 Block178:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block181

 Block179:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	jmp Block176

 Block180:
	lea eax,[esp+0x3C]
	push eax
	call esi

 Block181:
	mov byte ptr [esp+0xA4],0x14
	cmp word ptr [esp+0x14],bx
	jne Block184

 Block182:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block185

 Block183:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block185

 Block184:
	lea edx,[esp+0x14]
	push edx
	call esi

 Block185:
	mov byte ptr [esp+0xA4],0x13
	cmp word ptr [esp+0x5C],bx
	jne Block188

 Block186:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block189

 Block187:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block189

 Block188:
	lea ecx,[esp+0x5C]
	push ecx
	call esi

 Block189:
	mov byte ptr [esp+0xA4],4
	cmp word ptr [esp+0x4C],bx
	jne Block192

 Block190:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block193

 Block191:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block193

 Block192:
	lea eax,[esp+0x4C]
	push eax
	call esi

 Block193:
	lea ecx,[esp+0x14]
	push ecx
	call edi
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block195

 Block194:
	push eax
	call _com_issue_error

 Block195:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0xA8],0x1B
	call edi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block197

 Block196:
	push eax
	call _com_issue_error

 Block197:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0xA8],0x1C
	call edi
	lea eax,[esp+0x2C]
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
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0xA8],0x1D
	call edi
	lea edx,[esp+0x5C]
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
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0xA8],0x1E
	call edi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block203

 Block202:
	push eax
	call _com_issue_error

 Block203:
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x68]
	push edx
	lea eax,[esp+0x5C]
	push eax
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0x758
	push ecx
	mov byte ptr [esp+0xCC],0x1F
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x40C]
	mov byte ptr [esp+0xC4],0x20
	test ecx,ecx
	jne Block205

 Block204:
	push 0x80004003
	call _com_issue_error

 Block205:
	lea edx,[esp+0x9C]
	push edx
	mov byte ptr [esp+0xC8],0x1F
	call IWzProperty::Getitem
	mov bl,0x21
	mov ecx,eax
	mov byte ptr [esp+0xC0],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x3C],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block208

 Block206:
	cmp eax,0x80004002
	je Block208

 Block207:
	push eax
	call _com_issue_error

 Block208:
	mov ecx,dword ptr [ebp+0x404]
	mov byte ptr [esp+0xB8],0x22
	test ecx,ecx
	jne Block210

 Block209:
	push 0x80004003
	call _com_issue_error

 Block210:
	mov esi,dword ptr [esp+0x38]
	push esi
	lea eax,[esp+0xA4]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x8C],8
	jne Block219

 Block211:
	mov eax,dword ptr [esp+0x94]
	xor ecx,ecx
	mov word ptr [esp+0x8C],cx
	test eax,eax
	je Block213

 Block212:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block213:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block214:
	mov byte ptr [esp+0xA4],bl
	test esi,esi
	je Block216

 Block215:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block216:
	cmp word ptr [esp+0x7C],8
	mov byte ptr [esp+0xA4],0x1F
	jne Block220

 Block217:
	mov eax,dword ptr [esp+0x84]
	xor edx,edx
	mov word ptr [esp+0x7C],dx
	test eax,eax
	je Block221

 Block218:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block221

 Block219:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x8C]
	push edx
	call edi
	jmp Block214

 Block220:
	lea eax,[esp+0x7C]
	push eax
	call edi

 Block221:
	mov esi,8
	mov byte ptr [esp+0xA4],0x1E
	cmp word ptr [esp+0x4C],si
	jne Block224

 Block222:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block225

 Block223:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block225

 Block224:
	lea edx,[esp+0x4C]
	push edx
	call edi

 Block225:
	mov byte ptr [esp+0xA4],0x1D
	cmp word ptr [esp+0x5C],si
	jne Block228

 Block226:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block229

 Block227:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block229

 Block228:
	lea ecx,[esp+0x5C]
	push ecx
	call edi

 Block229:
	mov byte ptr [esp+0xA4],0x1C
	cmp word ptr [esp+0x2C],si
	jne Block232

 Block230:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block233

 Block231:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block233

 Block232:
	lea eax,[esp+0x2C]
	push eax
	call edi

 Block233:
	mov byte ptr [esp+0xA4],0x1B
	cmp word ptr [esp+0x3C],si
	jne Block236

 Block234:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block237

 Block235:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block237

 Block236:
	lea edx,[esp+0x3C]
	push edx
	call edi

 Block237:
	mov byte ptr [esp+0xA4],4
	cmp word ptr [esp+0x14],si
	jne Block240

 Block238:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block241

 Block239:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block241

 Block240:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block241:
	lea edx,[esp+0x24]
	push edx
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x23
	mov ecx,0xD
	mov byte ptr [esp+0xA4],bl
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block243

 Block242:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block243:
	mov esi,dword ptr [ebp+0x3FC]
	mov byte ptr [esp+0xA4],0x24
	test esi,esi
	jne Block245

 Block244:
	push 0x80004003
	call _com_issue_error

 Block245:
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
	jge Block247

 Block246:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block247:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xA4],bl
	jne Block250

 Block248:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block251

 Block249:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block251

 Block250:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block251:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xA4],4
	test eax,eax
	je Block253

 Block252:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block253:
	mov eax,dword ptr [ebp+0x3FC]
	mov ecx,0xD
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block255

 Block254:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block255:
	mov esi,dword ptr [ebp+0x404]
	mov byte ptr [esp+0xA4],0x25
	test esi,esi
	jne Block257

 Block256:
	push 0x80004003
	call _com_issue_error

 Block257:
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
	jge Block259

 Block258:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block259:
	mov ebx,8
	mov byte ptr [esp+0xA4],4
	cmp word ptr [esp+0x14],bx
	jne Block262

 Block260:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block263

 Block261:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block263

 Block262:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block263:
	mov eax,dword ptr [ebp+0x3FC]
	mov ecx,0xD
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block265

 Block264:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block265:
	mov esi,dword ptr [ebp+0x400]
	mov byte ptr [esp+0xA4],0x26
	test esi,esi
	jne Block267

 Block266:
	push 0x80004003
	call _com_issue_error

 Block267:
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
	jge Block269

 Block268:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block269:
	mov byte ptr [esp+0xA4],4
	cmp word ptr [esp+0x14],bx
	jne Block272

 Block270:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block273

 Block271:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block273

 Block272:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block273:
	mov eax,dword ptr [ebp+0x3FC]
	mov ecx,0xD
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block275

 Block274:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block275:
	mov esi,dword ptr [ebp+0x408]
	mov byte ptr [esp+0xA4],0x27
	test esi,esi
	jne Block277

 Block276:
	push 0x80004003
	call _com_issue_error

 Block277:
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
	jge Block279

 Block278:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block279:
	mov byte ptr [esp+0xA4],4
	cmp word ptr [esp+0x14],bx
	jne Block282

 Block280:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block283

 Block281:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block283

 Block282:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block283:
	lea eax,[esp+0x24]
	push eax
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x28
	mov ecx,0xD
	mov byte ptr [esp+0xA4],bl
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block285

 Block284:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block285:
	mov esi,dword ptr [ebp+0x3FC]
	mov byte ptr [esp+0xA4],0x29
	test esi,esi
	jne Block287

 Block286:
	push 0x80004003
	call _com_issue_error

 Block287:
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
	jge Block289

 Block288:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block289:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xA4],bl
	jne Block292

 Block290:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block293

 Block291:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block293

 Block292:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block293:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xA4],4
	test eax,eax
	je Block295

 Block294:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block295:
	mov eax,dword ptr [ebp+0x3FC]
	mov ecx,0xD
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block297

 Block296:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block297:
	mov esi,dword ptr [ebp+0x404]
	mov byte ptr [esp+0xA4],0x2A
	test esi,esi
	jne Block299

 Block298:
	push 0x80004003
	call _com_issue_error

 Block299:
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
	jge Block301

 Block300:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block301:
	mov ebx,8
	mov byte ptr [esp+0xA4],4
	cmp word ptr [esp+0x14],bx
	jne Block304

 Block302:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block305

 Block303:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block305

 Block304:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block305:
	mov eax,dword ptr [ebp+0x3FC]
	mov ecx,0xD
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block307

 Block306:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block307:
	mov esi,dword ptr [ebp+0x400]
	mov byte ptr [esp+0xA4],0x2B
	test esi,esi
	jne Block309

 Block308:
	push 0x80004003
	call _com_issue_error

 Block309:
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
	jge Block311

 Block310:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block311:
	mov byte ptr [esp+0xA4],4
	cmp word ptr [esp+0x14],bx
	jne Block314

 Block312:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block315

 Block313:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block315

 Block314:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block315:
	mov eax,dword ptr [ebp+0x3FC]
	mov ecx,0xD
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block317

 Block316:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block317:
	mov esi,dword ptr [ebp+0x408]
	mov byte ptr [esp+0xA4],0x2C
	test esi,esi
	jne Block319

 Block318:
	push 0x80004003
	call _com_issue_error

 Block319:
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
	jge Block321

 Block320:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block321:
	mov byte ptr [esp+0xA4],4
	cmp word ptr [esp+0x14],bx
	jne Block324

 Block322:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block325

 Block323:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block325

 Block324:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block325:
	mov esi,dword ptr [ebp+0x3FC]
	test esi,esi
	jne Block327

 Block326:
	push 0x80004003
	call _com_issue_error

 Block327:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block329

 Block328:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block329:
	mov esi,dword ptr [ebp+0x404]
	test esi,esi
	jne Block331

 Block330:
	push 0x80004003
	call _com_issue_error

 Block331:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block333

 Block332:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block333:
	mov esi,dword ptr [ebp+0x400]
	test esi,esi
	jne Block335

 Block334:
	push 0x80004003
	call _com_issue_error

 Block335:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push esi
	call edx
	test eax,eax
	jge Block337

 Block336:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block337:
	mov esi,dword ptr [ebp+0x408]
	test esi,esi
	jne Block339

 Block338:
	push 0x80004003
	call _com_issue_error

 Block339:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block341

 Block340:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block341:
	mov eax,dword ptr [esp+0x78]
	mov dword ptr [esp+0xA4],0xFFFFFFFF
	test eax,eax
	je Block343

 Block342:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block343:
	mov ecx,dword ptr [esp+0x9C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x94
	ret 4
}
}
// CUISpeedQuiz::SendResult
_SUB_EXCEPTION_HANDLER(391CF0)
__SUB_CLASS_THIS(00391CF0, __thiscall, 54392,  CUISpeedQuiz, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_391CF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	cmp dword ptr [ecx+0xD4],0
	mov dword ptr [esp+0x20],0
	jne Block2

 Block1:
	mov dword ptr [ecx+0xD4],1
	push 0x41
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 7
	lea ecx,[esp+0xC]
	mov byte ptr [esp+0x24],1
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea eax,[esp+0x2C]
	mov dword ptr [esp+8],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0xC]
	call COutPacket::EncodeStr
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov byte ptr [esp+0x20],0
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x20
	ret 4
}
}
// CUIHope::GetText
_SUB_EXCEPTION_HANDLER(382A10)
__SUB_CLASS_THIS(00382A10, __thiscall, 53871,  CUIHope, void, ZXString<char>&, ZXString<char>&, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_382A10
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
	mov ecx,dword ptr [esi+0xB0]
	lea eax,[esp+8]
	push eax
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esp+0x1C]
	push eax
	mov dword ptr [esp+0x18],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esi+0xB8]
	lea edx,[esp+0x1C]
	push edx
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esp+0x20]
	push eax
	mov dword ptr [esp+0x18],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esi+0xC0]
	lea eax,[esp+0x20]
	push eax
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esp+0x24]
	push eax
	mov dword ptr [esp+0x18],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0xC
}
}
// CUIAvatarMegaphone::OnKey
__SUB_CLASS_THIS(0037F4F0, __thiscall, 54624,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	test eax,eax
	js Block2

 Block1:
	cmp edx,0xD
	je Block3

 Block2:
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+4],edx
	jmp  CDialog::OnKey

 Block3:
	ret 8
}
}
// CUIChangingLicenseNotice::OnButtonClicked
_SUB_EXCEPTION_HANDLER(380EC0)
__SUB_CLASS_THIS(00380EC0, __thiscall, 54512,  CUIChangingLicenseNotice, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_380EC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [esp+0x24]
	sub eax,1
	je Block3

 Block1:
	sub eax,1
	jne Block10

 Block2:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x34]
	push 2
	call edx
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4

 Block3:
	push 0xC8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x1C],0
	test eax,eax
	je Block11

 Block4:
	mov ecx,dword ptr [edi+0x90]
	push ecx
	mov ecx,eax
	call CUIChangingCharacterName::_ctor_0
	test eax,eax
	je Block11

 Block5:
	add eax,8
	je Block11

 Block6:
	lea esi,[eax-8]
	mov dword ptr [esp+0x10],esi
	test esi,esi
	je Block8

 Block7:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	mov eax,dword ptr [edi+0xBC]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x20],1
	call CUIChangingCharacterName::SetBirthDate
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x34]
	push 2
	mov ecx,edi
	call edx
	mov ecx,esi
	call CDialog::DoModal
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test esi,esi
	je Block10

 Block9:
	push 0
	lea ecx,[esp+0x10]
	call ZRef<CUIChangingCharacterName>::_ReleaseRaw

 Block10:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4

 Block11:
	xor esi,esi
	mov dword ptr [esp+0x10],esi
	jmp Block8
}
}
// CUIAvatarMegaphone::HitTest
__SUB_CLASS_THIS(0037F520, __thiscall, 54627,  CUIAvatarMegaphone, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x10]
	push eax
	push ecx
	mov ecx,esi
	call CWnd::HitTest
	test eax,eax
	je Block9

 Block1:
	test edi,edi
	je Block3

 Block2:
	cmp dword ptr [edi],0
	jne Block5

 Block3:
	cmp dword ptr [esi+0x3C],0
	je Block5

 Block4:
	mov eax,1
	jmp Block6

 Block5:
	test eax,eax
	je Block9

 Block6:
	test edi,edi
	je Block8

 Block7:
	cmp dword ptr [edi],0
	jne Block9

 Block8:
	mov eax,1

 Block9:
	pop edi
	pop esi
	ret 0xC
}
}
// CUIClaimPreNotice::OnCreate
__SUB_CLASS_THIS(0037FF70, __thiscall, 53826,  CUIClaimPreNotice, void, void*) {
__asm {

 Block0:
	sub esp,8
	push esi
	push 0
	push 0
	lea esi,[ecx+0x90]
	push ecx
	mov ecx,esi
	call CLayoutMan::Init
	push 0
	push 0
	push 0
	push 0x3E8
	push offset _S_UIUIWINDOW2IMGCL__2
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+8],0
	je Block2

 Block1:
	push 0
	lea ecx,[esp+8]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block2:
	push 0
	push 0
	push 0
	push 0x3E9
	push offset _S_UIUIWINDOW2IMGCL__1
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+8],0
	je Block4

 Block3:
	push 0
	lea ecx,[esp+8]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block4:
	push 0
	push 0
	push 0
	push 2
	push offset _S_UIUIWINDOW2IMGCL
	lea edx,[esp+0x18]
	push edx
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+8],0
	pop esi
	je Block6

 Block5:
	push 0
	lea ecx,[esp+4]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block6:
	add esp,8
	ret 4
}
}
// CUISendGifts::Draw
_SUB_EXCEPTION_HANDLER(3892E0)
__SUB_CLASS_THIS(003892E0, __thiscall, 54052,  CUISendGifts, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3892E0
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
	mov dword ptr [esp+0x18],ebx
	mov eax,dword ptr [esp+0x78]
	push eax
	xor ebp,ebp
	call CWnd::Draw
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov eax,dword ptr [esi+0x74]
	mov ecx,dword ptr [esi+0xDC]
	mov dword ptr [esp+0x70],ebp
	cmp eax,ecx
	je Block7

 Block1:
	cmp eax,dword ptr [esi+0xE4]
	je Block7

 Block2:
	lea edx,[esp+0x20]
	push edx
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	mov ebx,1
	mov byte ptr [esp+0x70],1
	mov dword ptr [esp+0x18],ebx
	cmp eax,ebp
	je Block4

 Block3:
	cmp byte ptr [eax],0
	jne Block7

 Block4:
	mov ecx,dword ptr [esi+0xE4]
	lea eax,[esp+0x1C]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	mov ebx,3
	cmp eax,ebp
	je Block6

 Block5:
	cmp byte ptr [eax],0
	jne Block7

 Block6:
	mov byte ptr [esp+0x78],0
	jmp Block8

 Block7:
	mov byte ptr [esp+0x78],1

 Block8:
	test bl,2
	je Block11

 Block9:
	mov eax,dword ptr [esp+0x1C]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x18],ebx
	cmp eax,ebp
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov dword ptr [esp+0x70],ebp
	test bl,1
	je Block14

 Block12:
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	cmp byte ptr [esp+0x78],0
	mov edi,dword ptr [ZImports::_VariantInit]
	je Block32

 Block15:
	lea ecx,[esp+0x38]
	push ecx
	call edi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x74],2
	call edi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	mov ecx,dword ptr [esi+0xF0]
	mov byte ptr [esp+0x70],3
	cmp ecx,ebp
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea edx,[esp+0x78]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x70],4
	cmp ecx,ebp
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x2C]
	push edx
	push ebp
	push ebp
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x70],3
	cmp eax,ebp
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block25:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x70],2
	cmp word ptr [esp+0x28],bx
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x28]
	push ecx
	call edi

 Block29:
	mov byte ptr [esp+0x70],0
	cmp word ptr [esp+0x38],bx
	jne Block31

 Block30:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	jmp Block48

 Block31:
	lea eax,[esp+0x38]
	jmp Block51

 Block32:
	lea ecx,[esp+0x28]
	push ecx
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x74],5
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	mov ecx,dword ptr [esi+0xF0]
	mov bl,6
	mov byte ptr [esp+0x70],bl
	cmp ecx,ebp
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[esp+0x78]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x70],7
	cmp ecx,ebp
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x3C]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebp
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block42:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x70],5
	cmp word ptr [esp+0x38],bx
	jne Block45

 Block43:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea ecx,[esp+0x38]
	push ecx
	call edi

 Block46:
	mov byte ptr [esp+0x70],0
	cmp word ptr [esp+0x28],bx
	jne Block50

 Block47:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx

 Block48:
	cmp eax,ebp
	je Block52

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block50:
	lea eax,[esp+0x28]

 Block51:
	push eax
	call edi

 Block52:
	mov eax,dword ptr [esi+0xF8]
	cmp eax,1
	jne Block139

 Block53:
	mov eax,dword ptr [esi+0xFC]
	cmp eax,ebp
	je Block55

 Block54:
	cmp dword ptr [eax-4],ebp
	jne Block75

 Block55:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push ecx
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block57

 Block56:
	push eax
	call _com_issue_error

 Block57:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x74],8
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block59

 Block58:
	push eax
	call _com_issue_error

 Block59:
	mov esi,dword ptr [esi+0xF4]
	mov bl,9
	mov byte ptr [esp+0x70],bl
	cmp esi,ebp
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	lea edx,[esp+0x78]
	push edx
	mov ecx,esi
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x70],0xA
	cmp ecx,ebp
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x3C]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebp
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block65:
	mov esi,8
	mov byte ptr [esp+0x70],8
	cmp word ptr [esp+0x38],si
	jne Block68

 Block66:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov byte ptr [esp+0x70],0
	cmp word ptr [esp+0x28],si
	jne Block72

 Block70:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp eax,ebp
	je Block226

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block226

 Block75:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	call edi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x74],0xB
	call edi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block79

 Block78:
	push eax
	call _com_issue_error

 Block79:
	mov ecx,dword ptr [esi+0xF4]
	mov bl,0xC
	mov byte ptr [esp+0x70],bl
	cmp ecx,ebp
	jne Block81

 Block80:
	push 0x80004003
	call _com_issue_error

 Block81:
	lea edx,[esp+0x78]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x70],0xD
	cmp ecx,ebp
	jne Block83

 Block82:
	push 0x80004003
	call _com_issue_error

 Block83:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x3C]
	push edx
	push ebp
	push ebp
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebp
	je Block85

 Block84:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block85:
	mov edi,8
	mov byte ptr [esp+0x70],0xB
	cmp word ptr [esp+0x38],di
	jne Block88

 Block86:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block89:
	mov byte ptr [esp+0x70],0
	cmp word ptr [esp+0x28],di
	jne Block92

 Block90:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block93:
	xor edi,edi
	jmp Block95

 Block95:
	mov eax,dword ptr [esi+0xFC]
	test eax,eax
	je Block98

 Block96:
	cmp ebp,dword ptr [eax-4]
	jae Block98

 Block97:
	push 0
	push 0
	push 0
	mov ecx,eax
	push 0
	lea edx,[edi+ecx+8]
	push edx
	call SetRect
	inc ebp
	add edi,0x18
	jmp Block95

 Block98:
	mov eax,dword ptr [esi+0xCC]
	mov edi,dword ptr [eax+0x38]
	mov eax,dword ptr [esi+0x110]
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block100

 Block99:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block100:
	mov eax,dword ptr [esi+0x114]
	mov byte ptr [esp+0x70],0xE
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block102

 Block101:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block102:
	lea eax,[edi+3]
	cmp edi,eax
	mov byte ptr [esp+0x70],0xF
	mov dword ptr [esp+0x78],edi
	mov dword ptr [esp+0x20],eax
	jge Block134

 Block103:
	lea ebp,[edi+edi*2]
	add ebp,ebp
	add ebp,ebp
	add ebp,ebp
	mov edi,0x37

 Block104:
	mov eax,dword ptr [esi+0xFC]
	mov ebx,dword ptr [ZImports::_VariantInit]
	test eax,eax
	je Block134

 Block105:
	mov ecx,dword ptr [esp+0x78]
	cmp ecx,dword ptr [eax-4]
	jae Block134

 Block106:
	mov edx,eax
	mov eax,dword ptr [esi+0x10C]
	cmp eax,dword ptr [edx+ebp]
	jne Block120

 Block107:
	mov ebx,dword ptr [esp+0x14]
	test ebx,ebx
	je Block20

 Block108:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x8C]
	push 0xFF244768
	push 0x12
	push 0x99
	lea edx,[edi-2]
	push edx
	push 0x11B
	push ebx
	call eax
	test eax,eax
	jge Block110

 Block109:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block110:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block111:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x74],0x10
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block112:
	mov ecx,dword ptr [esp+0x18]
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [esi+0xFC]
	push ecx
	push ecx
	add eax,ebp
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x84],0x11
	call _xbstr_t::_ctor_0
	push edi
	mov byte ptr [esp+0x84],0x12
	push 0x125
	mov ecx,ebx
	mov byte ptr [esp+0x88],0x11
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x70],0x10
	jne Block115

 Block113:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block116:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x70],0xF
	jne Block119

 Block117:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block132

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block119:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block132

 Block120:
	lea eax,[esp+0x58]
	push eax
	call ebx
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block121:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x74],0x13
	call ebx
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block122:
	mov eax,dword ptr [esp+0x1C]
	lea ecx,[esp+0x58]
	push ecx
	lea edx,[esp+0x4C]
	push edx
	push eax
	mov eax,dword ptr [esi+0xFC]
	push ecx
	add eax,ebp
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x84],0x14
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],0x15
	test ecx,ecx
	je Block20

 Block123:
	push edi
	push 0x125
	mov byte ptr [esp+0x88],0x14
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [esp+0x70],0x13
	cmp word ptr [esp+0x48],bx
	jne Block126

 Block124:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block127:
	mov byte ptr [esp+0x70],0xF
	cmp word ptr [esp+0x58],bx
	jne Block130

 Block128:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	mov ebx,dword ptr [esp+0x14]

 Block132:
	mov ecx,dword ptr [esi+0xFC]
	lea edx,[edi+0x10]
	push edx
	push 0x1B4
	lea eax,[edi-2]
	push eax
	push 0x11B
	lea edx,[ecx+ebp+8]
	push edx
	call SetRect
	mov eax,dword ptr [esp+0x78]
	inc eax
	add edi,0x12
	add ebp,0x18
	cmp eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x78],eax
	jge Block135

 Block133:
	jmp Block104

 Block134:
	mov ebx,dword ptr [esp+0x14]

 Block135:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x70],0xE
	test eax,eax
	je Block137

 Block136:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block137:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x70],0
	test eax,eax
	je Block224

 Block138:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block224

 Block139:
	cmp eax,2
	jne Block223

 Block140:
	mov eax,dword ptr [esi+0x100]
	cmp eax,ebp
	je Block142

 Block141:
	cmp dword ptr [eax-4],ebp
	jne Block162

 Block142:
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
	jge Block144

 Block143:
	push eax
	call _com_issue_error

 Block144:
	lea edx,[esp+0x58]
	push edx
	mov byte ptr [esp+0x74],0x16
	call edi
	lea eax,[esp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block146

 Block145:
	push eax
	call _com_issue_error

 Block146:
	mov esi,dword ptr [esi+0xF4]
	mov bl,0x17
	mov byte ptr [esp+0x70],bl
	cmp esi,ebp
	jne Block148

 Block147:
	push 0x80004003
	call _com_issue_error

 Block148:
	lea ecx,[esp+0x78]
	push ecx
	mov ecx,esi
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x70],0x18
	cmp ecx,ebp
	jne Block150

 Block149:
	push 0x80004003
	call _com_issue_error

 Block150:
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x5C]
	push eax
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebp
	je Block152

 Block151:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block152:
	mov esi,8
	mov byte ptr [esp+0x70],0x16
	cmp word ptr [esp+0x58],si
	jne Block155

 Block153:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	cmp eax,ebp
	je Block156

 Block154:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block156

 Block155:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block156:
	mov byte ptr [esp+0x70],0
	cmp word ptr [esp+0x48],si
	jne Block159

 Block157:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,ebp
	je Block160

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block160

 Block159:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block160:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp eax,ebp
	je Block226

 Block161:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block226

 Block162:
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
	jge Block164

 Block163:
	push eax
	call _com_issue_error

 Block164:
	lea edx,[esp+0x58]
	push edx
	mov byte ptr [esp+0x74],0x19
	call edi
	lea eax,[esp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block166

 Block165:
	push eax
	call _com_issue_error

 Block166:
	mov ecx,dword ptr [esi+0xF4]
	mov bl,0x1A
	mov byte ptr [esp+0x70],bl
	cmp ecx,ebp
	jne Block168

 Block167:
	push 0x80004003
	call _com_issue_error

 Block168:
	lea edx,[esp+0x78]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x70],0x1B
	cmp ecx,ebp
	jne Block170

 Block169:
	push 0x80004003
	call _com_issue_error

 Block170:
	lea eax,[esp+0x48]
	push eax
	lea edx,[esp+0x5C]
	push edx
	push ebp
	push ebp
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebp
	je Block172

 Block171:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block172:
	mov edi,8
	mov byte ptr [esp+0x70],0x19
	cmp word ptr [esp+0x58],di
	jne Block175

 Block173:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	cmp eax,ebp
	je Block176

 Block174:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block176

 Block175:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block176:
	mov byte ptr [esp+0x70],0
	cmp word ptr [esp+0x48],di
	jne Block179

 Block177:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,ebp
	je Block180

 Block178:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block180

 Block179:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block180:
	xor edi,edi
	lea esp,[esp]

 Block181:
	mov eax,dword ptr [esi+0x100]
	test eax,eax
	je Block184

 Block182:
	cmp ebp,dword ptr [eax-4]
	jae Block184

 Block183:
	push 0
	push 0
	push 0
	mov ecx,eax
	push 0
	lea edx,[edi+ecx+8]
	push edx
	call SetRect
	inc ebp
	add edi,0x18
	jmp Block181

 Block184:
	mov ebx,dword ptr [esi+0x110]
	mov eax,dword ptr [esi+0xCC]
	mov edi,dword ptr [eax+0x38]
	mov dword ptr [esp+0x1C],ebx
	test ebx,ebx
	je Block186

 Block185:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block186:
	mov eax,dword ptr [esi+0x114]
	mov byte ptr [esp+0x70],0x1C
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block188

 Block187:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block188:
	lea eax,[edi+3]
	cmp edi,eax
	mov ecx,edi
	mov byte ptr [esp+0x70],0x1D
	mov dword ptr [esp+0x78],ecx
	mov dword ptr [esp+0x20],eax
	jge Block219

 Block189:
	lea ebp,[edi+edi*2]
	add ebp,ebp
	add ebp,ebp
	add ebp,ebp
	mov edi,0x37
	lea esp,[esp]

 Block190:
	mov eax,dword ptr [esi+0x100]
	test eax,eax
	je Block219

 Block191:
	cmp ecx,dword ptr [eax-4]
	jae Block219

 Block192:
	mov edx,dword ptr [esi+0x10C]
	mov ecx,eax
	cmp edx,dword ptr [ecx+ebp]
	jne Block205

 Block193:
	mov ebx,dword ptr [esp+0x14]
	test ebx,ebx
	je Block20

 Block194:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x8C]
	push 0xFF244768
	push 0x12
	push 0x99
	lea ecx,[edi-2]
	push ecx
	push 0x11B
	push ebx
	call edx
	test eax,eax
	jge Block196

 Block195:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block196:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block197:
	lea edx,[esp+0x58]
	push edx
	mov byte ptr [esp+0x74],0x1E
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block198:
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0x48]
	push ecx
	lea edx,[esp+0x5C]
	push edx
	push eax
	mov eax,dword ptr [esi+0x100]
	push ecx
	add eax,ebp
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x84],0x1F
	call _xbstr_t::_ctor_0
	push edi
	mov byte ptr [esp+0x84],0x20
	push 0x125
	mov ecx,ebx
	mov byte ptr [esp+0x88],0x1F
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x70],0x1E
	jne Block201

 Block199:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	test eax,eax
	je Block202

 Block200:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block202

 Block201:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block202:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x70],0x1D
	jne Block204

 Block203:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	jmp Block214

 Block204:
	lea ecx,[esp+0x48]
	push ecx
	jmp Block217

 Block205:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block206:
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x74],0x21
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block207:
	lea eax,[esp+0x28]
	push eax
	mov eax,dword ptr [esi+0x100]
	lea ecx,[esp+0x3C]
	push ecx
	push ebx
	push ecx
	add eax,ebp
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x84],0x22
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],0x23
	test ecx,ecx
	je Block20

 Block208:
	push edi
	push 0x125
	mov byte ptr [esp+0x88],0x22
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [esp+0x70],0x21
	cmp word ptr [esp+0x38],bx
	jne Block211

 Block209:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
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
	mov byte ptr [esp+0x70],0x1D
	cmp word ptr [esp+0x28],bx
	jne Block216

 Block213:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx

 Block214:
	test eax,eax
	je Block218

 Block215:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block218

 Block216:
	lea edx,[esp+0x28]
	push edx

 Block217:
	call dword ptr [ZImports::_VariantClear]

 Block218:
	mov edx,dword ptr [esi+0x100]
	lea eax,[edi+0x10]
	push eax
	push 0x1B4
	lea ecx,[edi-2]
	push ecx
	push 0x11B
	lea eax,[edx+ebp+8]
	push eax
	call SetRect
	mov ecx,dword ptr [esp+0x78]
	mov ebx,dword ptr [esp+0x1C]
	inc ecx
	add edi,0x12
	add ebp,0x18
	cmp ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x78],ecx
	jl Block190

 Block219:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x70],0x1C
	test eax,eax
	je Block221

 Block220:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block221:
	mov byte ptr [esp+0x70],0
	test ebx,ebx
	je Block223

 Block222:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block223:
	mov ebx,dword ptr [esp+0x14]

 Block224:
	mov eax,dword ptr [esi+0xD4]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov dword ptr [esp+0x70],0xFFFFFFFF
	test ebx,ebx
	je Block226

 Block225:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block226:
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
// CUISendGifts::OnButtonClicked
__SUB_CLASS_THIS(0039F700, __thiscall, 54056,  CUISendGifts, void, uint32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,edx
	sub eax,0x3EB
	je Block6

 Block1:
	sub eax,1
	je Block5

 Block2:
	sub eax,1
	je Block4

 Block3:
	mov dword ptr [esp+4],edx
	jmp  CDialog::OnButtonClicked

 Block4:
	mov dword ptr [esp+4],0
	jmp  CUISendGifts::SetState

 Block5:
	mov dword ptr [esp+4],2
	jmp  CUISendGifts::SetState

 Block6:
	mov dword ptr [esp+4],1
	jmp  CUISendGifts::SetState
}
}
// CUIHope::CUIHope
_SUB_EXCEPTION_HANDLER(3822E0)
__SUB_CLASS_THIS(003822E0, __thiscall, 53863,  CUIHope, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3822E0
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
	mov ecx,dword ptr [esp+0x1C]
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CUIHope::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIHope::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIHope::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x90],ecx
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esi+0x98],eax
	mov dword ptr [esi+0xA0],eax
	mov dword ptr [esi+0xA8],eax
	mov dword ptr [esi+0xB0],eax
	mov dword ptr [esi+0xB8],eax
	mov dword ptr [esi+0xC0],eax
	mov dword ptr [esi+0xC4],eax
	mov dword ptr [esi+0xC8],eax
	mov dword ptr [esi+0xCC],eax
	mov dword ptr [esi+0xD0],eax
	mov dword ptr [esi+0xD4],eax
	push eax
	push eax
	push 1
	push offset _S_UIUIWINDOW2IMGMU
	mov ecx,esi
	mov byte ptr [esp+0x24],7
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
// CUIInitialQuiz::Update
__SUB_CLASS_THIS0(0039C390, __thiscall, 54350,  CUIInitialQuiz, void) {
__asm {

 Block0:
	push ecx
	push esi
	push edi
	mov edi,dword ptr [ZImports::_timeGetTime]
	mov esi,ecx
	call edi
	sub eax,dword ptr [esi+0xC0]
	js Block2

 Block1:
	xor edi,edi
	jmp Block3

 Block2:
	call edi
	mov ecx,dword ptr [esi+0xC0]
	sub ecx,eax
	mov eax,0x10624DD3
	mul ecx
	mov edi,edx
	shr edi,6

 Block3:
	cmp dword ptr [esi+0xC4],edi
	je Block13

 Block4:
	mov dword ptr [esi+0xC4],edi
	test edi,edi
	jl Block8

 Block5:
	cmp edi,0x78
	jg Block7

 Block6:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block7:
	test edi,edi
	jg Block12

 Block8:
	mov eax,dword ptr [esi+0x98]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	mov eax,dword ptr [esi+0x98]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov eax,dword ptr [esi+0xA0]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea edi,[esi+4]
	push edi
	call CWndMan::SetCaptureWnd
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push edi
	call CWndMan::SetFocus
	push ecx
	mov edi,esp
	mov dword ptr [esp+0xC],esp
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
	call CUIInitialQuiz::SendResult
	mov ecx,dword ptr [TSingleton<CUIInitialQuiz>::ms_pInstance]
	test ecx,ecx
	je Block11

 Block9:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIInitialQuiz>::ms_pInstance]
	test eax,eax
	je Block11

 Block10:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block11:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [ecx+0x3FA0],0

 Block12:
	mov ecx,esi
	pop edi
	pop esi
	add esp,4
	jmp  CWnd::Update

 Block13:
	pop edi
	pop esi
	pop ecx
	ret
}
}
// CUIAntiMacro::SetValues
_SUB_EXCEPTION_HANDLER(37F9C0)
__SUB_CLASS_THIS(0037F9C0, __thiscall, 54257,  CUIAntiMacro, void, NakedParam<_x_com_ptr<IWzCanvas>>, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_37F9C0
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x14],0
	call dword ptr [ZImports::_timeGetTime]
	add eax,dword ptr [esp+0x20]
	mov dword ptr [esi+0xA4],eax
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esi+0xAC],eax
	mov edi,dword ptr [esi+0xB0]
	mov eax,dword ptr [esp+0x1C]
	cmp edi,eax
	je Block5

 Block1:
	mov dword ptr [esi+0xB0],eax
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
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block7:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 0xC
}
}
// CUISkillEffectChange::OnSetFocus
__SUB_CLASS_THIS(003800D0, __thiscall, 54669,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUISendGifts::~CUISendGifts
_SUB_EXCEPTION_HANDLER(39ED70)
__SUB_CLASS_THIS0(0039ED70, __thiscall, 54050,  CUISendGifts, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39ED70
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
	int 3// TODO: 	mov dword ptr [esi],offset CUISendGifts::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUISendGifts::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUISendGifts::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x124]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],0x16
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0x120]
	mov byte ptr [esp+0x1C],0x15
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esi+0x11C]
	mov byte ptr [esp+0x1C],0x14
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esi+0x118]
	mov byte ptr [esp+0x1C],0x13
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x114]
	mov byte ptr [esp+0x1C],0x12
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0x110]
	mov byte ptr [esp+0x1C],0x11
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	lea ecx,[esi+0x100]
	mov byte ptr [esp+0x1C],0x10
	call ZArray<CUISendGifts::GUILD>::RemoveAll
	lea ecx,[esi+0xFC]
	mov byte ptr [esp+0x1C],0xF
	call ZArray<CUISendGifts::FRIEND>::RemoveAll
	mov eax,dword ptr [esi+0xF4]
	mov byte ptr [esp+0x1C],0xE
	cmp eax,ebx
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov eax,dword ptr [esi+0xF0]
	mov byte ptr [esp+0x1C],0xD
	cmp eax,ebx
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	lea ecx,[esi+0xEC]
	mov byte ptr [esp+0x1C],0xC
	call ZArray<ZXString<char>>::RemoveAll
	mov eax,dword ptr [esi+0xE8]
	mov byte ptr [esp+0x1C],0xB
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	lea edi,[esi+0xE0]
	mov byte ptr [esp+0x1C],0xA
	cmp dword ptr [edi+4],ebx
	je Block20

 Block19:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block20:
	lea edi,[esi+0xD8]
	mov byte ptr [esp+0x1C],9
	cmp dword ptr [edi+4],ebx
	je Block22

 Block21:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block22:
	lea edi,[esi+0xD0]
	mov byte ptr [esp+0x1C],8
	cmp dword ptr [edi+4],ebx
	je Block24

 Block23:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block24:
	lea edi,[esi+0xC8]
	mov byte ptr [esp+0x1C],7
	cmp dword ptr [edi+4],ebx
	je Block26

 Block25:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block26:
	lea edi,[esi+0xC0]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block28

 Block27:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block28:
	lea edi,[esi+0xB8]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block30

 Block29:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block30:
	lea edi,[esi+0xB0]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block32

 Block31:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block32:
	lea edi,[esi+0xA8]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block34

 Block33:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block34:
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block36

 Block35:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block36:
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block38

 Block37:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block38:
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block40

 Block39:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block40:
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
// CUIMapleTV::OnCreate
_SUB_EXCEPTION_HANDLER(39DBF0)
__SUB_CLASS_THIS(0039DBF0, __thiscall, 54595,  CUIMapleTV, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39DBF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x130
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x144]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esp+0x20]
	push 0xF93
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	xor ebx,ebx
	mov dword ptr [esp+0x14C],ebx
	mov dword ptr [esp+0x64],ebx
	mov dword ptr [esp+0x58],1
	mov dword ptr [esp+0x5C],ebx
	mov dword ptr [esp+0x60],ebx
	mov edi,dword ptr [esi+0xB4]
	neg edi
	sbb edi,edi
	lea ecx,[esp+0x14]
	push 0x3DA
	and edi,0xA
	push ecx
	mov byte ptr [esp+0x154],1
	add edi,0xD0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [eax]
	push offset _S_BTOK__1
	push edx
	push eax
	lea eax,[esp+0x70]
	push eax
	mov byte ptr [esp+0x15C],2
	call ZXString16::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0x10
	mov byte ptr [esp+0x14C],1
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x14C],3
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0x14C],1
	cmp eax,ebx
	je Block15

 Block6:
	add eax,8
	cmp eax,ebx
	je Block15

 Block7:
	lea ebp,[eax-8]
	cmp ebp,ebx
	je Block9

 Block8:
	lea ecx,[ebp+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [esi+0xA8]
	mov dword ptr [esi+0xA8],ebp
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0xA8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x58]
	push eax
	push ebx
	push edi
	push 0x3C
	push 1
	push esi
	call edx
	mov edi,dword ptr [esi+0xB4]
	neg edi
	sbb edi,edi
	lea eax,[esp+0x14]
	push 0x3DA
	and edi,0xA
	push eax
	add edi,0xD0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x20]
	mov eax,dword ptr [eax]
	push offset _S_BTCANCEL__1
	push ecx
	push eax
	lea edx,[esp+0x70]
	push edx
	mov byte ptr [esp+0x15C],4
	call ZXString16::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0x10
	mov byte ptr [esp+0x14C],1
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x14C],5
	cmp eax,ebx
	je Block16

 Block14:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block17

 Block15:
	xor ebp,ebp
	jmp Block9

 Block16:
	xor eax,eax

 Block17:
	mov byte ptr [esp+0x14C],1
	cmp eax,ebx
	je Block28

 Block18:
	add eax,8
	cmp eax,ebx
	je Block28

 Block19:
	lea ebp,[eax-8]
	cmp ebp,ebx
	je Block21

 Block20:
	lea eax,[ebp+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block21:
	mov eax,dword ptr [esi+0xB0]
	mov dword ptr [esi+0xB0],ebp
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block23

 Block22:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [esi+0xB0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x58]
	push eax
	push ebx
	push edi
	push 0x6E
	push 2
	push esi
	call edx
	lea ecx,[esp+0x68]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	mov eax,2
	mov edx,eax
	mov edi,eax
	mov dword ptr [esp+0x6C],eax
	lea eax,[esp+0x14]
	xor ecx,ecx
	push 0x1A25
	push eax
	mov byte ptr [esp+0x154],6
	mov dword ptr [esp+0x78],ecx
	mov dword ptr [esp+0x7C],edx
	mov dword ptr [esp+0x80],edi
	mov dword ptr [esp+0x94],0xFFFFFFFF
	mov dword ptr [esp+0x8C],0xFF000000
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea ecx,[esp+0x7C]
	cmp ecx,edi
	je Block29

 Block24:
	mov ecx,dword ptr [esp+0x7C]
	cmp ecx,ebx
	je Block26

 Block25:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x7C],ebx

 Block26:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x7C],edi
	cmp edi,ebx
	je Block29

 Block27:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	add edi,8
	push edi
	call ebp
	jmp Block30

 Block28:
	xor ebp,ebp
	jmp Block21

 Block29:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]

 Block30:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	je Block32

 Block31:
	call _xbstr_t::Data_t::Release

 Block32:
	push offset _S_
	lea ecx,[esp+0x6C]
	mov dword ptr [esp+0x9C],0xC
	call ZXString<char>::AssignCStr
	lea ecx,[esp+0xA4]
	call CCtrlMLEdit::CREATEPARAM::_ctor_default
	lea edx,[esp+0x14]
	push 0x1A25
	push edx
	mov byte ptr [esp+0x154],7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea eax,[esp+0xB0]
	cmp eax,edi
	je Block37

 Block33:
	mov ecx,dword ptr [esp+0xB0]
	cmp ecx,ebx
	je Block35

 Block34:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0xB0],ebx

 Block35:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0xB0],edi
	cmp edi,ebx
	je Block37

 Block36:
	add edi,8
	push edi
	call ebp

 Block37:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	je Block39

 Block38:
	call _xbstr_t::Data_t::Release

 Block39:
	lea ecx,[esp+0xDC]
	mov dword ptr [esp+0xB4],0xF
	mov dword ptr [esp+0xD4],5
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	mov eax,0xE
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x150],8
	mov dword ptr [esp+0xE4],ebx
	mov dword ptr [esp+0xFC],eax
	mov dword ptr [esp+0x100],eax
	mov dword ptr [esp+0x104],ebx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x14C],9
	cmp eax,ebx
	je Block41

 Block40:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block42

 Block41:
	xor eax,eax

 Block42:
	mov byte ptr [esp+0x14C],8
	cmp eax,ebx
	je Block50

 Block43:
	add eax,8
	cmp eax,ebx
	je Block50

 Block44:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block46

 Block45:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block46:
	mov eax,dword ptr [esi+0xBC]
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block48

 Block47:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block48:
	mov ecx,dword ptr [esi+0xBC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0xDC]
	push eax
	push 0xC3
	push 5
	push 8
	push esi
	call edx
	mov ecx,dword ptr [esi+0xBC]
	push 1
	call CCtrlCheckBox::SetChecked
	mov eax,dword ptr [esi+0xBC]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	cmp dword ptr [esi+0xB4],ebx
	je Block51

 Block49:
	push 1
	jmp Block52

 Block50:
	xor edi,edi
	jmp Block46

 Block51:
	push ebx

 Block52:
	call edx
	cmp dword ptr [esi+0xD0],1
	jne Block54

 Block53:
	mov dword ptr [esp+0xD0],0xAA
	mov dword ptr [esp+0x14],0x12
	mov dword ptr [esp+0x44],0xB4
	jmp Block99

 Block54:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x14C],0xA
	cmp eax,ebx
	je Block56

 Block55:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block57

 Block56:
	xor eax,eax

 Block57:
	push eax
	lea ecx,[esi+0xC0]
	mov byte ptr [esp+0x150],8
	call ZRef<CCtrlEdit>::op_assign_ptr
	mov ecx,dword ptr [esi+0xC4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x68]
	push edx
	push 0xE
	push 0x96
	push 0x44
	push 0x2C
	push 5
	push esi
	call eax
	mov eax,dword ptr [esi+0xC4]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x34]
	push ecx
	mov dword ptr [esp+0xD4],0x7D
	mov dword ptr [esp+0x18],0x28
	mov dword ptr [esp+0x48],0x87
	call edi
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block59

 Block58:
	push eax
	call _com_issue_error

 Block59:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x150],0xB
	call edi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	push ebx
	push ebx
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0xF9A
	push ecx
	mov byte ptr [esp+0x168],0xC
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x160],0xD
	cmp dword ptr [_D_G_RM],ebx
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	lea edx,[esp+0x5C]
	mov byte ptr [esp+0x160],0xC
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x154],0xE
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x9C]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block66

 Block64:
	cmp eax,0x80004002
	je Block66

 Block65:
	push eax
	call _com_issue_error

 Block66:
	cmp word ptr [esp+0x48],8
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x14C],0xC
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebx
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[esp+0x48]
	push ecx
	call ebp

 Block70:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x14C],0xB
	jne Block73

 Block71:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	cmp eax,ebx
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea eax,[esp+0x24]
	push eax
	call ebp

 Block74:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x14C],8
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,ebx
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea edx,[esp+0x34]
	push edx
	call ebp

 Block78:
	lea eax,[esp+0x24]
	push eax
	call edi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block80

 Block79:
	push eax
	call _com_issue_error

 Block80:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x150],0xF
	call edi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block82

 Block81:
	push eax
	call _com_issue_error

 Block82:
	push 0
	push 0
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x40]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0xF9B
	mov bl,0x10
	push eax
	mov byte ptr [esp+0x168],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x160],0x11
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x164],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x154],0x12
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xA0]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block87

 Block85:
	cmp eax,0x80004002
	je Block87

 Block86:
	push eax
	call _com_issue_error

 Block87:
	mov edi,8
	mov byte ptr [esp+0x14C],bl
	cmp word ptr [esp+0x48],di
	jne Block90

 Block88:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea eax,[esp+0x48]
	push eax
	call ebp

 Block91:
	mov byte ptr [esp+0x14C],0xF
	cmp word ptr [esp+0x34],di
	jne Block94

 Block92:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea edx,[esp+0x34]
	push edx
	call ebp

 Block95:
	mov byte ptr [esp+0x14C],8
	cmp word ptr [esp+0x24],di
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea ecx,[esp+0x24]
	push ecx
	call ebp

 Block99:
	mov eax,dword ptr [esi+0xD0]
	test eax,eax
	jne Block107

 Block100:
	lea ecx,[esp+0x110]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	mov eax,0xE
	xor edi,edi
	mov bl,0x13
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x150],bl
	mov dword ptr [esp+0x118],edi
	mov dword ptr [esp+0x130],eax
	mov dword ptr [esp+0x134],eax
	mov dword ptr [esp+0x138],edi
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x14C],0x14
	cmp eax,edi
	je Block102

 Block101:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block103

 Block102:
	xor eax,eax

 Block103:
	push eax
	lea ecx,[esi+0x94]
	mov byte ptr [esp+0x150],bl
	call ZRef<CCtrlCheckBox>::op_assign_ptr
	mov ecx,dword ptr [esi+0x98]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x110]
	push eax
	push 0x41
	push 5
	push edi
	push esi
	call edx
	mov ecx,dword ptr [esi+0x98]
	push edi
	call CCtrlCheckBox::SetChecked
	mov ecx,dword ptr [esp+0x11C]
	mov byte ptr [esp+0x14C],8
	cmp ecx,edi
	je Block105

 Block104:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x11C],edi

 Block105:
	mov eax,dword ptr [esp+0x118]
	cmp eax,edi
	je Block109

 Block106:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block109

 Block107:
	cmp eax,2
	jne Block109

 Block108:
	mov eax,dword ptr [esi+0xC4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx

 Block109:
	push 0xCC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	xor ebx,ebx
	mov byte ptr [esp+0x14C],0x15
	cmp eax,ebx
	je Block111

 Block110:
	mov ecx,eax
	call CCtrlMLEdit::_ctor_default
	jmp Block112

 Block111:
	xor eax,eax

 Block112:
	mov byte ptr [esp+0x14C],8
	cmp eax,ebx
	je Block122

 Block113:
	add eax,8
	cmp eax,ebx
	je Block122

 Block114:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block116

 Block115:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block116:
	mov eax,dword ptr [esi+0xCC]
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block118

 Block117:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlMLEdit>::_ReleaseRaw

 Block118:
	mov ecx,dword ptr [esi+0xCC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0xA4]
	push eax
	mov eax,dword ptr [esp+0x48]
	push 0x4B
	push eax
	mov eax,dword ptr [esp+0x20]
	push 0x71
	push eax
	push 2
	push esi
	call edx
	mov eax,dword ptr [esi+0xD0]
	sub eax,ebx
	je Block124

 Block119:
	sub eax,1
	je Block123

 Block120:
	sub eax,1
	jne Block126

 Block121:
	mov eax,dword ptr [esi+0xC4]
	jmp Block125

 Block122:
	xor edi,edi
	jmp Block116

 Block123:
	mov eax,dword ptr [esi+0xCC]
	jmp Block125

 Block124:
	mov eax,dword ptr [esi+0x98]

 Block125:
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild

 Block126:
	mov ecx,dword ptr [esp+0xE8]
	mov byte ptr [esp+0x14C],7
	cmp ecx,ebx
	je Block128

 Block127:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0xE8],ebx

 Block128:
	mov eax,dword ptr [esp+0xE4]
	cmp eax,ebx
	je Block130

 Block129:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block130:
	mov ecx,dword ptr [esp+0xB0]
	mov byte ptr [esp+0x14C],6
	cmp ecx,ebx
	je Block132

 Block131:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0xB0],ebx

 Block132:
	mov eax,dword ptr [esp+0xA4]
	cmp eax,ebx
	je Block134

 Block133:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block134:
	lea ecx,[esp+0x68]
	mov byte ptr [esp+0x14C],1
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x14C],0
	cmp eax,ebx
	je Block136

 Block135:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block136:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x14C],0xFFFFFFFF
	cmp eax,ebx
	je Block138

 Block137:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block138:
	mov ecx,dword ptr [esp+0x144]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x13C
	ret 4
}
}
