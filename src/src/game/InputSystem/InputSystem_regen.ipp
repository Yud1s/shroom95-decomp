#include "regen.hpp"
// InputSystem.ipp
#include "InputSystem.hpp"

// CInputSystem::OnActivate
__SUB_CLASS_THIS0(001702C0, __thiscall, 42293,  CInputSystem, void) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	xor esi,esi

 Block1:
	cmp dword ptr [edi+esi*4+8],0
	je Block5

 Block2:
	test esi,esi
	jne Block4

 Block3:
	cmp dword ptr [edi+0x20],esi
	je Block5

 Block4:
	push esi
	mov ecx,edi
	call CInputSystem::TryAcquireDevice

 Block5:
	inc esi
	cmp esi,3
	jl Block1

 Block6:
	pop edi
	pop esi
	ret
}
}
// CInputSystem::LoadCursorState
_SUB_EXCEPTION_HANDLER(1717E0)
__SUB_CLASS_THIS0(001717E0, __thiscall, 42293,  CInputSystem, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1717E0
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
	mov dword ptr [esp+0x24],ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	lea edi,[ecx+0x97C]

 Block1:
	mov dword ptr [esp+0x18],ebx
	lea eax,[esp+0x1C]
	push 0xB7F
	push eax
	mov dword ptr [esp+0x4C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x50],1
	call ZXString16::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	push ebx
	push 0xFF
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [eax],ebx
	mov ebp,dword ptr [esp+0x28]
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [eax],ebx
	push ebx
	lea eax,[esp+0x40]
	push ebp
	mov byte ptr [esp+0x68],2
	push eax
	mov byte ptr [esp+0x6C],bl
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi]
	add esp,0x28
	cmp esi,eax
	je Block8

 Block4:
	mov dword ptr [edi],eax
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	cmp esi,ebx
	je Block8

 Block7:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block8:
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebx
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block10:
	mov esi,dword ptr [edi]
	cmp esi,ebx
	je Block28

 Block11:
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
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,ebx
	jge Block13

 Block12:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block13:
	mov esi,dword ptr [edi]
	cmp esi,ebx
	je Block32

 Block14:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xB4]
	push 0x7FFFFFFF
	push esi
	call edx
	cmp eax,ebx
	jge Block16

 Block15:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block16:
	mov esi,dword ptr [edi]
	cmp esi,ebx
	je Block32

 Block17:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFF
	push esi
	call ecx
	cmp eax,ebx
	jge Block19

 Block18:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block19:
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [edx+0x9C0]
	mov ecx,0xD
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],eax
	cmp eax,ebx
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block21:
	mov esi,dword ptr [edi]
	mov byte ptr [esp+0x44],3
	cmp esi,ebx
	je Block32

 Block22:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebx
	jge Block24

 Block23:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block24:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x44],bl
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
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp ebp,ebx
	je Block30

 Block29:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block30:
	mov eax,dword ptr [esp+0x14]
	inc eax
	add edi,4
	cmp eax,0x11
	mov dword ptr [esp+0x14],eax
	jl Block1

 Block31:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret

 Block32:
	push 0x80004003
	call _com_issue_error
}
}
// CInputSystem::GetISMessage
__SUB_CLASS_THIS(001708F0, __thiscall, 42301,  CInputSystem, int32_t, ISMSG*) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x9D4],0
	jne Block2

 Block1:
	xor eax,eax
	ret 4

 Block2:
	mov eax,dword ptr [ecx+0x9D8]
	mov edx,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [eax]
	mov dword ptr [edx],esi
	mov esi,dword ptr [eax+4]
	mov dword ptr [edx+4],esi
	mov eax,dword ptr [eax+8]
	add ecx,0x9CC
	mov dword ptr [edx+8],eax
	mov edx,dword ptr [ecx+0xC]
	push edx
	call ZList<ISMSG>::RemoveAt
	mov eax,1
	pop esi
	ret 4
}
}
// CInputSystem::SetAcquireKeyboard
__SUB_CLASS_THIS(00170280, __thiscall, 42297,  CInputSystem, void, int32_t) {
__asm {

 Block0:
	mov edx,dword ptr [ecx+8]
	test edx,edx
	je Block5

 Block1:
	mov eax,dword ptr [esp+4]
	cmp eax,dword ptr [ecx+0x20]
	je Block5

 Block2:
	mov dword ptr [ecx+0x20],eax
	test eax,eax
	jne Block4

 Block3:
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [eax+0x20]
	mov dword ptr [esp+4],edx
	jmp ecx

 Block4:
	mov dword ptr [esp+4],0
	jmp  CInputSystem::TryAcquireDevice

 Block5:
	ret 4
}
}
// CInputSystem::GenerateAutoBtnDown
__SUB_CLASS_THIS(0016FAC0, __thiscall, 42301,  CInputSystem, int32_t, ISMSG*) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x10],0
	je Block10

 Block1:
	cmp dword ptr [esi+0x9E0],0
	je Block10

 Block2:
	cmp dword ptr [esi+0xA00],0
	je Block10

 Block3:
	call dword ptr [ZImports::_timeGetTime]
	mov ecx,dword ptr [esi+0xA00]
	test ecx,ecx
	jge Block5

 Block4:
	mov edx,dword ptr [esi+0x930]
	jmp Block6

 Block5:
	mov edx,dword ptr [esi+0x934]

 Block6:
	push edi
	mov edi,eax
	sub edi,dword ptr [esi+0x9FC]
	cmp edi,edx
	pop edi
	jl Block10

 Block7:
	test ecx,ecx
	jge Block9

 Block8:
	neg ecx
	mov dword ptr [esi+0xA00],ecx

 Block9:
	mov dword ptr [esi+0x9FC],eax
	mov eax,dword ptr [esp+8]
	mov dword ptr [eax],0x500
	mov ecx,dword ptr [esi+0xA00]
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],0
	mov eax,1
	pop esi
	ret 4

 Block10:
	xor eax,eax
	pop esi
	ret 4
}
}
// CInputSystem::SetJoystickName
_SUB_EXCEPTION_HANDLER(1709E0)
__SUB_CLASS_THIS(001709E0, __thiscall, 42329,  CInputSystem, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1709E0
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+4]
	mov dword ptr fs:[0],eax
	lea eax,[esp+0x14]
	push eax
	add ecx,0xA10
	mov dword ptr [esp+0x10],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0xC],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 4
}
}
// CInputSystem::DetectJoystick
__SUB_CLASS_THIS0(00171740, __thiscall, 42293,  CInputSystem, void) {
__asm {

 Block0:
	sub esp,0x114
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x110],eax
	push esi
	mov esi,ecx
	call get_update_time
	cmp dword ptr [esi+0x9E0],0
	mov dword ptr [esi+0xA14],eax
	je Block5

 Block1:
	mov eax,dword ptr [esi+0x10]
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	lea edx,[esp+4]
	push edx
	push 0x110
	push eax
	mov eax,dword ptr [ecx+0x24]
	call eax
	test eax,eax
	jge Block5

 Block3:
	mov ecx,esi
	call CInputSystem::ResetJoystickData
	mov ecx,esi
	call CInputSystem::DestroyJoystickDevice
	mov ecx,esi
	call CInputSystem::InitJoystickDevice
	test eax,eax
	jge Block5

 Block4:
	mov ecx,esi
	call CInputSystem::DestroyJoystickDevice

 Block5:
	mov ecx,dword ptr [esp+0x114]
	pop esi
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x114
	ret
}
}
// CInputSystem::TryAcquireDevice
__SUB_CLASS_THIS(00170030, __thiscall, 42296,  CInputSystem, int32_t, int32_t) {
__asm {

 Block0:
	sub esp,0x118
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x114],eax
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x124]
	push esi
	mov esi,ecx
	xor ebx,ebx
	cmp dword ptr [esi+ebp*4+8],ebx
	jne Block2

 Block1:
	xor eax,eax
	jmp Block28

 Block2:
	mov eax,ebp
	sub eax,ebx
	push edi
	je Block6

 Block3:
	sub eax,1
	jne Block22

 Block4:
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x20],eax
	mov eax,dword ptr [esi+0xC]
	lea edx,[esp+0x10]
	push edx
	mov dword ptr [esp+0x14],ebx
	mov ecx,dword ptr [eax]
	push 0x14
	push eax
	mov eax,dword ptr [ecx+0x24]
	call eax
	test eax,eax
	jge Block31

 Block5:
	mov ecx,dword ptr [esi+0x93C]
	mov edx,dword ptr [esi+0x938]
	push ecx
	push edx
	mov ecx,esi
	call CInputSystem::SetCursorVectorPos
	call GetDoubleClickTime
	push 0x24
	mov dword ptr [esi+0x964],eax
	call GetSystemMetrics
	push 0x25
	mov dword ptr [esi+0x968],eax
	call GetSystemMetrics
	push 0x17
	mov dword ptr [esi+0x96C],eax
	call GetSystemMetrics
	mov dword ptr [esi+0x974],eax
	jmp Block22

 Block6:
	push 0xFF
	lea eax,[esp+0x29]
	push ebx
	push eax
	mov byte ptr [esp+0x30],bl
	call _memset
	mov eax,dword ptr [esi+8]
	mov ecx,dword ptr [eax]
	add esp,0xC
	lea edx,[esp+0x24]
	push edx
	push 0x100
	push eax
	mov eax,dword ptr [ecx+0x24]
	call eax
	test eax,eax
	jge Block31

 Block7:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	cmp ecx,ebx
	je Block9

 Block8:
	push ebx
	push 1
	push 0x15
	call CWndMan::NotifyIME

 Block9:
	push 0x100
	lea ecx,[esi+0x824]
	push ebx
	push ecx
	mov dword ptr [esi+0x928],ebx
	mov dword ptr [esi+0x924],ebx
	call _memset
	add esp,0xC
	push 0x91
	call GetAsyncKeyState
	push 0x90
	and eax,1
	lea edi,[eax+eax]
	call GetAsyncKeyState
	push 0x14
	and eax,1
	or eax,edi
	lea edi,[eax+eax]
	call GetAsyncKeyState
	push ebx
	and eax,1
	or eax,edi
	lea edi,[esi+0x930]
	push edi
	push ebx
	shl eax,0x1C
	push 0x16
	mov dword ptr [esi+0x92C],eax
	call SystemParametersInfoA
	test eax,eax
	jne Block11

 Block10:
	mov dword ptr [edi],3

 Block11:
	mov eax,dword ptr [edi]
	inc eax
	imul eax,0xFA
	cmp eax,0xFA
	jg Block13

 Block12:
	mov eax,0xFA
	jmp Block15

 Block13:
	cmp eax,0x3E8
	jl Block15

 Block14:
	mov eax,0x3E8

 Block15:
	push ebx
	mov dword ptr [edi],eax
	lea edi,[esi+0x934]
	push edi
	push ebx
	push 0xA
	call SystemParametersInfoA
	test eax,eax
	jne Block17

 Block16:
	mov dword ptr [edi],ebx

 Block17:
	mov eax,dword ptr [edi]
	lea edx,[eax+eax*2]
	add edx,edx
	add edx,edx
	mov eax,0x190
	sub eax,edx
	cmp eax,0x21
	jg Block19

 Block18:
	mov eax,0x21
	jmp Block21

 Block19:
	cmp eax,0x190
	jl Block21

 Block20:
	mov eax,0x190

 Block21:
	mov dword ptr [edi],eax

 Block22:
	xor edi,edi

 Block23:
	cmp dword ptr [esi+ebp*4+8],ebx
	je Block25

 Block24:
	mov eax,dword ptr [esi+ebp*4+8]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x1C]
	push eax
	call edx
	test eax,eax
	jge Block29

 Block25:
	push 0x64
	call Sleep
	inc edi
	cmp edi,0xA
	jl Block23

 Block26:
	xor eax,eax

 Block27:
	pop edi

 Block28:
	mov ecx,dword ptr [esp+0x120]
	pop esi
	pop ebp
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x118
	ret 4

 Block29:
	cmp ebp,ebx
	jne Block31

 Block30:
	push ebx
	mov ecx,esi
	call CInputSystem::UpdateKeyboard

 Block31:
	mov eax,1
	jmp Block27
}
}
// CInputSystem::GetJoystickName
__SUB_CLASS_THIS0(0056B400, __thiscall, 42328,  CInputSystem, ZXString<char>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	add ecx,0xA10
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
// CInputSystem::UpdateDevice
__SUB_CLASS_THIS(00171710, __thiscall, 42297,  CInputSystem, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0
	je Block6

 Block1:
	sub eax,1
	je Block5

 Block2:
	sub eax,1
	jne Block4

 Block3:
	call CInputSystem::UpdateJoystick

 Block4:
	ret 4

 Block5:
	call CInputSystem::UpdateMouse
	ret 4

 Block6:
	mov dword ptr [esp+4],1
	jmp  CInputSystem::UpdateKeyboard
}
}
// CInputSystem::GetCursorPos
__SUB_CLASS_THIS(0016F830, __thiscall, 42305,  CInputSystem, int32_t, tagPOINT*) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0xC],0
	je Block2

 Block1:
	mov ecx,dword ptr [esi+0x938]
	mov eax,dword ptr [esp+8]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [esi+0x93C]
	mov dword ptr [eax+4],edx
	mov eax,1
	pop esi
	ret 4

 Block2:
	push edi
	mov edi,dword ptr [esp+0xC]
	push edi
	call GetCursorPos
	test eax,eax
	je Block5

 Block3:
	mov eax,dword ptr [esi]
	push edi
	push eax
	call ScreenToClient
	test eax,eax
	je Block5

 Block4:
	pop edi
	mov eax,1
	pop esi
	ret 4

 Block5:
	pop edi
	xor eax,eax
	pop esi
	ret 4
}
}
// CInputSystem::Close
__SUB_CLASS_THIS0(001703B0, __thiscall, 42293,  CInputSystem, void) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	push edi
	mov edi,ecx
	lea esi,[edi+8]
	mov ebp,3
	xor ebx,ebx

 Block1:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x20]
	push eax
	call edx
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov dword ptr [esi],ebx

 Block3:
	mov eax,dword ptr [esi+0xC]
	cmp eax,ebx
	je Block5

 Block4:
	push eax
	call CloseHandle
	mov dword ptr [esi+0xC],ebx

 Block5:
	add esi,4
	sub ebp,1
	jne Block1

 Block6:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov dword ptr [edi+4],ebx

 Block8:
	mov eax,dword ptr [edi+0x978]
	cmp eax,ebx
	je Block10

 Block9:
	mov dword ptr [edi+0x978],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [edi+0x9C0]
	cmp eax,ebx
	je Block12

 Block11:
	mov dword ptr [edi+0x9C0],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret
}
}
// CInputSystem::InitJoystickDevice
__SUB_CLASS_THIS0(001712E0, __thiscall, 42312,  CInputSystem, int32_t) {
__asm {

 Block0:
	sub esp,0x14
	push esi
	push 1
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	push 0
	push offset CInputSystem::EnumJoysticksCallback
	mov dword ptr [esi+0xA0C],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x10]
	push 4
	push eax
	call edx
	test eax,eax
	jl Block10

 Block1:
	mov eax,dword ptr [esi+0x10]
	test eax,eax
	je Block10

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x2C]
	push offset _D_C_DFDIJOYSTICK2
	push eax
	call edx
	test eax,eax
	jl Block10

 Block3:
	mov eax,dword ptr [esi+0x10]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [eax]
	push 5
	push edx
	push eax
	mov eax,dword ptr [ecx+0x34]
	call eax
	test eax,eax
	jl Block10

 Block4:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [esi+0x10]
	mov ecx,dword ptr [eax]
	push 0
	push edx
	push offset CInputSystem::EnumObjectsCallback
	push eax
	mov eax,dword ptr [ecx+0x10]
	call eax
	test eax,eax
	jl Block10

 Block5:
	mov eax,dword ptr [esi+0x10]
	mov edx,dword ptr [esi+0x1C]
	mov ecx,dword ptr [eax]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x30]
	call eax
	test eax,eax
	jl Block10

 Block6:
	mov eax,0x10
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [esi+0x10]
	lea edx,[esp+4]
	push edx
	mov dword ptr [esp+8],0x14
	mov dword ptr [esp+0x10],0
	mov dword ptr [esp+0x14],0
	mov ecx,dword ptr [eax]
	push 1
	push eax
	mov eax,dword ptr [ecx+0x18]
	call eax
	test eax,eax
	jl Block10

 Block7:
	lea ecx,[ecx]

 Block8:
	mov eax,dword ptr [esi+0x10]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x1C]
	push eax
	call edx
	cmp eax,0x8007001E
	je Block8

 Block9:
	mov eax,1
	pop esi
	add esp,0x14
	ret

 Block10:
	xor eax,eax
	pop esi
	add esp,0x14
	ret
}
}
// CInputSystem::Init
_SUB_EXCEPTION_HANDLER(171A60)
__SUB_CLASS_THIS(00171A60, __thiscall, 42295,  CInputSystem, void, HWND__*, void**) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_171A60
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
	mov esi,ecx
	mov eax,dword ptr [esp+0x34]
	mov ebx,dword ptr [esp+0x38]
	mov dword ptr [esi],eax
	xor edi,edi
	lea ebp,[esi+0x14]

 Block1:
	push 0
	push 0
	push 0
	push 0
	call CreateEventA
	mov dword ptr [ebp],eax
	mov dword ptr [ebx+edi*4],eax
	test eax,eax
	je Block5

 Block2:
	inc edi
	add ebp,4
	cmp edi,3
	jl Block1

 Block3:
	xor ebx,ebx
	push ebx
	lea ecx,[esi+4]
	push ecx
	push offset _D_IID_IDIRECTINPUT
	push 0x800
	push ebx
	call GetModuleHandleA
	push eax
	call _DirectInput8Create
	cmp eax,ebx
	jge Block8

 Block4:
	push ebx
	push eax
	call _com_raise_error

 Block5:
	call GetLastError
	test eax,eax
	jle Block7

 Block6:
	and eax,0xFFFF
	or eax,0x80070000

 Block7:
	push 0
	push eax
	call _com_raise_error

 Block8:
	push 0x400
	lea edx,[esi+0x24]
	push ebx
	push edx
	call _memset
	push 0x400
	lea eax,[esi+0x424]
	push ebx
	push eax
	call _memset
	add esp,0x18
	xor eax,eax
	jmp Block10

 Block10:
	movzx ecx,byte ptr [eax+_D_VK_TO_DIK+1]
	movzx edx,byte ptr [eax+_D_VK_TO_DIK]
	mov dword ptr [esi+edx*4+0x24],ecx
	movzx ecx,byte ptr [eax+_D_VK_TO_DIK]
	movzx edx,byte ptr [eax+_D_VK_TO_DIK+1]
	add eax,2
	mov dword ptr [esi+edx*4+0x424],ecx
	cmp eax,0xCC
	jb Block10

 Block11:
	lea eax,[esp+0x34]
	push 0x3D2
	push eax
	mov dword ptr [esi+0x20],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea edi,[esi+0x9C0]
	push edi
	push eax
	mov dword ptr [esp+0x38],ebx
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x40]
	add esp,0xC
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	mov ecx,dword ptr [_D_G_GR]
	cmp ecx,ebx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea edx,[esp+0x38]
	push edx
	call IWzGr2D::Getcenter
	mov eax,dword ptr [eax]
	mov ebp,1
	mov ecx,0xD
	mov dword ptr [esp+0x2C],ebp
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block17

 Block16:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block17:
	mov edi,dword ptr [edi]
	mov byte ptr [esp+0x2C],2
	cmp edi,ebx
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
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
	cmp eax,ebx
	jge Block21

 Block20:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block21:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x2C],1
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block27:
	mov eax,dword ptr [esi+0x93C]
	mov ecx,dword ptr [esi+0x938]
	lea edi,[esi+0x938]
	push eax
	push ecx
	mov ecx,esi
	call CInputSystem::SetCursorVectorPos
	push 0x2C
	push ebx
	push edi
	call _memset
	add esp,0xC
	call get_screen_width
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [edi],eax
	call get_screen_height
	cdq
	sub eax,edx
	sar eax,1
	mov ecx,esi
	mov dword ptr [esi+0x93C],eax
	call CInputSystem::LoadCursorState
	push ebx
	mov ecx,esi
	call CInputSystem::SetCursorState
	mov ecx,esi
	mov dword ptr [esi+0x9E0],ebp
	call CInputSystem::DetectJoystick
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
// CInputSystem::IsKeyPressed
__SUB_CLASS_THIS(0016F7A0, __thiscall, 42296,  CInputSystem, int32_t, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0xFF
	ja Block12

 Block1:
	cmp eax,1
	jne Block5

 Block2:
	cmp dword ptr [ecx+0xC],0
	je Block4

 Block3:
	mov eax,dword ptr [ecx+0x940]
	ret 4

 Block4:
	push 1
	call GetAsyncKeyState
	xor ecx,ecx
	test ax,ax
	setl cl
	mov eax,ecx
	ret 4

 Block5:
	cmp eax,2
	jne Block8

 Block6:
	cmp dword ptr [ecx+0xC],0
	jne Block3

 Block7:
	push eax
	call GetAsyncKeyState
	xor edx,edx
	test ax,ax
	setl dl
	mov eax,edx
	ret 4

 Block8:
	cmp dword ptr [ecx+8],0
	je Block11

 Block9:
	cmp dword ptr [ecx+0x20],0
	je Block11

 Block10:
	xor edx,edx
	cmp byte ptr [eax+ecx+0x824],dl
	setne dl
	mov eax,edx
	ret 4

 Block11:
	push eax
	call GetAsyncKeyState
	xor ecx,ecx
	test ax,ax
	setl cl
	mov eax,ecx
	ret 4

 Block12:
	xor eax,eax
	ret 4
}
}
// CInputSystem::SetCursorVectorPos
_SUB_EXCEPTION_HANDLER(16FC00)
__SUB_CLASS_THIS(0016FC00, __thiscall, 42308,  CInputSystem, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_16FC00
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
	mov edi,ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push eax
	call esi
	lea ecx,[esp+0x1C]
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
	lea edx,[esp+0xC]
	push edx
	mov dword ptr [esp+0x38],0
	call esi
	lea eax,[esp+0xC]
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
	mov edi,dword ptr [edi+0x9C0]
	mov byte ptr [esp+0x34],1
	test edi,edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	call get_screen_height
	mov esi,dword ptr [esp+0x40]
	cdq
	sub eax,edx
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x10]
	sar eax,1
	push edx
	sub esi,eax
	call get_adjust_cy
	sub esi,eax
	push esi
	call get_screen_width
	mov ecx,dword ptr [esp+0x48]
	cdq
	sub eax,edx
	sar eax,1
	sub ecx,eax
	push ecx
	mov ecx,edi
	call IWzVector2D::RelMove
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x34],0
	cmp word ptr [esp+0xC],si
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x14]
	xor edx,edx
	mov word ptr [esp+0xC],dx
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea eax,[esp+0xC]
	push eax
	call edi

 Block10:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp word ptr [esp+0x1C],si
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret 8

 Block13:
	lea edx,[esp+0x1C]
	push edx
	call edi

 Block14:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret 8
}
}
// CInputSystem::GenerateAutoKeyDown
__SUB_CLASS_THIS(0016F990, __thiscall, 42301,  CInputSystem, int32_t, ISMSG*) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+8],0
	je Block11

 Block1:
	cmp dword ptr [esi+0x20],0
	je Block11

 Block2:
	cmp dword ptr [esi+0x928],0
	je Block11

 Block3:
	call timeGetTime
	mov ecx,dword ptr [esi+0x928]
	test ecx,ecx
	jge Block5

 Block4:
	mov edx,dword ptr [esi+0x930]
	jmp Block6

 Block5:
	mov edx,dword ptr [esi+0x934]

 Block6:
	push edi
	mov edi,eax
	sub edi,dword ptr [esi+0x924]
	cmp edi,edx
	jge Block8

 Block7:
	pop edi
	xor eax,eax
	pop esi
	ret 4

 Block8:
	test ecx,ecx
	jge Block10

 Block9:
	neg ecx
	mov dword ptr [esi+0x928],ecx

 Block10:
	mov dword ptr [esi+0x924],eax
	push ebx
	mov ebx,dword ptr [esp+0x10]
	mov dword ptr [ebx],0x100
	mov eax,dword ptr [esi+0x928]
	mov dword ptr [ebx+4],eax
	mov ecx,dword ptr [esi+0x928]
	movzx edi,byte ptr [esi+ecx+0x824]
	mov ecx,esi
	call CInputSystem::GetSpecialKeyFlag
	mov edx,edi
	and edx,0x80
	add edx,edx
	and edi,0xFFFFFF7F
	or edx,edi
	shl edx,0x10
	or eax,edx
	mov dword ptr [ebx+8],eax
	pop ebx
	pop edi
	mov eax,1
	pop esi
	ret 4

 Block11:
	xor eax,eax
	pop esi
	ret 4
}
}
// CInputSystem::UpdateMouse
__SUB_CLASS_THIS0(00170BE0, __thiscall, 42293,  CInputSystem, void) {
__asm {

 Block0:
	sub esp,0x30
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x2C],eax
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xC]
	mov dword ptr [esp+0x14],ecx
	test ecx,ecx
	je Block49

 Block1:
	xor eax,eax
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x30],eax
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x24]
	push 0x14
	push ecx
	call eax
	test eax,eax
	jge Block3

 Block2:
	push 1
	mov ecx,esi
	call CInputSystem::TryAcquireDevice
	pop esi
	mov ecx,dword ptr [esp+0x2C]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x30
	ret

 Block3:
	push ebx
	push ebp
	push edi
	call timeGetTime
	mov dword ptr [esp+0x10],eax
	mov eax,dword ptr [esi+0x974]
	xor ecx,ecx
	test eax,eax
	setne cl
	xor edx,edx
	push 0x11
	movzx ebp,byte ptr [esp+ecx+0x38]
	shr ebp,7
	test eax,eax
	sete dl
	mov ecx,esi
	mov dword ptr [esp+0x28],ebp
	movzx eax,byte ptr [esp+edx+0x38]
	shr eax,7
	mov dword ptr [esp+0x18],eax
	call CInputSystem::IsKeyPressed
	mov ebx,eax
	neg ebx
	sbb ebx,ebx
	push 0x10
	mov ecx,esi
	and ebx,8
	call CInputSystem::IsKeyPressed
	mov ecx,dword ptr [esp+0x14]
	mov edi,eax
	movzx eax,byte ptr [esp+0x36]
	neg edi
	sbb edi,edi
	and edi,4
	shr eax,3
	and eax,0x10
	or edi,eax
	neg ecx
	sbb ecx,ecx
	and ecx,2
	xor edx,edx
	or edi,ecx
	test ebp,ebp
	mov ebp,dword ptr [esp+0x2C]
	setne dl
	or edi,edx
	mov edx,dword ptr [esp+0x28]
	or edi,ebx
	test edx,edx
	jne Block5

 Block4:
	test ebp,ebp
	je Block22

 Block5:
	mov eax,dword ptr [esi+0x970]
	lea ebx,[eax+5]
	mov ecx,ebx
	imul ebx,ebp
	imul ecx,edx
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	add ecx,dword ptr [esi+0x938]
	mov eax,0x66666667
	imul ebx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add eax,dword ptr [esi+0x93C]
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x1C],eax
	test ecx,ecx
	jle Block15

 Block6:
	cmp ecx,0x320
	mov ebp,ecx
	jl Block8

 Block7:
	mov ebp,0x320

 Block8:
	test eax,eax
	jle Block16

 Block9:
	cmp eax,0x258
	mov ebx,eax
	jl Block11

 Block10:
	mov ebx,0x258

 Block11:
	cmp ebp,ecx
	jne Block13

 Block12:
	cmp ebx,eax
	je Block19

 Block13:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block17

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	xor ebp,ebp
	jmp Block8

 Block16:
	xor ebx,ebx
	jmp Block11

 Block17:
	call IWzGr2D::GetfullScreen
	test eax,eax
	jne Block19

 Block18:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x20]
	push eax
	call edx
	mov ecx,dword ptr [esi]
	lea eax,[esp+0x18]
	push eax
	push ecx
	call ClientToScreen
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [esp+0x18]
	push edx
	push eax
	call SetCursorPos
	pop edi
	pop ebp
	pop ebx
	pop esi
	mov ecx,dword ptr [esp+0x2C]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x30
	ret

 Block19:
	cmp dword ptr [esi+0x938],ebp
	jne Block21

 Block20:
	cmp dword ptr [esi+0x93C],ebx
	je Block22

 Block21:
	lea ecx,[esi+0x9CC]
	mov dword ptr [esi+0x938],ebp
	mov dword ptr [esi+0x93C],ebx
	call ZList<ISMSG>::AddTail_
	movzx ecx,bx
	movzx edx,bp
	shl ecx,0x10
	or ecx,edx
	push ebx
	mov dword ptr [eax+8],ecx
	push ebp
	mov ecx,esi
	mov dword ptr [eax],0x200
	mov dword ptr [eax+4],edi
	call CInputSystem::SetCursorVectorPos

 Block22:
	mov ebx,dword ptr [esp+0x24]
	cmp dword ptr [esi+0x940],ebx
	je Block34

 Block23:
	test ebx,ebx
	jne Block25

 Block24:
	movzx eax,word ptr [esi+0x93C]
	movzx ecx,word ptr [esi+0x938]
	shl eax,0x10
	or eax,ecx
	push eax
	push edi
	push 0x202
	mov ecx,esi
	call CInputSystem::AddISMessage
	jmp Block33

 Block25:
	mov eax,dword ptr [esi+0x948]
	test eax,eax
	je Block32

 Block26:
	mov edx,dword ptr [esp+0x10]
	sub edx,eax
	cmp edx,dword ptr [esi+0x964]
	jg Block32

 Block27:
	mov eax,dword ptr [esi+0x950]
	mov ecx,dword ptr [esi+0x968]
	mov edx,dword ptr [esi+0x938]
	mov ebp,eax
	sub ebp,ecx
	cmp edx,ebp
	jl Block32

 Block28:
	add ecx,eax
	cmp edx,ecx
	jge Block32

 Block29:
	mov eax,dword ptr [esi+0x954]
	mov ecx,dword ptr [esi+0x96C]
	mov edx,dword ptr [esi+0x93C]
	mov ebp,eax
	sub ebp,ecx
	cmp edx,ebp
	jl Block32

 Block30:
	add ecx,eax
	cmp edx,ecx
	jge Block32

 Block31:
	movzx ecx,word ptr [esi+0x938]
	movzx eax,dx
	shl eax,0x10
	or eax,ecx
	push eax
	push edi
	push 0x203
	mov ecx,esi
	call CInputSystem::AddISMessage
	mov dword ptr [esi+0x948],0
	jmp Block33

 Block32:
	movzx edx,word ptr [esi+0x93C]
	movzx eax,word ptr [esi+0x938]
	shl edx,0x10
	or edx,eax
	push edx
	push edi
	push 0x201
	mov ecx,esi
	call CInputSystem::AddISMessage
	mov ecx,dword ptr [esp+0x10]
	mov edx,dword ptr [esi+0x938]
	mov eax,dword ptr [esi+0x93C]
	mov dword ptr [esi+0x948],ecx
	mov dword ptr [esi+0x950],edx
	mov dword ptr [esi+0x954],eax

 Block33:
	mov dword ptr [esi+0x940],ebx

 Block34:
	mov ebx,dword ptr [esp+0x14]
	cmp dword ptr [esi+0x944],ebx
	je Block46

 Block35:
	test ebx,ebx
	jne Block37

 Block36:
	movzx ecx,word ptr [esi+0x93C]
	movzx edx,word ptr [esi+0x938]
	shl ecx,0x10
	or ecx,edx
	push ecx
	push edi
	push 0x205
	mov ecx,esi
	call CInputSystem::AddISMessage
	jmp Block45

 Block37:
	mov eax,dword ptr [esi+0x94C]
	test eax,eax
	je Block44

 Block38:
	mov ecx,dword ptr [esp+0x10]
	sub ecx,eax
	cmp ecx,dword ptr [esi+0x964]
	jg Block44

 Block39:
	mov eax,dword ptr [esi+0x958]
	mov ecx,dword ptr [esi+0x968]
	mov edx,dword ptr [esi+0x938]
	mov ebp,eax
	sub ebp,ecx
	cmp edx,ebp
	jl Block44

 Block40:
	add eax,ecx
	cmp edx,eax
	jge Block44

 Block41:
	mov eax,dword ptr [esi+0x95C]
	mov ecx,dword ptr [esi+0x96C]
	mov edx,dword ptr [esi+0x93C]
	mov ebp,eax
	sub ebp,ecx
	cmp edx,ebp
	jl Block44

 Block42:
	add eax,ecx
	cmp edx,eax
	jge Block44

 Block43:
	movzx eax,word ptr [esi+0x938]
	movzx edx,dx
	shl edx,0x10
	or edx,eax
	push edx
	push edi
	push 0x206
	mov ecx,esi
	call CInputSystem::AddISMessage
	mov dword ptr [esi+0x94C],0
	jmp Block45

 Block44:
	movzx ecx,word ptr [esi+0x93C]
	movzx edx,word ptr [esi+0x938]
	shl ecx,0x10
	or ecx,edx
	push ecx
	push edi
	push 0x204
	mov ecx,esi
	call CInputSystem::AddISMessage
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [esi+0x938]
	mov edx,dword ptr [esi+0x93C]
	mov dword ptr [esi+0x94C],eax
	mov dword ptr [esi+0x958],ecx
	mov dword ptr [esi+0x95C],edx

 Block45:
	mov dword ptr [esi+0x944],ebx

 Block46:
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block48

 Block47:
	movzx ebx,word ptr [esi+0x93C]
	movzx ecx,word ptr [esi+0x938]
	movzx ebp,ax
	shl ebx,0x10
	movzx edx,di
	or ebx,ecx
	shl ebp,0x10
	lea ecx,[esi+0x9CC]
	or ebp,edx
	call ZList<ISMSG>::AddTail_
	mov dword ptr [eax],0x20A
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ebx

 Block48:
	pop edi
	pop ebp
	pop ebx

 Block49:
	mov ecx,dword ptr [esp+0x30]
	pop esi
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x30
	ret
}
}
// CInputSystem::DestroyJoystickDevice
__SUB_CLASS_THIS0(0016FA50, __thiscall, 42293,  CInputSystem, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x10]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x20]
	push eax
	call edx
	mov eax,dword ptr [esi+0x10]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov dword ptr [esi+0x10],0

 Block2:
	pop esi
	ret
}
}
// CInputSystem::ShowCursor
__SUB_CLASS_THIS(0016FD60, __thiscall, 42297,  CInputSystem, void, int32_t) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x978],0
	je Block6

 Block1:
	push esi
	mov esi,dword ptr [ecx+0x978]
	test esi,esi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov ecx,dword ptr [esp+8]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xE0]
	neg ecx
	sbb ecx,ecx
	and ecx,0xFF000000
	add ecx,0xFFFFFF
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
// CInputSystem::ResetJoystickData
__SUB_CLASS_THIS0(00170940, __thiscall, 42293,  CInputSystem, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	xor eax,eax
	push edi
	xor edi,edi
	mov dword ptr [esi+0xA0C],edi
	mov dword ptr [esi+0x9EC],eax
	mov dword ptr [esi+0x9F0],eax
	mov dword ptr [esi+0x9F4],eax
	mov dword ptr [esi+0x9F8],eax
	mov dword ptr [esi+0xA00],edi
	mov dword ptr [esi+0x9FC],edi
	mov eax,dword ptr [esi+0xA10]
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esi+0xA10],edi

 Block2:
	pop edi
	pop esi
	ret
}
}
// CInputSystem::SetCursorState
_SUB_EXCEPTION_HANDLER(170440)
__SUB_CLASS_THIS(00170440, __thiscall, 42310,  CInputSystem, void, const long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_170440
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
	mov eax,dword ptr [edi+0x9C4]
	mov ecx,dword ptr [esp+0x40]
	cmp eax,ecx
	je Block39

 Block1:
	cmp ecx,0xFFFFFFFF
	jne Block3

 Block2:
	mov eax,dword ptr [edi+0x9C8]
	mov dword ptr [edi+0x9C4],eax
	jmp Block7

 Block3:
	test eax,eax
	jl Block5

 Block4:
	cmp eax,9
	jge Block6

 Block5:
	mov dword ptr [edi+0x9C8],eax

 Block6:
	mov dword ptr [edi+0x9C4],ecx

 Block7:
	mov ecx,dword ptr [edi+0x9C4]
	cmp dword ptr [edi+ecx*4+0x97C],0
	lea eax,[edi+ecx*4+0x97C]
	sete al
	test al,al
	jne Block39

 Block8:
	cmp dword ptr [edi+0x978],0
	lea esi,[edi+0x978]
	sete al
	test al,al
	sete al
	test al,al
	je Block15

 Block9:
	mov ebp,dword ptr [esi]
	test ebp,ebp
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFF
	push ebp
	call eax
	test eax,eax
	jge Block13

 Block12:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebp
	push eax
	call _com_issue_errorex

 Block13:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block15

 Block14:
	mov dword ptr [esi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov eax,dword ptr [edi+0x9C4]
	mov ebp,dword ptr [esi]
	lea eax,[edi+eax*4+0x97C]
	mov eax,dword ptr [eax]
	cmp ebp,eax
	je Block20

 Block16:
	mov dword ptr [esi],eax
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block18:
	test ebp,ebp
	je Block20

 Block19:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block20:
	push esi
	mov ecx,edi
	call CInputSystem::SetCursor
	mov edi,dword ptr [esi]
	test edi,edi
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x1C]
	lea eax,[esp+0x40]
	push eax
	push edi
	mov dword ptr [esp+0x48],0
	call ecx
	test eax,eax
	jge Block24

 Block23:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block24:
	cmp dword ptr [esp+0x40],1
	jbe Block39

 Block25:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x20]
	push edx
	call edi
	lea eax,[esp+0x20]
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
	lea ecx,[esp+0x10]
	push ecx
	mov dword ptr [esp+0x3C],0
	call edi
	lea edx,[esp+0x10]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x38],1
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea eax,[esp+0x20]
	push eax
	lea edx,[esp+0x14]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x38],0
	cmp word ptr [esp+0x10],si
	jne Block34

 Block32:
	xor eax,eax
	mov word ptr [esp+0x10],ax
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea ecx,[esp+0x10]
	push ecx
	call edi

 Block35:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp word ptr [esp+0x20],si
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x2C
	ret 4

 Block38:
	lea eax,[esp+0x20]
	push eax
	call edi

 Block39:
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
// CInputSystem::SetCursorPos
__SUB_CLASS_THIS(0016FF80, __thiscall, 42306,  CInputSystem, int32_t, long, long) {
__asm {

 Block0:
	sub esp,8
	mov eax,dword ptr [esp+0xC]
	push esi
	mov esi,ecx
	xor ecx,ecx
	test eax,eax
	setle cl
	push edi
	dec ecx
	and ecx,eax
	mov edi,ecx
	call get_screen_width
	cmp edi,eax
	mov dword ptr [esp+8],edi
	jl Block2

 Block1:
	mov dword ptr [esp+8],eax

 Block2:
	mov eax,dword ptr [esp+0x18]
	xor edx,edx
	test eax,eax
	setle dl
	dec edx
	and edx,eax
	mov edi,edx
	call get_screen_height
	cmp edi,eax
	jge Block4

 Block3:
	mov eax,edi

 Block4:
	cmp dword ptr [esi+0xC],0
	mov dword ptr [esp+0xC],eax
	push eax
	je Block7

 Block5:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [esi+0x938],ecx
	push ecx
	mov ecx,esi
	mov dword ptr [esi+0x93C],eax
	call CInputSystem::SetCursorVectorPos

 Block6:
	pop edi
	mov eax,1
	pop esi
	add esp,8
	ret 8

 Block7:
	mov eax,dword ptr [esp+0xC]
	push eax
	mov ecx,esi
	call CInputSystem::SetCursorVectorPos
	mov edx,dword ptr [esi]
	lea ecx,[esp+8]
	push ecx
	push edx
	call ClientToScreen
	test eax,eax
	je Block9

 Block8:
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [esp+8]
	push eax
	push ecx
	call SetCursorPos
	test eax,eax
	jne Block6

 Block9:
	pop edi
	xor eax,eax
	pop esi
	add esp,8
	ret 8
}
}
// CInputSystem::UpdateKeyboard
__SUB_CLASS_THIS(00171050, __thiscall, 42297,  CInputSystem, void, int32_t) {
__asm {

 Block0:
	sub esp,0x208
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x204],eax
	push ebx
	push ebp
	mov ebp,ecx
	mov ebx,dword ptr [ebp+8]
	test ebx,ebx
	je Block49

 Block1:
	cmp dword ptr [ebp+0x20],0
	je Block49

 Block2:
	push esi
	push edi
	lea eax,[ebp+0x824]
	push 0x100
	mov esi,eax
	push 0
	mov ecx,0x40
	lea edi,[esp+0x11C]
	push eax
	rep movsd
	call _memset
	add esp,0xC
	call timeGetTime
	push 0xFF
	mov dword ptr [esp+0x14],eax
	lea eax,[esp+0x19]
	push 0
	push eax
	mov byte ptr [esp+0x20],0
	call _memset
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x24]
	add esp,0xC
	lea edx,[esp+0x14]
	push edx
	push 0x100
	push ebx
	call eax
	test eax,eax
	jge Block4

 Block3:
	push 0
	mov ecx,ebp
	call CInputSystem::TryAcquireDevice
	jmp Block48

 Block4:
	test byte ptr [esp+0x4E],0x80
	je Block7

 Block5:
	cmp byte ptr [esp+0x128],0
	jne Block7

 Block6:
	xor dword ptr [ebp+0x92C],0x10000000

 Block7:
	test byte ptr [esp+0x59],0x80
	mov edi,0x20000000
	je Block10

 Block8:
	cmp byte ptr [esp+0x1A4],0
	jne Block10

 Block9:
	xor dword ptr [ebp+0x92C],edi

 Block10:
	test byte ptr [esp+0x5A],0x80
	je Block13

 Block11:
	cmp byte ptr [esp+0x1A5],0
	jne Block13

 Block12:
	xor dword ptr [ebp+0x92C],0x40000000

 Block13:
	mov ecx,1
	lea esi,[ebp+0x428]
	lea esp,[esp]

 Block14:
	test byte ptr [esp+ecx+0x14],0x80
	je Block24

 Block15:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block24

 Block16:
	test dword ptr [ebp+0x92C],edi
	jne Block19

 Block17:
	lea edx,[eax-0x60]
	cmp edx,9
	ja Block19

 Block18:
	mov eax,dword ptr [edx*4+_D_AT]

 Block19:
	mov byte ptr [eax+ebp+0x824],cl
	add eax,0xFFFFFF60
	cmp eax,5
	ja Block24

 Block20:
	cmp EAX, 0
je Block21
cmp EAX, 1
je Block21
cmp EAX, 2
je Block22
cmp EAX, 3
je Block22
cmp EAX, 4
je Block23
cmp EAX, 5
je Block23


 Block21:
	mov byte ptr [ebp+0x834],cl
	jmp Block24

 Block22:
	mov byte ptr [ebp+0x835],cl
	jmp Block24

 Block23:
	mov byte ptr [ebp+0x836],cl

 Block24:
	inc ecx
	add esi,4
	cmp ecx,0x100
	jl Block14

 Block25:
	mov ecx,ebp
	call CInputSystem::GetSpecialKeyFlag
	mov ebx,eax
	xor edi,edi
	mov esi,1
	mov edi,edi

 Block26:
	cmp esi,0xA0
	je Block39

 Block27:
	cmp esi,0xA1
	je Block39

 Block28:
	cmp esi,0xA2
	je Block39

 Block29:
	cmp esi,0xA3
	je Block39

 Block30:
	cmp esi,0xA4
	je Block39

 Block31:
	cmp esi,0xA5
	je Block39

 Block32:
	mov cl,byte ptr [esi+ebp+0x824]
	mov al,byte ptr [esp+esi+0x114]
	cmp cl,al
	je Block39

 Block33:
	test cl,cl
	je Block35

 Block34:
	mov al,cl

 Block35:
	cmp dword ptr [esp+0x21C],0
	movzx eax,al
	je Block37

 Block36:
	mov edx,eax
	and edx,0x80
	add edx,edx
	and eax,0xFFFFFF7F
	or edx,eax
	shl edx,0x10
	xor eax,eax
	test cl,cl
	setne al
	mov ecx,ebp
	dec eax
	and eax,0x80000000
	or edx,eax
	or edx,ebx
	push edx
	push esi
	push 0x100
	call CInputSystem::AddISMessage

 Block37:
	cmp byte ptr [esi+ebp+0x824],0
	je Block39

 Block38:
	mov edi,esi

 Block39:
	inc esi
	cmp esi,0x100
	jl Block26

 Block40:
	xor ecx,ecx
	cmp edi,ecx
	je Block42

 Block41:
	mov ecx,dword ptr [esp+0x10]
	neg edi
	mov dword ptr [ebp+0x928],edi
	jmp Block47

 Block42:
	mov eax,dword ptr [ebp+0x928]
	cmp eax,ecx
	je Block48

 Block43:
	jge Block45

 Block44:
	neg eax

 Block45:
	cmp byte ptr [eax+ebp+0x824],0
	jne Block48

 Block46:
	mov dword ptr [ebp+0x928],ecx

 Block47:
	mov dword ptr [ebp+0x924],ecx

 Block48:
	pop edi
	pop esi

 Block49:
	mov ecx,dword ptr [esp+0x20C]
	pop ebp
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x208
	ret 4
}
}
// CInputSystem::GetSpecialKeyFlag
__SUB_CLASS_THIS0(0016F890, __thiscall, 42302,  CInputSystem, unsigned long) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	push 0x5C
	mov esi,ecx
	call CInputSystem::IsKeyPressed
	mov ebx,eax
	neg ebx
	sbb ebx,ebx
	push 0x5B
	mov ecx,esi
	and ebx,0x5000
	call CInputSystem::IsKeyPressed
	mov edi,eax
	neg edi
	sbb edi,edi
	and edi,0x3000
	push 0xA5
	mov ecx,esi
	or edi,ebx
	call CInputSystem::IsKeyPressed
	mov ebx,eax
	neg ebx
	sbb ebx,ebx
	and ebx,0x500
	push 0xA4
	mov ecx,esi
	or ebx,edi
	call CInputSystem::IsKeyPressed
	mov edi,eax
	neg edi
	sbb edi,edi
	and edi,0x300
	push 0xA3
	mov ecx,esi
	or edi,ebx
	call CInputSystem::IsKeyPressed
	mov ebx,eax
	neg ebx
	sbb ebx,ebx
	and ebx,0x50
	push 0xA2
	mov ecx,esi
	or ebx,edi
	call CInputSystem::IsKeyPressed
	mov edi,eax
	neg edi
	sbb edi,edi
	and edi,0x30
	push 0xA1
	mov ecx,esi
	or edi,ebx
	call CInputSystem::IsKeyPressed
	mov ebx,eax
	neg ebx
	sbb ebx,ebx
	and ebx,5
	push 0xA0
	mov ecx,esi
	or ebx,edi
	call CInputSystem::IsKeyPressed
	mov edi,eax
	neg edi
	sbb edi,edi
	and edi,3
	push 0x12
	mov ecx,esi
	or edi,ebx
	call CInputSystem::IsKeyPressed
	mov ebx,eax
	neg ebx
	sbb ebx,ebx
	and ebx,0x100
	push 0x11
	mov ecx,esi
	or ebx,edi
	call CInputSystem::IsKeyPressed
	mov edi,eax
	neg edi
	sbb edi,edi
	and edi,0x10
	push 0x10
	mov ecx,esi
	or edi,ebx
	call CInputSystem::IsKeyPressed
	neg eax
	sbb eax,eax
	neg eax
	or eax,edi
	pop edi
	pop esi
	pop ebx
	ret
}
}
// CInputSystem::EnumJoysticksCallback
_SUB_EXCEPTION_HANDLER(170A50)
__SUB(00170A50, __stdcall, 42335,  int32_t, const DIDEVICEINSTANCEA*, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_170A50
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
	mov ebp,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	mov eax,dword ptr [ebp+4]
	mov edi,dword ptr [esp+0x28]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0xC]
	push 0
	lea ecx,[ebp+0x10]
	push ecx
	lea ecx,[edi+4]
	push ecx
	push eax
	call edx
	test eax,eax
	jge Block2

 Block1:
	mov eax,1
	jmp Block13

 Block2:
	add edi,0x12C
	mov dword ptr [esp+0x28],0
	je Block6

 Block3:
	mov eax,edi
	lea edx,[eax+1]

 Block4:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block4

 Block5:
	sub eax,edx
	mov esi,eax
	push esi
	push edi
	push 0
	push esi
	lea ecx,[esp+0x38]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x2C]
	call ZXString<char>::ReleaseBuffer

 Block6:
	push ecx
	mov ebx,esp
	mov dword ptr [esp+0x24],0
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ebx],0
	test edi,edi
	je Block10

 Block7:
	mov eax,edi
	lea edx,[eax+1]

 Block8:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block8

 Block9:
	sub eax,edx
	mov esi,eax
	push esi
	push edi
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

 Block10:
	mov ecx,ebp
	call CInputSystem::SetJoystickName
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	xor eax,eax

 Block13:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8
}
}
// CInputSystem::SetCursor
_SUB_EXCEPTION_HANDLER(16FDC0)
__SUB_CLASS_THIS(0016FDC0, __thiscall, 42304,  CInputSystem, void, _x_com_ptr<IWzGr2DLayer>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_16FDC0
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
	mov ebx,ecx
	mov edi,dword ptr [esp+0x30]
	mov esi,dword ptr [edi]
	test esi,esi
	sete al
	test al,al
	sete al
	test al,al
	je Block23

 Block1:
	test esi,esi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
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
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block5:
	mov esi,dword ptr [edi]
	test esi,esi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xB4]
	push 0x7FFFFFFF
	push esi
	call edx
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block9:
	mov esi,dword ptr [edi]
	test esi,esi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block13

 Block12:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block13:
	mov eax,dword ptr [ebx+0x9C0]
	mov edx,0xD
	mov word ptr [esp+0x10],dx
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block15:
	mov esi,dword ptr [edi]
	mov dword ptr [esp+0x28],0
	test esi,esi
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	mov edx,dword ptr [esp+0x10]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block19

 Block18:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block19:
	cmp word ptr [esp+0x10],8
	mov dword ptr [esp+0x28],0xFFFFFFFF
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
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4

 Block22:
	lea edx,[esp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block23:
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
// CInputSystem::UpdateJoystick
__SUB_CLASS_THIS0(001713E0, __thiscall, 42293,  CInputSystem, void) {
__asm {

 Block0:
	sub esp,0x12C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x128],eax
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x9E0],0
	je Block58

 Block1:
	push edi
	mov edi,dword ptr [esi+0x10]
	test edi,edi
	je Block57

 Block2:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0x64]
	push edi
	call ecx
	test eax,eax
	jge Block6

 Block3:
	lea esp,[esp]

 Block4:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x1C]
	push edi
	call eax
	cmp eax,0x8007001E
	je Block4

 Block5:
	pop edi
	pop esi
	mov ecx,dword ptr [esp+0x128]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x12C
	ret

 Block6:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x24]
	lea edx,[esp+0x14]
	push edx
	push 0x110
	push edi
	call eax
	test eax,eax
	jge Block8

 Block7:
	mov ecx,esi
	call CInputSystem::ResetJoystickData
	mov ecx,esi
	call CInputSystem::DestroyJoystickDevice
	pop edi
	pop esi
	mov ecx,dword ptr [esp+0x128]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x12C
	ret

 Block8:
	call dword ptr [ZImports::_timeGetTime]
	mov dword ptr [esp+0xC],eax
	mov eax,dword ptr [esp+0x14]
	cmp eax,0x2BC
	jl Block10

 Block9:
	mov eax,0x3E8
	jmp Block12

 Block10:
	mov ecx,eax
	neg ecx
	cmp ecx,0x2BC
	jl Block13

 Block11:
	mov eax,0xFFFFFC18

 Block12:
	mov dword ptr [esp+0x14],eax

 Block13:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,0x2BC
	jl Block15

 Block14:
	mov ecx,0x3E8
	jmp Block17

 Block15:
	mov edx,ecx
	neg edx
	cmp edx,0x2BC
	jl Block18

 Block16:
	mov ecx,0xFFFFFC18

 Block17:
	mov dword ptr [esp+0x18],ecx

 Block18:
	cmp dword ptr [esi+0x9E4],eax
	je Block30

 Block19:
	mov dword ptr [esi+0x9E4],eax
	cmp eax,0x3E8
	jne Block21

 Block20:
	push 0
	mov byte ptr [esi+0x9EF],1
	mov byte ptr [esi+0x9EE],0
	push 3
	jmp Block23

 Block21:
	cmp eax,0xFFFFFC18
	jne Block24

 Block22:
	push 0
	mov byte ptr [esi+0x9EE],1
	mov byte ptr [esi+0x9EF],0
	push 2

 Block23:
	push 0x500
	mov ecx,esi
	call CInputSystem::AddISMessage
	mov ecx,dword ptr [esp+0x18]
	jmp Block30

 Block24:
	cmp byte ptr [esi+0x9EE],1
	jne Block26

 Block25:
	push 1
	push 2
	jmp Block28

 Block26:
	cmp byte ptr [esi+0x9EF],1
	jne Block29

 Block27:
	push 1
	push 3

 Block28:
	push 0x501
	mov ecx,esi
	call CInputSystem::AddISMessage
	mov ecx,dword ptr [esp+0x18]

 Block29:
	mov byte ptr [esi+0x9EF],0
	mov byte ptr [esi+0x9EE],0

 Block30:
	cmp dword ptr [esi+0x9E8],ecx
	je Block41

 Block31:
	mov dword ptr [esi+0x9E8],ecx
	cmp ecx,0x3E8
	jne Block33

 Block32:
	push 0
	push 1
	push 0x500
	mov ecx,esi
	mov byte ptr [esi+0x9ED],1
	mov byte ptr [esi+0x9EC],0
	call CInputSystem::AddISMessage
	jmp Block41

 Block33:
	cmp ecx,0xFFFFFC18
	jne Block35

 Block34:
	push 0
	push 0
	push 0x500
	mov ecx,esi
	mov byte ptr [esi+0x9EC],1
	mov byte ptr [esi+0x9ED],0
	call CInputSystem::AddISMessage
	jmp Block41

 Block35:
	cmp byte ptr [esi+0x9EC],1
	jne Block37

 Block36:
	push 1
	push 0
	jmp Block39

 Block37:
	cmp byte ptr [esi+0x9ED],1
	jne Block40

 Block38:
	push 1
	push 1

 Block39:
	push 0x501
	mov ecx,esi
	call CInputSystem::AddISMessage

 Block40:
	mov byte ptr [esi+0x9EC],0
	mov byte ptr [esi+0x9ED],0

 Block41:
	mov ecx,dword ptr [esi+0x9F0]
	mov edx,dword ptr [esi+0x9F4]
	lea eax,[esi+0x9F0]
	mov dword ptr [esp+0x124],ecx
	mov ecx,dword ptr [eax+8]
	mov dword ptr [esp+0x128],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [esp+0x12C],ecx
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x4C]
	push ebx
	mov dword ptr [eax+4],ecx
	push ebp
	mov edi,4
	lea ecx,[esp+0x12C]
	xor ebp,ebp
	sub ecx,edi
	mov dword ptr [eax+8],edx
	mov ebx,eax
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x10],0xC
	jmp Block43

 Block42:
	mov ecx,dword ptr [esp+0x18]

 Block43:
	mov al,byte ptr [ebx]
	cmp al,byte ptr [ecx+edi]
	je Block48

 Block44:
	lea ecx,[esi+0x9CC]
	test al,al
	js Block46

 Block45:
	call ZList<ISMSG>::AddTail_
	mov dword ptr [eax],0x501
	mov dword ptr [eax+8],1
	jmp Block47

 Block46:
	call ZList<ISMSG>::AddTail_
	mov dword ptr [eax],0x500
	mov dword ptr [eax+8],0
	mov ebp,edi

 Block47:
	mov dword ptr [eax+4],edi

 Block48:
	inc ebx
	inc edi
	sub dword ptr [esp+0x10],1
	jne Block42

 Block49:
	xor ecx,ecx
	cmp ebp,ecx
	je Block51

 Block50:
	mov eax,dword ptr [esp+0x14]
	neg ebp
	mov dword ptr [esi+0xA00],ebp
	mov dword ptr [esi+0x9FC],eax
	jmp Block56

 Block51:
	mov eax,dword ptr [esi+0xA00]
	cmp eax,ecx
	je Block56

 Block52:
	jge Block54

 Block53:
	neg eax

 Block54:
	cmp byte ptr [eax+esi+0x9EC],0
	jne Block56

 Block55:
	mov dword ptr [esi+0xA00],ecx
	mov dword ptr [esi+0x9FC],ecx

 Block56:
	pop ebp
	pop ebx

 Block57:
	pop edi

 Block58:
	mov ecx,dword ptr [esp+0x12C]
	pop esi
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x12C
	ret
}
}
// CInputSystem::IsJoyBtnPressed
__SUB_CLASS_THIS(0016FA90, __thiscall, 42296,  CInputSystem, int32_t, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0xF
	ja Block3

 Block1:
	cmp dword ptr [ecx+0x9E0],0
	je Block3

 Block2:
	xor edx,edx
	cmp byte ptr [eax+ecx+0x9EC],dl
	setne dl
	mov eax,edx
	ret 4

 Block3:
	xor eax,eax
	ret 4
}
}
// CInputSystem::EnumObjectsCallback
__SUB(0016FB50, __stdcall, 42340,  int32_t, const DIDEVICEOBJECTINSTANCEA*, void*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov eax,dword ptr [eax+0x18]
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	sub esp,0x18
	test al,3
	je Block3

 Block1:
	mov ecx,dword ptr [ecx+0x10]
	mov dword ptr [esp+8],eax
	lea eax,[esp]
	push eax
	mov dword ptr [esp+4],0x18
	mov dword ptr [esp+8],0x10
	mov dword ptr [esp+0x10],2
	mov dword ptr [esp+0x14],0xFFFFFC18
	mov dword ptr [esp+0x18],0x3E8
	mov edx,dword ptr [ecx]
	push 4
	push ecx
	mov ecx,dword ptr [edx+0x18]
	call ecx
	test eax,eax
	jge Block5

 Block2:
	xor eax,eax
	add esp,0x18
	ret 8

 Block3:
	test al,0xC
	je Block5

 Block4:
	inc dword ptr [ecx+0xA0C]

 Block5:
	mov eax,1
	add esp,0x18
	ret 8
}
}
// CInputSystem::IsJoystickEnabled
__SUB_CLASS_THIS0(0016FA80, __thiscall, 42312,  CInputSystem, int32_t) {
__asm {

 Block0:
	xor eax,eax
	cmp dword ptr [ecx+0x10],eax
	setne al
	ret
}
}
// CInputSystem::AddISMessage
__SUB_CLASS_THIS(00170BB0, __thiscall, 42324,  CInputSystem, void, uint32_t, uint32_t, long) {
__asm {

 Block0:
	add ecx,0x9CC
	call ZList<ISMSG>::AddTail_
	mov ecx,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [eax+4],edx
	mov dword ptr [eax+8],ecx
	ret 0xC
}
}
// CInputSystem::CInputSystem
_SUB_EXCEPTION_HANDLER(5C5D60)
__SUB_CLASS_THIS0(005C5D60, __thiscall, 42291,  CInputSystem, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5C5D60
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
	mov dword ptr [TSingleton<CInputSystem>::ms_pInstance],esi
	xor edi,edi
	mov dword ptr [esi+4],edi
	mov dword ptr [esi+0x92C],edi
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x978],edi
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push offset _x_com_ptr<IWzGr2DLayer>::_ctor_default
	push 0x11
	push 4
	lea eax,[esi+0x97C]
	push eax
	mov byte ptr [esp+0x2C],1
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x9C0],edi
	mov dword ptr [esi+0x9C4],0xFFFFFFFF
	mov dword ptr [esi+0x9C8],edi
	int 3// TODO: 	mov dword ptr [esi+0x9CC],offset ZList<ISMSG>::`vftable'
	mov dword ptr [esi+0x9D4],edi
	mov dword ptr [esi+0x9D8],edi
	mov dword ptr [esi+0x9DC],edi
	mov dword ptr [esi+0xA10],edi
	xor eax,eax
	mov dword ptr [esi+8],eax
	mov dword ptr [esi+0xC],eax
	mov dword ptr [esi+0x10],eax
	mov dword ptr [esi+0x14],edi
	mov dword ptr [esi+0x18],edi
	mov dword ptr [esi+0x1C],edi
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
// CInputSystem::SetMouseSpeed
__SUB_CLASS_THIS(001717C0, __thiscall, 42307,  CInputSystem, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,dword ptr [ecx+0xA14]
	cmp eax,0x1388
	jl Block2

 Block1:
	call CInputSystem::DetectJoystick

 Block2:
	ret 4
}
}
