#include "regen.hpp"
// UIStat.ipp
#include "UIStat.hpp"

// CUIStat::OnMouseEnter
__SUB_CLASS_THIS(00461480, __thiscall, 55384,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0x84]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CUIStat::IsMyAddon
__SUB_CLASS_THIS(004679A0, __thiscall, 55390,  CUIStat, int32_t, CWnd*) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUIStatDetail>::ms_pInstance]
	test eax,eax
	je Block3

 Block1:
	cmp eax,dword ptr [esp+4]
	jne Block3

 Block2:
	mov eax,1
	ret 4

 Block3:
	xor eax,eax
	ret 4
}
}
// CUIStat::OnMouseMove
_SUB_EXCEPTION_HANDLER(4649D0)
__SUB_CLASS_THIS(004649D0, __thiscall, 55383,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4649D0
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
	mov ebx,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x1C]
	push eax
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [esp+0x20]
	mov esi,dword ptr [eax+4]
	test edi,edi
	je Block5

 Block1:
	add edi,0xFFFFFFF0
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block4

 Block3:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block4:
	mov dword ptr [esp+0x20],0

 Block5:
	mov ecx,dword ptr [esi+0x35]
	lea eax,[esi+0x33]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx edx,al
	push edx
	call get_next_level_exp
	xor edi,edi
	add esp,0xC
	mov ebp,eax
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [esp+0x34]
	add eax,0xFFFFFFC9
	mov dword ptr [esp+0x2C],edi
	cmp eax,0x6D
	ja Block12

 Block6:
	mov ecx,dword ptr [esp+0x38]
	add ecx,0xFFFFFF76
	cmp ecx,0xD
	ja Block12

 Block7:
	lea edx,[esp+0x18]
	push 0x1A37
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edi,eax
	mov eax,dword ptr [esi+0xA9]
	push eax
	lea ecx,[esi+0xA1]
	push ecx
	mov byte ptr [esp+0x34],1
	call _ZtlSecureFuseHelper<long>::call
	mov edi,dword ptr [edi]
	push ebp
	push eax
	lea edx,[esp+0x24]
	push edi
	push edx
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0x18
	mov byte ptr [esp+0x2C],0
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov edi,dword ptr [esp+0x14]
	test edi,edi
	je Block12

 Block10:
	cmp byte ptr [edi],0
	je Block12

 Block11:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x30]
	push edi
	mov ecx,ebx
	call edx
	mov ecx,dword ptr [esp+0x3C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [ebx]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,ebx
	call edx
	mov ecx,dword ptr [esp+0x3C]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[ebx+0x84]
	call CUIToolTip::SetToolTip_String
	jmp Block18

 Block12:
	mov eax,dword ptr [esi+0x35]
	push eax
	lea eax,[esi+0x33]
	push eax
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	cmp al,0xA
	ja Block16

 Block13:
	mov ecx,dword ptr [esi+0x3D]
	push ecx
	add esi,0x39
	push esi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x3E8
	mov edx,ecx
	add esp,8
	sub edx,eax
	je Block15

 Block14:
	cmp ecx,0x7D1
	jne Block16

 Block15:
	mov eax,8
	jmp Block17

 Block16:
	xor eax,eax

 Block17:
	mov ecx,dword ptr [esp+0x34]
	push eax
	mov eax,dword ptr [esp+0x3C]
	push 0
	push eax
	push ecx
	lea edx,[ebx+0x84]
	push edx
	lea ecx,[ebx+0xB5C]
	call CToolTipHelper::CheckAndShow

 Block18:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test edi,edi
	je Block20

 Block19:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block20:
	xor eax,eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 8
}
}
// CUIStatDetail::OnSetFocus
__SUB_CLASS_THIS(004614E0, __thiscall, 55347,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	je Block4

 Block1:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test ecx,ecx
	je Block4

 Block2:
	mov eax,dword ptr [TSingleton<CUIStat>::ms_pInstance]
	test eax,eax
	je Block4

 Block3:
	add eax,4
	push eax
	call CWndMan::SetFocus

 Block4:
	xor eax,eax
	ret 4
}
}
// CUIStat::OnMoveWnd
__SUB_CLASS_THIS(00461590, __thiscall, 55385,  CUIStat, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0xC]
	push eax
	push ecx
	mov ecx,esi
	call CWnd::OnMoveWnd
	mov edi,dword ptr [esi+0xB54]
	test edi,edi
	je Block2

 Block1:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	add esi,4
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	add eax,0x5A
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,0xAC
	push eax
	mov ecx,edi
	call CWnd::MoveWnd

 Block2:
	pop edi
	pop esi
	ret 8
}
}
// CUIStatDetail::OnButtonClicked
__SUB_CLASS_THIS(004685D0, __thiscall, 55351,  CUIStatDetail, void, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x3E8
	jne Block2

 Block1:
	mov ecx,dword ptr [TSingleton<CUIStat>::ms_pInstance]
	call CUIStat::ToggleDetail

 Block2:
	ret 4
}
}
// CUIStatDetail::CUIStatDetail
_SUB_EXCEPTION_HANDLER(467560)
__SUB_CLASS_THIS(00467560, __thiscall, 55343,  CUIStatDetail, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_467560
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
	call CWnd::_ctor_default
	xor edi,edi
	lea ecx,[esi+0x80]
	mov dword ptr [esp+0x18],edi
	cmp ecx,edi
	je Block2

 Block1:
	lea eax,[ecx-0x80]
	mov dword ptr [TSingleton<CUIStatDetail>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIStatDetail>::ms_pInstance],edi

 Block3:
	mov byte ptr [esp+0x18],1
	int 3// TODO: 	mov dword ptr [esi],offset CUIStatDetail::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIStatDetail::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIStatDetail::`vftable'{for `ZRefCounted'}
	call CUIToolTip::_ctor_default
	int 3// TODO: 	mov dword ptr [esi+0xAC8],offset CToolTipHelper::`vftable'
	lea ecx,[esi+0xAD0]
	mov dword ptr [esi+0xACC],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, CToolTipHelper::TTH_INFO, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, CToolTipHelper::TTH_INFO, long>::_CalcAutoGrow
	mov dword ptr [esi+0xAE8],edi
	mov dword ptr [esi+0xAEC],edi
	mov dword ptr [esi+0xAF0],edi
	mov dword ptr [esi+0xAF4],edi
	mov dword ptr [esi+0xAF8],edi
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x20]
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0xF7
	push 0xB2
	push ecx
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x3C],4
	call CWnd::CreateWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 8
}
}
// CUIStat::OnMouseButton
__SUB_CLASS_THIS(004614A0, __thiscall, 55382,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x201
	jne Block2

 Block1:
	add ecx,0x84
	call CUIToolTip::ClearToolTip

 Block2:
	ret 0x10
}
}
// CUIStat::OnDestroy
__SUB_CLASS_THIS0(00461810, __thiscall, 55380,  CUIStat, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	call CWvsContext::RemoveFromStackForTab
	mov ecx,dword ptr [esi+0xB54]
	test ecx,ecx
	je Block4

 Block1:
	push edi
	call CWnd::Destroy
	cmp dword ptr [esi+0xB54],0
	lea edi,[esi+0xB50]
	je Block3

 Block2:
	push 0
	mov ecx,edi
	call ZRef<CUIStatDetail>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block3:
	pop edi

 Block4:
	mov ecx,esi
	pop esi
	jmp  CUIWnd::OnDestroy
}
}
// CUIStatDetail::ClearToolTip
__SUB_CLASS_THIS0(00467670, __thiscall, 55353,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0x7C
	jmp  CUIToolTip::ClearToolTip
}
}
// CUIStatDetail::OnDestroy
__SUB_CLASS_THIS0(00467660, __thiscall, 55345,  CUIStatDetail, void) {
__asm {

 Block0:
	ret
}
}
// CUIStatDetail::OnMouseEnter
__SUB_CLASS_THIS(00461410, __thiscall, 55350,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0x7C]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CUIStat::Draw
_SUB_EXCEPTION_HANDLER(464BD0)
__SUB_CLASS_THIS(00464BD0, __thiscall, 55387,  CUIStat, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_464BD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x5C
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
	mov dword ptr [ebp-0x3C],esi
	mov eax,dword ptr [ebp+8]
	push eax
	call CWnd::Draw
	lea ecx,[ebp-0x40]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[ebp-0x68]
	push edx
	mov dword ptr [ebp-4],0
	mov dword ptr [ebp-0x4C],ecx
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [ebp-0x64]
	mov esi,dword ptr [eax+4]
	test edi,edi
	je Block5

 Block1:
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block4

 Block3:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block4:
	mov dword ptr [ebp-0x64],0

 Block5:
	mov eax,dword ptr [esi+0x3D]
	push eax
	lea ecx,[esi+0x39]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	mov ebx,dword ptr [ebp-0x40]
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x3E8
	mov edx,ecx
	add esp,8
	sub edx,eax
	je Block7

 Block6:
	cmp ecx,0x7D1
	jne Block15

 Block7:
	mov eax,dword ptr [esi+0x35]
	push eax
	lea ecx,[esi+0x33]
	push ecx
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	cmp al,0xA
	ja Block15

 Block8:
	push 0
	push 0
	push offset _S_UIUIWINDOW2IMGST__3
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x48],1
	mov dword ptr [ebp-0x14],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block10

 Block9:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax

 Block10:
	mov edi,dword ptr [ebp-0x3C]
	add edi,0xBAC
	mov ecx,edi
	call CLayoutMan::CopyToCanvas_1
	push 0
	push 0
	push offset _S_UIUIWINDOW2IMGST__2
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	push ebx
	call edx

 Block12:
	mov ecx,edi
	call CLayoutMan::CopyToCanvas_1

 Block13:
	mov dword ptr [ebp-0x28],0
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x38]
	push eax
	mov byte ptr [ebp-4],1
	call edi
	lea ecx,[ebp-0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block16

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov dword ptr [ebp-0x48],0
	jmp Block13

 Block16:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],2
	call edi
	lea eax,[ebp-0x24]
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
	mov eax,dword ptr [ebp-0x3C]
	mov eax,dword ptr [eax+0xB58]
	lea ecx,[ebp-0x38]
	push ecx
	lea edx,[ebp-0x24]
	push edx
	push eax
	push ecx
	lea edx,[esi+4]
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],3
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],4
	test ebx,ebx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	push 0x20
	push 0x36
	mov ecx,ebx
	mov byte ptr [ebp-4],3
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],2
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],1
	jne Block27

 Block25:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea eax,[ebp-0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov ecx,dword ptr [ebp-0x4C]
	lea eax,[ecx+0x20E8]
	mov ecx,dword ptr [ecx+0x20F0]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	push eax
	call get_job_name
	add esp,0xC
	push eax
	lea ecx,[ebp-0x28]
	call ZXString<char>::AssignCStr
	lea edx,[ebp-0x24]
	push edx
	call edi
	lea eax,[ebp-0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea ecx,[ebp-0x38]
	push ecx
	mov byte ptr [ebp-4],5
	call edi
	lea edx,[ebp-0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov edx,dword ptr [ebp-0x3C]
	lea eax,[ebp-0x24]
	push eax
	mov eax,dword ptr [edx+0xB58]
	lea ecx,[ebp-0x38]
	push ecx
	push eax
	mov eax,dword ptr [ebp-0x28]
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],6
	call _xbstr_t::_ctor_0
	push 0x32
	mov byte ptr [ebp-4],7
	push 0x36
	mov ecx,ebx
	mov byte ptr [ebp-4],6
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x38],di
	jne Block35

 Block33:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[ebp-0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],di
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	lea edx,[ebp-0x44]
	push 0x1A15
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edi,eax
	mov ecx,dword ptr [esi+0x35]
	lea eax,[esi+0x33]
	push ecx
	push eax
	mov byte ptr [ebp-4],8
	call _ZtlSecureFuseHelper<unsigned char>::call
	mov edi,dword ptr [edi]
	movzx edx,al
	push edx
	lea eax,[ebp-0x28]
	push edi
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x44]
	add esp,0x14
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x24]
	push ecx
	call edi
	lea edx,[ebp-0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	lea eax,[ebp-0x38]
	push eax
	mov byte ptr [ebp-4],9
	call edi
	lea ecx,[ebp-0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	mov ecx,dword ptr [ebp-0x3C]
	lea edx,[ebp-0x24]
	push edx
	mov edx,dword ptr [ebp-0x28]
	lea eax,[ebp-0x38]
	push eax
	mov eax,dword ptr [ecx+0xB58]
	push eax
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0xA
	call _xbstr_t::_ctor_0
	push 0x44
	mov byte ptr [ebp-4],0xB
	push 0x36
	mov ecx,ebx
	mov byte ptr [ebp-4],0xA
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x38],di
	jne Block49

 Block47:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],di
	jne Block53

 Block51:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	lea ecx,[ebp-0x50]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetGuildName
	mov edi,dword ptr [ebp-0x50]
	mov byte ptr [ebp-4],0xC
	test edi,edi
	je Block56

 Block55:
	cmp byte ptr [edi],0
	jne Block57

 Block56:
	push offset _S___28
	lea ecx,[ebp-0x50]
	call ZXString<char>::AssignCStr
	mov edi,dword ptr [ebp-0x50]

 Block57:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block59

 Block58:
	push eax
	call _com_issue_error

 Block59:
	lea ecx,[ebp-0x38]
	push ecx
	mov byte ptr [ebp-4],0xD
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	mov edx,dword ptr [ebp-0x3C]
	lea eax,[ebp-0x24]
	push eax
	mov eax,dword ptr [edx+0xB58]
	lea ecx,[ebp-0x38]
	push ecx
	push eax
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push edi
	mov byte ptr [ebp-4],0xE
	call _xbstr_t::_ctor_0
	push 0x56
	mov byte ptr [ebp-4],0xF
	push 0x36
	mov ecx,ebx
	mov byte ptr [ebp-4],0xE
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],0xD
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0xC
	jne Block68

 Block66:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov ecx,dword ptr [esi+0x35]
	push ecx
	lea eax,[esi+0x33]
	push eax
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx edx,al
	push edx
	call get_next_level_exp
	add esp,0xC
	mov dword ptr [ebp-0x44],eax
	lea eax,[ebp-0x18]
	push 0x1A16
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,eax
	mov eax,dword ptr [ebp-0x4C]
	mov ecx,dword ptr [eax+0x2138]
	push ecx
	add eax,0x2130
	push eax
	mov byte ptr [ebp-4],0x10
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x69]
	mov edi,eax
	push edx
	lea eax,[esi+0x61]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,dword ptr [ebx]
	push edi
	push eax
	lea ecx,[ebp-0x28]
	push ebx
	push ecx
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x18]
	add esp,0x20
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block71

 Block70:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block71:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x24]
	push edx
	call edi
	lea eax,[ebp-0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block73

 Block72:
	push eax
	call _com_issue_error

 Block73:
	lea ecx,[ebp-0x38]
	push ecx
	mov byte ptr [ebp-4],0x11
	call edi
	lea edx,[ebp-0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	mov edx,dword ptr [ebp-0x3C]
	lea eax,[ebp-0x24]
	push eax
	mov eax,dword ptr [edx+0xB5C]
	lea ecx,[ebp-0x38]
	push ecx
	push eax
	mov eax,dword ptr [ebp-0x28]
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	mov bl,0x12
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x40]
	push 0x68
	mov byte ptr [ebp-4],0x13
	push 0x36
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x38],di
	jne Block78

 Block76:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea edx,[ebp-0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x24],di
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	lea edx,[ebp-0x18]
	push 0x1A16
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,eax
	mov eax,dword ptr [ebp-0x4C]
	mov ecx,dword ptr [eax+0x2144]
	push ecx
	add eax,0x213C
	push eax
	mov byte ptr [ebp-4],0x14
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x81]
	mov edi,eax
	push edx
	lea eax,[esi+0x79]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,dword ptr [ebx]
	push edi
	push eax
	lea ecx,[ebp-0x28]
	push ebx
	push ecx
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x18]
	add esp,0x20
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block85

 Block84:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block85:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x24]
	push edx
	call edi
	lea eax,[ebp-0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block87

 Block86:
	push eax
	call _com_issue_error

 Block87:
	lea ecx,[ebp-0x38]
	push ecx
	mov byte ptr [ebp-4],0x15
	call edi
	lea edx,[ebp-0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block89

 Block88:
	push eax
	call _com_issue_error

 Block89:
	mov edx,dword ptr [ebp-0x3C]
	lea eax,[ebp-0x24]
	push eax
	mov eax,dword ptr [edx+0xB5C]
	lea ecx,[ebp-0x38]
	push ecx
	push eax
	mov eax,dword ptr [ebp-0x28]
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	mov bl,0x16
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x40]
	push 0x7A
	mov byte ptr [ebp-4],0x17
	push 0x36
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp-0x38],di
	jne Block92

 Block90:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea edx,[ebp-0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x24],di
	jne Block96

 Block94:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block97:
	cmp dword ptr [ebp-0x44],0
	jle Block99

 Block98:
	mov edx,dword ptr [esi+0xA9]
	push edx
	lea eax,[esi+0xA1]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebp-0x18],eax
	fild dword ptr [ebp-0x18]
	add esp,8
	fidiv dword ptr [ebp-0x44]
	fmul qword ptr [__real_4059000000000000]
	call __ftol2_sse
	mov edi,eax
	jmp Block100

 Block99:
	xor edi,edi

 Block100:
	lea ecx,[ebp-0x14]
	push 0x7CA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,eax
	mov edx,dword ptr [esi+0xA9]
	push edx
	lea eax,[esi+0xA1]
	push eax
	mov byte ptr [ebp-4],0x18
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,dword ptr [ebx]
	push edi
	push eax
	lea ecx,[ebp-0x28]
	push ebx
	push ecx
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x14]
	add esp,0x18
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block102

 Block101:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block102:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x24]
	push edx
	call edi
	lea eax,[ebp-0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block104

 Block103:
	push eax
	call _com_issue_error

 Block104:
	lea ecx,[ebp-0x38]
	push ecx
	mov byte ptr [ebp-4],0x19
	call edi
	lea edx,[ebp-0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block106

 Block105:
	push eax
	call _com_issue_error

 Block106:
	mov edx,dword ptr [ebp-0x3C]
	lea eax,[ebp-0x24]
	push eax
	mov eax,dword ptr [edx+0xB5C]
	lea ecx,[ebp-0x38]
	push ecx
	push eax
	mov eax,dword ptr [ebp-0x28]
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	mov bl,0x1A
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x40]
	push 0x8C
	mov byte ptr [ebp-4],0x1B
	push 0x36
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],0x19
	jne Block109

 Block107:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea edx,[ebp-0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block110:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0xC
	jne Block113

 Block111:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block114:
	lea edx,[ebp-0x14]
	push 0x1A15
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,eax
	mov eax,dword ptr [esi+0xB1]
	push eax
	lea ecx,[esi+0xAD]
	push ecx
	mov byte ptr [ebp-4],0x1C
	call _ZtlSecureFuseHelper<short>::call
	mov ebx,dword ptr [ebx]
	movzx eax,ax
	movsx edx,ax
	push edx
	lea eax,[ebp-0x28]
	push ebx
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x14]
	add esp,0x14
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block116

 Block115:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block116:
	lea ecx,[ebp-0x24]
	push ecx
	call edi
	lea edx,[ebp-0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block118

 Block117:
	push eax
	call _com_issue_error

 Block118:
	lea eax,[ebp-0x38]
	push eax
	mov byte ptr [ebp-4],0x1D
	call edi
	lea ecx,[ebp-0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block120

 Block119:
	push eax
	call _com_issue_error

 Block120:
	mov ecx,dword ptr [ebp-0x3C]
	mov edi,dword ptr [ebp-0x28]
	lea edx,[ebp-0x24]
	push edx
	lea eax,[ebp-0x38]
	push eax
	mov eax,dword ptr [ecx+0xB5C]
	push eax
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	mov bl,0x1E
	push edi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x40]
	push 0x9E
	mov byte ptr [ebp-4],0x1F
	push 0x36
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp-0x38],bx
	jne Block123

 Block121:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	test eax,eax
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea eax,[ebp-0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block124:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x24],bx
	jne Block127

 Block125:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block128:
	cmp dword ptr [ebp-0x48],0
	je Block134

 Block129:
	mov eax,dword ptr [ebp-0x50]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block131

 Block130:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block131:
	mov byte ptr [ebp-4],0
	test edi,edi
	je Block133

 Block132:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block133:
	mov eax,dword ptr [ebp-0x40]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	jmp Block236

 Block134:
	mov edi,dword ptr [ebp-0x4C]
	or eax,0xFFFFFFFF
	mov dword ptr [ebp-0x1C],eax
	mov dword ptr [ebp-0x18],eax
	mov eax,dword ptr [edi+0x20F0]
	push eax
	lea ebx,[edi+0x20E8]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x3E8
	sub ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	cmp eax,5
	ja Block141

 Block135:
	cmp EAX, 0
je Block136
cmp EAX, 1
je Block137
cmp EAX, 2
je Block138
cmp EAX, 3
je Block137
cmp EAX, 4
je Block139
cmp EAX, 5
je Block137


 Block136:
	mov ecx,dword ptr [edi+0x20F0]
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block141

 Block137:
	mov dword ptr [ebp-0x1C],2
	mov dword ptr [ebp-0x18],3
	jmp Block141

 Block138:
	mov dword ptr [ebp-0x18],1
	jmp Block140

 Block139:
	mov dword ptr [ebp-0x18],2

 Block140:
	mov dword ptr [ebp-0x1C],0

 Block141:
	xor ebx,ebx

 Block142:
	mov eax,dword ptr [ebp+ebx*4-0x1C]
	cmp eax,3
	ja Block146

 Block143:
	mov edx,dword ptr [ebp-0x3C]
	mov eax,dword ptr [edx+eax*4+0xB9C]
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block145

 Block144:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block145:
	push ecx
	mov ecx,dword ptr [ebp-0x40]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ecx]
	mov dword ptr [ebp-0x14],esp
	push ecx
	mov ecx,dword ptr [eax+4]
	call ecx
	mov ecx,dword ptr [ebp-0x3C]
	add ecx,0xBAC
	call CLayoutMan::CopyToCanvas_0

 Block146:
	inc ebx
	cmp ebx,2
	jl Block142

 Block147:
	mov edx,dword ptr [edi+0x20FC]
	push edx
	lea ebx,[edi+0x20F4]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x45]
	mov edi,eax
	lea eax,[esi+0x41]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx edx,ax
	add esp,0x10
	cmp edi,edx
	je Block150

 Block148:
	lea eax,[ebp-0x44]
	push 0x7BB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp-0x14],eax
	mov ecx,dword ptr [ebp-0x4C]
	mov edx,dword ptr [ecx+0x20FC]
	push edx
	push ebx
	mov byte ptr [ebp-4],0x20
	call _ZtlSecureFuseHelper<long>::call
	mov edi,eax
	mov eax,dword ptr [esi+0x45]
	push eax
	lea eax,[esi+0x41]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	mov edx,dword ptr [esi+0x45]
	movzx ecx,ax
	push edx
	lea eax,[esi+0x41]
	push eax
	mov dword ptr [ebp-0x18],ecx
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [ebp-0x4C]
	mov edx,dword ptr [ecx+0x20FC]
	movzx eax,ax
	push edx
	push ebx
	mov dword ptr [ebp-0x48],eax
	call _ZtlSecureFuseHelper<long>::call
	movsx edx,word ptr [ebp-0x18]
	mov ecx,dword ptr [ebp-0x14]
	mov ecx,dword ptr [ecx]
	sub edi,edx
	movsx edx,word ptr [ebp-0x48]
	push edi
	push edx
	push eax
	push ecx
	lea eax,[ebp-0x28]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x44]
	add esp,0x34
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block151

 Block149:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block151

 Block150:
	mov eax,0x20
	call __alloca_probe_8
	mov ecx,dword ptr [ebp-0x4C]
	mov edx,dword ptr [ecx+0x20FC]
	mov edi,esp
	push edx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	push 0xA
	push edi
	push eax
	call _itoa
	add esp,0x14
	push eax
	lea ecx,[ebp-0x28]
	call ZXString<char>::AssignCStr

 Block151:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x24]
	push eax
	call edi
	lea ecx,[ebp-0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block153

 Block152:
	push eax
	call _com_issue_error

 Block153:
	lea edx,[ebp-0x38]
	push edx
	mov byte ptr [ebp-4],0x21
	call edi
	lea eax,[ebp-0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block155

 Block154:
	push eax
	call _com_issue_error

 Block155:
	mov eax,dword ptr [ebp-0x3C]
	mov eax,dword ptr [eax+0xB5C]
	lea ecx,[ebp-0x24]
	push ecx
	lea edx,[ebp-0x38]
	push edx
	mov edx,dword ptr [ebp-0x28]
	push eax
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	mov bl,0x22
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x40]
	push 0xE3
	mov byte ptr [ebp-4],0x23
	push 0x36
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x21
	cmp word ptr [ebp-0x38],di
	jne Block158

 Block156:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block159:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x24],di
	jne Block162

 Block160:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block163:
	mov ebx,dword ptr [ebp-0x4C]
	mov ecx,dword ptr [ebx+0x2108]
	push ecx
	lea edi,[ebx+0x2100]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x4D]
	mov dword ptr [ebp-0x14],eax
	lea eax,[esi+0x49]
	push edx
	push eax
	call _ZtlSecureFuseHelper<short>::call
	cwde
	add esp,0x10
	cmp dword ptr [ebp-0x14],eax
	je Block166

 Block164:
	lea ecx,[ebp-0x44]
	push 0x7BB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp-0x14],eax
	mov edx,dword ptr [ebx+0x2108]
	push edx
	lea eax,[ebx+0x2100]
	push eax
	mov byte ptr [ebp-4],0x24
	call _ZtlSecureFuseHelper<long>::call
	mov edi,eax
	mov eax,dword ptr [esi+0x4D]
	push eax
	lea eax,[esi+0x49]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	mov edx,dword ptr [esi+0x4D]
	movzx ecx,ax
	push edx
	lea eax,[esi+0x49]
	push eax
	mov dword ptr [ebp-0x18],ecx
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [ebx+0x2108]
	movzx eax,ax
	mov dword ptr [ebp-0x48],eax
	push ecx
	lea eax,[ebx+0x2100]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [ebp-0x14]
	mov ecx,dword ptr [edx]
	movsx edx,word ptr [ebp-0x18]
	sub edi,edx
	movsx edx,word ptr [ebp-0x48]
	push edi
	push edx
	push eax
	push ecx
	lea eax,[ebp-0x28]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x44]
	add esp,0x34
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block167

 Block165:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block167

 Block166:
	mov eax,0x20
	call __alloca_probe_8
	mov ecx,dword ptr [ebx+0x2108]
	mov dword ptr [ebp-0x14],esp
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [ebp-0x14]
	push 0xA
	push edx
	push eax
	call _itoa
	add esp,0x14
	push eax
	lea ecx,[ebp-0x28]
	call ZXString<char>::AssignCStr

 Block167:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x24]
	push eax
	call edi
	lea ecx,[ebp-0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block169

 Block168:
	push eax
	call _com_issue_error

 Block169:
	lea edx,[ebp-0x38]
	push edx
	mov byte ptr [ebp-4],0x25
	call edi
	lea eax,[ebp-0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block171

 Block170:
	push eax
	call _com_issue_error

 Block171:
	mov eax,dword ptr [ebp-0x3C]
	mov eax,dword ptr [eax+0xB5C]
	lea ecx,[ebp-0x24]
	push ecx
	lea edx,[ebp-0x38]
	push edx
	mov edx,dword ptr [ebp-0x28]
	push eax
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x26
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x40]
	push 0xF5
	mov byte ptr [ebp-4],0x27
	push 0x36
	mov byte ptr [ebp-4],0x26
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x25
	cmp word ptr [ebp-0x38],di
	jne Block174

 Block172:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block175

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block174:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block175:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x24],di
	jne Block178

 Block176:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block179

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block179

 Block178:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block179:
	mov ecx,dword ptr [ebx+0x2114]
	push ecx
	lea edi,[ebx+0x210C]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x55]
	mov dword ptr [ebp-0x14],eax
	lea eax,[esi+0x51]
	push edx
	push eax
	call _ZtlSecureFuseHelper<short>::call
	cwde
	add esp,0x10
	cmp dword ptr [ebp-0x14],eax
	je Block182

 Block180:
	lea ecx,[ebp-0x44]
	push 0x7BB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp-0x14],eax
	mov edx,dword ptr [ebx+0x2114]
	push edx
	lea eax,[ebx+0x210C]
	push eax
	mov byte ptr [ebp-4],0x28
	call _ZtlSecureFuseHelper<long>::call
	mov edi,eax
	mov eax,dword ptr [esi+0x55]
	push eax
	lea eax,[esi+0x51]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	mov edx,dword ptr [esi+0x55]
	movzx ecx,ax
	push edx
	lea eax,[esi+0x51]
	push eax
	mov dword ptr [ebp-0x18],ecx
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [ebx+0x2114]
	movzx eax,ax
	mov dword ptr [ebp-0x48],eax
	push ecx
	lea eax,[ebx+0x210C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [ebp-0x14]
	mov ecx,dword ptr [edx]
	movsx edx,word ptr [ebp-0x18]
	sub edi,edx
	movsx edx,word ptr [ebp-0x48]
	push edi
	push edx
	push eax
	push ecx
	lea eax,[ebp-0x28]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x44]
	add esp,0x34
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block183

 Block181:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block183

 Block182:
	mov eax,0x20
	call __alloca_probe_8
	mov ecx,dword ptr [ebx+0x2114]
	mov dword ptr [ebp-0x14],esp
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [ebp-0x14]
	push 0xA
	push edx
	push eax
	call _itoa
	add esp,0x14
	push eax
	lea ecx,[ebp-0x28]
	call ZXString<char>::AssignCStr

 Block183:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x24]
	push eax
	call edi
	lea ecx,[ebp-0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block185

 Block184:
	push eax
	call _com_issue_error

 Block185:
	lea edx,[ebp-0x38]
	push edx
	mov byte ptr [ebp-4],0x29
	call edi
	lea eax,[ebp-0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block187

 Block186:
	push eax
	call _com_issue_error

 Block187:
	mov eax,dword ptr [ebp-0x3C]
	mov eax,dword ptr [eax+0xB5C]
	lea ecx,[ebp-0x24]
	push ecx
	lea edx,[ebp-0x38]
	push edx
	mov edx,dword ptr [ebp-0x28]
	push eax
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x2A
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x40]
	push 0x107
	mov byte ptr [ebp-4],0x2B
	push 0x36
	mov byte ptr [ebp-4],0x2A
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x29
	cmp word ptr [ebp-0x38],di
	jne Block190

 Block188:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block191

 Block189:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block191

 Block190:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block191:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x24],di
	jne Block194

 Block192:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block195

 Block193:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block195

 Block194:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block195:
	mov ecx,dword ptr [ebx+0x2120]
	lea edi,[ebx+0x2118]
	push ecx
	push edi
	mov dword ptr [ebp-0x48],edi
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x5D]
	mov dword ptr [ebp-0x14],eax
	lea eax,[esi+0x59]
	push edx
	push eax
	call _ZtlSecureFuseHelper<short>::call
	cwde
	add esp,0x10
	cmp dword ptr [ebp-0x14],eax
	je Block198

 Block196:
	lea ecx,[ebp-0x4C]
	push 0x7BB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp-0x14],eax
	mov edx,dword ptr [ebx+0x2120]
	push edx
	mov eax,edi
	push eax
	mov byte ptr [ebp-4],0x2C
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x5D]
	mov edi,eax
	push ecx
	lea eax,[esi+0x59]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx edx,ax
	mov eax,dword ptr [esi+0x5D]
	push eax
	lea eax,[esi+0x59]
	push eax
	mov dword ptr [ebp-0x18],edx
	call _ZtlSecureFuseHelper<short>::call
	mov edx,dword ptr [ebx+0x2120]
	movzx ecx,ax
	mov eax,dword ptr [ebp-0x48]
	push edx
	push eax
	mov dword ptr [ebp-0x44],ecx
	call _ZtlSecureFuseHelper<long>::call
	movsx edx,word ptr [ebp-0x18]
	mov ecx,dword ptr [ebp-0x14]
	mov ecx,dword ptr [ecx]
	sub edi,edx
	movsx edx,word ptr [ebp-0x44]
	push edi
	push edx
	push eax
	push ecx
	lea eax,[ebp-0x28]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x4C]
	add esp,0x34
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block199

 Block197:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block199

 Block198:
	mov eax,0x20
	call __alloca_probe_8
	mov ecx,dword ptr [ebx+0x2120]
	mov dword ptr [ebp-0x14],esp
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [ebp-0x14]
	push 0xA
	push edx
	push eax
	call _itoa
	add esp,0x14
	push eax
	lea ecx,[ebp-0x28]
	call ZXString<char>::AssignCStr

 Block199:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x24]
	push eax
	call edi
	lea ecx,[ebp-0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block201

 Block200:
	push eax
	call _com_issue_error

 Block201:
	lea edx,[ebp-0x38]
	push edx
	mov byte ptr [ebp-4],0x2D
	call edi
	lea eax,[ebp-0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block203

 Block202:
	push eax
	call _com_issue_error

 Block203:
	mov eax,dword ptr [ebp-0x3C]
	mov eax,dword ptr [eax+0xB5C]
	lea ecx,[ebp-0x24]
	push ecx
	lea edx,[ebp-0x38]
	push edx
	mov edx,dword ptr [ebp-0x28]
	push eax
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	mov bl,0x2E
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x40]
	push 0x119
	mov byte ptr [ebp-4],0x2F
	push 0x36
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [ebp-4],0x2D
	cmp word ptr [ebp-0x38],bx
	jne Block206

 Block204:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block207

 Block205:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block207

 Block206:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block207:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x24],bx
	jne Block210

 Block208:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block211

 Block209:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block211

 Block210:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block211:
	lea ecx,[ebp-0x38]
	push ecx
	call edi
	lea edx,[ebp-0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block213

 Block212:
	push eax
	call _com_issue_error

 Block213:
	mov eax,0x20
	mov byte ptr [ebp-4],0x30
	call __alloca_probe_8
	mov ecx,dword ptr [esi+0x95]
	mov edi,esp
	lea eax,[ebp-0x38]
	push eax
	push ecx
	lea ebx,[esi+0x91]
	push ebx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	push 0xA
	movsx edx,ax
	push edi
	push edx
	call _itoa
	add esp,0x10
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp-0x3C]
	mov ecx,dword ptr [eax+0xB5C]
	mov byte ptr [ebp-4],0x31
	test ecx,ecx
	jne Block215

 Block214:
	push 0x80004003
	call _com_issue_error

 Block215:
	mov byte ptr [ebp-4],0x30
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp-0x38],8
	mov dword ptr [ebp-0x14],eax
	mov byte ptr [ebp-4],0xC
	jne Block218

 Block216:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	test eax,eax
	je Block219

 Block217:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block219

 Block218:
	lea edx,[ebp-0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block219:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x60]
	push eax
	call edi
	lea ecx,[ebp-0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block221

 Block220:
	push eax
	call _com_issue_error

 Block221:
	lea edx,[ebp-0x38]
	push edx
	mov byte ptr [ebp-4],0x32
	call edi
	lea eax,[ebp-0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block223

 Block222:
	push eax
	call _com_issue_error

 Block223:
	mov eax,0x20
	mov byte ptr [ebp-4],0x33
	call __alloca_probe_8
	mov eax,dword ptr [ebp-0x3C]
	mov eax,dword ptr [eax+0xB5C]
	mov edi,esp
	lea ecx,[ebp-0x60]
	push ecx
	mov ecx,dword ptr [esi+0x95]
	lea edx,[ebp-0x38]
	push edx
	push eax
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	push 0xA
	movsx edx,ax
	push edi
	push edx
	call _itoa
	add esp,0x10
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp-0x40]
	mov eax,0x55
	sub eax,dword ptr [ebp-0x14]
	push 0xC8
	mov byte ptr [ebp-4],0x34
	push eax
	mov byte ptr [ebp-4],0x33
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],0x32
	jne Block226

 Block224:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	test eax,eax
	je Block227

 Block225:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block227

 Block226:
	lea edx,[ebp-0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block227:
	cmp word ptr [ebp-0x60],8
	mov byte ptr [ebp-4],0xC
	jne Block230

 Block228:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block231

 Block229:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block231

 Block230:
	lea ecx,[ebp-0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block231:
	mov eax,dword ptr [ebp-0x50]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block233

 Block232:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block233:
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block235

 Block234:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block235:
	mov eax,dword ptr [ebp-0x40]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call eax

 Block236:
	lea esp,[ebp-0x78]
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
// CUIStat::GetRTTI
__SUB_CLASS_THIS0(00467980, __thiscall, 55396,  CUIStat, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIStat::ms_RTTI_CUIStat
	ret
}
}
// CUIStatDetail::OnMouseButton
__SUB_CLASS_THIS(00461430, __thiscall, 55348,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x201
	jne Block2

 Block1:
	add ecx,0x7C
	call CUIToolTip::ClearToolTip

 Block2:
	ret 0x10
}
}
// CUIStat::ResetInfo
__SUB_CLASS_THIS0(00462380, __thiscall, 55380,  CUIStat, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CUIStat::RestoreButtons
	mov ecx,esi
	call CUIStat::EnableApUpButton
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esi+0xB54]
	pop esi
	test ecx,ecx
	je Block2

 Block1:
	push 0
	call CWnd::InvalidateRect

 Block2:
	ret
}
}
// CUIStat::IsKindOf
__SUB_CLASS_THIS(004679C0, __thiscall, 55397,  CUIStat, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIStat::ms_RTTI_CUIStat
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
// CUIStat::~CUIStat
_SUB_EXCEPTION_HANDLER(4679F0)
__SUB_CLASS_THIS0(004679F0, __thiscall, 55380,  CUIStat, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4679F0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIStat::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIStat::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIStat::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xB58]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],0xC
	cmp eax,ebx
	je Block2

 Block1:
	mov dword ptr [esi+0xB58],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xB5C]
	cmp eax,ebx
	je Block4

 Block3:
	mov dword ptr [esi+0xB5C],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea ecx,[esi+0xBAC]
	mov byte ptr [esp+0x1C],0xB
	call CLayoutMan::~CLayoutMan
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 4
	push 4
	lea eax,[esi+0xB9C]
	push eax
	mov byte ptr [esp+0x2C],0xA
	call __eh_vector_dtor_iterator
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push 4
	push 4
	lea ecx,[esi+0xB8C]
	push ecx
	mov byte ptr [esp+0x2C],9
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0xB84]
	mov byte ptr [esp+0x1C],8
	cmp eax,ebx
	je Block6

 Block5:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block6:
	mov eax,dword ptr [esi+0xB80]
	mov byte ptr [esp+0x1C],7
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	lea ecx,[esi+0xB60]
	mov byte ptr [esp+0x1C],6
	call CToolTipHelper::~CToolTipHelper
	mov eax,dword ptr [esi+0xB5C]
	mov byte ptr [esp+0x1C],5
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0xB58]
	mov byte ptr [esp+0x1C],4
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	lea edi,[esi+0xB50]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CUIStatDetail>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	push offset ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	push 3
	push 8
	lea eax,[esi+0xB38]
	push eax
	mov byte ptr [esp+0x2C],2
	call __eh_vector_dtor_iterator
	push offset ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	push 6
	push 8
	lea ecx,[esi+0xB08]
	push ecx
	mov byte ptr [esp+0x2C],1
	call __eh_vector_dtor_iterator
	mov ecx,esi
	mov dword ptr [TSingleton<CUIStat>::ms_pInstance],ebx
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CUIWnd::~CUIWnd
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
// CUIStatDetail::Draw
_SUB_EXCEPTION_HANDLER(4625F0)
// 864994
static uint8_t _SUB_4625F0_LOOKUP_TABLE_0[50] = {
0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
3, 3, 3, 3, 3, 1, 1, 0, 3, 3, 3, 3, 3, 2, 2, 2, 
3, 2, 
};
__SUB_CLASS_THIS(004625F0, __thiscall, 55352,  CUIStatDetail, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4625F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x70],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x24],ecx
	mov eax,dword ptr [ebp+0x7C]
	xor ebx,ebx
	push eax
	xor edi,edi
	mov dword ptr [ebp-0x48],ebx
	call CWnd::Draw
	mov esi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov dword ptr [ebp+0x60],edi
	mov dword ptr [ebp-0x30],edi
	mov dword ptr [ebp-0x38],edi
	mov dword ptr [ebp],edi
	mov dword ptr [ebp-0x2C],edi
	mov dword ptr [ebp+0x2C],edi
	mov dword ptr [ebp+4],edi
	mov dword ptr [ebp+8],edi
	mov dword ptr [ebp-0x34],edi
	mov dword ptr [ebp-0x3C],edi
	mov dword ptr [ebp+0x10],esi
	cmp esi,edi
	je Block2

 Block1:
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,esi
	call CUserLocal::GetPassiveSkillData
	mov ebx,1
	mov byte ptr [ebp+0x23],bl
	cmp dword ptr [eax+4],edi
	jne Block3

 Block2:
	mov byte ptr [ebp+0x23],0

 Block3:
	test bl,1
	je Block8

 Block4:
	mov ebx,dword ptr [ebp-0x10]
	cmp ebx,edi
	je Block8

 Block5:
	add ebx,0xFFFFFFF0
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp ebx,edi
	je Block8

 Block7:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block8:
	cmp byte ptr [ebp+0x23],0
	je Block50

 Block9:
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,esi
	call CUserLocal::GetPassiveSkillData
	mov eax,dword ptr [eax+4]
	mov ebx,dword ptr [ebp-0x10]
	mov edx,dword ptr [eax+0x3C]
	mov dword ptr [ebp+0x60],edx
	cmp ebx,edi
	je Block13

 Block10:
	add ebx,0xFFFFFFF0
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	lea eax,[ebx+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp ebx,edi
	je Block13

 Block12:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block13:
	lea eax,[ebp-0x14]
	push eax
	mov ecx,esi
	call CUserLocal::GetPassiveSkillData
	mov eax,dword ptr [eax+4]
	mov ebx,dword ptr [ebp-0x10]
	mov ecx,dword ptr [eax+0x40]
	mov dword ptr [ebp-0x30],ecx
	cmp ebx,edi
	je Block18

 Block14:
	add ebx,0xFFFFFFF0
	lea edi,[ebx+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block17

 Block15:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block17

 Block16:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block17:
	xor edi,edi

 Block18:
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,esi
	call CUserLocal::GetPassiveSkillData
	mov eax,dword ptr [eax+4]
	mov ebx,dword ptr [ebp-0x10]
	mov edx,dword ptr [eax+0x10]
	mov dword ptr [ebp-0x38],edx
	cmp ebx,edi
	je Block22

 Block19:
	add ebx,0xFFFFFFF0
	lea edi,[ebx+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block22

 Block20:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block22

 Block21:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block22:
	lea eax,[ebp-0x14]
	push eax
	mov ecx,esi
	call CUserLocal::GetPassiveSkillData
	mov eax,dword ptr [eax+4]
	mov ebx,dword ptr [ebp-0x10]
	mov ecx,dword ptr [eax+0x14]
	mov dword ptr [ebp],ecx
	test ebx,ebx
	je Block26

 Block23:
	add ebx,0xFFFFFFF0
	lea edi,[ebx+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block26

 Block24:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block26

 Block25:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block26:
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,esi
	call CUserLocal::GetPassiveSkillData
	mov eax,dword ptr [eax+4]
	mov ebx,dword ptr [ebp-0x10]
	mov edx,dword ptr [eax+0x20]
	mov dword ptr [ebp-0x2C],edx
	test ebx,ebx
	je Block30

 Block27:
	add ebx,0xFFFFFFF0
	lea edi,[ebx+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block30

 Block28:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block30

 Block29:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block30:
	lea eax,[ebp-0x14]
	push eax
	mov ecx,esi
	call CUserLocal::GetPassiveSkillData
	mov eax,dword ptr [eax+4]
	mov ebx,dword ptr [ebp-0x10]
	mov ecx,dword ptr [eax+0x24]
	mov dword ptr [ebp+0x2C],ecx
	test ebx,ebx
	je Block34

 Block31:
	add ebx,0xFFFFFFF0
	lea edi,[ebx+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block34

 Block32:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block34

 Block33:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block34:
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,esi
	call CUserLocal::GetPassiveSkillData
	mov eax,dword ptr [eax+4]
	mov ebx,dword ptr [ebp-0x10]
	mov edx,dword ptr [eax+0x58]
	mov dword ptr [ebp+4],edx
	test ebx,ebx
	je Block38

 Block35:
	add ebx,0xFFFFFFF0
	lea edi,[ebx+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block38

 Block36:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block38

 Block37:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block38:
	lea eax,[ebp-0x14]
	push eax
	mov ecx,esi
	call CUserLocal::GetPassiveSkillData
	mov eax,dword ptr [eax+4]
	mov ebx,dword ptr [ebp-0x10]
	mov ecx,dword ptr [eax+0x5C]
	mov dword ptr [ebp+8],ecx
	test ebx,ebx
	je Block42

 Block39:
	add ebx,0xFFFFFFF0
	lea edi,[ebx+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block42

 Block40:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block42

 Block41:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block42:
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,esi
	call CUserLocal::GetPassiveSkillData
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [eax+0x64]
	mov eax,dword ptr [ebp-0x10]
	mov dword ptr [ebp-0x34],edx
	test eax,eax
	je Block46

 Block43:
	lea ebx,[eax-0x10]
	lea edi,[ebx+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block46

 Block44:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block46

 Block45:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block46:
	lea eax,[ebp-0x14]
	push eax
	mov ecx,esi
	call CUserLocal::GetPassiveSkillData
	mov eax,dword ptr [eax+4]
	mov esi,dword ptr [ebp-0x10]
	mov ecx,dword ptr [eax+0x68]
	mov dword ptr [ebp-0x3C],ecx
	test esi,esi
	je Block50

 Block47:
	add esi,0xFFFFFFF0
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block50

 Block48:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block50

 Block49:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block50:
	lea ecx,[ebp+0x28]
	push ecx
	mov ecx,dword ptr [ebp-0x24]
	xor ebx,ebx
	mov dword ptr [ebp+0x38],ebx
	call CWnd::GetCanvas
	lea edx,[ebp+0x30]
	push 0x18
	push edx
	mov dword ptr [ebp-4],ebx
	call get_basic_font
	lea eax,[ebp-0x48]
	push 0x2C
	push eax
	mov byte ptr [ebp-4],1
	call get_basic_font
	lea ecx,[ebp+0x18]
	push 0x1C
	push ecx
	mov byte ptr [ebp-4],2
	call get_basic_font
	lea edx,[ebp+0x1C]
	push 0x22
	push edx
	mov byte ptr [ebp-4],3
	call get_basic_font
	add esp,0x20
	mov dword ptr [ebp+0x6C],ebx
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp-0x14]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],5
	mov dword ptr [ebp+0x24],edi
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [ebp-0x10]
	mov dword ptr [ebp+0x34],ecx
	cmp eax,ebx
	je Block55

 Block51:
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block54

 Block52:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block54

 Block53:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block54:
	mov dword ptr [ebp-0x10],0
	xor ebx,ebx

 Block55:
	lea esi,[edi+0x2148]
	push esi
	mov ecx,edi
	call CWvsContext::SetPasssiveSkillBuffing
	mov ecx,dword ptr [edi+0x20F0]
	push ecx
	lea edx,[edi+0x20E8]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x3E8
	sub ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	mov dword ptr [ebp+0x68],eax
	mov dword ptr [ebp+0x64],ebx
	mov edi,dword ptr [edi+0x38CC]
	mov dword ptr [ebp-0x28],ebx
	mov dword ptr [ebp-0x4C],ebx
	mov dword ptr [ebp-0x40],edi
	cmp edi,ebx
	je Block57

 Block56:
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block57:
	mov byte ptr [ebp-4],7
	cmp edi,ebx
	je Block82

 Block58:
	lea ecx,[edi+0xC]
	mov dword ptr [ebp-0x20],ecx
	call TSecType<long>::GetData
	push eax
	call get_weapon_type
	add esp,4
	cmp eax,0x2D
	je Block62

 Block59:
	cmp eax,0x2E
	je Block62

 Block60:
	cmp eax,0x2F
	je Block62

 Block61:
	cmp eax,0x31
	jne Block82

 Block62:
	mov edx,dword ptr [ebp+0x34]
	mov eax,dword ptr [edx+0x509]
	cmp eax,ebx
	jne Block64

 Block63:
	xor eax,eax
	jmp Block65

 Block64:
	mov eax,dword ptr [eax-4]

 Block65:
	dec eax
	cmp eax,1
	mov dword ptr [ebp+0x5C],eax
	mov dword ptr [ebp+0xC],1
	jl Block82

 Block66:
	mov eax,dword ptr [ebp+0xC]

 Block67:
	mov ecx,dword ptr [ebp+0x34]
	push eax
	push 2
	lea eax,[ebp+0x54]
	push eax
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [ebp+0x58]
	mov dword ptr [ebp+0x14],edi
	test eax,eax
	je Block72

 Block68:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block71

 Block69:
	mov ecx,dword ptr [ebp+0x58]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x58]
	test ecx,ecx
	je Block71

 Block70:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block71:
	mov dword ptr [ebp+0x58],0

 Block72:
	test edi,edi
	je Block78

 Block73:
	mov edi,dword ptr [ebp+0x14]
	add edi,0xC
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [ebp-0x20]
	mov ebx,eax
	call TSecType<long>::GetData
	push ebx
	push eax
	call is_correct_bullet_item
	add esp,8
	test eax,eax
	je Block78

 Block74:
	mov ecx,dword ptr [ebp+0x14]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	test eax,eax
	jle Block78

 Block75:
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0
	push eax
	call CWvsContext::IsAbleToConsume
	test eax,eax
	je Block78

 Block76:
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x91B
	je Block78

 Block77:
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	call is_pellet_ice_item
	add esp,4
	test eax,eax
	je Block80

 Block78:
	mov eax,dword ptr [ebp+0xC]
	inc eax
	cmp eax,dword ptr [ebp+0x5C]
	mov dword ptr [ebp+0xC],eax
	jle Block67

 Block79:
	jmp Block81

 Block80:
	mov ecx,dword ptr [ebp+0x14]
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	mov dword ptr [ebp-0x28],eax
	call CItemInfo::GetBulletPAD
	mov dword ptr [ebp-0x4C],eax

 Block81:
	mov edi,dword ptr [ebp-0x40]
	xor ebx,ebx

 Block82:
	mov edx,dword ptr [esi+0x12D0]
	push edx
	lea eax,[esi+0x12C8]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block84

 Block83:
	mov ecx,dword ptr [esi+0x12F4]
	push ecx
	lea edx,[esi+0x12EC]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	jmp Block85

 Block84:
	xor eax,eax

 Block85:
	mov edx,dword ptr [ebp+0x60]
	lea ecx,[ebp+0x38]
	push ecx
	mov ecx,dword ptr [ebp-0x28]
	push eax
	mov eax,dword ptr [ebp+4]
	push edx
	mov edx,dword ptr [ebp+0x34]
	push eax
	push ecx
	push edx
	mov ecx,esi
	call SecondaryStat::GetPAD
	mov edx,dword ptr [ebp-0x30]
	mov ebx,eax
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x3FD4]
	lea ecx,[ebp+0x38]
	push ecx
	push eax
	mov eax,dword ptr [ebp+8]
	push edx
	push eax
	mov ecx,esi
	call SecondaryStat::GetMAD
	mov dword ptr [ebp-0x28],eax
	test edi,edi
	je Block88

 Block86:
	mov ecx,dword ptr [ebp-0x40]
	add ecx,0xC
	call TSecType<long>::GetData
	push eax
	call get_weapon_type
	mov edi,eax
	add esp,4
	cmp edi,0x31
	ja Block92

 Block87:
	movzx ecx,byte ptr [edi+_SUB_4625F0_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block89
cmp ECX, 1
je Block91
cmp ECX, 2
je Block90
cmp ECX, 3
je Block92


 Block88:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx+0x88]
	mov eax,dword ptr [edx+4]
	add ecx,0x88
	call eax
	mov edi,eax
	neg edi
	sbb edi,edi
	and edi,0x27
	jmp Block87

 Block89:
	mov dword ptr [ebp+0xC],0
	jmp Block95

 Block90:
	mov ecx,dword ptr [ebp-0x40]
	add ecx,0xC
	call TSecType<long>::GetData
	mov edx,dword ptr [ebp+0x34]
	push 0
	push 0
	push 0
	push 1
	push eax
	push esi
	push edx
	jmp Block93

 Block91:
	mov ecx,dword ptr [ebp-0x40]
	add ecx,0xC
	call TSecType<long>::GetData
	push eax
	mov eax,dword ptr [ebp+0x34]
	push 0
	push eax
	call get_magic_mastery
	add esp,0xC
	jmp Block94

 Block92:
	mov ecx,dword ptr [ebp-0x40]
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,dword ptr [ebp+0x34]
	push 0
	push 0
	push 0
	push 0
	push eax
	push esi
	push ecx

 Block93:
	call get_weapon_mastery
	add esp,0x1C

 Block94:
	mov dword ptr [ebp+0xC],eax

 Block95:
	mov edx,dword ptr [ebp-0x28]
	mov eax,dword ptr [ebp+0x24]
	push edx
	add eax,0x20D0
	push ebx
	push eax
	push edi
	mov dword ptr [ebp+0x14],eax
	call CalcDamage::CalcDamageByWT
	add esp,0x10
	call __ftol2_sse
	fild dword ptr [ebp+0xC]
	mov dword ptr [ebp+0x60],eax
	fdiv qword ptr [__real_4059000000000000]
	fld qword ptr [__real_3fee666666666666]
	fcom
	fnstsw ax
	test ah,0x41
	jne Block97

 Block96:
	fstp st(0)
	jmp Block98

 Block97:
	fstp st(1)

 Block98:
	push edi
	fstp qword ptr [ebp+0x54]
	call CalcDamage::GetMsateryConstByWT
	fadd qword ptr [ebp+0x54]
	add esp,4
	fimul dword ptr [ebp+0x60]
	fadd qword ptr [__real_3fe0000000000000]
	call __ftol2_sse
	cmp eax,1
	mov ecx,0xF423F
	jg Block100

 Block99:
	mov eax,1
	mov dword ptr [ebp-0x30],eax
	jmp Block103

 Block100:
	cmp eax,ecx
	jge Block102

 Block101:
	mov dword ptr [ebp-0x30],eax
	jmp Block103

 Block102:
	mov dword ptr [ebp-0x30],ecx

 Block103:
	mov eax,dword ptr [ebp+0x60]
	cmp eax,1
	jg Block105

 Block104:
	mov eax,1
	mov dword ptr [ebp+0x60],eax
	jmp Block108

 Block105:
	cmp eax,ecx
	jge Block107

 Block106:
	mov dword ptr [ebp+0x60],eax
	jmp Block108

 Block107:
	mov dword ptr [ebp+0x60],ecx

 Block108:
	test edi,edi
	jne Block110

 Block109:
	push offset _S_0__1
	lea ecx,[ebp+0x64]
	call ZXString<char>::AssignCStr
	jmp Block112

 Block110:
	lea eax,[ebp+0x5C]
	push 0x7BC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x60]
	mov edx,dword ptr [ebp-0x30]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push eax
	lea eax,[ebp+0x64]
	push eax
	mov byte ptr [ebp-4],8
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x5C]
	add esp,0x10
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block112

 Block111:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block112:
	mov edi,dword ptr [ebp+0x24]
	push 0x10
	mov ecx,edi
	call CWvsContext::GetPasssiveSkillBuffing
	push 0xF
	mov ecx,edi
	mov dword ptr [ebp+0x5C],eax
	call CWvsContext::GetPasssiveSkillBuffing
	cmp dword ptr [ebp+0x68],2
	mov dword ptr [ebp-0x20],eax
	jne Block120

 Block113:
	mov ecx,dword ptr [esi+0x80]
	push ecx
	lea edi,[esi+0x78]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,dword ptr [ebp-0x28]
	mov edx,ebx
	sub edx,eax
	sub edx,dword ptr [ebp+0x38]
	add esp,8
	sub edx,dword ptr [ebp+8]
	test edx,edx
	jg Block118

 Block114:
	cmp dword ptr [ebp+0x5C],0
	jne Block118

 Block115:
	mov eax,dword ptr [esi+0x80]
	push eax
	push edi
	call _ZtlSecureFuseHelper<long>::call
	sub ebx,eax
	sub ebx,dword ptr [ebp+0x38]
	add esp,8
	sub ebx,dword ptr [ebp+8]
	jns Block117

 Block116:
	lea ecx,[ebp+0x18]
	push ecx
	lea ecx,[ebp+0x6C]
	call _x_com_ptr<IWzFont>::op_assign_copy
	jmp Block127

 Block117:
	lea edx,[ebp+0x30]
	push edx
	lea ecx,[ebp+0x6C]
	call _x_com_ptr<IWzFont>::op_assign_copy
	jmp Block127

 Block118:
	mov eax,dword ptr [ebp+0x1C]
	test eax,eax
	je Block127

 Block119:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	mov dword ptr [ebp+0x6C],eax
	call edx
	jmp Block127

 Block120:
	mov eax,dword ptr [esi+8]
	push eax
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov edi,dword ptr [ebp-0x4C]
	mov ecx,ebx
	sub ecx,eax
	sub ecx,edi
	sub ecx,dword ptr [ebp+0x38]
	add esp,8
	sub ecx,dword ptr [ebp+4]
	test ecx,ecx
	jg Block125

 Block121:
	cmp dword ptr [ebp-0x20],0
	jne Block125

 Block122:
	mov edx,dword ptr [esi+8]
	push edx
	push esi
	call _ZtlSecureFuseHelper<long>::call
	sub ebx,eax
	sub ebx,edi
	sub ebx,dword ptr [ebp+0x38]
	add esp,8
	sub ebx,dword ptr [ebp+4]
	jns Block124

 Block123:
	lea eax,[ebp+0x18]
	push eax
	lea ecx,[ebp+0x6C]
	call _x_com_ptr<IWzFont>::op_assign_copy
	jmp Block127

 Block124:
	lea ecx,[ebp+0x30]
	push ecx
	lea ecx,[ebp+0x6C]
	call _x_com_ptr<IWzFont>::op_assign_copy
	jmp Block127

 Block125:
	mov eax,dword ptr [ebp+0x1C]
	test eax,eax
	je Block127

 Block126:
	mov edx,dword ptr [eax]
	mov dword ptr [ebp+0x6C],eax
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block127:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x3C]
	push ecx
	call edi
	lea edx,[ebp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block129

 Block128:
	push eax
	call _com_issue_error

 Block129:
	lea eax,[ebp+0x4C]
	push eax
	mov byte ptr [ebp-4],9
	call edi
	lea ecx,[ebp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block131

 Block130:
	push eax
	call _com_issue_error

 Block131:
	mov ecx,dword ptr [ebp+0x6C]
	lea edx,[ebp+0x3C]
	push edx
	mov edx,dword ptr [ebp+0x64]
	lea eax,[ebp+0x4C]
	push eax
	push ecx
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0xA
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0xB
	test ecx,ecx
	jne Block133

 Block132:
	push 0x80004003
	call _com_issue_error

 Block133:
	push 0xF
	push 0x4A
	mov byte ptr [ebp-4],0xA
	call IWzCanvas::DrawTextA
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x4C],di
	jne Block136

 Block134:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block137

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block137

 Block136:
	lea ecx,[ebp+0x4C]
	push ecx
	call ebx

 Block137:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x3C],di
	jne Block140

 Block138:
	mov eax,dword ptr [ebp+0x44]
	xor edx,edx
	mov word ptr [ebp+0x3C],dx
	test eax,eax
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea eax,[ebp+0x3C]
	push eax
	call ebx

 Block141:
	mov ecx,dword ptr [ebp-0x24]
	call CUIStatDetail::GetCriticalProp
	mov ecx,dword ptr [ebp+0x24]
	push 2
	mov ebx,eax
	call CWvsContext::GetPasssiveSkillBuffing
	lea ecx,[ebp+0x68]
	push 0x7BD
	push ecx
	mov edi,eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push eax
	lea edx,[ebp+0x64]
	push edx
	mov byte ptr [ebp-4],0xC
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x68]
	add esp,0xC
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block143

 Block142:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block143:
	mov eax,dword ptr [esi+0x65C]
	push eax
	lea ecx,[esi+0x654]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block149

 Block144:
	mov edx,dword ptr [esi+0xF18]
	push edx
	lea eax,[esi+0xF10]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block149

 Block145:
	mov ecx,dword ptr [esi+0xC0C]
	push ecx
	lea edx,[esi+0xC04]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block149

 Block146:
	mov ecx,esi
	call SecondaryStat::IsWildhunterJaguarVehicle
	test eax,eax
	jne Block149

 Block147:
	test edi,edi
	jne Block149

 Block148:
	lea eax,[ebp+0x30]
	push eax
	lea ecx,[ebp+0x6C]
	call _x_com_ptr<IWzFont>::op_assign_copy
	jmp Block154

 Block149:
	mov eax,dword ptr [ebp+0x1C]
	mov edi,dword ptr [ebp+0x6C]
	cmp edi,eax
	je Block154

 Block150:
	mov dword ptr [ebp+0x6C],eax
	test eax,eax
	je Block152

 Block151:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block152:
	test edi,edi
	je Block154

 Block153:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block154:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x4C]
	push edx
	call edi
	lea eax,[ebp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block156

 Block155:
	push eax
	call _com_issue_error

 Block156:
	lea ecx,[ebp+0x3C]
	push ecx
	mov byte ptr [ebp-4],0xD
	call edi
	lea edx,[ebp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block158

 Block157:
	push eax
	call _com_issue_error

 Block158:
	mov edx,dword ptr [ebp+0x6C]
	lea eax,[ebp+0x4C]
	push eax
	mov eax,dword ptr [ebp+0x64]
	lea ecx,[ebp+0x3C]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	mov bl,0xE
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x28]
	push 0x21
	mov byte ptr [ebp-4],0xF
	push 0x4A
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp+0x3C],di
	jne Block161

 Block159:
	mov eax,dword ptr [ebp+0x44]
	xor ecx,ecx
	mov word ptr [ebp+0x3C],cx
	test eax,eax
	je Block162

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block162

 Block161:
	lea edx,[ebp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block162:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x4C],di
	jne Block165

 Block163:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block165:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block166:
	mov ecx,dword ptr [ebp+0x24]
	mov eax,dword ptr [ecx+0x3FD0]
	xor edx,edx
	cmp dword ptr [ecx+0x38C4],edx
	mov edi,dword ptr [ebp+0x14]
	sete dl
	push eax
	xor eax,eax
	mov ecx,edx
	mov edx,dword ptr [ebp-0x2C]
	test ecx,ecx
	sete al
	lea ecx,[ebp+0x38]
	push eax
	mov eax,dword ptr [ebp+0x34]
	push ecx
	push edx
	push eax
	mov ecx,edi
	call BasicStat::CalcBasePDD
	push eax
	mov ecx,esi
	call SecondaryStat::GetPDD
	mov ecx,dword ptr [esi+0x44]
	push ecx
	lea edx,[esi+0x3C]
	push edx
	mov ebx,eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov ecx,edi
	mov dword ptr [ebp+0x68],eax
	call BasicStat::CalcBasePDD
	mov ecx,dword ptr [ebp+0x24]
	mov edi,eax
	add edi,dword ptr [ebp+0x68]
	push 8
	add edi,dword ptr [ebp+0x38]
	sub ebx,edi
	call CWvsContext::GetPasssiveSkillBuffing
	mov dword ptr [ebp+0x5C],eax
	test ebx,ebx
	jne Block168

 Block167:
	lea eax,[ebx+0x20]
	call __alloca_probe_8
	mov eax,esp
	push 0xA
	push eax
	push edi
	call _itoa
	add esp,0xC
	push eax
	lea ecx,[ebp+0x64]
	call ZXString<char>::AssignCStr
	jmp Block171

 Block168:
	lea eax,[ebp+0x68]
	push 0x7BB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push edi
	lea ecx,[ebx+edi]
	push ecx
	push eax
	lea edx,[ebp+0x64]
	push edx
	mov byte ptr [ebp-4],0x10
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x68]
	add esp,0x14
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block170

 Block169:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block170:
	test ebx,ebx
	jg Block180

 Block171:
	cmp dword ptr [ebp+0x5C],0
	jne Block180

 Block172:
	test ebx,ebx
	jge Block175

 Block173:
	mov eax,dword ptr [ebp+0x18]
	cmp dword ptr [ebp+0x6C],eax
	je Block185

 Block174:
	mov edi,dword ptr [ebp+0x6C]
	jmp Block181

 Block175:
	mov eax,dword ptr [ebp+0x30]
	cmp dword ptr [ebp+0x6C],eax
	je Block185

 Block176:
	mov edi,dword ptr [ebp+0x6C]
	mov dword ptr [ebp+0x6C],eax
	test eax,eax
	je Block178

 Block177:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block178:
	test edi,edi
	je Block185

 Block179:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx
	jmp Block185

 Block180:
	mov eax,dword ptr [ebp+0x1C]
	mov edi,dword ptr [ebp+0x6C]
	cmp edi,eax
	je Block185

 Block181:
	mov dword ptr [ebp+0x6C],eax
	test eax,eax
	je Block183

 Block182:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block183:
	test edi,edi
	je Block185

 Block184:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block185:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x4C]
	push edx
	call edi
	lea eax,[ebp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block187

 Block186:
	push eax
	call _com_issue_error

 Block187:
	lea ecx,[ebp+0x3C]
	push ecx
	mov byte ptr [ebp-4],0x11
	call edi
	lea edx,[ebp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block189

 Block188:
	push eax
	call _com_issue_error

 Block189:
	mov edx,dword ptr [ebp+0x6C]
	lea eax,[ebp+0x4C]
	push eax
	mov eax,dword ptr [ebp+0x64]
	lea ecx,[ebp+0x3C]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	mov bl,0x12
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x28]
	push 0x33
	mov byte ptr [ebp-4],0x13
	push 0x4A
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp+0x3C],di
	jne Block192

 Block190:
	mov eax,dword ptr [ebp+0x44]
	xor ecx,ecx
	mov word ptr [ebp+0x3C],cx
	test eax,eax
	je Block193

 Block191:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block193

 Block192:
	lea edx,[ebp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block193:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x4C],di
	jne Block196

 Block194:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block197

 Block195:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block197

 Block196:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block197:
	mov edx,dword ptr [ebp+0x24]
	xor eax,eax
	cmp dword ptr [edx+0x38C4],eax
	mov edi,dword ptr [ebp+0x14]
	sete al
	xor ecx,ecx
	lea edx,[ebp+0x38]
	test eax,eax
	mov eax,dword ptr [ebp+0x2C]
	sete cl
	push ecx
	mov ecx,dword ptr [ebp+0x34]
	push edx
	push eax
	push ecx
	mov ecx,edi
	call BasicStat::CalcBaseMDD
	push eax
	mov ecx,esi
	call SecondaryStat::GetMDD
	mov edx,dword ptr [esi+0xBC]
	mov ebx,eax
	push edx
	lea eax,[esi+0xB4]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov ecx,edi
	mov dword ptr [ebp+0x68],eax
	call BasicStat::CalcBaseMDD
	mov ecx,dword ptr [ebp+0x24]
	mov edi,eax
	add edi,dword ptr [ebp+0x68]
	push 9
	add edi,dword ptr [ebp+0x38]
	sub ebx,edi
	call CWvsContext::GetPasssiveSkillBuffing
	mov dword ptr [ebp+0x5C],eax
	test ebx,ebx
	jne Block199

 Block198:
	lea eax,[ebx+0x20]
	call __alloca_probe_8
	mov eax,esp
	push 0xA
	push eax
	push edi
	call _itoa
	add esp,0xC
	push eax
	lea ecx,[ebp+0x64]
	call ZXString<char>::AssignCStr
	jmp Block202

 Block199:
	lea ecx,[ebp+0x68]
	push 0x7BB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push edi
	lea edx,[ebx+edi]
	push edx
	push eax
	lea eax,[ebp+0x64]
	push eax
	mov byte ptr [ebp-4],0x14
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x68]
	add esp,0x14
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block201

 Block200:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block201:
	test ebx,ebx
	jg Block211

 Block202:
	cmp dword ptr [ebp+0x5C],0
	jne Block211

 Block203:
	test ebx,ebx
	jge Block206

 Block204:
	mov eax,dword ptr [ebp+0x18]
	cmp dword ptr [ebp+0x6C],eax
	je Block216

 Block205:
	mov edi,dword ptr [ebp+0x6C]
	jmp Block212

 Block206:
	mov eax,dword ptr [ebp+0x30]
	cmp dword ptr [ebp+0x6C],eax
	je Block216

 Block207:
	mov edi,dword ptr [ebp+0x6C]
	mov dword ptr [ebp+0x6C],eax
	test eax,eax
	je Block209

 Block208:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block209:
	test edi,edi
	je Block216

 Block210:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx
	jmp Block216

 Block211:
	mov eax,dword ptr [ebp+0x1C]
	mov edi,dword ptr [ebp+0x6C]
	cmp edi,eax
	je Block216

 Block212:
	mov dword ptr [ebp+0x6C],eax
	test eax,eax
	je Block214

 Block213:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block214:
	test edi,edi
	je Block216

 Block215:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block216:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x4C]
	push edx
	call edi
	lea eax,[ebp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block218

 Block217:
	push eax
	call _com_issue_error

 Block218:
	lea ecx,[ebp+0x3C]
	push ecx
	mov byte ptr [ebp-4],0x15
	call edi
	lea edx,[ebp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block220

 Block219:
	push eax
	call _com_issue_error

 Block220:
	mov edx,dword ptr [ebp+0x6C]
	lea eax,[ebp+0x4C]
	push eax
	mov eax,dword ptr [ebp+0x64]
	lea ecx,[ebp+0x3C]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	mov bl,0x16
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x28]
	push 0x45
	mov byte ptr [ebp-4],0x17
	push 0x4A
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x3C],di
	jne Block223

 Block221:
	mov eax,dword ptr [ebp+0x44]
	xor ecx,ecx
	mov word ptr [ebp+0x3C],cx
	test eax,eax
	je Block224

 Block222:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block224

 Block223:
	lea edx,[ebp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block224:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x4C],di
	jne Block227

 Block225:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block228

 Block226:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block228

 Block227:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block228:
	mov ecx,dword ptr [ebp+0x24]
	push 4
	call CWvsContext::GetPasssiveSkillBuffing
	mov edi,dword ptr [ebp+0x14]
	mov edx,dword ptr [edi+0x38]
	mov dword ptr [ebp+0x2C],eax
	lea eax,[edi+0x30]
	push edx
	push eax
	mov dword ptr [ebp+4],eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi+0x50]
	mov dword ptr [ebp+0x5C],eax
	lea eax,[edi+0x48]
	push ecx
	push eax
	mov dword ptr [ebp+0x60],eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebp+0x68],eax
	fild dword ptr [ebp+0x68]
	fild dword ptr [ebp+0x5C]
	add esp,0x10
	fmul qword ptr [__real_3ff3333333333333]
	faddp st(1),st(0)
	call __ftol2_sse
	mov ecx,dword ptr [ebp+0x34]
	lea edx,[ebp+0x38]
	push edx
	push eax
	mov eax,dword ptr [ebp-0x38]
	push eax
	push ecx
	mov ecx,esi
	call SecondaryStat::GetACC
	mov edx,dword ptr [edi+0x38]
	mov ebx,eax
	mov eax,dword ptr [ebp+4]
	push edx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi+0x50]
	mov edx,dword ptr [ebp+0x60]
	push ecx
	push edx
	mov dword ptr [ebp+0x5C],eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebp+0x68],eax
	fild dword ptr [ebp+0x68]
	fild dword ptr [ebp+0x5C]
	fmul qword ptr [__real_3ff3333333333333]
	faddp st(1),st(0)
	call __ftol2_sse
	mov ecx,dword ptr [esi+0xF8]
	mov edi,eax
	lea eax,[esi+0xF0]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add edi,eax
	add edi,dword ptr [ebp+0x38]
	add esp,0x18
	sub ebx,edi
	jne Block230

 Block229:
	lea eax,[ebx+0x20]
	call __alloca_probe_8
	mov eax,esp
	push 0xA
	push eax
	push edi
	call _itoa
	add esp,0xC
	push eax
	lea ecx,[ebp+0x64]
	call ZXString<char>::AssignCStr
	jmp Block233

 Block230:
	lea edx,[ebp+0x68]
	push 0x7BB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push edi
	lea ecx,[ebx+edi]
	push ecx
	push eax
	lea edx,[ebp+0x64]
	push edx
	mov byte ptr [ebp-4],0x18
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x68]
	add esp,0x14
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block232

 Block231:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block232:
	test ebx,ebx
	jg Block242

 Block233:
	cmp dword ptr [ebp+0x2C],0
	jne Block242

 Block234:
	test ebx,ebx
	jge Block237

 Block235:
	mov eax,dword ptr [ebp+0x18]
	cmp dword ptr [ebp+0x6C],eax
	je Block247

 Block236:
	mov edi,dword ptr [ebp+0x6C]
	jmp Block243

 Block237:
	mov eax,dword ptr [ebp+0x30]
	cmp dword ptr [ebp+0x6C],eax
	je Block247

 Block238:
	mov edi,dword ptr [ebp+0x6C]
	mov dword ptr [ebp+0x6C],eax
	test eax,eax
	je Block240

 Block239:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block240:
	test edi,edi
	je Block247

 Block241:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx
	jmp Block247

 Block242:
	mov eax,dword ptr [ebp+0x1C]
	mov edi,dword ptr [ebp+0x6C]
	cmp edi,eax
	je Block247

 Block243:
	mov dword ptr [ebp+0x6C],eax
	test eax,eax
	je Block245

 Block244:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block245:
	test edi,edi
	je Block247

 Block246:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block247:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x4C]
	push edx
	call edi
	lea eax,[ebp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block249

 Block248:
	push eax
	call _com_issue_error

 Block249:
	lea ecx,[ebp+0x3C]
	push ecx
	mov byte ptr [ebp-4],0x19
	call edi
	lea edx,[ebp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block251

 Block250:
	push eax
	call _com_issue_error

 Block251:
	mov edx,dword ptr [ebp+0x6C]
	lea eax,[ebp+0x4C]
	push eax
	mov eax,dword ptr [ebp+0x64]
	lea ecx,[ebp+0x3C]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	mov bl,0x1A
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x28]
	push 0x57
	mov byte ptr [ebp-4],0x1B
	push 0x4A
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp+0x3C],di
	jne Block254

 Block252:
	mov eax,dword ptr [ebp+0x44]
	xor ecx,ecx
	mov word ptr [ebp+0x3C],cx
	test eax,eax
	je Block255

 Block253:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block255

 Block254:
	lea edx,[ebp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block255:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x4C],di
	jne Block258

 Block256:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block259

 Block257:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block259

 Block258:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block259:
	mov edi,dword ptr [ebp+0x14]
	mov edx,dword ptr [edi+0x44]
	lea eax,[edi+0x3C]
	push edx
	push eax
	mov dword ptr [ebp+8],eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [ebp+0x60]
	mov dword ptr [ebp+0x5C],eax
	mov eax,dword ptr [edi+0x50]
	push eax
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebp+0x68],eax
	fild dword ptr [ebp+0x68]
	fild dword ptr [ebp+0x5C]
	add esp,0x10
	fmul qword ptr [__real_3ff3333333333333]
	faddp st(1),st(0)
	call __ftol2_sse
	mov ecx,dword ptr [ebp+0x34]
	lea edx,[ebp+0x38]
	push edx
	push eax
	mov eax,dword ptr [ebp-0x38]
	push eax
	push ecx
	mov ecx,esi
	call SecondaryStat::GetACC
	mov edx,dword ptr [edi+0x44]
	mov ebx,eax
	mov eax,dword ptr [ebp+8]
	push edx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi+0x50]
	mov edx,dword ptr [ebp+0x60]
	push ecx
	push edx
	mov dword ptr [ebp+0x5C],eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebp+0x68],eax
	fild dword ptr [ebp+0x68]
	fild dword ptr [ebp+0x5C]
	fmul qword ptr [__real_3ff3333333333333]
	faddp st(1),st(0)
	call __ftol2_sse
	mov edi,eax
	mov eax,dword ptr [esi+0xF8]
	push eax
	lea eax,[esi+0xF0]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add edi,eax
	add edi,dword ptr [ebp+0x38]
	add esp,0x18
	sub ebx,edi
	jne Block261

 Block260:
	lea eax,[ebx+0x20]
	call __alloca_probe_8
	mov eax,esp
	push 0xA
	push eax
	push edi
	call _itoa
	add esp,0xC
	push eax
	lea ecx,[ebp+0x64]
	call ZXString<char>::AssignCStr
	jmp Block264

 Block261:
	lea ecx,[ebp+0x68]
	push 0x7BB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push edi
	lea edx,[ebx+edi]
	push edx
	push eax
	lea eax,[ebp+0x64]
	push eax
	mov byte ptr [ebp-4],0x1C
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x68]
	add esp,0x14
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block263

 Block262:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block263:
	test ebx,ebx
	jg Block273

 Block264:
	cmp dword ptr [ebp+0x2C],0
	jne Block273

 Block265:
	test ebx,ebx
	jge Block268

 Block266:
	mov eax,dword ptr [ebp+0x18]
	cmp dword ptr [ebp+0x6C],eax
	je Block278

 Block267:
	mov edi,dword ptr [ebp+0x6C]
	jmp Block274

 Block268:
	mov eax,dword ptr [ebp+0x30]
	cmp dword ptr [ebp+0x6C],eax
	je Block278

 Block269:
	mov edi,dword ptr [ebp+0x6C]
	mov dword ptr [ebp+0x6C],eax
	test eax,eax
	je Block271

 Block270:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block271:
	test edi,edi
	je Block278

 Block272:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx
	jmp Block278

 Block273:
	mov eax,dword ptr [ebp+0x1C]
	mov edi,dword ptr [ebp+0x6C]
	cmp edi,eax
	je Block278

 Block274:
	mov dword ptr [ebp+0x6C],eax
	test eax,eax
	je Block276

 Block275:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block276:
	test edi,edi
	je Block278

 Block277:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block278:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x4C]
	push edx
	call edi
	lea eax,[ebp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block280

 Block279:
	push eax
	call _com_issue_error

 Block280:
	lea ecx,[ebp+0x3C]
	push ecx
	mov byte ptr [ebp-4],0x1D
	call edi
	lea edx,[ebp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block282

 Block281:
	push eax
	call _com_issue_error

 Block282:
	mov edx,dword ptr [ebp+0x6C]
	lea eax,[ebp+0x4C]
	push eax
	mov eax,dword ptr [ebp+0x64]
	lea ecx,[ebp+0x3C]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	mov bl,0x1E
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x28]
	push 0x69
	mov byte ptr [ebp-4],0x1F
	push 0x4A
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp+0x3C],di
	jne Block285

 Block283:
	mov eax,dword ptr [ebp+0x44]
	xor ecx,ecx
	mov word ptr [ebp+0x3C],cx
	test eax,eax
	je Block286

 Block284:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block286

 Block285:
	lea edx,[ebp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block286:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x4C],di
	jne Block289

 Block287:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block290

 Block288:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block290

 Block289:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block290:
	mov edi,dword ptr [ebp+0x24]
	push 5
	mov ecx,edi
	call CWvsContext::GetPasssiveSkillBuffing
	mov edx,dword ptr [edi+0x2120]
	add edi,0x20D0
	mov dword ptr [ebp+0x2C],eax
	mov eax,dword ptr [ebp+0x60]
	push edx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi+0x38]
	mov edx,dword ptr [ebp+4]
	push ecx
	push edx
	mov ebx,eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [ebp]
	add esp,0x10
	lea ecx,[ebp+0x38]
	push ecx
	lea eax,[eax+ebx*2]
	push eax
	mov eax,dword ptr [ebp+0x34]
	push edx
	push eax
	mov ecx,esi
	call SecondaryStat::GetEVA
	mov ecx,dword ptr [edi+0x50]
	mov edx,dword ptr [ebp+0x60]
	push ecx
	push edx
	mov ebx,eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [ebp+4]
	mov dword ptr [ebp+0x68],eax
	mov eax,dword ptr [edi+0x38]
	push eax
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [ebp+0x68]
	mov ecx,dword ptr [esi+0x134]
	lea edi,[eax+edx*2]
	lea eax,[esi+0x12C]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add edi,eax
	add edi,dword ptr [ebp+0x38]
	add esp,0x18
	sub ebx,edi
	jne Block292

 Block291:
	lea eax,[ebx+0x20]
	call __alloca_probe_8
	mov eax,esp
	push 0xA
	push eax
	push edi
	call _itoa
	add esp,0xC
	push eax
	lea ecx,[ebp+0x64]
	call ZXString<char>::AssignCStr
	jmp Block295

 Block292:
	lea edx,[ebp+0x68]
	push 0x7BB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push edi
	lea ecx,[ebx+edi]
	push ecx
	push eax
	lea edx,[ebp+0x64]
	push edx
	mov byte ptr [ebp-4],0x20
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x68]
	add esp,0x14
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block294

 Block293:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block294:
	test ebx,ebx
	jg Block304

 Block295:
	cmp dword ptr [ebp+0x2C],0
	jne Block304

 Block296:
	test ebx,ebx
	jge Block299

 Block297:
	mov eax,dword ptr [ebp+0x18]
	cmp dword ptr [ebp+0x6C],eax
	je Block309

 Block298:
	mov edi,dword ptr [ebp+0x6C]
	jmp Block305

 Block299:
	mov eax,dword ptr [ebp+0x30]
	cmp dword ptr [ebp+0x6C],eax
	je Block309

 Block300:
	mov edi,dword ptr [ebp+0x6C]
	mov dword ptr [ebp+0x6C],eax
	test eax,eax
	je Block302

 Block301:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block302:
	test edi,edi
	je Block309

 Block303:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx
	jmp Block309

 Block304:
	mov eax,dword ptr [ebp+0x1C]
	mov edi,dword ptr [ebp+0x6C]
	cmp edi,eax
	je Block309

 Block305:
	mov dword ptr [ebp+0x6C],eax
	test eax,eax
	je Block307

 Block306:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block307:
	test edi,edi
	je Block309

 Block308:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block309:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x4C]
	push edx
	call edi
	lea eax,[ebp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block311

 Block310:
	push eax
	call _com_issue_error

 Block311:
	lea ecx,[ebp+0x3C]
	push ecx
	mov byte ptr [ebp-4],0x21
	call edi
	lea edx,[ebp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block313

 Block312:
	push eax
	call _com_issue_error

 Block313:
	mov edx,dword ptr [ebp+0x6C]
	lea eax,[ebp+0x4C]
	push eax
	mov eax,dword ptr [ebp+0x64]
	lea ecx,[ebp+0x3C]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x22
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x28]
	push 0x7B
	mov byte ptr [ebp-4],0x23
	push 0x4A
	mov byte ptr [ebp-4],0x22
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x21
	cmp word ptr [ebp+0x3C],di
	jne Block316

 Block314:
	mov eax,dword ptr [ebp+0x44]
	xor ecx,ecx
	mov word ptr [ebp+0x3C],cx
	test eax,eax
	je Block317

 Block315:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block317

 Block316:
	lea edx,[ebp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block317:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x4C],di
	jne Block320

 Block318:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block321

 Block319:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block321

 Block320:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block321:
	mov edi,dword ptr [ebp+0x24]
	mov edx,dword ptr [edi+0x2120]
	mov eax,dword ptr [ebp+0x60]
	add edi,0x20D0
	push edx
	push eax
	mov dword ptr [ebp+0x14],edi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi+0x44]
	mov edx,dword ptr [ebp+8]
	push ecx
	push edx
	mov ebx,eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [ebp]
	add esp,0x10
	lea ecx,[ebp+0x38]
	push ecx
	lea eax,[eax+ebx*2]
	push eax
	mov eax,dword ptr [ebp+0x34]
	push edx
	push eax
	mov ecx,esi
	call SecondaryStat::GetEVA
	mov ecx,dword ptr [edi+0x50]
	mov edx,dword ptr [ebp+0x60]
	push ecx
	push edx
	mov ebx,eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [ebp+8]
	mov edi,eax
	mov eax,dword ptr [ebp+0x14]
	mov ecx,dword ptr [eax+0x44]
	push ecx
	push edx
	call _ZtlSecureFuseHelper<long>::call
	lea edi,[eax+edi*2]
	mov eax,dword ptr [esi+0x134]
	push eax
	lea eax,[esi+0x12C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add edi,eax
	add edi,dword ptr [ebp+0x38]
	add esp,0x18
	sub ebx,edi
	jne Block323

 Block322:
	lea eax,[ebx+0x20]
	call __alloca_probe_8
	mov eax,esp
	push 0xA
	push eax
	push edi
	call _itoa
	add esp,0xC
	push eax
	lea ecx,[ebp+0x64]
	call ZXString<char>::AssignCStr
	jmp Block326

 Block323:
	lea ecx,[ebp+0x68]
	push 0x7BB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push edi
	lea edx,[ebx+edi]
	push edx
	push eax
	lea eax,[ebp+0x64]
	push eax
	mov byte ptr [ebp-4],0x24
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x68]
	add esp,0x14
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block325

 Block324:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block325:
	test ebx,ebx
	jg Block335

 Block326:
	cmp dword ptr [ebp+0x2C],0
	jne Block335

 Block327:
	test ebx,ebx
	jge Block330

 Block328:
	mov eax,dword ptr [ebp+0x18]
	cmp dword ptr [ebp+0x6C],eax
	je Block340

 Block329:
	mov edi,dword ptr [ebp+0x6C]
	jmp Block336

 Block330:
	mov eax,dword ptr [ebp+0x30]
	cmp dword ptr [ebp+0x6C],eax
	je Block340

 Block331:
	mov edi,dword ptr [ebp+0x6C]
	mov dword ptr [ebp+0x6C],eax
	test eax,eax
	je Block333

 Block332:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block333:
	test edi,edi
	je Block340

 Block334:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx
	jmp Block340

 Block335:
	mov eax,dword ptr [ebp+0x1C]
	mov edi,dword ptr [ebp+0x6C]
	cmp edi,eax
	je Block340

 Block336:
	mov dword ptr [ebp+0x6C],eax
	test eax,eax
	je Block338

 Block337:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block338:
	test edi,edi
	je Block340

 Block339:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block340:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x4C]
	push edx
	call edi
	lea eax,[ebp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block342

 Block341:
	push eax
	call _com_issue_error

 Block342:
	lea ecx,[ebp+0x3C]
	push ecx
	mov byte ptr [ebp-4],0x25
	call edi
	lea edx,[ebp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block344

 Block343:
	push eax
	call _com_issue_error

 Block344:
	mov edx,dword ptr [ebp+0x6C]
	lea eax,[ebp+0x4C]
	push eax
	mov eax,dword ptr [ebp+0x64]
	lea ecx,[ebp+0x3C]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	mov bl,0x26
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x28]
	push 0x8D
	mov byte ptr [ebp-4],0x27
	push 0x4A
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x25
	cmp word ptr [ebp+0x3C],di
	jne Block347

 Block345:
	mov eax,dword ptr [ebp+0x44]
	xor ecx,ecx
	mov word ptr [ebp+0x3C],cx
	test eax,eax
	je Block348

 Block346:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block348

 Block347:
	lea edx,[ebp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block348:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x4C],di
	jne Block351

 Block349:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block352

 Block350:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block352

 Block351:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block352:
	mov edx,dword ptr [esi+0x17C]
	push edx
	lea ebx,[esi+0x174]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block354

 Block353:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,dword ptr [esi+0x170]
	mov edi,esp
	push eax
	lea ecx,[esi+0x168]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	push 0xA
	push edi
	push eax
	call _itoa
	add esp,0x14
	push eax
	lea ecx,[ebp+0x64]
	call ZXString<char>::AssignCStr
	jmp Block356

 Block354:
	lea edx,[ebp+0x2C]
	push 0x7BB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp+0x68],eax
	mov eax,dword ptr [esi+0x17C]
	push eax
	push ebx
	mov byte ptr [ebp-4],0x28
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x170]
	push ecx
	lea edi,[esi+0x168]
	push edi
	mov dword ptr [ebp+0x5C],eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x170]
	push edx
	push edi
	mov dword ptr [ebp-0x20],eax
	call _ZtlSecureFuseHelper<long>::call
	mov edi,eax
	mov eax,dword ptr [esi+0x17C]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [ebp+0x68]
	mov ecx,dword ptr [ecx]
	push edx
	mov edx,dword ptr [ebp-0x20]
	push edx
	add eax,edi
	push eax
	push ecx
	lea eax,[ebp+0x64]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x2C]
	add esp,0x34
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block356

 Block355:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block356:
	mov ecx,dword ptr [esi+0x17C]
	mov edi,dword ptr [ebp+0x6C]
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jg Block360

 Block357:
	mov edx,dword ptr [esi+0x17C]
	push edx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jge Block359

 Block358:
	mov eax,dword ptr [ebp+0x18]
	jmp Block361

 Block359:
	lea edx,[ebp+0x30]
	push edx
	lea ecx,[ebp+0x6C]
	call _x_com_ptr<IWzFont>::op_assign_copy
	mov edi,dword ptr [ebp+0x6C]
	jmp Block366

 Block360:
	mov eax,dword ptr [ebp+0x1C]

 Block361:
	cmp edi,eax
	je Block366

 Block362:
	mov ebx,edi
	mov edi,eax
	mov dword ptr [ebp+0x6C],edi
	test eax,eax
	je Block364

 Block363:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block364:
	test ebx,ebx
	je Block366

 Block365:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block366:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x4C]
	push edx
	call ebx
	lea eax,[ebp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block368

 Block367:
	push eax
	call _com_issue_error

 Block368:
	lea ecx,[ebp+0x3C]
	push ecx
	mov byte ptr [ebp-4],0x29
	call ebx
	lea edx,[ebp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block370

 Block369:
	push eax
	call _com_issue_error

 Block370:
	mov edx,dword ptr [ebp+0x64]
	lea eax,[ebp+0x4C]
	push eax
	lea ecx,[ebp+0x3C]
	push ecx
	push edi
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	mov bl,0x2A
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x28]
	push 0x9F
	mov byte ptr [ebp-4],0x2B
	push 0x4A
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x29
	cmp word ptr [ebp+0x3C],di
	jne Block373

 Block371:
	xor eax,eax
	mov word ptr [ebp+0x3C],ax
	mov eax,dword ptr [ebp+0x44]
	test eax,eax
	je Block374

 Block372:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block374

 Block373:
	lea ecx,[ebp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block374:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x4C],di
	jne Block377

 Block375:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block378

 Block376:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block378

 Block377:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block378:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	xor edi,edi
	mov dword ptr [ebp],edi
	test ecx,ecx
	je Block381

 Block379:
	call CUserLocal::IsDashing2
	test eax,eax
	je Block381

 Block380:
	mov dword ptr [ebp+0x60],0xA0
	jmp Block384

 Block381:
	mov eax,dword ptr [ebp+0x24]
	mov ecx,dword ptr [eax+0x35D0]
	lea ebx,[eax+0x35C8]
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block383

 Block382:
	mov edx,dword ptr [ebp+0x24]
	mov eax,dword ptr [edx+0x35D0]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov dword ptr [ebp+0x60],eax
	jmp Block384

 Block383:
	mov dword ptr [ebp+0x60],0x8C

 Block384:
	mov ecx,dword ptr [esi+0x5A8]
	push ecx
	lea ebx,[esi+0x5A0]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block392

 Block385:
	mov edx,dword ptr [esi+0x5A8]
	push edx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	call CMorphTemplate::IsMonsterMorphed
	add esp,0xC
	test eax,eax
	jne Block387

 Block386:
	mov eax,dword ptr [esi+0x5A8]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	call CMorphTemplate::IsHideMorphed
	add esp,0xC
	test eax,eax
	je Block392

 Block387:
	mov ecx,dword ptr [esi+0x5A8]
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	call CMorphTemplate::GetMorphTemplate
	mov ecx,dword ptr [eax+0x14]
	add esp,0xC
	cmp ecx,0x46
	jg Block389

 Block388:
	mov ecx,0x46

 Block389:
	cmp ecx,dword ptr [ebp+0x60]
	mov edi,ecx
	jl Block437

 Block390:
	mov edi,dword ptr [ebp+0x60]
	jmp Block437

 Block391:
	mov esi,0x64
	jmp Block454

 Block392:
	mov ecx,esi
	call SecondaryStat::IsRidingVehicle
	test eax,eax
	je Block409

 Block393:
	mov ecx,esi
	call SecondaryStat::IsMechanicVehicle
	test eax,eax
	jne Block409

 Block394:
	mov ecx,esi
	call SecondaryStat::IsWildhunterJaguarVehicle
	test eax,eax
	jne Block409

 Block395:
	mov ecx,dword ptr [esi+0x13D4]
	mov edi,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call TemporaryStatBase<long>::GetValue
	mov edx,dword ptr [eax]
	push edx
	mov ecx,edi
	call CItemInfo::GetEquipItem
	mov ecx,dword ptr [eax+0x188]
	push ecx
	add eax,0x180
	push eax
	call _ZtlSecureFuseHelper<long>::call
	push eax
	call CTamingMobTemplate::GetTamingMobTemplate
	mov edx,dword ptr [ebp+0x34]
	mov dword ptr [ebp+0x5C],eax
	mov eax,dword ptr [edx+0x195]
	add esp,0xC
	xor edi,edi
	xor ebx,ebx
	test eax,eax
	je Block397

 Block396:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	mov ebx,eax
	mov ecx,ebx
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_niSpeed
	mov ecx,ebx
	movsx edi,ax
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_niJump
	movsx ebx,ax

 Block397:
	mov eax,dword ptr [ebp+0x34]
	cmp dword ptr [eax+0x19D],0
	je Block399

 Block398:
	mov ecx,eax
	mov eax,dword ptr [ecx+0x195]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	mov ecx,eax
	mov dword ptr [ebp+0x68],eax
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_niSpeed
	mov ecx,dword ptr [ebp+0x68]
	movsx edx,ax
	add edi,edx
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_niJump
	cwde
	add ebx,eax

 Block399:
	mov ecx,esi
	call SecondaryStat::IsEventVehicle
	test eax,eax
	je Block401

 Block400:
	mov ecx,dword ptr [esi+0x13C4]
	call TemporaryStatBase<long>::GetValue
	mov ecx,dword ptr [esi+0x13CC]
	add edi,dword ptr [eax]
	call TemporaryStatBase<long>::GetValue
	add ebx,dword ptr [eax]

 Block401:
	mov ecx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [ecx+0x14]
	cmp eax,0x46
	jg Block403

 Block402:
	mov eax,0x46

 Block403:
	add edi,eax
	cmp edi,0xBE
	jl Block405

 Block404:
	mov edi,0xBE

 Block405:
	mov eax,dword ptr [ecx+0x18]
	cmp eax,0x50
	jg Block407

 Block406:
	mov eax,0x50

 Block407:
	add eax,ebx
	cmp eax,0x7B
	jl Block453

 Block408:
	mov esi,0x7B
	jmp Block454

 Block409:
	mov ecx,esi
	call SecondaryStat::IsWildhunterJaguarVehicle
	test eax,eax
	je Block431

 Block410:
	mov ebx,dword ptr [esi+0x13D4]
	lea edi,[ebx+0x18]
	mov ecx,edi
	call ZFatalSection::Lock
	test edi,edi
	je Block413

 Block411:
	add dword ptr [edi+4],0xFFFFFFFF
	jne Block413

 Block412:
	mov dword ptr [edi],0

 Block413:
	mov ecx,dword ptr [ebx+0xC]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetEquipItem
	mov edx,dword ptr [eax+0x188]
	push edx
	add eax,0x180
	push eax
	call _ZtlSecureFuseHelper<long>::call
	push eax
	call CTamingMobTemplate::GetTamingMobTemplate
	mov dword ptr [ebp-0x24],eax
	mov eax,dword ptr [ebp-0x3C]
	add esp,0xC
	push eax
	mov ecx,esi
	call SecondaryStat::GetSpeed
	mov ebx,dword ptr [ebp+0x34]
	lea ecx,[ebp+0x2C]
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x1F78E29
	mov edi,eax
	push ebx
	sub edi,0x64
	mov dword ptr [ebp+0x2C],0
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block415

 Block414:
	mov ecx,dword ptr [ebp+0x2C]
	push eax
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0x168]
	push edx
	add eax,0x160
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	add edi,eax

 Block415:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	lea eax,[ebp-0x2C]
	push eax
	push 0x1F937F0
	push ebx
	mov dword ptr [ebp-0x2C],0
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block417

 Block416:
	mov ecx,dword ptr [ebp-0x2C]
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x168]
	push ecx
	add eax,0x160
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	add edi,eax

 Block417:
	mov edx,dword ptr [ebp-0x24]
	mov eax,dword ptr [edx+0x14]
	cmp eax,0x46
	jg Block419

 Block418:
	mov eax,0x46

 Block419:
	add edi,eax
	cmp edi,0xBE
	jl Block421

 Block420:
	mov edi,0xBE

 Block421:
	mov eax,dword ptr [esi+0x584]
	push eax
	lea ebx,[esi+0x57C]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block423

 Block422:
	mov ecx,dword ptr [esi+0x584]
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov edi,eax

 Block423:
	mov edx,dword ptr [esi+0xE34]
	push edx
	lea ebx,[esi+0xE2C]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block425

 Block424:
	mov eax,dword ptr [esi+0xE34]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	imul eax,edi
	mov dword ptr [ebp+0x68],eax
	add esp,8
	fild dword ptr [ebp+0x68]
	fdiv qword ptr [__real_c059000000000000]
	call __ftol2_sse
	add edi,eax
	jmp Block427

 Block425:
	cmp edi,0x46
	jge Block427

 Block426:
	mov edi,0x46

 Block427:
	mov ecx,dword ptr [ebp-0x34]
	push ecx
	mov ecx,esi
	call SecondaryStat::GetJump
	mov edx,dword ptr [ebp-0x24]
	mov ecx,dword ptr [edx+0x18]
	sub eax,0x64
	cmp ecx,0x50
	jg Block429

 Block428:
	mov ecx,0x50

 Block429:
	add eax,ecx
	cmp eax,0x7B
	jl Block453

 Block430:
	mov esi,0x7B
	jmp Block454

 Block431:
	mov ecx,esi
	call SecondaryStat::IsMechanicVehicle
	test eax,eax
	je Block440

 Block432:
	mov eax,dword ptr [ebp+0x10]
	cmp dword ptr [eax+0x5E8],0x217E76D
	jne Block440

 Block433:
	mov esi,dword ptr [esi+0x13D4]
	mov edi,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov ecx,esi
	call TemporaryStatBase<long>::GetValue
	mov ecx,dword ptr [eax]
	push ecx
	mov ecx,edi
	call CItemInfo::GetEquipItem
	mov edx,dword ptr [eax+0x188]
	push edx
	add eax,0x180
	push eax
	call _ZtlSecureFuseHelper<long>::call
	push eax
	call CTamingMobTemplate::GetTamingMobTemplate
	mov ecx,dword ptr [eax+0x14]
	add esp,0xC
	cmp ecx,0x46
	jg Block435

 Block434:
	mov ecx,0x46

 Block435:
	mov edi,dword ptr [ebp+0x60]
	cmp ecx,edi
	jge Block437

 Block436:
	mov edi,ecx

 Block437:
	mov eax,dword ptr [eax+0x18]
	cmp eax,0x64
	jle Block391

 Block438:
	cmp eax,0x7B
	mov esi,eax
	jl Block454

 Block439:
	mov esi,0x7B
	jmp Block454

 Block440:
	mov eax,dword ptr [esi+0x584]
	push eax
	lea ebx,[esi+0x57C]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block444

 Block441:
	mov ecx,dword ptr [esi+0x584]
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,dword ptr [ebp+0x60]
	add esp,8
	cmp ebx,eax
	jge Block443

 Block442:
	mov edi,ebx
	mov dword ptr [ebp],edi
	jmp Block445

 Block443:
	mov edi,eax
	mov dword ptr [ebp],edi
	jmp Block445

 Block444:
	mov ebx,dword ptr [ebp+0x60]

 Block445:
	mov edx,dword ptr [esi+0xE34]
	lea eax,[esi+0xE2C]
	push edx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block448

 Block446:
	mov eax,dword ptr [esi+0xE34]
	push eax
	lea eax,[esi+0xE2C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	fild dword ptr [ebp]
	imul edi,eax
	mov dword ptr [ebp+0x10],edi
	add esp,8
	fild dword ptr [ebp+0x10]
	fdiv qword ptr [__real_4059000000000000]
	fsubp st(1),st(0)
	call __ftol2_sse
	cmp ebx,eax
	mov edi,ebx
	jl Block448

 Block447:
	mov edi,eax

 Block448:
	mov ecx,dword ptr [esi+0x584]
	push ecx
	lea eax,[esi+0x57C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block452

 Block449:
	mov edx,dword ptr [esi+0xE34]
	push edx
	lea eax,[esi+0xE2C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block452

 Block450:
	mov eax,dword ptr [ebp-0x3C]
	push eax
	mov ecx,esi
	call SecondaryStat::GetSpeed
	cmp ebx,eax
	mov edi,ebx
	jl Block452

 Block451:
	mov edi,eax

 Block452:
	mov ecx,dword ptr [ebp-0x34]
	push ecx
	mov ecx,esi
	call SecondaryStat::GetJump
	cmp eax,0x7B
	mov esi,0x7B
	jg Block454

 Block453:
	mov esi,eax

 Block454:
	lea edx,[ebp+0x10]
	push 0x7BD
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea eax,[ebp+0x64]
	push eax
	mov byte ptr [ebp-4],0x2C
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x10]
	add esp,0xC
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block456

 Block455:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block456:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x1C]
	push ecx
	call ebx
	lea edx,[ebp-0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block458

 Block457:
	push eax
	call _com_issue_error

 Block458:
	lea eax,[ebp+0x3C]
	push eax
	mov byte ptr [ebp-4],0x2D
	call ebx
	lea ecx,[ebp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block460

 Block459:
	push eax
	call _com_issue_error

 Block460:
	mov ecx,dword ptr [ebp+0x30]
	lea edx,[ebp-0x1C]
	push edx
	mov edx,dword ptr [ebp+0x64]
	lea eax,[ebp+0x3C]
	push eax
	push ecx
	push ecx
	mov dword ptr [ebp+0x10],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x2E
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x28]
	push 0xB1
	mov byte ptr [ebp-4],0x2F
	push 0x4A
	mov byte ptr [ebp-4],0x2E
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x2D
	cmp word ptr [ebp+0x3C],di
	jne Block463

 Block461:
	xor eax,eax
	mov word ptr [ebp+0x3C],ax
	mov eax,dword ptr [ebp+0x44]
	test eax,eax
	je Block464

 Block462:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block464

 Block463:
	lea ecx,[ebp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block464:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x1C],di
	jne Block467

 Block465:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block468

 Block466:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block468

 Block467:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block468:
	lea ecx,[ebp+0x10]
	push 0x7BD
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[ebp+0x64]
	push edx
	mov byte ptr [ebp-4],0x30
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x10]
	add esp,0xC
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block470

 Block469:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block470:
	lea eax,[ebp+0x4C]
	push eax
	call ebx
	lea ecx,[ebp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block472

 Block471:
	push eax
	call _com_issue_error

 Block472:
	lea edx,[ebp+0x3C]
	push edx
	mov byte ptr [ebp-4],0x31
	call ebx
	lea eax,[ebp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block474

 Block473:
	push eax
	call _com_issue_error

 Block474:
	mov eax,dword ptr [ebp+0x30]
	mov esi,dword ptr [ebp+0x64]
	lea ecx,[ebp+0x4C]
	push ecx
	lea edx,[ebp+0x3C]
	push edx
	push eax
	push ecx
	mov dword ptr [ebp+0x10],esp
	mov ecx,esp
	mov bl,0x32
	push esi
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x28]
	push 0xC3
	mov byte ptr [ebp-4],0x33
	push 0x4A
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov byte ptr [ebp-4],0x31
	cmp word ptr [ebp+0x3C],di
	jne Block477

 Block475:
	mov eax,dword ptr [ebp+0x44]
	xor ecx,ecx
	mov word ptr [ebp+0x3C],cx
	test eax,eax
	je Block478

 Block476:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block478

 Block477:
	lea edx,[ebp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block478:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x4C],di
	jne Block481

 Block479:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block482

 Block480:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block482

 Block481:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block482:
	lea ecx,[ebp-0x44]
	mov byte ptr [ebp-4],6
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	mov byte ptr [ebp-4],5
	test esi,esi
	je Block484

 Block483:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block484:
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block486

 Block485:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block486:
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block488

 Block487:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block488:
	mov eax,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block490

 Block489:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block490:
	mov eax,dword ptr [ebp-0x48]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block492

 Block491:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block492:
	mov eax,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block494

 Block493:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block494:
	mov eax,dword ptr [ebp+0x28]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0x5C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x70]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x74
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CUIStat::CUIStat
_SUB_EXCEPTION_HANDLER(467750)
__SUB_CLASS_THIS(00467750, __thiscall, 55378,  CUIStat, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_467750
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
	xor edi,edi
	push edi
	push edi
	push 1
	push 6
	push 0x96
	push 5
	push 2
	call CUIWnd::_ctor_0
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x1C],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUIStat>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIStat>::ms_pInstance],edi

 Block3:
	push offset ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	push offset ZRef<CCtrlOriginButton>::_ctor_default
	push 6
	push 8
	push eax
	mov byte ptr [esp+0x30],1
	int 3// TODO: 	mov dword ptr [esi],offset CUIStat::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIStat::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIStat::`vftable'{for `ZRefCounted'}
	call __eh_vector_ctor_iterator
	push offset ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	push offset ZRef<CCtrlOriginButton>::_ctor_default
	push 3
	push 8
	lea edx,[esi+0xB38]
	push edx
	mov byte ptr [esp+0x30],2
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xB54],edi
	mov dword ptr [esi+0xB58],edi
	mov dword ptr [esi+0xB5C],edi
	int 3// TODO: 	mov dword ptr [esi+0xB60],offset CToolTipHelper::`vftable'
	lea ecx,[esi+0xB68]
	mov dword ptr [esi+0xB64],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, CToolTipHelper::TTH_INFO, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, CToolTipHelper::TTH_INFO, long>::_CalcAutoGrow
	mov dword ptr [esi+0xB80],edi
	mov dword ptr [esi+0xB84],edi
	mov eax,dword ptr [esp+0x24]
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push offset _x_com_ptr<IWzGr2DLayer>::_ctor_default
	push 4
	push 4
	lea ecx,[esi+0xB8C]
	push ecx
	mov byte ptr [esp+0x30],9
	mov dword ptr [esi+0xB88],eax
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 4
	push 4
	lea edx,[esi+0xB9C]
	push edx
	mov byte ptr [esp+0x30],0xA
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xBAC],edi
	mov dword ptr [esi+0xBB0],edi
	mov dword ptr [esi+0xBB4],edi
	mov dword ptr [esi+0xBB8],edi
	mov dword ptr [esi+0xBBC],edi
	lea eax,[esp+0x24]
	push 0x18
	push eax
	mov byte ptr [esp+0x24],0xC
	call get_basic_font
	mov eax,dword ptr [eax]
	mov ebx,dword ptr [esi+0xB58]
	add esp,8
	cmp ebx,eax
	je Block8

 Block4:
	mov dword ptr [esi+0xB58],eax
	cmp eax,edi
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	cmp ebx,edi
	je Block8

 Block7:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block8:
	mov eax,dword ptr [esp+0x24]
	cmp eax,edi
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block10:
	lea ecx,[esp+0x24]
	push 0x18
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov ebx,dword ptr [esi+0xB5C]
	add esp,8
	cmp ebx,eax
	je Block15

 Block11:
	mov dword ptr [esi+0xB5C],eax
	cmp eax,edi
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block13:
	cmp ebx,edi
	je Block15

 Block14:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block15:
	mov eax,dword ptr [esp+0x24]
	cmp eax,edi
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	push 0xA
	push 0x151
	push 0xAC
	mov ecx,esi
	call CUIWnd::CreateUIWndPosSaved
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 4
}
}
// CUIStatDetail::OnCreate
_SUB_EXCEPTION_HANDLER(4623B0)
__SUB_CLASS_THIS(004623B0, __thiscall, 55346,  CUIStatDetail, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4623B0
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
	mov esi,ecx
	push 0
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGST__1
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	push 0
	push 0
	lea edi,[esi+0xAE8]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	lea eax,[esp+0xC]
	push 0x7BA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esi+0xAC8]
	mov dword ptr [esp+0x38],0
	call CToolTipHelper::LoadToolTip_0
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	push 0
	push 0
	push 0
	push 0x3E8
	push offset _S_UIUIWINDOW2IMGST
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x14],0
	je Block4

 Block3:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block4:
	mov ecx,dword ptr [TSingleton<CUIStat>::ms_pInstance]
	lea edx,[esp+0x10]
	push edx
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x34],1
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block6

 Block5:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block6:
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x38],2
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x34],3
	test edi,edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0xFC]
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
	test eax,eax
	jge Block10

 Block9:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block10:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x34],2
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],1
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block18

 Block17:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block18:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x34],4
	test esi,esi
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xB4]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block22

 Block21:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block22:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret 4
}
}
// CUIStatDetail::GetCriticalProp
_SUB_EXCEPTION_HANDLER(461BF0)
__SUB_CLASS_THIS0(00461BF0, __thiscall, 55354,  CUIStatDetail, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_461BF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x5C]
	mov dword ptr fs:[0],eax
	xor ebp,ebp
	mov dword ptr [esp+0x30],ebp
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	jne Block2

 Block1:
	xor eax,eax
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret

 Block2:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x54]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x38],esi
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [esp+0x2C],ecx
	cmp eax,ebp
	je Block7

 Block3:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebp
	je Block6

 Block5:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block6:
	mov dword ptr [esp+0x58],ebp

 Block7:
	lea ecx,[esi+0x2148]
	push 0xB
	lea edx,[esp+0x50]
	mov dword ptr [esp+0x48],ecx
	push edx
	mov ecx,esi
	xor ebx,ebx
	mov dword ptr [esp+0x30],ebp
	mov dword ptr [esp+0x2C],ebp
	mov dword ptr [esp+0x28],ebp
	mov dword ptr [esp+0x24],ebp
	call CWvsContext::GetRealEquipSlot
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebp
	je Block12

 Block8:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x50]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x50]
	cmp ecx,ebp
	je Block11

 Block10:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block11:
	mov dword ptr [esp+0x50],ebp

 Block12:
	cmp edi,ebp
	je Block16

 Block13:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x78]
	mov ecx,edi
	call eax
	test eax,eax
	je Block16

 Block14:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	cmp eax,ebp
	je Block16

 Block15:
	mov ecx,dword ptr [eax+0x68]
	push ecx
	add eax,0x60
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	dec ecx
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov esi,edx
	add esp,8
	shr esi,0x1F
	add esi,edx
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [edi+0x115]
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x24]
	push eax
	push esi
	push ecx
	lea edx,[edi+0x111]
	push edx
	mov dword ptr [esp+0x34],ebp
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esp+0x38]
	cwde
	add esp,8
	push eax
	call CUserLocal::ApplyWeaponOption
	mov ebx,dword ptr [esp+0x14]
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x2C]
	push eax
	mov eax,dword ptr [edi+0x11D]
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push esi
	push eax
	lea ecx,[edi+0x119]
	push ecx
	mov dword ptr [esp+0x34],ebp
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esp+0x38]
	movsx edx,ax
	add esp,8
	push edx
	call CUserLocal::ApplyWeaponOption
	add ebx,dword ptr [esp+0x14]
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	mov edx,dword ptr [edi+0x125]
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x24]
	push ecx
	push esi
	push edx
	lea eax,[edi+0x121]
	push eax
	mov dword ptr [esp+0x34],ebp
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add esp,8
	push ecx
	mov ecx,dword ptr [esp+0x34]
	call CUserLocal::ApplyWeaponOption
	add ebx,dword ptr [esp+0x14]
	mov esi,dword ptr [esp+0x34]

 Block16:
	push 0xA
	lea edx,[esp+0x38]
	push edx
	mov ecx,esi
	call CWvsContext::GetRealEquipSlot
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block21

 Block17:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x38]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x38]
	test ecx,ecx
	je Block20

 Block19:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block20:
	mov dword ptr [esp+0x38],0

 Block21:
	test ebp,ebp
	je Block26

 Block22:
	lea esi,[ebp+0xC]
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x86
	jne Block26

 Block23:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0x78]
	mov ecx,ebp
	call eax
	test eax,eax
	je Block26

 Block24:
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	test eax,eax
	je Block26

 Block25:
	mov ecx,eax
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrLevel
	mov ecx,eax
	dec ecx
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x24]
	push edx
	add ebp,0x105
	push esi
	mov ecx,ebp
	mov dword ptr [esp+0x2C],0
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption1
	mov ecx,dword ptr [esp+0x30]
	cwde
	push eax
	call CUserLocal::ApplyWeaponOption
	add ebx,dword ptr [esp+0x14]
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push esi
	mov ecx,ebp
	mov dword ptr [esp+0x2C],0
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption2
	mov ecx,dword ptr [esp+0x30]
	cwde
	push eax
	call CUserLocal::ApplyWeaponOption
	add ebx,dword ptr [esp+0x14]
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push esi
	mov ecx,ebp
	mov dword ptr [esp+0x2C],0
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption3
	mov ecx,dword ptr [esp+0x30]
	cwde
	push eax
	call CUserLocal::ApplyWeaponOption
	add ebx,dword ptr [esp+0x14]

 Block26:
	test edi,edi
	je Block28

 Block27:
	lea eax,[edi+0xC]
	jmp Block29

 Block28:
	push 0
	lea ecx,[esp+0x38]
	call TSecType<long>::_ctor_1
	mov dword ptr [esp+0x64],0
	mov dword ptr [esp+0x30],1

 Block29:
	mov ecx,eax
	call TSecType<long>::GetData
	test byte ptr [esp+0x30],1
	mov esi,eax
	mov dword ptr [esp+0x64],0xFFFFFFFF
	je Block32

 Block30:
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block32

 Block31:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block32:
	push esi
	call get_weapon_type
	add esp,4
	xor ecx,ecx
	cmp eax,0x2D
	jl Block35

 Block33:
	cmp eax,0x2F
	jg Block35

 Block34:
	mov ecx,1

 Block35:
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x44]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x38]
	push esi
	push ecx
	call get_critical_skill_level
	mov ebp,dword ptr [esp+0x58]
	mov eax,dword ptr [ebp+0x1128]
	mov edx,dword ptr [esp+0x54]
	push eax
	lea ecx,[ebp+0x1120]
	add edx,5
	push ecx
	mov dword ptr [esp+0x30],edx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [ebp+0x65C]
	push edx
	lea esi,[ebp+0x654]
	push esi
	mov dword ptr [esp+0x68],eax
	call _ZtlSecureFuseHelper<long>::call
	sar eax,8
	add esp,0x24
	test eax,eax
	jg Block37

 Block36:
	xor eax,eax
	mov dword ptr [esp+0x30],eax
	jmp Block40

 Block37:
	cmp eax,0x64
	jge Block39

 Block38:
	mov dword ptr [esp+0x30],eax
	jmp Block40

 Block39:
	mov dword ptr [esp+0x30],0x64

 Block40:
	mov eax,dword ptr [ebp+0x65C]
	push eax
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [ebp+0xF18]
	push ecx
	lea esi,[ebp+0xF10]
	push esi
	call _ZtlSecureFuseHelper<long>::call
	sar eax,8
	add esp,0x10
	test eax,eax
	jg Block42

 Block41:
	xor eax,eax
	jmp Block43

 Block42:
	cmp eax,0x64
	jge Block49

 Block43:
	mov edi,eax
	test eax,eax
	jle Block45

 Block44:
	mov edx,dword ptr [ebp+0xF18]
	push edx
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8

 Block45:
	mov eax,dword ptr [esp+0x30]
	cmp edi,eax
	jl Block47

 Block46:
	mov eax,edi

 Block47:
	mov ecx,dword ptr [esp+0x44]
	mov edx,dword ptr [esp+0x2C]
	add eax,ecx
	add dword ptr [esp+0x14],eax
	mov eax,dword ptr [edx+0x76D]
	test eax,eax
	jg Block50

 Block48:
	xor eax,eax
	jmp Block52

 Block49:
	mov edi,0x64
	jmp Block44

 Block50:
	cmp eax,0x64
	jl Block52

 Block51:
	mov eax,0x64

 Block52:
	mov ecx,dword ptr [ebp+0xC0C]
	add dword ptr [esp+0x14],eax
	lea eax,[ebp+0xC04]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov esi,dword ptr [esp+0x34]
	add esp,8
	test eax,eax
	jle Block61

 Block53:
	mov edx,dword ptr [esi+0x3D]
	push edx
	lea eax,[esi+0x39]
	push eax
	mov dword ptr [esp+0x38],0
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	movzx eax,ax
	lea ecx,[esp+0x30]
	push ecx
	xor ecx,ecx
	mov edx,0x7D0
	cmp ax,dx
	setne cl
	dec ecx
	and ecx,0xFFEF1022
	add ecx,0x1421CF0
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push esi
	call CSkillInfo::GetSkillLevel_0
	mov edi,eax
	test edi,edi
	je Block61

 Block54:
	mov ecx,dword ptr [esp+0x30]
	push edi
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0x168]
	push edx
	add eax,0x160
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov esi,eax
	mov eax,dword ptr [ebp+0xC0C]
	push eax
	lea eax,[ebp+0xC04]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,0x10
	cmp eax,esi
	jge Block56

 Block55:
	mov esi,eax

 Block56:
	mov ecx,dword ptr [esp+0x30]
	push edi
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x174]
	push ecx
	add eax,0x16C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	imul eax,esi
	add esp,8
	test eax,eax
	jg Block58

 Block57:
	xor eax,eax
	jmp Block60

 Block58:
	cmp eax,0x64
	jl Block60

 Block59:
	mov eax,0x64

 Block60:
	mov ecx,dword ptr [esp+0x30]
	add dword ptr [esp+0x14],eax
	push edi
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0xD8]
	push edx
	add eax,0xD0
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov esi,dword ptr [esp+0x34]
	add esp,8

 Block61:
	test ebx,ebx
	jg Block63

 Block62:
	xor ebx,ebx
	mov eax,ebx
	jmp Block66

 Block63:
	cmp ebx,0x64
	jge Block65

 Block64:
	mov eax,ebx
	jmp Block66

 Block65:
	mov eax,0x64

 Block66:
	mov ebx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x18]
	add ebx,eax
	lea eax,[esp+0x4C]
	push eax
	call CUserLocal::GetPassiveSkillData
	mov edi,dword ptr [esp+0x50]
	mov dword ptr [esp+0x64],1
	test edi,edi
	je Block72

 Block67:
	mov eax,dword ptr [edi+8]
	test eax,eax
	jg Block69

 Block68:
	xor eax,eax
	jmp Block71

 Block69:
	cmp eax,0x64
	jl Block71

 Block70:
	mov eax,0x64

 Block71:
	add ebx,eax

 Block72:
	mov ecx,ebp
	call SecondaryStat::IsWildhunterJaguarVehicle
	test eax,eax
	je Block75

 Block73:
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x1F78E29
	push esi
	mov dword ptr [esp+0x3C],0
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	je Block75

 Block74:
	mov ecx,dword ptr [esp+0x30]
	push eax
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0x3FC]
	push edx
	add eax,0x3F4
	push eax
	call _ZtlSecureFuseHelper<long>::call
	xor ecx,ecx
	add esp,8
	test eax,eax
	setle cl
	dec ecx
	and eax,ecx
	add ebx,eax

 Block75:
	mov edx,dword ptr [esi+0x3D]
	push edx
	lea eax,[esi+0x39]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	cmp eax,0x16
	je Block77

 Block76:
	cmp ecx,0x7D1
	jne Block80

 Block77:
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x151D460
	push esi
	mov dword ptr [esp+0x38],0
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block80

 Block78:
	mov ecx,dword ptr [esp+0x2C]
	test ecx,ecx
	je Block80

 Block79:
	push eax
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0x114]
	push edx
	add eax,0x10C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	add ebx,eax

 Block80:
	mov dword ptr [esp+0x64],0xFFFFFFFF
	test edi,edi
	je Block84

 Block81:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block84

 Block82:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block84

 Block83:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block84:
	mov eax,ebx
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret
}
}
// CUIStat::OnButtonClicked
__SUB_CLASS_THIS(00468610, __thiscall, 55386,  CUIStat, void, uint32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	lea eax,[edx-0x7D0]
	push esi
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp eax,9
	ja Block11

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block6
cmp EAX, 4
je Block5
cmp EAX, 5
je Block7
cmp EAX, 6
je Block8
cmp EAX, 7
je Block9
cmp EAX, 8
je Block9
cmp EAX, 9
je Block10


 Block2:
	mov eax,0x800
	push eax
	mov ecx,esi
	call CWvsContext::SendAbilityUpRequest_0
	pop esi
	ret 4

 Block3:
	mov eax,0x2000
	push eax
	mov ecx,esi
	call CWvsContext::SendAbilityUpRequest_0
	pop esi
	ret 4

 Block4:
	mov eax,0x40
	push eax
	mov ecx,esi
	call CWvsContext::SendAbilityUpRequest_0
	pop esi
	ret 4

 Block5:
	mov eax,0x100
	push eax
	mov ecx,esi
	call CWvsContext::SendAbilityUpRequest_0
	pop esi
	ret 4

 Block6:
	mov eax,0x80
	push eax
	mov ecx,esi
	call CWvsContext::SendAbilityUpRequest_0
	pop esi
	ret 4

 Block7:
	mov eax,0x200
	push eax
	mov ecx,esi
	call CWvsContext::SendAbilityUpRequest_0
	pop esi
	ret 4

 Block8:
	call CUIStat::ToggleDetail
	pop esi
	ret 4

 Block9:
	pop esi
	mov dword ptr [esp+4],1
	jmp  CUIStat::AutoApUp

 Block10:
	pop esi
	mov dword ptr [esp+4],0
	jmp  CUIStat::AutoApUp

 Block11:
	pop esi
	mov dword ptr [esp+4],edx
	jmp  CUIWnd::OnButtonClicked
}
}
// CUIStatDetail::~CUIStatDetail
_SUB_EXCEPTION_HANDLER(467690)
__SUB_CLASS_THIS0(00467690, __thiscall, 55345,  CUIStatDetail, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_467690
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIStatDetail::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIStatDetail::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIStatDetail::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xAE8]
	mov dword ptr [esp+0x14],3
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0xAC8]
	mov byte ptr [esp+0x14],2
	call CToolTipHelper::~CToolTipHelper
	lea ecx,[esi+0x80]
	mov byte ptr [esp+0x14],1
	call CUIToolTip::~CUIToolTip
	mov ecx,esi
	mov dword ptr [TSingleton<CUIStatDetail>::ms_pInstance],0
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
// CUIStat::AutoApUp
_SUB_EXCEPTION_HANDLER(4661E0)
__SUB_CLASS_THIS(004661E0, __thiscall, 55391,  CUIStat, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4661E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x24]
	push eax
	mov dword ptr [esp+0x24],ecx
	lea ebx,[ecx+0x20D0]
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x28]
	xor edi,edi
	cmp eax,edi
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [esp+0x28],0
	xor edi,edi

 Block5:
	mov dword ptr [esp+0x14],edi
	mov edx,dword ptr [esp+0x44]
	lea ecx,[esp+0x14]
	push ecx
	push edx
	push ebx
	mov dword ptr [esp+0x48],edi
	call GetIdealStatUp
	add esp,0xC
	test eax,eax
	je Block59

 Block6:
	mov eax,dword ptr [ebp+0x95]
	push eax
	add ebp,0x91
	push ebp
	call _ZtlSecureFuseHelper<short>::call
	movsx edx,ax
	add esp,8
	cmp edx,1
	jl Block59

 Block7:
	mov eax,dword ptr [esp+0x14]
	xor ecx,ecx
	lea esp,[esp]

 Block8:
	cmp eax,edi
	je Block13

 Block9:
	cmp ecx,dword ptr [eax-4]
	jae Block13

 Block10:
	mov esi,dword ptr [eax+ecx*8+4]
	cmp esi,edx
	jl Block12

 Block11:
	mov esi,edx

 Block12:
	mov dword ptr [eax+ecx*8+4],esi
	mov eax,dword ptr [esp+0x14]
	sub edx,dword ptr [eax+ecx*8+4]
	inc ecx
	jmp Block8

 Block13:
	cmp edx,edi
	jle Block18

 Block14:
	cmp eax,edi
	jne Block16

 Block15:
	xor ecx,ecx
	jmp Block17

 Block16:
	mov ecx,dword ptr [eax-4]

 Block17:
	add dword ptr [eax+ecx*8-4],edx
	mov eax,dword ptr [esp+0x14]

 Block18:
	xor ecx,ecx
	mov dword ptr [esp+0x24],edi
	mov dword ptr [esp+0x28],ecx
	mov dword ptr [esp+0x2C],ecx
	mov dword ptr [esp+0x30],ecx
	xor esi,esi
	lea ecx,[ecx]

 Block19:
	cmp eax,edi
	je Block31

 Block20:
	cmp esi,dword ptr [eax-4]
	jae Block31

 Block21:
	mov ecx,dword ptr [eax+esi*8]
	xor edx,edx
	cmp ecx,0x100
	ja Block28

 Block22:
	je Block27

 Block23:
	sub ecx,0x40
	je Block26

 Block24:
	sub ecx,0x40
	jne Block30

 Block25:
	mov ecx,dword ptr [eax+esi*8+4]
	mov edx,1
	mov dword ptr [esp+edx*4+0x24],ecx
	inc esi
	jmp Block19

 Block26:
	mov ecx,dword ptr [eax+esi*8+4]
	xor edx,edx
	mov dword ptr [esp+edx*4+0x24],ecx
	inc esi
	jmp Block19

 Block27:
	mov ecx,dword ptr [eax+esi*8+4]
	mov edx,2
	mov dword ptr [esp+edx*4+0x24],ecx
	inc esi
	jmp Block19

 Block28:
	cmp ecx,0x200
	jne Block30

 Block29:
	mov edx,3

 Block30:
	mov ecx,dword ptr [eax+esi*8+4]
	mov dword ptr [esp+edx*4+0x24],ecx
	inc esi
	jmp Block19

 Block31:
	lea edx,[esp+0x18]
	push 0x7C7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x1C],edi
	mov byte ptr [esp+0x3C],2
	xor ebx,ebx
	jmp Block33

 Block33:
	lea eax,[esp+0x44]
	push 0x7C8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [eax]
	mov byte ptr [esp+0x3C],3
	cmp ebp,edi
	je Block39

 Block34:
	cmp dword ptr [ebp+4],edi
	jne Block38

 Block35:
	mov edi,dword ptr [ebp]
	test edi,edi
	jne Block37

 Block36:
	xor esi,esi
	mov dword ptr [ebp+4],esi
	mov ebp,esi
	jmp Block40

 Block37:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	push 0
	push 0
	push 0x3FFFFFFF
	mov esi,eax
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	mov dword ptr [ebp+4],esi
	xor edi,edi

 Block38:
	mov ebp,dword ptr [ebp+4]
	jmp Block40

 Block39:
	xor ebp,ebp

 Block40:
	mov ecx,dword ptr [esp+ebx+0x24]
	mov edx,dword ptr [ebx+CUIStat::ms_aStatName]
	push ecx
	push edx
	lea eax,[esp+0x24]
	push ebp
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x54]
	add esp,0x10
	mov byte ptr [esp+0x3C],2
	cmp eax,edi
	je Block49

 Block41:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,edi
	jne Block48

 Block42:
	cmp esi,edi
	je Block48

 Block43:
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block45

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block45:
	mov eax,dword ptr [esi+4]
	cmp eax,edi
	je Block47

 Block46:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block47:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block48:
	mov dword ptr [esp+0x44],edi

 Block49:
	mov esi,dword ptr [esp+0x1C]
	cmp esi,edi
	je Block51

 Block50:
	mov eax,dword ptr [esi-4]
	jmp Block52

 Block51:
	xor eax,eax

 Block52:
	push eax
	push esi
	lea ecx,[esp+0x20]
	call ZXString<char>::_Cat
	add ebx,4
	cmp ebx,0x10
	jl Block33

 Block53:
	push 1
	push edi
	push ecx
	mov ecx,esp
	lea edx,[esp+0x24]
	mov dword ptr [esp+0x30],esp
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_1
	add esp,0xC
	cmp eax,6
	jne Block55

 Block54:
	mov ecx,dword ptr [esp+0x20]
	lea eax,[esp+0x14]
	push eax
	call CWvsContext::SendAbilityUpRequest_1

 Block55:
	mov byte ptr [esp+0x3C],1
	cmp esi,edi
	je Block57

 Block56:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block57:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x3C],0
	cmp eax,edi
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block59:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ZArray<StatPair>::RemoveAll
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 4
}
}
// CUIStat::RestoreButtons
__SUB_CLASS_THIS0(00461AA0, __thiscall, 55380,  CUIStat, void) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push ebp
	push esi
	push edi
	lea eax,[esp+0x10]
	mov ebp,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [esp+0x14],0

 Block5:
	mov ecx,dword ptr [ebx+0x3D]
	push ecx
	lea edx,[ebx+0x39]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x3E8
	mov edx,ecx
	add esp,8
	sub edx,eax
	je Block7

 Block6:
	cmp ecx,0x7D1
	jne Block9

 Block7:
	mov eax,dword ptr [ebx+0x35]
	push eax
	add ebx,0x33
	push ebx
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	cmp al,0xA
	ja Block9

 Block8:
	mov eax,1
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	xor ecx,ecx
	test eax,eax
	sete cl
	lea esi,[ebp+0xB0C]
	mov ebx,6
	mov edi,ecx
	jmp Block12

 Block12:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push edi
	call eax
	add esi,8
	sub ebx,1
	jne Block12

 Block13:
	lea esi,[ebp+0xB3C]
	mov ebx,3

 Block14:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push edi
	call eax
	add esi,8
	sub ebx,1
	jne Block14

 Block15:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret
}
}
// CUIStat::ToggleDetail
_SUB_EXCEPTION_HANDLER(4684E0)
__SUB_CLASS_THIS0(004684E0, __thiscall, 55380,  CUIStat, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4684E0
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
	mov edi,ecx
	mov ecx,dword ptr [edi+0xB54]
	test ecx,ecx
	je Block4

 Block1:
	call CWnd::Destroy
	cmp dword ptr [edi+0xB54],0
	lea esi,[edi+0xB50]
	je Block3

 Block2:
	push 0
	mov ecx,esi
	call ZRef<CUIStatDetail>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block3:
	mov dword ptr [edi+0xAFC],0
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret

 Block4:
	push 0xAFC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,eax
	mov dword ptr [esp+0x10],ebx
	mov dword ptr [esp+0x1C],0
	test ebx,ebx
	je Block6

 Block5:
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x30]
	lea esi,[edi+4]
	mov ecx,esi
	call edx
	add eax,0x5A
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	add eax,0xAC
	push eax
	mov ecx,ebx
	call CUIStatDetail::_ctor_0
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	push eax
	lea ecx,[edi+0xB50]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZRef<CUIStatDetail>::op_assign_ptr
	mov dword ptr [edi+0xAFC],1
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
// CUIStat::CreateTip
_SUB_EXCEPTION_HANDLER(466530)
__SUB_CLASS_THIS0(00466530, __thiscall, 55380,  CUIStat, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_466530
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0xD0],ebx
	call ZArray<ZXString<char>>::RemoveAll
	lea eax,[esp+0x1C]
	push 0x14C6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],1
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0x1C]
	push 0x14C7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],2
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [esi+0xB58]
	push 0xBB
	push 0xAA
	push 2
	push ecx
	lea ebp,[esi+0xB58]
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	lea eax,[esp+0x34]
	push eax
	call UIHelper::MakeBalloonTip
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB8C]
	add esp,0x1C
	cmp edi,eax
	je Block11

 Block7:
	mov dword ptr [esi+0xB8C],eax
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block9:
	cmp edi,ebx
	je Block11

 Block10:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block11:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block13:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x40]
	call eax
	cmp eax,0x44C
	jg Block78

 Block14:
	je Block64

 Block15:
	cmp eax,0x12C
	jg Block40

 Block16:
	je Block33

 Block17:
	sub eax,0x64
	je Block26

 Block18:
	sub eax,0x64
	jne Block117

 Block19:
	lea ecx,[esp+0x14]
	call ZArray<ZXString<char>>::RemoveAll
	lea ecx,[esp+0x1C]
	push 0x14BA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],6
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	lea edx,[esp+0x70]
	push 0x14BC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],7
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	lea eax,[esp+0xBC]
	push 0x1A46
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],8
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xBC]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	lea edx,[esp+0x18]
	push edx
	push 0x10A
	push 0xA0
	push 2
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push ebp
	call _x_com_ptr<IWzFont>::_ctor_copy
	lea eax,[esp+0xDC]
	push eax
	call UIHelper::MakeBalloonTip
	add esp,0x1C
	push eax
	lea ecx,[esi+0xB90]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0xC4]
	jmp Block115

 Block26:
	lea ecx,[esp+0x14]
	call ZArray<ZXString<char>>::RemoveAll
	lea eax,[esp+0x78]
	push 0x14BA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],3
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	lea ecx,[esp+0x30]
	push 0x14BB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],4
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	lea edx,[esp+0xA0]
	push 0x1A45
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],5
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xA0]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	lea ecx,[esp+0x18]
	push ecx
	push 0xF1
	push 0xA0
	push 3
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push ebp
	call _x_com_ptr<IWzFont>::_ctor_copy
	lea edx,[esp+0x50]
	push edx
	call UIHelper::MakeBalloonTip
	add esp,0x1C
	push eax
	lea ecx,[esi+0xB90]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x38]
	jmp Block115

 Block33:
	lea ecx,[esp+0x14]
	call ZArray<ZXString<char>>::RemoveAll
	lea eax,[esp+0x80]
	push 0x14BA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],9
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x80]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	lea ecx,[esp+0x40]
	push 0x14BD
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0xA
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	lea edx,[esp+0xC0]
	push 0x1A47
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0xB
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xC0]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	lea ecx,[esp+0x18]
	push ecx
	push 0xF8
	push 0xA0
	push 2
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push ebp
	call _x_com_ptr<IWzFont>::_ctor_copy
	lea edx,[esp+0x60]
	push edx
	call UIHelper::MakeBalloonTip
	add esp,0x1C
	push eax
	lea ecx,[esi+0xB90]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x48]
	jmp Block115

 Block40:
	sub eax,0x190
	je Block57

 Block41:
	sub eax,0x64
	jne Block117

 Block42:
	lea ecx,[esp+0x14]
	call ZArray<ZXString<char>>::RemoveAll
	lea eax,[esp+0x88]
	push 0x14BA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0xF
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x88]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
	lea ecx,[esp+0x50]
	push 0x14BF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0x10
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	lea edx,[esp+0xA8]
	push 0x1A45
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0x11
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xA8]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	lea ecx,[esp+0x18]
	push ecx
	push 0xE6
	push 0x95
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push ebp
	call _x_com_ptr<IWzFont>::_ctor_copy
	lea edx,[esp+0x70]
	push edx
	call UIHelper::MakeBalloonTip
	add esp,0x1C
	push eax
	lea ecx,[esi+0xB90]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x58]
	cmp eax,ebx
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block50:
	lea ecx,[esp+0x14]
	call ZArray<ZXString<char>>::RemoveAll
	lea eax,[esp+0x90]
	push 0x14C0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0x12
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x90]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block52:
	lea ecx,[esp+0x60]
	push 0x1A47
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0x13
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block54:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	lea eax,[esp+0x18]
	push eax
	push 0xF8
	push 0xA0
	push 2
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push ebp
	call _x_com_ptr<IWzFont>::_ctor_copy
	lea ecx,[esp+0xD0]
	push ecx
	call UIHelper::MakeBalloonTip
	add esp,0x1C
	push eax
	lea ecx,[esi+0xB94]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0xB8]

 Block55:
	cmp eax,ebx
	je Block117

 Block56:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block117

 Block57:
	lea ecx,[esp+0x14]
	call ZArray<ZXString<char>>::RemoveAll
	lea ecx,[esp+0x68]
	push 0x14BA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0xC
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block59:
	lea edx,[esp+0x98]
	push 0x14BE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0xD
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x98]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block61

 Block60:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block61:
	lea eax,[esp+0x24]
	push 0x1A45
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0xE
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block63:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	lea edx,[esp+0x18]
	push edx
	push 0x11C
	push 0xA0
	push 2
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push ebp
	call _x_com_ptr<IWzFont>::_ctor_copy
	lea eax,[esp+0xC8]
	push eax
	call UIHelper::MakeBalloonTip
	add esp,0x1C
	push eax
	lea ecx,[esi+0xB90]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0xB0]
	jmp Block115

 Block64:
	lea ecx,[esp+0x14]
	call ZArray<ZXString<char>>::RemoveAll
	lea eax,[esp+0x28]
	push 0x14BA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0x14
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block66

 Block65:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block66:
	lea ecx,[esp+0x2C]
	push 0x14C1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0x15
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block68:
	lea edx,[esp+0x34]
	push 0x1A45
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0x16
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block70

 Block69:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block70:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [ebp]
	lea ecx,[esp+0x18]
	push ecx
	push 0xF1
	push 0xA0
	push 3
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block72

 Block71:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block72:
	lea ecx,[esp+0x54]
	push ecx
	call UIHelper::MakeBalloonTip
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB90]
	add esp,0x1C
	cmp edi,eax
	je Block77

 Block73:
	mov dword ptr [esi+0xB90],eax
	cmp eax,ebx
	je Block75

 Block74:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block75:
	cmp edi,ebx
	je Block77

 Block76:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block77:
	mov eax,dword ptr [esp+0x3C]
	jmp Block115

 Block78:
	cmp eax,0x578
	jg Block105

 Block79:
	je Block96

 Block80:
	sub eax,0x4B0
	je Block89

 Block81:
	sub eax,0x64
	jne Block117

 Block82:
	lea ecx,[esp+0x14]
	call ZArray<ZXString<char>>::RemoveAll
	lea eax,[esp+0x44]
	push 0x14BA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0x1A
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block84

 Block83:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block84:
	lea ecx,[esp+0x4C]
	push 0x14C3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0x1B
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block86

 Block85:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block86:
	lea edx,[esp+0x54]
	push 0x1A47
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0x1C
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block88

 Block87:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block88:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	lea ecx,[esp+0x18]
	push ecx
	push 0xF8
	push 0xA0
	push 2
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push ebp
	call _x_com_ptr<IWzFont>::_ctor_copy
	lea edx,[esp+0x74]
	push edx
	call UIHelper::MakeBalloonTip
	add esp,0x1C
	push eax
	lea ecx,[esi+0xB90]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x5C]
	jmp Block115

 Block89:
	lea ecx,[esp+0x14]
	call ZArray<ZXString<char>>::RemoveAll
	lea eax,[esp+0x64]
	push 0x14BA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0x17
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block91

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block91:
	lea ecx,[esp+0x6C]
	push 0x14C2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0x18
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block93

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block93:
	lea edx,[esp+0x74]
	push 0x1A46
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0x19
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block95

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block95:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	lea ecx,[esp+0x18]
	push ecx
	push 0x10A
	push 0xA0
	push 2
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push ebp
	call _x_com_ptr<IWzFont>::_ctor_copy
	lea edx,[esp+0x94]
	push edx
	call UIHelper::MakeBalloonTip
	add esp,0x1C
	push eax
	lea ecx,[esi+0xB90]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x7C]
	jmp Block115

 Block96:
	lea ecx,[esp+0x14]
	call ZArray<ZXString<char>>::RemoveAll
	lea eax,[esp+0x84]
	push 0x14BA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0x1D
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x84]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block98

 Block97:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block98:
	lea ecx,[esp+0x8C]
	push 0x14C4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0x1E
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x8C]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block100

 Block99:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block100:
	lea edx,[esp+0x94]
	push 0x1A45
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0x1F
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x94]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block102

 Block101:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block102:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [ebp]
	lea ecx,[esp+0x18]
	push ecx
	push 0x11C
	push 0xA0
	push 2
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block104

 Block103:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block104:
	lea ecx,[esp+0xB4]
	push ecx
	call UIHelper::MakeBalloonTip
	add esp,0x1C
	push eax
	lea ecx,[esi+0xB90]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x9C]
	jmp Block55

 Block105:
	cmp eax,0x5DC
	jne Block117

 Block106:
	lea ecx,[esp+0x14]
	call ZArray<ZXString<char>>::RemoveAll
	lea ecx,[esp+0xA4]
	push 0x14BA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0x20
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xA4]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block108

 Block107:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block108:
	lea edx,[esp+0xAC]
	push 0x14C5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0x21
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xAC]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block110

 Block109:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block110:
	lea eax,[esp+0xB4]
	push 0x1A45
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xD8],0x22
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xB4]
	mov byte ptr [esp+0xD0],bl
	cmp eax,ebx
	je Block112

 Block111:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block112:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [ebp]
	lea edx,[esp+0x18]
	push edx
	push 0xF1
	push 0xA0
	push 3
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block114

 Block113:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block114:
	lea eax,[esp+0x38]
	push eax
	call UIHelper::MakeBalloonTip
	add esp,0x1C
	push eax
	lea ecx,[esi+0xB90]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x20]

 Block115:
	cmp eax,ebx
	je Block117

 Block116:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block117:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0xD0],0xFFFFFFFF
	call ZArray<ZXString<char>>::RemoveAll
	mov ecx,dword ptr [esp+0xC8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC0
	ret
}
}
// CUIStat::OnCreate
_SUB_EXCEPTION_HANDLER(467B90)
__SUB_CLASS_THIS(00467B90, __thiscall, 55381,  CUIStat, void, void*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_467B90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
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
	push 1
	push ecx
	mov edi,esp
	mov dword ptr [ebp-0x14],esp
	push 0x46
	push offset _S_UIUIWINDOW2IMGST__15
	push 0
	push 0x23
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x23
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	mov eax,dword ptr [ebp+8]
	push eax
	mov ecx,esi
	call CUIWnd::OnCreate_1
	push 0
	push 0
	lea ebx,[esi+0xBAC]
	push esi
	mov ecx,ebx
	call CLayoutMan::Init
	push 0
	push 0
	push 0
	push 0x7D0
	push offset _S_UIUIWINDOW2IMGST__14
	lea ecx,[ebp-0x1C]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov dword ptr [ebp-4],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	cmp dword ptr [esi+0xB0C],0
	je Block4

 Block3:
	push 0
	lea ecx,[esi+0xB08]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esi+0xB0C],0

 Block4:
	cmp dword ptr [ebp-0x18],0
	mov edx,dword ptr [edi+4]
	mov dword ptr [esi+0xB0C],edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block6

 Block5:
	push 0
	lea ecx,[ebp-0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block6:
	push 0
	push 0
	push 0
	push 0x7D1
	push offset _S_UIUIWINDOW2IMGST__13
	lea eax,[ebp-0x1C]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov dword ptr [ebp-0x14],eax
	mov eax,dword ptr [eax+4]
	mov dword ptr [ebp-4],1
	lea edi,[esi+0xB10]
	test eax,eax
	je Block8

 Block7:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	cmp dword ptr [edi+4],0
	je Block10

 Block9:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block10:
	cmp dword ptr [ebp-0x18],0
	mov ecx,dword ptr [ebp-0x14]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [edi+4],edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block12

 Block11:
	push 0
	lea ecx,[ebp-0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block12:
	push 0
	push 0
	push 0
	push 0x7D2
	push offset _S_UIUIWINDOW2IMGST__12
	lea eax,[ebp-0x1C]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov dword ptr [ebp-0x14],eax
	mov eax,dword ptr [eax+4]
	mov dword ptr [ebp-4],2
	lea edi,[esi+0xB18]
	test eax,eax
	je Block14

 Block13:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	cmp dword ptr [edi+4],0
	je Block16

 Block15:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block16:
	cmp dword ptr [ebp-0x18],0
	mov ecx,dword ptr [ebp-0x14]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [edi+4],edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block18

 Block17:
	push 0
	lea ecx,[ebp-0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block18:
	push 0
	push 0
	push 0
	push 0x7D3
	push offset _S_UIUIWINDOW2IMGST__11
	lea eax,[ebp-0x1C]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov dword ptr [ebp-0x14],eax
	mov eax,dword ptr [eax+4]
	mov dword ptr [ebp-4],3
	lea edi,[esi+0xB20]
	test eax,eax
	je Block20

 Block19:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block20:
	cmp dword ptr [edi+4],0
	je Block22

 Block21:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block22:
	cmp dword ptr [ebp-0x18],0
	mov ecx,dword ptr [ebp-0x14]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [edi+4],edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block24

 Block23:
	push 0
	lea ecx,[ebp-0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block24:
	push 0
	push 0
	push 0
	push 0x7D4
	push offset _S_UIUIWINDOW2IMGST__10
	lea eax,[ebp-0x1C]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov dword ptr [ebp-0x14],eax
	mov eax,dword ptr [eax+4]
	mov dword ptr [ebp-4],4
	lea edi,[esi+0xB28]
	test eax,eax
	je Block26

 Block25:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block26:
	cmp dword ptr [edi+4],0
	je Block28

 Block27:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block28:
	cmp dword ptr [ebp-0x18],0
	mov ecx,dword ptr [ebp-0x14]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [edi+4],edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block30

 Block29:
	push 0
	lea ecx,[ebp-0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block30:
	push 0
	push 0
	push 0
	push 0x7D5
	push offset _S_UIUIWINDOW2IMGST__9
	lea eax,[ebp-0x1C]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov dword ptr [ebp-0x14],eax
	mov eax,dword ptr [eax+4]
	mov dword ptr [ebp-4],5
	lea edi,[esi+0xB30]
	test eax,eax
	je Block32

 Block31:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block32:
	cmp dword ptr [edi+4],0
	je Block34

 Block33:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block34:
	cmp dword ptr [ebp-0x18],0
	mov ecx,dword ptr [ebp-0x14]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [edi+4],edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block36

 Block35:
	push 0
	lea ecx,[ebp-0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block36:
	push 0
	push 0
	push 0
	push 0x7D7
	push offset _S_UIUIWINDOW2IMGST__8
	lea eax,[ebp-0x1C]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov dword ptr [ebp-0x14],eax
	mov eax,dword ptr [eax+4]
	mov dword ptr [ebp-4],6
	lea edi,[esi+0xB38]
	test eax,eax
	je Block38

 Block37:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block38:
	cmp dword ptr [edi+4],0
	je Block40

 Block39:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block40:
	cmp dword ptr [ebp-0x18],0
	mov ecx,dword ptr [ebp-0x14]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [edi+4],edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block42

 Block41:
	push 0
	lea ecx,[ebp-0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block42:
	lea eax,[ebp-0x14]
	push 0x7C4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xB3C]
	push 0
	push 1
	push eax
	mov dword ptr [ebp-4],7
	call CCtrlButton::LoadToolTip
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block44:
	push 0
	push 0
	push 0
	push 0x7D8
	push offset _S_UIUIWINDOW2IMGST__7
	lea ecx,[ebp-0x1C]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov dword ptr [ebp-0x14],eax
	mov eax,dword ptr [eax+4]
	mov dword ptr [ebp-4],8
	lea edi,[esi+0xB40]
	test eax,eax
	je Block46

 Block45:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block46:
	cmp dword ptr [edi+4],0
	je Block48

 Block47:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block48:
	cmp dword ptr [ebp-0x18],0
	mov edx,dword ptr [ebp-0x14]
	mov eax,dword ptr [edx+4]
	mov dword ptr [edi+4],eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block50

 Block49:
	push 0
	lea ecx,[ebp-0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block50:
	lea ecx,[ebp-0x14]
	push 0x7C5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xB44]
	push 0
	push 1
	push eax
	mov dword ptr [ebp-4],9
	call CCtrlButton::LoadToolTip
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block52:
	push 0
	push 0
	push 0
	push 0x7D9
	push offset _S_UIUIWINDOW2IMGST__6
	lea edx,[ebp-0x1C]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov dword ptr [ebp-0x14],eax
	mov eax,dword ptr [eax+4]
	mov dword ptr [ebp-4],0xA
	lea edi,[esi+0xB48]
	test eax,eax
	je Block54

 Block53:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block54:
	cmp dword ptr [edi+4],0
	je Block56

 Block55:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block56:
	cmp dword ptr [ebp-0x18],0
	mov eax,dword ptr [ebp-0x14]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [edi+4],ecx
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block58

 Block57:
	push 0
	lea ecx,[ebp-0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block58:
	lea edx,[ebp-0x14]
	push 0x7C6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xB4C]
	push 0
	push 1
	push eax
	mov dword ptr [ebp-4],0xB
	call CCtrlButton::LoadToolTip
	mov eax,dword ptr [ebp-0x14]
	or edi,0xFFFFFFFF
	mov dword ptr [ebp-4],edi
	test eax,eax
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block60:
	push 0
	push 0
	push 0
	push 0x7D6
	push offset _S_UIUIWINDOW2IMGST__5
	lea eax,[ebp-0x1C]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	cmp dword ptr [ebp-0x18],0
	je Block62

 Block61:
	push 0
	lea ecx,[ebp-0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block62:
	mov ecx,esi
	call CUIStat::RestoreButtons
	mov ecx,esi
	call CUIStat::EnableApUpButton
	lea ecx,[ebp-0x14]
	push 0x7C9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esi+0xB60]
	mov dword ptr [ebp-4],0xC
	call CToolTipHelper::LoadToolTip_0
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],edi
	test eax,eax
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block64:
	cmp dword ptr [esi+0xAFC],0
	je Block69

 Block65:
	push 0xAFC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,eax
	mov dword ptr [ebp-0x28],ebx
	mov dword ptr [ebp-4],0xD
	test ebx,ebx
	je Block67

 Block66:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	lea edi,[esi+4]
	mov ecx,edi
	call eax
	mov edx,dword ptr [edi]
	add eax,0x5A
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	add eax,0xAC
	push eax
	mov ecx,ebx
	call CUIStatDetail::_ctor_0
	jmp Block68

 Block67:
	xor eax,eax

 Block68:
	push eax
	lea ecx,[esi+0xB50]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<CUIStatDetail>::op_assign_ptr
	mov dword ptr [esi+0xAFC],1

 Block69:
	cmp dword ptr [esi+0xB88],0
	je Block71

 Block70:
	mov ecx,esi
	call CUIStat::CreateTip

 Block71:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	add ecx,0x40A0
	call ZArray<CUIWnd *>::InsertBefore
	mov dword ptr [eax],esi
	add esi,0xB9C
	mov edi,offset CUIStat::ms_aStatName
	mov dword ptr [ebp-0x20],esi

 Block72:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x50]
	push ecx
	call esi
	lea edx,[ebp-0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	xor ebx,ebx
	add esp,8
	cmp eax,ebx
	jl Block105

 Block73:
	lea eax,[ebp-0x40]
	push eax
	mov dword ptr [ebp-4],0xE
	call esi
	lea ecx,[ebp-0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block105

 Block74:
	push 0x24
	push offset _S_UIUIWINDOW2IMGST__4
	push ebx
	push 0x24
	lea ecx,[ebp-0x14]
	mov byte ptr [ebp-4],0xF
	mov dword ptr [ebp-0x14],ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x24
	lea ecx,[ebp-0x14]
	call ZXString<char>::ReleaseBuffer
	push edi
	lea edx,[ebp-0x28]
	push edx
	lea ecx,[ebp-0x14]
	mov byte ptr [ebp-4],0x10
	call ZXString<char>::op_add_1
	mov eax,dword ptr [eax]
	push ebx
	push ebx
	push 0xFFFFFFFF
	push eax
	push ebx
	push ebx
	mov byte ptr [ebp-4],0x11
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push ebx
	push ebx
	lea eax,[ebp-0x50]
	push eax
	lea ecx,[ebp-0x40]
	push ecx
	push 0x24
	push offset _S_UIUIWINDOW2IMGST__4
	push ebx
	push 0x24
	lea ecx,[ebp-0x24]
	mov dword ptr [ebp-0x24],ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x24
	lea ecx,[ebp-0x24]
	call ZXString<char>::ReleaseBuffer
	push edi
	lea edx,[ebp-0x2C]
	push edx
	lea ecx,[ebp-0x24]
	mov byte ptr [ebp-4],0x12
	call ZXString<char>::op_add_1
	mov eax,dword ptr [eax]
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push ebx
	push ebx
	mov byte ptr [ebp-4],0x13
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x14
	cmp dword ptr [_D_G_RM],ebx
	je Block106

 Block75:
	lea eax,[ebp-0x60]
	mov byte ptr [ebp-4],0x13
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call Ztl_variant_t::GetUnknown
	cmp eax,ebx
	je Block83

 Block76:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x30]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	mov ecx,dword ptr [ebp-0x20]
	mov esi,eax
	mov eax,dword ptr [ecx]
	test esi,esi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp-0x30]
	test eax,eax
	je Block78

 Block77:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block78:
	mov ecx,dword ptr [ebp-0x20]
	mov dword ptr [ecx],ebx
	test esi,esi
	jge Block80

 Block79:
	cmp esi,0x80004002
	jne Block107

 Block80:
	cmp word ptr [ebp-0x60],8
	mov byte ptr [ebp-4],0x13
	jne Block86

 Block81:
	mov eax,dword ptr [ebp-0x58]
	xor ecx,ecx
	mov word ptr [ebp-0x60],cx
	test eax,eax
	je Block87

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block83:
	mov edx,dword ptr [ebp-0x20]
	mov eax,dword ptr [edx]
	cmp eax,ebx
	je Block80

 Block84:
	mov ecx,edx
	mov dword ptr [ecx],0
	test eax,eax
	je Block80

 Block85:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block80

 Block86:
	lea edx,[ebp-0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],0x12
	test eax,eax
	je Block89

 Block88:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block89:
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block91

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block91:
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block93

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block93:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block95

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block95:
	mov esi,8
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x40],si
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block99:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp word ptr [ebp-0x50],si
	jne Block102

 Block100:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	test eax,eax
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block103:
	add dword ptr [ebp-0x20],4
	add edi,4
	cmp edi,offset _D_PI__52
	jl Block72

 Block104:
	lea esp,[ebp-0x70]
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

 Block105:
	push eax
	call _com_issue_error

 Block106:
	push 0x80004003
	call _com_issue_error

 Block107:
	push esi
	call _com_issue_error
}
}
// CUIStat::EnableApUpButton
__SUB_CLASS_THIS0(00461860, __thiscall, 55380,  CUIStat, void) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	lea eax,[esp+0x18]
	mov dword ptr [esp+0x10],ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [esp+0x1C],0

 Block5:
	mov ecx,dword ptr [ebp+0x95]
	push ecx
	lea edx,[ebp+0x91]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	mov esi,dword ptr [esp+0x18]
	xor ebx,ebx
	add esp,8
	test ax,ax
	setne bl
	add esi,0xB0C
	mov edi,6
	mov dword ptr [esp+0x14],ebx

 Block6:
	mov eax,dword ptr [esi]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x28]
	call edx
	test eax,eax
	je Block8

 Block7:
	mov eax,dword ptr [esi]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebx
	call edx

 Block8:
	add esi,8
	sub edi,1
	jne Block6

 Block9:
	test ebx,ebx
	je Block16

 Block10:
	mov eax,dword ptr [ebp+0x35]
	push eax
	lea ecx,[ebp+0x33]
	push ecx
	call _ZtlSecureFuseHelper<unsigned char>::call
	mov edx,dword ptr [ebp+0x3D]
	mov bl,al
	push edx
	lea eax,[ebp+0x39]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	add esp,0x10
	cmp bl,0x14
	jae Block15

 Block11:
	mov esi,dword ptr [esp+0x10]
	add esi,0xB0C
	mov edi,2

 Block12:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x28]
	call eax
	test eax,eax
	je Block14

 Block13:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax

 Block14:
	add esi,8
	sub edi,1
	jne Block12

 Block15:
	mov ebx,dword ptr [esp+0x14]

 Block16:
	mov esi,dword ptr [esp+0x10]
	add esi,0xB3C
	mov edi,3
	lea esp,[esp]

 Block17:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x28]
	call eax
	test eax,eax
	je Block19

 Block18:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax

 Block19:
	add esi,8
	sub edi,1
	jne Block17

 Block20:
	mov ecx,dword ptr [ebp+0x3D]
	push ecx
	lea esi,[ebp+0x39]
	push esi
	call _ZtlSecureFuseHelper<short>::call
	cwde
	cdq
	mov ecx,0x3E8
	idiv ecx
	mov eax,0x51EB851F
	add esp,8
	imul edx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,9
	je Block22

 Block21:
	mov ecx,dword ptr [ebp+0x3D]
	push ecx
	push esi
	call _ZtlSecureFuseHelper<short>::call
	cwde
	cdq
	mov ecx,0x3E8
	idiv ecx
	mov eax,0x51EB851F
	add esp,8
	mov dword ptr [esp+0x14],1
	imul edx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,8
	jne Block23

 Block22:
	mov dword ptr [esp+0x14],0

 Block23:
	mov ecx,dword ptr [ebp+0x3D]
	push ecx
	push esi
	call _ZtlSecureFuseHelper<short>::call
	xor ebx,ebx
	add esp,8
	mov edx,0x1F4
	cmp ax,dx
	sete bl
	xor esi,esi
	mov edi,edi

 Block24:
	cmp dword ptr [esp+0x14],0
	je Block30

 Block25:
	test esi,esi
	jne Block27

 Block26:
	xor eax,eax
	test ebx,ebx
	sete al
	jmp Block28

 Block27:
	mov eax,ebx

 Block28:
	test eax,eax
	je Block30

 Block29:
	mov edi,1
	jmp Block31

 Block30:
	xor edi,edi

 Block31:
	mov ebp,dword ptr [esp+0x10]
	mov eax,dword ptr [ebp+esi*8+0xB3C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x28]
	call edx
	test eax,eax
	je Block34

 Block32:
	mov eax,dword ptr [ebp+esi*8+0xB3C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push edi
	call edx
	test edi,edi
	je Block34

 Block33:
	mov ecx,dword ptr [ebp+esi*8+0xB3C]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push 0
	call edx

 Block34:
	inc esi
	cmp esi,3
	jl Block24

 Block35:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret
}
}
// CUIStatDetail::OnMouseMove
__SUB_CLASS_THIS(00461450, __thiscall, 55349,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	push 0
	push 0
	push eax
	lea eax,[ecx+0x7C]
	push edx
	push eax
	add ecx,0xAC4
	call CToolTipHelper::CheckAndShow
	xor eax,eax
	ret 8
}
}
