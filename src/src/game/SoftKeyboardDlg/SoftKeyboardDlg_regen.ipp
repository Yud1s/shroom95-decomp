#include "regen.hpp"
// SoftKeyboardDlg.ipp
#include "SoftKeyboardDlg.hpp"

// CSoftKeyboardDlg::OnKey
__SUB_CLASS_THIS(00316E20, __thiscall, 80301,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	cmp edi,0xD
	jne Block3

 Block1:
	test ebx,ebx
	js Block3

 Block2:
	lea ecx,[esi-4]
	call CSoftKeyboardDlg::CheckResultText
	test eax,eax
	je Block4

 Block3:
	push ebx
	push edi
	mov ecx,esi
	call CDialog::OnKey

 Block4:
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CSoftKeyboardDlg::SetTooltip
_SUB_EXCEPTION_HANDLER(315B60)
__SUB_CLASS_THIS(00315B60, __thiscall, 80302,  CSoftKeyboardDlg, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_315B60
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
	mov eax,dword ptr [esp+0x1C]
	mov edx,dword ptr [edi+4]
	lea esi,[edi+4]
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	mov dword ptr [esp+0x18],0
	call eax
	mov edx,dword ptr [esi]
	add eax,0x2C
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,0x42
	push eax
	lea ecx,[edi+0x98]
	call CUIToolTip::SetToolTip_String
	call timeGetTime
	add eax,0x1388
	mov dword ptr [edi+0xAE0],eax
	jne Block2

 Block1:
	mov dword ptr [edi+0xAE0],1

 Block2:
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
	pop edi
	pop esi
	add esp,0xC
	ret 4
}
}
// CSoftKeyboardDlg::SetButton
_SUB_EXCEPTION_HANDLER(316E60)
__SUB_CLASS_THIS0(00316E60, __thiscall, 80297,  CSoftKeyboardDlg, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_316E60
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
	mov dword ptr [esp+0x1C],ecx
	xor ebx,ebx
	mov dword ptr [esp+0x58],ebx
	mov dword ptr [esp+0x4C],1
	mov dword ptr [esp+0x50],ebx
	mov dword ptr [esp+0x54],ebx
	lea edi,[ecx+0xAE4]
	mov dword ptr [esp+0x68],ebx
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x20],edi
	lea ebp,[ecx+0xBBC]
	jmp Block2

 Block1:
	mov edi,dword ptr [esp+0x20]

 Block2:
	mov ecx,dword ptr [ebp-0x50]
	cmp ecx,ebx
	je Block4

 Block3:
	push ebx
	push ebx
	call CCtrlWnd::Move
	mov ecx,dword ptr [ebp-0x50]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x24]
	add ecx,4
	push ebx
	call edx

 Block4:
	mov ecx,dword ptr [ebp]
	cmp ecx,ebx
	je Block6

 Block5:
	push ebx
	push ebx
	call CCtrlWnd::Move
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x24]
	add ecx,4
	push ebx
	call edx

 Block6:
	mov ecx,dword ptr [ebp+0x50]
	cmp ecx,ebx
	je Block8

 Block7:
	push ebx
	push ebx
	call CCtrlWnd::Move
	mov ecx,dword ptr [ebp+0x50]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x24]
	add ecx,4
	push ebx
	call edx

 Block8:
	mov ecx,edi
	call TSecType<long>::GetData
	cdq
	mov ecx,3
	idiv ecx
	mov ecx,edi
	mov esi,edx
	imul esi,0x27
	add esi,0xC
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x55555556
	imul ecx
	mov ecx,dword ptr [esp+0x1C]
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edi,eax
	mov eax,dword ptr [ecx+0xB5C]
	imul edi,0x23
	add edi,0x5E
	sub eax,ebx
	je Block33

 Block9:
	sub eax,1
	je Block22

 Block10:
	sub eax,1
	jne Block47

 Block11:
	mov ecx,dword ptr [ebp+0x50]
	cmp ecx,ebx
	je Block13

 Block12:
	push edi
	push esi
	call CCtrlWnd::Move
	mov eax,dword ptr [ebp+0x50]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 1
	call eax
	jmp Block47

 Block13:
	mov dword ptr [esp+0x24],ebx
	mov ecx,dword ptr [esp+0x18]
	push ecx
	lea edx,[esp+0x28]
	push offset _S_UILOGINIMGCOMMON__9
	push edx
	mov byte ptr [esp+0x74],9
	call ZXString16::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],ebx
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x68],0xB
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block15:
	mov eax,dword ptr [esp+0x18]
	push ebx
	push edi
	mov edi,dword ptr [esp+0x30]
	push esi
	add eax,0x3FC
	push eax
	push edi
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,dword ptr [esp+0x34]
	add ecx,0xC60
	call CLayoutMan::AddButton
	mov esi,eax
	mov eax,dword ptr [esi+4]
	mov byte ptr [esp+0x68],0xC
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	cmp dword ptr [ebp+0x50],ebx
	je Block19

 Block18:
	push ebx
	lea ecx,[ebp+0x4C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+0x50],ebx

 Block19:
	mov edx,dword ptr [esi+4]
	mov dword ptr [ebp+0x50],edx
	mov byte ptr [esp+0x68],0xB
	cmp dword ptr [esp+0x38],ebx
	je Block21

 Block20:
	push ebx
	lea ecx,[esp+0x38]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x38],ebx

 Block21:
	mov ecx,dword ptr [ebp+0x50]
	add ecx,4
	jmp Block44

 Block22:
	mov ecx,dword ptr [ebp]
	cmp ecx,ebx
	je Block24

 Block23:
	push edi
	push esi
	call CCtrlWnd::Move
	mov eax,dword ptr [ebp]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	jmp Block47

 Block24:
	mov dword ptr [esp+0x2C],ebx
	mov eax,dword ptr [esp+0x18]
	push eax
	lea ecx,[esp+0x30]
	push offset _S_UILOGINIMGCOMMON__8
	push ecx
	mov byte ptr [esp+0x74],5
	call ZXString16::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],ebx
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x68],7
	cmp eax,ebx
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block26:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x1C]
	push ebx
	push edi
	mov edi,dword ptr [esp+0x30]
	push esi
	add edx,0x3F2
	push edx
	push edi
	lea eax,[esp+0x50]
	push eax
	add ecx,0xC60
	call CLayoutMan::AddButton
	mov esi,eax
	mov eax,dword ptr [esi+4]
	mov byte ptr [esp+0x68],8
	cmp eax,ebx
	je Block28

 Block27:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block28:
	cmp dword ptr [ebp],ebx
	je Block30

 Block29:
	push ebx
	lea ecx,[ebp-4]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp],ebx

 Block30:
	mov ecx,dword ptr [esi+4]
	mov dword ptr [ebp],ecx
	mov byte ptr [esp+0x68],7
	cmp dword ptr [esp+0x40],ebx
	je Block32

 Block31:
	push ebx
	lea ecx,[esp+0x40]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x40],ebx

 Block32:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 1
	call eax
	jmp Block45

 Block33:
	mov ecx,dword ptr [ebp-0x50]
	cmp ecx,ebx
	je Block35

 Block34:
	push edi
	push esi
	call CCtrlWnd::Move
	mov eax,dword ptr [ebp-0x50]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 1
	call eax
	jmp Block47

 Block35:
	mov dword ptr [esp+0x30],ebx
	mov ecx,dword ptr [esp+0x18]
	push ecx
	lea edx,[esp+0x34]
	push offset _S_UILOGINIMGCOMMON__7
	push edx
	mov byte ptr [esp+0x74],1
	call ZXString16::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],ebx
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x68],3
	cmp eax,ebx
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block37:
	mov eax,dword ptr [esp+0x18]
	push ebx
	push edi
	mov edi,dword ptr [esp+0x30]
	push esi
	add eax,0x3E8
	push eax
	push edi
	lea ecx,[esp+0x58]
	push ecx
	mov ecx,dword ptr [esp+0x34]
	add ecx,0xC60
	call CLayoutMan::AddButton
	mov esi,eax
	mov eax,dword ptr [esi+4]
	mov byte ptr [esp+0x68],4
	cmp eax,ebx
	je Block39

 Block38:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block39:
	cmp dword ptr [ebp-0x50],ebx
	je Block41

 Block40:
	push ebx
	lea ecx,[ebp-0x54]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp-0x50],ebx

 Block41:
	mov edx,dword ptr [esi+4]
	mov dword ptr [ebp-0x50],edx
	mov byte ptr [esp+0x68],3
	cmp dword ptr [esp+0x48],ebx
	je Block43

 Block42:
	push ebx
	lea ecx,[esp+0x48]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x48],ebx

 Block43:
	mov eax,dword ptr [ebp-0x50]
	lea ecx,[eax+4]

 Block44:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx

 Block45:
	mov byte ptr [esp+0x68],bl
	cmp edi,ebx
	je Block47

 Block46:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block47:
	mov eax,dword ptr [esp+0x18]
	add dword ptr [esp+0x20],0xC
	inc eax
	add ebp,8
	cmp eax,0xA
	mov dword ptr [esp+0x18],eax
	jl Block1

 Block48:
	mov ecx,dword ptr [esp+0x1C]
	push ebx
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CSoftKeyboardDlg::OnButtonClicked
__SUB_CLASS_THIS(00316C20, __thiscall, 80300,  CSoftKeyboardDlg, void, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	lea eax,[ebx-0x3E8]
	push esi
	mov esi,ecx
	cmp eax,9
	ja Block4

 Block1:
	mov ecx,dword ptr [esi+0xC5C]
	call CCtrlEditEx::EndSwitching
	mov ecx,dword ptr [esi+0xC5C]
	add bl,0x48
	movzx edx,bl
	mov dword ptr [ecx+0x88],0
	mov ecx,dword ptr [esi+0xC5C]
	push edx
	call CCtrlEditEx::SetSwitchingChar
	mov eax,dword ptr [esi+0xC5C]
	mov dword ptr [eax+0x88],1
	mov ecx,dword ptr [esi+0xC5C]
	call CCtrlEditEx::EndSwitching
	mov esi,dword ptr [esi+0xC5C]
	test esi,esi
	je Block3

 Block2:
	lea eax,[esi+4]
	pop esi
	pop ebx
	mov dword ptr [esp+4],eax
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	jmp  CWndMan::SetFocus

 Block3:
	pop esi
	xor eax,eax
	pop ebx
	mov dword ptr [esp+4],eax
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	jmp  CWndMan::SetFocus

 Block4:
	lea ecx,[ebx-0x3F2]
	cmp ecx,0x13
	ja Block15

 Block5:
	cmp ebx,0x3FB
	je Block12

 Block6:
	cmp ebx,0x405
	je Block12

 Block7:
	mov ecx,dword ptr [esi+0xC5C]
	call CCtrlEditEx::GetSwitchingChar
	cmp ebx,0x3FC
	sbb edx,edx
	inc edx
	mov byte ptr [esp+0xC],al
	push edx
	lea eax,[esp+0x10]
	push eax
	push ebx
	mov ecx,esi
	call CSoftKeyboardDlg::GetNextSwitchingChar
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [esi+0xC5C]
	call CCtrlEditEx::EndSwitching

 Block9:
	mov ecx,dword ptr [esi+0xC5C]
	mov edx,dword ptr [esp+0xC]
	mov dword ptr [ecx+0x88],0
	mov ecx,dword ptr [esi+0xC5C]
	push edx
	call CCtrlEditEx::SetSwitchingChar
	mov eax,dword ptr [esi+0xC5C]
	mov dword ptr [eax+0x88],1
	mov esi,dword ptr [esi+0xC5C]
	test esi,esi
	je Block11

 Block10:
	lea eax,[esi+4]
	pop esi
	pop ebx
	mov dword ptr [esp+4],eax
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	jmp  CWndMan::SetFocus

 Block11:
	pop esi
	xor eax,eax
	pop ebx
	mov dword ptr [esp+4],eax
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	jmp  CWndMan::SetFocus

 Block12:
	mov ecx,dword ptr [esi+0xC5C]
	call CCtrlEditEx::EndSwitching
	mov esi,dword ptr [esi+0xC5C]
	test esi,esi
	je Block14

 Block13:
	lea eax,[esi+4]
	pop esi
	pop ebx
	mov dword ptr [esp+4],eax
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	jmp  CWndMan::SetFocus

 Block14:
	pop esi
	xor eax,eax
	pop ebx
	mov dword ptr [esp+4],eax
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	jmp  CWndMan::SetFocus

 Block15:
	mov eax,ebx
	sub eax,1
	je Block25

 Block16:
	sub eax,0x405
	je Block19

 Block17:
	sub eax,1
	jne Block24

 Block18:
	jmp Block20

 Block19:
	mov ecx,dword ptr [esi+0xC5C]
	push 0
	call CCtrlEdit::DeleteString

 Block20:
	mov ecx,dword ptr [esi+0xC5C]
	call CCtrlEditEx::EndSwitching
	mov eax,dword ptr [esi+0xC5C]
	test eax,eax
	je Block22

 Block21:
	add eax,4
	jmp Block23

 Block22:
	xor eax,eax

 Block23:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus

 Block24:
	push ebx
	mov ecx,esi
	call CDialog::OnButtonClicked
	pop esi
	pop ebx
	ret 4

 Block25:
	mov ecx,esi
	call CSoftKeyboardDlg::CheckResultText
	test eax,eax
	je Block27

 Block26:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 1
	mov ecx,esi
	call eax

 Block27:
	pop esi
	pop ebx
	ret 4
}
}
// CSoftKeyboardDlg::OnCreate
_SUB_EXCEPTION_HANDLER(3162C0)
__SUB_CLASS_THIS(003162C0, __thiscall, 80298,  CSoftKeyboardDlg, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3162C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x70],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp+0x4C],ebx
	xor esi,esi
	push esi
	push esi
	lea ecx,[ebx+0xC60]
	push ebx
	call CLayoutMan::Init
	mov dword ptr [ebp+0x50],esi
	push 0xA
	push 0xA
	lea eax,[ebp+0x50]
	push esi
	push eax
	mov dword ptr [ebp-4],esi
	call get_random_unique_array
	add esp,0x10
	lea edi,[ebx+0xAE4]

 Block1:
	mov ecx,dword ptr [ebp+0x50]
	mov eax,dword ptr [ecx+esi*4]
	push eax
	mov ecx,edi
	call TSecType<long>::SetData
	inc esi
	add edi,0xC
	cmp esi,0xA
	jl Block1

 Block2:
	lea ecx,[ebp-0x88]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea edx,[ebp+0x60]
	push 0x1A25
	push edx
	mov byte ptr [ebp-4],1
	mov dword ptr [ebp-0x64],0
	mov dword ptr [ebp-0x6C],0xFF555555
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea eax,[ebp-0x74]
	cmp eax,edi
	je Block14

 Block3:
	mov esi,dword ptr [ebp-0x74]
	test esi,esi
	je Block12

 Block4:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block5:
	test esi,esi
	je Block11

 Block6:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block8:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block10

 Block9:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block10:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block11:
	mov dword ptr [ebp-0x74],0

 Block12:
	mov eax,dword ptr [edi]
	mov dword ptr [ebp-0x74],eax
	test eax,eax
	je Block14

 Block13:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov esi,dword ptr [ebp+0x60]
	test esi,esi
	je Block22

 Block15:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block22

 Block16:
	test esi,esi
	je Block22

 Block17:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block19:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block21

 Block20:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block21:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block22:
	mov eax,1
	mov dword ptr [ebp-0x60],eax
	mov dword ptr [ebp-0x5C],eax
	mov eax,dword ptr [ebx+0x94]
	push 0xC4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp-0x58],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x5C],eax
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block24

 Block23:
	mov ecx,eax
	call CCtrlEditEx::_ctor_default
	jmp Block25

 Block24:
	xor eax,eax

 Block25:
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block29

 Block26:
	add eax,8
	je Block29

 Block27:
	lea esi,[eax-8]
	test esi,esi
	je Block30

 Block28:
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	lea ecx,[esi+0xC]
	push ecx
	call edi
	jmp Block31

 Block29:
	xor esi,esi

 Block30:
	mov edi,dword ptr [ZImports::_InterlockedIncrement]

 Block31:
	mov eax,dword ptr [ebx+0xC5C]
	mov dword ptr [ebx+0xC5C],esi
	test eax,eax
	je Block35

 Block32:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block35

 Block33:
	lea eax,[esi+4]
	push eax
	call edi
	test esi,esi
	je Block35

 Block34:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block35:
	mov ecx,dword ptr [ebx+0xC5C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[ebp-0x88]
	push eax
	push 0xE
	push 0x76
	push 0x2F
	push 0xC
	push 0x409
	push ebx
	call edx
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp],0
	mov dword ptr [ebp+4],1
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x5C],eax
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block37

 Block36:
	mov ecx,eax
	call CCtrlTab::_ctor_default
	jmp Block38

 Block37:
	xor eax,eax

 Block38:
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block48

 Block39:
	add eax,8
	je Block48

 Block40:
	lea esi,[eax-8]
	test esi,esi
	je Block42

 Block41:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block42:
	mov eax,dword ptr [ebx+0xB64]
	mov dword ptr [ebx+0xB64],esi
	test eax,eax
	je Block46

 Block43:
	lea esi,[eax+8]
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block46

 Block44:
	lea edx,[esi+4]
	push edx
	call edi
	test esi,esi
	je Block46

 Block45:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block46:
	mov ecx,dword ptr [ebx+0xB64]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[ebp]
	push edx
	push 0x13
	push 0x77
	push 0x44
	push 0xB
	push 8
	push 0x408
	push ebx
	call eax
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x28]
	push ecx
	call esi
	lea edx,[ebp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	xor edi,edi
	add esp,8
	cmp eax,edi
	jge Block49

 Block47:
	push eax
	call _com_issue_error

 Block48:
	xor esi,esi
	jmp Block42

 Block49:
	lea eax,[ebp+0x38]
	push eax
	mov byte ptr [ebp-4],4
	call esi
	lea ecx,[ebp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	push edi
	push edi
	lea edx,[ebp+0x28]
	push edx
	lea eax,[ebp+0x38]
	push eax
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	mov bl,5
	push offset _S_UILOGINIMGCOMMON__6
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],6
	cmp dword ptr [_D_G_RM],edi
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x60],ebx
	cmp eax,edi
	je Block57

 Block54:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x58]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	cmp eax,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x58]
	cmp eax,edi
	mov dword ptr [ebp+0x60],ebx
	jge Block57

 Block55:
	cmp eax,0x80004002
	je Block57

 Block56:
	push eax
	call _com_issue_error

 Block57:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],9
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	cmp eax,edi
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	cmp word ptr [ebp+0x38],8
	mov byte ptr [ebp-4],0xA
	jne Block64

 Block62:
	mov eax,dword ptr [ebp+0x40]
	xor edx,edx
	mov word ptr [ebp+0x38],dx
	cmp eax,edi
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea eax,[ebp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block65:
	cmp word ptr [ebp+0x28],8
	mov byte ptr [ebp-4],0xB
	jne Block68

 Block66:
	mov eax,dword ptr [ebp+0x30]
	xor ecx,ecx
	mov word ptr [ebp+0x28],cx
	cmp eax,edi
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[ebp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	lea eax,[ebp+0x18]
	push eax
	call esi
	lea ecx,[ebp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block71

 Block70:
	push eax
	call _com_issue_error

 Block71:
	lea edx,[ebp+8]
	push edx
	mov byte ptr [ebp-4],0xC
	call esi
	lea eax,[ebp+8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block73

 Block72:
	push eax
	call _com_issue_error

 Block73:
	push edi
	push edi
	lea ecx,[ebp+0x18]
	push ecx
	lea edx,[ebp+8]
	push edx
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push offset _S_UILOGINIMGCOMMON__5
	mov byte ptr [ebp-4],0xD
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0xE
	cmp dword ptr [_D_G_RM],edi
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	lea eax,[ebp-0x4C]
	mov byte ptr [ebp-4],0xD
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp+0x58],edi
	cmp eax,edi
	je Block79

 Block76:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x64]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x64]
	cmp eax,edi
	mov dword ptr [ebp+0x58],ecx
	jge Block79

 Block77:
	cmp eax,0x80004002
	je Block79

 Block78:
	push eax
	call _com_issue_error

 Block79:
	mov esi,8
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x4C],si
	jne Block82

 Block80:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	cmp eax,edi
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block83:
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp+8],si
	jne Block86

 Block84:
	mov eax,dword ptr [ebp+0x10]
	xor ecx,ecx
	mov word ptr [ebp+8],cx
	cmp eax,edi
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea edx,[ebp+8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp+0x18],si
	jne Block90

 Block88:
	xor eax,eax
	mov word ptr [ebp+0x18],ax
	mov eax,dword ptr [ebp+0x20]
	cmp eax,edi
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov dword ptr [ebp+0x64],edi
	jmp Block95

 Block90:
	lea ecx,[ebp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	mov dword ptr [ebp+0x64],edi
	jmp Block95

 Block94:
	mov ebx,dword ptr [ebp+0x60]

 Block95:
	mov eax,0x20
	call __chkstk
	mov eax,0x20
	mov esi,esp
	call __chkstk
	mov edx,dword ptr [ebp+0x64]
	mov dword ptr [ebp+0x54],esp
	push 1
	push 0
	push 0
	push 0xA
	push esi
	push edx
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x14
	test ebx,ebx
	je Block52

 Block96:
	lea eax,[ebp-0x3C]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x6C],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block101

 Block97:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x48]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x48]
	test eax,eax
	je Block99

 Block98:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block99:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block101

 Block100:
	cmp edi,0x80004002
	jne Block120

 Block101:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [ebp+0x64]
	push 0
	push 0
	push 0xA
	push eax
	push ecx
	mov byte ptr [ebp-4],0x16
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x17
	test ecx,ecx
	je Block52

 Block102:
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],0x16
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x18
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x54],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block107

 Block103:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x5C]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x5C]
	test eax,eax
	je Block105

 Block104:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block105:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block107

 Block106:
	cmp edi,0x80004002
	jne Block120

 Block107:
	mov edi,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [edi+0xB64]
	mov byte ptr [ebp-4],0x19
	call CCtrlTab::AddItem_Canvas
	mov esi,8
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp-0x1C],si
	jne Block110

 Block108:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block111:
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x3C],si
	jne Block114

 Block112:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block115:
	mov eax,dword ptr [ebp+0x64]
	inc eax
	cmp eax,3
	mov dword ptr [ebp+0x64],eax
	jl Block94

 Block116:
	mov edx,dword ptr [edi+0xB5C]
	mov ecx,dword ptr [edi+0xB64]
	push edx
	call CCtrlTab::SetTab
	push 0
	push 0
	push 0
	push 0x406
	push offset _S_UILOGINIMGCOMMON__4
	lea eax,[ebp+0x68]
	lea esi,[edi+0xC60]
	push eax
	mov ecx,esi
	call CLayoutMan::AddButton
	mov eax,dword ptr [ebp+0x6C]
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	je Block125

 Block117:
	add eax,0xC
	push eax
	call ebx
	test eax,eax
	jne Block125

 Block118:
	mov eax,dword ptr [ebp+0x6C]
	test eax,eax
	je Block121

 Block119:
	add eax,8
	jmp Block122

 Block120:
	push edi
	call _com_issue_error

 Block121:
	xor eax,eax

 Block122:
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	add eax,4
	push eax
	call edi
	mov eax,dword ptr [ebp+0x6C]
	test eax,eax
	je Block126

 Block123:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block126

 Block124:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax
	jmp Block126

 Block125:
	mov edi,dword ptr [ZImports::_InterlockedIncrement]

 Block126:
	push 0
	push 0
	push 0
	push 0x407
	push offset _S_UILOGINIMGCOMMON__3
	lea ecx,[ebp+0x68]
	push ecx
	mov ecx,esi
	call CLayoutMan::AddButton
	mov eax,dword ptr [ebp+0x6C]
	test eax,eax
	je Block134

 Block127:
	add eax,0xC
	push eax
	call ebx
	test eax,eax
	jne Block134

 Block128:
	mov eax,dword ptr [ebp+0x6C]
	test eax,eax
	je Block130

 Block129:
	add eax,8
	jmp Block131

 Block130:
	xor eax,eax

 Block131:
	add eax,4
	push eax
	call edi
	mov eax,dword ptr [ebp+0x6C]
	test eax,eax
	je Block134

 Block132:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block134

 Block133:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block134:
	push 0
	push 0xEB
	push 0xE
	push 1
	push offset _S_UILOGINIMGCOMMON__2
	lea ecx,[ebp+0x68]
	push ecx
	mov ecx,esi
	call CLayoutMan::AddButton
	mov eax,dword ptr [ebp+0x6C]
	test eax,eax
	je Block142

 Block135:
	add eax,0xC
	push eax
	call ebx
	test eax,eax
	jne Block142

 Block136:
	mov eax,dword ptr [ebp+0x6C]
	test eax,eax
	je Block138

 Block137:
	add eax,8
	jmp Block139

 Block138:
	xor eax,eax

 Block139:
	add eax,4
	push eax
	call edi
	mov eax,dword ptr [ebp+0x6C]
	test eax,eax
	je Block142

 Block140:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block142

 Block141:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block142:
	push 0
	push 0xEB
	push 0x48
	push 2
	push offset _S_UILOGINIMGCOMMON__1
	lea ecx,[ebp+0x68]
	push ecx
	mov ecx,esi
	call CLayoutMan::AddButton
	mov eax,dword ptr [ebp+0x6C]
	test eax,eax
	je Block151

 Block143:
	add eax,0xC
	push eax
	call ebx
	test eax,eax
	jne Block150

 Block144:
	mov eax,dword ptr [ebp+0x6C]
	test eax,eax
	je Block146

 Block145:
	add eax,8
	jmp Block147

 Block146:
	xor eax,eax

 Block147:
	add eax,4
	push eax
	call edi
	mov eax,dword ptr [ebp+0x6C]
	test eax,eax
	je Block150

 Block148:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block150

 Block149:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block150:
	mov dword ptr [ebp+0x6C],0

 Block151:
	mov ecx,dword ptr [ebp+0x4C]
	mov eax,dword ptr [ecx+0xC5C]
	push eax
	call CWnd::SetFocusChild
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xB
	call edx
	mov eax,dword ptr [ebp+0x60]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],1
	call edx
	lea ecx,[ebp-0x88]
	mov byte ptr [ebp-4],0
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZArray<long>::RemoveAll
	lea esp,[ebp-0x98]
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
// CSoftKeyboardDlg::InitializeSecondaryPassword
_SUB_EXCEPTION_HANDLER(315ED0)
__SUB(00315ED0, __cdecl, 80305,  int32_t, ZXString<char>&, ZRef<CDialog>*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_315ED0
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
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x40],ebx
	mov dword ptr [esp+0x1C],ebx
	mov ebp,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x40],1
	mov dword ptr [esp+0x18],ebx

 Block1:
	push 0xC74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0x40],2
	cmp eax,ebx
	je Block23

 Block2:
	push 0x10
	push 6
	mov ecx,eax
	call CSoftKeyboardDlg::_ctor_0
	cmp eax,ebx
	je Block23

 Block3:
	add eax,8
	cmp eax,ebx
	je Block23

 Block4:
	lea edi,[eax-8]
	mov dword ptr [esp+0x2C],edi
	cmp edi,ebx
	je Block6

 Block5:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov byte ptr [esp+0x40],3
	cmp ebp,ebx
	je Block15

 Block7:
	cmp edi,ebx
	je Block24

 Block8:
	lea eax,[edi+8]
	cmp eax,ebx
	je Block24

 Block9:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block11

 Block10:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov eax,dword ptr [ebp+4]
	mov dword ptr [ebp+4],esi
	cmp eax,ebx
	je Block15

 Block12:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block15

 Block13:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block15

 Block14:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block15:
	mov ecx,edi
	call CDialog::DoModal
	cmp eax,1
	jne Block64

 Block16:
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,edi
	call CSoftKeyboardDlg::GetResult
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x44],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x40],3
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	cmp ebp,ebx
	je Block30

 Block19:
	mov eax,dword ptr [ebp+4]
	cmp eax,ebx
	je Block30

 Block20:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block29

 Block21:
	mov eax,dword ptr [ebp+4]
	cmp eax,ebx
	je Block25

 Block22:
	add eax,8
	jmp Block26

 Block23:
	xor edi,edi
	mov dword ptr [esp+0x2C],edi
	jmp Block6

 Block24:
	xor esi,esi
	jmp Block11

 Block25:
	xor eax,eax

 Block26:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebp+4]
	cmp eax,ebx
	je Block29

 Block27:
	lea ecx,[eax+8]
	cmp ecx,ebx
	je Block29

 Block28:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block29:
	mov dword ptr [ebp+4],ebx

 Block30:
	mov byte ptr [esp+0x40],1
	cmp edi,ebx
	je Block35

 Block31:
	lea esi,[edi+8]
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block34

 Block32:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block34

 Block33:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block34:
	mov dword ptr [esp+0x2C],ebx

 Block35:
	push 0xC74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0x40],5
	cmp eax,ebx
	je Block54

 Block36:
	push 0x10
	push 6
	mov ecx,eax
	call CSoftKeyboardDlg::_ctor_0
	cmp eax,ebx
	je Block54

 Block37:
	add eax,8
	cmp eax,ebx
	je Block54

 Block38:
	lea esi,[eax-8]
	mov dword ptr [esp+0x34],esi
	cmp esi,ebx
	je Block40

 Block39:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block40:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1045
	push ecx
	mov byte ptr [esp+0x4C],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,esi
	call CSoftKeyboardDlg::SetTooltip
	cmp ebp,ebx
	je Block49

 Block41:
	cmp esi,ebx
	je Block55

 Block42:
	lea eax,[esi+8]
	cmp eax,ebx
	je Block55

 Block43:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block45

 Block44:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block45:
	mov eax,dword ptr [ebp+4]
	mov dword ptr [ebp+4],edi
	cmp eax,ebx
	je Block49

 Block46:
	lea edi,[eax+8]
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block49

 Block47:
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block49

 Block48:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block49:
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,1
	jne Block66

 Block50:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	call CSoftKeyboardDlg::GetResult
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x44],7
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x40],6
	cmp eax,ebx
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block52:
	mov edx,dword ptr [esp+0x1C]
	push edx
	lea ecx,[esp+0x18]
	call ZXString<char>::Compare
	test eax,eax
	je Block56

 Block53:
	push ebx
	push 0x29
	call CLoginUtilDlg::Notice
	add esp,8
	jmp Block57

 Block54:
	xor esi,esi
	mov dword ptr [esp+0x34],esi
	jmp Block40

 Block55:
	xor edi,edi
	jmp Block45

 Block56:
	mov dword ptr [esp+0x18],1

 Block57:
	mov byte ptr [esp+0x40],1
	cmp esi,ebx
	je Block62

 Block58:
	add esi,8
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block61

 Block59:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block61

 Block60:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block61:
	mov dword ptr [esp+0x34],ebx

 Block62:
	cmp dword ptr [esp+0x18],ebx
	je Block1

 Block63:
	jmp Block69

 Block64:
	mov byte ptr [esp+0x40],1
	cmp edi,ebx
	je Block69

 Block65:
	lea ecx,[esp+0x28]
	jmp Block68

 Block66:
	mov byte ptr [esp+0x40],1
	cmp esi,ebx
	je Block69

 Block67:
	lea ecx,[esp+0x30]

 Block68:
	push ebx
	call ZRef<CSoftKeyboardDlg>::_ReleaseRaw

 Block69:
	cmp ebp,ebx
	je Block72

 Block70:
	cmp dword ptr [ebp+4],ebx
	je Block72

 Block71:
	push ebx
	mov ecx,ebp
	call ZRef<CDialog>::_ReleaseRaw
	mov dword ptr [ebp+4],ebx

 Block72:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [esp+0x4C]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x40],bl
	cmp eax,ebx
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block74:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	cmp eax,ebx
	je Block76

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block76:
	mov eax,dword ptr [esp+0x18]
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
// CSoftKeyboardDlg::OnTabChanged
__SUB_CLASS_THIS(00317280, __thiscall, 80306,  CSoftKeyboardDlg, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xC5C]
	mov dword ptr [esi+0xB5C],eax
	call CCtrlEditEx::EndSwitching
	mov ecx,esi
	call CSoftKeyboardDlg::SetButton
	pop esi
	ret 4
}
}
// CSoftKeyboardDlg::CheckResultText
_SUB_EXCEPTION_HANDLER(315D60)
__SUB_CLASS_THIS0(00315D60, __thiscall, 80309,  CSoftKeyboardDlg, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_315D60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ecx,dword ptr [edi+0xC5C]
	lea eax,[esp+0x14]
	push eax
	call CCtrlEdit::GetText
	mov ebp,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],0
	test ebp,ebp
	je Block2

 Block1:
	mov eax,dword ptr [ebp-4]
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	cmp eax,dword ptr [edi+0x90]
	jge Block13

 Block4:
	lea ecx,[esp+0x18]
	push 0x1044
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x10],0
	mov edx,dword ptr [edi+0x90]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0x30],2
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	mov edx,dword ptr [edi+4]
	lea esi,[edi+4]
	add esp,0xC
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	add eax,0x2C
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,0x42
	push eax
	lea ecx,[edi+0x98]
	call CUIToolTip::SetToolTip_String
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x24],1
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	call timeGetTime
	add eax,0x1388
	mov dword ptr [edi+0xAE0],eax
	jne Block10

 Block9:
	mov dword ptr [edi+0xAE0],1

 Block10:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test ebp,ebp
	je Block12

 Block11:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block12:
	xor eax,eax
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x18
	ret

 Block13:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test ebp,ebp
	je Block15

 Block14:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov eax,1
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x18
	ret
}
}
// CSoftKeyboardDlg::GetResult
__SUB_CLASS_THIS0(001D5370, __thiscall, 80303,  CSoftKeyboardDlg, ZXString<char>) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [ecx+0xC5C]
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	mov dword ptr [esp+8],0
	call CCtrlEdit::GetText
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CSoftKeyboardDlg::OnChildNotify
__SUB_CLASS_THIS(003172B0, __thiscall, 80299,  CSoftKeyboardDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,0x408
	jne Block3

 Block1:
	cmp edx,0x1F4
	jne Block3

 Block2:
	mov eax,dword ptr [esp+0xC]
	push eax
	call CSoftKeyboardDlg::OnTabChanged
	ret 0xC

 Block3:
	cmp edx,0x64
	jne Block5

 Block4:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax

 Block5:
	ret 0xC
}
}
// CSoftKeyboardDlg::Update
__SUB_CLASS_THIS0(00315880, __thiscall, 80297,  CSoftKeyboardDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call timeGetTime
	mov ecx,dword ptr [esi+0xAE0]
	test ecx,ecx
	je Block3

 Block1:
	sub eax,ecx
	test eax,eax
	jle Block3

 Block2:
	lea ecx,[esi+0x98]
	call CUIToolTip::ClearToolTip

 Block3:
	mov ecx,esi
	pop esi
	jmp  CWnd::Update
}
}
// CSoftKeyboardDlg::GetNextSwitchingChar
__SUB_CLASS_THIS(003158B0, __thiscall, 80308,  CSoftKeyboardDlg, int32_t, uint32_t, char&, int32_t) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x10]
	mov al,byte ptr [ebp]
	push esi
	push edi
	mov edi,dword ptr [esp+0x1C]
	mov ecx,edi
	neg ecx
	sbb cl,cl
	and cl,0xE0
	add cl,0x61
	test al,al
	je Block7

 Block1:
	movsx esi,al
	movsx eax,cl
	sub esi,eax
	mov eax,0x55555556
	imul esi
	mov eax,dword ptr [esp+0x14]
	mov ebx,edx
	shr ebx,0x1F
	add ebx,edx
	mov edx,edi
	neg edx
	sbb edx,edx
	and edx,0xA
	add edx,0x3F2
	sub eax,edx
	cmp eax,ebx
	jne Block7

 Block2:
	lea eax,[esi+1]
	cdq
	mov esi,3
	idiv esi
	mov al,bl
	mov bl,3
	imul bl
	add dl,al
	add dl,cl
	mov byte ptr [ebp],dl
	cmp dl,0x5B
	jne Block4

 Block3:
	pop edi
	pop esi
	mov byte ptr [ebp],0x59
	pop ebp
	xor eax,eax
	pop ebx
	ret 0xC

 Block4:
	cmp dl,0x7B
	jne Block6

 Block5:
	mov byte ptr [ebp],0x79

 Block6:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret 0xC

 Block7:
	mov al,byte ptr [esp+0x14]
	mov edx,edi
	neg edx
	sbb dl,dl
	and dl,0xA
	add dl,0xF2
	sub al,dl
	mov dl,3
	imul dl
	pop edi
	add al,cl
	pop esi
	mov byte ptr [ebp],al
	pop ebp
	mov eax,1
	pop ebx
	ret 0xC
}
}
// CSoftKeyboardDlg::~CSoftKeyboardDlg
_SUB_EXCEPTION_HANDLER(3159F0)
__SUB_CLASS_THIS0(003159F0, __thiscall, 80297,  CSoftKeyboardDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3159F0
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
	int 3// TODO: 	mov dword ptr [esi],offset CSoftKeyboardDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CSoftKeyboardDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CSoftKeyboardDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xC60]
	mov dword ptr [esp+0x18],7
	call CLayoutMan::~CLayoutMan
	cmp dword ptr [esi+0xC5C],0
	lea edi,[esi+0xC58]
	mov byte ptr [esp+0x18],6
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlEditEx>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	push offset ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	push 0xA
	push 8
	lea eax,[esi+0xC08]
	push eax
	mov byte ptr [esp+0x28],5
	call __eh_vector_dtor_iterator
	push offset ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	push 0xA
	push 8
	lea ecx,[esi+0xBB8]
	push ecx
	mov byte ptr [esp+0x28],4
	call __eh_vector_dtor_iterator
	push offset ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	push 0xA
	push 8
	lea edx,[esi+0xB68]
	push edx
	mov byte ptr [esp+0x28],3
	call __eh_vector_dtor_iterator
	cmp dword ptr [esi+0xB64],0
	lea edi,[esi+0xB60]
	mov byte ptr [esp+0x18],2
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlTab>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	push offset TSecType<long>::~TSecType<long>
	push 0xA
	push 0xC
	lea eax,[esi+0xAE4]
	push eax
	mov byte ptr [esp+0x28],1
	call __eh_vector_dtor_iterator
	lea ecx,[esi+0x98]
	mov byte ptr [esp+0x18],0
	call CUIToolTip::~CUIToolTip
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
// CSoftKeyboardDlg::CSoftKeyboardDlg
_SUB_EXCEPTION_HANDLER(315C10)
__SUB_CLASS_THIS(00315C10, __thiscall, 80295,  CSoftKeyboardDlg, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_315C10
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
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esi+0x94],ecx
	xor edi,edi
	lea ecx,[esi+0x98]
	mov dword ptr [esp+0x18],edi
	int 3// TODO: 	mov dword ptr [esi],offset CSoftKeyboardDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CSoftKeyboardDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CSoftKeyboardDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x90],eax
	call CUIToolTip::_ctor_default
	push offset TSecType<long>::~TSecType<long>
	push offset TSecType<long>::_ctor_default
	push 0xA
	push 0xC
	lea edx,[esi+0xAE4]
	push edx
	mov byte ptr [esp+0x2C],1
	mov dword ptr [esi+0xAE0],edi
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xB5C],edi
	mov dword ptr [esi+0xB64],edi
	push offset ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	push offset ZRef<CCtrlOriginButton>::_ctor_default
	push 0xA
	push 8
	lea eax,[esi+0xB68]
	push eax
	mov byte ptr [esp+0x2C],3
	call __eh_vector_ctor_iterator
	push offset ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	push offset ZRef<CCtrlOriginButton>::_ctor_default
	push 0xA
	push 8
	lea ecx,[esi+0xBB8]
	push ecx
	mov byte ptr [esp+0x2C],4
	call __eh_vector_ctor_iterator
	push offset ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	push offset ZRef<CCtrlOriginButton>::_ctor_default
	push 0xA
	push 8
	lea edx,[esi+0xC08]
	push edx
	mov byte ptr [esp+0x2C],5
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xC5C],edi
	mov dword ptr [esi+0xC60],edi
	mov dword ptr [esi+0xC64],edi
	mov dword ptr [esi+0xC68],edi
	mov dword ptr [esi+0xC6C],edi
	mov dword ptr [esi+0xC70],edi
	push 1
	push edi
	push 1
	push offset _S_UILOGINIMGCOMMON
	mov ecx,esi
	mov byte ptr [esp+0x28],8
	call CDialog::CreateDlg_2
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
