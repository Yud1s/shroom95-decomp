#include "regen.hpp"
// DraggableItem.ipp
#include "DraggableItem.hpp"

// IDraggable::OnDoubleClicked
__SUB_CLASS_THIS0(001001D0, __thiscall, 79378,  IDraggable, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// CDraggableItem::WearEquipItem
__SUB_CLASS_THIS(001083A0, __thiscall, 84882,  CDraggableItem, int32_t, CUIEquip*, CUIItem*, long, long) {
__asm {

 Block0:
	sub esp,0x10
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	push ebx
	mov ebx,ecx
	je Block2

 Block1:
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 0x10

 Block2:
	push 1
	call CDraggableItem::CanPerformAction
	test eax,eax
	je Block1

 Block3:
	cmp dword ptr [ebx+0x18],1
	jne Block1

 Block4:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	push edi
	lea eax,[esp+0xC]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0xC]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [ebx+0x1C]
	push ecx
	push 1
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x14]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	jne Block6

 Block5:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 0x10

 Block6:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x28]
	push ebp
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	call CUIEquip::GetBodyPartFromPoint
	mov ebp,eax
	test ebp,ebp
	je Block9

 Block7:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	movzx edx,byte ptr [esi+0x11]
	push edx
	push ebp
	push eax
	call is_correct_bodypart
	add esp,0xC
	test eax,eax
	je Block9

 Block8:
	mov eax,dword ptr [ebx+0x1C]
	push ebp
	push eax
	mov ecx,ebx
	call CDraggableItem::WearEquipItem_0
	pop ebp
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 0x10

 Block9:
	pop ebp
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 0x10
}
}
// CDraggableItem::MapFuncKey
__SUB_CLASS_THIS(001015F0, __thiscall, 84898,  CDraggableItem, int32_t, long, long, int32_t) {
__asm {

 Block0:
	sub esp,0x1C
	push ebx
	push ebp
	push esi
	push edi
	mov edi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x1C]
	push eax
	mov dword ptr [esp+0x1C],edi
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x20]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
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
	call ebx
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov edi,dword ptr [esp+0x18]
	mov dword ptr [esp+0x20],0

 Block5:
	mov ecx,dword ptr [edi+0x1C]
	mov edx,dword ptr [edi+0x18]
	push ecx
	push edx
	lea eax,[esp+0x2C]
	push eax
	mov ecx,ebp
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block10

 Block6:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	mov ecx,dword ptr [esp+0x28]
	add ecx,4
	push ecx
	call ebx
	mov ecx,dword ptr [esp+0x28]
	test ecx,ecx
	je Block9

 Block8:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block9:
	mov dword ptr [esp+0x28],0

 Block10:
	test esi,esi
	je Block62

 Block11:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov esi,dword ptr [edi+0x18]
	mov edi,2
	mov ebx,eax
	cmp esi,edi
	jne Block17

 Block12:
	push ebx
	call is_state_change_item
	add esp,4
	test eax,eax
	jne Block31

 Block13:
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xD4
	je Block31

 Block14:
	cmp eax,0xE2
	je Block31

 Block15:
	push ebx
	call is_bridle_item
	add esp,4
	test eax,eax
	jne Block31

 Block16:
	push ebx
	call is_immediate_mobsummon_item
	add esp,4
	test eax,eax
	jne Block31

 Block17:
	cmp esi,5
	jne Block26

 Block18:
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x20C
	je Block31

 Block19:
	cmp esi,esi
	jne Block26

 Block20:
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x212
	je Block31

 Block21:
	cmp esi,esi
	jne Block26

 Block22:
	push ebx
	call get_etc_cash_item_type
	add esp,4
	cmp eax,6
	jne Block24

 Block23:
	mov dword ptr [esp+0x10],3
	jmp Block32

 Block24:
	cmp esi,5
	jne Block26

 Block25:
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x1F5
	je Block28

 Block26:
	cmp esi,4
	jne Block29

 Block27:
	push ebx
	call is_non_cash_effect_item
	add esp,4
	test eax,eax
	je Block29

 Block28:
	mov dword ptr [esp+0x10],7
	jmp Block32

 Block29:
	cmp esi,3
	jne Block62

 Block30:
	push ebx
	call is_portable_chair_item
	add esp,4
	test eax,eax
	je Block62

 Block31:
	mov dword ptr [esp+0x10],edi

 Block32:
	mov esi,dword ptr [esp+0x38]
	mov ebp,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	mov dword ptr [esp+0x1C],ebp
	test esi,esi
	je Block34

 Block33:
	lea ecx,[ebp+0x1824]
	call CUIStatusBar::CQuickSlot::IsEnabled
	test eax,eax
	je Block62

 Block34:
	mov eax,dword ptr [TSingleton<CUIKeyConfig>::ms_pInstance]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block36

 Block35:
	mov dword ptr [esp+0x14],eax

 Block36:
	mov edx,dword ptr [TSingleton<CQuickslotKeyMappedMan>::ms_pInstance]
	mov edi,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	mov dword ptr [esp+0x24],edx
	test esi,esi
	je Block38

 Block37:
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x30]
	push eax
	push ecx
	mov ecx,ebp
	call CUIStatusBar::GetShortCutIndexByPos
	jmp Block39

 Block38:
	mov edx,dword ptr [esp+0x34]
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x14]
	push edx
	push eax
	call CUIKeyConfig::GetShortCutIndexByPos

 Block39:
	mov ebp,eax
	cmp ebp,0xFFFFFFFF
	je Block62

 Block40:
	xor esi,esi

 Block41:
	push esi
	mov ecx,edi
	call CFuncKeyMappedMan::FuncKeyMapped
	mov cl,byte ptr [eax]
	cmp cl,2
	je Block44

 Block42:
	cmp cl,3
	je Block44

 Block43:
	cmp cl,7
	jne Block46

 Block44:
	cmp dword ptr [eax+1],ebx
	jne Block46

 Block45:
	mov byte ptr [eax],0

 Block46:
	inc esi
	cmp esi,0x59
	jl Block41

 Block47:
	cmp ebp,0x59
	jl Block51

 Block48:
	mov ecx,dword ptr [esp+0x1C]
	push 0
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block50

 Block49:
	push 0
	call CWnd::InvalidateRect

 Block50:
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,0x1C
	ret 0xC

 Block51:
	cmp dword ptr [esp+0x38],0
	je Block53

 Block52:
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [ecx+ebp*4+4]
	push eax
	mov ecx,edi
	call CFuncKeyMappedMan::FuncKeyMapped
	mov esi,eax
	mov edx,dword ptr [esi]
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [eax+0x10],edx
	mov cl,byte ptr [esi+4]
	mov byte ptr [eax+0x14],cl
	jmp Block57

 Block53:
	push ebp
	mov ecx,edi
	call CFuncKeyMappedMan::FuncKeyMapped
	mov esi,eax
	mov al,byte ptr [esi]
	cmp al,4
	je Block56

 Block54:
	cmp al,5
	je Block56

 Block55:
	cmp al,6
	jne Block57

 Block56:
	mov edx,dword ptr [esi+1]
	mov ecx,dword ptr [esp+0x14]
	movzx eax,al
	push edx
	push eax
	call CUIKeyConfig::AddToPalette

 Block57:
	mov cl,byte ptr [esp+0x10]
	mov byte ptr [esi],cl
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esi+1],ebx
	test ecx,ecx
	je Block59

 Block58:
	push 0
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x1C]
	push 0
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,0x1C
	ret 0xC

 Block59:
	cmp dword ptr [esp+0x38],0
	je Block61

 Block60:
	mov ecx,edi
	call CFuncKeyMappedMan::SaveFuncKeyMap

 Block61:
	mov ecx,dword ptr [esp+0x1C]
	push 0
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,0x1C
	ret 0xC

 Block62:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x1C
	ret 0xC
}
}
// CDraggableItem::AskItemCount
_SUB_EXCEPTION_HANDLER(104270)
__SUB_CLASS_THIS(00104270, __thiscall, 84939,  CDraggableItem, long, const char*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_104270
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x24],0
	test eax,eax
	je Block11

 Block1:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block11

 Block2:
	lea edi,[eax+8]
	test edi,edi
	je Block11

 Block3:
	add edi,0xFFFFFFF8
	mov dword ptr [esp+0x18],edi
	test edi,edi
	je Block5

 Block4:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov edx,dword ptr [esp+0x2C]
	push 0
	push 1
	push ecx
	mov ebx,esp
	mov dword ptr [esp+0x30],1
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ebx],0
	test edx,edx
	je Block9

 Block6:
	mov eax,edx
	lea esi,[eax+1]
	mov edi,edi

 Block7:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block7

 Block8:
	sub eax,esi
	mov esi,eax
	push esi
	push edx
	push 0
	push esi
	mov ecx,ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,ebx
	call ZXString<char>::ReleaseBuffer

 Block9:
	push 0
	push 2
	mov ecx,edi
	call CUtilDlgEx::SetUtilDlgEx_1
	mov eax,dword ptr [esp+0x30]
	push 0
	push 0xA
	push 0
	push eax
	push 1
	push eax
	mov ecx,edi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_NO
	mov ecx,edi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,edi
	call CDialog::DoModal
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,1
	jne Block12

 Block10:
	mov edi,dword ptr [edi+0xF4]
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov eax,edi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x18
	ret 8

 Block11:
	xor edi,edi
	mov dword ptr [esp+0x18],edi
	jmp Block5

 Block12:
	test edi,edi
	je Block14

 Block13:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block14:
	xor eax,eax
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x18
	ret 8
}
}
// CDraggableItem::PutItem
__SUB_CLASS_THIS(00100BC0, __thiscall, 84920,  CDraggableItem, int32_t, CUIIncubator*) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,ecx
	cmp dword ptr [ebx+0x24],0
	je Block4

 Block1:
	mov ecx,dword ptr [ebx+0x24]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	call edx
	test eax,eax
	je Block4

 Block2:
	mov eax,dword ptr [ebx+0x24]
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFFC
	jne Block5

 Block4:
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 4

 Block5:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebp
	push esi
	lea eax,[esp+0x14]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block10

 Block6:
	push edi
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block9

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block9:
	mov dword ptr [esp+0x1C],0
	pop edi

 Block10:
	mov ecx,dword ptr [ebx+0x1C]
	mov edx,dword ptr [ebx+0x18]
	push ecx
	push edx
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebp
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block15

 Block11:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	mov ecx,dword ptr [esp+0x10]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	je Block14

 Block13:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block14:
	mov dword ptr [esp+0x10],0

 Block15:
	mov ecx,dword ptr [ebx+0x1C]
	mov edx,dword ptr [ebx+0x18]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	push edx
	push esi
	call CUIIncubator::PutItem
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4
}
}
// CDraggableItem::UnmapFuncKey
__SUB_CLASS_THIS(00101960, __thiscall, 84897,  CDraggableItem, int32_t, int32_t) {
__asm {

 Block0:
	sub esp,0x14
	push ebx
	push ebp
	push esi
	push edi
	mov edi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x1C]
	push eax
	mov dword ptr [esp+0x14],edi
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x20]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
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
	call ebx
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov edi,dword ptr [esp+0x10]
	mov dword ptr [esp+0x20],0

 Block5:
	mov ecx,dword ptr [edi+0x1C]
	mov edx,dword ptr [edi+0x18]
	push ecx
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebp
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block10

 Block6:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	mov ecx,dword ptr [esp+0x18]
	add ecx,4
	push ecx
	call ebx
	mov ecx,dword ptr [esp+0x18]
	test ecx,ecx
	je Block9

 Block8:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block9:
	mov dword ptr [esp+0x18],0

 Block10:
	test esi,esi
	jne Block12

 Block11:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x14
	ret 4

 Block12:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov esi,dword ptr [edi+0x18]
	mov ebx,eax
	mov dword ptr [esp+0x14],ebx
	cmp esi,2
	jne Block18

 Block13:
	push ebx
	call is_state_change_item
	add esp,4
	test eax,eax
	jne Block18

 Block14:
	mov eax,0x68DB8BAD
	imul ebx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xD4
	je Block18

 Block15:
	cmp eax,0xE2
	je Block18

 Block16:
	push ebx
	call is_bridle_item
	add esp,4
	test eax,eax
	jne Block18

 Block17:
	push ebx
	call is_immediate_mobsummon_item
	add esp,4
	test eax,eax
	je Block11

 Block18:
	cmp esi,5
	jne Block24

 Block19:
	push ebx
	call get_etc_cash_item_type
	add esp,4
	cmp eax,6
	je Block24

 Block20:
	push ebx
	call get_cashslot_item_type
	add esp,4
	cmp eax,8
	jl Block11

 Block21:
	cmp eax,0xB
	jle Block23

 Block22:
	cmp eax,0x27
	jne Block11

 Block23:
	cmp eax,9
	jne Block11

 Block24:
	mov esi,dword ptr [esp+0x28]
	mov ebx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	mov eax,dword ptr [TSingleton<CQuickslotKeyMappedMan>::ms_pInstance]
	neg esi
	sbb esi,esi
	and esi,0xFFFFFFAF
	add esi,0x59
	xor edi,edi
	test esi,esi
	jle Block34

 Block25:
	lea ebp,[eax+4]

 Block26:
	cmp dword ptr [esp+0x28],0
	mov ecx,ebx
	je Block36

 Block27:
	mov eax,dword ptr [ebp]
	push eax
	call CFuncKeyMappedMan::FuncKeyMapped
	mov edx,dword ptr [eax]
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [ecx+0x10],edx
	mov dl,byte ptr [eax+4]
	mov byte ptr [ecx+0x14],dl

 Block28:
	mov cl,byte ptr [eax]
	cmp cl,2
	je Block31

 Block29:
	cmp cl,3
	je Block31

 Block30:
	cmp cl,7
	jne Block33

 Block31:
	mov ecx,dword ptr [esp+0x14]
	cmp dword ptr [eax+1],ecx
	jne Block33

 Block32:
	mov byte ptr [eax],0

 Block33:
	inc edi
	add ebp,4
	cmp edi,esi
	jl Block26

 Block34:
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0
	call CWnd::InvalidateRect
	mov ecx,dword ptr [TSingleton<CUIKeyConfig>::ms_pInstance]
	test ecx,ecx
	je Block37

 Block35:
	push 0
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,0x14
	ret 4

 Block36:
	push edi
	call CFuncKeyMappedMan::FuncKeyMapped
	jmp Block28

 Block37:
	cmp dword ptr [esp+0x28],0
	je Block39

 Block38:
	mov ecx,ebx
	call CFuncKeyMappedMan::SaveFuncKeyMap

 Block39:
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,0x14
	ret 4
}
}
// CDraggableItem::PutItem
__SUB_CLASS_THIS(001027D0, __thiscall, 84907,  CDraggableItem, int32_t, CUIRaiseWndBase*) {
__asm {

 Block0:
	sub esp,0x10
	push ebp
	mov ebp,ecx
	cmp dword ptr [ebp+0x24],0
	je Block4

 Block1:
	mov ecx,dword ptr [ebp+0x24]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	call edx
	test eax,eax
	je Block4

 Block2:
	mov eax,dword ptr [ebp+0x24]
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFFC
	jne Block5

 Block4:
	xor eax,eax
	pop ebp
	add esp,0x10
	ret 4

 Block5:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebx
	push esi
	lea eax,[esp+0x14]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block10

 Block6:
	push edi
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block9

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block9:
	mov dword ptr [esp+0x1C],0
	pop edi

 Block10:
	mov ecx,dword ptr [ebp+0x1C]
	mov edx,dword ptr [ebp+0x18]
	push ecx
	push edx
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebx
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block15

 Block11:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	mov ecx,dword ptr [esp+0x10]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	je Block14

 Block13:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block14:
	mov dword ptr [esp+0x10],0

 Block15:
	test esi,esi
	je Block17

 Block16:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov esi,dword ptr [esp+0x20]
	push eax
	mov ecx,esi
	call CUIRaiseWndBase::EnableDrop
	test eax,eax
	jne Block18

 Block17:
	pop esi
	pop ebx
	xor eax,eax
	pop ebp
	add esp,0x10
	ret 4

 Block18:
	mov ecx,dword ptr [ebp+0x1C]
	mov edx,dword ptr [ebp+0x18]
	push ecx
	push edx
	mov ecx,esi
	call CUIRaiseWndBase::PutItem
	pop esi
	pop ebx
	pop ebp
	add esp,0x10
	ret 4
}
}
// CDraggableItem::PutItem
__SUB_CLASS_THIS(00100AD0, __thiscall, 84899,  CDraggableItem, int32_t, CUIVega*) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,ecx
	cmp dword ptr [ebx+0x24],0
	je Block4

 Block1:
	mov ecx,dword ptr [ebx+0x24]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	call edx
	test eax,eax
	je Block4

 Block2:
	mov eax,dword ptr [ebx+0x24]
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFFC
	jne Block5

 Block4:
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 4

 Block5:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebp
	push esi
	lea eax,[esp+0x14]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block10

 Block6:
	push edi
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block9

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block9:
	mov dword ptr [esp+0x1C],0
	pop edi

 Block10:
	mov ecx,dword ptr [ebx+0x1C]
	mov edx,dword ptr [ebx+0x18]
	push ecx
	push edx
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebp
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block15

 Block11:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	mov ecx,dword ptr [esp+0x10]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	je Block14

 Block13:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block14:
	mov dword ptr [esp+0x10],0

 Block15:
	mov ecx,dword ptr [ebx+0x1C]
	mov edx,dword ptr [ebx+0x18]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	push edx
	push esi
	call CUIVega::PutItem
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4
}
}
// CDraggableItem::GetOffEquipItem
__SUB_CLASS_THIS0(00102B90, __thiscall, 84878,  CDraggableItem, int32_t) {
__asm {

 Block0:
	sub esp,0x1C
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	push ebx
	push ebp
	push esi
	push edi
	mov edi,ecx
	mov dword ptr [esp+0x10],edi
	jne Block14

 Block1:
	push 1
	call CDraggableItem::CanPerformAction
	test eax,eax
	je Block14

 Block2:
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebx
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x18],ebx
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x1C]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	cmp dword ptr [ebx+0x20B8],0
	jne Block14

 Block3:
	mov eax,dword ptr [ebx+0x20CC]
	mov edx,dword ptr [eax+0x69]
	push edx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block14

 Block4:
	call get_update_time
	sub eax,dword ptr [ebx+0x20BC]
	cmp eax,0x1F4
	jl Block14

 Block5:
	cmp dword ptr [edi+0x18],1
	jne Block14

 Block6:
	push 1
	mov ecx,esi
	call CharacterData::GetEmptySlotCount
	test eax,eax
	je Block14

 Block7:
	push 1
	mov ecx,esi
	call CharacterData::FindEmptySlotPosition
	mov ebp,eax
	test ebp,ebp
	je Block14

 Block8:
	push ebp
	push 1
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x24]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	jne Block14

 Block9:
	mov ecx,dword ptr [esp+0x10]
	mov edx,dword ptr [ecx+0x1C]
	push edx
	push 1
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x24]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	je Block14

 Block10:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	add ecx,0x88
	call CAvatar::IsRidingTamedMob
	test eax,eax
	je Block16

 Block11:
	lea ebx,[edi+0xC]
	mov ecx,ebx
	call TSecType<long>::GetData
	push eax
	call is_tamedmob
	add esp,4
	test eax,eax
	jne Block13

 Block12:
	mov ecx,ebx
	call TSecType<long>::GetData
	push eax
	call is_saddle
	add esp,4
	test eax,eax
	je Block15

 Block13:
	mov edi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov ecx,esi
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx ecx,ax
	push ecx
	push 0x3EC
	call get_novice_skill_as_race
	add esp,8
	push eax
	mov ecx,edi
	call CUserLocal::SendSkillCancelRequest

 Block14:
	xor eax,eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret

 Block15:
	mov ebx,dword ptr [esp+0x14]

 Block16:
	lea ecx,[ebx+0x3538]
	call ForcedStat::IsForced
	test eax,eax
	je Block18

 Block17:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x383
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	xor eax,eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret

 Block18:
	mov esi,dword ptr [esp+0x18]
	mov eax,dword ptr [esi+0x2E44]
	cmp dword ptr [eax+4],0
	je Block24

 Block19:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	push 0
	lea ecx,[esp+0x1C]
	push ecx
	push 1
	push eax
	call get_bodypart_from_item
	add esp,0x10
	test eax,eax
	je Block24

 Block20:
	mov eax,dword ptr [esp+0x18]
	cmp eax,0x1C
	je Block23

 Block21:
	cmp eax,0x1B
	je Block23

 Block22:
	cmp eax,0x1A
	jne Block24

 Block23:
	mov edx,dword ptr [esi+0x2E44]
	mov ecx,dword ptr [edx+4]
	call CPet::BeginItemSoltChange

 Block24:
	mov eax,dword ptr [esi+0x2E44]
	cmp dword ptr [eax+0xC],0
	je Block30

 Block25:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	push 0
	lea ecx,[esp+0x1C]
	push ecx
	push 1
	push eax
	call get_bodypart_from_item
	add esp,0x10
	test eax,eax
	je Block30

 Block26:
	mov eax,dword ptr [esp+0x18]
	cmp eax,0x25
	je Block29

 Block27:
	cmp eax,0x24
	je Block29

 Block28:
	cmp eax,0x23
	jne Block30

 Block29:
	mov edx,dword ptr [esi+0x2E44]
	mov ecx,dword ptr [edx+0xC]
	call CPet::BeginItemSoltChange

 Block30:
	mov eax,dword ptr [esi+0x2E44]
	cmp dword ptr [eax+0x14],0
	je Block36

 Block31:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	push 0
	lea ecx,[esp+0x1C]
	push ecx
	push 1
	push eax
	call get_bodypart_from_item
	add esp,0x10
	test eax,eax
	je Block36

 Block32:
	mov eax,dword ptr [esp+0x18]
	cmp eax,0x2D
	je Block35

 Block33:
	cmp eax,0x2C
	je Block35

 Block34:
	cmp eax,0x2B
	jne Block36

 Block35:
	mov edx,dword ptr [esi+0x2E44]
	mov ecx,dword ptr [edx+0x14]
	call CPet::BeginItemSoltChange

 Block36:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [eax+0x1C]
	push 0xFFFFFFFF
	push ebp
	push ecx
	push 1
	mov ecx,ebx
	call CWvsContext::SendChangeSlotPositionRequest
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,0x1C
	ret
}
}
// CDraggableItem::MoveItemSlot
__SUB_CLASS_THIS(00103840, __thiscall, 84893,  CDraggableItem, int32_t, CUIItem*, long, long) {
__asm {

 Block0:
	sub esp,0x10
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	push edi
	mov edi,ecx
	je Block2

 Block1:
	xor eax,eax
	pop edi
	add esp,0x10
	ret 0xC

 Block2:
	push 1
	call CDraggableItem::CanPerformAction
	test eax,eax
	je Block1

 Block3:
	push ebx
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [ebx+0x20B8],0
	jne Block6

 Block4:
	mov eax,dword ptr [ebx+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block6

 Block5:
	call get_update_time
	sub eax,dword ptr [ebx+0x20BC]
	cmp eax,0x1F4
	jge Block7

 Block6:
	pop ebx
	xor eax,eax
	pop edi
	add esp,0x10
	ret 0xC

 Block7:
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x20]
	push ebp
	mov ebp,dword ptr [esp+0x20]
	push edx
	push eax
	mov ecx,ebp
	call CUIItem::GetSlotPositionFromPoint
	mov dword ptr [esp+0x28],eax
	test eax,eax
	jne Block9

 Block8:
	pop ebp
	pop ebx
	pop edi
	add esp,0x10
	ret 0xC

 Block9:
	push esi
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,ebx
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x10]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov eax,dword ptr [edi+0x18]
	cmp dword ptr [ebp+0xB34],eax
	jne Block15

 Block10:
	mov ecx,dword ptr [edi+0x1C]
	mov ebp,dword ptr [esp+0x2C]
	cmp ecx,ebp
	je Block15

 Block11:
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov ecx,esi
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x18]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test esi,esi
	je Block15

 Block12:
	push esi
	call is_treat_singly_1
	add esp,4
	test eax,eax
	jne Block14

 Block13:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	mov ecx,esi
	call edx
	test eax,eax
	jle Block15

 Block14:
	mov eax,dword ptr [edi+0x1C]
	mov ecx,dword ptr [edi+0x18]
	push 0xFFFFFFFF
	push ebp
	push eax
	push ecx
	mov ecx,ebx
	call CWvsContext::SendChangeSlotPositionRequest
	pop esi
	pop ebp
	pop ebx
	mov eax,1
	pop edi
	add esp,0x10
	ret 0xC

 Block15:
	pop esi
	pop ebp
	pop ebx
	xor eax,eax
	pop edi
	add esp,0x10
	ret 0xC
}
}
// CDraggableItem::PutItem
__SUB_CLASS_THIS(001025E0, __thiscall, 84914,  CDraggableItem, int32_t, CParcelDlg*) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	mov ebp,ecx
	cmp dword ptr [ebp+0x24],0
	push esi
	push edi
	je Block27

 Block1:
	mov ecx,dword ptr [ebp+0x24]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	call edx
	test eax,eax
	je Block27

 Block2:
	mov eax,dword ptr [ebp+0x24]
	test eax,eax
	je Block27

 Block3:
	add eax,0xFFFFFFFC
	je Block27

 Block4:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block9

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
	mov dword ptr [esp+0x1C],0

 Block9:
	mov ecx,dword ptr [ebp+0x1C]
	mov edx,dword ptr [ebp+0x18]
	push ecx
	push edx
	lea eax,[esp+0x18]
	push eax
	mov ecx,ebx
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block14

 Block10:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	mov ecx,dword ptr [esp+0x14]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block13

 Block12:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block13:
	mov dword ptr [esp+0x14],0

 Block14:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov ecx,esi
	call eax
	test eax,eax
	je Block16

 Block15:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0xD78
	push ecx
	jmp Block26

 Block16:
	lea edi,[esi+0xC]
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	jne Block25

 Block17:
	mov edx,dword ptr [esi+0x18]
	or edx,dword ptr [esi+0x1C]
	jne Block25

 Block18:
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsPartyQuestItem
	test eax,eax
	jne Block25

 Block19:
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsQuestItem
	test eax,eax
	je Block21

 Block20:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	mov ecx,esi
	call edx
	test eax,eax
	je Block25

 Block21:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push esi
	call CItemInfo::IsTradeBlockItem_1
	test eax,eax
	je Block23

 Block22:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	mov ecx,esi
	call edx
	test eax,eax
	je Block25

 Block23:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push esi
	call CItemInfo::IsAccountSharableItem_1
	test eax,eax
	jne Block25

 Block24:
	mov eax,dword ptr [ebp+0x1C]
	mov ecx,dword ptr [ebp+0x18]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	push esi
	call CParcelDlg::PutItem
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4

 Block25:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 0xF49
	push edx

 Block26:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block27:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 4
}
}
// CDraggableItem::ItemOptionModifyEquipItem
__SUB_CLASS_THIS(00103A00, __thiscall, 84896,  CDraggableItem, int32_t, long, long, long) {
__asm {

 Block0:
	sub esp,0x1C
	push ebx
	push ebp
	push esi
	push edi
	mov esi,ecx
	push 1
	mov dword ptr [esp+0x14],esi
	call CDraggableItem::CanPerformAction
	test eax,eax
	je Block16

 Block1:
	mov eax,dword ptr [esi+0x18]
	cmp eax,2
	je Block3

 Block2:
	cmp eax,5
	jne Block16

 Block3:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x1C]
	mov ebx,ecx
	push eax
	mov dword ptr [esp+0x1C],ebx
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block8

 Block4:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block5:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block7

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block7:
	mov esi,dword ptr [esp+0x10]
	mov dword ptr [esp+0x20],0

 Block8:
	cmp dword ptr [ebx+0x20B8],0
	jne Block16

 Block9:
	mov eax,dword ptr [ebx+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block16

 Block10:
	call get_update_time
	sub eax,dword ptr [ebx+0x20BC]
	cmp eax,0x1F4
	jl Block16

 Block11:
	mov edx,dword ptr [esi+0x1C]
	mov eax,dword ptr [esi+0x18]
	push edx
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebp
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x24]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test esi,esi
	je Block16

 Block12:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov ecx,esi
	call eax
	test eax,eax
	je Block17

 Block13:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push 0xD78

 Block14:
	push ecx

 Block15:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block16:
	xor eax,eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 0xC

 Block17:
	mov eax,dword ptr [esp+0x38]
	xor ebx,ebx
	sub eax,ebx
	je Block20

 Block18:
	sub eax,1
	jne Block26

 Block19:
	mov edx,dword ptr [esp+0x34]
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [TSingleton<CUIEquip>::ms_pInstance]
	push edx
	push eax
	call CUIEquip::GetBodyPartFromPoint
	neg eax
	mov ebx,eax
	jmp Block26

 Block20:
	mov ecx,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test ecx,ecx
	je Block23

 Block21:
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x48]
	add ecx,4
	push offset CUIEnchantDlg::ms_RTTI_CUIEnchantDlg
	call eax
	test eax,eax
	je Block23

 Block22:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	jmp Block24

 Block23:
	xor eax,eax

 Block24:
	cmp dword ptr [eax+0xAF4],ebx
	jne Block16

 Block25:
	mov ebx,dword ptr [eax+0xA8]

 Block26:
	push ebx
	push 1
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebp
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x24]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test esi,esi
	je Block16

 Block27:
	lea edi,[esi+0xC]
	mov ecx,edi
	call TSecType<long>::GetData
	movzx ecx,byte ptr [ebp+0x11]
	push 0
	lea edx,[esp+0x18]
	push edx
	push ecx
	push eax
	call get_bodypart_from_item
	mov eax,dword ptr [esp+0x24]
	lea edx,[eax-0x3E8]
	add esp,0x10
	cmp edx,3
	ja Block29

 Block28:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	push 0x108B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	xor eax,eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 0xC

 Block29:
	add eax,0xFFFFFBB4
	cmp eax,4
	ja Block31

 Block30:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push 0x108B
	jmp Block14

 Block31:
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	je Block33

 Block32:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x4C],esp
	push 0x108B
	push edx
	jmp Block15

 Block33:
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	test eax,eax
	je Block16

 Block34:
	mov ecx,eax
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nTUC
	test al,al
	jne Block36

 Block35:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	push 0x108B
	push eax
	jmp Block15

 Block36:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x80]
	mov ecx,esi
	call eax
	test al,al
	ja Block30

 Block37:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov ecx,esi
	call eax
	test eax,eax
	je Block39

 Block38:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push 0x1160
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block16

 Block39:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [eax+0x1C]
	xor edx,edx
	cmp dword ptr [esp+0x38],edx
	sete dl
	push edx
	push ebx
	push ecx
	mov ecx,dword ptr [esp+0x24]
	call CWvsContext::SendItemOptionUpgradeItemUseRequest
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,0x1C
	ret 0xC
}
}
// CDraggableItem::ItemRelease
__SUB_CLASS_THIS(00103D20, __thiscall, 84884,  CDraggableItem, int32_t, long, long) {
__asm {

 Block0:
	sub esp,0x20
	push ebx
	push ebp
	push esi
	push edi
	mov esi,ecx
	push 1
	mov dword ptr [esp+0x14],esi
	call CDraggableItem::CanPerformAction
	test eax,eax
	je Block14

 Block1:
	mov eax,dword ptr [esi+0x18]
	cmp eax,2
	je Block3

 Block2:
	cmp eax,5
	jne Block14

 Block3:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x18]
	mov ebp,ecx
	push eax
	mov dword ptr [esp+0x18],ebp
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block8

 Block4:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block5:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block7

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block7:
	mov esi,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],0

 Block8:
	cmp dword ptr [ebp+0x20B8],0
	jne Block14

 Block9:
	mov eax,dword ptr [ebp+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block14

 Block10:
	call get_update_time
	sub eax,dword ptr [ebp+0x20BC]
	cmp eax,0x1F4
	jl Block14

 Block11:
	mov edx,dword ptr [esi+0x1C]
	mov eax,dword ptr [esi+0x18]
	push edx
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebx
	call CharacterData::GetItem
	mov ebp,dword ptr [eax+4]
	lea ecx,[esp+0x20]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test ebp,ebp
	je Block14

 Block12:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+4]
	mov ecx,ebp
	call eax
	test eax,eax
	je Block15

 Block13:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push 0xD78
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block14:
	xor eax,eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 8

 Block15:
	mov edx,dword ptr [esp+0x38]
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [TSingleton<CUIEquip>::ms_pInstance]
	push edx
	push eax
	call CUIEquip::GetBodyPartFromPoint
	cmp eax,0xE
	jne Block17

 Block16:
	mov eax,0x72

 Block17:
	neg eax
	mov edi,eax
	push edi
	push 1
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,ebx
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x28]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test esi,esi
	je Block14

 Block18:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x80]
	mov ecx,esi
	call eax
	test al,al
	je Block14

 Block19:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x78]
	mov ecx,esi
	call eax
	test eax,eax
	jne Block14

 Block20:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	mov esi,eax
	test esi,esi
	je Block14

 Block21:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0x10
	call CInputSystem::SetCursorState
	lea ecx,[ebp+0xC]
	call TSecType<long>::GetData
	sub eax,0x258960
	je Block28

 Block22:
	sub eax,1
	je Block26

 Block23:
	sub eax,1
	jne Block29

 Block24:
	mov ecx,esi
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrLevel
	cmp eax,0x78
	jle Block29

 Block25:
	xor eax,eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 8

 Block26:
	mov ecx,esi
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrLevel
	cmp eax,0x46
	jle Block29

 Block27:
	xor eax,eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 8

 Block28:
	mov ecx,esi
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrLevel
	cmp eax,0x1E
	jg Block14

 Block29:
	mov ecx,dword ptr [esp+0x10]
	mov edx,dword ptr [ecx+0x1C]
	mov ecx,dword ptr [esp+0x14]
	push edi
	push edx
	call CWvsContext::SendItemReleaseRequest
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,0x20
	ret 8
}
}
// CDraggableItem::PutItem
__SUB_CLASS_THIS(001023B0, __thiscall, 84903,  CDraggableItem, int32_t, CUIItemUpgrade*) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	mov ebp,ecx
	cmp dword ptr [ebp+0x24],0
	push esi
	push edi
	je Block29

 Block1:
	mov ecx,dword ptr [ebp+0x24]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	call edx
	test eax,eax
	je Block29

 Block2:
	mov eax,dword ptr [ebp+0x24]
	test eax,eax
	je Block29

 Block3:
	add eax,0xFFFFFFFC
	je Block29

 Block4:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block9

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
	mov dword ptr [esp+0x1C],0

 Block9:
	mov ecx,dword ptr [ebp+0x1C]
	mov edx,dword ptr [ebp+0x18]
	push ecx
	push edx
	lea eax,[esp+0x18]
	push eax
	mov ecx,ebx
	call CharacterData::GetItem
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block14

 Block10:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	mov ecx,dword ptr [esp+0x14]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block13

 Block12:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block13:
	mov dword ptr [esp+0x14],0

 Block14:
	cmp dword ptr [ebp+0x18],1
	jne Block27

 Block15:
	lea esi,[ebx+0xC]
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,1
	jne Block27

 Block16:
	mov ecx,esi
	call TSecType<long>::GetData
	cmp eax,0x111ED0
	jne Block18

 Block17:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 0x13D1
	push edx
	jmp Block28

 Block18:
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov edi,eax
	push edi
	call CItemInfo::GetEquipItem
	mov esi,eax
	mov eax,dword ptr [esi+0xAC]
	push eax
	lea ecx,[esi+0xA8]
	push ecx
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx eax,al
	add esp,8
	test eax,eax
	jle Block26

 Block19:
	push edi
	call is_pet_equip_item
	add esp,4
	test eax,eax
	jne Block26

 Block20:
	mov ecx,ebx
	call GW_ItemSlotBase::IsCashItem
	test eax,eax
	jne Block26

 Block21:
	test byte ptr [esi+0x264],2
	je Block23

 Block22:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 0x13CE
	push edx
	jmp Block28

 Block23:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x84]
	mov ecx,ebx
	call edx
	cmp eax,dword ptr [esi+0x26C]
	jl Block25

 Block24:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x13CF
	push eax
	jmp Block28

 Block25:
	mov ecx,dword ptr [ebp+0x1C]
	mov edx,dword ptr [ebp+0x18]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	push edx
	push ebx
	call CUIItemUpgrade::PutItem
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4

 Block26:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x13CE
	push eax
	jmp Block28

 Block27:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x13CE
	push ecx

 Block28:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block29:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 4
}
}
// CDraggableItem::PutItem
__SUB_CLASS_THIS(00101B70, __thiscall, 84935,  CDraggableItem, int32_t, CUIItemMaker*, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,dword ptr [esp+0x18]
	push esi
	push edi
	mov esi,ecx
	test ebx,ebx
	je Block8

 Block1:
	cmp dword ptr [esi+0x24],0
	je Block8

 Block2:
	mov ecx,dword ptr [esi+0x24]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	call edx
	test eax,eax
	je Block8

 Block3:
	mov eax,dword ptr [esi+0x24]
	test eax,eax
	je Block8

 Block4:
	add eax,0xFFFFFFFC
	je Block8

 Block5:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0xC]
	push eax
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0xC]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [esi+0x1C]
	mov edx,dword ptr [esi+0x18]
	push ecx
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x14]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	je Block8

 Block6:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov ecx,edi
	call eax
	test eax,eax
	je Block9

 Block7:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0xD78
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block8:
	xor eax,eax
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 0xC

 Block9:
	mov edx,dword ptr [esp+0x28]
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esi+0x1C]
	push edx
	mov edx,dword ptr [esi+0x18]
	push eax
	push ecx
	push edx
	push edi
	mov ecx,ebx
	call CUIItemMaker::PutItem
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 0xC
}
}
// IDraggable::OnDropped
__SUB_CLASS_THIS(001001C0, __thiscall, 79380,  IDraggable, int32_t, IUIMsgHandler*, IUIMsgHandler*, long, long) {
__asm {

 Block0:
	xor eax,eax
	ret 0x10
}
}
// is_treat_singly
__SUB(00101570, __cdecl, 144478,  int32_t, GW_ItemSlotBase*) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	lea esi,[edi+0xC]
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	je Block3

 Block1:
	cmp eax,3
	je Block3

 Block2:
	cmp eax,4
	jne Block7

 Block3:
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xCF
	je Block7

 Block4:
	cmp eax,0xE9
	je Block7

 Block5:
	push offset _D_DB_DATE_20790101__34
	add edi,0x20
	push edi
	call dword ptr [ZImports::_CompareFileTime]
	test eax,eax
	jl Block7

 Block6:
	pop edi
	xor eax,eax
	pop esi
	ret

 Block7:
	pop edi
	mov eax,1
	pop esi
	ret
}
}
// CDraggableItem::OnDoubleClicked
_SUB_EXCEPTION_HANDLER(106E10)
__SUB_CLASS_THIS0(00106E10, __thiscall, 84878,  CDraggableItem, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_106E10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x130
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov edi,ecx
	mov dword ptr [ebp-0x28],edi
	push 0
	call CDraggableItem::CanPerformAction
	test eax,eax
	je Block33

 Block1:
	cmp dword ptr [edi+0x24],0
	je Block33

 Block2:
	mov ecx,dword ptr [edi+0x24]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	call edx
	test eax,eax
	je Block204

 Block3:
	mov eax,dword ptr [edi+0x24]
	test eax,eax
	je Block204

 Block4:
	add eax,0xFFFFFFFC
	je Block204

 Block5:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	lea ecx,[ebp-0x4C]
	push ecx
	mov ecx,esi
	mov dword ptr [ebp-0x14],eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	lea ecx,[ebp-0x4C]
	mov dword ptr [ebp-0x20],ebx
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov edx,dword ptr [edi+0x1C]
	mov eax,dword ptr [edi+0x18]
	push edx
	push eax
	lea ecx,[ebp-0x44]
	push ecx
	mov ecx,ebx
	call CharacterData::GetItem
	mov ebx,dword ptr [eax+4]
	lea ecx,[ebp-0x44]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test ebx,ebx
	je Block33

 Block6:
	mov eax,dword ptr [edi+0x18]
	dec eax
	cmp eax,4
	ja Block203

 Block7:
	cmp EAX, 0
je Block8
cmp EAX, 1
je Block48
cmp EAX, 2
je Block130
cmp EAX, 3
je Block139
cmp EAX, 4
je Block193


 Block8:
	add ebx,0xC
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,dword ptr [ebp-0x20]
	push 1
	lea edx,[ebp-0x13C]
	push edx
	movzx edx,byte ptr [ecx+0x11]
	push edx
	push eax
	call get_bodypart_from_item
	mov esi,eax
	add esp,0x10
	test esi,esi
	jle Block38

 Block9:
	mov eax,dword ptr [ebp-0x13C]
	push eax
	call is_pet_equip_item_idx
	add esp,4
	test eax,eax
	je Block38

 Block10:
	mov eax,dword ptr [ebp-0x13C]
	cmp eax,0x18
	je Block38

 Block11:
	cmp eax,0x19
	je Block38

 Block12:
	mov ecx,dword ptr [ebp-0x14]
	mov edx,dword ptr [ecx+0x2E44]
	cmp dword ptr [edx+4],0
	je Block37

 Block13:
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	xor esi,esi
	mov dword ptr [ebp-0x1C],eax
	mov dword ptr [ebp-0x18],esi
	mov dword ptr [ebp-4],esi
	xor edi,edi

 Block14:
	mov ecx,dword ptr [ebp-0x14]
	push edi
	lea eax,[ebp-0x30]
	push eax
	call CUser::GetActivePetItemSlot
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block24

 Block15:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [ebp-0x1C]
	push eax
	call CItemInfo::EQUIPITEM::IsItemSuitedForPet
	test eax,eax
	je Block17

 Block16:
	mov ecx,dword ptr [edi*4+_D_G_ANPETWEARBODYP]
	lea edx,[ebp-0x30]
	mov dword ptr [ebp+esi*4-0x13C],ecx
	push edx
	jmp Block23

 Block17:
	cmp dword ptr [ebp-0x2C],0
	je Block24

 Block18:
	mov ecx,ebx
	call TSecType<long>::GetData
	push eax
	call is_pet_ability_item
	add esp,4
	test eax,eax
	je Block20

 Block19:
	mov ecx,ebx
	call TSecType<long>::GetData
	push eax
	push edi
	call to_petabil_item_bodypart
	mov dword ptr [ebp+esi*4-0x13C],eax
	add esp,8
	lea eax,[ebp-0x30]
	push eax
	jmp Block23

 Block20:
	cmp dword ptr [ebp-0x2C],0
	je Block24

 Block21:
	mov ecx,ebx
	call TSecType<long>::GetData
	push eax
	call is_petring_item
	add esp,4
	test eax,eax
	je Block24

 Block22:
	mov ecx,ebx
	call TSecType<long>::GetData
	push eax
	push edi
	call to_pet_ring_bodypart
	add esp,8
	lea ecx,[ebp-0x30]
	mov dword ptr [ebp+esi*4-0x13C],eax
	push ecx

 Block23:
	push 0xFFFFFFFF
	lea ecx,[ebp-0x18]
	inc esi
	call ZArray<ZRef<GW_ItemSlotPet>>::InsertBefore
	mov ecx,eax
	call ZRef<GW_ItemSlotPet>::op_assign_copy

 Block24:
	lea ecx,[ebp-0x30]
	mov byte ptr [ebp-4],0
	call ZRef<GW_ItemSlotPet>::~ZRef<GW_ItemSlotPet>
	inc edi
	cmp edi,3
	jl Block14

 Block25:
	cmp esi,1
	jle Block36

 Block26:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x1C],eax
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block34

 Block27:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block34

 Block28:
	add eax,8
	je Block34

 Block29:
	lea esi,[eax-8]
	mov dword ptr [ebp-0x34],esi
	test esi,esi
	je Block31

 Block30:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block31:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x1C],esp
	push 0x191
	push eax
	mov byte ptr [ebp-4],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0x897B50
	push 6
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	lea ecx,[ebp-0x18]
	push ecx
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_Pet
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	mov byte ptr [ebp-4],0
	lea ecx,[ebp-0x38]
	cmp eax,1
	je Block35

 Block32:
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZArray<ZRef<GW_ItemSlotPet>>::RemoveAll

 Block33:
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block34:
	xor esi,esi
	mov dword ptr [ebp-0x34],esi
	jmp Block31

 Block35:
	mov esi,dword ptr [esi+0x160]
	mov edx,dword ptr [ebp+esi*4-0x13C]
	mov dword ptr [ebp-0x13C],edx
	mov esi,1
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>

 Block36:
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZArray<ZRef<GW_ItemSlotPet>>::RemoveAll
	mov edi,dword ptr [ebp-0x28]
	jmp Block38

 Block37:
	mov esi,1

 Block38:
	xor eax,eax
	test esi,esi
	jle Block203

 Block39:
	mov ecx,dword ptr [ebp-0x20]
	mov edi,edi

 Block40:
	cmp esi,1
	jle Block44

 Block41:
	mov edx,dword ptr [ebp+eax*4-0x13C]
	cmp dword ptr [ecx+edx*8+0x2DD],0
	je Block44

 Block42:
	inc eax
	cmp eax,esi
	jl Block40

 Block43:
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block44:
	mov eax,dword ptr [ebp+eax*4-0x13C]
	mov ecx,dword ptr [edi+0x1C]
	push eax
	push ecx
	mov ecx,edi
	call CDraggableItem::WearEquipItem_0
	test eax,eax
	je Block203

 Block45:
	lea edx,[ebp-0x3C]
	push 0x4FA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [ebp-4],4
	call play_ui_sound
	mov eax,dword ptr [ebp-0x3C]
	add esp,4
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block47:
	mov eax,1
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block48:
	mov ecx,dword ptr [ebp-0x14]
	call CUser::IsWindWalk
	test eax,eax
	jne Block33

 Block49:
	mov ecx,dword ptr [ebp-0x14]
	call CUser::IsSneak
	test eax,eax
	jne Block33

 Block50:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+4]
	mov ecx,ebx
	call edx
	test eax,eax
	je Block52

 Block51:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x20],esp
	push 0xD78
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block52:
	mov ecx,dword ptr [ebp-0x14]
	call CUser::IsDarkSight
	push 0
	mov ecx,esi
	push 0xC8
	test eax,eax
	je Block58

 Block53:
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block57

 Block54:
	add ebx,0xC
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetLotteryItem
	test eax,eax
	jne Block57

 Block55:
	mov ecx,ebx
	call TSecType<long>::GetData
	push eax
	call is_state_change_item
	add esp,4
	test eax,eax
	je Block57

 Block56:
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,dword ptr [edi+0x1C]
	push eax
	push ecx
	mov ecx,esi
	call CWvsContext::SendStatChangeItemUseRequest

 Block57:
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block58:
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block61

 Block59:
	lea ecx,[ebx+0xC]
	mov dword ptr [ebp-0x14],ecx
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetLotteryItem
	test eax,eax
	je Block61

 Block60:
	mov ecx,dword ptr [ebp-0x14]
	call TSecType<long>::GetData
	mov edx,dword ptr [edi+0x1C]
	push eax
	push edx
	mov ecx,esi
	call CWvsContext::SendLotteryItemUseRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block61:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block64

 Block62:
	lea ecx,[ebx+0xC]
	mov dword ptr [ebp-0x14],ecx
	call TSecType<long>::GetData
	push eax
	call is_random_morph_item_other
	add esp,4
	test eax,eax
	je Block64

 Block63:
	mov ecx,dword ptr [ebp-0x14]
	call TSecType<long>::GetData
	push eax
	mov eax,dword ptr [edi+0x1C]
	push eax
	mov ecx,esi
	call CWvsContext::SendRandomMorphOtherRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block64:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block67

 Block65:
	lea ecx,[ebx+0xC]
	mov dword ptr [ebp-0x14],ecx
	call TSecType<long>::GetData
	push eax
	call is_state_change_item
	add esp,4
	test eax,eax
	je Block67

 Block66:
	mov ecx,dword ptr [ebp-0x14]
	call TSecType<long>::GetData
	mov ecx,dword ptr [edi+0x1C]
	push eax
	push ecx
	mov ecx,esi
	call CWvsContext::SendStatChangeItemUseRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block67:
	push 0
	push 0x1F4
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block70

 Block68:
	lea ecx,[ebx+0xC]
	mov dword ptr [ebp-0x14],ecx
	call TSecType<long>::GetData
	push eax
	call is_antimacro_item
	add esp,4
	test eax,eax
	je Block70

 Block69:
	mov ecx,dword ptr [ebp-0x14]
	call TSecType<long>::GetData
	mov edx,dword ptr [edi+0x1C]
	push eax
	push edx
	mov ecx,esi
	call CWvsContext::SendAntiMacroItemUseRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block70:
	push 0
	push 0x1F4
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block73

 Block71:
	lea ecx,[ebx+0xC]
	mov dword ptr [ebp-0x14],ecx
	call TSecType<long>::GetData
	push eax
	call is_portal_scroll_item
	add esp,4
	test eax,eax
	je Block73

 Block72:
	mov ecx,dword ptr [ebp-0x14]
	call TSecType<long>::GetData
	push eax
	mov eax,dword ptr [edi+0x1C]
	push eax
	mov ecx,esi
	call CWvsContext::SendPortalScrollUseRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block73:
	push 0
	push 0x1F4
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block76

 Block74:
	lea ecx,[ebx+0xC]
	mov dword ptr [ebp-0x14],ecx
	call TSecType<long>::GetData
	push eax
	call is_mobsummon_item
	add esp,4
	test eax,eax
	je Block76

 Block75:
	mov ecx,dword ptr [ebp-0x14]
	call TSecType<long>::GetData
	mov ecx,dword ptr [edi+0x1C]
	push eax
	push ecx
	mov ecx,esi
	call CWvsContext::SendMobSummonItemUseRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block76:
	push 0
	push 0x3E8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block81

 Block77:
	mov ecx,ebx
	call GW_ItemSlotBase::IsCashItem
	test eax,eax
	je Block81

 Block78:
	lea ecx,[ebx+0xC]
	mov dword ptr [ebp-0x14],ecx
	call TSecType<long>::GetData
	push eax
	call get_consume_cash_item_type
	add esp,4
	test eax,eax
	je Block81

 Block79:
	mov ecx,dword ptr [ebp-0x14]
	call TSecType<long>::GetData
	push eax
	call is_cash_pet_food_item
	add esp,4
	test eax,eax
	je Block81

 Block80:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x20],esp
	push 0xFFFFFFFF
	push offset _S_
	call ZXString<char>::CreateFromCharStr
	mov ecx,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],5
	call TSecType<long>::GetData
	mov edx,dword ptr [edi+0x1C]
	push 0
	push eax
	push edx
	mov ecx,esi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call CWvsContext::SendConsumeCashItemUseRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block81:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block84

 Block82:
	lea ecx,[ebx+0xC]
	mov dword ptr [ebp-0x14],ecx
	call TSecType<long>::GetData
	push eax
	call is_pet_food_item
	add esp,4
	test eax,eax
	je Block84

 Block83:
	mov ecx,dword ptr [ebp-0x14]
	call TSecType<long>::GetData
	push eax
	mov eax,dword ptr [edi+0x1C]
	push eax
	mov ecx,esi
	call CWvsContext::SendPetFoodItemUseRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block84:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block87

 Block85:
	lea ecx,[ebx+0xC]
	mov dword ptr [ebp-0x14],ecx
	call TSecType<long>::GetData
	push eax
	call is_engagement_ring_box_item
	add esp,4
	test eax,eax
	je Block87

 Block86:
	mov ecx,dword ptr [ebp-0x14]
	call TSecType<long>::GetData
	mov ecx,dword ptr [edi+0x1C]
	push eax
	push ecx
	mov ecx,esi
	call CWvsContext::SendEngagementRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block87:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block90

 Block88:
	lea ecx,[ebx+0xC]
	mov dword ptr [ebp-0x14],ecx
	call TSecType<long>::GetData
	push eax
	call is_tamingmob_food_item
	add esp,4
	test eax,eax
	je Block90

 Block89:
	mov ecx,dword ptr [ebp-0x14]
	call TSecType<long>::GetData
	mov edx,dword ptr [edi+0x1C]
	push eax
	push edx
	mov ecx,esi
	call CWvsContext::SendTamingMobFoodItemUseRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block90:
	push 0
	push 0x1F4
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block93

 Block91:
	lea ecx,[ebx+0xC]
	mov dword ptr [ebp-0x14],ecx
	call TSecType<long>::GetData
	push eax
	call is_bridle_item
	add esp,4
	test eax,eax
	je Block93

 Block92:
	mov ecx,dword ptr [ebp-0x14]
	call TSecType<long>::GetData
	push eax
	mov eax,dword ptr [edi+0x1C]
	push eax
	mov ecx,esi
	call CWvsContext::SendBridleItemUseRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block93:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block96

 Block94:
	lea ecx,[ebx+0xC]
	mov dword ptr [ebp-0x14],ecx
	call TSecType<long>::GetData
	push eax
	call is_skill_learn_item
	add esp,4
	test eax,eax
	je Block96

 Block95:
	mov ecx,dword ptr [ebp-0x14]
	call TSecType<long>::GetData
	mov ecx,dword ptr [edi+0x1C]
	push eax
	push ecx
	mov ecx,esi
	call CWvsContext::SendSkillLearnItemUseRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block96:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block99

 Block97:
	lea ecx,[ebx+0xC]
	mov dword ptr [ebp-0x14],ecx
	call TSecType<long>::GetData
	push eax
	call is_skill_reset_item
	add esp,4
	test eax,eax
	je Block99

 Block98:
	mov ecx,dword ptr [ebp-0x14]
	call TSecType<long>::GetData
	mov edx,dword ptr [edi+0x1C]
	push eax
	push edx
	mov ecx,esi
	call CWvsContext::SendSkillResetItemUseRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block99:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block102

 Block100:
	lea ecx,[ebx+0xC]
	mov dword ptr [ebp-0x14],ecx
	call TSecType<long>::GetData
	push eax
	call is_shopscanner_item
	add esp,4
	test eax,eax
	je Block102

 Block101:
	mov ecx,dword ptr [ebp-0x14]
	call TSecType<long>::GetData
	push eax
	mov eax,dword ptr [edi+0x1C]
	push eax
	mov ecx,esi
	call CWvsContext::SendShopScannerItemUseRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block102:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block105

 Block103:
	lea ecx,[ebx+0xC]
	mov dword ptr [ebp-0x14],ecx
	call TSecType<long>::GetData
	push eax
	call is_maptransfer_item
	add esp,4
	test eax,eax
	je Block105

 Block104:
	mov ecx,dword ptr [ebp-0x14]
	call TSecType<long>::GetData
	mov ecx,dword ptr [edi+0x1C]
	push eax
	push ecx
	mov ecx,esi
	call CWvsContext::SendMapTransferItemUseRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block105:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block108

 Block106:
	lea ecx,[ebx+0xC]
	mov dword ptr [ebp-0x14],ecx
	call TSecType<long>::GetData
	push eax
	call is_engagement_ring_box_item
	add esp,4
	test eax,eax
	je Block108

 Block107:
	mov ecx,dword ptr [ebp-0x14]
	call TSecType<long>::GetData
	mov edx,dword ptr [edi+0x1C]
	push eax
	push edx
	mov ecx,esi
	call CWvsContext::SendEngagementRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block108:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block111

 Block109:
	lea ecx,[ebx+0xC]
	mov dword ptr [ebp-0x14],ecx
	call TSecType<long>::GetData
	push eax
	call is_select_npc_item
	add esp,4
	test eax,eax
	je Block111

 Block110:
	mov ecx,dword ptr [ebp-0x14]
	call TSecType<long>::GetData
	push eax
	mov eax,dword ptr [edi+0x1C]
	push eax
	mov ecx,esi
	call CWvsContext::SendSelectNpcItemUseRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block111:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block114

 Block112:
	lea ecx,[ebx+0xC]
	mov dword ptr [ebp-0x14],ecx
	call TSecType<long>::GetData
	push eax
	call is_exp_up_item
	add esp,4
	test eax,eax
	je Block114

 Block113:
	mov ecx,dword ptr [ebp-0x14]
	call TSecType<long>::GetData
	mov ecx,dword ptr [edi+0x1C]
	push eax
	push ecx
	mov ecx,esi
	call CWvsContext::SendExpUpItemUseRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block114:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block117

 Block115:
	lea ecx,[ebx+0xC]
	mov dword ptr [ebp-0x14],ecx
	call TSecType<long>::GetData
	push eax
	call is_script_run_item
	add esp,4
	test eax,eax
	je Block117

 Block116:
	mov ecx,dword ptr [ebp-0x14]
	call TSecType<long>::GetData
	mov edx,dword ptr [edi+0x1C]
	push eax
	push edx
	mov ecx,esi
	call CWvsContext::SendScriptRunItemRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block117:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block127

 Block118:
	lea ecx,[ebx+0xC]
	call TSecType<long>::GetData
	push eax
	call is_release_item
	add esp,4
	test eax,eax
	je Block127

 Block119:
	mov eax,dword ptr [TSingleton<CUIItem>::ms_pInstance]
	test eax,eax
	je Block126

 Block120:
	add eax,8
	je Block126

 Block121:
	lea esi,[eax-8]
	mov dword ptr [ebp-0x34],esi
	test esi,esi
	je Block123

 Block122:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block123:
	mov dword ptr [ebp-4],6
	test esi,esi
	je Block125

 Block124:
	push 0
	mov ecx,esi
	call CUIItem::ChangeTab
	mov ecx,dword ptr [edi+0x1C]
	push ecx
	push 1
	mov ecx,esi
	call CUIItem::SetTryToReleaseItem

 Block125:
	lea ecx,[ebp-0x38]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<CUIItem>::~ZRef<CUIItem>
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block126:
	xor esi,esi
	mov dword ptr [ebp-0x34],esi
	jmp Block123

 Block127:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block203

 Block128:
	add ebx,0xC
	mov ecx,ebx
	call TSecType<long>::GetData
	push eax
	call is_new_year_card_item_con
	add esp,4
	test eax,eax
	je Block203

 Block129:
	mov ecx,ebx
	call TSecType<long>::GetData
	mov edx,dword ptr [edi+0x1C]
	push eax
	push edx
	mov ecx,esi
	call CWvsContext::SendNewYearCardUseRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block130:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block133

 Block131:
	lea ecx,[ebx+0xC]
	mov dword ptr [ebp-0x14],ecx
	call TSecType<long>::GetData
	push eax
	call is_portable_chair_item
	add esp,4
	test eax,eax
	je Block133

 Block132:
	mov ecx,dword ptr [ebp-0x14]
	call TSecType<long>::GetData
	push eax
	mov eax,dword ptr [edi+0x1C]
	push eax
	mov ecx,esi
	call CWvsContext::SendSitOnPortableChairRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block133:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block136

 Block134:
	lea ecx,[ebx+0xC]
	call TSecType<long>::GetData
	add eax,0xFFC30DA8
	cmp eax,8
	ja Block136

 Block135:
	mov ecx,esi
	call CWvsContext::SendDragonBallBoxRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block136:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block203

 Block137:
	add ebx,0xC
	mov ecx,ebx
	call TSecType<long>::GetData
	push eax
	call is_script_run_item
	add esp,4
	test eax,eax
	je Block203

 Block138:
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,dword ptr [edi+0x1C]
	push eax
	push ecx
	mov ecx,esi
	call CWvsContext::SendScriptRunItemRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block139:
	mov ecx,dword ptr [ebp-0x14]
	call CUser::IsDarkSight
	test eax,eax
	jne Block33

 Block140:
	mov ecx,dword ptr [ebp-0x14]
	call CUser::IsWindWalk
	test eax,eax
	jne Block33

 Block141:
	mov ecx,dword ptr [ebp-0x14]
	call CUser::IsSneak
	test eax,eax
	jne Block33

 Block142:
	push eax
	push 0x1F4
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block145

 Block143:
	lea ecx,[ebx+0xC]
	call TSecType<long>::GetData
	push eax
	call is_minigame_item
	add esp,4
	test eax,eax
	je Block145

 Block144:
	lea ecx,[ebx+0xC]
	call TSecType<long>::GetData
	mov edx,dword ptr [edi+0x1C]
	push eax
	push edx
	mov ecx,esi
	call CWvsContext::SendCreateMiniGameRequest

 Block145:
	lea edi,[ebx+0xC]
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	call is_book_item
	add esp,4
	test eax,eax
	je Block147

 Block146:
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	mov ecx,esi
	call CWvsContext::OpenBook
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block147:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block150

 Block148:
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	call is_invitation_bundle_item
	add esp,4
	test eax,eax
	je Block150

 Block149:
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	mov eax,dword ptr [ebp-0x28]
	mov ecx,dword ptr [eax+0x1C]
	push ecx
	mov ecx,esi
	call CWvsContext::SendSendInvitaionRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block150:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block153

 Block151:
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	call is_invitation_guest_item
	add esp,4
	test eax,eax
	je Block153

 Block152:
	mov ecx,edi
	call TSecType<long>::GetData
	mov edx,dword ptr [ebp-0x28]
	push eax
	mov eax,dword ptr [edx+0x1C]
	push eax
	mov ecx,esi
	call CWvsContext::SendInvitationQuery
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block153:
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	call is_raise_item
	add esp,4
	mov ecx,edi
	test eax,eax
	je Block155

 Block154:
	call TSecType<long>::GetData
	push eax
	mov ecx,esi
	call CWvsContext::OpenRaise
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block155:
	call TSecType<long>::GetData
	push eax
	call is_gachapon_box_item
	add esp,4
	test eax,eax
	je Block157

 Block156:
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [ebp-0x28]
	mov edx,dword ptr [ecx+0x1C]
	push eax
	push edx
	mov ecx,esi
	call CWvsContext::UseBoxGachaponItem
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block157:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block185

 Block158:
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	call is_pigmy_egg
	add esp,4
	test eax,eax
	je Block185

 Block159:
	xor esi,esi
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],esi
	je Block162

 Block160:
	lea eax,[ebp-0x24]
	push 0x98
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [ebp-4],7
	call CHATLOG_ADD
	mov eax,dword ptr [ebp-0x24]
	add esp,8
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,esi
	je Block203

 Block161:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block162:
	cmp dword ptr [TSingleton<CItemInfo>::ms_pInstance],esi
	je Block203

 Block163:
	mov dword ptr [ebp-0x18],esi
	mov ecx,edi
	mov dword ptr [ebp-4],8
	call TSecType<long>::GetData
	lea ecx,[ebp-0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetGachaponItemIDByAggID
	lea ecx,[ebp-0x18]
	call ZArray<long>::IsEmpty
	test eax,eax
	jne Block182

 Block164:
	mov edx,dword ptr [ebp-0x18]
	mov eax,dword ptr [edx]
	mov edi,dword ptr [ebp-0x20]
	mov dword ptr [ebp-0x14],esi
	mov dword ptr [ebp-0x1C],eax
	mov esi,1

 Block165:
	push 5
	mov ecx,edi
	call CharacterData::GetItemSlotCount
	cmp esi,eax
	jg Block180

 Block166:
	push esi
	push 5
	lea ecx,[ebp-0x38]
	push ecx
	mov ecx,edi
	call CharacterData::GetItem
	mov eax,dword ptr [ebp-0x34]
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block184

 Block167:
	lea edi,[eax+0xC]
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	call get_consume_cash_item_type
	add esp,4
	cmp eax,0x1B
	jne Block183

 Block168:
	mov ecx,edi
	call TSecType<long>::GetData
	cmp dword ptr [ebp-0x1C],eax
	jne Block183

 Block169:
	mov eax,dword ptr [TSingleton<CUIItem>::ms_pInstance]
	test eax,eax
	je Block177

 Block170:
	add eax,8
	je Block177

 Block171:
	add eax,0xFFFFFFF8
	mov dword ptr [ebp-0x2C],eax
	test eax,eax
	je Block173

 Block172:
	mov edx,eax
	add edx,0xC
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebp-0x2C]

 Block173:
	test eax,eax
	je Block176

 Block174:
	push 0xB58
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [ebp-4],0xB
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x1C],eax
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block176

 Block175:
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [ebp-0x28]
	mov edx,dword ptr [ecx+0x1C]
	mov ecx,dword ptr [ebp-0x1C]
	push edx
	push 4
	push ebx
	push eax
	push esi
	call CUIIncubator::_ctor_0

 Block176:
	lea ecx,[ebp-0x30]
	mov dword ptr [ebp-4],9
	call ZRef<CUIItem>::~ZRef<CUIItem>
	lea ecx,[ebp-0x38]
	mov byte ptr [ebp-4],8
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZArray<long>::RemoveAll
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block177:
	xor eax,eax
	mov dword ptr [ebp-0x2C],eax
	jmp Block173

 Block180:
	cmp dword ptr [ebp-0x14],0
	jne Block182

 Block181:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [ebp-0x18]
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov eax,esp
	mov dword ptr [ebp-0x1C],esp
	push 0
	push edx
	push eax
	call CItemInfo::GetGachaponMsg
	call CUtilDlg::Notice
	add esp,0x14

 Block182:
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZArray<long>::RemoveAll
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block183:
	mov edi,dword ptr [ebp-0x20]

 Block184:
	lea ecx,[ebp-0x38]
	mov byte ptr [ebp-4],8
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	inc esi
	jmp Block165

 Block185:
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	call is_non_cash_effect_item
	add esp,4
	test eax,eax
	je Block187

 Block186:
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::SendActiveEffectItemChange
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block187:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block190

 Block188:
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	call is_new_year_card_item_etc
	add esp,4
	test eax,eax
	je Block190

 Block189:
	add ebx,0x40
	push ebx
	call _atoi
	add esp,4
	push eax
	mov ecx,esi
	call CWvsContext::ShowNewYearCard
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block190:
	push 0
	push 0xC8
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block203

 Block191:
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	call is_ui_open_item
	add esp,4
	test eax,eax
	je Block203

 Block192:
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	mov eax,dword ptr [ebp-0x28]
	mov ecx,dword ptr [eax+0x1C]
	push ecx
	mov ecx,esi
	call CWvsContext::SendUIOpenItemRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block193:
	push 0
	push 0x1F4
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block33

 Block194:
	lea ecx,[ebx+0xC]
	mov dword ptr [ebp-0x14],ecx
	call TSecType<long>::GetData
	push eax
	call get_bundle_cash_item_type
	add esp,4
	cmp eax,8
	jne Block197

 Block195:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0x14]
	mov ecx,ebx
	call eax
	test eax,eax
	je Block197

 Block196:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x20],esp
	push 0x1477
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block33

 Block197:
	mov ecx,dword ptr [ebp-0x14]
	call TSecType<long>::GetData
	push eax
	call get_bundle_cash_item_type
	add esp,4
	test eax,eax
	je Block199

 Block198:
	mov ecx,dword ptr [ebp-0x14]
	call TSecType<long>::GetData
	mov edx,dword ptr [ebx+0x1C]
	mov ecx,dword ptr [ebx+0x18]
	push edx
	mov edx,dword ptr [edi+0x1C]
	push ecx
	push eax
	push edx
	mov ecx,esi
	call CWvsContext::SendCashSlotItemUseRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block199:
	mov ebx,dword ptr [ebp-0x14]
	mov ecx,ebx
	call TSecType<long>::GetData
	push eax
	call get_consume_cash_item_type
	add esp,4
	test eax,eax
	je Block201

 Block200:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x20],esp
	push 0xFFFFFFFF
	push offset _S_
	call ZXString<char>::CreateFromCharStr
	mov ecx,ebx
	mov dword ptr [ebp-4],0xE
	call TSecType<long>::GetData
	push 0
	push eax
	mov eax,dword ptr [edi+0x1C]
	push eax
	mov ecx,esi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call CWvsContext::SendConsumeCashItemUseRequest
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block201:
	mov ecx,ebx
	call TSecType<long>::GetData
	push eax
	call get_etc_cash_item_type
	add esp,4
	test eax,eax
	je Block203

 Block202:
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,dword ptr [edi+0x1C]
	push eax
	push ecx
	mov ecx,esi
	call CWvsContext::SendEtcCashItemUseRequest

 Block203:
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block204:
	cmp dword ptr [edi+0x24],0
	je Block33

 Block205:
	mov ecx,dword ptr [edi+0x24]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x48]
	push offset CUIEquip::ms_RTTI_CUIEquip
	call eax
	test eax,eax
	je Block212

 Block206:
	mov eax,dword ptr [edi+0x24]
	test eax,eax
	je Block212

 Block207:
	add eax,0xFFFFFFFC
	je Block212

 Block208:
	cmp dword ptr [edi+0x1C],0xFFFFFFEE
	jne Block211

 Block209:
	lea ecx,[ebp-0x44]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[ebp-0x44]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov edx,dword ptr [edi+0x1C]
	push edx
	push 1
	lea eax,[ebp-0x4C]
	push eax
	mov ecx,esi
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	lea ecx,[ebp-0x4C]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test esi,esi
	je Block211

 Block210:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	push eax
	call is_evan_dragon_riding_item
	add esp,4
	test eax,eax
	jne Block33

 Block211:
	lea ecx,[ebp-0x24]
	push 0x4FA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [ebp-4],0xF
	jmp Block231

 Block212:
	cmp dword ptr [edi+0x24],0
	je Block33

 Block213:
	mov ecx,dword ptr [edi+0x24]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x48]
	push offset CUIEquip::ms_RTTI_CUIEquip
	call eax
	test eax,eax
	je Block216

 Block214:
	mov eax,dword ptr [edi+0x24]
	test eax,eax
	je Block216

 Block215:
	add eax,0xFFFFFFFC
	jne Block230

 Block216:
	cmp dword ptr [edi+0x24],0
	je Block33

 Block217:
	mov ecx,dword ptr [edi+0x24]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x48]
	push offset CUIPetEquip::ms_RTTI_CUIPetEquip
	call eax
	test eax,eax
	je Block220

 Block218:
	mov eax,dword ptr [edi+0x24]
	test eax,eax
	je Block220

 Block219:
	add eax,0xFFFFFFFC
	jne Block230

 Block220:
	cmp dword ptr [edi+0x24],0
	je Block33

 Block221:
	mov ecx,dword ptr [edi+0x24]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x48]
	push offset CUIDragonEquip::ms_RTTI_CUIDragonEquip
	call eax
	test eax,eax
	je Block225

 Block222:
	mov eax,dword ptr [edi+0x24]
	test eax,eax
	je Block225

 Block223:
	add eax,0xFFFFFFFC
	je Block225

 Block224:
	lea ecx,[ebp-0x24]
	push 0x4FA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [ebp-4],0x11
	jmp Block231

 Block225:
	cmp dword ptr [edi+0x24],0
	je Block33

 Block226:
	mov ecx,dword ptr [edi+0x24]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x48]
	push offset CUIMechanicEquip::ms_RTTI_CUIMechanicEquip
	call eax
	test eax,eax
	je Block33

 Block227:
	mov eax,dword ptr [edi+0x24]
	test eax,eax
	je Block33

 Block228:
	add eax,0xFFFFFFFC
	je Block33

 Block229:
	lea ecx,[ebp-0x1C]
	push 0x4FA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [ebp-4],0x12
	call play_ui_sound
	mov eax,dword ptr [ebp-0x1C]
	jmp Block232

 Block230:
	lea edx,[ebp-0x24]
	push 0x4FA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [ebp-4],0x10

 Block231:
	mov eax,dword ptr [eax]
	push eax
	call play_ui_sound
	mov eax,dword ptr [ebp-0x24]

 Block232:
	add esp,4
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block234

 Block233:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block234:
	mov ecx,edi
	call CDraggableItem::GetOffEquipItem_0
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CDraggableItem::OnDropped
_SUB_EXCEPTION_HANDLER(108700)
__SUB_CLASS_THIS(00108700, __thiscall, 84877,  CDraggableItem, int32_t, IUIMsgHandler*, IUIMsgHandler*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_108700
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
	mov dword ptr [esp+0x14],ebx
	mov edi,dword ptr [esp+0x38]
	test edi,edi
	je Block4

 Block1:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CTradingRoomDlg::ms_RTTI_CTradingRoomDlg
	mov ecx,edi
	call edx
	test eax,eax
	je Block4

 Block2:
	lea eax,[edi-4]
	test eax,eax
	je Block5

 Block3:
	lea ecx,[eax+4]
	jmp Block6

 Block4:
	xor eax,eax

 Block5:
	xor ecx,ecx

 Block6:
	mov esi,dword ptr [esp+0x34]
	cmp esi,ecx
	je Block9

 Block7:
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	push ecx
	push edx
	push eax
	mov ecx,ebx
	call CDraggableItem::PutItem_6
	jmp Block339

 Block9:
	test edi,edi
	je Block13

 Block10:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CCashTradingRoomDlg::ms_RTTI_CCashTradingRoomDlg
	mov ecx,edi
	call edx
	test eax,eax
	je Block13

 Block11:
	lea eax,[edi-4]
	test eax,eax
	je Block14

 Block12:
	lea ecx,[eax+4]
	jmp Block15

 Block13:
	xor eax,eax

 Block14:
	xor ecx,ecx

 Block15:
	cmp esi,ecx
	je Block18

 Block16:
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	push ecx
	push edx
	push eax
	mov ecx,ebx
	call CDraggableItem::PutItem_7
	jmp Block339

 Block18:
	test edi,edi
	je Block22

 Block19:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CPersonalShopDlg::ms_RTTI_CPersonalShopDlg
	mov ecx,edi
	call edx
	test eax,eax
	je Block22

 Block20:
	lea eax,[edi-4]
	test eax,eax
	je Block23

 Block21:
	lea ecx,[eax+4]
	jmp Block24

 Block22:
	xor eax,eax

 Block23:
	xor ecx,ecx

 Block24:
	cmp esi,ecx
	je Block27

 Block25:
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	push ecx
	push edx
	push eax
	mov ecx,ebx
	call CDraggableItem::PutItem_8
	jmp Block339

 Block27:
	test edi,edi
	je Block31

 Block28:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CParcelDlg::ms_RTTI_CParcelDlg
	mov ecx,edi
	call edx
	test eax,eax
	je Block31

 Block29:
	lea eax,[edi-4]
	test eax,eax
	je Block32

 Block30:
	lea ecx,[eax+4]
	jmp Block33

 Block31:
	xor eax,eax

 Block32:
	xor ecx,ecx

 Block33:
	cmp esi,ecx
	je Block36

 Block34:
	test eax,eax
	je Block36

 Block35:
	push eax
	mov ecx,ebx
	call CDraggableItem::PutItem_11
	jmp Block339

 Block36:
	test edi,edi
	je Block40

 Block37:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CItemSpeakerDlg::ms_RTTI_CItemSpeakerDlg
	mov ecx,edi
	call edx
	test eax,eax
	je Block40

 Block38:
	lea eax,[edi-4]
	test eax,eax
	je Block41

 Block39:
	lea ecx,[eax+4]
	jmp Block42

 Block40:
	xor eax,eax

 Block41:
	xor ecx,ecx

 Block42:
	cmp esi,ecx
	je Block45

 Block43:
	test eax,eax
	je Block45

 Block44:
	push eax
	mov ecx,ebx
	call CDraggableItem::PutItem_0
	jmp Block339

 Block45:
	test edi,edi
	je Block49

 Block46:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItemMaker::ms_RTTI_CUIItemMaker
	mov ecx,edi
	call edx
	test eax,eax
	je Block49

 Block47:
	lea eax,[edi-4]
	test eax,eax
	je Block50

 Block48:
	lea ecx,[eax+4]
	jmp Block51

 Block49:
	xor eax,eax

 Block50:
	xor ecx,ecx

 Block51:
	cmp esi,ecx
	je Block54

 Block52:
	test eax,eax
	je Block54

 Block53:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	push ecx
	push edx
	push eax
	mov ecx,ebx
	call CDraggableItem::PutItem_5
	jmp Block339

 Block54:
	cmp dword ptr [ebx+0x18],1
	jne Block154

 Block55:
	test esi,esi
	je Block64

 Block56:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIEquip::ms_RTTI_CUIEquip
	mov ecx,esi
	call edx
	test eax,eax
	je Block64

 Block57:
	lea ebp,[esi-4]
	test ebp,ebp
	je Block64

 Block58:
	test edi,edi
	je Block73

 Block59:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	mov ecx,edi
	call edx
	test eax,eax
	je Block64

 Block60:
	lea ebx,[edi-4]
	test ebx,ebx
	je Block64

 Block61:
	lea eax,[esp+0x38]
	push 0x4FA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x30],0
	call play_ui_sound
	mov eax,dword ptr [esp+0x3C]
	add esp,4
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block63:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	push edx
	push ebx
	push ebp
	call CDraggableItem::GetOffEquipItem_1
	jmp Block339

 Block64:
	test edi,edi
	je Block73

 Block65:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIEquip::ms_RTTI_CUIEquip
	mov ecx,edi
	call edx
	test eax,eax
	je Block73

 Block66:
	lea ebp,[edi-4]
	test ebp,ebp
	je Block73

 Block67:
	test esi,esi
	je Block89

 Block68:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	mov ecx,esi
	call edx
	test eax,eax
	je Block73

 Block69:
	lea ebx,[esi-4]
	test ebx,ebx
	je Block73

 Block70:
	lea eax,[esp+0x38]
	push 0x4FA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x30],1
	call play_ui_sound
	mov eax,dword ptr [esp+0x3C]
	add esp,4
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block72:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	push edx
	push ebx
	push ebp
	call CDraggableItem::WearEquipItem_1
	jmp Block339

 Block73:
	test esi,esi
	je Block89

 Block74:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIEquip::ms_RTTI_CUIEquip
	mov ecx,esi
	call edx
	test eax,eax
	je Block81

 Block75:
	lea ecx,[esi-4]
	test ecx,ecx
	je Block81

 Block76:
	mov eax,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test eax,eax
	je Block78

 Block77:
	add eax,4
	jmp Block79

 Block78:
	xor eax,eax

 Block79:
	cmp edi,eax
	jne Block81

 Block80:
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	call CDraggableItem::ThrowItem
	jmp Block339

 Block81:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIPetEquip::ms_RTTI_CUIPetEquip
	mov ecx,esi
	call edx
	test eax,eax
	je Block89

 Block82:
	lea ebp,[esi-4]
	test ebp,ebp
	je Block89

 Block83:
	test edi,edi
	je Block98

 Block84:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	mov ecx,edi
	call edx
	test eax,eax
	je Block89

 Block85:
	lea ebx,[edi-4]
	test ebx,ebx
	je Block89

 Block86:
	lea eax,[esp+0x38]
	push 0x4FA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x30],2
	call play_ui_sound
	mov eax,dword ptr [esp+0x3C]
	add esp,4
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block88

 Block87:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block88:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	push edx
	push ebx
	push ebp
	call CDraggableItem::GetOffEquipItem_1
	jmp Block339

 Block89:
	test edi,edi
	je Block98

 Block90:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIPetEquip::ms_RTTI_CUIPetEquip
	mov ecx,edi
	call edx
	test eax,eax
	je Block98

 Block91:
	lea ebp,[edi-4]
	test ebp,ebp
	je Block98

 Block92:
	test esi,esi
	je Block113

 Block93:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	mov ecx,esi
	call edx
	test eax,eax
	je Block98

 Block94:
	lea ebx,[esi-4]
	test ebx,ebx
	je Block98

 Block95:
	lea eax,[esp+0x38]
	push 0x4FA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x30],3
	call play_ui_sound
	mov eax,dword ptr [esp+0x3C]
	add esp,4
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block97

 Block96:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block97:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	push edx
	push ebx
	push ebp
	call CDraggableItem::WearEquipItem_3
	jmp Block339

 Block98:
	test esi,esi
	je Block113

 Block99:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIPetEquip::ms_RTTI_CUIPetEquip
	mov ecx,esi
	call edx
	test eax,eax
	je Block105

 Block100:
	lea ecx,[esi-4]
	test ecx,ecx
	je Block105

 Block101:
	mov eax,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test eax,eax
	je Block103

 Block102:
	add eax,4
	jmp Block104

 Block103:
	xor eax,eax

 Block104:
	cmp edi,eax
	je Block80

 Block105:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIDragonEquip::ms_RTTI_CUIDragonEquip
	mov ecx,esi
	call edx
	test eax,eax
	je Block113

 Block106:
	lea eax,[esi-4]
	test eax,eax
	je Block113

 Block107:
	test edi,edi
	je Block122

 Block108:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	mov ecx,edi
	call edx
	test eax,eax
	je Block113

 Block109:
	lea ebx,[edi-4]
	test ebx,ebx
	je Block113

 Block110:
	lea eax,[esp+0x38]
	push 0x4FA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x30],4
	call play_ui_sound
	mov eax,dword ptr [esp+0x3C]
	add esp,4
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block112

 Block111:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block112:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	push edx
	push ebx
	push 0
	call CDraggableItem::GetOffEquipItem_1
	jmp Block339

 Block113:
	test edi,edi
	je Block122

 Block114:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIDragonEquip::ms_RTTI_CUIDragonEquip
	mov ecx,edi
	call edx
	test eax,eax
	je Block122

 Block115:
	lea ebp,[edi-4]
	test ebp,ebp
	je Block122

 Block116:
	test esi,esi
	je Block137

 Block117:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	mov ecx,esi
	call edx
	test eax,eax
	je Block122

 Block118:
	lea ebx,[esi-4]
	test ebx,ebx
	je Block122

 Block119:
	lea eax,[esp+0x38]
	push 0x4FA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x30],5
	call play_ui_sound
	mov eax,dword ptr [esp+0x3C]
	add esp,4
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block121

 Block120:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block121:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	push edx
	push ebx
	push ebp
	call CDraggableItem::WearEquipItem_2
	jmp Block339

 Block122:
	test esi,esi
	je Block137

 Block123:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIDragonEquip::ms_RTTI_CUIDragonEquip
	mov ecx,esi
	call edx
	test eax,eax
	je Block129

 Block124:
	lea eax,[esi-4]
	test eax,eax
	je Block129

 Block125:
	mov eax,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test eax,eax
	je Block127

 Block126:
	add eax,4
	jmp Block128

 Block127:
	xor eax,eax

 Block128:
	cmp edi,eax
	je Block153

 Block129:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIMechanicEquip::ms_RTTI_CUIMechanicEquip
	mov ecx,esi
	call edx
	test eax,eax
	je Block137

 Block130:
	lea eax,[esi-4]
	test eax,eax
	je Block137

 Block131:
	test edi,edi
	je Block146

 Block132:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	mov ecx,edi
	call edx
	test eax,eax
	je Block137

 Block133:
	lea ebx,[edi-4]
	test ebx,ebx
	je Block137

 Block134:
	lea eax,[esp+0x38]
	push 0x4FA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x30],6
	call play_ui_sound
	mov eax,dword ptr [esp+0x3C]
	add esp,4
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block136

 Block135:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block136:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	push edx
	push ebx
	push 0
	call CDraggableItem::GetOffEquipItem_1
	jmp Block339

 Block137:
	test edi,edi
	je Block146

 Block138:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIMechanicEquip::ms_RTTI_CUIMechanicEquip
	mov ecx,edi
	call edx
	test eax,eax
	je Block146

 Block139:
	lea ebp,[edi-4]
	test ebp,ebp
	je Block146

 Block140:
	test esi,esi
	je Block154

 Block141:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	mov ecx,esi
	call edx
	test eax,eax
	je Block146

 Block142:
	lea ebx,[esi-4]
	test ebx,ebx
	je Block146

 Block143:
	lea eax,[esp+0x38]
	push 0x4FA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x30],7
	call play_ui_sound
	mov eax,dword ptr [esp+0x3C]
	add esp,4
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block145

 Block144:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block145:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	push edx
	push ebx
	push ebp
	call CDraggableItem::WearEquipItem_4
	jmp Block339

 Block146:
	test esi,esi
	je Block154

 Block147:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIMechanicEquip::ms_RTTI_CUIMechanicEquip
	mov ecx,esi
	call edx
	test eax,eax
	je Block154

 Block148:
	lea eax,[esi-4]
	test eax,eax
	je Block154

 Block149:
	mov ebp,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test ebp,ebp
	je Block151

 Block150:
	lea eax,[ebp+4]
	jmp Block152

 Block151:
	xor eax,eax

 Block152:
	cmp edi,eax
	jne Block155

 Block153:
	mov ecx,dword ptr [esp+0x14]
	push 0
	push 0
	call CDraggableItem::ThrowItem
	jmp Block339

 Block154:
	mov ebp,dword ptr [TSingleton<CWndMan>::ms_pInstance]

 Block155:
	mov eax,dword ptr [esp+0x14]
	cmp dword ptr [eax+0x18],2
	mov dword ptr [esp+0x38],0
	jne Block168

 Block156:
	test esi,esi
	je Block253

 Block157:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIPetEquip::ms_RTTI_CUIPetEquip
	mov ecx,esi
	call eax
	test eax,eax
	je Block167

 Block158:
	lea ebx,[esi-4]
	test ebx,ebx
	je Block167

 Block159:
	mov eax,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test eax,eax
	je Block161

 Block160:
	add eax,4
	jmp Block162

 Block161:
	xor eax,eax

 Block162:
	cmp edi,eax
	jne Block167

 Block163:
	mov ebp,dword ptr [esp+0x14]
	cmp dword ptr [ebp+0x1C],0xFFFFFF38
	jne Block165

 Block164:
	push 0
	push 0
	push 0
	mov ecx,ebx
	call CUIPetEquip::SetPetConsumeItem

 Block165:
	cmp dword ptr [ebp+0x1C],0xFFFFFF37
	jne Block167

 Block166:
	push 0
	push 0
	push 0
	mov ecx,ebx
	call CUIPetEquip::SetPetConsumeMPItem

 Block167:
	mov ebp,dword ptr [TSingleton<CWndMan>::ms_pInstance]

 Block168:
	test esi,esi
	je Block253

 Block169:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CPersonalShopDlg::ms_RTTI_CPersonalShopDlg
	mov ecx,esi
	call eax
	test eax,eax
	je Block177

 Block170:
	lea ebp,[esi-4]
	test ebp,ebp
	je Block177

 Block171:
	test edi,edi
	je Block177

 Block172:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	mov ecx,edi
	call eax
	test eax,eax
	je Block177

 Block173:
	lea ebx,[edi-4]
	test ebx,ebx
	je Block177

 Block174:
	lea ecx,[esp+0x38]
	push 0x4FA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x30],8
	call play_ui_sound
	mov eax,dword ptr [esp+0x3C]
	add esp,4
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block176

 Block175:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block176:
	mov edx,dword ptr [esp+0x40]
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esp+0x14]
	push edx
	push eax
	push ebx
	push ebp
	call CDraggableItem::MoveItemToInventory
	jmp Block339

 Block177:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	mov ecx,esi
	call eax
	test eax,eax
	je Block185

 Block178:
	lea eax,[esi-4]
	test eax,eax
	je Block185

 Block179:
	test edi,edi
	je Block185

 Block180:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIItemProtector::ms_RTTI_CUIItemProtector
	mov ecx,edi
	call eax
	test eax,eax
	je Block185

 Block181:
	lea ebx,[edi-4]
	test ebx,ebx
	je Block185

 Block182:
	lea ecx,[esp+0x40]
	push 0x4FA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x30],9
	call play_ui_sound
	mov eax,dword ptr [esp+0x44]
	add esp,4
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block184

 Block183:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block184:
	mov ecx,dword ptr [esp+0x14]
	push ebx
	call CDraggableItem::PutItem_9
	jmp Block339

 Block185:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	mov ecx,esi
	call eax
	test eax,eax
	je Block194

 Block186:
	lea eax,[esi-4]
	test eax,eax
	je Block194

 Block187:
	test edi,edi
	je Block194

 Block188:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIItemUpgrade::ms_RTTI_CUIItemUpgrade
	mov ecx,edi
	call eax
	test eax,eax
	je Block194

 Block189:
	lea ebx,[edi-4]
	test ebx,ebx
	je Block194

 Block190:
	lea ecx,[esp+0x40]
	push 0x4FA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x2C],0xA

 Block191:
	mov eax,dword ptr [eax]
	push eax
	call play_ui_sound
	mov eax,dword ptr [esp+0x44]
	add esp,4
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block193

 Block192:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block193:
	mov ecx,dword ptr [esp+0x14]
	push ebx
	call CDraggableItem::PutItem_10
	jmp Block339

 Block194:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	mov ecx,esi
	call eax
	test eax,eax
	je Block202

 Block195:
	lea eax,[esi-4]
	test eax,eax
	je Block202

 Block196:
	test edi,edi
	je Block202

 Block197:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIVega::ms_RTTI_CUIVega
	mov ecx,edi
	call eax
	test eax,eax
	je Block202

 Block198:
	lea ebx,[edi-4]
	test ebx,ebx
	je Block202

 Block199:
	lea ecx,[esp+0x40]
	push 0x4FA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x30],0xB
	call play_ui_sound
	mov eax,dword ptr [esp+0x44]
	add esp,4
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block201

 Block200:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block201:
	mov ecx,dword ptr [esp+0x14]
	push ebx
	call CDraggableItem::PutItem_1
	jmp Block339

 Block202:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	mov ecx,esi
	call eax
	test eax,eax
	je Block210

 Block203:
	lea eax,[esi-4]
	test eax,eax
	je Block210

 Block204:
	test edi,edi
	je Block210

 Block205:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIIncubator::ms_RTTI_CUIIncubator
	mov ecx,edi
	call eax
	test eax,eax
	je Block210

 Block206:
	lea ebx,[edi-4]
	test ebx,ebx
	je Block210

 Block207:
	lea ecx,[esp+0x40]
	push 0x4FA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x30],0xC
	call play_ui_sound
	mov eax,dword ptr [esp+0x44]
	add esp,4
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block209

 Block208:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block209:
	mov ecx,dword ptr [esp+0x14]
	push ebx
	call CDraggableItem::PutItem_2
	jmp Block339

 Block210:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	mov ecx,esi
	call eax
	test eax,eax
	je Block220

 Block211:
	lea eax,[esi-4]
	test eax,eax
	je Block220

 Block212:
	test edi,edi
	je Block219

 Block213:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIEnchantDlg::ms_RTTI_CUIEnchantDlg
	mov ecx,edi
	call eax
	test eax,eax
	je Block219

 Block214:
	lea ebx,[edi-4]
	mov dword ptr [esp+0x38],ebx
	test ebx,ebx
	je Block220

 Block215:
	mov ebp,dword ptr [esp+0x14]
	cmp dword ptr [ebp+0x18],1
	jne Block220

 Block216:
	lea ecx,[esp+0x40]
	push 0x4FA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x30],0xD
	call play_ui_sound
	mov eax,dword ptr [esp+0x44]
	add esp,4
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block218

 Block217:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block218:
	push ebx
	mov ecx,ebp
	call CDraggableItem::PutItem_3
	jmp Block339

 Block219:
	mov dword ptr [esp+0x38],0

 Block220:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	mov ecx,esi
	call eax
	test eax,eax
	je Block228

 Block221:
	lea eax,[esi-4]
	test eax,eax
	je Block228

 Block222:
	test edi,edi
	je Block228

 Block223:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIRaiseWndBase::ms_RTTI_CUIRaiseWndBase
	mov ecx,edi
	call eax
	test eax,eax
	je Block228

 Block224:
	lea ebx,[edi-4]
	test ebx,ebx
	je Block228

 Block225:
	lea ecx,[esp+0x40]
	push 0x4FA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x30],0xE
	call play_ui_sound
	mov eax,dword ptr [esp+0x44]
	add esp,4
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block227

 Block226:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block227:
	mov ecx,dword ptr [esp+0x14]
	push ebx
	call CDraggableItem::PutItem_12
	jmp Block339

 Block228:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	mov ecx,esi
	call eax
	test eax,eax
	je Block236

 Block229:
	lea eax,[esi-4]
	test eax,eax
	je Block236

 Block230:
	test edi,edi
	je Block236

 Block231:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIKarmaDlg::ms_RTTI_CUIKarmaDlg
	mov ecx,edi
	call eax
	test eax,eax
	je Block236

 Block232:
	lea ebx,[edi-4]
	test ebx,ebx
	je Block236

 Block233:
	lea ecx,[esp+0x40]
	push 0x4FA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x30],0xF
	call play_ui_sound
	mov eax,dword ptr [esp+0x44]
	add esp,4
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block235

 Block234:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block235:
	mov ecx,dword ptr [esp+0x14]
	push ebx
	call CDraggableItem::PutItem_4
	jmp Block339

 Block236:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	mov ecx,esi
	call eax
	test eax,eax
	je Block245

 Block237:
	lea eax,[esi-4]
	test eax,eax
	je Block245

 Block238:
	test edi,edi
	je Block245

 Block239:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIUnreleaseDlg::ms_RTTI_CUIUnreleaseDlg
	mov ecx,edi
	call eax
	test eax,eax
	je Block245

 Block240:
	lea ebx,[edi-4]
	test ebx,ebx
	je Block245

 Block241:
	mov ecx,dword ptr [esp+0x14]
	cmp dword ptr [ecx+0x18],1
	jne Block245

 Block242:
	lea edx,[esp+0x40]
	push 0x4FA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x30],0x10
	call play_ui_sound
	mov eax,dword ptr [esp+0x44]
	add esp,4
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block244

 Block243:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block244:
	mov ecx,dword ptr [esp+0x14]
	push ebx
	call CDraggableItem::PutItem_13
	jmp Block339

 Block245:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	mov ecx,esi
	call edx
	test eax,eax
	je Block251

 Block246:
	lea eax,[esi-4]
	test eax,eax
	je Block251

 Block247:
	test edi,edi
	je Block251

 Block248:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItemUpgrade::ms_RTTI_CUIItemUpgrade
	mov ecx,edi
	call edx
	test eax,eax
	je Block251

 Block249:
	lea ebx,[edi-4]
	test ebx,ebx
	je Block251

 Block250:
	lea eax,[esp+0x40]
	push 0x4FA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x2C],0x11
	jmp Block191

 Block251:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	mov ecx,esi
	call eax
	mov ebp,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test eax,eax
	je Block253

 Block252:
	lea ebx,[esi-4]
	jmp Block254

 Block253:
	xor ebx,ebx

 Block254:
	mov ecx,dword ptr [TSingleton<CUIKeyConfig>::ms_pInstance]
	mov eax,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	xor edx,edx
	test ecx,ecx
	je Block256

 Block255:
	mov edx,ecx

 Block256:
	test ebx,ebx
	je Block308

 Block257:
	cmp esi,edi
	jne Block261

 Block258:
	lea ecx,[esp+0x38]
	push 0x4FA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x30],0x12
	call play_ui_sound
	mov eax,dword ptr [esp+0x3C]
	add esp,4
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block260

 Block259:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block260:
	mov edx,dword ptr [esp+0x40]
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esp+0x14]
	push edx
	push eax
	push ebx
	call CDraggableItem::MoveItemSlot
	jmp Block339

 Block261:
	test ebp,ebp
	je Block263

 Block262:
	lea ecx,[ebp+4]
	jmp Block264

 Block263:
	xor ecx,ecx

 Block264:
	cmp edi,ecx
	jne Block266

 Block265:
	mov ecx,dword ptr [esp+0x14]
	push ebx
	push 0
	call CDraggableItem::ThrowItem
	jmp Block339

 Block266:
	test eax,eax
	je Block268

 Block267:
	add eax,4
	jmp Block269

 Block268:
	xor eax,eax

 Block269:
	cmp edi,eax
	jne Block271

 Block270:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	push 1
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	push edx
	call CDraggableItem::MapFuncKey
	jmp Block339

 Block271:
	test edx,edx
	je Block274

 Block272:
	lea eax,[edx+4]
	cmp edi,eax
	jne Block274

 Block273:
	mov eax,dword ptr [esp+0x40]
	mov ecx,dword ptr [esp+0x3C]
	push 0
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x20]
	call CDraggableItem::MapFuncKey
	jmp Block339

 Block274:
	mov eax,dword ptr [TSingleton<CUIEquip>::ms_pInstance]
	test eax,eax
	je Block284

 Block275:
	add eax,4
	cmp edi,eax
	jne Block284

 Block276:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x1C]
	push edx
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x1C]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov edi,dword ptr [esp+0x14]
	mov eax,dword ptr [edi+0x1C]
	mov ecx,dword ptr [edi+0x18]
	push eax
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x14]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test esi,esi
	je Block338

 Block277:
	add esi,0xC
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_hyper_upgrade_item
	add esp,4
	test eax,eax
	je Block279

 Block278:
	mov eax,dword ptr [esp+0x40]
	mov ecx,dword ptr [esp+0x3C]
	push 1
	push eax
	push ecx
	mov ecx,edi
	call CDraggableItem::HyperModifyEquipItem
	jmp Block339

 Block279:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_itemoption_upgrade_item
	add esp,4
	test eax,eax
	je Block281

 Block280:
	mov edx,dword ptr [esp+0x40]
	mov eax,dword ptr [esp+0x3C]
	push 1
	push edx
	push eax
	mov ecx,edi
	call CDraggableItem::ItemOptionModifyEquipItem
	jmp Block339

 Block281:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_release_item
	add esp,4
	test eax,eax
	je Block283

 Block282:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	push ecx
	push edx
	mov ecx,edi
	call CDraggableItem::ItemRelease
	jmp Block339

 Block283:
	mov eax,dword ptr [esp+0x40]
	mov ecx,dword ptr [esp+0x3C]
	push 1
	push eax
	push ecx
	mov ecx,edi
	call CDraggableItem::ModifyEquipItem
	jmp Block339

 Block284:
	mov eax,dword ptr [TSingleton<CUIDragonEquip>::ms_pInstance]
	test eax,eax
	je Block290

 Block285:
	add eax,4
	cmp edi,eax
	jne Block290

 Block286:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x1C]
	push edx
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x1C]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov edi,dword ptr [esp+0x14]
	mov eax,dword ptr [edi+0x1C]
	mov ecx,dword ptr [edi+0x18]
	push eax
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x14]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test esi,esi
	je Block338

 Block287:
	add esi,0xC
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_hyper_upgrade_item
	add esp,4
	test eax,eax
	jne Block299

 Block288:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_itemoption_upgrade_item
	add esp,4
	test eax,eax
	jne Block299

 Block289:
	mov eax,dword ptr [esp+0x40]
	mov ecx,dword ptr [esp+0x3C]
	push 2
	push eax
	push ecx
	mov ecx,edi
	call CDraggableItem::ModifyEquipItem
	jmp Block339

 Block290:
	mov eax,dword ptr [TSingleton<CUIPetEquip>::ms_pInstance]
	test eax,eax
	je Block293

 Block291:
	add eax,4
	cmp edi,eax
	jne Block293

 Block292:
	mov eax,dword ptr [esp+0x40]
	mov ecx,dword ptr [esp+0x3C]
	push 4
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x20]
	call CDraggableItem::ModifyEquipItem
	jmp Block339

 Block293:
	mov eax,dword ptr [TSingleton<CUIMechanicEquip>::ms_pInstance]
	test eax,eax
	je Block300

 Block294:
	add eax,4
	cmp edi,eax
	jne Block300

 Block295:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x1C]
	push edx
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x1C]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov edi,dword ptr [esp+0x14]
	mov eax,dword ptr [edi+0x1C]
	mov ecx,dword ptr [edi+0x18]
	push eax
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x14]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test esi,esi
	je Block338

 Block296:
	add esi,0xC
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_hyper_upgrade_item
	add esp,4
	test eax,eax
	jne Block299

 Block297:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_itemoption_upgrade_item
	add esp,4
	test eax,eax
	jne Block299

 Block298:
	mov eax,dword ptr [esp+0x40]
	mov ecx,dword ptr [esp+0x3C]
	push 3
	push eax
	push ecx
	mov ecx,edi
	call CDraggableItem::ModifyEquipItem
	jmp Block339

 Block299:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x54],esp
	push 0x108B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block338

 Block300:
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block338

 Block301:
	add eax,4
	cmp edi,eax
	jne Block338

 Block302:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x1C]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x1C]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov edi,dword ptr [esp+0x14]
	mov ecx,dword ptr [edi+0x1C]
	mov edx,dword ptr [edi+0x18]
	push ecx
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x14]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test esi,esi
	je Block338

 Block303:
	add esi,0xC
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_hyper_upgrade_item
	add esp,4
	test eax,eax
	je Block305

 Block304:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	push 0
	push ecx
	push edx
	mov ecx,edi
	call CDraggableItem::HyperModifyEquipItem
	jmp Block339

 Block305:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_itemoption_upgrade_item
	add esp,4
	push 0
	test eax,eax
	je Block307

 Block306:
	mov eax,dword ptr [esp+0x44]
	mov ecx,dword ptr [esp+0x40]
	push eax
	push ecx
	mov ecx,edi
	call CDraggableItem::ItemOptionModifyEquipItem
	jmp Block339

 Block307:
	mov edx,dword ptr [esp+0x44]
	mov eax,dword ptr [esp+0x40]
	push edx
	push eax
	mov ecx,edi
	call CDraggableItem::ModifyEquipItem
	jmp Block339

 Block308:
	test eax,eax
	je Block310

 Block309:
	lea ecx,[eax+4]
	jmp Block311

 Block310:
	xor ecx,ecx

 Block311:
	cmp ecx,esi
	jne Block323

 Block312:
	test eax,eax
	je Block314

 Block313:
	add eax,4
	jmp Block315

 Block314:
	xor eax,eax

 Block315:
	cmp edi,eax
	je Block270

 Block316:
	test edx,edx
	je Block318

 Block317:
	lea eax,[edx+4]
	cmp edi,eax
	je Block273

 Block318:
	test ebp,ebp
	je Block320

 Block319:
	lea eax,[ebp+4]
	jmp Block321

 Block320:
	xor eax,eax

 Block321:
	cmp edi,eax
	jne Block338

 Block322:
	mov ecx,dword ptr [esp+0x14]
	push 1
	call CDraggableItem::UnmapFuncKey
	jmp Block339

 Block323:
	test edx,edx
	je Block336

 Block324:
	lea ecx,[edx+4]
	cmp ecx,esi
	jne Block336

 Block325:
	cmp edi,esi
	jne Block327

 Block326:
	mov edx,dword ptr [esp+0x40]
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esp+0x14]
	push 0
	push edx
	push eax
	call CDraggableItem::MapFuncKey
	jmp Block339

 Block327:
	test eax,eax
	je Block329

 Block328:
	add eax,4
	jmp Block330

 Block329:
	xor eax,eax

 Block330:
	cmp edi,eax
	je Block270

 Block331:
	test ebp,ebp
	je Block333

 Block332:
	lea eax,[ebp+4]
	jmp Block334

 Block333:
	xor eax,eax

 Block334:
	cmp edi,eax
	jne Block338

 Block335:
	mov ecx,dword ptr [esp+0x14]
	push 0
	call CDraggableItem::UnmapFuncKey
	jmp Block339

 Block336:
	lea eax,[esp+0x3C]
	push 0x4FA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x30],0x13
	call play_ui_sound
	mov eax,dword ptr [esp+0x40]
	add esp,4
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block338

 Block337:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block338:
	xor eax,eax

 Block339:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 0x10
}
}
// CDraggableItem::PutItem
__SUB_CLASS_THIS(00102980, __thiscall, 84902,  CDraggableItem, int32_t, CUIUnreleaseDlg*) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x1C]
	push esi
	push edi
	mov ebx,ecx
	test ebp,ebp
	je Block8

 Block1:
	cmp dword ptr [ebx+0x24],0
	je Block8

 Block2:
	mov ecx,dword ptr [ebx+0x24]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	call edx
	test eax,eax
	je Block8

 Block3:
	mov eax,dword ptr [ebx+0x24]
	test eax,eax
	je Block8

 Block4:
	add eax,0xFFFFFFFC
	je Block8

 Block5:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x10]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [ebx+0x1C]
	push ecx
	push 1
	lea edx,[esp+0x20]
	push edx
	mov ecx,esi
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x18]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	je Block8

 Block6:
	add edi,0xC
	mov ecx,edi
	call TSecType<long>::GetData
	movzx edx,byte ptr [esi+0x11]
	push 0
	lea ecx,[esp+0x28]
	push ecx
	push edx
	push eax
	call get_bodypart_from_item
	mov eax,dword ptr [esp+0x34]
	lea ecx,[eax-0x3E8]
	add esp,0x10
	cmp ecx,3
	ja Block9

 Block7:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x16E2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block8:
	xor eax,eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4

 Block9:
	add eax,0xFFFFFBB4
	cmp eax,4
	ja Block11

 Block10:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x16E2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	xor eax,eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4

 Block11:
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	test eax,eax
	je Block8

 Block12:
	mov ecx,eax
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nTUC
	push 0
	test al,al
	jne Block14

 Block13:
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x16E2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	xor eax,eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4

 Block14:
	mov edx,dword ptr [ebx+0x1C]
	mov ecx,ebp
	mov dword ptr [ebp+0x98],edx
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,0x10
	ret 4
}
}
// CDraggableItem::PutItem
__SUB_CLASS_THIS(00100DB0, __thiscall, 84906,  CDraggableItem, int32_t, CUIKarmaDlg*) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,ecx
	cmp dword ptr [ebx+0x24],0
	je Block4

 Block1:
	mov ecx,dword ptr [ebx+0x24]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	call edx
	test eax,eax
	je Block4

 Block2:
	mov eax,dword ptr [ebx+0x24]
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFFC
	jne Block5

 Block4:
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 4

 Block5:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebp
	push esi
	lea eax,[esp+0x14]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block10

 Block6:
	push edi
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block9

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block9:
	mov dword ptr [esp+0x1C],0
	pop edi

 Block10:
	mov ecx,dword ptr [ebx+0x1C]
	mov edx,dword ptr [ebx+0x18]
	push ecx
	push edx
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebp
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block15

 Block11:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	mov ecx,dword ptr [esp+0x10]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	je Block14

 Block13:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block14:
	mov dword ptr [esp+0x10],0

 Block15:
	mov ecx,dword ptr [ebx+0x1C]
	mov edx,dword ptr [ebx+0x18]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	push edx
	push esi
	call CUIKarmaDlg::PutItem
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4
}
}
// CDraggableItem::PutItem
__SUB_CLASS_THIS(00101C60, __thiscall, 84933,  CDraggableItem, int32_t, CTradingRoomDlg*, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x1C]
	push esi
	push edi
	mov edi,ecx
	test ebp,ebp
	je Block19

 Block1:
	cmp dword ptr [edi+0x24],0
	je Block19

 Block2:
	mov ecx,dword ptr [edi+0x24]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	call edx
	test eax,eax
	je Block19

 Block3:
	mov eax,dword ptr [edi+0x24]
	test eax,eax
	je Block19

 Block4:
	add eax,0xFFFFFFFC
	je Block19

 Block5:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x10]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [edi+0x1C]
	mov edx,dword ptr [edi+0x18]
	push ecx
	push edx
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x18]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test esi,esi
	je Block19

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov ecx,esi
	call eax
	test eax,eax
	je Block8

 Block7:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0xD78
	push ecx
	jmp Block18

 Block8:
	lea ebx,[esi+0xC]
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	jne Block17

 Block9:
	mov ecx,esi
	call GW_ItemSlotBase::IsCashItem
	test eax,eax
	jne Block17

 Block10:
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsQuestItem
	test eax,eax
	je Block12

 Block11:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x14]
	mov ecx,esi
	call eax
	test eax,eax
	je Block17

 Block12:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push esi
	call CItemInfo::IsTradeBlockItem_1
	test eax,eax
	je Block14

 Block13:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x14]
	mov ecx,esi
	call eax
	test eax,eax
	je Block17

 Block14:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push esi
	call CItemInfo::IsAccountSharableItem_1
	test eax,eax
	je Block16

 Block15:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x38B
	push ecx
	jmp Block18

 Block16:
	mov edx,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [edi+0x1C]
	push edx
	mov edx,dword ptr [edi+0x18]
	push eax
	push ecx
	push edx
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],esi
	mov dword ptr [esp+0x3C],esp
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,ebp
	call CTradingRoomDlg::PutItem
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 0xC

 Block17:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x38B
	push eax

 Block18:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block19:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 0xC
}
}
// CDraggableItem::ThrowItem
_SUB_EXCEPTION_HANDLER(105BA0)
__SUB_CLASS_THIS(00105BA0, __thiscall, 84895,  CDraggableItem, int32_t, CUIEquip*, CUIItem*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_105BA0
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
	mov dword ptr [esp+0x1C],esi
	mov dword ptr [esp+0x14],0
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test eax,eax
	je Block3

 Block1:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CUIPQReward::ms_RTTI_CUIPQReward
	call edx
	test eax,eax
	je Block89

 Block2:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	je Block89

 Block3:
	push 1
	mov ecx,esi
	call CDraggableItem::CanPerformAction
	test eax,eax
	je Block89

 Block4:
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [ebx+0x20B8],0
	mov dword ptr [esp+0x18],ebx
	jne Block89

 Block5:
	mov eax,dword ptr [ebx+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block89

 Block6:
	call get_update_time
	sub eax,dword ptr [ebx+0x20BC]
	cmp eax,0x1F4
	jl Block89

 Block7:
	mov ecx,ebx
	call CWvsContext::CannotDropItem
	test eax,eax
	je Block12

 Block8:
	mov ecx,ebx
	call CWvsContext::IsAdminAccount
	test eax,eax
	jne Block11

 Block9:
	mov ecx,ebx
	call CWvsContext::IsTesterAccount
	test eax,eax
	jne Block11

 Block10:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 0x16ED
	push edx
	jmp Block88

 Block11:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x386
	jmp Block87

 Block12:
	call get_field
	call get_field
	test eax,eax
	je Block15

 Block13:
	cmp dword ptr [esp+0x44],0
	je Block15

 Block14:
	call get_field
	cmp dword ptr [eax+0x1A0],0
	jne Block89

 Block15:
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x24]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov edx,dword ptr [esi+0x1C]
	mov eax,dword ptr [esi+0x18]
	push edx
	push eax
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,edi
	call CharacterData::GetItem
	mov ebp,dword ptr [eax+4]
	lea ecx,[esp+0x2C]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test ebp,ebp
	je Block89

 Block16:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	add ecx,0x88
	call CAvatar::IsRidingTamedMob
	test eax,eax
	je Block20

 Block17:
	lea esi,[ebp+0xC]
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_tamedmob
	add esp,4
	test eax,eax
	jne Block19

 Block18:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_saddle
	add esp,4
	test eax,eax
	je Block20

 Block19:
	mov esi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov ecx,edi
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx edx,ax
	push edx
	push 0x3EC
	call get_novice_skill_as_race
	add esp,8
	push eax
	mov ecx,esi
	call CUserLocal::SendSkillCancelRequest
	jmp Block89

 Block20:
	lea esi,[ebp+0xC]
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_wedding_ring_item
	add esp,4
	test eax,eax
	jne Block89

 Block21:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_wedding_receipt_item
	add esp,4
	test eax,eax
	jne Block89

 Block22:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_wedding_cantdrop_item
	add esp,4
	test eax,eax
	jne Block89

 Block23:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_engagement_ring_box_item
	add esp,4
	test eax,eax
	jne Block89

 Block24:
	mov ecx,esi
	call TSecType<long>::GetData
	cmp eax,0x3CF1E5
	je Block89

 Block25:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_engagement_ring_item
	add esp,4
	test eax,eax
	je Block39

 Block26:
	xor ebp,ebp
	mov dword ptr [esp+0x44],ebp
	lea eax,[esp+0x1C]
	push 0x10B5
	push eax
	mov dword ptr [esp+0x44],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	push ecx
	lea edx,[esp+0x48]
	push offset _S_S__1
	push edx
	mov byte ptr [esp+0x48],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x3C],0
	cmp eax,ebp
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	cmp dword ptr [edi+0x645],ebp
	jbe Block32

 Block29:
	mov edi,dword ptr [edi+0x649]
	cmp word ptr [edi+0xC],3
	jne Block32

 Block30:
	lea eax,[esp+0x1C]
	push 0x10B6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x44],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,8
	mov byte ptr [esp+0x3C],0
	cmp eax,ebp
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	lea edx,[esp+0x58]
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push edx
	call ZXString<char>::_ctor_copy
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	je Block36

 Block33:
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp eax,ebp

 Block34:
	je Block89

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block89

 Block36:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	mov ecx,ebx
	call CWvsContext::SendRingDropRequest
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp eax,ebp
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	mov eax,1
	jmp Block90

 Block39:
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	jne Block86

 Block40:
	mov ecx,ebp
	call GW_ItemSlotBase::IsCashItem
	test eax,eax
	jne Block86

 Block41:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_raise_item
	add esp,4
	test eax,eax
	jne Block86

 Block42:
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsQuestItem
	test eax,eax
	je Block49

 Block43:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0x14]
	mov ecx,ebp
	call eax
	test eax,eax
	jne Block49

 Block44:
	mov ecx,ebx
	call CWvsContext::IsAdminAccount
	test eax,eax
	je Block46

 Block45:
	mov ecx,ebx
	call CWvsContext::IsTradeBlockedUser
	test eax,eax
	je Block49

 Block46:
	call get_field
	test eax,eax
	je Block48

 Block47:
	call get_field
	cmp dword ptr [eax+0x1A0],0
	jne Block89

 Block48:
	push 1
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x1A6B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block89

 Block49:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_new_year_card_item_etc
	add esp,4
	test eax,eax
	jne Block68

 Block50:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebp
	call CItemInfo::IsTradeBlockItem_1
	test eax,eax
	je Block68

 Block51:
	mov edi,ebx
	mov ecx,edi
	call CWvsContext::IsAdminAccount
	test eax,eax
	je Block53

 Block52:
	mov ecx,edi
	call CWvsContext::IsTradeBlockedUser
	test eax,eax
	je Block68

 Block53:
	call get_field
	test eax,eax
	je Block55

 Block54:
	call get_field
	cmp dword ptr [eax+0x1A0],0
	jne Block89

 Block55:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0x14]
	mov ecx,ebp
	call eax
	test eax,eax
	je Block57

 Block56:
	lea ecx,[esp+0x24]
	push 0x1243
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x3C],3
	mov ebx,1
	jmp Block58

 Block57:
	lea edx,[esp+0x20]
	push 0x1A6B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x3C],4
	mov ebx,2

 Block58:
	push eax
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::_ctor_copy
	mov dword ptr [esp+0x3C],6
	test bl,2
	je Block61

 Block59:
	mov eax,dword ptr [esp+0x20]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block61

 Block60:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block61:
	mov byte ptr [esp+0x3C],7
	test bl,1
	je Block64

 Block62:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block64:
	push 0
	push 1
	push 0
	push 0
	push ecx
	lea eax,[esp+0x58]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	call ZXString<char>::_ctor_copy
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	je Block66

 Block65:
	test eax,eax
	jmp Block34

 Block66:
	test eax,eax
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block68:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebp
	call CItemInfo::IsAccountSharableItem_1
	test eax,eax
	je Block71

 Block69:
	mov ecx,dword ptr [esp+0x18]
	call CWvsContext::IsAdminAccount
	test eax,eax
	jne Block71

 Block70:
	push eax
	push 1
	push eax
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x14A4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block89

 Block71:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+4]
	mov ecx,ebp
	call eax
	test eax,eax
	je Block73

 Block72:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0xD78
	push ecx
	jmp Block88

 Block73:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_new_year_card_item_etc
	add esp,4
	test eax,eax
	je Block80

 Block74:
	mov dword ptr [esp+0x44],0
	lea edx,[esp+0x24]
	push 0x131D
	mov ebx,8
	push edx
	mov dword ptr [esp+0x44],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x48]
	push offset _S_S__1
	push ecx
	mov byte ptr [esp+0x48],9
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x3C],bl
	test eax,eax
	je Block76

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block76:
	push 0
	push 0
	push 0
	push 0
	push ecx
	lea edx,[esp+0x58]
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push edx
	call ZXString<char>::_ctor_copy
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	je Block78

 Block77:
	test eax,eax
	jmp Block34

 Block78:
	test eax,eax
	je Block80

 Block79:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block80:
	push ebp
	mov esi,1
	call is_treat_singly_1
	add esp,4
	test eax,eax
	jne Block85

 Block81:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x20]
	mov ecx,ebp
	call edx
	mov edi,eax
	cmp edi,esi
	jle Block85

 Block82:
	lea eax,[esp+0x44]
	push 0x38A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x1C]
	push edi
	push eax
	mov dword ptr [esp+0x44],0xA
	call CDraggableItem::AskItemCount
	mov esi,eax
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block84

 Block83:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block84:
	test esi,esi
	jle Block89

 Block85:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax+0x1C]
	mov edx,dword ptr [eax+0x18]
	push esi
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x24]
	push edx
	call CWvsContext::SendChangeSlotPositionRequest
	mov eax,1
	jmp Block90

 Block86:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x387

 Block87:
	push eax

 Block88:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block89:
	xor eax,eax

 Block90:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 8
}
}
// CDraggableItem::PutItem
__SUB_CLASS_THIS(00101F90, __thiscall, 84925,  CDraggableItem, int32_t, CPersonalShopDlg*, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	mov ebx,ecx
	cmp dword ptr [ebx+0x24],0
	push esi
	push edi
	je Block29

 Block1:
	mov ecx,dword ptr [ebx+0x24]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	call edx
	test eax,eax
	je Block29

 Block2:
	mov eax,dword ptr [ebx+0x24]
	test eax,eax
	je Block29

 Block3:
	add eax,0xFFFFFFFC
	je Block29

 Block4:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block9

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
	mov dword ptr [esp+0x1C],0

 Block9:
	mov ecx,dword ptr [ebx+0x1C]
	mov edx,dword ptr [ebx+0x18]
	push ecx
	push edx
	lea eax,[esp+0x18]
	push eax
	mov ecx,ebp
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block14

 Block10:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	mov ecx,dword ptr [esp+0x14]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block13

 Block12:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block13:
	mov dword ptr [esp+0x14],0

 Block14:
	test esi,esi
	je Block29

 Block15:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov ecx,esi
	call eax
	test eax,eax
	je Block17

 Block16:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0xD78
	push ecx
	jmp Block28

 Block17:
	lea edi,[esi+0xC]
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	jne Block19

 Block18:
	mov edx,dword ptr [esi+0x18]
	or edx,dword ptr [esi+0x1C]
	je Block20

 Block19:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	mov ecx,esi
	call edx
	test eax,eax
	je Block27

 Block20:
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsPartyQuestItem
	test eax,eax
	jne Block27

 Block21:
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsQuestItem
	test eax,eax
	je Block23

 Block22:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	mov ecx,esi
	call edx
	test eax,eax
	je Block27

 Block23:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push esi
	call CItemInfo::IsTradeBlockItem_1
	test eax,eax
	je Block25

 Block24:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	mov ecx,esi
	call edx
	test eax,eax
	je Block27

 Block25:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push esi
	call CItemInfo::IsAccountSharableItem_1
	test eax,eax
	jne Block27

 Block26:
	mov eax,dword ptr [ebx+0x1C]
	mov ecx,dword ptr [ebx+0x18]
	push eax
	push ecx
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],esi
	mov dword ptr [esp+0x20],esp
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x34]
	call CPersonalShopDlg::PutItem
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 0xC

 Block27:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 0x38B
	push edx

 Block28:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block29:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 0xC
}
}
// CDraggableItem::PutItem
__SUB_CLASS_THIS(00101E20, __thiscall, 84929,  CDraggableItem, int32_t, CCashTradingRoomDlg*, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,dword ptr [esp+0x18]
	push esi
	push edi
	mov edi,ecx
	test ebx,ebx
	je Block15

 Block1:
	cmp dword ptr [edi+0x24],0
	je Block15

 Block2:
	mov ecx,dword ptr [edi+0x24]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	call edx
	test eax,eax
	je Block15

 Block3:
	mov eax,dword ptr [edi+0x24]
	test eax,eax
	je Block15

 Block4:
	add eax,0xFFFFFFFC
	je Block15

 Block5:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0xC]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0xC]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [edi+0x1C]
	mov edx,dword ptr [edi+0x18]
	push ecx
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x14]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test esi,esi
	je Block15

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov ecx,esi
	call eax
	test eax,eax
	je Block8

 Block7:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0xD78
	push ecx
	jmp Block14

 Block8:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	je Block13

 Block9:
	mov ecx,esi
	call GW_ItemSlotBase::IsCashItem
	test eax,eax
	je Block13

 Block10:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x14]
	mov ecx,esi
	call eax
	test eax,eax
	jne Block12

 Block11:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0x38B
	push ecx
	jmp Block14

 Block12:
	mov edx,dword ptr [esp+0x28]
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [edi+0x1C]
	push edx
	mov edx,dword ptr [edi+0x18]
	push eax
	push ecx
	push edx
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],esi
	mov dword ptr [esp+0x38],esp
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,ebx
	call CCashTradingRoomDlg::PutItem
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 0xC

 Block13:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0x1482
	push eax

 Block14:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block15:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 0xC
}
}
// CDraggableItem::WearEquipItem
__SUB_CLASS_THIS(00108470, __thiscall, 84890,  CDraggableItem, int32_t, CUIDragonEquip*, CUIItem*, long, long) {
__asm {

 Block0:
	sub esp,0x10
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	push ebx
	mov ebx,ecx
	je Block2

 Block1:
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 0x10

 Block2:
	push 1
	call CDraggableItem::CanPerformAction
	test eax,eax
	je Block1

 Block3:
	cmp dword ptr [ebx+0x18],1
	jne Block1

 Block4:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	push edi
	lea eax,[esp+0xC]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0xC]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [ebx+0x1C]
	push ecx
	push 1
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x14]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	jne Block6

 Block5:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 0x10

 Block6:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x28]
	push ebp
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	call CUIDragonEquip::GetBodyPartFromPoint
	mov ebp,eax
	test ebp,ebp
	je Block10

 Block7:
	lea edx,[ebp-0x3E8]
	cmp edx,3
	ja Block10

 Block8:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	movzx ecx,byte ptr [esi+0x11]
	push ecx
	push ebp
	push eax
	call is_correct_bodypart
	add esp,0xC
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [ebx+0x1C]
	push ebp
	push edx
	mov ecx,ebx
	call CDraggableItem::WearEquipItem_0
	pop ebp
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 0x10

 Block10:
	pop ebp
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 0x10
}
}
// CDraggableItem::WearEquipItem
_SUB_EXCEPTION_HANDLER(1043E0)
// 505B78
static uint8_t _SUB_1043E0_LOOKUP_TABLE_0[35] = {
0, 13, 13, 13, 13, 13, 13, 1, 2, 2, 13, 13, 3, 3, 3, 4, 
0, 5, 6, 7, 7, 8, 8, 8, 0, 9, 10, 11, 11, 12, 12, 12, 
2, 7, 11, 
};
__SUB_CLASS_THIS(001043E0, __thiscall, 84884,  CDraggableItem, int32_t, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1043E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x598
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x5A8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x14],0
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	jne Block9

 Block1:
	push 1
	call CDraggableItem::CanPerformAction
	test eax,eax
	je Block9

 Block2:
	cmp dword ptr [esi+0x18],1
	jne Block9

 Block3:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0xBC]
	push edx
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x4C],ecx
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	lea ecx,[esp+0xBC]
	mov dword ptr [esp+0x44],ebx
	call ZRef<CharacterData>::~ZRef<CharacterData>
	call Util::FTGetNow
	mov ecx,dword ptr [ebp+0xC]
	mov dword ptr [esp+0xB4],eax
	lea eax,[esp+0xB4]
	push eax
	push ecx
	mov ecx,ebx
	mov dword ptr [esp+0xC0],edx
	call CharacterData::IsEquipSlotExpired
	test eax,eax
	jne Block9

 Block4:
	mov edx,dword ptr [ebp+8]
	push edx
	push 1
	lea eax,[esp+0xCC]
	push eax
	mov ecx,ebx
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0xC4]
	mov dword ptr [esp+0x38],edi
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	je Block9

 Block5:
	lea esi,[edi+0xC]
	mov ecx,esi
	call TSecType<long>::GetData
	lea ecx,[edi+0x49]
	mov dword ptr [esp+0x28],eax
	call GW_ItemSlotEquipBase::_ZtlSecureGet_nDurability
	test eax,eax
	jne Block10

 Block6:
	push eax
	push 1
	push eax
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x377

 Block7:
	push ecx

 Block8:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block9:
	xor eax,eax
	mov ecx,dword ptr [esp+0x5A8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 8

 Block10:
	mov edx,dword ptr [ebp+0xC]
	add edx,0xFFFFFC18
	cmp edx,3
	ja Block13

 Block11:
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x40]
	call edx
	push eax
	call is_evan_job
	add esp,4
	test eax,eax
	jne Block13

 Block12:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x1553
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	xor eax,eax
	mov ecx,dword ptr [esp+0x5A8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 8

 Block13:
	mov ecx,dword ptr [ebp+0xC]
	add ecx,0xFFFFFBB4
	cmp ecx,4
	ja Block16

 Block14:
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x40]
	call eax
	push eax
	call is_mechanic_job
	add esp,4
	test eax,eax
	jne Block16

 Block15:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1893
	jmp Block7

 Block16:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edx
	call CItemInfo::IsOnlyEquipItem
	test eax,eax
	je Block19

 Block17:
	mov eax,dword ptr [esp+0x28]
	push eax
	mov ecx,ebx
	call CharacterData::IsEquiped
	test eax,eax
	je Block19

 Block18:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1481
	jmp Block7

 Block19:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	add ecx,0x88
	call CAvatar::IsRidingTamedMob
	test eax,eax
	je Block23

 Block20:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_tamedmob
	add esp,4
	test eax,eax
	jne Block22

 Block21:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_saddle
	add esp,4
	test eax,eax
	je Block23

 Block22:
	mov ecx,ebx
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx edx,ax
	push edx
	push 0x3EC
	call get_novice_skill_as_race
	mov ecx,dword ptr [esp+0x20]
	add esp,8
	push eax
	call CUserLocal::SendSkillCancelRequest
	jmp Block9

 Block23:
	mov ecx,dword ptr [esp+0x48]
	add ecx,0x3538
	call ForcedStat::IsForced
	test eax,eax
	je Block25

 Block24:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x383
	push eax
	jmp Block8

 Block25:
	mov eax,dword ptr [ebp+0xC]
	cmp eax,0x12
	jne Block63

 Block26:
	mov ecx,edi
	call GW_ItemSlotBase::IsCashItem
	test eax,eax
	jne Block30

 Block27:
	mov eax,dword ptr [ebx+0x195]
	test eax,eax
	je Block30

 Block28:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	mov edi,eax
	test edi,edi
	je Block9

 Block29:
	mov ecx,dword ptr [esp+0x38]
	add ecx,0xC
	call TSecType<long>::GetData
	push eax
	mov ecx,edi
	call CItemInfo::EQUIPITEM::IsItemSuitedForTamingMob
	test eax,eax
	je Block9

 Block30:
	mov ecx,dword ptr [esp+0x38]
	call GW_ItemSlotBase::IsCashItem
	test eax,eax
	je Block35

 Block31:
	mov eax,dword ptr [ebx+0x375]
	test eax,eax
	je Block35

 Block32:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	mov edi,eax
	test edi,edi
	je Block9

 Block33:
	mov ecx,dword ptr [esp+0x38]
	add ecx,0xC

 Block34:
	call TSecType<long>::GetData
	push eax
	mov ecx,edi
	call CItemInfo::EQUIPITEM::IsItemSuitedForTamingMob
	test eax,eax
	je Block9

 Block35:
	mov edi,dword ptr [esp+0x28]
	push edi
	call is_couple_equip_item
	add esp,4
	test eax,eax
	je Block41

 Block36:
	mov edi,offset _D_G_ANRINGBODYPART

 Block37:
	mov eax,dword ptr [edi]
	mov eax,dword ptr [ebx+eax*8+0x2DD]
	test eax,eax
	je Block39

 Block38:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	call is_couple_equip_item
	add esp,4
	test eax,eax
	jne Block73

 Block39:
	add edi,4
	cmp edi,offset _D_G_ANPETABILBODYP
	jl Block37

 Block40:
	mov edi,dword ptr [esp+0x28]

 Block41:
	push edi
	call is_friendship_equip_item
	add esp,4
	test eax,eax
	je Block47

 Block42:
	mov edi,offset _D_G_ANRINGBODYPART
	lea esp,[esp]

 Block43:
	mov eax,dword ptr [edi]
	mov eax,dword ptr [ebx+eax*8+0x2DD]
	test eax,eax
	je Block45

 Block44:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	call is_friendship_equip_item
	add esp,4
	test eax,eax
	jne Block74

 Block45:
	add edi,4
	cmp edi,offset _D_G_ANPETABILBODYP
	jl Block43

 Block46:
	mov edi,dword ptr [esp+0x28]

 Block47:
	push edi
	call is_wedding_ring_item
	add esp,4
	test eax,eax
	je Block54

 Block48:
	mov esi,dword ptr [ebp+0xC]
	mov edi,offset _D_G_ANRINGBODYPART
	lea ebx,[ebx]

 Block49:
	mov eax,dword ptr [edi]
	mov eax,dword ptr [ebx+eax*8+0xFD]
	test eax,eax
	je Block52

 Block50:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	call is_wedding_ring_item
	add esp,4
	test eax,eax
	je Block52

 Block51:
	cmp esi,dword ptr [edi]
	jne Block75

 Block52:
	add edi,4
	cmp edi,offset _D_G_ANPETABILBODYP
	jl Block49

 Block53:
	mov edi,dword ptr [esp+0x28]

 Block54:
	push edi
	call is_adventure_ring_item
	add esp,4
	test eax,eax
	je Block61

 Block55:
	mov esi,dword ptr [ebp+0xC]
	mov edi,offset _D_G_ANRINGBODYPART
	mov edi,edi

 Block56:
	mov eax,dword ptr [edi]
	mov eax,dword ptr [ebx+eax*8+0xFD]
	test eax,eax
	je Block59

 Block57:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	call is_adventure_ring_item
	add esp,4
	test eax,eax
	je Block59

 Block58:
	cmp esi,dword ptr [edi]
	jne Block76

 Block59:
	add edi,4
	cmp edi,offset _D_G_ANPETABILBODYP
	jl Block56

 Block60:
	mov edi,dword ptr [esp+0x28]

 Block61:
	mov eax,dword ptr [ebx+0x155]
	test eax,eax
	je Block77

 Block62:
	add eax,0xC
	jmp Block78

 Block63:
	cmp eax,0x13
	jne Block35

 Block64:
	mov ecx,edi
	call GW_ItemSlotBase::IsCashItem
	test eax,eax
	jne Block69

 Block65:
	mov esi,dword ptr [ebx+0x18D]
	test esi,esi
	je Block69

 Block66:
	mov ecx,edi
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	mov edi,eax
	test edi,edi
	je Block9

 Block67:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	push eax
	mov ecx,edi
	call CItemInfo::EQUIPITEM::IsItemSuitedForTamingMob
	test eax,eax
	je Block9

 Block68:
	mov edi,dword ptr [esp+0x38]

 Block69:
	mov ecx,edi
	call GW_ItemSlotBase::IsCashItem
	test eax,eax
	je Block35

 Block70:
	mov esi,dword ptr [ebx+0x36D]
	test esi,esi
	je Block35

 Block71:
	mov ecx,dword ptr [esp+0x38]
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	mov edi,eax
	test edi,edi
	je Block9

 Block72:
	lea ecx,[esi+0xC]
	jmp Block34

 Block73:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x378
	jmp Block7

 Block74:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x379
	push edx
	jmp Block8

 Block75:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x10BC
	push eax
	jmp Block8

 Block76:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x165A
	jmp Block7

 Block77:
	push 0
	lea ecx,[esp+0x20]
	call TSecType<long>::_ctor_1
	mov dword ptr [esp+0x5B0],0
	mov dword ptr [esp+0x14],1

 Block78:
	mov ecx,eax
	call TSecType<long>::GetData
	test byte ptr [esp+0x14],1
	mov esi,eax
	mov dword ptr [esp+0x5B0],0xFFFFFFFF
	je Block81

 Block79:
	mov eax,dword ptr [esp+0x24]
	and dword ptr [esp+0x14],0xFFFFFFFE
	test eax,eax
	je Block81

 Block80:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block81:
	mov eax,dword ptr [ebp+0xC]
	cmp eax,0xB
	jne Block99

 Block82:
	push edi
	call is_weapon_sticker
	add esp,4
	push edi
	test eax,eax
	je Block87

 Block83:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetEquipItem
	test esi,esi
	jne Block85

 Block84:
	push esi
	push esi
	push esi
	push esi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x37A
	push edx
	jmp Block8

 Block85:
	push esi
	mov ecx,eax
	call CItemInfo::EQUIPITEM::IsAbleToStickWithWeapon
	test eax,eax
	jne Block110

 Block86:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x37E
	push eax
	jmp Block8

 Block87:
	call is_skill_effect_weapon
	add esp,4
	test eax,eax
	jne Block110

 Block88:
	mov eax,dword ptr [ebx+0x335]
	test eax,eax
	je Block90

 Block89:
	add eax,0xC
	jmp Block91

 Block90:
	push 0
	lea ecx,[esp+0x20]
	call TSecType<long>::_ctor_1
	or dword ptr [esp+0x14],2
	mov dword ptr [esp+0x5B0],1

 Block91:
	mov ecx,eax
	call TSecType<long>::GetData
	test byte ptr [esp+0x14],2
	mov esi,eax
	mov dword ptr [esp+0x5B0],0xFFFFFFFF
	je Block94

 Block92:
	mov eax,dword ptr [esp+0x24]
	and dword ptr [esp+0x14],0xFFFFFFFD
	test eax,eax
	je Block94

 Block93:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block94:
	push esi
	call is_weapon_sticker
	add esp,4
	test eax,eax
	je Block110

 Block95:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push esi
	call CItemInfo::GetEquipItem
	test eax,eax
	jne Block97

 Block96:
	push 0x22000006
	lea ecx,[esp+0x40]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x3C]
	push offset CTerminateException::THROW_INFO
	lea edx,[esp+0x4C]
	push edx
	mov dword ptr [esp+0x50],ecx
	call _CxxThrowException

 Block97:
	push edi
	mov ecx,eax
	call CItemInfo::EQUIPITEM::IsAbleToStickWithWeapon
	test eax,eax
	jne Block110

 Block98:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x37F
	push eax
	jmp Block8

 Block99:
	cmp eax,0xA
	jne Block110

 Block100:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edi
	call CItemInfo::IsCashItem_1
	test eax,eax
	je Block110

 Block101:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edi
	call CItemInfo::GetEquipItem
	mov eax,dword ptr [ebx+0x14D]
	test eax,eax
	je Block103

 Block102:
	add eax,0xC
	jmp Block104

 Block103:
	push 0
	lea ecx,[esp+0x20]
	call TSecType<long>::_ctor_1
	or dword ptr [esp+0x14],4
	mov dword ptr [esp+0x5B0],2

 Block104:
	mov ecx,eax
	call TSecType<long>::GetData
	test byte ptr [esp+0x14],4
	mov esi,eax
	mov dword ptr [esp+0x5B0],0xFFFFFFFF
	je Block107

 Block105:
	mov eax,dword ptr [esp+0x24]
	and dword ptr [esp+0x14],0xFFFFFFFB
	test eax,eax
	je Block107

 Block106:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block107:
	test esi,esi
	je Block109

 Block108:
	movzx ecx,word ptr [ebx+0xF7]
	push ecx
	mov ecx,ebx
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx edx,ax
	push edx
	call is_dual_job_born
	add esp,8
	test eax,eax
	je Block110

 Block109:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x37B
	push eax
	jmp Block8

 Block110:
	mov ecx,dword ptr [esp+0x38]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::IsCashItem_0
	mov esi,eax
	test esi,esi
	je Block112

 Block111:
	mov eax,0xFFFFFF9C
	sub eax,dword ptr [ebp+0xC]
	jmp Block113

 Block112:
	mov eax,dword ptr [ebp+0xC]
	neg eax

 Block113:
	mov edi,dword ptr [esp+0x44]
	push eax
	push 1
	lea edx,[esp+0x24]
	push edx
	mov ecx,edi
	mov dword ptr [esp+0x70],eax
	call CharacterData::GetItem
	mov ebx,dword ptr [eax+4]
	lea ecx,[esp+0x1C]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	mov dword ptr [esp+0x40],0
	lea eax,[edi+0x2D9]
	test esi,esi
	jne Block115

 Block114:
	lea eax,[edi+0xF9]

 Block115:
	mov ecx,dword ptr [esp+0x28]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetExclusiveEquipItemBodyPart
	mov edi,eax
	test edi,edi
	je Block121

 Block116:
	test ebx,ebx
	je Block118

 Block117:
	mov ecx,dword ptr [esp+0x44]
	push 1
	call CharacterData::FindEmptySlotPosition
	test eax,eax
	je Block9

 Block118:
	test esi,esi
	je Block120

 Block119:
	mov eax,0xFFFFFF9C
	sub eax,edi
	mov dword ptr [esp+0x40],eax
	jmp Block121

 Block120:
	neg edi
	mov dword ptr [esp+0x40],edi

 Block121:
	mov esi,dword ptr [esp+0x48]
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push offset ZRef<GW_ItemSlotBase>::_ctor_default
	push 0x3C
	push 8
	lea edx,[esp+0x154]
	push edx
	add esi,0x2148
	call __eh_vector_ctor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push offset ZRef<GW_ItemSlotBase>::_ctor_default
	push 0x3C
	push 8
	lea eax,[esp+0x334]
	push eax
	mov dword ptr [esp+0x5C4],3
	call __eh_vector_ctor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push offset ZRef<GW_ItemSlotBase>::_ctor_default
	push 4
	push 8
	lea ecx,[esp+0x78]
	push ecx
	mov byte ptr [esp+0x5C4],4
	call __eh_vector_ctor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push offset ZRef<GW_ItemSlotBase>::_ctor_default
	push 5
	push 8
	lea edx,[esp+0x9C]
	push edx
	mov byte ptr [esp+0x5C4],5
	call __eh_vector_ctor_iterator
	mov dword ptr [esp+0x20],0
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [esp+0x5B0],7
	cmp eax,0xE
	jne Block123

 Block122:
	mov ecx,dword ptr [esp+0x18]
	push 0
	lea eax,[esp+0x30]
	push eax
	call CUser::GetActivePetItemSlot
	mov byte ptr [esp+0x5B0],8
	jmp Block127

 Block123:
	cmp eax,0x1E
	jne Block125

 Block124:
	push 1
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	call CUser::GetActivePetItemSlot
	mov byte ptr [esp+0x5B0],9
	jmp Block127

 Block125:
	cmp eax,0x26
	jne Block128

 Block126:
	mov ecx,dword ptr [esp+0x18]
	push 2
	lea edx,[esp+0x30]
	push edx
	call CUser::GetActivePetItemSlot
	mov byte ptr [esp+0x5B0],0xA

 Block127:
	push eax
	lea ecx,[esp+0x20]
	call ZRef<GW_ItemSlotPet>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x5B0],7
	call ZRef<GW_ItemSlotPet>::~ZRef<GW_ItemSlotPet>

 Block128:
	push offset ZRef<GW_ItemSlotPet>::~ZRef<GW_ItemSlotPet>
	push offset ZRef<GW_ItemSlotPet>::_ctor_default
	push 3
	push 8
	lea eax,[esp+0x5C]
	push eax
	call __eh_vector_ctor_iterator
	mov byte ptr [esp+0x5B0],0xB
	xor edi,edi
	lea ebx,[esp+0x4C]
	lea ebx,[ebx]

 Block129:
	push edi
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	call CUser::GetActivePetItemSlot
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x5B4],0xC
	call ZRef<GW_ItemSlotPet>::op_assign_copy
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x5B0],0xB
	call ZRef<GW_ItemSlotPet>::~ZRef<GW_ItemSlotPet>
	inc edi
	add ebx,8
	cmp edi,3
	jl Block129

 Block130:
	mov edx,dword ptr [esp+0x40]
	mov eax,dword ptr [esp+0x64]
	mov ecx,dword ptr [esi+0x614]
	push edx
	push eax
	push ecx
	lea edx,[esi+0x60C]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	lea eax,[esp+0x98]
	push eax
	lea ecx,[esp+0x78]
	push ecx
	lea edx,[esp+0x338]
	push edx
	mov edx,dword ptr [esp+0x5C]
	lea eax,[esp+0x15C]
	push eax
	lea ecx,[esp+0x68]
	push ecx
	push edx
	call get_real_equip
	add esp,0x24
	lea ecx,[esp+0xCC]
	call BasicStat::Clear
	lea ecx,[esp+0x504]
	call ForcedStat::Clear
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	xor edi,edi
	mov dword ptr [esp+0x3C],edi
	mov dword ptr [esp+0x40],edi
	cmp ecx,edi
	je Block133

 Block131:
	lea eax,[esp+0x2C]
	push eax
	call CUserLocal::GetPassiveSkillData
	or dword ptr [esp+0x14],8
	cmp dword ptr [eax+4],edi
	je Block133

 Block132:
	mov bl,1
	jmp Block134

 Block133:
	xor bl,bl

 Block134:
	test byte ptr [esp+0x14],8
	je Block136

 Block135:
	lea ecx,[esp+0x2C]
	call ZRef<PassiveSkillData>::~ZRef<PassiveSkillData>

 Block136:
	test bl,bl
	je Block138

 Block137:
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	call CUserLocal::GetPassiveSkillData
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [eax]
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x3C],edx
	call ZRef<PassiveSkillData>::~ZRef<PassiveSkillData>
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	lea eax,[esp+0x2C]
	push eax
	call CUserLocal::GetPassiveSkillData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x40],ecx
	lea ecx,[esp+0x2C]
	call ZRef<PassiveSkillData>::~ZRef<PassiveSkillData>

 Block138:
	mov edx,dword ptr [esi+0x1230]
	push edx
	lea eax,[esi+0x1228]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x11C4]
	push ecx
	lea edx,[esi+0x11BC]
	push edx
	mov edi,eax
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,eax
	mov eax,dword ptr [esi+0x114C]
	push eax
	lea ecx,[esi+0x1144]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0xFC0]
	mov dword ptr [esp+0x2C],eax
	push edx
	lea eax,[esi+0xFB8]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0xF90]
	push ecx
	lea edx,[esi+0xF88]
	push edx
	mov dword ptr [esp+0xB0],eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x38],eax
	mov eax,dword ptr [esi+0x614]
	push eax
	lea ecx,[esi+0x60C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0x74]
	add esp,0x30
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x38],eax
	call SecondaryStat::GetJaguarRidingMaxHPUp
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x14]
	push eax
	mov eax,dword ptr [esp+0x44]
	push eax
	mov eax,dword ptr [esp+0x90]
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	push edi
	push ebx
	push edx
	mov edx,dword ptr [esp+0x4C]
	push eax
	push ecx
	push edx
	push 0
	push 0
	lea eax,[esp+0xB8]
	push eax
	lea ecx,[esp+0x98]
	push ecx
	lea edx,[esp+0x358]
	push edx
	mov edx,dword ptr [esp+0x7C]
	lea eax,[esp+0x17C]
	push eax
	lea ecx,[esp+0x540]
	push ecx
	push edx
	lea ecx,[esp+0x110]
	call BasicStat::SetFrom
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	mov esi,eax
	mov eax,dword ptr [ebp+0xC]
	add eax,0xFFFFFFF2
	cmp eax,0x22
	ja Block171

 Block139:
	movzx ecx,byte ptr [eax+_SUB_1043E0_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block140
cmp ECX, 1
je Block153
cmp ECX, 2
je Block147
cmp ECX, 3
je Block166
cmp ECX, 4
je Block158
cmp ECX, 5
je Block156
cmp ECX, 6
je Block160
cmp ECX, 7
je Block149
cmp ECX, 8
je Block167
cmp ECX, 9
je Block157
cmp ECX, 10
je Block165
cmp ECX, 11
je Block151
cmp ECX, 12
je Block168
cmp ECX, 13
je Block171


 Block140:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block144

 Block141:
	test esi,esi
	je Block144

 Block142:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	mov ecx,esi
	call CItemInfo::EQUIPITEM::IsItemSuitedForPet
	test eax,eax

 Block143:
	jne Block171

 Block144:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x385

 Block145:
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block146:
	push offset ZRef<GW_ItemSlotPet>::~ZRef<GW_ItemSlotPet>
	push 3
	push 8
	lea eax,[esp+0x58]
	push eax
	mov byte ptr [esp+0x5C0],7
	call __eh_vector_dtor_iterator
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x5B0],6
	call ZRef<GW_ItemSlotPet>::~ZRef<GW_ItemSlotPet>
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 5
	push 8
	lea ecx,[esp+0x98]
	push ecx
	mov byte ptr [esp+0x5C0],5
	call __eh_vector_dtor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 4
	push 8
	lea edx,[esp+0x74]
	push edx
	mov byte ptr [esp+0x5C0],4
	call __eh_vector_dtor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 0x3C
	push 8
	lea eax,[esp+0x330]
	push eax
	mov byte ptr [esp+0x5C0],3
	call __eh_vector_dtor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 0x3C
	push 8
	lea ecx,[esp+0x150]
	push ecx
	mov dword ptr [esp+0x5C0],0xFFFFFFFF
	call __eh_vector_dtor_iterator
	jmp Block9

 Block147:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edx+0x2E44]
	cmp dword ptr [eax+4],0
	jne Block171

 Block148:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x384
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	push offset ZRef<GW_ItemSlotPet>::~ZRef<GW_ItemSlotPet>
	push 3
	push 8
	lea edx,[esp+0x58]
	push edx
	mov byte ptr [esp+0x5C0],7
	call __eh_vector_dtor_iterator
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x5B0],6
	call ZRef<GW_ItemSlotPet>::~ZRef<GW_ItemSlotPet>
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 5
	push 8
	lea eax,[esp+0x98]
	push eax
	mov byte ptr [esp+0x5C0],5
	call __eh_vector_dtor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 4
	push 8
	lea ecx,[esp+0x74]
	push ecx
	mov byte ptr [esp+0x5C0],4
	call __eh_vector_dtor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 0x3C
	push 8
	lea edx,[esp+0x330]
	push edx
	mov byte ptr [esp+0x5C0],3
	call __eh_vector_dtor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 0x3C
	push 8
	lea eax,[esp+0x150]
	push eax
	mov dword ptr [esp+0x5C0],0xFFFFFFFF
	call __eh_vector_dtor_iterator
	jmp Block9

 Block149:
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [ecx+0x2E44]
	cmp dword ptr [edx+0xC],0
	jne Block171

 Block150:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x384
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	push offset ZRef<GW_ItemSlotPet>::~ZRef<GW_ItemSlotPet>
	push 3
	push 8
	lea ecx,[esp+0x58]
	push ecx
	mov byte ptr [esp+0x5C0],7
	call __eh_vector_dtor_iterator
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x5B0],6
	call ZRef<GW_ItemSlotPet>::~ZRef<GW_ItemSlotPet>
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 5
	push 8
	lea edx,[esp+0x98]
	push edx
	mov byte ptr [esp+0x5C0],5
	call __eh_vector_dtor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 4
	push 8
	lea eax,[esp+0x74]
	push eax
	mov byte ptr [esp+0x5C0],4
	call __eh_vector_dtor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 0x3C
	push 8
	lea ecx,[esp+0x330]
	push ecx
	mov byte ptr [esp+0x5C0],3
	call __eh_vector_dtor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 0x3C
	push 8
	lea edx,[esp+0x150]
	push edx
	mov dword ptr [esp+0x5C0],0xFFFFFFFF
	call __eh_vector_dtor_iterator
	jmp Block9

 Block151:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0x2E44]
	cmp dword ptr [ecx+0x14],0
	jne Block171

 Block152:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x384
	jmp Block145

 Block153:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edx+0x2E44]
	mov eax,dword ptr [eax+4]

 Block154:
	test eax,eax
	je Block162

 Block155:
	mov ecx,dword ptr [eax+0x88]
	cmp dword ptr [ecx+0x10],0
	jmp Block143

 Block156:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edx+0x2E44]
	mov eax,dword ptr [eax+0xC]
	jmp Block154

 Block157:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edx+0x2E44]
	mov eax,dword ptr [eax+0x14]
	jmp Block154

 Block158:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edx+0x2E44]
	mov eax,dword ptr [eax+4]
	test eax,eax
	je Block162

 Block159:
	mov ecx,dword ptr [eax+0x88]
	cmp dword ptr [ecx+0x14],0
	jmp Block143

 Block160:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edx+0x2E44]
	mov eax,dword ptr [eax+0xC]

 Block161:
	test eax,eax
	jne Block159

 Block162:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x384

 Block163:
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block164:
	push offset ZRef<GW_ItemSlotPet>::~ZRef<GW_ItemSlotPet>
	push 3
	push 8
	lea edx,[esp+0x58]
	push edx
	mov byte ptr [esp+0x5C0],7
	call __eh_vector_dtor_iterator
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x5B0],6
	call ZRef<GW_ItemSlotPet>::~ZRef<GW_ItemSlotPet>
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 5
	push 8
	lea eax,[esp+0x98]
	push eax
	mov byte ptr [esp+0x5C0],5
	call __eh_vector_dtor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 4
	push 8
	lea ecx,[esp+0x74]
	push ecx
	mov byte ptr [esp+0x5C0],4
	call __eh_vector_dtor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 0x3C
	push 8
	lea edx,[esp+0x330]
	push edx
	mov byte ptr [esp+0x5C0],3
	call __eh_vector_dtor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 0x3C
	push 8
	lea eax,[esp+0x150]
	push eax
	mov dword ptr [esp+0x5C0],0xFFFFFFFF
	call __eh_vector_dtor_iterator
	jmp Block9

 Block165:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edx+0x2E44]
	mov eax,dword ptr [eax+0x14]
	jmp Block161

 Block166:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edx+0x2E44]
	mov ecx,dword ptr [eax+4]
	jmp Block169

 Block167:
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [ecx+0x2E44]
	mov ecx,dword ptr [edx+0xC]
	jmp Block169

 Block168:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0x2E44]
	mov ecx,dword ptr [ecx+0x14]

 Block169:
	test ecx,ecx
	je Block171

 Block170:
	call CPet::BeginItemSoltChange

 Block171:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [eax+0xF5]
	add eax,0x49
	lea edx,[esp+0x144]
	push edx
	push ecx
	add eax,0xA4
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x2C]
	add esp,8
	push eax
	push edx
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax+4],ecx
	test ecx,ecx
	je Block173

 Block172:
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block173:
	mov eax,dword ptr [esp+0x13C]
	push eax
	lea ecx,[esp+0x138]
	push ecx
	mov byte ptr [esp+0x5CC],0xD
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0x138]
	mov esi,eax
	push edx
	lea eax,[esp+0x134]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x134]
	push ecx
	lea edx,[esp+0x130]
	push edx
	mov edi,eax
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,eax
	mov eax,dword ptr [esp+0x130]
	push eax
	lea ecx,[esp+0x12C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0x12C]
	mov dword ptr [esp+0x68],eax
	push edx
	lea eax,[esp+0x128]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x128]
	push ecx
	lea edx,[esp+0x124]
	push edx
	mov dword ptr [esp+0x54],eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0xCC],eax
	mov eax,dword ptr [esp+0x124]
	push eax
	lea ecx,[esp+0x120]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0x120]
	mov dword ptr [esp+0x88],eax
	push edx
	lea eax,[esp+0x11C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov edx,dword ptr [esp+0x88]
	add esp,0x40
	push esi
	mov esi,dword ptr [esp+0x5C]
	push edi
	push ebx
	push edx
	mov edx,dword ptr [esp+0xAC]
	mov dword ptr [esp+0x38],ecx
	movzx ecx,word ptr [esi+0xF7]
	mov dword ptr [esp+0x64],eax
	mov eax,dword ptr [esp+0x34]
	push eax
	push ecx
	push edx
	mov ecx,esi
	call CharacterData::GetIncLevel
	add eax,dword ptr [esp+0x6C]
	mov ecx,dword ptr [esp+0x44]
	push eax
	mov eax,dword ptr [esp+0x74]
	push eax
	mov byte ptr [esp+0x5E8],0xB
	call CItemInfo::IsAbleToEquip
	test eax,eax
	jne Block197

 Block174:
	mov ecx,dword ptr [esp+0xD4]
	push ecx
	lea edx,[esp+0xD0]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov edi,dword ptr [esp+0x30]
	push eax
	push 0xE
	push edi
	call is_correct_bodypart
	add esp,0x14
	test eax,eax
	je Block185

 Block175:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edi
	call CItemInfo::GetEquipItem
	mov edi,dword ptr [esp+0x20]
	mov ebx,eax
	test ebx,ebx
	je Block178

 Block176:
	test edi,edi
	je Block183

 Block177:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	push eax
	mov ecx,ebx
	call CItemInfo::EQUIPITEM::IsItemSuitedForPet
	test eax,eax
	jne Block184

 Block178:
	test edi,edi
	je Block183

 Block179:
	push 0
	push 0
	push 0
	push 0
	lea eax,[esp+0x44]
	push 0x381
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x4C],0
	mov eax,dword ptr [eax]
	add edi,0x28
	push edi
	push eax
	lea ecx,[esp+0x54]
	push ecx
	mov byte ptr [esp+0x5CC],0xF
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push eax
	call ZXString<char>::_ctor_copy
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x50]
	add esp,0x14
	mov byte ptr [esp+0x5B0],0xE
	test eax,eax
	je Block181

 Block180:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block181:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x5B0],0xB
	test eax,eax
	je Block146

 Block182:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block146

 Block183:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x382
	jmp Block145

 Block184:
	mov edi,dword ptr [esp+0x28]

 Block185:
	push edi
	call get_weapon_type
	add esp,4
	cmp eax,0x22
	jne Block193

 Block186:
	movzx edx,word ptr [esi+0xF7]
	push edx
	mov ecx,esi
	call GW_CharacterStat::_ZtlSecureGet_nJob
	cwde
	push eax
	call is_dual_job_born
	add esp,8
	test eax,eax
	jne Block188

 Block187:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x16CF
	jmp Block163

 Block188:
	mov ecx,esi
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx ecx,ax
	push ecx
	call is_dual_job
	add esp,4
	test eax,eax
	jne Block190

 Block189:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x16D0
	jmp Block145

 Block190:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block193

 Block191:
	mov eax,dword ptr [eax+0x58C]
	push eax
	call get_weapon_type
	add esp,4
	cmp eax,0x21
	je Block193

 Block192:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x165B
	jmp Block145

 Block193:
	push edi
	call is_shield
	add esp,4
	test eax,eax
	je Block196

 Block194:
	movzx edx,word ptr [esi+0xF7]
	push edx
	mov ecx,esi
	call GW_CharacterStat::_ZtlSecureGet_nJob
	cwde
	push eax
	call is_dual_job_born
	add esp,8
	test eax,eax
	je Block196

 Block195:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x16D1
	jmp Block163

 Block196:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x376
	jmp Block163

 Block197:
	mov eax,dword ptr [ebp+0xC]
	mov ebx,dword ptr [esp+0x38]
	cmp eax,0x12
	jne Block215

 Block198:
	mov edi,dword ptr [esi+0x18D]
	mov ecx,ebx
	call GW_ItemSlotBase::IsCashItem
	test eax,eax
	je Block201

 Block199:
	test edi,edi
	jne Block201

 Block200:
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x37C
	jmp Block163

 Block201:
	mov ecx,ebx
	call GW_ItemSlotBase::IsCashItem
	test eax,eax
	je Block203

 Block202:
	add esi,0x2D9
	jmp Block204

 Block203:
	add esi,0xF9

 Block204:
	mov eax,dword ptr [esi+0x9C]
	test eax,eax
	je Block210

 Block205:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	mov esi,eax
	test esi,esi
	je Block207

 Block206:
	lea ecx,[ebx+0xC]
	call TSecType<long>::GetData
	push eax
	mov ecx,esi
	call CItemInfo::EQUIPITEM::IsItemSuitedForTamingMob
	test eax,eax
	jne Block210

 Block207:
	lea ecx,[esp+0x34]
	push 0x15BF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x5B0],0x10

 Block208:
	push 0xC
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x3C]
	add esp,8
	mov byte ptr [esp+0x5B0],0xB
	test eax,eax
	je Block164

 Block209:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block164

 Block210:
	test edi,edi
	je Block226

 Block211:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	push eax
	call is_evan_dragon_riding_item
	add esp,4
	test eax,eax
	je Block226

 Block212:
	mov ecx,ebx
	call GW_ItemSlotBase::IsCashItem
	test eax,eax
	jne Block226

 Block213:
	lea ecx,[ebx+0xC]
	call TSecType<long>::GetData
	push eax
	call is_evan_dragon_riding_item
	add esp,4
	test eax,eax
	jne Block226

 Block214:
	lea ecx,[esp+0x34]
	push 0xF13
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x5B0],0x11
	jmp Block208

 Block215:
	cmp eax,0x13
	jne Block226

 Block216:
	mov ecx,ebx
	call GW_ItemSlotBase::IsCashItem
	test eax,eax
	je Block219

 Block217:
	cmp dword ptr [esi+0x195],0
	jne Block219

 Block218:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x37D
	jmp Block163

 Block219:
	mov ecx,ebx
	call GW_ItemSlotBase::IsCashItem
	test eax,eax
	je Block221

 Block220:
	add esi,0x2D9
	jmp Block222

 Block221:
	add esi,0xF9

 Block222:
	mov edi,dword ptr [esi+0x94]
	test edi,edi
	je Block226

 Block223:
	lea ecx,[ebx+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	mov esi,eax
	test esi,esi
	je Block225

 Block224:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	push eax
	mov ecx,esi
	call CItemInfo::EQUIPITEM::IsItemSuitedForTamingMob
	test eax,eax
	jne Block226

 Block225:
	lea ecx,[esp+0x34]
	push 0x15BF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x5B0],0x12
	jmp Block208

 Block226:
	mov ecx,dword ptr [esp+0x28]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::IsBindedWhenEquiped
	test eax,eax
	je Block229

 Block227:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0x10]
	mov ecx,ebx
	call eax
	test eax,eax
	jne Block229

 Block228:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x375
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,7
	je Block164

 Block229:
	mov ecx,dword ptr [esp+0x64]
	mov edx,dword ptr [ebp+8]
	push 0xFFFFFFFF
	push ecx
	mov ecx,dword ptr [esp+0x50]
	push edx
	push 1
	call CWvsContext::SendChangeSlotPositionRequest
	push offset ZRef<GW_ItemSlotPet>::~ZRef<GW_ItemSlotPet>
	push 3
	push 8
	lea eax,[esp+0x58]
	push eax
	mov byte ptr [esp+0x5C0],7
	call __eh_vector_dtor_iterator
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x5B0],6
	call ZRef<GW_ItemSlotPet>::~ZRef<GW_ItemSlotPet>
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 5
	push 8
	lea ecx,[esp+0x98]
	push ecx
	mov byte ptr [esp+0x5C0],5
	call __eh_vector_dtor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 4
	push 8
	lea edx,[esp+0x74]
	push edx
	mov byte ptr [esp+0x5C0],4
	call __eh_vector_dtor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 0x3C
	push 8
	lea eax,[esp+0x330]
	push eax
	mov byte ptr [esp+0x5C0],3
	call __eh_vector_dtor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 0x3C
	push 8
	lea ecx,[esp+0x150]
	push ecx
	mov dword ptr [esp+0x5C0],0xFFFFFFFF
	call __eh_vector_dtor_iterator
	mov eax,1
	mov ecx,dword ptr [esp+0x5A8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 8
}
}
// CDraggableItem::PutItem
__SUB_CLASS_THIS(00100CB0, __thiscall, 84917,  CDraggableItem, int32_t, CUIEnchantDlg*) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,ecx
	cmp dword ptr [ebx+0x24],0
	je Block4

 Block1:
	mov ecx,dword ptr [ebx+0x24]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	call edx
	test eax,eax
	je Block4

 Block2:
	mov eax,dword ptr [ebx+0x24]
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFFC
	jne Block5

 Block4:
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 4

 Block5:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebp
	push esi
	lea eax,[esp+0x14]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block10

 Block6:
	push edi
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block9

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block9:
	mov dword ptr [esp+0x1C],0
	pop edi

 Block10:
	mov ecx,dword ptr [ebx+0x1C]
	mov edx,dword ptr [ebx+0x18]
	push ecx
	push edx
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebp
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block15

 Block11:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	mov ecx,dword ptr [esp+0x10]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	je Block14

 Block13:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block14:
	mov dword ptr [esp+0x10],0

 Block15:
	cmp dword ptr [ebx+0x18],1
	je Block17

 Block16:
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 4

 Block17:
	mov ecx,dword ptr [ebx+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	push 1
	push esi
	call CUIEnchantDlg::PutItem
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4
}
}
// to_petabil_item_bodypart
__SUB(000FEF60, __cdecl, 82351,  long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov ecx,dword ptr [esp+4]
	add eax,0xFFE459E0
	cmp eax,7
	ja Block24

 Block1:
	cmp EAX, 0
je Block5
cmp EAX, 1
je Block2
cmp EAX, 2
je Block8
cmp EAX, 3
je Block9
cmp EAX, 4
je Block10
cmp EAX, 5
je Block13
cmp EAX, 6
je Block16
cmp EAX, 7
je Block19


 Block2:
	mov eax,ecx
	test eax,eax
	jne Block4

 Block3:
	mov eax,0x16
	ret

 Block4:
	xor ecx,ecx
	cmp eax,1
	setne cl
	lea ecx,[ecx*8+0x21]
	mov eax,ecx
	ret

 Block5:
	mov eax,ecx
	test eax,eax
	jne Block7

 Block6:
	mov eax,0x17
	ret

 Block7:
	xor edx,edx
	cmp eax,1
	setne dl
	lea edx,[edx*8+0x22]
	mov eax,edx
	ret

 Block8:
	mov eax,0x18
	ret

 Block9:
	mov eax,0x19
	ret

 Block10:
	mov eax,ecx
	test eax,eax
	jne Block12

 Block11:
	mov eax,0x1A
	ret

 Block12:
	xor ecx,ecx
	cmp eax,1
	setne cl
	lea ecx,[ecx*8+0x23]
	mov eax,ecx
	ret

 Block13:
	mov eax,ecx
	test eax,eax
	jne Block15

 Block14:
	mov eax,0x1B
	ret

 Block15:
	xor edx,edx
	cmp eax,1
	setne dl
	lea edx,[edx*8+0x24]
	mov eax,edx
	ret

 Block16:
	mov eax,ecx
	test eax,eax
	jne Block18

 Block17:
	mov eax,0x1C
	ret

 Block18:
	xor ecx,ecx
	cmp eax,1
	setne cl
	lea ecx,[ecx*8+0x25]
	mov eax,ecx
	ret

 Block19:
	test ecx,ecx
	jne Block21

 Block20:
	lea eax,[ecx+0x2E]
	ret

 Block21:
	cmp ecx,1
	jne Block23

 Block22:
	lea eax,[ecx+0x2E]
	ret

 Block23:
	mov eax,0x30
	cmp ecx,2
	je Block25

 Block24:
	mov eax,dword ptr [ecx*4+_D_G_ANPETABILBODYP]

 Block25:
	ret
}
}
// CDraggableItem::~CDraggableItem
_SUB_EXCEPTION_HANDLER(100260)
__SUB_CLASS_THIS0(00100260, __thiscall, 84876,  CDraggableItem, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_100260
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
// CDraggableItem::WearEquipItem
__SUB_CLASS_THIS(00108620, __thiscall, 84886,  CDraggableItem, int32_t, CUIMechanicEquip*, CUIItem*, long, long) {
__asm {

 Block0:
	sub esp,0x10
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	push ebx
	mov ebx,ecx
	je Block2

 Block1:
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 0x10

 Block2:
	push 1
	call CDraggableItem::CanPerformAction
	test eax,eax
	je Block1

 Block3:
	cmp dword ptr [ebx+0x18],1
	jne Block1

 Block4:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	push edi
	lea eax,[esp+0xC]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0xC]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [ebx+0x1C]
	push ecx
	push 1
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x14]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	jne Block6

 Block5:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 0x10

 Block6:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x28]
	push ebp
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	call CUIMechanicEquip::GetBodyPartFromPoint
	mov ebp,eax
	test ebp,ebp
	je Block10

 Block7:
	lea edx,[ebp-0x44C]
	cmp edx,4
	ja Block10

 Block8:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	movzx ecx,byte ptr [esi+0x11]
	push ecx
	push ebp
	push eax
	call is_correct_bodypart
	add esp,0xC
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [ebx+0x1C]
	push ebp
	push edx
	mov ecx,ebx
	call CDraggableItem::WearEquipItem_0
	pop ebp
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 0x10

 Block10:
	pop ebp
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 0x10
}
}
// CDraggableItem::HyperModifyEquipItem
__SUB_CLASS_THIS(00103F50, __thiscall, 84896,  CDraggableItem, int32_t, long, long, long) {
__asm {

 Block0:
	sub esp,0x1C
	push ebx
	push ebp
	push esi
	push edi
	mov esi,ecx
	push 1
	mov dword ptr [esp+0x14],esi
	call CDraggableItem::CanPerformAction
	test eax,eax
	je Block16

 Block1:
	mov eax,dword ptr [esi+0x18]
	cmp eax,2
	je Block3

 Block2:
	cmp eax,5
	jne Block16

 Block3:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x1C]
	mov ebx,ecx
	push eax
	mov dword ptr [esp+0x1C],ebx
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block8

 Block4:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block5:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block7

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block7:
	mov esi,dword ptr [esp+0x10]
	mov dword ptr [esp+0x20],0

 Block8:
	cmp dword ptr [ebx+0x20B8],0
	jne Block16

 Block9:
	mov eax,dword ptr [ebx+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block16

 Block10:
	call get_update_time
	sub eax,dword ptr [ebx+0x20BC]
	cmp eax,0x1F4
	jl Block16

 Block11:
	mov edx,dword ptr [esi+0x1C]
	mov eax,dword ptr [esi+0x18]
	push edx
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebp
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x24]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test esi,esi
	je Block16

 Block12:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov ecx,esi
	call eax
	test eax,eax
	je Block17

 Block13:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push 0xD78

 Block14:
	push ecx

 Block15:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block16:
	xor eax,eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 0xC

 Block17:
	mov eax,dword ptr [esp+0x38]
	xor ebx,ebx
	sub eax,ebx
	je Block22

 Block18:
	sub eax,1
	jne Block28

 Block19:
	mov edx,dword ptr [esp+0x34]
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [TSingleton<CUIEquip>::ms_pInstance]
	push edx
	push eax
	call CUIEquip::GetBodyPartFromPoint
	cmp eax,0xE
	jne Block21

 Block20:
	mov eax,0x72

 Block21:
	neg eax
	mov ebx,eax
	jmp Block28

 Block22:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test eax,eax
	je Block25

 Block23:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x48]
	push offset CUIEnchantDlg::ms_RTTI_CUIEnchantDlg
	call eax
	test eax,eax
	je Block25

 Block24:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	jmp Block26

 Block25:
	xor eax,eax

 Block26:
	cmp dword ptr [eax+0xAF4],ebx
	jne Block16

 Block27:
	mov ebx,dword ptr [eax+0xA8]

 Block28:
	push ebx
	push 1
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebp
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x24]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test esi,esi
	je Block16

 Block29:
	lea edi,[esi+0xC]
	mov ecx,edi
	call TSecType<long>::GetData
	movzx ecx,byte ptr [ebp+0x11]
	push 0
	lea edx,[esp+0x18]
	push edx
	push ecx
	push eax
	call get_bodypart_from_item
	mov eax,dword ptr [esp+0x24]
	lea edx,[eax-0x3E8]
	add esp,0x10
	cmp edx,3
	ja Block31

 Block30:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	push 0x108B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	xor eax,eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 0xC

 Block31:
	add eax,0xFFFFFBB4
	cmp eax,4
	ja Block33

 Block32:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push 0x108B
	jmp Block14

 Block33:
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	je Block35

 Block34:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x4C],esp
	push 0x108B
	push edx
	jmp Block15

 Block35:
	mov ecx,dword ptr [esi+0x4B]
	lea eax,[esi+0x49]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	test al,al
	ja Block34

 Block36:
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	test eax,eax
	je Block16

 Block37:
	mov ecx,eax
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nTUC
	test al,al
	jne Block39

 Block38:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	push 0x108B
	push eax
	jmp Block15

 Block39:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov ecx,esi
	call eax
	test eax,eax
	je Block41

 Block40:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push 0x1160
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block16

 Block41:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [eax+0x1C]
	xor edx,edx
	cmp dword ptr [esp+0x38],edx
	sete dl
	push edx
	push ebx
	push ecx
	mov ecx,dword ptr [esp+0x24]
	call CWvsContext::SendHyperUpgradeItemUseRequest
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,0x1C
	ret 0xC
}
}
// CDraggableItem::GetOffEquipItem
_SUB_EXCEPTION_HANDLER(102E60)
__SUB_CLASS_THIS(00102E60, __thiscall, 84882,  CDraggableItem, int32_t, CUIEquip*, CUIItem*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_102E60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x57C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x590]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x48],ebx
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	mov dword ptr [esp+0x40],0
	jne Block8

 Block1:
	mov ebp,1
	push ebp
	call CDraggableItem::CanPerformAction
	test eax,eax
	je Block8

 Block2:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	lea ecx,[esp+0x54]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x48],esi
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x54]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	cmp dword ptr [esi+0x20B8],0
	jne Block8

 Block3:
	mov eax,dword ptr [esi+0x20CC]
	mov edx,dword ptr [eax+0x69]
	push edx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block8

 Block4:
	call get_update_time
	sub eax,dword ptr [esi+0x20BC]
	cmp eax,0x1F4
	jl Block8

 Block5:
	cmp dword ptr [ebx+0x18],ebp
	jne Block8

 Block6:
	mov ecx,dword ptr [esp+0x5A4]
	cmp dword ptr [ecx+0xB34],ebp
	je Block9

 Block7:
	push 0
	call CUIItem::ChangeTab
	mov eax,dword ptr [ebx+0x24]
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 0
	push ebx
	push eax
	call CWndMan::BeginDragDrop

 Block8:
	xor eax,eax
	jmp Block72

 Block9:
	mov edx,dword ptr [esp+0x5AC]
	mov eax,dword ptr [esp+0x5A8]
	push edx
	push eax
	call CUIItem::GetSlotPositionFromPoint
	mov esi,eax
	mov dword ptr [esp+0x28],esi
	test esi,esi
	je Block8

 Block10:
	mov ecx,dword ptr [ebx+0x1C]
	push ecx
	push ebp
	lea edx,[esp+0x34]
	push edx
	mov ecx,edi
	call CharacterData::GetItem
	mov ebx,dword ptr [eax+4]
	lea ecx,[esp+0x2C]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push esi
	push ebp
	lea eax,[esp+0x54]
	push eax
	mov ecx,edi
	call CharacterData::GetItem
	mov ebp,dword ptr [eax+4]
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x18],ebp
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test ebx,ebx
	je Block8

 Block11:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	add ecx,0x88
	call CAvatar::IsRidingTamedMob
	test eax,eax
	je Block16

 Block12:
	lea ebp,[ebx+0xC]
	mov ecx,ebp
	call TSecType<long>::GetData
	push eax
	call is_tamedmob
	add esp,4
	test eax,eax
	jne Block14

 Block13:
	mov ecx,ebp
	call TSecType<long>::GetData
	push eax
	call is_saddle
	add esp,4
	test eax,eax
	je Block15

 Block14:
	mov esi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov ecx,edi
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx ecx,ax
	push ecx
	push 0x3EC
	call get_novice_skill_as_race
	add esp,8
	push eax
	mov ecx,esi
	call CUserLocal::SendSkillCancelRequest
	xor eax,eax
	jmp Block72

 Block15:
	mov ebp,dword ptr [esp+0x18]

 Block16:
	mov ecx,dword ptr [esp+0x44]
	add ecx,0x3538
	call ForcedStat::IsForced
	test eax,eax
	je Block19

 Block17:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x383

 Block18:
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	xor eax,eax
	jmp Block72

 Block19:
	test ebp,ebp
	je Block71

 Block20:
	lea ecx,[ebp+0x49]
	mov dword ptr [esp+0x3C],ecx
	call GW_ItemSlotEquipBase::_ZtlSecureGet_nDurability
	test eax,eax
	je Block8

 Block21:
	lea esi,[ebx+0xC]
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_couple_equip_item
	add esp,4
	test eax,eax
	jne Block27

 Block22:
	lea ecx,[ebp+0xC]
	call TSecType<long>::GetData
	push eax
	call is_couple_equip_item
	add esp,4
	test eax,eax
	je Block27

 Block23:
	mov ebx,offset _D_G_ANRINGBODYPART
	mov edi,edi

 Block24:
	mov eax,dword ptr [ebx]
	mov eax,dword ptr [edi+eax*8+0x2DD]
	test eax,eax
	je Block26

 Block25:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	call is_couple_equip_item
	add esp,4
	test eax,eax
	jne Block41

 Block26:
	add ebx,4
	cmp ebx,offset _D_G_ANPETABILBODYP
	jl Block24

 Block27:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_friendship_equip_item
	add esp,4
	test eax,eax
	jne Block33

 Block28:
	lea ecx,[ebp+0xC]
	call TSecType<long>::GetData
	push eax
	call is_friendship_equip_item
	add esp,4
	test eax,eax
	je Block33

 Block29:
	mov ebx,offset _D_G_ANRINGBODYPART
	nop

 Block30:
	mov eax,dword ptr [ebx]
	mov eax,dword ptr [edi+eax*8+0x2DD]
	test eax,eax
	je Block32

 Block31:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	call is_friendship_equip_item
	add esp,4
	test eax,eax
	jne Block42

 Block32:
	add ebx,4
	cmp ebx,offset _D_G_ANPETABILBODYP
	jl Block30

 Block33:
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	call is_wedding_ring_item
	add esp,4
	test eax,eax
	jne Block39

 Block34:
	lea ecx,[ebp+0xC]
	call TSecType<long>::GetData
	push eax
	call is_wedding_ring_item
	add esp,4
	test eax,eax
	je Block39

 Block35:
	mov ebx,offset _D_G_ANRINGBODYPART
	nop

 Block36:
	mov eax,dword ptr [ebx]
	mov eax,dword ptr [edi+eax*8+0x2DD]
	test eax,eax
	je Block38

 Block37:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	call is_wedding_ring_item
	add esp,4
	test eax,eax
	jne Block43

 Block38:
	add ebx,4
	cmp ebx,offset _D_G_ANPETABILBODYP
	jl Block36

 Block39:
	mov eax,dword ptr [esp+0x48]
	mov eax,dword ptr [eax+0x1C]
	cmp eax,0xFFFFFF9C
	jge Block44

 Block40:
	mov ebx,0xFFFFFF9C
	sub ebx,eax
	mov dword ptr [esp+0x18],ebx
	jmp Block45

 Block41:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push 0x378
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	xor eax,eax
	jmp Block72

 Block42:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x379
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	xor eax,eax
	jmp Block72

 Block43:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x10BC
	jmp Block18

 Block44:
	neg eax
	mov dword ptr [esp+0x18],eax
	mov ebx,eax

 Block45:
	lea ecx,[ebp+0xC]
	call TSecType<long>::GetData
	movzx ecx,byte ptr [edi+0x11]
	push ecx
	mov esi,eax
	push ebx
	push esi
	mov dword ptr [esp+0x44],esi
	call is_correct_bodypart
	add esp,0xC
	test eax,eax
	je Block8

 Block46:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebp
	call CItemInfo::IsCashItem_0
	xor ebp,ebp
	cmp eax,ebp
	lea eax,[edi+0x2D9]
	jne Block48

 Block47:
	lea eax,[edi+0xF9]

 Block48:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push esi
	push eax
	call CItemInfo::GetExclusiveEquipItemBodyPart
	mov dword ptr [esp+0x34],eax
	cmp eax,ebp
	je Block50

 Block49:
	push 1
	mov ecx,edi
	call CharacterData::FindEmptySlotPosition
	test eax,eax
	je Block8

 Block50:
	mov esi,dword ptr [esp+0x44]
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push offset ZRef<GW_ItemSlotBase>::_ctor_default
	push 0x3C
	push 8
	lea edx,[esp+0x144]
	push edx
	add esi,0x2148
	call __eh_vector_ctor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push offset ZRef<GW_ItemSlotBase>::_ctor_default
	push 0x3C
	push 8
	lea eax,[esp+0x3C0]
	push eax
	mov dword ptr [esp+0x5AC],ebp
	call __eh_vector_ctor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push offset ZRef<GW_ItemSlotBase>::_ctor_default
	push 4
	push 8
	lea ecx,[esp+0x84]
	push ecx
	mov byte ptr [esp+0x5AC],1
	call __eh_vector_ctor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push offset ZRef<GW_ItemSlotBase>::_ctor_default
	push 5
	push 8
	lea edx,[esp+0x11C]
	push edx
	mov byte ptr [esp+0x5AC],2
	call __eh_vector_ctor_iterator
	mov dword ptr [esp+0x30],ebp
	mov byte ptr [esp+0x598],4
	cmp ebx,0xE
	jne Block52

 Block51:
	mov ecx,dword ptr [esp+0x24]
	push ebp
	lea eax,[esp+0x20]
	push eax
	call CUser::GetActivePetItemSlot
	mov byte ptr [esp+0x598],5
	jmp Block56

 Block52:
	cmp ebx,0x1E
	jne Block54

 Block53:
	push 1
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	call CUser::GetActivePetItemSlot
	mov byte ptr [esp+0x598],6
	jmp Block56

 Block54:
	cmp ebx,0x26
	jne Block57

 Block55:
	mov ecx,dword ptr [esp+0x24]
	push 2
	lea edx,[esp+0x20]
	push edx
	call CUser::GetActivePetItemSlot
	mov byte ptr [esp+0x598],7

 Block56:
	push eax
	lea ecx,[esp+0x30]
	call ZRef<GW_ItemSlotPet>::op_assign_copy
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x598],4
	call ZRef<GW_ItemSlotPet>::~ZRef<GW_ItemSlotPet>

 Block57:
	push offset ZRef<GW_ItemSlotPet>::~ZRef<GW_ItemSlotPet>
	push offset ZRef<GW_ItemSlotPet>::_ctor_default
	push 3
	push 8
	lea eax,[esp+0x6C]
	push eax
	call __eh_vector_ctor_iterator
	mov byte ptr [esp+0x598],8
	lea ebx,[esp+0x5C]
	lea ecx,[ecx]

 Block58:
	push ebp
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	call CUser::GetActivePetItemSlot
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x59C],9
	call ZRef<GW_ItemSlotPet>::op_assign_copy
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x598],8
	call ZRef<GW_ItemSlotPet>::~ZRef<GW_ItemSlotPet>
	inc ebp
	add ebx,8
	cmp ebp,3
	jl Block58

 Block59:
	mov edx,dword ptr [esp+0x34]
	mov eax,dword ptr [esp+0x18]
	push edx
	push eax
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_nBasicStatUp_
	push eax
	lea ecx,[esp+0x118]
	push ecx
	lea edx,[esp+0x84]
	push edx
	lea eax,[esp+0x3C4]
	push eax
	lea ecx,[esp+0x14C]
	push ecx
	lea edx,[esp+0x78]
	push edx
	push edi
	call get_real_equip
	add esp,0x24
	lea ecx,[esp+0x94]
	call BasicStat::Clear
	lea ecx,[esp+0x314]
	call ForcedStat::Clear
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	xor ebp,ebp
	xor ebx,ebx
	test ecx,ecx
	je Block62

 Block60:
	lea eax,[esp+0x1C]
	push eax
	call CUserLocal::GetPassiveSkillData
	lea ecx,[ebp+1]
	cmp dword ptr [eax+4],ebx
	je Block63

 Block61:
	mov byte ptr [esp+0x17],cl
	jmp Block64

 Block62:
	mov cl,byte ptr [esp+0x40]

 Block63:
	mov byte ptr [esp+0x17],0

 Block64:
	test cl,1
	je Block66

 Block65:
	lea ecx,[esp+0x1C]
	call ZRef<PassiveSkillData>::~ZRef<PassiveSkillData>

 Block66:
	cmp byte ptr [esp+0x17],0
	je Block68

 Block67:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	call CUserLocal::GetPassiveSkillData
	mov eax,dword ptr [eax+4]
	mov ebp,dword ptr [eax]
	lea ecx,[esp+0x1C]
	call ZRef<PassiveSkillData>::~ZRef<PassiveSkillData>
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	lea edx,[esp+0x1C]
	push edx
	call CUserLocal::GetPassiveSkillData
	mov eax,dword ptr [eax+4]
	mov ebx,dword ptr [eax+4]
	lea ecx,[esp+0x1C]
	call ZRef<PassiveSkillData>::~ZRef<PassiveSkillData>

 Block68:
	push edi
	mov ecx,esi
	call SecondaryStat::GetJaguarRidingMaxHPUp
	push eax
	push ebx
	push ebp
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_nMorewildMaxHP_
	push eax
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_nConversion_
	push eax
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_nSwallowMaxMP_
	push eax
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_nEMMP_
	push eax
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_nEMHP_
	push eax
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_nBasicStatUp_
	push eax
	push 0
	push 0
	lea eax,[esp+0x138]
	push eax
	lea ecx,[esp+0xA4]
	push ecx
	lea edx,[esp+0x3E4]
	push edx
	lea eax,[esp+0x16C]
	push eax
	lea ecx,[esp+0x350]
	push ecx
	push edi
	lea ecx,[esp+0xD8]
	call BasicStat::SetFrom
	mov ecx,dword ptr [esp+0x3C]
	lea edx,[esp+0x134]
	push edx
	call GW_ItemSlotEquipBase::_ZtlSecureGet_nDurability
	push eax
	mov eax,dword ptr [esp+0x40]
	push eax
	sub esp,8
	lea edx,[esp+0x40]
	mov ecx,esp
	mov dword ptr [esp+0x60],esp
	push edx
	call ZRef<GW_ItemSlotPet>::_ctor_copy
	mov eax,dword ptr [esp+0x104]
	push eax
	lea ecx,[esp+0x100]
	push ecx
	mov byte ptr [esp+0x5B4],0xA
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0x100]
	mov esi,eax
	push edx
	lea eax,[esp+0xFC]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0xFC]
	push ecx
	lea edx,[esp+0xF8]
	push edx
	mov ebx,eax
	call _ZtlSecureFuseHelper<long>::call
	mov ebp,eax
	mov eax,dword ptr [esp+0xF8]
	push eax
	lea ecx,[esp+0xF4]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0xF4]
	mov dword ptr [esp+0x6C],eax
	push edx
	lea eax,[esp+0xF0]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0xF0]
	push ecx
	lea edx,[esp+0xEC]
	push edx
	mov dword ptr [esp+0x80],eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x84],eax
	mov eax,dword ptr [esp+0xEC]
	push eax
	lea ecx,[esp+0xE8]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0xE8]
	mov dword ptr [esp+0x80],eax
	push edx
	lea eax,[esp+0xE4]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov edx,dword ptr [esp+0x8C]
	add esp,0x40
	push esi
	push ebx
	push ebp
	push edx
	mov edx,dword ptr [esp+0x64]
	mov dword ptr [esp+0x48],ecx
	movzx ecx,word ptr [edi+0xF7]
	mov dword ptr [esp+0x3C],eax
	mov eax,dword ptr [esp+0x60]
	push eax
	push ecx
	push edx
	mov ecx,edi
	call CharacterData::GetIncLevel
	add eax,dword ptr [esp+0x64]
	mov ecx,dword ptr [esp+0x54]
	push eax
	mov eax,dword ptr [esp+0x4C]
	push eax
	mov byte ptr [esp+0x5D0],8
	call CItemInfo::IsAbleToEquip
	push offset ZRef<GW_ItemSlotPet>::~ZRef<GW_ItemSlotPet>
	push 3
	mov byte ptr [esp+0x5A0],4
	push 8
	test eax,eax
	jne Block70

 Block69:
	lea ecx,[esp+0x68]
	push ecx
	call __eh_vector_dtor_iterator
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x598],3
	call ZRef<GW_ItemSlotPet>::~ZRef<GW_ItemSlotPet>
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 5
	push 8
	lea edx,[esp+0x118]
	push edx
	mov byte ptr [esp+0x5A8],2
	call __eh_vector_dtor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 4
	push 8
	lea eax,[esp+0x80]
	push eax
	mov byte ptr [esp+0x5A8],1
	call __eh_vector_dtor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 0x3C
	push 8
	lea ecx,[esp+0x3BC]
	push ecx
	mov byte ptr [esp+0x5A8],0
	call __eh_vector_dtor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 0x3C
	push 8
	lea edx,[esp+0x140]
	push edx
	mov dword ptr [esp+0x5A8],0xFFFFFFFF
	call __eh_vector_dtor_iterator
	xor eax,eax
	jmp Block72

 Block70:
	lea eax,[esp+0x68]
	push eax
	call __eh_vector_dtor_iterator
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x598],3
	call ZRef<GW_ItemSlotPet>::~ZRef<GW_ItemSlotPet>
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 5
	push 8
	lea ecx,[esp+0x118]
	push ecx
	mov byte ptr [esp+0x5A8],2
	call __eh_vector_dtor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 4
	push 8
	lea edx,[esp+0x80]
	push edx
	mov byte ptr [esp+0x5A8],1
	call __eh_vector_dtor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 0x3C
	push 8
	lea eax,[esp+0x3BC]
	push eax
	mov byte ptr [esp+0x5A8],0
	call __eh_vector_dtor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 0x3C
	push 8
	lea ecx,[esp+0x140]
	push ecx
	mov dword ptr [esp+0x5A8],0xFFFFFFFF
	call __eh_vector_dtor_iterator
	mov esi,dword ptr [esp+0x28]

 Block71:
	mov edx,dword ptr [esp+0x48]
	mov eax,dword ptr [edx+0x1C]
	mov ecx,dword ptr [esp+0x44]
	push 0xFFFFFFFF
	push esi
	push eax
	push 1
	call CWvsContext::SendChangeSlotPositionRequest
	mov eax,1

 Block72:
	mov ecx,dword ptr [esp+0x590]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x588
	ret 0x10
}
}
// CDraggableItem::CDraggableItem
_SUB_EXCEPTION_HANDLER(297EA0)
__SUB_CLASS_THIS(00297EA0, __thiscall, 84874,  CDraggableItem, void, IWzGr2DLayer*, long, long, long, IUIMsgHandler*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_297EA0
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
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [esi+0x18],eax
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esi+0x24],eax
	int 3// TODO: 	mov dword ptr [esi],offset CDraggableItem::`vftable'
	mov dword ptr [esi+0x1C],ecx
	mov dword ptr [esi+0x20],edx
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0x14
}
}
// CDraggableItem::CanPerformAction
__SUB_CLASS_THIS(001028F0, __thiscall, 84897,  CDraggableItem, int32_t, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test eax,eax
	je Block4

 Block1:
	cmp dword ptr [esp+4],0
	je Block5

 Block2:
	cmp dword ptr [eax+0x63C],0
	jle Block5

 Block3:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x116
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block4:
	xor eax,eax
	ret 4

 Block5:
	mov eax,dword ptr [eax+0x640]
	and eax,0xFFFFFFFE
	cmp eax,0x12
	jne Block7

 Block6:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x42
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	xor eax,eax
	ret 4

 Block7:
	mov eax,1
	ret 4
}
}
// CDraggableItem::WearEquipItem
__SUB_CLASS_THIS(00108550, __thiscall, 84888,  CDraggableItem, int32_t, CUIPetEquip*, CUIItem*, long, long) {
__asm {

 Block0:
	sub esp,0x10
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	push ebx
	mov ebx,ecx
	je Block2

 Block1:
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 0x10

 Block2:
	push 1
	call CDraggableItem::CanPerformAction
	test eax,eax
	je Block1

 Block3:
	cmp dword ptr [ebx+0x18],1
	jne Block1

 Block4:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	push edi
	lea eax,[esp+0xC]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0xC]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [ebx+0x1C]
	push ecx
	push 1
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x14]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	jne Block6

 Block5:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 0x10

 Block6:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x28]
	push ebp
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	call CUIPetEquip::GetPetEquipFromPoint
	mov ebp,eax
	test ebp,ebp
	je Block9

 Block7:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	movzx edx,byte ptr [esi+0x11]
	push edx
	push ebp
	push eax
	call is_correct_bodypart
	add esp,0xC
	test eax,eax
	je Block9

 Block8:
	mov eax,dword ptr [ebx+0x1C]
	push ebp
	push eax
	mov ecx,ebx
	call CDraggableItem::WearEquipItem_0
	pop ebp
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 0x10

 Block9:
	pop ebp
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 0x10
}
}
// CDraggableItem::PutItem
__SUB_CLASS_THIS(000FFD40, __thiscall, 84910,  CDraggableItem, int32_t, CItemSpeakerDlg*) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x24],0
	je Block8

 Block1:
	mov ecx,dword ptr [esi+0x24]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	call edx
	test eax,eax
	je Block4

 Block2:
	mov eax,dword ptr [esi+0x24]
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFFC
	jne Block9

 Block4:
	cmp dword ptr [esi+0x24],0
	je Block8

 Block5:
	mov ecx,dword ptr [esi+0x24]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CUIEquip::ms_RTTI_CUIEquip
	call edx
	test eax,eax
	je Block8

 Block6:
	mov eax,dword ptr [esi+0x24]
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFFC
	jne Block9

 Block8:
	xor eax,eax
	pop esi
	ret 4

 Block9:
	mov eax,dword ptr [esi+0x1C]
	mov ecx,dword ptr [esi+0x18]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x10]
	call CItemSpeakerDlg::PutItem
	pop esi
	ret 4
}
}
// CDraggableItem::PutItem
__SUB_CLASS_THIS(001021A0, __thiscall, 84923,  CDraggableItem, int32_t, CUIItemProtector*) {
__asm {

 Block0:
	sub esp,0x14
	push ebx
	push ebp
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x24],0
	push edi
	mov dword ptr [esp+0x10],esi
	je Block27

 Block1:
	mov ecx,dword ptr [esi+0x24]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CUIItem::ms_RTTI_CUIItem
	call edx
	test eax,eax
	je Block27

 Block2:
	mov eax,dword ptr [esi+0x24]
	test eax,eax
	je Block27

 Block3:
	add eax,0xFFFFFFFC
	je Block27

 Block4:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x1C]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x20]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	test eax,eax
	je Block9

 Block5:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	push edi
	call ebp
	test esi,esi
	je Block8

 Block7:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block8:
	mov esi,dword ptr [esp+0x10]
	mov dword ptr [esp+0x20],0

 Block9:
	mov ecx,dword ptr [esi+0x1C]
	mov edx,dword ptr [esi+0x18]
	push ecx
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block14

 Block10:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	mov ecx,dword ptr [esp+0x18]
	add ecx,4
	push ecx
	call ebp
	mov ecx,dword ptr [esp+0x18]
	test ecx,ecx
	je Block13

 Block12:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block13:
	mov dword ptr [esp+0x18],0

 Block14:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov ecx,esi
	call eax
	mov edi,dword ptr [ZImports::_CompareFileTime]
	test eax,eax
	je Block16

 Block15:
	push offset _D_DB_DATE_20790101__34
	lea ecx,[esi+0x20]
	push ecx
	call edi
	test eax,eax
	jge Block26

 Block16:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov ecx,esi
	call eax
	test eax,eax
	jne Block18

 Block17:
	push offset _D_DB_DATE_20790101__34
	lea ecx,[esi+0x20]
	push ecx
	call edi
	test eax,eax
	jl Block26

 Block18:
	lea edi,[esi+0xC]
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::ExpireOnLogout
	test eax,eax
	jne Block26

 Block19:
	mov edx,dword ptr [esi+0x18]
	or edx,dword ptr [esi+0x1C]
	jne Block26

 Block20:
	mov ecx,edi
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x2B73
	je Block26

 Block21:
	mov ebx,dword ptr [esp+0x10]
	cmp dword ptr [ebx+0x18],1
	je Block25

 Block22:
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	call is_javelin_item
	add esp,4
	test eax,eax
	jne Block25

 Block23:
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	call is_meso_protect_item
	add esp,4
	test eax,eax
	jne Block25

 Block24:
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	call is_pellet_item
	add esp,4
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [ebx+0x1C]
	mov edx,dword ptr [ebx+0x18]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	push edx
	push esi
	call CUIItemProtector::PutItem
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 4

 Block26:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push 0xD79
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block27:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x14
	ret 4
}
}
// CDraggableItem::MoveItemToInventory
__SUB_CLASS_THIS(00103970, __thiscall, 84938,  CDraggableItem, int32_t, CPersonalShopDlg*, CUIItem*, long, long) {
__asm {

 Block0:
	push esi
	push 1
	mov esi,ecx
	call CDraggableItem::CanPerformAction
	test eax,eax
	jne Block2

 Block1:
	xor eax,eax
	pop esi
	ret 0x10

 Block2:
	cmp dword ptr [esi+0x24],0
	je Block1

 Block3:
	mov ecx,dword ptr [esi+0x24]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CPersonalShopDlg::ms_RTTI_CPersonalShopDlg
	call edx
	test eax,eax
	je Block1

 Block4:
	mov eax,dword ptr [esi+0x24]
	test eax,eax
	je Block1

 Block5:
	add eax,0xFFFFFFFC
	je Block1

 Block6:
	mov eax,dword ptr [esi+0x18]
	push edi
	mov edi,dword ptr [esp+0x10]
	cmp dword ptr [edi+0xB34],eax
	je Block10

 Block7:
	push eax
	call get_tab_from_item_typeindex
	add esp,4
	cmp eax,4
	ja Block9

 Block8:
	push eax
	mov ecx,edi
	call CUIItem::ChangeTab
	mov eax,dword ptr [esi+0x24]
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 0
	push esi
	push eax
	call CWndMan::BeginDragDrop

 Block9:
	pop edi
	xor eax,eax
	pop esi
	ret 0x10

 Block10:
	mov ecx,dword ptr [esi+0x20]
	push ecx
	mov ecx,dword ptr [esp+0x10]
	call CPersonalShopDlg::MoveItemToInventory
	pop edi
	pop esi
	ret 0x10
}
}
