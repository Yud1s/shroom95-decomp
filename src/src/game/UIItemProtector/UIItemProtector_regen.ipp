#include "regen.hpp"
// UIItemProtector.ipp
#include "UIItemProtector.hpp"

// CUIItemProtector::OnMouseMove
__SUB_CLASS_THIS(003D6F20, __thiscall, 68816,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x1C]
	lea eax,[ebp-0x49]
	push esi
	mov esi,ecx
	cmp eax,0x1B
	ja Block5

 Block1:
	mov ebx,dword ptr [esp+0x24]
	lea ecx,[ebx-0x66]
	cmp ecx,0x1B
	ja Block5

 Block2:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edi
	lea edx,[esp+0x10]
	push edx
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x10]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov eax,dword ptr [esi+0xAF4]
	mov ecx,dword ptr [esi+0xAF0]
	push eax
	push ecx
	lea edx,[esp+0x20]
	push edx
	mov ecx,edi
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x18]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	push 0
	push 0
	push 0
	push 0
	push 0
	push edi
	mov ecx,esi
	call edx
	mov edx,dword ptr [esi]
	lea eax,[eax+ebx+0x14]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,ebp
	push eax
	lea ecx,[esi+0xA8]
	call CUIToolTip::ShowItemToolTip

 Block4:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 8

 Block5:
	lea ecx,[esi+0xA8]
	call CUIToolTip::ClearToolTip
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 8
}
}
// CUIItemProtector::HitTest
__SUB_CLASS_THIS(003D6DF0, __thiscall, 68815,  CUIItemProtector, int32_t, long, long, CCtrlWnd**) {
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
	mov ecx,0x18
	cmp ecx,edi
	sbb eax,eax
	neg eax
	inc eax

 Block4:
	pop edi
	pop esi
	ret 0xC
}
}
// CUIItemProtector::~CUIItemProtector
_SUB_EXCEPTION_HANDLER(3D73D0)
__SUB_CLASS_THIS0(003D73D0, __thiscall, 68811,  CUIItemProtector, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D73D0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIItemProtector::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIItemProtector::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIItemProtector::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB18]
	mov dword ptr [esp+0x1C],5
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0xB00]
	mov byte ptr [esp+0x1C],4
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esi+0xAC]
	mov byte ptr [esp+0x1C],3
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0xA8]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],2
	cmp eax,ebx
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0xA8]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xA8]
	cmp ecx,ebx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0xA8],ebx

 Block5:
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block7

 Block6:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block7:
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block9

 Block8:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block9:
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
// CUIItemProtector::CUIItemProtector
_SUB_EXCEPTION_HANDLER(3D7200)
__SUB_CLASS_THIS(003D7200, __thiscall, 68809,  CUIItemProtector, void, NakedParam<COutPacket>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D7200
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
	mov dword ptr [esp+0x1C],edi
	call CUniqueModeless::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CUIItemProtector::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIItemProtector::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIItemProtector::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA8],edi
	lea ecx,[esi+0xAC]
	mov byte ptr [esp+0x1C],4
	call CUIToolTip::_ctor_default
	lea ebx,[esi+0xAFC]
	mov ecx,ebx
	mov byte ptr [esp+0x1C],5
	call COutPacket::_ctor_default
	mov dword ptr [esi+0xB18],edi
	mov dword ptr [esi+0xB1C],edi
	mov dword ptr [esi+0xB20],edi
	mov dword ptr [esi+0xB24],edi
	mov dword ptr [esi+0xB28],edi
	push 1
	push edi
	push 1
	push offset _S_UIUIWINDOW2IMGIT__23
	mov ecx,esi
	mov byte ptr [esp+0x2C],7
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esi+0xA8]
	cmp eax,edi
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0xA8]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xA8]
	cmp ecx,edi
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0xA8],edi

 Block5:
	mov eax,dword ptr [esp+0x24]
	lea ecx,[esp+0x28]
	push ecx
	lea ecx,[ebx+4]
	mov dword ptr [ebx],eax
	call ZArray<unsigned char>::operator=
	mov edx,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [ebx+8],edx
	mov dword ptr [ebx+0xC],eax
	mov dword ptr [esi+0xB0C],ecx
	mov edx,dword ptr [_D_DB_DATE_20790101__14]
	mov dword ptr [esi+0xB10],edx
	mov eax,dword ptr [_D_DB_DATE_20790101__14+4]
	lea ecx,[esp+0x28]
	mov dword ptr [esi+0xB14],eax
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 0x14
}
}
// CUIItemProtector::PutItem
__SUB_CLASS_THIS(003D7160, __thiscall, 68818,  CUIItemProtector, int32_t, GW_ItemSlotBase*, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	test edi,edi
	jne Block2

 Block1:
	xor eax,eax
	pop edi
	pop esi
	ret 0xC

 Block2:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	push eax
	call is_state_change_item
	add esp,4
	test eax,eax
	je Block4

 Block3:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0xD7B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block4:
	push edi
	lea ecx,[esi+0xA4]
	call ZRef<GW_ItemSlotBase>::op_assign_ptr
	mov ecx,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0x14]
	mov dword ptr [esi+0xAF4],ecx
	mov dword ptr [esi+0xAF8],edx
	mov eax,dword ptr [edi+0x20]
	mov dword ptr [esi+0xB10],eax
	mov ecx,dword ptr [edi+0x24]
	mov dword ptr [esi+0xB14],ecx
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop edi
	mov eax,1
	pop esi
	ret 0xC
}
}
// CUIItemProtector::GetRTTI
__SUB_CLASS_THIS0(003D7380, __thiscall, 68820,  CUIItemProtector, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIItemProtector::ms_RTTI_CUIItemProtector
	ret
}
}
// CUIItemProtector::IsKindOf
__SUB_CLASS_THIS(003D73A0, __thiscall, 68821,  CUIItemProtector, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIItemProtector::ms_RTTI_CUIItemProtector
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
// CUIItemProtector::OnButtonClicked
_SUB_EXCEPTION_HANDLER(3D7520)
__SUB_CLASS_THIS(003D7520, __thiscall, 68814,  CUIItemProtector, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D7520
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],0
	mov ecx,dword ptr [esp+0x50]
	mov eax,ecx
	sub eax,0x7D0
	mov dword ptr [esp+0x48],0
	je Block4

 Block1:
	sub eax,1
	je Block3

 Block2:
	push ecx
	mov ecx,esi
	call CDialog::OnButtonClicked
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret 4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 2
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret 4

 Block4:
	mov eax,dword ptr [esi+0xA8]
	test eax,eax
	jne Block6

 Block5:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x64],esp
	push 0xD7A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret 4

 Block6:
	cmp dword ptr [esi+0xB0C],0
	jle Block16

 Block7:
	mov dword ptr [esp+0x50],0
	push offset _D_DB_DATE_20790101__14
	lea edi,[esi+0xB10]
	push edi
	mov byte ptr [esp+0x50],1
	call dword ptr [ZImports::_CompareFileTime]
	test eax,eax
	jge Block9

 Block8:
	lea ecx,[esp+0x14]
	push 0x13A8
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x4C],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	jmp Block10

 Block9:
	call Util::FTGetNow
	mov dword ptr [edi+4],edx
	lea edx,[esp+0x18]
	push 0x13A7
	push edx
	mov dword ptr [edi],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x4C],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]

 Block10:
	mov byte ptr [esp+0x48],1
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov eax,dword ptr [esi+0xB0C]
	push eax
	push edi
	call Util::FTAddDay
	add esp,8
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x2C],edx
	push ecx
	lea edx,[esp+0x2C]
	push edx
	mov dword ptr [esp+0x30],eax
	call dword ptr [ZImports::_FileTimeToSystemTime]
	mov eax,dword ptr [esi+0xA8]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0x20]
	push eax
	call CItemInfo::GetItemName
	movzx ecx,word ptr [esp+0x3A]
	movzx edx,word ptr [esp+0x38]
	mov edi,dword ptr [esp+0x50]
	push ecx
	movzx ecx,word ptr [esp+0x34]
	push edx
	movzx edx,word ptr [esp+0x3E]
	push ecx
	movzx ecx,word ptr [esp+0x3E]
	push edx
	mov edx,dword ptr [eax]
	push ecx
	push edx
	lea eax,[esp+0x28]
	push edi
	push eax
	mov byte ptr [esp+0x68],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x3C]
	add esp,0x20
	mov byte ptr [esp+0x48],1
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov byte ptr [esp+0x48],0
	test edi,edi
	je Block21

 Block15:
	add edi,0xFFFFFFF4
	push edi
	jmp Block20

 Block16:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	mov edi,eax
	lea edx,[esp+0x20]
	push 0xD7C
	mov bl,5
	push edx
	mov byte ptr [esp+0x50],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x54],6
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x48],bl
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFF4
	push eax

 Block20:
	call ZXString<char>::_Release
	add esp,4

 Block21:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea eax,[esp+0x24]
	mov dword ptr [esp+0x64],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block27

 Block22:
	mov ecx,dword ptr [esi+0xAF4]
	lea edi,[esi+0xAFC]
	push ecx
	mov ecx,edi
	call COutPacket::Encode4
	mov edx,dword ptr [esi+0xAF8]
	push edx
	mov ecx,edi
	call COutPacket::Encode4
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x20B8],0
	mov ebx,eax
	jne Block25

 Block23:
	mov eax,dword ptr [eax+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block25

 Block24:
	call get_update_time
	sub eax,dword ptr [ebx+0x20BC]
	cmp eax,0x1F4
	jge Block26

 Block25:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x64],esp
	push 0x136
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block27

 Block26:
	call get_update_time
	push eax
	mov ecx,edi
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	push edi
	call CClientSocket::SendPacket
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 1
	call CWvsContext::SetExclRequestSent
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 1
	mov ecx,esi
	call edx

 Block27:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret 4
}
}
// CUIItemProtector::OnCreate
_SUB_EXCEPTION_HANDLER(3D6FF0)
__SUB_CLASS_THIS(003D6FF0, __thiscall, 68812,  CUIItemProtector, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D6FF0
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
	mov esi,ecx
	xor ebx,ebx
	push ebx
	push ebx
	lea edi,[esi+0xB18]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x24],1
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x2C],ebx
	push ebx
	push ebx
	push ebx
	push 0x7D0
	push offset _S_UIUIWINDOW2IMGIT__22
	lea eax,[esp+0x28]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x54],ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov byte ptr [esp+0x3C],1
	cmp eax,ebx
	je Block17

 Block1:
	add eax,8
	cmp eax,ebx
	je Block17

 Block2:
	lea ebp,[eax-8]
	cmp ebp,ebx
	je Block4

 Block3:
	lea ecx,[ebp+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],ebp
	mov dword ptr [esp+0x20],eax
	cmp eax,ebx
	je Block6

 Block5:
	push ebx
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block6:
	mov byte ptr [esp+0x3C],bl
	cmp dword ptr [esp+0x18],ebx
	je Block8

 Block7:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block8:
	push ebx
	push ebx
	push ebx
	push 0x7D1
	push offset _S_UIUIWINDOW2IMGIT__21
	lea edx,[esp+0x28]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov byte ptr [esp+0x3C],2
	cmp eax,ebx
	je Block18

 Block9:
	add eax,8
	cmp eax,ebx
	je Block18

 Block10:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block12

 Block11:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block12:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebx
	je Block14

 Block13:
	push ebx
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block14:
	mov byte ptr [esp+0x3C],bl
	cmp dword ptr [esp+0x18],ebx
	je Block16

 Block15:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block16:
	mov eax,dword ptr [esi+0xA0]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 4

 Block17:
	xor ebp,ebp
	jmp Block4

 Block18:
	xor edi,edi
	jmp Block12
}
}
// CUIItemProtector::OnDestroy
__SUB_CLASS_THIS0(003D7360, __thiscall, 68811,  CUIItemProtector, void) {
__asm {

 Block0:
	ret
}
}
// CUIItemProtector::ClearToolTip
__SUB_CLASS_THIS0(003D7370, __thiscall, 68817,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0xA8
	jmp  CUIToolTip::ClearToolTip
}
}
// CUIItemProtector::Draw
_SUB_EXCEPTION_HANDLER(3D6E30)
__SUB_CLASS_THIS(003D6E30, __thiscall, 68813,  CUIItemProtector, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D6E30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x20]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov dword ptr [esp+0x18],0
	mov dword ptr [esp+8],0
	mov esi,dword ptr [esi+0xA8]
	mov byte ptr [esp+0x18],1
	test esi,esi
	jne Block3

 Block1:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block7

 Block2:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret 4

 Block3:
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0x81
	push 0x48
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov esi,dword ptr [esp+0x44]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block5

 Block4:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block5:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test esi,esi
	je Block7

 Block6:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block7:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret 4
}
}
