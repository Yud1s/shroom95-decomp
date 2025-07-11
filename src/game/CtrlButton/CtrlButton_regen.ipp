#include "regen.hpp"
// CtrlButton.ipp
#include "CtrlButton.hpp"

// CCtrlButton::LoadToolTipbyString
__SUB_CLASS_THIS(000D4990, __thiscall, 6379,  CCtrlButton, void, const char*, int32_t, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	push eax
	lea ecx,[esi+0x84]
	call ZXString<char>::AssignCStr
	push offset _S_
	lea ecx,[esi+0x88]
	call ZXString<char>::AssignCStr
	mov ecx,dword ptr [esp+0xC]
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [esi+0x7C],ecx
	mov dword ptr [esi+0x80],edx
	pop esi
	ret 0xC
}
}
// CCtrlButton::MouseEnter
_SUB_EXCEPTION_HANDLER(D6DA0)
__SUB_CLASS_THIS(000D6DA0, __thiscall, 6385,  CCtrlButton, void, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D6DA0
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
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esi+4]
	call edx
	test eax,eax
	je Block23

 Block1:
	cmp dword ptr [esi+0x58],0
	jne Block23

 Block2:
	mov ebx,dword ptr [esp+0x20]
	mov edi,dword ptr [esp+0x24]
	mov eax,ebx
	neg eax
	sbb eax,eax
	and eax,esi
	mov dword ptr [CCtrlButton::m_pButtonEntered],eax
	test ebx,ebx
	je Block10

 Block3:
	test edi,edi
	jne Block10

 Block4:
	mov eax,dword ptr [esi+0x24]
	test eax,eax
	je Block8

 Block5:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x48]
	push offset CUIStatusBar::ms_RTTI_CUIStatusBar
	call eax
	test eax,eax
	je Block8

 Block6:
	cmp dword ptr [esi+0x24],edi
	je Block8

 Block7:
	cmp dword ptr [esi+0x14],0x3E8
	lea eax,[edi+6]
	je Block9

 Block8:
	mov eax,4

 Block9:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push eax
	call CInputSystem::SetCursorState

 Block10:
	cmp dword ptr [esi+0x54],0
	jne Block23

 Block11:
	cmp dword ptr [esi+0x50],0
	mov ecx,esi
	je Block15

 Block12:
	test ebx,ebx
	je Block20

 Block13:
	push 1
	call CCtrlButton::ChangeDisplayState
	test edi,edi
	jne Block23

 Block14:
	push 1
	jmp Block22

 Block15:
	test ebx,ebx
	je Block20

 Block16:
	push 3
	call CCtrlButton::ChangeDisplayState
	test edi,edi
	jne Block23

 Block17:
	lea ecx,[esp+0x20]
	push 0x5D1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x1C],edi
	call play_ui_sound
	mov eax,dword ptr [esp+0x24]
	add esp,4
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	push 1
	jmp Block22

 Block20:
	push 0
	call CCtrlButton::ChangeDisplayState
	test edi,edi
	jne Block23

 Block21:
	push edi

 Block22:
	push 0x65
	mov ecx,esi
	call CCtrlWnd::NotifyToParent

 Block23:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 8
}
}
// CCtrlButton::GetPropFocusFrame
__SUB_CLASS_THIS0(0041CAA0, __thiscall, 6384,  CCtrlButton, _x_com_ptr<IWzProperty>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x64]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CCtrlButton::SetEnable
__SUB_CLASS_THIS(000D5210, __thiscall, 6366,  IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push edi
	call edx
	mov edi,dword ptr [esp+0xC]
	cmp eax,edi
	je Block2

 Block1:
	xor eax,eax
	mov dword ptr [esi+0x4C],eax
	mov dword ptr [esi+0x50],eax
	mov eax,edi
	neg eax
	sbb eax,eax
	and eax,0xFFFFFFFE
	add eax,2
	push eax
	lea ecx,[esi-4]
	call CCtrlButton::ChangeDisplayState

 Block2:
	push edi
	mov ecx,esi
	call CCtrlWnd::SetEnable
	pop edi
	pop esi
	ret 4
}
}
// CCtrlCheckBox::IsKindOf
__SUB_CLASS_THIS(00089330, __thiscall, 6512,  CCtrlCheckBox, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CCtrlCheckBox::ms_RTTI_CCtrlCheckBox
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
// CCtrlOriginButton::GetRect
_SUB_EXCEPTION_HANDLER(D6260)
__SUB_CLASS_THIS0(000D6260, __thiscall, 6455,  CCtrlOriginButton, tagRECT) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D6260
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebp,dword ptr [esp+0x28]
	push ebp
	call CCtrlWnd::GetRect
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call CCtrlButton::GetButtonCanvas
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0
	test eax,eax
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x10]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x74]
	mov dword ptr [esp+0x18],0
	call eax
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [esp+0x28]
	mov esi,dword ptr [esp+0x10]
	test eax,eax
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x6C]
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block8:
	mov ecx,dword ptr [esp+0x14]
	neg esi
	push esi
	neg ecx
	push ecx
	push ebp
	call dword ptr [ZImports::_OffsetRect]
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block10:
	mov eax,ebp
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x14
	ret 4
}
}
// CCtrlCheckBox::CREATEPARAM::CREATEPARAM
_SUB_EXCEPTION_HANDLER(88990)
__SUB_CLASS_THIS0(00088990, __thiscall, 6524,  CCtrlCheckBox::CREATEPARAM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_88990
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
	mov dword ptr [esp+0x18],esi
	lea ecx,[esi+8]
	xor ebx,ebx
	mov dword ptr [ecx],ebx
	lea edi,[esi+0xC]
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [edi],ebx
	push offset _S_
	mov byte ptr [esp+0x28],1
	mov dword ptr [esi],1
	mov dword ptr [esi+4],0xFFFFFFFF
	call ZXString<char>::AssignCStr
	lea eax,[esp+0x14]
	push 0x1A25
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,eax
	cmp edi,ebp
	je Block5

 Block1:
	mov ecx,dword ptr [edi]
	cmp ecx,ebx
	je Block3

 Block2:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],ebx

 Block3:
	mov eax,dword ptr [ebp]
	mov dword ptr [edi],eax
	cmp eax,ebx
	je Block5

 Block4:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	je Block7

 Block6:
	call _xbstr_t::Data_t::Release

 Block7:
	mov dword ptr [esi+0x10],0xC
	mov dword ptr [esi+0x14],0xFF000000
	mov dword ptr [esi+0x18],ebx
	mov dword ptr [esi+0x1C],ebx
	mov dword ptr [esi+0x20],ebx
	mov dword ptr [esi+0x24],1
	mov dword ptr [esi+0x28],ebx
	mov dword ptr [esi+0x2C],ebx
	mov dword ptr [esi+0x30],ebx
	mov eax,esi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret
}
}
// CCtrlButton::~CCtrlButton
_SUB_EXCEPTION_HANDLER(71980)
__SUB_CLASS_THIS0(00071980, __thiscall, 6361,  CCtrlButton, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_71980
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
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlButton::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlButton::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlButton::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xAD4]
	mov dword ptr [esp+0x14],6
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea ecx,[esi+0x8C]
	mov byte ptr [esp+0x14],5
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0x88]
	mov byte ptr [esp+0x14],4
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esi+0x84]
	mov byte ptr [esp+0x14],3
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	push offset _x_com_ptr<IWzProperty>::~_x_com_ptr<IWzProperty>
	push 4
	push 4
	lea eax,[esi+0x6C]
	push eax
	mov byte ptr [esp+0x24],2
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0x68]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x64]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CCtrlWnd::~CCtrlWnd
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CCtrlCheckBox::MouseDown
__SUB_CLASS_THIS0(000D4660, __thiscall, 6498,  CCtrlCheckBox, void) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x20]
	lea esi,[edi+4]
	mov ecx,esi
	call edx
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push esi
	call CWndMan::SetCaptureWnd
	mov ecx,edi
	pop edi
	pop esi
	jmp  CCtrlCheckBox::ChangeCheckBoxState

 Block2:
	pop edi
	pop esi
	ret
}
}
// CCtrlButton::OnMouseMove
__SUB_CLASS_THIS(000D7AD0, __thiscall, 6367,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0xC]
	mov eax,dword ptr [esi-4]
	mov eax,dword ptr [eax+0x18]
	push edi
	lea edi,[esi-4]
	push ecx
	push edx
	mov ecx,edi
	call eax
	test eax,eax
	je Block3

 Block1:
	cmp dword ptr [esi+0x44],0
	jne Block5

 Block2:
	push 0
	push 1
	mov ecx,edi
	mov dword ptr [esi+0x44],1
	call CCtrlButton::MouseEnter
	pop edi
	xor eax,eax
	pop esi
	ret 8

 Block3:
	cmp dword ptr [esi+0x44],0
	je Block5

 Block4:
	push 0
	push 0
	mov ecx,edi
	mov dword ptr [esi+0x44],0
	call CCtrlButton::MouseEnter

 Block5:
	pop edi
	xor eax,eax
	pop esi
	ret 8
}
}
// CCtrlCheckBox::Draw
_SUB_EXCEPTION_HANDLER(D6360)
__SUB_CLASS_THIS(000D6360, __thiscall, 6504,  CCtrlCheckBox, void, long, long, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D6360
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
	push 0
	lea eax,[esp+0x18]
	push eax
	call CCtrlWnd::GetCanvas
	mov edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x40],0
	test edi,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi+0x3C]
	mov ecx,dword ptr [esi+0x20]
	mov edx,dword ptr [esi+0x1C]
	mov ebx,dword ptr [esp+0x48]
	mov ebp,dword ptr [edi]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x54]
	push edx
	mov edx,dword ptr [ebp+0x8C]
	push ecx
	push ebx
	push edi
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,3
	mov word ptr [esp+0x18],ax
	mov dword ptr [esp+0x20],0xFF
	cmp dword ptr [esi+0x38],0
	mov byte ptr [esp+0x40],1
	jne Block6

 Block5:
	lea edx,[ebx+2]
	jmp Block7

 Block6:
	mov ecx,dword ptr [esi+0x1C]
	lea edx,[ecx+ebx-0xC]

 Block7:
	mov eax,dword ptr [esi+0x34]
	mov ecx,dword ptr [esi+eax*4+0x5C]
	mov ebx,dword ptr [esp+0x18]
	mov ebp,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x34]
	push ecx
	mov dword ptr [eax+0xC],ebx
	mov ebx,dword ptr [esp+0x60]
	lea ecx,[ebx+1]
	push ecx
	push edx
	mov edx,dword ptr [ebp+0x80]
	push edi
	call edx
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block9:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x40],0
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push edx
	call ebp
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x44],2
	call ebp
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esi+4]
	mov byte ptr [esp+0x40],3
	call edx
	test eax,eax
	lea eax,[esi+0x4C]
	jne Block19

 Block18:
	lea eax,[esi+0x50]

 Block19:
	cmp dword ptr [esi+0x38],0
	mov ebp,dword ptr [esp+0x48]
	jne Block21

 Block20:
	add ebp,0x12

 Block21:
	mov eax,dword ptr [eax]
	lea ecx,[esp+0x28]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	push eax
	mov eax,dword ptr [esi+0x44]
	push ecx
	mov dword ptr [esp+0x58],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esi+0x70]
	mov edx,dword ptr [esi+0x6C]
	lea ecx,[eax+ebx+2]
	push ecx
	add edx,ebp
	mov byte ptr [esp+0x54],4
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x58],3
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x40],2
	cmp word ptr [esp+0x18],si
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov byte ptr [esp+0x40],0
	cmp word ptr [esp+0x28],si
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x44],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 0xC
}
}
// CCtrlCheckBox::MouseUp
__SUB_CLASS_THIS0(000D4690, __thiscall, 6498,  CCtrlCheckBox, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x20]
	push edi
	lea edi,[esi+4]
	mov ecx,edi
	call edx
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push edi
	call CWndMan::ReleaseCaptureWnd
	mov ecx,esi
	call CCtrlCheckBox::ChangeCheckBoxState
	mov edx,dword ptr [esi+0x48]
	mov ecx,dword ptr [esi+0x24]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	push edx
	mov edx,dword ptr [esi+0x14]
	push 0xC8
	push edx
	call eax

 Block2:
	pop edi
	pop esi
	ret
}
}
// CCtrlButton::OnMouseButton
__SUB_CLASS_THIS(000D6D10, __thiscall, 6365,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov edx,dword ptr [esp+0xC]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [esi-4]
	mov eax,dword ptr [eax+0x18]
	push edi
	lea edi,[esi-4]
	push ecx
	push edx
	mov ecx,edi
	call eax
	test eax,eax
	je Block5

 Block1:
	mov eax,dword ptr [esp+0xC]
	sub eax,0x201
	je Block4

 Block2:
	sub eax,1
	je Block6

 Block3:
	sub eax,1
	jne Block5

 Block4:
	mov ecx,edi
	call CCtrlButton::MouseDown

 Block5:
	pop edi
	pop esi
	ret 0x10

 Block6:
	mov eax,dword ptr [esi+0x20]
	test eax,eax
	je Block10

 Block7:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x48]
	push offset CUIStatusBar::ms_RTTI_CUIStatusBar
	call eax
	test eax,eax
	je Block10

 Block8:
	cmp dword ptr [esi+0x20],0
	je Block10

 Block9:
	cmp dword ptr [esi+0x10],0x3E8
	mov eax,6
	je Block11

 Block10:
	mov eax,4

 Block11:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push eax
	call CInputSystem::SetCursorState
	mov ecx,edi
	call CCtrlButton::MouseUp
	pop edi
	pop esi
	ret 0x10
}
}
// CCtrlButton::HitTest
__SUB_CLASS_THIS(000D44D0, __thiscall, 6370,  CCtrlButton, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x4C]
	mov edx,dword ptr [esp+4]
	cmp eax,edx
	jg Block5

 Block1:
	push esi
	mov esi,dword ptr [ecx+0x1C]
	sub esi,eax
	cmp edx,esi
	pop esi
	jge Block5

 Block2:
	mov edx,dword ptr [esp+8]
	cmp eax,edx
	jg Block5

 Block3:
	mov ecx,dword ptr [ecx+0x20]
	sub ecx,eax
	cmp edx,ecx
	jge Block5

 Block4:
	mov eax,1
	ret 8

 Block5:
	xor eax,eax
	ret 8
}
}
// CCtrlButton::LoadToolTip
_SUB_EXCEPTION_HANDLER(D55E0)
__SUB_CLASS_THIS(000D55E0, __thiscall, 6373,  CCtrlButton, void, const wchar_t*, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D55E0
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
	mov ebp,ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor edi,edi
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x64],edi
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov eax,dword ptr [esp+0x68]
	push edi
	push edi
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,1
	push eax
	mov byte ptr [esp+0x78],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x74],2
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x4C]
	push ecx
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x68],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x6C]
	mov dword ptr [esp+0x6C],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edi,8
	mov byte ptr [esp+0x60],5
	cmp word ptr [esp+0x38],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0x60],6
	cmp word ptr [esp+0x18],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov bl,7
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x28],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov esi,dword ptr [esp+0x68]
	test esi,esi
	sete al
	test al,al
	je Block24

 Block22:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	test esi,esi
	je Block42

 Block23:
	jmp Block41

 Block24:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x1A70
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x64],8
	test esi,esi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[esp+0x4C]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x68],bl
	call IWzProperty::Getitem
	mov byte ptr [esp+0x60],9
	cmp word ptr [eax],di
	jne Block28

 Block27:
	mov eax,dword ptr [eax+8]
	jmp Block29

 Block28:
	mov eax,offset _S___3

 Block29:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x84]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x48],di
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x5D3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x4C]
	mov byte ptr [esp+0x64],0xA
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x68],bl
	call IWzProperty::Getitem
	mov byte ptr [esp+0x60],0xB
	cmp word ptr [eax],di
	jne Block35

 Block34:
	mov eax,dword ptr [eax+8]
	jmp Block36

 Block35:
	mov eax,offset _S___3

 Block36:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x88]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x48],di
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov eax,dword ptr [esp+0x6C]
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr [ebp+0x7C],eax
	mov dword ptr [ebp+0x80],ecx
	mov dword ptr [esp+0x60],0xFFFFFFFF

 Block41:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block42:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 0xC
}
}
// CCtrlCheckBox::ChangeCheckBoxState
__SUB_CLASS_THIS0(000D4510, __thiscall, 6498,  CCtrlCheckBox, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esi+4]
	call edx
	test eax,eax
	je Block2

 Block1:
	xor eax,eax
	cmp dword ptr [esi+0x48],eax
	mov ecx,esi
	setne al
	mov dword ptr [esi+0x34],eax
	pop esi
	jmp  CCtrlWnd::InvalidateRect

 Block2:
	xor ecx,ecx
	cmp dword ptr [esi+0x48],ecx
	setne cl
	add ecx,2
	mov dword ptr [esi+0x34],ecx
	mov ecx,esi
	pop esi
	jmp  CCtrlWnd::InvalidateRect
}
}
// CCtrlCheckBox::CREATEPARAM::~CREATEPARAM
__SUB_CLASS_THIS0(00084710, __thiscall, 6526,  CCtrlCheckBox::CREATEPARAM, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xC]
	test ecx,ecx
	je Block2

 Block1:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0xC],0

 Block2:
	mov esi,dword ptr [esi+8]
	test esi,esi
	je Block4

 Block3:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block4:
	pop esi
	ret
}
}
// CCtrlButton::ChangeDisplayState
_SUB_EXCEPTION_HANDLER(D4E90)
__SUB_CLASS_THIS(000D4E90, __thiscall, 6371,  CCtrlButton, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D4E90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esp+0x3C],3
	jne Block6

 Block1:
	mov ecx,dword ptr [esi+0xAD4]
	lea eax,[esi+0xAD4]
	test ecx,ecx
	je Block4

 Block2:
	cmp byte ptr [ecx],0
	je Block4

 Block3:
	push 1
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x30]
	mov ebp,dword ptr [esi+0x1C]
	lea edi,[esi+4]
	mov ecx,edi
	mov dword ptr [esp+0x40],0
	call edx
	push eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	add eax,ebp
	push eax
	lea ecx,[esi+0x8C]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call CUIToolTip::SetToolTip_String_MultiLine
	jmp Block7

 Block4:
	cmp dword ptr [esi+0x7C],0
	je Block7

 Block5:
	mov edx,dword ptr [esi+0x80]
	mov eax,dword ptr [esi+0x88]
	mov ecx,dword ptr [esi+0x84]
	push edx
	push eax
	push ecx
	mov ecx,esi
	call CCtrlButton::SetToolTip
	jmp Block7

 Block6:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x34]
	lea ecx,[esi+4]
	call edx

 Block7:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esi+0x34],eax
	mov dword ptr [esi+0x38],0
	call get_update_time
	mov ecx,dword ptr [esi+0x34]
	mov dword ptr [esi+0x44],eax
	mov edi,dword ptr [esi+ecx*4+0x6C]
	lea eax,[esi+ecx*4+0x6C]
	test edi,edi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[esp+0x3C]
	push eax
	push edi
	mov dword ptr [esp+0x44],0
	call ecx
	test eax,eax
	jge Block11

 Block10:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block11:
	mov edx,dword ptr [esp+0x3C]
	lea eax,[esp+0x10]
	push eax
	mov ecx,esi
	mov dword ptr [esi+0x3C],edx
	call CCtrlButton::GetButtonCanvas
	push 0x78
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0x1AA9
	push ecx
	mov dword ptr [esp+0x44],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x18]
	mov byte ptr [esp+0x3C],2
	test ecx,ecx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea edx,[esp+0x1C]
	push edx
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x3C],3
	test ecx,ecx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],4
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],5
	call get_int32
	add esp,8
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esi+0x40],eax
	mov byte ptr [esp+0x34],4
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	cmp dword ptr [esi+0x24],0
	je Block23

 Block22:
	mov ecx,esi
	call CCtrlWnd::InvalidateRect

 Block23:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block25:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x28
	ret 4
}
}
// CCtrlButtonWithAniState::Animate
__SUB_CLASS_THIS(000D65D0, __thiscall, 6538,  CCtrlButtonWithAniState, void, int32_t, long) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	push esi
	mov esi,ecx
	push edi
	mov edi,dword ptr [esi+0x6C]
	je Block13

 Block1:
	mov eax,dword ptr [esi+0xADC]
	cmp edi,eax
	je Block6

 Block2:
	mov dword ptr [esi+0x6C],eax
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	test edi,edi
	je Block6

 Block5:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block6:
	mov eax,dword ptr [esi+0xADC]
	mov edi,dword ptr [esi+0x78]
	cmp edi,eax
	je Block11

 Block7:
	mov dword ptr [esi+0x78],eax
	test eax,eax
	je Block9

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block9:
	test edi,edi
	je Block11

 Block10:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block11:
	mov edi,dword ptr [esp+0x10]
	mov dword ptr [esi+0xAE8],1
	test edi,edi
	je Block24

 Block12:
	call get_update_time
	add eax,edi
	mov dword ptr [esi+0xAEC],eax
	mov eax,dword ptr [esi+0x34]
	push eax
	mov ecx,esi
	call CCtrlButton::ChangeDisplayState
	pop edi
	pop esi
	ret 8

 Block13:
	mov eax,dword ptr [esi+0xAE0]
	cmp edi,eax
	je Block18

 Block14:
	mov dword ptr [esi+0x6C],eax
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block16:
	test edi,edi
	je Block18

 Block17:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block18:
	mov eax,dword ptr [esi+0xAE4]
	mov edi,dword ptr [esi+0x78]
	cmp edi,eax
	je Block23

 Block19:
	mov dword ptr [esi+0x78],eax
	test eax,eax
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block21:
	test edi,edi
	je Block23

 Block22:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block23:
	mov dword ptr [esi+0xAE8],0

 Block24:
	mov eax,dword ptr [esi+0x34]
	push eax
	mov ecx,esi
	mov dword ptr [esi+0xAEC],0
	call CCtrlButton::ChangeDisplayState
	pop edi
	pop esi
	ret 8
}
}
// CCtrlButton::Draw
_SUB_EXCEPTION_HANDLER(D4CA0)
__SUB_CLASS_THIS(000D4CA0, __thiscall, 6368,  CCtrlButton, void, long, long, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D4CA0
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
	mov ebp,ecx
	xor esi,esi
	push esi
	lea eax,[esp+0x20]
	push eax
	call CCtrlWnd::GetCanvas
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x3C],esi
	call CCtrlButton::GetButtonCanvas
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x38],1
	cmp eax,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x40]
	lea ecx,[esp+0x18]
	push ecx
	push eax
	mov edi,eax
	mov dword ptr [esp+0x20],esi
	call edx
	cmp eax,esi
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block4:
	mov ebx,dword ptr [ebp+0x1C]
	sub ebx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x14]
	shr ebx,1
	cmp eax,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x18]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x48]
	mov dword ptr [esp+0x20],esi
	call eax
	cmp eax,esi
	jge Block8

 Block7:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block8:
	mov eax,dword ptr [ebp+0x20]
	mov edi,eax
	sub edi,dword ptr [esp+0x18]
	shr edi,1
	cmp dword ptr [ebp+0x5C],esi
	mov esi,dword ptr [esp+0x1C]
	je Block13

 Block9:
	test esi,esi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov ebp,dword ptr [ebp+0x1C]
	mov edx,dword ptr [esp+0x44]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push eax
	mov eax,dword ptr [esp+0x48]
	push ebp
	push edx
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block13

 Block12:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block13:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],ecx
	mov byte ptr [esp+0x38],2
	test esi,esi
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	mov ebp,dword ptr [esp+0x20]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x34]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x54]
	push eax
	mov eax,dword ptr [esp+0x54]
	add edi,ecx
	mov ecx,dword ptr [edx+0x80]
	push edi
	add ebx,eax
	push ebx
	push esi
	call ecx
	test eax,eax
	jge Block17

 Block16:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block17:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x38],1
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x38],0
	test eax,eax
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 0xC
}
}
// CCtrlButton::GetButtonCanvas
_SUB_EXCEPTION_HANDLER(D4B60)
__SUB_CLASS_THIS(000D4B60, __thiscall, 6383,  CCtrlButton, _x_com_ptr<IWzCanvas>*, _x_com_ptr<IWzCanvas>*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D4B60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
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
	xor ebx,ebx
	lea eax,[ebx+0x20]
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp-0x18],ebx
	call __chkstk
	mov ecx,dword ptr [esi+0x38]
	mov eax,esp
	push ebx
	push ebx
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov eax,dword ptr [esi+0x34]
	mov ecx,dword ptr [esi+eax*4+0x6C]
	lea eax,[esi+eax*4+0x6C]
	mov dword ptr [ebp-4],1
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x28]
	push edx
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	mov edi,dword ptr [ebp+8]
	push eax
	mov ecx,edi
	mov dword ptr [edi],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [ebp-0x28],8
	mov dword ptr [ebp-0x18],1
	mov byte ptr [ebp-4],bl
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	cmp eax,ebx
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp-0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	cmp dword ptr [esi+0x34],2
	jne Block14

 Block10:
	cmp dword ptr [esi+0xAD8],ebx
	je Block14

 Block11:
	mov eax,dword ptr [edi]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block13:
	call make_gray_canvas
	add esp,4

 Block14:
	mov eax,edi
	lea esp,[ebp-0x38]
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
// CCtrlCheckBox::OnMouseButton
__SUB_CLASS_THIS(000D4760, __thiscall, 6502,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x201
	push esi
	mov esi,ecx
	je Block4

 Block1:
	sub eax,1
	jne Block6

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	call edx
	test eax,eax
	je Block6

 Block3:
	xor eax,eax
	cmp dword ptr [esi+0x44],eax
	lea ecx,[esi-4]
	sete al
	mov dword ptr [esi+0x44],eax
	call CCtrlCheckBox::MouseUp
	pop esi
	ret 0x10

 Block4:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	call eax
	test eax,eax
	je Block6

 Block5:
	lea ecx,[esi-4]
	call CCtrlCheckBox::MouseDown

 Block6:
	pop esi
	ret 0x10
}
}
// CCtrlOriginButton::CreateCtrl
_SUB_EXCEPTION_HANDLER(D7B50)
__SUB_CLASS_THIS(000D7B50, __thiscall, 6452,  CCtrlOriginButton, void, CWnd*, uint32_t, long, long, long, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D7B50
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
	mov ebp,ecx
	mov edi,dword ptr [esp+0x78]
	mov eax,dword ptr [esp+0x74]
	mov ecx,dword ptr [esp+0x70]
	mov edx,dword ptr [esp+0x6C]
	push edi
	push eax
	mov eax,dword ptr [esp+0x70]
	push ecx
	mov ecx,dword ptr [esp+0x70]
	push edx
	push eax
	push ecx
	mov ecx,ebp
	call CCtrlButton::CreateCtrl
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x24]
	push edx
	call esi
	lea eax,[esp+0x24]
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
	lea ecx,[esp+0x14]
	push ecx
	mov dword ptr [esp+0x60],0
	call esi
	lea edx,[esp+0x14]
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
	push 0
	push 0
	lea eax,[esp+0x2C]
	push eax
	mov eax,dword ptr [edi+0xC]
	lea ecx,[esp+0x20]
	push ecx
	push ecx
	mov dword ptr [esp+0x8C],esp
	mov ecx,esp
	mov bl,1
	push eax
	mov byte ptr [esp+0x74],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x70],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x48]
	mov byte ptr [esp+0x70],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x64],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x7C]
	mov dword ptr [esp+0x7C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edi,8
	mov byte ptr [esp+0x5C],5
	cmp word ptr [esp+0x34],di
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0x5C],6
	cmp word ptr [esp+0x14],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov bl,7
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x24],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x80],esp
	mov ecx,esp
	push offset _S_CHECKED
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [esp+0x84]
	mov byte ptr [esp+0x68],8
	test esi,esi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea eax,[esp+0x50]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x6C],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x64],9
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xAE0]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block26

 Block24:
	cmp eax,0x80004002
	je Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x44],di
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0x60],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 0x18
}
}
// CCtrlButton::OnMouseEnter
__SUB_CLASS_THIS(000D7B30, __thiscall, 6366,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	jne Block2

 Block1:
	push 0
	mov dword ptr [ecx+0x44],0
	push 0
	add ecx,0xFFFFFFFC
	call CCtrlButton::MouseEnter

 Block2:
	ret 4
}
}
// CCtrlButton::LoadToolTipFromData
_SUB_EXCEPTION_HANDLER(D58E0)
__SUB_CLASS_THIS(000D58E0, __thiscall, 6380,  CCtrlButton, void, const wchar_t*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D58E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x58]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x10],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	call esi
	lea ecx,[esp+0x28]
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
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x64],0
	call esi
	lea eax,[esp+0x18]
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
	mov eax,dword ptr [esp+0x68]
	push 0
	push 0
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,1
	push eax
	mov byte ptr [esp+0x78],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x74],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x4C]
	push ecx
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x68],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x6C]
	mov dword ptr [esp+0x6C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edi,8
	mov byte ptr [esp+0x60],5
	cmp word ptr [esp+0x38],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0x60],6
	cmp word ptr [esp+0x18],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov bl,7
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x28],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov esi,dword ptr [esp+0x68]
	test esi,esi
	sete al
	test al,al
	je Block24

 Block22:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	test esi,esi
	je Block35

 Block23:
	jmp Block34

 Block24:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0xEAB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x64],8
	test esi,esi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[esp+0x4C]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x68],bl
	call IWzProperty::Getitem
	mov byte ptr [esp+0x60],9
	cmp word ptr [eax],di
	jne Block28

 Block27:
	mov eax,dword ptr [eax+8]
	jmp Block29

 Block28:
	mov eax,offset _S___3

 Block29:
	mov ecx,dword ptr [esp+0x10]
	push 0xFFFFFFFF
	add ecx,0xAD4
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x48],di
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov dword ptr [esp+0x60],0xFFFFFFFF

 Block34:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block35:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x54
	ret 4
}
}
// CCtrlCheckBox::SetChecked
__SUB_CLASS_THIS(000D4570, __thiscall, 6506,  CCtrlCheckBox, void, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esi+4]
	call edx
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [esp+8]
	mov ecx,esi
	mov dword ptr [esi+0x48],eax
	call CCtrlCheckBox::ChangeCheckBoxState

 Block2:
	pop esi
	ret 4
}
}
// CCtrlCheckBox::SetEnable
__SUB_CLASS_THIS(000D4550, __thiscall, 6505,  IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CCtrlWnd::SetEnable
	lea ecx,[esi-4]
	call CCtrlCheckBox::ChangeCheckBoxState
	pop esi
	ret 4
}
}
// CCtrlButton::GetRTTI
__SUB_CLASS_THIS0(00071860, __thiscall, 6389,  CCtrlButton, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CCtrlButton::ms_RTTI_CCtrlButton
	ret
}
}
// CCtrlButtonWithAniState::CreateCtrl
_SUB_EXCEPTION_HANDLER(D7DE0)
__SUB_CLASS_THIS(000D7DE0, __thiscall, 6534,  CCtrlButtonWithAniState, void, CWnd*, uint32_t, long, long, long, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D7DE0
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
	mov esi,ecx
	mov ebp,dword ptr [esp+0x78]
	mov eax,dword ptr [esp+0x74]
	mov ecx,dword ptr [esp+0x70]
	mov edx,dword ptr [esp+0x6C]
	push ebp
	push eax
	mov eax,dword ptr [esp+0x70]
	push ecx
	mov ecx,dword ptr [esp+0x70]
	push edx
	push eax
	push ecx
	mov ecx,esi
	call CCtrlButton::CreateCtrl
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x24]
	push edx
	call edi
	lea eax,[esp+0x24]
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
	lea ecx,[esp+0x14]
	push ecx
	mov dword ptr [esp+0x60],0
	call edi
	lea edx,[esp+0x14]
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
	push 0
	push 0
	lea eax,[esp+0x2C]
	push eax
	mov eax,dword ptr [ebp+0xC]
	lea ecx,[esp+0x20]
	push ecx
	push ecx
	mov dword ptr [esp+0x8C],esp
	mov ecx,esp
	mov bl,1
	push eax
	mov byte ptr [esp+0x74],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x70],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x48]
	mov byte ptr [esp+0x70],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x64],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x7C]
	mov dword ptr [esp+0x7C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edi,8
	mov byte ptr [esp+0x5C],5
	cmp word ptr [esp+0x34],di
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0x5C],6
	cmp word ptr [esp+0x14],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov bl,7
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x24],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x80],esp
	push 0x616
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [esp+0x84]
	mov byte ptr [esp+0x68],8
	test ebp,ebp
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea ecx,[esp+0x50]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x6C],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x64],9
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xADC]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block26

 Block24:
	cmp eax,0x80004002
	je Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x44],di
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov eax,dword ptr [esi+0x6C]
	mov edi,dword ptr [esi+0xAE0]
	cmp edi,eax
	je Block35

 Block31:
	mov dword ptr [esi+0xAE0],eax
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block33:
	test edi,edi
	je Block35

 Block34:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block35:
	mov eax,dword ptr [esi+0x78]
	mov edi,dword ptr [esi+0xAE4]
	cmp edi,eax
	je Block40

 Block36:
	mov dword ptr [esi+0xAE4],eax
	test eax,eax
	je Block38

 Block37:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block38:
	test edi,edi
	je Block40

 Block39:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block40:
	xor eax,eax
	mov dword ptr [esi+0xAE8],eax
	mov dword ptr [esi+0xAEC],eax
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov dword ptr [esp+0x60],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 0x18
}
}
// CCtrlCheckBox::OnMouseWheel
__SUB_CLASS_THIS(000D45A0, __thiscall, 6503,  IUIMsgHandler, int32_t, long, long, long) {
__asm {

 Block0:
	sub esp,8
	push edi
	mov edi,ecx
	cmp dword ptr [edi+0x20],0
	je Block10

 Block1:
	push esi
	mov esi,dword ptr [edi+0x14]
	test esi,esi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x70]
	lea ecx,[esp+8]
	push ecx
	push esi
	mov dword ptr [esp+0x10],0
	call edx
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block5:
	mov esi,dword ptr [edi+0x14]
	push ebx
	mov ebx,dword ptr [esp+0xC]
	test esi,esi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x68]
	lea ecx,[esp+0x10]
	push ecx
	push esi
	mov dword ptr [esp+0x18],0
	call edx
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block9:
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [edi+0x20]
	mov esi,dword ptr [esp+0x10]
	push edx
	mov edx,dword ptr [esp+0x20]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	add ebx,edx
	mov edx,dword ptr [esp+0x1C]
	push ebx
	add esi,edx
	push esi
	call eax
	pop ebx
	pop esi
	pop edi
	add esp,8
	ret 0xC

 Block10:
	xor eax,eax
	pop edi
	add esp,8
	ret 0xC
}
}
// CCtrlButton::ClearToolTip
__SUB_CLASS_THIS0(00071850, __thiscall, 6369,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0x88
	jmp  CUIToolTip::ClearToolTip
}
}
// CCtrlButton::SetShow
__SUB_CLASS_THIS(000D6EE0, __thiscall, 6366,  IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x14]
	push esi
	mov esi,ecx
	test ebp,ebp
	je Block3

 Block1:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push edi
	push 0
	lea eax,[esp+0x14]
	push eax
	call CWndMan::GetCursorPos
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	mov edi,dword ptr [esp+0x10]
	mov edx,dword ptr [esi]
	sub edi,eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esi-4]
	sub ecx,eax
	mov eax,dword ptr [edx+0x18]
	lea ebx,[esi-4]
	push ecx
	push edi
	mov ecx,ebx
	call eax
	pop edi
	test eax,eax
	je Block5

 Block2:
	push 0
	push 1
	mov ecx,ebx
	jmp Block4

 Block3:
	push 0
	push 0
	lea ecx,[esi-4]

 Block4:
	call CCtrlButton::MouseEnter

 Block5:
	push ebp
	mov ecx,esi
	call CCtrlWnd::SetShow
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 4
}
}
// CCtrlButton::SetSimpleToolTip
_SUB_EXCEPTION_HANDLER(D5B60)
__SUB_CLASS_THIS(000D5B60, __thiscall, 6377,  CCtrlButton, void, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D5B60
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
	xor ebx,ebx
	push ebx
	push 4
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x4C],1
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_LEFT__2]
	mov dword ptr [eax],ecx
	push 4
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	lea edx,[esp+0x14]
	push edx
	lea ecx,[esp+0x54]
	call ZXString<char>::op_eq_0
	mov edi,eax
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	cmp edi,ebx
	je Block14

 Block3:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov eax,dword ptr [esp+0x4C]
	mov edi,dword ptr [esi+0x24]
	lea edx,[esp+0x1C]
	push edx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x50],2
	add edi,4
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x1C]
	push ebx
	push ecx
	mov byte ptr [esp+0x54],3
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x4C],4
	cmp ecx,ebx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov byte ptr [esp+0x4C],5
	call IWzFont::CalcTextWidth
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x1C]
	mov ebp,eax
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	call edx
	mov ebx,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	mov ecx,dword ptr [ebx]
	sub ecx,ebp
	lea ebp,[eax+ecx-0xA]
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],2
	test eax,eax
	je Block9

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block9:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x44],1
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov eax,dword ptr [esi+0x24]
	lea edi,[eax+4]
	jmp Block18

 Block12:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov eax,dword ptr [esi+0x24]
	lea edi,[eax+4]
	jmp Block18

 Block14:
	push ebx
	push 5
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_RIGHT__1]
	mov dword ptr [eax],ecx
	mov dl,byte ptr [_S_RIGHT__1+4]
	push 5
	lea ecx,[esp+0x18]
	mov byte ptr [eax+4],dl
	call ZXString<char>::ReleaseBuffer
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x54]
	call ZXString<char>::op_eq_0
	mov edi,eax
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	cmp edi,ebx
	je Block24

 Block17:
	mov eax,dword ptr [esi+0x24]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x1C]
	lea edi,[eax+4]
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	call edx
	lea ebx,[eax+8]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	mov edi,dword ptr [esi+0x24]
	mov ebp,eax
	add ebp,dword ptr [ebx]
	add edi,4

 Block18:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x1C]
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	call edx
	lea ebx,[eax+4]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,edi
	call edx
	mov edi,eax
	add edi,dword ptr [ebx]
	cmp dword ptr [esp+0x54],0
	je Block20

 Block19:
	push 1
	push 0
	push ecx
	mov ecx,esp
	lea eax,[esp+0x58]
	mov dword ptr [esp+0x60],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push edi
	push ebp
	lea ecx,[esi+0x8C]
	call CUIToolTip::SetToolTip_String_MultiLine
	jmp Block21

 Block20:
	mov ecx,dword ptr [esp+0x4C]
	push ecx
	push edi
	push ebp
	lea ecx,[esi+0x8C]
	call CUIToolTip::SetToolTip_String

 Block21:
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x44],0
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	jmp Block27

 Block24:
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebx

 Block27:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret 0xC
}
}
// CCtrlButton::SetButtonImage
_SUB_EXCEPTION_HANDLER(D66D0)
__SUB_CLASS_THIS(000D66D0, __thiscall, 6382,  CCtrlButton, void, NakedParam<ZXString16>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D66D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x58]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	mov dword ptr [esp+0x64],0
	call esi
	lea ecx,[esp+0x28]
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
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x64],1
	call esi
	lea eax,[esp+0x18]
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
	mov eax,dword ptr [esp+0x68]
	push 0
	push 0
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov bl,2
	push eax
	mov byte ptr [esp+0x78],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x74],3
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x4C]
	push ecx
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x68],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x14],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ebx,8
	mov byte ptr [esp+0x60],6
	cmp word ptr [esp+0x38],bx
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0x60],7
	cmp word ptr [esp+0x18],bx
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x28],bx
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x5C6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x6C],9
	test esi,esi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea eax,[esp+0x54]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x70],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x68],0xA
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0x6C]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block26

 Block24:
	cmp eax,0x80004002
	je Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x48],bx
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x5C8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x54]
	push ecx
	mov byte ptr [esp+0x70],0xB
	mov ecx,esi
	mov byte ptr [esp+0x70],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x68],0xC
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0x70]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block33

 Block31:
	cmp eax,0x80004002
	je Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x48],bx
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block37:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x5CA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x54]
	mov byte ptr [esp+0x6C],0xD
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x70],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x68],0xE
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0x74]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block40

 Block38:
	cmp eax,0x80004002
	je Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x48],bx
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x5CC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x54]
	mov byte ptr [esp+0x6C],0xF
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x70],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x68],0x10
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0x78]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block47

 Block45:
	cmp eax,0x80004002
	je Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x48],bx
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	push 0
	mov ecx,edi
	call CCtrlButton::ChangeDisplayState
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x5CE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x54]
	push ecx
	mov byte ptr [esp+0x70],0x11
	mov ecx,esi
	mov byte ptr [esp+0x70],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x68],0x12
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0x64]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block54

 Block52:
	cmp eax,0x80004002
	je Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x48],bx
	jne Block57

 Block55:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0x64],0
	call edx
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	test eax,eax
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block60:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x54
	ret 4
}
}
// CCtrlButtonWithAniState::GetRTTI
__SUB_CLASS_THIS0(004238D0, __thiscall, 6541,  CCtrlButtonWithAniState, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CCtrlButtonWithAniState::ms_RTTI_CCtrlButtonWithAniState
	ret
}
}
// CCtrlButton::IsKindOf
__SUB_CLASS_THIS(00071950, __thiscall, 6390,  CCtrlButton, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CCtrlButton::ms_RTTI_CCtrlButton
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
// CCtrlCheckBox::CCtrlCheckBox
_SUB_EXCEPTION_HANDLER(89250)
__SUB_CLASS_THIS0(00089250, __thiscall, 6496,  CCtrlCheckBox, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_89250
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
	call CCtrlWnd::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlCheckBox::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlCheckBox::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlCheckBox::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x44],edi
	mov dword ptr [esi+0x48],edi
	mov dword ptr [esi+0x4C],edi
	mov dword ptr [esi+0x50],edi
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 4
	push 4
	lea eax,[esi+0x5C]
	push eax
	mov byte ptr [esp+0x2C],3
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x6C],edi
	mov dword ptr [esi+0x70],edi
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
// CCtrlButton::CREATEPARAM::~CREATEPARAM
__SUB_CLASS_THIS0(0002CB20, __thiscall, 6404,  CCtrlButton::CREATEPARAM, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xC]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	pop ecx

 Block2:
	ret
}
}
// CCtrlButtonWithAniState::IsKindOf
__SUB_CLASS_THIS(004238F0, __thiscall, 6542,  CCtrlButtonWithAniState, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CCtrlButtonWithAniState::ms_RTTI_CCtrlButtonWithAniState
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
// CCtrlButton::CREATEPARAM::CREATEPARAM
__SUB_CLASS_THIS0(0002C9F0, __thiscall, 6402,  CCtrlButton::CREATEPARAM, void) {
__asm {

 Block0:
	mov eax,ecx
	xor ecx,ecx
	mov dword ptr [eax+0xC],ecx
	mov dword ptr [eax],1
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	ret
}
}
// CCtrlOriginButton::HitTest
_SUB_EXCEPTION_HANDLER(D60E0)
__SUB_CLASS_THIS(000D60E0, __thiscall, 6454,  CCtrlOriginButton, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D60E0
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
	mov edi,ecx
	lea eax,[esp+0x14]
	push eax
	call CCtrlButton::GetButtonCanvas
	mov eax,dword ptr [esp+0x14]
	xor ebp,ebp
	mov dword ptr [esp+0x24],ebp
	cmp eax,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x18]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x6C]
	mov dword ptr [esp+0x20],ebp
	call eax
	cmp eax,ebp
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov ecx,dword ptr [edi+0x4C]
	sub ecx,dword ptr [esp+0x18]
	mov ebx,dword ptr [esp+0x2C]
	cmp ecx,ebx
	jg Block21

 Block5:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x6C]
	lea ecx,[esp+0x2C]
	push ecx
	push eax
	mov esi,eax
	mov dword ptr [esp+0x34],ebp
	call edx
	cmp eax,ebp
	jge Block9

 Block8:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block9:
	mov eax,dword ptr [edi+0x1C]
	sub eax,dword ptr [edi+0x4C]
	sub eax,dword ptr [esp+0x2C]
	cmp ebx,eax
	jge Block21

 Block10:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x2C]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x74]
	mov dword ptr [esp+0x34],ebp
	call eax
	cmp eax,ebp
	jge Block14

 Block13:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	mov ecx,dword ptr [edi+0x4C]
	sub ecx,dword ptr [esp+0x2C]
	mov esi,dword ptr [esp+0x30]
	cmp ecx,esi
	jg Block21

 Block15:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	call IWzCanvas::Getcy
	mov edx,dword ptr [edi+0x20]
	sub edx,dword ptr [edi+0x4C]
	sub edx,eax
	cmp esi,edx
	jge Block21

 Block18:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,ebp
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov eax,1
	jmp Block24

 Block21:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,ebp
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
	xor eax,eax

 Block24:
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
// CCtrlButton::SetToolTip
_SUB_EXCEPTION_HANDLER(D49D0)
__SUB_CLASS_THIS(000D49D0, __thiscall, 6375,  CCtrlButton, void, const char*, const char*, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D49D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	cmp dword ptr [esp+0x3C],0
	mov ebx,dword ptr [esp+0x40]
	jne Block3

 Block1:
	test ebx,ebx
	jne Block3

 Block2:
	lea ecx,[edi+0x8C]
	call CUIToolTip::ClearToolTip
	jmp Block17

 Block3:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x1C]
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	call edx
	mov ecx,dword ptr [edi+0x24]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x2C]
	add ecx,4
	call edx
	mov ecx,dword ptr [edi+0x24]
	mov esi,eax
	add esi,dword ptr [esp+0x24]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x30]
	add ecx,4
	mov dword ptr [esp+0x40],esi
	call edx
	mov ecx,eax
	add ecx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x14],ecx
	test ebx,ebx
	je Block8

 Block4:
	mov eax,ebx
	lea ebp,[eax+1]
	nop

 Block5:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block5

 Block6:
	sub eax,ebp
	jne Block8

 Block7:
	mov eax,dword ptr [esp+0x3C]
	push eax
	push ecx
	push esi
	lea ecx,[edi+0x8C]
	call CUIToolTip::SetToolTip_String
	jmp Block17

 Block8:
	mov edx,dword ptr [esp+0x44]
	push 0
	push 1
	push 0
	push 0
	push 0
	push edx
	push ecx
	mov ebp,esp
	mov dword ptr [esp+0x60],esp
	mov dword ptr [ebp],0
	test ebx,ebx
	je Block12

 Block9:
	mov eax,ebx
	lea edx,[eax+1]

 Block10:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block10

 Block11:
	sub eax,edx
	mov esi,eax
	push esi
	push ebx
	push 0
	push esi
	mov ecx,ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,ebp
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [esp+0x5C]
	mov ecx,dword ptr [esp+0x30]

 Block12:
	mov eax,dword ptr [esp+0x58]
	push ecx
	mov ebx,esp
	mov dword ptr [esp+0x54],0
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ebx],0
	test eax,eax
	je Block16

 Block13:
	lea edx,[eax+1]

 Block14:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block14

 Block15:
	sub eax,edx
	mov esi,eax
	mov eax,dword ptr [esp+0x5C]
	push esi
	push eax
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
	mov esi,dword ptr [esp+0x60]
	mov ecx,dword ptr [esp+0x34]

 Block16:
	push ecx
	push esi
	lea ecx,[edi+0x8C]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call CUIToolTip::SetToolTip_String2

 Block17:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 0xC
}
}
// CCtrlButtonWithAniState::~CCtrlButtonWithAniState
__SUB_CLASS_THIS0(000D7790, __thiscall, 6535,  CCtrlButtonWithAniState, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CCtrlButton::Update
	cmp dword ptr [esi+0xAE8],0
	je Block4

 Block1:
	cmp dword ptr [esi+0xAEC],0
	je Block4

 Block2:
	call get_update_time
	cmp eax,dword ptr [esi+0xAEC]
	jle Block4

 Block3:
	push 0
	push 0
	mov ecx,esi
	call CCtrlButtonWithAniState::Animate

 Block4:
	pop esi
	ret
}
}
// CCtrlButton::OnKey
_SUB_EXCEPTION_HANDLER(D6BE0)
__SUB_CLASS_THIS(000D6BE0, __thiscall, 6364,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D6BE0
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [esp+0x18]
	test edx,edx
	js Block4

 Block1:
	cmp eax,0x20
	jne Block9

 Block2:
	cmp dword ptr [esi+0x50],0
	jne Block10

 Block3:
	push 1
	lea ecx,[esi-4]
	mov dword ptr [esi+0x4C],0
	mov dword ptr [esi+0x50],1
	call CCtrlButton::ChangeDisplayState
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 8

 Block4:
	cmp eax,0x20
	jne Block9

 Block5:
	cmp dword ptr [esi+0x50],0
	je Block10

 Block6:
	lea eax,[esp+0x18]
	push 0x5D0
	push eax
	mov dword ptr [esi+0x4C],0
	mov dword ptr [esi+0x50],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x14],0
	call play_ui_sound
	mov eax,dword ptr [esp+0x1C]
	add esp,4
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	add esi,0xFFFFFFFC
	push 0
	mov ecx,esi
	call CCtrlButton::ChangeDisplayState
	mov ecx,dword ptr [esi+0x24]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [esi+0x14]
	mov edx,dword ptr [edx+0x1C]
	push 0
	push 0x64
	push eax
	call edx
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 8

 Block9:
	mov esi,dword ptr [esi+0x20]
	lea ecx,[esi+4]
	mov esi,dword ptr [ecx]
	push edx
	push eax
	mov eax,dword ptr [esi]
	call eax

 Block10:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 8
}
}
// CCtrlButton::CreateCtrl
_SUB_EXCEPTION_HANDLER(D77D0)
__SUB_CLASS_THIS(000D77D0, __thiscall, 6363,  CCtrlButton, void, CWnd*, uint32_t, long, long, long, void*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D77D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
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
	mov dword ptr [ebp-0x34],esi
	mov ebx,dword ptr [ebp+0x1C]
	mov eax,dword ptr [ebx]
	mov dword ptr [esi+0x28],eax
	mov ecx,dword ptr [ebx+4]
	mov eax,dword ptr [ebp+0x18]
	xor edi,edi
	mov dword ptr [esi+0x5C],ecx
	mov edx,dword ptr [ebx+8]
	mov dword ptr [esi+0x60],edx
	mov dword ptr [esi+0x48],edi
	mov dword ptr [esi+0x4C],eax
	mov dword ptr [esi+0x50],edi
	mov dword ptr [esi+0x54],edi
	mov dword ptr [esi+0x58],edi
	mov dword ptr [esi+0x7C],edi
	mov eax,dword ptr [esi+0x84]
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esi+0x84],edi

 Block2:
	mov eax,dword ptr [esi+0x88]
	cmp eax,edi
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esi+0x88],edi

 Block4:
	lea ecx,[esi+0x8C]
	call CUIToolTip::ClearToolTip
	push ecx
	mov ecx,esp
	lea eax,[ebx+0xC]
	mov dword ptr [ebp-0x28],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString16::op_assign
	mov ecx,esi
	call CCtrlButton::SetButtonImage
	add esi,0x6C
	mov dword ptr [ebp-0x24],edi
	mov dword ptr [ebp-0x1C],edi
	mov dword ptr [ebp-0x30],edi
	mov dword ptr [ebp-0x18],esi

 Block5:
	mov ecx,dword ptr [ebp-0x18]
	mov esi,dword ptr [ecx]
	cmp esi,edi
	je Block34

 Block6:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp-0x20]
	push eax
	push esi
	mov dword ptr [ebp-0x20],edi
	call ecx
	cmp eax,edi
	jge Block8

 Block7:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	xor ebx,ebx
	cmp dword ptr [ebp-0x20],edi
	jle Block32

 Block9:
	lea esp,[esp]

 Block10:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push edi
	push edi
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x28],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp-0x18]
	mov ecx,dword ptr [edx]
	mov dword ptr [ebp-4],edi
	cmp ecx,edi
	je Block34

 Block11:
	lea eax,[ebp-0x48]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],1
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp-0x28],esi
	cmp eax,edi
	je Block14

 Block12:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x38]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x38]
	cmp eax,edi
	mov esi,ecx
	mov dword ptr [ebp-0x28],esi
	jge Block14

 Block13:
	cmp eax,0x80004002
	jne Block35

 Block14:
	cmp word ptr [ebp-0x48],8
	mov byte ptr [ebp-4],3
	jne Block17

 Block15:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	cmp eax,edi
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[ebp-0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block18:
	cmp esi,edi
	je Block34

 Block19:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[ebp-0x14]
	push edx
	push esi
	mov dword ptr [ebp-0x14],edi
	call eax
	cmp eax,edi
	jge Block21

 Block20:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block21:
	mov ecx,dword ptr [ebp-0x24]
	cmp ecx,dword ptr [ebp-0x14]
	jae Block25

 Block22:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[ebp-0x14]
	push eax
	push esi
	mov dword ptr [ebp-0x14],edi
	call ecx
	cmp eax,edi
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block24:
	mov edx,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x24],edx

 Block25:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[ebp-0x14]
	push ecx
	push esi
	mov dword ptr [ebp-0x14],edi
	call edx
	cmp eax,edi
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	mov eax,dword ptr [ebp-0x1C]
	cmp eax,dword ptr [ebp-0x14]
	jae Block31

 Block28:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[ebp-0x2C]
	push edx
	push esi
	mov dword ptr [ebp-0x2C],edi
	call eax
	cmp eax,edi
	jge Block30

 Block29:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block30:
	mov ecx,dword ptr [ebp-0x2C]
	mov dword ptr [ebp-0x1C],ecx

 Block31:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call eax
	inc ebx
	cmp ebx,dword ptr [ebp-0x20]
	jl Block10

 Block32:
	mov eax,dword ptr [ebp-0x30]
	add dword ptr [ebp-0x18],4
	inc eax
	cmp eax,4
	mov dword ptr [ebp-0x30],eax
	jl Block5

 Block33:
	mov eax,dword ptr [ebp+0x1C]
	mov ecx,dword ptr [eax+0xC]
	mov esi,dword ptr [ebp-0x34]
	add eax,0xC
	push ecx
	mov ecx,esi
	call CCtrlButton::LoadToolTipFromData
	mov edx,dword ptr [ebp+0x1C]
	mov eax,dword ptr [ebp-0x1C]
	mov ecx,dword ptr [ebp-0x24]
	push edx
	mov edx,dword ptr [ebp+0x14]
	push eax
	mov eax,dword ptr [ebp+0x10]
	push ecx
	mov ecx,dword ptr [ebp+0xC]
	push edx
	mov edx,dword ptr [ebp+8]
	push eax
	push ecx
	push edx
	mov ecx,esi
	mov dword ptr [esi+0xAD8],edi
	call CCtrlWnd::CreateCtrl
	lea esp,[ebp-0x58]
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
	ret 0x18

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	push eax
	call _com_issue_error
}
}
// CCtrlOriginButton::Draw
_SUB_EXCEPTION_HANDLER(D5E30)
__SUB_CLASS_THIS(000D5E30, __thiscall, 6453,  CCtrlOriginButton, void, long, long, const tagRECT*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D5E30
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
	mov edi,ecx
	xor esi,esi
	push esi
	lea eax,[ebp-0x30]
	push eax
	mov dword ptr [ebp-0x14],esi
	call CCtrlWnd::GetCanvas
	mov dword ptr [ebp-4],esi
	cmp dword ptr [edi+0xADC],esi
	je Block4

 Block1:
	lea eax,[esi+0x20]
	call __chkstk
	mov ecx,dword ptr [edi+0x38]
	mov eax,esp
	push esi
	push esi
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x1C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi+0xAE0]
	mov byte ptr [ebp-4],1
	cmp ecx,esi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[ebp-0x44]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ebx,1
	mov ecx,eax
	mov byte ptr [ebp-4],2
	mov dword ptr [ebp-0x14],ebx
	call Ztl_variant_t::GetUnknown
	jmp Block5

 Block4:
	lea eax,[ebp-0x34]
	push eax
	mov ecx,edi
	call CCtrlButton::GetButtonCanvas
	mov eax,dword ptr [eax]
	mov ebx,2
	mov dword ptr [ebp-4],3
	mov dword ptr [ebp-0x14],ebx

 Block5:
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block8

 Block6:
	cmp eax,0x80004002
	je Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	mov dword ptr [ebp-4],5
	test bl,2
	je Block11

 Block9:
	mov eax,dword ptr [ebp-0x34]
	and ebx,0xFFFFFFFD
	mov dword ptr [ebp-0x14],ebx
	cmp eax,esi
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov byte ptr [ebp-4],6
	test bl,1
	je Block16

 Block12:
	cmp word ptr [ebp-0x44],8
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [ebp-0x44],ax
	mov eax,dword ptr [ebp-0x3C]
	cmp eax,esi
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[ebp-0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov ebx,dword ptr [ebp-0x18]
	cmp ebx,esi
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[ebp-0x14]
	push eax
	push ebx
	mov dword ptr [ebp-0x14],esi
	call ecx
	cmp eax,esi
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block20:
	mov eax,dword ptr [edi+0x1C]
	sub eax,dword ptr [ebp-0x14]
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x48]
	shr eax,1
	mov dword ptr [ebp-0x1C],eax
	lea eax,[ebp-0x14]
	push eax
	push ebx
	mov dword ptr [ebp-0x14],esi
	call ecx
	cmp eax,esi
	jge Block22

 Block21:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block22:
	mov eax,dword ptr [edi+0x20]
	mov ebx,eax
	sub ebx,dword ptr [ebp-0x14]
	shr ebx,1
	cmp dword ptr [edi+0x5C],esi
	mov esi,dword ptr [ebp-0x30]
	je Block27

 Block23:
	test esi,esi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov edi,dword ptr [edi+0x1C]
	mov ecx,dword ptr [ebp+8]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x8C]
	push 0xFFFFFF
	push eax
	mov eax,dword ptr [ebp+0xC]
	push edi
	push eax
	push ecx
	push esi
	call edx
	test eax,eax
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	mov eax,3
	mov ecx,0xFF
	mov word ptr [ebp-0x2C],ax
	mov dword ptr [ebp-0x24],ecx
	mov byte ptr [ebp-4],7
	test esi,esi
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov edi,dword ptr [ebp-0x2C]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp-0x28]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp-0x18]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x20]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0xC]
	mov ecx,dword ptr [ebp-0x1C]
	push edi
	add ebx,eax
	mov eax,dword ptr [ebp+8]
	push ebx
	add ecx,eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	push esi
	call ecx
	test eax,eax
	jge Block31

 Block30:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block31:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],6
	jne Block34

 Block32:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ecx
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
	ret 0xC
}
}
// CCtrlCheckBox::CreateCtrl
_SUB_EXCEPTION_HANDLER(D6F60)
__SUB_CLASS_THIS(000D6F60, __thiscall, 6500,  CCtrlCheckBox, void, CWnd*, uint32_t, long, long, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D6F60
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
	mov dword ptr [esp+0x18],ebp
	mov edi,dword ptr [esp+0xB0]
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	mov eax,dword ptr [edi]
	mov dword ptr [ebp+0x28],eax
	mov ecx,dword ptr [edi+0x24]
	lea edx,[esp+0x20]
	push 0x5AF
	push edx
	mov dword ptr [ebp+0x58],ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[ebp+0x4C]
	push esi
	push ecx
	push eax
	mov dword ptr [esp+0xA4],esi
	mov dword ptr [esp+0x28],ecx
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x2C]
	or ebx,0xFFFFFFFF
	add esp,0xC
	mov dword ptr [esp+0x98],ebx
	cmp eax,esi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	lea eax,[esp+0x20]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	add ebp,0x50
	push ebp
	push eax
	mov dword ptr [esp+0xA4],1
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov dword ptr [esp+0x98],ebx
	cmp eax,esi
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov ebx,3
	cmp dword ptr [edi+0x18],esi
	je Block6

 Block5:
	mov esi,offset _D_VTMISSING
	jmp Block9

 Block6:
	mov ecx,8
	push esi
	mov word ptr [esp+0x54],cx
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [esp+0x58],eax
	lea edx,[esp+0x40]
	push edx
	mov dword ptr [esp+0x9C],2
	mov dword ptr [esp+0x18],1
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esp+0x44]
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	lea esi,[esp+0x40]
	mov dword ptr [esp+0x98],ebx
	mov dword ptr [esp+0x14],ebx

 Block9:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push esi
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov edx,dword ptr [edi+0x14]
	mov eax,dword ptr [edi+0x10]
	lea ecx,[esp+0x30]
	push ecx
	push edx
	push eax
	mov eax,dword ptr [edi+0xC]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xA8],4
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block13

 Block12:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	mov ecx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [ecx]
	mov byte ptr [esp+0xA8],5
	test ecx,ecx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	mov byte ptr [esp+0xA8],4
	call IWzFont::Create
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x98],bl
	cmp word ptr [esp+0x30],si
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[esp+0x30]
	push eax
	call edi

 Block19:
	mov ebx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x98],2
	test bl,2
	je Block24

 Block20:
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x40],si
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[esp+0x40]
	push edx
	call edi

 Block24:
	mov dword ptr [esp+0x98],0xFFFFFFFF
	test bl,1
	je Block29

 Block25:
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x50],si
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x50]
	push ecx
	call edi

 Block29:
	mov edx,dword ptr [esp+0xB0]
	cmp dword ptr [edx+0x18],0
	mov edi,6
	je Block31

 Block30:
	mov esi,offset _D_VTMISSING
	jmp Block34

 Block31:
	mov eax,esi
	push 0
	mov word ptr [esp+0x34],ax
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [esp+0x38],eax
	lea ecx,[esp+0x40]
	or ebx,4
	push ecx
	mov dword ptr [esp+0x9C],edi
	mov dword ptr [esp+0x18],ebx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x44]
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	or ebx,8
	lea esi,[esp+0x40]
	mov dword ptr [esp+0x98],7
	mov dword ptr [esp+0x14],ebx

 Block34:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x50]
	push esi
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	lea eax,[esp+0x50]
	push eax
	mov eax,dword ptr [esp+0xB4]
	mov ecx,dword ptr [eax+0x14]
	mov edx,dword ptr [eax+0x10]
	mov eax,dword ptr [eax+0xC]
	and ecx,0xFF8C8A8C
	or ecx,0x8C8A8C
	push ecx
	push edx
	push ecx
	mov esi,8
	mov ecx,esp
	mov dword ptr [esp+0xA8],esi
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block38

 Block37:
	add eax,esi
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block38:
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0xA8],9
	test ecx,ecx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	mov byte ptr [esp+0xA8],8
	call IWzFont::Create
	mov byte ptr [esp+0x98],7
	cmp word ptr [esp+0x50],si
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov dword ptr [esp+0x98],edi
	test bl,8
	je Block49

 Block45:
	and ebx,0xFFFFFFF7
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x40],si
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block49:
	mov dword ptr [esp+0x98],0xFFFFFFFF
	test bl,4
	je Block54

 Block50:
	and ebx,0xFFFFFFFB
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x30],si
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov ebp,dword ptr [esp+0x18]
	mov edi,dword ptr [esp+0xB0]
	mov dword ptr [ebp+0x34],0
	mov eax,dword ptr [edi+0x28]
	mov dword ptr [ebp+0x38],eax
	mov ecx,dword ptr [edi+4]
	mov dword ptr [ebp+0x3C],ecx
	mov edx,dword ptr [edi+0x14]
	lea eax,[edi+8]
	lea esi,[ebp+0x44]
	push eax
	mov ecx,esi
	mov dword ptr [ebp+0x40],edx
	call ZXString<char>::op_assign
	mov eax,dword ptr [edi+0x1C]
	test eax,eax
	jne Block60

 Block55:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x50]
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
	mov esi,dword ptr [esi]
	or dword ptr [esp+0x14],0x10
	lea eax,[esp+0x50]
	push eax
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov ebx,0xA
	push esi
	mov dword ptr [esp+0xA4],ebx
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x4C]
	mov dword ptr [esp+0xA0],0xB
	test ecx,ecx
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	mov byte ptr [esp+0xA0],bl
	call IWzFont::CalcTextWidth
	mov ebx,dword ptr [esp+0x14]
	add eax,0x14

 Block60:
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x98],0xFFFFFFFF
	test bl,0x10
	je Block65

 Block61:
	cmp word ptr [esp+0x50],8
	jne Block64

 Block62:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov eax,dword ptr [edi+0x20]
	xor ecx,ecx
	cmp eax,ecx
	jne Block67

 Block66:
	mov eax,dword ptr [edi+0x10]
	add eax,4

 Block67:
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [edi+0x2C]
	mov dword ptr [ebp+0x6C],eax
	mov edx,dword ptr [edi+0x30]
	mov dword ptr [ebp+0x70],edx
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x98],0xC
	mov dword ptr [esp+0x14],ecx
	lea ebx,[ebp+0x5C]
	lea esp,[esp]

 Block68:
	lea eax,[esp+0x24]
	push 0x514
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0xA4],0xD
	call ZXString16::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x98],0xC
	test eax,eax
	je Block70

 Block69:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block70:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x70]
	push eax
	call esi
	lea ecx,[esp+0x70]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block7

 Block71:
	lea edx,[esp+0x60]
	push edx
	mov byte ptr [esp+0x9C],0xE
	call esi
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block7

 Block72:
	mov eax,dword ptr [esp+0x18]
	push 0
	push 0
	lea ecx,[esp+0x78]
	push ecx
	lea edx,[esp+0x6C]
	push edx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xB0],0xF
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xAC],0x10
	je Block14

 Block73:
	lea ecx,[esp+0x94]
	push ecx
	mov byte ptr [esp+0xB0],0xF
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA0],0x11
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block81

 Block74:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x28]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov esi,eax
	xor eax,eax
	test esi,esi
	setl al
	dec eax
	and eax,dword ptr [esp+0x28]
	mov edi,eax
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block76

 Block75:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block76:
	mov dword ptr [ebx],edi
	test esi,esi
	jge Block78

 Block77:
	cmp esi,0x80004002
	jne Block96

 Block78:
	cmp word ptr [esp+0x80],8
	mov byte ptr [esp+0x98],0xF
	jne Block83

 Block79:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block84

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block81:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block78

 Block82:
	mov dword ptr [ebx],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block78

 Block83:
	lea ecx,[esp+0x80]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov esi,8
	mov byte ptr [esp+0x98],0xE
	cmp word ptr [esp+0x60],si
	jne Block87

 Block85:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block88:
	mov byte ptr [esp+0x98],0xC
	cmp word ptr [esp+0x70],si
	jne Block91

 Block89:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea edx,[esp+0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block92:
	mov eax,dword ptr [esp+0x14]
	inc eax
	add ebx,4
	cmp eax,4
	mov dword ptr [esp+0x14],eax
	jl Block68

 Block93:
	mov eax,dword ptr [esp+0xB0]
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x20]
	push eax
	mov eax,dword ptr [esp+0xB0]
	push ecx
	mov ecx,dword ptr [esp+0xB0]
	push edx
	mov edx,dword ptr [esp+0xB0]
	push eax
	mov eax,dword ptr [esp+0xB0]
	push ecx
	push edx
	push eax
	mov ecx,ebp
	call CCtrlWnd::CreateCtrl
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	test eax,eax
	je Block95

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block95:
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret 0x14

 Block96:
	push esi
	call _com_issue_error
}
}
// CCtrlCheckBox::OnSetFocus
__SUB_CLASS_THIS(000D46E0, __thiscall, 6501,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	push esi
	mov esi,ecx
	je Block2

 Block1:
	mov eax,dword ptr [esi+0x24]
	pop esi
	ret 4

 Block2:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea eax,[esi-4]
	neg eax
	sbb eax,eax
	push edi
	and eax,esi
	push eax
	mov edi,1
	call CWndMan::ReleaseCaptureWnd
	lea ecx,[esi-4]
	call CCtrlCheckBox::ChangeCheckBoxState
	mov ecx,dword ptr [esi+0x20]
	push 0
	call CWnd::InvalidateRect
	mov eax,edi
	pop edi
	pop esi
	ret 4
}
}
// CCtrlButton::CCtrlButton
_SUB_EXCEPTION_HANDLER(71740)
__SUB_CLASS_THIS0(00071740, __thiscall, 6359,  CCtrlButton, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_71740
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
	call CCtrlWnd::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlButton::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlButton::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlButton::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x64],edi
	mov dword ptr [esi+0x68],edi
	push offset _x_com_ptr<IWzProperty>::~_x_com_ptr<IWzProperty>
	push offset _x_com_ptr<IWzProperty>::_ctor_default
	push 4
	push 4
	lea eax,[esi+0x6C]
	push eax
	mov byte ptr [esp+0x2C],2
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x84],edi
	mov dword ptr [esi+0x88],edi
	lea ecx,[esi+0x8C]
	mov byte ptr [esp+0x18],5
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xAD4],edi
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
// CCtrlButton::SetKeyFocus
_SUB_EXCEPTION_HANDLER(D5250)
__SUB_CLASS_THIS(000D5250, __thiscall, 6371,  CCtrlButton, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D5250
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
	cmp dword ptr [esi+0x58],eax
	je Block42

 Block1:
	xor ebx,ebx
	cmp dword ptr [esi+0x64],ebx
	sete cl
	test cl,cl
	jne Block42

 Block2:
	mov dword ptr [esi+0x58],eax
	cmp eax,ebx
	je Block33

 Block3:
	mov ecx,dword ptr [esi+0x24]
	push ebx
	push 0xFF
	lea eax,[esp+0x20]
	push eax
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x54],ebx
	cmp ecx,ebx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	call IWzGr2DLayer::Getz
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push ecx
	mov ecx,dword ptr [esi+0x24]
	call CWnd::GetLayer
	mov ecx,dword ptr [esi+0x18]
	mov byte ptr [esp+0x5C],1
	cmp ecx,ebx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	call IWzVector2D::Getry
	mov ecx,dword ptr [esi+0x18]
	push eax
	cmp ecx,ebx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	call IWzVector2D::Getrx
	mov ecx,dword ptr [esi+0x24]
	push eax
	lea edx,[esp+0x2C]
	push edx
	call CWnd::GetLayer
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push eax
	mov byte ptr [esp+0x6C],2
	call _x_com_ptr<IWzVector2D>::CreateFromWzGr2DLayerComPtr
	mov eax,dword ptr [esi+0x64]
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block11:
	lea eax,[esp+0x78]
	push eax
	mov byte ptr [esp+0x74],3
	call CAnimationDisplayer::LoadLayer_0
	add esp,0x28
	lea ebp,[esi+0x68]
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebx
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x4C],0
	cmp eax,ebx
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp eax,ebx
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push eax
	call edi
	lea ecx,[esp+0x34]
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
	lea edx,[esp+0x24]
	mov ebx,4
	push edx
	mov dword ptr [esp+0x50],ebx
	call edi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x4C],5
	test ecx,ecx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov edi,8
	mov byte ptr [esp+0x4C],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x24],di
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea edx,[esp+0x24]
	push edx
	call ebx

 Block27:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp word ptr [esp+0x34],di
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x34]
	push ecx
	call ebx

 Block31:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x20]
	lea ecx,[esi+4]
	call eax
	test eax,eax
	je Block42

 Block32:
	push 3
	jmp Block40

 Block33:
	mov eax,dword ptr [esi+0x68]
	cmp eax,ebx
	je Block35

 Block34:
	mov dword ptr [esi+0x68],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esi+4]
	call edx
	test eax,eax
	je Block39

 Block36:
	mov ecx,esi
	cmp esi,dword ptr [CCtrlButton::m_pButtonEntered]
	jne Block38

 Block37:
	push 3
	jmp Block41

 Block38:
	push ebx
	jmp Block41

 Block39:
	push 2

 Block40:
	mov ecx,esi

 Block41:
	call CCtrlButton::ChangeDisplayState

 Block42:
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
// CCtrlCheckBox::GetRTTI
__SUB_CLASS_THIS0(00089310, __thiscall, 6511,  CCtrlCheckBox, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CCtrlCheckBox::ms_RTTI_CCtrlCheckBox
	ret
}
}
