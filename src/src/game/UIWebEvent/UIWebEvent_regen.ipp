#include "regen.hpp"
// UIWebEvent.ipp
#include "UIWebEvent.hpp"

// CUIWebEvent::GetRTTI
__SUB_CLASS_THIS0(004DC920, __thiscall, 70911,  CUIWebEvent, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIWebEvent::ms_RTTI_CUIWebEvent
	ret
}
}
// get_server_string
__SUB0(004DCCB0, __cdecl, 83043,  ZXString16) {
__asm {

 Block0:
	push ecx
	push 0x2A
	push offset _S_GUILDBOARDMAPLES
	push 0
	push 0x15
	mov ecx,esi
	mov dword ptr [esp+0x10],0
	mov dword ptr [esi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x15
	mov ecx,esi
	call ZXString16::ReleaseBuffer
	mov eax,esi
	pop ecx
	ret
}
}
// CUIWebEvent::OnCreate
_SUB_EXCEPTION_HANDLER(4DCDC0)
__SUB_CLASS_THIS(004DCDC0, __thiscall, 70905,  CUIWebEvent, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4DCDC0
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
	push 0x150C
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
	mov dword ptr [esp+0x28],esp
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
	mov dword ptr [esp+0x38],esp
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
	push 0x150D
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
	mov edi,dword ptr [esi+0xB98]
	add esp,0x28
	cmp edi,eax
	je Block10

 Block6:
	mov dword ptr [esi+0xB98],eax
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
	mov ecx,dword ptr [esi+0xB98]
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
	mov edi,8
	mov byte ptr [esp+0x4C],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x24],di
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
	call ebx

 Block26:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp word ptr [esp+0x34],di
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
	call ebx

 Block30:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	add ecx,0x40A0
	call ZArray<CUIWnd *>::InsertBefore
	mov dword ptr [eax],esi
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
// CUIWebEvent::CUIWebEvent
_SUB_EXCEPTION_HANDLER(4DCBA0)
__SUB_CLASS_THIS0(004DCBA0, __thiscall, 70902,  CUIWebEvent, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4DCBA0
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
	push 0x1F
	call CWebWnd::_ctor_0
	xor ecx,ecx
	lea eax,[esi+0xB8D]
	mov dword ptr [esp+0x14],ecx
	cmp eax,ecx
	je Block2

 Block1:
	add eax,0xFFFFF473
	mov dword ptr [TSingleton<CUIWebEvent>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIWebEvent>::ms_pInstance],ecx

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIWebEvent::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIWebEvent::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIWebEvent::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0xB08],offset CUIWebEvent::`vftable'{for `IOleClientSite'}
	int 3// TODO: 	mov dword ptr [esi+0xB0C],offset CUIWebEvent::`vftable'{for `IOleInPlaceSite'}
	int 3// TODO: 	mov dword ptr [esi+0xB10],offset CUIWebEvent::`vftable'{for `IDocHostUIHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xB14],offset CUIWebEvent::`vftable'{for `IDocHostShowUI'}
	int 3// TODO: 	mov dword ptr [esi+0xB18],offset CUIWebEvent::`vftable'{for `DWebBrowserEvents2'}
	int 3// TODO: 	mov dword ptr [esi+0xB1C],offset CUIWebEvent::`vftable'{for `ZThread'}
	mov dword ptr [esi+0xB90],ecx
	mov dword ptr [esi+0xB94],ecx
	mov dword ptr [esi+0xB98],ecx
	push 0xA
	push 0x185
	mov dword ptr [esi+0xB9C],ecx
	mov dword ptr [esi+0xBA0],ecx
	push 0x138
	mov ecx,esi
	mov byte ptr [esp+0x20],2
	call CUIWnd::CreateUIWndPosSaved
	mov ecx,esi
	call CUIWebEvent::SendRequestAuthKey
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIWebEvent::OnNavigateComplete
_SUB_EXCEPTION_HANDLER(4DC9A0)
__SUB_CLASS_THIS(004DC9A0, __thiscall, 70907,  CUIWebEvent, void, const char*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4DC9A0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [ecx+0xB98]
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
// CUIWebEvent::OnBeforeNavigate
_SUB_EXCEPTION_HANDLER(4DCA40)
__SUB_CLASS_THIS(004DCA40, __thiscall, 70907,  CUIWebEvent, void, const char*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4DCA40
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [ecx+0xB98]
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
// CUIWebEvent::SendRequestAuthKey
_SUB_EXCEPTION_HANDLER(4DCB10)
__SUB_CLASS_THIS0(004DCB10, __thiscall, 70904,  CUIWebEvent, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4DCB10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0x124
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	call timeGetTime
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0xBA0],eax
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret
}
}
// CUIWebEvent::OnButtonClicked
__SUB_CLASS_THIS(004DC870, __thiscall, 70906,  CUIWebEvent, void, uint32_t) {
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
// CUIWebEvent::OnDestroy
__SUB_CLASS_THIS0(004DC980, __thiscall, 70904,  CUIWebEvent, void) {
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
// CUIWebEvent::IsKindOf
__SUB_CLASS_THIS(004DC950, __thiscall, 70912,  CUIWebEvent, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIWebEvent::ms_RTTI_CUIWebEvent
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
// CUIWebEvent::~CUIWebEvent
__SUB_CLASS_THIS0(004DC8A0, __thiscall, 70904,  CUIWebEvent, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	int 3// TODO: 	mov dword ptr [esi],offset CUIWebEvent::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIWebEvent::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIWebEvent::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0xB08],offset CUIWebEvent::`vftable'{for `IOleClientSite'}
	int 3// TODO: 	mov dword ptr [esi+0xB0C],offset CUIWebEvent::`vftable'{for `IOleInPlaceSite'}
	int 3// TODO: 	mov dword ptr [esi+0xB10],offset CUIWebEvent::`vftable'{for `IDocHostUIHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xB14],offset CUIWebEvent::`vftable'{for `IDocHostShowUI'}
	int 3// TODO: 	mov dword ptr [esi+0xB18],offset CUIWebEvent::`vftable'{for `DWebBrowserEvents2'}
	int 3// TODO: 	mov dword ptr [esi+0xB1C],offset CUIWebEvent::`vftable'{for `ZThread'}
	mov eax,dword ptr [esi+0xB98]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIWebEvent>::ms_pInstance],0
	pop esi
	jmp  CWebWnd::~CWebWnd
}
}
// CUIWebEvent::OnMouseButton
__SUB_CLASS_THIS(004DC7D0, __thiscall, 70908,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
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
// CUIWebEvent::Update
_SUB_EXCEPTION_HANDLER(4DD080)
__SUB_CLASS_THIS0(004DD080, __thiscall, 70904,  CUIWebEvent, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4DD080
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
	mov dword ptr [esp+0x14],esi
	mov eax,dword ptr [esi+0xB74]
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test eax,eax
	je Block18

 Block1:
	xor ebx,ebx
	cmp dword ptr [esi+0xB9C],ebx
	jne Block18

 Block2:
	cmp edi,ebx
	je Block18

 Block3:
	mov ebp,dword ptr [edi+0x3830]
	call timeGetTime
	add ebp,0x493E0
	cmp eax,ebp
	jae Block18

 Block4:
	mov dword ptr [esp+0x1C],ebx
	lea esi,[esp+0x28]
	mov dword ptr [esp+0x34],ebx
	call get_server_string
	mov ebp,eax
	push ebx
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x3C],1
	call CWvsContext::GetWebBoardAuthKey
	mov edi,eax
	lea esi,[esp+0x20]
	mov byte ptr [esp+0x34],2
	call get_server_string
	mov esi,eax
	lea edx,[esp+0x18]
	push 0x14EB
	push edx
	mov byte ptr [esp+0x3C],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x34],4
	cmp eax,ebx
	je Block6

 Block5:
	mov eax,dword ptr [eax]
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [edi]
	push ecx
	mov ecx,dword ptr [esi]
	push edx
	push ecx
	push eax
	lea edx,[esp+0x2C]
	push edx
	call ZXString16::Format
	mov ecx,dword ptr [esp+0x2C]
	add esp,0x14
	cmp ecx,ebx
	je Block9

 Block8:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],ebx

 Block9:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x34],2
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x34],1
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block15:
	mov esi,dword ptr [esp+0x1C]
	mov edi,dword ptr [esp+0x14]
	push esi
	mov ecx,edi
	call CWebWnd::NavigateUrl
	mov dword ptr [edi+0xB9C],1
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp esi,ebx
	je Block17

 Block16:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block17:
	mov esi,edi

 Block18:
	call timeGetTime
	mov ecx,dword ptr [esi+0xBA0]
	add ecx,0x2BF20
	cmp eax,ecx
	jbe Block20

 Block19:
	mov ecx,esi
	call CUIWebEvent::SendRequestAuthKey

 Block20:
	mov ecx,esi
	call CWebWnd::Update
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret
}
}
