#include "regen.hpp"
// UIRevive.ipp
#include "UIRevive.hpp"

// CUIRevive::OnSetFocus
__SUB_CLASS_THIS(0043D310, __thiscall, 59276,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIRevive::OnKey
__SUB_CLASS_THIS(0043CD90, __thiscall, 59278,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	ret 8
}
}
// CUIRevive::OnCreate
_SUB_EXCEPTION_HANDLER(43CEA0)
__SUB_CLASS_THIS(0043CEA0, __thiscall, 59275,  CUIRevive, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43CEA0
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
	push 0
	push 0
	lea edi,[esi+0xA0]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	mov ebx,dword ptr [_D_G_PSTAGE+4]
	test ebx,ebx
	je Block24

 Block1:
	mov eax,dword ptr [ebx+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[ebx+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block24

 Block2:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x1C]
	mov ecx,ebx
	call edx
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov ebp,eax
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+8]
	call edx
	mov ecx,dword ptr [eax+0xDEC]
	push ecx
	add eax,0xDE4
	push eax
	call _ZtlSecureFuseHelper<long>::call
	xor edx,edx
	add esp,8
	test eax,eax
	setg dl
	lea ecx,[ebx+0x16C]
	mov dword ptr [esp+0x14],edx
	call TSecType<unsigned long>::GetData
	push eax
	push ebp
	call is_fieldtype_upgradetomb_usable
	add esp,8
	cmp dword ptr [esp+0x14],0
	je Block9

 Block3:
	push 0
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGNO__5
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	push 0
	push 0
	push 0
	push 6
	push offset _S_UIUIWINDOW2IMGNO__4
	lea eax,[esp+0x28]
	push eax
	mov ecx,edi
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0x88]
	mov dword ptr [esp+0x30],0
	call ZRef<CCtrlButton>::op_assign_ptr
	or ebx,0xFFFFFFFF
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x2C],ebx
	je Block5

 Block4:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block5:
	push 0
	push 0
	push 0
	push 7
	push offset _S_UIUIWINDOW2IMGNO__3
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov dword ptr [esp+0x2C],1

 Block6:
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0x90]
	call ZRef<CCtrlButton>::op_assign_ptr
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x2C],ebx
	je Block8

 Block7:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block8:
	mov edx,dword ptr [esi+0x8C]
	jmp Block22

 Block9:
	test eax,eax
	je Block16

 Block10:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0x541370
	call CWvsContext::GetItemCount
	test eax,eax
	jle Block16

 Block11:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test ecx,ecx
	je Block13

 Block12:
	call CUserLocal::RequestUpgradeTombEffect

 Block13:
	push 0
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGNO__2
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	push 0
	push 0
	push 0
	push 6
	push offset _S_UIUIWINDOW2IMGNO__4
	lea eax,[esp+0x28]
	push eax
	mov ecx,edi
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0x88]
	mov dword ptr [esp+0x30],2
	call ZRef<CCtrlButton>::op_assign_ptr
	or ebx,0xFFFFFFFF
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x2C],ebx
	je Block15

 Block14:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block15:
	push 0
	push 0
	push 0
	push 7
	push offset _S_UIUIWINDOW2IMGNO__3
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov dword ptr [esp+0x2C],3
	jmp Block6

 Block16:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x2064],0
	je Block19

 Block17:
	cmp dword ptr [ebx+0x1A4],0
	jne Block19

 Block18:
	push 0
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGNO__1
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	push 0
	push 0
	push 0
	push 6
	push offset _S_UIUIWINDOW2IMGNO__4
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0x88]
	mov dword ptr [esp+0x30],5
	call ZRef<CCtrlButton>::op_assign_ptr
	or ebx,0xFFFFFFFF
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x2C],ebx
	call ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	push 0
	push 0
	push 0
	push 7
	push offset _S_UIUIWINDOW2IMGNO__3
	lea edx,[esp+0x30]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0x90]
	mov dword ptr [esp+0x30],6
	call ZRef<CCtrlButton>::op_assign_ptr
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x2C],ebx
	call ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	mov eax,dword ptr [esi+0x8C]
	push eax
	jmp Block23

 Block19:
	push 0
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGNO
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	push 0
	push 0
	push 0x2A
	push 6
	push offset _S_UIUIWINDOW2IMGNO__4
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0x88]
	mov dword ptr [esp+0x30],4
	call ZRef<CCtrlButton>::op_assign_ptr
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	je Block21

 Block20:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block21:
	mov edx,dword ptr [esi+0x84]

 Block22:
	push edx

 Block23:
	mov ecx,esi
	call CWnd::SetFocusChild

 Block24:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 4
}
}
// CUIRevive::Update
__SUB_CLASS_THIS0(0043CE70, __thiscall, 59274,  CUIRevive, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call dword ptr [ZImports::_timeGetTime]
	sub eax,dword ptr [esi+0x9C]
	cmp eax,0x927C0
	jbe Block2

 Block1:
	push 0
	mov ecx,esi
	call CUIRevive::Revive

 Block2:
	pop esi
	ret
}
}
// CUIRevive::Revive
__SUB_CLASS_THIS(0043CDE0, __thiscall, 59280,  CUIRevive, void, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block3

 Block1:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block3

 Block2:
	mov eax,dword ptr [esp+8]
	push 0
	push 0
	push eax
	push 0
	push 0
	mov ecx,esi
	call CField::SendTransferFieldRequest

 Block3:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	pop esi
	test ecx,ecx
	je Block5

 Block4:
	call CWvsContext::OnRevive
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::UI_CloseRevive

 Block5:
	ret 4
}
}
// CUIRevive::~CUIRevive
_SUB_EXCEPTION_HANDLER(43D330)
__SUB_CLASS_THIS0(0043D330, __thiscall, 59274,  CUIRevive, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43D330
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIRevive::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIRevive::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIRevive::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xA0]
	mov dword ptr [esp+0x1C],5
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0x98]
	mov byte ptr [esp+0x1C],4
	call ZArray<ZXString<char>>::RemoveAll
	lea edi,[esi+0x90]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0x88]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x80]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIRevive>::ms_pInstance],ebx
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CWnd::~CWnd
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
// CUIRevive::CUIRevive
_SUB_EXCEPTION_HANDLER(43D230)
__SUB_CLASS_THIS0(0043D230, __thiscall, 59272,  CUIRevive, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43D230
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
	xor eax,eax
	lea ecx,[esi+0x80]
	mov dword ptr [esp+0x14],eax
	cmp ecx,eax
	je Block2

 Block1:
	lea edx,[ecx-0x80]
	mov dword ptr [TSingleton<CUIRevive>::ms_pInstance],edx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIRevive>::ms_pInstance],eax

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIRevive::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIRevive::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIRevive::`vftable'{for `ZRefCounted'}
	mov dword ptr [ecx+4],eax
	mov dword ptr [esi+0x8C],eax
	mov dword ptr [esi+0x94],eax
	mov dword ptr [esi+0x98],eax
	mov dword ptr [esi+0xA0],eax
	mov dword ptr [esi+0xA4],eax
	mov dword ptr [esi+0xA8],eax
	mov dword ptr [esi+0xAC],eax
	mov dword ptr [esi+0xB0],eax
	push 4
	push 1
	push eax
	push 1
	push 0xA
	push 0x83
	push 0x12C
	push 0xFFFFFF3D
	push 0xFFFFFF6A
	mov ecx,esi
	mov byte ptr [esp+0x38],6
	call CWnd::CreateWnd
	call dword ptr [ZImports::_timeGetTime]
	mov dword ptr [esi+0x9C],eax
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIRevive::OnDestroy
__SUB_CLASS_THIS0(0043CD80, __thiscall, 59274,  CUIRevive, void) {
__asm {

 Block0:
	ret
}
}
// CUIRevive::HitTest
__SUB_CLASS_THIS(0043CDA0, __thiscall, 59279,  CUIRevive, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [esp+0x10]
	push esi
	push eax
	push edx
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
	mov eax,1

 Block4:
	pop esi
	ret 0xC
}
}
// CUIRevive::OnButtonClicked
__SUB_CLASS_THIS(0043CE40, __thiscall, 59277,  CUIRevive, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,1
	je Block5

 Block1:
	sub eax,5
	je Block4

 Block2:
	sub eax,1
	je Block5

 Block3:
	ret 4

 Block4:
	mov dword ptr [esp+4],1
	jmp  CUIRevive::Revive

 Block5:
	mov dword ptr [esp+4],0
	jmp  CUIRevive::Revive
}
}
