#include "regen.hpp"
// NewYearCardSenderDlg.ipp
#include "NewYearCardSenderDlg.hpp"

// CUINewYearCardSenderDlg::GetRTTI
__SUB_CLASS_THIS0(0061D1B0, __thiscall, 15177,  CUINewYearCardSenderDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUINewYearCardSenderDlg::ms_RTTI_CUINewYearCardSenderDlg
	ret
}
}
// CNewYearCardReceiverSearchResult::OnMouseLButtonClk
__SUB_CLASS_THIS(0061D010, __thiscall, 15141,  CNewYearCardReceiverSearchResult, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x170
	push ebx
	push ebp
	push esi
	push edi
	mov ebx,ecx
	jl Block14

 Block1:
	cmp eax,0x1E8
	jg Block14

 Block2:
	mov ebp,dword ptr [esp+0x18]
	cmp ebp,0x18
	jl Block14

 Block3:
	cmp ebp,0x63
	jg Block14

 Block4:
	mov eax,dword ptr [ebx]
	test eax,eax
	jne Block6

 Block5:
	mov dword ptr [esp+0x14],eax
	jmp Block7

 Block6:
	mov eax,dword ptr [eax-4]
	mov dword ptr [esp+0x14],eax

 Block7:
	call CNewYearCardReceiverSearchResult::_GetTopItemIndex
	mov edi,eax
	mov esi,0x19

 Block8:
	cmp edi,dword ptr [esp+0x14]
	jae Block15

 Block9:
	cmp ebp,esi
	jl Block12

 Block10:
	lea ecx,[esi+0xD]
	cmp ebp,ecx
	jg Block12

 Block11:
	mov edx,dword ptr [ebx]
	push ecx
	lea eax,[edx+edi*4]
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [ebx+4]
	call CUINewYearCardSenderDlg::SetSearchName

 Block12:
	add esi,0xF
	inc edi
	cmp esi,0x64
	jb Block8

 Block13:
	xor eax,eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8

 Block14:
	mov dword ptr [ebx+0x14],0xFFFFFFFF

 Block15:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret 8
}
}
// CNewYearCardReceiverSearchResult::_InvalidateRect
__SUB_CLASS_THIS0(0061CBB0, __thiscall, 15134,  CNewYearCardReceiverSearchResult, void) {
__asm {

 Block0:
	sub esp,0x10
	mov ecx,dword ptr [ecx+4]
	lea eax,[esp]
	push eax
	mov dword ptr [esp+4],0x170
	mov dword ptr [esp+8],0x18
	mov dword ptr [esp+0xC],0x1E8
	mov dword ptr [esp+0x10],0x63
	call CWnd::InvalidateRect
	add esp,0x10
	ret
}
}
// CNewYearCardReceiverSearchResult::_ClearHighlight
__SUB_CLASS_THIS0(0061CBF0, __thiscall, 15134,  CNewYearCardReceiverSearchResult, void) {
__asm {

 Block0:
	mov dword ptr [ecx+0x14],0xFFFFFFFF
	jmp  CNewYearCardReceiverSearchResult::_InvalidateRect
}
}
// CUINewYearCardSenderDlg::OnMouseButton
__SUB_CLASS_THIS(0061D200, __thiscall, 15161,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	cmp byte ptr [ecx+0xD4],0
	je Block2

 Block1:
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]
	mov ecx,dword ptr [ecx+0xD0]
	push eax
	push edx
	call CNewYearCardReceiverSearchResult::OnMouseLButtonClk

 Block2:
	ret 0x10
}
}
// CUINewYearCardSenderDlg::HitTest
__SUB_CLASS_THIS(0061CE50, __thiscall, 15163,  CUINewYearCardSenderDlg, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0x10]
	push ebp
	mov ebp,dword ptr [esp+0x10]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	push ebx
	push ebp
	push edi
	mov esi,ecx
	call CWnd::HitTest
	sub eax,0
	je Block17

 Block1:
	sub eax,1
	je Block12

 Block2:
	sub eax,1
	jne Block20

 Block3:
	test ebx,ebx
	je Block7

 Block4:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block7

 Block5:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x28]
	call edx
	test eax,eax
	mov eax,2
	jne Block21

 Block6:
	pop edi
	pop esi
	pop ebp
	mov dword ptr [ebx],0
	pop ebx
	ret 0xC

 Block7:
	test edi,edi
	jl Block11

 Block8:
	cmp edi,0x166
	jg Block11

 Block9:
	test ebp,ebp
	jl Block11

 Block10:
	cmp ebp,0xBC
	jle Block16

 Block11:
	pop edi
	pop esi
	pop ebp
	mov eax,2
	pop ebx
	ret 0xC

 Block12:
	test edi,edi
	jl Block20

 Block13:
	cmp edi,0x166
	jg Block20

 Block14:
	test ebp,ebp
	jl Block20

 Block15:
	cmp ebp,0xBC
	jg Block20

 Block16:
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	ret 0xC

 Block17:
	cmp byte ptr [esi+0xD8],0
	je Block20

 Block18:
	mov ecx,dword ptr [esi+0xD4]
	push ebp
	push edi
	call CNewYearCardReceiverSearchResult::HitTest
	test eax,eax
	jne Block21

 Block19:
	pop edi
	pop esi
	pop ebp
	mov dword ptr [ebx],eax
	pop ebx
	ret 0xC

 Block20:
	xor eax,eax

 Block21:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0xC
}
}
// CUINewYearCardSenderDlg::~CUINewYearCardSenderDlg
_SUB_EXCEPTION_HANDLER(61E6D0)
__SUB_CLASS_THIS0(0061E6D0, __thiscall, 15157,  CUINewYearCardSenderDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61E6D0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUINewYearCardSenderDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewYearCardSenderDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewYearCardSenderDlg::`vftable'{for `ZRefCounted'}
	mov ecx,dword ptr [esi+0xD4]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],8
	cmp ecx,ebx
	je Block2

 Block1:
	push 1
	call CNewYearCardReceiverSearchResult::scaling_deleting_dtor

 Block2:
	lea edi,[esi+0xC4]
	mov byte ptr [esp+0x1C],7
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xBC]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlMLEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xB4]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xAC]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0xA4]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	mov eax,dword ptr [esi+0x98]
	mov byte ptr [esp+0x1C],1
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esi+0x94]
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
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
// CUINewYearCardSenderDlg::_CloseDlg
__SUB_CLASS_THIS(0061CC70, __thiscall, 15170,  CUINewYearCardSenderDlg, void, int32_t) {
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
// CUINewYearCardSenderDlg::OnChildNotify
__SUB_CLASS_THIS(0061CC30, __thiscall, 15165,  CUINewYearCardSenderDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,5
	jne Block4

 Block1:
	cmp edx,0x12C
	jb Block4

 Block2:
	cmp edx,0x130
	ja Block4

 Block3:
	mov ecx,dword ptr [ecx+0xD4]
	call CNewYearCardReceiverSearchResult::_InvalidateRect
	ret 0xC

 Block4:
	cmp edx,0x64
	jne Block6

 Block5:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax

 Block6:
	ret 0xC
}
}
// CUINewYearCardSenderDlg::_SearchFromGuildList
_SUB_EXCEPTION_HANDLER(61D5F0)
__SUB_CLASS_THIS(0061D5F0, __thiscall, 15173,  CUINewYearCardSenderDlg, long, NakedParam<ZXString<char>>, ZArray<ZXString<char> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61D5F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x38],eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x64]
	mov dword ptr [esp+0x20],eax
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	xor ebx,ebx
	mov dword ptr [esp+0x58],ebx
	cmp eax,ebx
	jne Block4

 Block1:
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	xor eax,eax
	jmp Block18

 Block4:
	mov edi,eax
	cmp dword ptr [edi+0x20B4],ebx
	je Block1

 Block5:
	cmp dword ptr [edi+0x37C8],ebx
	je Block1

 Block6:
	mov ecx,edi
	mov dword ptr [esp+0x18],ebx
	xor ebp,ebp
	call CWvsContext::GetGuildMemberNum
	test eax,eax
	jle Block15

 Block7:
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x20]
	push edx
	push ebp
	mov ecx,edi
	call CWvsContext::GetGuildMemberDataByIdx
	cmp dword ptr [esp+0x1C],ebx
	je Block14

 Block8:
	lea eax,[esp+0x24]
	mov dword ptr [esp+0x14],ebx
	lea edx,[eax+1]
	lea ebx,[ebx]

 Block9:
	mov cl,byte ptr [eax]
	inc eax
	cmp cl,bl
	jne Block9

 Block10:
	sub eax,edx
	mov esi,eax
	push esi
	lea eax,[esp+0x28]
	push eax
	push ebx
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	mov ecx,dword ptr [esp+0x60]
	push ebx
	push ebx
	push ecx
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x64],1
	call ZXString<char>::Find__0
	test eax,eax
	jl Block12

 Block11:
	mov ecx,dword ptr [esp+0x20]
	lea edx,[esp+0x14]
	push edx
	push 0xFFFFFFFF
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	inc dword ptr [esp+0x18]

 Block12:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x58],bl
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov ecx,edi
	inc ebp
	call CWvsContext::GetGuildMemberNum
	cmp ebp,eax
	jl Block7

 Block15:
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov eax,dword ptr [esp+0x18]

 Block18:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov ecx,dword ptr [esp+0x38]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x48
	ret 8
}
}
// CUINewYearCardSenderDlg::OnMouseMove
__SUB_CLASS_THIS(0061CE20, __thiscall, 15162,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	cmp byte ptr [ecx+0xD4],0
	je Block2

 Block1:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	mov ecx,dword ptr [ecx+0xD0]
	push eax
	push edx
	call CNewYearCardReceiverSearchResult::OnMouseMove

 Block2:
	xor eax,eax
	ret 8
}
}
// CUINewYearCardSenderDlg::_SendNewYearCard
_SUB_EXCEPTION_HANDLER(61D2A0)
__SUB_CLASS_THIS0(0061D2A0, __thiscall, 15169,  CUINewYearCardSenderDlg, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61D2A0
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
	mov ecx,dword ptr [esi+0xB8]
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
	mov ecx,dword ptr [esi+0xC0]
	lea edx,[esp+0x14]
	push edx
	call CCtrlMLEdit::GetText
	lea edi,[esi+0x98]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x34],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block6

 Block5:
	cmp dword ptr [eax-4],0
	jg Block8

 Block6:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x1310
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,7
	jne Block8

 Block7:
	xor eax,eax
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret

 Block8:
	cmp dword ptr [TSingleton<CWvsContext>::ms_pInstance],0
	je Block7

 Block9:
	push 0xB7
	lea ecx,[esp+0x1C]
	call COutPacket::_ctor_1
	push 0
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x34],2
	call COutPacket::Encode1
	movzx ecx,word ptr [esi+0xCC]
	push ecx
	lea ecx,[esp+0x1C]
	call COutPacket::Encode2
	mov edx,dword ptr [esi+0xD0]
	push edx
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x14],esp
	push ebx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x1C]
	call COutPacket::EncodeStr
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x14],esp
	push edi
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x1C]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x1C]
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
// CUINewYearCardSenderDlg::CUINewYearCardSenderDlg
_SUB_EXCEPTION_HANDLER(61D0B0)
__SUB_CLASS_THIS(0061D0B0, __thiscall, 15155,  CUINewYearCardSenderDlg, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61D0B0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0xC],esi
	call CUniqueModeless::_ctor_default
	xor ebx,ebx
	int 3// TODO: 	mov dword ptr [esi],offset CUINewYearCardSenderDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewYearCardSenderDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewYearCardSenderDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esi+0x94],ebx
	mov dword ptr [esi+0x98],ebx
	mov dword ptr [esi+0xA0],ebx
	mov dword ptr [esi+0xA8],ebx
	mov dword ptr [esi+0xB0],ebx
	mov dword ptr [esi+0xB8],ebx
	mov dword ptr [esi+0xC0],ebx
	mov dword ptr [esi+0xC8],ebx
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x20]
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov dword ptr [esi+0xD0],ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMGNEW
	mov byte ptr [esp+0x34],8
	mov dword ptr [esi+0xCC],eax
	mov dword ptr [esi+0xD4],ebx
	mov byte ptr [esi+0xD8],bl
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	push ebx
	push 1
	push ebx
	push 1
	push 0xA
	push 0xBC
	push 0x206
	push 0xCE
	push 0xDD
	mov ecx,esi
	call CWnd::CreateWnd
	push ebx
	mov ecx,esi
	call CWnd::InvalidateRect
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret 8
}
}
// CNewYearCardReceiverSearchResult::SetUp
__SUB_CLASS_THIS(0061CFB0, __thiscall, 15138,  CNewYearCardReceiverSearchResult, void, const ZArray<ZXString<char> >&) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	push edi
	mov ebx,ecx
	call ZArray<ZXString<char>>::RemoveAll
	mov ebp,dword ptr [esp+0x14]
	mov eax,dword ptr [ebp]
	test eax,eax
	jne Block2

 Block1:
	xor edi,edi
	jmp Block3

 Block2:
	mov edi,dword ptr [eax-4]

 Block3:
	xor esi,esi
	test edi,edi
	jbe Block5

 Block4:
	mov eax,dword ptr [ebp]
	lea eax,[eax+esi*4]
	push eax
	push 0xFFFFFFFF
	mov ecx,ebx
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	inc esi
	cmp esi,edi
	jb Block4

 Block5:
	mov ecx,dword ptr [ebx+4]
	mov ecx,dword ptr [ecx+0xC8]
	add edi,0xFFFFFFFB
	push edi
	call CCtrlScrollBar::SetScrollRange
	mov ecx,ebx
	call CNewYearCardReceiverSearchResult::_InvalidateRect
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// CNewYearCardReceiverSearchResult::HitTest
__SUB_CLASS_THIS(0061CDC0, __thiscall, 15141,  CNewYearCardReceiverSearchResult, int32_t, long, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	cmp ecx,0x170
	jl Block6

 Block1:
	cmp ecx,0x1E8
	jg Block6

 Block2:
	mov eax,dword ptr [esp+0xC]
	cmp eax,0x18
	jl Block6

 Block3:
	cmp eax,0x63
	jg Block6

 Block4:
	push edi
	push eax
	push ecx
	mov ecx,esi
	call CNewYearCardReceiverSearchResult::_GetSelection
	mov ecx,esi
	mov edi,eax
	call CNewYearCardReceiverSearchResult::_GetTopItemIndex
	sub edi,eax
	pop edi
	jns Block7

 Block5:
	mov ecx,esi
	call CNewYearCardReceiverSearchResult::_ClearHighlight
	mov eax,1
	pop esi
	ret 8

 Block6:
	mov ecx,esi
	call CNewYearCardReceiverSearchResult::_ClearHighlight

 Block7:
	xor eax,eax
	pop esi
	ret 8
}
}
// CUINewYearCardSenderDlg::Draw
_SUB_EXCEPTION_HANDLER(61DF50)
__SUB_CLASS_THIS(0061DF50, __thiscall, 15158,  CUINewYearCardSenderDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61DF50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	lea eax,[esp+0x10]
	push eax
	call CWnd::GetCanvas
	mov ebp,dword ptr [esp+0x10]
	mov dword ptr [esp+0x24],0
	test ebp,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push 0xBC
	push 0x206
	push 0
	push 0
	push ebp
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block4:
	cmp byte ptr [edi+0xD8],0
	je Block9

 Block5:
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call CWnd::GetCanvas
	mov esi,dword ptr [esp+0x14]
	push ecx
	mov eax,esp
	mov byte ptr [esp+0x28],1
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block7

 Block6:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block7:
	mov ecx,dword ptr [edi+0xD4]
	call CNewYearCardReceiverSearchResult::Draw
	mov byte ptr [esp+0x24],0
	test esi,esi
	je Block9

 Block8:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block9:
	mov edx,dword ptr [esp+0x2C]
	push edx
	mov ecx,edi
	call CWnd::Draw
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x18
	ret 4
}
}
// CNewYearCardReceiverSearchResult::_GetSelection
__SUB_CLASS_THIS(0061CD20, __thiscall, 15144,  CNewYearCardReceiverSearchResult, long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x170
	push esi
	push edi
	jl Block12

 Block1:
	cmp eax,0x1E8
	jg Block12

 Block2:
	mov esi,dword ptr [esp+0x10]
	cmp esi,0x18
	jl Block12

 Block3:
	cmp esi,0x63
	jg Block12

 Block4:
	mov eax,dword ptr [ecx]
	test eax,eax
	jne Block6

 Block5:
	xor edi,edi
	jmp Block7

 Block6:
	mov edi,dword ptr [eax-4]

 Block7:
	call CNewYearCardReceiverSearchResult::_GetTopItemIndex
	mov ecx,0x19
	lea esp,[esp]

 Block8:
	cmp eax,edi
	jae Block12

 Block9:
	cmp esi,ecx
	jl Block11

 Block10:
	lea edx,[ecx+0xD]
	cmp esi,edx
	jle Block13

 Block11:
	add ecx,0xF
	inc eax
	cmp ecx,0x64
	jb Block8

 Block12:
	or eax,0xFFFFFFFF

 Block13:
	pop edi
	pop esi
	ret 8
}
}
// CUINewYearCardSenderDlg::IsKindOf
__SUB_CLASS_THIS(0061D1D0, __thiscall, 15178,  CUINewYearCardSenderDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUINewYearCardSenderDlg::ms_RTTI_CUINewYearCardSenderDlg
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
// CUINewYearCardSenderDlg::OnCreate
_SUB_EXCEPTION_HANDLER(61E050)
__SUB_CLASS_THIS(0061E050, __thiscall, 15159,  CUINewYearCardSenderDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61E050
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x8C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xA0]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0x18
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	xor ebp,ebp
	mov dword ptr [esp+0xA8],ebp
	cmp eax,ebp
	je Block2

 Block1:
	push esi
	mov ecx,eax
	call CNewYearCardReceiverSearchResult::_ctor_0
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov dword ptr [esi+0xD4],eax
	mov dword ptr [esp+0x28],ebp
	mov dword ptr [esp+0x20],ebp
	mov dword ptr [esp+0x24],ebp
	push offset _S_UIUIWINDOWIMGNEW__4
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0xAC],1
	mov dword ptr [esp+0x20],ebp
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xA8],2
	cmp eax,ebp
	je Block5

 Block4:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	mov byte ptr [esp+0xA8],1
	cmp eax,ebp
	je Block10

 Block7:
	add eax,8
	cmp eax,ebp
	je Block10

 Block8:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block11

 Block9:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	lea eax,[edi+0xC]
	push eax
	call ebx
	jmp Block12

 Block10:
	xor edi,edi

 Block11:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]

 Block12:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block14

 Block13:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block14:
	mov ecx,dword ptr [esi+0xA0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0x41
	push 0x127
	push ebp
	push esi
	call edx
	push offset _S_UIUIWINDOWIMGNEW__3
	lea ecx,[esp+0x2C]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xA8],3
	cmp eax,ebp
	je Block16

 Block15:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block17

 Block16:
	xor eax,eax

 Block17:
	mov byte ptr [esp+0xA8],1
	cmp eax,ebp
	je Block25

 Block18:
	add eax,8
	cmp eax,ebp
	je Block25

 Block19:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block21

 Block20:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block21:
	mov eax,dword ptr [esi+0xA8]
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block23

 Block22:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [esi+0xA8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0xA4
	push 0x7C
	push 1
	push esi
	call edx
	push offset _S_UIUIWINDOWIMGNEW__2
	lea ecx,[esp+0x2C]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xA8],4
	cmp eax,ebp
	je Block26

 Block24:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block27

 Block25:
	xor edi,edi
	jmp Block21

 Block26:
	xor eax,eax

 Block27:
	mov byte ptr [esp+0xA8],1
	cmp eax,ebp
	je Block35

 Block28:
	add eax,8
	cmp eax,ebp
	je Block35

 Block29:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block31

 Block30:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block31:
	mov eax,dword ptr [esi+0xB0]
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block33

 Block32:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block33:
	mov ecx,dword ptr [esi+0xB0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0xA4
	push 0xB5
	push 2
	push esi
	call edx
	lea ecx,[esp+0x64]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	mov eax,2
	xor ecx,ecx
	mov edx,eax
	mov edi,eax
	mov dword ptr [esp+0x6C],ecx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0xAC],5
	mov dword ptr [esp+0x6C],eax
	mov dword ptr [esp+0x74],edx
	mov dword ptr [esp+0x78],edi
	mov dword ptr [esp+0x98],0xC
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	mov dword ptr [esp+0x84],0xFF000000
	mov dword ptr [esp+0x94],ebp
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xA8],6
	cmp eax,ebp
	je Block36

 Block34:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block37

 Block35:
	xor edi,edi
	jmp Block31

 Block36:
	xor eax,eax

 Block37:
	mov byte ptr [esp+0xA8],5
	cmp eax,ebp
	je Block45

 Block38:
	add eax,8
	cmp eax,ebp
	je Block45

 Block39:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block41

 Block40:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block41:
	mov eax,dword ptr [esi+0xB8]
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block43

 Block42:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block43:
	mov ecx,dword ptr [esi+0xB8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x64]
	push eax
	push 0xF
	push 0xF3
	push 0x42
	push 0x2E
	push 3
	push esi
	call edx
	lea ecx,[esp+0x2C]
	call CCtrlMLEdit::CREATEPARAM::_ctor_default
	mov ecx,1
	mov eax,2
	mov dword ptr [esp+0x34],ecx
	mov ebx,7
	push offset _S_
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0xAC],bl
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x58],0x78
	mov dword ptr [esp+0x5C],0x143
	mov dword ptr [esp+0x60],3
	mov dword ptr [esp+0x40],0xE
	mov dword ptr [esp+0x54],ebp
	call ZXString<char>::AssignCStr
	push 0xCC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xA8],8
	cmp eax,ebp
	je Block46

 Block44:
	mov ecx,eax
	call CCtrlMLEdit::_ctor_default
	jmp Block47

 Block45:
	xor edi,edi
	jmp Block41

 Block46:
	xor eax,eax

 Block47:
	mov byte ptr [esp+0xA8],bl
	cmp eax,ebp
	je Block55

 Block48:
	add eax,8
	cmp eax,ebp
	je Block55

 Block49:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block51

 Block50:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block51:
	mov eax,dword ptr [esi+0xC0]
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block53

 Block52:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlMLEdit>::_ReleaseRaw

 Block53:
	mov ecx,dword ptr [esi+0xC0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x2C]
	push eax
	push 0x2D
	push 0x14D
	push 0x69
	push 0xD
	push 4
	push esi
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xA8],9
	cmp eax,ebp
	je Block56

 Block54:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block57

 Block55:
	xor edi,edi
	jmp Block51

 Block56:
	xor eax,eax

 Block57:
	mov byte ptr [esp+0xA8],bl
	cmp eax,ebp
	je Block70

 Block58:
	add eax,8
	cmp eax,ebp
	je Block70

 Block59:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block61

 Block60:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block61:
	mov eax,dword ptr [esi+0xC8]
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block63

 Block62:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block63:
	mov ecx,dword ptr [esi+0xC8]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push ebp
	push 0x5D
	push ebx
	push 0x1F2
	push 3
	push 1
	push 5
	push esi
	call eax
	mov eax,dword ptr [esi+0xC8]
	mov dword ptr [eax+0x34],0x64
	mov ecx,dword ptr [esi+0xC8]
	push 0x64
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [esi+0xC8]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x24]
	lea ecx,[eax+4]
	movzx eax,byte ptr [esi+0xD8]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x38]
	mov byte ptr [esp+0xA8],5
	cmp ecx,ebp
	je Block65

 Block64:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x38],ebp

 Block65:
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	je Block67

 Block66:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block67:
	lea ecx,[esp+0x64]
	mov byte ptr [esp+0xA8],1
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0xA8],0xFFFFFFFF
	cmp eax,ebp
	je Block69

 Block68:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block69:
	mov ecx,dword ptr [esp+0xA0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x98
	ret 4

 Block70:
	xor edi,edi
	jmp Block61
}
}
// CNewYearCardReceiverSearchResult::CNewYearCardReceiverSearchResult
_SUB_EXCEPTION_HANDLER(61D780)
__SUB_CLASS_THIS(0061D780, __thiscall, 15132,  CNewYearCardReceiverSearchResult, void, CUINewYearCardSenderDlg*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61D780
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
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	xor ebx,ebx
	mov dword ptr [esi],ebx
	mov eax,dword ptr [esp+0x6C]
	lea ebp,[esi+8]
	mov dword ptr [esi+4],eax
	mov dword ptr [esp+0x64],ebx
	mov dword ptr [ebp],ebx
	mov dword ptr [esi+0xC],ebx
	mov dword ptr [esi+0x10],ebx
	lea ecx,[esp+0x6C]
	push 0x3D0
	push ecx
	mov byte ptr [esp+0x6C],3
	mov dword ptr [esi+0x14],0xFFFFFFFF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	push ebp
	push eax
	mov byte ptr [esp+0x70],4
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x78]
	add esp,0xC
	mov byte ptr [esp+0x64],3
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push edx
	call edi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea ecx,[esp+0x1C]
	mov bl,5
	push ecx
	mov byte ptr [esp+0x68],bl
	call edi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x64],6
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x2C]
	push eax
	lea edx,[esp+0x20]
	push edx
	push 0x6A
	push 0xA5
	call IWzCanvas::Create
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x64],bl
	jne Block15

 Block9:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block11:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block12:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x64],3
	jne Block16

 Block13:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block17

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block15:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x1C]
	push ecx
	call ebx
	jmp Block12

 Block16:
	lea eax,[esp+0x2C]
	push eax
	call ebx

 Block17:
	lea ecx,[esp+0x1C]
	push ecx
	call edi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x68],7
	call edi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	push 0
	push 0
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x38]
	push eax
	push ecx
	mov dword ptr [esp+0x80],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMGNEW__1
	mov byte ptr [esp+0x7C],8
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],9
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0x7C],8
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0xA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x70]
	mov dword ptr [esp+0x70],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block26

 Block24:
	cmp eax,0x80004002
	je Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	mov edi,8
	mov byte ptr [esp+0x64],0xC
	cmp word ptr [esp+0x4C],di
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[esp+0x4C]
	push eax
	call ebx

 Block30:
	mov byte ptr [esp+0x64],0xD
	cmp word ptr [esp+0x2C],di
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x2C]
	push edx
	call ebx

 Block34:
	mov edi,8
	mov bl,0xE
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x1C],di
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block45

 Block39:
	mov edx,3
	mov word ptr [esp+0x3C],dx
	mov dword ptr [esp+0x44],0xFF
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x64],0xF
	test ecx,ecx
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	lea edx,[esp+0x3C]
	push edx
	push eax
	push 0
	push 0
	call IWzCanvas::Copy
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x3C],di
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	lea edx,[esp+0x14]
	push 1
	push edx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xC]
	add esp,8
	cmp edi,eax
	je Block50

 Block46:
	mov dword ptr [esi+0xC],eax
	test eax,eax
	je Block48

 Block47:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block48:
	test edi,edi
	je Block50

 Block49:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block50:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block52

 Block51:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block52:
	lea ecx,[esp+0x14]
	push 3
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x10]
	add esp,8
	cmp edi,eax
	je Block57

 Block53:
	mov dword ptr [esi+0x10],eax
	test eax,eax
	je Block55

 Block54:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block55:
	test edi,edi
	je Block57

 Block56:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block57:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block59

 Block58:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block59:
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x64],3
	test eax,eax
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov eax,esi
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret 4
}
}
// CNewYearCardReceiverSearchResult::Draw
_SUB_EXCEPTION_HANDLER(61DB90)
__SUB_CLASS_THIS(0061DB90, __thiscall, 15140,  CNewYearCardReceiverSearchResult, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61DB90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x60]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,3
	mov edx,0xFF
	mov dword ptr [esp+0x68],0
	mov word ptr [esp+0x20],ax
	mov dword ptr [esp+0x28],edx
	mov ecx,dword ptr [esp+0x70]
	mov edi,dword ptr [esi+8]
	mov byte ptr [esp+0x68],1
	test ecx,ecx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ebx,dword ptr [esp+0x20]
	mov ebp,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x34]
	mov dword ptr [eax+4],ebx
	push edi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
	xor ebx,ebx
	push ebx
	push 0x161
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x80]
	push ecx
	mov dword ptr [esp+0x38],ecx
	call eax
	cmp eax,ebx
	jge Block4

 Block3:
	mov ecx,dword ptr [esp+0x18]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block4:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x68],bl
	jne Block7

 Block5:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	cmp eax,ebx
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	jne Block10

 Block9:
	mov dword ptr [esp+0x18],ebx
	jmp Block11

 Block10:
	mov ecx,dword ptr [eax-4]
	mov dword ptr [esp+0x18],ecx

 Block11:
	mov ecx,esi
	call CNewYearCardReceiverSearchResult::_GetTopItemIndex
	mov dword ptr [esp+0x14],ebx
	mov edi,eax
	mov ebp,0x18
	mov ebx,0xFF

 Block12:
	cmp edi,dword ptr [esp+0x18]
	jae Block36

 Block13:
	mov edx,dword ptr [esp+0x14]
	cmp edx,dword ptr [esi+0x14]
	jne Block23

 Block14:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block39

 Block15:
	mov edx,3
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],ebx
	lea eax,[esp+0x30]
	push eax
	mov eax,dword ptr [esi+0x10]
	lea ecx,[esp+0x24]
	push ecx
	push eax
	mov byte ptr [esp+0x74],dl
	mov edx,dword ptr [esi]
	lea eax,[edx+edi*4]
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x80]
	mov byte ptr [esp+0x78],4
	test ecx,ecx
	je Block1

 Block16:
	push ebp
	push 0x170
	mov byte ptr [esp+0x80],3
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x68],2
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x68],0
	jne Block22

 Block21:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	jmp Block31

 Block22:
	lea eax,[esp+0x30]
	push eax
	jmp Block34

 Block23:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block39

 Block24:
	mov eax,3
	mov word ptr [esp+0x40],ax
	mov dword ptr [esp+0x48],ebx
	mov eax,dword ptr [esi+0xC]
	lea ecx,[esp+0x50]
	push ecx
	lea edx,[esp+0x44]
	push edx
	push eax
	mov eax,dword ptr [esi]
	push ecx
	lea eax,[eax+edi*4]
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x7C],6
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x80]
	mov byte ptr [esp+0x78],7
	test ecx,ecx
	je Block1

 Block25:
	push ebp
	push 0x170
	mov byte ptr [esp+0x80],6
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x68],5
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x68],0
	jne Block33

 Block30:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]

 Block31:
	test eax,eax
	je Block35

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block33:
	lea ecx,[esp+0x50]
	push ecx

 Block34:
	call dword ptr [ZImports::_VariantClear]

 Block35:
	inc dword ptr [esp+0x14]
	add ebp,0xF
	inc edi
	cmp ebp,0x63
	jb Block12

 Block36:
	mov eax,dword ptr [esp+0x70]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test eax,eax
	je Block38

 Block37:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block38:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 4

 Block39:
	push eax
	call _com_issue_error
}
}
// CUINewYearCardSenderDlg::OnKey
__SUB_CLASS_THIS(0061CC00, __thiscall, 15164,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	test eax,eax
	js Block3

 Block1:
	cmp edx,0xD
	je Block4

 Block2:
	cmp edx,0x1B
	je Block4

 Block3:
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+4],edx
	jmp  CDialog::OnKey

 Block4:
	ret 8
}
}
// CUINewYearCardSenderDlg::_DoSearch
_SUB_EXCEPTION_HANDLER(61E5D0)
__SUB_CLASS_THIS0(0061E5D0, __thiscall, 15157,  CUINewYearCardSenderDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61E5D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0xC],0
	mov ecx,dword ptr [esi+0xB8]
	lea eax,[esp+0x10]
	push eax
	mov dword ptr [esp+0x24],0
	call CCtrlEdit::GetText
	lea edi,[esi+0x94]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x24],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0xC]
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push edi
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call CUINewYearCardSenderDlg::_SearchFromFriendList
	lea edx,[esp+0xC]
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push edi
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call CUINewYearCardSenderDlg::_SearchFromGuildList
	mov ecx,dword ptr [esi+0xD4]
	lea eax,[esp+0xC]
	push eax
	call CNewYearCardReceiverSearchResult::SetUp
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block4

 Block3:
	mov eax,dword ptr [eax-4]

 Block4:
	mov esi,dword ptr [esi+0xC8]
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x34],eax
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<ZXString<char>>::RemoveAll
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret
}
}
// CUINewYearCardSenderDlg::_SearchFromFriendList
_SUB_EXCEPTION_HANDLER(61D460)
__SUB_CLASS_THIS(0061D460, __thiscall, 15173,  CUINewYearCardSenderDlg, long, NakedParam<ZXString<char>>, ZArray<ZXString<char> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61D460
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx
	cmp eax,ebx
	jne Block4

 Block1:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	xor eax,eax
	jmp Block27

 Block4:
	cmp dword ptr [eax+0x20B4],ebx
	je Block1

 Block5:
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x18],ebx
	lea ebp,[eax+0x3788]
	xor edi,edi

 Block6:
	mov esi,dword ptr [ebp]
	mov ecx,esi
	call CWvsContext::CFriend::IsDataTwisted
	mov esi,dword ptr [esi]
	cmp esi,ebx
	jne Block8

 Block7:
	xor esi,esi
	jmp Block9

 Block8:
	mov esi,dword ptr [esi-4]

 Block9:
	cmp dword ptr [esp+0x18],esi
	jge Block24

 Block10:
	mov eax,dword ptr [ebp]
	mov eax,dword ptr [eax]
	add eax,edi
	cmp dword ptr [eax],ebx
	je Block23

 Block11:
	mov cl,byte ptr [eax+0x11]
	cmp cl,bl
	je Block15

 Block12:
	cmp cl,3
	je Block15

 Block13:
	cmp cl,4
	je Block15

 Block14:
	cmp cl,2
	jne Block23

 Block15:
	lea ecx,[eax+4]
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	cmp ecx,ebx
	je Block19

 Block16:
	mov eax,ecx
	lea esi,[eax+1]
	lea ecx,[ecx]

 Block17:
	mov dl,byte ptr [eax]
	inc eax
	cmp dl,bl
	jne Block17

 Block18:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
	push ebx
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [esp+0x14]

 Block19:
	mov eax,dword ptr [esp+0x30]
	push ebx
	push ebx
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x34],1
	call ZXString<char>::Find__0
	test eax,eax
	jl Block21

 Block20:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [esp+0x38]
	push 0xFFFFFFFF
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	inc dword ptr [esp+0x1C]

 Block21:
	mov byte ptr [esp+0x28],bl
	cmp esi,ebx
	je Block23

 Block22:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block23:
	inc dword ptr [esp+0x18]
	add edi,0x27
	jmp Block6

 Block24:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov eax,dword ptr [esp+0x1C]

 Block27:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 8
}
}
// CUINewYearCardSenderDlg::SetSearchName
_SUB_EXCEPTION_HANDLER(61CF20)
__SUB_CLASS_THIS(0061CF20, __thiscall, 15168,  CUINewYearCardSenderDlg, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61CF20
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esp+0x1C]
	lea edi,[esi+0x94]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x18],0
	call ZXString<char>::op_assign
	mov edi,dword ptr [edi]
	mov ecx,dword ptr [esi+0xB8]
	push edi
	call CCtrlEdit::SetText
	mov ecx,dword ptr [esi+0xB8]
	call CCtrlWnd::InvalidateRect
	push 0
	mov ecx,esi
	call CUINewYearCardSenderDlg::_ShowSearchPane
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 4
}
}
// CNewYearCardReceiverSearchResult::OnMouseMove
__SUB_CLASS_THIS(0061CD80, __thiscall, 15142,  CNewYearCardReceiverSearchResult, void, long, long) {
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
	call CNewYearCardReceiverSearchResult::_GetSelection
	mov ecx,esi
	mov edi,eax
	call CNewYearCardReceiverSearchResult::_GetTopItemIndex
	sub edi,eax
	cmp dword ptr [esi+0x14],edi
	je Block2

 Block1:
	mov ecx,esi
	call CNewYearCardReceiverSearchResult::_InvalidateRect
	mov dword ptr [esi+0x14],edi

 Block2:
	pop edi
	pop esi
	ret 8
}
}
// CUINewYearCardSenderDlg::ShowDlg
_SUB_EXCEPTION_HANDLER(61D230)
__SUB(0061D230, __cdecl, 15166,  void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61D230
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
	push 0xDC
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
	call CUINewYearCardSenderDlg::_ctor_0

 Block3:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x10
	ret
}
}
// CNewYearCardReceiverSearchResult::_GetTopItemIndex
__SUB_CLASS_THIS0(0061CCF0, __thiscall, 15143,  CNewYearCardReceiverSearchResult, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0xC8]
	mov eax,dword ptr [edx+0x38]
	test eax,eax
	jl Block4

 Block1:
	mov ecx,dword ptr [ecx]
	test ecx,ecx
	je Block3

 Block2:
	mov ecx,dword ptr [ecx-4]

 Block3:
	add ecx,0xFFFFFFFB
	cmp eax,ecx
	jbe Block5

 Block4:
	xor eax,eax

 Block5:
	ret
}
}
// CUINewYearCardSenderDlg::OnButtonClicked
__SUB_CLASS_THIS(0061E840, __thiscall, 15160,  CUINewYearCardSenderDlg, void, uint32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	mov eax,ecx
	sub eax,0
	je Block6

 Block1:
	sub eax,1
	je Block5

 Block2:
	sub eax,1
	je Block4

 Block3:
	push ecx
	mov ecx,esi
	call CDialog::OnButtonClicked
	pop esi
	ret 4

 Block4:
	push 2
	mov ecx,esi
	call CUINewYearCardSenderDlg::_CloseDlg
	pop esi
	ret 4

 Block5:
	mov ecx,esi
	call CUINewYearCardSenderDlg::_SendNewYearCard
	push 1
	mov ecx,esi
	call CUINewYearCardSenderDlg::_CloseDlg
	pop esi
	ret 4

 Block6:
	push 1
	mov ecx,esi
	call CUINewYearCardSenderDlg::_ShowSearchPane
	mov ecx,esi
	call CUINewYearCardSenderDlg::_DoSearch
	pop esi
	ret 4
}
}
// CUINewYearCardSenderDlg::_ShowSearchPane
__SUB_CLASS_THIS(0061CCC0, __thiscall, 15171,  CUINewYearCardSenderDlg, void, bool) {
__asm {

 Block0:
	mov al,byte ptr [esp+4]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xC8]
	mov byte ptr [esi+0xD8],al
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x24]
	add ecx,4
	movzx eax,al
	push eax
	call edx
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret 4
}
}
