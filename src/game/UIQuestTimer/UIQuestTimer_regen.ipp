#include "regen.hpp"
// UIQuestTimer.ipp
#include "UIQuestTimer.hpp"

// CUIQuestTimerAction::OnCreate
__SUB_CLASS_THIS(004352C0, __thiscall, 59408,  CUIQuestTimerAction, void, void*) {
__asm {

 Block0:
	ret 4
}
}
// CUIQuestTimerAction::OnMouseEnter
__SUB_CLASS_THIS(00437C70, __thiscall, 59410,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	je Block2

 Block1:
	mov ecx,dword ptr [ecx+0xB28]
	call CUIQuestTimer::SetToolTip
	ret 4

 Block2:
	mov eax,dword ptr [ecx+0xB28]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	call edx
	ret 4
}
}
// CUIQuestTimerAction::OnMoveWnd
__SUB_CLASS_THIS(00435400, __thiscall, 59409,  CUIQuestTimerAction, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	push eax
	push ecx
	mov ecx,esi
	call CWnd::OnMoveWnd
	mov eax,dword ptr [esi+0xB2C]
	test eax,eax
	je Block3

 Block1:
	cmp dword ptr [eax+0xB14],0
	jne Block3

 Block2:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x2C]
	push ebx
	push ebp
	push edi
	lea edi,[esi+4]
	mov ecx,edi
	call eax
	mov edx,dword ptr [edi]
	mov ebp,dword ptr [esi+0x28]
	mov ebx,eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,edi
	sub ebx,0x34
	call eax
	mov ecx,eax
	mov eax,ebp
	cdq
	sub eax,edx
	sar eax,1
	lea eax,[ecx+eax-5]
	mov ecx,dword ptr [esi+0xB2C]
	push eax
	push ebx
	mov dword ptr [esi+0xB08],1
	call CWnd::MoveWnd
	pop edi
	pop ebp
	mov dword ptr [esi+0xB08],0
	pop ebx

 Block3:
	pop esi
	ret 8
}
}
// CUIQuestTimer::ClearToolTip
__SUB_CLASS_THIS0(00436EE0, __thiscall, 59523,  IUIMsgHandler, void) {
__asm {

 Block0:
	mov dword ptr [ecx+0xB0C],0
	add ecx,0x84
	jmp  CUIToolTip::ClearToolTip
}
}
// CUIQuestTimerAction::GetRTTI
__SUB_CLASS_THIS0(00436530, __thiscall, 59418,  CUIQuestTimerAction, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIQuestTimerAction::ms_RTTI_CUIQuestTimerAction
	ret
}
}
// CUIQuestTimerAction::OnMouseMove
__SUB_CLASS_THIS(004352D0, __thiscall, 59411,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	mov edx,dword ptr [esp+8]
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi-4]
	mov eax,dword ptr [eax+0x24]
	push 0
	lea ecx,[esi-4]
	push edx
	mov edx,dword ptr [esp+0x10]
	push edx
	call eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [esi+0xB28]
	mov eax,1
	mov dword ptr [ecx+0xB10],eax
	pop esi
	ret 8

 Block2:
	mov edx,dword ptr [esi+0xB28]
	mov dword ptr [edx+0xB10],0
	xor eax,eax
	pop esi
	ret 8
}
}
// CUIQuestTimerAction::GetWidth
_SUB_EXCEPTION_HANDLER(436A20)
__SUB_CLASS_THIS0(00436A20, __thiscall, 59415,  CUIQuestTimerAction, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_436A20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
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
	mov esi,dword ptr [edi+0xB18]
	xor ebx,ebx
	cmp esi,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp-0x14]
	push ecx
	push esi
	mov dword ptr [ebp-0x14],ebx
	call edx
	cmp eax,ebx
	jge Block4

 Block3:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov esi,dword ptr [ebp-0x14]
	mov eax,0x20
	dec esi
	call __chkstk
	mov eax,esp
	push ebx
	push ebx
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x20],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi+0xB18]
	mov dword ptr [ebp-4],ebx
	cmp ecx,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[ebp-0x34]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x1C]
	mov dword ptr [ebp-0x1C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],3
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[ebp-0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov edi,dword ptr [ebp-0x1C]
	mov dword ptr [ebp-0x14],ebx
	test edi,edi
	je Block1

 Block14:
	lea esp,[esp]

 Block15:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp-0x18]
	push ecx
	xor esi,esi
	push edi
	mov dword ptr [ebp-0x18],esi
	call edx
	cmp eax,esi
	jge Block17

 Block16:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block17:
	cmp ebx,dword ptr [ebp-0x18]
	jae Block34

 Block18:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push esi
	push esi
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x44]
	mov byte ptr [ebp-4],4
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp-0x18],esi
	test eax,eax
	je Block21

 Block19:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x20]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x20]
	mov esi,ecx
	mov dword ptr [ebp-0x18],esi
	test eax,eax
	jge Block21

 Block20:
	cmp eax,0x80004002
	jne Block8

 Block21:
	cmp word ptr [ebp-0x44],8
	mov byte ptr [ebp-4],7
	jne Block24

 Block22:
	mov eax,dword ptr [ebp-0x3C]
	xor edx,edx
	mov word ptr [ebp-0x44],dx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea eax,[ebp-0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block25:
	push 0x78
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x58],esp
	push 0x1AA9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],8
	test esi,esi
	je Block1

 Block26:
	lea edx,[ebp-0x24]
	push edx
	mov ecx,esi
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],9
	test ecx,ecx
	je Block1

 Block27:
	lea eax,[ebp-0x54]
	push eax
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB
	call get_int32
	add dword ptr [ebp-0x14],eax
	add esp,8
	cmp word ptr [ebp-0x54],8
	mov byte ptr [ebp-4],0xA
	jne Block30

 Block28:
	mov eax,dword ptr [ebp-0x4C]
	xor ecx,ecx
	mov word ptr [ebp-0x54],cx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[ebp-0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],3
	call ecx
	inc ebx
	jmp Block15

 Block34:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call eax
	mov eax,dword ptr [ebp-0x14]
	lea esp,[ebp-0x68]
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
// CUIQuestTimerAction::OnSetFocus
__SUB_CLASS_THIS(00436520, __thiscall, 59412,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIQuestTimer::~CUIQuestTimer
_SUB_EXCEPTION_HANDLER(436F30)
__SUB_CLASS_THIS0(00436F30, __thiscall, 59514,  CUIQuestTimer, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_436F30
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIQuestTimer::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIQuestTimer::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIQuestTimer::`vftable'{for `ZRefCounted'}
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 4
	push 4
	lea eax,[esi+0xB40]
	push eax
	mov dword ptr [esp+0x2C],2
	call __eh_vector_dtor_iterator
	cmp dword ptr [esi+0xB3C],0
	lea edi,[esi+0xB38]
	mov byte ptr [esp+0x1C],1
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CUIQuestTimerAction>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	mov eax,dword ptr [esi+0xB34]
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block7

 Block3:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block6

 Block5:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block6:
	mov dword ptr [esi+0xB34],0

 Block7:
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CUIWnd::~CUIWnd
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x10
	ret
}
}
// CUIQuestTimer::Draw
_SUB_EXCEPTION_HANDLER(435700)
__SUB_CLASS_THIS(00435700, __thiscall, 59516,  CUIQuestTimer, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_435700
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
	mov esi,ecx
	mov eax,dword ptr [esp+0x3C]
	push eax
	call CWnd::Draw
	mov eax,dword ptr [esi+0xB34]
	xor ebx,ebx
	cmp word ptr [eax],bx
	je Block41

 Block1:
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x38],ebx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
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
	mov ecx,dword ptr [esp+0x3C]
	mov eax,dword ptr [esi+0xB4C]
	mov byte ptr [esp+0x34],1
	cmp ecx,ebx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea edx,[esp+0x1C]
	push edx
	push eax
	push ebx
	push ebx
	call IWzCanvas::Copy
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],bl
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov eax,dword ptr [esi+0xB34]
	cmp dword ptr [eax+8],ebx
	je Block40

 Block10:
	mov edi,dword ptr [esi+0xB44]
	cmp edi,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x14]
	push eax
	push edi
	mov dword ptr [esp+0x1C],ebx
	call ecx
	cmp eax,ebx
	jge Block14

 Block13:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block14:
	mov ebp,dword ptr [esp+0x14]
	lea edx,[esp+0x1C]
	mov edi,0x32
	push edx
	sub edi,ebp
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov eax,dword ptr [esi+0xB44]
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0x40]
	push eax
	push 2
	push edi
	mov byte ptr [esp+0x44],2
	call IWzCanvas::Copy
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],bl
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,ebx
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov eax,dword ptr [esi+0xB20]
	cmp eax,ebp
	jle Block33

 Block21:
	mov ecx,dword ptr [esp+0x14]
	sub eax,ecx
	xor ebp,ebp
	test eax,eax
	jle Block33

 Block22:
	mov eax,0x30
	sub eax,ecx
	mov dword ptr [esp+0x18],eax
	dec edi
	jmp Block26

 Block25:
	mov eax,dword ptr [esp+0x18]

 Block26:
	cmp ebp,eax
	jge Block33

 Block27:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block2

 Block28:
	mov eax,dword ptr [esi+0xB48]
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0x40]
	push eax
	push 2
	push edi
	mov byte ptr [esp+0x44],3
	call IWzCanvas::Copy
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],bl
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,ebx
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov ecx,dword ptr [esi+0xB20]
	sub ecx,dword ptr [esp+0x14]
	inc ebp
	dec edi
	cmp ebp,ecx
	jl Block25

 Block33:
	cmp dword ptr [esi+0xB20],0x2F
	jle Block40

 Block34:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	mov esi,dword ptr [esi+0xB40]
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0x40]
	push esi
	push 2
	push 2
	mov byte ptr [esp+0x44],4
	call IWzCanvas::Copy
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],bl
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,ebx
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call edx

 Block41:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 4
}
}
// CUIQuestTimerAction::~CUIQuestTimerAction
_SUB_EXCEPTION_HANDLER(436580)
__SUB_CLASS_THIS0(00436580, __thiscall, 59407,  CUIQuestTimerAction, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_436580
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIQuestTimerAction::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIQuestTimerAction::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIQuestTimerAction::`vftable'{for `ZRefCounted'}
	cmp dword ptr [esi+0xB2C],0
	lea edi,[esi+0xB28]
	mov dword ptr [esp+0x1C],3
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CUIQuestTimer>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	mov eax,dword ptr [esi+0xB24]
	mov byte ptr [esp+0x1C],2
	test eax,eax
	je Block7

 Block3:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block6

 Block5:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block6:
	mov dword ptr [esi+0xB24],0

 Block7:
	mov eax,dword ptr [esi+0xB1C]
	mov byte ptr [esp+0x1C],1
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov eax,dword ptr [esi+0xB18]
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CUIWnd::~CUIWnd
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x10
	ret
}
}
// CUIQuestTimer::OnSetFocus
__SUB_CLASS_THIS(00436E90, __thiscall, 59520,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIQuestTimer::SetScreenMode
__SUB_CLASS_THIS(00435560, __thiscall, 59522,  CUIQuestTimer, void, bool, bool) {
__asm {

 Block0:
	push ecx
	mov al,byte ptr [esp+8]
	push edi
	mov edi,ecx
	cmp al,byte ptr [edi+0xAF8]
	je Block17

 Block1:
	push ebx
	push esi
	mov esi,dword ptr [edi+0x18]
	xor ebx,ebx
	cmp esi,ebx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x68]
	lea edx,[esp+0xC]
	push edx
	push esi
	mov dword ptr [esp+0x14],ebx
	call eax
	cmp eax,ebx
	jge Block5

 Block4:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block5:
	mov esi,dword ptr [edi+0x18]
	push ebp
	mov ebp,dword ptr [esp+0x10]
	cmp esi,ebx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x10]
	push edx
	push esi
	mov dword ptr [esp+0x18],ebx
	call eax
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block9:
	mov bl,byte ptr [esp+0x18]
	test bl,bl
	je Block12

 Block10:
	cmp ebp,0x190
	jl Block14

 Block11:
	add ebp,0xE0
	jmp Block14

 Block12:
	cmp ebp,0x200
	jl Block14

 Block13:
	add ebp,0xFFFFFF20

 Block14:
	mov ecx,dword ptr [esp+0x10]
	push ecx
	push ebp
	mov ecx,edi
	call CWnd::MoveWnd
	cmp byte ptr [esp+0x1C],0
	je Block16

 Block15:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x14]
	push 0x80000000
	push 0x80000000
	mov ecx,edi
	call eax

 Block16:
	pop ebp
	pop esi
	mov byte ptr [edi+0xAF8],bl
	pop ebx

 Block17:
	pop edi
	pop ecx
	ret 8
}
}
// CUIQuestTimer::OnMoveWnd
__SUB_CLASS_THIS(00435480, __thiscall, 59517,  CUIQuestTimer, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	push eax
	push ecx
	mov ecx,esi
	call CWnd::OnMoveWnd
	mov eax,dword ptr [esi+0xB3C]
	test eax,eax
	je Block3

 Block1:
	cmp dword ptr [eax+0xB08],0
	jne Block3

 Block2:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x2C]
	push ebx
	push ebp
	push edi
	lea edi,[esi+4]
	mov ecx,edi
	call eax
	mov ecx,dword ptr [esi+0xB3C]
	mov edx,dword ptr [edi]
	mov ebp,dword ptr [ecx+0x28]
	mov ebx,eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,edi
	add ebx,0x34
	call eax
	mov ecx,eax
	mov eax,ebp
	cdq
	sub eax,edx
	sar eax,1
	mov edx,5
	sub edx,eax
	add ecx,edx
	push ecx
	mov ecx,dword ptr [esi+0xB3C]
	push ebx
	mov dword ptr [esi+0xB14],1
	call CWnd::MoveWnd
	pop edi
	pop ebp
	mov dword ptr [esi+0xB14],0
	pop ebx

 Block3:
	pop esi
	ret 8
}
}
// CUIQuestTimer::IsMyAddon
__SUB_CLASS_THIS(00436EC0, __thiscall, 59521,  CUIQuestTimer, int32_t, CWnd*) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0xB3C]
	xor eax,eax
	cmp ecx,dword ptr [esp+4]
	sete al
	ret 4
}
}
// CUIQuestTimerAction::IsMyAddon
__SUB_CLASS_THIS(00435320, __thiscall, 59413,  CUIQuestTimerAction, int32_t, CWnd*) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0xB2C]
	xor eax,eax
	cmp ecx,dword ptr [esp+4]
	sete al
	ret 4
}
}
// CUIQuestTimer::OnDestroy
_SUB_EXCEPTION_HANDLER(437610)
__SUB_CLASS_THIS0(00437610, __thiscall, 59514,  CUIQuestTimer, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_437610
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esi+0xB3C]
	call CUIQuestTimerAction::GetDestroyActionDelay
	mov edi,eax
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
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
	mov dword ptr [esp+0x44],0
	call get_update_time
	add eax,edi
	mov edx,3
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],eax
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x48],1
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov bl,2
	mov byte ptr [esp+0x44],bl
	test ecx,ecx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[esp+0x10]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x44],3
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x2C]
	push eax
	lea edx,[esp+0x20]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x44],bl
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],1
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
	mov byte ptr [esp+0x44],0
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
	mov dword ptr [esp+0x44],0xFFFFFFFF
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
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterRepeatAnimation
	mov ecx,dword ptr [esi+0xB3C]
	test ecx,ecx
	je Block21

 Block19:
	call CWnd::Destroy
	cmp dword ptr [esi+0xB3C],0
	lea edi,[esi+0xB38]
	je Block21

 Block20:
	push 0
	mov ecx,edi
	call ZRef<CUIQuestTimerAction>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block21:
	mov ecx,esi
	call CUIWnd::OnDestroy
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x38
	ret
}
}
// CUIQuestTimer::IsKindOf
__SUB_CLASS_THIS(00436F00, __thiscall, 59532,  CUIQuestTimer, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIQuestTimer::ms_RTTI_CUIQuestTimer
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
// CUIQuestTimer::OnMouseMove
__SUB_CLASS_THIS(00437D60, __thiscall, 59519,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x10]
	mov edx,dword ptr [esi-4]
	push 0
	lea edi,[esi-4]
	push ecx
	mov dword ptr [esi+0xB14],eax
	mov dword ptr [esi+0xB18],ecx
	push eax
	mov eax,dword ptr [edx+0x24]
	mov ecx,edi
	call eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,edi
	call CUIQuestTimer::SetToolTip
	pop edi
	mov eax,1
	pop esi
	ret 8

 Block2:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	mov ecx,esi
	call eax
	pop edi
	xor eax,eax
	pop esi
	ret 8
}
}
// CUIQuestTimer::OnMouseEnter
__SUB_CLASS_THIS(00437DB0, __thiscall, 59518,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	je Block2

 Block1:
	add ecx,0xFFFFFFFC
	call CUIQuestTimer::SetToolTip
	ret 4

 Block2:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	call edx
	ret 4
}
}
// CUIQuestTimerAction::SetVisible
__SUB_CLASS_THIS(00435340, __thiscall, 59416,  CUIQuestTimerAction, void, int32_t) {
__asm {

 Block0:
	cmp dword ptr [ecx+0xB1C],0
	je Block6

 Block1:
	push esi
	mov esi,dword ptr [ecx+0xB1C]
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
// CUIQuestTimerAction::IsKindOf
__SUB_CLASS_THIS(00436550, __thiscall, 59419,  CUIQuestTimerAction, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIQuestTimerAction::ms_RTTI_CUIQuestTimerAction
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
// CUIQuestTimer::OnCreate
_SUB_EXCEPTION_HANDLER(437030)
__SUB_CLASS_THIS(00437030, __thiscall, 59515,  CUIQuestTimer, void, void*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_437030
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
	mov dword ptr [ebp-0x1C],edi
	mov eax,dword ptr [ebp+8]
	push eax
	call CUIWnd::OnCreate_0
	cmp dword ptr [edi+0xB2C],0
	mov esi,dword ptr [edi+0xB34]
	mov ebx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	jne Block3

 Block1:
	movzx ecx,word ptr [esi]
	push ecx
	mov ecx,ebx
	call CQuestMan::IsTimeLimitQuest
	test eax,eax
	je Block87

 Block2:
	cmp dword ptr [edi+0xB2C],0
	je Block4

 Block3:
	movzx edx,word ptr [esi]
	push edx
	mov ecx,ebx
	call CQuestMan::GetKeepTime
	jmp Block5

 Block4:
	movzx eax,word ptr [esi]
	push eax
	mov ecx,ebx
	call CQuestMan::GetQuestTimeLimit

 Block5:
	mov ecx,dword ptr [edi+0xB34]
	mov esi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [ecx+4],eax
	lea ecx,[ebp-0x5C]
	push ecx
	call esi
	lea edx,[ebp-0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	xor ebx,ebx
	add esp,8
	cmp eax,ebx
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea eax,[ebp-0x4C]
	push eax
	mov dword ptr [ebp-4],ebx
	call esi
	lea ecx,[ebp-0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	push ebx
	push ebx
	lea edx,[ebp-0x5C]
	push edx
	lea eax,[ebp-0x4C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x100E
	push ecx
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea edx,[ebp-0x7C]
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x20]
	mov dword ptr [ebp-0x20],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	cmp word ptr [ebp-0x7C],8
	mov byte ptr [ebp-4],5
	jne Block21

 Block15:
	xor eax,eax
	mov word ptr [ebp-0x7C],ax
	mov eax,dword ptr [ebp-0x74]
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block17:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block18:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],6
	jne Block22

 Block19:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	cmp eax,ebx
	je Block23

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block21:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x7C]
	push ecx
	call esi
	jmp Block18

 Block22:
	lea eax,[ebp-0x4C]
	push eax
	call esi

 Block23:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],7
	jne Block26

 Block24:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	cmp eax,ebx
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea edx,[ebp-0x5C]
	push edx
	call esi

 Block27:
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x100F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],8
	cmp ecx,ebx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea edx,[ebp-0x6C]
	push edx
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x24]
	mov dword ptr [ebp-0x24],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block32

 Block30:
	cmp eax,0x80004002
	je Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0xB
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	cmp eax,ebx
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[ebp-0x6C]
	push ecx
	call esi

 Block36:
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x1AA0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],0xC
	cmp esi,ebx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea eax,[ebp-0x38]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xB4C]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block41

 Block39:
	cmp eax,0x80004002
	je Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],0xB
	jne Block44

 Block42:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	cmp eax,ebx
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea edx,[ebp-0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x1010
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x38]
	push ecx
	mov byte ptr [ebp-4],0xE
	mov ecx,esi
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x28]
	mov dword ptr [ebp-0x28],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block48

 Block46:
	cmp eax,0x80004002
	je Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],0x11
	jne Block51

 Block49:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	cmp eax,ebx
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea eax,[ebp-0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block52:
	xor esi,esi
	mov dword ptr [ebp-0x18],esi
	lea ebx,[edi+0xB40]
	lea esp,[esp]

 Block53:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x3C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],0x12
	test ecx,ecx
	je Block10

 Block54:
	lea edx,[ebp-0x8C]
	push edx
	mov byte ptr [ebp-4],0x11
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x13
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block63

 Block55:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x14]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [ebx]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x14]
	mov edi,ecx
	test eax,eax
	je Block57

 Block56:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block57:
	mov dword ptr [ebx],edi
	test esi,esi
	jge Block59

 Block58:
	cmp esi,0x80004002
	jne Block72

 Block59:
	mov esi,dword ptr [ebp-0x18]

 Block60:
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],0x11
	jne Block65

 Block61:
	xor eax,eax
	mov word ptr [ebp-0x8C],ax
	mov eax,dword ptr [ebp-0x84]
	test eax,eax
	je Block66

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block63:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block60

 Block64:
	mov dword ptr [ebx],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block60

 Block65:
	lea ecx,[ebp-0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	inc esi
	add ebx,4
	cmp esi,2
	mov dword ptr [ebp-0x18],esi
	jle Block53

 Block67:
	push 0xB30
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,eax
	mov dword ptr [ebp-0x3C],ebx
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov esi,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],0x14
	test ebx,ebx
	je Block77

 Block68:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	add esi,4
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	add eax,6
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	mov esi,dword ptr [ebp-0x1C]
	add eax,0x34
	push eax
	mov eax,dword ptr [esi+0xB34]
	sub esp,8
	mov ecx,esp
	mov dword ptr [ebp-0x18],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block70

 Block69:
	add eax,0xFFFFFFF4
	push eax
	call edi

 Block70:
	sub esp,8
	lea eax,[esi+8]
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFF8
	jmp Block74

 Block72:
	push esi
	call _com_issue_error

 Block73:
	xor eax,eax

 Block74:
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block76

 Block75:
	add eax,0xC
	push eax
	call edi

 Block76:
	mov ecx,ebx
	call CUIQuestTimerAction::_ctor_0
	jmp Block78

 Block77:
	xor eax,eax

 Block78:
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block88

 Block79:
	add eax,8
	je Block88

 Block80:
	lea ebx,[eax-8]
	test ebx,ebx
	je Block82

 Block81:
	lea ecx,[ebx+0xC]
	push ecx
	call edi

 Block82:
	mov esi,dword ptr [esi+0xB3C]
	mov edx,dword ptr [ebp-0x1C]
	mov dword ptr [edx+0xB3C],ebx
	test esi,esi
	je Block86

 Block83:
	add esi,8
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block86

 Block84:
	lea ecx,[esi+4]
	push ecx
	call edi
	test esi,esi
	je Block86

 Block85:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block86:
	mov eax,dword ptr [ebp-0x28]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xB
	call edx
	mov eax,dword ptr [ebp-0x24]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],7
	call edx
	mov eax,dword ptr [ebp-0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx

 Block87:
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

 Block88:
	xor ebx,ebx
	jmp Block82
}
}
// CUIQuestTimerAction::CUIQuestTimerAction
_SUB_EXCEPTION_HANDLER(435CE0)
__SUB_CLASS_THIS(00435CE0, __thiscall, 59405,  CUIQuestTimerAction, void, NakedParam<ZRef<CUIQuestTimer>>, NakedParam<ZRef<QuestTimerInfo>>, long, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x5C]
	sub esp,0x5C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_435CE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x70
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x58],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp+0x44],esi
	xor edi,edi
	push edi
	push edi
	push 1
	push 0xFFFFFFFF
	push 0xFFFFFFFF
	push edi
	push 0x10
	mov dword ptr [ebp-4],1
	call CUIWnd::_ctor_0
	lea eax,[esi+0xB18]
	int 3// TODO: 	mov dword ptr [esi],offset CUIQuestTimerAction::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIQuestTimerAction::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIQuestTimerAction::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xB08],edi
	mov dword ptr [esi+0xB0C],edi
	mov dword ptr [esi+0xB10],0xFFFFFFFF
	mov dword ptr [esi+0xB14],edi
	mov dword ptr [ebp+0x50],eax
	mov dword ptr [eax],edi
	mov dword ptr [esi+0xB1C],edi
	mov eax,dword ptr [ebp+0x70]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esi+0xB24],eax
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ebx

 Block2:
	mov eax,dword ptr [ebp+0x68]
	mov dword ptr [esi+0xB2C],eax
	cmp eax,edi
	je Block4

 Block3:
	add eax,0xC
	push eax
	call ebx

 Block4:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x1C]
	push eax
	mov byte ptr [ebp-4],6
	call ebx
	lea ecx,[ebp-0x1C]
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
	lea edx,[ebp+0x10]
	push edx
	mov byte ptr [ebp-4],7
	call ebx
	lea eax,[ebp+0x10]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	push edi
	push edi
	lea ecx,[ebp-0x1C]
	push ecx
	lea edx,[ebp+0x10]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x54],esp
	push 0xCC1
	push eax
	mov byte ptr [ebp-4],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],9
	cmp dword ptr [_D_G_RM],edi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea ecx,[ebp-0x7C]
	push ecx
	mov byte ptr [ebp-4],8
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block13

 Block11:
	cmp eax,0x80004002
	je Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	mov ebx,8
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x7C],bx
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x74]
	xor edx,edx
	mov word ptr [ebp-0x7C],dx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[ebp-0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp+0x10],bx
	jne Block20

 Block18:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x1C],bx
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,edi
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [esi+0xB24]
	movzx ecx,word ptr [ecx]
	mov eax,esp
	push edi
	push edi
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0xF
	cmp ecx,edi
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea edx,[ebp-0x3C]
	push edx
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x3C]
	mov dword ptr [ebp+0x3C],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block30

 Block28:
	cmp eax,0x80004002
	je Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp-0x3C],bx
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	cmp eax,edi
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x54],esp
	push 0x100D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x13
	cmp ecx,edi
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	lea eax,[ebp-0x6C]
	push eax
	mov byte ptr [ebp-4],0x12
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0x14
	cmp word ptr [eax],bx
	jne Block38

 Block37:
	mov eax,dword ptr [eax+8]
	jmp Block39

 Block38:
	mov eax,offset _S_DEFAULT

 Block39:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x48]
	mov dword ptr [ebp+0x48],edi
	call ZXString16::Assign
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp-0x6C],bx
	jne Block42

 Block40:
	mov eax,dword ptr [ebp-0x64]
	xor ecx,ecx
	mov word ptr [ebp-0x6C],cx
	cmp eax,edi
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea edx,[ebp-0x6C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp]
	push eax
	call esi
	lea ecx,[ebp]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	lea edx,[ebp-0x2C]
	push edx
	mov byte ptr [ebp-4],0x17
	call esi
	lea eax,[ebp-0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	push edi
	push edi
	lea ecx,[ebp]
	push ecx
	lea edx,[ebp-0x2C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x54],esp
	push 0x100E
	mov bl,0x18
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x19
	cmp dword ptr [_D_G_RM],edi
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	lea ecx,[ebp-0x4C]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x38]
	mov dword ptr [ebp+0x38],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block52

 Block50:
	cmp eax,0x80004002
	je Block52

 Block51:
	push eax
	call _com_issue_error

 Block52:
	mov esi,8
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp-0x4C],si
	jne Block59

 Block53:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	cmp eax,edi
	je Block55

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block55:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block56:
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp-0x2C],si
	jne Block60

 Block57:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	cmp eax,edi
	je Block61

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block59:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x4C]
	push eax
	call ebx
	jmp Block56

 Block60:
	lea edx,[ebp-0x2C]
	push edx
	call ebx

 Block61:
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp],si
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	cmp eax,edi
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[ebp]
	push ecx
	call ebx

 Block65:
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x54],esp
	push 0x1011
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x1F
	cmp ecx,edi
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	lea eax,[ebp-0x5C]
	push eax
	mov byte ptr [ebp-4],0x1E
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x20
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x40]
	mov dword ptr [ebp+0x40],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block70

 Block68:
	cmp eax,0x80004002
	je Block70

 Block69:
	push eax
	call _com_issue_error

 Block70:
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp-0x5C],si
	jne Block73

 Block71:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	cmp eax,edi
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea edx,[ebp-0x5C]
	push edx
	call ebx

 Block74:
	mov eax,dword ptr [ebp+0x48]
	push edi
	push edi
	push ecx
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0x23
	cmp ecx,edi
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	lea edx,[ebp+0x28]
	push edx
	mov byte ptr [ebp-4],0x22
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x24
	call Ztl_variant_t::GetUnknown
	mov esi,dword ptr [ebp+0x50]
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block79

 Block77:
	cmp eax,0x80004002
	je Block79

 Block78:
	push eax
	call _com_issue_error

 Block79:
	cmp word ptr [ebp+0x28],8
	mov byte ptr [ebp-4],0x22
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [ebp+0x28],ax
	mov eax,dword ptr [ebp+0x30]
	cmp eax,edi
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[ebp+0x28]
	push ecx
	call ebx

 Block83:
	push edi
	push edi
	push ecx
	mov dword ptr [ebp+0x50],esp
	mov ecx,esp
	push offset _S_0
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi]
	mov byte ptr [ebp-4],0x25
	cmp ecx,edi
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	lea edx,[ebp+0x28]
	push edx
	mov byte ptr [ebp-4],0x22
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x26
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block88

 Block86:
	cmp eax,0x80004002
	je Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	mov esi,8
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp+0x28],si
	jne Block91

 Block89:
	xor eax,eax
	mov word ptr [ebp+0x28],ax
	mov eax,dword ptr [ebp+0x30]
	cmp eax,edi
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea ecx,[ebp+0x28]
	push ecx
	call ebx

 Block92:
	push edi
	push edi
	push ecx
	mov dword ptr [ebp+0x50],esp
	mov ecx,esp
	push offset _S_0
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x27
	cmp ecx,edi
	jne Block94

 Block93:
	push 0x80004003
	call _com_issue_error

 Block94:
	lea edx,[ebp+0x28]
	push edx
	mov byte ptr [ebp-4],0x22
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x28
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x24]
	mov dword ptr [ebp+0x24],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block97

 Block95:
	cmp eax,0x80004002
	je Block97

 Block96:
	push eax
	call _com_issue_error

 Block97:
	mov byte ptr [ebp-4],0x2A
	cmp word ptr [ebp+0x28],si
	jne Block100

 Block98:
	xor eax,eax
	mov word ptr [ebp+0x28],ax
	mov eax,dword ptr [ebp+0x30]
	cmp eax,edi
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea ecx,[ebp+0x28]
	push ecx
	call ebx

 Block101:
	mov esi,dword ptr [ebp+0x24]
	cmp esi,edi
	jne Block103

 Block102:
	push 0x80004003
	call _com_issue_error

 Block103:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[ebp+0x20]
	push eax
	push esi
	mov dword ptr [ebp+0x20],edi
	call ecx
	cmp eax,edi
	jge Block105

 Block104:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block105:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	mov ebx,dword ptr [ebp+0x20]
	lea eax,[ebp+0x54]
	push eax
	push esi
	mov dword ptr [ebp+0x54],edi
	call ecx
	cmp eax,edi
	jge Block107

 Block106:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block107:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	mov edi,dword ptr [ebp+0x54]
	lea eax,[ebp+0x50]
	push eax
	push esi
	mov dword ptr [ebp+0x50],0
	call ecx
	test eax,eax
	jge Block109

 Block108:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block109:
	mov edx,dword ptr [ebp+0x50]
	mov eax,dword ptr [ebp+0x78]
	mov ecx,dword ptr [ebp+0x74]
	push 0
	push 0
	push 0
	push 1
	push 0xA
	push ebx
	shr edx,1
	sub eax,edx
	push edi
	dec eax
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x44]
	call CWnd::CreateWnd
	push offset _S_DEFAULT
	lea ecx,[ebp+0x48]
	call ZXString16::Compare
	test eax,eax
	jne Block111

 Block110:
	mov edx,dword ptr [ebp+0x44]
	mov dword ptr [edx+0xB0C],1

 Block111:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0x22
	call ecx
	mov eax,dword ptr [ebp+0x40]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0x1E
	call eax
	mov eax,dword ptr [ebp+0x38]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x16
	call edx
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x12
	test eax,eax
	je Block113

 Block112:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block113:
	mov eax,dword ptr [ebp+0x3C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xE
	call edx
	mov eax,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],6
	call edx
	cmp dword ptr [ebp+0x68],0
	mov byte ptr [ebp-4],0
	je Block115

 Block114:
	push 0
	lea ecx,[ebp+0x64]
	call ZRef<CUIQuestTimer>::_ReleaseRaw
	mov dword ptr [ebp+0x68],0

 Block115:
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block119

 Block116:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block119

 Block117:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block119

 Block118:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block119:
	mov eax,dword ptr [ebp+0x44]
	lea esp,[ebp-0x8C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x58]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x5C
	mov esp,ebp
	pop ebp
	ret 0x18
}
}
// CUIQuestTimerAction::OnDestroy
_SUB_EXCEPTION_HANDLER(4366A0)
__SUB_CLASS_THIS0(004366A0, __thiscall, 59407,  CUIQuestTimerAction, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4366A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [ebp-0x24],edi
	mov esi,dword ptr [edi+0xB18]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp-0x14]
	push ecx
	push esi
	mov dword ptr [ebp-0x14],0
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov esi,dword ptr [ebp-0x14]
	mov eax,0x20
	dec esi
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x20],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi+0xB18]
	mov dword ptr [ebp-4],0
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[ebp-0x58]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
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
	cmp word ptr [ebp-0x58],8
	mov byte ptr [ebp-4],3
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x50]
	xor ecx,ecx
	mov word ptr [ebp-0x58],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[ebp-0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	xor edi,edi
	mov dword ptr [ebp-0x28],edi
	mov byte ptr [ebp-4],4
	cmp dword ptr [ebp-0x14],edi
	je Block38

 Block14:
	push edi
	push 0xFF
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x5C],esp
	mov dword ptr [eax],edi
	mov ecx,dword ptr [ebp-0x24]
	push edi
	push edi
	lea eax,[ebp-0x1C]
	push eax
	mov byte ptr [ebp-4],5
	call CWnd::GetLayer
	push ecx
	mov esi,esp
	mov dword ptr [ebp-0x18],esp
	mov dword ptr [esi],edi
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],6
	mov dword ptr [ebp-0x18],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block16:
	mov ecx,esi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	test eax,eax
	jge Block19

 Block17:
	cmp eax,0x80004002
	je Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	push 0
	push ecx
	mov ecx,dword ptr [ebp-0x14]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ecx]
	mov dword ptr [ebp-0x18],esp
	push ecx
	mov ecx,dword ptr [eax+4]
	call ecx
	lea edx,[ebp-0x20]
	push edx
	mov byte ptr [ebp-4],7
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	add esp,0x28
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [ebp-0x28],edi
	call edx

 Block21:
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block25:
	test edi,edi
	je Block38

 Block26:
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x18],esp
	push 0
	push ecx
	mov dword ptr [eax],0
	mov eax,esp
	mov dword ptr [eax],edi
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [ebp-0x18],esp
	push edi
	call ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x48]
	push edx
	call esi
	lea eax,[ebp-0x48]
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
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea eax,[ebp-0x48]
	push eax
	lea ecx,[ebp-0x38]
	push ecx
	push 0
	mov ecx,edi
	mov byte ptr [ebp-4],9
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x38],si
	jne Block33

 Block31:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[ebp-0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x48],si
	jne Block37

 Block35:
	mov eax,dword ptr [ebp-0x40]
	xor ecx,ecx
	mov word ptr [ebp-0x48],cx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[ebp-0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov eax,dword ptr [ebp-0x24]
	cmp dword ptr [eax+0xB0C],0
	je Block43

 Block39:
	mov eax,dword ptr [eax+0xB14]
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	push eax
	call CSoundMan::StopSE

 Block41:
	lea eax,[ebp-0x1C]
	push 0x1013
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov byte ptr [ebp-4],0xA
	call play_game_sound
	mov eax,dword ptr [ebp-0x1C]
	add esp,8
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block43:
	mov byte ptr [ebp-4],3
	test edi,edi
	je Block45

 Block44:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block45:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block47:
	lea esp,[ebp-0x68]
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
	ret
}
}
// CUIQuestTimer::Update
__SUB_CLASS_THIS0(00437CA0, __thiscall, 59514,  CUIQuestTimer, void) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov esi,ecx
	call CWnd::Update
	call dword ptr [ZImports::_timeGetTime]
	mov ecx,dword ptr [esi+0xB34]
	mov ebx,eax
	mov eax,dword ptr [esi+0xB24]
	add ecx,8
	sub eax,ebx
	add dword ptr [ecx],eax
	mov dword ptr [esi+0xB24],ebx
	cmp dword ptr [ecx],0
	jge Block2

 Block1:
	mov dword ptr [ecx],0

 Block2:
	mov edx,dword ptr [esi+0xB34]
	mov edx,dword ptr [edx+4]
	mov eax,0x2AAAAAAB
	imul edx
	sar edx,3
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	je Block11

 Block3:
	mov eax,dword ptr [ecx]
	cdq
	idiv edi
	inc eax
	cmp dword ptr [esi+0xB20],eax
	je Block5

 Block4:
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xB20],eax
	call CWnd::InvalidateRect

 Block5:
	mov eax,dword ptr [esi+0xB28]
	add eax,0x1F4
	cmp eax,ebx
	jge Block11

 Block6:
	cmp dword ptr [esi+0xB10],0
	je Block8

 Block7:
	mov ecx,esi
	call CUIQuestTimer::SetToolTip
	pop edi
	mov dword ptr [esi+0xB28],ebx
	pop esi
	pop ebx
	ret

 Block8:
	cmp dword ptr [esi+0x94],0
	je Block10

 Block9:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x34]
	lea ecx,[esi+4]
	call eax

 Block10:
	mov dword ptr [esi+0xB28],ebx

 Block11:
	pop edi
	pop esi
	pop ebx
	ret
}
}
// CUIQuestTimer::GetRemainTimeString
_SUB_EXCEPTION_HANDLER(435BC0)
__SUB_CLASS_THIS(00435BC0, __thiscall, 59528,  CUIQuestTimer, ZXString<char>*, ZXString<char>*, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_435BC0
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
	xor eax,eax
	mov dword ptr [esp+0x14],eax
	mov ebp,dword ptr [esp+0x28]
	mov dword ptr [ebp],eax
	mov ecx,dword ptr [ecx+0xB34]
	mov ecx,dword ptr [ecx+8]
	mov dword ptr [esp+0x20],eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov eax,0x91A2B3C5
	imul ecx
	add edx,ecx
	sar edx,0xB
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	mov eax,edi
	imul eax,0xFFFFF1F0
	add ecx,eax
	mov eax,0x88888889
	imul ecx
	add edx,ecx
	sar edx,5
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	mov edx,esi
	shl edx,4
	sub edx,esi
	add edx,edx
	add edx,edx
	sub ecx,edx
	cmp dword ptr [esp+0x2C],0
	mov dword ptr [esp+0x14],1
	mov ebx,ecx
	je Block2

 Block1:
	lea eax,[esp+0x2C]
	push 0x18BD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x20],1
	jmp Block3

 Block2:
	lea ecx,[esp+0x2C]
	push 0x1014
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x20],2

 Block3:
	mov eax,dword ptr [eax]
	push ebx
	push esi
	push edi
	push eax
	push ebp
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x40]
	add esp,0x14
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov eax,ebp
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
// CUIQuestTimer::CUIQuestTimer
_SUB_EXCEPTION_HANDLER(436D00)
__SUB_CLASS_THIS(00436D00, __thiscall, 59512,  CUIQuestTimer, void, uint16_t, long, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_436D00
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
	mov dword ptr [esp+0x14],esi
	xor ebx,ebx
	push ebx
	push ebx
	push 1
	push 0xFFFFFFFF
	push 0xFFFFFFFF
	push ebx
	push 0xF
	call CUIWnd::_ctor_0
	mov edi,dword ptr [esp+0x38]
	mov ebp,dword ptr [esp+0x3C]
	mov eax,dword ptr [esp+0x40]
	int 3// TODO: 	mov dword ptr [esi],offset CUIQuestTimer::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIQuestTimer::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIQuestTimer::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xB08],edi
	mov dword ptr [esi+0xB0C],ebp
	mov dword ptr [esi+0xB10],ebx
	mov dword ptr [esi+0xB14],ebx
	mov dword ptr [esi+0xB20],ebx
	mov dword ptr [esi+0xB24],ebx
	mov dword ptr [esi+0xB28],ebx
	mov dword ptr [esi+0xB2C],eax
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esi+0xB34],ebx
	mov dword ptr [esi+0xB3C],ebx
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 4
	push 4
	lea ecx,[esi+0xB40]
	push ecx
	mov byte ptr [esp+0x3C],2
	call __eh_vector_ctor_iterator
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x28],3
	mov dword ptr [esp+0x1C],ebx
	call ZRef<QuestTimerInfo>::_Alloc
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esi+0xB30]
	mov byte ptr [esp+0x2C],4
	call ZRef<QuestTimerInfo>::op_assign_copy
	mov eax,dword ptr [esi+0xB34]
	mov cx,word ptr [esp+0x30]
	mov edx,dword ptr [esp+0x34]
	mov word ptr [eax],cx
	mov eax,dword ptr [esi+0xB34]
	mov dword ptr [eax+8],edx
	call dword ptr [ZImports::_timeGetTime]
	push ebx
	push ebx
	push ebx
	push 1
	push 0xA
	push 0xC
	push 0x34
	push ebp
	push edi
	mov ecx,esi
	mov dword ptr [esi+0xB24],eax
	mov dword ptr [esi+0xB18],ebx
	mov dword ptr [esi+0xB1C],ebx
	mov byte ptr [esi+0xAF9],bl
	mov dword ptr [esi+0xAE8],edi
	mov dword ptr [esi+0xAEC],ebp
	call CWnd::CreateWnd
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x28],3
	cmp eax,ebx
	je Block4

 Block1:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block4

 Block3:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block4:
	mov eax,esi
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 0x14
}
}
// CUIQuestTimer::GetRTTI
__SUB_CLASS_THIS0(00436EA0, __thiscall, 59531,  CUIQuestTimer, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIQuestTimer::ms_RTTI_CUIQuestTimer
	ret
}
}
// CUIQuestTimer::SetToolTipVisible
__SUB_CLASS_THIS(00435510, __thiscall, 59524,  CUIQuestTimer, void, int32_t) {
__asm {

 Block0:
	push edi
	mov edi,ecx
	cmp dword ptr [edi+0x18],0
	je Block6

 Block1:
	push esi
	mov esi,dword ptr [edi+0x18]
	test esi,esi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x11C]
	push ebx
	mov ebx,dword ptr [esp+0x10]
	push ebx
	push esi
	call ecx
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block5:
	mov ecx,dword ptr [edi+0xB3C]
	push ebx
	call CUIQuestTimerAction::SetVisible
	pop ebx
	pop esi

 Block6:
	pop edi
	ret 4
}
}
// CUIQuestTimer::SetToolTip
_SUB_EXCEPTION_HANDLER(4377E0)
__SUB_CLASS_THIS0(004377E0, __thiscall, 59514,  CUIQuestTimer, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4377E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esi+0xB10],1
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	test ecx,ecx
	je Block9

 Block1:
	mov eax,dword ptr [esi+0xB34]
	movzx eax,word ptr [eax]
	push eax
	lea edx,[esp+0x18]
	push edx
	call CQuestMan::GetQuestName
	push 0
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x30],0
	call CUIQuestTimer::GetRemainTimeString
	push offset _S___22
	lea ecx,[esp+0x1C]
	push ecx
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x30],1
	call ZXString<char>::op_add_0
	lea edx,[esp+0x10]
	push edx
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,eax
	mov byte ptr [esp+0x30],2
	call ZXString<char>::op_add_1
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x28],4
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	push 1
	push 0x96
	push ecx
	mov ecx,esp
	lea edx,[esp+0x18]
	mov dword ptr [esp+0x28],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x30]
	lea edi,[esi+4]
	mov ecx,edi
	mov byte ptr [esp+0x34],5
	call edx
	mov ecx,dword ptr [esi+0xB1C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [edi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	mov ecx,dword ptr [esi+0xB18]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0x88]
	mov byte ptr [esp+0x3C],4
	call CUIToolTip::SetToolTip_String_MultiLine
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x28],1
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x28],0
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret
}
}
// CUIQuestTimerAction::Update
_SUB_EXCEPTION_HANDLER(437950)
__SUB_CLASS_THIS0(00437950, __thiscall, 59407,  CUIQuestTimerAction, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_437950
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
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
	call CWnd::Update
	mov edi,dword ptr [esi+0xB18]
	test edi,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp-0x18]
	push ecx
	push edi
	mov dword ptr [ebp-0x18],0
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block4:
	mov edi,dword ptr [ebp-0x18]
	add edi,0xFFFFFFFF
	mov dword ptr [ebp-0x14],edi
	je Block35

 Block5:
	mov ecx,dword ptr [esi+0xB24]
	mov eax,dword ptr [ecx+4]
	cdq
	idiv edi
	mov edi,eax
	test edi,edi
	je Block35

 Block6:
	mov eax,dword ptr [ecx+4]
	sub eax,dword ptr [ecx+8]
	cdq
	idiv edi
	mov ebx,eax
	cmp ebx,dword ptr [ebp-0x14]
	jne Block8

 Block7:
	dec ebx

 Block8:
	cmp dword ptr [esi+0xB10],ebx
	je Block35

 Block9:
	mov eax,0x20
	mov dword ptr [esi+0xB10],ebx
	call __chkstk
	mov eax,esp
	xor edi,edi
	push edi
	push edi
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x20],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0xB18]
	mov dword ptr [ebp-4],edi
	cmp ecx,edi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[ebp-0x34]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],3
	jne Block17

 Block15:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	cmp eax,edi
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[ebp-0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov edi,dword ptr [ebp-0x18]
	test edi,edi
	je Block23

 Block19:
	push 0
	push 0xFF
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x38],esp
	mov dword ptr [eax],0
	push 0
	push 0
	lea eax,[ebp-0x1C]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],4
	call CWnd::GetLayer
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x24],esp
	push eax
	mov byte ptr [ebp-4],5
	call _x_com_ptr<IWzVector2D>::CreateFromWzGr2DLayerComPtr
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [ebp-0x24],esp
	push edi
	call edx
	lea eax,[ebp-0x20]
	push eax
	mov byte ptr [ebp-4],6
	call CAnimationDisplayer::LoadLayer_0
	add esp,0x28
	push eax
	lea ecx,[esi+0xB1C]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
	cmp dword ptr [esi+0xB1C],0
	je Block27

 Block24:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x58]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x48]
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esi+0xB1C]
	mov byte ptr [ebp-4],8
	test ecx,ecx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea eax,[ebp-0x58]
	push eax
	lea edx,[ebp-0x48]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	lea ecx,[ebp-0x48]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x58]
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::~Ztl_variant_t

 Block27:
	cmp dword ptr [esi+0xB0C],0
	je Block33

 Block28:
	mov eax,dword ptr [ebp-0x14]
	dec eax
	cmp ebx,eax
	jne Block33

 Block29:
	lea ecx,[ebp-0x14]
	push 0x8C3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	lea edx,[ebp-0x1C]
	push 0x1012
	mov bl,9
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp-0x14]
	mov byte ptr [ebp-4],0xA
	call ZXString16::op_add_assign_other_1
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block31:
	mov eax,dword ptr [ebp-0x14]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 1
	push 0x64
	push eax
	call CSoundMan::PlaySE
	mov dword ptr [esi+0xB14],eax
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block33:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test edi,edi
	je Block35

 Block34:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block35:
	lea esp,[ebp-0x68]
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
