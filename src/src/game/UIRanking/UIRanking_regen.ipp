#include "regen.hpp"
// UIRanking.ipp
#include "UIRanking.hpp"

// CUIRanking::GetRTTI
__SUB_CLASS_THIS0(0043C7A0, __thiscall, 70696,  CUIRanking, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIRanking::ms_RTTI_CUIRanking
	ret
}
}
// CUIRanking::OnBeforeNavigate
_SUB_EXCEPTION_HANDLER(43C930)
__SUB_CLASS_THIS(0043C930, __thiscall, 70690,  CUIRanking, void, const char*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43C930
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
// CUIRanking::IsKindOf
__SUB_CLASS_THIS(0043C7D0, __thiscall, 70697,  CUIRanking, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIRanking::ms_RTTI_CUIRanking
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
// CUIRanking::~CUIRanking
__SUB_CLASS_THIS0(0043C800, __thiscall, 70687,  CUIRanking, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	int 3// TODO: 	mov dword ptr [esi],offset CUIRanking::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIRanking::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIRanking::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0xB08],offset CUIRanking::`vftable'{for `IOleClientSite'}
	int 3// TODO: 	mov dword ptr [esi+0xB0C],offset CUIRanking::`vftable'{for `IOleInPlaceSite'}
	int 3// TODO: 	mov dword ptr [esi+0xB10],offset CUIRanking::`vftable'{for `IDocHostUIHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xB14],offset CUIRanking::`vftable'{for `IDocHostShowUI'}
	int 3// TODO: 	mov dword ptr [esi+0xB18],offset CUIRanking::`vftable'{for `DWebBrowserEvents2'}
	int 3// TODO: 	mov dword ptr [esi+0xB1C],offset CUIRanking::`vftable'{for `ZThread'}
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
// CUIRanking::OnDestroy
__SUB_CLASS_THIS0(0043C870, __thiscall, 70687,  CUIRanking, void) {
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
// CUIRanking::OnCreate
_SUB_EXCEPTION_HANDLER(43CA40)
__SUB_CLASS_THIS(0043CA40, __thiscall, 70688,  CUIRanking, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43CA40
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
	mov edi,ecx
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x18],esp
	push 0
	push offset _S___3
	push 0
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
	mov eax,dword ptr [esp+0x58]
	push eax
	mov ecx,edi
	call CWebWnd::OnCreate
	push 0
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x6C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGRA
	call _xbstr_t::_ctor_1
	mov ecx,edi
	call CWnd::SetBackgrnd
	push 0
	push 0xFF
	push 0xA
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	push 0xA1
	push 0x80
	lea edx,[esp+0x2C]
	push edx
	mov ecx,edi
	mov dword ptr [esp+0x68],0
	call CWnd::GetLayer
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [esi],0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x6C],1
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
	mov ecx,esi
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
	push 0
	lea eax,[esp+0x74]
	push offset _S_UIUIWINDOWIMGUSE__2
	push eax
	mov byte ptr [esp+0x74],2
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xB8C]
	add esp,0x28
	cmp esi,eax
	je Block10

 Block6:
	mov dword ptr [edi+0xB8C],eax
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	test esi,esi
	je Block10

 Block9:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block10:
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block12:
	mov eax,dword ptr [esp+0x14]
	or ebp,0xFFFFFFFF
	mov dword ptr [esp+0x4C],ebp
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push eax
	call esi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	lea edx,[esp+0x24]
	mov ebx,3
	push edx
	mov dword ptr [esp+0x50],ebx
	call esi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	mov ecx,dword ptr [edi+0xB8C]
	mov byte ptr [esp+0x4C],4
	test ecx,ecx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x4C],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x24],si
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[esp+0x24]
	push edx
	call ebx

 Block24:
	mov dword ptr [esp+0x4C],ebp
	cmp word ptr [esp+0x34],si
	jne Block27

 Block25:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea ecx,[esp+0x34]
	push ecx
	call ebx

 Block28:
	mov ebp,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edx,dword ptr [ebp+0x20B4]
	mov ebx,dword ptr [ebp+0x205C]
	mov dword ptr [esp+0x14],edx
	mov dword ptr [esp+0x54],0
	lea esi,[esp+0x1C]
	mov dword ptr [esp+0x4C],5
	call get_server_string
	mov esi,eax
	lea eax,[esp+0x18]
	push 0xAA2
	push eax
	mov byte ptr [esp+0x54],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push ecx
	push ebx
	push edx
	push eax
	lea eax,[esp+0x64]
	push eax
	mov byte ptr [esp+0x60],7
	call ZXString16::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0x14
	mov byte ptr [esp+0x4C],6
	test eax,eax
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block30:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x4C],5
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block32:
	mov esi,dword ptr [esp+0x54]
	push esi
	mov ecx,edi
	call CWebWnd::NavigateUrl
	push 0xFFFFFFFF
	lea ecx,[ebp+0x40A0]
	call ZArray<CUIWnd *>::InsertBefore
	mov dword ptr [eax],edi
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test esi,esi
	je Block34

 Block33:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block34:
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
// CUIRanking::OnButtonClicked
__SUB_CLASS_THIS(0043C6A0, __thiscall, 70689,  CUIRanking, void, uint32_t) {
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
// CUIRanking::CUIRanking
_SUB_EXCEPTION_HANDLER(43C6D0)
__SUB_CLASS_THIS0(0043C6D0, __thiscall, 70685,  CUIRanking, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43C6D0
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
	push 7
	push 0x11B
	push 5
	push 0xC
	push 7
	push 0x38
	push 7
	push 0x19
	call CWebWnd::_ctor_0
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CUIRanking::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIRanking::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIRanking::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0xB08],offset CUIRanking::`vftable'{for `IOleClientSite'}
	int 3// TODO: 	mov dword ptr [esi+0xB0C],offset CUIRanking::`vftable'{for `IOleInPlaceSite'}
	int 3// TODO: 	mov dword ptr [esi+0xB10],offset CUIRanking::`vftable'{for `IDocHostUIHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xB14],offset CUIRanking::`vftable'{for `IDocHostShowUI'}
	int 3// TODO: 	mov dword ptr [esi+0xB18],offset CUIRanking::`vftable'{for `DWebBrowserEvents2'}
	int 3// TODO: 	mov dword ptr [esi+0xB1C],offset CUIRanking::`vftable'{for `ZThread'}
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esi+0xB8C],eax
	push 0xA
	push 0x12A
	push 0x12F
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
// CUIRanking::Update
__SUB_CLASS_THIS0(0043C690, __thiscall, 70687,  CUIRanking, void) {
__asm {

 Block0:
	jmp  CWebWnd::Update
}
}
// CUIRanking::OnNavigateComplete
_SUB_EXCEPTION_HANDLER(43C890)
__SUB_CLASS_THIS(0043C890, __thiscall, 70690,  CUIRanking, void, const char*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43C890
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
