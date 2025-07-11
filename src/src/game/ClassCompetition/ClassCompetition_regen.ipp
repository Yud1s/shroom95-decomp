#include "regen.hpp"
// ClassCompetition.ipp
#include "ClassCompetition.hpp"

// CClassCompetition::OnBeforeNavigate
_SUB_EXCEPTION_HANDLER(ABC60)
__SUB_CLASS_THIS(000ABC60, __thiscall, 81989,  CClassCompetition, void, const char*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_ABC60
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [ecx+0xB9C]
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
// CClassCompetition::OnCreate
_SUB_EXCEPTION_HANDLER(AC160)
__SUB_CLASS_THIS(000AC160, __thiscall, 81988,  CClassCompetition, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_AC160
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x18],esp
	xor ebx,ebx
	push ebx
	push offset _S___3
	push ebx
	push ebx
	mov ecx,edi
	mov dword ptr [edi],ebx
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	mov eax,dword ptr [esp+0x64]
	push eax
	mov ecx,esi
	call CWebWnd::OnCreate
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x78],esp
	push 0x11DA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov dword ptr [esp+0x4C],ebx
	mov dword ptr [esp+0x44],ebx
	mov dword ptr [esp+0x48],ebx
	lea edx,[esp+0x60]
	push 0x11DD
	push edx
	mov dword ptr [esp+0x60],ebx
	mov dword ptr [esp+0x48],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0x5C],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x58],bl
	cmp eax,ebx
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
	mov dword ptr [esp+0x60],eax
	mov byte ptr [esp+0x58],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0x58],bl
	cmp eax,ebx
	je Block16

 Block6:
	add eax,8
	cmp eax,ebx
	je Block16

 Block7:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block9

 Block8:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [esi+0xB94]
	mov dword ptr [esi+0xB94],edi
	mov dword ptr [esp+0x24],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x24]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0xB94]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x40]
	push eax
	push 1
	push 0x163
	push 0x7C
	push ebx
	push esi
	call edx
	push ebx
	push 0xFF
	push 0xA
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	push 0xA1
	push 0x80
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x74],3
	call CWnd::GetLayer
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [edi],ebx
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x78],4
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block13:
	mov ecx,edi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	cmp eax,ebx
	jge Block17

 Block14:
	cmp eax,0x80004002
	je Block17

 Block15:
	push eax
	call _com_issue_error

 Block16:
	xor edi,edi
	jmp Block9

 Block17:
	lea ecx,[esp+0x2C]
	push 0x11DB
	push ecx
	mov byte ptr [esp+0x7C],5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x74],6
	push ebx
	push eax
	lea edx,[esp+0x84]
	push edx
	mov byte ptr [esp+0x80],8
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB9C]
	add esp,0x28
	cmp edi,eax
	je Block22

 Block18:
	mov dword ptr [esi+0xB9C],eax
	cmp eax,ebx
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block20:
	cmp edi,ebx
	je Block22

 Block21:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block22:
	mov eax,dword ptr [esp+0x60]
	cmp eax,ebx
	je Block24

 Block23:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block24:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x58],7
	cmp eax,ebx
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block26:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x58],bl
	cmp eax,ebx
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block28:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	call edi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x5C],9
	call edi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov ecx,dword ptr [esi+0xB9C]
	mov byte ptr [esp+0x58],0xA
	cmp ecx,ebx
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x58],9
	cmp word ptr [esp+0x20],si
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebx
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[esp+0x20]
	push edx
	call edi

 Block38:
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x30],si
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebx
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0x30]
	push ecx
	call edi

 Block42:
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	cmp eax,ebx
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block44:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x4C
	ret 4
}
}
// CClassCompetition::CClassCompetition
_SUB_EXCEPTION_HANDLER(ABFD0)
__SUB_CLASS_THIS0(000ABFD0, __thiscall, 81985,  CClassCompetition, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_ABFD0
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
	push 8
	push 0x124
	push 3
	push 0x35
	push 3
	push 0x34
	push 3
	push 0x18
	call CWebWnd::_ctor_0
	xor ecx,ecx
	lea eax,[esi+0xB8D]
	mov dword ptr [esp+0x14],ecx
	cmp eax,ecx
	je Block2

 Block1:
	add eax,0xFFFFF473
	mov dword ptr [TSingleton<CClassCompetition>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CClassCompetition>::ms_pInstance],ecx

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CClassCompetition::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CClassCompetition::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CClassCompetition::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0xB08],offset CClassCompetition::`vftable'{for `IOleClientSite'}
	int 3// TODO: 	mov dword ptr [esi+0xB0C],offset CClassCompetition::`vftable'{for `IOleInPlaceSite'}
	int 3// TODO: 	mov dword ptr [esi+0xB10],offset CClassCompetition::`vftable'{for `IDocHostUIHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xB14],offset CClassCompetition::`vftable'{for `IDocHostShowUI'}
	int 3// TODO: 	mov dword ptr [esi+0xB18],offset CClassCompetition::`vftable'{for `DWebBrowserEvents2'}
	int 3// TODO: 	mov dword ptr [esi+0xB1C],offset CClassCompetition::`vftable'{for `ZThread'}
	mov dword ptr [esi+0xB94],ecx
	mov dword ptr [esi+0xB98],ecx
	mov dword ptr [esi+0xB9C],ecx
	push 0xA
	push 0x185
	mov dword ptr [esi+0xBA0],ecx
	push 0x138
	mov ecx,esi
	mov byte ptr [esp+0x20],3
	call CUIWnd::CreateUIWndPosSaved
	mov ecx,esi
	call CClassCompetition::SendRequestAuthKey
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CClassCompetition::~CClassCompetition
_SUB_EXCEPTION_HANDLER(ABD40)
__SUB_CLASS_THIS0(000ABD40, __thiscall, 81987,  CClassCompetition, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_ABD40
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
	int 3// TODO: 	mov dword ptr [esi],offset CClassCompetition::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CClassCompetition::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CClassCompetition::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0xB08],offset CClassCompetition::`vftable'{for `IOleClientSite'}
	int 3// TODO: 	mov dword ptr [esi+0xB0C],offset CClassCompetition::`vftable'{for `IOleInPlaceSite'}
	int 3// TODO: 	mov dword ptr [esi+0xB10],offset CClassCompetition::`vftable'{for `IDocHostUIHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xB14],offset CClassCompetition::`vftable'{for `IDocHostShowUI'}
	int 3// TODO: 	mov dword ptr [esi+0xB18],offset CClassCompetition::`vftable'{for `DWebBrowserEvents2'}
	int 3// TODO: 	mov dword ptr [esi+0xB1C],offset CClassCompetition::`vftable'{for `ZThread'}
	mov eax,dword ptr [esi+0xB9C]
	mov dword ptr [esp+0x18],1
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	cmp dword ptr [esi+0xB94],0
	lea edi,[esi+0xB90]
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	mov ecx,esi
	mov dword ptr [TSingleton<CClassCompetition>::ms_pInstance],0
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CWebWnd::~CWebWnd
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CClassCompetition::Update
_SUB_EXCEPTION_HANDLER(AC4F0)
__SUB_CLASS_THIS0(000AC4F0, __thiscall, 81987,  CClassCompetition, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_AC4F0
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
	mov ebp,ecx
	mov eax,dword ptr [ebp+0xB74]
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test eax,eax
	je Block11

 Block1:
	xor edi,edi
	cmp dword ptr [ebp+0xB98],edi
	jne Block11

 Block2:
	mov ebx,dword ptr [esi+0x3828]
	call timeGetTime
	add ebx,0x493E0
	cmp eax,ebx
	jae Block11

 Block3:
	mov dword ptr [esp+0x14],edi
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x30],edi
	call CWvsContext::GetClassCompetitionAuthKey
	mov edi,eax
	lea esi,[esp+0x1C]
	mov byte ptr [esp+0x2C],1
	call get_server_string
	mov esi,eax
	lea edx,[esp+0x18]
	push 0x11DC
	mov bl,2
	push edx
	mov byte ptr [esp+0x34],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x3C],3
	call ZXString16::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0x10
	mov byte ptr [esp+0x2C],bl
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x2C],1
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x2C],0
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block9:
	mov esi,dword ptr [esp+0x14]
	push esi
	mov ecx,ebp
	call CWebWnd::NavigateUrl
	mov dword ptr [ebp+0xB98],1
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test esi,esi
	je Block11

 Block10:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block11:
	call timeGetTime
	mov ecx,dword ptr [ebp+0xBA0]
	add ecx,0x2BF20
	cmp eax,ecx
	jbe Block13

 Block12:
	mov ecx,ebp
	call CClassCompetition::SendRequestAuthKey

 Block13:
	mov ecx,ebp
	call CWebWnd::Update
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret
}
}
// CClassCompetition::SendRequestAuthKey
_SUB_EXCEPTION_HANDLER(ABF50)
__SUB_CLASS_THIS0(000ABF50, __thiscall, 81987,  CClassCompetition, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_ABF50
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
	push 0x123
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	mov dword ptr [esp+0x24],0
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
// CClassCompetition::OnButtonClicked
__SUB_CLASS_THIS(000ABB80, __thiscall, 81990,  CClassCompetition, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block2

 Block1:
	cmp eax,0x3E8
	jne Block5

 Block2:
	mov ecx,dword ptr [TSingleton<CClassCompetition>::ms_pInstance]
	test ecx,ecx
	je Block5

 Block3:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CClassCompetition>::ms_pInstance]
	test eax,eax
	je Block5

 Block4:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	mov dword ptr [esp+4],1
	jmp edx

 Block5:
	ret 4
}
}
// CClassCompetition::OnNavigateComplete
_SUB_EXCEPTION_HANDLER(ABBC0)
__SUB_CLASS_THIS(000ABBC0, __thiscall, 81989,  CClassCompetition, void, const char*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_ABBC0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [ecx+0xB9C]
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
