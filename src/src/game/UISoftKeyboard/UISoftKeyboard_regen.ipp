#include "regen.hpp"
// UISoftKeyboard.ipp
#include "UISoftKeyboard.hpp"

// CUISoftKeyboard::OnMouseButton
_SUB_EXCEPTION_HANDLER(4606A0)
__SUB_CLASS_THIS(004606A0, __thiscall, 85169,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4606A0
	mov eax,dword ptr fs:[0]
	push eax
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	cmp dword ptr [edi+0xB8],0xFFFFFFFF
	jle Block13

 Block1:
	cmp dword ptr [esp+0x20],0x201
	jne Block13

 Block2:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x28]
	push eax
	lea ebp,[edi-4]
	push ecx
	mov ecx,ebp
	call CUISoftKeyboard::GetKeyIndexFromPoint
	mov esi,eax
	cmp esi,0x24
	ja Block13

 Block3:
	mov edx,dword ptr [edi+0xBC]
	cmp byte ptr [edx+esi*2+1],2
	je Block13

 Block4:
	mov ecx,dword ptr [edi+0xA8]
	lea eax,[esp+0x20]
	push eax
	call CCtrlEdit::GetText
	push esi
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x20],0
	call CUISoftKeyboard::GetCharacterFromKeyIndex
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x1C],1
	call ZXString<char>::op_add_assign_other_0
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	cmp esi,0xFFFFFFFF
	je Block8

 Block7:
	push esi
	mov ecx,ebp
	call CUISoftKeyboard::SetRandomKeyMap

 Block8:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block10

 Block9:
	mov eax,dword ptr [eax-4]
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	push eax
	mov ecx,ebp
	call CUISoftKeyboard::UpdateKeyConstraint
	mov edx,dword ptr [esp+0x20]
	mov ecx,dword ptr [edi+0xA8]
	push edx
	call CCtrlEdit::SetText
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0xC
	ret 0x10
}
}
// CUISoftKeyboard::CUISoftKeyboard
_SUB_EXCEPTION_HANDLER(460220)
__SUB_CLASS_THIS0(00460220, __thiscall, 85162,  CUISoftKeyboard, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_460220
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
	int 3// TODO: 	mov dword ptr [esi],offset CUISoftKeyboard::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUISoftKeyboard::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUISoftKeyboard::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xAC],edi
	or eax,0xFFFFFFFF
	mov dword ptr [esi+0xB0],eax
	mov dword ptr [esi+0xBC],eax
	mov dword ptr [esi+0xC0],edi
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 0x90
	push 4
	lea eax,[esi+0xC4]
	push eax
	mov byte ptr [esp+0x2C],5
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x304],edi
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0x7F
	push 0x13B
	push 0x11E
	push 0xF2
	mov ecx,esi
	mov byte ptr [esp+0x3C],7
	call CWnd::CreateWnd
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
// CUISoftKeyboard::OnDestroy
__SUB_CLASS_THIS0(00460430, __thiscall, 85164,  CUISoftKeyboard, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x8C]
	test ecx,ecx
	je Block3

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	push 3
	call edx
	add esi,0x88
	cmp dword ptr [esi+4],0
	je Block3

 Block2:
	push 0
	mov ecx,esi
	call ZRef<CDialog>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block3:
	pop esi
	ret
}
}
// CUISoftKeyboard::SetSoftKeyboard
_SUB_EXCEPTION_HANDLER(460540)
__SUB_CLASS_THIS(00460540, __thiscall, 85174,  CUISoftKeyboard, void, CCtrlWnd*, SOFTKEYBOARDPARAM*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_460540
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
	mov edi,dword ptr [esp+0x1C]
	test edi,edi
	je Block7

 Block1:
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[edi+4]
	push offset CCtrlEdit::ms_RTTI_CCtrlEdit
	call edx
	neg eax
	sbb eax,eax
	and eax,edi
	push eax
	lea ecx,[esi+0xA8]
	call ZRef<CCtrlEdit>::op_assign_ptr
	mov ecx,dword ptr [esi+0xAC]
	test ecx,ecx
	je Block7

 Block2:
	mov eax,dword ptr [esp+0x20]
	mov edx,dword ptr [eax]
	mov dword ptr [esi+0xB4],edx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esi+0xB8],edx
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esi+0xBC],eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block4

 Block3:
	mov eax,dword ptr [eax-4]
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	push eax
	mov ecx,esi
	call CUISoftKeyboard::UpdateKeyConstraint
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 8
}
}
// CUISoftKeyboard::ResetRandomKeyMap
__SUB_CLASS_THIS0(00460510, __thiscall, 85164,  CUISoftKeyboard, void) {
__asm {

 Block0:
	push ecx
	push ebx
	xor ebx,ebx
	push esi
	mov byte ptr [esp+9],bl
	lea esi,[ecx+0xC0]
	nop

 Block1:
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0xC],bl
	call ZArray<KEYMAP>::InsertBefore
	mov cx,word ptr [esp+8]
	inc ebx
	cmp ebx,0x24
	mov word ptr [eax],cx
	jl Block1

 Block2:
	pop esi
	pop ebx
	pop ecx
	ret
}
}
// CUISoftKeyboard::GetCharacterFromKeyIndex
_SUB_EXCEPTION_HANDLER(460620)
__SUB_CLASS_THIS(00460620, __thiscall, 85178,  CUISoftKeyboard, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_460620
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+8],eax
	mov esi,dword ptr [esp+0x1C]
	mov dword ptr [esi],eax
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [ecx+0xC0]
	mov ecx,dword ptr [esp+0x20]
	movzx eax,byte ptr [eax+ecx*2]
	cmp eax,0xA
	mov dword ptr [esp+8],1
	jge Block2

 Block1:
	push eax
	push offset _S_D__1
	jmp Block3

 Block2:
	add eax,0x37
	push eax
	push offset _S_C__2

 Block3:
	push esi
	call ZXString<char>::Format
	mov eax,esi
	add esp,0xC
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 8
}
}
// CUISoftKeyboard::Draw
_SUB_EXCEPTION_HANDLER(45FFA0)
__SUB_CLASS_THIS(0045FFA0, __thiscall, 85167,  CUISoftKeyboard, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_45FFA0
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
	mov ebp,ecx
	mov eax,dword ptr [esp+0x3C]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,ebp
	call CWnd::GetCanvas
	mov edx,3
	mov ecx,0xFF
	mov dword ptr [esp+0x34],0
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],ecx
	mov esi,dword ptr [esp+0x14]
	mov edx,dword ptr [ebp+0x304]
	mov byte ptr [esp+0x34],1
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ebx,dword ptr [esp+0x1C]
	mov edi,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x30]
	push edx
	mov edx,dword ptr [edi+0x80]
	push 0x12
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x40]
	push 0x16
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	xor ebx,ebx
	cmp eax,ebx
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],bl
	jne Block7

 Block5:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov dword ptr [esp+0x3C],ebx
	mov edi,offset _D_S_PTKEYPOS
	mov eax,2

 Block9:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],ecx
	mov edx,dword ptr [esp+0x3C]
	mov ebx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x34],al
	mov eax,dword ptr [ebp+0xC0]
	add eax,edx
	movzx edx,byte ptr [eax]
	movzx eax,byte ptr [eax+1]
	lea edx,[eax+edx*4]
	mov eax,dword ptr [ebp+edx*4+0xC4]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov dword ptr [esp+0x28],eax
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x30]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [edx+0x80]
	push eax
	mov eax,dword ptr [edi+4]
	push eax
	mov eax,dword ptr [edi]
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block11

 Block10:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block11:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],0
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov eax,2
	add dword ptr [esp+0x3C],eax
	add edi,8
	cmp edi,offset CUIStat::ms_RTTI_CUIStat
	jl Block9

 Block16:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call edx
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
// CUISoftKeyboard::GetKeyIndexFromPoint
__SUB_CLASS_THIS(0045FAA0, __thiscall, 85177,  CUISoftKeyboard, long, long, long) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+8]
	add ecx,0xFFFFFFEC
	js Block15

 Block1:
	mov eax,0xB21642C9
	imul ecx
	add edx,ecx
	sar edx,4
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	movzx eax,al
	cmp eax,3
	ja Block15

 Block2:
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block6
cmp EAX, 2
je Block9
cmp EAX, 3
je Block12


 Block3:
	mov ecx,dword ptr [esp+4]
	add ecx,0xFFFFFFE8
	js Block15

 Block4:
	mov eax,0xB21642C9
	imul ecx
	add edx,ecx
	sar edx,4
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp al,9
	ja Block15

 Block5:
	movzx eax,al
	ret 8

 Block6:
	mov ecx,dword ptr [esp+4]
	add ecx,0xFFFFFFD1
	js Block15

 Block7:
	mov eax,0xB21642C9
	imul ecx
	add edx,ecx
	sar edx,4
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp al,9
	ja Block15

 Block8:
	movzx eax,al
	add eax,0xA
	ret 8

 Block9:
	mov ecx,dword ptr [esp+4]
	add ecx,0xFFFFFFC6
	js Block15

 Block10:
	mov eax,0xB21642C9
	imul ecx
	add edx,ecx
	sar edx,4
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp al,8
	ja Block15

 Block11:
	movzx eax,al
	add eax,0x14
	ret 8

 Block12:
	mov ecx,dword ptr [esp+4]
	add ecx,0xFFFFFFB6
	js Block15

 Block13:
	mov eax,0xB21642C9
	imul ecx
	add edx,ecx
	sar edx,4
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp al,6
	ja Block15

 Block14:
	movzx eax,al
	add eax,0x1D
	ret 8

 Block15:
	or eax,0xFFFFFFFF
	ret 8
}
}
// CUISoftKeyboard::UpdateKeyConstraint
__SUB_CLASS_THIS(0045FD70, __thiscall, 85176,  CUISoftKeyboard, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xBC]
	cmp eax,3
	ja Block18

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block4
cmp EAX, 2
je Block12
cmp EAX, 3
je Block15


 Block2:
	mov eax,dword ptr [esp+4]
	cmp eax,dword ptr [ecx+0xB8]
	jl Block18

 Block3:
	mov dword ptr [esp+4],3
	jmp  CUISoftKeyboard::SetKeyMode

 Block4:
	mov edx,dword ptr [esp+4]
	test edx,edx
	jne Block6

 Block5:
	mov dword ptr [esp+4],1
	jmp  CUISoftKeyboard::SetKeyMode

 Block6:
	mov eax,dword ptr [ecx+0xB8]
	dec eax
	cmp edx,eax
	jge Block8

 Block7:
	mov dword ptr [esp+4],2
	jmp  CUISoftKeyboard::SetKeyMode

 Block8:
	jne Block10

 Block9:
	mov dword ptr [esp+4],1
	jmp  CUISoftKeyboard::SetKeyMode

 Block10:
	cmp edx,eax
	jle Block18

 Block11:
	mov dword ptr [esp+4],3
	jmp  CUISoftKeyboard::SetKeyMode

 Block12:
	mov edx,dword ptr [esp+4]
	cmp edx,dword ptr [ecx+0xB8]
	jl Block14

 Block13:
	mov dword ptr [esp+4],3
	jmp  CUISoftKeyboard::SetKeyMode

 Block14:
	mov dword ptr [esp+4],2
	jmp  CUISoftKeyboard::SetKeyMode

 Block15:
	mov eax,dword ptr [esp+4]
	cmp eax,dword ptr [ecx+0xB8]
	jl Block17

 Block16:
	mov dword ptr [esp+4],3
	jmp  CUISoftKeyboard::SetKeyMode

 Block17:
	mov dword ptr [esp+4],2
	jmp  CUISoftKeyboard::SetKeyMode

 Block18:
	ret 4
}
}
// CUISoftKeyboard::OnCreate
_SUB_EXCEPTION_HANDLER(4607D0)
__SUB_CLASS_THIS(004607D0, __thiscall, 85165,  CUISoftKeyboard, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4607D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x110
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x124]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x24],ebx
	xor ebp,ebp
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x68],esp
	push 0xBF0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,ebx
	call CWnd::SetBackgrnd
	mov dword ptr [esp+0x60],ebp
	mov dword ptr [esp+0x54],1
	mov dword ptr [esp+0x58],ebp
	mov dword ptr [esp+0x5C],ebp
	lea ecx,[esp+0x14]
	push 0xBF2
	push ecx
	mov dword ptr [esp+0x134],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x64]
	mov byte ptr [esp+0x130],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x12C],0
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
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x12C],2
	cmp eax,ebp
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x12C],0
	cmp eax,ebp
	je Block15

 Block6:
	add eax,8
	cmp eax,ebp
	je Block15

 Block7:
	lea esi,[eax-8]
	cmp esi,ebp
	je Block9

 Block8:
	lea edx,[esi+0xC]
	push edx
	call edi

 Block9:
	mov eax,dword ptr [ebx+0x94]
	mov dword ptr [ebx+0x94],esi
	mov dword ptr [esp+0x2C],eax
	cmp eax,ebp
	je Block11

 Block10:
	push ebp
	lea ecx,[esp+0x2C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [ebx+0x94]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x54]
	push edx
	push ebp
	push 2
	push 0x118
	push 2
	push ebx
	call eax
	lea ecx,[esp+0x14]
	push 0xBF3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x64]
	mov byte ptr [esp+0x130],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x12C],0
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
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x12C],4
	cmp eax,ebp
	je Block16

 Block14:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block17

 Block15:
	xor esi,esi
	jmp Block9

 Block16:
	xor eax,eax

 Block17:
	mov byte ptr [esp+0x12C],0
	cmp eax,ebp
	je Block27

 Block18:
	add eax,8
	cmp eax,ebp
	je Block27

 Block19:
	lea esi,[eax-8]
	cmp esi,ebp
	je Block21

 Block20:
	lea edx,[esi+0xC]
	push edx
	call edi

 Block21:
	mov eax,dword ptr [ebx+0x9C]
	mov dword ptr [ebx+0x9C],esi
	mov dword ptr [esp+0x2C],eax
	cmp eax,ebp
	je Block23

 Block22:
	push ebp
	lea ecx,[esp+0x2C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [ebx+0x9C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x54]
	push edx
	push ebp
	push 0x14
	push 0x115
	push 0x2710
	push ebx
	call eax
	lea ecx,[esp+0x14]
	push 0xBF4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x64]
	mov byte ptr [esp+0x130],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x12C],0
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
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x12C],6
	cmp eax,ebp
	je Block28

 Block26:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block29

 Block27:
	xor esi,esi
	jmp Block21

 Block28:
	xor eax,eax

 Block29:
	mov byte ptr [esp+0x12C],0
	cmp eax,ebp
	je Block45

 Block30:
	add eax,8
	cmp eax,ebp
	je Block45

 Block31:
	lea esi,[eax-8]
	cmp esi,ebp
	je Block33

 Block32:
	lea edx,[esi+0xC]
	push edx
	call edi

 Block33:
	mov eax,dword ptr [ebx+0xA4]
	mov dword ptr [ebx+0xA4],esi
	mov dword ptr [esp+0x2C],eax
	cmp eax,ebp
	je Block35

 Block34:
	push ebp
	lea ecx,[esp+0x2C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block35:
	mov ecx,dword ptr [ebx+0xA4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x54]
	push edx
	push ebp
	push 0x42
	push 0x109
	push 1
	push ebx
	call eax
	mov dword ptr [esp+0x20],ebp

 Block36:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 0x24
	push 4
	lea ecx,[esp+0xA4]
	push ecx
	call __eh_vector_ctor_iterator
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x130],7
	call esi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	xor edi,edi
	add esp,8
	cmp eax,edi
	jl Block81

 Block37:
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x130],8
	call esi
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block81

 Block38:
	push edi
	push edi
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0xBF5
	push edx
	mov byte ptr [esp+0x148],9
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x140],0xA
	cmp dword ptr [_D_G_RM],edi
	je Block85

 Block39:
	lea eax,[esp+0x98]
	mov byte ptr [esp+0x140],9
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x134],0xB
	call Ztl_variant_t::GetUnknown
	mov dword ptr [esp+0x14],edi
	cmp eax,edi
	je Block42

 Block40:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x78]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x78]
	cmp eax,edi
	mov dword ptr [esp+0x14],ecx
	jge Block42

 Block41:
	cmp eax,0x80004002
	jne Block81

 Block42:
	mov esi,8
	mov byte ptr [esp+0x12C],0xD
	cmp word ptr [esp+0x84],si
	jne Block46

 Block43:
	mov eax,dword ptr [esp+0x8C]
	xor edx,edx
	mov word ptr [esp+0x84],dx
	cmp eax,edi
	je Block47

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block45:
	xor esi,esi
	jmp Block33

 Block46:
	lea eax,[esp+0x84]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block47:
	mov byte ptr [esp+0x12C],0xE
	cmp word ptr [esp+0x40],si
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	cmp eax,edi
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov byte ptr [esp+0x12C],0xF
	cmp word ptr [esp+0x30],si
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,edi
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x20]
	lea ebx,[edx+eax*4+0xC4]

 Block56:
	mov dword ptr [esp+0x1C],0
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x12C],0x10
	cmp eax,3
	ja Block64

 Block57:
	cmp EAX, 0
je Block58
cmp EAX, 1
je Block59
cmp EAX, 2
je Block60
cmp EAX, 3
je Block61


 Block58:
	lea ecx,[esp+0x80]
	push 0xBF6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x138],0x11
	call ZXString16::Format
	mov eax,dword ptr [esp+0x8C]
	jmp Block62

 Block59:
	lea eax,[esp+0x7C]
	push 0xBF7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov byte ptr [esp+0x138],0x12
	call ZXString16::Format
	mov eax,dword ptr [esp+0x88]
	jmp Block62

 Block60:
	lea edx,[esp+0x74]
	push 0xBF8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x138],0x13
	call ZXString16::Format
	mov eax,dword ptr [esp+0x80]
	jmp Block62

 Block61:
	lea ecx,[esp+0x50]
	push 0xBF9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x138],0x14
	call ZXString16::Format
	mov eax,dword ptr [esp+0x5C]

 Block62:
	add esp,0xC
	mov byte ptr [esp+0x12C],0x10
	test eax,eax
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block64:
	mov eax,dword ptr [esp+0x1C]
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x138],0x15
	test ecx,ecx
	je Block85

 Block65:
	lea edx,[esp+0x70]
	push edx
	mov byte ptr [esp+0x13C],0x10
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x134],0x16
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block73

 Block66:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x18]
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
	and ecx,dword ptr [esp+0x18]
	mov ebp,ecx
	test eax,eax
	je Block68

 Block67:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block68:
	mov dword ptr [ebx],ebp
	test esi,esi
	jge Block70

 Block69:
	cmp esi,0x80004002
	jne Block91

 Block70:
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0x12C],0x10
	jne Block75

 Block71:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block76

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block73:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block70

 Block74:
	mov dword ptr [ebx],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block70

 Block75:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x12C],0xF
	test eax,eax
	je Block78

 Block77:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block78:
	inc edi
	add ebx,0x10
	cmp edi,0x24
	jl Block56

 Block79:
	mov eax,dword ptr [esp+0x14]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0x130],7
	call eax
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 0x24
	push 4
	lea ecx,[esp+0xA0]
	push ecx
	mov byte ptr [esp+0x13C],0
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esp+0x20]
	inc eax
	cmp eax,4
	mov dword ptr [esp+0x20],eax
	jl Block36

 Block80:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x40]
	push edx
	call esi
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block82

 Block81:
	push eax
	call _com_issue_error

 Block82:
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0x130],0x17
	call esi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	push 0
	push 0
	lea eax,[esp+0x48]
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push 0xBF1
	mov bl,0x18
	push edx
	mov byte ptr [esp+0x148],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x140],0x19
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	lea eax,[esp+0x78]
	mov byte ptr [esp+0x140],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x134],0x1A
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block92

 Block87:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x18]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	mov ebp,dword ptr [esp+0x24]
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [ebp+0x304]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x18]
	mov edi,ecx
	test eax,eax
	je Block89

 Block88:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block89:
	mov dword ptr [ebp+0x304],edi
	test esi,esi
	jge Block94

 Block90:
	cmp esi,0x80004002
	je Block94

 Block91:
	push esi
	call _com_issue_error

 Block92:
	mov ebp,dword ptr [esp+0x24]
	mov eax,dword ptr [ebp+0x304]
	test eax,eax
	je Block94

 Block93:
	mov dword ptr [ebp+0x304],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block94:
	mov esi,8
	mov byte ptr [esp+0x12C],bl
	cmp word ptr [esp+0x64],si
	jne Block97

 Block95:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	mov byte ptr [esp+0x12C],0x17
	cmp word ptr [esp+0x30],si
	jne Block101

 Block99:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block102:
	mov byte ptr [esp+0x12C],0
	cmp word ptr [esp+0x40],si
	jne Block105

 Block103:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	mov ecx,ebp
	call CUISoftKeyboard::ResetRandomKeyMap
	push 0xFFFFFFFF
	mov ecx,ebp
	call CUISoftKeyboard::SetRandomKeyMap
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x12C],0xFFFFFFFF
	test eax,eax
	je Block108

 Block107:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block108:
	mov ecx,dword ptr [esp+0x124]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x11C
	ret 4
}
}
// CUISoftKeyboard::OnSetFocus
__SUB_CLASS_THIS(00460300, __thiscall, 85166,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUISoftKeyboard::SetKeyMode
__SUB_CLASS_THIS(0045FC90, __thiscall, 85176,  CUISoftKeyboard, void, long) {
__asm {

 Block0:
	mov dl,byte ptr [esp+4]
	push ebx
	push esi
	push edi
	mov edi,ecx
	xor eax,eax
	mov cl,0xA
	lea ecx,[ecx]

 Block1:
	mov esi,dword ptr [edi+0xC0]
	add esi,eax
	mov bl,dl
	cmp byte ptr [esi],cl
	jae Block3

 Block2:
	and bl,1
	add bl,bl
	jmp Block4

 Block3:
	and bl,2

 Block4:
	mov byte ptr [esi+1],bl
	mov esi,dword ptr [edi+0xC0]
	add esi,eax
	mov bl,dl
	cmp byte ptr [esi+2],cl
	jae Block6

 Block5:
	and bl,1
	add bl,bl
	jmp Block7

 Block6:
	and bl,2

 Block7:
	mov byte ptr [esi+3],bl
	mov esi,dword ptr [edi+0xC0]
	mov bl,dl
	cmp byte ptr [eax+esi+4],cl
	jae Block9

 Block8:
	and bl,1
	add bl,bl
	jmp Block10

 Block9:
	and bl,2

 Block10:
	mov byte ptr [eax+esi+5],bl
	mov esi,dword ptr [edi+0xC0]
	mov bl,dl
	cmp byte ptr [eax+esi+6],cl
	jae Block12

 Block11:
	and bl,1
	add bl,bl
	jmp Block13

 Block12:
	and bl,2

 Block13:
	mov byte ptr [eax+esi+7],bl
	mov esi,dword ptr [edi+0xC0]
	mov bl,dl
	cmp byte ptr [eax+esi+8],cl
	jae Block15

 Block14:
	and bl,1
	add bl,bl
	jmp Block16

 Block15:
	and bl,2

 Block16:
	mov byte ptr [eax+esi+9],bl
	mov esi,dword ptr [edi+0xC0]
	mov bl,dl
	cmp byte ptr [eax+esi+0xA],cl
	jae Block18

 Block17:
	and bl,1
	add bl,bl
	jmp Block19

 Block18:
	and bl,2

 Block19:
	mov byte ptr [eax+esi+0xB],bl
	add eax,0xC
	cmp eax,0x48
	jl Block1

 Block20:
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CUISoftKeyboard::SetRandomKeyMap
__SUB_CLASS_THIS(0045FE70, __thiscall, 85176,  CUISoftKeyboard, void, long) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	push edi
	mov edi,ecx
	xor esi,esi
	jmp Block2

 Block2:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x24
	div ecx
	mov eax,dword ptr [edi+0xC0]
	mov cx,word ptr [esi+eax]
	add esi,2
	cmp esi,0x48
	mov bx,word ptr [eax+edx*2]
	mov word ptr [esi+eax-2],bx
	mov word ptr [eax+edx*2],cx
	jl Block2

 Block3:
	mov ebp,dword ptr [esp+0x14]
	xor ecx,ecx
	lea eax,[ecx+2]
	jmp Block5

 Block5:
	mov edx,dword ptr [edi+0xC0]
	cmp byte ptr [edx+ecx+1],2
	lea esi,[edx+ecx+1]
	je Block7

 Block6:
	lea edx,[eax-2]
	cmp edx,ebp
	setne dl
	dec dl
	and dl,3
	mov byte ptr [esi],dl

 Block7:
	mov edx,dword ptr [edi+0xC0]
	cmp byte ptr [edx+ecx+3],2
	lea esi,[edx+ecx+3]
	je Block9

 Block8:
	lea edx,[eax-1]
	cmp edx,ebp
	setne dl
	dec dl
	and dl,3
	mov byte ptr [esi],dl

 Block9:
	mov edx,dword ptr [edi+0xC0]
	cmp byte ptr [edx+ecx+5],2
	lea esi,[edx+ecx+5]
	je Block11

 Block10:
	cmp eax,ebp
	setne dl
	dec dl
	and dl,3
	mov byte ptr [esi],dl

 Block11:
	mov edx,dword ptr [edi+0xC0]
	cmp byte ptr [edx+ecx+7],2
	lea esi,[edx+ecx+7]
	je Block13

 Block12:
	lea edx,[eax+1]
	cmp edx,ebp
	setne dl
	dec dl
	and dl,3
	mov byte ptr [esi],dl

 Block13:
	mov edx,dword ptr [edi+0xC0]
	cmp byte ptr [edx+ecx+9],2
	lea esi,[edx+ecx+9]
	je Block15

 Block14:
	lea edx,[eax+2]
	cmp edx,ebp
	setne dl
	dec dl
	and dl,3
	mov byte ptr [esi],dl

 Block15:
	mov edx,dword ptr [edi+0xC0]
	cmp byte ptr [edx+ecx+0xB],2
	lea esi,[edx+ecx+0xB]
	je Block17

 Block16:
	lea edx,[eax+3]
	cmp edx,ebp
	setne dl
	dec dl
	and dl,3
	mov byte ptr [esi],dl

 Block17:
	add eax,6
	lea edx,[eax-2]
	add ecx,0xC
	cmp edx,0x24
	jl Block5

 Block18:
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// CUISoftKeyboard::OnButtonClicked
_SUB_EXCEPTION_HANDLER(461150)
__SUB_CLASS_THIS(00461150, __thiscall, 85170,  CUISoftKeyboard, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_461150
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
	cmp eax,0x2710
	jne Block11

 Block1:
	push 0xFFFFFFFF
	call CUISoftKeyboard::SetRandomKeyMap
	mov ecx,dword ptr [esi+0xAC]
	lea eax,[esp+0xC]
	push eax
	call CCtrlEdit::GetText
	mov edi,dword ptr [esp+0xC]
	mov dword ptr [esp+0x18],0
	test edi,edi
	je Block3

 Block2:
	mov eax,dword ptr [edi-4]
	test eax,eax
	jne Block5

 Block3:
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test edi,edi
	je Block18

 Block4:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4

 Block5:
	dec eax
	push eax
	lea ecx,[esp+0x24]
	push ecx
	lea ecx,[esp+0x14]
	call ZXString<char>::Left
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x18],1
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax-4]
	jmp Block8

 Block7:
	xor eax,eax

 Block8:
	push eax
	mov ecx,esi
	call CUISoftKeyboard::UpdateKeyConstraint
	mov edx,dword ptr [esp+0x20]
	mov ecx,dword ptr [esi+0xAC]
	push edx
	call CCtrlEdit::SetText
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	add edi,0xFFFFFFF4
	push edi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4

 Block11:
	cmp eax,1
	jne Block13

 Block12:
	push eax
	jmp Block17

 Block13:
	cmp eax,2
	jne Block15

 Block14:
	push eax
	jmp Block17

 Block15:
	cmp eax,8
	jne Block18

 Block16:
	push eax

 Block17:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	call edx

 Block18:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CUISoftKeyboard::OnMouseMove
__SUB_CLASS_THIS(0045FBA0, __thiscall, 85168,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push ebx
	push esi
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x10]
	push eax
	lea ebx,[esi-4]
	push ecx
	mov ecx,ebx
	call CUISoftKeyboard::GetKeyIndexFromPoint
	mov edi,eax
	mov eax,dword ptr [esi+0xAC]
	cmp edi,eax
	je Block12

 Block1:
	cmp edi,0xFFFFFFFF
	jle Block8

 Block2:
	cmp eax,0xFFFFFFFF
	jle Block5

 Block3:
	mov edx,dword ptr [esi+0xBC]
	cmp byte ptr [edx+eax*2+1],2
	lea eax,[edx+eax*2+1]
	je Block5

 Block4:
	mov byte ptr [eax],0

 Block5:
	mov eax,dword ptr [esi+0xBC]
	cmp byte ptr [eax+edi*2+1],2
	lea eax,[eax+edi*2+1]
	je Block7

 Block6:
	mov byte ptr [eax],3

 Block7:
	push 0
	mov ecx,ebx
	call CWnd::InvalidateRect
	mov dword ptr [esi+0xAC],edi
	pop edi
	pop esi
	mov eax,1
	pop ebx
	ret 8

 Block8:
	cmp eax,0xFFFFFFFF
	jle Block11

 Block9:
	mov ecx,dword ptr [esi+0xBC]
	cmp byte ptr [ecx+eax*2+1],2
	lea eax,[ecx+eax*2+1]
	je Block11

 Block10:
	mov byte ptr [eax],0

 Block11:
	push 0
	mov ecx,ebx
	mov dword ptr [esi+0xAC],0xFFFFFFFF
	call CWnd::InvalidateRect

 Block12:
	pop edi
	pop esi
	mov eax,1
	pop ebx
	ret 8
}
}
// CUISoftKeyboard::HitTest
__SUB_CLASS_THIS(0045FC50, __thiscall, 85171,  CUISoftKeyboard, int32_t, long, long, CCtrlWnd**) {
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
// CUISoftKeyboard::~CUISoftKeyboard
_SUB_EXCEPTION_HANDLER(460320)
__SUB_CLASS_THIS0(00460320, __thiscall, 85164,  CUISoftKeyboard, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_460320
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
	int 3// TODO: 	mov dword ptr [esi],offset CUISoftKeyboard::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUISoftKeyboard::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUISoftKeyboard::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x304]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],5
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 0x90
	push 4
	lea eax,[esi+0xC4]
	push eax
	call __eh_vector_dtor_iterator
	lea ecx,[esi+0xC0]
	mov byte ptr [esp+0x1C],4
	call ZArray<KEYMAP>::RemoveAll
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
