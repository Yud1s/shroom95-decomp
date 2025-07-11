#include "regen.hpp"
// WndMan.ipp
#include "WndMan.hpp"

// DRAGCTX::~DRAGCTX
__SUB_CLASS_THIS0(005B2D50, __thiscall, 79280,  DRAGCTX, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+8]
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+8]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+8]
	test ecx,ecx
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block4:
	mov dword ptr [esi+8],0

 Block5:
	pop esi
	ret
}
}
// CWndMan::PreCreateWnd
__SUB_CLASS_THIS(005B2F20, __thiscall, 15627,  CWndMan, void, long, long, long, long, long, int32_t, void*) {
__asm {

 Block0:
	ret 0x1C
}
}
// CWndMan::GetOrgWindow
__SUB_CLASS_THIS(000A1820, __thiscall, 15618,  CWndMan, _x_com_ptr<IWzVector2D>*, _x_com_ptr<IWzVector2D>*, CWnd::UIOrigin) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0xC]
	mov eax,dword ptr [ecx+eax*4+0x104]
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
	ret 8
}
}
// CWndMan::RemoveWindow
__SUB(005B30C0, __cdecl, 15632,  int32_t, CWnd*) {
__asm {

 Block0:
	push 0
	lea eax,[esp+8]
	push eax
	mov ecx,offset CWndMan::ms_lpWindow
	call ZList<CWnd *>::Find
	test eax,eax
	je Block2

 Block1:
	push eax
	mov ecx,offset CWndMan::ms_lpWindow
	call ZList<CWnd *>::RemoveAt
	mov eax,1
	ret

 Block2:
	xor eax,eax
	ret
}
}
// CWndMan::SetActiveWnd
__SUB_CLASS_THIS(005B1AA0, __thiscall, 15599,  CWndMan, int32_t, CWnd*) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push edi
	push esi
	mov edi,ecx
	call CWndMan::SetActiveWndImp
	test eax,eax
	jne Block2

 Block1:
	pop edi
	pop esi
	ret 4

 Block2:
	test esi,esi
	je Block4

 Block3:
	lea eax,[esi+4]
	push eax
	mov ecx,edi
	call CWndMan::SetFocusImp
	pop edi
	mov eax,1
	pop esi
	ret 4

 Block4:
	xor eax,eax
	push eax
	mov ecx,edi
	call CWndMan::SetFocusImp
	pop edi
	mov eax,1
	pop esi
	ret 4
}
}
// CWndMan::GetHandlerFromPoint
__SUB_CLASS_THIS(005B21A0, __thiscall, 15616,  CWndMan, IUIMsgHandler*, long, long) {
__asm {

 Block0:
	push ecx
	cmp dword ptr [ecx+0x88],0
	push ebx
	push ebp
	push esi
	push edi
	je Block12

 Block1:
	mov eax,dword ptr [ecx+0x90]
	mov ebp,dword ptr [eax]
	test ebp,ebp
	je Block12

 Block2:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0x48]
	push offset CWnd::ms_RTTI_CWnd
	mov ecx,ebp
	call eax
	test eax,eax
	je Block11

 Block3:
	lea edi,[ebp-4]
	test edi,edi
	je Block11

 Block4:
	mov edx,dword ptr [edi+4]
	mov ebx,dword ptr [edi]
	mov eax,dword ptr [edx+0x30]
	lea esi,[edi+4]
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x14],0
	add ebx,0x24
	call eax
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esi]
	sub ecx,eax
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [ebx]
	sub ecx,eax
	push ecx
	mov ecx,edi
	call edx
	test eax,eax
	je Block11

 Block5:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block10

 Block6:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	call edx
	test eax,eax
	je Block16

 Block7:
	mov ecx,dword ptr [esp+0x10]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x28]
	add ecx,4
	call edx
	test eax,eax
	je Block16

 Block8:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block16

 Block9:
	pop edi
	pop esi
	pop ebp
	add eax,4
	pop ebx
	pop ecx
	ret 8

 Block10:
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8

 Block11:
	pop edi
	pop esi
	mov eax,ebp
	pop ebp
	pop ebx
	pop ecx
	ret 8

 Block12:
	mov eax,dword ptr [CWndMan::ms_lpWindow+16]
	mov dword ptr [esp+0x10],eax
	test eax,eax
	je Block16

 Block13:
	mov ebp,dword ptr [esp+0x1C]

 Block14:
	lea eax,[esp+0x10]
	push eax
	call ZList<CWnd *>::GetPrev
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x20],0
	mov edx,dword ptr [edi+4]
	mov ebx,dword ptr [edi]
	mov eax,dword ptr [edx+0x30]
	lea esi,[edi+4]
	add esp,4
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	add ebx,0x24
	call eax
	mov edx,dword ptr [esi]
	mov ecx,ebp
	sub ecx,eax
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [ebx]
	sub ecx,eax
	push ecx
	mov ecx,edi
	call edx
	test eax,eax
	jne Block17

 Block15:
	cmp dword ptr [esp+0x10],eax
	jne Block14

 Block16:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	pop ecx
	ret 8

 Block17:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block22

 Block18:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	call edx
	test eax,eax
	je Block16

 Block19:
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x28]
	add ecx,4
	call edx
	test eax,eax
	je Block16

 Block20:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block16

 Block21:
	pop edi
	pop esi
	pop ebp
	add eax,4
	pop ebx
	pop ecx
	ret 8

 Block22:
	lea eax,[edi+4]
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8
}
}
// CWndMan::CWndMan
_SUB_EXCEPTION_HANDLER(5B4390)
__SUB_CLASS_THIS(005B4390, __thiscall, 15592,  CWndMan, void, HWND__*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B4390
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
	mov dword ptr [esp+0x14],esi
	call CWnd::_ctor_default
	xor edi,edi
	lea eax,[esi+0x80]
	mov dword ptr [esp+0x20],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0x80]
	mov dword ptr [TSingleton<CWndMan>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CWndMan>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CWndMan::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CWndMan::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CWndMan::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [eax],offset ZList<IUIMsgHandler *>::`vftable'
	mov dword ptr [eax+8],edi
	mov dword ptr [eax+0xC],edi
	mov dword ptr [eax+0x10],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xB0],edi
	lea ecx,[esi+0xB4]
	mov byte ptr [esp+0x20],3
	call SECPOINT::_ctor_default
	mov ebx,dword ptr [esp+0x28]
	or eax,0xFFFFFFFF
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD0],edi
	mov dword ptr [esi+0xD4],ebx
	mov dword ptr [esi+0xD8],eax
	mov dword ptr [esi+0xDC],eax
	mov dword ptr [esi+0xE0],edi
	mov dword ptr [esi+0xE8],edi
	mov dword ptr [esi+0xEC],edi
	mov dword ptr [esi+0xF0],edi
	mov dword ptr [esi+0xF4],edi
	mov dword ptr [esi+0xF8],edi
	push offset _x_com_ptr<IWzVector2D>::~_x_com_ptr<IWzVector2D>
	push offset _x_com_ptr<IWzVector2D>::_ctor_default
	push 9
	push 4
	lea ebp,[esi+0x104]
	push ebp
	mov byte ptr [esp+0x34],9
	call __eh_vector_ctor_iterator
	int 3// TODO: 	mov dword ptr [esi+0x128],offset ZList<CUIWnd *>::`vftable'
	mov dword ptr [esi+0x130],edi
	mov dword ptr [esi+0x134],edi
	mov dword ptr [esi+0x138],edi
	mov byte ptr [esp+0x20],0xB
	call ImmCreateContext
	push eax
	push ebx
	mov dword ptr [esi+0xD8],eax
	call ImmAssociateContext
	push 4
	push edi
	mov dword ptr [esi+0xDC],eax
	call GetKeyboardLayout
	push eax
	call ImmGetProperty
	mov dword ptr [esi+0xE0],eax
	mov ebx,9

 Block4:
	lea edx,[esp+0x28]
	push 0x3D2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push ebp
	push eax
	mov byte ptr [esp+0x2C],0xC
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x20],0xB
	cmp eax,edi
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	add ebp,4
	sub ebx,1
	jne Block4

 Block7:
	mov ecx,esi
	call CWndMan::ResetOrgWindow
	push edi
	lea edi,[esi+0xB4]
	mov ecx,edi
	call TSecType<long>::SetData
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	lea ecx,[esi+0xC0]
	call TSecType<long>::SetData
	mov ecx,esi
	call CWndMan::ClearDragContext
	mov eax,esi
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
// CWndMan::OnMouseMove
__SUB_CLASS_THIS(005B2FB0, __thiscall, 15622,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [_D_G_PSTAGE+4]
	test eax,eax
	je Block2

 Block1:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0xC]
	jmp eax

 Block2:
	xor eax,eax
	ret 8
}
}
// CWndMan::OnDraggableMove
__SUB_CLASS_THIS(005B3010, __thiscall, 15626,  IUIMsgHandler, void, long, IDraggable*, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [_D_G_PSTAGE+4]
	test eax,eax
	je Block2

 Block1:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x18]
	jmp eax

 Block2:
	ret 0x10
}
}
// CWndMan::EndDragDrop
_SUB_EXCEPTION_HANDLER(5B37C0)
__SUB_CLASS_THIS(005B37C0, __thiscall, 15610,  CWndMan, void, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B37C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0xB0]
	xor edi,edi
	cmp eax,edi
	je Block66

 Block1:
	mov dword ptr [esp+0x1C],edi
	cmp dword ptr [esi+0xA4],edi
	je Block3

 Block2:
	mov ebx,dword ptr [esp+0x64]
	mov ecx,dword ptr [esi+0xA4]
	mov edx,dword ptr [ecx]
	push ebx
	mov ebx,dword ptr [esp+0x64]
	push ebx
	push eax
	mov eax,dword ptr [edx+0x18]
	push edi
	call eax

 Block3:
	mov ebp,dword ptr [esi+0xB0]
	mov ecx,dword ptr [esi+0xA8]
	mov dword ptr [esp+0x24],ecx
	mov dword ptr [esp+0x2C],ebp
	cmp ebp,edi
	je Block5

 Block4:
	lea edx,[ebp+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ebx,dword ptr [ebp+0xC]
	mov dword ptr [esp+0x58],edi
	mov dword ptr [esp+0x18],ebx
	cmp ebx,edi
	je Block7

 Block6:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block7:
	cmp ebx,edi
	mov edi,dword ptr [ZImports::_VariantInit]
	sete al
	test al,al
	mov byte ptr [esp+0x17],al
	sete al
	mov byte ptr [esp+0x58],1
	test al,al
	je Block27

 Block8:
	lea edx,[esp+0x40]
	push edx
	call edi
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0x5C],2
	call edi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	mov ecx,dword ptr [esp+0x18]
	mov bl,3
	mov byte ptr [esp+0x58],bl
	test ecx,ecx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x58],4
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x34]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x58],bl
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov ebx,8
	mov byte ptr [esp+0x58],2
	cmp word ptr [esp+0x30],bx
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov byte ptr [esp+0x58],1
	cmp word ptr [esp+0x40],bx
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov ebx,dword ptr [esp+0x18]

 Block27:
	mov ecx,esi
	call CWndMan::ClearDragContext
	cmp dword ptr [esi+0xA4],0
	je Block30

 Block28:
	mov ecx,dword ptr [esi+0xA4]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	test eax,eax
	je Block32

 Block29:
	mov ecx,dword ptr [esi+0xA4]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x14]
	push 1
	call eax
	push 0xFFFFFFFF
	jmp Block31

 Block30:
	push 0

 Block31:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	call CInputSystem::SetCursorState

 Block32:
	cmp dword ptr [esp+0x68],0
	mov byte ptr [ebp+0x10],0
	mov dword ptr [ebp+0x11],0
	mov edx,dword ptr [ebp]
	je Block34

 Block33:
	mov eax,dword ptr [edx+8]
	mov ecx,ebp
	call eax
	jmp Block35

 Block34:
	mov eax,dword ptr [esp+0x64]
	mov ecx,dword ptr [esp+0x60]
	mov edx,dword ptr [edx+4]
	push eax
	mov eax,dword ptr [esi+0xA4]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	push eax
	push ecx
	mov ecx,ebp
	call edx
	mov dword ptr [esp+0x1C],eax

 Block35:
	cmp byte ptr [esp+0x17],0
	sete al
	test al,al
	je Block55

 Block36:
	lea eax,[esp+0x30]
	push eax
	call edi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x5C],5
	call edi
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	mov ecx,dword ptr [esp+0x18]
	mov bl,6
	mov byte ptr [esp+0x58],bl
	test ecx,ecx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea edx,[esp+0x68]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x58],7
	test ecx,ecx
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea eax,[esp+0x30]
	push eax
	lea edx,[esp+0x44]
	push edx
	push 0
	push 0x80
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0x58],bl
	test eax,eax
	je Block46

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block46:
	mov edi,8
	mov byte ptr [esp+0x58],5
	cmp word ptr [esp+0x40],di
	jne Block49

 Block47:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov byte ptr [esp+0x58],1
	cmp word ptr [esp+0x30],di
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov ebx,dword ptr [esp+0x18]

 Block55:
	cmp dword ptr [esp+0x1C],0
	je Block62

 Block56:
	cmp dword ptr [esi+0xA4],0
	je Block62

 Block57:
	mov ecx,dword ptr [esi+0xA4]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x48]
	push offset CUIStatusBar::ms_RTTI_CUIStatusBar
	call eax
	test eax,eax
	je Block62

 Block58:
	mov eax,dword ptr [esi+0xA4]
	test eax,eax
	je Block62

 Block59:
	add eax,0xFFFFFFFC
	je Block62

 Block60:
	cmp byte ptr [ebp+0x10],0
	lea eax,[ebp+0x10]
	je Block62

 Block61:
	mov ecx,dword ptr [esp+0x64]
	mov edx,dword ptr [esp+0x60]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push edx
	call CUIStatusBar::ChangeDragFuncKeyMappedIcon

 Block62:
	mov byte ptr [esp+0x58],0
	test ebx,ebx
	je Block64

 Block63:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block64:
	lea esi,[ebp+4]
	push esi
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block66

 Block65:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block66:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret 0xC
}
}
// CWndMan::RedrawInvalidatedWindows
_SUB_EXCEPTION_HANDLER(5B2340)
__SUB0(005B2340, __cdecl, 15615,  void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B2340
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x6C]
	mov dword ptr fs:[0],eax
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov eax,dword ptr [CWndMan::ms_lpInvalidatedWindow+12]
	xor ebx,ebx
	mov dword ptr [esp+0x74],ebx
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block28

 Block1:
	lea esp,[esp]

 Block2:
	lea ecx,[esp+0x18]
	push ecx
	call ZList<CWnd *>::GetNext
	mov edi,dword ptr [eax]
	add esp,4
	lea ebp,[edi+0x2C]
	push ebp
	call IsRectEmpty
	test eax,eax
	jne Block27

 Block3:
	push ebp
	lea edx,[esp+0x30]
	push edx
	mov ecx,edi
	call CWnd::ClipRect
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x7C],1
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block31

 Block4:
	mov esi,8
	mov byte ptr [esp+0x74],bl
	cmp word ptr [esp+0x2C],si
	jne Block7

 Block5:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebx
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x2C]
	push ebp
	mov ecx,edi
	call edx
	cmp word ptr [esp+0x1C],si
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
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
	cmp eax,ebx
	jl Block31

 Block12:
	mov eax,dword ptr [edi+0x6C]
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block26

 Block13:
	lea ecx,[ecx]

 Block14:
	lea edx,[esp+0x14]
	push edx
	call ZList<ZRef<CCtrlWnd>>::GetNext
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x1C]
	add esp,4
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[esi+4]
	call edx
	test eax,eax
	je Block25

 Block15:
	lea eax,[esp+0x4C]
	push eax
	push ebp
	lea ecx,[esp+0x64]
	push ecx
	call IntersectRect
	test eax,eax
	je Block25

 Block16:
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x40]
	push eax
	mov ecx,edi
	call CWnd::ClipRect
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0x7C],2
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block31

 Block17:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x74],bl
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov ecx,dword ptr [esp+0x50]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x24]
	lea eax,[esp+0x5C]
	push eax
	mov eax,dword ptr [esp+0x50]
	push ecx
	push eax
	mov ecx,esi
	call edx
	cmp word ptr [esp+0x1C],8
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	cmp eax,ebx
	jl Block31

 Block25:
	cmp dword ptr [esp+0x14],ebx
	jne Block14

 Block26:
	push ebp
	call SetRectEmpty

 Block27:
	cmp dword ptr [esp+0x18],ebx
	jne Block2

 Block28:
	mov ecx,offset CWndMan::ms_lpInvalidatedWindow
	call ZList<CWnd *>::RemoveAll
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0x74],0xFFFFFFFF
	jne Block32

 Block29:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,ebx
	je Block33

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x64
	ret

 Block31:
	push eax
	call _com_issue_error

 Block32:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x64
	ret
}
}
// CWndMan::SetFocusImp
__SUB_CLASS_THIS(005B16B0, __thiscall, 15601,  CWndMan, void, IUIMsgHandler*) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push edi
	mov edi,ecx
	test esi,esi
	je Block2

 Block1:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+4]
	push 1
	mov ecx,esi
	call edx
	test eax,eax
	je Block13

 Block2:
	mov ecx,dword ptr [edi+0xA0]
	mov dword ptr [edi+0xA0],esi
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+4]
	push 0
	call edx

 Block4:
	cmp dword ptr [TSingleton<CInputSystem>::ms_pInstance],0
	je Block10

 Block5:
	test esi,esi
	je Block8

 Block6:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CCtrlEdit::ms_RTTI_CCtrlEdit
	mov ecx,esi
	call edx
	test eax,eax
	je Block8

 Block7:
	lea eax,[esi-4]
	jmp Block9

 Block8:
	xor eax,eax

 Block9:
	xor ecx,ecx
	test eax,eax
	sete cl
	push ecx
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	call CInputSystem::SetAcquireKeyboard

 Block10:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test ecx,ecx
	je Block13

 Block11:
	cmp dword ptr [ecx+0x4690],0
	je Block13

 Block12:
	call CUserLocal::OnKeyDownSkillEnd

 Block13:
	pop edi
	pop esi
	ret 4
}
}
// CWndMan::UpdateWindowPosition
__SUB(005B4A80, __cdecl, 15631,  void, CWnd*) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push esi
	call CWndMan::RemoveWindow
	add esp,4
	test eax,eax
	je Block2

 Block1:
	push esi
	call CWndMan::InsertWindow
	add esp,4

 Block2:
	pop esi
	ret
}
}
// CWndMan::OnKey
__SUB_CLASS_THIS(005B2F50, __thiscall, 15619,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [_D_G_PSTAGE+4]
	test eax,eax
	je Block2

 Block1:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax]
	jmp eax

 Block2:
	ret 8
}
}
// CWndMan::InsertWindow
_SUB_EXCEPTION_HANDLER(5B4830)
__SUB(005B4830, __cdecl, 15631,  void, CWnd*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B4830
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
	mov esi,dword ptr [esp+0x48]
	mov ecx,dword ptr [esi+0x18]
	xor ebx,ebx
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+0x28]
	push eax
	call IWzGr2DLayer::Getoverlay
	movzx ecx,word ptr [eax]
	mov dword ptr [esp+0x40],ebx
	cmp cx,9
	je Block9

 Block3:
	cmp cx,0xD
	je Block9

 Block4:
	mov edx,0x4009
	cmp cx,dx
	je Block7

 Block5:
	mov edx,0x400D
	cmp cx,dx
	je Block7

 Block6:
	xor eax,eax
	jmp Block10

 Block7:
	mov eax,dword ptr [eax+8]
	cmp eax,ebx
	je Block6

 Block8:
	mov eax,dword ptr [eax]
	jmp Block10

 Block9:
	mov eax,dword ptr [eax+8]

 Block10:
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call _x_com_ptr<IWzGr2DLayer>::_QueryUnknown
	cmp eax,ebx
	jge Block13

 Block11:
	cmp eax,0x80004002
	je Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x40],3
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov esi,dword ptr [esi+0x18]
	cmp esi,ebx
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xB0]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],ebx
	call ecx
	cmp eax,ebx
	jge Block21

 Block20:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block21:
	mov ebp,dword ptr [esp+0x18]
	cmp ebp,ebx
	sete al
	cmp al,bl
	sete al
	cmp al,bl
	je Block27

 Block22:
	cmp ebp,ebx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0xB0]
	lea eax,[esp+0x1C]
	push eax
	push ebp
	mov dword ptr [esp+0x24],ebx
	call ecx
	cmp eax,ebx
	jge Block26

 Block25:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebp
	push eax
	call _com_issue_errorex

 Block26:
	mov edx,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x1C],edx
	jmp Block28

 Block27:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x1C],eax

 Block28:
	mov edi,dword ptr [CWndMan::ms_lpWindow+12]
	mov dword ptr [esp+0x24],edi
	cmp edi,ebx
	je Block35

 Block29:
	lea ecx,[ecx]

 Block30:
	mov eax,dword ptr [edi]
	mov esi,dword ptr [eax+0x18]
	add eax,0x18
	cmp esi,ebx
	je Block1

 Block31:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xB0]
	lea edx,[esp+0x20]
	push edx
	push esi
	mov dword ptr [esp+0x28],ebx
	call eax
	cmp eax,ebx
	jge Block33

 Block32:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block33:
	mov ecx,dword ptr [esp+0x1C]
	cmp dword ptr [esp+0x20],ecx
	jg Block38

 Block34:
	lea edx,[esp+0x24]
	push edx
	call ZList<CWnd *>::GetNext
	mov edi,dword ptr [esp+0x28]
	add esp,4
	cmp edi,ebx
	jne Block30

 Block35:
	mov ecx,offset CWndMan::ms_lpWindow
	call ZList<CWnd *>::AddTail_
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax],edx

 Block36:
	mov eax,dword ptr [esp+0x48]
	mov esi,dword ptr [eax+0x18]
	cmp esi,ebx
	jne Block39

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	push edi
	mov ecx,offset CWndMan::ms_lpWindow
	call ZList<CWnd *>::InsertBefore
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr [eax],ecx
	jmp Block36

 Block39:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xB4]
	push edx
	push esi
	call eax
	cmp eax,ebx
	jge Block41

 Block40:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block41:
	mov dword ptr [esp+0x40],0xFFFFFFFF
	cmp ebp,ebx
	je Block43

 Block42:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block43:
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
// CWndMan::RemoveUpdateWindow
__SUB(005B30F0, __cdecl, 15631,  void, CWnd*) {
__asm {

 Block0:
	push 0
	lea eax,[esp+8]
	push eax
	mov ecx,offset CWndMan::ms_lpUpdateWindow
	call ZList<CWnd *>::Find
	test eax,eax
	je Block2

 Block1:
	push eax
	mov ecx,offset CWndMan::ms_lpUpdateWindow
	call ZList<CWnd *>::RemoveAt

 Block2:
	ret
}
}
// CWndMan::ProcessKey
_SUB_EXCEPTION_HANDLER(5B4590)
__SUB_CLASS_THIS(005B4590, __thiscall, 15614,  CWndMan, long, uint32_t, uint32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B4590
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
	mov ebx,dword ptr [esp+0x28]
	mov edi,dword ptr [esp+0x24]
	test ebx,ebx
	js Block27

 Block1:
	cmp edi,0x91
	jne Block13

 Block2:
	call timeGetTime
	mov ecx,dword ptr [esi+0xCC]
	test ecx,ecx
	je Block6

 Block3:
	mov edx,eax
	sub edx,ecx
	cmp edx,0x3E8
	jge Block6

 Block4:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	je Block6

 Block5:
	mov ebx,1
	add dword ptr [esi+0xD0],ebx
	jmp Block7

 Block6:
	mov ebx,1
	mov dword ptr [esi+0xD0],ebx

 Block7:
	mov dword ptr [esi+0xCC],eax
	mov esi,dword ptr [esi+0xD0]
	cmp esi,4
	jge Block9

 Block8:
	call CScreenShot::SaveFullScreenToJpg_1
	jmp Block32

 Block9:
	jne Block32

 Block10:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	je Block32

 Block11:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [eax+4],0
	lea eax,[esp+0x30]
	push 0xB80
	push eax
	mov dword ptr [esp+0x28],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x20],bl
	push 0
	push 0xFFFFFFFF
	push 0xC
	mov byte ptr [esp+0x2C],2
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push eax
	call CUIStatusBar::ChatLogAdd
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block32

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block32

 Block13:
	test ebx,0x100
	je Block27

 Block14:
	cmp edi,0xD
	je Block22

 Block15:
	cmp edi,0x73
	je Block20

 Block16:
	cmp edi,0x7B
	jne Block27

 Block17:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	call IWzGr2D::ToggleFpsPanel
	jmp Block32

 Block20:
	call CUILogoutGift::TryShowLogoutGiftDialog
	test eax,eax
	je Block32

 Block21:
	push 0
	call PostQuitMessage
	jmp Block32

 Block22:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov esi,ecx
	call IWzGr2D::GetfullScreen
	neg eax
	sbb eax,eax
	inc eax
	push eax
	mov ecx,esi
	call IWzGr2D::PutfullScreen
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov esi,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call IWzGr2D::GetfullScreen
	neg eax
	sbb eax,eax
	inc eax
	mov dword ptr [esi+0x9C],eax
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::SaveGlobal
	jmp Block32

 Block27:
	cmp dword ptr [esi+0xA0],0
	jne Block29

 Block28:
	lea eax,[esi+4]
	push eax
	call CWndMan::SetFocus

 Block29:
	mov ecx,dword ptr [esi+0xA0]
	test ecx,ecx
	je Block32

 Block30:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	test eax,eax
	je Block32

 Block31:
	mov ecx,dword ptr [esi+0xA0]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push ebx
	push edi
	call eax

 Block32:
	xor eax,eax
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0xC
}
}
// CWndMan::RegisterUIWindow
__SUB_CLASS_THIS(005B4AD0, __thiscall, 15640,  CWndMan, void, CUIWnd*) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0x128]
	push 0
	lea eax,[esp+0xC]
	push eax
	mov ecx,esi
	call ZList<CUIWnd *>::Find
	test eax,eax
	jne Block2

 Block1:
	mov ecx,esi
	call ZList<CUIWnd *>::AddTail_
	mov ecx,dword ptr [esp+8]
	mov dword ptr [eax],ecx

 Block2:
	pop esi
	ret 4
}
}
// CWndMan::ClearDragContext
__SUB_CLASS_THIS0(005B3060, __thiscall, 15594,  CWndMan, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov dword ptr [esi+0xA8],0
	mov eax,dword ptr [esi+0xB0]
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0xB0]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xB0]
	test ecx,ecx
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block4:
	mov dword ptr [esi+0xB0],0

 Block5:
	pop esi
	ret
}
}
// CWndMan::ProcessIMENotify
__SUB_CLASS_THIS(005B50B0, __thiscall, 15635,  CWndMan, void, uint32_t) {
__asm {

 Block0:
	push ebp
	push esi
	mov esi,dword ptr [esp+0xC]
	mov ebp,ecx
	cmp esi,3
	jb Block11

 Block1:
	cmp esi,5
	jbe Block4

 Block2:
	cmp esi,8
	jne Block11

 Block3:
	call CWndMan::SendIMEMode
	pop esi
	pop ebp
	ret 4

 Block4:
	mov eax,dword ptr [ebp+0xD4]
	push ebx
	push edi
	push eax
	call ImmGetContext
	mov ebx,eax
	cmp esi,4
	je Block9

 Block5:
	push 0
	push 0
	push 0
	push ebx
	call ImmGetCandidateListA
	mov edi,eax
	test edi,edi
	je Block9

 Block6:
	lea ecx,[esp+0x14]
	push ecx
	push 1
	lea esi,[ebp+0xF0]
	push edi
	mov ecx,esi
	call ZArray<unsigned char>::_Realloc
	mov esi,dword ptr [esi]
	push edi
	push esi
	push 0
	push ebx
	call ImmGetCandidateListA
	mov eax,dword ptr [esi+0xC]
	mov ecx,dword ptr [esi+0x10]
	mov edx,eax
	sub edx,ecx
	js Block8

 Block7:
	mov edx,dword ptr [esi+0x14]
	sub edx,eax
	add edx,ecx
	test edx,edx
	jg Block10

 Block8:
	mov ecx,dword ptr [esi+0x14]
	xor edx,edx
	div ecx
	imul eax,ecx
	push eax
	push 0
	push 0x16
	push ebx
	mov dword ptr [esi+0x10],eax
	call ImmNotifyIME
	jmp Block10

 Block9:
	lea ecx,[ebp+0xF0]
	call ZArray<unsigned char>::RemoveAll

 Block10:
	mov eax,dword ptr [ebp+0xD4]
	push ebx
	push eax
	call ImmReleaseContext
	mov ecx,ebp
	call CWndMan::SendIMEComp
	pop edi
	pop ebx

 Block11:
	pop esi
	pop ebp
	ret 4
}
}
// CWndMan::ReleaseCaptureWnd
__SUB_CLASS_THIS(005B3030, __thiscall, 15601,  CWndMan, void, IUIMsgHandler*) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0x80]
	push 0
	lea eax,[esp+0xC]
	push eax
	mov ecx,esi
	call ZList<IUIMsgHandler *>::Find
	test eax,eax
	je Block2

 Block1:
	push eax
	mov ecx,esi
	call ZList<IUIMsgHandler *>::RemoveAt

 Block2:
	pop esi
	ret 4
}
}
// CWndMan::GetCursorPos
__SUB_CLASS_THIS(005B1540, __thiscall, 15603,  CWndMan, void, tagPOINT*, int32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,ecx
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	test ecx,ecx
	je Block12

 Block1:
	push edi
	mov edi,dword ptr [esp+0xC]
	push edi
	call CInputSystem::GetCursorPos
	cmp dword ptr [esp+0x10],0
	je Block11

 Block2:
	push esi
	mov esi,dword ptr [ebx+0x104]
	test esi,esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x10]
	push ecx
	push esi
	mov dword ptr [esp+0x18],0
	call edx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov eax,dword ptr [esp+0x10]
	add dword ptr [edi],eax
	mov esi,dword ptr [ebx+0x104]
	test esi,esi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[esp+0x10]
	push edx
	push esi
	mov dword ptr [esp+0x18],0
	call eax
	test eax,eax
	jge Block10

 Block9:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov ecx,dword ptr [esp+0x10]
	add dword ptr [edi+4],ecx
	pop esi

 Block11:
	pop edi

 Block12:
	pop ebx
	ret 8
}
}
// CWndMan::OnActivate
__SUB_CLASS_THIS(005B2F30, __thiscall, 15628,  CWndMan, int32_t, int32_t) {
__asm {

 Block0:
	mov eax,1
	ret 4
}
}
// CWndMan::SendIMEResult
__SUB_CLASS_THIS(005B4D30, __thiscall, 15637,  CWndMan, void, const char*) {
__asm {

 Block0:
	cmp dword ptr [ecx+0xA0],0
	je Block2

 Block1:
	mov ecx,dword ptr [ecx+0xA0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x3C]
	jmp eax

 Block2:
	ret 4
}
}
// CWndMan::SetFullScreen
__SUB_CLASS_THIS(005B25E0, __thiscall, 15629,  CWndMan, void, int32_t) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [ecx+0x134]
	mov dword ptr [esp],ecx
	test ecx,ecx
	je Block5

 Block1:
	cmp dword ptr [esp+8],0
	push ebx
	setne bl
	jmp Block3

 Block3:
	lea eax,[esp+4]
	push eax
	call ZList<CUIWnd *>::GetNext
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x38]
	add esp,4
	push 1
	push ebx
	call eax
	cmp dword ptr [esp+4],0
	jne Block3

 Block4:
	pop ebx

 Block5:
	pop ecx
	ret 4
}
}
// CWndMan::~CWndMan
_SUB_EXCEPTION_HANDLER(5B2D90)
__SUB_CLASS_THIS0(005B2D90, __thiscall, 15594,  CWndMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B2D90
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
	int 3// TODO: 	mov dword ptr [esi],offset CWndMan::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CWndMan::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CWndMan::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xDC]
	mov dword ptr [esp+0x14],0xB
	cmp eax,0xFFFFFFFF
	je Block2

 Block1:
	push eax
	mov eax,dword ptr [esi+0xD4]
	push eax
	call ImmAssociateContext

 Block2:
	mov eax,dword ptr [esi+0xD8]
	cmp eax,0xFFFFFFFF
	je Block4

 Block3:
	push eax
	call ImmDestroyContext

 Block4:
	lea ecx,[esi+0x128]
	mov byte ptr [esp+0x14],0xA
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CUIWnd *>::`vftable'
	call ZList<CUIWnd *>::RemoveAll
	push offset _x_com_ptr<IWzVector2D>::~_x_com_ptr<IWzVector2D>
	push 9
	push 4
	lea ecx,[esi+0x104]
	push ecx
	mov byte ptr [esp+0x24],9
	call __eh_vector_dtor_iterator
	lea ecx,[esi+0xF8]
	mov byte ptr [esp+0x14],8
	call ZArray<char>::RemoveAll
	lea ecx,[esi+0xF4]
	mov byte ptr [esp+0x14],7
	call ZArray<char>::RemoveAll
	lea ecx,[esi+0xF0]
	mov byte ptr [esp+0x14],6
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esi+0xEC]
	mov byte ptr [esp+0x14],5
	call ZArray<unsigned long>::RemoveAll
	lea ecx,[esi+0xE8]
	mov byte ptr [esp+0x14],4
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esi+0xB4]
	mov byte ptr [esp+0x14],3
	call SECPOINT::~SECPOINT
	mov eax,dword ptr [esi+0xB0]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block9

 Block5:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	mov eax,dword ptr [esi+0xB0]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xB0]
	test ecx,ecx
	je Block8

 Block7:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block8:
	mov dword ptr [esi+0xB0],0

 Block9:
	lea ecx,[esi+0x80]
	mov byte ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<IUIMsgHandler *>::`vftable'
	call ZList<IUIMsgHandler *>::RemoveAll
	mov ecx,esi
	mov dword ptr [TSingleton<CWndMan>::ms_pInstance],0
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
// CWndMan::s_Update
__SUB0(005B4B00, __cdecl, 15615,  void) {
__asm {

 Block0:
	sub esp,8
	push esi
	push edi
	mov ecx,offset CWndMan::ms_lpUpdateWindow
	call ZList<CWnd *>::RemoveAll
	push offset CWndMan::ms_lpWindow
	mov ecx,offset CWndMan::ms_lpUpdateWindow
	call ZList<CWnd *>::AddTail_List
	cmp dword ptr [CWndMan::ms_lpUpdateWindow+8],0
	je Block2

 Block1:
	mov eax,dword ptr [CWndMan::ms_lpUpdateWindow+12]
	mov esi,dword ptr [eax]
	push eax
	mov ecx,offset CWndMan::ms_lpUpdateWindow
	call ZList<CWnd *>::RemoveAt
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	mov ecx,esi
	call edx
	cmp dword ptr [CWndMan::ms_lpUpdateWindow+8],0
	jne Block1

 Block2:
	mov edi,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	mov esi,dword ptr [edi+0x978]
	test esi,esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xDC]
	lea ecx,[esp+8]
	push ecx
	push esi
	mov dword ptr [esp+0x10],0
	call edx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	cmp dword ptr [esp+8],0xFFFFFFFF
	jne Block14

 Block7:
	call dword ptr [ZImports::_timeGetTime]
	sub eax,dword ptr [CWndMan::ms_tLastMouseMessage]
	cmp eax,0x3A98
	jbe Block14

 Block8:
	push 0
	mov ecx,edi
	call CInputSystem::ShowCursor
	mov eax,dword ptr [CWndMan::ms_lpWindow+12]
	mov dword ptr [esp+0xC],eax
	test eax,eax
	je Block14

 Block9:
	lea eax,[esp+0xC]
	push eax
	call ZList<CWnd *>::GetNext
	mov esi,dword ptr [eax]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x34]
	lea ecx,[esi+4]
	add esp,4
	call eax
	mov esi,dword ptr [esi+0x6C]
	mov dword ptr [esp+8],esi
	test esi,esi
	je Block13

 Block10:
	lea ecx,[esp+8]
	push ecx
	call ZList<ZRef<CCtrlWnd>>::GetNext
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [eax+4]
	lea esi,[eax+4]
	mov eax,dword ptr [edx+0x20]
	add esp,4
	mov ecx,esi
	call eax
	test eax,eax
	je Block12

 Block11:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	mov ecx,esi
	call eax

 Block12:
	cmp dword ptr [esp+8],0
	jne Block10

 Block13:
	cmp dword ptr [esp+0xC],0
	jne Block9

 Block14:
	pop edi
	pop esi
	add esp,8
	ret
}
}
// CWndMan::TranslateMessage
// 9B5784
static uint8_t _SUB_5B5360_LOOKUP_TABLE_0[189] = {
0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 
1, 2, 4, 1, 1, 4, 4, 4, 4, 4, 4, 4, 3, 
};
__SUB_CLASS_THIS(005B5360, __thiscall, 15612,  CWndMan, int32_t, uint32_t&, uint32_t&, long&, long*) {
__asm {

 Block0:
	sub esp,0x20
	push ebp
	mov ebp,dword ptr [esp+0x28]
	mov eax,dword ptr [ebp]
	push esi
	mov esi,ecx
	cmp eax,0x50
	jne Block2

 Block1:
	pop esi
	mov eax,1
	pop ebp
	add esp,0x20
	ret 0x10

 Block2:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push ebx
	push edi
	cmp eax,0x10E
	ja Block38

 Block3:
	je Block35

 Block4:
	sub eax,0x51
	cmp eax,0xBC
	ja Block54

 Block5:
	movzx eax,byte ptr [eax+_SUB_5B5360_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block26
cmp EAX, 1
je Block6
cmp EAX, 2
je Block16
cmp EAX, 3
je Block20
cmp EAX, 4
je Block54


 Block6:
	test ecx,ecx
	je Block8

 Block7:
	cmp dword ptr [ecx+8],0
	je Block11

 Block8:
	mov ecx,dword ptr [esi+0xA0]
	test ecx,ecx
	je Block54

 Block9:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x48]
	push offset CCtrlEdit::ms_RTTI_CCtrlEdit
	call eax
	test eax,eax
	je Block54

 Block10:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]

 Block11:
	mov eax,dword ptr [ebp]
	cmp eax,0x100
	je Block14

 Block12:
	cmp eax,0x104
	je Block14

 Block13:
	mov edi,0x80000000
	jmp Block15

 Block14:
	xor edi,edi

 Block15:
	call CInputSystem::GetSpecialKeyFlag
	mov ecx,eax
	mov eax,dword ptr [esp+0x3C]
	mov edx,dword ptr [eax]
	and edx,0x1FF0000
	or ecx,edx
	or ecx,edi
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr [ebp],0x100
	mov eax,dword ptr [eax]
	mov edx,dword ptr [ecx]
	push eax
	push edx
	push 0x100
	mov ecx,esi
	call CWndMan::ProcessKey
	mov ecx,dword ptr [esp+0x40]
	pop edi
	pop ebx
	pop esi
	mov dword ptr [ecx],eax
	xor eax,eax
	pop ebp
	add esp,0x20
	ret 0x10

 Block16:
	mov ecx,dword ptr [esp+0x38]
	mov eax,dword ptr [ecx]
	cmp eax,0xD
	je Block19

 Block17:
	cmp eax,0x20
	jb Block61

 Block18:
	cmp eax,0x7F
	jae Block61

 Block19:
	mov dl,al
	lea eax,[esp+0x38]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x3C],dl
	mov byte ptr [esp+0x3D],0
	call CWndMan::SendIMEResult
	pop edi
	pop ebx
	pop esi
	mov eax,1
	pop ebp
	add esp,0x20
	ret 0x10

 Block20:
	mov eax,dword ptr [esi+0xE0]
	test eax,0x20000
	je Block61

 Block21:
	test eax,0x10000
	je Block61

 Block22:
	mov ecx,dword ptr [esi+0xD4]
	push ecx
	call ImmGetContext
	mov edi,eax
	test edi,edi
	je Block24

 Block23:
	push 0
	mov dword ptr [esp+0x14],2
	call GetSystemMetrics
	neg eax
	push 1
	mov dword ptr [esp+0x18],eax
	call GetSystemMetrics
	lea edx,[esp+0x10]
	push edx
	neg eax
	push edi
	mov dword ptr [esp+0x20],eax
	call ImmSetCompositionWindow
	mov eax,dword ptr [esi+0xD4]
	push edi
	push eax
	call ImmReleaseContext

 Block24:
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [esi+0xD4]
	push edx
	mov edx,dword ptr [ebp]
	push ecx
	push edx
	push eax

 Block25:
	call DefWindowProcA
	mov ecx,dword ptr [esp+0x40]
	pop edi
	pop ebx
	pop esi
	mov dword ptr [ecx],eax
	mov eax,1
	pop ebp
	add esp,0x20
	ret 0x10

 Block26:
	push 4
	xor ebx,ebx
	push ebx
	call GetKeyboardLayout
	push eax
	call ImmGetProperty
	mov edx,dword ptr [esi+0xD4]
	push edx
	mov dword ptr [esi+0xE0],eax
	call ImmGetContext
	mov edi,eax
	cmp edi,ebx
	je Block24

 Block27:
	test dword ptr [esi+0xE0],0x10000
	je Block30

 Block28:
	push ebx
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x18],0x40
	call GetSystemMetrics
	neg eax
	push 1
	mov dword ptr [esp+0x1C],eax
	call GetSystemMetrics
	neg eax
	mov dword ptr [esp+0x1C],eax
	lea eax,[esp+0x10]
	push eax
	push edi
	call ImmSetCandidateWindow
	jmp Block34

 Block30:
	lea ecx,[esp+0x10]
	push ecx
	push ebx
	push edi
	call ImmGetCandidateWindow
	test eax,eax
	je Block33

 Block31:
	cmp dword ptr [esp+0x14],0
	je Block33

 Block32:
	lea edx,[esp+0x10]
	push edx
	push edi
	mov dword ptr [esp+0x1C],0
	call ImmSetCandidateWindow

 Block33:
	inc ebx
	cmp ebx,4
	jb Block30

 Block34:
	mov eax,dword ptr [esi+0xD4]
	push edi
	push eax
	call ImmReleaseContext
	mov ecx,esi
	call CWndMan::SendIMEMode
	jmp Block24

 Block35:
	mov ecx,dword ptr [esi+0xE0]
	test ecx,0x20000
	je Block61

 Block36:
	test ecx,0x10000
	je Block61

 Block37:
	mov edx,dword ptr [esp+0x3C]
	mov ecx,dword ptr [edx]
	mov edx,dword ptr [esp+0x38]
	push ecx
	mov ecx,dword ptr [edx]
	mov edx,dword ptr [esi+0xD4]
	push ecx
	push eax
	push edx
	jmp Block25

 Block38:
	cmp eax,0x20A
	ja Block52

 Block39:
	je Block43

 Block40:
	cmp eax,0x10F
	je Block48

 Block41:
	cmp eax,0x1FF
	jbe Block54

 Block42:
	cmp eax,0x206
	ja Block54

 Block43:
	test ecx,ecx
	je Block54

 Block44:
	cmp dword ptr [ecx+0xC],0
	jne Block54

 Block45:
	mov edi,dword ptr [esp+0x3C]
	cmp eax,0x20A
	je Block47

 Block46:
	movzx eax,word ptr [edi+2]
	movzx edx,word ptr [edi]
	push eax
	push edx
	call CInputSystem::SetCursorVectorPos

 Block47:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [esp+0x38]
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [ebp]
	push edx
	push eax
	mov ecx,esi
	call CWndMan::ProcessMouse
	mov ecx,dword ptr [esp+0x40]
	pop edi
	pop ebx
	pop esi
	mov dword ptr [ecx],eax
	xor eax,eax
	pop ebp
	add esp,0x20
	ret 0x10

 Block48:
	mov edi,dword ptr [esp+0x3C]
	mov edx,dword ptr [edi]
	push edx
	mov ecx,esi
	call CWndMan::ProcessIMEComposition
	mov eax,dword ptr [esi+0xE0]
	test eax,0x20000
	jne Block51

 Block49:
	test eax,0x10000
	je Block51

 Block50:
	mov edx,dword ptr [esp+0x40]
	pop edi
	pop ebx
	xor eax,eax
	pop esi
	mov dword ptr [edx],eax
	mov eax,1
	pop ebp
	add esp,0x20
	ret 0x10

 Block51:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [esp+0x38]
	mov edx,dword ptr [ecx]
	push eax
	jmp Block60

 Block52:
	sub eax,0x281
	je Block58

 Block53:
	sub eax,1
	je Block55

 Block54:
	pop edi
	pop ebx
	pop esi
	xor eax,eax
	pop ebp
	add esp,0x20
	ret 0x10

 Block55:
	mov edi,dword ptr [esp+0x38]
	mov edx,dword ptr [edi]
	push edx
	mov ecx,esi
	call CWndMan::ProcessIMENotify
	mov eax,dword ptr [esi+0xE0]
	test eax,0x20000
	jne Block57

 Block56:
	test eax,0x10000
	jne Block50

 Block57:
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [eax]
	jmp Block59

 Block58:
	mov edi,dword ptr [esp+0x38]
	mov eax,dword ptr [edi]
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [esi+0xE4],eax
	mov ecx,esi
	mov dword ptr [ebx],0
	call CWndMan::SendIMEMode
	mov ecx,dword ptr [ebx]

 Block59:
	mov edx,dword ptr [edi]
	push ecx

 Block60:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [esi+0xD4]
	push edx
	push eax
	push ecx
	call DefWindowProcA
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [edx],eax

 Block61:
	pop edi
	pop ebx
	pop esi
	mov eax,1
	pop ebp
	add esp,0x20
	ret 0x10
}
}
// CWndMan::RemoveInvalidatedWindow
__SUB(005B3120, __cdecl, 15631,  void, CWnd*) {
__asm {

 Block0:
	push 0
	lea eax,[esp+8]
	push eax
	mov ecx,offset CWndMan::ms_lpInvalidatedWindow
	call ZList<CWnd *>::Find
	test eax,eax
	je Block2

 Block1:
	push eax
	mov ecx,offset CWndMan::ms_lpInvalidatedWindow
	call ZList<CWnd *>::RemoveAt

 Block2:
	ret
}
}
// CWndMan::OnMouseEnter
__SUB_CLASS_THIS(005B2FF0, __thiscall, 15624,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [_D_G_PSTAGE+4]
	test eax,eax
	je Block2

 Block1:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x14]
	jmp eax

 Block2:
	ret 4
}
}
// CWndMan::UnregisterUIWindow
__SUB_CLASS_THIS(005B3180, __thiscall, 15640,  CWndMan, void, CUIWnd*) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0x128]
	push 0
	lea eax,[esp+0xC]
	push eax
	mov ecx,esi
	call ZList<CUIWnd *>::Find
	test eax,eax
	je Block2

 Block1:
	push eax
	mov ecx,esi
	call ZList<CUIWnd *>::RemoveAt

 Block2:
	pop esi
	ret 4
}
}
// CWndMan::SetFocus
__SUB_CLASS_THIS(005B1A10, __thiscall, 15601,  CWndMan, void, IUIMsgHandler*) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,dword ptr [esp+0xC]
	mov ebx,ecx
	test esi,esi
	je Block2

 Block1:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	mov ecx,esi
	call edx
	test eax,eax
	je Block16

 Block2:
	cmp dword ptr [ebx+0xA0],esi
	je Block16

 Block3:
	push edi
	test esi,esi
	je Block7

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CCtrlWnd::ms_RTTI_CCtrlWnd
	mov ecx,esi
	call edx
	test eax,eax
	je Block7

 Block5:
	lea edi,[esi-4]
	test edi,edi
	je Block8

 Block6:
	mov eax,dword ptr [edi+0x24]
	jmp Block12

 Block7:
	xor edi,edi

 Block8:
	test esi,esi
	je Block11

 Block9:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CWnd::ms_RTTI_CWnd
	mov ecx,esi
	call edx
	test eax,eax
	je Block11

 Block10:
	lea eax,[esi-4]
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	push eax
	mov ecx,ebx
	call CWndMan::SetActiveWndImp
	test eax,eax
	je Block15

 Block13:
	push esi
	mov ecx,ebx
	call CWndMan::SetFocusImp
	test edi,edi
	je Block15

 Block14:
	mov ecx,dword ptr [edi+0x24]
	push edi
	call CWnd::SetFocusChild

 Block15:
	pop edi

 Block16:
	pop esi
	pop ebx
	ret 4
}
}
// CWndMan::SetCursorPos
__SUB_CLASS_THIS(005B15F0, __thiscall, 15605,  CWndMan, void, NakedParam<tagPOINT>, int32_t) {
__asm {

 Block0:
	cmp dword ptr [TSingleton<CInputSystem>::ms_pInstance],0
	push edi
	mov edi,ecx
	je Block12

 Block1:
	cmp dword ptr [esp+0x10],0
	push esi
	je Block11

 Block2:
	mov esi,dword ptr [edi+0x104]
	test esi,esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov eax,dword ptr [esp+0x14]
	mov esi,dword ptr [edi+0x104]
	sub dword ptr [esp+0xC],eax
	test esi,esi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block10

 Block9:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov ecx,dword ptr [esp+0x14]
	sub dword ptr [esp+0x10],ecx

 Block11:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push edx
	push eax
	call CInputSystem::SetCursorPos
	pop esi

 Block12:
	pop edi
	ret 0xC
}
}
// CWndMan::BeginDragDrop
_SUB_EXCEPTION_HANDLER(5B3380)
__SUB_CLASS_THIS(005B3380, __thiscall, 15609,  CWndMan, void, IUIMsgHandler*, IDraggable*, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B3380
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	cmp dword ptr [ebp+0x98],0
	mov eax,dword ptr [esp+0x64]
	mov dword ptr [ebp+0x9C],eax
	je Block2

 Block1:
	mov dword ptr [ebp+0x98],0

 Block2:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0xB
	call CInputSystem::SetCursorState
	mov edi,dword ptr [esp+0x60]
	mov ecx,dword ptr [esp+0x5C]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [ebp+0xA8],ecx
	test edi,edi
	je Block4

 Block3:
	lea edx,[edi+4]
	push edx
	call ebx

 Block4:
	mov esi,dword ptr [ebp+0xB0]
	mov dword ptr [ebp+0xB0],edi
	test esi,esi
	je Block8

 Block5:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block6:
	push edi
	call ebx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block7:
	mov edi,dword ptr [esp+0x60]

 Block8:
	mov esi,dword ptr [edi+0xC]
	test esi,esi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x64]
	push ecx
	push esi
	mov dword ptr [esp+0x6C],0
	call edx
	test eax,eax
	jge Block12

 Block11:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block12:
	mov esi,dword ptr [ebp+0x104]
	mov edi,dword ptr [esp+0x64]
	xor ebx,ebx
	cmp esi,ebx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block16

 Block15:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block16:
	mov eax,dword ptr [esp+0x60]
	sub edi,dword ptr [esp+0x14]
	mov esi,dword ptr [eax+0xC]
	mov dword ptr [esp+0x18],edi
	cmp esi,ebx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[esp+0x64]
	push edx
	push esi
	mov dword ptr [esp+0x6C],ebx
	call eax
	cmp eax,ebx
	jge Block20

 Block19:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	mov edi,dword ptr [ebp+0x104]
	mov esi,dword ptr [esp+0x64]
	cmp edi,ebx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],ebx
	call eax
	cmp eax,ebx
	jge Block24

 Block23:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block24:
	mov eax,dword ptr [ebp+0x104]
	sub esi,dword ptr [esp+0x14]
	mov ecx,0xD
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	cmp eax,ebx
	je Block26

 Block25:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block26:
	mov ecx,dword ptr [esp+0x60]
	mov edi,dword ptr [ecx+0xC]
	mov dword ptr [esp+0x54],ebx
	cmp edi,ebx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x64]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x38]
	push edi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,ebx
	jge Block30

 Block29:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block30:
	mov ebx,8
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp word ptr [esp+0x1C],bx
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x3C]
	push edx
	call edi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	lea ecx,[esp+0x2C]
	push ecx
	mov dword ptr [esp+0x58],1
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	mov edi,dword ptr [esp+0x60]
	mov ecx,dword ptr [edi+0xC]
	mov byte ptr [esp+0x54],2
	test ecx,ecx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [esp+0x1C]
	lea edx,[esp+0x30]
	push edx
	push esi
	push eax
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x54],1
	cmp word ptr [esp+0x2C],bx
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp word ptr [esp+0x3C],bx
	jne Block47

 Block45:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov esi,dword ptr [edi+0xC]
	test esi,esi
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	mov ecx,dword ptr [_D_VTEMPTY]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0xFC]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [_D_VTEMPTY+4]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [_D_VTEMPTY+8]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [_D_VTEMPTY+12]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block52

 Block51:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block52:
	mov esi,dword ptr [edi+0xC]
	test esi,esi
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 0x7FFFFFFD
	push esi
	call ecx
	test eax,eax
	jge Block56

 Block55:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block56:
	mov ecx,dword ptr [ebp+0xA4]
	test ecx,ecx
	je Block60

 Block57:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	test eax,eax
	je Block59

 Block58:
	mov ecx,dword ptr [ebp+0xA4]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x14]
	push 0
	call eax

 Block59:
	mov dword ptr [ebp+0xA4],0

 Block60:
	mov ebx,dword ptr [esp+0x5C]
	test ebx,ebx
	je Block62

 Block61:
	lea ecx,[ebp+0xC0]
	call TSecType<long>::GetData
	mov edx,dword ptr [ebx]
	mov esi,eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,ebx
	call eax
	lea ecx,[ebp+0xB4]
	sub esi,eax
	call TSecType<long>::GetData
	mov edx,dword ptr [ebx]
	mov edi,eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,ebx
	call eax
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x18]
	sub edi,eax
	mov eax,dword ptr [esp+0x60]
	push edi
	push esi
	push eax
	push 1
	mov ecx,ebx
	call edx
	mov dword ptr [ebp+0xA4],ebx

 Block62:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 0xC
}
}
// CWndMan::InsertInvalidatedWindow
__SUB(005B4AA0, __cdecl, 15631,  void, CWnd*) {
__asm {

 Block0:
	push 0
	lea eax,[esp+8]
	push eax
	mov ecx,offset CWndMan::ms_lpInvalidatedWindow
	call ZList<CWnd *>::Find
	test eax,eax
	jne Block2

 Block1:
	mov ecx,offset CWndMan::ms_lpInvalidatedWindow
	call ZList<CWnd *>::AddTail_
	mov ecx,dword ptr [esp+4]
	mov dword ptr [eax],ecx

 Block2:
	ret
}
}
// CWndMan::DestroyAll
__SUB_CLASS_THIS0(005B2120, __thiscall, 15594,  CWndMan, void) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [CWndMan::ms_lpWindow+12]
	push edi
	mov edi,ecx
	mov dword ptr [esp+4],eax
	test eax,eax
	je Block7

 Block1:
	push esi

 Block2:
	lea eax,[esp+8]
	push eax
	call ZList<CWnd *>::GetNext
	mov esi,dword ptr [eax]
	add esp,4
	cmp esi,edi
	je Block5

 Block3:
	mov ecx,esi
	call CWnd::Destroy
	test esi,esi
	je Block5

 Block4:
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [edx]
	lea ecx,[esi+8]
	push 1
	call eax

 Block5:
	cmp dword ptr [esp+8],0
	jne Block2

 Block6:
	pop esi

 Block7:
	mov ecx,edi
	call CWnd::Destroy
	test edi,edi
	je Block9

 Block8:
	mov edx,dword ptr [edi+8]
	mov eax,dword ptr [edx]
	lea ecx,[edi+8]
	push 1
	call eax

 Block9:
	mov ecx,offset CWndMan::ms_lpWindow
	call ZList<CWnd *>::RemoveAll
	mov ecx,offset CWndMan::ms_lpUpdateWindow
	pop edi
	add esp,4
	jmp  ZList<CWnd *>::RemoveAll
}
}
// CWndMan::ResetOrgWindow
_SUB_EXCEPTION_HANDLER(5B1AF0)
__SUB_CLASS_THIS0(005B1AF0, __thiscall, 15594,  CWndMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B1AF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	add ecx,0x104
	mov dword ptr [esp+0x14],ecx

 Block1:
	mov ecx,dword ptr [_D_G_GR]
	xor ebp,ebp
	cmp ecx,ebp
	je Block37

 Block2:
	lea eax,[esp+0x18]
	push eax
	call IWzGr2D::Getcenter
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x54],ebp
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	cmp eax,ebp
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block4:
	mov ecx,dword ptr [esp+0x14]
	mov esi,dword ptr [ecx]
	mov byte ptr [esp+0x54],1
	cmp esi,ebp
	je Block37

 Block5:
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x64]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x38]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,ebp
	jge Block7

 Block6:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block7:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x54],0
	jne Block10

 Block8:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block11:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp eax,ebp
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block13:
	call get_adjust_cy
	mov edi,eax
	mov eax,0x55555556
	imul ebx
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	lea ecx,[esi+esi*2]
	mov eax,ebx
	sub eax,ecx
	neg edi
	sub eax,0
	je Block16

 Block14:
	sub eax,2
	jne Block17

 Block15:
	call get_screen_width
	cdq
	sub eax,edx
	mov ebp,eax
	sar ebp,1
	jmp Block17

 Block16:
	call get_screen_width
	cdq
	sub eax,edx
	sar eax,1
	mov ebp,eax
	neg ebp

 Block17:
	sub esi,0
	je Block20

 Block18:
	sub esi,2
	jne Block22

 Block19:
	call get_screen_height
	cdq
	sub eax,edx
	sar eax,1
	jmp Block21

 Block20:
	call get_screen_height
	cdq
	sub eax,edx
	sar eax,1
	neg eax

 Block21:
	add edi,eax

 Block22:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x3C]
	push edx
	call esi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block38

 Block23:
	lea ecx,[esp+0x2C]
	push ecx
	mov dword ptr [esp+0x58],2
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block38

 Block24:
	mov eax,dword ptr [esp+0x14]
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x54],3
	test esi,esi
	je Block37

 Block25:
	mov edx,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x54]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x58]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0x3C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x54]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x58]
	push edi
	push ebp
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x90]
	push esi
	call eax
	test eax,eax
	jge Block27

 Block26:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	mov esi,8
	mov byte ptr [esp+0x54],2
	cmp word ptr [esp+0x2C],si
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp word ptr [esp+0x3C],si
	jne Block34

 Block32:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	add dword ptr [esp+0x14],4
	inc ebx
	cmp ebx,9
	jl Block1

 Block36:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	push eax
	call _com_issue_error
}
}
// CWndMan::Unlink
__SUB_CLASS_THIS(005B3290, __thiscall, 15601,  CWndMan, void, IUIMsgHandler*) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov esi,ecx
	xor ebx,ebx
	push ebx
	lea eax,[esp+0x14]
	lea edi,[esi+0x80]
	push eax
	mov ecx,edi
	call ZList<IUIMsgHandler *>::Find
	cmp eax,ebx
	je Block2

 Block1:
	push eax
	mov ecx,edi
	call ZList<IUIMsgHandler *>::RemoveAt

 Block2:
	mov edi,dword ptr [esp+0x10]
	cmp dword ptr [esi+0xA4],edi
	jne Block4

 Block3:
	mov dword ptr [esi+0xA4],ebx

 Block4:
	cmp dword ptr [esi+0xB0],ebx
	je Block7

 Block5:
	cmp dword ptr [esi+0xA8],edi
	jne Block7

 Block6:
	mov ecx,esi
	call CWndMan::ClearDragContext

 Block7:
	cmp dword ptr [esi+0xA0],edi
	jne Block11

 Block8:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	cmp ecx,ebx
	je Block10

 Block9:
	push 1
	call CInputSystem::SetAcquireKeyboard

 Block10:
	mov dword ptr [esi+0xA0],ebx

 Block11:
	cmp edi,ebx
	je Block22

 Block12:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CWnd::ms_RTTI_CWnd
	mov ecx,edi
	call eax
	test eax,eax
	je Block22

 Block13:
	add edi,0xFFFFFFFC
	cmp edi,ebx
	je Block22

 Block14:
	cmp edi,dword ptr [esi+0x98]
	jne Block16

 Block15:
	mov dword ptr [esi+0x98],ebx

 Block16:
	cmp dword ptr [esi+0x94],edi
	jne Block22

 Block17:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x28]
	push ebx
	mov ecx,edi
	call eax
	mov dword ptr [esi+0x94],ebx
	mov eax,dword ptr [CWndMan::ms_lpWindow+16]
	mov dword ptr [esp+0x10],eax
	cmp eax,ebx
	je Block22

 Block18:
	mov edi,edi

 Block19:
	mov eax,dword ptr [eax]
	cmp edi,eax
	je Block21

 Block20:
	push eax
	mov ecx,esi
	call CWndMan::SetActiveWnd
	test eax,eax
	jne Block22

 Block21:
	lea ecx,[esp+0x10]
	push ecx
	call ZList<CWnd *>::GetPrev
	mov eax,dword ptr [esp+0x14]
	add esp,4
	cmp eax,ebx
	jne Block19

 Block22:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CWndMan::OnSetFocus
__SUB_CLASS_THIS(005B2F70, __thiscall, 15620,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [_D_G_PSTAGE+4]
	test eax,eax
	je Block2

 Block1:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+4]
	jmp eax

 Block2:
	xor eax,eax
	ret 4
}
}
// CWndMan::OnMouseWheel
__SUB_CLASS_THIS(005B2FD0, __thiscall, 15623,  IUIMsgHandler, int32_t, long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [_D_G_PSTAGE+4]
	test eax,eax
	je Block2

 Block1:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	jmp eax

 Block2:
	xor eax,eax
	ret 0xC
}
}
// CWndMan::ProcessMouse
_SUB_EXCEPTION_HANDLER(5B3BE0)
__SUB_CLASS_THIS(005B3BE0, __thiscall, 15614,  CWndMan, long, uint32_t, uint32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B3BE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x74]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea edi,[esi+0xB4]
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	mov ebx,eax
	mov ecx,edi
	mov dword ptr [esp+0x2C],ebx
	call TSecType<long>::GetData
	mov dword ptr [esp+0x30],eax
	push 0
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call CWndMan::GetCursorPos
	mov edx,dword ptr [esp+0x24]
	lea ecx,[edi+0xC]
	push edx
	call TSecType<long>::SetData
	mov eax,dword ptr [esp+0x28]
	push eax
	mov ecx,edi
	call TSecType<long>::SetData
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x24]
	mov ebp,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push ecx
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x28],ebp
	call CWndMan::GetHandlerFromPoint
	mov edi,eax
	test edi,edi
	je Block2

 Block1:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	mov ecx,dword ptr [esp+0x24]
	sub ecx,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x30]
	mov dword ptr [esp+0x18],ecx
	mov ecx,edi
	call edx
	mov ecx,dword ptr [esp+0x28]
	sub ecx,eax
	mov dword ptr [esp+0x14],ecx

 Block2:
	cmp dword ptr [esi+0x98],0
	je Block21

 Block3:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x44]
	push eax
	call ebp
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	lea edx,[esp+0x34]
	push edx
	mov dword ptr [esp+0x80],0
	call ebp
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esi+0x98]
	mov byte ptr [esp+0x80],1
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x7C],2
	test ecx,ecx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea edx,[esp+0x44]
	push edx
	mov edx,dword ptr [esp+0x2C]
	sub edx,dword ptr [esp+0x34]
	lea eax,[esp+0x38]
	push eax
	mov eax,dword ptr [esp+0x2C]
	push edx
	sub eax,ebx
	push eax
	call IWzVector2D::RelOffset
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x7C],1
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov ebx,8
	mov byte ptr [esp+0x7C],0
	cmp word ptr [esp+0x34],bx
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov dword ptr [esp+0x7C],0xFFFFFFFF
	cmp word ptr [esp+0x44],bx
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov eax,dword ptr [esi+0x98]
	mov ebx,dword ptr [eax]
	mov ebp,eax
	mov edx,dword ptr [ebp+4]
	mov eax,dword ptr [edx+0x30]
	add ebp,4
	mov ecx,ebp
	call eax
	mov edx,dword ptr [ebp]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,ebp
	call eax
	mov ecx,dword ptr [esi+0x98]
	mov edx,dword ptr [ebx+0x14]
	push eax
	call edx
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 1
	call CInputSystem::IsKeyPressed
	test eax,eax
	jne Block85

 Block20:
	mov ecx,dword ptr [esi+0x98]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x18]
	call edx
	mov ebp,dword ptr [esp+0x20]
	mov dword ptr [esi+0x98],0

 Block21:
	cmp dword ptr [esi+0xB0],0
	je Block53

 Block22:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x64]
	push eax
	call ebp
	lea ecx,[esp+0x64]
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
	lea edx,[esp+0x54]
	mov ebx,3
	push edx
	mov dword ptr [esp+0x80],ebx
	call ebp
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	mov eax,dword ptr [esi+0xB0]
	mov ecx,dword ptr [eax+0xC]
	mov byte ptr [esp+0x7C],4
	test ecx,ecx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea edx,[esp+0x64]
	push edx
	mov edx,dword ptr [esp+0x2C]
	sub edx,dword ptr [esp+0x34]
	lea eax,[esp+0x58]
	push eax
	mov eax,dword ptr [esp+0x2C]
	sub eax,dword ptr [esp+0x34]
	push edx
	push eax
	call IWzVector2D::RelOffset
	mov byte ptr [esp+0x7C],bl
	mov ebx,8
	cmp word ptr [esp+0x54],bx
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov dword ptr [esp+0x7C],0xFFFFFFFF
	cmp word ptr [esp+0x64],bx
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov ecx,dword ptr [esi+0xA4]
	cmp edi,ecx
	je Block41

 Block37:
	test ecx,ecx
	je Block39

 Block38:
	mov eax,dword ptr [esi+0xB0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x18]
	push 0
	push 0
	push eax
	push 0
	call edx

 Block39:
	mov ebp,dword ptr [esp+0x14]
	mov ebx,dword ptr [esp+0x18]
	mov dword ptr [esi+0xA4],edi
	test edi,edi
	je Block46

 Block40:
	mov ecx,dword ptr [esi+0xB0]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x18]
	push ebp
	push ebx
	push ecx
	push 1
	mov ecx,edi
	call edx
	jmp Block42

 Block41:
	mov ebx,dword ptr [esp+0x18]
	mov ebp,dword ptr [esp+0x14]

 Block42:
	test edi,edi
	je Block46

 Block43:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	mov ecx,edi
	call edx
	test eax,eax
	je Block45

 Block44:
	mov ecx,dword ptr [esp+0x88]
	mov ebp,dword ptr [esp+0x14]
	shr ecx,0x10
	movsx ecx,cx
	mov eax,0x77777777
	imul ecx
	sub edx,ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	push eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	push ebp
	push ebx
	mov ecx,edi
	call edx

 Block45:
	mov ecx,dword ptr [esi+0xB0]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x18]
	push ebp
	push ebx
	push ecx
	push 2
	mov ecx,edi
	call edx

 Block46:
	mov eax,dword ptr [esi+0x9C]
	mov ecx,dword ptr [esp+0x84]
	test eax,eax
	jne Block50

 Block47:
	cmp ecx,0x201
	jne Block49

 Block48:
	push 0
	push ebp
	push ebx
	mov ecx,esi
	call CWndMan::EndDragDrop
	jmp Block85

 Block49:
	test eax,eax
	je Block51

 Block50:
	cmp ecx,0x202
	je Block48

 Block51:
	cmp ecx,0x203
	jne Block85

 Block52:
	push 1
	push ebp
	push ebx
	mov ecx,esi
	call CWndMan::EndDragDrop
	jmp Block85

 Block53:
	mov ecx,dword ptr [esi+0xA4]
	cmp edi,ecx
	je Block59

 Block54:
	test ecx,ecx
	je Block56

 Block55:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x14]
	push 0
	call edx

 Block56:
	mov dword ptr [esi+0xA4],edi
	test edi,edi
	je Block85

 Block57:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	mov ecx,edi
	call edx
	test eax,eax
	je Block59

 Block58:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x14]
	push 1
	mov ecx,edi
	call edx

 Block59:
	test edi,edi
	je Block85

 Block60:
	call dword ptr [ZImports::_timeGetTime]
	mov ebx,dword ptr [esp+0x84]
	mov dword ptr [CWndMan::ms_tLastMouseMessage],eax
	cmp ebx,0x200
	jne Block65

 Block61:
	mov ecx,ebp
	call CInputSystem::IsCursorShown
	test eax,eax
	jne Block63

 Block62:
	push 1
	mov ecx,ebp
	call CInputSystem::ShowCursor

 Block63:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	mov ecx,edi
	call edx
	test eax,eax
	je Block85

 Block64:
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax+0xC]
	push ecx
	push edx
	mov ecx,edi
	call eax
	jmp Block85

 Block65:
	cmp ebx,0x20A
	jne Block68

 Block66:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x20]
	mov ecx,edi
	call eax
	test eax,eax
	je Block85

 Block67:
	mov ecx,dword ptr [esp+0x88]
	mov esi,dword ptr [edi]
	shr ecx,0x10
	movsx ecx,cx
	mov eax,0x77777777
	imul ecx
	sub edx,ecx
	mov ecx,dword ptr [esp+0x14]
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,dword ptr [esp+0x18]
	push eax
	mov eax,dword ptr [esi+0x10]
	push ecx
	push edx
	mov ecx,edi
	call eax
	jmp Block85

 Block68:
	cmp ebx,0x201
	jne Block78

 Block69:
	mov eax,dword ptr [ebp+0x9C4]
	sub eax,7
	mov ecx,ebp
	je Block73

 Block70:
	sub eax,1
	je Block72

 Block71:
	push 0xC
	jmp Block74

 Block72:
	push 0xA
	jmp Block74

 Block73:
	push 9

 Block74:
	call CInputSystem::SetCursorState
	push edi
	mov ecx,esi
	call CWndMan::SetFocus
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CWnd::ms_RTTI_CWnd
	mov ecx,edi
	call eax
	test eax,eax
	je Block83

 Block75:
	lea ebp,[edi-4]
	test ebp,ebp
	je Block83

 Block76:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [ebp]
	mov edx,dword ptr [edx+0x24]
	push 0
	push eax
	push ecx
	mov ecx,ebp
	call edx
	cmp eax,1
	jne Block83

 Block77:
	mov dword ptr [esi+0x98],ebp
	jmp Block85

 Block78:
	cmp ebx,0x202
	jne Block83

 Block79:
	mov eax,dword ptr [ebp+0x9C4]
	cmp eax,9
	je Block82

 Block80:
	cmp eax,0xA
	je Block82

 Block81:
	cmp eax,0xC
	jne Block83

 Block82:
	push 0xFFFFFFFF
	mov ecx,ebp
	call CInputSystem::SetCursorState

 Block83:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	mov ecx,edi
	call edx
	test eax,eax
	je Block85

 Block84:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edi]
	push ecx
	mov ecx,dword ptr [esp+0x8C]
	push edx
	mov edx,dword ptr [eax+8]
	push ecx
	push ebx
	mov ecx,edi
	call edx

 Block85:
	xor eax,eax
	mov ecx,dword ptr [esp+0x74]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x6C
	ret 0xC
}
}
// CWndMan::ProcessJoystick
__SUB_CLASS_THIS(005B1DC0, __thiscall, 15614,  CWndMan, long, uint32_t, uint32_t, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0xA0],0
	jne Block2

 Block1:
	lea eax,[esi+4]
	push eax
	call CWndMan::SetFocus
	cmp dword ptr [esi+0xA0],0
	je Block10

 Block2:
	mov ecx,dword ptr [esi+0xA0]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CWnd::ms_RTTI_CWnd
	call edx
	test eax,eax
	je Block10

 Block3:
	mov esi,dword ptr [esi+0xA0]
	test esi,esi
	je Block10

 Block4:
	lea eax,[esi-4]
	test eax,eax
	je Block10

 Block5:
	push edi
	mov edi,dword ptr [_D_G_PSTAGE+4]
	test edi,edi
	je Block9

 Block6:
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x48]
	lea esi,[edi+4]
	push offset CField::ms_RTTI_CField
	mov ecx,esi
	call edx
	test eax,eax
	je Block9

 Block7:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	mov ecx,esi
	call edx
	test eax,eax
	je Block9

 Block8:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x10]
	push eax
	push ecx
	mov ecx,edi
	call CField::OnJoystickButton

 Block9:
	pop edi

 Block10:
	xor eax,eax
	pop esi
	ret 0xC
}
}
// CWndMan::SetActiveWndImp
__SUB_CLASS_THIS(005B1740, __thiscall, 15599,  CWndMan, int32_t, CWnd*) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push edi
	mov edi,ecx
	cmp dword ptr [edi+0x94],esi
	je Block8

 Block1:
	test esi,esi
	je Block4

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x28]
	push 1
	mov ecx,esi
	call edx
	test eax,eax
	jne Block4

 Block3:
	pop edi
	pop esi
	ret 4

 Block4:
	mov ecx,dword ptr [edi+0x94]
	test ecx,ecx
	je Block6

 Block5:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x28]
	push 0
	call edx

 Block6:
	mov dword ptr [edi+0x94],esi
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	test ecx,ecx
	je Block8

 Block7:
	push 1
	call CInputSystem::SetAcquireKeyboard

 Block8:
	pop edi
	mov eax,1
	pop esi
	ret 4
}
}
// CWndMan::NotifyIME
__SUB_CLASS_THIS(005B4DD0, __thiscall, 15639,  CWndMan, void, unsigned long, unsigned long, unsigned long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xD4]
	push edi
	push eax
	call ImmGetContext
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x10]
	push ecx
	mov edi,eax
	mov eax,dword ptr [esp+0x10]
	push edx
	push eax
	push edi
	call ImmNotifyIME
	mov ecx,dword ptr [esi+0xD4]
	push edi
	push ecx
	call ImmReleaseContext
	pop edi
	pop esi
	ret 0xC
}
}
// CWndMan::OnEventChangeScreenResolution
__SUB_CLASS_THIS0(005B3150, __thiscall, 15594,  CWndMan, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CWndMan::ResetOrgWindow
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	movzx ecx,byte ptr [eax+0x41C4]
	push ecx
	mov ecx,esi
	call CWndMan::RelocateUIWindows
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	pop esi
	test ecx,ecx
	je Block2

 Block1:
	jmp  CUIStatusBar::ChangeScreenResolution

 Block2:
	ret
}
}
// CWndMan::OnMouseButton
__SUB_CLASS_THIS(005B2F90, __thiscall, 15621,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [_D_G_PSTAGE+4]
	test eax,eax
	je Block2

 Block1:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	jmp eax

 Block2:
	ret 0x10
}
}
// CWndMan::ProcessIMEComposition
__SUB_CLASS_THIS(005B5180, __thiscall, 15636,  CWndMan, void, long) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xD4]
	push edi
	push eax
	call ImmGetContext
	test byte ptr [esp+0x14],0x10
	mov edi,eax
	je Block2

 Block1:
	push 0
	push 0
	push 0x10
	push edi
	call ImmGetCompositionStringA
	lea ecx,[esp+0x14]
	push ecx
	mov ebp,eax
	push 1
	lea ebx,[esi+0xE8]
	push ebp
	mov ecx,ebx
	call ZArray<unsigned char>::_Realloc
	mov edx,dword ptr [ebx]
	push ebp
	push edx
	push 0x10
	push edi
	call ImmGetCompositionStringA
	jmp Block3

 Block2:
	lea ecx,[esi+0xE8]
	call ZArray<unsigned char>::RemoveAll

 Block3:
	test byte ptr [esp+0x14],0x20
	je Block5

 Block4:
	push 0
	push 0
	push 0x20
	push edi
	call ImmGetCompositionStringA
	mov ebp,eax
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebp
	shr ecx,2
	push 1
	lea ebx,[esi+0xEC]
	push ecx
	mov ecx,ebx
	call ZArray<unsigned long>::_Realloc
	mov edx,dword ptr [ebx]
	push ebp
	push edx
	push 0x20
	push edi
	call ImmGetCompositionStringA
	jmp Block6

 Block5:
	lea ecx,[esi+0xEC]
	call ZArray<unsigned long>::RemoveAll

 Block6:
	test dword ptr [esp+0x14],0x800
	je Block8

 Block7:
	push 0
	push 0
	push 0x800
	push edi
	call ImmGetCompositionStringA
	mov ebx,eax
	lea eax,[esp+0x14]
	push eax
	push 1
	lea ecx,[ebx+1]
	lea ebp,[esi+0xF4]
	push ecx
	mov ecx,ebp
	call ZArray<char>::_Realloc
	mov edx,dword ptr [ebp]
	push ebx
	push edx
	push 0x800
	push edi
	call ImmGetCompositionStringA
	mov eax,dword ptr [ebp]
	lea ecx,[esi+0xF0]
	mov byte ptr [ebx+eax],0
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [ebp]
	push ecx
	mov ecx,esi
	call CWndMan::SendIMEResult
	jmp Block9

 Block8:
	lea ecx,[esi+0xF4]
	call ZArray<char>::RemoveAll

 Block9:
	test byte ptr [esp+0x14],8
	je Block15

 Block10:
	push 0
	push 0
	push 8
	push edi
	call ImmGetCompositionStringA
	lea edx,[esp+0x14]
	push edx
	mov ebp,eax
	push 1
	lea eax,[ebp+1]
	lea ebx,[esi+0xF8]
	push eax
	mov ecx,ebx
	call ZArray<char>::_Realloc
	mov ecx,dword ptr [ebx]
	push ebp
	push ecx
	push 8
	push edi
	call ImmGetCompositionStringA
	test byte ptr [esp+0x14],0x80
	mov edx,dword ptr [ebx]
	mov byte ptr [edx+ebp],0
	je Block13

 Block11:
	push 0
	push 0
	push 0x80
	push edi
	call ImmGetCompositionStringA
	movzx eax,ax
	cmp eax,ebp
	mov dword ptr [esi+0xFC],eax
	jle Block14

 Block12:
	mov ecx,esi
	mov dword ptr [esi+0xFC],ebp
	call CWndMan::SendIMEComp
	jmp Block16

 Block13:
	mov dword ptr [esi+0xFC],0xFFFFFFFF

 Block14:
	mov ecx,esi
	call CWndMan::SendIMEComp
	jmp Block16

 Block15:
	lea ecx,[esi+0xF8]
	call ZArray<char>::RemoveAll
	mov dword ptr [esi+0xFC],0xFFFFFFFF

 Block16:
	cmp dword ptr [esp+0x14],0
	jne Block18

 Block17:
	mov ecx,esi
	call CWndMan::SendIMEComp

 Block18:
	mov eax,dword ptr [esi+0xD4]
	push edi
	push eax
	call ImmReleaseContext
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// CWndMan::SetCaptureWnd
__SUB_CLASS_THIS(005B47F0, __thiscall, 15601,  CWndMan, void, IUIMsgHandler*) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CWndMan::ClearDragContext
	push 0
	lea eax,[esp+0xC]
	sub esi,0xFFFFFF80
	push eax
	mov ecx,esi
	call ZList<IUIMsgHandler *>::Find
	test eax,eax
	je Block2

 Block1:
	push eax
	mov ecx,esi
	call ZList<IUIMsgHandler *>::RemoveAt

 Block2:
	mov ecx,esi
	call ZList<IUIMsgHandler *>::AddTail_
	mov ecx,dword ptr [esp+8]
	mov dword ptr [eax],ecx
	pop esi
	ret 4
}
}
