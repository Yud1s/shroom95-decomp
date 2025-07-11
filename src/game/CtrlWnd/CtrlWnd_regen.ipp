#include "regen.hpp"
// CtrlWnd.ipp
#include "CtrlWnd.hpp"

// CCtrlWnd::Draw
__SUB_CLASS_THIS(000F0010, __thiscall, 5058,  CCtrlWnd, void, long, long, const tagRECT*) {
__asm {

 Block0:
	ret 0xC
}
}
// CCtrlWnd::GetX
__SUB_CLASS_THIS0(00372FE0, __thiscall, 5061,  CCtrlWnd, long) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [ecx+0x18]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x68]
	lea ecx,[esp+4]
	push ecx
	push esi
	mov dword ptr [esp+0xC],0
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [esp+4]
	pop esi
	pop ecx
	ret
}
}
// CCtrlWnd::OnSetFocus
__SUB_CLASS_THIS(000717E0, __thiscall, 5039,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	je Block2

 Block1:
	mov eax,dword ptr [ecx+0x24]
	ret 4

 Block2:
	mov eax,1
	ret 4
}
}
// CCtrlWnd::OnMouseButton
__SUB_CLASS_THIS(000D80D0, __thiscall, 5040,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	ret 0x10
}
}
// CCtrlWnd::SetBelow
_SUB_EXCEPTION_HANDLER(F0C00)
__SUB_CLASS_THIS(000F0C00, __thiscall, 5050,  CCtrlWnd, void, CCtrlWnd*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F0C00
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
	test esi,esi
	je Block6

 Block1:
	lea eax,[esi+8]
	test eax,eax
	je Block6

 Block2:
	lea edi,[eax-8]
	mov dword ptr [esp+0x10],edi
	test edi,edi
	je Block4

 Block3:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov ecx,dword ptr [esi+0x24]
	push esi
	mov dword ptr [esp+0x20],0
	call CWnd::RemoveChild
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block7

 Block5:
	mov ecx,dword ptr [esi+0x24]
	push eax
	call CWnd::FindChild
	jmp Block8

 Block6:
	xor edi,edi
	mov dword ptr [esp+0x10],edi
	jmp Block4

 Block7:
	xor eax,eax

 Block8:
	mov ecx,dword ptr [esi+0x24]
	push eax
	push esi
	call CWnd::InsertChildBefore
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test edi,edi
	je Block10

 Block9:
	push 0
	lea ecx,[esp+0x10]
	call ZRef<CCtrlWnd>::_ReleaseRaw

 Block10:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4
}
}
// CCtrlWnd::IsKindOf
__SUB_CLASS_THIS(000F0040, __thiscall, 5065,  CCtrlWnd, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CCtrlWnd::ms_RTTI_CCtrlWnd
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
// CCtrlWnd::Move
_SUB_EXCEPTION_HANDLER(D8170)
__SUB_CLASS_THIS(000D8170, __thiscall, 5060,  CCtrlWnd, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D8170
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
	mov ecx,dword ptr [edi+0x18]
	mov byte ptr [esp+0x34],1
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [esp+0x44]
	lea eax,[esp+0x10]
	push eax
	mov eax,dword ptr [esp+0x44]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x34],0
	cmp word ptr [esp+0xC],si
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x14]
	xor ecx,ecx
	mov word ptr [esp+0xC],cx
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0xC]
	push edx
	call edi

 Block10:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp word ptr [esp+0x1C],si
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
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret 8

 Block13:
	lea ecx,[esp+0x1C]
	push ecx
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
// CCtrlWnd::GetAbsLeft
__SUB_CLASS_THIS0(00071890, __thiscall, 5044,  IUIMsgHandler, long) {
__asm {

 Block0:
	push ecx
	push esi
	push edi
	mov edi,ecx
	mov esi,dword ptr [edi+0x14]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x68]
	lea ecx,[esp+8]
	push ecx
	push esi
	mov dword ptr [esp+0x10],0
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [edi+0x20]
	mov esi,dword ptr [esp+8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x2C]
	call edx
	pop edi
	add eax,esi
	pop esi
	pop ecx
	ret
}
}
// CCtrlWnd::GetY
__SUB_CLASS_THIS0(00373020, __thiscall, 5061,  CCtrlWnd, long) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [ecx+0x18]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x70]
	lea ecx,[esp+4]
	push ecx
	push esi
	mov dword ptr [esp+0xC],0
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [esp+4]
	pop esi
	pop ecx
	ret
}
}
// CCtrlWnd::SetShow
__SUB_CLASS_THIS(000EFDA0, __thiscall, 5042,  IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x28]
	call edx
	mov ecx,dword ptr [esp+8]
	cmp eax,ecx
	je Block2

 Block1:
	mov dword ptr [esi+0x2C],ecx
	lea ecx,[esi-4]
	call CCtrlWnd::InvalidateRect

 Block2:
	pop esi
	ret 4
}
}
// CCtrlWnd::GetAbsTop
__SUB_CLASS_THIS0(000718F0, __thiscall, 5044,  IUIMsgHandler, long) {
__asm {

 Block0:
	push ecx
	push esi
	push edi
	mov edi,ecx
	mov esi,dword ptr [edi+0x14]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x70]
	lea ecx,[esp+8]
	push ecx
	push esi
	mov dword ptr [esp+0x10],0
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [edi+0x20]
	mov esi,dword ptr [esp+8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x30]
	call edx
	pop edi
	add eax,esi
	pop esi
	pop ecx
	ret
}
}
// CCtrlWnd::GetRTTI
__SUB_CLASS_THIS0(000F0020, __thiscall, 5064,  CCtrlWnd, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CCtrlWnd::ms_RTTI_CCtrlWnd
	ret
}
}
// CCtrlWnd::SetEnable
__SUB_CLASS_THIS(000EFF80, __thiscall, 5042,  IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	call edx
	mov ecx,dword ptr [esp+8]
	cmp eax,ecx
	je Block5

 Block1:
	mov dword ptr [esi+0x28],ecx
	test ecx,ecx
	jne Block4

 Block2:
	lea ecx,[esi-4]
	call CCtrlWnd::IsFocused
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 0
	call CWndMan::SetFocus

 Block4:
	lea ecx,[esi-4]
	call CCtrlWnd::InvalidateRect

 Block5:
	pop esi
	ret 4
}
}
// CCtrlWnd::NotifyToParent
__SUB_CLASS_THIS(000D44B0, __thiscall, 5062,  CCtrlWnd, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+0xC]
	mov eax,ecx
	mov ecx,dword ptr [eax+0x24]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [eax+0x14]
	mov edx,dword ptr [edx+0x1C]
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	push eax
	call edx
	pop esi
	ret 8
}
}
// CCtrlWnd::OnMouseEnter
__SUB_CLASS_THIS(000EFDE0, __thiscall, 5042,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	je Block3

 Block1:
	cmp dword ptr [ecx+0x9C4],0
	je Block3

 Block2:
	mov dword ptr [esp+4],0
	jmp  CInputSystem::SetCursorState

 Block3:
	ret 4
}
}
// CCtrlWnd::GetCanvas
_SUB_EXCEPTION_HANDLER(D47B0)
__SUB_CLASS_THIS(000D47B0, __thiscall, 5055,  CCtrlWnd, _x_com_ptr<IWzCanvas>*, _x_com_ptr<IWzCanvas>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_D47B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esp+0xC]
	mov dword ptr [esp+0xC],0
	mov ecx,dword ptr [esi+0x24]
	push eax
	call CWnd::GetOverlabLayer
	cmp dword ptr [eax],0
	mov eax,dword ptr [esp+0xC]
	sete bl
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	test bl,bl
	je Block10

 Block3:
	mov ecx,dword ptr [esp+0x48]
	mov eax,3
	mov word ptr [esp+0x14],ax
	mov dword ptr [esp+0x1C],ecx
	mov ecx,dword ptr [esi+0x24]
	lea edx,[esp+0x48]
	mov ebx,1
	push edx
	mov dword ptr [esp+0x40],ebx
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x3C],2
	test ecx,ecx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov esi,dword ptr [esp+0x44]
	lea eax,[esp+0x14]
	push eax
	push esi
	call IWzGr2DLayer::Getcanvas
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],bl
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	cmp word ptr [esp+0x14],8
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	jne Block9

 Block8:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	jmp Block16

 Block9:
	lea ecx,[esp+0x14]
	jmp Block19

 Block10:
	mov eax,dword ptr [esp+0x48]
	mov ebx,3
	mov edx,ebx
	mov word ptr [esp+0x24],dx
	mov dword ptr [esp+0x2C],eax
	mov ecx,dword ptr [esi+0x24]
	lea edx,[esp+0x10]
	push edx
	mov dword ptr [esp+0x40],ebx
	call CWnd::GetOverlabLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x3C],4
	test ecx,ecx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov esi,dword ptr [esp+0x44]
	lea eax,[esp+0x24]
	push eax
	push esi
	call IWzGr2DLayer::Getcanvas
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x3C],bl
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	jne Block18

 Block15:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]

 Block16:
	test eax,eax
	je Block20

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block18:
	lea ecx,[esp+0x24]

 Block19:
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov eax,esi
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x34
	ret 8
}
}
// CCtrlWnd::GetRect
_SUB_EXCEPTION_HANDLER(EFE10)
__SUB_CLASS_THIS0(000EFE10, __thiscall, 5049,  CCtrlWnd, tagRECT) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_EFE10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x14]
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
	mov esi,dword ptr [edi+0x18]
	mov dword ptr [esp+0x2C],0
	test esi,esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov edx,dword ptr [edx+0x8C]
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x28]
	push 0
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x30]
	push 0
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x38]
	push 0
	push 0
	mov dword ptr [eax+0xC],ecx
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	push 0
	push 0
	push esi
	call edx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	cmp word ptr [esp+0x14],8
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0xC]
	mov esi,dword ptr [edi+0x1C]
	mov edx,dword ptr [esp+0x10]
	add esi,ecx
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [edi+0x20]
	add ecx,edx
	mov dword ptr [eax+4],edx
	mov dword ptr [eax+8],esi
	mov dword ptr [eax+0xC],ecx
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret 4
}
}
// CCtrlWnd::SetAbove
_SUB_EXCEPTION_HANDLER(F0B50)
__SUB_CLASS_THIS(000F0B50, __thiscall, 5050,  CCtrlWnd, void, CCtrlWnd*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F0B50
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
	test esi,esi
	je Block6

 Block1:
	lea eax,[esi+8]
	test eax,eax
	je Block6

 Block2:
	lea edi,[eax-8]
	mov dword ptr [esp+0x10],edi
	test edi,edi
	je Block4

 Block3:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov ecx,dword ptr [esi+0x24]
	push esi
	mov dword ptr [esp+0x20],0
	call CWnd::RemoveChild
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block7

 Block5:
	mov ecx,dword ptr [esi+0x24]
	push eax
	call CWnd::FindChild
	jmp Block8

 Block6:
	xor edi,edi
	mov dword ptr [esp+0x10],edi
	jmp Block4

 Block7:
	xor eax,eax

 Block8:
	mov ecx,dword ptr [esi+0x24]
	push eax
	push esi
	call CWnd::InsertChildAfter
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test edi,edi
	je Block10

 Block9:
	push 0
	lea ecx,[esp+0x10]
	call ZRef<CCtrlWnd>::_ReleaseRaw

 Block10:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4
}
}
// CCtrlWnd::IsShown
__SUB_CLASS_THIS0(00071840, __thiscall, 5059,  IUIMsgHandler, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x2C]
	ret
}
}
// CCtrlWnd::CreateCtrl
_SUB_EXCEPTION_HANDLER(F0900)
__SUB_CLASS_THIS(000F0900, __thiscall, 5046,  CCtrlWnd, void, CWnd*, uint32_t, long, long, long, long, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F0900
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x54]
	mov edi,dword ptr [esp+0x50]
	lea ecx,[esp+0x54]
	push 0x3D2
	push ecx
	mov dword ptr [esi+0x14],eax
	mov dword ptr [esi+0x24],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ebp,[esi+0x18]
	push ebp
	push eax
	mov dword ptr [esp+0x54],0
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x60]
	add esp,0xC
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [edi+0x18]
	mov edx,0xD
	mov word ptr [esp+0x10],dx
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	mov edi,dword ptr [ebp]
	mov dword ptr [esp+0x48],1
	test edi,edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov edx,dword ptr [esp+0x10]
	mov ecx,dword ptr [edi]
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
	push edi
	call eax
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block8:
	cmp word ptr [esp+0x10],8
	mov dword ptr [esp+0x48],0xFFFFFFFF
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x18]
	xor ecx,ecx
	mov word ptr [esp+0x10],cx
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
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
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	lea edx,[esp+0x20]
	push edx
	mov dword ptr [esp+0x4C],2
	call edi
	lea eax,[esp+0x20]
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
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x48],3
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea edx,[esp+0x30]
	push edx
	mov edx,dword ptr [esp+0x60]
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [esp+0x60]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x48],2
	cmp word ptr [esp+0x20],di
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp word ptr [esp+0x30],di
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
	mov edx,dword ptr [esp+0x60]
	mov eax,dword ptr [esp+0x64]
	mov dword ptr [esi+0x1C],edx
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esi+0x20],eax
	mov eax,dword ptr [esp+0x68]
	push eax
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esi+0x24]
	push 0
	push esi
	call CWnd::InsertChildAfter
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x3C
	ret 0x1C
}
}
// CCtrlWnd::OnCreate
__SUB_CLASS_THIS(00071810, __thiscall, 5047,  CCtrlWnd, void, void*) {
__asm {

 Block0:
	ret 4
}
}
// CCtrlWnd::IsEnabled
__SUB_CLASS_THIS0(00071830, __thiscall, 5059,  IUIMsgHandler, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x28]
	ret
}
}
// CCtrlWnd::HitTest
__SUB_CLASS_THIS(000EFD30, __thiscall, 5048,  CCtrlWnd, int32_t, long, long) {
__asm {

 Block0:
	sub esp,0x10
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x14]
	push esi
	xor esi,esi
	push edx
	mov dword ptr [esp+8],esi
	mov dword ptr [esp+0xC],esi
	mov esi,dword ptr [ecx+0x1C]
	mov ecx,dword ptr [ecx+0x20]
	push eax
	lea edx,[esp+0xC]
	push edx
	mov dword ptr [esp+0x18],esi
	mov dword ptr [esp+0x1C],ecx
	call PtInRect
	pop esi
	add esp,0x10
	ret 8
}
}
// CCtrlWnd::CCtrlWnd
__SUB_CLASS_THIS0(000EFFC0, __thiscall, 5035,  CCtrlWnd, void) {
__asm {

 Block0:
	mov eax,ecx
	int 3// TODO: 	mov dword ptr [eax+4],offset IUIMsgHandler::`vftable'
	int 3// TODO: 	mov dword ptr [eax+8],offset ZRefCounted::`vftable'
	xor ecx,ecx
	mov dword ptr [eax+0xC],ecx
	mov dword ptr [eax+0x10],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CCtrlWnd::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [eax+4],offset CCtrlWnd::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [eax+8],offset CCtrlWnd::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+0x14],0xFFFFFFFF
	mov dword ptr [eax+0x18],ecx
	mov dword ptr [eax+0x24],ecx
	mov ecx,1
	mov dword ptr [eax+0x28],ecx
	mov dword ptr [eax+0x2C],ecx
	mov dword ptr [eax+0x30],ecx
	ret
}
}
// CCtrlWnd::OnKey
__SUB_CLASS_THIS(000892E0, __thiscall, 5038,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x20]
	mov eax,dword ptr [ecx+4]
	mov eax,dword ptr [eax]
	add ecx,4
	jmp eax
}
}
// CCtrlWnd::OnDragDrop
__SUB_CLASS_THIS(00071800, __thiscall, 5043,  CCtrlWnd, int32_t, long, DRAGCTX&, long, long) {
__asm {

 Block0:
	xor eax,eax
	ret 0x10
}
}
// CCtrlWnd::IsFocused
__SUB_CLASS_THIS0(000EFF40, __thiscall, 5056,  CCtrlWnd, int32_t) {
__asm {

 Block0:
	test ecx,ecx
	je Block2

 Block1:
	mov edx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea eax,[ecx+4]
	xor ecx,ecx
	cmp dword ptr [edx+0xA0],eax
	sete cl
	mov eax,ecx
	ret

 Block2:
	mov edx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	xor eax,eax
	xor ecx,ecx
	cmp dword ptr [edx+0xA0],eax
	sete cl
	mov eax,ecx
	ret
}
}
// CCtrlWnd::~CCtrlWnd
__SUB_CLASS_THIS0(00071820, __thiscall, 5037,  CCtrlWnd, void) {
__asm {

 Block0:
	ret
}
}
// CCtrlWnd::OnMouseMove
__SUB_CLASS_THIS(000892F0, __thiscall, 5041,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	xor eax,eax
	ret 8
}
}
