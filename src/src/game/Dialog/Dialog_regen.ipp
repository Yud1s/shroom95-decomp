#include "regen.hpp"
// Dialog.ipp
#include "Dialog.hpp"

// CDialog::CreateDlg
__SUB_CLASS_THIS(000FE710, __thiscall, 5377,  CDialog, void, long, long, int32_t, void*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]
	push esi
	mov esi,dword ptr [esp+8]
	push 4
	push eax
	mov eax,dword ptr [esp+0x14]
	push edx
	push 0xA
	push eax
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push esi
	push eax
	mov eax,esi
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	call CDialog::CreateDlg_0
	pop esi
	ret 0x10
}
}
// CDialog::DoModal
_SUB_EXCEPTION_HANDLER(FE7A0)
__SUB_CLASS_THIS0(000FE7A0, __thiscall, 5384,  CDialog, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_FE7A0
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
	lea edi,[esp+0xC]
	call CDialog::MODAL_OWNER::_ctor_0
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	lea eax,[esi+0x84]
	push eax
	mov dword ptr [esp+0x1C],0
	call CWvsApp::Run
	mov esi,dword ptr [esi+0x80]
	mov eax,edi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CDialog::MODAL_OWNER::~MODAL_OWNER
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
// CDialog::IsKindOf
__SUB_CLASS_THIS(0007A280, __thiscall, 5393,  CDialog, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CDialog::ms_RTTI_CDialog
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
// CDialog::~CDialog
__SUB_CLASS_THIS0(0002B910, __thiscall, 5373,  CDialog, void) {
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
// CDialog::ProcessTab
__SUB_CLASS_THIS(000FE9E0, __thiscall, 5389,  CDialog, void, int32_t) {
__asm {

 Block0:
	sub esp,0xC
	push ebx
	mov ebx,ecx
	cmp dword ptr [ebx+0x68],1
	jbe Block26

 Block1:
	mov eax,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	cmp dword ptr [eax+0xA0],0
	je Block26

 Block2:
	mov eax,dword ptr [ebx+0x74]
	push edi
	test eax,eax
	je Block13

 Block3:
	add eax,8
	je Block13

 Block4:
	lea edi,[eax-8]
	mov dword ptr [esp+0x10],edi
	test edi,edi
	je Block6

 Block5:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	push esi
	push 0
	lea edx,[esp+0x14]
	push edx
	lea ecx,[ebx+0x60]
	call ZList<ZRef<CCtrlWnd>>::Find
	mov esi,eax
	mov dword ptr [esp+0xC],esi
	test edi,edi
	je Block8

 Block7:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CCtrlWnd>::_ReleaseRaw

 Block8:
	test esi,esi
	je Block25

 Block9:
	push ebp
	mov ebp,esi

 Block10:
	cmp dword ptr [esp+0x20],0
	jne Block15

 Block11:
	cmp esi,dword ptr [ebx+0x70]
	jne Block14

 Block12:
	mov esi,dword ptr [ebx+0x6C]
	mov dword ptr [esp+0x10],esi
	jmp Block19

 Block13:
	xor edi,edi
	mov dword ptr [esp+0x10],edi
	jmp Block6

 Block14:
	lea eax,[esp+0x10]
	push eax
	call ZList<ZRef<CCtrlWnd>>::GetNext
	jmp Block18

 Block15:
	cmp esi,dword ptr [ebx+0x6C]
	jne Block17

 Block16:
	mov esi,dword ptr [ebx+0x70]
	mov dword ptr [esp+0x10],esi
	jmp Block19

 Block17:
	lea ecx,[esp+0x10]
	push ecx
	call ZList<ZRef<CCtrlWnd>>::GetPrev

 Block18:
	mov esi,dword ptr [esp+0x14]
	add esp,4

 Block19:
	cmp esi,ebp
	je Block24

 Block20:
	mov edi,dword ptr [esi+4]
	test edi,edi
	je Block22

 Block21:
	lea eax,[edi+4]
	jmp Block23

 Block22:
	xor eax,eax

 Block23:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov ecx,edi
	call CCtrlWnd::IsFocused
	test eax,eax
	je Block10

 Block24:
	pop ebp

 Block25:
	pop esi
	pop edi

 Block26:
	pop ebx
	add esp,0xC
	ret 4
}
}
// CDialog::CreateDlg
__SUB_CLASS_THIS(000FEC40, __thiscall, 5375,  CDialog, void, const wchar_t*, int32_t, void*, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+4]
	push esi
	push edi
	push 0
	push 0
	push eax
	push 0
	push 0
	push ecx
	mov edi,ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_1
	mov ecx,edi
	call CWnd::SetBackgrnd
	mov esi,dword ptr [edi+0x78]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0xC]
	push ecx
	push esi
	mov dword ptr [esp+0x14],0
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov esi,dword ptr [edi+0x78]
	test esi,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],0
	call edx
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x10]
	push 4
	push eax
	mov eax,dword ptr [esp+0x20]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	push 0xA
	push eax
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push ecx
	push eax
	mov eax,ecx
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	mov ecx,edi
	call CDialog::CreateDlg_0
	pop edi
	pop esi
	ret 0x10
}
}
// CDialog::OnButtonClicked
__SUB_CLASS_THIS(000292C0, __thiscall, 5388,  CDialog, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,1
	jne Block2

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block2:
	cmp eax,2
	jne Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx

 Block4:
	cmp eax,8
	jne Block6

 Block5:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],8
	jmp edx

 Block6:
	ret 4
}
}
// CDialog::OnKey
__SUB_CLASS_THIS(000FEAD0, __thiscall, 5386, IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	test dword ptr [esp+8],0x80000000
	push esi
	mov esi,ecx
	jne Block11

 Block1:
	mov eax,dword ptr [esp+8]
	cmp eax,9
	je Block10

 Block2:
	cmp eax,0xD
	je Block7

 Block3:
	cmp eax,0x1B
	jne Block11

 Block4:
	add esi,0xFFFFFFFC
	push 2
	mov ecx,esi
	call CWnd::GetChildItem
	test eax,eax
	je Block6

 Block5:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	call edx
	test eax,eax
	je Block11

 Block6:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 2
	mov ecx,esi
	call edx
	pop esi
	ret 8

 Block7:
	add esi,0xFFFFFFFC
	push 1
	mov ecx,esi
	call CWnd::GetChildItem
	test eax,eax
	je Block9

 Block8:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	call edx
	test eax,eax
	je Block11

 Block9:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 1
	mov ecx,esi
	call edx
	pop esi
	ret 8

 Block10:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0x10
	call CInputSystem::IsKeyPressed
	push eax
	lea ecx,[esi-4]
	call CDialog::ProcessTab

 Block11:
	pop esi
	ret 8
}
}
// CDialog::SetRet
__SUB_CLASS_THIS(00029290, __thiscall, 5385,  CDialog, void, long) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x84],0
	jne Block3

 Block1:
	cmp dword ptr [ecx+0x14],0
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0x80],eax
	mov dword ptr [ecx+0x84],1
	je Block3

 Block2:
	call CWnd::Destroy

 Block3:
	ret 4
}
}
// CDialog::HitTest
__SUB_CLASS_THIS(00029A30, __thiscall, 5387,  CDialog, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x10]
	push eax
	push ecx
	mov ecx,esi
	call CWnd::HitTest
	test eax,eax
	je Block5

 Block1:
	test edi,edi
	je Block3

 Block2:
	cmp dword ptr [edi],0
	jne Block5

 Block3:
	cmp dword ptr [esi+0x3C],0
	je Block5

 Block4:
	mov eax,1

 Block5:
	pop edi
	pop esi
	ret 0xC
}
}
// CDialog::CreateDlg
__SUB_CLASS_THIS(000FE6D0, __thiscall, 5379,  CDialog, void, long, long, long, long, long, int32_t, void*, CWnd::UIOrigin) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x1C]
	push eax
	mov eax,dword ptr [esp+0x1C]
	push 1
	push edx
	mov edx,dword ptr [esp+0x20]
	push eax
	mov eax,dword ptr [esp+0x20]
	push edx
	mov edx,dword ptr [esp+0x20]
	push eax
	mov eax,dword ptr [esp+0x20]
	push edx
	mov edx,dword ptr [esp+0x20]
	push eax
	push edx
	call CWnd::CreateWnd
	ret 0x20
}
}
// CDialog::CDialog
__SUB_CLASS_THIS0(000FE900, __thiscall, 5371,  CDialog, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CWnd::_ctor_default
	xor eax,eax
	mov dword ptr [esi+0x80],eax
	mov dword ptr [esi+0x84],eax
	int 3// TODO: 	mov dword ptr [esi],offset CDialog::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CDialog::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CDialog::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x8C],eax
	mov eax,esi
	pop esi
	ret
}
}
// CDialog::CreateDlg2
__SUB_CLASS_THIS(000FED10, __thiscall, 5382,  CDialog, void, const wchar_t*, long, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+8]
	push esi
	push edi
	push 0
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov edi,ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,edi
	call CWnd::SetBackgrnd
	mov esi,dword ptr [edi+0x78]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+8]
	push edx
	push esi
	mov dword ptr [esp+0x10],0
	call eax
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov esi,dword ptr [edi+0x78]
	test esi,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x10]
	push edx
	push esi
	mov dword ptr [esp+0x18],0
	call eax
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov ecx,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+8]
	mov eax,dword ptr [esp+0x18]
	push 0
	push 0
	push 1
	push 0xA
	push ecx
	mov ecx,dword ptr [esp+0x28]
	push edx
	push eax
	push ecx
	mov ecx,edi
	call CDialog::CreateDlg_0
	pop edi
	pop esi
	pop ecx
	ret 0xC
}
}
// CDialog::CreateDlgOnCenter
__SUB_CLASS_THIS(000FEDD0, __thiscall, 5383,  CDialog, void, const wchar_t*) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+8]
	push esi
	push edi
	push 0
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov edi,ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,edi
	call CWnd::SetBackgrnd
	mov esi,dword ptr [edi+0x78]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+8]
	push edx
	push esi
	mov dword ptr [esp+0x10],0
	call eax
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov esi,dword ptr [edi+0x78]
	test esi,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x10]
	push edx
	push esi
	mov dword ptr [esp+0x18],0
	call eax
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [esp+8]
	push 4
	push 0
	push 1
	push 0xA
	push eax
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push ecx
	push eax
	mov eax,ecx
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	mov ecx,edi
	call CDialog::CreateDlg_0
	pop edi
	pop esi
	pop ecx
	ret 4
}
}
// CDialog::GetRTTI
__SUB_CLASS_THIS0(0007A260, __thiscall, 5392,  CDialog, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CDialog::ms_RTTI_CDialog
	ret
}
}


// CUniqueModeless::GetRTTI
__SUB_CLASS_THIS0(00029A80, __thiscall, 5470,  CUniqueModeless, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUniqueModeless::ms_RTTI_CUniqueModeless
	ret
}
}
// CUniqueModeless::ResetInfo
__SUB_CLASS_THIS0(00029A70, __thiscall, 5466,  CUniqueModeless, void) {
__asm {

 Block0:
	ret
}
}
// CUniqueModeless::~CUniqueModeless
__SUB_CLASS_THIS0(000299B0, __thiscall, 5466,  CUniqueModeless, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CUniqueModeless::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [ecx+4],offset CUniqueModeless::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [ecx+8],offset CUniqueModeless::`vftable'{for `ZRefCounted'}
	mov dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	jmp  CDialog::~CDialog
}
}
// CUniqueModeless::IsKindOf
__SUB_CLASS_THIS(00029B30, __thiscall, 5471,  CUniqueModeless, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUniqueModeless::ms_RTTI_CUniqueModeless
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

// CUniqueModeless::CUniqueModeless
_SUB_EXCEPTION_HANDLER(FEB70)
__SUB_CLASS_THIS0(000FEB70, __thiscall, 5464,  CUniqueModeless, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_FEB70
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
	call CDialog::_ctor_default
	lea eax,[esi+0x91]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFF6F
	mov dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUniqueModeless::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUniqueModeless::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUniqueModeless::`vftable'{for `ZRefCounted'}
	mov ecx,dword ptr [TSingleton<CUIShopScanner>::ms_pInstance]
	mov byte ptr [esp+0x14],1
	test ecx,ecx
	je Block6

 Block4:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIShopScanner>::ms_pInstance]
	test eax,eax
	je Block6

 Block5:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block6:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}

// CUniqueModeless::SetRet
__SUB_CLASS_THIS(00029310, __thiscall, 5467,  CUniqueModeless, void, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x84],0
	jne Block3

 Block1:
	cmp dword ptr [esi+0x14],0
	mov eax,dword ptr [esp+8]
	mov dword ptr [esi+0x80],eax
	mov dword ptr [esi+0x84],1
	je Block3

 Block2:
	call CWnd::Destroy

 Block3:
	mov ecx,esi
	call CWnd::Destroy
	mov edx,dword ptr [esi+8]
	lea ecx,[esi+8]
	pop esi
	mov dword ptr [esp+4],1
	mov eax,dword ptr [edx]
	jmp eax
}
}
