#include "regen.hpp"
// UIOperatorBoard.ipp
#include "UIOperatorBoard.hpp"

// CUIOpBoardState::~CUIOpBoardState
__SUB_CLASS_THIS0(00410D60, __thiscall, 70760,  CUIOpBoardState, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	int 3// TODO: 	mov dword ptr [esi],offset CUIOpBoardState::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIOpBoardState::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIOpBoardState::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xB08]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov ecx,esi
	pop esi
	jmp  CUIWnd::~CUIWnd
}
}
// CUIOpBoardState::OnMouseButton
_SUB_EXCEPTION_HANDLER(411140)
__SUB_CLASS_THIS(00411140, __thiscall, 70762,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_411140
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
	cmp dword ptr [esp+0x1C],0x201
	jne Block4

 Block1:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x1C]
	push 0x5D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x18],0
	call play_ui_sound
	mov eax,dword ptr [esp+0x20]
	add esp,4
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	push 0xFFFFFFFF
	push 0x1C
	mov ecx,esi
	call CWvsContext::UI_Open
	mov ecx,dword ptr [edi+0xACC]
	push ecx
	mov ecx,esi
	call CWvsContext::UI_Close

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 0x10
}
}
// CUIOperatorBoard::OnDestroy
__SUB_CLASS_THIS0(00410B10, __thiscall, 70738,  CUIOperatorBoard, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	call CWvsContext::RemoveFromStackForTab
	mov ecx,esi
	pop esi
	jmp  CUIWnd::OnDestroy
}
}
// CUIOperatorBoard::GetRTTI
__SUB_CLASS_THIS0(00410A40, __thiscall, 70744,  CUIOperatorBoard, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIOperatorBoard::ms_RTTI_CUIOperatorBoard
	ret
}
}
// CUIOperatorBoard::~CUIOperatorBoard
__SUB_CLASS_THIS0(00410AA0, __thiscall, 70738,  CUIOperatorBoard, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	int 3// TODO: 	mov dword ptr [esi],offset CUIOperatorBoard::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIOperatorBoard::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIOperatorBoard::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0xB08],offset CUIOperatorBoard::`vftable'{for `IOleClientSite'}
	int 3// TODO: 	mov dword ptr [esi+0xB0C],offset CUIOperatorBoard::`vftable'{for `IOleInPlaceSite'}
	int 3// TODO: 	mov dword ptr [esi+0xB10],offset CUIOperatorBoard::`vftable'{for `IDocHostUIHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xB14],offset CUIOperatorBoard::`vftable'{for `IDocHostShowUI'}
	int 3// TODO: 	mov dword ptr [esi+0xB18],offset CUIOperatorBoard::`vftable'{for `DWebBrowserEvents2'}
	int 3// TODO: 	mov dword ptr [esi+0xB1C],offset CUIOperatorBoard::`vftable'{for `ZThread'}
	mov eax,dword ptr [esi+0xB8C]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov ecx,esi
	pop esi
	jmp  CWebWnd::~CWebWnd
}
}
// CUIOperatorBoard::OnBeforeNavigate
_SUB_EXCEPTION_HANDLER(410BD0)
__SUB_CLASS_THIS(00410BD0, __thiscall, 70741,  CUIOperatorBoard, void, const char*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_410BD0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [ecx+0xB8C]
	test ecx,ecx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+8]
	push eax
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x14],0
	test esi,esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x40]
	push 0xFF
	push 0xFF
	push esi
	call edx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

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
	ret 4
}
}
// CUIOperatorBoard::OnMouseButton
__SUB_CLASS_THIS(00410890, __thiscall, 70742,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	cmp eax,0x200
	je Block4

 Block1:
	cmp eax,0x201
	je Block5

 Block2:
	cmp eax,0x202
	je Block4

 Block3:
	xor eax,eax
	mov dword ptr [esi+0xB8C],eax
	mov dword ptr [esi+0xB90],eax
	pop esi
	ret 0x10

 Block4:
	cmp eax,0x201
	jne Block6

 Block5:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esi+0xB8C],eax
	mov dword ptr [esi+0xB90],ecx
	pop esi
	ret 0x10

 Block6:
	cmp eax,0x202
	jne Block8

 Block7:
	mov edx,dword ptr [esi+0xB90]
	mov eax,dword ptr [esi+0xB8C]
	push edi
	mov edi,dword ptr [esp+0x10]
	push edx
	push eax
	push edi
	push 0x201
	call CWebWnd::OnMouseButton
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x14]
	push ecx
	push edx
	push edi
	push 0x202
	mov ecx,esi
	call CWebWnd::OnMouseButton
	pop edi

 Block8:
	pop esi
	ret 0x10
}
}
// CUIOpBoardState::CUIOpBoardState
_SUB_EXCEPTION_HANDLER(410C80)
__SUB_CLASS_THIS0(00410C80, __thiscall, 70758,  CUIOpBoardState, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_410C80
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
	push 0
	push 0
	push 1
	push 0
	push 0
	push 0
	push 0x1D
	call CUIWnd::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CUIOpBoardState::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIOpBoardState::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIOpBoardState::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x14],0
	mov dword ptr [esi+0xB08],0
	push 0xA
	push 0x20
	push 0x1D
	mov ecx,esi
	mov byte ptr [esp+0x20],1
	call CUIWnd::CreateUIWndPosSaved
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIOpBoardState::OnCreate
_SUB_EXCEPTION_HANDLER(410DE0)
__SUB_CLASS_THIS(00410DE0, __thiscall, 70761,  CUIOpBoardState, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_410DE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
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
	call CUIWnd::OnCreate_0
	push 0
	push 0xFF
	push 0xA
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	push 0
	push 0
	lea edx,[esp+0x28]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x64],0
	call CWnd::GetLayer
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [edi],0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x68],1
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov ecx,edi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	test eax,eax
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	lea eax,[esp+0x28]
	push 0x1413
	push eax
	mov byte ptr [esp+0x6C],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x64],3
	push 0
	push eax
	lea ecx,[esp+0x74]
	push ecx
	mov byte ptr [esp+0x70],5
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB08]
	add esp,0x28
	cmp edi,eax
	je Block10

 Block6:
	mov dword ptr [esi+0xB08],eax
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block8:
	test edi,edi
	je Block10

 Block9:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block10:
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x48],4
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block14:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
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
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	lea edx,[esp+0x20]
	push edx
	mov dword ptr [esp+0x4C],6
	call edi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	mov ecx,dword ptr [esi+0xB08]
	mov byte ptr [esp+0x48],7
	test ecx,ecx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x48],6
	cmp word ptr [esp+0x20],si
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x20]
	push edx
	call edi

 Block26:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp word ptr [esp+0x30],si
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x40
	ret 4

 Block29:
	lea ecx,[esp+0x30]
	push ecx
	call edi

 Block30:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x40
	ret 4
}
}
// CUIOpBoardState::OnMouseEnter
_SUB_EXCEPTION_HANDLER(411040)
__SUB_CLASS_THIS(00411040, __thiscall, 70763,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_411040
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
	mov edi,dword ptr [esp+0x20]
	push edi
	call CUIWnd::OnMouseEnter
	test edi,edi
	je Block4

 Block1:
	lea eax,[esp+0x20]
	push 0x5D1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x1C],0
	call play_ui_sound
	mov eax,dword ptr [esp+0x24]
	or edi,0xFFFFFFFF
	add esp,4
	mov dword ptr [esp+0x18],edi
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	push 1
	push 0xC8
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x14B5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	mov dword ptr [esp+0x24],1
	call eax
	mov edx,dword ptr [esi]
	add eax,0x14
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	sub eax,0x64
	push eax
	lea ecx,[esi+0x84]
	mov dword ptr [esp+0x2C],edi
	call CUIToolTip::SetToolTip_String_MultiLine
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4

 Block4:
	lea ecx,[esi+0x84]
	call CUIToolTip::ClearToolTip
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CUIOpBoardState::GetRTTI
__SUB_CLASS_THIS0(00410D10, __thiscall, 70766,  CUIOpBoardState, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIOpBoardState::ms_RTTI_CUIOpBoardState
	ret
}
}
// CUIOpBoardState::IsKindOf
__SUB_CLASS_THIS(00410D30, __thiscall, 70767,  CUIOpBoardState, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIOpBoardState::ms_RTTI_CUIOpBoardState
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
// CUIOperatorBoard::IsKindOf
__SUB_CLASS_THIS(00410A70, __thiscall, 70745,  CUIOperatorBoard, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIOperatorBoard::ms_RTTI_CUIOperatorBoard
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
// CUIOperatorBoard::CUIOperatorBoard
_SUB_EXCEPTION_HANDLER(410960)
__SUB_CLASS_THIS0(00410960, __thiscall, 70736,  CUIOperatorBoard, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_410960
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
	push 6
	push 0x126
	push 3
	push 0xA
	push 3
	push 0x18
	push 3
	push 0x1C
	call CWebWnd::_ctor_0
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CUIOperatorBoard::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIOperatorBoard::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIOperatorBoard::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0xB08],offset CUIOperatorBoard::`vftable'{for `IOleClientSite'}
	int 3// TODO: 	mov dword ptr [esi+0xB0C],offset CUIOperatorBoard::`vftable'{for `IOleInPlaceSite'}
	int 3// TODO: 	mov dword ptr [esi+0xB10],offset CUIOperatorBoard::`vftable'{for `IDocHostUIHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xB14],offset CUIOperatorBoard::`vftable'{for `IDocHostShowUI'}
	int 3// TODO: 	mov dword ptr [esi+0xB18],offset CUIOperatorBoard::`vftable'{for `DWebBrowserEvents2'}
	int 3// TODO: 	mov dword ptr [esi+0xB1C],offset CUIOperatorBoard::`vftable'{for `ZThread'}
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esi+0xB8C],eax
	push 0xA
	push 0x185
	push 0x138
	mov ecx,esi
	mov byte ptr [esp+0x20],1
	mov dword ptr [esi+0xB90],eax
	mov dword ptr [esi+0xB94],eax
	call CUIWnd::CreateUIWndPosSaved
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIOperatorBoard::OnNavigateComplete
_SUB_EXCEPTION_HANDLER(410B30)
__SUB_CLASS_THIS(00410B30, __thiscall, 70741,  CUIOperatorBoard, void, const char*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_410B30
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [ecx+0xB8C]
	test ecx,ecx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+8]
	push eax
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x14],0
	test esi,esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x40]
	push 0
	push 0
	push esi
	call edx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

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
	ret 4
}
}
// CUIOperatorBoard::Update
__SUB_CLASS_THIS0(00410880, __thiscall, 70738,  CUIOperatorBoard, void) {
__asm {

 Block0:
	jmp  CWebWnd::Update
}
}
// CUIOpBoardState::HitTest
__SUB_CLASS_THIS(00410920, __thiscall, 70764,  CUIOpBoardState, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	jmp  CWnd::HitTest
}
}
// CUIOperatorBoard::OnButtonClicked
__SUB_CLASS_THIS(00410930, __thiscall, 70740,  CUIOperatorBoard, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test eax,eax
	je Block3

 Block1:
	cmp dword ptr [esp+4],0x3E8
	jne Block3

 Block2:
	mov ecx,dword ptr [ecx+0xAD0]
	mov dword ptr [esp+4],ecx
	mov ecx,eax
	jmp  CWvsContext::UI_Close

 Block3:
	ret 4
}
}
// CUIOperatorBoard::OnCreate
_SUB_EXCEPTION_HANDLER(4112B0)
__SUB_CLASS_THIS(004112B0, __thiscall, 70739,  CUIOperatorBoard, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4112B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x18],esp
	push 0
	push offset _S___3
	push 0
	push 0
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	mov eax,dword ptr [esp+0x58]
	push eax
	mov ecx,esi
	call CWebWnd::OnCreate
	push 0
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x6C],esp
	push 0x1411
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	push 0
	push 0xFF
	push 0xA
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	push 0xA1
	push 0x80
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x68],0
	call CWnd::GetLayer
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [edi],0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x6C],1
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov ecx,edi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	test eax,eax
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	lea eax,[esp+0x2C]
	push 0x1412
	push eax
	mov byte ptr [esp+0x70],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x68],3
	push 0
	push eax
	lea ecx,[esp+0x78]
	push ecx
	mov byte ptr [esp+0x74],5
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB8C]
	add esp,0x28
	cmp edi,eax
	je Block10

 Block6:
	mov dword ptr [esi+0xB8C],eax
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block8:
	test edi,edi
	je Block10

 Block9:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block10:
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x4C],4
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block14:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push eax
	call edi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	lea edx,[esp+0x24]
	mov ebx,6
	push edx
	mov dword ptr [esp+0x50],ebx
	call edi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	mov ecx,dword ptr [esi+0xB8C]
	mov byte ptr [esp+0x4C],7
	test ecx,ecx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x4C],bl
	mov ebx,8
	cmp word ptr [esp+0x24],bx
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x24]
	push edx
	call edi

 Block26:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp word ptr [esp+0x34],bx
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x34]
	push ecx
	call edi

 Block30:
	mov dword ptr [esp+0x54],0
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x50],ebx
	call CWvsContext::GetGMBoardURL
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x54],9
	call ZXString16::AssignCharStr
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],bl
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	mov edi,dword ptr [esp+0x54]
	push edi
	mov ecx,esi
	call CWebWnd::NavigateUrl
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	add ecx,0x40A0
	call ZArray<CUIWnd *>::InsertBefore
	mov dword ptr [eax],esi
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test edi,edi
	je Block34

 Block33:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block34:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x40
	ret 4
}
}
