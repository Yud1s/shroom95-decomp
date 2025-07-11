#include "regen.hpp"
// UIItem.ipp
#include "UIItem.hpp"

// CUIItem::ResetInfo
__SUB_CLASS_THIS0(003CBB20, __thiscall, 54696,  CUIItem, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xAFC]
	mov ecx,dword ptr [ecx+0xB0C]
	push eax
	call CCtrlTab::SetTab
	ret
}
}
// CUIItem::GetRTTI
__SUB_CLASS_THIS0(003CBDF0, __thiscall, 54715,  CUIItem, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIItem::ms_RTTI_CUIItem
	ret
}
}
// CUIItem::ItemRelease
__SUB_CLASS_THIS(003CC300, __thiscall, 54711,  CUIItem, int32_t, long, GW_ItemSlotBase*) {
__asm {

 Block0:
	sub esp,0x18
	push ebx
	push ebp
	push esi
	mov dword ptr [esp+0x10],ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edi
	lea eax,[esp+0x20]
	mov esi,ecx
	push eax
	mov dword ptr [esp+0x14],esi
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x24]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
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
	call ebp
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov esi,dword ptr [esp+0x10]
	mov dword ptr [esp+0x24],0

 Block5:
	cmp dword ptr [esi+0x20B8],0
	jne Block24

 Block6:
	mov eax,dword ptr [esi+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block24

 Block7:
	call get_update_time
	sub eax,dword ptr [esi+0x20BC]
	cmp eax,0x1F4
	jl Block24

 Block8:
	mov edx,dword ptr [esp+0x2C]
	push edx
	push 1
	lea eax,[esp+0x20]
	push eax
	mov ecx,ebx
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block13

 Block9:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block10:
	mov ecx,dword ptr [esp+0x1C]
	add ecx,4
	push ecx
	call ebp
	mov ecx,dword ptr [esp+0x1C]
	test ecx,ecx
	je Block12

 Block11:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block12:
	mov dword ptr [esp+0x1C],0

 Block13:
	test esi,esi
	je Block24

 Block14:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x80]
	mov ecx,esi
	call eax
	test al,al
	je Block24

 Block15:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x78]
	mov ecx,esi
	call eax
	test eax,eax
	jne Block24

 Block16:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	mov edi,eax
	test edi,edi
	je Block24

 Block17:
	mov ebp,dword ptr [esp+0x14]
	mov ecx,dword ptr [ebp+0xB70]
	push ecx
	push 2
	lea edx,[esp+0x20]
	push edx
	mov ecx,ebx
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x18]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test esi,esi
	je Block24

 Block18:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0x10
	call CInputSystem::SetCursorState
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	sub eax,0x258960
	je Block25

 Block19:
	sub eax,1
	je Block23

 Block20:
	sub eax,1
	jne Block26

 Block21:
	mov ecx,edi
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrLevel
	cmp eax,0x78
	jle Block26

 Block22:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x18
	ret 8

 Block23:
	mov ecx,edi
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrLevel
	cmp eax,0x46
	jle Block26

 Block24:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x18
	ret 8

 Block25:
	mov ecx,edi
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrLevel
	cmp eax,0x1E
	jg Block24

 Block26:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [ebp+0xB70]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x18]
	call CWvsContext::SendItemReleaseRequest
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,0x18
	ret 8
}
}
// CUIItem::OnChildNotify
_SUB_EXCEPTION_HANDLER(3CF250)
__SUB_CLASS_THIS(003CF250, __thiscall, 54698,  CUIItem, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3CF250
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
	mov ebx,dword ptr [esp+0x24]
	mov edi,dword ptr [esp+0x2C]
	mov ebp,dword ptr [esp+0x28]
	cmp ebx,0x7D0
	jne Block3

 Block1:
	cmp ebp,0x1F4
	jne Block7

 Block2:
	mov eax,edi
	push eax
	call CUIItem::OnTabChanged
	jmp Block27

 Block3:
	cmp ebx,0x7D1
	jne Block7

 Block4:
	cmp ebp,0x12C
	jb Block7

 Block5:
	cmp ebp,0x130
	ja Block7

 Block6:
	lea ecx,[esi+0x88]
	call CUIToolTip::ClearToolTip
	mov ecx,dword ptr [esi+0xB34]
	mov dword ptr [ecx*4+CUIItem::ms_anItemScrollPos],edi
	lea edx,[edi*4+1]
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xB30],edx
	call CWnd::InvalidateRect
	mov ecx,esi
	call CUIItem::SetLastestGetItemEffect

 Block7:
	cmp ebp,0x65
	jne Block25

 Block8:
	lea eax,[ebx-0x7D3]
	cmp eax,4
	ja Block27

 Block9:
	cmp EAX, 0
je Block10
cmp EAX, 1
je Block14
cmp EAX, 2
je Block16
cmp EAX, 3
je Block20
cmp EAX, 4
je Block22


 Block10:
	push 0
	test edi,edi
	jne Block12

 Block11:
	mov ecx,dword ptr [esi+0xB1C]
	push 0
	push 0
	call CCtrlButton::SetToolTip
	jmp Block27

 Block12:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0xFFFFFFFF
	push offset _S_LEFT__2
	call ZXString<char>::CreateFromCharStr
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x2CA
	mov dword ptr [esp+0x2C],0
	push eax

 Block13:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xB1C]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call CCtrlButton::SetSimpleToolTip
	jmp Block27

 Block14:
	push 0
	test edi,edi
	je Block11

 Block15:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0xFFFFFFFF
	push offset _S_LEFT__2
	call ZXString<char>::CreateFromCharStr
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0x2CB
	mov dword ptr [esp+0x2C],1
	push ecx
	jmp Block13

 Block16:
	push 0
	test edi,edi
	jne Block18

 Block17:
	mov ecx,dword ptr [esi+0xB24]
	push 0
	push 0
	call CCtrlButton::SetToolTip
	jmp Block27

 Block18:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0xFFFFFFFF
	push offset _S_LEFT__2
	call ZXString<char>::CreateFromCharStr
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0x11A5
	mov dword ptr [esp+0x2C],2
	push edx

 Block19:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xB24]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call CCtrlButton::SetSimpleToolTip
	jmp Block27

 Block20:
	push 0
	test edi,edi
	je Block17

 Block21:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0xFFFFFFFF
	push offset _S_LEFT__2
	call ZXString<char>::CreateFromCharStr
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x11A6
	mov dword ptr [esp+0x2C],3
	push eax
	jmp Block19

 Block22:
	push 0
	test edi,edi
	jne Block24

 Block23:
	mov ecx,dword ptr [esi+0xB2C]
	push edi
	push edi
	call CCtrlButton::SetToolTip
	jmp Block27

 Block24:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0xFFFFFFFF
	push offset _S_LEFT__2
	call ZXString<char>::CreateFromCharStr
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0x11A8
	push ecx
	mov dword ptr [esp+0x30],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xB2C]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call CCtrlButton::SetSimpleToolTip
	jmp Block27

 Block25:
	cmp ebp,0x64
	jne Block27

 Block26:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	push ebx
	mov ecx,esi
	call eax

 Block27:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 0xC
}
}
// CUIItem::OnButtonClicked
__SUB_CLASS_THIS(003CC4F0, __thiscall, 54701,  CUIItem, void, uint32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	lea eax,[edx-0x7D2]
	cmp eax,5
	ja Block13

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5
cmp EAX, 4
je Block5
cmp EAX, 5
je Block6


 Block2:
	call CUIItem::OnDropMoney
	ret 4

 Block3:
	call CUIItem::OnGather
	ret 4

 Block4:
	call CUIItem::OnSort
	ret 4

 Block5:
	call CUIItem::Toggle
	ret 4

 Block6:
	mov eax,dword ptr [ecx+0xB34]
	xor edx,edx
	sub eax,1
	je Block11

 Block7:
	sub eax,1
	je Block10

 Block8:
	sub eax,2
	jne Block12

 Block9:
	mov edx,0x2FDFE1F
	jmp Block12

 Block10:
	mov edx,0x2FDFE1E
	jmp Block12

 Block11:
	mov edx,0x2FDFE1D

 Block12:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [eax+0x40CC],edx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [esp+4],0
	jmp  CWvsContext::SendMigrateToShopRequest

 Block13:
	mov dword ptr [esp+4],edx
	jmp  CUIWnd::OnButtonClicked
}
}
// CUIItem::Draw
_SUB_EXCEPTION_HANDLER(3CCF50)
__SUB_CLASS_THIS(003CCF50, __thiscall, 54702,  CUIItem, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3CCF50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x6C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x80]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov eax,dword ptr [esp+0x90]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x50]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [esp+0x54]
	mov ebp,dword ptr [eax+4]
	mov dword ptr [esp+0x20],ebp
	test esi,esi
	je Block5

 Block1:
	add esi,0xFFFFFFF0
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
	mov dword ptr [esp+0x54],0

 Block5:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebx
	call CWnd::GetCanvas
	lea edx,[esp+0x1C]
	push 0x39
	xor esi,esi
	push edx
	mov dword ptr [esp+0x90],esi
	call get_basic_font
	add esp,8
	mov dword ptr [esp+0x14],esi
	mov eax,dword ptr [ebp+0xBD]
	push 1
	push eax
	lea ecx,[ebp+0xB5]
	push ecx
	mov byte ptr [esp+0x94],2
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	lea edx,[esp+0x1C]
	push edx
	call format_integer
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea eax,[esp+0x60]
	push eax
	call edi
	lea ecx,[esp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	mov eax,dword ptr [esp+0x14]
	lea edx,[esp+0x60]
	push edx
	push ecx
	mov dword ptr [esp+0x98],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x94],3
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x90],4
	cmp ecx,esi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov byte ptr [esp+0x90],3
	call IWzFont::CalcTextWidth
	mov esi,0x7E
	sub esi,eax
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x88],2
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	lea eax,[esp+0x40]
	push eax
	call edi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	lea edx,[esp+0x60]
	push edx
	mov byte ptr [esp+0x8C],5
	call edi
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov eax,dword ptr [esp+0x1C]
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x64]
	push edx
	mov edx,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0xA0],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x9C],6
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [esp+0x38]
	mov byte ptr [esp+0x98],7
	test edi,edi
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	push 0x10C
	push esi
	mov ecx,edi
	mov byte ptr [esp+0xA0],6
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x88],5
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x88],2
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov ecx,dword ptr [ebx+0xB34]
	lea eax,[ebp+ecx*4+0x501]
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block29

 Block28:
	xor ebp,ebp
	jmp Block30

 Block29:
	mov ebp,dword ptr [eax-4]

 Block30:
	mov edx,dword ptr [ebx+0xB30]
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x90],edx
	lea esp,[esp]

 Block31:
	cmp dword ptr [ebx+0xB54],0
	je Block33

 Block32:
	mov eax,ebp
	jmp Block35

 Block33:
	mov eax,dword ptr [ebx+0xB30]
	mov ecx,ebp
	add eax,0x18
	cmp eax,ecx
	jl Block35

 Block34:
	mov eax,ecx

 Block35:
	cmp dword ptr [esp+0x90],eax
	jge Block63

 Block36:
	mov eax,dword ptr [esp+0x90]
	mov ecx,dword ptr [ebx+0xB34]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x28]
	lea edx,[esp+0x38]
	push edx
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block41

 Block37:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x34]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x34]
	test ecx,ecx
	je Block40

 Block39:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block40:
	mov dword ptr [esp+0x34],0

 Block41:
	test esi,esi
	je Block62

 Block42:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov edx,dword ptr [esp+0x90]
	lea ecx,[esp+0x60]
	push ecx
	push edx
	mov ecx,ebx
	mov ebp,eax
	call CUIItem::GetItemSlotRect
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],esi
	lea eax,[esi+4]
	mov dword ptr [esp+0x34],esp
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::CalcEquipItemQuality
	mov edx,dword ptr [esi]
	mov dword ptr [esp+0x2C],eax
	mov eax,dword ptr [edx+0x18]
	mov ecx,esi
	call eax
	cmp eax,3
	jne Block44

 Block43:
	push 2
	push 0
	push 0
	push 0
	mov ecx,esi
	call GW_ItemSlotPet::IsDead
	push eax
	push 0
	push 0
	jmp Block53

 Block44:
	cmp dword ptr [ebx+0xB34],1
	jne Block52

 Block45:
	mov edx,dword ptr [esp+0x90]
	mov ecx,dword ptr [esp+0x20]
	push edx
	push 1
	lea eax,[esp+0x48]
	push eax
	call CharacterData::GetItem
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x24],ecx
	test eax,eax
	je Block50

 Block46:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block49

 Block47:
	mov edx,dword ptr [esp+0x44]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x44]
	test ecx,ecx
	je Block49

 Block48:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block49:
	mov dword ptr [esp+0x44],0

 Block50:
	cmp dword ptr [esp+0x24],0
	je Block52

 Block51:
	mov eax,dword ptr [esp+0x6C]
	mov ecx,dword ptr [esp+0x68]
	mov edx,dword ptr [esp+0x64]
	push eax
	mov eax,dword ptr [esp+0x64]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	push edx
	push eax
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x3C],esp
	push edi
	call eax
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawGradeFrame

 Block52:
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push 2
	push 0
	push ecx
	push 0
	push 0
	push 0
	mov ecx,esi
	call eax
	push eax

 Block53:
	mov ecx,dword ptr [esp+0x88]
	mov edx,dword ptr [esp+0x7C]
	push ecx
	push edx
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x58],esp
	push edi
	call ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov eax,dword ptr [ebx+0xB34]
	cmp eax,2
	je Block58

 Block54:
	cmp eax,3
	je Block58

 Block55:
	cmp eax,4
	je Block58

 Block56:
	push ebp
	call get_consume_cash_item_type
	add esp,4
	test eax,eax
	jne Block58

 Block57:
	push ebp
	call get_etc_cash_item_type
	add esp,4
	test eax,eax
	je Block61

 Block58:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	mov ecx,esi
	call eax
	push 0
	push ecx
	mov esi,eax
	mov eax,dword ptr [ebx+0xB50]
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block60

 Block59:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block60:
	mov eax,dword ptr [esp+0x74]
	mov ecx,dword ptr [esp+0x68]
	push esi
	add eax,0xFFFFFFF4
	push eax
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x44],esp
	push edi
	call eax
	call draw_number_by_image
	add esp,0x18

 Block61:
	mov ebp,dword ptr [esp+0x18]

 Block62:
	inc dword ptr [esp+0x90]
	jmp Block31

 Block63:
	cmp dword ptr [ebx+0xB54],0
	je Block73

 Block64:
	mov esi,ebp
	cmp esi,0x60
	jg Block73

 Block65:
	lea ecx,[esp+0x50]
	push ecx
	push esi
	mov ecx,ebx
	call CUIItem::GetItemSlotRect
	lea edx,[esp+0x60]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block66:
	mov ebp,dword ptr [esp+0x60]
	mov ecx,dword ptr [ebx+0xB58]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x74]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x78]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x7C]
	push ecx
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0x68]
	push eax
	push ecx
	push edi
	mov byte ptr [esp+0xA8],8
	call edx
	test eax,eax
	jge Block68

 Block67:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block68:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x88],2
	jne Block71

 Block69:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	inc esi
	cmp esi,0x60
	jle Block65

 Block73:
	cmp dword ptr [ebx+0xB34],2
	jne Block112

 Block74:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test ecx,ecx
	je Block112

 Block75:
	push 0
	push 0
	push 0
	push 0
	push 0
	call CUserLocal::GetProperBulletPosition
	test eax,eax
	je Block112

 Block76:
	lea edx,[esp+0x70]
	push edx
	push eax
	mov ecx,ebx
	call CUIItem::GetItemSlotRect
	test eax,eax
	je Block112

 Block77:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x40]
	push eax
	call esi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebp,ebp
	add esp,8
	cmp eax,ebp
	jge Block79

 Block78:
	push eax
	call _com_issue_error

 Block79:
	lea edx,[esp+0x50]
	push edx
	mov byte ptr [esp+0x8C],9
	call esi
	lea eax,[esp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	push ebp
	push ebp
	lea ecx,[esp+0x48]
	push ecx
	lea edx,[esp+0x5C]
	push edx
	push ecx
	mov dword ptr [esp+0xA4],esp
	mov ecx,esp
	mov bl,0xA
	push offset _S_UIUIWINDOW2IMGIT__28
	mov byte ptr [esp+0xA0],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x9C],0xB
	cmp dword ptr [_D_G_RM],ebp
	jne Block83

 Block82:
	push 0x80004003
	call _com_issue_error

 Block83:
	lea eax,[esp+0x44]
	mov byte ptr [esp+0x9C],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x90],0xC
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x2C],esi
	cmp eax,ebp
	je Block87

 Block84:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x90]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebp
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x90]
	cmp eax,ebp
	mov esi,ecx
	mov dword ptr [esp+0x2C],esi
	jge Block87

 Block85:
	cmp eax,0x80004002
	je Block87

 Block86:
	push eax
	call _com_issue_error

 Block87:
	mov ebx,8
	mov byte ptr [esp+0x88],0xE
	cmp word ptr [esp+0x30],bx
	jne Block90

 Block88:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,ebp
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block91:
	mov byte ptr [esp+0x88],0xF
	cmp word ptr [esp+0x50],bx
	jne Block94

 Block92:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,ebp
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block95:
	mov byte ptr [esp+0x88],0x10
	cmp word ptr [esp+0x40],bx
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,ebp
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block99:
	mov edx,3
	mov word ptr [esp+0x60],dx
	mov dword ptr [esp+0x68],0xFF
	mov byte ptr [esp+0x88],0x11
	cmp esi,ebp
	jne Block101

 Block100:
	push 0x80004003
	call _com_issue_error

 Block101:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x90]
	push ecx
	push esi
	mov dword ptr [esp+0x98],ebp
	call edx
	cmp eax,ebp
	jge Block103

 Block102:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block103:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x6C]
	mov ebx,dword ptr [esp+0x90]
	lea ecx,[esp+0x24]
	push ecx
	push esi
	mov dword ptr [esp+0x2C],ebp
	call edx
	cmp eax,ebp
	jge Block105

 Block104:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block105:
	mov ebp,dword ptr [esp+0x60]
	mov ecx,dword ptr [esp+0x74]
	mov edx,dword ptr [esp+0x70]
	sub edx,dword ptr [esp+0x24]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x74]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x78]
	push esi
	sub ecx,ebx
	mov ebx,dword ptr [edi]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x80]
	push ecx
	push edx
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [ebx+0x80]
	push edi
	call eax
	test eax,eax
	jge Block107

 Block106:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block107:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x88],0x10
	jne Block110

 Block108:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	test eax,eax
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea edx,[esp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block111:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0x8C],2
	call ecx

 Block112:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x88],1
	test eax,eax
	je Block114

 Block113:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block114:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x88],0
	test eax,eax
	je Block116

 Block115:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block116:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x80]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x78
	ret 4
}
}
// CUIItem::SetLastestGetItemEffect
_SUB_EXCEPTION_HANDLER(3CD8D0)
__SUB_CLASS_THIS0(003CD8D0, __thiscall, 54696,  CUIItem, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3CD8D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x94
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xA8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0xB5C]
	lea ecx,[esi+0xB5C]
	xor ebx,ebx
	mov dword ptr [esp+0x18],ecx
	cmp eax,ebx
	je Block2

 Block1:
	mov dword ptr [ecx],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xB60]
	lea ecx,[esi+0xB60]
	mov dword ptr [esp+0x54],ecx
	cmp eax,ebx
	je Block4

 Block3:
	mov dword ptr [ecx],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [eax+0x4194]
	mov dword ptr [esi+0xB64],ecx
	mov eax,dword ptr [eax+0x4198]
	mov dword ptr [esi+0xB68],eax
	cmp ecx,ebx
	je Block94

 Block5:
	cmp eax,ebx
	je Block94

 Block6:
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov ebp,edx
	shr ebp,0x1F
	add ebp,edx
	push ebp
	mov ecx,esi
	call CUIItem::ItemTI_2_TabIndex
	mov ecx,eax
	shl ecx,5
	sub ecx,eax
	sub ecx,0x15
	mov dword ptr [esp+0x3C],ecx
	mov dword ptr [esp+0x14],ebx
	mov edi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esp+0xB0],ebx
	cmp ebp,dword ptr [esi+0xB34]
	jne Block29

 Block7:
	lea edx,[esp+0x2C]
	push edx
	call edi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0xB4],1
	call edi
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	push 0
	push 0
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	push ecx
	mov dword ptr [esp+0x6C],esp
	mov ecx,esp
	mov bl,2
	push offset _S_UIUIWINDOW2IMGIT__31
	mov byte ptr [esp+0xC8],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xC4],3
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea edx,[esp+0x30]
	mov byte ptr [esp+0xC4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xB8],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block16

 Block14:
	cmp eax,0x80004002
	je Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov edi,8
	mov byte ptr [esp+0xB0],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x1C],di
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x1C]
	push ecx
	call ebx

 Block20:
	mov byte ptr [esp+0xB0],1
	cmp word ptr [esp+0x40],di
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[esp+0x40]
	push eax
	call ebx

 Block24:
	mov byte ptr [esp+0xB0],0
	cmp word ptr [esp+0x2C],di
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov dword ptr [esp+0x50],0x1B
	jmp Block51

 Block27:
	lea edx,[esp+0x2C]
	push edx
	call ebx

 Block28:
	mov dword ptr [esp+0x50],0x1B
	jmp Block51

 Block29:
	lea eax,[esp+0x2C]
	push eax
	call edi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block31

 Block30:
	push eax
	call _com_issue_error

 Block31:
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0xB4],5
	call edi
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	push 0
	push 0
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x4C]
	push edx
	push ecx
	mov dword ptr [esp+0x6C],esp
	mov ecx,esp
	mov bl,6
	push offset _S_UIUIWINDOW2IMGIT__30
	mov byte ptr [esp+0xC8],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xC4],7
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea eax,[esp+0x30]
	mov byte ptr [esp+0xC4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov edi,8
	mov byte ptr [esp+0xB8],8
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block38

 Block36:
	cmp eax,0x80004002
	je Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	mov byte ptr [esp+0xB0],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x1C],di
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x1C]
	push edx
	call ebx

 Block42:
	mov byte ptr [esp+0xB0],5
	cmp word ptr [esp+0x40],di
	jne Block45

 Block43:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea ecx,[esp+0x40]
	push ecx
	call ebx

 Block46:
	mov byte ptr [esp+0xB0],0
	cmp word ptr [esp+0x2C],di
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea eax,[esp+0x2C]
	push eax
	call ebx

 Block50:
	mov dword ptr [esp+0x50],0x1D

 Block51:
	mov ebx,dword ptr [esp+0x14]
	test ebx,ebx
	sete al
	test al,al
	jne Block92

 Block52:
	test ebx,ebx
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	mov ecx,ebx
	call IWzProperty::Getcount
	test eax,eax
	je Block92

 Block55:
	mov ecx,dword ptr [esi+0x18]
	lea edi,[esi+0x18]
	push 0
	push 0xFF
	test ecx,ecx
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	call IWzGr2DLayer::Getz
	inc eax
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x68],esp
	push edi
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov ecx,dword ptr [esp+0x60]
	mov edx,dword ptr [esp+0x4C]
	push ecx
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xC4],9
	push edx
	test ecx,ecx
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x58],esp
	push eax
	call IWzGr2DLayer::Getlt
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x60],esp
	push ebx
	call edx
	lea eax,[esp+0x50]
	push eax
	mov byte ptr [esp+0xD8],0
	call CAnimationDisplayer::LoadLayer_0
	mov ecx,dword ptr [esp+0x40]
	add esp,0x28
	push eax
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov eax,dword ptr [esp+0x18]
	cmp dword ptr [eax],0
	sete al
	test al,al
	je Block63

 Block62:
	mov dword ptr [esp+0xB0],0xFFFFFFFF
	jmp Block93

 Block63:
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0xB4],0xA
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	push 0x20
	mov byte ptr [esp+0xBC],0xB
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x1C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	cmp ebp,dword ptr [esi+0xB34]
	jne Block83

 Block64:
	mov dword ptr [esp+0x44],0
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x2C]
	push edx
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [esi+0xB68]
	mov eax,dword ptr [eax+4]
	push ecx
	push ebp
	lea edx,[esp+0x60]
	push edx
	mov ecx,eax
	call CharacterData::GetItem
	push eax
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0xB4],0xE
	call ZRef<GW_ItemSlotBase>::op_assign_copy
	lea ecx,[esp+0x58]
	mov byte ptr [esp+0xB0],0xD
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xB0],0xC
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [esi+0xB68]
	lea eax,[esp+0x88]
	push eax
	push ecx
	mov ecx,esi
	call CUIItem::GetItemSlotRect
	test eax,eax
	je Block82

 Block65:
	mov eax,dword ptr [esp+0x8C]
	mov edx,dword ptr [esp+0x88]
	mov dword ptr [esp+0x3C],eax
	mov eax,dword ptr [esp+0x44]
	xor ebp,ebp
	mov dword ptr [esp+0x58],edx
	cmp eax,ebp
	je Block87

 Block66:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	cmp eax,dword ptr [esi+0xB64]
	jne Block87

 Block67:
	push offset _D_VTMISSING
	lea ecx,[esp+0x7C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0xB4],0xF
	call Ztl_variant_t::_ctor_1
	push ebp
	push ebp
	lea ecx,[esp+0x80]
	push ecx
	lea edx,[esp+0x74]
	push edx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov bl,0x10
	push offset _S_UIUIWINDOW2IMGIT__29
	mov byte ptr [esp+0xC8],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xC4],0x11
	cmp dword ptr [_D_G_RM],ebp
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea eax,[esp+0xAC]
	mov byte ptr [esp+0xC4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xB8],0x12
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x54]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0x98]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x68]
	call Ztl_variant_t::~Ztl_variant_t
	mov bl,0x16
	lea ecx,[esp+0x78]
	mov byte ptr [esp+0xB0],bl
	call Ztl_variant_t::~Ztl_variant_t
	mov esi,dword ptr [esp+0x50]
	test esi,esi
	sete al
	test al,al
	jne Block84

 Block70:
	test esi,esi
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	mov ecx,esi
	call IWzProperty::Getcount
	test eax,eax
	je Block84

 Block73:
	push 0
	push 0xFF
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x34],esp
	mov eax,esp
	push 0
	push ecx
	lea edx,[esp+0x74]
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push edx
	mov byte ptr [esp+0xD8],0x17
	mov dword ptr [eax],0
	call _x_com_ptr<IWzProperty>::_ctor_copy
	lea eax,[esp+0x50]
	push eax
	mov byte ptr [esp+0xD8],bl
	call CAnimationDisplayer::LoadLayer_0
	mov ebp,dword ptr [esp+0x7C]
	add esp,0x28
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block75:
	cmp dword ptr [ebp],0
	sete al
	test al,al
	je Block77

 Block76:
	mov byte ptr [esp+0xB0],0xC
	jmp Block85

 Block77:
	mov eax,dword ptr [edi]
	mov ecx,0xD
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block79

 Block78:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block79:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0xB4],0x18
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xB0],bl
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [edi]
	mov edx,0xD
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block81

 Block80:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block81:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0xB4],0x19
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putoverlay
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xB0],bl
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getz
	inc eax
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putz
	push offset _D_VTMISSING
	lea ecx,[esp+0x30]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0xB4],0x1A
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esp+0x3C]
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x5C]
	lea edx,[esp+0x20]
	push edx
	dec eax
	dec ecx
	push eax
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0xC0],0x1B
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0x1C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xB0],bl
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x5C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0xB4],0x1C
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x20]
	push eax
	push 0x20
	mov ecx,ebp
	mov byte ptr [esp+0xBC],0x1D
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x1C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x58]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0xB4],0xC
	call edx
	mov ebx,dword ptr [esp+0x14]

 Block82:
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0xB0],0
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>

 Block83:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	call eax
	jmp Block94

 Block84:
	mov byte ptr [esp+0xB0],0xC
	test esi,esi
	je Block86

 Block85:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block86:
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0xB0],0
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	mov eax,dword ptr [esp+0x14]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	call eax
	jmp Block94

 Block87:
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [ecx]
	cmp eax,ebp
	je Block89

 Block88:
	mov dword ptr [ecx],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block89:
	mov ecx,dword ptr [esp+0x54]
	mov eax,dword ptr [ecx]
	cmp eax,ebp
	je Block91

 Block90:
	mov dword ptr [ecx],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block91:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[esp+0x40]
	mov dword ptr [eax+0x4194],ebp
	mov dword ptr [eax+0x4198],ebp
	mov byte ptr [esp+0xB0],0
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	call ecx
	jmp Block94

 Block92:
	mov dword ptr [esp+0xB0],0xFFFFFFFF
	test ebx,ebx
	je Block94

 Block93:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block94:
	mov ecx,dword ptr [esp+0xA8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA0
	ret
}
}
// CUIItem::OnTabChanged
__SUB_CLASS_THIS(003CF040, __thiscall, 54703,  CUIItem, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub esp,8
	push ebp
	push esi
	mov esi,ecx
	mov dword ptr [esi+0xAFC],eax
	inc eax
	push eax
	call CUIItem::SetItemTI
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block5

 Block1:
	push ebx
	push edi
	lea edi,[eax-0x10]
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
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block4:
	pop edi
	mov dword ptr [esp+0x10],0
	pop ebx

 Block5:
	mov ecx,dword ptr [esi+0xB14]
	test ecx,ecx
	je Block9

 Block6:
	mov edx,dword ptr [esi+0xB34]
	lea eax,[ebp+edx*4+0x501]
	mov eax,dword ptr [eax]
	test eax,eax
	je Block8

 Block7:
	mov eax,dword ptr [eax-4]

 Block8:
	add eax,0xFFFFFFEA
	cdq
	and edx,3
	add eax,edx
	sar eax,2
	inc eax
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [esi+0xB34]
	mov ecx,dword ptr [eax*4+CUIItem::ms_anItemScrollPos]
	push ecx
	mov ecx,dword ptr [esi+0xB14]
	call CCtrlScrollBar::SetCurPos
	mov edx,dword ptr [esi+0xB14]
	mov eax,dword ptr [edx+0x38]
	lea ecx,[eax*4+1]
	mov dword ptr [esi+0xB30],ecx
	jmp Block10

 Block9:
	mov dword ptr [esi+0xB30],1

 Block10:
	cmp dword ptr [esi+0xB54],0
	je Block21

 Block11:
	mov eax,dword ptr [esi+0xB34]
	dec eax
	cmp eax,4
	ja Block16

 Block12:
	cmp EAX, 0
je Block13
cmp EAX, 1
je Block13
cmp EAX, 2
je Block14
cmp EAX, 3
je Block13
cmp EAX, 4
je Block14


 Block13:
	push 1
	jmp Block15

 Block14:
	push 0

 Block15:
	mov eax,dword ptr [esi+0xB2C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	call eax

 Block16:
	cmp dword ptr [esi+0xB54],0
	je Block21

 Block17:
	mov ecx,dword ptr [esi+0xB34]
	lea eax,[ebp+ecx*4+0x501]
	mov eax,dword ptr [eax]
	test eax,eax
	je Block19

 Block18:
	mov eax,dword ptr [eax-4]

 Block19:
	dec eax
	cmp eax,0x60
	jl Block21

 Block20:
	mov eax,dword ptr [esi+0xB2C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax

 Block21:
	push 0xFFFFFFFF
	push 0
	mov ecx,esi
	call CUIItem::SetTryToReleaseItem
	lea ecx,[esi+0x88]
	call CUIToolTip::ClearToolTip
	mov eax,dword ptr [esi+0xB34]
	mov ecx,dword ptr [esi+eax*4+0xB38]
	push ecx
	push eax
	mov ecx,esi
	call CUIItem::SetArrangeButton
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov ecx,esi
	call CUIItem::SetLastestGetItemEffect
	pop esi
	pop ebp
	add esp,8
	ret 4
}
}
// CUIItem::_GetBackgroundUOL
__SUB_CLASS_THIS0(003CCD90, __thiscall, 54714,  CUIItem, ZXString16) {
__asm {

 Block0:
	push ecx
	cmp dword ptr [ecx+0xB54],0
	mov dword ptr [esp],0
	mov edx,offset _S_UIUIWINDOW2IMGIT__27
	jne Block2

 Block1:
	mov edx,offset _S_UIUIWINDOW2IMGIT__26

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
// CUIItem::ShowItemReleaseEffect
_SUB_EXCEPTION_HANDLER(3CE2B0)
__SUB_CLASS_THIS(003CE2B0, __thiscall, 54703,  CUIItem, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3CE2B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	push ebx
	push ebp
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esp+0x60]
	lea eax,[esp+0x40]
	push eax
	push ecx
	mov ecx,esi
	call CUIItem::GetItemSlotRect
	push 0x4E
	push offset _S_UIUIWINDOW2IMGIT__32
	push 0
	push 0x27
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x27
	lea ecx,[esp+0x14]
	call ZXString16::ReleaseBuffer
	push 0
	push 0xFF
	push 1
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x6C],0
	call CWnd::GetLayer
	mov eax,dword ptr [esp+0x54]
	mov ecx,dword ptr [esp+0x50]
	push eax
	push ecx
	lea edx,[esp+0x2C]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x74],1
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x70],2
	test ecx,ecx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push eax
	call IWzGr2DLayer::Getlt
	mov ebp,dword ptr [esp+0x2C]
	push 0
	lea ecx,[esp+0x80]
	push ebp
	push ecx
	mov byte ptr [esp+0x80],3
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x58],5
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block4:
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	sete cl
	test cl,cl
	jne Block22

 Block5:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	call esi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea edx,[esp+0x20]
	mov bl,6
	push edx
	mov byte ptr [esp+0x5C],bl
	call esi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x58],7
	test ecx,ecx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x58],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x20],si
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x20]
	push edx
	call ebx

 Block15:
	mov byte ptr [esp+0x58],5
	cmp word ptr [esp+0x30],si
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x30]
	push ecx
	call ebx

 Block19:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [esp+0x64]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x28],esp
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block21:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [esp+0x60]

 Block22:
	mov byte ptr [esp+0x58],0
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	mov dword ptr [esp+0x58],0xFFFFFFFF
	test ebp,ebp
	je Block26

 Block25:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block26:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 4
}
}
// CUIItem::GetSlotPositionFromPoint
__SUB_CLASS_THIS(003CC220, __thiscall, 54704,  CUIItem, long, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	lea eax,[esp+0x10]
	mov edi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
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
	mov ecx,dword ptr [edi+0xB34]
	lea eax,[ebp+ecx*4+0x501]
	mov eax,dword ptr [eax]
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax-4]

 Block7:
	cmp dword ptr [edi+0xB54],0
	je Block9

 Block8:
	mov ebx,0x61
	jmp Block11

 Block9:
	mov ecx,dword ptr [edi+0xB30]
	add ecx,0x18
	cmp ecx,eax
	mov ebx,ecx
	jl Block11

 Block10:
	mov ebx,eax

 Block11:
	mov esi,dword ptr [edi+0xB30]
	cmp esi,ebx
	jge Block14

 Block12:
	lea edx,[esp+0x10]
	push edx
	push esi
	mov ecx,edi
	call CUIItem::GetItemSlotRect
	mov eax,dword ptr [esp+0x28]
	push eax
	mov eax,dword ptr [esp+0x28]
	push eax
	lea eax,[esp+0x18]
	push eax
	call PtInRect
	test eax,eax
	jne Block15

 Block13:
	inc esi
	cmp esi,ebx
	jl Block12

 Block14:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 8

 Block15:
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8
}
}
// CUIItem::~CUIItem
_SUB_EXCEPTION_HANDLER(3CBC80)
__SUB_CLASS_THIS0(003CBC80, __thiscall, 54696,  CUIItem, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3CBC80
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIItem::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIItem::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIItem::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	xor ebx,ebx
	lea ecx,[esi+0xB74]
	mov dword ptr [esp+0x1C],0xA
	mov dword ptr [eax+0x4194],ebx
	mov dword ptr [eax+0x4198],ebx
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0xB60]
	mov byte ptr [esp+0x1C],9
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xB5C]
	mov byte ptr [esp+0x1C],8
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xB58]
	mov byte ptr [esp+0x1C],7
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xB50]
	mov byte ptr [esp+0x1C],6
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	lea edi,[esi+0xB28]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0xB20]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0xB18]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	lea edi,[esi+0xB10]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block16

 Block15:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block16:
	lea edi,[esi+0xB08]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block18

 Block17:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlTab>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block18:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIItem>::ms_pInstance],ebx
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
// CUIItem::OnSort
__SUB_CLASS_THIS0(003CBB70, __thiscall, 54696,  CUIItem, void) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [eax+0x640]
	and edx,0xFFFFFFFE
	cmp edx,0x12
	je Block3

 Block1:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	jne Block3

 Block2:
	mov eax,dword ptr [ecx+0xB34]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::SendSortItemRequest

 Block3:
	ret
}
}
// CUIItem::IsKindOf
__SUB_CLASS_THIS(003CBE10, __thiscall, 54716,  CUIItem, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIItem::ms_RTTI_CUIItem
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
// CUIItem::OnGather
__SUB_CLASS_THIS0(003CBB40, __thiscall, 54696,  CUIItem, void) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [eax+0x640]
	and edx,0xFFFFFFFE
	cmp edx,0x12
	je Block3

 Block1:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	jne Block3

 Block2:
	mov eax,dword ptr [ecx+0xB34]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::SendGatherItemRequest

 Block3:
	ret
}
}
// CUIItem::OnDestroy
__SUB_CLASS_THIS0(003CBE40, __thiscall, 54696,  CUIItem, void) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	call CUIWnd::OnDestroy
	cmp dword ptr [esi+0xB14],0
	lea edi,[esi+0xB10]
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	push 0xFFFFFFFF
	push 0
	mov ecx,esi
	call CUIItem::SetTryToReleaseItem
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	call CWvsContext::RemoveFromStackForTab
	pop edi
	pop esi
	ret
}
}
// CUIItem::ItemTI_2_TabIndex
__SUB_CLASS_THIS(003CBAF0, __thiscall, 54713,  CUIItem, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,3
	jne Block2

 Block1:
	mov eax,4
	ret 4

 Block2:
	cmp eax,4
	jne Block4

 Block3:
	mov eax,3

 Block4:
	ret 4
}
}
// CUIItem::SetTryToReleaseItem
__SUB_CLASS_THIS(003CBC10, __thiscall, 54708,  CUIItem, void, int32_t, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	mov dword ptr [ecx+0xB6C],eax
	mov dword ptr [ecx+0xB70],edx
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	test eax,eax
	je Block2

 Block1:
	push 0xE
	call CInputSystem::SetCursorState
	ret 8

 Block2:
	push 0
	call CInputSystem::SetCursorState
	ret 8
}
}
// CUIItem::Update
__SUB_CLASS_THIS0(003CF1E0, __thiscall, 54696,  CUIItem, void) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	push esi
	mov esi,ecx
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax+0x640]
	and eax,0xFFFFFFFE
	cmp eax,0x12
	je Block3

 Block2:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	je Block4

 Block3:
	push 0
	jmp Block5

 Block4:
	push 1

 Block5:
	mov eax,dword ptr [esi+0xB1C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	call eax
	mov ecx,dword ptr [esi+0xB64]
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp ecx,dword ptr [eax+0x4194]
	jne Block7

 Block6:
	mov edx,dword ptr [esi+0xB68]
	cmp edx,dword ptr [eax+0x4198]
	je Block8

 Block7:
	mov ecx,esi
	call CUIItem::SetLastestGetItemEffect

 Block8:
	mov ecx,esi
	pop esi
	jmp  CWnd::Update
}
}
// CUIItem::SetArrangeButton
_SUB_EXCEPTION_HANDLER(3CCC90)
__SUB_CLASS_THIS(003CCC90, __thiscall, 54707,  CUIItem, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3CCC90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esp+0x3C]
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esi+ecx*4+0xB38],eax
	cmp ecx,dword ptr [esi+0xB34]
	jne Block8

 Block1:
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	sub eax,ebx
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x1C],ebx
	je Block5

 Block2:
	sub eax,1
	jne Block8

 Block3:
	push ebx
	push ebx
	push ebx
	push 0x7D4
	push offset _S_UIUIWINDOW2IMGIT__25
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esi+0xB74]
	call CLayoutMan::AddButton
	push eax
	lea ecx,[esi+0xB18]
	mov byte ptr [esp+0x38],2
	call ZRef<CCtrlOriginButton>::op_assign_copy
	mov byte ptr [esp+0x34],bl
	cmp dword ptr [esp+0x10],ebx
	je Block8

 Block4:
	lea ecx,[esp+0xC]
	jmp Block7

 Block5:
	push ebx
	push ebx
	push ebx
	push 0x7D3
	push offset _S_UIUIWINDOW2IMGIT__24
	lea ecx,[esp+0x28]
	push ecx
	lea ecx,[esi+0xB74]
	call CLayoutMan::AddButton
	push eax
	lea ecx,[esi+0xB18]
	mov byte ptr [esp+0x38],1
	call ZRef<CCtrlOriginButton>::op_assign_copy
	mov byte ptr [esp+0x34],bl
	cmp dword ptr [esp+0x18],ebx
	je Block8

 Block6:
	lea ecx,[esp+0x14]

 Block7:
	push ebx
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block8:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x2C
	ret 8
}
}
// CUIItem::OnDropMoney
_SUB_EXCEPTION_HANDLER(3CBFD0)
__SUB_CLASS_THIS0(003CBFD0, __thiscall, 54696,  CUIItem, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3CBFD0
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
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [eax+0x640]
	and eax,0xFFFFFFFE
	cmp eax,0x12
	jne Block2

 Block1:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x42
	push ecx
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
	ret

 Block2:
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,ebx
	call CWvsContext::CannotDropItem
	test eax,eax
	je Block9

 Block3:
	lea ecx,[ebx+0x2038]
	call TSecType<unsigned char>::GetData
	test al,1
	jne Block8

 Block4:
	mov eax,dword ptr [ebx+0x209C]
	test eax,eax
	jne Block8

 Block5:
	cmp dword ptr [ebx+0x20B0],eax
	jne Block8

 Block6:
	test eax,eax
	jne Block8

 Block7:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x16ED
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
	ret

 Block8:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x317
	push eax
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
	ret

 Block9:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebx
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x1C]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x2C],0
	test eax,eax
	je Block21

 Block10:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block21

 Block11:
	add eax,8
	je Block21

 Block12:
	lea esi,[eax-8]
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block14

 Block13:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	push 0
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x14B9
	push eax
	mov dword ptr [esp+0x40],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0
	push 2
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	mov ecx,dword ptr [edi+0xBD]
	push ecx
	add edi,0xB5
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xC350
	jl Block16

 Block15:
	mov eax,0xC350

 Block16:
	push 0
	push 0xA
	push 0
	push eax
	push 0xA
	push 0xA
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_NO
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,1
	jne Block18

 Block17:
	mov eax,dword ptr [esi+0xF4]
	push eax
	mov ecx,ebx
	call CWvsContext::SendDropMoneyRequest

 Block18:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test esi,esi
	je Block20

 Block19:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block20:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret

 Block21:
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	jmp Block14
}
}
// CUIItem::Toggle
__SUB_CLASS_THIS0(003CBBA0, __thiscall, 54696,  CUIItem, void) {
__asm {

 Block0:
	xor eax,eax
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0xB54],eax
	sete al
	mov dword ptr [esi+0xB54],eax
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push eax
	call CConfig::SetInventoryExpanded
	mov ecx,esi
	call CWnd::Destroy
	mov eax,dword ptr [esi+0xB54]
	mov ecx,eax
	neg ecx
	sbb ecx,ecx
	and ecx,0x1A8
	add ecx,0x96
	neg eax
	sbb eax,eax
	push 0xA
	and eax,0x1A6
	push 0x125
	add eax,0xAC
	mov dword ptr [esi+0xAD8],ecx
	push eax
	mov ecx,esi
	call CUIWnd::CreateUIWndPosSaved
	pop esi
	ret
}
}
// CUIItem::GetItemSlotRect
__SUB_CLASS_THIS(003CBE90, __thiscall, 54712,  CUIItem, int32_t, long, tagRECT*) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push ebp
	push esi
	push edi
	lea eax,[esp+0x10]
	mov edi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
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
	mov ecx,dword ptr [edi+0xB34]
	lea eax,[ebp+ecx*4+0x501]
	mov eax,dword ptr [eax]
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax-4]

 Block7:
	mov ebx,dword ptr [edi+0xB54]
	mov esi,dword ptr [esp+0x1C]
	test ebx,ebx
	jne Block13

 Block8:
	mov ecx,dword ptr [edi+0xB30]
	cmp esi,ecx
	jl Block12

 Block9:
	add ecx,0x18
	cmp ecx,eax
	jl Block11

 Block10:
	mov ecx,eax

 Block11:
	cmp esi,ecx
	jl Block13

 Block12:
	mov edx,dword ptr [esp+0x20]
	push edx
	call SetRectEmpty
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,8
	ret 8

 Block13:
	sub esi,dword ptr [edi+0xB30]
	mov eax,esi
	cdq
	and edx,3
	add eax,edx
	mov ecx,eax
	sar ecx,2
	and esi,0x80000003
	jns Block15

 Block14:
	dec esi
	or esi,0xFFFFFFFC
	inc esi

 Block15:
	test ebx,ebx
	je Block18

 Block16:
	cmp ecx,6
	jl Block18

 Block17:
	mov eax,0xAAAAAAAB
	mul ecx
	shr edx,2
	lea eax,[edx*4]
	sub eax,edx
	neg eax
	lea ecx,[ecx+eax*2]
	lea esi,[esi+edx*4]

 Block18:
	imul ecx,0x23
	add ecx,0x33
	lea edx,[ecx+0x20]
	push edx
	lea eax,[esi+esi*8]
	lea eax,[eax*4+0xA]
	lea edx,[eax+0x20]
	push edx
	push ecx
	push eax
	mov eax,dword ptr [esp+0x30]
	push eax
	call SetRect
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,8
	ret 8
}
}
// CUIItem::ChangeTab
__SUB_CLASS_THIS(003CBC50, __thiscall, 54703,  CUIItem, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xB0C]
	push eax
	call CCtrlTab::SetTab
	push 0xFFFFFFFF
	push 0
	mov ecx,esi
	call CUIItem::SetTryToReleaseItem
	pop esi
	ret 4
}
}
// CUIItem::OnMouseButton
_SUB_EXCEPTION_HANDLER(3CC590)
__SUB_CLASS_THIS(003CC590, __thiscall, 54699,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3CC590
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x94
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xA8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esp+0xB8],0x201
	jne Block29

 Block1:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [edi+0x20B8],0
	jne Block29

 Block2:
	mov eax,dword ptr [edi+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block29

 Block3:
	call get_update_time
	sub eax,dword ptr [edi+0x20BC]
	cmp eax,0x1F4
	jl Block29

 Block4:
	lea edx,[esp+0x30]
	push edx
	mov ecx,edi
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x30]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ebx,dword ptr [esp+0xC4]
	mov eax,dword ptr [esp+0xC0]
	push ebx
	lea ebp,[esi-4]
	push eax
	mov ecx,ebp
	call CUIItem::GetSlotPositionFromPoint
	mov ecx,dword ptr [esi+0xB30]
	push eax
	push ecx
	lea edx,[esp+0x28]
	push edx
	mov ecx,edi
	mov dword ptr [esp+0x24],eax
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x20]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	je Block27

 Block5:
	cmp dword ptr [esi+0xB68],0
	je Block9

 Block6:
	mov eax,dword ptr [esp+0x18]
	push edi
	push eax
	mov ecx,ebp
	call CUIItem::ItemRelease
	test eax,eax
	jne Block28

 Block7:
	push 0xFFFFFFFF
	push eax
	mov ecx,ebp
	call CUIItem::SetTryToReleaseItem
	lea ecx,[esp+0x18]
	push 0x16E1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0xB8],0
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x20]
	add esp,8
	mov dword ptr [esp+0xB0],0xFFFFFFFF
	test eax,eax
	je Block28

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block28

 Block9:
	push offset _D_VTMISSING
	lea ecx,[esp+0x6C]
	call Ztl_variant_t::_ctor_1
	mov edx,3
	mov dword ptr [esp+0xB0],1
	mov word ptr [esp+0x58],dx
	mov dword ptr [esp+0x60],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xB0],2
	test ecx,ecx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[esp+0x68]
	push eax
	lea edx,[esp+0x5C]
	push edx
	push 0
	push 0
	push 0
	push 0
	push 0
	lea eax,[esp+0x4C]
	push eax
	call IWzGr2D::CreateLayer
	lea ecx,[esp+0x58]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x68]
	mov byte ptr [esp+0xB0],5
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	push 0
	push 0
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemIcon
	push offset _D_VTMISSING
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0xB4],6
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0xB4],7
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x8C]
	mov byte ptr [esp+0xB4],8
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x7C]
	mov byte ptr [esp+0xB4],9
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0xB4],0xA
	call Ztl_variant_t::_ctor_1
	mov edi,dword ptr [esp+0x30]
	mov byte ptr [esp+0xB0],0xB
	test edi,edi
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x4C]
	push eax
	lea ecx,[esp+0x90]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	lea edx,[esp+0x84]
	push edx
	lea eax,[esp+0x30]
	push eax
	push ecx
	lea edx,[esp+0xB0]
	push edx
	mov ecx,edi
	call IWzGr2DLayer::InsertCanvas
	lea ecx,[esp+0x98]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x20]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x78]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x88]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x48]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0xB0],6
	call Ztl_variant_t::~Ztl_variant_t
	push 0x80FFFFFF
	mov ecx,edi
	call IWzGr2DLayer::Putcolor
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0xB0],0xC
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block15:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0xB4],0xD
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x20]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xB0],6
	test eax,eax
	je Block17

 Block16:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block17:
	push offset _D_VTMISSING
	lea ecx,[esp+0x4C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0xB4],0xE
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB0],0xF
	test ecx,ecx
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x3C]
	push eax
	mov ebp,ecx
	call IWzCanvas::Getcy
	sub ebx,eax
	add ebx,0x10
	push ebx
	mov ecx,ebp
	call IWzCanvas::Getcx
	mov ecx,eax
	mov eax,dword ptr [esp+0xCC]
	sub eax,ecx
	sub eax,0x10
	push eax
	mov ecx,edi
	call IWzVector2D::RelMove
	lea ecx,[esp+0x38]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0xB0],6
	call Ztl_variant_t::~Ztl_variant_t
	push 0x28
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xB0],0x10
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [esi+0xB30]
	lea edx,[esi-4]
	neg edx
	sbb edx,edx
	and edx,esi
	push edx
	mov edx,dword ptr [esp+0x1C]
	push 0
	push edx
	push ecx
	push edi
	mov ecx,eax
	call CDraggableItem::_ctor_0
	jmp Block22

 Block21:
	xor eax,eax

 Block22:
	lea ecx,[esi-4]
	neg ecx
	sbb ecx,ecx
	push 0
	and ecx,esi
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov byte ptr [esp+0xBC],6
	call CWndMan::BeginDragDrop
	lea eax,[esp+0x14]
	push 0x75E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0xB4],0x11
	call play_ui_sound
	mov eax,dword ptr [esp+0x18]
	add esp,4
	mov byte ptr [esp+0xB0],6
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block24:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB0],5
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	call ecx
	jmp Block28

 Block27:
	push 0xFFFFFFFF
	push 0
	mov ecx,ebp
	call CUIItem::SetTryToReleaseItem

 Block28:
	lea ecx,[esi+0x84]
	call CUIToolTip::ClearToolTip

 Block29:
	mov ecx,dword ptr [esp+0xA8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA0
	ret 0x10
}
}
// CUIItem::SetItemTI
__SUB_CLASS_THIS(003CBAC0, __thiscall, 54703,  CUIItem, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0xB34],eax
	cmp eax,3
	jne Block2

 Block1:
	mov dword ptr [ecx+0xB34],4
	ret 4

 Block2:
	cmp eax,4
	jne Block4

 Block3:
	mov dword ptr [ecx+0xB34],3

 Block4:
	ret 4
}
}
// CUIItem::OnCreate
_SUB_EXCEPTION_HANDLER(3CE520)
__SUB_CLASS_THIS(003CE520, __thiscall, 54697,  CUIItem, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3CE520
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x6C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push eax
	call CUIItem::_GetBackgroundUOL
	mov ecx,dword ptr [ebp+0x78]
	push ecx
	mov ecx,esi
	call CUIWnd::OnCreate_1
	push 0
	push 0
	lea ecx,[esi+0xB74]
	push esi
	call CLayoutMan::Init
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x3C]
	push edx
	call edi
	lea eax,[ebp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea ecx,[ebp+0x4C]
	push ecx
	mov dword ptr [ebp-4],0
	call edi
	lea edx,[ebp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push 0
	push 0
	lea eax,[ebp+0x3C]
	push eax
	lea ecx,[ebp+0x4C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x50E
	push edx
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[ebp+0x24]
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xB50]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [ebp+0x24],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],1
	jne Block12

 Block10:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[ebp+0x24]
	push edx
	call ebx

 Block13:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[ebp+0x4C]
	push ecx
	call ebx

 Block17:
	cmp word ptr [ebp+0x3C],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block20

 Block18:
	mov eax,dword ptr [ebp+0x44]
	xor edx,edx
	mov word ptr [ebp+0x3C],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp+0x3C]
	push eax
	call ebx

 Block21:
	lea ecx,[ebp+0x4C]
	push ecx
	call edi
	lea edx,[ebp+0x4C]
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
	lea eax,[ebp+0x3C]
	mov ebx,4
	push eax
	mov dword ptr [ebp-4],ebx
	call edi
	lea ecx,[ebp+0x3C]
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
	push 0
	push 0
	lea edx,[ebp+0x4C]
	push edx
	lea eax,[ebp+0x3C]
	push eax
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGIT__39
	mov byte ptr [ebp-4],5
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],6
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea ecx,[ebp+0x24]
	push ecx
	mov byte ptr [ebp-4],5
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xB58]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block30

 Block28:
	cmp eax,0x80004002
	je Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov edi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp+0x24],di
	jne Block33

 Block31:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x3C],di
	jne Block37

 Block35:
	mov eax,dword ptr [ebp+0x44]
	xor ecx,ecx
	mov word ptr [ebp+0x3C],cx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[ebp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	or ebx,0xFFFFFFFF
	mov dword ptr [ebp-4],ebx
	cmp word ptr [ebp+0x4C],di
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp],0
	mov dword ptr [ebp+4],1
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x60],eax
	mov dword ptr [ebp-4],edi
	test eax,eax
	je Block44

 Block43:
	mov ecx,eax
	call CCtrlTab::_ctor_default
	jmp Block45

 Block44:
	xor eax,eax

 Block45:
	mov dword ptr [ebp-4],ebx
	test eax,eax
	je Block53

 Block46:
	add eax,8
	je Block53

 Block47:
	lea edi,[eax-8]
	test edi,edi
	je Block49

 Block48:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block49:
	mov eax,dword ptr [esi+0xB0C]
	mov dword ptr [esi+0xB0C],edi
	mov dword ptr [ebp+0x68],eax
	test eax,eax
	je Block51

 Block50:
	push 0
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlTab>::_ReleaseRaw

 Block51:
	mov ecx,dword ptr [esi+0xB0C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[ebp]
	push edx
	push 0x13
	push 0x9D
	push 0x1A
	push 9
	mov ebx,8
	push ebx
	push 0x7D0
	push esi
	call eax
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x4C]
	push ecx
	call edi
	lea edx,[ebp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block54

 Block52:
	push eax
	call _com_issue_error

 Block53:
	xor edi,edi
	jmp Block49

 Block54:
	lea eax,[ebp+0x3C]
	push eax
	mov dword ptr [ebp-4],9
	call edi
	lea ecx,[ebp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	push 0
	push 0
	lea edx,[ebp+0x4C]
	push edx
	lea eax,[ebp+0x3C]
	push eax
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGIT__38
	mov byte ptr [ebp-4],0xA
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xB
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],0xA
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x20]
	mov dword ptr [ebp+0x20],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block61

 Block59:
	cmp eax,0x80004002
	je Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x3C],bx
	jne Block64

 Block62:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp+0x3C],bx
	jne Block68

 Block66:
	mov eax,dword ptr [ebp+0x44]
	xor ecx,ecx
	mov word ptr [ebp+0x3C],cx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[ebp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp+0x4C],bx
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	lea edx,[ebp+0x24]
	push edx
	call edi
	lea eax,[ebp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	lea ecx,[ebp+8]
	push ecx
	mov byte ptr [ebp-4],0x11
	call edi
	lea edx,[ebp+8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	xor edi,edi
	push edi
	push edi
	lea eax,[ebp+0x24]
	push eax
	lea ecx,[ebp+8]
	push ecx
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	mov bl,0x12
	push offset _S_UIUIWINDOW2IMGIT__37
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x13
	cmp dword ptr [_D_G_RM],edi
	jne Block79

 Block78:
	push 0x80004003
	call _com_issue_error

 Block79:
	lea edx,[ebp-0x1C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x14
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x38]
	mov dword ptr [ebp+0x38],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block82

 Block80:
	cmp eax,0x80004002
	je Block82

 Block81:
	push eax
	call _com_issue_error

 Block82:
	mov ebx,8
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp-0x1C],bx
	jne Block85

 Block83:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,edi
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block86:
	mov byte ptr [ebp-4],0x17
	cmp word ptr [ebp+8],bx
	jne Block89

 Block87:
	mov eax,dword ptr [ebp+0x10]
	xor edx,edx
	mov word ptr [ebp+8],dx
	cmp eax,edi
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea eax,[ebp+8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block90:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp+0x24],bx
	jne Block93

 Block91:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	cmp eax,edi
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	mov dword ptr [ebp+0x34],edi
	nop

 Block95:
	mov ebx,dword ptr [ebp+0x38]
	mov eax,0x20
	call __chkstk
	mov eax,0x20
	mov edi,esp
	call __chkstk
	mov eax,dword ptr [ebp+0x34]
	mov dword ptr [ebp+0x5C],esp
	push 1
	push 0
	push 0
	push 0xA
	push edi
	push eax
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x1C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x19
	test ebx,ebx
	je Block5

 Block96:
	lea ecx,[ebp-0x4C]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x18
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1A
	call Ztl_variant_t::GetUnknown
	push ecx
	mov edi,esp
	mov dword ptr [ebp+0x68],esp
	mov dword ptr [edi],0
	test eax,eax
	je Block101

 Block97:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x18]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov ebx,eax
	xor eax,eax
	test ebx,ebx
	setl al
	dec eax
	and eax,dword ptr [ebp+0x18]
	mov dword ptr [ebp+0x1C],eax
	mov eax,dword ptr [edi]
	test eax,eax
	je Block99

 Block98:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block99:
	mov eax,dword ptr [ebp+0x1C]
	mov dword ptr [edi],eax
	test ebx,ebx
	jge Block101

 Block100:
	cmp ebx,0x80004002
	jne Block119

 Block101:
	mov ecx,dword ptr [ebp+0x5C]
	mov edx,dword ptr [ebp+0x34]
	push 0
	push 0
	push 0xA
	push ecx
	push edx
	mov byte ptr [ebp-4],0x1B
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x1C
	test ecx,ecx
	je Block5

 Block102:
	lea eax,[ebp-0x2C]
	push eax
	mov byte ptr [ebp-4],0x1B
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1D
	call Ztl_variant_t::GetUnknown
	push ecx
	mov edi,esp
	mov dword ptr [ebp+0x5C],esp
	mov dword ptr [edi],0
	test eax,eax
	je Block107

 Block103:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov ebx,eax
	mov eax,dword ptr [edi]
	test ebx,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x60]
	mov dword ptr [ebp+0x5C],ecx
	test eax,eax
	je Block105

 Block104:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block105:
	mov ecx,dword ptr [ebp+0x5C]
	mov dword ptr [edi],ecx
	test ebx,ebx
	jge Block107

 Block106:
	cmp ebx,0x80004002
	jne Block119

 Block107:
	mov ecx,dword ptr [esi+0xB0C]
	mov byte ptr [ebp-4],0x1E
	call CCtrlTab::AddItem_Canvas
	mov ebx,8
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp-0x2C],bx
	jne Block110

 Block108:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block111:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp-0x4C],bx
	jne Block114

 Block112:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea edx,[ebp-0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block115:
	mov eax,dword ptr [ebp+0x34]
	inc eax
	cmp eax,5
	mov dword ptr [ebp+0x34],eax
	jl Block95

 Block116:
	cmp dword ptr [esi+0xB54],0
	jne Block128

 Block117:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],0x1F
	test eax,eax
	je Block120

 Block118:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block121

 Block119:
	push ebx
	call _com_issue_error

 Block120:
	xor eax,eax

 Block121:
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block132

 Block122:
	add eax,8
	je Block132

 Block123:
	lea edi,[eax-8]
	test edi,edi
	je Block125

 Block124:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block125:
	mov eax,dword ptr [esi+0xB14]
	mov dword ptr [esi+0xB14],edi
	mov dword ptr [ebp+0x68],eax
	test eax,eax
	je Block127

 Block126:
	push 0
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block127:
	mov ecx,dword ptr [esi+0xB14]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0xCF
	push 0x33
	push 0x98
	push ebx
	push 1
	push 0x7D1
	push esi
	call eax
	mov eax,dword ptr [esi+0xB14]
	mov dword ptr [eax+0x34],0x8E

 Block128:
	push 0
	push 0
	push 0
	push 0x7D2
	push offset _S_UIUIWINDOW2IMGIT__36
	lea ecx,[ebp+0x64]
	push ecx
	lea edi,[esi+0xB74]
	mov ecx,edi
	call CLayoutMan::AddButton
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block137

 Block129:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block137

 Block130:
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block133

 Block131:
	add eax,8
	jmp Block134

 Block132:
	xor edi,edi
	jmp Block125

 Block133:
	xor eax,eax

 Block134:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block137

 Block135:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block137

 Block136:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block137:
	cmp dword ptr [esi+0xB54],0
	push 0
	push 0
	push 0
	je Block150

 Block138:
	push 0x7D6
	push offset _S_UIUIWINDOW2IMGIT__35
	lea ecx,[ebp+0x64]
	push ecx
	lea ecx,[esi+0xB74]
	call CLayoutMan::AddButton
	mov ebx,eax
	mov eax,dword ptr [ebx+4]
	mov byte ptr [ebp-4],0x20
	lea edi,[esi+0xB20]
	test eax,eax
	je Block140

 Block139:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block140:
	cmp dword ptr [edi+4],0
	je Block142

 Block141:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block142:
	cmp dword ptr [ebp+0x68],0
	mov edx,dword ptr [ebx+4]
	mov dword ptr [edi+4],edx
	mov byte ptr [ebp-4],0x18
	je Block144

 Block143:
	push 0
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block144:
	push 0
	push 0
	push 0
	push 0x7D7
	push offset _S_UIUIWINDOW2IMGIT__34
	lea eax,[ebp+0x64]
	push eax
	lea ecx,[esi+0xB74]
	call CLayoutMan::AddButton
	mov ebx,eax
	mov eax,dword ptr [ebx+4]
	mov byte ptr [ebp-4],0x21
	lea edi,[esi+0xB28]
	test eax,eax
	je Block146

 Block145:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block146:
	cmp dword ptr [edi+4],0
	je Block148

 Block147:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block148:
	cmp dword ptr [ebp+0x68],0
	mov ecx,dword ptr [ebx+4]
	mov dword ptr [edi+4],ecx
	mov byte ptr [ebp-4],0x18
	je Block156

 Block149:
	push 0
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	jmp Block156

 Block150:
	push 0x7D5
	push offset _S_UIUIWINDOW2IMGIT__33
	lea edx,[ebp+0x64]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov ebx,eax
	mov eax,dword ptr [ebx+4]
	mov byte ptr [ebp-4],0x22
	lea edi,[esi+0xB20]
	test eax,eax
	je Block152

 Block151:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block152:
	cmp dword ptr [edi+4],0
	je Block154

 Block153:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block154:
	cmp dword ptr [ebp+0x68],0
	mov eax,dword ptr [ebx+4]
	mov dword ptr [edi+4],eax
	mov byte ptr [ebp-4],0x18
	je Block156

 Block155:
	push 0
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+0x68],0

 Block156:
	push 0xFFFFFFFF
	xor edi,edi
	push edi
	mov ecx,esi
	mov dword ptr [esi+0xB30],1
	call CUIItem::SetTryToReleaseItem
	mov edx,dword ptr [esi+0xAFC]
	mov ecx,dword ptr [esi+0xB0C]
	push edx
	call CCtrlTab::SetTab
	mov dword ptr [esi+0xB38],edi
	mov dword ptr [esi+0xB3C],edi
	mov dword ptr [esi+0xB40],edi
	mov dword ptr [esi+0xB44],edi
	mov dword ptr [esi+0xB48],edi
	mov dword ptr [esi+0xB4C],edi
	mov eax,dword ptr [esi+0xB34]
	mov ecx,dword ptr [esi+eax*4+0xB38]
	push ecx
	push eax
	mov ecx,esi
	call CUIItem::SetArrangeButton
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	add ecx,0x40A0
	call ZArray<CUIWnd *>::InsertBefore
	mov ecx,esi
	mov dword ptr [eax],esi
	call CUIItem::SetLastestGetItemEffect
	mov eax,dword ptr [ebp+0x38]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0x10
	call eax
	mov eax,dword ptr [ebp+0x20]
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
	mov ecx,dword ptr [ebp+0x6C]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x70
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CUIItem::CUIItem
_SUB_EXCEPTION_HANDLER(3CCE00)
__SUB_CLASS_THIS0(003CCE00, __thiscall, 54694,  CUIItem, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3CCE00
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
	xor edi,edi
	push edi
	push edi
	push 1
	push 6
	push 0x96
	push 5
	push edi
	call CUIWnd::_ctor_0
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUIItem>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIItem>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIItem::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIItem::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIItem::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],edi
	mov dword ptr [esi+0xB14],edi
	mov dword ptr [esi+0xB1C],edi
	mov dword ptr [esi+0xB24],edi
	mov dword ptr [esi+0xB2C],edi
	mov dword ptr [esi+0xB50],edi
	mov dword ptr [esi+0xB58],edi
	mov dword ptr [esi+0xB5C],edi
	mov dword ptr [esi+0xB60],edi
	mov dword ptr [esi+0xB64],edi
	mov dword ptr [esi+0xB74],edi
	mov dword ptr [esi+0xB78],edi
	mov dword ptr [esi+0xB7C],edi
	mov dword ptr [esi+0xB80],edi
	mov dword ptr [esi+0xB84],edi
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	mov byte ptr [esp+0x18],0xB
	call CConfig::GetInventoryExpanded
	mov edx,eax
	neg edx
	sbb edx,edx
	mov dword ptr [esi+0xB54],eax
	and edx,0x1A8
	add edx,0x96
	neg eax
	sbb eax,eax
	push 0xA
	and eax,0x1A6
	push 0x125
	add eax,0xAC
	push eax
	mov ecx,esi
	mov dword ptr [esi+0xAD8],edx
	call CUIWnd::CreateUIWndPosSaved
	mov eax,dword ptr [esi+0xAFC]
	inc eax
	push eax
	mov ecx,esi
	call CUIItem::SetItemTI
	mov dword ptr [esi+0xB64],edi
	mov dword ptr [esi+0xB68],edi
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
// CUIItem::OnMouseMove
_SUB_EXCEPTION_HANDLER(3CCA90)
__SUB_CLASS_THIS(003CCA90, __thiscall, 54700,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3CCA90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x54]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x68]
	mov ecx,dword ptr [esp+0x64]
	push eax
	push ecx
	lea ecx,[esi-4]
	call CUIItem::GetSlotPositionFromPoint
	mov edi,eax
	xor ebx,ebx
	mov dword ptr [esp+0x14],edi
	cmp edi,ebx
	je Block23

 Block1:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	cmp dword ptr [esi+0xB68],ebx
	je Block3

 Block2:
	push 0xE
	jmp Block4

 Block3:
	push 5

 Block4:
	call CInputSystem::SetCursorState
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x20]
	push edx
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x18],eax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block9

 Block5:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block8

 Block7:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block8:
	mov edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],ebx

 Block9:
	mov ecx,dword ptr [esi+0xB30]
	push edi
	push ecx
	mov ecx,dword ptr [esp+0x20]
	lea edx,[esp+0x20]
	push edx
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block14

 Block10:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x1C]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,ebx
	je Block13

 Block12:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block13:
	mov dword ptr [esp+0x1C],ebx

 Block14:
	cmp edi,ebx
	jne Block16

 Block15:
	lea ecx,[esi+0x84]
	call CUIToolTip::ClearToolTip
	jmp Block23

 Block16:
	mov ecx,dword ptr [_D_DB_DATE_19000101__83]
	mov edx,dword ptr [_D_DB_DATE_19000101__83+4]
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x3C],ebx
	mov dword ptr [esp+0x40],ecx
	mov dword ptr [esp+0x44],edx
	mov dword ptr [esp+0x50],ebx
	mov edx,dword ptr [esi]
	push ebx
	push ebx
	push ebx
	push ebx
	lea eax,[esp+0x38]
	push eax
	mov eax,dword ptr [edx+0x30]
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x74],ebx
	mov dword ptr [esp+0x50],1
	call eax
	mov ecx,dword ptr [esp+0x80]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	add eax,dword ptr [esp+0x80]
	lea ecx,[esi+0x84]
	push eax
	call CUIToolTip::ShowItemToolTip
	cmp dword ptr [esi+0xB68],ebx
	je Block20

 Block17:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x80]
	mov ecx,edi
	call edx
	cmp al,1
	jb Block20

 Block18:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x78]
	mov ecx,edi
	call edx
	test eax,eax
	jne Block20

 Block19:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0xF
	call CInputSystem::SetCursorState

 Block20:
	cmp dword ptr [TSingleton<CUserLocal>::ms_pInstance],ebx
	je Block22

 Block21:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	push eax
	call CUserLocal::PetInterActWithItem

 Block22:
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call CUIToolTip::ItemToolTipParam::~ItemToolTipParam

 Block23:
	xor eax,eax
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 8
}
}
