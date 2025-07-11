#include "regen.hpp"
// UIWnd.ipp
#include "UIWnd.hpp"

// CUIWnd::OnCreate
__SUB_CLASS_THIS(004DDA90, __thiscall, 11765,  CUIWnd, void, void*) {
__asm {

 Block0:
	push ecx
	push esi
	push edi
	push 0
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x10],esp
	push 0
	push offset _S___3
	push 0
	mov edi,ecx
	push 0
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString16::ReleaseBuffer
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x34]
	push ecx
	mov ecx,edi
	call edx
	pop edi
	pop esi
	pop ecx
	ret 4
}
}
// CUIWnd::OnButtonClicked
__SUB_CLASS_THIS(004DD520, __thiscall, 11770,  CUIWnd, void, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x3E8
	jne Block2

 Block1:
	mov eax,dword ptr [ecx+0xAD0]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [esp+4],eax
	jmp  CWvsContext::UI_Close

 Block2:
	ret 4
}
}
// CUIWnd::ClearToolTip
__SUB_CLASS_THIS0(000ABE20, __thiscall, 11772,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0x84
	jmp  CUIToolTip::ClearToolTip
}
}
// CUIWnd::OnKey
__SUB_CLASS_THIS(004DD550, __thiscall, 11769,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test ecx,ecx
	je Block2

 Block1:
	jmp  CWvsContext::ProcessBasicUIKey

 Block2:
	ret 8
}
}
// CUIWnd::OnCreate
_SUB_EXCEPTION_HANDLER(4DDB30)
__SUB_CLASS_THIS(004DDB30, __thiscall, 11764,  CUIWnd, void, void*, NakedParam<ZXString16>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4DDB30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebp,ebp
	cmp byte ptr [esi+0xAFA],0
	mov dword ptr [esp+0x3C],ebp
	je Block12

 Block1:
	mov eax,dword ptr [esp+0x48]
	cmp eax,ebp
	je Block3

 Block2:
	cmp word ptr [eax],bp
	jne Block15

 Block3:
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call CUIWnd::GetResName
	mov ebp,eax
	lea ecx,[esp+0x10]
	push 0x8A0
	push ecx
	mov byte ptr [esp+0x44],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea edi,[esi+0xB04]
	push edi
	mov byte ptr [esp+0x48],2
	call ZXString16::Format
	mov eax,dword ptr [esp+0x1C]
	add esp,0xC
	mov byte ptr [esp+0x3C],1
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x3C],0
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	xor ebp,ebp

 Block8:
	cmp dword ptr [esi+0xAD0],0x27
	jne Block11

 Block9:
	lea ecx,[esp+0x14]
	push 0xEC6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x40],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x3C],0
	cmp eax,ebp
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	mov edx,dword ptr [esp+0x4C]
	push edx
	mov ecx,esi
	call CUIWnd::ReloadBackgrnd

 Block12:
	mov eax,dword ptr [esi+0xAD4]
	cmp eax,ebp
	je Block32

 Block13:
	mov dword ptr [esp+0x30],ebp
	mov dword ptr [esp+0x28],ebp
	mov dword ptr [esp+0x2C],ebp
	dec eax
	mov byte ptr [esp+0x3C],4
	mov dword ptr [esp+0x24],ebp
	cmp eax,4
	ja Block27

 Block14:
	cmp EAX, 0
je Block16
cmp EAX, 1
je Block18
cmp EAX, 2
je Block20
cmp EAX, 3
je Block22
cmp EAX, 4
je Block26


 Block15:
	lea eax,[esp+0x48]
	lea edi,[esi+0xB04]
	push eax
	mov ecx,edi
	call ZXString16::op_assign
	jmp Block8

 Block16:
	lea eax,[esp+0x4C]
	push 0x746
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x40],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x3C],4
	cmp eax,ebp
	je Block27

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block27

 Block18:
	lea ecx,[esp+0x14]
	push 0x63A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x40],6
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x3C],4
	cmp eax,ebp
	je Block27

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block27

 Block20:
	lea edx,[esp+0x10]
	push 0x1A71
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x40],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x3C],4
	cmp eax,ebp
	je Block27

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block27

 Block22:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	call CUIWnd::GetResName
	mov edi,eax
	lea ecx,[esp+0x18]
	push 0x8A1
	push ecx
	mov byte ptr [esp+0x44],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [edi]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x48],9
	call ZXString16::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x3C],8
	cmp eax,ebp
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block24:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x3C],4
	cmp eax,ebp
	je Block27

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block27

 Block26:
	push offset _S_UIBASICIMGBTCLOS__1
	lea ecx,[esp+0x34]
	call ZXString16::AssignCStr

 Block27:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x3C],0xA
	cmp eax,ebp
	je Block29

 Block28:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block30

 Block29:
	xor eax,eax

 Block30:
	push eax
	lea ecx,[esi+0x80]
	mov byte ptr [esp+0x40],4
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x84]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [esi+0xADC]
	push 2
	push eax
	mov eax,dword ptr [esi+0xAD8]
	push eax
	push 0x3E8
	push esi
	call edx
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x3C],0
	cmp eax,ebp
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block32:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov cl,byte ptr [eax+0x41C4]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x38]
	mov byte ptr [esp+0x20],cl
	mov eax,dword ptr [esp+0x20]
	push ebp
	push eax
	mov ecx,esi
	call edx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	cmp ecx,ebp
	je Block34

 Block33:
	push esi
	call CWndMan::RegisterUIWindow

 Block34:
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp eax,ebp
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block36:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x30
	ret 0xC
}
}
// CUIWnd::CUIWnd
_SUB_EXCEPTION_HANDLER(4DD980)
__SUB_CLASS_THIS(004DD980, __thiscall, 11755,  CUIWnd, void, int32_t, int32_t, int32_t, int32_t, const wchar_t*, int32_t, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4DD980
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
	call CWnd::_ctor_default
	xor ebx,ebx
	int 3// TODO: 	mov dword ptr [esi],offset CUIWnd::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIWnd::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIWnd::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esi+0x84],ebx
	lea ecx,[esi+0x88]
	mov byte ptr [esp+0x18],1
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xB00],ebx
	mov dword ptr [esi+0xB04],ebx
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x28]
	push ebx
	push ebx
	mov dword ptr [esi+0xAD4],ecx
	mov ecx,dword ptr [esp+0x44]
	push ecx
	mov dword ptr [esi+0xAD0],eax
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esi+0xAD8],edx
	mov edx,dword ptr [esp+0x44]
	push edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [esi+0xADC],eax
	mov eax,dword ptr [esp+0x44]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x34],4
	mov byte ptr [esi+0xAFA],bl
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov dword ptr [esi+0xAE8],ebx
	mov dword ptr [esi+0xAEC],ebx
	mov dword ptr [esi+0xAF0],ebx
	mov dword ptr [esi+0xAF4],ebx
	mov byte ptr [esi+0xAF8],bl
	mov byte ptr [esi+0xAF9],1
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret 0x20
}
}
// CUIWnd::GetRTTI
__SUB_CLASS_THIS0(003A2440, __thiscall, 11777,  CUIWnd, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIWnd::ms_RTTI_CUIWnd
	ret
}
}
// CUIWnd::OnDestroy
__SUB_CLASS_THIS0(004DD380, __thiscall, 11759,  CUIWnd, void) {
__asm {

 Block0:
	push ecx
	push ebx
	push esi
	mov esi,ecx
	xor ebx,ebx
	push edi
	cmp byte ptr [esi+0xAF9],bl
	je Block24

 Block1:
	mov edi,dword ptr [esi+0x18]
	cmp byte ptr [esi+0xAF8],bl
	je Block11

 Block2:
	cmp edi,ebx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x68]
	lea ecx,[esp+0xC]
	push ecx
	push edi
	mov dword ptr [esp+0x14],ebx
	call edx
	cmp eax,ebx
	jge Block6

 Block5:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block6:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esi+0xAF0],eax
	mov edi,dword ptr [esi+0x18]
	cmp edi,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0xC]
	push edx
	push edi
	mov dword ptr [esp+0x14],ebx
	call eax
	cmp eax,ebx
	jge Block10

 Block9:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block10:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [esi+0xAF4],ecx
	jmp Block20

 Block11:
	cmp edi,ebx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x68]
	lea eax,[esp+0xC]
	push eax
	push edi
	mov dword ptr [esp+0x14],ebx
	call ecx
	cmp eax,ebx
	jge Block15

 Block14:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block15:
	mov edx,dword ptr [esp+0xC]
	mov dword ptr [esi+0xAE8],edx
	mov edi,dword ptr [esi+0x18]
	cmp edi,ebx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x70]
	lea ecx,[esp+0xC]
	push ecx
	push edi
	mov dword ptr [esp+0x14],ebx
	call edx
	cmp eax,ebx
	jge Block19

 Block18:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block19:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esi+0xAEC],eax

 Block20:
	mov eax,dword ptr [esi+0xAD0]
	mov edx,dword ptr [esi+0xAFC]
	cmp eax,6
	jne Block22

 Block21:
	mov eax,dword ptr [esi+0xAEC]
	lea ecx,[esi+0xB00]
	push ecx
	mov ecx,dword ptr [esi+0xAE8]
	push edx
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push 6
	call CConfig::SetUIWndPos_1
	jmp Block23

 Block22:
	mov ecx,dword ptr [esi+0xAEC]
	push edx
	mov edx,dword ptr [esi+0xAE8]
	push ecx
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push edx
	push eax
	call CConfig::SetUIWndPos_0

 Block23:
	mov eax,dword ptr [esi+0xAF4]
	mov ecx,dword ptr [esi+0xAF0]
	mov edx,dword ptr [esi+0xAD0]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push edx
	call CConfig::SetUIWndPosLarge

 Block24:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	cmp ecx,ebx
	je Block26

 Block25:
	push esi
	call CWndMan::UnregisterUIWindow

 Block26:
	pop edi
	mov byte ptr [esi+0xAF8],bl
	pop esi
	pop ebx
	pop ecx
	ret
}
}
// CUIWnd::CreateUIWndPosSaved
__SUB_CLASS_THIS(004DD300, __thiscall, 11760,  CUIWnd, void, long, long, long) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xAD0]
	push edi
	lea eax,[esi+0xAFC]
	push eax
	lea edi,[esi+0xAEC]
	push edi
	lea ebx,[esi+0xAE8]
	push ebx
	push ecx
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::GetUIWndPos
	mov ecx,dword ptr [esi+0xAD0]
	lea edx,[esi+0xAF4]
	push edx
	lea eax,[esi+0xAF0]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::GetUIWndPosLarge
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x10]
	push 0
	push 1
	push 0
	push 1
	push edx
	mov edx,dword ptr [edi]
	push eax
	mov eax,dword ptr [ebx]
	push ecx
	push edx
	push eax
	mov ecx,esi
	mov byte ptr [esi+0xAF9],1
	call CWnd::CreateWnd
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CUIWnd::HitTest
__SUB_CLASS_THIS(004DD2C0, __thiscall, 11771,  CUIWnd, int32_t, long, long, CCtrlWnd**) {
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
	mov ecx,0x18
	cmp ecx,edi
	sbb eax,eax
	neg eax
	inc eax

 Block4:
	pop edi
	pop esi
	ret 0xC
}
}
// CUIWnd::IsKindOf
__SUB_CLASS_THIS(003A2460, __thiscall, 11778,  CUIWnd, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIWnd::ms_RTTI_CUIWnd
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
// CUIWnd::SetScreenMode
__SUB_CLASS_THIS(004DD570, __thiscall, 11774,  CUIWnd, void, bool, bool) {
__asm {

 Block0:
	mov al,byte ptr [esp+4]
	sub esp,8
	push esi
	mov esi,ecx
	cmp al,byte ptr [esi+0xAF8]
	je Block15

 Block1:
	push edi
	mov edi,dword ptr [esi+0x18]
	test edi,edi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x68]
	lea edx,[esp+8]
	push edx
	push edi
	mov dword ptr [esp+0x10],0
	call eax
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block5:
	mov edi,dword ptr [esi+0x18]
	test edi,edi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0xC]
	push edx
	push edi
	mov dword ptr [esp+0x14],0
	call eax
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block9:
	cmp byte ptr [esp+0x14],0
	je Block11

 Block10:
	mov ecx,dword ptr [esp+8]
	mov eax,dword ptr [esi+0xAF4]
	mov edx,dword ptr [esp+0xC]
	mov dword ptr [esi+0xAE8],ecx
	mov ecx,dword ptr [esi+0xAF0]
	push eax
	mov dword ptr [esi+0xAEC],edx
	push ecx
	jmp Block12

 Block11:
	mov edx,dword ptr [esp+8]
	mov ecx,dword ptr [esi+0xAEC]
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esi+0xAF0],edx
	mov edx,dword ptr [esi+0xAE8]
	push ecx
	mov dword ptr [esi+0xAF4],eax
	push edx

 Block12:
	mov ecx,esi
	call CWnd::MoveWnd
	cmp byte ptr [esp+0x18],0
	je Block14

 Block13:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	push 0x80000000
	push 0x80000000
	mov ecx,esi
	call edx

 Block14:
	mov al,byte ptr [esp+0x14]
	mov byte ptr [esi+0xAF8],al
	pop edi

 Block15:
	pop esi
	add esp,8
	ret 8
}
}
// CUIWnd::CreateUIWndPosForced
__SUB_CLASS_THIS(004DD240, __thiscall, 11762,  CUIWnd, void, long, long, long, long, long, long, long) {
__asm {

 Block0:
	mov edx,dword ptr [esp+8]
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [esp+0x10]
	push 0
	push 1
	mov dword ptr [ecx+0xAF0],esi
	mov esi,dword ptr [esp+0x1C]
	push 0
	push 1
	mov dword ptr [ecx+0xAF4],esi
	mov esi,dword ptr [esp+0x30]
	push esi
	mov esi,dword ptr [esp+0x30]
	push esi
	mov esi,dword ptr [esp+0x30]
	push esi
	push edx
	push eax
	mov dword ptr [ecx+0xAE8],eax
	mov dword ptr [ecx+0xAEC],edx
	mov byte ptr [ecx+0xAF9],0
	call CWnd::CreateWnd
	pop esi
	ret 0x1C
}
}
// CUIWnd::OnMouseEnter
__SUB_CLASS_THIS(004DD2A0, __thiscall, 11767,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0x84]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CUIWnd::ReloadBackgrnd
__SUB_CLASS_THIS(004DDAE0, __thiscall, 11773,  CUIWnd, void, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp byte ptr [esi+0xAFA],0
	je Block2

 Block1:
	mov eax,dword ptr [esp+8]
	mov ecx,dword ptr [esi+0xAE4]
	mov edx,dword ptr [esi+0xAE0]
	push 0
	push 0
	push eax
	mov eax,dword ptr [esi+0xB04]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd

 Block2:
	pop esi
	ret 4
}
}
// CUIWnd::CUIWnd
_SUB_EXCEPTION_HANDLER(4DD680)
__SUB_CLASS_THIS(004DD680, __thiscall, 11757,  CUIWnd, void, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4DD680
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
	call CWnd::_ctor_default
	xor ebx,ebx
	int 3// TODO: 	mov dword ptr [esi],offset CUIWnd::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIWnd::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIWnd::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esi+0x84],ebx
	lea ecx,[esi+0x88]
	mov byte ptr [esp+0x18],1
	call CUIToolTip::_ctor_default
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x28]
	cmp dword ptr [esp+0x30],ebx
	mov dword ptr [esi+0xB00],ebx
	mov dword ptr [esi+0xB04],ebx
	mov dword ptr [esi+0xAD0],eax
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esi+0xADC],eax
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esi+0xAD4],ecx
	mov dword ptr [esi+0xAD8],edx
	mov edx,dword ptr [esp+0x34]
	setne cl
	mov dword ptr [esi+0xAE4],eax
	mov byte ptr [esi+0xAFA],cl
	mov dword ptr [esi+0xAE0],edx
	mov dword ptr [esi+0xAE8],ebx
	mov dword ptr [esi+0xAEC],ebx
	mov dword ptr [esi+0xAF0],ebx
	mov dword ptr [esi+0xAF4],ebx
	mov byte ptr [esi+0xAF8],bl
	mov byte ptr [esi+0xAF9],1
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret 0x1C
}
}
// CUIWnd::OnSetFocus
__SUB_CLASS_THIS(003734B0, __thiscall, 11768,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIWnd::GetResName
// 8DD94C
static uint8_t _SUB_4DD860_LOOKUP_TABLE_0[43] = {
0, 1, 2, 3, 4, 5, 6, 14, 14, 7, 8, 14, 14, 14, 14, 14, 
14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 9, 10, 14, 14, 11, 14, 
12, 14, 14, 14, 14, 14, 14, 14, 14, 14, 13, 
};
__SUB_CLASS_THIS0(004DD860, __thiscall, 11775,  CUIWnd, ZXString16) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0xAD0]
	push esi
	mov dword ptr [esp+4],0
	cmp eax,0x2A
	ja Block17

 Block1:
	movzx eax,byte ptr [eax+_SUB_4DD860_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block4
cmp EAX, 2
je Block5
cmp EAX, 3
je Block6
cmp EAX, 4
je Block10
cmp EAX, 5
je Block8
cmp EAX, 6
je Block12
cmp EAX, 7
je Block9
cmp EAX, 8
je Block11
cmp EAX, 9
je Block14
cmp EAX, 10
je Block15
cmp EAX, 11
je Block13
cmp EAX, 12
je Block7
cmp EAX, 13
je Block16
cmp EAX, 14
je Block17


 Block2:
	push 0x1A48

 Block3:
	mov esi,dword ptr [esp+0x10]
	push esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block4:
	push 0x8A2
	jmp Block3

 Block5:
	push 0x8A3
	jmp Block3

 Block6:
	push 0x8A4
	jmp Block3

 Block7:
	push 0x8A5
	jmp Block3

 Block8:
	push 0x988
	jmp Block3

 Block9:
	push 0xA48
	jmp Block3

 Block10:
	push 0x8A8
	jmp Block3

 Block11:
	push 0x8A9
	jmp Block3

 Block12:
	push 0x1A60
	jmp Block3

 Block13:
	push 0x1A70
	jmp Block3

 Block14:
	push 0x1A3C
	jmp Block3

 Block15:
	push 0x8AA
	jmp Block3

 Block16:
	push 0x17FC
	jmp Block3

 Block17:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [eax],0
	pop esi
	pop ecx
	ret 4
}
}
// CUIWnd::~CUIWnd
_SUB_EXCEPTION_HANDLER(4DD780)
__SUB_CLASS_THIS0(004DD780, __thiscall, 11759,  CUIWnd, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4DD780
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIWnd::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIWnd::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIWnd::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xB04]
	mov dword ptr [esp+0x18],3
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	lea ecx,[esi+0xB00]
	mov byte ptr [esp+0x18],2
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esi+0x88]
	mov byte ptr [esp+0x18],1
	call CUIToolTip::~CUIToolTip
	cmp dword ptr [esi+0x84],0
	lea edi,[esi+0x80]
	mov byte ptr [esp+0x18],0
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	mov ecx,esi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CWnd::~CWnd
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
