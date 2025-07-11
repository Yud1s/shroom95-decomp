#include "regen.hpp"
// UIExpeditionTab.ipp
#include "UIExpeditionTab.hpp"

// TabExpedition::OnMouseButton
__SUB_CLASS_THIS(003AD5D0, __thiscall, 40831,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	ret 0x10
}
}
// CCtrlPQuestItem::~CCtrlPQuestItem
_SUB_EXCEPTION_HANDLER(3AE0E0)
__SUB_CLASS_THIS0(003AE0E0, __thiscall, 80117,  CCtrlPQuestItem, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3AE0E0
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
	mov ebx,ecx
	mov dword ptr [esp+0x10],ebx
	mov eax,dword ptr [ebx+0x38]
	mov dword ptr [esp+0x1C],0
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
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block4:
	mov dword ptr [ebx+0x38],0

 Block5:
	mov ecx,ebx
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CCtrlWnd::~CCtrlWnd
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
// TabExpedition::AttachBanner
_SUB_EXCEPTION_HANDLER(3AEC00)
__SUB_CLASS_THIS(003AEC00, __thiscall, 40839,  TabExpedition, void, TabExpedition::ENUM_CTRL_ID, long, long, long, long, NakedParam<ZRef<PartyQuestInfo>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3AEC00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	push 0x40
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x2C],0
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x10],esi
	mov byte ptr [esp+0x28],1
	test esi,esi
	je Block16

 Block1:
	mov ecx,esi
	call CCtrlWnd::_ctor_default
	lea eax,[esi+8]
	mov dword ptr [esi+0x38],0
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlSelectQuest::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlSelectQuest::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [eax],offset CCtrlSelectQuest::`vftable'{for `ZRefCounted'}
	test eax,eax
	je Block16

 Block2:
	lea esi,[eax-8]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block4

 Block3:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov ecx,dword ptr [esp+0x4C]
	mov edx,dword ptr [esp+0x48]
	push ecx
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],edx
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x34],2
	mov dword ptr [esp+0x58],esp
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov ecx,dword ptr [esp+0x44]
	mov edx,dword ptr [esp+0x40]
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+0x28]
	push ecx
	mov ecx,dword ptr [esp+0x40]
	push edx
	mov edx,dword ptr [edi+0xC]
	push ecx
	push edx
	mov ecx,esi
	call eax
	push 0
	lea ecx,[esp+0x34]
	push ecx
	lea ecx,[edi+0x10]
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::Insert
	mov ebp,eax
	lea eax,[esi+8]
	test eax,eax
	je Block17

 Block7:
	lea edi,[eax-8]
	test edi,edi
	je Block9

 Block8:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp+0x10],edi
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block11

 Block10:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlWnd>::_ReleaseRaw

 Block11:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push 0
	mov ecx,esi
	call edx
	push 0
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x2C],0
	call ZRef<CCtrlPQuestItem>::_ReleaseRaw
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block15

 Block12:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block15

 Block13:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block15

 Block14:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block15:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x1C
	ret 0x20

 Block16:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	jmp Block4

 Block17:
	xor edi,edi
	jmp Block9
}
}
// TabExpedition::OnExpeditionChanged
__SUB_CLASS_THIS0(003B0870, __thiscall, 40825,  TabExpedition, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x40]
	cmp eax,1
	jne Block2

 Block1:
	push 2
	call TabExpedition::SetState
	ret

 Block2:
	cmp eax,2
	jne Block6

 Block3:
	mov eax,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	cmp dword ptr [eax+4],0
	jne Block5

 Block4:
	push 1
	call TabExpedition::SetState
	ret

 Block5:
	mov ecx,dword ptr [ecx+0xC]
	push 0
	call CWnd::InvalidateRect

 Block6:
	ret
}
}
// TabExpedition::Draw_Create
_SUB_EXCEPTION_HANDLER(3B0220)
__SUB_CLASS_THIS(003B0220, __thiscall, 40827,  TabExpedition, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B0220
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0
	push 0
	push offset _S_UIUIWINDOW2IMGUS__160
	push ecx
	mov ecx,dword ptr [esp+0x60]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x58],0
	mov dword ptr [esp+0x28],esp
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	lea ecx,[esi+0x5C]
	call CLayoutMan::CopyToCanvas_1
	xor eax,eax

 Block3:
	lea edi,[eax+1]
	push edi
	mov ecx,esi
	call TabExpedition::DetachCtrl
	mov eax,edi
	cmp eax,4
	jl Block3

 Block4:
	mov dword ptr [esi+0x44],0
	mov ecx,dword ptr [TSingleton<CPartyQuestInfoManager>::ms_pInstance]
	mov eax,dword ptr [ecx+0x24]
	mov dword ptr [esp+0x14],0x57
	mov ebx,1
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block18

 Block5:
	lea edx,[esp+0x18]
	push edx
	call ZList<ZRef<PartyQuestInfo>>::GetNext
	mov edi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x24],edi
	test edi,edi
	je Block7

 Block6:
	lea eax,[edi-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov ecx,edi
	mov byte ptr [esp+0x48],1
	call PartyQuestInfo::IsExpeditionQuest
	test eax,eax
	je Block12

 Block8:
	call GetLevel
	cmp eax,dword ptr [edi+0x10]
	jg Block12

 Block9:
	mov ecx,dword ptr [esi+0x48]
	inc dword ptr [esi+0x44]
	mov eax,dword ptr [esi+0x44]
	add ecx,ecx
	add ecx,ecx
	lea edx,[ecx-4]
	cmp edx,eax
	jge Block12

 Block10:
	cmp eax,ecx
	jg Block12

 Block11:
	dec eax
	xor ecx,ecx
	cmp dword ptr [esi+0x4C],eax
	lea edx,[edi-0xC]
	sete cl
	push ecx
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push edx
	mov dword ptr [eax+4],edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ebp,dword ptr [esp+0x20]
	push 0x2E
	push 0xF4
	push ebp
	push 0xA
	push ebx
	mov ecx,esi
	call TabExpedition::AttachBanner
	inc ebx
	add ebp,0x30
	mov dword ptr [esp+0x14],ebp

 Block12:
	mov byte ptr [esp+0x48],0
	test edi,edi
	je Block17

 Block13:
	add edi,0xFFFFFFF0
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block16

 Block14:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block16

 Block15:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block16:
	mov dword ptr [esp+0x24],0

 Block17:
	cmp dword ptr [esp+0x18],0
	jne Block5

 Block18:
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
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x4C],2
	call edi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x24]
	mov bl,3
	push edx
	mov byte ptr [esp+0x50],bl
	call GetFont
	add eax,4
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x24],0
	mov ecx,esi
	mov byte ptr [esp+0x54],4
	call TabExpedition::GetQuestMaxPage
	push eax
	mov eax,dword ptr [esi+0x48]
	push eax
	lea ecx,[esp+0x2C]
	push offset _S_DD__4
	push ecx
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,0xC
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x58],5
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	push 0x11F
	push 0x72
	mov byte ptr [esp+0x60],4
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x48],bl
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x48],2
	cmp word ptr [esp+0x20],si
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[esp+0x20]
	push eax
	call edi

 Block30:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x30],si
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x30]
	push edx
	call edi

 Block34:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 4
}
}
// TabExpedition::GetSelectQuestID
__SUB_CLASS_THIS0(003AE000, __thiscall, 40847,  TabExpedition, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x4C]
	push eax
	call TabExpedition::GetSelectQuestID_0
	ret
}
}
// TabExpedition::OnInvite
_SUB_EXCEPTION_HANDLER(3AF3D0)
__SUB_CLASS_THIS0(003AF3D0, __thiscall, 40825,  TabExpedition, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3AF3D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	mov edi,dword ptr [eax+4]
	mov ecx,edi
	call EXPEDITION::GetMemberCount
	mov ecx,edi
	mov esi,eax
	call EXPEDITION::GetMemberLimit
	cmp esi,eax
	jl Block5

 Block1:
	push 0
	push 0
	push 0
	push 0
	lea ecx,[esp+0x20]
	push 0x1657
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x34],0
	mov dword ptr [esp+0x1C],0
	mov esi,dword ptr [eax]
	mov ecx,edi
	mov byte ptr [esp+0x34],1
	call EXPEDITION::GetMemberLimit
	push eax
	lea edx,[esp+0x20]
	push esi
	push edx
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x20]
	add esp,0x14
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block13

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret

 Block5:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x24],2
	test eax,eax
	je Block14

 Block6:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block14

 Block7:
	add eax,8
	je Block14

 Block8:
	lea esi,[eax-8]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block10

 Block9:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	push 0
	push 1
	push 0
	mov dword ptr [esi+0x90],1
	push 3
	mov ecx,esi
	mov dword ptr [esp+0x34],3
	mov dword ptr [esi+0x94],0x196B
	call CUtilDlgEx::SetUtilDlgEx_0
	push 0
	push 0
	push 0xC
	push 4
	push offset _S_
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_STR
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,1
	jne Block12

 Block11:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push ecx
	mov ecx,esi
	call CUtilDlgEx::GetInputStr_Result
	mov ecx,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	call ExpeditionIntermediary::SendExpInvitePacket

 Block12:
	push 0
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block13:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret

 Block14:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	jmp Block10
}
}
// TabExpedition::HideControls
_SUB_EXCEPTION_HANDLER(3AFE80)
__SUB_CLASS_THIS0(003AFE80, __thiscall, 40825,  TabExpedition, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3AFE80
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
	mov edi,ecx
	lea ebp,[edi+0x10]
	mov ecx,ebp
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::GetHeadPosition
	xor ebx,ebx
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block10

 Block1:
	lea ecx,[ecx]

 Block2:
	mov dword ptr [esp+0x1C],ebx
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x30],ebx
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::GetNext
	mov esi,dword ptr [esp+0x1C]
	cmp esi,ebx
	je Block4

 Block3:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x24]
	lea ecx,[esi+4]
	push ebx
	call eax
	push ebx
	mov ecx,esi
	call CCtrlWnd::SetBelow

 Block4:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp esi,ebx
	je Block9

 Block5:
	add esi,8
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block8

 Block7:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block8:
	mov dword ptr [esp+0x1C],ebx

 Block9:
	cmp dword ptr [esp+0x14],ebx
	jne Block2

 Block10:
	mov esi,1
	lea esp,[esp]

 Block11:
	push esi
	mov ecx,edi
	call TabExpedition::DetachCtrl
	inc esi
	cmp esi,0xB
	jl Block11

 Block12:
	mov esi,0x17

 Block13:
	push esi
	mov ecx,edi
	call TabExpedition::DetachCtrl
	inc esi
	cmp esi,0x35
	jl Block13

 Block14:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::ClearDragContext
	mov ecx,edi
	call TabExpedition::EndDragDrop
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret
}
}
// CCtrlPQuestItem::CreateCtrl
_SUB_EXCEPTION_HANDLER(58F180)
__SUB_CLASS_THIS(0058F180, __thiscall, 80108,  CCtrlPQuestItem, void, CWnd*, uint32_t, long, long, NakedParam<ZRef<PartyQuestInfo>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_58F180
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	lea eax,[esp+0x70]
	xor ebp,ebp
	push eax
	lea ecx,[edi+0x34]
	mov dword ptr [esp+0x5C],ebp
	call ZRef<PartyQuestInfo>::op_assign_copy
	mov ecx,dword ptr [esp+0x78]
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x30]
	push edx
	mov dword ptr [edi+0x3C],ecx
	call esi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0x5C],1
	call esi
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x2C]
	push ebp
	push ebp
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	lea eax,[esp+0x2C]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x6C],2
	call edx
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x8C],esp
	mov ecx,esp
	mov bl,3
	push eax
	mov byte ptr [esp+0x70],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x6C],4
	cmp dword ptr [_D_G_RM],ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x54]
	mov byte ptr [esp+0x6C],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x60],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x7C]
	mov dword ptr [esp+0x7C],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x58],7
	cmp word ptr [esp+0x40],bx
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	cmp eax,ebp
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x40]
	push edx
	call esi

 Block13:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x58],bl
	cmp eax,ebp
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block15:
	mov byte ptr [esp+0x58],9
	cmp word ptr [esp+0x20],bx
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x20]
	push ecx
	call esi

 Block19:
	mov byte ptr [esp+0x58],0xA
	cmp word ptr [esp+0x30],bx
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,ebp
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea eax,[esp+0x30]
	push eax
	call esi

 Block23:
	mov esi,dword ptr [esp+0x78]
	cmp esi,ebp
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],ebp
	call eax
	cmp eax,ebp
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block29

 Block28:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block29:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x6C]
	push ebp
	push ecx
	mov ecx,dword ptr [esp+0x70]
	push edx
	mov edx,dword ptr [esp+0x70]
	push eax
	mov eax,dword ptr [esp+0x70]
	push ecx
	push edx
	push eax
	mov ecx,edi
	call CCtrlWnd::CreateCtrl
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0x5C],0
	call edx
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	cmp eax,ebp
	je Block33

 Block30:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block33

 Block31:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block33

 Block32:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block33:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret 0x1C
}
}
// TabExpedition::GetSelectQuestID
_SUB_EXCEPTION_HANDLER(3ADEA0)
__SUB_CLASS_THIS(003ADEA0, __thiscall, 40848,  TabExpedition, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3ADEA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	call GetLevel
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov ebx,eax
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x40]
	call edx
	cmp dword ptr [esp+0x38],0
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x14],0
	jl Block20

 Block1:
	mov eax,dword ptr [TSingleton<CPartyQuestInfoManager>::ms_pInstance]
	mov eax,dword ptr [eax+0x24]
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block20

 Block2:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]

 Block3:
	lea ecx,[esp+0x18]
	push ecx
	call ZList<ZRef<PartyQuestInfo>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x24],esi
	test esi,esi
	je Block5

 Block4:
	lea edx,[esi-0xC]
	push edx
	call ebp

 Block5:
	mov ecx,esi
	mov dword ptr [esp+0x30],0
	call PartyQuestInfo::IsExpeditionQuest
	test eax,eax
	je Block14

 Block6:
	cmp dword ptr [esi+0xC],ebx
	jg Block14

 Block7:
	cmp ebx,dword ptr [esi+0x10]
	jg Block14

 Block8:
	cmp dword ptr [esi],0x7D4
	jne Block12

 Block9:
	mov eax,0x10624DD3
	imul dword ptr [esp+0x1C]
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,1
	je Block12

 Block10:
	cmp ebx,0x8C
	jge Block12

 Block11:
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZRef<PartyQuestInfo>::~ZRef<PartyQuestInfo>
	jmp Block19

 Block12:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,dword ptr [esp+0x38]
	je Block22

 Block13:
	inc dword ptr [esp+0x14]

 Block14:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test esi,esi
	je Block19

 Block15:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block18

 Block16:
	push edi
	call ebp
	test esi,esi
	je Block18

 Block17:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block18:
	mov dword ptr [esp+0x24],0

 Block19:
	cmp dword ptr [esp+0x18],0
	jne Block3

 Block20:
	xor eax,eax

 Block21:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 4

 Block22:
	mov esi,dword ptr [esi]
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZRef<PartyQuestInfo>::~ZRef<PartyQuestInfo>
	mov eax,esi
	jmp Block21
}
}
// CCtrlStatic::OnMouseEnter
__SUB_CLASS_THIS(000EDE20, __thiscall, 80126,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	push edi
	mov esi,ecx
	call CCtrlWnd::OnMouseEnter
	mov ecx,dword ptr [esi+0x20]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	xor edx,edx
	test edi,edi
	setne dl
	push edx
	mov edx,dword ptr [esi+0x10]
	push 0x65
	push edx
	call eax
	pop edi
	pop esi
	ret 4
}
}
// TabDlgInterface::OnMouseButton
__SUB_CLASS_THIS(003AD740, __thiscall, 40808,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	ret 0x10
}
}
// TabExpedition::DrawParty
_SUB_EXCEPTION_HANDLER(3AF1D0)
__SUB_CLASS_THIS(003AF1D0, __thiscall, 40854,  TabExpedition, void, NakedParam<_x_com_ptr<IWzCanvas>>, long, long, long, NakedParam<PARTYMEMBER>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3AF1D0
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
	mov dword ptr [esp+0x14],ecx
	mov esi,dword ptr [esp+0x48]
	lea esi,[esi+esi*2]
	add esi,esi
	lea edi,[esi+0x17]
	lea ebx,[esi+0x1D]
	cmp edi,ebx
	mov dword ptr [esp+0x34],0
	jge Block2

 Block1:
	mov ecx,dword ptr [esp+0x14]
	push edi
	call TabExpedition::DetachCtrl
	inc edi
	cmp edi,ebx
	jl Block1

 Block2:
	mov eax,dword ptr [esp+0x40]
	mov ebp,dword ptr [esp+0x44]
	inc eax
	lea ebx,[esp+0x64]
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x18],esi
	lea edi,[esp+0xB2]
	mov dword ptr [esp+0x1C],ebx
	add ebp,6
	mov dword ptr [esp+0x24],6

 Block3:
	mov eax,dword ptr [edi-0x66]
	mov dword ptr [esp+0x44],eax
	test eax,eax
	je Block20

 Block4:
	mov dword ptr [esp+0x40],0
	test ebx,ebx
	je Block8

 Block5:
	mov eax,ebx
	lea edx,[eax+1]

 Block6:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block6

 Block7:
	sub eax,edx
	mov esi,eax
	push esi
	push ebx
	push 0
	push esi
	lea ecx,[esp+0x50]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x44]
	call ZXString<char>::ReleaseBuffer

 Block8:
	mov ecx,dword ptr [esp+0x14]
	mov esi,dword ptr [edi]
	xor edx,edx
	cmp dword ptr [edi+0x30],edx
	mov byte ptr [esp+0x34],1
	setge dl
	xor eax,eax
	cmp dword ptr [ecx+0x54],eax
	je Block11

 Block9:
	mov ebx,dword ptr [esp+0x18]
	cmp ebx,dword ptr [ecx+0x58]
	jne Block11

 Block10:
	mov eax,2
	jmp Block13

 Block11:
	mov ebx,dword ptr [esp+0x18]
	cmp ebx,dword ptr [ecx+0x50]
	jne Block13

 Block12:
	mov eax,1

 Block13:
	mov ebx,dword ptr [esp+0xFA]
	xor ecx,ecx
	cmp ebx,dword ptr [esp+0x44]
	jne Block15

 Block14:
	mov ebx,dword ptr [esp+0x100]
	cmp dword ptr [esp+0x48],ebx
	sete cl
	inc ecx

 Block15:
	push ecx
	push edx
	push eax
	mov eax,dword ptr [edi+0x18]
	push eax
	push esi
	push ecx
	mov ecx,esp
	lea edx,[esp+0x58]
	mov dword ptr [esp+0x40],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x5C]
	mov ecx,dword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x54]
	push eax
	push ebp
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x64]
	mov dword ptr [esp+0x6C],esp
	test eax,eax
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block17:
	mov ecx,dword ptr [esp+0x3C]
	call TabExpedition::DrawMember
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x34],0
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov ebx,dword ptr [esp+0x1C]

 Block20:
	mov eax,dword ptr [esp+0x20]
	mov esi,dword ptr [esp+0x18]
	push 0xF
	push 0x4F
	push ebp
	push eax
	lea ecx,[esi+0x17]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	call TabExpedition::AttachStatic
	add ebx,0xD
	inc esi
	add ebp,0xF
	add edi,4
	sub dword ptr [esp+0x24],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x18],esi
	jne Block3

 Block21:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block23

 Block22:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block23:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 0xC8
}
}
// GetJobIcon
_SUB_EXCEPTION_HANDLER(3AEDD0)
__SUB(003AEDD0, __cdecl, 87300,  ZXString16, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3AEDD0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x1C]
	mov dword ptr [esp+8],0
	call GetJobCategory
	xor ecx,ecx
	cmp dword ptr [esp+0x20],ecx
	mov dword ptr [esp+0x20],0
	sete cl
	push ecx
	push eax
	lea eax,[esp+0x28]
	push offset _S_UIUIWINDOW2IMGUS__150
	push eax
	mov dword ptr [esp+0x24],1
	call ZXString16::Format
	add esp,0x10
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+8],1
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// DragMember::OnDropped
_SUB_EXCEPTION_HANDLER(3AE5B0)
__SUB_CLASS_THIS(003AE5B0, __thiscall, 87277,  DragMember, int32_t, IUIMsgHandler*, IUIMsgHandler*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3AE5B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x1C],ebx
	mov eax,dword ptr [TSingleton<CUIUserList>::ms_pInstance]
	test eax,eax
	jne Block2

 Block1:
	xor eax,eax
	jmp Block24

 Block2:
	mov ecx,dword ptr [esp+0x3C]
	mov eax,dword ptr [eax+0xC7C]
	push ecx
	mov ecx,eax
	call TabExpedition::HasMsgHandler
	test eax,eax
	je Block1

 Block3:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 0
	lea edx,[esp+0x24]
	push edx
	call CWndMan::GetCursorPos
	mov ecx,dword ptr [TSingleton<CUIUserList>::ms_pInstance]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x2C]
	add ecx,4
	call edx
	mov ecx,dword ptr [TSingleton<CUIUserList>::ms_pInstance]
	mov esi,dword ptr [esp+0x20]
	add ecx,4
	sub esi,eax
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x30]
	call edx
	mov edx,dword ptr [esp+0x24]
	sub edx,eax
	mov eax,dword ptr [TSingleton<CUIUserList>::ms_pInstance]
	mov ecx,dword ptr [eax+0xC7C]
	push edx
	push esi
	call TabExpedition::GetPartyIndexOfRegion
	mov ecx,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	mov esi,dword ptr [ecx+4]
	mov ecx,esi
	mov edi,eax
	call EXPEDITION::GetMaxPartyIndex
	cmp edi,eax
	jle Block5

 Block4:
	mov ecx,esi
	call EXPEDITION::GetMaxPartyIndex
	mov edi,eax

 Block5:
	test edi,edi
	jl Block23

 Block6:
	mov edx,dword ptr [ebx+0x18]
	push edx
	mov ecx,esi
	call EXPEDITION::GetPartyIndex_0
	mov ebx,eax
	test ebx,ebx
	jl Block1

 Block7:
	mov ecx,esi
	call EXPEDITION::GetPartyCount
	mov ebp,eax
	lea eax,[ebp-1]
	cmp ebx,eax
	jne Block13

 Block8:
	cmp ebx,edi
	jge Block13

 Block9:
	mov ecx,ebx
	imul ecx,0xB2
	lea ecx,[ecx+esi+8]
	call PARTYMEMBER::GetMemberCount
	cmp eax,1
	jne Block13

 Block10:
	xor esi,esi
	push esi
	push esi
	push esi
	push esi
	lea edx,[esp+0x28]
	push 0x16E5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x40],esi
	mov dword ptr [esp+0x4C],esi
	mov eax,dword ptr [eax]
	push ebp
	push eax
	lea eax,[esp+0x54]
	push eax
	mov byte ptr [esp+0x4C],1
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push eax
	call ZXString<char>::_ctor_copy
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x50]
	add esp,0x14
	mov byte ptr [esp+0x30],0
	cmp eax,esi
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov eax,dword ptr [esp+0x18]
	cmp eax,esi
	jmp Block17

 Block13:
	cmp ebp,edi
	jge Block19

 Block14:
	push 0
	push 0
	push 0
	push 0
	lea ecx,[esp+0x2C]
	push 0x16E4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,2
	mov dword ptr [esp+0x40],ebx
	mov dword ptr [esp+0x24],0
	mov eax,dword ptr [eax]
	inc ebp
	push ebp
	push eax
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x4C],3
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x50],esp
	push eax
	call ZXString<char>::_ctor_copy
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x30],bl
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax

 Block17:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	je Block23

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block23

 Block19:
	mov ecx,esi
	call EXPEDITION::GetMaxPartyIndex
	cmp edi,eax
	jg Block22

 Block20:
	cmp ebx,edi
	je Block23

 Block21:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax+0x18]
	push edi
	push ecx
	mov ecx,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	call ExpeditionIntermediary::SendExpRelocatePartyPacket
	jmp Block23

 Block22:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x50],esp
	push 0x16E3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block23:
	mov eax,dword ptr [TSingleton<CUIUserList>::ms_pInstance]
	mov ecx,dword ptr [eax+0xC7C]
	call TabExpedition::EndDragDrop
	mov eax,1

 Block24:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 0x10
}
}
// TabExpedition::HasMsgHandler
_SUB_EXCEPTION_HANDLER(3AE170)
__SUB_CLASS_THIS(003AE170, __thiscall, 40862,  TabExpedition, int32_t, IUIMsgHandler*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3AE170
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
	mov eax,dword ptr [ecx+0xC]
	xor edi,edi
	cmp eax,edi
	je Block2

 Block1:
	add eax,4
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	cmp dword ptr [esp+0x30],eax
	je Block20

 Block4:
	lea ebx,[ecx+0x10]
	mov ecx,ebx
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::GetHeadPosition
	mov dword ptr [esp+0x14],eax
	cmp eax,edi
	je Block16

 Block5:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]

 Block6:
	mov dword ptr [esp+0x1C],edi
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebx
	mov dword ptr [esp+0x30],edi
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::GetNext
	mov eax,dword ptr [esp+0x1C]
	cmp eax,edi
	je Block8

 Block7:
	lea ecx,[eax+4]
	jmp Block9

 Block8:
	xor ecx,ecx

 Block9:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp ecx,dword ptr [esp+0x30]
	je Block18

 Block10:
	cmp eax,edi
	je Block15

 Block11:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call ebp
	test eax,eax
	jne Block14

 Block12:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,edi
	je Block14

 Block13:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block14:
	mov dword ptr [esp+0x1C],edi

 Block15:
	cmp dword ptr [esp+0x14],edi
	jne Block6

 Block16:
	xor eax,eax

 Block17:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 4

 Block18:
	cmp eax,edi
	je Block20

 Block19:
	push edi
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlWnd>::_ReleaseRaw

 Block20:
	mov eax,1
	jmp Block17
}
}
// TabExpedition::TabExpedition
__SUB_CLASS_THIS(003AE520, __thiscall, 40823,  TabExpedition, void, CWnd*) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov eax,dword ptr [esp+8]
	lea ecx,[esi+0x10]
	push edi
	mov dword ptr [esi+0xC],eax
	int 3// TODO: 	mov dword ptr [esi],offset TabExpedition::`vftable'
	xor edi,edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::_CalcAutoGrow
	lea ecx,[esi+0x28]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<TabExpedition::ENUM_CTRL_ID, ZXString<char>, TabExpedition::ENUM_CTRL_ID>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZXString<char>, TabExpedition::ENUM_CTRL_ID>::_CalcAutoGrow
	mov dword ptr [esi+0x44],edi
	mov dword ptr [esi+0x54],edi
	mov dword ptr [esi+0x48],1
	or eax,0xFFFFFFFF
	mov dword ptr [esi+0x4C],eax
	mov dword ptr [esi+0x50],eax
	mov dword ptr [esi+0x58],eax
	mov dword ptr [esi+0x5C],edi
	mov dword ptr [esi+0x60],edi
	mov dword ptr [esi+0x64],edi
	mov dword ptr [esi+0x68],edi
	mov dword ptr [esi+0x6C],edi
	pop edi
	mov eax,esi
	pop esi
	ret 4
}
}
// TabExpedition::SetState
__SUB_CLASS_THIS(003B0840, __thiscall, 40834,  TabExpedition, void, TabExpedition::ENUM_STATE) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x40]
	push eax
	call TabExpedition::EndState
	mov eax,dword ptr [esp+8]
	push eax
	mov ecx,esi
	mov dword ptr [esi+0x40],eax
	call TabExpedition::InitState
	mov ecx,dword ptr [esi+0xC]
	push 0
	call CWnd::InvalidateRect
	pop esi
	ret 4
}
}
// TabExpedition::EndState
_SUB_EXCEPTION_HANDLER(3AE010)
__SUB_CLASS_THIS(003AE010, __thiscall, 40834,  TabExpedition, void, TabExpedition::ENUM_STATE) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3AE010
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
	lea edi,[ecx+0x10]
	mov ecx,edi
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::GetHeadPosition
	xor ebx,ebx
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block10

 Block1:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]

 Block2:
	mov dword ptr [esp+0x1C],ebx
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x30],ebx
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::GetNext
	mov esi,dword ptr [esp+0x1C]
	cmp esi,ebx
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xC]
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp esi,ebx
	je Block9

 Block5:
	add esi,8
	lea ecx,[esi+4]
	push ecx
	call ebp
	test eax,eax
	jne Block8

 Block6:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block8

 Block7:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block8:
	mov dword ptr [esp+0x1C],ebx

 Block9:
	cmp dword ptr [esp+0x14],ebx
	jne Block2

 Block10:
	mov ecx,edi
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::RemoveAll
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 4
}
}
// TabExpedition::OnCreate
__SUB_CLASS_THIS(003B08B0, __thiscall, 40826,  TabExpedition, void, void*) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xC]
	push 0
	push 0
	push eax
	lea ecx,[esi+0x5C]
	call CLayoutMan::Init
	mov ecx,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	cmp dword ptr [ecx+4],0
	mov ecx,esi
	je Block2

 Block1:
	push 2
	call TabExpedition::SetState
	pop esi
	ret 4

 Block2:
	push 1
	call TabExpedition::SetState
	pop esi
	ret 4
}
}
// DragMember::~DragMember
_SUB_EXCEPTION_HANDLER(3ADA00)
__SUB_CLASS_THIS0(003ADA00, __thiscall, 87278,  DragMember, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3ADA00
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
	int 3// TODO: 	mov dword ptr [esi],offset IDraggable::`vftable'
	mov eax,dword ptr [esi+0xC]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// TabExpedition::AttachStatic
_SUB_EXCEPTION_HANDLER(3AE940)
__SUB_CLASS_THIS(003AE940, __thiscall, 40836,  TabExpedition, void, TabExpedition::ENUM_CTRL_ID, long, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3AE940
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
	mov edi,ecx
	push 0x34
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x14],esi
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x2C],0
	test esi,esi
	je Block10

 Block1:
	mov ecx,esi
	call CCtrlWnd::_ctor_default
	lea eax,[esi+8]
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlStatic::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlStatic::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [eax],offset CCtrlStatic::`vftable'{for `ZRefCounted'}
	test eax,eax
	je Block10

 Block2:
	lea esi,[eax-8]
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block4

 Block3:
	lea eax,[esi+0xC]
	push eax
	call ebp

 Block4:
	mov eax,dword ptr [esp+0x44]
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+8]
	push 0
	push eax
	mov eax,dword ptr [esp+0x44]
	push ecx
	mov ecx,dword ptr [esp+0x44]
	push eax
	mov eax,dword ptr [esp+0x44]
	push ecx
	mov ecx,dword ptr [edi+0xC]
	push eax
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x48],1
	call edx
	push 0
	lea eax,[esp+0x38]
	push eax
	lea ecx,[edi+0x10]
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::Insert
	mov ebx,eax
	lea eax,[esi+8]
	test eax,eax
	je Block11

 Block5:
	lea edi,[eax-8]
	test edi,edi
	je Block7

 Block6:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block7:
	mov eax,dword ptr [ebx+0x10]
	mov dword ptr [ebx+0x10],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block9

 Block8:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlWnd>::_ReleaseRaw

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	push 0
	mov ecx,esi
	call eax
	push 0
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZRef<CCtrlStatic>::_ReleaseRaw
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 0x14

 Block10:
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	jmp Block4

 Block11:
	xor edi,edi
	jmp Block7
}
}
// TabExpedition::AttachButton
_SUB_EXCEPTION_HANDLER(3AEA80)
__SUB_CLASS_THIS(003AEA80, __thiscall, 40841,  TabExpedition, void, TabExpedition::ENUM_CTRL_ID, NakedParam<ZXString16>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3AEA80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x34]
	push 0
	push 0
	push 0
	push eax
	push ecx
	lea edx,[esp+0x24]
	push edx
	lea ecx,[esi+0x5C]
	mov dword ptr [esp+0x40],0
	call CLayoutMan::AddButton
	mov edi,dword ptr [eax+4]
	push 0
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esi+0x10]
	mov byte ptr [esp+0x30],1
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::Insert
	mov ebp,eax
	test edi,edi
	je Block11

 Block1:
	lea eax,[edi+8]
	test eax,eax
	je Block11

 Block2:
	lea esi,[eax-8]
	test esi,esi
	je Block4

 Block3:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp+0x10],esi
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block6

 Block5:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlWnd>::_ReleaseRaw

 Block6:
	cmp dword ptr [esp+0x14],0
	mov byte ptr [esp+0x28],0
	je Block8

 Block7:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x14],0

 Block8:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x1C
	ret 8

 Block11:
	xor esi,esi
	jmp Block4
}
}
// TabExpedition::GetSelectMemberID
__SUB_CLASS_THIS(003AD790, __thiscall, 40848,  TabExpedition, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	push esi
	push edi
	mov edi,dword ptr [eax+4]
	test edi,edi
	je Block4

 Block1:
	mov esi,dword ptr [esp+0xC]
	test esi,esi
	jl Block4

 Block2:
	mov ecx,edi
	call EXPEDITION::GetMemberLimit
	cmp esi,eax
	jge Block4

 Block3:
	mov eax,0x2AAAAAAB
	imul esi
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x9A
	add eax,edi
	mov eax,dword ptr [eax+esi*4+8]
	pop edi
	pop esi
	ret 4

 Block4:
	pop edi
	xor eax,eax
	pop esi
	ret 4
}
}
// TabExpedition::SetControlVisible
__SUB_CLASS_THIS(003AEBC0, __thiscall, 40843,  TabExpedition, void, TabExpedition::ENUM_CTRL_ID, int32_t) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0x10]
	push 0
	lea eax,[esp+0xC]
	push eax
	mov ecx,esi
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::Insert
	cmp dword ptr [eax+0x10],0
	je Block2

 Block1:
	push 0
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,esi
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x24]
	lea ecx,[eax+4]
	mov eax,dword ptr [esp+0xC]
	push eax
	call edx

 Block2:
	pop esi
	ret 8
}
}
// TabExpedition::GetSelectMemberID
__SUB_CLASS_THIS0(003AD7E0, __thiscall, 40847,  TabExpedition, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x50]
	push eax
	call TabExpedition::GetSelectMemberID_0
	ret
}
}
// TabExpedition::OnMouseMove
__SUB_CLASS_THIS(003AD7F0, __thiscall, 40832,  TabExpedition, int32_t, long, long) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CUIUserList>::ms_pInstance]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x34]
	add ecx,4
	call edx
	xor eax,eax
	ret 8
}
}
// TabExpedition::DrawMember
_SUB_EXCEPTION_HANDLER(3AEE80)
__SUB_CLASS_THIS(003AEE80, __thiscall, 40851,  TabExpedition, void, NakedParam<_x_com_ptr<IWzCanvas>>, long, long, long, NakedParam<ZXString<char>>, long, long, TabExpedition::PARAM_SELECT_TYPE, int32_t, TabExpedition::PARAM_MEMBER_TYPE) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3AEE80
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
	xor ebp,ebp
	mov ebx,1
	mov dword ptr [esp+0x28],ebx
	cmp dword ptr [esp+0x3C],ebp
	je Block46

 Block1:
	mov dword ptr [esp+0x14],ebp
	call GetFont
	mov esi,dword ptr [eax+0xC]
	add eax,0xC
	mov dword ptr [esp+0x3C],esi
	cmp esi,ebp
	je Block3

 Block2:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block3:
	mov byte ptr [esp+0x28],2
	mov dword ptr [esp+0x1C],ebp
	cmp dword ptr [esp+0x4C],ebx
	jne Block9

 Block4:
	mov dword ptr [esp+0x14],0xFF3B5F93
	call GetFont
	add eax,8
	mov eax,dword ptr [eax]
	cmp esi,eax
	je Block9

 Block5:
	mov edi,esi
	mov esi,eax
	mov dword ptr [esp+0x3C],esi
	cmp eax,ebp
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block7:
	cmp edi,ebp
	je Block9

 Block8:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block9:
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebp
	je Block15

 Block10:
	cmp eax,2
	jne Block12

 Block11:
	mov dword ptr [esp+0x1C],7
	call GetFont
	add eax,0x14
	jmp Block14

 Block12:
	cmp eax,ebx
	jne Block15

 Block13:
	call GetFont
	add eax,0x18

 Block14:
	push eax
	lea ecx,[esp+0x40]
	call _x_com_ptr<IWzFont>::op_assign_copy
	mov esi,dword ptr [esp+0x3C]

 Block15:
	cmp dword ptr [esp+0x50],ebp
	jne Block21

 Block16:
	call GetFont
	add eax,0x10
	mov eax,dword ptr [eax]
	cmp esi,eax
	je Block21

 Block17:
	mov edi,esi
	mov esi,eax
	mov dword ptr [esp+0x3C],esi
	cmp eax,ebp
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block19:
	cmp edi,ebp
	je Block21

 Block20:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block21:
	cmp dword ptr [esp+0x14],ebp
	mov edi,dword ptr [esp+0x38]
	mov ebp,dword ptr [esp+0x34]
	je Block26

 Block22:
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x8C]
	push ecx
	push 0xF
	push 0x4E
	push edi
	push ebp
	push eax
	mov ebx,eax
	call edx
	test eax,eax
	jge Block26

 Block25:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block26:
	mov eax,dword ptr [esp+0x50]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0x4C]
	call GetJobIcon
	add esp,8
	mov eax,dword ptr [esp+0x18]
	xor ebx,ebx
	mov byte ptr [esp+0x28],3
	cmp eax,ebx
	je Block31

 Block27:
	cmp word ptr [eax],bx
	je Block31

 Block28:
	lea edx,[edi+2]
	push edx
	lea eax,[ebp+1]
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x24]
	mov dword ptr [esp+0x58],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString16::op_assign
	push ecx
	mov ecx,dword ptr [esp+0x40]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x5C],esp
	cmp eax,ebx
	je Block30

 Block29:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block30:
	call DrawImage
	add esp,0x10

 Block31:
	push 0x3E
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x54],esp
	mov dword ptr [eax],esi
	cmp esi,ebx
	je Block33

 Block32:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block33:
	lea eax,[esp+0x48]
	push eax
	call format_string_1
	add esp,0xC
	push ebx
	push esi
	push ecx
	mov ecx,esp
	lea edx,[esp+0x4C]
	mov dword ptr [esp+0x58],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	add edi,2
	push edi
	lea eax,[ebp+0xE]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x48]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [esp+0x64],esp
	cmp eax,ebx
	je Block35

 Block34:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block35:
	call _DrawTextA
	mov eax,dword ptr [esp+0x34]
	add esp,0x18
	cmp eax,ebx
	je Block42

 Block36:
	mov dword ptr [esp+0x4C],ebx
	xor ecx,ecx
	cmp dword ptr [esp+0x50],ebx
	lea edx,[esp+0x4C]
	sete cl
	mov byte ptr [esp+0x28],4
	push ecx
	push eax
	push offset _S_UIUIWINDOW2IMGUS__150
	push edx
	call ZXString16::Format
	add esp,0x10
	push eax
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x54],ebx
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x28],6
	cmp eax,ebx
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block38:
	push edi
	inc ebp
	push ebp
	push ecx
	mov ecx,esp
	lea eax,[esp+0x5C]
	mov dword ptr [esp+0x60],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString16::op_assign
	push ecx
	mov ecx,dword ptr [esp+0x40]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x64],esp
	cmp eax,ebx
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block40:
	call DrawImage
	mov eax,dword ptr [esp+0x60]
	add esp,0x10
	mov byte ptr [esp+0x28],3
	cmp eax,ebx
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block42:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x28],2
	cmp eax,ebx
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block44:
	mov byte ptr [esp+0x28],1
	cmp esi,ebx
	je Block46

 Block45:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block46:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x28],0
	test eax,eax
	je Block48

 Block47:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block48:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block50:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 0x28
}
}
// CCtrlStatic::Draw
__SUB_CLASS_THIS(000EDE10, __thiscall, 80124,  CCtrlStatic, void, long, long, const tagRECT*) {
__asm {

 Block0:
	ret 0xC
}
}
// TabExpedition::SetControlEnable
__SUB_CLASS_THIS(003AEB80, __thiscall, 40843,  TabExpedition, void, TabExpedition::ENUM_CTRL_ID, int32_t) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0x10]
	push 0
	lea eax,[esp+0xC]
	push eax
	mov ecx,esi
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::Insert
	cmp dword ptr [eax+0x10],0
	je Block2

 Block1:
	push 0
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,esi
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x1C]
	lea ecx,[eax+4]
	mov eax,dword ptr [esp+0xC]
	push eax
	call edx

 Block2:
	pop esi
	ret 8
}
}
// TabDlgInterface::OnMoveWnd
__SUB_CLASS_THIS(003AD750, __thiscall, 40809,  TabDlgInterface, void, long, long) {
__asm {

 Block0:
	ret 8
}
}
// TabExpedition::~TabExpedition
_SUB_EXCEPTION_HANDLER(3ADE20)
__SUB_CLASS_THIS0(003ADE20, __thiscall, 40825,  TabExpedition, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3ADE20
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
	int 3// TODO: 	mov dword ptr [esi],offset TabExpedition::`vftable'
	lea ecx,[esi+0x5C]
	mov dword ptr [esp+0x14],2
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0x28]
	mov byte ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<TabExpedition::ENUM_CTRL_ID, ZXString<char>, TabExpedition::ENUM_CTRL_ID>::`vftable'
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZXString<char>, TabExpedition::ENUM_CTRL_ID>::RemoveAll
	lea ecx,[esi+0x10]
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::`vftable'
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::RemoveAll
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// TabExpedition::Draw
_SUB_EXCEPTION_HANDLER(3B0790)
__SUB_CLASS_THIS(003B0790, __thiscall, 40827,  TabExpedition, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B0790
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
	mov eax,dword ptr [esi+0x40]
	sub eax,1
	mov dword ptr [esp+0x14],0
	je Block5

 Block1:
	sub eax,1
	jne Block8

 Block2:
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0xC],esp
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block4:
	mov ecx,esi
	call TabExpedition::Draw_Arrange
	jmp Block8

 Block5:
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0xC],esp
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block7:
	mov ecx,esi
	call TabExpedition::Draw_Create

 Block8:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// TabExpedition::OnChildNotify
_SUB_EXCEPTION_HANDLER(3AF940)
__SUB_CLASS_THIS(003AF940, __thiscall, 40829,  TabExpedition, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3AF940
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebp,dword ptr [esp+0x60]
	lea eax,[ebp-1]
	cmp eax,9
	ja Block7

 Block1:
	mov eax,dword ptr [esp+0x64]
	cmp eax,0x64
	jne Block5

 Block2:
	mov edi,dword ptr [TSingleton<CPartyQuestInfoManager>::ms_pInstance]
	call TabExpedition::GetSelectQuestID_1
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,edi
	call CPartyQuestInfoManager::Get
	lea ecx,[esp+0x20]
	call ZRef<PartyQuestInfo>::~ZRef<PartyQuestInfo>
	mov edx,dword ptr [esi+0x48]
	lea edi,[ebp+edx*4-5]
	push edi
	mov ecx,esi
	call TabExpedition::GetSelectQuestID_0
	test eax,eax
	jne Block4

 Block3:
	or edi,0xFFFFFFFF

 Block4:
	mov ecx,dword ptr [esi+0xC]
	push 0
	mov dword ptr [esi+0x4C],edi
	call CWnd::InvalidateRect
	jmp Block48

 Block5:
	cmp eax,0x66
	jne Block48

 Block6:
	mov ecx,dword ptr [esp+0x68]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	push ecx
	push 0x64
	push ebp
	mov ecx,esi
	call edx
	mov ecx,esi
	call TabExpedition::GetSelectQuestID_1
	jmp Block48

 Block7:
	lea eax,[ebp-0x17]
	cmp eax,0x1D
	ja Block48

 Block8:
	mov eax,dword ptr [esp+0x64]
	cmp eax,0x65
	jne Block20

 Block9:
	mov eax,dword ptr [esp+0x68]
	cmp eax,1
	jne Block18

 Block10:
	xor edi,edi
	push edi
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::GetCursorPos
	mov dword ptr [esp+0x18],edi
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x6C]
	push ecx
	lea edx,[esp+0x74]
	push edx
	lea eax,[esp+0x70]
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	add ebp,0xFFFFFFE9
	push ebp
	mov ecx,esi
	mov dword ptr [esp+0x74],edi
	mov dword ptr [esp+0x7C],edi
	mov dword ptr [esp+0x84],edi
	mov dword ptr [esp+0x80],0xFFFFFFFE
	mov dword ptr [esp+0x30],edi
	call TabExpedition::GetSelectMemberInfo
	test eax,eax
	je Block15

 Block11:
	mov edx,dword ptr [esp+0x64]
	push edx
	lea eax,[esp+0x18]
	push eax
	call GetChannelName
	add esp,8
	mov dword ptr [esp+0x64],edi
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x68]
	push ecx
	push edx
	mov byte ptr [esp+0x60],2
	call get_job_name
	add esp,4
	push eax
	mov eax,dword ptr [esp+0x68]
	push eax
	lea ecx,[esp+0x70]
	push offset _S_LVDSS
	push ecx
	call ZXString<char>::Format
	add esp,0x10
	mov ecx,esp
	mov dword ptr [esp+0x6C],esp
	push eax
	call ZXString<char>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CUIUserList>::ms_pInstance]
	call CUIUserList::SetTooltipStr
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x58],1
	cmp eax,edi
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x58],0
	cmp eax,edi
	je Block16

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block16

 Block15:
	mov ecx,dword ptr [TSingleton<CUIUserList>::ms_pInstance]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x34]
	add ecx,4
	call eax

 Block16:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	cmp eax,edi
	je Block48

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block48

 Block18:
	test eax,eax
	jne Block48

 Block19:
	mov ecx,dword ptr [TSingleton<CUIUserList>::ms_pInstance]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x34]
	add ecx,4
	call eax
	jmp Block48

 Block20:
	cmp eax,0x64
	jne Block48

 Block21:
	lea edi,[ebp-0x17]
	mov dword ptr [esi+0x54],0
	cmp edi,dword ptr [esi+0x50]
	jne Block23

 Block22:
	or eax,0xFFFFFFFF
	jmp Block24

 Block23:
	mov eax,edi

 Block24:
	mov ecx,dword ptr [esi+0xC]
	push 0
	mov dword ptr [esi+0x50],eax
	call CWnd::InvalidateRect
	push edi
	mov ecx,esi
	call TabExpedition::GetSelectMemberID_0
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edx,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	mov ebx,dword ptr [ecx+0x20B4]
	mov ecx,dword ptr [edx+4]
	mov dword ptr [esp+0x64],eax
	call EXPEDITION::GetMasterID
	xor ecx,ecx
	cmp eax,ebx
	sete cl
	mov eax,ecx
	test eax,eax
	je Block48

 Block25:
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block48

 Block26:
	cmp eax,ebx
	je Block48

 Block27:
	push 0
	lea edx,[esp+0x68]
	mov ebx,1
	push edx
	lea ecx,[esi+0x10]
	mov dword ptr [esi+0x54],ebx
	mov dword ptr [esi+0x58],edi
	mov dword ptr [esp+0x6C],ebp
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::Insert
	mov edi,dword ptr [eax+0x10]
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	mov eax,3
	mov dword ptr [esp+0x58],3
	mov word ptr [esp+0x30],ax
	mov dword ptr [esp+0x38],ebx
	mov eax,dword ptr [_D_G_GR]
	xor ebx,ebx
	mov byte ptr [esp+0x58],4
	cmp eax,ebx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push ebx
	push 0xF
	push 0x4F
	mov ecx,edi
	mov ebp,eax
	call CCtrlWnd::GetY
	push eax
	mov ecx,edi
	call CCtrlWnd::GetX
	push eax
	lea eax,[esp+0x30]
	push eax
	mov ecx,ebp
	call IWzGr2D::CreateLayer
	lea ecx,[esp+0x30]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	mov dword ptr [esp+0x64],ebx
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x6C]
	push ecx
	mov ecx,dword ptr [esi+0x58]
	lea edx,[esp+0x78]
	push edx
	lea eax,[esp+0x78]
	push eax
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x74],8
	mov dword ptr [esp+0x84],ebx
	mov dword ptr [esp+0x7C],ebx
	mov dword ptr [esp+0x34],ebx
	call TabExpedition::GetSelectMemberInfo
	mov edi,dword ptr [esp+0x14]
	test eax,eax
	je Block44

 Block30:
	push offset _D_VTMISSING
	lea ecx,[esp+0x24]
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [esp+0x68]
	mov eax,dword ptr [esp+0x60]
	push ebx
	push 1
	push 2
	push edx
	push eax
	push ecx
	lea edx,[esp+0x7C]
	mov ecx,esp
	mov dword ptr [esp+0x80],esp
	push edx
	mov byte ptr [esp+0x74],9
	call ZXString<char>::_ctor_copy
	push 1
	push ebx
	mov byte ptr [esp+0x78],0xA
	push ebx
	cmp edi,ebx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x88],esp
	lea ecx,[esp+0x48]
	push ecx
	push eax
	mov ecx,edi
	call IWzGr2DLayer::Getcanvas
	mov ecx,esi
	mov byte ptr [esp+0x80],9
	call TabExpedition::DrawMember
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x58],8
	call Ztl_variant_t::~Ztl_variant_t
	push 0x80FFFFFF
	mov ecx,edi
	call IWzGr2DLayer::Putcolor
	mov ecx,dword ptr [esi+0xC]
	lea edx,[esp+0x68]
	push edx
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x58],0xB
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebx
	je Block34

 Block33:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block34:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x5C],0xC
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x20]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0x58],8
	cmp eax,ebx
	je Block36

 Block35:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block36:
	push 0x1C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebp,eax
	mov dword ptr [esp+0x68],ebp
	mov byte ptr [esp+0x58],0xD
	cmp ebp,ebx
	je Block38

 Block37:
	mov ecx,dword ptr [esi+0x58]
	push ecx
	mov ecx,esi
	call TabExpedition::GetSelectMemberID_0
	push eax
	push edi
	mov ecx,ebp
	call DragMember::_ctor_0
	jmp Block39

 Block38:
	xor eax,eax

 Block39:
	mov esi,dword ptr [esi+0xC]
	mov byte ptr [esp+0x58],8
	cmp esi,ebx
	je Block41

 Block40:
	lea ecx,[esi+4]
	jmp Block42

 Block41:
	xor ecx,ecx

 Block42:
	push 1
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::BeginDragDrop
	lea edx,[esp+0x68]
	push 0x75E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0x5C],0xE
	call play_ui_sound
	mov eax,dword ptr [esp+0x6C]
	add esp,4
	mov byte ptr [esp+0x58],8
	cmp eax,ebx
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block44:
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x58],7
	cmp eax,ebx
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	mov dword ptr [esp+0x58],0xFFFFFFFF
	cmp edi,ebx
	je Block48

 Block47:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block48:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret 0xC
}
}
// TabExpedition::GetSelectMemberInfo
__SUB_CLASS_THIS(003AE3B0, __thiscall, 40857,  TabExpedition, long, long, ZXString<char>&, long&, long&, long&, int32_t&, int32_t&) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [eax+4]
	mov dword ptr [esp+0x10],edi
	test edi,edi
	je Block8

 Block1:
	mov ebx,dword ptr [esp+0x18]
	test ebx,ebx
	jl Block8

 Block2:
	mov ecx,edi
	call EXPEDITION::GetMemberLimit
	cmp ebx,eax
	jge Block8

 Block3:
	mov eax,0x2AAAAAAB
	imul ebx
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	mov edx,esi
	imul edx,0xB2
	lea ecx,[esi+esi*2]
	add ecx,ecx
	sub ebx,ecx
	lea edi,[edx+edi+8]
	mov ebp,dword ptr [edi+ebx*4]
	test ebp,ebp
	je Block8

 Block4:
	mov ecx,dword ptr [esp+0x1C]
	mov eax,ebx
	imul eax,0xD
	lea eax,[eax+edi+0x18]
	push eax
	mov dword ptr [esp+0x1C],eax
	call ZXString<char>::AssignCStr
	mov ecx,dword ptr [edi+ebx*4+0x7E]
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [edx],ecx
	mov eax,dword ptr [edi+ebx*4+0x66]
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [ecx],eax
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [edi+ebx*4+0x96]
	mov eax,dword ptr [esp+0x28]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [eax],edx
	call ZXString<char>::AssignCStr
	mov edx,dword ptr [esp+0x2C]
	xor eax,eax
	cmp dword ptr [edi+0xAE],ebp
	sete al
	mov dword ptr [edx],eax
	test eax,eax
	je Block7

 Block5:
	mov eax,dword ptr [esp+0x10]
	cmp esi,dword ptr [eax+4]
	jne Block7

 Block6:
	mov ecx,dword ptr [esp+0x30]
	pop edi
	mov eax,1
	pop esi
	mov dword ptr [ecx],eax
	mov eax,ebp
	pop ebp
	pop ebx
	pop ecx
	ret 0x1C

 Block7:
	mov ecx,dword ptr [esp+0x30]
	pop edi
	xor eax,eax
	pop esi
	mov dword ptr [ecx],eax
	mov eax,ebp
	pop ebp
	pop ebx
	pop ecx
	ret 0x1C

 Block8:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	pop ecx
	ret 0x1C
}
}
// TabDlgInterface::~TabDlgInterface
__SUB_CLASS_THIS0(003AD780, __thiscall, 40803,  TabDlgInterface, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZRefCounted::`vftable'
	ret
}
}
// CCtrlStatic::OnMouseButton
__SUB_CLASS_THIS(000EDDD0, __thiscall, 80125,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,ecx
	mov ecx,dword ptr [esp+4]
	sub ecx,0x201
	je Block3

 Block1:
	sub ecx,2
	jne Block4

 Block2:
	push ecx
	mov ecx,dword ptr [eax+0x20]
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x1C]
	push 0x66
	push eax
	call edx
	ret 0x10

 Block3:
	mov ecx,dword ptr [eax+0x20]
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x1C]
	push 0
	push 0x64
	push eax
	call edx

 Block4:
	ret 0x10
}
}
// TabExpedition::OnButtonClicked
_SUB_EXCEPTION_HANDLER(3AF5C0)
__SUB_CLASS_THIS(003AF5C0, __thiscall, 40828,  TabExpedition, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3AF5C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x34]
	add eax,0xFFFFFFF4
	cmp eax,0xA
	ja Block30

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block5
cmp EAX, 2
je Block8
cmp EAX, 3
je Block12
cmp EAX, 4
je Block22
cmp EAX, 5
je Block21
cmp EAX, 6
je Block25
cmp EAX, 7
je Block19
cmp EAX, 8
je Block23
cmp EAX, 9
je Block20
cmp EAX, 10
je Block24


 Block2:
	mov eax,dword ptr [esi+0x48]
	dec eax
	cmp eax,1
	jg Block4

 Block3:
	mov eax,1

 Block4:
	mov ecx,dword ptr [esi+0xC]
	push 0
	mov dword ptr [esi+0x48],eax
	mov dword ptr [esi+0x4C],0xFFFFFFFF
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 4

 Block5:
	call TabExpedition::GetQuestMaxPage
	mov ecx,dword ptr [esi+0x48]
	inc ecx
	cmp ecx,eax
	jge Block7

 Block6:
	mov eax,ecx

 Block7:
	mov ecx,dword ptr [esi+0xC]
	push 0
	mov dword ptr [esi+0x48],eax
	mov dword ptr [esi+0x4C],0xFFFFFFFF
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 4

 Block8:
	call TabExpedition::GetSelectQuestID_1
	test eax,eax
	je Block30

 Block9:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [ecx+0x3604],0
	je Block11

 Block10:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x48],esp
	push 0x14C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 4

 Block11:
	mov ecx,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	push eax
	call ExpeditionIntermediary::SendExpCreatePacket
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 4

 Block12:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0
	push 0x15
	call CWvsContext::UI_Toggle
	mov ecx,dword ptr [TSingleton<CUIPartySearch>::ms_pInstance]
	test ecx,ecx
	je Block30

 Block13:
	mov eax,dword ptr [esi+0x40]
	cmp eax,1
	jne Block16

 Block14:
	mov ecx,esi
	call TabExpedition::GetSelectQuestID_1
	test eax,eax
	je Block30

 Block15:
	mov ecx,dword ptr [TSingleton<CUIPartySearch>::ms_pInstance]
	push eax
	call CUIPartySearch::RequestPartyAdverSearch
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 4

 Block16:
	cmp eax,2
	jne Block30

 Block17:
	mov eax,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [edx]
	test eax,eax
	je Block30

 Block18:
	push eax
	call CUIPartySearch::RequestPartyAdverSearch
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 4

 Block19:
	call TabExpedition::OnInvite
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 4

 Block20:
	mov ecx,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	call ExpeditionIntermediary::SendWithdrawPacket
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 4

 Block21:
	mov edi,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	call TabExpedition::GetSelectMemberID_1
	push eax
	mov ecx,edi
	call ExpeditionIntermediary::SendExpKickPacket
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 4

 Block22:
	mov edi,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	call TabExpedition::GetSelectMemberID_1
	push eax
	mov ecx,edi
	call ExpeditionIntermediary::SendExpChangeMasterPacket
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 4

 Block23:
	mov ecx,dword ptr [esi+0x50]
	mov ebx,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	mov eax,0x2AAAAAAB
	imul ecx
	mov edi,edx
	shr edi,0x1F
	mov ecx,esi
	add edi,edx
	call TabExpedition::GetSelectMemberID_1
	push eax
	push edi
	mov ecx,ebx
	call ExpeditionIntermediary::SendExpChangeBossPacket
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 4

 Block24:
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 3
	call CUIStatusBar::SetChatTarget
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 4

 Block25:
	mov dword ptr [esp+0x34],0
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x14]
	push ecx
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x28]
	push eax
	mov eax,dword ptr [esi+0x50]
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x48]
	push edx
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x48],0
	mov dword ptr [esp+0x2C],0
	call TabExpedition::GetSelectMemberInfo
	test eax,eax
	je Block28

 Block26:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp eax,dword ptr [ecx+0x20B4]
	je Block28

 Block27:
	push 0
	push ecx
	lea edx,[esp+0x3C]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	call ZXString<char>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	call CUIStatusBar::SetWhisperTarget
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0
	call CUIStatusBar::StartChat

 Block28:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 4
}
}
// TabExpedition::ActivateControls
_SUB_EXCEPTION_HANDLER(3B08F0)
__SUB_CLASS_THIS0(003B08F0, __thiscall, 40825,  TabExpedition, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B08F0
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
	mov esi,ecx
	lea ebx,[esi+0x10]
	mov ecx,ebx
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::GetHeadPosition
	xor ebp,ebp
	mov dword ptr [esp+0x14],eax
	cmp eax,ebp
	je Block10

 Block1:
	lea ecx,[ecx]

 Block2:
	mov dword ptr [esp+0x20],ebp
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebx
	mov dword ptr [esp+0x34],ebp
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::GetNext
	mov edi,dword ptr [esp+0x20]
	cmp edi,ebp
	je Block4

 Block3:
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x24]
	lea ecx,[edi+4]
	push 1
	call eax
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x20]
	push ebp
	mov ecx,edi
	call eax

 Block4:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp edi,ebp
	je Block9

 Block5:
	add edi,8
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebp
	je Block8

 Block7:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block8:
	mov dword ptr [esp+0x20],ebp

 Block9:
	cmp dword ptr [esp+0x14],ebp
	jne Block2

 Block10:
	mov ecx,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	xor eax,eax
	cmp dword ptr [ecx+4],ebp
	setne al
	inc eax
	cmp dword ptr [esi+0x40],eax
	je Block12

 Block11:
	push eax
	mov ecx,esi
	call TabExpedition::SetState

 Block12:
	mov eax,dword ptr [esi+0x40]
	cmp eax,1
	jne Block14

 Block13:
	xor edx,edx
	cmp dword ptr [esi+0x48],eax
	mov ecx,esi
	setg dl
	push edx
	push 0xC
	call TabExpedition::SetControlEnable
	mov ecx,esi
	call TabExpedition::GetQuestMaxPage
	xor ecx,ecx
	cmp dword ptr [esi+0x48],eax
	setl cl
	push ecx
	push 0xD
	mov ecx,esi
	call TabExpedition::SetControlEnable
	mov ecx,esi
	call TabExpedition::GetQuestMaxPage
	xor edx,edx
	cmp eax,1
	setg dl
	push edx
	push 0xC
	call TabExpedition::SetControlVisible
	mov ecx,esi
	call TabExpedition::GetQuestMaxPage
	xor ecx,ecx
	cmp eax,1
	setg cl
	push ecx
	push 0xD
	mov ecx,esi
	call TabExpedition::SetControlVisible
	mov ecx,esi
	call TabExpedition::GetSelectQuestID_1
	push eax
	push 0xE
	mov ecx,esi
	call TabExpedition::SetControlEnable
	push 1
	push 0xF
	mov ecx,esi
	call TabExpedition::SetControlEnable
	push ebp
	push 0x10
	mov ecx,esi
	call TabExpedition::SetControlEnable
	push ebp
	push 0x11
	mov ecx,esi
	call TabExpedition::SetControlEnable
	push ebp
	push 0x12
	mov ecx,esi
	call TabExpedition::SetControlEnable
	push ebp
	push 0x13
	mov ecx,esi
	call TabExpedition::SetControlEnable
	push ebp
	push 0x14
	mov ecx,esi
	call TabExpedition::SetControlEnable
	push ebp
	push 0x15
	mov ecx,esi
	call TabExpedition::SetControlEnable
	push ebp
	jmp Block43

 Block14:
	cmp eax,2
	jne Block44

 Block15:
	mov ecx,esi
	call TabExpedition::GetSelectMemberID_1
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ebp,dword ptr [edx+0x20B4]
	mov ebx,eax
	mov eax,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x18],ecx
	call EXPEDITION::GetMasterID
	xor ecx,ecx
	cmp eax,ebp
	mov eax,dword ptr [esi+0x50]
	sete cl
	cdq
	push 0
	push 0xE
	mov edi,ecx
	mov ecx,6
	idiv ecx
	xor ecx,ecx
	mov dword ptr [esp+0x24],eax
	imul eax,0xB2
	add eax,dword ptr [esp+0x20]
	cmp dword ptr [eax+edx*4+0x9E],ecx
	setge cl
	mov dword ptr [esp+0x1C],ecx
	mov ecx,esi
	call TabExpedition::SetControlEnable
	push 1
	push 0xF
	mov ecx,esi
	call TabExpedition::SetControlEnable
	test edi,edi
	je Block20

 Block16:
	test ebx,ebx
	je Block20

 Block17:
	cmp ebx,ebp
	je Block20

 Block18:
	cmp dword ptr [esp+0x14],0
	je Block20

 Block19:
	mov eax,1
	jmp Block21

 Block20:
	xor eax,eax

 Block21:
	push eax
	push 0x10
	mov ecx,esi
	call TabExpedition::SetControlEnable
	test edi,edi
	je Block26

 Block22:
	test ebx,ebx
	je Block26

 Block23:
	cmp ebx,ebp
	je Block26

 Block24:
	call get_field
	mov ecx,eax
	call CField::IsUnableToKickParty
	test eax,eax
	jne Block26

 Block25:
	mov eax,1
	jmp Block27

 Block26:
	xor eax,eax

 Block27:
	push eax
	push 0x11
	mov ecx,esi
	call TabExpedition::SetControlEnable
	test ebx,ebx
	je Block30

 Block28:
	cmp ebx,ebp
	je Block30

 Block29:
	mov eax,1
	jmp Block31

 Block30:
	xor eax,eax

 Block31:
	push eax
	push 0x12
	mov ecx,esi
	call TabExpedition::SetControlEnable
	push edi
	push 0x13
	mov ecx,esi
	call TabExpedition::SetControlEnable
	test edi,edi
	je Block37

 Block32:
	test ebx,ebx
	je Block37

 Block33:
	cmp ebx,ebp
	je Block37

 Block34:
	cmp dword ptr [esp+0x14],0
	je Block37

 Block35:
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [esp+0x18]
	cmp dword ptr [eax+4],edx
	je Block37

 Block36:
	mov eax,1
	jmp Block38

 Block37:
	xor eax,eax

 Block38:
	push eax
	push 0x14
	mov ecx,esi
	call TabExpedition::SetControlEnable
	mov edi,dword ptr [_D_G_PSTAGE+4]
	test edi,edi
	je Block41

 Block39:
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[edi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block41

 Block40:
	mov ecx,edi
	jmp Block42

 Block41:
	xor ecx,ecx

 Block42:
	call CField::IsUnableToWithdrawParty
	neg eax
	sbb eax,eax
	inc eax
	push eax
	push 0x15
	mov ecx,esi
	call TabExpedition::SetControlEnable
	push 1

 Block43:
	push 0x16
	mov ecx,esi
	call TabExpedition::SetControlEnable

 Block44:
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
// CCtrlPQuestItem::Draw
_SUB_EXCEPTION_HANDLER(590690)
__SUB_CLASS_THIS(00590690, __thiscall, 80106,  CCtrlPQuestItem, void, long, long, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_590690
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0
	lea eax,[esp+0x10]
	push eax
	call CCtrlWnd::GetCanvas
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x2C]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x14],esp
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x24],0
	call edx
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x28]
	mov edi,dword ptr [esp+0x10]
	push eax
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block2

 Block1:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block2:
	mov ecx,dword ptr [esi+0x38]
	call DoDraw
	add esp,0x10
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test edi,edi
	je Block4

 Block3:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block4:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 0xC
}
}
// TabExpedition::GetQuestMaxPage
__SUB_CLASS_THIS0(003AD520, __thiscall, 40847,  TabExpedition, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x44]
	dec eax
	cdq
	and edx,3
	add eax,edx
	sar eax,2
	inc eax
	ret
}
}
// TabDlgInterface::OnKey
__SUB_CLASS_THIS(003AD760, __thiscall, 40810,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	ret 8
}
}
// TabExpedition::Draw_Arrange
_SUB_EXCEPTION_HANDLER(3B0510)
__SUB_CLASS_THIS(003B0510, __thiscall, 40827,  TabExpedition, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B0510
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
	mov dword ptr [esp+0x1C],esi
	mov eax,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [ebx]
	xor ebp,ebp
	mov dword ptr [esp+0x34],ebp
	cmp eax,ebp
	je Block16

 Block1:
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [TSingleton<CPartyQuestInfoManager>::ms_pInstance]
	call CPartyQuestInfoManager::Get
	mov edx,dword ptr [esp+0x3C]
	push 1
	push 0x3C
	push 0xA
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x44],1
	mov dword ptr [esp+0x28],esp
	cmp eax,ebp
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	mov eax,dword ptr [esp+0x38]
	push eax
	call DrawQuestUnit2
	add esp,0x14
	mov dword ptr [esp+0x18],ebp
	mov ecx,ebx
	mov byte ptr [esp+0x34],2
	call EXPEDITION::GetMemberLimit
	push eax
	mov ecx,ebx
	call EXPEDITION::GetMemberCount
	push eax
	lea ecx,[esp+0x20]
	push offset _S_DD
	push ecx
	call ZXString<char>::Format
	add esp,0x10
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x34],4
	cmp eax,ebp
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	push 2
	call GetFont
	add eax,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x20]
	mov dword ptr [esp+0x2C],esp
	push edx
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	push 0x42
	push 0xF5
	push ecx
	mov ecx,dword ptr [esp+0x54]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x38],esp
	cmp eax,ebp
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block7:
	call _DrawTextA
	add esp,0x18
	push ebp
	push ebp
	push offset _S_UIUIWINDOW2IMGUS__161
	push ecx
	mov ecx,dword ptr [esp+0x4C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x30],esp
	cmp eax,ebp
	je Block9

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block9:
	lea ecx,[esi+0x5C]
	call CLayoutMan::CopyToCanvas_1
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],1
	cmp eax,ebp
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x34],0
	cmp eax,ebp
	je Block16

 Block12:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block15

 Block13:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block15

 Block14:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block15:
	mov dword ptr [esp+0x28],ebp

 Block16:
	mov ecx,ebx
	call EXPEDITION::GetMaxPartyIndex
	test eax,eax
	jl Block22

 Block17:
	lea ecx,[ebx+8]
	mov dword ptr [esp+0x14],ecx

 Block18:
	mov edx,dword ptr [ebx+4]
	mov esi,dword ptr [esp+0x14]
	push edx
	mov eax,0x55555556
	imul ebp
	sub esp,0xB4
	mov edi,esp
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*2]
	mov ecx,0x2C
	rep movsd
	mov ecx,eax
	imul ecx,0x61
	mov eax,ebp
	sub eax,edx
	imul eax,0x52
	add ecx,0x6D
	push ebp
	add eax,0xA
	push ecx
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x104]
	mov eax,esp
	movsw
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x104]
	mov dword ptr [esp+0xE8],esp
	test eax,eax
	je Block20

 Block19:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block20:
	mov ecx,dword ptr [esp+0xE4]
	call TabExpedition::DrawParty
	add dword ptr [esp+0x14],0xB2
	mov ecx,ebx
	inc ebp
	call EXPEDITION::GetMaxPartyIndex
	cmp ebp,eax
	jle Block18

 Block21:
	xor ebp,ebp

 Block22:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebp
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
	pop ebp
	pop ebx
	add esp,0x24
	ret 4
}
}
// DragMember::DragMember
_SUB_EXCEPTION_HANDLER(3AD990)
__SUB_CLASS_THIS(003AD990, __thiscall, 87275,  DragMember, void, IWzGr2DLayer*, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3AD990
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
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [esp+0x1C]
	int 3// TODO: 	mov dword ptr [esi],offset IDraggable::`vftable'
	mov dword ptr [esi+0xC],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esi+0x18],eax
	int 3// TODO: 	mov dword ptr [esi],offset DragMember::`vftable'
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 8
}
}
// TabExpedition::OnMoveWnd
__SUB_CLASS_THIS(003AD500, __thiscall, 40830,  TabExpedition, void, long, long) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0xC]
	push 0
	call CWnd::InvalidateRect
	ret 8
}
}
// TabExpedition::OnStatChanged
__SUB_CLASS_THIS0(003AD5E0, __thiscall, 40825,  TabExpedition, void) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0xC]
	push 0
	call CWnd::InvalidateRect
	ret
}
}
// TabExpedition::GetPartyIndexOfRegion
__SUB_CLASS_THIS(003AD530, __thiscall, 40863,  TabExpedition, long, long, long) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	xor esi,esi
	lea ecx,[ecx]

 Block1:
	mov eax,0x55555556
	imul esi
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax+eax*2]
	mov edx,ecx
	mov ecx,esi
	sub ecx,edx
	imul ecx,0x52
	lea edx,[ecx+0xA]
	cmp edx,edi
	jge Block5

 Block2:
	add ecx,0x59
	cmp edi,ecx
	jge Block5

 Block3:
	imul eax,0x61
	lea ecx,[eax+0x6D]
	cmp ecx,ebx
	jge Block5

 Block4:
	add eax,0xCD
	cmp ebx,eax
	jl Block7

 Block5:
	inc esi
	cmp esi,5
	jl Block1

 Block6:
	pop edi
	pop esi
	or eax,0xFFFFFFFF
	pop ebx
	ret 8

 Block7:
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	ret 8
}
}
// CCtrlSelectQuest::GetBackUOL
__SUB_CLASS_THIS0(003AE4B0, __thiscall, 87287,  CCtrlSelectQuest, ZXString16) {
__asm {

 Block0:
	push ecx
	cmp dword ptr [ecx+0x3C],0
	mov dword ptr [esp],0
	mov edx,offset _S_UIUIWINDOW2IMGUS__129
	jne Block2

 Block1:
	mov edx,offset _S_UIUIWINDOW2IMGUS__128

 Block2:
	push edi
	mov edi,dword ptr [esp+0xC]
	mov dword ptr [edi],0
	test edx,edx
	je Block6

 Block3:
	mov eax,edx
	push esi
	lea esi,[eax+2]
	lea ecx,[ecx]

 Block4:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block4

 Block5:
	sub eax,esi
	sar eax,1
	mov esi,eax
	lea eax,[esi+esi]
	push eax
	push edx
	push 0
	push esi
	mov ecx,edi
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	pop esi

 Block6:
	mov eax,edi
	pop edi
	pop ecx
	ret 4
}
}
// CCtrlStatic::~CCtrlStatic
__SUB_CLASS_THIS0(003AD510, __thiscall, 80133,  CCtrlStatic, void) {
__asm {

 Block0:
	jmp  CCtrlWnd::~CCtrlWnd
}
}
// TabExpedition::DetachCtrl
__SUB_CLASS_THIS(003AEDA0, __thiscall, 40845,  TabExpedition, void, TabExpedition::ENUM_CTRL_ID) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0x10]
	push 0
	lea eax,[esp+0xC]
	push eax
	mov ecx,esi
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::Insert
	mov ecx,dword ptr [eax+0x10]
	test ecx,ecx
	je Block2

 Block1:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	lea ecx,[esp+8]
	push ecx
	mov ecx,esi
	call ZMap<TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabExpedition::ENUM_CTRL_ID>::RemoveKey

 Block2:
	pop esi
	ret 4
}
}
// TabExpedition::InitState
__SUB_CLASS_THIS(003AFF90, __thiscall, 40834,  TabExpedition, void, TabExpedition::ENUM_STATE) {
__asm {

 Block0:
	push ecx
	push esi
	push edi
	push ecx
	mov edi,esp
	mov dword ptr [esp+0xC],esp
	push 0x64
	push offset _S_UIUIWINDOW2IMGUS__159
	push 0
	mov esi,ecx
	push 0x32
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x32
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	push 0xE
	mov ecx,esi
	call TabExpedition::AttachButton
	push ecx
	mov edi,esp
	mov dword ptr [esp+0xC],esp
	push 0x64
	push offset _S_UIUIWINDOW2IMGUS__158
	push 0
	push 0x32
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x32
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	push 0xF
	mov ecx,esi
	call TabExpedition::AttachButton
	push ecx
	mov edi,esp
	mov dword ptr [esp+0xC],esp
	push 0x70
	push offset _S_UIUIWINDOW2IMGUS__157
	push 0
	push 0x38
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x38
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	push 0x10
	mov ecx,esi
	call TabExpedition::AttachButton
	push ecx
	mov edi,esp
	mov dword ptr [esp+0xC],esp
	push 0x60
	push offset _S_UIUIWINDOW2IMGUS__156
	push 0
	push 0x30
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x30
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	push 0x11
	mov ecx,esi
	call TabExpedition::AttachButton
	push ecx
	mov dword ptr [esp+0xC],esp
	mov edi,esp
	push 0x66
	push offset _S_UIUIWINDOW2IMGUS__155
	push 0
	push 0x33
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x33
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	push 0x12
	mov ecx,esi
	call TabExpedition::AttachButton
	push ecx
	mov edi,esp
	mov dword ptr [esp+0xC],esp
	push 0x64
	push offset _S_UIUIWINDOW2IMGUS__154
	push 0
	push 0x32
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x32
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	push 0x13
	mov ecx,esi
	call TabExpedition::AttachButton
	push ecx
	mov edi,esp
	mov dword ptr [esp+0xC],esp
	push 0x6C
	push offset _S_UIUIWINDOW2IMGUS__153
	push 0
	push 0x36
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x36
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	push 0x14
	mov ecx,esi
	call TabExpedition::AttachButton
	push ecx
	mov edi,esp
	mov dword ptr [esp+0xC],esp
	push 0x68
	push offset _S_UIUIWINDOW2IMGUS__152
	push 0
	push 0x34
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x34
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	push 0x15
	mov ecx,esi
	call TabExpedition::AttachButton
	push ecx
	mov edi,esp
	mov dword ptr [esp+0xC],esp
	push 0x60
	push offset _S_UIUIWINDOW2IMGUS__151
	mov dword ptr [edi],0
	push 0
	push 0x30
	mov ecx,edi
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x30
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	push 0x16
	mov ecx,esi
	call TabExpedition::AttachButton
	mov eax,dword ptr [esp+0x10]
	sub eax,1
	jne Block2

 Block1:
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x14],esp
	push 0x46
	push offset _S_UIUIWINDOW2IMGUS__133
	push eax
	push 0x23
	mov ecx,edi
	mov dword ptr [edi],eax
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x23
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	push 0xC
	mov ecx,esi
	call TabExpedition::AttachButton
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x14],esp
	push 0x48
	push offset _S_UIUIWINDOW2IMGUS__132
	push 0
	push 0x24
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x24
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	push 0xD
	mov ecx,esi
	call TabExpedition::AttachButton

 Block2:
	pop edi
	pop esi
	pop ecx
	ret 4
}
}
// TabExpedition::EndDragDrop
__SUB_CLASS_THIS0(003AD5F0, __thiscall, 40825,  TabExpedition, void) {
__asm {

 Block0:
	mov dword ptr [ecx+0x54],0
	mov dword ptr [ecx+0x58],0xFFFFFFFF
	mov ecx,dword ptr [ecx+0xC]
	push 0
	call CWnd::InvalidateRect
	ret
}
}
// TabDlgInterface::DoAction
__SUB_CLASS_THIS(003AD770, __thiscall, 40809,  TabDlgInterface, void, long, long) {
__asm {

 Block0:
	ret 8
}
}
