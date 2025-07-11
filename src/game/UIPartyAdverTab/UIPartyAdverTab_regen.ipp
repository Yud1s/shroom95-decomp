#include "regen.hpp"
// UIPartyAdverTab.ipp
#include "UIPartyAdverTab.hpp"

// CCtrlSelectPartyQuest::GetBackUOL
__SUB_CLASS_THIS0(00414020, __thiscall, 86078,  CCtrlSelectPartyQuest, ZXString16) {
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
// TabPartyAdver::OnMoveWnd
__SUB_CLASS_THIS(004115F0, __thiscall, 85980,  TabPartyAdver, void, long, long) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0xC]
	push 0
	call CWnd::InvalidateRect
	ret 8
}
}
// TabPartyAdver::OnCreate
_SUB_EXCEPTION_HANDLER(415FC0)
__SUB_CLASS_THIS(00415FC0, __thiscall, 85976,  TabPartyAdver, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_415FC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0xC]
	push 0
	push 0
	push eax
	lea ecx,[esi+0xAC8]
	call CLayoutMan::Init
	lea ecx,[esp+0x14]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x40]
	push edi
	push eax
	mov dword ptr [esp+0x4C],0
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	or ebx,0xFFFFFFFF
	add esp,0xC
	mov dword ptr [esp+0x40],ebx
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	lea edx,[esp+0x14]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ebp,[esi+0x44]
	push ebp
	push eax
	mov dword ptr [esp+0x4C],1
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0x40],ebx
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	lea eax,[esp+0x14]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[esi+0x48]
	push 0
	push ecx
	push eax
	mov dword ptr [esp+0x4C],2
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0x40],ebx
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	lea eax,[esp+0x18]
	push eax
	push 0xFFFFFFFF
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	mov ebx,3
	push ecx
	mov dword ptr [esp+0x58],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x50],4
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov byte ptr [esp+0x50],bl
	call IWzFont::Create
	cmp word ptr [esp+0x18],8
	mov dword ptr [esp+0x40],0xFFFFFFFF
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push ecx
	call edi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	lea eax,[esp+0x18]
	push eax
	push 0xFFAAAAAA
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	mov ebx,5
	push ecx
	mov dword ptr [esp+0x58],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x50],6
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov byte ptr [esp+0x50],bl
	call IWzFont::Create
	mov ebp,8
	mov dword ptr [esp+0x40],0xFFFFFFFF
	cmp word ptr [esp+0x18],bp
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block22:
	lea ecx,[esp+0x28]
	push ecx
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	lea eax,[esp+0x28]
	push eax
	push 0xFF5C778C
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	mov ebx,7
	push ecx
	mov dword ptr [esp+0x58],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0x48]
	mov byte ptr [esp+0x50],8
	test ecx,ecx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov byte ptr [esp+0x50],bl
	call IWzFont::Create
	mov dword ptr [esp+0x40],0xFFFFFFFF
	cmp word ptr [esp+0x28],bp
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block30:
	push 1
	mov ecx,esi
	call TabPartyAdver::SetState
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 4
}
}
// TabPartyAdver::SendPartyApplyPacket
__SUB_CLASS_THIS0(00414810, __thiscall, 85975,  TabPartyAdver, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call TabPartyAdver::GetSelectedPartyID
	test eax,eax
	je Block2

 Block1:
	push eax
	mov ecx,esi
	call TabPartyAdver::SendPartyApplyPacketTo

 Block2:
	pop esi
	ret
}
}
// TabPartyAdver::ActivateControls
_SUB_EXCEPTION_HANDLER(415310)
__SUB_CLASS_THIS0(00415310, __thiscall, 85975,  TabPartyAdver, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_415310
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
	mov esi,ecx
	lea ebx,[esi+0x10]
	mov ecx,ebx
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::GetHeadPosition
	xor ebp,ebp
	mov dword ptr [esp+0x14],eax
	cmp eax,ebp
	je Block10

 Block1:
	lea ecx,[ecx]

 Block2:
	mov dword ptr [esp+0x1C],ebp
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebx
	mov dword ptr [esp+0x30],ebp
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::GetNext
	mov edi,dword ptr [esp+0x1C]
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
	mov dword ptr [esp+0x28],0xFFFFFFFF
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
	mov dword ptr [esp+0x1C],ebp

 Block9:
	cmp dword ptr [esp+0x14],ebp
	jne Block2

 Block10:
	mov eax,dword ptr [esi+0x4C]
	mov ebx,1
	cmp eax,ebx
	jne Block12

 Block11:
	xor eax,eax
	cmp dword ptr [esi+0x54],ebx
	mov ecx,esi
	setg al
	push eax
	push ebx
	call TabPartyAdver::SetControlEnable
	mov ecx,esi
	call TabPartyAdver::GetQuestMaxPage
	xor ecx,ecx
	cmp dword ptr [esi+0x54],eax
	setl cl
	push ecx
	push 2
	mov ecx,esi
	call TabPartyAdver::SetControlEnable
	mov ecx,esi
	call TabPartyAdver::GetSelectQuestID_1
	push eax
	push ebp
	mov ecx,esi
	call TabPartyAdver::SetControlEnable
	mov ecx,esi
	call TabPartyAdver::GetQuestMaxPage
	xor edx,edx
	cmp eax,ebx
	setg dl
	push edx
	push ebx
	call TabPartyAdver::SetControlVisible
	mov ecx,esi
	call TabPartyAdver::GetQuestMaxPage
	xor ecx,ecx
	cmp eax,ebx
	setg cl
	push ecx
	push 2
	jmp Block18

 Block12:
	cmp eax,2
	jne Block19

 Block13:
	mov ecx,esi
	call TabPartyAdver::GetSelectedPartyAdver
	cmp eax,ebp
	je Block16

 Block14:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edi,dword ptr [edx+0x20B4]
	mov edx,dword ptr [eax]
	mov ecx,eax
	mov eax,dword ptr [edx+0x20]
	call eax
	cmp eax,edi
	jne Block16

 Block15:
	mov eax,ebx
	jmp Block17

 Block16:
	xor eax,eax

 Block17:
	push eax
	push 0x11
	mov ecx,esi
	call TabPartyAdver::SetControlEnable
	mov ecx,dword ptr [esi+0x64]
	push ecx
	push 0x12
	mov ecx,esi
	call TabPartyAdver::SetControlEnable
	mov ecx,esi
	call TabPartyAdver::GetSelectedPartyID
	push eax
	push 0x13
	mov ecx,esi
	call TabPartyAdver::SetControlEnable
	mov ecx,esi
	call TabPartyAdver::GetSelectedPartyID
	push eax
	push 0x14
	mov ecx,esi
	call TabPartyAdver::SetControlEnable
	xor edx,edx
	cmp dword ptr [esi+0x70],ebx
	mov ecx,esi
	setg dl
	push edx
	push 0xE
	call TabPartyAdver::SetControlEnable
	mov ecx,esi
	call TabPartyAdver::GetPartyMaxPage
	xor ecx,ecx
	cmp dword ptr [esi+0x70],eax
	setl cl
	push ecx
	push 0xF
	mov ecx,esi
	call TabPartyAdver::SetControlEnable
	mov ecx,esi
	call TabPartyAdver::GetPartyMaxPage
	xor edx,edx
	cmp eax,ebx
	setg dl
	mov ecx,esi
	push edx
	push 0xE
	call TabPartyAdver::SetControlVisible
	mov ecx,esi
	call TabPartyAdver::GetPartyMaxPage
	xor ecx,ecx
	cmp eax,ebx
	setg cl
	push ecx
	push 0xF

 Block18:
	mov ecx,esi
	call TabPartyAdver::SetControlVisible

 Block19:
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
// TabPartyAdver::IsTitleValid
__SUB_CLASS_THIS(00412E10, __thiscall, 86006,  TabPartyAdver, int32_t, ZXString<char>&) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	mov eax,dword ptr [esi]
	test eax,eax
	je Block2

 Block1:
	cmp byte ptr [eax],0
	jne Block3

 Block2:
	xor eax,eax
	pop esi
	ret 4

 Block3:
	push edi
	push 1
	push 0
	push 1
	push 0x400
	mov ecx,esi
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	mov ecx,esi
	mov edi,eax
	call ZXString<char>::ReleaseBuffer
	xor eax,eax
	test edi,edi
	pop edi
	setne al
	pop esi
	ret 4
}
}
// TabPartyAdver::OnChildNotify
_SUB_EXCEPTION_HANDLER(415600)
__SUB_CLASS_THIS(00415600, __thiscall, 85979,  TabPartyAdver, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_415600
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
	mov esi,ecx
	cmp dword ptr [esp+0x34],0x65
	mov ebp,dword ptr [esp+0x30]
	jne Block12

 Block1:
	push 0
	lea eax,[esp+0x34]
	lea edi,[esi+0x10]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x38],ebp
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::Insert
	cmp dword ptr [eax+0x10],0
	je Block4

 Block2:
	push 0
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x38],ebp
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x48]
	push offset CCtrlButton::ms_RTTI_CCtrlButton
	call eax
	test eax,eax
	je Block4

 Block3:
	push 0
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x38],ebp
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::Insert
	mov ebx,dword ptr [eax+0x10]
	jmp Block5

 Block4:
	xor ebx,ebx

 Block5:
	mov edi,dword ptr [esp+0x38]
	test ebx,ebx
	je Block13

 Block6:
	test edi,edi
	je Block13

 Block7:
	push 0
	lea edx,[esp+0x34]
	push edx
	lea ecx,[esi+0x28]
	mov dword ptr [esp+0x38],ebp
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZXString<char>, TabPartyAdver::ENUM_CTRL_ID>::Insert
	add eax,0xC
	push eax
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x34],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0
	test eax,eax
	je Block10

 Block8:
	cmp byte ptr [eax],0
	je Block10

 Block9:
	push 1
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x1C],esp
	push 0
	push 5
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_RIGHT__1]
	mov dword ptr [eax],ecx
	mov dl,byte ptr [_S_RIGHT__1+4]
	push 5
	mov ecx,edi
	mov byte ptr [eax+4],dl
	call ZXString<char>::ReleaseBuffer
	push ecx
	mov ecx,esp
	lea eax,[esp+0x3C]
	mov dword ptr [esp+0x24],esp
	push eax
	mov byte ptr [esp+0x38],1
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,ebx
	mov byte ptr [esp+0x34],0
	call CCtrlButton::SetSimpleToolTip
	mov edi,dword ptr [esp+0x38]
	mov eax,dword ptr [esp+0x30]

 Block10:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block13

 Block12:
	mov edi,dword ptr [esp+0x38]

 Block13:
	lea ecx,[ebp-3]
	cmp ecx,9
	ja Block22

 Block14:
	mov eax,dword ptr [esp+0x34]
	cmp eax,0x64
	jne Block19

 Block15:
	test edi,edi
	jne Block34

 Block16:
	mov edi,dword ptr [TSingleton<CPartyQuestInfoManager>::ms_pInstance]
	mov ecx,esi
	call TabPartyAdver::GetSelectQuestID_1
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov ecx,edi
	call CPartyQuestInfoManager::Get
	lea ecx,[esp+0x18]
	call ZRef<PartyQuestInfo>::~ZRef<PartyQuestInfo>
	mov eax,dword ptr [esi+0x54]
	lea ebp,[ebp+eax*4-7]
	push ebp
	mov ecx,esi
	call TabPartyAdver::GetSelectQuestID_0
	test eax,eax
	jne Block18

 Block17:
	or ebp,0xFFFFFFFF

 Block18:
	mov ecx,dword ptr [esi+0xC]
	push 0
	mov dword ptr [esi+0x58],ebp
	call CWnd::InvalidateRect
	jmp Block34

 Block19:
	cmp eax,0x66
	jne Block34

 Block20:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x10]
	push edi
	push 0x64
	push ebp
	mov ecx,esi
	call eax
	mov ecx,esi
	call TabPartyAdver::GetSelectQuestID_1
	test eax,eax
	je Block34

 Block21:
	mov ecx,esi
	call TabPartyAdver::SendPartyAdverRequestPacket
	jmp Block34

 Block22:
	lea ecx,[ebp-0x16]
	cmp ecx,9
	ja Block34

 Block23:
	mov eax,dword ptr [esp+0x34]
	cmp eax,0x64
	jne Block29

 Block24:
	mov eax,dword ptr [esi+0x70]
	lea edx,[eax*8]
	sub edx,eax
	lea eax,[edx+ebp-0x1D]
	cmp eax,dword ptr [esi+0x64]
	jb Block26

 Block25:
	mov ecx,dword ptr [esi+0xC]
	push 0
	mov dword ptr [esi+0x74],0xFFFFFFFF
	call CWnd::InvalidateRect
	jmp Block34

 Block26:
	cmp dword ptr [esi+0x74],eax
	jne Block28

 Block27:
	or eax,0xFFFFFFFF

 Block28:
	mov ecx,dword ptr [esi+0xC]
	push 0
	mov dword ptr [esi+0x74],eax
	call CWnd::InvalidateRect
	jmp Block34

 Block29:
	cmp eax,0x65
	jne Block34

 Block30:
	cmp edi,1
	jne Block32

 Block31:
	lea eax,[ebp-0x16]
	push eax
	mov ecx,esi
	mov dword ptr [esi+0xAC0],eax
	call TabPartyAdver::ShowTooltip
	jmp Block34

 Block32:
	test edi,edi
	jne Block34

 Block33:
	lea ecx,[esi+0x78]
	mov dword ptr [esi+0xAC0],0xFFFFFFFF
	call CUIToolTip::ClearToolTip

 Block34:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 0xC
}
}
// TabPartyAdver::OnButtonClicked
_SUB_EXCEPTION_HANDLER(416AA0)
// 816F18
static uint8_t _SUB_416AA0_LOOKUP_TABLE_0[35] = {
0, 1, 2, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 3, 4, 
5, 6, 7, 8, 9, 10, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
13, 11, 12, 
};
__SUB_CLASS_THIS(00416AA0, __thiscall, 85978,  TabPartyAdver, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_416AA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],0
	mov eax,dword ptr [esp+0x30]
	cmp eax,0x22
	ja Block51

 Block1:
	movzx eax,byte ptr [eax+_SUB_416AA0_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block4
cmp EAX, 2
je Block5
cmp EAX, 3
je Block6
cmp EAX, 4
je Block9
cmp EAX, 5
je Block13
cmp EAX, 6
je Block46
cmp EAX, 7
je Block47
cmp EAX, 8
je Block40
cmp EAX, 9
je Block50
cmp EAX, 10
je Block12
cmp EAX, 11
je Block15
cmp EAX, 12
je Block39
cmp EAX, 13
je Block51


 Block2:
	call TabPartyAdver::GetSelectQuestID_1
	test eax,eax
	je Block51

 Block3:
	mov ecx,esi
	call TabPartyAdver::SendPartyAdverRequestPacket
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4

 Block4:
	call TabPartyAdver::OnButton_QuestPrev
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4

 Block5:
	call TabPartyAdver::OnButton_QuestNext
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4

 Block6:
	mov eax,dword ptr [esi+0x70]
	dec eax
	cmp eax,1
	jg Block8

 Block7:
	mov eax,1

 Block8:
	mov ecx,dword ptr [esi+0xC]
	push 0
	mov dword ptr [esi+0x70],eax
	mov dword ptr [esi+0x74],0xFFFFFFFF
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4

 Block9:
	call TabPartyAdver::GetQuestMaxPage
	mov ecx,dword ptr [esi+0x70]
	inc ecx
	cmp ecx,eax
	jge Block11

 Block10:
	mov eax,ecx

 Block11:
	mov ecx,dword ptr [esi+0xC]
	push 0
	mov dword ptr [esi+0x70],eax
	mov dword ptr [esi+0x74],0xFFFFFFFF
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4

 Block12:
	push 1
	call TabPartyAdver::SetState
	mov ecx,esi
	call TabPartyAdver::RequestAdverRemoveFromNotiList
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4

 Block13:
	call TabPartyAdver::IsAbleToRegist
	test eax,eax
	je Block51

 Block14:
	push 3
	mov ecx,esi
	call TabPartyAdver::SetState
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4

 Block15:
	call TabPartyAdver::GetSelectPartyQuestInfo
	mov edi,eax
	mov ecx,edi
	call PartyQuestInfo::IsExpeditionQuest
	test eax,eax
	je Block21

 Block16:
	mov ecx,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	cmp dword ptr [ecx+4],0
	jne Block21

 Block17:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [edx+0x3604],0
	je Block21

 Block18:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x14C

 Block19:
	push eax

 Block20:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4

 Block21:
	mov ecx,edi
	call PartyQuestInfo::IsPartyQuest
	test eax,eax
	je Block23

 Block22:
	lea ecx,[esp+0x1C]
	push 0x1593
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,1
	jmp Block24

 Block23:
	lea edx,[esp+0x18]
	push 0x1654
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,2

 Block24:
	mov dword ptr [esp+0x10],ebx
	mov dword ptr [esp+0x14],0
	mov ecx,dword ptr [edi+0x1C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x34],2
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x34]
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x28],4
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov byte ptr [esp+0x28],5
	test bl,2
	je Block29

 Block27:
	mov eax,dword ptr [esp+0x18]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x10],ebx
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov byte ptr [esp+0x28],6
	test bl,1
	je Block32

 Block30:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x14],esp
	mov dword ptr [eax],0
	lea eax,[esp+0x34]
	push 0xF0
	push eax
	call string_newline_by_width
	add esp,0xC
	push 0
	push 0
	push 0
	push 0
	push ecx
	lea edx,[esp+0x44]
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push edx
	call ZXString<char>::_ctor_copy
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,7
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	jne Block35

 Block33:
	test eax,eax
	je Block51

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4

 Block35:
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	mov ecx,esi
	call TabPartyAdver::IsAbleToRegist
	mov ecx,esi
	test eax,eax
	je Block39

 Block38:
	call TabPartyAdver::SendPartyRegistCommitPacket
	mov byte ptr [esi+0xAC4],1
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4

 Block39:
	push 2
	call TabPartyAdver::SetState
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4

 Block40:
	mov eax,dword ptr [esi+0x74]
	test eax,eax
	jl Block45

 Block41:
	cmp eax,dword ptr [esi+0x64]
	jae Block45

 Block42:
	push eax
	lea ecx,[esi+0x5C]
	call ZList<ZRef<ADVER_COMMON>>::FindIndex
	mov ecx,dword ptr [eax+4]
	test ecx,ecx
	je Block45

 Block43:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	test eax,eax
	jne Block45

 Block44:
	push eax
	push 1
	push eax
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x15E8
	jmp Block19

 Block45:
	mov ecx,esi
	call TabPartyAdver::SendPartyApplyPacket
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4

 Block46:
	call TabPartyAdver::SendAdverDeletePacket
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4

 Block47:
	call TabPartyAdver::FindQuickJoinParty
	test eax,eax
	jne Block49

 Block48:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x15E9
	push ecx
	jmp Block20

 Block49:
	push eax
	mov ecx,esi
	call TabPartyAdver::SendPartyApplyPacketTo
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4

 Block50:
	call TabPartyAdver::OnButton_Whisper

 Block51:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4
}
}
// TabPartyAdver::OnKey
__SUB_CLASS_THIS(00411600, __thiscall, 85981,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	ret 8
}
}
// TabPartyAdver::InitState
_SUB_EXCEPTION_HANDLER(4158A0)
__SUB_CLASS_THIS(004158A0, __thiscall, 85984,  TabPartyAdver, void, TabPartyAdver::ENUM_STATE) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4158A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x94]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0xA4]
	sub eax,1
	je Block25

 Block1:
	sub eax,1
	je Block10

 Block2:
	sub eax,1
	jne Block27

 Block3:
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x38],esp
	push 0x6A
	push offset _S_UIUIWINDOW2IMGUS__141
	push eax
	push 0x35
	mov ecx,edi
	mov dword ptr [edi],eax
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x35
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	push 0x21
	mov ecx,esi
	call TabPartyAdver::AttachButton
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x1C],esp
	push 0x68
	push offset _S_UIUIWINDOW2IMGUS__140
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
	push 0x22
	mov ecx,esi
	call TabPartyAdver::AttachButton
	lea ecx,[esp+0x40]
	call CCtrlComboBox::CREATEPARAM::_ctor_default
	lea eax,[esp+0x40]
	push eax
	push 0x19
	push 0xAF
	push 0x72
	push 0x52
	push 4
	push 0x23
	mov ecx,esi
	mov dword ptr [esp+0xB8],7
	mov dword ptr [esp+0x5C],0xFFEEEEEE
	mov dword ptr [esp+0x60],0xFFA5A198
	mov dword ptr [esp+0x64],0xFF999999
	call TabPartyAdver::AttachComboBox
	mov edi,dword ptr [TSingleton<CPartyQuestInfoManager>::ms_pInstance]
	mov ecx,esi
	mov ebp,eax
	call TabPartyAdver::GetSelectQuestID_1
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,edi
	call CPartyQuestInfoManager::Get
	mov edx,dword ptr [esp+0x3C]
	mov eax,dword ptr [edx+0x30]
	xor edi,edi
	mov bl,8
	mov byte ptr [esp+0x9C],bl
	mov dword ptr [esp+0x18],eax
	cmp eax,edi
	je Block8

 Block4:
	lea ecx,[ecx]

 Block5:
	lea eax,[esp+0x18]
	push eax
	call ZList<ZXString<char>>::GetNext
	add esp,4
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],edi
	call ZXString<char>::op_assign
	mov esi,dword ptr [esp+0x14]
	push edi
	push esi
	mov ecx,ebp
	mov byte ptr [esp+0xA4],9
	call CCtrlComboBox::AddItem
	mov byte ptr [esp+0x9C],bl
	cmp esi,edi
	je Block7

 Block6:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block7:
	cmp dword ptr [esp+0x18],edi
	jne Block5

 Block8:
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x9C],7
	call ZRef<PartyQuestInfo>::~ZRef<PartyQuestInfo>
	mov ecx,dword ptr [esp+0x8C]
	cmp ecx,edi
	je Block27

 Block9:
	call _xbstr_t::Data_t::Release
	jmp Block27

 Block10:
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x38],esp
	push 0x68
	push offset _S_UIUIWINDOW2IMGUS__139
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
	push 0x10
	mov ecx,esi
	call TabPartyAdver::AttachButton
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x1C],esp
	push 0x68
	push offset _S_UIUIWINDOW2IMGUS__138
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
	push 0x11
	mov ecx,esi
	call TabPartyAdver::AttachButton
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x1C],esp
	push 0x6E
	push offset _S_UIUIWINDOW2IMGUS__137
	push 0
	push 0x37
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x37
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	push 0x12
	mov ecx,esi
	call TabPartyAdver::AttachButton
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x1C],esp
	push 0x6A
	push offset _S_UIUIWINDOW2IMGUS__136
	push 0
	push 0x35
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x35
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	push 0x13
	mov ecx,esi
	call TabPartyAdver::AttachButton
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [edi],0
	push 0x6A
	push offset _S_UIUIWINDOW2IMGUS__135
	push 0
	push 0x35
	mov ecx,edi
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x35
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	push 0x14
	mov ecx,esi
	call TabPartyAdver::AttachButton
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x1C],esp
	push 0x66
	push offset _S_UIUIWINDOW2IMGUS__134
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
	push 0x15
	mov ecx,esi
	call TabPartyAdver::AttachButton
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x1C],esp
	push 0x46
	push offset _S_UIUIWINDOW2IMGUS__133
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
	push 0xE
	mov ecx,esi
	call TabPartyAdver::AttachButton
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x1C],esp
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
	push 0xF
	mov ecx,esi
	call TabPartyAdver::AttachButton
	lea ecx,[esp+0x20]
	push 0x1680
	push ecx
	mov dword ptr [esp+0x20],0x11
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,eax
	mov dword ptr [esp+0x9C],1
	push 0
	lea edx,[esp+0x1C]
	lea edi,[esi+0x28]
	push edx
	mov ecx,edi
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZXString<char>, TabPartyAdver::ENUM_CTRL_ID>::Insert
	push ebx
	lea ecx,[eax+0xC]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	lea eax,[esp+0x24]
	push 0x15B4
	push eax
	mov dword ptr [esp+0x20],0x10
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x9C],2
	mov dword ptr [esp+0x1C],0
	mov ebx,dword ptr [eax]
	push 0
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0xA4],3
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZXString<char>, TabPartyAdver::ENUM_CTRL_ID>::Insert
	mov ecx,esi
	mov ebp,eax
	call TabPartyAdver::GetAdverPrice
	push eax
	lea edx,[esp+0x20]
	push ebx
	push edx
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[ebp+0xC]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x9C],2
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov eax,dword ptr [esp+0x24]
	or ebp,0xFFFFFFFF
	mov dword ptr [esp+0x9C],ebp
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	lea eax,[esp+0x28]
	push 0x15B5
	push eax
	mov dword ptr [esp+0x20],0x12
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,eax
	push 0
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0xA4],4
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZXString<char>, TabPartyAdver::ENUM_CTRL_ID>::Insert
	push ebx
	lea ecx,[eax+0xC]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x9C],ebp
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	lea edx,[esp+0x2C]
	push 0x15B6
	push edx
	mov dword ptr [esp+0x20],0x13
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,eax
	push 0
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0xA4],5
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZXString<char>, TabPartyAdver::ENUM_CTRL_ID>::Insert
	push ebx
	lea ecx,[eax+0xC]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x9C],ebp
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	lea ecx,[esp+0x30]
	push 0x15B7
	push ecx
	mov dword ptr [esp+0x20],0x14
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,eax
	push 0
	lea edx,[esp+0x1C]
	push edx
	mov ecx,edi
	mov dword ptr [esp+0xA4],6
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZXString<char>, TabPartyAdver::ENUM_CTRL_ID>::Insert
	push ebx
	lea ecx,[eax+0xC]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x9C],ebp
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	xor ebx,ebx
	mov edi,0x7F
	lea ecx,[ecx]

 Block23:
	push 0x14
	push 0xF4
	push edi
	push 0xA
	lea eax,[ebx+0x16]
	push eax
	mov ecx,esi
	call TabPartyAdver::AttachStatic
	add edi,0x14
	inc ebx
	cmp edi,0x10B
	jl Block23

 Block24:
	mov dword ptr [esi+0x74],ebp
	jmp Block27

 Block25:
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x38],esp
	push 0x66
	push offset _S_UIUIWINDOW2IMGUS__131
	xor ebx,ebx
	push ebx
	push 0x33
	mov ecx,edi
	mov dword ptr [edi],ebx
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x33
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	push ebx
	mov ecx,esi
	call TabPartyAdver::AttachButton
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x1C],esp
	push 0x46
	push offset _S_UIUIWINDOW2IMGUS__133
	push ebx
	push 0x23
	mov ecx,edi
	mov dword ptr [edi],ebx
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x23
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	push 1
	mov ecx,esi
	call TabPartyAdver::AttachButton
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x1C],esp
	push 0x48
	push offset _S_UIUIWINDOW2IMGUS__132
	push ebx
	push 0x24
	mov ecx,edi
	mov dword ptr [edi],ebx
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x24
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	push 2
	mov ecx,esi
	call TabPartyAdver::AttachButton
	lea ecx,[esp+0x34]
	push 0x15B3
	push ecx
	mov dword ptr [esp+0x20],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edi,eax
	push ebx
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[esi+0x28]
	mov dword ptr [esp+0xA4],ebx
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZXString<char>, TabPartyAdver::ENUM_CTRL_ID>::Insert
	push edi
	lea ecx,[eax+0xC]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	cmp eax,ebx
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov ecx,dword ptr [esp+0x94]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x8C
	ret 4
}
}
// TabPartyAdver::AttachComboBox
_SUB_EXCEPTION_HANDLER(414330)
__SUB_CLASS_THIS(00414330, __thiscall, 85992,  TabPartyAdver, CCtrlComboBox*, TabPartyAdver::ENUM_CTRL_ID, long, long, long, long, long, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_414330
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
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x2C],0
	test eax,eax
	je Block11

 Block1:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	test eax,eax
	je Block11

 Block2:
	add eax,8
	je Block11

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call ebp

 Block5:
	mov eax,dword ptr [esp+0x4C]
	mov ecx,dword ptr [esp+0x48]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x28]
	push eax
	mov eax,dword ptr [esp+0x48]
	push ecx
	mov ecx,dword ptr [esp+0x48]
	push eax
	mov eax,dword ptr [esp+0x48]
	push ecx
	mov ecx,dword ptr [esp+0x48]
	push eax
	mov eax,dword ptr [esp+0x48]
	push ecx
	mov ecx,dword ptr [edi+0xC]
	push eax
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x4C],1
	call edx
	push 0
	lea eax,[esp+0x38]
	push eax
	lea ecx,[edi+0x10]
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::Insert
	mov ebx,eax
	lea eax,[esi+8]
	test eax,eax
	je Block12

 Block6:
	lea edi,[eax-8]
	test edi,edi
	je Block8

 Block7:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block8:
	mov eax,dword ptr [ebx+0x10]
	mov dword ptr [ebx+0x10],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block10

 Block9:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlWnd>::_ReleaseRaw

 Block10:
	push 0
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov eax,esi
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 0x1C

 Block11:
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	jmp Block5

 Block12:
	xor edi,edi
	jmp Block8
}
}
// TabPartyAdver::SetControlVisible
__SUB_CLASS_THIS(004149A0, __thiscall, 85994,  TabPartyAdver, void, TabPartyAdver::ENUM_CTRL_ID, int32_t) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0x10]
	push 0
	lea eax,[esp+0xC]
	push eax
	mov ecx,esi
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::Insert
	cmp dword ptr [eax+0x10],0
	je Block2

 Block1:
	push 0
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,esi
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::Insert
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
// TabPartyAdver::~TabPartyAdver
_SUB_EXCEPTION_HANDLER(412D20)
__SUB_CLASS_THIS0(00412D20, __thiscall, 85975,  TabPartyAdver, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_412D20
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
	int 3// TODO: 	mov dword ptr [esi],offset TabPartyAdver::`vftable'
	cmp dword ptr [esi+0x4C],1
	mov dword ptr [esp+0x14],8
	je Block2

 Block1:
	call TabPartyAdver::RequestAdverRemoveFromNotiList

 Block2:
	lea ecx,[esi+0xAC8]
	mov byte ptr [esp+0x14],7
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0x78]
	mov byte ptr [esp+0x14],6
	call CUIToolTip::~CUIToolTip
	lea ecx,[esi+0x5C]
	mov byte ptr [esp+0x14],5
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<ADVER_COMMON>>::`vftable'
	call ZList<ZRef<ADVER_COMMON>>::RemoveAll
	mov eax,dword ptr [esi+0x48]
	mov byte ptr [esp+0x14],4
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x44]
	mov byte ptr [esp+0x14],3
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x40]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	lea ecx,[esi+0x28]
	mov byte ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<TabPartyAdver::ENUM_CTRL_ID, ZXString<char>, TabPartyAdver::ENUM_CTRL_ID>::`vftable'
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZXString<char>, TabPartyAdver::ENUM_CTRL_ID>::RemoveAll
	lea ecx,[esi+0x10]
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::`vftable'
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::RemoveAll
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// TabPartyAdver::DrawPartyUnit
_SUB_EXCEPTION_HANDLER(4130E0)
__SUB_CLASS_THIS(004130E0, __thiscall, 86003,  TabPartyAdver, void, const ADVER_COMMON*, NakedParam<_x_com_ptr<IWzCanvas>>, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4130E0
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
	mov dword ptr [esp+0x18],ecx
	xor ebx,ebx
	xor ebp,ebp
	mov dword ptr [esp+0x4C],ebx
	mov dword ptr [esp+0x14],ebp
	mov edi,dword ptr [esp+0x60]
	mov byte ptr [esp+0x4C],1
	cmp dword ptr [esp+0x64],ebx
	je Block5

 Block1:
	mov eax,dword ptr [ecx+0x40]
	cmp eax,ebx
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov ebp,eax
	push eax
	mov dword ptr [esp+0x18],ebp
	call edx

 Block3:
	mov eax,dword ptr [esp+0x58]
	cmp eax,ebx
	jne Block10

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov esi,dword ptr [esp+0x54]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xC]
	mov ecx,esi
	call edx
	test eax,eax
	je Block9

 Block6:
	call GetFont
	mov eax,dword ptr [eax]

 Block7:
	cmp eax,ebx
	je Block13

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov ebp,eax
	push eax
	mov dword ptr [esp+0x18],ebp
	call edx
	jmp Block13

 Block9:
	mov eax,dword ptr [esp+0x18]
	mov eax,dword ptr [eax+0x44]
	jmp Block7

 Block10:
	mov ecx,dword ptr [eax]
	push 0xFF244768
	push 0x14
	push 0xF4
	lea edx,[edi-2]
	push edx
	mov edx,dword ptr [esp+0x6C]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x8C]
	call eax
	cmp eax,ebx
	jge Block12

 Block11:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block12:
	mov esi,dword ptr [esp+0x54]

 Block13:
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x60]
	push eax
	mov ecx,esi
	call edx
	push 0x41
	push ecx
	mov eax,esp
	mov byte ptr [esp+0x54],2
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax],ebp
	cmp ebp,ebx
	je Block15

 Block14:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	push ebp
	call ecx

 Block15:
	lea edx,[esp+0x68]
	push edx
	call format_string_1
	add esp,0xC
	push 1
	push ebp
	push ecx
	mov ecx,esp
	lea eax,[esp+0x6C]
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	add edi,3
	push edi
	push 0x2D
	push ecx
	mov ecx,dword ptr [esp+0x70]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x70]
	mov dword ptr [esp+0x34],edi
	mov dword ptr [esp+0x38],esp
	cmp eax,ebx
	je Block17

 Block16:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block17:
	call _DrawTextA
	lea edx,[esi+0x10]
	add esp,0x18
	mov dword ptr [esp+0x64],ebx
	cmp edx,ebx
	je Block21

 Block18:
	mov eax,edx
	lea esi,[eax+1]

 Block19:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block19

 Block20:
	sub eax,esi
	mov esi,eax
	push esi
	push edx
	push ebx
	push esi
	lea ecx,[esp+0x74]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x68]
	call ZXString<char>::ReleaseBuffer

 Block21:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edx+0x44]
	push 0x80
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x54],3
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block23:
	lea eax,[esp+0x6C]
	push eax
	call format_string_1
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[esp+0x34]
	push ecx
	call edi
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x50],4
	call edi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	lea edx,[esp+0x34]
	push edx
	mov edx,dword ptr [esp+0x68]
	lea eax,[esp+0x28]
	push eax
	push ebp
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,5
	push edx
	mov byte ptr [esp+0x60],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x68]
	xor esi,esi
	mov byte ptr [esp+0x5C],6
	cmp ecx,esi
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov eax,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x6C]
	push eax
	add edx,0x47
	push edx
	mov byte ptr [esp+0x64],bl
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [esp+0x4C],4
	cmp word ptr [esp+0x24],bx
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,esi
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov byte ptr [esp+0x4C],3
	cmp word ptr [esp+0x34],bx
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	cmp eax,esi
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov dword ptr [esp+0x5C],esi
	mov ebx,dword ptr [esp+0x54]
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0x18]
	mov ecx,ebx
	mov byte ptr [esp+0x4C],7
	call eax
	mov edx,dword ptr [ebx]
	push eax
	mov eax,dword ptr [edx+0x14]
	mov ecx,ebx
	call eax
	push eax
	lea ecx,[esp+0x64]
	push offset _S_DD__3
	push ecx
	call ZXString<char>::Format
	add esp,0x10
	push eax
	lea ecx,[esp+0x58]
	mov dword ptr [esp+0x58],esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x4C],9
	cmp eax,esi
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	lea edx,[esp+0x34]
	push edx
	call edi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	mov edx,dword ptr [esp+0x54]
	lea ecx,[esp+0x34]
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0xA
	push edx
	mov byte ptr [esp+0x58],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x54],0xB
	cmp ebp,esi
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	mov ecx,ebp
	mov byte ptr [esp+0x54],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x34],8
	mov esi,eax
	mov byte ptr [esp+0x4C],9
	jne Block46

 Block44:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	lea edx,[esp+0x24]
	push edx
	call edi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block49

 Block48:
	push eax
	call _com_issue_error

 Block49:
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0x50],0xC
	call edi
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	mov edi,dword ptr [esp+0x54]
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	push ebp
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,0xD
	push edi
	mov byte ptr [esp+0x60],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x68]
	mov byte ptr [esp+0x5C],0xE
	test ecx,ecx
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	mov edx,dword ptr [esp+0x2C]
	mov eax,0xEF
	push edx
	sub eax,esi
	push eax
	mov byte ptr [esp+0x64],bl
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x4C],0xC
	cmp word ptr [esp+0x34],si
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov byte ptr [esp+0x4C],9
	cmp word ptr [esp+0x24],si
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov byte ptr [esp+0x4C],3
	test edi,edi
	je Block63

 Block62:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block63:
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x4C],2
	test eax,eax
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block65:
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x4C],1
	test eax,eax
	je Block67

 Block66:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block67:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	mov byte ptr [esp+0x50],0
	call eax
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test eax,eax
	je Block69

 Block68:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block69:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 0x14
}
}
// TabPartyAdver::RequestAdverRemoveFromNotiList
_SUB_EXCEPTION_HANDLER(412CA0)
__SUB_CLASS_THIS0(00412CA0, __thiscall, 85975,  TabPartyAdver, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_412CA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	push 0x94
	lea ecx,[esp+8]
	call COutPacket::_ctor_1
	push 0x54
	lea ecx,[esp+8]
	mov dword ptr [esp+0x20],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+4]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+8]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret
}
}
// TabPartyAdver::OnPacket
_SUB_EXCEPTION_HANDLER(4162F0)
__SUB_CLASS_THIS(004162F0, __thiscall, 85982,  TabPartyAdver, void, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4162F0
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
	mov ebp,ecx
	mov dword ptr [esp+0x1C],ebp
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [esp+0x70]
	add eax,0xFFFFFFB5
	mov dword ptr [esp+0x68],ebx
	cmp eax,5
	ja Block89

 Block1:
	cmp EAX, 0
je Block11
cmp EAX, 1
je Block43
cmp EAX, 2
je Block2
cmp EAX, 3
je Block89
cmp EAX, 4
je Block59
cmp EAX, 5
je Block80


 Block2:
	lea esi,[ebp+0x5C]
	mov ecx,esi
	call ZList<ZRef<ADVER_COMMON>>::RemoveAll
	mov edi,dword ptr [esp+0x74]
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov ebx,eax
	call CInPacket::Decode4
	test eax,eax
	jle Block10

 Block3:
	mov dword ptr [esp+0x74],eax

 Block4:
	lea eax,[esp+0x20]
	push ebx
	push eax
	call ADVER_COMMON::CreateAdver
	add esp,8
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0x6C],1
	call eax
	mov ecx,esi
	call ZList<ZRef<ADVER_COMMON>>::AddTail_
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,eax
	call ZRef<ADVER_COMMON>::op_assign_copy
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x68],0
	test eax,eax
	je Block9

 Block5:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	mov edx,dword ptr [esp+0x24]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x24]
	test ecx,ecx
	je Block8

 Block7:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block8:
	mov dword ptr [esp+0x24],0

 Block9:
	sub dword ptr [esp+0x74],1
	jne Block4

 Block10:
	push 2
	mov ecx,ebp
	call TabPartyAdver::SetState
	jmp Block89

 Block11:
	mov esi,dword ptr [esp+0x74]
	mov ecx,esi
	call CInPacket::Decode4
	mov edi,eax
	mov ecx,ebp
	mov dword ptr [esp+0x20],edi
	call TabPartyAdver::GetSelectQuestID_1
	cmp eax,edi
	jne Block91

 Block12:
	lea eax,[esp+0x50]
	push edi
	push eax
	call ADVER_COMMON::CreateAdver
	add esp,8
	mov ecx,dword ptr [esp+0x54]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x6C],2
	call eax
	mov eax,dword ptr [ebp+0x68]
	mov dword ptr [esp+0x74],eax
	cmp eax,ebx
	je Block21

 Block13:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	lea ecx,[esp+0x74]
	push ecx
	mov edi,eax
	call ZList<ZRef<ADVER_COMMON>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x5C],esi
	test esi,esi
	je Block16

 Block15:
	lea edx,[esi+4]
	push edx
	call ebx

 Block16:
	mov ecx,dword ptr [esp+0x54]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	mov byte ptr [esp+0x68],3
	call edx
	mov ebp,eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x1C]
	mov ecx,esi
	call edx
	cmp eax,ebp
	je Block24

 Block17:
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x6C],2
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block19

 Block18:
	push edi
	call ebx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block19:
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [esp+0x5C],0
	test eax,eax
	jne Block14

 Block20:
	mov edi,dword ptr [esp+0x20]
	mov ebp,dword ptr [esp+0x1C]

 Block21:
	lea ecx,[esp+0x50]
	push ecx
	lea ecx,[ebp+0x5C]
	call ZList<ZRef<ADVER_COMMON>>::AddTail_Position
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [esp+0x54]
	mov eax,dword ptr [ecx]
	mov esi,dword ptr [edx+0x20B4]
	mov edx,dword ptr [eax+0x20]
	call edx
	cmp eax,esi
	jne Block38

 Block22:
	push edi
	call CPartyQuestInfoManager::IsExpeditionQuestID
	add esp,4
	test eax,eax
	je Block25

 Block23:
	lea eax,[esp+0x2C]
	push 0x1A3A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x68],4
	mov ebx,1
	jmp Block26

 Block24:
	lea eax,[esp+0x50]
	push eax
	mov ecx,edi
	call ZRef<ADVER_COMMON>::op_assign_copy
	lea ecx,[esp+0x58]
	mov byte ptr [esp+0x68],2
	call ZRef<ADVER_COMMON>::~ZRef<ADVER_COMMON>
	mov ebp,dword ptr [esp+0x1C]
	jmp Block38

 Block25:
	lea ecx,[esp+0x28]
	push 0x1AC5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x68],5
	mov ebx,2

 Block26:
	push eax
	lea ecx,[esp+0x78]
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::_ctor_copy
	mov dword ptr [esp+0x68],7
	test bl,2
	je Block29

 Block27:
	mov eax,dword ptr [esp+0x28]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x18],ebx
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov byte ptr [esp+0x68],8
	test bl,1
	je Block32

 Block30:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	push 0
	push 1
	push 0
	push 0
	lea edx,[esp+0x40]
	push 0x15F0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x80],0
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x84]
	push esi
	push eax
	lea eax,[esp+0x88]
	push eax
	mov byte ptr [esp+0x84],0xA
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push eax
	call ZXString<char>::_ctor_copy
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x84]
	add esp,0x14
	mov byte ptr [esp+0x68],9
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x68],8
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	mov byte ptr [esp+0x68],2
	test esi,esi
	je Block38

 Block37:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block38:
	cmp dword ptr [ebp+0x4C],2
	jne Block40

 Block39:
	mov ecx,dword ptr [ebp+0xC]
	push 0
	call CWnd::InvalidateRect
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0x68],0
	call ZRef<ADVER_COMMON>::~ZRef<ADVER_COMMON>
	jmp Block89

 Block40:
	cmp byte ptr [ebp+0xAC4],0
	je Block42

 Block41:
	push 2
	mov ecx,ebp
	mov byte ptr [ebp+0xAC4],0
	call TabPartyAdver::SetState

 Block42:
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0x68],0
	call ZRef<ADVER_COMMON>::~ZRef<ADVER_COMMON>
	jmp Block89

 Block43:
	mov esi,dword ptr [esp+0x74]
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,ebp
	mov edi,eax
	call TabPartyAdver::GetSelectQuestID_1
	cmp eax,edi
	jne Block91

 Block44:
	mov ecx,esi
	call CInPacket::Decode4
	mov dword ptr [esp+0x20],eax
	mov eax,dword ptr [ebp+0x68]
	mov dword ptr [esp+0x74],eax
	cmp eax,ebx
	je Block56

 Block45:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	lea esp,[esp]

 Block46:
	lea ecx,[esp+0x74]
	push ecx
	mov edi,eax
	call ZList<ZRef<ADVER_COMMON>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x5C],esi
	test esi,esi
	je Block48

 Block47:
	lea edx,[esi+4]
	push edx
	call ebx

 Block48:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x1C]
	mov ecx,esi
	mov byte ptr [esp+0x68],0xB
	call edx
	cmp eax,dword ptr [esp+0x20]
	je Block53

 Block49:
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x6C],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block51

 Block50:
	push edi
	call ebx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block51:
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [esp+0x5C],0
	test eax,eax
	jne Block46

 Block52:
	jmp Block56

 Block53:
	lea esi,[ebp+0x5C]
	push edi
	mov ecx,esi
	call ZList<ZRef<ADVER_COMMON>>::IndexOf
	cmp eax,dword ptr [ebp+0x74]
	jne Block55

 Block54:
	mov dword ptr [ebp+0x74],0xFFFFFFFF

 Block55:
	push edi
	mov ecx,esi
	call ZList<ZRef<ADVER_COMMON>>::RemoveAt
	lea ecx,[esp+0x58]
	mov byte ptr [esp+0x68],0
	call ZRef<ADVER_COMMON>::~ZRef<ADVER_COMMON>

 Block56:
	mov ecx,ebp
	call TabPartyAdver::GetPartyMaxPage
	mov ecx,dword ptr [ebp+0x70]
	cmp ecx,eax
	jge Block58

 Block57:
	mov eax,ecx

 Block58:
	mov ecx,dword ptr [ebp+0xC]
	push 0
	mov dword ptr [ebp+0x70],eax
	call CWnd::InvalidateRect
	jmp Block89

 Block59:
	mov esi,dword ptr [esp+0x74]
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	movzx edi,al
	call CInPacket::Decode4
	mov ebp,eax
	lea eax,[esp+0x74]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov byte ptr [esp+0x68],0xC
	test edi,edi
	je Block61

 Block60:
	lea ecx,[esp+0x38]
	push 0x1A3A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x68],0xD
	mov ebx,4
	jmp Block62

 Block61:
	lea edx,[esp+0x34]
	push 0x1AC5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x68],0xE
	mov ebx,8

 Block62:
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],0
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x68],0x10
	test bl,8
	je Block65

 Block63:
	mov eax,dword ptr [esp+0x34]
	and ebx,0xFFFFFFF7
	mov dword ptr [esp+0x18],ebx
	test eax,eax
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block65:
	mov byte ptr [esp+0x68],0x11
	test bl,4
	je Block68

 Block66:
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block68:
	mov esi,dword ptr [esp+0x1C]
	mov eax,ebp
	sub eax,0xA
	je Block73

 Block69:
	sub eax,1
	je Block72

 Block70:
	sub eax,1
	jne Block76

 Block71:
	lea eax,[esp+0x3C]
	push 0x15E6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x74]
	mov eax,dword ptr [eax]
	push esi
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x78],0x14
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x4C]
	jmp Block74

 Block72:
	lea eax,[esp+0x40]
	push 0x15E5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x74]
	mov eax,dword ptr [eax]
	push ecx
	push esi
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x78],0x13
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x50]
	jmp Block74

 Block73:
	lea eax,[esp+0x44]
	push 0x15E4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x74]
	mov eax,dword ptr [eax]
	push ecx
	push esi
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x78],0x12
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x54]

 Block74:
	add esp,0x10
	mov byte ptr [esp+0x68],0x11
	test eax,eax
	je Block76

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block76:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea eax,[esp+0x28]
	mov dword ptr [esp+0x34],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	add esp,0x14
	mov byte ptr [esp+0x68],0xC
	test esi,esi
	je Block78

 Block77:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block78:
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x68],0
	test eax,eax
	je Block89

 Block79:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block89

 Block80:
	mov ecx,dword ptr [esp+0x74]
	call CInPacket::Decode4
	sub eax,ebx
	je Block83

 Block81:
	sub eax,1
	jne Block89

 Block82:
	lea ecx,[esp+0x48]
	push 0x1695
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x70],0x16
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x50]
	jmp Block84

 Block83:
	lea eax,[esp+0x4C]
	push 0x15EA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x70],0x15
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x54]

 Block84:
	add esp,8
	mov byte ptr [esp+0x68],0
	cmp eax,ebx
	je Block86

 Block85:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block86:
	cmp dword ptr [esp+0x14],ebx
	je Block89

 Block87:
	mov edx,dword ptr [esp+0x14]
	cmp byte ptr [edx],0
	je Block89

 Block88:
	push ebx
	push 1
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea eax,[esp+0x28]
	mov dword ptr [esp+0x88],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	add esp,0x14

 Block89:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test eax,eax
	je Block91

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block91:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 8
}
}
// TabPartyAdver::DetachCtrl
__SUB_CLASS_THIS(004130B0, __thiscall, 85996,  TabPartyAdver, void, TabPartyAdver::ENUM_CTRL_ID) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0x10]
	push 0
	lea eax,[esp+0xC]
	push eax
	mov ecx,esi
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::Insert
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
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::RemoveKey

 Block2:
	pop esi
	ret 4
}
}
// TabPartyAdver::HideControls
_SUB_EXCEPTION_HANDLER(414830)
__SUB_CLASS_THIS0(00414830, __thiscall, 85975,  TabPartyAdver, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_414830
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
	mov ebp,ecx
	lea edi,[ebp+0x10]
	mov ecx,edi
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::GetHeadPosition
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
	mov ecx,edi
	mov dword ptr [esp+0x30],ebx
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::GetNext
	mov esi,dword ptr [esp+0x1C]
	cmp esi,ebx
	je Block4

 Block3:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x24]
	lea ecx,[esi+4]
	push ebx
	call eax

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
	lea ecx,[ebp+0x78]
	call CUIToolTip::ClearToolTip
	push ebx
	lea eax,[esp+0x18]
	mov esi,0x23
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x1C],esi
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::Insert
	cmp dword ptr [eax+0x10],ebx
	je Block13

 Block11:
	push ebx
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x1C],esi
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x48]
	push offset CCtrlComboBox::ms_RTTI_CCtrlComboBox
	call eax
	test eax,eax
	je Block13

 Block12:
	push ebx
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x1C],esi
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::Insert
	mov ecx,dword ptr [eax+0x10]
	jmp Block14

 Block13:
	xor ecx,ecx

 Block14:
	cmp ecx,ebx
	je Block16

 Block15:
	call CCtrlComboBox::RemoveSelectWnd

 Block16:
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
// TabPartyAdver::GetPartyMaxPage
__SUB_CLASS_THIS0(004117B0, __thiscall, 85998,  TabPartyAdver, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x64]
	cmp eax,1
	jge Block2

 Block1:
	mov eax,1

 Block2:
	lea ecx,[eax-1]
	mov eax,0x92492493
	imul ecx
	add edx,ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	lea eax,[edx+eax+1]
	ret
}
}
// TabPartyAdver::SendPartyRegistCommitPacket
_SUB_EXCEPTION_HANDLER(413C90)
__SUB_CLASS_THIS0(00413C90, __thiscall, 85975,  TabPartyAdver, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_413C90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	push 0x94
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	push 0x51
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x30],0
	call COutPacket::Encode1
	mov ecx,edi
	call TabPartyAdver::GetSelectQuestID_1
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	push 0
	lea eax,[esp+0x14]
	lea esi,[edi+0x10]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x18],0x23
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::Insert
	cmp dword ptr [eax+0x10],0
	je Block3

 Block1:
	push 0
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x18],0x23
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::Insert
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x48]
	push offset CCtrlComboBox::ms_RTTI_CCtrlComboBox
	call eax
	test eax,eax
	je Block3

 Block2:
	push 0
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x18],0x23
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::Insert
	mov eax,dword ptr [eax+0x10]
	jmp Block4

 Block3:
	xor eax,eax

 Block4:
	lea edx,[esp+0xC]
	push edx
	mov ecx,eax
	call CCtrlComboBox::GetText
	lea eax,[esp+0xC]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x30],1
	call TabPartyAdver::IsTitleValid
	test eax,eax
	je Block6

 Block5:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x10]
	mov dword ptr [esp+0x14],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x18]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	call CClientSocket::SendPacket

 Block6:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x2C],0
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret
}
}
// TabPartyAdver::GetQuestMaxPage
__SUB_CLASS_THIS0(004115E0, __thiscall, 85998,  TabPartyAdver, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x50]
	dec eax
	cdq
	and edx,3
	add eax,edx
	sar eax,2
	inc eax
	ret
}
}
// TabPartyAdver::GetIndexFromQuestID
_SUB_EXCEPTION_HANDLER(4125F0)
__SUB_CLASS_THIS(004125F0, __thiscall, 85999,  TabPartyAdver, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4125F0
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
	mov dword ptr [esp+0x14],0
	call GetLevel
	mov eax,dword ptr [TSingleton<CPartyQuestInfoManager>::ms_pInstance]
	mov eax,dword ptr [eax+0x24]
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block15

 Block1:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]

 Block2:
	lea ecx,[esp+0x18]
	push ecx
	call ZList<ZRef<PartyQuestInfo>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x24],esi
	test esi,esi
	je Block4

 Block3:
	lea edx,[esi-0xC]
	push edx
	call ebx

 Block4:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x38],0
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax+4],esi
	test esi,esi
	je Block6

 Block5:
	lea eax,[esi-0xC]
	push eax
	call ebx

 Block6:
	call QuestFilter
	add esp,8
	test eax,eax
	je Block9

 Block7:
	mov ecx,dword ptr [esp+0x38]
	cmp ecx,dword ptr [esi]
	je Block17

 Block8:
	inc dword ptr [esp+0x14]

 Block9:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test esi,esi
	je Block14

 Block10:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block13

 Block11:
	push edi
	call ebx
	test esi,esi
	je Block13

 Block12:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block13:
	mov dword ptr [esp+0x24],0

 Block14:
	cmp dword ptr [esp+0x18],0
	jne Block2

 Block15:
	or eax,0xFFFFFFFF

 Block16:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 4

 Block17:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ebp
	test eax,eax
	jne Block20

 Block18:
	push edi
	call ebx
	test esi,esi
	je Block20

 Block19:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block20:
	mov eax,dword ptr [esp+0x14]
	jmp Block16
}
}
// TabPartyAdver::EndState
_SUB_EXCEPTION_HANDLER(4127F0)
__SUB_CLASS_THIS(004127F0, __thiscall, 85984,  TabPartyAdver, void, TabPartyAdver::ENUM_STATE) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4127F0
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
	mov dword ptr [esp+0x18],esi
	lea edi,[esi+0x10]
	mov ecx,edi
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::GetHeadPosition
	xor ebx,ebx
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block11

 Block1:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]

 Block2:
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x34],ebx
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::GetNext
	mov esi,dword ptr [esp+0x20]
	cmp esi,ebx
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xC]
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
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
	mov dword ptr [esp+0x20],ebx

 Block9:
	cmp dword ptr [esp+0x14],ebx
	jne Block2

 Block10:
	mov esi,dword ptr [esp+0x18]

 Block11:
	mov ecx,edi
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::RemoveAll
	lea ecx,[esi+0x78]
	call CUIToolTip::ClearToolTip
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 4
}
}
// TabPartyAdver::Draw_QuestSelect
_SUB_EXCEPTION_HANDLER(415020)
__SUB_CLASS_THIS(00415020, __thiscall, 85977,  TabPartyAdver, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_415020
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
	mov edi,ecx
	xor ebp,ebp
	push ebp
	push ebp
	push offset _S_UIUIWINDOW2IMGUS__130
	push ecx
	mov ecx,dword ptr [esp+0x60]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x58],ebp
	mov dword ptr [esp+0x28],esp
	cmp eax,ebp
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	lea ecx,[edi+0xAC8]
	call CLayoutMan::CopyToCanvas_1
	xor esi,esi

 Block3:
	lea ecx,[esi+3]
	push ecx
	mov ecx,edi
	call TabPartyAdver::DetachCtrl
	inc esi
	cmp esi,4
	jl Block3

 Block4:
	mov dword ptr [edi+0x50],ebp
	mov edx,dword ptr [TSingleton<CPartyQuestInfoManager>::ms_pInstance]
	mov eax,dword ptr [edx+0x24]
	mov dword ptr [esp+0x14],0x57
	mov ebx,3
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block21

 Block5:
	lea eax,[esp+0x18]
	push eax
	call ZList<ZRef<PartyQuestInfo>>::GetNext
	mov esi,dword ptr [eax+4]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	add esp,4
	mov dword ptr [esp+0x24],esi
	test esi,esi
	je Block7

 Block6:
	lea ecx,[esi-0xC]
	push ecx
	call ebp

 Block7:
	sub esp,8
	mov eax,esp
	mov byte ptr [esp+0x50],1
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax+4],esi
	test esi,esi
	je Block9

 Block8:
	lea edx,[esi-0xC]
	push edx
	call ebp

 Block9:
	call QuestFilter
	add esp,8
	test eax,eax
	je Block15

 Block10:
	mov eax,dword ptr [edi+0x54]
	inc dword ptr [edi+0x50]
	mov ecx,dword ptr [edi+0x50]
	add eax,eax
	add eax,eax
	lea edx,[eax-4]
	cmp edx,ecx
	jge Block15

 Block11:
	cmp ecx,eax
	jg Block15

 Block12:
	xor eax,eax
	dec ecx
	cmp dword ptr [edi+0x58],ecx
	sete al
	push eax
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax+4],esi
	test esi,esi
	je Block14

 Block13:
	lea ecx,[esi-0xC]
	push ecx
	call ebp

 Block14:
	mov ebp,dword ptr [esp+0x20]
	push ebp
	push 0xA
	push ebx
	mov ecx,edi
	call TabPartyAdver::AttachBanner
	inc ebx
	add ebp,0x30
	mov dword ptr [esp+0x14],ebp

 Block15:
	mov byte ptr [esp+0x48],0
	test esi,esi
	je Block20

 Block16:
	add esi,0xFFFFFFF0
	lea ebp,[esi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block19

 Block17:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block19

 Block18:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block19:
	mov dword ptr [esp+0x24],0

 Block20:
	cmp dword ptr [esp+0x18],0
	jne Block5

 Block21:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push ecx
	call esi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea eax,[esp+0x20]
	mov bl,2
	push eax
	mov byte ptr [esp+0x4C],bl
	call esi
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x50],3
	call GetFont
	add eax,4
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x24],0
	mov ecx,edi
	mov byte ptr [esp+0x54],4
	call TabPartyAdver::GetQuestMaxPage
	mov ecx,dword ptr [edi+0x54]
	push eax
	push ecx
	lea edx,[esp+0x2C]
	push offset _S_DD__4
	push edx
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
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	push 0x11F
	push 0x72
	mov byte ptr [esp+0x60],4
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x48],3
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x20],si
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x20]
	push ecx
	call edi

 Block33:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x30],si
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea eax,[esp+0x30]
	push eax
	call edi

 Block37:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
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
// TabPartyAdver::Draw
_SUB_EXCEPTION_HANDLER(415520)
__SUB_CLASS_THIS(00415520, __thiscall, 85977,  TabPartyAdver, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_415520
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
	mov eax,dword ptr [esi+0x4C]
	sub eax,1
	mov dword ptr [esp+0x14],0
	je Block9

 Block1:
	sub eax,1
	je Block6

 Block2:
	sub eax,1
	jne Block12

 Block3:
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0xC],esp
	test eax,eax
	je Block5

 Block4:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block5:
	mov ecx,esi
	call TabPartyAdver::Draw_Regist
	jmp Block12

 Block6:
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0xC],esp
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block8:
	mov ecx,esi
	call TabPartyAdver::Draw_PartySelect
	jmp Block12

 Block9:
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0xC],esp
	test eax,eax
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block11:
	mov ecx,esi
	call TabPartyAdver::Draw_QuestSelect

 Block12:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// TabPartyAdver::SetControlEnable
__SUB_CLASS_THIS(00414960, __thiscall, 85994,  TabPartyAdver, void, TabPartyAdver::ENUM_CTRL_ID, int32_t) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0x10]
	push 0
	lea eax,[esp+0xC]
	push eax
	mov ecx,esi
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::Insert
	cmp dword ptr [eax+0x10],0
	je Block2

 Block1:
	push 0
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,esi
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::Insert
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
// TabPartyAdver::AttachButton
_SUB_EXCEPTION_HANDLER(414230)
__SUB_CLASS_THIS(00414230, __thiscall, 85990,  TabPartyAdver, void, TabPartyAdver::ENUM_CTRL_ID, NakedParam<ZXString16>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_414230
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
	lea ecx,[esi+0xAC8]
	mov dword ptr [esp+0x40],0
	call CLayoutMan::AddButton
	mov edi,dword ptr [eax+4]
	push 0
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esi+0x10]
	mov byte ptr [esp+0x30],1
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::Insert
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
// TabPartyAdver::SendPartyAdverRequestPacket
_SUB_EXCEPTION_HANDLER(412B60)
__SUB_CLASS_THIS0(00412B60, __thiscall, 85975,  TabPartyAdver, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_412B60
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
	call TabPartyAdver::GetSelectQuestID_1
	test eax,eax
	je Block2

 Block1:
	push 0x94
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0x53
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov ecx,esi
	call TabPartyAdver::GetSelectQuestID_1
	push eax
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret
}
}
// TabPartyAdver::GetSelectQuestID
_SUB_EXCEPTION_HANDLER(412480)
__SUB_CLASS_THIS(00412480, __thiscall, 85999,  TabPartyAdver, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_412480
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	call GetLevel
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edi,eax
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x40]
	mov dword ptr [esp+0x20],edi
	call edx
	xor ebp,ebp
	cmp dword ptr [esp+0x40],ebp
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x14],ebp
	jl Block18

 Block1:
	mov eax,dword ptr [TSingleton<CPartyQuestInfoManager>::ms_pInstance]
	mov eax,dword ptr [eax+0x24]
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block18

 Block2:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	lea ecx,[ecx]

 Block3:
	lea ecx,[esp+0x18]
	push ecx
	call ZList<ZRef<PartyQuestInfo>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x2C],esi
	cmp esi,ebp
	je Block5

 Block4:
	lea edx,[esi-0xC]
	push edx
	call ebx

 Block5:
	cmp dword ptr [esi+0xC],edi
	mov dword ptr [esp+0x38],ebp
	jg Block13

 Block6:
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],esi
	lea eax,[esi-0xC]
	mov dword ptr [esp+0x2C],esp
	push eax
	call ebx
	call QuestFilter
	add esp,8
	cmp eax,ebp
	je Block13

 Block7:
	cmp dword ptr [esi],0x7D4
	jne Block11

 Block8:
	mov eax,0x10624DD3
	imul dword ptr [esp+0x1C]
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,1
	je Block11

 Block9:
	cmp edi,0x8C
	jge Block11

 Block10:
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call ZRef<PartyQuestInfo>::~ZRef<PartyQuestInfo>
	jmp Block17

 Block11:
	mov edx,dword ptr [esp+0x14]
	cmp edx,dword ptr [esp+0x40]
	je Block20

 Block12:
	inc dword ptr [esp+0x14]

 Block13:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block16

 Block14:
	push edi
	call ebx
	cmp esi,ebp
	je Block16

 Block15:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block16:
	mov edi,dword ptr [esp+0x20]
	mov dword ptr [esp+0x2C],ebp

 Block17:
	cmp dword ptr [esp+0x18],ebp
	jne Block3

 Block18:
	xor eax,eax

 Block19:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 4

 Block20:
	mov esi,dword ptr [esi]
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call ZRef<PartyQuestInfo>::~ZRef<PartyQuestInfo>
	mov eax,esi
	jmp Block19
}
}
// TabPartyAdver::GetSelectPartyQuestInfo
__SUB_CLASS_THIS0(00412900, __thiscall, 86001,  TabPartyAdver, const PartyQuestInfo*) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push esi
	mov esi,dword ptr [TSingleton<CPartyQuestInfoManager>::ms_pInstance]
	call TabPartyAdver::GetSelectQuestID_1
	push eax
	lea eax,[esp+0xC]
	push eax
	mov ecx,esi
	call CPartyQuestInfoManager::Get
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block5

 Block1:
	push edi
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
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	add esp,8
	ret

 Block5:
	pop esi
	mov eax,ebx
	pop ebx
	add esp,8
	ret
}
}
// TabPartyAdver::OnButton_QuestPrev
__SUB_CLASS_THIS0(00411750, __thiscall, 85975,  TabPartyAdver, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x54]
	dec eax
	cmp eax,1
	jg Block2

 Block1:
	mov eax,1

 Block2:
	mov dword ptr [ecx+0x54],eax
	mov dword ptr [ecx+0x58],0xFFFFFFFF
	mov ecx,dword ptr [ecx+0xC]
	push 0
	call CWnd::InvalidateRect
	ret
}
}
// TabPartyAdver::Draw_PartySelect
_SUB_EXCEPTION_HANDLER(413620)
__SUB_CLASS_THIS(00413620, __thiscall, 85977,  TabPartyAdver, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_413620
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
	mov edi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x48],ebp
	call TabPartyAdver::GetSelectQuestID_1
	cmp eax,ebp
	je Block13

 Block1:
	mov ecx,dword ptr [TSingleton<CPartyQuestInfoManager>::ms_pInstance]
	push eax
	lea eax,[esp+0x24]
	push eax
	call CPartyQuestInfoManager::Get
	push ebp
	push 0x3C
	push 0xA
	push ecx
	mov ecx,dword ptr [esp+0x60]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x58],1
	mov dword ptr [esp+0x28],esp
	cmp eax,ebp
	je Block3

 Block2:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block3:
	mov ecx,dword ptr [esp+0x34]
	push ecx
	call DrawQuestUnit2
	mov dword ptr [esp+0x2C],ebp
	mov edx,dword ptr [esp+0x38]
	mov ecx,dword ptr [edx+0x14]
	mov eax,dword ptr [edi+0x64]
	push ecx
	push eax
	lea edx,[esp+0x34]
	push offset _S_DD
	push edx
	mov byte ptr [esp+0x6C],2
	call ZXString<char>::Format
	add esp,0x24
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x48],4
	cmp eax,ebp
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov eax,dword ptr [edi+0x40]
	push 2
	push eax
	push ecx
	mov ecx,esp
	lea eax,[esp+0x20]
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	push 0x42
	push 0xF5
	push ecx
	mov ecx,dword ptr [esp+0x68]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x34],esp
	cmp eax,ebp
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block7:
	call _DrawTextA
	mov eax,dword ptr [esp+0x2C]
	add esp,0x18
	mov byte ptr [esp+0x48],1
	cmp eax,ebp
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov esi,dword ptr [esp+0x24]
	mov byte ptr [esp+0x48],0
	cmp esi,ebp
	je Block13

 Block10:
	add esi,0xFFFFFFF0
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block13

 Block12:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block13:
	push 0x6D
	push 0xA
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x28],esp
	push 0x44
	push offset _S_UIUIWINDOW2IMGUS__126
	push ebp
	push 0x22
	mov ecx,esi
	mov dword ptr [esi],ebp
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x22
	mov ecx,esi
	call ZXString16::ReleaseBuffer
	push ecx
	mov ecx,dword ptr [esp+0x60]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x2C],esp
	cmp eax,ebp
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block15:
	call DrawImage
	add esp,0x10
	xor ebx,ebx

 Block16:
	lea eax,[ebx+ebx*4]
	lea eax,[eax*4+0x7F]
	push eax
	push 0xA
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [esi],ebp
	push 0x44
	mov ecx,esi
	cmp ebx,6
	jne Block18

 Block17:
	push offset _S_UIUIWINDOW2IMGUS__125
	jmp Block19

 Block18:
	push offset _S_UIUIWINDOW2IMGUS__124

 Block19:
	push ebp
	push 0x22
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x22
	mov ecx,esi
	call ZXString16::ReleaseBuffer
	push ecx
	mov ecx,dword ptr [esp+0x60]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x2C],esp
	cmp eax,ebp
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block21:
	call DrawImage
	inc ebx
	add esp,0x10
	cmp ebx,7
	jl Block16

 Block22:
	mov eax,dword ptr [edi+0x68]
	xor esi,esi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block31

 Block23:
	mov ebx,0x81

 Block24:
	lea ecx,[esp+0x18]
	push ecx
	call ZList<ZRef<ADVER_COMMON>>::GetNext
	mov ecx,dword ptr [edi+0x70]
	mov ebp,dword ptr [eax+4]
	lea eax,[ecx*8]
	sub eax,ecx
	inc esi
	lea edx,[eax-7]
	add esp,4
	cmp edx,esi
	jge Block29

 Block25:
	cmp esi,eax
	jg Block29

 Block26:
	mov edx,dword ptr [esp+0x50]
	xor ecx,ecx
	lea eax,[esi-1]
	cmp eax,dword ptr [edi+0x74]
	sete cl
	push ecx
	push ebx
	push 0xA
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x2C],esp
	test eax,eax
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block28:
	push ebp
	mov ecx,edi
	call TabPartyAdver::DrawPartyUnit
	add ebx,0x14

 Block29:
	cmp dword ptr [esp+0x18],0
	jne Block24

 Block30:
	xor ebp,ebp

 Block31:
	mov eax,dword ptr [edi+0xAC0]
	push eax
	mov ecx,edi
	call TabPartyAdver::ShowTooltip
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push ecx
	call esi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x4C],5
	call esi
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x50],6
	call GetFont
	add eax,4
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x24],ebp
	mov ecx,edi
	mov byte ptr [esp+0x54],7
	call TabPartyAdver::GetPartyMaxPage
	mov ecx,dword ptr [edi+0x70]
	push eax
	push ecx
	lea edx,[esp+0x2C]
	push offset _S_DD__4
	push edx
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,0xC
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x60]
	mov ebx,8
	mov byte ptr [esp+0x58],bl
	cmp ecx,ebp
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	push 0x11F
	push 0x72
	mov byte ptr [esp+0x60],7
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x48],6
	cmp eax,ebp
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x48],5
	cmp word ptr [esp+0x20],bx
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea ecx,[esp+0x20]
	push ecx
	call esi

 Block43:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x30],bx
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,ebp
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[esp+0x30]
	push eax
	call esi

 Block47:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp eax,ebp
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block49:
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
// TabPartyAdver::SendAdverDeletePacket
_SUB_EXCEPTION_HANDLER(412E90)
__SUB_CLASS_THIS0(00412E90, __thiscall, 85975,  TabPartyAdver, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_412E90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	push 0x94
	lea ecx,[esp+8]
	call COutPacket::_ctor_1
	push 0x52
	lea ecx,[esp+8]
	mov dword ptr [esp+0x20],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+4]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+8]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret
}
}
// TabPartyAdver::Draw_Regist
_SUB_EXCEPTION_HANDLER(413A50)
__SUB_CLASS_THIS(00413A50, __thiscall, 85977,  TabPartyAdver, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_413A50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
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
	mov edi,dword ptr [TSingleton<CPartyQuestInfoManager>::ms_pInstance]
	xor ebx,ebx
	mov dword ptr [ebp-4],ebx
	call TabPartyAdver::GetSelectQuestID_1
	push eax
	lea eax,[ebp-0x24]
	push eax
	mov ecx,edi
	call CPartyQuestInfoManager::Get
	push ebx
	push 0x3C
	push 0xA
	push ecx
	mov ecx,dword ptr [ebp+8]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],1
	mov dword ptr [ebp-0x18],esp
	cmp eax,ebx
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov ecx,dword ptr [ebp-0x20]
	push ecx
	call DrawQuestUnit2
	mov dword ptr [ebp-0x18],ebx
	mov edx,dword ptr [ebp-0x20]
	mov ecx,dword ptr [edx+0x14]
	mov eax,dword ptr [esi+0x64]
	push ecx
	push eax
	lea edx,[ebp-0x18]
	push offset _S_DD
	push edx
	mov byte ptr [ebp-4],2
	call ZXString<char>::Format
	add esp,0x24
	push eax
	lea ecx,[ebp-0x1C]
	mov dword ptr [ebp-0x1C],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],4
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esi+0x40]
	push 2
	push eax
	push ecx
	mov ecx,esp
	lea eax,[ebp-0x1C]
	mov dword ptr [ebp-0x14],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	push 0x42
	push 0xF5
	push ecx
	mov ecx,dword ptr [ebp+8]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-0x14],esp
	cmp eax,ebx
	je Block6

 Block5:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block6:
	call _DrawTextA
	add esp,0x18
	push ebx
	push ebx
	push offset _S_UIUIWINDOW2IMGUS__127
	push ecx
	mov ecx,dword ptr [ebp+8]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-0x14],esp
	cmp eax,ebx
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block8:
	lea ecx,[esi+0xAC8]
	call CLayoutMan::CopyToCanvas_1
	mov eax,0x20
	call __chkstk
	mov eax,dword ptr [esi+0x48]
	mov edi,esp
	push 2
	push eax
	mov ecx,esi
	call TabPartyAdver::GetAdverPrice
	push 0xA
	push edi
	push eax
	call _itoa
	add esp,8
	mov esi,esp
	mov dword ptr [ebp-0x14],esp
	mov dword ptr [esi],ebx
	cmp eax,ebx
	je Block12

 Block9:
	mov ecx,eax
	lea edi,[ecx+1]
	lea esp,[esp]

 Block10:
	mov dl,byte ptr [ecx]
	inc ecx
	cmp dl,bl
	jne Block10

 Block11:
	sub ecx,edi
	mov edi,ecx
	push edi
	push eax
	push ebx
	push edi
	mov ecx,esi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer

 Block12:
	push 0x8F
	push 0xE2
	push ecx
	mov ecx,dword ptr [ebp+8]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-0x14],esp
	cmp eax,ebx
	je Block14

 Block13:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block14:
	call _DrawTextA
	mov eax,dword ptr [ebp-0x1C]
	add esp,0x18
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],bl
	cmp eax,ebx
	je Block21

 Block17:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block20

 Block18:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block20

 Block19:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block20:
	mov dword ptr [ebp-0x20],ebx

 Block21:
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,ebx
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
	lea esp,[ebp-0x34]
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
// TabPartyAdver::TabPartyAdver
_SUB_EXCEPTION_HANDLER(413DE0)
__SUB_CLASS_THIS(00413DE0, __thiscall, 85973,  TabPartyAdver, void, CWnd*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_413DE0
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
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov eax,dword ptr [esp+0x24]
	xor ebx,ebx
	mov dword ptr [esi+0xC],eax
	lea ecx,[esi+0x10]
	int 3// TODO: 	mov dword ptr [esi],offset TabPartyAdver::`vftable'
	mov edi,0x1F
	push 0x64
	mov dword ptr [esp+0x20],ebx
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::`vftable'
	mov dword ptr [ecx+4],ebx
	mov dword ptr [ecx+8],edi
	mov dword ptr [ecx+0xC],ebx
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::_CalcAutoGrow
	lea ecx,[esi+0x28]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<TabPartyAdver::ENUM_CTRL_ID, ZXString<char>, TabPartyAdver::ENUM_CTRL_ID>::`vftable'
	mov dword ptr [ecx+4],ebx
	mov dword ptr [ecx+8],edi
	mov dword ptr [ecx+0xC],ebx
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZXString<char>, TabPartyAdver::ENUM_CTRL_ID>::_CalcAutoGrow
	mov dword ptr [esi+0x40],ebx
	mov dword ptr [esi+0x44],ebx
	mov dword ptr [esi+0x48],ebx
	mov dword ptr [esi+0x4C],ebx
	mov dword ptr [esi+0x50],ebx
	mov eax,1
	mov dword ptr [esi+0x54],eax
	or edi,0xFFFFFFFF
	mov dword ptr [esi+0x58],edi
	int 3// TODO: 	mov dword ptr [esi+0x5C],offset ZList<ZRef<ADVER_COMMON>>::`vftable'
	mov dword ptr [esi+0x64],ebx
	mov dword ptr [esi+0x68],ebx
	mov dword ptr [esi+0x6C],ebx
	lea ecx,[esi+0x78]
	mov byte ptr [esp+0x1C],6
	mov dword ptr [esi+0x70],eax
	mov dword ptr [esi+0x74],edi
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xAC0],edi
	mov byte ptr [esi+0xAC4],bl
	mov dword ptr [esi+0xAC8],ebx
	mov dword ptr [esi+0xACC],ebx
	mov dword ptr [esi+0xAD0],ebx
	mov dword ptr [esi+0xAD4],ebx
	mov dword ptr [esi+0xAD8],ebx
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
// TabPartyAdver::ShowTooltip
_SUB_EXCEPTION_HANDLER(412730)
__SUB_CLASS_THIS(00412730, __thiscall, 86004,  TabPartyAdver, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_412730
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x24]
	lea ebp,[edi+edi*4]
	lea ebp,[ebp*4+0x7F]
	cmp edi,dword ptr [esi+0x64]
	jae Block4

 Block1:
	mov eax,dword ptr [esi+0x40]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	push edi
	lea ecx,[esi+0x5C]
	mov dword ptr [esp+0x24],0
	call ZList<ZRef<ADVER_COMMON>>::FindIndex
	mov ecx,dword ptr [esi+0xC]
	mov edx,dword ptr [esi+0xC]
	mov ebx,dword ptr [ecx+0x24]
	mov eax,dword ptr [eax+4]
	add ecx,4
	lea edi,[edx+4]
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x30]
	call eax
	mov edx,dword ptr [edi]
	add eax,ebp
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	add eax,ebx
	push eax
	lea ecx,[esi+0x78]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call CUIToolTip::SetToolTip_PartyAdver
	jmp Block5

 Block4:
	lea ecx,[esi+0x78]
	call CUIToolTip::ClearToolTip

 Block5:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 4
}
}
// TabPartyAdver::OnButton_QuestNext
__SUB_CLASS_THIS0(00411780, __thiscall, 85975,  TabPartyAdver, void) {
__asm {

 Block0:
	call TabPartyAdver::GetQuestMaxPage
	mov edx,dword ptr [ecx+0x54]
	inc edx
	cmp edx,eax
	jge Block2

 Block1:
	mov eax,edx

 Block2:
	mov dword ptr [ecx+0x54],eax
	mov dword ptr [ecx+0x58],0xFFFFFFFF
	mov ecx,dword ptr [ecx+0xC]
	push 0
	call CWnd::InvalidateRect
	ret
}
}
// TabPartyAdver::SendPartyApplyPacketTo
_SUB_EXCEPTION_HANDLER(414460)
__SUB_CLASS_THIS(00414460, __thiscall, 86004,  TabPartyAdver, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_414460
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x3604]
	cmp eax,ebp
	je Block36

 Block1:
	mov edx,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	mov eax,dword ptr [edx+4]
	xor edx,edx
	cmp eax,ebp
	setne dl
	mov esi,edx
	call TabPartyAdver::GetSelectQuestID_1
	push eax
	call CPartyQuestInfoManager::IsExpeditionQuestID
	add esp,4
	mov edi,eax
	cmp esi,ebp
	je Block3

 Block2:
	lea eax,[esp+0x28]
	push 0x1A3A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x54],ebp
	lea ebx,[ebp+1]
	jmp Block4

 Block3:
	lea ecx,[esp+0x24]
	push 0x1AC5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x54],1
	mov ebx,2

 Block4:
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x24],ebp
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x54],3
	test bl,2
	je Block7

 Block5:
	mov eax,dword ptr [esp+0x24]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov byte ptr [esp+0x54],4
	test bl,1
	je Block10

 Block8:
	mov eax,dword ptr [esp+0x28]
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	cmp edi,ebp
	je Block12

 Block11:
	lea edx,[esp+0x30]
	push 0x1A3A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x54],5
	or ebx,4
	jmp Block13

 Block12:
	lea eax,[esp+0x2C]
	push 0x1AC5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x54],6
	or ebx,8

 Block13:
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x20],ebp
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x54],8
	test bl,8
	je Block16

 Block14:
	mov eax,dword ptr [esp+0x2C]
	and ebx,0xFFFFFFF7
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov byte ptr [esp+0x54],9
	test bl,4
	je Block19

 Block17:
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	lea ecx,[esp+0x34]
	push 0x163D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x14],ebp
	mov esi,dword ptr [esp+0x1C]
	mov edi,dword ptr [esp+0x20]
	mov eax,dword ptr [eax]
	push esi
	push edi
	push esi
	push edi
	push eax
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x6C],0xB
	call ZXString<char>::Format
	add esp,0x18
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebp
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x54],0xD
	cmp eax,ebp
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x54],0xE
	cmp eax,ebp
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax],ebp
	lea eax,[esp+0x1C]
	push 0xF0
	push eax
	call string_newline_by_width
	add esp,0xC
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	lea edx,[esp+0x2C]
	mov dword ptr [esp+0x4C],esp
	push edx
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x54],9
	je Block30

 Block24:
	cmp eax,ebp
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov byte ptr [esp+0x54],4
	cmp esi,ebp
	je Block28

 Block27:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp edi,ebp
	je Block43

 Block29:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4
	jmp Block43

 Block30:
	cmp eax,ebp
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	mov byte ptr [esp+0x54],4
	cmp esi,ebp
	je Block34

 Block33:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp edi,ebp
	je Block36

 Block35:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block36:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[esi+0x2038]
	call TSecType<unsigned char>::GetData
	test al,1
	jne Block40

 Block37:
	mov eax,dword ptr [esi+0x209C]
	cmp eax,ebp
	jne Block40

 Block38:
	cmp dword ptr [esi+0x20B0],ebp
	jne Block40

 Block39:
	cmp eax,ebp
	je Block41

 Block40:
	push ebp
	push 1
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x70],esp
	push 0x15E7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block43

 Block41:
	mov esi,dword ptr [esp+0x5C]
	cmp esi,ebp
	je Block43

 Block42:
	push 0x94
	lea ecx,[esp+0x40]
	call COutPacket::_ctor_1
	push 0x55
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x58],0xF
	call COutPacket::Encode1
	push esi
	lea ecx,[esp+0x40]
	call COutPacket::Encode4
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block43:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 4
}
}
// TabPartyAdver::FindQuickJoinParty
__SUB_CLASS_THIS0(00411E40, __thiscall, 85998,  TabPartyAdver, long) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [ecx+0x68]
	push ebx
	push edi
	xor ebx,ebx
	xor edi,edi
	mov dword ptr [esp+8],ecx
	test ecx,ecx
	je Block8

 Block1:
	push esi

 Block2:
	lea eax,[esp+0xC]
	push eax
	call ZList<ZRef<ADVER_COMMON>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	test esi,esi
	je Block6

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x14]
	mov ecx,esi
	call eax
	cmp eax,edi
	jle Block6

 Block4:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xC]
	mov ecx,esi
	call eax
	test eax,eax
	je Block6

 Block5:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x1C]
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	mov ebx,eax
	mov eax,dword ptr [edx+0x14]
	mov ecx,esi
	call eax
	mov edi,eax

 Block6:
	cmp dword ptr [esp+0xC],0
	jne Block2

 Block7:
	pop esi

 Block8:
	pop edi
	mov eax,ebx
	pop ebx
	pop ecx
	ret
}
}
// TabPartyAdver::GetSelectedPartyAdver
__SUB_CLASS_THIS0(00412970, __thiscall, 86005,  TabPartyAdver, const ADVER_COMMON*) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x74]
	test eax,eax
	jl Block3

 Block1:
	cmp dword ptr [ecx+0x64],eax
	jbe Block3

 Block2:
	push eax
	add ecx,0x5C
	call ZList<ZRef<ADVER_COMMON>>::FindIndex
	mov eax,dword ptr [eax+4]
	ret

 Block3:
	xor eax,eax
	ret
}
}
// TabPartyAdver::SetState
__SUB_CLASS_THIS(00415F90, __thiscall, 85984,  TabPartyAdver, void, TabPartyAdver::ENUM_STATE) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x4C]
	push eax
	call TabPartyAdver::EndState
	mov eax,dword ptr [esp+8]
	push eax
	mov ecx,esi
	mov dword ptr [esi+0x4C],eax
	call TabPartyAdver::InitState
	mov ecx,dword ptr [esi+0xC]
	push 0
	call CWnd::InvalidateRect
	pop esi
	ret 4
}
}
// TabPartyAdver::GetSelectQuestID
__SUB_CLASS_THIS0(00412720, __thiscall, 85998,  TabPartyAdver, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x58]
	push eax
	call TabPartyAdver::GetSelectQuestID_0
	ret
}
}
// TabPartyAdver::DoAction
__SUB_CLASS_THIS(00412E60, __thiscall, 85980,  TabPartyAdver, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,1
	push esi
	mov esi,ecx
	jne Block2

 Block1:
	mov eax,dword ptr [esp+0xC]
	push eax
	call TabPartyAdver::GetIndexFromQuestID
	mov ecx,esi
	mov dword ptr [esi+0x58],eax
	call TabPartyAdver::SendPartyAdverRequestPacket

 Block2:
	pop esi
	ret 8
}
}
// TabPartyAdver::AttachStatic
_SUB_EXCEPTION_HANDLER(413EE0)
__SUB_CLASS_THIS(00413EE0, __thiscall, 85986,  TabPartyAdver, void, TabPartyAdver::ENUM_CTRL_ID, long, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_413EE0
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
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::Insert
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
// TabPartyAdver::GetSelectedPartyID
__SUB_CLASS_THIS0(004128D0, __thiscall, 85998,  TabPartyAdver, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x74]
	test eax,eax
	jl Block4

 Block1:
	cmp dword ptr [ecx+0x64],eax
	jbe Block4

 Block2:
	push eax
	add ecx,0x5C
	call ZList<ZRef<ADVER_COMMON>>::FindIndex
	mov eax,dword ptr [eax+4]
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	mov ecx,eax
	mov eax,dword ptr [edx+0x1C]
	jmp eax

 Block4:
	xor eax,eax
	ret
}
}
// TabPartyAdver::GetAdverPrice
__SUB_CLASS_THIS0(00412960, __thiscall, 85998,  TabPartyAdver, long) {
__asm {

 Block0:
	call TabPartyAdver::GetSelectPartyQuestInfo
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax+0x18]
	ret

 Block2:
	xor eax,eax
	ret
}
}
// TabPartyAdver::OnButton_Whisper
__SUB_CLASS_THIS0(00412C00, __thiscall, 85975,  TabPartyAdver, void) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x74]
	push esi
	test eax,eax
	jl Block5

 Block1:
	push eax
	add ecx,0x5C
	call ZList<ZRef<ADVER_COMMON>>::FindIndex
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	mov ecx,esi
	call edx
	test eax,eax
	je Block5

 Block2:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp eax,dword ptr [ecx+0x20B4]
	je Block5

 Block3:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	je Block5

 Block4:
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0xC],esp
	push eax
	mov ecx,esi
	call edx
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	call CUIStatusBar::SetWhisperTarget
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0
	call CUIStatusBar::StartChat

 Block5:
	pop esi
	pop ecx
	ret
}
}
// QuestFilter
_SUB_EXCEPTION_HANDLER(4123A0)
__SUB(004123A0, __cdecl, 77398,  int32_t, NakedParam<ZRef<PartyQuestInfo>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4123A0
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov dword ptr [esp+0x18],0
	test ecx,ecx
	je Block4

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x40]
	call edx
	mov ecx,eax
	mov eax,dword ptr [esp+0x24]
	cmp dword ptr [eax],0x3ED
	jne Block4

 Block2:
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	je Block4

 Block3:
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call ZRef<PartyQuestInfo>::~ZRef<PartyQuestInfo>
	xor eax,eax
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret

 Block4:
	mov esi,dword ptr [esp+0x24]
	call GetLevel
	xor ebx,ebx
	cmp eax,dword ptr [esi+0x10]
	mov eax,dword ptr [esp+0x24]
	setle bl
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block8

 Block5:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block8

 Block7:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block8:
	mov eax,ebx
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret
}
}
// TabPartyAdver::IsAbleToRegist
_SUB_EXCEPTION_HANDLER(4149E0)
__SUB_CLASS_THIS0(004149E0, __thiscall, 86007,  TabPartyAdver, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4149E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	xor edi,edi
	mov dword ptr [esp+0x18],edi
	call TabPartyAdver::GetSelectQuestID_1
	push eax
	call CPartyQuestInfoManager::IsExpeditionQuestID
	add esp,4
	mov dword ptr [esp+0x1C],eax
	cmp eax,edi
	je Block2

 Block1:
	lea eax,[esp+0x24]
	push 0x1A3A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x38],edi
	lea ebx,[edi+1]
	jmp Block3

 Block2:
	lea ecx,[esp+0x20]
	push 0x1AC5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x38],1
	mov ebx,2

 Block3:
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x18],edi
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x38],3
	test bl,2
	je Block6

 Block4:
	mov eax,dword ptr [esp+0x20]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x18],ebx
	cmp eax,edi
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov byte ptr [esp+0x38],4
	test bl,1
	je Block9

 Block7:
	mov eax,dword ptr [esp+0x24]
	cmp eax,edi
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov ecx,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	mov esi,dword ptr [ecx+4]
	cmp esi,edi
	je Block18

 Block10:
	mov ecx,ebp
	call TabPartyAdver::GetSelectQuestID_1
	cmp dword ptr [esi],eax
	je Block14

 Block11:
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x1694
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,edi
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	xor eax,eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret

 Block14:
	mov ecx,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	call ExpeditionIntermediary::AmIMaster
	test eax,eax
	jne Block17

 Block15:
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push 0x1693
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,edi
	je Block13

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret

 Block17:
	mov ecx,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]

 Block18:
	cmp dword ptr [esp+0x1C],edi
	je Block23

 Block19:
	cmp dword ptr [ecx+4],edi
	je Block21

 Block20:
	call ExpeditionIntermediary::AmIMaster
	test eax,eax
	je Block25

 Block21:
	cmp esi,edi
	je Block40

 Block22:
	mov ecx,esi
	call EXPEDITION::GetMemberCount
	mov ecx,esi
	mov edi,eax
	call EXPEDITION::GetMemberLimit
	jmp Block32

 Block23:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ecx+0x3604]
	cmp eax,edi
	je Block31

 Block24:
	mov eax,dword ptr [ecx+0x20B4]
	cmp dword ptr [ecx+0x36B6],eax
	je Block31

 Block25:
	push edi
	push 1
	push edi
	push edi
	lea ecx,[esp+0x2C]
	push 0x15EB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x28],edi
	mov esi,dword ptr [esp+0x24]
	mov eax,dword ptr [eax]
	push esi
	push esi
	push eax
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x58],6
	call ZXString<char>::Format
	add esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x2C]
	add esp,0x14
	mov byte ptr [esp+0x38],5
	cmp eax,edi
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x38],4
	cmp eax,edi
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp esi,edi
	je Block13

 Block30:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret

 Block31:
	call CWvsContext::GetPartyMemberNumber
	mov edi,eax
	mov eax,6

 Block32:
	cmp edi,eax
	jl Block39

 Block33:
	push 0
	push 1
	push 0
	push 0
	lea eax,[esp+0x2C]
	push 0x15EC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x28],0
	mov esi,dword ptr [esp+0x24]
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0x54],8
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x2C]
	add esp,0x14
	mov byte ptr [esp+0x38],7
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x38],4
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test esi,esi
	je Block13

 Block38:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret

 Block39:
	xor edi,edi

 Block40:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x28]
	push edx
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x28]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov eax,dword ptr [esi+0xBD]
	push eax
	add esi,0xB5
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov ecx,ebp
	mov esi,eax
	call TabPartyAdver::GetAdverPrice
	cmp esi,eax
	jge Block43

 Block41:
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x15ED
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,edi
	je Block13

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret

 Block43:
	mov esi,dword ptr [TSingleton<CPartyQuestInfoManager>::ms_pInstance]
	mov ecx,ebp
	call TabPartyAdver::GetSelectQuestID_1
	push eax
	lea edx,[esp+0x2C]
	push edx
	mov ecx,esi
	call CPartyQuestInfoManager::Get
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x28]
	call ZRef<PartyQuestInfo>::~ZRef<PartyQuestInfo>
	mov eax,dword ptr [ebp+0x64]
	cmp eax,dword ptr [esi+0x14]
	jb Block50

 Block44:
	push edi
	push edi
	push edi
	push edi
	lea eax,[esp+0x2C]
	push 0x15EE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x28],edi
	mov esi,dword ptr [esp+0x24]
	mov eax,dword ptr [eax]
	push esi
	push esi
	push eax
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0x58],0xA
	call ZXString<char>::Format
	add esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push eax
	call ZXString<char>::_ctor_copy
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x2C]
	add esp,0x14
	mov byte ptr [esp+0x38],9
	cmp eax,edi
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x38],4
	cmp eax,edi
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp esi,edi
	je Block13

 Block49:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret

 Block50:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::CannotUseCommunityFunction
	test eax,eax
	je Block57

 Block51:
	push edi
	push 1
	push edi
	push edi
	lea edx,[esp+0x38]
	push 0x15EF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x2C],edi
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x24]
	push esi
	push eax
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x54],0xC
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	call ZXString<char>::_ctor_copy
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x30]
	add esp,0x14
	mov byte ptr [esp+0x38],0xB
	cmp eax,edi
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x38],4
	cmp eax,edi
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block55:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp esi,edi
	je Block13

 Block56:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret

 Block57:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,edi
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block59:
	mov eax,1
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret
}
}
// TabPartyAdver::AttachBanner
_SUB_EXCEPTION_HANDLER(414090)
__SUB_CLASS_THIS(00414090, __thiscall, 85988,  TabPartyAdver, void, TabPartyAdver::ENUM_CTRL_ID, long, long, NakedParam<ZRef<PartyQuestInfo>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_414090
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
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlSelectPartyQuest::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlSelectPartyQuest::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [eax],offset CCtrlSelectPartyQuest::`vftable'{for `ZRefCounted'}
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
	mov ecx,dword ptr [esp+0x44]
	mov edx,dword ptr [esp+0x40]
	push ecx
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],edx
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x34],2
	mov dword ptr [esp+0x50],esp
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
	call ZMap<TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, TabPartyAdver::ENUM_CTRL_ID>::Insert
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
	mov eax,dword ptr [esp+0x40]
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
	ret 0x18

 Block16:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	jmp Block4

 Block17:
	xor edi,edi
	jmp Block9
}
}
