#include "regen.hpp"
// UIKarma.ipp
#include "UIKarma.hpp"

// CUIKarmaDlg::OnButtonClicked
__SUB_CLASS_THIS(003D8130, __thiscall, 70715,  CUIKarmaDlg, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	cmp eax,1
	jne Block3

 Block1:
	call CUIKarmaDlg::_SendConsumeCashItemUseRequest
	test eax,eax
	je Block7

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 1
	mov ecx,esi
	call edx
	pop esi
	ret 4

 Block3:
	cmp eax,2
	jne Block5

 Block4:
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	call edx
	pop esi
	ret 4

 Block5:
	cmp eax,8
	jne Block7

 Block6:
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	call edx

 Block7:
	pop esi
	ret 4
}
}
// CUIKarmaDlg::OnMouseMove
__SUB_CLASS_THIS(003D7920, __thiscall, 70717,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xA8]
	push edi
	test eax,eax
	je Block4

 Block1:
	mov ebx,dword ptr [esp+0x10]
	lea ecx,[ebx-0x4B]
	cmp ecx,0x1B
	ja Block4

 Block2:
	mov edi,dword ptr [esp+0x14]
	lea edx,[edi-0x64]
	cmp edx,0x1B
	ja Block4

 Block3:
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	call edx
	mov edx,dword ptr [esi]
	lea eax,[eax+edi+0x14]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,ebx
	push eax
	lea ecx,[esi+0xAC]
	call CUIToolTip::ShowItemToolTip
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 8

 Block4:
	lea ecx,[esi+0xAC]
	call CUIToolTip::ClearToolTip
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 8
}
}
// CUIKarmaDlg::CUIKarmaDlg
_SUB_EXCEPTION_HANDLER(3D7C90)
__SUB_CLASS_THIS(003D7C90, __thiscall, 70709,  CUIKarmaDlg, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D7C90
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
	call CUniqueModeless::_ctor_default
	mov eax,dword ptr [esp+0x24]
	mov ebx,dword ptr [esp+0x28]
	xor edi,edi
	mov dword ptr [esi+0x94],eax
	or eax,0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esi],offset CUIKarmaDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIKarmaDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIKarmaDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x98],ebx
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esi+0xA0],eax
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esi+0xAC],edi
	lea ecx,[esi+0xB0]
	mov byte ptr [esp+0x1C],1
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xAF8],edi
	mov dword ptr [esi+0xAFC],edi
	mov dword ptr [esi+0xB00],edi
	mov dword ptr [esi+0xB04],edi
	mov dword ptr [esi+0xB08],edi
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebx
	mov byte ptr [esp+0x20],3
	call CItemInfo::GetKarmaScissorsItem
	cmp eax,edi
	je Block2

 Block1:
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esi+0xA4],ecx

 Block2:
	push offset _S_UIUIWINDOW2IMGKA__3
	mov ecx,esi
	call CDialog::CreateDlgOnCenter
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 8
}
}
// CUIKarmaDlg::IsKindOf
__SUB_CLASS_THIS(003D7DB0, __thiscall, 70722,  CUIKarmaDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIKarmaDlg::ms_RTTI_CUIKarmaDlg
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
// CUIKarmaDlg::~CUIKarmaDlg
_SUB_EXCEPTION_HANDLER(3D7DE0)
__SUB_CLASS_THIS0(003D7DE0, __thiscall, 70711,  CUIKarmaDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D7DE0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIKarmaDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIKarmaDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIKarmaDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xAF8]
	mov dword ptr [esp+0x14],2
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0xB0]
	mov byte ptr [esp+0x14],1
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0xAC]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0xAC]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xAC]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0xAC],0

 Block5:
	int 3// TODO: 	mov dword ptr [esi],offset CUniqueModeless::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUniqueModeless::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUniqueModeless::`vftable'{for `ZRefCounted'}
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	mov dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIKarmaDlg::_SendConsumeCashItemUseRequest
_SUB_EXCEPTION_HANDLER(3D7EF0)
__SUB_CLASS_THIS0(003D7EF0, __thiscall, 70719,  CUIKarmaDlg, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D7EF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	cmp dword ptr [esi+0xAC],ebx
	je Block6

 Block1:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp edi,ebx
	je Block6

 Block2:
	cmp dword ptr [edi+0x20B8],ebx
	jne Block5

 Block3:
	mov eax,dword ptr [edi+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block5

 Block4:
	call get_update_time
	sub eax,dword ptr [edi+0x20BC]
	cmp eax,0x1F4
	jge Block7

 Block5:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0x136
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block6:
	xor eax,eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x2C
	ret

 Block7:
	push 0x55
	lea ecx,[esp+0x24]
	call COutPacket::_ctor_1
	mov dword ptr [esp+0x38],ebx
	call get_update_time
	push eax
	lea ecx,[esp+0x24]
	call COutPacket::Encode4
	movzx eax,word ptr [esi+0x94]
	push eax
	lea ecx,[esp+0x24]
	call COutPacket::Encode2
	mov ecx,dword ptr [esi+0x98]
	push ecx
	lea ecx,[esp+0x24]
	call COutPacket::Encode4
	mov edx,dword ptr [esi+0x9C]
	push edx
	lea ecx,[esp+0x24]
	call COutPacket::Encode4
	mov eax,dword ptr [esi+0xA0]
	push eax
	lea ecx,[esp+0x24]
	call COutPacket::Encode4
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	mov dword ptr [edi+0x20B8],1
	call get_update_time
	lea edx,[esp+0x10]
	push 0x927
	push edx
	mov dword ptr [edi+0x20BC],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov byte ptr [esp+0x40],1
	call play_game_sound
	mov eax,dword ptr [esp+0x18]
	add esp,8
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block9:
	mov eax,dword ptr [esi+0xA4]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetKarmaScissorsName
	lea edx,[esp+0x18]
	push 0x1249
	push edx
	mov byte ptr [esp+0x40],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x10],ebx
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push 0xC
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x48],4
	call ZXString<char>::Format
	add esp,0xC
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x18]
	add esp,8
	mov byte ptr [esp+0x38],3
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],2
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,1
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x2C
	ret
}
}
// CUIKarmaDlg::OnKey
__SUB_CLASS_THIS(003D7D80, __thiscall, 70716,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	ret 8
}
}
// CUIKarmaDlg::GetRTTI
__SUB_CLASS_THIS0(003D7D90, __thiscall, 70721,  CUIKarmaDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIKarmaDlg::ms_RTTI_CUIKarmaDlg
	ret
}
}
// CUIKarmaDlg::OnCreate
_SUB_EXCEPTION_HANDLER(3D7A80)
__SUB_CLASS_THIS(003D7A80, __thiscall, 70712,  CUIKarmaDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D7A80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	push 0
	push 0
	lea esi,[edi+0xAF8]
	push edi
	mov ecx,esi
	call CLayoutMan::Init
	push 0
	push 0
	push 0
	push 1
	push offset _S_UIUIWINDOW2IMGKA__2
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x1C],0
	je Block2

 Block1:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block2:
	push 0
	push 0
	push 0
	push 2
	push offset _S_UIUIWINDOW2IMGKA__1
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x1C],0
	je Block4

 Block3:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block4:
	lea edx,[esp+0xC]
	push 0x1962
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edi,dword ptr [edi+0x24]
	mov eax,dword ptr [eax]
	push 0
	push 5
	add edi,0xFFFFFFEA
	push edi
	push 8
	push eax
	lea eax,[esp+0x24]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x40],0
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x14],0
	je Block6

 Block5:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x14],0

 Block6:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 4
}
}
// CUIKarmaDlg::PutItem
__SUB_CLASS_THIS(003D7BA0, __thiscall, 70718,  CUIKarmaDlg, int32_t, GW_ItemSlotBase*, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	test edi,edi
	je Block3

 Block1:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+4]
	mov ecx,edi
	call edx
	test eax,eax
	je Block4

 Block2:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0xD8F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block3:
	xor eax,eax
	pop edi
	pop esi
	ret 0xC

 Block4:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetAppliableKarmaType
	cmp eax,dword ptr [esi+0xA4]
	je Block7

 Block5:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1A6C

 Block6:
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	xor eax,eax
	pop edi
	pop esi
	ret 0xC

 Block7:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x14]
	mov ecx,edi
	call eax
	test eax,eax
	je Block9

 Block8:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1248
	jmp Block6

 Block9:
	push edi
	lea ecx,[esi+0xA8]
	call ZRef<GW_ItemSlotBase>::op_assign_ptr
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [esp+0x14]
	push 0
	mov ecx,esi
	mov dword ptr [esi+0x9C],edx
	mov dword ptr [esi+0xA0],eax
	call CWnd::InvalidateRect
	pop edi
	mov eax,1
	pop esi
	ret 0xC
}
}
// CUIKarmaDlg::HitTest
__SUB_CLASS_THIS(003D78E0, __thiscall, 70713,  CUIKarmaDlg, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [esp+0x10]
	push edi
	mov edi,dword ptr [esp+0x10]
	push esi
	push edi
	push eax
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
	xor eax,eax
	cmp edi,0x16
	setge al
	inc eax

 Block4:
	pop edi
	pop esi
	ret 0xC
}
}
// CUIKarmaDlg::Draw
_SUB_EXCEPTION_HANDLER(3D79A0)
__SUB_CLASS_THIS(003D79A0, __thiscall, 70714,  CUIKarmaDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D79A0
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
	mov eax,dword ptr [esp+0x1C]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0x7E
	push 0x4A
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push edx
	mov ecx,esi
	call CWnd::GetCanvas
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot

 Block2:
	cmp dword ptr [esi+0xA4],2
	jne Block4

 Block3:
	push 0
	push 0
	push offset _S_UIUIWINDOW2IMGKA
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push eax
	mov ecx,esi
	call CWnd::GetCanvas
	lea ecx,[esi+0xAF8]
	call CLayoutMan::CopyToCanvas_1

 Block4:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
