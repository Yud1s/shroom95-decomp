#include "regen.hpp"
// RandomMorphDlg.ipp
#include "RandomMorphDlg.hpp"

// CUIRandomMorphDlg::IsKindOf
__SUB_CLASS_THIS(0061EAD0, __thiscall, 5514,  CUIRandomMorphDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIRandomMorphDlg::ms_RTTI_CUIRandomMorphDlg
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
// CUIRandomMorphDlg::GetRTTI
__SUB_CLASS_THIS0(0061EAB0, __thiscall, 5513,  CUIRandomMorphDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIRandomMorphDlg::ms_RTTI_CUIRandomMorphDlg
	ret
}
}
// CUIRandomMorphDlg::CUIRandomMorphDlg
_SUB_EXCEPTION_HANDLER(61EB20)
__SUB_CLASS_THIS(0061EB20, __thiscall, 5495,  CUIRandomMorphDlg, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61EB20
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
	call CUniqueModeless::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CUIRandomMorphDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIRandomMorphDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIRandomMorphDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xAC],edi
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x20]
	push edi
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov dword ptr [esi+0xB4],ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMGTRA
	mov byte ptr [esp+0x34],4
	mov dword ptr [esi+0xB0],eax
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0x83
	push 0x12C
	push 0xEA
	push 0xFA
	mov ecx,esi
	call CWnd::CreateWnd
	push edi
	mov ecx,esi
	call CWnd::InvalidateRect
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
// CUIRandomMorphDlg::ShowDlg
_SUB_EXCEPTION_HANDLER(61EC00)
__SUB(0061EC00, __cdecl, 5502,  void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61EC00
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	jne Block3

 Block1:
	push 0xB8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+4],eax
	mov dword ptr [esp+0x10],0
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x18]
	push ecx
	push edx
	mov ecx,eax
	call CUIRandomMorphDlg::_ctor_0

 Block3:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x10
	ret
}
}
// CUIRandomMorphDlg::OnCreate
_SUB_EXCEPTION_HANDLER(61EE20)
__SUB_CLASS_THIS(0061EE20, __thiscall, 5499,  CUIRandomMorphDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61EE20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x64]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	push offset _S_UIUIWINDOWIMGTRA__2
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x70],ebx
	mov dword ptr [esp+0x1C],ebx
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x6C],1
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov byte ptr [esp+0x6C],bl
	cmp eax,ebx
	je Block11

 Block4:
	add eax,8
	cmp eax,ebx
	je Block11

 Block5:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block7

 Block6:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0x9C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push 1
	push 0x64
	push 0x3C
	push ebx
	push esi
	call edx
	push offset _S_UIUIWINDOWIMGTRA__1
	lea ecx,[esp+0x28]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x6C],2
	cmp eax,ebx
	je Block12

 Block10:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block13

 Block11:
	xor edi,edi
	jmp Block7

 Block12:
	xor eax,eax

 Block13:
	mov byte ptr [esp+0x6C],bl
	cmp eax,ebx
	je Block21

 Block14:
	add eax,8
	cmp eax,ebx
	je Block21

 Block15:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block17

 Block16:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	mov eax,dword ptr [esi+0xA4]
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block19

 Block18:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block19:
	mov ecx,dword ptr [esi+0xA4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push 1
	push 0x64
	push 0xAA
	push 1
	push esi
	call edx
	lea ecx,[esp+0x28]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	mov eax,2
	xor ecx,ecx
	mov edx,eax
	mov edi,eax
	mov dword ptr [esp+0x30],ecx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x70],3
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x38],edx
	mov dword ptr [esp+0x3C],edi
	mov dword ptr [esp+0x5C],0xC
	mov dword ptr [esp+0x50],0xFFFFFFFF
	mov dword ptr [esp+0x48],0xFF000000
	mov dword ptr [esp+0x58],ebx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x6C],4
	cmp eax,ebx
	je Block22

 Block20:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block23

 Block21:
	xor edi,edi
	jmp Block17

 Block22:
	xor eax,eax

 Block23:
	mov byte ptr [esp+0x6C],3
	cmp eax,ebx
	je Block32

 Block24:
	add eax,8
	cmp eax,ebx
	je Block32

 Block25:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block27

 Block26:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block27:
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block29

 Block28:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block29:
	mov ecx,dword ptr [esi+0xAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x28]
	push eax
	push 0xE
	push 0xC8
	push 0x42
	push 0x54
	push 2
	push esi
	call edx
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x6C],bl
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp eax,ebx
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block31:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x60
	ret 4

 Block32:
	xor edi,edi
	jmp Block27
}
}
// CUIRandomMorphDlg::OnKey
__SUB_CLASS_THIS(0061F100, __thiscall, 5501,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	test eax,eax
	js Block7

 Block1:
	cmp edx,0xD
	je Block4

 Block2:
	cmp edx,0x1B
	jne Block7

 Block3:
	push 2
	add ecx,0xFFFFFFFC
	call CUIRandomMorphDlg::_CloseDlg
	ret 8

 Block4:
	push esi
	lea esi,[ecx-4]
	mov ecx,esi
	call CUIRandomMorphDlg::_SendMorphRequest
	test eax,eax
	je Block6

 Block5:
	push 1
	mov ecx,esi
	call CUIRandomMorphDlg::_CloseDlg

 Block6:
	pop esi
	ret 8

 Block7:
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+4],edx
	jmp  CDialog::OnKey
}
}
// CUIRandomMorphDlg::_SendMorphRequest
_SUB_EXCEPTION_HANDLER(61EC70)
__SUB_CLASS_THIS0(0061EC70, __thiscall, 5508,  CUIRandomMorphDlg, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61EC70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esi+0xAC]
	lea eax,[esp+0x10]
	push eax
	call CCtrlEdit::GetText
	lea ebx,[esi+0x94]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x34],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block9

 Block3:
	cmp dword ptr [eax-4],0
	jle Block9

 Block4:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test edi,edi
	je Block9

 Block5:
	cmp dword ptr [edi+0x20B8],0
	jne Block8

 Block6:
	mov eax,dword ptr [edi+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block8

 Block7:
	call get_update_time
	sub eax,dword ptr [edi+0x20BC]
	cmp eax,0x1F4
	jge Block10

 Block8:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x136
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block9:
	xor eax,eax
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret

 Block10:
	push 0xB8
	lea ecx,[esp+0x1C]
	call COutPacket::_ctor_1
	mov dword ptr [esp+0x30],1
	call get_update_time
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	movzx eax,word ptr [esi+0xB0]
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode2
	mov ecx,dword ptr [esi+0xB4]
	push ecx
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push ebx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x1C]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x18]
	push edx
	call CClientSocket::SendPacket
	mov dword ptr [edi+0x20B8],1
	call get_update_time
	lea ecx,[esp+0x1C]
	mov dword ptr [edi+0x20BC],eax
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,1
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret
}
}
// CUIRandomMorphDlg::Draw
_SUB_EXCEPTION_HANDLER(61E910)
__SUB_CLASS_THIS(0061E910, __thiscall, 5498,  CUIRandomMorphDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61E910
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
	mov edi,ecx
	lea eax,[esp+0xC]
	push eax
	call CWnd::GetCanvas
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+0x18],0
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push 0x83
	push 0x12C
	push 0
	push 0
	push esi
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [esp+0x20]
	push eax
	mov ecx,edi
	call CWnd::Draw
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CUIRandomMorphDlg::OnButtonClicked
__SUB_CLASS_THIS(0061F0B0, __thiscall, 5500,  CUIRandomMorphDlg, void, uint32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	mov eax,ecx
	sub eax,0
	je Block4

 Block1:
	sub eax,1
	je Block3

 Block2:
	push ecx
	mov ecx,esi
	call CDialog::OnButtonClicked
	pop esi
	ret 4

 Block3:
	push 2
	mov ecx,esi
	call CUIRandomMorphDlg::_CloseDlg
	pop esi
	ret 4

 Block4:
	mov ecx,esi
	call CUIRandomMorphDlg::_SendMorphRequest
	test eax,eax
	je Block6

 Block5:
	push 1
	mov ecx,esi
	call CUIRandomMorphDlg::_CloseDlg

 Block6:
	pop esi
	ret 4
}
}
// CUIRandomMorphDlg::~CUIRandomMorphDlg
_SUB_EXCEPTION_HANDLER(61E9C0)
__SUB_CLASS_THIS0(0061E9C0, __thiscall, 5497,  CUIRandomMorphDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61E9C0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIRandomMorphDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIRandomMorphDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIRandomMorphDlg::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0xA8]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	mov eax,dword ptr [esi+0x94]
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	int 3// TODO: 	mov dword ptr [esi],offset CUniqueModeless::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUniqueModeless::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUniqueModeless::`vftable'{for `ZRefCounted'}
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	mov dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],ebx
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
// CUIRandomMorphDlg::_CloseDlg
__SUB_CLASS_THIS(0061E8C0, __thiscall, 5509,  CUIRandomMorphDlg, void, int32_t) {
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
